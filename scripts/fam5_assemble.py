#!/usr/bin/env python3
"""fam4_assemble.py — 四类扩族 (TacticalManager/Body/SpacecraftComponent/CraftInstance)
decomp2c v2 outputs -> src/pilot_037_fam5.c

Input : /tmp/fam5_tu/<va>_<Name>.tu.c  (decomp2c v2 output)
        /tmp/fam5_callsites.json       (orig-exe disasm call targets, call[lwq]? regex)
Output: /tmp/pilot037_draft.c + fix log (cp to src/pilot_037_fam5.c after fixes)

DEFER 通过环境变量 FAM5_DEFER 覆盖（逗号分隔 6 位 VA）——迭代 defer 收敛（教训 h）。

Fix classes:
  F0 overload disambiguation — targeted families zip'd against orig-exe
     disasm call order; symbol = stub-name oracle (pe_gen_stubs semantics,
     pilot files excluded from used-set)
  F1 '::' call/pointer targets -> pool fullname -> oracle symbol (+extern)
  F2 cast type targets -> header typedef (manual map + candidate match)
  F3 '._padding_' -> ._pad_0x0_0 (all known paths)
  F4 slice locals -> slice_view union; Str-typed locals keep decl, slice
     uses wrapped with (slice_view*)& cast
  F5 extern block from oracle names
"""
import re, sys, glob, json
from pathlib import Path

ROOT = Path('/home/z/my-project')
REPO = ROOT / 'repo' / 'CDE-decomp'
IN   = Path('/tmp/fam5_tu')
OUT  = Path('/tmp/pilot037_draft.c')
POOL = REPO / 'reports' / 'orig_full2.tsv'
CALLS = Path('/tmp/fam5_callsites.json')

import os as _os
DEFER = {s for s in _os.environ.get('FAM5_DEFER','').split(',') if s}

log = []
def L(m):
    log.append(m); print(m, file=sys.stderr)

sys.path.insert(0, str(REPO / 'tools'))
import pe_gen_stubs as pgs

# ---------------- sanitize / pool ----------------
sanitize = pgs.sanitize

pool = {}          # fullname -> set of vas (multi = overloads)
for ln in open(POOL, encoding='utf-8', errors='replace'):
    p = ln.rstrip('\n').split('\t')
    if len(p) >= 4:
        pool.setdefault(p[1], set()).add(p[3])
fullname_by_va = {}
for fn, vas in pool.items():
    for va in vas:
        fullname_by_va.setdefault(va, []).append(fn)
multi_fams = {fn for fn, vas in pool.items() if len(vas) > 1}
L(f'pool={len(pool)} fullnames, multi={len(multi_fams)}')

# ---------------- stub-name oracle (replicates generate(), pilot-excluded) ----
def oracle():
    orig = pgs.originals()
    cov  = pgs.covered_vas()
    rets = pgs.decl_returns()
    used = set(rets.keys())
    hdr_dirs = [f'{pgs.SRC}/../third_party/glfw-3.3.10/include',
                f'{pgs.SRC}/../third_party/GL', f'{pgs.SRC}/../third_party/AL',
                f'{pgs.SRC}/../pe_inc']
    hdr_files = []
    import glob as g
    for d in hdr_dirs:
        hdr_files += g.glob(f'{d}/*.h') + g.glob(f'{d}/**/GL/*.h', recursive=True) \
            + g.glob(f'{d}/**/GLFW/*.h', recursive=True)
    for fp in g.glob(f'{pgs.SRC}/*.c') + g.glob(f'{pgs.SRC}/*.h') + hdr_files:
        if fp.endswith(('cde_stubs.c', 'cde_relocs.c')):
            continue
        if '/pilot_' in fp.replace('\\', '/'):
            continue
        for m in re.finditer(r'\b([A-Za-z_]\w*)\b', pgs.read(fp)):
            used.add(m.group(1))
    full = pgs.full_names()
    todo = {va: nm for va, nm in orig.items() if va not in cov}
    names = {}
    for va in sorted(todo):
        f4 = full.get(va)
        if f4:
            nm = sanitize(f4); base = nm; k = 2
            while nm in used:
                nm = f'{base}__o{k}'; k += 1
        else:
            nm = f'FUN_{va:08x}'
        used.add(nm)
        names[va] = nm
    return names

STUB_NAME = oracle()
L(f'oracle: {len(STUB_NAME)} stub names')

