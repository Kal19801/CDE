#!/usr/bin/env python3
"""r27_strlabel_survey.py - 字符串标签站点全调查（secs 面 + 真值表候选映射）"""
import re, glob
from pathlib import Path

SECDIR = Path('/tmp/sweep_sweep18_secs')
DMAP_TSV = Path('/home/z/my-project/repo/CDE-decomp/meta/data_items.tsv')
DNAMES_TSV = Path('/home/z/my-project/repo/CDE-decomp/meta/data_names.tsv')

# 1) 标签 → 候选地址集（data_items label 列 + data_names 名列）
cands = {}
for ln in open(DMAP_TSV, encoding='utf-8', errors='replace'):
    p = ln.rstrip('\n').split('\t')
    if len(p) >= 4 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
        cands.setdefault(p[3].strip(), set()).add(p[0])
for ln in open(DNAMES_TSV, encoding='utf-8', errors='replace'):
    p = ln.rstrip('\n').split('\t')
    if len(p) >= 2 and re.fullmatch(r'[0-9a-f]{8}', p[0].strip()):
        cands.setdefault(p[1].strip(), set()).add(p[0])

for lab in ['s__', 's___', 's____', 's___1', 's__txt', 's__s_K', 's_Dash']:
    print(f'{lab}: {sorted(cands.get(lab, []))}')

# 2) secs 里全部 s_ 标签站点（含 bare）
print('\n=== secs 站点形态 ===')
site_lines = []
for f in sorted(glob.glob(str(SECDIR / '*.c'))):
    txt = open(f, encoding='utf-8', errors='replace').read()
    for m in re.finditer(r'(&)?\bs___?0?[A-Za-z0-9_]*(?![\w])', txt):
        ln_no = txt[:m.start()].count('\n') + 1
        line = txt.split('\n')[ln_no - 1].strip()
        site_lines.append((Path(f).name[:8], ln_no, m.group(0), line[:110]))
print(f'total s_ label sites: {len(site_lines)}')
seen = set()
for va, l, tok, line in site_lines:
    key = tok
    cnt = sum(1 for v, li, t, _ in site_lines if t == key)
    if key not in seen or cnt <= 3:
        print(f'{va} L{l} [{tok}] x{cnt}: {line}')
        seen.add(key)
