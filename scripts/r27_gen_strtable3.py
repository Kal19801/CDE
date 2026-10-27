#!/usr/bin/env python3
"""r27_gen_strtable3.py - 全量内容锚定定址表 v3（三源机械合并, 零手打）
源1: /tmp/r27_strlabel_resolved.tsv   (45 对 objdump/PE 取证地址)
源2: ORDER_PAIRED (probe 取证的出现序地址列)
源3: MANUAL (零候选手工取证)
输出: /tmp/r27_str_content3.py —— 嵌入 sweep_assemble.py 前与源1逐对校验"""
import re
from pathlib import Path

RESOLVED = Path('/tmp/r27_strlabel_resolved.tsv')

ORDER_PAIRED = {
    '7406f0': ('s__', ['0091e17c', '0092f384', '0091e17c', '0092f384', '0091e17c']),
    '8972b0': ('s__', ['0092f384', '0091e17c']),
    '897630': ('s__', ['0092f384', '0091e17c', '0092f384']),
}
MANUAL = {
    '68efe0': {'s___1': '00933548'},
    '85dc90': {'s__txt': '0091e580'},
    '89fc80': {'s__txt': '0091e580'},
    '6909a0': {'s__s_K': '00929830'},
}
# 最小干预排除: deref 宏单址标签(& 合法可编译)不改写——s_Dash 家族实证
# (62b4e0/653c70/6cd930 三函数 s_Dash 站点均无错误)
EXCLUDE = {(f6, 's_Dash') for f6 in ('62b4e0', '653c70', '6cd930')}

# 源1: (func,label) → addr（unique 行）+ AMBIG 行（order-paired 校验用）
uniq = {}    # (f6,lab) → addr
ambig = {}   # f6 → set(addr)
for ln in RESOLVED.read_text().split('\n'):
    if not ln.strip():
        continue
    p = ln.split('\t')
    f6, lab, va, status = p[0], p[1], p[2], p[3]
    if status == 'unique':
        uniq[(f6, lab)] = va
    elif status.startswith('AMBIG'):
        addrs = re.findall(r'[0-9a-f]{8}', status)
        ambig.setdefault(f6, set()).update(addrs)

# 当前 secs 的出现数校验（残余站点）
SECS = Path('/tmp/sweep_sweep18_secs')
occ = {}
for f in sorted(SECS.glob('*.c')):
    f6 = f.name.split('_')[0].lstrip('0')
    for m in re.finditer(r'&(s_[A-Za-z0-9_]+)', f.read_text(errors='replace')):
        occ.setdefault((f6, m.group(1)), 0)
        occ[(f6, m.group(1))] += 1

out = {}
warn = []
# 源2 先行: order-paired 函数（AMBIG 行不在 uniq 源中）
for f6, (lab, lst) in sorted(ORDER_PAIRED.items()):
    n = occ.get((f6, lab), len(lst))
    if n != len(lst):
        warn.append(f'{f6}/{lab}: secs 出现 {n} != 表 {len(lst)}')
    out.setdefault(f6, {})[lab] = list(lst)
for (f6, lab), va in sorted(uniq.items()):
    if (f6, lab) in EXCLUDE:
        continue    # deref 宏合法站点不干预
    if f6 in out and lab in out[f6]:
        continue    # order-paired 已覆盖
    if lab in MANUAL.get(f6, {}):
        out.setdefault(f6, {})[lab] = MANUAL[f6][lab]
    else:
        out.setdefault(f6, {})[lab] = va
for f6, labs in sorted(MANUAL.items()):
    for lab, va in labs.items():
        out.setdefault(f6, {}).setdefault(lab, va)
# AMBIG 函数必须由 ORDER_PAIRED 覆盖
for f6 in ambig:
    if f6 not in ORDER_PAIRED:
        warn.append(f'AMBIG {f6} 未被 order-paired 覆盖: {sorted(ambig[f6])}')

print(f"funcs: {len(out)}  pairs: {sum(len(v) for v in out.values())}")
print(f"warn: {warn or '无'}")

lines = ['def _r27_load_strtable():',
         '    """函数键控字符串定址表: func6 → {label: addr8 | [出现序 addr8]}',
         '    机制化产物 v3(零手打): 源1=objdump 立即数唯一/PE 字节, 源2=probe 出现序,',
         '    源3=零候选手工取证。已修正 gen v1 行内 enumerate 序号重置 bug。"""',
         '    return {']
for f6 in sorted(out):
    ents = []
    for lab in sorted(out[f6], key=lambda x: (len(x), x)):
        a = out[f6][lab]
        if isinstance(a, list):
            ents.append(f"'{lab}': [{', '.join(repr(x) for x in a)}]")
        else:
            ents.append(f"'{lab}': '{a}'")
    lines.append(f"        '{f6}': {{{', '.join(ents)}}},")
lines.append('    }')
Path('/tmp/r27_str_content3.py').write_text('\n'.join(lines) + '\n')
print('wrote /tmp/r27_str_content3.py')
