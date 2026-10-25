#!/usr/bin/env python3
"""sweep_assemble.py - 全量扫荡组装器（r19）

薄包装 fam8_assemble（复用 fam4-8 全部实战修复：zip 神谕/批内原型/vftable
按名通道/数据闭包/slice/pad/pmf 等约 40 个 fix pass），叠加扫荡特化：

  S1 env 参数化   SWEEP_TU / SWEEP_DRAFT / SWEEP_CALLS / SWEEP_BATCH /
                  SWEEP_DEFER（逗号分隔 6 位 VA，与 autodefer 文件并集）
  S2 全约定原型   fam8 的批内规范原型只认 __thiscall（当年冲突类）；扫荡批
                  含 cdecl/stdcall/unknown 定义，K&R `extern int FUN_x();`
                  与 `undefined4 FUN_x(...)` 定义构成 conflicting types ——
                  解析全部定义签名（碰撞互斥时弃用防误替换）
  S3 预筛自动 defer  段文本非注释/非字符串残留 `::`（C 无此语法 = 必死）的
                  函数首轮即排除，省 2-4 轮编译。名单写 SWEEP_DRAFT.autodefer，
                  幂等（重跑同批产生同一名单）
"""
import os, re, sys, glob, json
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
BATCH = os.environ.get('SWEEP_BATCH', 'sweep00')
IN = Path(os.environ.get('SWEEP_TU', f'/tmp/sweep_tu_{BATCH}'))
OUT = Path(os.environ.get('SWEEP_DRAFT', f'/tmp/sweep_{BATCH}_draft.c'))
CALLS_P = Path(os.environ.get('SWEEP_CALLS', '/tmp/sweep_calls.json'))

# ---- 先给 fam8_assemble 的 import 期喂空 callsites，再注入真表 ----
Path('/tmp/fam8_callsites.json').write_text('{}')
sys.path.insert(0, str(REPO / 'scripts'))
import fam8_assemble as A

A.CALLS = CALLS_P
A.calls_json = json.load(open(CALLS_P))
A.IN = IN
A.OUT = OUT

ENV_DEFER = {s for s in os.environ.get('SWEEP_DEFER', '').split(',') if s.strip()}
AUTO_F = Path(str(OUT) + '.autodefer')
auto_prev = set()
if AUTO_F.exists():
    auto_prev = {s for s in AUTO_F.read_text().split(',') if s.strip()}


def norm6(va):
    v = va.lstrip('0')
    return v or '0'


def prescreen(txt):
    """非注释/非字符串残留 `::` → 必死（C 无此语法）"""
    txt = re.sub(r'//[^\n]*', ' ', txt)
    txt = re.sub(r'"(?:[^"\\]|\\.)*"', '""', txt)
    return '::' in txt


_LIBM_CALL = re.compile(r'^(\s*)(?:([A-Za-z_]\w*)\s*=\s*)?libm_sse2_(\w+)\(\);\s*$')
_LIBM_DVAR = re.compile(r'^\s*((?:dVar|unaff_d|in_d|extraout_d)[A-Za-z0-9_]*)\s*=\s*(.+?);\s*$')


def libm_fix(txt):
    """libm_sse2 零参调用修复（r19）：MSVC SSE2 数学内建 xmm0 约定。
    port_prelude 已把 libm_sse2_* 宏映射到 libc（sqrt/exp/...，double ABI）。
    Ghidra 对无 callspec 的站点发零参调用；但数据流可证明：xmm0 是
    caller-saved，紧邻赋值的 dVar 跨调用后仍被读 ⇒ 其新值只能是返回值。
    'dVarK = expr;' + 'libm_fn();' ⇒ 'dVarK = expr;' + 'dVarK = fn(dVarK);'"""
    lines = txt.split('\n')
    lastd = None
    for i, ln in enumerate(lines):
        md = _LIBM_DVAR.match(ln)
        if md:
            lastd = (i, md.group(1))
            continue
        mc = _LIBM_CALL.match(ln)
        if mc and lastd and i - lastd[0] == 1:
            ind, dst, fn = mc.group(1), mc.group(2), mc.group(3)
            if dst is None or dst == lastd[1]:
                lines[i] = f'{ind}{lastd[1]} = libm_sse2_{fn}({lastd[1]});'
                lastd = (i, lastd[1])
    return '\n'.join(lines)


