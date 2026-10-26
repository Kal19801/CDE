#!/usr/bin/env python3
"""sweep_callsites.py - 一次性全 exe objdump → 全函数 call 目标 JSON（r19）

fam8 逐函数 objdump（每次子进程 0.5-1s）在 10k 函数规模不可行（1.5-3h）。
本脚本单次 objdump 全量反汇编 + bisect 函数归属，一次产出全战役共享的
calls_json（键格式与 fam8 完全一致：'00'+6位去零 VA → [8位目标 VA]）。
"""
import json, os, re, subprocess, bisect
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
EXE = os.environ.get('CDE_ORIG_EXE', '/tmp/orig/CDE.exe')
OBJD = str(REPO / 'toolchain/usr/lib/llvm-19/bin/llvm-objdump')
OUTF = Path(os.environ.get('SWEEP_CALLS', '/tmp/sweep_calls.json'))

vas = sorted({ln.split('\t')[0].strip().lower() for ln in open(REPO / 'pdb' / 'functions.tsv')
              if re.fullmatch(r'[0-9a-f]{8}', ln.split('\t')[0].strip())})
starts = [int(v, 16) for v in vas]
print(f'functions={len(vas)}')

r = subprocess.run([OBJD, '-d', EXE], capture_output=True, text=True, timeout=560)
assert r.returncode == 0, r.stderr[:300]
pat = re.compile(r'^\s*([0-9a-f]+):\s+(?:[0-9a-f]{2} )+\s*call[lwq]?\s+(0x[0-9a-f]+)')
calls = {}
for ln in r.stdout.split('\n'):
    m = pat.match(ln)
    if m:
        a = int(m.group(1), 16)
        t = m.group(2)[2:].lower().zfill(8)
        i = bisect.bisect_right(starts, a) - 1
        if i >= 0:
            calls.setdefault('00' + vas[i].lstrip('0'), []).append(t)
json.dump(calls, open(OUTF, 'w'))
print(f'WROTE {OUTF}: {len(calls)} functions with calls, '
      f'{sum(len(v) for v in calls.values())} call sites')
