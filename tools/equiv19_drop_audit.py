#!/usr/bin/env python3
"""equiv19_drop_audit.py - audit empty-vector (decompiler-timeout) fdescs on
both sides; reclassify affected pairs as SIG_DROPPED; recompute the real-layer
stats excluding them; persist drop lists."""
import re, json, csv, collections, sys

sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
from pe_gen_stubs import covered_vas

ORIG_XML = '/tmp/sigs/orig.xml'
REC_XML = '/tmp/sigs/rec.xml'
PAIRS = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_pairs.csv'
OUT_LAYERS = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_layers.txt'
OUT_DROP = '/home/z/my-project/repo/CDE-decomp/reports/bsim_dropped19.json'

FD = re.compile(r'<fdesc name="([^"]*)" addr="0x([0-9a-f]+)"[^>]*>(.*?)</fdesc>', re.S)
HH = re.compile(r'<hash>(0x[0-9a-f]+)</hash>')


def load(path):
    txt = open(path, encoding='utf-8', errors='replace').read()
    out = {}
    for m in FD.finditer(txt):
        n = m.group(1)
        out.setdefault(n, []).append(len(HH.findall(m.group(3))))
    return out


def main():
    orig = load(ORIG_XML)
    rec = load(REC_XML)
    odrop = sorted(n for n, hs in orig.items() if not any(hs))
    rdrop = sorted(n for n, hs in rec.items() if not any(hs))
    print(f'orig fdesc={len(orig)} empty_vec={len(odrop)}')
    print(f'rec  fdesc={len(rec)} empty_vec={len(rdrop)}')
    json.dump({'orig_empty': odrop, 'rec_empty': rdrop}, open(OUT_DROP, 'w'), indent=1)

    cov = covered_vas()
    layers = collections.defaultdict(list)
    with open(PAIRS) as f:
        for row in csv.DictReader(f, delimiter='|'):
            layers[row['layer']].append(row)

    real, dropped, stub = [], [], []
    for r in layers['NAMED']:
        try:
            va = int(r['orig_addr'], 16)
        except ValueError:
            continue
        if va not in cov:
            stub.append(r)
            continue
        if (not any(orig.get(r['orig_name'], [1]))) or (not any(rec.get(r['rec_name'], [1]))):
            dropped.append(r)
        else:
            real.append(r)

    def stats(rows, tag):
        sims = sorted(float(r['similarity']) for r in rows)
        if not sims:
            print(f'{tag}: n=0')
            return
        n = len(sims)
        print(f'{tag}: n={n} mean={sum(sims) / n:.4f} median={sims[n // 2]:.4f}')
        for t in (0.99, 0.95, 0.90, 0.80, 0.50):
            print(f'  sim_ge_{t}: {sum(1 for s in sims if s >= t)}')
        print(f'  sim_eq_1.0: {sum(1 for s in sims if s >= 0.99999)}')

    stats(real, 'NAMED_real_clean')
    stats(dropped, 'SIG_DROPPED(was zeroed)')
    stats(stub, 'NAMED_stub')

    real.sort(key=lambda r: float(r['similarity']))
    print('\n== worst 30 NAMED_real_clean ==')
    for r in real[:30]:
        print(f"{r['similarity']}|{r['orig_name']}|{r['orig_addr']}|{r['rec_addr']}")
    json.dump([r['orig_name'] for r in dropped],
              open('/tmp/sig_dropped_names.json', 'w'))
    # rewrite layers file with clean stats
    lines = open(OUT_LAYERS).read().split('\n')
    open(OUT_LAYERS, 'w').write('\n'.join(lines) +
        f'\n\nSIG_DROPPED (empty vector, decompiler timeout): orig={len(odrop)} rec={len(rdrop)}\n'
        f'NAMED_real_clean: n={len(real)} mean='
        f'{sum(float(r["similarity"]) for r in real) / max(1, len(real)):.4f}\n')


if __name__ == '__main__':
    main()