def main():
    DEFER_ALL = {d.lstrip('0') for d in (ENV_DEFER | auto_prev)}
    files = sorted(f for f in glob.glob(str(IN / '*.tu.c'))
                   if Path(f).name.split('_')[0].lstrip('0') not in DEFER_ALL)
    n_total = len(glob.glob(str(IN / '*.tu.c')))
    A.scan_templates(files)
    A.L(f'batch={BATCH} total={n_total} in={len(files)} '
        f'(env_defer={len(ENV_DEFER)} auto_prev={len(auto_prev)}) '
        f'tpl_defs={len(A.TPL_DEFS)}')
    A.sym_externs.clear()
    A.unresolved.clear()
    sections, all_pairs = [], set()
    auto_now = set()
    for f in files:
        va, disp, txt = A.process(f)
        txt = libm_fix(txt)
        if prescreen(txt):
            auto_now.add(norm6(va))
            A.L(f'AUTODEFER {norm6(va)} {disp}: ::-residue')
            continue
        for m in re.finditer(r'(?:\.|->)(_(\d+))_(\d+)_', txt):
            all_pairs.add((int(m.group(2)), int(m.group(3))))
        sections.append((va, disp, txt))
    AUTO_F.write_text(','.join(sorted(auto_prev | auto_now)))
    A.L(f'prescreen: auto-defer now={len(auto_now)} total={len(auto_prev | auto_now)}')
    body = '\n'.join(t for _, _, t in sections)

    # ---- S2: 全约定批内规范原型（fam8 只认 __thiscall；扫荡批全 CC）----
    proto_map = {}
    for va_, disp_, txt_ in sections:
        i = txt_.find('{')
        if i < 0:
            continue
        sigc = re.sub(r'/\*.*?\*/', ' ', txt_[:i], flags=re.S)
        sigc = re.sub(r'//[^\n]*', ' ', sigc)
        sig = re.sub(r'\s+', ' ', sigc.split(';')[-1]).strip()
        mm = re.match(r'^(.*?)\b([A-Za-z_]\w*)\s*\(([^()]*)\)(\s*const)?$', sig)
        if not mm:
            continue
        nm, sg = mm.group(2), re.sub(r'\s+', '', sig)
        if nm in proto_map:
            # 碰撞互斥 → 弃用防误替换；None（已弃用）不再复比较（r19 崩溃修复）
            if proto_map[nm] is None or re.sub(r'\s+', '', proto_map[nm]) != sg:
                proto_map[nm] = None
        else:
            proto_map[nm] = sig
    proto_map = {k: v for k, v in proto_map.items() if v}
    A.L(f'prototypes: {len(proto_map)} (all-CC)')

    def fix_externs(text):
        out = []
        for ln in text.split('\n'):
            # 尾随 /* */ 注释会让 $ 锚失败——先在剥注释副本上探测
            probe = re.sub(r'/\*.*?\*/', ' ', ln)
            m = re.match(r'\s*(?:extern\s+)?[A-Za-z_][\w\s\*]*\b([A-Za-z_]\w*)\s*\([^;{}]*\)\s*;\s*$',
                         probe)
            if m and m.group(1) in proto_map:
                ln = proto_map[m.group(1)] + ';'
            out.append(ln)
        return '\n'.join(out)

    body = fix_externs(body)

    # ---- 数据引用闭包 v2（r19）：全类型数据项宏 ----
    #   一手真值 = meta/data_items.tsv（DumpData.py 全量导出 219k 项）。
    #   形态沿用 cde_data_map.h 既有惯例：s_*→(const char*)、u_*→(const
    #   unsigned short*)、PTR_*→(void**)、DAT_*→(*(undefinedN*))、
    #   double/float 类型忠实；_DAT_ 变体同址注册；与函数名碰撞的标签跳过。
    DATA_TSV = Path(os.environ.get('SWEEP_DATA', str(REPO / 'meta' / 'data_items.tsv')))
    SYM_TSV = Path(os.environ.get('SWEEP_SYM', str(REPO / 'meta' / 'symbols.tsv')))
    dmap = {}
    if DATA_TSV.exists():
        for ln in open(DATA_TSV, encoding='utf-8', errors='replace'):
            p = ln.rstrip('\n').split('\t')
            if len(p) >= 4 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
                try:
                    dmap.setdefault(p[3], set()).add((p[0], int(p[1]), p[2]))
                except ValueError:
                    pass
    smap = {}   # 符号表（含未定义但有标签的数据）：name -> set(addr)
    FUNC_ADDR = set()
    for ln in open(REPO / 'pdb' / 'functions.tsv', encoding='utf-8', errors='replace'):
        _va = ln.split('\t')[0].strip().lower()
        if re.fullmatch(r'[0-9a-f]{8}', _va):
            FUNC_ADDR.add(_va)
    if SYM_TSV.exists():
        for ln in open(SYM_TSV, encoding='utf-8', errors='replace'):
            p = ln.rstrip('\n').split('\t')
            if len(p) == 2 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
                if p[0] in FUNC_ADDR:
                    continue    # 函数符号永不作为数据宏（否裠摧毁调用站）
                smap.setdefault(p[1], set()).add(p[0])
    hdr_ids2 = set()
    for _h in sorted((REPO / 'src').glob('*.h')):
        hdr_ids2 |= set(re.findall(r'\b([A-Za-z_]\w*)\b', _h.read_text(errors='replace')))
    func_names = (set(proto_map) | A.INFILE_SYMS |
                  {v for v in A.COV_NAME.values()} | {v for v in A.STUB_NAME.values()})
    # 批内全部函数名（含被 defer 的）也占名——数据标签与函数同名时让位
    for _f in glob.glob(str(IN / '*.tu.c')):
        _nm = Path(_f).stem.split('_', 1)
        if len(_nm) == 2 and _nm[1]:
            func_names.add(_nm[1])
            func_names.add(_nm[1].lstrip('_'))
    # ---- PFN typedef 通道：____glewXxx / ____wglewXxx 函数指针变量 ----
    #   Ghidra 反编译对下划线开头标签多加一个 '_'（___glewX -> ____glewX）。
    #   签名真值 = Khronos glcorearb/glext 的 PFN*PROC typedef（与 GLEW 同名）。
    #   typedef 语句跨多行 → 按括号/分号截取整条；嵌套（GLDEBUGPROC）递归一层。
    TD, TDALL = {}, {}
    for _gh in ('glcorearb.h', 'glext.h'):
        _p = REPO / 'third_party' / 'GL' / _gh
        if _p.exists():
            for _m in re.finditer(r'typedef[^;{}]*;', _p.read_text(errors='replace')):
                _st = re.sub(r'\s+', ' ', _m.group(0)).strip()
                _n1 = re.search(r'\b(PFN\w+PROC)\b', _st)
                if _n1:
                    TD.setdefault(_n1.group(1), _st)
                _n2 = (re.search(r'\(\s*[A-Za-z_]*\*?\s*([A-Za-z_]\w*)\s*\)', _st) or
                       re.match(r'typedef.*\b([A-Za-z_]\w*)\s*;$', _st))
                if _n2:
                    TDALL.setdefault(_n2.group(1), _st)
    GL_PRELUDE = (
        'typedef void GLvoid; typedef char GLchar; typedef unsigned char GLboolean;\n'
        'typedef signed char GLbyte; typedef short GLshort; typedef int GLint;\n'
        'typedef unsigned char GLubyte; typedef unsigned short GLushort;\n'
        'typedef unsigned int GLuint; typedef float GLfloat; typedef float GLclampf;\n'
        'typedef double GLdouble; typedef double GLclampd; typedef unsigned int GLenum;\n'
        'typedef unsigned int GLbitfield; typedef long GLintptr; typedef long GLsizeiptr;\n'
        'typedef unsigned long long GLint64; typedef unsigned long long GLuint64;\n'
        'typedef char GLcharARB; typedef unsigned int GLhandleARB;\n'
        'typedef struct __GLsync *GLsync;\n'
        '#define APIENTRY __stdcall\n'
        '#define APIENTRYP APIENTRY *\n')
    SIMPLE_T = {'undefined1', 'undefined2', 'undefined4', 'undefined8', 'int',
                'uint', 'char', 'uchar', 'short', 'ushort', 'bool', 'byte',
                'word', 'dword', 'longlong', 'ulonglong', 'float', 'double'}
    data_defs, data_skipped = [], 0
    used_td = set()
    body_tokens = set(re.findall(r'\b[A-Za-z_]\w*\b', body))

    def label_for(t):
        """token -> (ghidra_label, cands, src)；反编译对 '_' 开头标签多加一个 '_'"""
        s = t
        while True:
            if s in dmap:
                return s, dmap[s], 'data'
            if s in smap:
                return s, smap[s], 'sym'
            if not s.startswith('_'):
                return None, None, None
            s = s[1:]

    need = set()
    for t in body_tokens:
        if t in hdr_ids2 or t in func_names:
            continue
        if re.fullmatch(r'FUN_[0-9a-f]{8}', t):
            continue    # 函数符号走 R8 extern，永不作数据
        lab, _c, _s = label_for(t)
        if lab:
            need.add(t)
    for t in sorted(need):
        lab, cands, src = label_for(t)
        if re.fullmatch(r'_?DAT_[0-9a-f]{6,8}', t) and src == 'sym':
            continue    # DAT_ 形状未定义项由 undefined1 兑底宏处理（值读安全）
        mp = re.match(r'^_+(w?glew)([A-Za-z_]\w*)$', t)
        if mp and lab:
            pref = 'WGL' if mp.group(1) == 'wglew' else 'GL'
            tdname = f'PFN{pref}{mp.group(2).upper()}PROC'
            if tdname in TD and cands:
                addrs_ = sorted({(c[0] if isinstance(c, tuple) else c) for c in cands})
                if len(addrs_) == 1:
                    used_td.add(tdname)
                    data_defs.append(f'#define {t} (*({tdname} *)(0x{addrs_[0]}u))')
                    continue
            data_skipped += 1
            continue
        if not lab:
            data_skipped += 1
            continue
        if src == 'sym':
            # 符号表单项（未定义数据）：仅 Ghidra 数据标签形态才宏化，
            # libc/API 名（fseek 等 IMPORT 符号）绝不宏化（会摧毁调用站）
            if not re.match(r'^(_*DAT_|PTR_|s_|u_|___xmm|_UNK_|_+w?glew)', t):
                data_skipped += 1
                continue
            if len(cands) != 1:
                data_skipped += 1
                continue
            va = next(iter(cands))
            data_defs.append(f'#define {t} (*(void **)(0x{va}u))')
            continue
        addrs = {c[0] for c in cands}
        if len(addrs) != 1:
            data_skipped += 1
            continue
        va, sz, tn = next(iter(cands))
        tl = tn.lower()
        if 'unicode' in tl or ('ushort' in tl and 'string' in tl):
            form = f'((const unsigned short *)0x{va}u)'
        elif 'string' in tl or tn.startswith('char['):
            form = f'((const char *)0x{va}u)'
        elif tn in ('float', 'double'):
            form = f'(*({tn} *)(0x{va}u))'
        elif t.startswith('PTR_') or tn.endswith('*') or 'pointer' in tl:
            form = f'(*(void **)(0x{va}u))'
        elif tn in SIMPLE_T:
            form = f'(*({tn} *)(0x{va}u))'
        elif 'code' in tl:
            form = f'(*(code **)(0x{va}u))'
        elif sz in (1, 2, 4, 8):
            form = f'(*(undefined{sz} *)(0x{va}u))'
        elif sz == 16:
            form = f'(*(undefined1 (*)[16])(0x{va}u))'
        else:
            data_skipped += 1
            continue
        data_defs.append(f'#define {t} {form}')
    if data_defs:
        A.L(f'data closure v2: {len(data_defs)} macros (skipped {data_skipped}) '
            f'pfn={len(used_td)}')
    # xmm/_UNK_ 兜底（fam8 r18 形态：dump 无标签时按名取 VA）
    # 注意：___xmm_<32hex> 是 Ghidra 折叠的 128 位常量值名（非地址），其字节序
    # 与 game_024 静态惯例对不上——不猜，留编译错→defer（等价纪律优先）
    have = {d.split()[1] for d in data_defs}
    for m in sorted({m.group(0) for m in re.finditer(r'___xmm_[0-9a-f]{6,16}\b', body)}):
        if m in hdr_ids2 or m in have:
            continue
        hx = m[7:]
        if len(hx) <= 16:
            data_defs.append(f'#define {m} (*(undefined1 (*)[16])(0x{hx}u))')
    for m in sorted({m.group(0) for m in re.finditer(r'_UNK_[0-9a-f]+', body)}):
        if m not in hdr_ids2 and m not in have:
            data_defs.append(f'#define {m} (*(undefined4 *)(0x{m[5:]}u))')
    # 未定义地址 DAT_ 兜底（Ghidra 引用但无 defined item；宽访问必带显式转型，
    # 字节宏指针算术/取址/窄读全兼容——等价口径同 cde_data_map.h undefined1）
    for m in sorted({m.group(0) for m in re.finditer(r'\b_?DAT_[0-9a-f]{6,8}\b', body)}):
        if m in have or m in hdr_ids2:
            continue
        va = m.lstrip('_')[4:]
        data_defs.append(f'#define {m} (*(undefined1 *)(0x{va}u))')

    hdr_ids = hdr_ids2
    exts = []
    for s in sorted(A.sym_externs):
        if s in hdr_ids or s in A.INFILE_SYMS or s in proto_map:
            continue
        if s.startswith('FUN_00'):
            if re.search(r'extern[\s\S]{0,40}' + re.escape(s), body):
                continue
            exts.append(f'extern int {s}(); /* K&R; ret by call site */')
        else:
            exts.append(f'extern int {s}(); /* K&R stub; ret by call site */')
    parts = [
        f'// pilot_sweep_{BATCH}.c - assembled by scripts/sweep_assemble.py (r19)\n'
        '// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)\n',
        '#include "port_prelude.h"\n',
        A.build_slice_view(all_pairs) + '\n',
    ]
    if exts:
        parts.append('/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */\n' +
                     '\n'.join(exts) + '\n')
    if used_td:
        td_lines, seen = [], set()

        def add_td(nm, depth=0):
            return  # include 直接取 Khronos 头，不再抽取

        for nm in sorted(used_td):
            add_td(nm)
        parts.append('/* ---- GL PFN typedefs: Khronos headers directly (extraction-free) ---- */\n'
                     '#include <glcorearb.h>\n#include <glext.h>\n')
    if data_defs:
        parts.append('/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */\n' +
                     '\n'.join(data_defs) + '\n')
    for va, disp, txt in sections:
        parts.append(f'\n//==== 00{va} {disp} ====\n')
        # r19 修复：fam8 的 fix_externs 结果(body)从未进 parts（当年批内全具名，
        # R8 不发批内 extern 所以没炸）；扫荡批 FUN_ 互调必须逐段替换。
        # 只替换签名区（第一个 '{' 之前）——原型语句只出现在那里，函数体内的
        # 调用语句形态相近但绝不能碰
        i = txt.find('{')
        head, tail = (txt[:i], txt[i:]) if i >= 0 else (txt, '')
        parts.append(fix_externs(head) + tail)
    OUT.write_text(''.join(parts))
    A.L(f'WROTE {OUT} ({OUT.stat().st_size}B) sections={len(sections)} '
        f'externs={len(exts)} unresolved={len(A.unresolved)}')
    (REPO / 'reports' / 'poison_fix' / f'sweep_{BATCH}_log.txt').write_text(
        '\n'.join(A.log) + '\n')
    print(f'OK {BATCH}: total={n_total} sections={len(sections)} '
          f'auto={len(auto_now)} exts={len(exts)} unresolved={len(A.unresolved)}')


if __name__ == '__main__':
    main()
