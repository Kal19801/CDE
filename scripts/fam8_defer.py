#!/usr/bin/env python3
"""fam4_defer.py - 迭代 defer 收敛（教训 h）：错误按函数归因 -> DEFER 扩充

clang 错误行形如:  src/pilot_040_fam8.c:12345:5: error: ...
从错误行号向上找最近的 "//==== 00xxxxxx Name ====" 段头，将该 VA 加入 DEFER。
DEFER 文件保存逗号分隔 6 位 VA（供 FAM8_DEFER 环境变量）。

策略：每次调用只 defer 当前错误最多的函数（逐步收缩），避免一次砍太多。
"""
import re, sys

ERRS = sys.argv[1] if len(sys.argv) > 1 else '/tmp/errs_fam8_last.txt'
DEFER_F = sys.argv[2] if len(sys.argv) > 2 else '/tmp/fam8_defer.txt'
SRC = '/home/z/my-project/repo/CDE-decomp/src/pilot_040_fam8.c'

try:
    deferred = [s for s in open(DEFER_F).read().split(',') if s.strip()]
except FileNotFoundError:
    deferred = []

# 段头行号 -> (va, disp)
heads = []   # (lineno, va6)
try:
    for i, ln in enumerate(open(SRC, errors='replace'), 1):
        m = re.match(r'//\s*====\s*0*([0-9a-fA-F]{6,10})\b', ln)
        if m:
            heads.append((i, m.group(1).lower().lstrip('0').rjust(6, '0')[:6]
                          if len(m.group(1)) <= 6 else m.group(1).lstrip('0').zfill(6)))
except FileNotFoundError:
    print('src missing'); sys.exit(1)

def va_for_line(n):
    lo, hi = 0, len(heads) - 1
    best = None
    for ln, va in heads:
        if ln <= n:
            best = va
        else:
            break
    return best

# 统计每个错误函数的错误数
cnt = {}
for ln in open(ERRS, errors='replace'):
    m = re.search(r'pilot_040_fam8\.c:(\d+):\d+: error:', ln)
    if m:
        va = va_for_line(int(m.group(1)))
        if va:
            cnt[va] = cnt.get(va, 0) + 1

if not cnt:
    print('NO ERRORS TO DEFER'); sys.exit(0)

# top-K 策略（fam8）：同一编译内归因安全，每轮砍 3 个加速收敛（教训 am 下前台小步配合）
TOPK = 3
ranked = sorted(cnt.items(), key=lambda kv: -kv[1])
added = 0
for va, n in ranked:
    if added >= TOPK:
        break
    if va in deferred:
        continue
    deferred.append(va)
    added += 1
    print(f'defer {va} ({n} errs)')
open(DEFER_F, 'w').write(','.join(deferred))
print(f'total deferred={len(deferred)} (added {added})')
