#!/usr/bin/env python3
"""gen_r23_types_header.py - 生成 src/cde_types_r23.h（PDB TPI 全量完整定义）。
字节精确布局：PDB 成员偏移真值 + 显式 pad；基类内嵌；vftable 槽；
匿名 union 承接同偏移重叠成员。esc 命名与管线 _type_rewrite/变体链一致，
下划线折叠归一查表（R23_ESC_NORM 同款）。
另：重写 cde_types_clean.h / cde_types_pdb.h 中映射到 lib 的占位 typedef
（typedef int X; / typedef void *X; → typedef struct X X;）。
"""
import re
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
UDT = Path('/tmp/my-project/work/r23_udt.tsv')
OUT = REPO / 'src' / 'cde_types_r23.h'

PRIM = {'dword': 'unsigned int', 'word': 'unsigned short', 'byte': 'unsigned char',
        'qword': 'unsigned long long', 'longlong': 'long long', 'ushort': 'unsigned short',
        'int': 'int', 'char': 'char', 'short': 'short', 'float': 'float',
        'double': 'double', 'bool': 'unsigned char'}


def variants(base):
    b = re.sub(r'\s+', '', base).replace('@', '_P_')
    return [b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C'),
            b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C_'),
            b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C'),
            re.sub(r'_+', '_', re.sub(r'[^A-Za-z0-9_]', '_', b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C').replace('*', '_P_')))]


def load():
    lib = {}
    cur = None
    for ln in open(UDT, encoding='utf-8', errors='replace'):
        p = ln.rstrip('\n').split('\t')
        if p[0] == 'UDT' and len(p) >= 4:
            cur = p[1]
            lib[cur] = {'size': int(p[2]), 'kind': p[3], 'mems': [], 'bases': [], 'vtab': False}
        elif p[0] == 'MEMB' and len(p) >= 6 and cur:
            lib[cur]['mems'].append((p[2], int(p[3]), p[4], int(p[5])))
        elif p[0] == 'BASE' and len(p) >= 5 and cur:
            lib[cur]['bases'].append((p[2], int(p[3]), int(p[4])))
        elif p[0] == 'VTAB' and cur:
            lib[cur]['vtab'] = True
    return lib


def load_header_names():
    """既有头部分三集：tag 已定义 / 自指 tag typedef（可补全）/ 其他 typedef（让位）"""
    import glob as _g
    tag_def, int_td, alias = set(), set(), {}
    p_tag = re.compile(r'\b(?:struct|union|enum)\s+([A-Za-z_]\w*)\s*\{')
    p_int = re.compile(r'\btypedef\s+(?:int|void\s*\*|unsigned\s+\w+|signed\s+\w+|float|double|long\s+long|char|short)\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?:,[^;]*)?;')
    p_alias = re.compile(r'\btypedef\s+([A-Za-z_][A-Za-z0-9_]*)\s+([A-Za-z_][A-Za-z0-9_]*)\s*;')
    SCAL = {'int', 'char', 'short', 'long', 'float', 'double', 'void', 'signed', 'unsigned',
            'struct', 'union', 'enum', 'const', 'bool'}
    for h in (_g.glob(str(REPO / 'src' / 'cde_*.h')) + _g.glob(str(REPO / 'src' / 'port_prelude.h'))
              + _g.glob(str(REPO / 'pe_inc' / '**' / '*.h'), recursive=True)
              + _g.glob(str(REPO / 'third_party' / '**' / '*.h'), recursive=True)):
        if 'r23' in h:
            continue
        t = Path(h).read_text(errors='replace')
        for mm in p_tag.finditer(t):
            tag_def.add(mm.group(1))
        for mm in p_int.finditer(t):
            int_td.add(mm.group(1))
        for mm in p_alias.finditer(t):
            if mm.group(1) not in SCAL and mm.group(2) not in SCAL:
                alias[mm.group(2)] = mm.group(1)
    return tag_def, int_td, alias

TAG_DEFINED, INT_TD, ALIAS_MAP = load_header_names()
HDR_SKIP = TAG_DEFINED | INT_TD

LIB = load()
ESC_NORM = {}
ESC_OF = {}
for d in LIB:
    vs = [v for v in variants(d) if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', v)]
    ESC_OF[d] = vs[0] if vs else re.sub(r'[^A-Za-z0-9_]', '_', variants(d)[0])
    for v in variants(d):
        ESC_NORM.setdefault(re.sub(r'_+', '_', v).strip('_'), d)
    s = d
    while '::' in s:
        s = s.split('::', 1)[1]
        for v in variants(s):
            ESC_NORM.setdefault(re.sub(r'_+', '_', v).strip('_'), d)

DEFINED = set()
ESC_TAKEN = set()
REF = {}


def esc_of(disp):
    return REF.get(disp) or ESC_OF.get(disp) or variants(disp)[0]


def resolve_refs():
    """r23e: REF 恒 = 首个合法变体（variant1）——引用名与定义名恒一致；
    让位仅由 emit 的 TAG_DEFINED/INT_TD 守卫处理（那时引用名仍是 variant1，
    若其 typedef/tag 由头部提供则解析成功；否则诚实报错 defer）"""
    for d in LIB:
        for v in variants(d):
            if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', v):
                REF[d] = v
                break
        REF.setdefault(d, variants(d)[0])
    # r23f: 头部别名链跟随（typedef SHORT FULL → 引用用 SHORT）
    for d in list(REF):
        v = REF[d]
        seen = set()
        while v in ALIAS_MAP and v not in seen:
            seen.add(v)
            v = ALIAS_MAP[v]
        if seen:
            REF[d] = v


def bases_of(ts):
    ts = ts.strip()
    out = []
    if ts.endswith('*'):
        b = ts[:-1].strip()
        if b in LIB:
            out.append(b)
        return out
    m = re.fullmatch(r'(.*)\[(\d+)\]', ts)
    if m:
        b = m.group(1).strip()
        if b in LIB:
            out.append(b)
        return out
    if ts in LIB:
        out.append(ts)
    return out


def elem_c(b):
    b = b.strip()
    if b in PRIM:
        return PRIM[b]
    if b in LIB:
        return esc_of(b)
    return None


def member_decl(ts, tsz, name):
    if re.match(r'^__|^(this|struct|union|enum|const|volatile|signed|unsigned|register|typedef)$', name or ''):
        name = name + '_m'
    ts = ts.strip()
    if not ts:
        return f'unsigned char {name}[{max(tsz, 1)}];'
    if ts.endswith('*'):
        e = elem_c(ts[:-1].strip())
        return f'{e if e else "void"} *{name};'
    m = re.fullmatch(r'(.*)\[(\d+)\]', ts)
    if m:
        n = int(m.group(2))
        e = elem_c(m.group(1).strip())
        if e is None:
            return f'unsigned char {name}[{max(tsz, 1)}];'
        return f'{e} {name}[{n}];'
    e = elem_c(ts)
    if e is None:
        return f'unsigned char {name}[{max(tsz, 1)}];'
    return f'{e} {name};'


def emit(disp, out, depth=0):
    if disp in DEFINED or disp not in LIB or depth > 12:
        return False
    ent = LIB[disp]
    esc = esc_of(disp)
    if not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', esc):
        return False
    if esc in TAG_DEFINED:
        return False  # 既有头已有 tag 定义 —— r23 头让位（引用名仍用 esc_of）
    if esc in INT_TD:
        return False  # int/void* 等占位 typedef —— 让位头部（值位诚实 defer）
    if esc in ESC_TAKEN:
        return False  # r23g: 同 esc 异名（san 变体双键）—— 先到定义共用
    DEFINED.add(disp)
    ESC_TAKEN.add(esc)
    out.append(f'typedef struct {esc} {esc};')
    for (mn, off, ts, tsz) in ent['mems']:
        for b in bases_of(ts):
            emit(b, out, depth + 1)
    for (bd, boff, bsz) in ent['bases']:
        if bd in LIB:
            emit(bd, out, depth + 1)
    kw = 'union' if ent['kind'] == 'union' else 'struct'
    lines = []
    mems = sorted(ent['mems'], key=lambda x: x[1])
    cur = 0
    if kw == 'struct':
        zero = any(m[1] == 0 for m in mems) or any(b[1] == 0 for b in ent['bases'])
        if ent['vtab'] and not zero:
            lines.append('  void *_vftable;')
            cur = 4
        items = [('b', b) for b in ent['bases']] + [('m', m) for m in mems]
        items.sort(key=lambda x: x[1][1])
        i = 0
        while i < len(items):
            off = items[i][1][1]
            if off > cur:
                lines.append(f'  unsigned char _pad{cur}[{off - cur}];')
                cur = off
            if off < cur:
                i += 1
                continue
            grp = []
            while i < len(items) and items[i][1][1] == off:
                grp.append(items[i]); i += 1
            if len(grp) == 1:
                k2, it = grp[0]
                if k2 == 'b':
                    be = esc_of(it[0])
                    lines.append(f'  {be} _base_{be};')
                    cur += LIB.get(it[0], {}).get('size', it[2])
                else:
                    lines.append('  ' + member_decl(it[2], it[3], it[0]))
                    cur += it[3]
            else:
                lines.append('  union {')
                mx = 0
                for k2, it in grp:
                    if k2 == 'b':
                        be = esc_of(it[0])
                        lines.append(f'    {be} _base_{be};')
                        mx = max(mx, LIB.get(it[0], {}).get('size', it[2]))
                    else:
                        lines.append('    ' + member_decl(it[2], it[3], it[0]))
                        mx = max(mx, it[3])
                lines.append('  };')
                cur += mx
        if cur < ent['size']:
            lines.append(f'  unsigned char _tail[{ent["size"] - cur}];')
    else:
        for (mn, off, ts, tsz) in ent['mems']:
            lines.append('  ' + member_decl(ts, tsz, mn))
        mx = max([m[3] for m in ent['mems']] + [0])
        if mx < ent['size']:
            lines.append(f'  unsigned char _pad[{ent["size"] - mx}];')
    out.append(f'{kw} {esc} {{')
    out.extend(lines)
    out.append('};')
    return True


STUBBED = set()


def write_header(body, n):
    hdr = ['/* cde_types_r23.h - PDB TPI full definitions (llvm-pdbutil truth, byte-exact).',
           ' * Generated by tools/gen_r23_types_header.py - DO NOT EDIT BY HAND.',
           f' * types={n} layout: PDB member offsets + explicit pads; bases embedded; C11 anon unions. */',
           '#ifndef CDE_TYPES_R23_H',
           '#define CDE_TYPES_R23_H',
           ''] + body + ['', '#endif']
    OUT.write_text('\n'.join(hdr) + '\n')
    return len(hdr)


def validate_and_stub():
    """编译验证 r23 头；坏 struct → 字节桩（等价保布局）；迭代 ≤4 轮"""
    import subprocess, os
    CLANG = str(REPO / 'toolchain/usr/lib/llvm-19/bin/clang')
    FLAGS = ['--target=i686-w64-mingw32', '-m32', '-x', 'c', '-std=gnu11', '-fsyntax-only',
             '-ferror-limit=0', '-w', f'-I{REPO}/src', f'-I{REPO}/src/../third_party/GL',
             f'-I{REPO}/src/../third_party/AL', f'-I{REPO}/src/../third_party/glfw-3.3.10/include',
             '-Ipe_inc', '-Ipe_inc/freetype2',
             '-isystem', f'{REPO}/toolchain/usr/i686-w64-mingw32/include']
    wrap = Path('/tmp/r23_hdrtest.c')
    wrap.write_text('#include "port_prelude_nor23.h"\n#include "cde_types_r23.h"\n')
    total_stub = 0
    for rnd in range(6):
        r = subprocess.run([CLANG] + FLAGS + [str(wrap)], capture_output=True, text=True,
                           cwd=str(REPO), env={**os.environ, 'CDE_TOOLCHAIN': str(REPO / 'toolchain')})
        errs = [ln for ln in r.stderr.split('\n') if 'cde_types_r23.h' in ln and 'error:' in ln]
        if not errs:
            print(f'header clean (round {rnd}, stubbed total {total_stub})')
            return total_stub
        bad = set()
        for ln in errs:
            try:
                bad.add(int(ln.split(':')[1]))
            except Exception:
                pass
        # 展开宏级联：错误行所属 struct 的所有行都视作坏
        body = OUT.read_text().split('\n')
        # 找 struct 边界：'struct X {' 行到配对 '};'
        starts = {}
        for i, ln in enumerate(body):
            m = re.match(r'struct ([A-Za-z0-9_]+) \{', ln)
            if m:
                starts[i] = m.group(1)
        kill = set()
        for b in bad:
            cand = [s0 for s0 in starts if s0 <= b]
            if cand:
                s0 = max(cand)
                j = s0 + 1
                while j < len(body) and body[j] != '};':
                    j += 1
                for k in range(s0, j + 1):
                    kill.add(k)
        if not kill:
            print('cannot map errors to structs; stop')
            break
        # 换桩
        out = []
        i = 0
        n_stub = 0
        while i < len(body):
            if i in kill:
                nm = None
                m = re.match(r'struct ([A-Za-z0-9_]+) \{', body[i])
                if m:
                    nm = m.group(1)
                j = i + 1
                while j < len(body) and body[j] != '};':
                    j += 1
                # 大小：查 LIB size（display 反查不可靠——用 esc 名反查）
                sz = 16
                for d, ent in LIB.items():
                    if esc_of(d) == nm:
                        sz = ent['size']
                        break
                if nm and nm not in STUBBED:
                    STUBBED.add(nm)
                out.append(f'struct {nm} {{ unsigned char _stub[{max(sz, 1)}]; }};')
                n_stub += 1
                i = j + 1
            else:
                out.append(body[i])
                i += 1
        OUT.write_text('\n'.join(out))
        total_stub += n_stub
        print(f'round {rnd}: stubbed {n_stub} structs, {len(errs)} errors')
    return total_stub


def main():
    # 按 lib 名排序保证确定性；emit 递归把依赖定义提到前面
    resolve_refs()
    body = []
    n = 0
    for d in sorted(LIB):
        if emit(d, body):
            n += 1
    # 二次扫尾：被依赖但 emit=False 的类型若尚无定义（HDR 让位除外）→ 补桩不补（引用名由头部提供）
    write_header(body, n)
    print(f'wrote {OUT} types={n} lines={len(body) + 7}')
    ns = validate_and_stub()
    print(f'final: types={n} stubbed={ns}')

    # 占位 typedef 重写（仅映射到 lib 的名字；int/void* → struct 前向）
    for h in (REPO / 'src' / 'cde_types_clean.h', REPO / 'src' / 'cde_types_pdb.h'):
        t = h.read_text(errors='replace')
        n_sub = 0
        def rep(m):
            nonlocal n_sub
            d = ESC_NORM.get(re.sub(r'_+', '_', m.group(1)).strip('_'))
            if d is None:
                return m.group(0)
            n_sub += 1
            e = esc_of(d)
            return f'typedef struct {e} {m.group(1)};'
        t2 = re.sub(r'\btypedef (?:int|void \*) ((?:[A-Za-z_][A-Za-z0-9_]*)?)\s*;', rep, t)
        # 二次：typedef int X, *PX; 形态（带指针声明尾）
        def rep2(m):
            nonlocal n_sub
            head = m.group(1)
            d = ESC_NORM.get(re.sub(r'_+', '_', head).strip('_'))
            if d is None:
                return m.group(0)
            n_sub += 1
            e = esc_of(d)
            rest = m.group(0)[len('typedef int ') - 1:]
            rest = re.sub(r'\bint\b', f'struct {e}', rest, count=1)
            return 'typedef' + rest
        t2 = re.sub(r'\btypedef int ([A-Za-z_][A-Za-z0-9_]*)\s*,', rep2, t2)
        if n_sub:
            h.write_text(t2)
            print(f'{h.name}: {n_sub} placeholder typedefs rewritten')


if __name__ == '__main__':
    main()
