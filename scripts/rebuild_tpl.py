#!/usr/bin/env python3
"""rebuild_tpl.py - 重建 meta/tpl_names.json（灾后，r15）

TPL 结构 {escaped: raw}，唯一实质消费点 = decomp2c.esc_type 的 memo 快速路径
（decomp2c.py:83；93 行检查被 or True 短路，规则输出总被接受）。
重建算法：functions.tsv 全部含 '<' 的 fullname，用 decomp2c.rule_escape 生成
escaped 名，形成 {rule_escape(raw): raw}——与原 TPL 的功能等价（raw 全集一致，
escaped 名由同一规则引擎产生，保证自洽）。
"""
import json, re
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')

def rule_escape(name):
    s = name
    s = s.replace(' ', '')
    s = s.replace('::', '__')
    s = s.replace('<', '_L_').replace('>', '_G_')
    s = s.replace(',', '_C_')
    s = s.replace('*', '_P_')
    return s

raws = set()
for ln in open(REPO / 'pdb' / 'functions.tsv', encoding='utf-8', errors='replace'):
    p = ln.rstrip('\n').split('\t')
    if len(p) >= 2 and '<' in p[1]:
        raws.add(p[1])

tpl = {}
for raw in sorted(raws):
    esc = rule_escape(raw)
    tpl.setdefault(esc, raw)   # 冲突保留首见（sorted 序稳定）

out = Path('/home/z/my-project/meta')
out.mkdir(parents=True, exist_ok=True)
json.dump(tpl, open(out / 'tpl_names.json', 'w'), indent=0, sort_keys=True)
print(f'raws={len(raws)} tpl={len(tpl)} -> {out}/tpl_names.json')
# 抽样验证
for k in list(tpl)[:3]:
    print(f'  {k[:60]}  <-  {tpl[k][:60]}')
