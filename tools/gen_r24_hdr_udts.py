#!/usr/bin/env python3
"""gen_r24_hdr_udts.py - r24: emit Ghidra UDT TSV for classes the r23 header YIELDED
(TAG_DEFINED / INT_TD). Those classes exist in Ghidra with r23 PDB layout (bases as
_base_X wrappers, _padN gaps) while the C side uses the OLD header layout - the split
caused ~5.2k no-member errors. Fix: parse the C header definitions and apply THE SAME
layout to Ghidra, so decompiled member access matches the compiled header exactly.

Output: /tmp/my-project/work/r24_hdr_udt.tsv  (UDT/MEMB rows, ApplyTypesR24 format)
"""
import re
import sys
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
UDT = Path('/tmp/my-project/work/r23_udt.tsv')
OUT = Path('/tmp/my-project/work/r24_hdr_udt.tsv')

PRIM_SIZE = {
    'char': 1, 'unsigned char': 1, 'signed char': 1, 'short': 2, 'unsigned short': 2,
    'int': 4, 'unsigned int': 4, 'long': 4, 'unsigned long': 4, 'float': 4,
    'double': 8, 'long long': 8, 'unsigned long long': 8, 'bool': 1, 'void': 1,
}


def load_lib():
    lib = {}
    cur = None
    for ln in open(UDT, encoding='utf-8', errors='replace'):
        p = ln.rstrip('\n').split('\t')
        if p[0] == 'UDT' and len(p) >= 4:
            cur = {'size': int(p[2]), 'kind': p[3], 'mems': []}
            lib[p[1]] = cur
        elif p[0] == 'MEMB' and len(p) >= 6 and cur:
            lib[p[1]]['mems'].append((p[2], int(p[3]), p[4], int(p[5])))
    return lib


LIB = load_lib()

import importlib.util as _ilu
_spec = _ilu.spec_from_file_location('g23', str(REPO / 'tools' / 'gen_r23_types_header.py'))
_g23 = _ilu.module_from_spec(_spec)
_spec.loader.exec_module(_g23)
_ESCN = _g23.ESC_NORM


def fold(k):
    return __import__('re').sub(r'_+', '_', k).strip('_')


def resolve_tag(tag):
    """pdb.h tag text -> LIB display name (via r23 ESC_NORM chain)"""
    if tag in LIB:
        return tag
    d = _ESCN.get(fold(tag))
    if d:
        return d
    return None



def escname(disp):
    """display name -> C esc name (same chain as the sweep pipeline)"""
    s = disp.replace('::', '__').replace('<', '_L_').replace('>', '_G_')
    s = s.replace(' ', '_').replace(',', '_').replace('*', '_P_')
    s = re.sub(r'_+', '_', s).strip('_')
    return s


def norm_disp(esc):
    """esc name -> possible display names, for LIB lookup (reverse of escname)"""
    out = [esc]
    return out


def parse_headers():
    """parse struct/union definitions from the ALIVE type headers only
    (port_prelude includes cde_types_pdb.h + compat + l2; tpl/unified/clean are dead)"""
    defs = {}
    hdrs = [str(REPO / 'src' / 'cde_types_pdb.h'),
            str(REPO / 'src' / 'cde_types_compat.h'),
            str(REPO / 'src' / 'cde_l2_resid.h'),
            str(REPO / 'src' / 'cde_dym.h'),
            str(REPO / 'src' / 'cde_stackdefs.h')]
    for h in hdrs:
        if 'r23' in h:
            continue
        t = Path(h).read_text(errors='replace')
        t = re.sub(r'/\*.*?\*/', '', t, flags=re.S)
        t = re.sub(r'//[^\n]*', '', t)
        for m in re.finditer(r'\b(struct|union)\s+([A-Za-z_]\w*)\s*\{', t):
            tag = m.group(2)
            kind = m.group(1)
            i = m.end()
            depth = 1
            start = i
            while i < len(t) and depth > 0:
                if t[i] == '{':
                    depth += 1
                elif t[i] == '}':
                    depth -= 1
                i += 1
            body = t[start:i - 1]
            # tail: "} Name;" (typedef'd separate) - we only need the tag def
            defs[tag] = (kind, body)
    return defs


def split_members(body):
    """split struct body into top-level member declarations (respect nested braces)"""
    out = []
    depth = 0
    cur = ''
    for ch in body:
        if ch == '{':
            depth += 1
            cur += ch
        elif ch == '}':
            depth -= 1
            cur += ch
        elif ch == ';' and depth == 0:
            if cur.strip():
                out.append(cur.strip())
            cur = ''
        else:
            cur += ch
    if cur.strip():
        out.append(cur.strip())
    return out


