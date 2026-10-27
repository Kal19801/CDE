#!/usr/bin/env python3
"""r27_gen_strtable2.py - 生成内容锚定格式定址表（label → addr | 出现序 list）
从 /tmp/r27_str_byline.py（行号键控, 机制化取证产物）转换, 零手打"""
import ast
from pathlib import Path

src = Path('/tmp/r27_str_byline.py').read_text()
body = src.split('=', 1)[1].strip()
table = ast.literal_eval(body.rstrip('\n'))
print(f"source funcs: {len(table)}")

# 转换: func → {label: addr | [addr...按行序]}
out = {}
for f6, lines in table.items():
    per = {}
    for ln in sorted(lines):          # 行序 = 文本出现序
        lab, addr = lines[ln]
        per.setdefault(lab, []).append(addr)
    conv = {}
    for lab, addrs in per.items():
        uniq = set(addrs)
        conv[lab] = addrs[0] if len(uniq) == 1 else addrs   # 同址折叠 / 异址保序
    out[f6] = conv

# 发射
lines = ['def _r27_load_strtable():']
lines.insert(0, '# 机械生成: r27_gen_strtable2.py ← /tmp/r27_str_byline.py (objdump+PE 取证)')
lines.append('    """函数键控字符串定址表: func6 → {label: addr8 | [出现序 addr8]}')
lines.append('    机制化产物(零手打): 38 objdump 立即数唯一 + 3 order-paired + 4 手工取证"""')
lines.append('    return {')
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
Path('/tmp/r27_str_content.py').write_text('\n'.join(lines) + '\n')
print(f"funcs: {len(out)}, lists: {sum(1 for f in out.values() for a in f.values() if isinstance(a, list))}")
print('\n'.join(lines[3:9]))
