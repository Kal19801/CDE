#!/usr/bin/env python3
"""equiv19_worst.py - real-deficiency shortlist: NAMED pairs where rec side is
a real TU function (orig VA covered), both vectors non-empty, orig body big
enough to be above thunk noise (>=150B), similarity < 0.70, excluding template
wrapper name noise. Output: reports/equiv19_shortlist.tsv + stdout top rows."""
import csv, re, sys, json

sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
from pe_gen_stubs import covered_vas

PAIRS = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_pairs.csv'
AUDIT = '/home/z/my-project/work/orig_audit_r3.tsv'
OUT = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_shortlist.tsv'
DROP = json.load(open('/tmp/sig_dropped_names.json'))
DROPSET = set(DROP)

sizes = {}
with open(AUDIT) as f:
    next(f)
    for ln in f:
        p = ln.rstrip('\n').split('\t')
        if len(p) < 6:
            continue
        try:
            sizes[int(p[3], 16)] = int(p[4])
        except ValueError:
            pass

cov = covered_vas()
NOISE = re.compile(r'DelegateFactory|MethodCaller|operator|Thunk|__o\d')
rows = []
with open(PAIRS) as f:
    for r in csv.DictReader(f, delimiter='|'):
        if r['layer'] != 'NAMED':
            continue
        try:
            va = int(r['orig_addr'], 16)
        except ValueError:
            continue
        if va not in cov or r['orig_name'] in DROPSET:
            continue
        sz = sizes.get(va, 0)
        sim = float(r['similarity'])
        if sz < 150 or sim >= 0.70:
            continue
        rows.append((sim, r['orig_name'], va, sz, r['rec_addr']))

rows.sort()
with open(OUT, 'w') as f:
    f.write('sim\torig_name\torig_va\torig_size\trec_addr\n')
    for sim, nm, va, sz, raddr in rows:
        f.write(f'{sim:.4f}\t{nm}\t{va:06x}\t{sz}\t{raddr}\n')
print(f'shortlist n={len(rows)} -> {OUT}')
for sim, nm, va, sz, raddr in rows[:45]:
    print(f'{sim:.4f}  {nm[:80]}  orig={va:06x} sz={sz}B rec={raddr}')