# ---- covered VA -> impl symbol (from game/pilot TU //==== blocks) ----
def build_cov_name():
    import glob as g
    KW = {'void','int','char','short','long','float','double','bool','unsigned',
          'signed','if','for','while','switch','return','sizeof','undefined',
          'undefined4','undefined8','static','const','struct','enum'}
    out = {}
    for fp in g.glob(f'{pgs.SRC}/game_*.c') + g.glob(f'{pgs.SRC}/pilot_0*.c'):
        va = None; cands = []; bare = None
        def flush():
            if va is not None:
                if cands: out.setdefault(int(va, 16), cands[0])
                elif bare: out.setdefault(int(va, 16), bare)
        lines = open(fp, errors='replace').read().split('\n')
        for i, ln in enumerate(lines):
            m = re.match(r'\s*//+\s*=*\s*([0-9a-fA-F]{6,8})\b', ln)
            if m:
                flush(); va = m.group(1); cands = []; bare = None
                continue
            if ln.startswith((' ', '\t')):
                continue
            # name-at-col0 form: 'name(' directly (fixes \b-mid-word impossibility)
            m0 = re.match(r'^([A-Za-z_]\w*)\s*\(', ln)
            if m0 and m0.group(1) not in KW:
                cands.append(m0.group(1)); continue
            m2 = re.match(r'^[A-Za-z_][A-Za-z0-9_\s\*]*?\b([A-Za-z_]\w*)\s*\(', ln)
            if m2 and m2.group(1) not in KW:
                cands.append(m2.group(1))
                continue
            # bare-name def line: 'name' alone, next non-empty line starts with '('
            m3 = re.match(r'^([A-Za-z_]\w*)\s*$', ln)
            if m3 and m3.group(1) not in KW:
                for j in range(i + 1, min(i + 4, len(lines))):
                    s = lines[j].strip()
                    if not s or s.startswith(('/*', '*', '//')):
                        continue
                    if s.startswith('('):
                        bare = m3.group(1)
                    break
        flush()
    return out

COV_NAME = build_cov_name()
L(f'cov_name: {len(COV_NAME)} entries')

def name_for_va(va):
    """va(int|str) -> defining symbol (covered impl or stub)"""
    v = int(va, 16) if isinstance(va, str) else va
    return COV_NAME.get(v) or STUB_NAME.get(v)

def sym_for_fullname(fn):
    """fullname -> stub symbol; None if multi-VA (needs targeted zip)"""
    vas = sorted(pool.get(fn, ()))
    if len(vas) != 1:
        return None
    return name_for_va(vas[0])

# ---------------- header names + type escape ----------------
hdr_names = set()
for h in sorted((REPO / 'src').glob('cde_types_*.h')) + \
         [REPO / 'src' / 'cde_fun_decls_full.h', REPO / 'src' / 'cde_data_map.h',
          REPO / 'src' / 'cde_decls.h', REPO / 'src' / 'cde_fun_decls.h']:
    if h.exists():
        hdr_names |= set(re.findall(r'[A-Za-z_]\w*', h.read_text(errors='replace')))

TYPE_MAP = {
    'Darray<class_util::Reflectable*>': 'Darray_L_util__Reflectable_P_G_',
    'Darray<enum_GraphicsResource::Type>': 'Darray_L_GraphicsResource__Type_G_',
    'Darray<struct_util::tuple2<enum_Order::Type,int>_>':
        'Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_',
    'Darray<void_(__thiscall_Fleet::*)(void)const_>':
        'Darray_L_void____thiscall_Fleet___P__void_const__G_',
    'util::Str<char>': 'Str_L_char_G_',
    'util::Range<double>': 'Range_L_double_G_',
    'util::Vec3<double>': 'Vec3_L_double_G_',
}

def type_escape(raw):
    r = TYPE_MAP.get(raw)
    if r: return r
    base = re.sub(r'\s+', '', raw)
    for c in (base.replace('<','_L_').replace('>','_G_').replace('::','__').replace(',','_C'),
              base.replace('<','_L_').replace('>','_G_').replace('::','__').replace(',','_C_'),
              base.replace('<','_L_').replace('>','_G_').replace('::','__').replace(',','_C').replace('*','_P_'),
              re.sub(r'_+','_', re.sub(r'[^A-Za-z0-9_]','_', base.replace('<','_L_').replace('>','_G_').replace('::','__').replace(',','_C').replace('*','_P_'))),
              re.sub(r'_+', '_', re.sub(r'[^A-Za-z0-9_]','_',base)).strip('_'), base):
        if c in hdr_names:
            return c
    return None

