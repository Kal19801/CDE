#!/usr/bin/env python3
"""defer_pool.py - 重建 fam4/5/6 defer 池名单并按病灶类目分诊

defer 名单 = 批次 TSV 全集 − src pilot 中已还原（VA 注释扫描 {6,10}）
病灶 8 类（r13 归因）：
  A stack0xNNNNNN 伪符号        B ___xmm_ 常量+_UNK_ 数据（数学群）
  C libm_sse2 丢参（decomp UB） D Maybe/Vec2<int> 模板逃逸缺项
  E Graphics::GlobalState 数据引用  F CDE_PMF 未知名（跨族）
  G 裸 C++ def 行（ctor/dtor）  H COLORREF GDI 型
启发式分诊基于函数名与批次类；精确归因需重跑 assemble（等 orig exe 恢复后）。
"""
import re, glob
from collections import Counter
from pathlib import Path

SRC = '/home/z/my-project/repo/CDE-decomp/src'
SCRIPTS = '/home/z/my-project/scripts'

cov = set()
for f in glob.glob(f'{SRC}/game_*.c') + glob.glob(f'{SRC}/pilot_*.c'):
    for ln in open(f, encoding='utf-8', errors='replace'):
        m = re.match(r'\s*//+\s*=*\s*([0-9a-fA-F]{6,10})\b', ln)
        if m:
            cov.add(int(m.group(1), 16))

def load_batch(path, cls_filter=None):
    rows = []
    for ln in open(path, encoding='utf-8'):
        ln = ln.strip()
        if not ln or ln.startswith('#'):
            continue
        va, nm = ln.split('\t')[:2]
        rows.append((va, nm))
    return rows

# fam6 批次重建（Itinerary 单族，规则同 fam6_prep）
rows6 = []
for line in open('/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv', encoding='utf-8'):
    p = line.rstrip('\n').split('\t')
    if len(p) < 6 or p[4] != 'func' or p[2] != '__thiscall':
        continue
    if int(p[0], 16) in cov or not p[5].startswith('/CDE.pdb/'):
        continue
    if p[5][len('/CDE.pdb/'):].rstrip(' *') == 'Itinerary':
        rows6.append((p[0], f'Itinerary::{p[1]}'))
rows6.sort()
open(f'{SCRIPTS}/fam6_batch_rebuilt.tsv', 'w').write(
    '# fam6 batch rebuilt (va\\tClass::name)\n' +
    ''.join(f'{va}\t{nm}\n' for va, nm in rows6))

pools = {}
pools['fam5'] = load_batch('/home/z/my-project/repo/CDE-decomp/scripts/fam5_batch.tsv')
pools['fam6'] = rows6
# fam4 批次 TSV 丢失——从族规则重建（TacticalManager/Body/SpacecraftComponent/CraftInstance
# 中的"当时未覆盖"已不可精确复原（部分后来被 fam5/7 覆盖），改为：fam7 批次外的
# fam4 四族剩余 = 当前仍未覆盖者，与 fam5/fam6 defer 取并集近似）
rows4 = []
for line in open('/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv', encoding='utf-8'):
    p = line.rstrip('\n').split('\t')
    if len(p) < 6 or p[4] != 'func' or p[2] != '__thiscall':
        continue
    if int(p[0], 16) in cov or not p[5].startswith('/CDE.pdb/'):
        continue
    cls = p[5][len('/CDE.pdb/'):].rstrip(' *')
    if cls in ('TacticalManager', 'Body', 'SpacecraftComponent', 'CraftInstance'):
        rows4.append((p[0], f'{cls}::{p[1]}'))
rows4.sort()
pools['fam4剩余(近似)'] = rows4

# fam5 重新过滤（repo TSV 是当时批次；fam5 还原了 58）
cov5_defer = [(va, nm) for va, nm in pools['fam5'] if int(va, 16) not in cov]
cov6_defer = [(va, nm) for va, nm in pools['fam6'] if int(va, 16) not in cov]

# 病灶启发式
def bucket(nm):
    n = nm.lower()
    if any(k in n for k in ('draw', 'render', 'paint', 'blit')):
        return 'E-Graphics'
    if any(k in n for k in ('vector', 'matrix', 'angle', 'interpolat', 'curve', 'orbit')):
        return 'B-math/xmm'
    if any(k in n for k in ('node', 'trajectory', 'path')):
        return 'D-template/Orbit'
    return 'A-unknown(待重跑assemble归因)'

print('=== defer 池重建 ===')
print(f'fam5 defer: {len(cov5_defer)}/127')
print(f'fam6 defer: {len(cov6_defer)}/78')
print(f'fam4四族+fam7批外近似: {len(rows4)}（含 fam7 批内待还原者）')
allc = Counter(bucket(nm) for _, nm in cov5_defer + cov6_defer)
print('病灶启发式分布(fam5+fam6 defer):', dict(allc))
with open(f'{SCRIPTS}/defer_pool.tsv', 'w') as f:
    f.write('# defer pool (fam5+fam6, va\\tClass::name)\n')
    for va, nm in sorted(cov5_defer + cov6_defer, key=lambda r: int(r[0], 16)):
        f.write(f'{va}\t{nm}\n')
print(f'wrote {SCRIPTS}/defer_pool.tsv')
