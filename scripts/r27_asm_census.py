#!/usr/bin/env python3
"""r27_asm_census.py - M4 累积图 asm 通道普查: &s__/ram 尺寸/参数数 三族定量"""
import re
from collections import Counter
from pathlib import Path

RAW = Path('/tmp/my-project/work/iso_rawerrs_r26_M4.tsv')

def classify(msg):
    s = re.sub(r"'[^']*'", "''", msg)
    s = re.sub(r'\([^()]*\)', '()', s)
    s = re.sub(r'\s+', ' ', s).strip()
    return s[:110]

cls = Counter()          # 类 -> 站点数
fn_err = Counter()       # va -> 错误数
fn_msg = {}              # va -> [(line,col,msg)]
for ln in RAW.read_text(errors='replace').split('\n'):
    if not ln.strip():
        continue
    p = ln.split('\t')
    if len(p) < 4:
        continue
    va, sl, col = p[0], p[1], p[2]
    msg = '\t'.join(p[3:])
    c = classify(msg)
    cls[c] += 1
    fn_err[va] += 1
    fn_msg.setdefault(va, []).append((int(sl), int(col), msg))

print(f'total error rows: {sum(cls.values())}  functions: {len(fn_err)}')
print('\n=== TOP 25 error classes ===')
for c, n in cls.most_common(25):
    print(f'{n:5d}  {c}')

# asm 通道族: &s__/s__ 定址 / ram / 参数数不匹配
asm_pat = re.compile(r'&s__|\bs__|DAT_|\bram\b|too few arguments|too many arguments|unknown type name|expected expression', re.I)
asm_rows = []
for va, lst in fn_msg.items():
    hits = [(l, c, m) for (l, c, m) in lst if asm_pat.search(m)]
    if hits:
        asm_rows.append((va, fn_err[va], hits))
print(f'\n=== asm-channel-suspect functions: {len(asm_rows)} ===')
asm_rows.sort(key=lambda x: -len(x[2]))
for va, tot, hits in asm_rows[:20]:
    print(f'{va}: total={tot} asmhits={len(hits)} e.g. {hits[0][2][:100]}')
