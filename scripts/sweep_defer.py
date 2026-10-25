#!/usr/bin/env python3
"""sweep_defer.py - 错误按函数归因 → 分层核弹 defer（r19）

fam8 的自适应 top-K（8/4/2）在万函数规模收敛轮数爆炸。分层策略：
  TOT>3000: 核弹——defer 所有 ≥3 错函数（上限 150/轮，归因噪声防护）
  TOT>800:  top-16   TOT>300: top-8   其余: top-2（尾部精确收缩）
用法: sweep_defer.py <errs> <defer_file> <draft_pilot.c>
"""
import re, sys, os

ERRS, DEFF, SRC = sys.argv[1], sys.argv[2], sys.argv[3]

deferred = []
if os.path.exists(DEFF):
    deferred = [s for s in open(DEFF).read().split(',') if s.strip()]

heads = []
for i, ln in enumerate(open(SRC, errors='replace'), 1):
    m = re.match(r'//\s*====\s*0*([0-9a-fA-F]{6,10})\b', ln)
    if m:
        heads.append((i, m.group(1).lower().lstrip('0') or '0'))


def va_for_line(n):
    best = None
    for ln, va in heads:
        if ln <= n:
            best = va
        else:
            break
    return best


cnt = {}
for ln in open(ERRS, errors='replace'):
    m = re.search(r'[A-Za-z_0-9./]*\.c:(\d+):\d+: error:', ln)
    if m:
        va = va_for_line(int(m.group(1)))
        if va:
            cnt[va] = cnt.get(va, 0) + 1

if not cnt:
    print('NO ERRORS TO DEFER')
    sys.exit(0)

TOT = sum(cnt.values())
ranked = sorted(cnt.items(), key=lambda kv: -kv[1])
if TOT > 3000:
    cand, cap = [kv for kv in ranked if kv[1] >= 3], 150
elif TOT > 800:
    cand, cap = ranked, 16
elif TOT > 300:
    cand, cap = ranked, 8
elif TOT > 100:
    cand, cap = ranked, 6
else:
    # 尾部清仓：错误面已收敛到硬化病灶（栈伪符号/SSE 向量/未解析模板），
    # 逐轮 top-K 只是无谓轮次——全数 defer（这些函数无论如何都到不了真身）
    cand, cap = ranked, len(ranked)

added = 0
for va, n in cand:
    if added >= cap:
        break
    if va in deferred:
        continue
    deferred.append(va)
    added += 1

open(DEFF, 'w').write(','.join(deferred))
print(f'defer +{added} (errs={TOT}) total_deferred={len(deferred)}')
