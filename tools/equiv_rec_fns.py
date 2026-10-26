#!/usr/bin/env python3
"""equiv_rec_fns.py - build REC-side function TSV for ForceCreateFuncs from the
self-produced PDB publics stream (exe sym table is stripped).
  VMA = section VA (objdump -h, 0-based Idx -> 1-based PE secno) + decimal offset
  name: strip exactly one leading C decoration underscore.
Output: /tmp/rec_fns.tsv  (8-hex-va<TAB>name)  — dedup first-wins per VA."""
import re, subprocess, sys, collections

PDB = '/home/z/my-project/repo/CDE-decomp/pe_out/CDE_recomp.pdb'
EXE = '/home/z/my-project/repo/CDE-decomp/pe_out/CDE_recomp.exe'
PDBUTIL = '/home/z/my-project/toolchain/usr/bin/llvm-pdbutil-19'
OUT = '/tmp/rec_fns.tsv'


def section_vas():
    h = subprocess.run(['objdump', '-h', EXE], capture_output=True, text=True).stdout
    vas = {}
    for m in re.finditer(r'^\s*(\d+)\s+(\.\S+)\s+([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+',
                         h, re.M):
        idx, name, _sz, vma = int(m.group(1)), m.group(2), m.group(3), m.group(4)
        vas[idx + 1] = (name, int(vma, 16))  # PE secno is 1-based
    return vas


def main():
    vas = section_vas()
    print('sections:', {k: v[0] for k, v in sorted(vas.items())})
    dump = subprocess.run([PDBUTIL, 'dump', '-publics', PDB],
                          capture_output=True, text=True).stdout
    rec = re.compile(r'S_PUB32 \[size = \d+\] `([^`]+)`\s*\n\s*flags = (\w+), '
                     r'addr = (\d+):(\d+)')
    by_va = {}
    n_fn = 0
    for m in rec.finditer(dump):
        name, flags, sec, off = m.group(1), m.group(2), int(m.group(3)), int(m.group(4))
        if flags != 'function' or sec not in vas:
            continue
        va = vas[sec][1] + off
        nm = name[1:] if name.startswith('_') else name
        if not nm:
            continue
        n_fn += 1
        if va not in by_va:
            by_va[va] = nm
    rows = sorted(by_va.items())
    with open(OUT, 'w') as f:
        f.write('va\tname\n')
        for va, nm in rows:
            f.write(f'{va:08x}\t{nm}\n')
    print(f'pub32_fn={n_fn} unique_va={len(rows)} -> {OUT}')
    sec_counts = collections.Counter()
    for va in by_va:
        sec_counts[vas.get(0, ('?', 0))[0]] += 0
    lo, hi = rows[0][0], rows[-1][0]
    print(f'va range {lo:08x}..{hi:08x}')


if __name__ == '__main__':
    main()