# ---------------- overload families (targeted, disasm-cursor) ----------------
FAMILIES = [
    'util::Str<char>::Str<char>',
    'util::Str<char>::operator+=',
    'util::LocStr::operator*',
]
# vftable fullname -> VA（vft_symbols.tsv）
VFT_VA = {}
_ns = lambda s: re.sub(r'\s+', '', s)
_vft_p = ROOT / 'meta' / 'vft_symbols.tsv'
if _vft_p.exists():
    for _ln in open(_vft_p, encoding='utf-8', errors='replace'):
        _p = _ln.rstrip('\n').split('\t')
        if len(_p) >= 3 and 'vftable' in _p[1]:
            VFT_VA[_ns(_p[2])] = _p[0]

calls_json = json.load(open(CALLS))

# ---------------- template def/call rewrite (C++ template syntax -> C names) --
# PDB 名索引: nospace(去 class-key 去命名空间的名) -> [va]
PDB_NAME_IDX = {}
for _ln in open(f'{REPO}/pdb/functions.tsv', encoding='utf-8', errors='replace'):
    _p = _ln.rstrip('\n').split('\t')
    if len(_p) >= 5 and _p[4] == 'func':
        try:
            PDB_NAME_IDX.setdefault(_p[1], []).append(int(_p[0], 16))
        except ValueError:
            pass

def pdb_name_lookup(qual):
    """'util::MakeShareable<class_Body>' -> va via PDB name 'MakeShareable<Body>'"""
    last = qual.split('::')[-1]
    last = re.sub(r'\b(class|struct|enum)_', '', last)
    ns = nospace(last)
    vas = PDB_NAME_IDX.get(ns) or PDB_NAME_IDX.get(ns.replace('_', ''))
    if vas and len(vas) == 1:
        return vas[0]
    return None

_BATCH_VAS = set()
tnorm = lambda s: re.sub(r'[\s_]+', '', s)
TPL_DEFS = {}    # (cls_last, 'Method<escapedT>') -> symbol defined in this batch
TPL_BARE = {}    # 'Method<escapedT>' -> set(symbols)
INFILE_SYMS = set()

def scan_templates(files):
    for path in files:
        txt = Path(path).read_text(errors='replace')
        m = re.search(r'// decompiled by BatchDecomp @ ([0-9a-f]+) name=(\S+)', txt)
        if not m:
            continue
        _BATCH_VAS.add(int(m.group(1), 16))
        md = re.search(r'\b([A-Za-z_]\w*)::([A-Za-z_]\w*<[^()>]*>)\s*\(', txt)
        if not md:
            continue
        cls, meth = md.group(1), md.group(2)
        sym = f'{cls}__{m.group(2)}'
        TPL_DEFS[(cls, tnorm(meth))] = sym
        TPL_BARE.setdefault(tnorm(meth), set()).add(sym)
        INFILE_SYMS.add(sym)

TPL_QUALDEF = re.compile(
    r'^((?:[A-Za-z_][\w\s\*]*?)?)\s*\b([A-Za-z_]\w*)::([A-Za-z_]\w*<[^()<>]*>)\s*\(',
    re.M)
TPL_CALL = re.compile(
    r'\b((?:[A-Za-z_]\w*::)*)([A-Za-z_]\w*)(<[^()<>*]*>)\s*\(')

