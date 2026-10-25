#!/usr/bin/env python3
"""ret_imm.py - 一次全量 objdump → 每函数 ret 立即数（被调方清栈字节数真值）
r21: hdr 签名冲突仲裁的神谕。ret N>0 = stdcall/thiscall 清栈；ret 0 = cdecl。
键：VA(6位去零) -> max(ret imm)。输出 tools/ret_imm.tsv
"""
import re, subprocess, os
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
EXE = os.environ.get('CDE_ORIG_EXE', '/tmp/orig/CDE.exe')
OBJD = str(REPO / 'toolchain/usr/lib/llvm-19/bin/llvm-objdump')

# 函数边界（起止 VA）
funcs = []
for ln in open(REPO / 'pdb' / 'functions.tsv', encoding='utf-8'):
    p = ln.rstrip('\n').split('\t')
    if len(p) >= 6 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
        try:
            funcs.append((int(p[0], 16), p[4]))
        except ValueError:
            pass
funcs.sort()
starts = [f[0] for f in funcs]
import bisect

r = subprocess.run([OBJD, '-d', EXE], capture_output=True, text=True, timeout=560)
assert r.returncode == 0, r.stderr[:300]

ret_re = re.compile(r'^\s*([0-9a-f]+):\s+(?:[0-9a-f]{2} )+\s*ret[l]?(?:\t+\$0x([0-9a-f]+))?\s*$')
imm = {}
cur = None
for ln in r.stdout.split('\n'):
    m = ret_re.match(ln)
    if m:
        va = int(m.group(1), 16)
        i = bisect.bisect_right(starts, va) - 1
        if i >= 0:
            fva = funcs[i][0]
            n = int(m.group(2), 16) if m.group(2) else 0
            if n > imm.get(fva, 0):
                imm[fva] = n
out = REPO / 'tools' / 'ret_imm.tsv'
with open(out, 'w') as f:
    for va, n in sorted(imm.items()):
        f.write(f'{va:x}\t{n}\n')
print(f'ret_imm: {len(imm)} functions -> {out}')
