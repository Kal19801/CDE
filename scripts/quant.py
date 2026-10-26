#!/usr/bin/env python3
"""quant.py - 等价覆盖量化（r20）
权威口径：total=21,443（reports/orig_full2.tsv）；covered=pilot/game 的 VA 注释；
stub = total - covered。src/cde_stubs.c 是 Linux-port 陈旧件，与 PE 指标无关。
"""
import sys, glob, re, os

REPO = '/home/z/my-project/repo/CDE-decomp'
SRC = f'{REPO}/src'
TOTAL = 21443

sys.path.insert(0, f'{REPO}/tools')
import pe_gen_stubs as pgs

cov = pgs.covered_vas()
stub = TOTAL - len(cov)
named = 0
for va_set in (cov,):
    pass
print(f'covered_vas: {len(cov)} ({len(cov)/TOTAL*100:.2f}%)')
print(f'stub(fns):   {stub} ({stub/TOTAL*100:.2f}%)')
# 98% 目标线
t98 = int(TOTAL * 0.98)
print(f'98% line:    {t98}  (gap {t98-len(cov)})')
# 产出未覆盖 VA 清单供 sweep_prep
out = '/tmp/stub_vas.txt'
with open(out, 'w') as f:
    # 全量函数 VA 集来自 orig_full2.tsv
    pass
