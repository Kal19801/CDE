#!/usr/bin/env python3
"""pdb_parse_r23.py - parse the original PDB type/publics dumps into flat
libraries the Ghidra applier (ApplyTypesR23.java) consumes byte-exactly.

Inputs (already produced):
  /tmp/my-project/work/pdb_types.txt    llvm-pdbutil dump -types  (TPI)
  /tmp/my-project/work/orig_publics.txt llvm-pdbutil dump -publics (GSI)
  /tmp/orig/CDE.exe                     PE section table

Outputs:
  /tmp/my-project/work/r23_udt.tsv   UDT name/size/member/bases flat lib
  /tmp/my-project/work/r23_pub.tsv   va \t mangled \t kind
"""
import re, sys, json, struct
from collections import defaultdict

TPI  = '/tmp/my-project/work/pdb_types.txt'
PUBS = '/tmp/my-project/work/orig_publics.txt'
EXE  = '/tmp/orig/CDE.exe'
OUT_UDT = '/tmp/my-project/work/r23_udt.tsv'
OUT_PUB = '/tmp/my-project/work/r23_pub.tsv'
OUT_IDX = '/tmp/my-project/work/r23_udt_index.tsv'

# ---------------------------------------------------------------- records
rec_hdr = re.compile(r'^\s{2,6}0x([0-9A-Fa-f]{4,8}) \| (LF_[A-Z0-9_]+) \[size = \d+\](?: `([^`]*)`)?')
ann_re  = re.compile(r'0x([0-9A-Fa-f]{4,8}) \(([a-zA-Z_][a-zA-Z0-9_ ]*)\)')

def load_records(path):
    recs = {}
    order = []
    cur = None
    for ln in open(path, errors='replace'):
        m = rec_hdr.match(ln)
        if m:
            idx = int(m.group(1), 16)
            cur = (m.group(2), m.group(3), [])
            recs[idx] = cur
            order.append(idx)
        elif cur is not None:
            cur[2].append(ln.rstrip('\n'))
    return recs, order

PRIM_SIZE = {
    'void': None, 'char': 1, 'unsigned char': 1, 'signed char': 1, 'int8': 1, 'uchar': 1,
    'wchar_t': 2, 'short': 2, 'unsigned short': 2, 'short int': 2, 'int16': 2, 'ushort': 2,
    'int': 4, 'unsigned int': 4, 'long': 4, 'unsigned long': 4, 'int32': 4, 'uint': 4,
    'bool': 4,   # TPI bool32 in this stream (LF_BOOL32 annotated as bool, size 4)
    'float': 4, 'double': 8, 'int64': 8, 'unsigned int64': 8, 'uint64': 8,
    'long long': 8, 'unsigned long long': 8, '__int64': 8, 'HANDLE': 4, 'HRESULT': 4,
}

