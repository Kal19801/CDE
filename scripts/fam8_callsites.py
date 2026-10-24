#!/usr/bin/env python3
"""fam8_callsites.py - StrategicManager 164 callsites 提取（orig exe 有序 call 目标）"""
import json, re, subprocess, sys
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
EXE = '/tmp/orig/CDE.exe'
OBJD = str(REPO / 'toolchain/usr/lib/llvm-19/bin/llvm-objdump')

VAS = [ln.split('\t')[0].lower().lstrip('0') or '0'
       for ln in open('/home/z/my-project/scripts/fam8_batch.tsv')
       if ln.strip() and not ln.startswith('#')]

vas_all = []
for ln in open(REPO / 'pdb' / 'functions.tsv'):
    va = ln.split('\t')[0].strip().lower()
    if re.fullmatch(r'[0-9a-f]{8}', va):
        vas_all.append(va)
vas_all = sorted(set(vas_all))
idx = {v: i for i, v in enumerate(vas_all)}

out = {}
for va0 in VAS:
    va = va0.zfill(8)
    if va not in idx:
        print(f'ERR {va} not in functions.tsv', file=sys.stderr)
        sys.exit(1)
    start, stop = int(va, 16), int(vas_all[idx[va] + 1], 16)
    r = subprocess.run([OBJD, '-d', f'--start-address={start:#x}', f'--stop-address={stop:#x}',
                        EXE], capture_output=True, text=True)
    if r.returncode != 0:
        print(f'ERR objdump {va}: {r.stderr[:200]}', file=sys.stderr)
        sys.exit(1)
    targets = []
    for ln in r.stdout.split('\n'):
        m = re.match(r'^\s*[0-9a-f]+:\s+(?:[0-9a-f]{2} )+\s*call[lwq]?\s+(0x[0-9a-f]+)', ln)
        if m:
            targets.append(m.group(1)[2:].lower().zfill(8))
    out['00' + va0] = targets
    print(f'{va}: {len(targets)} calls')

json.dump(out, open('/tmp/fam8_callsites.json', 'w'), indent=0)
print('WROTE /tmp/fam8_callsites.json')