def rewrite_templates(txt, disp):
    def drep(m):
        cls, meth = m.group(2), m.group(3)
        sym = TPL_DEFS.get((cls, tnorm(meth)))
        if sym:
            return f'{m.group(1)}{sym}('
        raw = cls + '::' + meth
        va = None
        ns = nospace(raw)
        if ns in pool_nospace:
            fn = pool_nospace[ns]
            vas = sorted(pool.get(fn, ()))
            if len(vas) == 1:
                va = vas[0]
        if va is None:
            va = pdb_name_lookup(raw)
        if va is not None:
            vint = int(va, 16) if isinstance(va, str) else va
            sym2 = name_for_va(vint)
            if sym2:
                if vint not in _BATCH_VAS:
                    sym_externs.add(sym2)
                pre = m.group(1)
                return (pre + ' ' if pre.strip() else '') + sym2 + '('
        unresolved.add(f'{cls}::{meth} [TPL-DEF] {disp}')
        return m.group(0)
    txt = TPL_QUALDEF.sub(drep, txt)
    def crep(m):
        qual, meth_name, targ = m.group(1), m.group(2), m.group(3)
        sym = None
        if qual:
            cls_last = qual[:-2].split('::')[-1]
            sym = TPL_DEFS.get((cls_last, tnorm(meth_name + targ)))
        if sym is None:
            syms = TPL_BARE.get(tnorm(meth_name + targ))
            if syms and len(syms) == 1:
                sym = next(iter(syms))
        if sym is None:
            raw = qual + meth_name + targ
            ns = nospace(raw)
            va = None
            if ns in pool_nospace:
                fn = pool_nospace[ns]
                vas = sorted(pool.get(fn, ()))
                if len(vas) == 1:
                    va = vas[0]
            if va is None and qual:
                va = pdb_name_lookup(raw)
            elif va is None:
                va = pdb_name_lookup(meth_name + targ)
            if va is not None:
                vint = int(va, 16) if isinstance(va, str) else va
                sym = name_for_va(vint)
                if sym and vint in _BATCH_VAS:
                    sym = None  # 本批内定义却没扫到 def——留待 TODO
        if sym:
            if sym not in INFILE_SYMS:
                sym_externs.add(sym)
            return sym + '('
        unresolved.add(qual + meth_name + targ + f' [TPL-CALL] {disp}')
        return m.group(0)
    return TPL_CALL.sub(crep, txt)

unresolved = set()
sym_externs = set()

def targeted_pass(txt, fva):
    """zip multi-VA overload families with orig-exe call order;
    single-VA operator-name fullnames get plain global replace"""
    cl = calls_json.get(fva, [])
    fams = [f for f in multi_fams if f in txt and
            (f.startswith(('util::',)) or '::~' in f or '::~' in f)]
    fams += [f for f in pool
             if 'operator' in f and f in txt and f.startswith(('util::',))
             and f not in fams]
    for fam in sorted(fams, key=len, reverse=True):
        pat = re.escape(fam)
        hits = list(re.finditer(pat, txt))
        if not hits:
            continue
        vas = sorted(pool[fam])
        if len(vas) == 1:
            sym = name_for_va(vas[0])
            if sym is None:
                unresolved.add(fam + ' [SINGLE-NONAME]'); continue
            sym_externs.add(sym)
            txt = txt.replace(fam, sym)
            continue
        order = [c for c in cl if fam in fullname_by_va.get(c, [])]
        if len(order) != len(hits):
            L(f'WARN {fva} {fam}: text={len(hits)} disasm={len(order)} — leave raw')
            unresolved.add(fam + f' [{fva} count {len(hits)}vs{len(order)}]')
            continue
        out, pos = [], 0
        for m, c in zip(hits, order):
            out.append(txt[pos:m.start()]); pos = m.end()
            sym = name_for_va(c)
            if sym is None:
                L(f'ERR {fva}: no symbol for call {c}'); sys.exit(1)
            sym_externs.add(sym)
            out.append(sym)
        out.append(txt[pos:])
        txt = ''.join(out)
    return txt

# ---------------- generic '::' pass ----------------
T = r'(?:<[^<>]*(?:<[^<>]*(?:<[^<>]*>[^<>]*)*>[^<>]*)*>)?'
QUAL = re.compile(
    r'\b([A-Za-z_]\w*' + T + r'(?:\s*::\s*[A-Za-z_]\w*' + T + r')+)')
def nospace(s):
    return re.sub(r'\s+', '', s)
pool_nospace = {nospace(k): k for k in pool}

def fix_qual(text):
    out, pos = [], 0
    for m in QUAL.finditer(text):
        raw = m.group(1)
        out.append(text[pos:m.start()]); pos = m.end()
        ns = nospace(raw)
        hit = None
        if ns in pool_nospace:
            hit = ('sym', pool_nospace[ns])
        else:
            for pns, pfull in pool_nospace.items():
                if pns.startswith(ns + '::'):
                    hit = ('type', pfull); break
        if hit is None:
            unresolved.add(raw); out.append(raw); continue
        if hit[0] == 'sym':
            sym = sym_for_fullname(hit[1])
            if sym is None:
                unresolved.add(raw + ' [MULTI/NOVA]'); out.append(raw); continue
            sym_externs.add(sym); out.append(sym)
        else:
            pfull = hit[1]; tname = None
            for _ in range(4):
                m2 = re.match(r'^(.*?)::[A-Za-z_]\w*$', pfull)
                if not m2: break
                cand = m2.group(1)
                tname = type_escape(cand)
                if tname: break
                pfull = cand
            if tname: out.append(tname)
            else:
                unresolved.add(raw + ' [TYPE]'); out.append(raw)
    out.append(text[pos:])
    return ''.join(out)

