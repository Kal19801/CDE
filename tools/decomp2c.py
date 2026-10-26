#!/usr/bin/env python3
"""decomp2c.py v2 — Ghidra 伪 C → 31TU 框架 C 转换器（M4 管线）

输入: BatchDecomp.java 的输出目录（<va>_<name>.c）
输出: <outdir>/<va>_<name>.tu.c + 转换日志（未识别模式清单）

v1 规则（文本级）:
  R1 签名/调用站:  NS::Class::Method  →  NS__Class__Method
  R2 析构:          ~Class            →  Class__dtor
  R3 类型转义:      模板/命名空间类型  →  tpl_names.json 反查（3407 条）
                    fallback 规则: < → _L_  > → _G_  :: → __  , → _C_  * → _P_
  R4 浮点常量:      __real_HEX        →  hexfloat 字面量（4hex=float 8hex=double）
  R5 伪影保留:      undefined*/CONCAT*/SUB84/in_stack/float10/unaff_* 原样
                    （port_prelude.h 契约；unaff_* 标 TODO 人工判读）
  R6 FUN_00xxxxxx   保留（cde_fun_decls.h extern 先例）

v2 新增（p85 人工干预四类的机械化，pilot_031_arclamp.c 为目标形态规格）:
  R7 vcall 重写器 — 伪 C 的 `_padding_` 成员在我们类型头中不存在（实际名
     `_pad_0x0_0` 等），虚拟调用一律重写为"对象地址首 4 字节"形态:
       P1 (**(code **)(E->_padding_ + OFF))()  → (**(code **)(*(int *)E + OFF))()
       P2 (**(code **)E->_padding_)(...)       → (**(code **)*(int *)E)(...)
       P3 (**(code **)((E)._padding_ + OFF))() → (**(code **)(*(int *)&E + OFF))()
       P4 (**(code **)(E)._padding_)(...)      → (**(code **)*(int *)&E)(...)
     仅重写 `(code **)` 引导的调用形态；普通 `_padding_` 使用原样保留并计日志。
  R8 FUN_ extern 生成 — 扫描引用到的 FUN_00xxxxxx，文件头自动补
     `extern undefined4 FUN_XXXXXXXX();`（K&R；返回类型按调用点判读，
     x87 返回值需 float10——日志逐条提醒）
  R9 僵尸宏 #undef — compat 头的 object-like 宏与结构成员撞名时
     （如 #define CavityCoolantComposition s_CavityCoolantComposition），
     检测 `.Name`/`->Name` 成员访问用法并自动发 `#undef Name`
     （TU 组装时需置于 include 之后）
  R10 语义 TODO 结构化 — extraout_ST0（x87 判读）/ `_4_4_`（union pun）/
     unaff_*（寄存器约定）逐条计数入日志
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

COMPAT_HDR = ROOT / 'repo' / 'CDE-decomp' / 'src' / 'cde_types_compat.h'


def load_compat_object_macros():
    """compat 头里 object-like 宏名集合（可能撞结构成员名的）"""
    macros = set()
    p = COMPAT_HDR
    if not p.exists():
        return macros
    for line in p.read_text(errors='replace').splitlines():
        m = re.match(r'#\s*define\s+([A-Za-z_]\w*)\s+\S', line)
        if m and not re.match(r'#\s*define\s+[A-Za-z_]\w*\(', line):
            macros.add(m.group(1))
    return macros


COMPAT_MACROS = load_compat_object_macros()

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

# ---------- R7 vcall 重写器 ----------

# 对象表达式: 标识符 + 可选 ->/. 成员链（不含空格/括号）
_OBJ = r'[A-Za-z_][\w]*(?:\s*(?:->|\.)\s*[A-Za-z_][\w]*)*'
_OFF = r'(?:\+|-)\s*0[xX][0-9a-fA-F]+'

VCALL_RE = re.compile(
    r'\(code\s*\*\*\)'
    r'(?:'
    r'\s*\(\s*\(\s*(' + _OBJ + r')\s*\)\s*\._padding_\s*(' + _OFF + r')?\s*\)'   # G1+G2: ((E)._pad + off)
    r'|\s*\(\s*(' + _OBJ + r')\s*\->_padding_\s*(' + _OFF + r')?\s*\)'           # G3+G4: (E->_pad + off)
    r'|\s*\(\s*(' + _OBJ + r')\s*\)\s*\._padding_'                                # G5: (E)._pad
    r'|\s*(' + _OBJ + r')\s*\->_padding_'                                         # G6: E->_pad
    r')'
)


def vcall_sub(m: re.Match) -> str:
    g1, g2, g3, g4, g5, g6 = m.groups()
    if g1 is not None:            # member 形式（带括号包裹）+ 可选 offset
        obj, off = g1, g2
        addr = f'*(int *)&{re.sub(r"\s+", "", obj)}'
    elif g3 is not None:          # pointer 形式 + 可选 offset
        obj, off = g3, g4
        addr = f'*(int *){re.sub(r"\s+", "", obj)}'
    elif g5 is not None:          # member 形式无 offset
        obj, off = g5, None
        addr = f'*(int *)&{re.sub(r"\s+", "", obj)}'
    else:                         # pointer 形式无 offset
        obj, off = g6, None
        addr = f'*(int *){re.sub(r"\s+", "", obj)}'
    if off:
        return f'(code **)({addr} {re.sub(r"\s+", " ", off)})'
    return f'(code **){addr}'


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
FUN_RE = re.compile(r'\bFUN_[0-9a-fA-F]{8}\b')
ST0_RE = re.compile(r'\bextraout_ST0\b')
SLICE_RE = re.compile(r'\._4_4_|\._2_2_|\._1_1_')
VFTABLE_RE = re.compile(r'&_vftable_|::\s*_vftable_|[A-Za-z_]\w*(?:<[^;(){}]*?>)?\s*::\s*_vftable_')
# MSVC 线程安全静态初始化惯用法：backtick 标签名 + __l2:: 守卫
THREADSTATIC_RE = re.compile(r'`[^`]*')
MEMBER_MACROS_RE = None  # 动态构建（依赖 COMPAT_MACROS）


def build_member_macro_re():
    if not COMPAT_MACROS:
        return None
    names = sorted(COMPAT_MACROS, key=len, reverse=True)
    pat = r'(?:->|\.)\s*(' + '|'.join(re.escape(n) for n in names) + r')\b'
    return re.compile(pat)


def convert(text: str, va: str):
    """返回 (converted_text, log_lines, stats_dict)"""
    log = []
    stats = {'vcall': 0, 'fun_extern': 0, 'undef': 0, 'st0': 0,
             'slice': 0, 'unaff': 0}
    out = text

    # R4 浮点
    out = REAL_RE.sub(hexfloat, out)

    # R7 vcall 重写（在其它规则前，锁定 (code **) 形态）
    def vcall_log(m):
        stats['vcall'] += 1
        return vcall_sub(m)
    out = VCALL_RE.sub(vcall_log, out)
    # 重写后残留的 vcall 上下文 _padding_（形态外的）→ TODO
    for m in re.finditer(r'\(code\s*\*\*\)[^;()]*_padding_', out):
        log.append(f'TODO vcall 残留: {m.group(0)[:80]}')

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

    # R8 FUN_ extern 生成
    funs = sorted(set(FUN_RE.findall(out)))
    extern_lines = []
    for fn in funs:
        extern_lines.append(
            f'extern undefined4 {fn}(); '
            f'/* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */')
        stats['fun_extern'] += 1
        log.append(f'R8 extern {fn}() — 返回类型需人工判读（x87→float10）')

    # R9 僵尸宏 #undef（成员访问形态才发）
    mm_re = build_member_macro_re()
    undef_lines = []
    if mm_re:
        seen = set()
        for m in mm_re.finditer(out):
            name = m.group(1)
            if name not in seen:
                seen.add(name)
                undef_lines.append(f'#undef {name} '
                                   f'/* auto(v2): compat 僵尸宏撞成员名 */')
                stats['undef'] += 1
                log.append(f'R9 #undef {name}（成员访问用法）')

    # R10 语义 TODO 计数
    stats['st0'] = len(ST0_RE.findall(out))
    stats['slice'] = len(SLICE_RE.findall(out))
    stats['unaff'] = len(UNAFF_RE.findall(out))
    n_vft = len(re.findall(r'_vftable_', out))
    n_btick = len(THREADSTATIC_RE.findall(out))
    for m in ST0_RE.finditer(out):
        log.append(f'TODO x87: {m.group(0)}（ST0 返回值判读）')
    for m in SLICE_RE.finditer(out):
        log.append(f'TODO pun: {m.group(0)}（显式 union pun）')
    for m in UNAFF_RE.finditer(out):
        log.append(f'TODO unaff reg: {m.group(0)}')
    if n_vft:
        log.append(f'TODO vftable: {n_vft} 处虚表符号引用（TU 级 vftable_N 接线）')
    if n_btick:
        log.append(f'TODO thrstatic: {n_btick} 处 backtick 标签（_Init_thread_header 惯用法）')

    # 残留 :: 检测
    for m in re.finditer(r'[A-Za-z_]\w*::\w+', out):
        log.append(f'RESIDUAL :: in: {m.group(0)}')

    # 文件头组装: #undef 与 extern 置顶（TU 组装时 #undef 需移到 include 之后）
    header = ''
    if undef_lines:
        header += '\n'.join(undef_lines) + '\n'
    if extern_lines:
        header += '\n'.join(extern_lines) + '\n'
    if header:
        header += '\n'
    out = header + out

    return out, log, stats


def main():
    indir = Path(sys.argv[1])
    outdir = Path(sys.argv[2])
    outdir.mkdir(parents=True, exist_ok=True)
    files = sorted(indir.glob('*.c'))
    n_ok = 0
    tot = {'vcall': 0, 'fun_extern': 0, 'undef': 0, 'st0': 0,
           'slice': 0, 'unaff': 0}
    clean = 0
    for f in files:
        m = re.match(r'([0-9a-f]+)_', f.name)
        va = m.group(1) if m else 'unknown'
        text = f.read_text()
        conv, log, stats = convert(text, va)
        outf = outdir / (f.stem + '.tu.c')
        outf.write_text(conv)
        logf = outdir / (f.stem + '.log')
        logf.write_text('\n'.join(log) if log else '(clean)')
        n_todo = sum(1 for l in log if l.startswith('TODO') or l.startswith('RESIDUAL'))
        tag = 'TODO' if n_todo else 'ok  '
        if not n_todo:
            clean += 1
        for k in tot:
            tot[k] += stats.get(k, 0)
        print(f'{va} {tag} vcall={stats["vcall"]:2d} FUN={stats["fun_extern"]:2d} '
              f'undef={stats["undef"]:2d} ST0={stats["st0"]} slice={stats["slice"]} '
              f'unaff={stats["unaff"]} {f.name}')
        n_ok += 1
    print(f'--- converted {n_ok} functions -> {outdir}')
    print(f'--- clean(无TODO) {clean}/{n_ok}')
    print(f'--- 类合计: {tot}')


if __name__ == '__main__':
    main()
