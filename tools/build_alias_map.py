#!/usr/bin/env python3
"""build_alias_map.py - build the /alternatename alias map that re-binds
stale-name references (relocs.c Ghidra-dedup names, TU-internal free names)
to the canonical defined symbols.

R1: relocs (va, S):   va covered -> alias S -> TU def-line name
    (TU def name parsed from the def line following the //==== va header)
R2: autostub name N:  exactly one functions.tsv va has name==N, va covered,
    def name != N -> alias N -> def name
Output: tools/alias_alternatenames.tsv (stub_name TAB target_name)
"""
import re, glob, os, sys

sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
from pe_gen_stubs import covered_vas

REPO = '/home/z/my-project/repo/CDE-decomp'
OUT = f'{REPO}/tools/alias_alternatenames.tsv'


def read(p):
    return open(p, encoding='utf-8', errors='replace').read()


def main():
    cov = covered_vas()
    # va -> functions.tsv name (first wins)
    va_name = {}
    for ln in read(f'{REPO}/pdb/functions.tsv').split('\n'):
        f = ln.split('\t')
        if len(f) < 5 or f[4] != 'func':
            continue
        try:
            va = int(f[0], 16)
        except ValueError:
            continue
        if f[1].strip() and not f[1].startswith('/'):
            va_name.setdefault(va, f[1].strip())

    # TU def-line names: //==== <va> ... ==== followed by a definition
    hdr_va = {}          # va -> defined symbol name (from def line)
    name_count = {}      # free name -> count of covered vas claiming it
    pat_hdr = re.compile(r'^//+\s*=*\s*([0-9a-fA-F]{6,10})\b')
    pat_def = re.compile(r'^\s*(?:[\w ]+?[*\s])?(__thiscall\s+|__cdecl\s+)?'
                         r'([A-Za-z_]\w*)\s*\(')
    for f in sorted(glob.glob(f'{REPO}/src/game_*.c')) + \
            sorted(glob.glob(f'{REPO}/src/pilot_*.c')):
        lines = read(f).split('\n')
        for i, ln in enumerate(lines):
            m = pat_hdr.match(ln)
            if not m:
                continue
            va = int(m.group(1), 16)
            # scan down to the first definition-looking line within 12 lines
            for j in range(i + 1, min(i + 40, len(lines))):
                s = lines[j].strip()
                if not s or s.startswith('/*') or s.startswith('*') or s.startswith('//'):
                    continue
                dm = re.match(r'^(?:[\w]+[\w ]*?[\s*]+)?(__thiscall\s+|__cdecl\s+)?'
                              r'([A-Za-z_]\w*)\s*\(', s)
                if dm:
                    nm = dm.group(2)
                    if nm not in ('if', 'for', 'while', 'switch', 'return'):
                        hdr_va[va] = nm
                        if va in cov:
                            name_count[nm] = name_count.get(nm, 0) + 1
                break

    aliases = {}       # stub_name -> target
    notes = []

    # R1: relocs
    rel = read(f'{REPO}/src/cde_relocs.c')
    for m in re.finditer(r'\{\s*0x([0-9a-fA-F]+)u,\s*"([^"]+)"\s*\}', rel):
        va, S = int(m.group(1), 16), m.group(2)
        if va not in hdr_va:
            continue
        M = hdr_va[va]
        if M != S and re.match(r'^[A-Za-z_]\w*$', S):
            aliases.setdefault(S, M)
            notes.append(('R1', S, M, f'{va:06x}'))

    # R2: TU-internal free-name references: autostub name N == functions.tsv
    # name of a covered va whose def-line name differs -> alias N -> def name.
    seen_free = {}
    for va, nm in va_name.items():
        if va in cov and re.match(r'^[A-Za-z_]\w*$', nm):
            seen_free.setdefault(nm, []).append(va)
    for nm, vas in seen_free.items():
        if len(vas) != 1 or nm in aliases:
            continue
        va = vas[0]
        if va in hdr_va and hdr_va[va] != nm:
            aliases.setdefault(nm, hdr_va[va])
            notes.append(('R2', nm, hdr_va[va], f'{va:06x}'))

    with open(OUT, 'w') as f:
        f.write('# stub_name\ttarget_name\t(autostub for these names is suppressed;\n')
        f.write('# lld-link -alternatename re-binds them to the canonical symbol)\n')
        for S, M in sorted(aliases.items()):
            f.write(f'{S}\t{M}\n')
    print(f'aliases={len(aliases)} -> {OUT}')
    r1 = sum(1 for n in notes if n[0] == 'R1')
    print(f'R1 relocs={r1}  R2 free-name={len(notes) - r1}')


if __name__ == '__main__':
    main()
