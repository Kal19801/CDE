#!/usr/bin/env python3
"""xmm_truth.py - ___xmm_<32hex> 常量的字节序真值：在原版 .rdata 中搜索 16 字节序列
Ghidra 的 ___xmm_<hex> 名 = 128 位常量位样。名字位序 vs 内存字节序有歧义 →
在原版二进制里实测两种排布，唯一起 hit 才出宏（等价纪律：不猜）。
输出 meta/xmm_truth.tsv: <32hex 小写> -> 0 (as-is) / 1 (双字交换)
"""
import re, os
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
EXE = os.environ.get('CDE_ORIG_EXE', '/tmp/orig/CDE.exe')
data = open(EXE, 'rb').read()

# 收集全部 TU 里的 ___xmm_<16hex/32hex> 名
names = set()
import glob
for fp in glob.glob('/tmp/sweep_tu_sweep0*/*.tu.c'):
    for m in re.finditer(r'___xmm_([0-9a-fA-F]{16,32})\b', open(fp, errors='replace').read()):
        names.add(m.group(1).lower())
print(f'xmm names: {len(names)}')

out = []
for h in sorted(names):
    if len(h) != 32:
        continue
    b_asis = bytes.fromhex(h)
    # 变体：两个 8 字节半交换（Ghidra __xmm_<hi>_<lo> 显示序 vs 内存序）
    b_swap = b_asis[8:16] + b_asis[0:8]
    hits_asis = data.count(b_asis)
    hits_swap = data.count(b_swap)
    if hits_asis > 0 and hits_swap == 0:
        out.append((h, 0))
    elif hits_swap > 0 and hits_asis == 0:
        out.append((h, 1))
    elif hits_asis > 0 and hits_swap > 0:
        out.append((h, 0))   # 两者都在——取 as-is（名字即位样）
    else:
        out.append((h, -1))  # 二进制中不存在（纯合成常量）——不仲裁
with open(REPO / 'meta' / 'xmm_truth.tsv', 'w') as f:
    f.write('# hex\torder(0=as-is,1=swap,-1=not-found)\n')
    for h, o in out:
        f.write(f'{h}\t{o}\n')
n_ok = sum(1 for _, o in out if o >= 0)
print(f'arbitrated: {n_ok}/{len(out)} -> meta/xmm_truth.tsv')
