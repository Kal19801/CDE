#!/usr/bin/env python3
"""r27_probe_tail.py - 897630 引用序 + 68efe0 CharStringLength 调用上下文"""
import re, bisect
from pathlib import Path

DISASM = Path('/tmp/orig_disasm.txt')
vas = sorted({ln.split('\t')[0].strip().lower() for ln in open('/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv')
              if re.fullmatch(r'[0-9a-f]{8}', ln.split('\t')[0].strip())})
starts = [int(v, 16) for v in vas]
alllines = DISASM.read_text(errors='replace').split('\n')

# 函数指令范围
def func_range(func8):
    i = vas.index(func8.lower())
    lo = starts[i]
    hi = starts[i + 1] if i + 1 < len(starts) else 0xffffffff
    return lo, hi

# ---- 897630: 所有 rdata 立即数(按序) ----
lo, hi = func_range('00897630')
seq = []
for idx, ln in enumerate(alllines):
    m = re.match(r'^\s*([0-9a-f]+):', ln)
    if m:
        a = int(m.group(1), 16)
        if a >= hi:
            break
        if a >= lo:
            for im in re.finditer(r'\$?0x(9[0-9a-f]{5})\b', ln):
                seq.append((a, int(im.group(1), 16), ln.strip()[:70]))
print(f"897630 rdata-imms: {len(seq)}")
for a, v, t in seq:
    if v in (0x91e17c, 0x92f384, 0x91e128, 0x920c98, 0x922df0, 0x954590, 0x955370, 0x955b58, 0x929830):
        print(f"  @{a:08x} -> {v:08x}  {t}")

# ---- 68efe0: call 指令与前 6 行 ----
print("\n68efe0 calls:")
lo, hi = func_range('0068efe0')
idx = 0
cur = None
for idx, ln in enumerate(alllines):
    m = re.match(r'^\s*([0-9a-f]+):', ln)
    if m:
        a = int(m.group(1), 16)
        if a >= hi:
            break
        cur = a
    if cur is not None and lo <= cur < hi and re.search(r'call+l\b', ln):
        ctx = alllines[max(0, idx - 5):idx + 1]
        tgt = re.search(r'call+l\s+(0x[0-9a-f]+)', ln)
        print(f"  call @{cur:08x} -> {tgt.group(1) if tgt else '?'}")
        for c in ctx:
            print(f"      {c.strip()[:80]}")