def fix_bare_clear(text):
    """bare Xxx_Yyy_Clear identifiers (vtable-store idiom) -> pool suffix search"""
    def rep(m):
        bare = m.group(0)
        hits = [(fn, sorted(vas)) for fn, vas in pool.items() if fn.endswith('::' + bare)]
        if len(hits) == 1 and len(hits[0][1]) == 1:
            sym = name_for_va(hits[0][1][0])
            if sym:
                sym_externs.add(sym)
                return sym
        unresolved.add(bare + ' [BARE-CLEAR]')
        return bare
    pat = r'\b[A-Za-z_]\w*(?:_Clear|_MemoizedFunction|_MemoizedValue|_Memoize)\b'
    return re.sub(pat, rep, text)

# ---------------- ctor/dtor qualified call pass (split-tolerant + zip) -------
_T3c = r'(?:<[^<>]*(?:<[^<>]*(?:<[^<>]*>[^<>]*)*>[^<>]*)*>)?'
CD_Q = re.compile(
    r'\b((?:util::)?[A-Za-z_]\w*' + _T3c + r')\s*::\s*(~?[A-Za-z_]\w*' + _T3c +
    r')\s*\(')

def fix_ctor_dtor(text, fva, disp):
    cl = calls_json.get(fva, [])
    # 首扫：收集命中并按 pool fullname 分组
    hits = []   # (m, ns, sym_or_None)
    for m in CD_Q.finditer(text):
        raw = m.group(1) + '::' + m.group(2)
        ns = nospace(raw)
        fn = pool_nospace.get(ns)
        hits.append((m, ns, fn))
    if not hits:
        return text
    # 按 ns 分组处理
    out, pos = [], 0
    from collections import defaultdict
    groups = defaultdict(list)
    for i, (m, ns, fn) in enumerate(hits):
        groups[ns].append(i)
    # 每个 ns 的解析结果序列（zip 或单值）
    resolved = {}
    for ns, idxs in groups.items():
        fn = pool_nospace.get(ns)
        if fn is None:
            continue
        vas = sorted(pool.get(fn, ()))
        if len(vas) == 1:
            vint = int(vas[0], 16) if isinstance(vas[0], str) else vas[0]
            sym = name_for_va(vint)
            if sym:
                if vint not in _BATCH_VAS:
                    sym_externs.add(sym)
                resolved[ns] = [sym] * len(idxs)
        else:
            # 多 VA：与 disasm 调用序 zip
            order = [c for c in cl if nospace(fullname_by_va.get(c, [''])[0] if fullname_by_va.get(c) else '') == ns
                     or ns in [nospace(x) for x in fullname_by_va.get(c, [])]]
            if len(order) == len(idxs):
                syms = []
                ok = True
                for c in order:
                    vint = int(c, 16)
                    sym = name_for_va(vint)
                    if sym is None:
                        ok = False; break
                    if vint not in _BATCH_VAS:
                        sym_externs.add(sym)
                    syms.append(sym)
                if ok:
                    resolved[ns] = syms
            else:
                unresolved.add(f'{ns} [{disp} cd-zip {len(idxs)}vs{len(order)}]')
    if not resolved:
        return text
    for m, ns, fn in hits:
        syms = resolved.get(ns)
        if not syms:
            continue
        out.append(text[pos:m.start()]); pos = m.end()
        out.append(syms.pop(0) + '(')
    out.append(text[pos:])
    return ''.join(out)

# ---------------- dtor qualified call pass (single-VA pool direct) ----------
_T3 = r'(?:<[^<>]*(?:<[^<>]*(?:<[^<>]*>[^<>]*)*>[^<>]*)*>)?'
DTOR_Q = re.compile(
    r'\b([A-Za-z_]\w*' + _T3 + r')\s*::\s*~([A-Za-z_]\w*' + _T3 + r')\s*\(')