def main():
    recs, order = load_records(TPI)
    print(f'records: {len(recs)}')

    # primitive annotations: any "0xNNNN (name)" seen in dump lines
    prim_name = {}
    prim_idx_range = (0, 0x1000)
    for idx, (kind, name, body) in recs.items():
        for ln in body:
            for m in ann_re.finditer(ln):
                i = int(m.group(1), 16)
                if i < 0x1000 and i not in prim_name:
                    prim_name[i] = m.group(2).strip()
    def prim(i):
        return prim_name.get(i)

    # ---- type table -----------------------------------------------------
    fwd_to = {}       # udt idx -> def idx
    udt_name = {}     # def idx -> display name
    udt_kind = {}     # def idx -> 'class'|'struct'|'union'
    udt_size = {}     # def idx -> sizeof
    udt_fl   = {}     # def idx -> fieldlist idx
    udt_vt   = {}     # def idx -> vtable type idx
    arr_cache = {}

    for idx, (kind, name, body) in recs.items():
        if kind not in ('LF_CLASS', 'LF_STRUCTURE', 'LF_UNION'):
            continue
        uniq = None; fref = None; sz = 0; fl = None; vt = None
        for ln in body:
            s = ln.strip()
            if s.startswith('unique name:'):
                uniq = s.split('`')[1] if '`' in s else None
            elif s.startswith('vtable:'):
                mm = re.match(r'vtable: (0x[0-9A-Fa-f]+|<no type>), base list: ([^,]+), field list: ([^$]+)$', s)
                if mm:
                    vt = mm.group(1) if mm.group(1).startswith('0x') else None
                    fls = mm.group(3).strip()
                    fl = int(fls, 16) if fls.startswith('0x') else None
            elif s.startswith('options:'):
                if 'forward ref (->' in s:
                    fref = int(re.search(r'forward ref \(-> (0x[0-9A-Fa-f]+)\)', s).group(1), 16)
                mm = re.search(r'sizeof (\d+)', s)
                if mm: sz = int(mm.group(1))
        if uniq is None:
            continue  # anonymous
        if fref:
            fwd_to[idx] = fref
            continue
        # full definition
        dname = name if name else uniq
        udt_name[idx] = dname
        udt_kind[idx] = {'LF_CLASS': 'class', 'LF_STRUCTURE': 'struct', 'LF_UNION': 'union'}[kind]
        udt_size[idx] = sz
        udt_fl[idx] = fl
        udt_vt[idx] = vt

    print(f'udt defs: {len(udt_name)} (fwd refs {len(fwd_to)})')

    def defidx(i):
        seen = set()
        while i in fwd_to:
            if i in seen: return None
            seen.add(i); i = fwd_to[i]
        return i

    def udt_disp(i):
        d = defidx(i)
        return udt_name.get(d)

    # ---- type resolution -------------------------------------------------
    def rec_field(kind_i, want):
        k, n, body = recs[kind_i]
        for ln in body:
            s = ln.strip()
            if s.startswith(want):
                return s
        return None

    def tsz(i, depth=0):
        """(typestr, size) for type index i; typestr None => unknown."""
        if depth > 24: return (None, 0)
        if i < 0x1000:
            nm = prim(i) or 'int'
            sz = PRIM_SIZE.get(nm)
            if nm == 'void': return ('void', 0)
            if sz is None: sz = 4
            nm2 = {'unsigned long': 'dword', 'unsigned int': 'dword', 'long': 'int',
                   'unsigned short': 'word', 'wchar_t': 'ushort', 'unsigned char': 'byte',
                   'unsigned int64': 'qword', 'long long': 'longlong', '__int64': 'longlong',
                   'unsigned long long': 'qword', 'signed char': 'char', 'HANDLE': 'dword',
                   'HRESULT': 'int', 'bool': 'int'}.get(nm, nm)
            return (nm2, sz)
        r = recs.get(i)
        if r is None: return (None, 0)
        kind, name, body = r
        if kind == 'LF_POINTER':
            # ptr32 => 4 bytes; ptr64 => 8
            sz = 8 if any('ptr64' in ln for ln in body[:2]) else 4
            ref = None
            for ln in body:
                m = re.search(r'referent = (0x[0-9A-Fa-f]+)', ln)
                if m: ref = int(m.group(1), 16); break
            t, _ = tsz(ref, depth+1) if ref else (None, 0)
            return ((t or 'void') + ' *', sz) if t else (None, sz)
        if kind == 'LF_MODIFIER':
            ref = None
            for ln in body:
                m = re.search(r'referent = (0x[0-9A-Fa-f]+)', ln)
                if m: ref = int(m.group(1), 16); break
            return tsz(ref, depth+1) if ref else (None, 0)
        if kind == 'LF_BITFIELD':
            ref = None
            for ln in body:
                m = re.search(r'type = (0x[0-9A-Fa-f]+)', ln)
                if m: ref = int(m.group(1), 16); break
            return tsz(ref, depth+1) if ref else (None, 0)
        if kind == 'LF_ARRAY':
            s = rec_field(i, 'size:')
            m = re.match(r'size: (\d+),', s or '')
            total = int(m.group(1)) if m else 0
            ref = None
            for ln in body:
                m2 = re.search(r'element type: (0x[0-9A-Fa-f]+)', ln)
                if m2: ref = int(m2.group(1), 16); break
            t, esz = tsz(ref, depth+1) if ref else (None, 1)
            if t is None: return (None, total or 0)
            n = total // esz if esz else 0
            if total == 0: n = 0
            return (f'{t}[{n}]', total)
        if kind in ('LF_CLASS', 'LF_STRUCTURE', 'LF_UNION'):
            d = udt_disp(i)
            if d is None: return (None, 0)
            sz = udt_size.get(defidx(i), 0)
            return (san(d), sz)
        if kind == 'LF_ENUM':
            d = udt_disp(i)
            return ((san(d) if d else 'int'), 4)
        if kind in ('LF_PROCEDURE', 'LF_MFUNCTION'):
            return ('void *', 4)  # fn-ptr member: keep layout, semantics via publics
        if kind == 'LF_UNION_MEMBER_X':
            pass
        return (None, 0)

    def san(n):
        # Ghidra-safe type name (strip '*' and spaces from UDT display names)
        return n.replace('*', '@').replace(' ', '_')

    # ---- field lists -> members ------------------------------------------
    mem_m   = re.compile(r'- LF_MEMBER \[name = `([^`]*)`, Type = (0x[0-9A-Fa-f]+)(?: \([^)]*\))?, offset = (\d+)')
    bcls_m  = re.compile(r'- LF_(BCLASS|VBCLASS)')
    bcont_m = re.compile(r'type = (0x[0-9A-Fa-f]+)(?: \([^)]*\))?, offset = (\d+)')
    vfun_m  = re.compile(r'- LF_VFUNCTAB')

    out = open(OUT_UDT, 'w')
    idxout = open(OUT_IDX, 'w')
    n_emit = 0; n_nomemb = 0
    for i in sorted(udt_name):
        kind = udt_kind[i]; sz = udt_size[i]; fl = udt_fl[i]
        name = san(udt_name[i])
        if sz <= 0:
            continue
        members = []; bases = []; has_vt = False
        if fl and fl in recs:
            k2, n2, body2 = recs[fl]
            pend_base = False
            for ln in body2:
                s = ln.strip()
                m = mem_m.match(s)
                if m:
                    mn, ti, off = m.group(1), int(m.group(2), 16), int(m.group(3))
                    t, ts = tsz(ti)
                    members.append((mn, off, t, ts))
                    pend_base = False
                    continue
                if bcls_m.match(s):
                    pend_base = True
                    continue
                if pend_base:
                    mb = bcont_m.match(s)
                    if mb and mb.group(1) != '0x0':
                        bi = int(mb.group(1), 16); boff = int(mb.group(2))
                        bt, bts = tsz(bi)
                        if bt and bts:
                            bases.append((bt, boff, bts))
                    pend_base = False
                    continue
                if vfun_m.match(s) or 'LF_VFUNCTAB' in s:
                    has_vt = True
                    continue
        if udt_vt[i]:
            has_vt = True
        if not members and not has_vt:
            n_nomemb += 1
            continue
        # emit: UDT header + BASE/MEMB rows
        out.write(f'UDT\t{name}\t{sz}\t{kind}\n')
        if has_vt:
            out.write(f'VTAB\t{name}\n')
        for bt, boff, bts in bases:
            out.write(f'BASE\t{name}\t{bt}\t{boff}\t{bts}\n')
        for mn, off, t, ts in members:
            if not mn: continue
            out.write(f'MEMB\t{name}\t{mn}\t{off}\t{t or ""}\t{ts}\n')
        idxout.write(f'{name}\t{sz}\t{kind}\n')
        n_emit += 1
    out.close(); idxout.close()
    print(f'udt emitted: {n_emit} (no-member skipped {n_nomemb})')

    # ---- publics -> VA ----------------------------------------------------
    secs = []
    f = open(EXE, 'rb').read()
    pe = struct.unpack_from('<I', f, 0x3c)[0]
    nsec = struct.unpack_from('<H', f, pe+6)[0]
    optsz = struct.unpack_from('<H', f, pe+20)[0]
    ibase = struct.unpack_from('<I', f, pe+24+28)[0]
    off = pe + 24 + optsz
    for i in range(nsec):
        vsz, va = struct.unpack_from('<II', f, off+8)
        secs.append((va, vsz))
        off += 40
    pub_re = re.compile(r'\s*\d+ \| S_PUB32 \[size = \d+\] `([^`]+)`')
    flg_re = re.compile(r'flags = (function|none), addr = (\d{4}):(\d+)')
    pubs = []
    cur = None
    seen_va = set()
    for ln in open(PUBS, errors='replace'):
        m = pub_re.match(ln)
        if m:
            cur = m.group(1); continue
        m = flg_re.match(ln.strip())
        if m and cur is not None:
            isfn = m.group(1) == 'function'
            sec = int(m.group(2)) - 1
            o = int(m.group(3))
            if 0 <= sec < len(secs):
                va = ibase + secs[sec][0] + o
                if va not in seen_va:
                    seen_va.add(va)
                    pubs.append((va, cur, 'func' if isfn else 'data'))
            cur = None
    with open(OUT_PUB, 'w') as g:
        for va, nm, k in sorted(pubs):
            g.write(f'{va:08x}\t{nm}\t{k}\n')
    print(f'publics: {len(pubs)} (func {sum(1 for p in pubs if p[2]=="func")}, data {sum(1 for p in pubs if p[2]=="data")})')

if __name__ == '__main__':
    main()
