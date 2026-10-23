#!/usr/bin/env python3
"""CdeEquiv4.py - python equivalence report v4.
Fresh dumpsigs XMLs (full LSH vectors) + comprehensive name normalization:
  rec: tpl_names -> safe escape-inverse -> op dict -> _00ADDR strip -> __oN strip
  orig: param/backtick strip
  + FUN_ identity joins.  Cosine sim on 5-dim+ vectors.
Usage: CdeEquiv4.py <origXml> <recXml> <outCsv> <outSummary>"""
import sys, re, json, math, html, collections

tpl = json.load(open('/home/z/my-project/meta/tpl_names.json'))
try:
    rec2orig = json.load(open('/home/z/my-project/reports/rec2orig.json'))
except FileNotFoundError:
    rec2orig = {}
ESC = [('_L_', '<'), ('_G_', '>'), ('_C_', ','), ('_P_', '*')]
ADDR = re.compile(r'_00[0-9a-f]{6}$')
OVF = re.compile(r'__o\d+$|__ov\d+$')
OP = {
    'op_assign': 'operator=', 'op_subscript': 'operator[]', 'op_iadd': 'operator+=',
    'op_arrow': 'operator->', 'op_eq': 'operator==', 'op_mul': 'operator*',
    'op_add': 'operator+', 'op_new': 'operator_new', 'op_ne': 'operator!=',
    'op_imul': 'operator*=', 'op_delete': 'operator_delete',
}
NONAL = re.compile(r'[^A-Za-z0-9]')
SEC = re.compile(r'^\.|^/|^_RDATA|^GCTL')

def key(n):
    # MSVC local-scope names (`X'::__l2::`Y' and their C-identifier escapes):
    # identity lives in the TAIL after the scope marker
    n = re.split(r'::__l2::|_{2,}l2_{2,}', n)[-1]
    return NONAL.sub('', n)

def orig_norm(n):
    if '::__l2::' in n:
        n = n.split('::__l2::')[-1]
    i = n.find('(')
    if i > 0:
        n = n[:i]
    n = n.rstrip("'").rstrip()
    n = re.sub(r'const$', '', n).strip()
    return n

def rec_norm(n):
    if n in rec2orig:
        return rec2orig[n]
    if n in tpl:
        n = tpl[n]
    elif '_L_' in n or '_G_' in n:
        for a, b in ESC:
            n = n.replace(a, b)
    n = ADDR.sub('', n)
    m = re.search(r'__(op_\w+?)((__o\d+|__ov\d+)*)$', n)
    if m and m.group(1) in OP:
        n = n[:m.start()] + '__' + OP[m.group(1)] + (m.group(2) or '')
    n = OVF.sub('', n)
    return n

def is_ph(n):
    return n.startswith(('FUN_', 'thunk_')) or SEC.match(n)

FD = re.compile(r'<fdesc name="([^"]*)" addr="0x([0-9a-f]+)"[^>]*>(.*?)</fdesc>', re.S)
HH = re.compile(r'<hash>(0x[0-9a-f]+)</hash>')

def load(path):
    txt = open(path, encoding='utf-8', errors='replace').read()
    out = []
    for m in FD.finditer(txt):
        vec = [int(h, 16) & 0xffffffff for h in HH.findall(m.group(3))]
        out.append((html.unescape(m.group(1)), m.group(2), vec))
    return out

def cosine(a, b):
    d = sum(x * y for x, y in zip(a, b))
    na = math.sqrt(sum(x * x for x in a))
    nb = math.sqrt(sum(x * x for x in b))
    if na == 0 or nb == 0:
        return 0.0
    return min(1.0, d / (na * nb))

def main():
    origXml, recXml, outCsv, outSum = sys.argv[1:5]
    orig = load(origXml)
    rec = load(recXml)
    print(f'orig fdesc={len(orig)}  rec fdesc={len(rec)}')

    rec_keys = collections.defaultdict(list)
    for n, a, v in rec:
        if is_ph(n):
            continue
        rec_keys[key(rec_norm(n))].append((n, a, v))
    rec_fun = {n: (a, v) for n, a, v in rec if n.startswith('FUN_')}
    # prefix-join index: orig XML truncates long demangled names; a long orig
    # key that is a UNIQUE PREFIX of exactly one rec key joins that function
    import bisect
    skeys = sorted(k for k in rec_keys if len(k) >= 24)
    def prefix_match(k):
        if len(k) < 32:
            return None
        i = bisect.bisect_left(skeys, k)
        hits = set()
        while i < len(skeys) and skeys[i].startswith(k):
            hits.add(skeys[i])
            i += 1
        if len(hits) == 1:
            return next(iter(hits))
        return None

    csv = open(outCsv, 'w')
    csv.write('norm_name|orig_name|orig_addr|rec_name|rec_addr|similarity|layer\n')
    sims, joined, notrep, fun_joined = [], 0, 0, 0
    for n, a, v in orig:
        if is_ph(n):
            if n in rec_fun:
                ra, rv = rec_fun[n]
                s = cosine(v, rv)
                fun_joined += 1
                joined += 1
                sims.append(s)
                csv.write(f'{n}|{n}|{a}|{n}|{ra}|{s:.4f}|FUN_IDENTITY\n')
            else:
                notrep += 1
                csv.write(f'{n}|{n}|{a}|||0|FUN_MISS\n')
            continue
        k = key(orig_norm(n))
        cands = rec_keys.get(k)
        if not cands:
            pk = prefix_match(k)
            if pk:
                cands = rec_keys[pk]
            if not cands:
                notrep += 1
                csv.write(f'{k}|{n}|{a}|||0|MISS\n')
                continue
        best, brec = -1.0, None
        for rn, ra, rv in cands:
            s = cosine(v, rv)
            if s > best:
                best, brec = s, (rn, ra)
        joined += 1
        sims.append(best)
        csv.write(f'{k}|{n}|{a}|{brec[0]}|{brec[1]}|{best:.4f}|NAMED\n')
    csv.close()

    sims.sort()
    n = len(sims)
    with open(outSum, 'w') as f:
        f.write('CDE equivalence v4 (fresh BSim sigs, python cosine, full normalization)\n')
        f.write(f'orig_functions,{len(orig)}\nrecomp_functions,{len(rec)}\n')
        f.write(f'joined,{joined}\nnot_reproduced,{notrep}\n')
        f.write(f'join_rate,{joined/max(1,len(orig)):.4f}\n')
        f.write(f'fun_identity_joined,{fun_joined}\n')
        if n:
            f.write(f'mean_similarity,{sum(sims)/n:.4f}\n')
            for t in (0.99, 0.95, 0.90, 0.80, 0.50):
                f.write(f'sim_ge_{t},{sum(1 for s in sims if s >= t)}\n')
            f.write(f'sim_eq_1.0,{sum(1 for s in sims if s >= 0.99999)}\n')
            f.write(f'median,{sims[n//2]:.4f}\n')
    print(f'joined={joined} notrep={notrep} rate={joined/max(1,len(orig)):.4f}')
    if n:
        print(f'mean={sum(sims)/n:.4f} median={sims[n//2]:.4f} ge99={sum(1 for s in sims if s>=0.99)}')

if __name__ == '__main__':
    main()
