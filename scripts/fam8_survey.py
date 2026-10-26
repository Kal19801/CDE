#!/usr/bin/env python3
"""fam8_survey.py - 未覆盖 thiscall 具名函数按类排名（fam8 选类依据）"""
import re, glob
from collections import Counter

SRC = '/home/z/my-project/repo/CDE-decomp/src'
TSV = '/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv'

cov = set()
for f in glob.glob(f'{SRC}/game_*.c') + glob.glob(f'{SRC}/pilot_*.c'):
    for ln in open(f, encoding='utf-8', errors='replace'):
        m = re.match(r'\s*//+\s*=*\s*([0-9a-fA-F]{6,10})\b', ln)
        if m:
            cov.add(int(m.group(1), 16))

c = Counter()
total_named = 0
with open(TSV, encoding='utf-8') as f:
    for line in f:
        p = line.rstrip('\n').split('\t')
        if len(p) < 6 or p[4] != 'func':
            continue
        if p[2] != '__thiscall':
            continue
        va = int(p[0], 16)
        if va in cov:
            continue
        t = p[5]
        if not t.startswith('/CDE.pdb/'):
            continue
        cls = t[len('/CDE.pdb/'):].rstrip(' *')
        c[cls] += 1
        total_named += 1

print(f'named uncovered thiscall total: {total_named}')
for cls, n in c.most_common(30):
    print(f'{n:5d}  {cls}')
