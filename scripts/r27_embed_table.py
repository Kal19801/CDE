#!/usr/bin/env python3
"""r27_embed_table.py - 将 /tmp/r27_str_content3.py 的表体机械嵌入 sweep_assemble.py
（替换 _r27_load_strtable 的 return 块 —— 零手打，杜绝捏造地址再犯）"""
import re
from pathlib import Path

NEW = Path('/tmp/r27_str_content3.py').read_text()
SA = Path('/home/z/my-project/repo/CDE-decomp/scripts/sweep_assemble.py')
src = SA.read_text()

# 抽出新表函数体
mnew = re.search(r'(    return \{.*?\n    \})', NEW, re.S)
assert mnew, '新表体解析失败'
new_body = mnew.group(1)

# 替换旧表体（从 '    return {' 到对应的 '    }'）
mold = re.search(r"(def _r27_load_strtable\(.*?return \{\n)(.*?)(\n    \})", src, re.S)
assert mold, '旧表体定位失败'
src = src[:mold.start(2)] + new_body.split('\n', 1)[1] + src[mold.end(3):]
SA.write_text(src)

# 校验: 嵌入后 import 一致性
import importlib.util, sys
spec = importlib.util.spec_from_file_location('sa_v', str(SA))
m = importlib.util.module_from_spec(spec)
sys.modules['sa_v'] = m
spec.loader.exec_module(m)
tab = m._STR_BYLINE
print(f"embedded funcs={len(tab)} pairs={sum(len(v) for v in tab.values())}")
print('spot:', tab.get('67c870'), tab.get('5b6f30'), tab.get('7406f0'))
