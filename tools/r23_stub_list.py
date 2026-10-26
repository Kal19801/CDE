#!/usr/bin/env python3
"""r23_stub_list.py - emit current stub pool (orig_full2 entries minus covered).
Outputs /tmp/my-project/work/r23_stubs.tsv (va_hex<TAB>fullname) -- BatchDecomp
input + Java sig-retype whitelist."""
import sys, os
sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
import pe_gen_stubs as pgs

REPO = '/home/z/my-project/repo/CDE-decomp'
cov = pgs.covered_vas()
stubs = []
n_thunk = 0
for i, ln in enumerate(open(f'{REPO}/reports/orig_full2.tsv', errors='replace')):
    if i == 0:
        continue
    p = ln.rstrip('\n').split('\t')
    if len(p) < 5:
        continue
    va = int(p[3], 16)
    if va in cov:
        continue
    nm = p[1]
    if p[5] == '1':
        n_thunk += 1
        continue
    stubs.append((va, nm))
stubs.sort()
out = '/tmp/my-project/work/r23_stubs.tsv'
with open(out, 'w') as f:
    for va, nm in stubs:
        f.write(f'{va:08x}\t{nm}\n')
print(f'covered {len(cov)}, stubs {len(stubs)} (thunks skipped {n_thunk}) -> {out}')
