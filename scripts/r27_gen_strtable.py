#!/usr/bin/env python3
"""r27_gen_strtable.py - 生成 strlabel_fix 行号键控定址表（嵌入 sweep_assemble.py）
唯一命中 → 每站点行同址；order-paired → 按行序配对；NOHIT → 手工取证值
"""
import re
from pathlib import Path

SECS = Path('/tmp/sweep_sweep18_secs')

# order-paired (disasm 地址序 ↔ sec 行序)
ORDER_PAIRED = {
    '7406f0': ('s__', ['0091e17c', '0092f384', '0091e17c', '0092f384', '0091e17c']),
    '8972b0': ('s__', ['0092f384', '0091e17c']),
    '897630': ('s__', ['0092f384', '0091e17c', '0092f384']),
}
# 手工取证 (NOHIT/宏剥替)
MANUAL = {
    '68efe0': {'s___1': '00933548'},   # "^-1" push @68f39b → CharStringLength
    '85dc90': {'s__txt': '0091e580'},  # ".txt"
    '89fc80': {'s__txt': '0091e580'},  # ".txt"
    '6909a0': {'s__s_K': '00929830'},  # "K"
}
# objdump 解析结果 (unique) — /tmp/r27_strlabel_resolved.tsv
UNIQUE = {}
for ln in Path('/tmp/r27_strlabel_resolved.tsv').read_text().split('\n'):
    if '\tunique\t' not in ln:
        continue
    f6, lab, va = ln.split('\t')[:3]
    UNIQUE.setdefault(f6, {})[lab] = va

# 扫全部 secs 的 &s_ 站点 (func → line → [(label, ord)])
sites = {}
for f in sorted(SECS.glob('*.c')):
    f6 = f.name.split('_')[0].lstrip('0')
    txt = f.read_text(errors='replace')
    for ln_no, line in enumerate(txt.split('\n'), 1):
        for m in re.finditer(r'&(s_[A-Za-z0-9_]+)', line):
            sites.setdefault(f6, {}).setdefault(ln_no, []).append(m.group(1))

table = {}
missing = []
# order-paired 跨行运行计数（行内 enumerate 会重置 → 全配首址的 bug）
pair_idx = {}
for f6, lines in sorted(sites.items()):
    for ln_no, labels in sorted(lines.items()):
        for i, lab in enumerate(labels):
            if f6 in ORDER_PAIRED and ORDER_PAIRED[f6][0] == lab:
                k = pair_idx.get((f6, lab), 0)
                pair_idx[(f6, lab)] = k + 1
                lst = ORDER_PAIRED[f6][1]
                addr = lst[k] if k < len(lst) else None
            elif lab in MANUAL.get(f6, {}):
                addr = MANUAL[f6][lab]
            elif lab in UNIQUE.get(f6, {}):
                addr = UNIQUE[f6][lab]
            else:
                addr = None
            if addr is None:
                missing.append((f6, ln_no, lab))
                continue
            table.setdefault(f6, {})[ln_no] = (lab, addr)

print(f"table: {sum(len(v) for v in table.values())} site-lines / {len(table)} funcs")
print(f"missing: {missing}")

# 发射 Python dict 字面量
out = ['_STR_BYLINE = {']
for f6 in sorted(table):
    entries = ', '.join(f"{ln}: ('{lab}', '{addr}')" for ln, (lab, addr) in sorted(table[f6].items()))
    out.append(f"    '{f6}': {{{entries}}},")
out.append('}')
Path('/tmp/r27_str_byline.py').write_text('\n'.join(out) + '\n')
print("wrote /tmp/r27_str_byline.py")
print('\n'.join(out[:8]))