def member_type_size(decl):
    """parse one member decl -> (name, basetype, ptr, arr, esize_or_None)"""
    d = decl.strip()
    # anonymous union/struct block: "union { ... } [name];"
    m = re.match(r'^(union|struct)\s*\{(.*)\}\s*(?:([A-Za-z_]\w*)\s*)?$', d, flags=re.S)
    if m:
        inner = split_members(m.group(2))
        return ('__anon__', m.group(1), inner, m.group(3) or '', 0, None)
    # arrays: TYPE name[N];
    m = re.match(r'^(.*?[\s*])?([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]$', d)
    if m and not d.endswith('*'):
        base = (m.group(1) or '').strip()
        name = m.group(2)
        n = int(m.group(3))
        ptr = base.count('*')
        bt = base.replace('*', '').strip()
        return (name, bt, ptr, n, None, None)
    # pointer: TYPE *name; / TYPE **name;
    m = re.match(r'^(.*?)([A-Za-z_]\w*)\s*$', d)
    if not m:
        return None
    name = m.group(2)
    base = m.group(1).strip()
    ptr = base.count('*')
    bt = base.replace('*', '').strip()
    bt = re.sub(r'^(?:(?:const|volatile|mutable|struct|union|enum)\s+)+', '', bt)
    esz = PRIM_SIZE.get(bt)
    if esz is None:
        # esc name -> lib size
        e = bt
        sz = LIB.get(e, {}).get('size') if e in LIB else None
        if sz is None:
            # try escname of a display name lookup (lib keys are display names!)
            disp = None
            if e in LIB:
                disp = e
            else:
                # search lib by esc match
                escmap = LIB_ESC.get(e)
                if escmap:
                    disp = escmap
                    sz = LIB[disp]['size']
        else:
            disp = e
        return (name, bt, ptr, 0, sz, disp)
    return (name, bt, ptr, 0, esz, None)


# build esc->display map once
LIB_ESC = {}
for _d in LIB:
    LIB_ESC.setdefault(escname(_d), _d)


def type_size_from_text(bt, ptr, arr):
    """size of one C type occurrence: prim / esc-tag via LIB_ESC / fallback None"""
    if ptr:
        es = 4
        return es * arr if arr else es
    bt = bt.strip()
    if bt in PRIM_SIZE:
        es = PRIM_SIZE[bt]
    else:
        d = resolve_tag(bt) or (bt if bt in LIB else None)
        if not d:
            return None
        es = LIB[d]['size']
    return es * arr if arr else es


