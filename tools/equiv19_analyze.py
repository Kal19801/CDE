#!/usr/bin/env python3
"""equiv19_analyze.py - layered equivalence quantification for equiv19_pairs.csv.
Layers: NAMED joins split by real (orig VA covered by a real TU) vs stub;
FUN_IDENTITY (all stubs by construction); MISS/FUN_MISS counts.
Also: byte coverage from orig_audit_r3.tsv, worst-real list."""
import csv, sys, collections

sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
from pe_gen_stubs import covered_vas

PAIRS = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_pairs.csv'
AUDIT = '/home/z/my-project/work/orig_audit_r3.tsv'
OUT = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_layers.txt'


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
                va = int(p[3], 16)
                sz = int(p[4])
            except ValueError:
                continue
            sizes[va] = sz
    total_bytes = sum(sizes.values())
    cov_bytes = sum(sizes.get(va, 0) for va in cov)

    layers = collections.defaultdict(list)
    with open(PAIRS) as f:
        for row in csv.DictReader(f, delimiter='|'):
            layers[row['layer']].append(row)

    out = []
    out.append('CDE equivalence layered quantification (equiv19, medium_32, fresh sigs)')
    out.append(f'covered_vas={len(cov)}  total_bytes={total_bytes}  covered_bytes={cov_bytes}')
    out.append(f'byte_coverage={cov_bytes / total_bytes:.4f}')
    out.append('')

    real, stub = [], []
    for r in layers['NAMED']:
        try:
            va = int(r['orig_addr'], 16)
        except ValueError:
            continue
        (real if va in cov else stub).append(r)
    fn = layers.get('FUN_IDENTITY', [])

    def stats(rows, tag):
        sims = [float(r['similarity']) for r in rows]
        if not sims:
            out.append(f'{tag}: n=0')
            return
        sims.sort()
        n = len(sims)
        out.append(f'{tag}: n={n} mean={sum(sims) / n:.4f} median={sims[n // 2]:.4f}')
        for t in (0.99, 0.95, 0.90, 0.80, 0.50):
            out.append(f'  sim_ge_{t}: {sum(1 for s in sims if s >= t)}')
        out.append(f'  sim_eq_1.0: {sum(1 for s in sims if s >= 0.99999)}')
        rb = sum(sizes.get(int(r['orig_addr'], 16), 0) for r in rows if r['orig_addr'])
        out.append(f'  orig_bytes={rb}')

    stats(real, 'NAMED_real (covered by real TU)')
    stats(stub, 'NAMED_stub')
    stats(fn, 'FUN_IDENTITY (auto-stubs)')
    out.append(f'MISS={len(layers.get("MISS", []))}  FUN_MISS={len(layers.get("FUN_MISS", []))}')
    out.append('')

    real.sort(key=lambda r: float(r['similarity']))
    out.append('== worst 40 NAMED_real (similarity ascending) ==')
    out.append('sim|orig_name|orig_addr|rec_name|rec_addr')
    for r in real[:40]:
        out.append(f"{r['similarity']}|{r['orig_name']}|{r['orig_addr']}|{r['rec_name']}|{r['rec_addr']}")
    out.append('')
    out.append('== best-of-real headcount ==')
    sims = sorted(float(r['similarity']) for r in real)
    for q in (0.05, 0.10, 0.25):
        out.append(f'  p{int(q * 100)}={sims[int(q * (len(sims) - 1))]:.4f}')

    txt = '\n'.join(out) + '\n'
    open(OUT, 'w').write(txt)
    print(txt)


if __name__ == '__main__':
    main()
