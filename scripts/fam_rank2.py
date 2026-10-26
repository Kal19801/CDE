#!/usr/bin/env python3
"""fam_rank2.py - class families via PDB this-type column (col6), bytes from audit r3."""
import csv, re, glob
from collections import defaultdict

SRC = '/home/z/my-project/repo/CDE-decomp/src'
TSV = '/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv'

cov = set()
for f in glob.glob(f'{SRC}/game_*.c') + glob.glob(f'{SRC}/pilot_*.c'):
    for ln in open(f, encoding='utf-8', errors='replace'):
        m = re.match(r'\s*//+\s*=*\s*([0-9a-fA-F]{6,10})\b', ln)
        if m:
            cov.add(int(m.group(1), 16))

sizes = {}
with open('/home/z/my-project/repo/CDE-decomp/reports/orig_full2.tsv', encoding='utf-8') as f:
    for r in csv.DictReader(f, delimiter='\t'):
        if r.get('label') in ('orig_r3','orig_p87','r1') and r.get('entry'):
            try:
                sizes[int(r['entry'], 16)] = int(r['size'])
            except Exception:
                pass

fam = defaultdict(lambda: [0, 0, []])
free_named = [0, 0, []]  # non-thiscall named (C libs etc.)
nun = 0
with open(TSV, encoding='utf-8') as f:
    for line in f:
        p = line.rstrip('\n').split('\t')
        if len(p) < 6 or p[4] != 'func':
            continue
        va = int(p[0], 16)
        nm, cc = p[1], p[2]
        if va in cov:
            continue
        nun += 1
        if nm.startswith('FUN_') or nm.startswith('`') or nm.startswith('unknown'):
            continue
        cls = None
        if cc == '__thiscall' and p[5].startswith('/CDE.pdb/'):
            t = p[5][len('/CDE.pdb/'):]
            if t.endswith(' *') and '<' not in t and '`' not in t:
                cls = t[:-2]
        if cls is None:
            if '<' not in nm and '`' not in nm:
                free_named[0] += 1
                sz = sizes.get(va, 0)
                free_named[1] += sz
                free_named[2].append((sz, va, nm))
            continue
        fam[cls][0] += 1
        sz = sizes.get(va, 0)
        fam[cls][1] += sz
        fam[cls][2].append((sz, va, nm))

print('uncovered total =', nun)
print(f'free named (C-lib etc): n={free_named[0]} bytes={free_named[1]:,}')
ranked = sorted(fam.items(), key=lambda kv: -kv[1][1])
print(f'{"class":36s} {"n":>4s} {"bytes":>9s}')
for cls, (n, b, lst) in ranked[:30]:
    print(f'{cls[:36]:36s} {n:4d} {b:9,d}')

print()
print('--- batch-friendly: n>=12, avg<=320B, bytes>=2000 ---')
for cls, (n, b, lst) in ranked:
    if n >= 12 and b // n <= 320 and b >= 2000:
        print(f'{cls[:38]:38s} n={n:3d} bytes={b:7,d} avg={b // n:4d}')
