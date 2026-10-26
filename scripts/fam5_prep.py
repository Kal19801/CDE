#!/usr/bin/env python3
"""fam5_prep.py - batch-friendly families (SpacecraftTargeting/ModuleCompartment/
WorldObject/CameraManager/UIWidget). 通用化自 fam4_prep.py：
  - VA 注释位宽 {6,10}（教训：pilot_034 用 10 位 VA，6-8 位正则漏计覆盖）
  - 类清单改为 fam5 五族
生成 BatchDecomp TSV：thiscall、未覆盖、按 VA 排序。
"""
import re, glob
from collections import Counter

SRC = '/home/z/my-project/repo/CDE-decomp/src'
TSV = '/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv'
OUT = '/home/z/my-project/scripts/fam5_batch.tsv'
CLASSES = ['SpacecraftTargeting', 'ModuleCompartment', 'WorldObject',
           'CameraManager', 'UIWidget']

cov = set()
for f in glob.glob(f'{SRC}/game_*.c') + glob.glob(f'{SRC}/pilot_*.c'):
    for ln in open(f, encoding='utf-8', errors='replace'):
        m = re.match(r'\s*//+\s*=*\s*([0-9a-fA-F]{6,10})\b', ln)
        if m:
            cov.add(int(m.group(1), 16))

rows = []
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
        if cls in CLASSES:
            rows.append((p[0], f'{cls}::{p[1]}'))

rows.sort()
with open(OUT, 'w', encoding='utf-8') as f:
    f.write('# fam5 batch decomp TSV (va\\tClass::name)\n')
    for va, nm in rows:
        f.write(f'{va}\t{nm}\n')
c = Counter(nm.split('::')[0] for _, nm in rows)
print(f'wrote {len(rows)} rows -> {OUT}: {dict(c)}')
