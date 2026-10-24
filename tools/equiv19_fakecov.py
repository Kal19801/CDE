#!/usr/bin/env python3
"""equiv19_fakecov.py - classify NAMED_real pairs by the rec symbol's actual
code size from the self-PDB S_GPROC32 records. code size <= 5 => the callsite
name was bound to an auto-stub (FAKE coverage); else real body."""
import re, csv, subprocess, sys, collections, json

sys.path.insert(0, '/home/z/my-project/repo/CDE-decomp/tools')
from pe_gen_stubs import covered_vas

PDB = '/home/z/my-project/repo/CDE-decomp/pe_out/CDE_recomp.pdb'
PDBUTIL = '/home/z/my-project/toolchain/usr/bin/llvm-pdbutil-19'
PAIRS = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_pairs.csv'
OUT = '/home/z/my-project/repo/CDE-decomp/reports/equiv19_fakecov.tsv'

REC = re.compile(r'S_GPROC32 \[size = \d+\] `([^`]+)`')
ADDR = re.compile(r'addr = (\d+):(\d+), code size = (\d+)')


def parse_gproc(dump):
    """line-block parse: S_GPROC32 line + following lines until blank."""
    by_name = {}
    by_va = {}
    lines = dump.split('\n')
    i = 0
    while i < len(lines):
        m = REC.search(lines[i])
        if not m:
            i += 1
            continue
        nm = m.group(1)
        blk = []
        j = i + 1
        while j < len(lines) and lines[j].strip() and 'S_' not in lines[j][:30]:
            blk.append(lines[j])
            j += 1
        for bl in blk:
            a = ADDR.search(bl)
            if a:
                sec, off, ln = int(a.group(1)), int(a.group(2)), int(a.group(3))
                if sec == 1:
                    name = nm[1:] if nm.startswith('_') else nm
                    va = 0x401000 + off
                    if name not in by_name or ln > by_name[name][1]:
                        by_name[name] = (va, ln)
                    if va not in by_va or ln > by_va[va][1]:
                        by_va[va] = (name, ln)
                break
        i = j
    return by_name, by_va


def main():
    dump = subprocess.run([PDBUTIL, 'dump', '-symbols', PDB],
                          capture_output=True, text=True).stdout
    by_name, by_va = parse_gproc(dump)
    print(f'S_GPROC32 text records={len(by_name)} unique names')

    cov = covered_vas()
    sizes = {}
    with open('/home/z/my-project/work/orig_audit_r3.tsv') as f:
        next(f)
        for ln in f:
            p = ln.rstrip('\n').split('\t')
            if len(p) < 6:
                continue
            try:
                sizes[int(p[3], 16)] = int(p[4])
            except ValueError:
                pass
    cls = collections.defaultdict(list)
    with open(PAIRS) as f:
        for r in csv.DictReader(f, delimiter='|'):
            if r['layer'] != 'NAMED':
                continue
            try:
                va = int(r['orig_addr'], 16)
            except ValueError:
                continue
            if va not in cov:
                continue
            ent = by_name.get(r['rec_name'])
            if ent is None:
                k = 'UNKNOWN'
            elif ent[1] <= 5 and sizes.get(va, 0) >= 24:
                k = 'FAKE_STUB'  # rec bound to empty stub while orig is substantial
            else:
                k = 'REAL_BODY'
            cls[k].append((float(r['similarity']), r['orig_name'], va,
                           ent[0] if ent else '', ent[1] if ent else -1, r['rec_addr']))

    for k in ('REAL_BODY', 'FAKE_STUB', 'UNKNOWN'):
        rows = cls[k]
        if not rows:
            continue
        sims = sorted(s for s, *_ in rows)
        n = len(sims)
        print(f'{k}: n={n} mean={sum(sims) / n:.4f} median={sims[n // 2]:.4f} '
              f'ge0.9={sum(1 for s in sims if s >= 0.9)} ge0.5={sum(1 for s in sims if s >= 0.5)}')

    with open(OUT, 'w') as f:
        f.write('class\tsim\torig_name\torig_va\trec_sym\trec_len\trec_addr\n')
        for k in ('FAKE_STUB', 'UNKNOWN', 'REAL_BODY'):
            for sim, nm, va, sym, ln, raddr in sorted(cls[k]):
                f.write(f'{k}\t{sim:.4f}\t{nm}\t{va:06x}\t{sym}\t{ln}\t{raddr}\n')
    print(f'-> {OUT}')

    fake = sorted(cls['FAKE_STUB'])
    print(f'\n== FAKE_STUB all ({len(fake)}) ==')
    for sim, nm, va, sym, ln, raddr in fake:
        print(f'{sim:.4f}  {nm[:76]}  orig={va:06x} rec={raddr}')


if __name__ == '__main__':
    main()
