#!/usr/bin/env python3
"""r27_asm_census2.py - undeclared identifier 名字形态细分 + arity 家族全谱"""
import re
from collections import Counter
from pathlib import Path

RAW = Path('/tmp/my-project/work/iso_rawerrs_r26_M4.tsv')
rows = []
for ln in RAW.read_text(errors='replace').split('\n'):
    if not ln.strip():
        continue
    p = ln.split('\t')
    if len(p) < 4:
        continue
    rows.append((p[0], int(p[1]), int(p[2]), '\t'.join(p[3:])))

print(f'total rows: {len(rows)}')

# 1) undeclared identifier 的名字形态
und = Counter()
und_fn = Counter()
for va, l, c, m in rows:
    m1 = re.match(r"use of undeclared identifier '([^']+)'", m)
    if m1:
        name = m1.group(1)
        if name.startswith('s__'):
            k = 's__ (data label)'
        elif name.startswith('DAT_'):
            k = 'DAT_ (data)'
        elif name.startswith('FUN_'):
            k = 'FUN_ (code)'
        elif name.startswith('_'):
            k = '_other underscore'
        elif re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', name):
            k = 'plain ident'
        else:
            k = 'weird'
        und[k] += 1
        und_fn[va] += 1
print('\n=== undeclared identifier families ===')
for k, n in und.most_common():
    print(f'{n:5d}  {k}')
print(f'functions hit: {len(und_fn)}')

# 样本: s__ 名字样例
samp = [m for va, l, c, m in rows if "undeclared identifier 's__" in m][:8]
print('\n=== s__ samples ===')
for s in samp:
    print(' ', s[:120])

# 2) arity 家族全谱（消息含 'arguments to function call'）
ar = Counter()
ar_sites = []
for va, l, c, m in rows:
    if 'arguments to function call' in m or "was not specified" in m:
        s = re.sub(r"'[^']*'", "''", m)
        ar[s[:100]] += 1
        ar_sites.append((va, l, m))
print(f'\n=== arity family: {len(ar_sites)} sites ===')
for k, n in ar.most_common(12):
    print(f'{n:5d}  {k}')

# 3) expected expression 样本
ee = [(va, l, m) for va, l, m0 in [] for m in []]
ee = [(va, l, c, m) for va, l, c, m in rows if m.startswith('expected expression')]
print(f'\n=== expected expression: {len(ee)} sites, sample VAs: {sorted({v for v,_,_,_ in ee})[:12]}')

# 4) cannot take address of rvalue
cr = [(va, l, c, m) for va, l, c, m in rows if 'address of an rvalue' in m]
print(f'=== address-of-rvalue: {len(cr)} sites in {len({v for v,_,_,_ in cr})} fns')
