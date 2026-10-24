#!/usr/bin/env python3
"""pe_gen_stubs.py v3 (repo port) - PE stub generation from the authoritative
inventory.

originals : pdb/functions.tsv        (va, name, ..., kind=func)
covered   : `//==== <va> <name> ====` headers across src/game_*.c
stub set  : originals with kind func, va not covered, sanitized unique name

The generated pe_obj/cde_pe_stubs.c is compiled by build.py with the
conflict-fixing loop (fix_conflicts).  NOTE: src/cde_stubs.c is the
Linux-port stub file and is NOT part of the PE comparison build.
"""
import os, re, glob

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC  = os.path.join(REPO, 'src')
TSV  = os.path.join(REPO, 'pdb', 'functions.tsv')
OBJ  = os.path.join(REPO, 'pe_obj')
OUT_C = f'{OBJ}/cde_pe_stubs.c'


def read(p):
    return open(p, encoding='utf-8', errors='replace').read()


def originals():
    """va -> original name (kind == func only), first wins."""
    out = {}
    for ln in read(TSV).split('\n'):
        f = ln.split('\t')
        if len(f) < 5 or f[4] != 'func':
            continue
        try:
            va = int(f[0], 16)
        except ValueError:
            continue
        nm = f[1].strip()
        if not nm or nm.startswith('/'):
            continue
        if va not in out:
            out[va] = nm
    return out


def covered_vas():
    s = set()
    for f in glob.glob(f'{SRC}/game_*.c') + glob.glob(f'{SRC}/pilot_*.c'):
        for ln in read(f).split('\n'):
            m = re.match(r'\s*//+\s*=*\s*([0-9a-fA-F]{6,8})\b', ln)
            if m:
                s.add(int(m.group(1), 16))
    return s


def decl_returns():
    rets = {}
    for h in ('cde_undecl.h', 'cde_fun_decls_full.h', 'cde_fun_decls_gen.h',
              'cde_fun_decls.h', 'cde_l2_resid.h', 'cde_dym.h'):
        p = f'{SRC}/{h}'
        if not os.path.exists(p):
            continue
        for line in read(p).split('\n'):
            s = line.strip()
            if not s.startswith('extern ') or not s.endswith(';') or '(' not in s:
                continue
            m = re.match(r'extern\s+(.+?)\b([A-Za-z_]\w*)\s*\(', s)
            if m and m.group(2) not in rets:
                rets[m.group(2)] = m.group(1).strip().rstrip()
    return rets


def full_names():
    """va -> orig namespace-qualified name (Ghidra export; optional).
    reports/orig_full2.tsv was lost to sandbox resets -- when absent, all
    stubs fall back to FUN_<va> naming (same .text bytes, PDB names differ;
    BSim name-join for these sites relies on FUN_ identity instead)."""
    out = {}
    for p in (os.path.join(REPO, 'reports', 'orig_full2.tsv'),
              os.path.join(REPO, 'reports', 'orig_full.tsv')):
        try:
            fh = open(p)
        except FileNotFoundError:
            continue
        fh.readline()
        for line in fh:
            f = line.rstrip('\n').split('\t')
            if len(f) < 5:
                continue
            full, nm, e = f[1], f[2], f[3]
            if nm.startswith(('FUN_', 'thunk_')) or nm.startswith(('.', '/')):
                continue
            try:
                va = int(e, 16)
            except ValueError:
                continue
            out.setdefault(va, full)
    return out


VOIDISH = {'void'}
SCALAR = {'bool', 'char', 'uchar', 'short', 'ushort', 'int', 'uint', 'undefined',
          'undefined1', 'undefined2', 'undefined3', 'undefined4', 'long', 'ulong',
          'longlong', 'ulonglong', 'long64', 'ulong64', 'int64_t', 'uint64_t',
          'int32_t', 'uint32_t', 'size_t', 'intptr_t', 'uintptr_t', 'float',
          'double', 'T_HRESULT', 'LONG', 'DWORD', 'ULONG', 'BOOL', 'BYTE', 'WORD'}


def stub_body(name, ret):
    if ret in VOIDISH:
        return f'void {name}(void) {{ }}'
    base = ret.replace('*', '').strip()
    if '*' in ret or base in SCALAR:
        return f'{ret} {name}(void) {{ return 0; }}'
    return (f'{ret} {name}(void) {{ {ret} cde_r; '
            f'memset(&cde_r, 0, sizeof cde_r); return cde_r; }}')


def sanitize(nm):
    s = re.sub(r'[^A-Za-z0-9_]', '_', nm.strip())
    s = re.sub(r'_+', '_', s).strip('_')
    if not s or not re.match(r'^[A-Za-z_]', s):
        s = 'F_' + (s or 'x')
    return s[:180]


def generate():
    orig = originals()
    cov = covered_vas()
    rets = decl_returns()
    print(f'originals={len(orig)} covered_vas={len(cov)}')
    todo = {va: nm for va, nm in orig.items() if va not in cov}
    print(f'stub sites={len(todo)}')
    lines = ['/* cde_pe_stubs.c - PE comparison build (pe_gen_stubs.py v3).',
             ' * One no-op per original-exe function site not covered by the',
             ' * reconstructed TUs. `@0xVA` = original function address.',
             ' * Names: sanitized original symbol name, deduped with FUN_<va>. */',
             '#include "port_prelude.h"', '']
    used = set(rets.keys())
    hdr_dirs = [f'{SRC}/../third_party/glfw-3.3.10/include',
                f'{SRC}/../third_party/GL', f'{SRC}/../third_party/AL',
                f'{SRC}/../pe_inc']
    hdr_files = []
    for d in hdr_dirs:
        hdr_files += glob.glob(f'{d}/*.h') + glob.glob(f'{d}/**/GL/*.h', recursive=True) \
            + glob.glob(f'{d}/**/GLFW/*.h', recursive=True)
    for fp in glob.glob(f'{SRC}/*.c') + glob.glob(f'{SRC}/*.h') + hdr_files:
        if fp.endswith(('cde_stubs.c', 'cde_relocs.c')):
            continue
        # pilot_* TUs are excluded from the used-set: their identifiers must not
        # shift stub dedup naming (order coupling). Pilot files reference stub
        # symbols; stub names must depend only on game TUs + headers. (p89)
        if '/pilot_' in fp.replace('\\', '/'):
            continue
        for m in re.finditer(r'\b([A-Za-z_]\w*)\b', read(fp)):
            used.add(m.group(1))
    full = full_names()
    named = 0
    n = 0
    for va in sorted(todo):
        f4 = full.get(va)
        if f4:
            nm = sanitize(f4)
            base = nm
            k = 2
            while nm in used:
                nm = f'{base}__o{k}'
                k += 1
            named += 1
        else:
            nm = f'FUN_{va:08x}'
        used.add(nm)
        ret = rets.get(nm, 'void')
        lines.append(f'/* @0x{va:06x} {todo[va][:100]} */')
        lines.append(stub_body(nm, ret))
        n += 1
    lines.append('')
    os.makedirs(OBJ, exist_ok=True)
    open(OUT_C, 'w').write('\n'.join(lines))
    print(f'wrote {OUT_C}: {n} stubs ({named} named by orig fullname)')
    return OUT_C