def fix_dtors(text, disp):
    def rep(m):
        raw = m.group(0)[:-1]  # 去掉结尾 (
        ns = nospace(raw)
        fn = pool_nospace.get(ns)
        va = None
        if fn is not None:
            vas = sorted(pool.get(fn, ()))
            if len(vas) == 1:
                va = vas[0]
        if va is None:
            va = pdb_name_lookup(raw)
        if va is not None:
            vint = int(va, 16) if isinstance(va, str) else va
            sym = name_for_va(vint)
            if sym:
                if vint not in _BATCH_VAS:
                    sym_externs.add(sym)
                return sym + '('
        unresolved.add(raw + f' [DTOR] {disp}')
        return m.group(0)
    return DTOR_Q.sub(rep, text)

# ---------------- vftable refs -> data VA literals ---------------------------
VFT_Q = re.compile(
    r'&\s*((?:util::)?[A-Za-z_]\w*(?:<[^<>]*(?:<[^<>]*>[^<>]*)*>[^<>]*)*)\s*::\s*_vftable_')
def fix_vftables(text, disp):
    mcls = re.match(r'^[0-9a-f]+_([A-Za-z_][\w]*)__', disp)
    cls = mcls.group(1) if mcls else None
    def rep(m):
        ns = nospace(m.group(1))
        va = VFT_VA.get(ns)
        if va:
            return f'((void *)(0x{va.lstrip("0").zfill(8)}u))'
        unresolved.add(m.group(1) + f' [VFT] {disp}')
        return m.group(0)
    text = VFT_Q.sub(rep, text)
    if cls:
        va = VFT_VA.get(nospace(cls))
        if va:
            text = re.sub(r'&_vftable_\b', f'((void *)(0x{va.lstrip("0").zfill(8)}u))', text)
            text = re.sub(r'(?<![(\w])_vftable_\b(?!\s*\()',
                          f'((void *)(0x{va.lstrip("0").zfill(8)}u))', text)
    return text

# ---------------- pmf cast lowering: (pmf_x)Func -> CDE_PMF(pmf_x, Func) ----
PMF_CAST = re.compile(r'\((pmf_[0-9a-f]+)\)([A-Za-z_][A-Za-z0-9_]*)(?!\s*\*)')
def rewrite_pmfs(text, disp):
    def rep(m):
        return f'CDE_PMF({m.group(1)}, {m.group(2)})'
    return PMF_CAST.sub(rep, text)

# ---------------- pass 2: standalone cast types ----------------
CAST = re.compile(r'\b([A-Za-z_]\w*(?:<[^<>]*(?:<[^<>]*>[^<>]*)*>))(\s*\*)')
def fix_cast(text):
    def rep(m):
        t = type_escape(m.group(1))
        if t: return t + m.group(2)
        unresolved.add(m.group(1) + ' [CAST]'); return m.group(0)
    return CAST.sub(rep, text)

