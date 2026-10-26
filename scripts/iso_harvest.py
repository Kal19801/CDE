#!/usr/bin/env python3
"""iso_harvest.py - iso_ok 候选段收割为 pilot TU（r25）
用法: iso_harvest.py <batch> <pilot_num>
  batch=sweep18, pilot_num=98 → src/pilot_98_sweep18.c
组成: prelude + iso_ok 各 sec（保持 VA 注释约定供 quant 扫描）
"""
import os, re, sys
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
BATCH = sys.argv[1] if len(sys.argv) > 1 else 'sweep18'
NUM = sys.argv[2] if len(sys.argv) > 2 else '98'
SECDIR = Path(os.environ.get('SWEEP_SECDIR', f'/tmp/sweep_{BATCH}_secs'))
PRE = Path(os.environ.get('SWEEP_PRELUDE', f'/tmp/sweep_{BATCH}_draft.c.prelude'))
OKF = Path(os.environ.get('SWEEP_ISO_OK', f'/tmp/iso_ok_{BATCH}.tsv'))
OUT = REPO / 'src' / f'pilot_{NUM}_{BATCH}.c'

ok_vas = [ln.split('\t')[0].strip() for ln in OKF.read_text().split('\n') if ln.strip()]
parts = [PRE.read_text(errors='replace')]
used = []
for va in ok_vas:
    hits = (sorted(SECDIR.glob(f'{va}_*.c')) or sorted(SECDIR.glob(f'00{va}_*.c'))
            or sorted(SECDIR.glob(f'{va.zfill(8)}_*.c')))
    if not hits:
        print(f'skip {va}: sec missing'); continue
    sec = hits[0].read_text(errors='replace')
    m = re.match(r'0*([0-9a-f]+)_(.+)\.c$', hits[0].name)
    parts.append(f'\n//==== 00{va} {m.group(2)[:80]} ====\n')
    parts.append(sec)
    used.append(va)
OUT.write_text(''.join(parts), errors='replace')
print(f'harvested {len(used)} secs -> {OUT} ({OUT.stat().st_size} bytes)')
