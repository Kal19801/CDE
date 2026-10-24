#!/usr/bin/env python3
"""equiv20_final.py - layered quantification for equiv20 (post alias/shell-fix),
19-vs-20 delta, rec-missing (thunk-blocked) accounting."""
import csv, re, sys, collections, json

sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
from pe_gen_stubs import covered_vas

PAIRS19 = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_pairs.csv'
PAIRS20 = '/home/z/my-project/repo/CDE-decomp/reports/equiv20_pairs.csv'
RECX = '/tmp/sigs/rec20.xml'
ORIGX = '/tmp/sigs/orig.xml'
AUDIT = '/home/z/my-project/work/orig_audit_r3.tsv'
OUT = '/home/z/my-project/repo/CDE-decomp/reports/equiv20_layers.txt'

FD = re.compile(r'<fdesc name="([^"]*)" addr="0x([0-9a-f]+)"[^>]*>(.*?)</fdesc>', re.S)
HH = re.compile(r'<hash>(0x[0-9a-f]+)</hash>')


def load_empty(path):
    txt = open(path, encoding='utf-8', errors='replace').read()
    empty = set()
    addrs = set()
    for m in FD.finditer(txt):
        addrs.add(int(m.group(2), 16))
        if not HH.findall(m.group(3)):
            empty.add(m.group(1))
    return empty, addrs


def main():
    cov = covered_vas()
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

    oempty, _ = load_empty(ORIGX)
    rempty, recaddr = load_empty(RECX)
    tsv_va = set()
    for ln in open('/tmp/rec_fns.tsv'):
        p = ln.rstrip('\n').split('\t')
        if p[0] != 'va':
            try:
                tsv_va.add(int(p[0], 16))
            except ValueError:
                pass
    rec_missing = tsv_va - recaddr
    print(f'rec fdesc addrs={len(recaddr)} tsv={len(tsv_va)} missing={len(rec_missing)}')

    def layer(pairs_path, tag):
        real, dropped, stub = [], [], []
        with open(pairs_path) as f:
            for r in csv.DictReader(f, delimiter='|'):
                if r['layer'] != 'NAMED':
                    continue
                try:
                    va = int(r['orig_addr'], 16)
                except ValueError:
                    continue
                if va not in cov:
                    stub.append(r)
                    continue
                if (r['orig_name'] in oempty or r['rec_name'] in rempty or
                        (r['rec_addr'] and int(r['rec_addr'], 16) in rec_missing)):
                    dropped.append(r)
                else:
                    real.append(r)
        def st(rows):
            sims = sorted(float(r['similarity']) for r in rows)
            if not sims:
                return 'n=0'
            n = len(sims)
            return (f'n={n} mean={sum(sims)/n:.4f} median={sims[n//2]:.4f} '
                    f'ge99={sum(1 for s in sims if s>=0.99)} '
                    f'ge95={sum(1 for s in sims if s>=0.95)} '
                    f'ge90={sum(1 for s in sims if s>=0.9)} '
                    f'ge80={sum(1 for s in sims if s>=0.8)} '
                    f'ge50={sum(1 for s in sims if s>=0.5)} '
                    f'eq1={sum(1 for s in sims if s>=0.99999)}')
        print(f'[{tag}]')
        print(f'  NAMED_real_clean: {st(real)}')
        print(f'  NAMED_stub: {st(stub)}')
        print(f'  SIG_DROPPED: {st(dropped)}')
        return real

    real19 = layer(PAIRS19, 'equiv19 baseline (pre alias/shell-fix)')
    real20 = layer(PAIRS20, 'equiv20 (post alias/shell-fix)')

    out = []
    out.append('CDE equivalence layered quantification')
    out.append(f'rec_missing (thunk-blocked, no rec sig): {len(rec_missing)}')
    out.append('')
    r19 = sorted(float(r['similarity']) for r in real19)
    r20 = sorted(float(r['similarity']) for r in real20)
    out.append(f'equiv19 NAMED_real_clean n={len(r19)} mean={sum(r19)/len(r19):.4f}')
    out.append(f'equiv20 NAMED_real_clean n={len(r20)} mean={sum(r20)/len(r20):.4f}')
    for t in (0.99, 0.95, 0.9, 0.8, 0.5):
        out.append(f'  ge{t}: 19={sum(1 for s in r19 if s>=t)} 20={sum(1 for s in r20 if s>=t)}')
    # worst 25 of equiv20 real
    real20.sort(key=lambda r: float(r['similarity']))
    out.append('')
    out.append('== worst 25 equiv20 NAMED_real_clean ==')
    for r in real20[:25]:
        sz = sizes.get(int(r['orig_addr'], 16), 0)
        out.append(f"{r['similarity']}|{r['orig_name']}|{r['orig_addr']}|{sz}B")
    open(OUT, 'w').write('\n'.join(out) + '\n')
    print('\n'.join(out[-45:]))
    json.dump(sorted(hex(v) for v in rec_missing),
              open('/tmp/rec_missing.json', 'w'))


if __name__ == '__main__':
    main()