def compute_layout(tag, kind, body):
    """pure C-text walk: offsets from member order, sizes from type text with
    delta fallback; matches the compiled header exactly."""
    disp = LIB_ESC.get(tag)
    total = LIB[disp]['size'] if disp else None
    if total is None:
        return None
    items = split_members(body)
    parsed = []
    for it in items:
        pr = member_type_size(it)
        if pr is None:
            return None
        parsed.append(pr)
    # flat expansion: anon union/struct blocks expand inline at the current offset
    flat = []  # (name, kind2, [inner parsed]) for blocks / (name, bt, ptr, arr, esz) for members
    for pr in parsed:
        if pr[0] == '__anon__':
            inner = []
            ok = True
            for decl in pr[2]:
                ipr = member_type_size(decl)
                if ipr is None or ipr[0] == '__anon__':
                    ok = False
                    break
                inner.append(ipr)
            if not ok:
                return None
            flat.append(('__block__', pr[1], inner, pr[3]))
        else:
            flat.append(pr)
    # walk: first estimate sizes from type text
    est = []
    for f in flat:
        if isinstance(f, tuple) and f and f[0] == '__block__':
            _, k2, inner, blkname = f
            if k2 == 'union':
                sizes = []
                for ipr in inner:
                    isz = type_size_from_text(ipr[1], ipr[2], ipr[3])
                    if isz is None:
                        t2 = LIB_ESC.get(ipr[1])
                        isz = LIB[t2]['size'] if t2 else None
                    if isz is None:
                        isz = 4
                    sizes.append(isz)
                est.append(('block', 'union', inner, blkname, max(sizes)))
            else:
                tot = 0
                for ipr in inner:
                    isz = type_size_from_text(ipr[1], ipr[2], ipr[3])
                    if isz is None:
                        isz = 4
                    tot += isz
                est.append(('block', 'struct', inner, blkname, tot))
        else:
            name, bt, ptr, arr, esz, disp2 = f
            sz = type_size_from_text(bt, ptr, arr)
            est.append(('mem', name, bt, ptr, arr, sz))
    # resolve block sizes via delta: walk twice - first with estimates, then
    # fix blocks whose estimate disagrees with next-member alignment by delta
    # (approximate: for members with None size, use delta to next start)
    starts = []
    cur = 0
    for e in est:
        starts.append(cur)
        if e[0] == 'block':
            cur += e[4]
        else:
            cur += e[5] if e[5] is not None else 4
    # total check
    if cur > total + 64:
        return None
    out = []
    cur = 0
    for i, e in enumerate(est):
        nxt = starts[i + 1] if i + 1 < len(starts) else total
        if e[0] == 'block':
            _, k2, inner, blkname = e
            off0 = cur
            c2 = off0
            for ipr in inner:
                name, bt, ptr, arr, esz, disp2 = ipr
                isz = type_size_from_text(bt, ptr, arr)
                if isz is None:
                    isz = 4
                nm = (blkname + '.' + name) if blkname else name
                ts = bt if bt in PRIM_SIZE else bt
                if ptr:
                    ts = ts + '*' * ptr
                elif arr:
                    ts = ts + f'[{arr}]'
                out.append((nm, c2, ts, isz))
                c2 += isz if k2 == 'struct' else 0
            if k2 == 'union':
                pass
            cur = nxt if nxt > off0 else off0 + e[4]
        else:
            _, name, bt, ptr, arr, sz = e
            mpad = re.match(r'_pad_0x([0-9a-fA-F]+)_\d+$', name)
            if mpad:
                # pdb.h pad anchor: offset encoded in the name
                o = int(mpad.group(1), 16)
                if o < cur:
                    # already covered by previous member (drift overlap) - drop pad
                    continue
                if o > cur:
                    # drift gap: clamp previous member to end at this pad
                    prev = out[-1] if out else None
                    if prev is not None and prev[1] < o:
                        out[-1] = (prev[0], prev[1], prev[2], o - prev[1])
                    cur = o
                ts = bt if bt in PRIM_SIZE else bt
                out.append((name, cur, ts, 4))
                cur += 4
                continue
            if sz is None:
                sz = max(nxt - cur, 1)
            ts = bt if bt in PRIM_SIZE else bt
            if ptr:
                ts = ts + '*' * ptr
            elif arr:
                ts = ts + f'[{arr}]'
            out.append((name, cur, ts, sz))
            cur += sz
    return out, total


def main():
    defs = parse_headers()
    # which classes did r23 yield? esc in TAG_DEFINED/INT_TD - recompute the sets
    import glob as _g
    tag_def, int_td = set(), set()
    p_tag = re.compile(r'\b(?:struct|union|enum)\s+([A-Za-z_]\w*)\s*\{')
    p_int = re.compile(r'\btypedef\s+(?:int|void\s*\*|unsigned\s+\w+|signed\s+\w+|float|double|long\s+long|char|short)\s+([A-Za-z_][A-Za-z0-9_]*)\s*(?:,[^;]*)?;')
    for h in (['cde_types_pdb.h', 'cde_types_compat.h', 'cde_l2_resid.h',
               'cde_dym.h', 'cde_stackdefs.h']):
        t = (REPO / 'src' / h).read_text(errors='replace')
        for mm in p_tag.finditer(t):
            tag_def.add(mm.group(1))
        for mm in p_int.finditer(t):
            int_td.add(mm.group(1))
    rows = []
    made = 0
    for tag, (kind, body) in sorted(defs.items()):
        if tag not in tag_def and tag not in int_td:
            continue
        disp = LIB_ESC.get(tag)
        if not disp:
            continue
        r = compute_layout(tag, kind, body)
        if not r:
            continue
        mems, total = r
        if not mems:
            continue
        rows.append(f"UDT\t{tag}\t{total}\t{kind}")
        for (n, o, ts, s) in mems:
            rows.append(f"MEMB\t{tag}\t{n}\t{o}\t{ts or ''}\t{s}")
        made += 1
    OUT.write_text('\n'.join(rows) + '\n')
    print(f"hdr_udts={made} rows={len(rows)} -> {OUT}")


if __name__ == '__main__':
    main()
