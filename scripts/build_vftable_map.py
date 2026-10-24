#!/usr/bin/env python3
"""build_vftable_map.py - vftable 按名→VA 映射（r18）
源: /tmp/vftables.tsv (DumpVftables.java 输出: VA \t mangled)
归一化: llvm-undname（取末非空行，输入回显剔除）→ 去 const/`vftable' → 空格→下划线
变体: undname 输出 '>>' 无空格；decomp2c(Ghidra) 是 '> >'→'>_'。逐层注册 '>>'→'>_>' 变体
产出: scripts/vftable_map.tsv (norm_name \t va)；多 VA 冲突丢弃
"""
import re, subprocess
from collections import defaultdict

UND = '/home/z/my-project/repo/CDE-decomp/toolchain/usr/lib/llvm-19/bin/llvm-undname'
SRC = '/tmp/vftables.tsv'
OUT1 = '/home/z/my-project/scripts/vftable_map.tsv'
OUT2 = '/home/z/my-project/repo/CDE-decomp/scripts/vftable_map.tsv'
SUF = "`vftable'"

def norm(dm):
    t = dm.strip()
    if not t.endswith(SUF):
        return None
    t = t[:-len(SUF)].strip()
    if t.endswith('::'):
        t = t[:-2].strip()
    if t.startswith('const '):
        t = t[len('const '):].strip()
    if t.startswith('const'):
        t = t[len('const'):].strip()
    return re.sub(r'\s+', '_', t) if t else None

def variants(nm):
    """undname '>>' 无空格 → decomp2c '> >' 归一为 '>_'；逐层展开"""
    vs = {nm}
    s = nm
    while '>>' in s:
        s = s.replace('>>', '>_>')
        vs.add(s)
    return vs

name_vas = defaultdict(set)
n_in = n_dem = 0
for ln in open(SRC, encoding='utf-8', errors='replace'):
    p = ln.rstrip('\n').split('\t')
    if len(p) < 2 or not p[1].startswith('??_7'):
        continue
    n_in += 1
    r = subprocess.run([UND, p[1]], capture_output=True, text=True)
    out_lines = [x for x in r.stdout.split('\n') if x.strip()]
    dm = out_lines[-1] if len(out_lines) >= 2 else ''
    nm = norm(dm) if dm else None
    if nm:
        for v in variants(nm):
            name_vas[v].add(p[0].lower())
        n_dem += 1

multi = {k: v for k, v in name_vas.items() if len(v) > 1}
for out in (OUT1, OUT2):
    with open(out, 'w', encoding='utf-8') as f:
        f.write('# norm_name\tva\n')
        for k in sorted(name_vas):
            if len(name_vas[k]) == 1:
                f.write(f'{k}\t{next(iter(name_vas[k]))}\n')
print(f'in={n_in} demangled={n_dem} names+variants={len(name_vas)} multi={len(multi)}')
for k, v in list(multi.items())[:4]:
    print('  MULTI', k, sorted(v))
for probe in ('util::IArray<enum_CrewDepartment::Type>', 'util::Darray<double>',
              'util::Reflectable', 'util::Darray<struct_util::Line2<double>_>',
              'util::Darray<struct_ItineraryNode>',
              'util::Darray<struct_util::Cylinder<double>_>'):
    hit = name_vas.get(probe)
    print(f'  probe {probe!r}:', sorted(hit) if hit else 'MISS')