# ---------------- per-file ----------------
def process(path):
    p = Path(path)
    txt = p.read_text(errors='replace')
    va = p.name.split('_')[0]
    disp = re.sub(r'\.tu\.c$', '', p.name)
    txt = rewrite_templates(txt, disp)
    txt = fix_ctor_dtor(txt, '00' + va, disp)
    txt = fix_vftables(txt, disp)
    txt = targeted_pass(txt, '00' + va)
    txt = fix_qual(txt)
    txt = fix_bare_clear(txt)
    txt = rewrite_pmfs(txt, disp)
    txt = fix_cast(txt)
    txt = re.sub(r'[\.-]>_padding_\b', '->_pad_0x0_0', txt)
    txt = re.sub(r'\._padding_\b', '._pad_0x0_0', txt)
    # member naming: pdb header wins -> MaterialClass__NonlinearOptic
    # slice locals: widen scalar decls so slices fit; wrap ALL slice uses
    slice_names = {m.group(1) for m in re.finditer(r'\b(local_\w+|uStack_\w+|_?p?M?Stack_\w+)\._(\d+)_(\d+)_', txt)}
    for nm in sorted(slice_names):
        needed = max(int(m.group(1)) + int(m.group(2)) for m in
                     re.finditer(r'\b' + re.escape(nm) + r'\._(\d+)_(\d+)_', txt))
        # array decls stay (pointer decay natural; widen N if needed)
        marr = re.search(r'^\s*undefined1\s+' + re.escape(nm) + r'\[(\d+)\];', txt, re.M)
        if marr:
            if int(marr.group(1)) < needed:
                txt = re.sub(r'^(\s*undefined1\s+' + re.escape(nm) + r')\[\d+\];',
                             f'\\g<1>[{needed}];', txt, flags=re.M)
        else:
            mdecl = re.search(r'^\s*(undefined\d?|int|char|short|bool|byte|uint|uchar)\s+' +
                              re.escape(nm) + r'\s*;', txt, re.M)
            if mdecl:
                newt = 'undefined8' if needed <= 8 else None
                if newt and newt != mdecl.group(1):
                    txt = re.sub(r'^(\s*)(?:undefined\d?|int|char|short|bool|byte|uint|uchar)(\s+' +
                                 re.escape(nm) + r')\s*;', r'\g<1>' + newt + r'\2;', txt,
                                 flags=re.M)
                elif needed > 8:
                    L(f'WARN {disp}: {nm} needs {needed}B — leaving {mdecl.group(1)}')
            else:
                L(f'WARN {disp}: slice local {nm}: no decl found')
        # wrap every slice use
        txt = re.sub(r'\b' + re.escape(nm) + r'\._(\d+)_(\d+)_',
                     f'((slice_view *)&{nm})->_\\1_\\2_', txt)
        # cast-context buffer arith -> address form
        txt = re.sub(r'\((' + re.escape(nm) + r') \+(\d+)\)',
                     r'((char *)&\1 + \2)', txt)
    # ---------------- member-path slice wrap: X.Y.Z._N_M_ -> ((slice_view*)&X.Y.Z)->_N_M_
    txt = re.sub(r'(\b\w+(?:\.\w+)+)\._(\d+)_(\d+)_',
                 r'((slice_view *)&\1)->_\2_\3_', txt)
    # ---------------- universal bare slice wrap (fam5): IDENT._N_M_ -> ((slice_view*)&IDENT)->_N_M_
    # 真实结构体成员名不会匹配 _\d+_\d+_ 形状 → 语法安全；typed 局部/参数/标量全覆盖
    txt = re.sub(r'\b([A-Za-z_]\w*)\._(\d+)_(\d+)_\b',
                 r'((slice_view *)&\1)->_\2_\3_', txt)
    # ---------------- pad member -> offset form (pad 名即偏移) --
    def _padrep(m):
        base, off, sz = m.group(1), m.group(2), m.group(3)
        n = int(sz)
        t = {1: 'undefined1', 2: 'undefined2', 4: 'int',
             8: 'undefined8'}.get(n, 'undefined1')
        return f'*({t} *)((char *)&({base}) + {off})'
    txt = re.sub(r'\b((?:\w+->)*\w+(?:\.\w+)*)\._pad_(0x[0-9a-fA-F]+)_(\d+)_\b',
                 _padrep, txt)
    # SUB84 half-assign -> bit-cast form (works for scalar undefined8 + wraps)
    txt = re.sub(r'(\w+) = SUB84\(([^,()]+),0\);',
                 r'\1 = *(undefined4 *)&\2;', txt)
    txt = re.sub(r'(\w+) = \(undefined4\)\(\(ulonglong\)(\w+) >> 0x20\);',
                 r'\1 = *(undefined4 *)((char *)&\2 + 4);', txt)
    # whole-local undefined1[N] cast assign -> typed store
    txt = re.sub(r'(\w+) = \(undefined1\s*\[8\]\)([^;]+);',
                 r'*(double *)&\1 = \2;', txt)
    txt = re.sub(r'(\w+) = \(undefined1\s*\[4\]\)([^;]+);',
                 r'*(undefined4 *)&\1 = \2;', txt)
    # CONCAT31(wrapped._1_3_, N) -> byte arithmetic
    txt = re.sub(
        r'\(\(slice_view \*\)&(\w+)\)->_1_3_,(0x[0-9a-fA-F]+|\d+)\)',
        r'&\1._1_3_[0],\2)', txt)
    txt = re.sub(
        r'(\w+) = (?:\([^)]*\) ?)?CONCAT31\(&\1\._1_3_\[0\],(0x[0-9a-fA-F]+|\d+)\);',
        r'((slice_view *)&\1)->_0_4_ = ((unsigned)(\2) | ((unsigned)(((slice_view *)&\1)->_1_3_[0] | (((slice_view *)&\1)->_1_3_[1] << 8) | (((slice_view *)&\1)->_1_3_[2] << 16)) << 8));',
        txt)
    # field_0xNN member refs -> raw offset form (cast-deref forms FIRST)
    txt = re.sub(r'\*\((\w+) \*\)\(char \*\)&\(([^;()]+)\)\.field_(0x[0-9a-fA-F]+)',
                 r'*(\1 *)((char *)&(\2) + \3)', txt)
    txt = re.sub(r'\*\((\w+) \*\)&\(([^;()]+)\)\.field_(0x[0-9a-fA-F]+)',
                 r'*(\1 *)((char *)&(\2) + \3)', txt)
    txt = re.sub(r'&\(([^;()]+)\)\.field_(0x[0-9a-fA-F]+)',
                 r'(char *)&(\1) + \2', txt)
    # decomp2c R4 blind spot: ___real_ triple-underscore residue
    txt = re.sub(r'_\s*(/\*[0-9a-fA-F]{16}\*/)', r'\1', txt)
    # address-of-float-literal bit-cast -> immediate hex value
    txt = re.sub(r'\*\(undefined4 \*\)&/\*([0-9a-fA-F]{16})\*/[-+0-9.eE]*',
                 lambda m: f'0x{m.group(1)[8:]}u', txt)
    txt = re.sub(r'\*\(undefined8 \*\)&/\*([0-9a-fA-F]{16})\*/[-+0-9.eE]*',
                 lambda m: f'0x{m.group(1)}ull', txt)
    return va, disp, txt

