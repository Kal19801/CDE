#!/usr/bin/env python3
"""r27_probe_sites.py - 歧义函数指令级取证：候选地址引用指令 + 上下文"""
import re, bisect
from pathlib import Path

DISASM = Path('/tmp/orig_disasm.txt')
vas = sorted({ln.split('\t')[0].strip().lower() for ln in open('/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv')
              if re.fullmatch(r'[0-9a-f]{8}', ln.split('\t')[0].strip())})
starts = [int(v, 16) for v in vas]

# func6 → 该函数要盯的目标地址
targets = {
    '7406f0': [0x0091e17c, 0x0092f384],
    '8972b0': [0x0091e17c, 0x0092f384],
    '897630': [0x0091e17c, 0x0092f384],
    '68efe0': [0x00929830],          # 假设 s___1 = "K" (同 s__s_K)? 需验证
}

cur = None
hits = {}
alllines = DISASM.read_text(errors='replace').split('\n')
for idx, ln in enumerate(alllines):
    m = re.match(r'^\s*([0-9a-f]+):', ln)
    if m:
        a = int(m.group(1), 16)
        i = bisect.bisect_right(starts, a) - 1
        cur = ('00' + vas[i].lstrip('0')) if i >= 0 else None
    if cur and cur.lstrip('0') in targets:
        for t in targets[cur.lstrip('0')]:
            if f'0x{t:x}' in ln:
                hits.setdefault(cur.lstrip('0'), []).append((idx, a, ln.strip()))

for f6, lst in hits.items():
    print(f"=== {f6} ===")
    for idx, a, ln in lst:
        ctx = alllines[max(0, idx - 3):idx + 4]
        print(f"  --- hit @{a:x}: {ln}")
        for c in ctx:
            print(f"      {c.strip()[:90]}")
    print()
