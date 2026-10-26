#!/usr/bin/env python3
"""sweep_prep.py - 全量扫荡批次准备（r19）
所有未覆盖函数（任意调用约定/含名与无名 FUN_）按原版函数体积升序分块。
体积升序 = 简单函数优先 = 每块收敛快、真身率高（80% 目标的杠杆）。

输出: /tmp/sweep_chunks/sweepNN.tsv  (va\\tName，BatchDecomp TSV 格式)
      /tmp/sweep_chunks/MANIFEST.tsv (批次统计)
"""
import re, glob, os
from pathlib import Path
from collections import Counter

REPO = Path('/home/z/my-project/repo/CDE-decomp')
SRC = REPO / 'src'
TSV = REPO / 'pdb' / 'functions.tsv'
FULL = REPO / 'reports' / 'orig_full2.tsv'
OUTDIR = Path(os.environ.get('SWEEP_CHUNKS', '/tmp/sweep_chunks'))
CHUNK = int(os.environ.get('SWEEP_CHUNK', '800'))

cov = set()
# 仅扫真身 TU（fam8_prep 同款口径）——cde_stubs.c 的生成注释会让所有 stub 假性"已覆盖"
for f in glob.glob(f'{SRC}/game_*.c') + glob.glob(f'{SRC}/pilot_*.c'):
    for ln in open(f, encoding='utf-8', errors='replace'):
        m = re.match(r'\s*//+\s*=*\s*([0-9a-fA-F]{6,10})\b', ln)
        if m:
            cov.add(int(m.group(1), 16))

rows = {}  # va -> (name, conv)
for line in open(TSV, encoding='utf-8'):
    p = line.rstrip('\n').split('\t')
    if len(p) < 5 or p[4] != 'func':
        continue
    try:
        va = int(p[0], 16)
    except ValueError:
        continue
    if va in cov:
        continue
    rows[va] = (p[1], p[2])

sizes = {}
for line in open(FULL, encoding='utf-8', errors='replace'):
    p = line.rstrip('\n').split('\t')
    if len(p) >= 5 and re.fullmatch(r'[0-9a-f]{8}', p[3] if len(p[3]) == 8 else ''):
        try:
            sizes[int(p[3], 16)] = int(p[4])
        except ValueError:
            pass

order = sorted(rows, key=lambda v: (sizes.get(v, 10 ** 9), v))
named = [v for v in order if rows[v][0] != f'FUN_{v:08x}']
unnamed = [v for v in order if rows[v][0] == f'FUN_{v:08x}']

OUTDIR.mkdir(parents=True, exist_ok=True)
man = []
nch = 0
for i in range(0, len(order), CHUNK):
    nch += 1
    part = order[i:i + CHUNK]
    bid = f'sweep{nch:02d}'
    c = Counter('unnamed' if rows[v][0] == f'FUN_{v:08x}' else 'named' for v in part)
    with open(OUTDIR / f'{bid}.tsv', 'w', encoding='utf-8') as f:
        f.write(f'# {bid} batch decomp TSV (va\\tName) sorted by orig size asc\n')
        for v in part:
            f.write(f'{v:08x}\t{rows[v][0]}\n')
    man.append((bid, len(part), c['named'], c['unnamed'],
                sum(sizes.get(v, 0) for v in part)))

with open(OUTDIR / 'MANIFEST.tsv', 'w', encoding='utf-8') as f:
    f.write('batch\tn\tnamed\tunnamed\ttotal_bytes\n')
    for r in man:
        f.write('%s\t%d\t%d\t%d\t%d\n' % r)

print(f'uncovered={len(order)} named={len(named)} unnamed={len(unnamed)} '
      f'chunks={nch} chunk={CHUNK} -> {OUTDIR}')
for r in man[:5]:
    print('  %s n=%d named=%d unnamed=%d bytes=%d' % r)
print('  ...')
for r in man[-3:]:
    print('  %s n=%d named=%d unnamed=%d bytes=%d' % r)
