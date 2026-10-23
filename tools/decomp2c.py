#!/usr/bin/env python3
"""decomp2c.py v1 — Ghidra 伪 C → 31TU 框架 C 转换器（M4 打样）

输入: BatchDecomp.java 的输出目录（<va>_<name>.c）
输出: <outdir>/<va>_<name>.tu.c + 转换日志（未识别模式清单）

转换规则（打样范围，纯文本级）:
  R1 签名/调用站:  NS::Class::Method  →  NS__Class__Method
  R2 析构:          ~Class            →  Class__dtor
  R3 类型转义:      模板/命名空间类型  →  tpl_names.json 反查（3407 条）
                    fallback 规则: < → _L_  > → _G_  :: → __  , → _C_  * → _P_
  R4 浮点常量:      __real_HEX        →  hexfloat 字面量（4hex=float 8hex=double）
  R5 伪影保留:      undefined*/CONCAT*/SUB84/in_stack/float10/unaff_* 原样
                    （port_prelude.h 契约；unaff_* 标 TODO 人工判读）
  R6 FUN_00xxxxxx   保留（cde_fun_decls.h extern 先例）
"""
import json
import re
import struct
import sys
from pathlib import Path

ROOT = Path('/home/z/my-project')
TPL = json.load(open(ROOT / 'meta' / 'tpl_names.json'))
# 反查表: 原始 C++ 名 -> 转义名
ESC2RAW = TPL  # escaped -> raw
RAW2ESC = {v: k for k, v in TPL.items() if v != k}

# ---------- R3 类型转义 ----------

def rule_escape(name: str) -> str:
    """规则 fallback 转义（对齐 cde_types 观察到的模式）"""
    s = name
    s = s.replace(' ', '')
    s = s.replace('::', '__')
    s = s.replace('<', '_L_').replace('>', '_G_')
    s = s.replace(',', '_C_')
    s = s.replace('*', '_P_')
    return s


def esc_type(t: str) -> str:
    """转义一个类型串（可能含模板嵌套）"""
    t = t.strip()
    if not t:
        return t
    if t in RAW2ESC:
        return RAW2ESC[t]
    # 带模板: 拆外层 name<args>
    m = re.match(r'^([A-Za-z_][\w:]*)(<.*>)$', t, re.S)
    if m:
        head, args = m.group(1), m.group(2)
        inner = split_top(args[1:-1])
        esc_args = ','.join(esc_type(a) for a in inner)
        cand_head = esc_type(head)
        whole = f'{cand_head}_L_{esc_args}_G_'
        if whole in ESC2RAW or True:
            return whole
    return rule_escape(t)


def split_top(s: str):
    """按顶层逗号拆模板实参"""
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch == '<':
            depth += 1
        elif ch == '>':
            depth -= 1
        if ch == ',' and depth == 0:
            out.append(cur)
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur)
    return out

# ---------- R1/R2 标识符转义 ----------

SPECIAL = {
    'scalar_deleting_destructor': 'scalar_deleting_destructor',
}


def esc_ident(name: str) -> str:
    """函数标识符: NS::Class::Method → NS__Class__Method; ~X → X__dtor"""
    if name.startswith('~'):
        return name[1:] + '__dtor'
    if '`' in name:  # `scalar_deleting_destructor' 等 Ghidra 反引号名
        inner = name.strip('`\'')
        return SPECIAL.get(inner, inner)
    if 'operator' in name:
        return name  # TODO: operator 转义（打样族无）
    return name.replace('::', '__')

# ---------- R4 浮点常量 ----------

def hexfloat(m: re.Match) -> str:
    h = m.group(1)
    n = len(h)
    try:
        if n == 8:   # float
            f = struct.unpack('>f', bytes.fromhex(h))[0]
            return f'/*{h}*/{f!r}f'
        if n == 16:  # double
            f = struct.unpack('>d', bytes.fromhex(h))[0]
            return f'/*{h}*/{f!r}'
    except Exception:
        pass
    return m.group(0)  # 10-hex float80 等留原样标人工

# ---------- 主转换 ----------

# 类型 token: 可含 :: 与 <...> 嵌套
TYPE_RE = re.compile(
    r'\b([A-Za-z_][\w]*(?:::[A-Za-z_][\w]*|\s*<[^;(){}]*?>)*)'
    r'(?=\s*[*&,)])'
)
# 但标识符+空格+* 的调用名也会命中 TYPE_RE —— 用上下文区分：
# 签名/声明位置的类型后跟 标识符 或 *&); 调用站是 Name::Method(  → 单独处理
CALL_RE = re.compile(r'\b([A-Za-z_][\w]*(?:::[A-Za-z_][\w]*)+)\s*\(')
REAL_RE = re.compile(r'__real_([0-9a-fA-F]+)')
UNAFF_RE = re.compile(r'\bunaff_[A-Z0-9]+\b')


def convert(text: str, va: str):
    """返回 (converted_text, log_lines)"""
    log = []
    out = text

    # R4 浮点
    out = REAL_RE.sub(hexfloat, out)

    # R2/R1: 命名空间限定调用与签名 :: → __（含 ~X）
    def call_sub(m):
        return esc_ident(m.group(1)) + '('
    out = CALL_RE.sub(call_sub, out)

    # R3 类型: 声明位置的类型 token（粗策略: 行首/左值位置的 `Xxx<...> *name =` 与参数表）
    # 打样版: 只处理参数表与局部声明行（保守），漏网的报日志
    def type_sub(m):
        t = m.group(1)
        e = esc_type(t)
        if e != t:
            log.append(f'R3 {t} -> {e}')
        return e
    # 匹配类型后跟空格+标识符+常见标点（声明形态）
    DECLTYPE_RE = re.compile(
        r'(?<![\w.])([A-Za-z_][\w]*(?:::[A-Za-z_][\w]*)?(?:\s*<[^;(){}=]*?>)?)'
        r'(\s+)([*&]?\s*)([A-Za-z_][\w]*)\s*([,;=)\[])'
    )
    out = DECLTYPE_RE.sub(lambda m: esc_type(m.group(1)) + m.group(2) + m.group(3) + m.group(4) + m.group(5), out)

    # R5 unaff 标记
    for m in UNAFF_RE.finditer(out):
        log.append(f'TODO unaff reg: {m.group(0)}')

    # 残留 :: 检测
    for m in re.finditer(r'[A-Za-z_]\w*::\w+', out):
        log.append(f'RESIDUAL :: in: {m.group(0)}')

    return out, log


def main():
    indir = Path(sys.argv[1])
    outdir = Path(sys.argv[2])
    outdir.mkdir(parents=True, exist_ok=True)
    files = sorted(indir.glob('*.c'))
    n_ok = 0
    for f in files:
        m = re.match(r'([0-9a-f]+)_', f.name)
        va = m.group(1) if m else 'unknown'
        text = f.read_text()
        conv, log = convert(text, va)
        outf = outdir / (f.stem + '.tu.c')
        outf.write_text(conv)
        logf = outdir / (f.stem + '.log')
        logf.write_text('\n'.join(log) if log else '(clean)')
        n_todo = sum(1 for l in log if l.startswith('TODO') or l.startswith('RESIDUAL'))
        print(f'{va} {"TODO" if n_todo else "ok  "} log={len(log):3d} {f.name}')
        n_ok += 1
    print(f'--- converted {n_ok} functions -> {outdir}')


if __name__ == '__main__':
    main()
