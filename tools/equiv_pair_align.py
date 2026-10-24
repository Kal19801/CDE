#!/usr/bin/env python3
"""equiv_pair_align.py - align equiv19/equiv20 pairs by orig VA: same rec_addr
=> comparable pair (similarity must be identical; delta = compile noise).
Changed/missing rec joins => measurement artifacts of the post-fix rec program."""
import csv, sys, collections

sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
from pe_gen_stubs import covered_vas


def load(pairs):
    out = {}
    with open(pairs) as f:
        for r in csv.DictReader(f, delimiter='|'):
            if r['layer'] != 'NAMED':
                continue
            try:
                va = int(r['orig_addr'], 16)
            except ValueError:
                continue
            out[va] = r
    return out


def main():
    cov = covered_vas()
    p19 = load('/home/z/my-project/repo/CDE-decomp/reports/equiv19_pairs.csv')
    p20 = load('/home/z/my-project/repo/CDE-decomp/reports/equiv20_pairs.csv')
    same = changed = lost = gained = 0
    diffs = []
    s19 = []
    for va, r19 in p19.items():
        if va not in cov:
            continue
        r20 = p20.get(va)
        if r20 is None:
            lost += 1
            continue
        if r19['rec_addr'] == r20['rec_addr']:
            same += 1
            a, b = float(r19['similarity']), float(r20['similarity'])
            s19.append(a)
            if abs(a - b) > 1e-6:
                diffs.append((va, a, b, r19['orig_name']))
        else:
            changed += 1
    for va in p20:
        if va in cov and va not in p19:
            gained += 1
    print(f'cov pairs: same_join={same} changed_join={changed} '
          f'lost_in_20={lost} gained_in_20={gained}')
    print(f'identical similarity among same-join: {same - len(diffs)}/{same}')
    print(f'same-join subset mean(sim19)={sum(s19) / max(1, len(s19)):.4f}')
    for va, a, b, nm in diffs[:10]:
        print(f'  DIFF {va:06x} {a:.4f}->{b:.4f} {nm[:60]}')


if __name__ == '__main__':
    main()
