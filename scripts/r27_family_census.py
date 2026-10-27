#!/usr/bin/env python3
"""r27_family_census.py - M4 错误面两族精确普查（const char* / double 取址 rvalue）
输出: (func, line, col, errclass, 站点文本) → /tmp/r27_family_stations.tsv
"""
import re
from pathlib import Path
from collections import Counter, defaultdict

RAW = Path('/tmp/my-project/work/iso_rawerrs_r26_M4.tsv')
SECS = Path('/tmp/sweep_sweep18_secs')

rows = []
for ln in RAW.read_text(errors='replace').split('\n'):
    if not ln.strip():
        continue
    p = ln.split('\t')
    if len(p) < 4:
        continue
    rows.append((p[0], int(p[1]), int(p[2]), '\t'.join(p[3:])))

# 两族分类
fam_char = []   # cannot take address of rvalue 'const char *'
fam_dbl = []    # cannot take address of rvalue 'double'
other_addr = Counter()
for f, l, c, msg in rows:
    if "cannot take the address of an rvalue of type 'const char *'" in msg:
        fam_char.append((f, l, c, msg))
    elif "cannot take the address of an rvalue of type 'double'" in msg:
        fam_dbl.append((f, l, c, msg))
    elif 'cannot take the address of an rvalue' in msg:
        m = re.search(r"rvalue of type '([^']*)'", msg)
        other_addr[m.group(1) if m else '?'] += 1

print(f"fam_char(const char*): {len(fam_char)} stations / {len(set(x[0] for x in fam_char))} funcs")
print(f"fam_dbl(double):       {len(fam_dbl)} stations / {len(set(x[0] for x in fam_dbl))} funcs")
print(f"other rvalue-address types: {dict(other_addr)}")

# sec 行号→站点文本
def site_text(func, line, col):
    hits = sorted(SECS.glob(f'*{func}*.c'))
    if not hits:
        return '<NO_SEC>'
    txt = hits[0].read_text(errors='replace').split('\n')
    if line - 1 >= len(txt):
        return '<LINE_OOB>'
    raw = txt[line - 1]
    return raw[max(0, col - 25):col + 45].strip()

out = []
for fam, tag in ((fam_char, 'CHAR'), (fam_dbl, 'DBL')):
    for f, l, c, msg in fam:
        out.append(f"{f}\t{l}\t{c}\t{tag}\t{site_text(f, l, c)}")
Path('/tmp/r27_family_stations.tsv').write_text('\n'.join(out) + '\n')
print(f"\nwrote /tmp/r27_family_stations.tsv ({len(out)} rows)")

# 站点文本形态分布
pat = Counter()
for row in out:
    txt = row.split('\t')[4]
    m = re.search(r'&[A-Za-z_][A-Za-z_0-9]*', txt)
    if m:
        tok = m.group(0)
        if tok.startswith('&s__'):
            tok = '&s__*'
        elif tok.startswith('&s_'):
            tok = '&s_*'
        elif tok.startswith('&DAT_'):
            tok = '&DAT_*'
        elif tok.startswith('&PTR_'):
            tok = '&PTR_*'
        pat[tok] += 1
    else:
        pat['<no-&-token>'] += 1
print("\n站点形态分布:")
for k, v in pat.most_common(15):
    print(f"  {v:4d}  {k}")