def build_slice_view(pairs):
    fams = {}
    for off, size in sorted(pairs):
        if size in (1, 2, 4, 8):
            fams.setdefault(size, []).append((off, f'undefined{size} _{off}_{size}_;'))
        else:
            fams.setdefault(size, []).append((off, f'undefined1 _{off}_{size}_[{size}];'))
    lines = ['typedef union {']
    for size in sorted(fams, reverse=True):
        lines.append('  struct {')
        for off, fld in sorted(fams[size]):
            lines.append('    ' + fld)
        lines.append('  };')
    lines.append('  undefined1 raw[32];')
    lines.append('} slice_view;')
    return '\n'.join(lines)

def main():
    files = sorted(f for f in glob.glob(str(IN / '*.tu.c'))
                   if Path(f).name.split('_')[0].lstrip('0') not in {d.lstrip('0') for d in DEFER})
    scan_templates(files)
    L(f'batch={len(files)} (defer={sorted(DEFER)}) tpl_defs={len(TPL_DEFS)}')
    sections, all_pairs = [], set()
    sym_externs.clear()
    for f in files:
        va, disp, txt = process(f)
        for m in re.finditer(r'(?:\.|->)(_(\d+))_(\d+)_', txt):
            all_pairs.add((int(m.group(2)), int(m.group(3))))
        sections.append((va, disp, txt))
    body = '\n'.join(t for _, _, t in sections)
    # externs: only stub-VAs whose symbol is NOT already declared in headers;
    # FUN_ handled by R8 lines already present in section bodies
    hdr_ids = set()
    for _h in sorted((REPO / 'src').glob('*.h')):
        hdr_ids |= set(re.findall(r'\b([A-Za-z_]\w*)\b', _h.read_text(errors='replace')))
    exts = []
    for s in sorted(sym_externs):
        if s in hdr_ids or s in INFILE_SYMS:
            continue
        if s.startswith('FUN_00'):
            if re.search(r'extern[\s\S]{0,40}' + re.escape(s), body):
                continue
            exts.append(f'extern int {s}(); /* K&R; ret by call site */')
        else:
            exts.append(f'extern int {s}(); /* K&R stub; ret by call site (honest TODO: stub is void) */')
    parts = [
        '// pilot_037_fam5.c - SpacecraftTargeting/ModuleCompartment/WorldObject/CameraManager/UIWidget (127 methods)\n'
        '// assembled by scripts/fam5_assemble.py (generalized from fam4) from decomp2c v2 output.\n'
        '// Honest TODOs inline; fix log: reports/poison_fix/fam5_pilot037_log.txt\n',
        '#include "port_prelude.h"\n',
        build_slice_view(all_pairs) + '\n',
    ]
    if exts:
        parts.append('/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */\n' +
                     '\n'.join(exts) + '\n')
    for va, disp, txt in sections:
        parts.append(f'\n//==== 00{va} {disp} ====\n')
        parts.append(txt)
    OUT.write_text(''.join(parts))
    L(f'WROTE {OUT} ({OUT.stat().st_size}B) externs={len(exts)} unresolved={len(unresolved)}')
    for u in sorted(unresolved):
        L(f'  UNRESOLVED: {u}')
    (REPO / 'reports' / 'poison_fix' / 'fam5_pilot037_log.txt').write_text('\n'.join(log) + '\n')
    print(f'OK wrote {OUT}')

if __name__ == '__main__':
    main()
