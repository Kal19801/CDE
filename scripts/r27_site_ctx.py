#!/usr/bin/env python3
"""r27_site_ctx.py - 从 M4 图提取指定错误类的站点源行上下文
用法: python3 r27_site_ctx.py <error-substr> <out.txt>"""
import sys, glob
from pathlib import Path

SECDIR = Path('/tmp/sweep_sweep18_secs')
RAW = Path('/tmp/my-project/work/iso_rawerrs_r26_M4.tsv')

pat = sys.argv[1]
outp = Path(sys.argv[2])

out = []
n = 0
for ln in RAW.read_text(errors='replace').split('\n'):
    if not ln.strip() or pat not in ln:
        continue
    p = ln.split('\t')
    if len(p) < 4:
        continue
    va, sl = p[0], p[1]
    msg = '\t'.join(p[3:])
    fs = glob.glob(str(SECDIR / f'{int(va,16):08x}_*.c'))
    if not fs:
        out.append(f'{va} L{sl} NOSEC: {msg[:80]}')
        continue
    lines = open(fs[0], encoding='utf-8', errors='replace').read().split('\n')
    src = lines[int(sl)-1] if 0 < int(sl) <= len(lines) else '<OOR>'
    out.append(f'{va} L{sl} c{p[2]}: {src.strip()[:150]}')
    n += 1

outp.write_text('\n'.join(out) + '\n')
print(f'wrote {n} sites -> {outp}')
