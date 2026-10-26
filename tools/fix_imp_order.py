#!/usr/bin/env python3
"""fix_imp_order.py - recover the reference build's __imp__ slot order.

The impstubs.c objects (zero-init `void *_imp__X = 0;`) are emitted in
sorted-name order by build.py's autostubs closure, but the REFERENCE build
(the CDE_50-era link) emitted them in its own closure order -- which is
lost.  Different slot order => the absolute addresses encoded at indirect
call sites (ff 15 / ff 25 / a1 ...) differ, even though every code byte is
identical.

This tool:
  1. scans both exes' .text for indirect references whose operand lands in
     the imp-slot window,
  2. pairs the k-th reference in A with the k-th in B (code bytes around
     the operands are identical, so sites correspond 1:1 by position),
  3. names each B slot via the lld map file,
  4. writes tools/imp_slot_order.tsv = the reference slot sequence
     (referenced names at their reference offsets; unreferenced names fill
     the gaps in their current relative order -- byte-neutral),
  5. rewrites pe_obj/cde_impstubs.c in that order.

build.py picks the order file up automatically when present.
"""
import re, struct, subprocess, sys, os

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, REPO)
import build as B  # noqa: E402

BASE_EXE = sys.argv[1] if len(sys.argv) > 1 else '/home/z/my-project/port/pe_out/CDE_recomp.exe'
MAPF     = os.path.join(B.OUT, 'CDE.map')

def load_text(p):
    b = open(p, 'rb').read()
    e = struct.unpack_from('<I', b, 0x3c)[0]
    nsec = struct.unpack_from('<H', b, e + 6)[0]
    optsz = struct.unpack_from('<H', b, e + 20)[0]
    for i in range(nsec):
        off = e + 24 + optsz + 40 * i
        name = b[off:off + 8].rstrip(b'\0').decode()
        va, rsz, ro = struct.unpack_from('<I4xII', b, off + 8)
        if name == '.text':
            return b[ro:ro + rsz], 0x400000 + va
    raise SystemExit('.text not found in ' + p)

# operand-scan patterns: [opcode-prefix bytes] + abs32
PATS = [re.compile(rb'\xff\x15(....)', re.S),   # call [abs]
        re.compile(rb'\xff\x25(....)', re.S),   # jmp  [abs]
        re.compile(rb'\xa1(....)', re.S),       # mov eax,[abs]
        re.compile(rb'\xa3(....)', re.S)]       # mov [abs],eax

def refs(text, base, lo, hi):
    """(offset, VA) of every abs32 operand landing in [lo,hi)."""
    out = []
    seen = set()
    for pat in PATS:
        for m in pat.finditer(text):
            va = struct.unpack_from('<I', m.group(1), 0)[0]
            if lo <= va < hi and m.start() not in seen:
                seen.add(m.start())
                out.append((m.start(), va))
    return sorted(out)

def main():
    A, baseA = load_text(BASE_EXE)
    Bt, baseB = load_text(os.path.join(B.OUT, 'CDE_recomp.exe'))
    # imp-slot window: generous span around the observed divergence cluster
    lo, hi = 0x8c4000, 0x8c5200
    ra = refs(A, baseA, lo, hi)
    rb = refs(Bt, baseB, lo, hi)
    print(f'refs in window: A={len(ra)} B={len(rb)}')
    if len(ra) != len(rb):
        print('!! site count mismatch -- window or patterns need tuning')
        sys.exit(1)
    # name -> VA_B from the map (imp section entries)
    name_at = {}
    for ln in open(MAPF, errors='replace'):
        m = re.match(r'\s*[0-9a-f]{4}:[0-9a-f]{8}\s+(\S+)\s+([0-9a-f]{16})', ln)
        if m and m.group(1).startswith('__imp__'):
            # map uses COFF symbol names (__imp__X); impstubs.c uses the C
            # identifier (_imp__X) -- strip the COFF cdecl underscore
            name_at[int(m.group(2), 16)] = m.group(1)[1:]
    pairs = []
    for (oa, va), (ob, vb) in zip(ra, rb):
        nm = name_at.get(vb)
        if nm is None:
            print(f'!! no map name for B slot 0x{vb:x} (site 0x{ob:x})')
            continue
        pairs.append((nm, va, vb))
    print(f'paired named refs: {len(pairs)}')
    # reference order = sort by the REFERENCE build's slot VA
    ordered = sorted(pairs, key=lambda t: t[1])
    # full sequence: take current impstubs.c order, reposition the
    # referenced names to the reference order, fill gaps with the rest
    imp_c = f'{B.OBJ}/cde_impstubs.c'
    txt = open(imp_c).read()
    defs = re.findall(r'void \*(_[A-Za-z_]\w*) = 0;', txt)
    defs = list(dict.fromkeys(defs))
    ref_names = [n for n, _, _ in ordered]
    # sanity: every referenced name must exist in impstubs
    missing = [n for n in ref_names if n not in defs]
    if missing:
        print('!! referenced names not in impstubs.c:', missing[:6])
        sys.exit(1)
    # walk the reference sequence; between consecutive referenced slots,
    # insert (gap-1) unreferenced names in their current relative order
    rest = [n for n in defs if n not in set(ref_names)]
    ri = 0
    seq = []
    for i, (nm, va, vb) in enumerate(ordered):
        nxt = ordered[i + 1][1] if i + 1 < len(ordered) else None
        seq.append(nm)
        if nxt is not None:
            gap = (nxt - va) // 4 - 1
            for _ in range(max(0, gap)):
                if ri < len(rest):
                    seq.append(rest[ri]); ri += 1
    while ri < len(rest):
        seq.append(rest[ri]); ri += 1
    out = ['/* cde_impstubs.c - dllimport pointer slots; headerless so the',
           ' * project data_map.h __imp__ macros cannot hijack the names.',
           ' * Slot order pinned by tools/imp_slot_order.tsv (reference build',
           ' * layout recovery -- see tools/fix_imp_order.py). */\n']
    for n in seq:
        out.append(f'void *{n} = 0;\n')
    open(imp_c, 'w').write('\n'.join(out))
    # persist the order for deterministic rebuilds
    tsv = os.path.join(REPO, 'tools', 'imp_slot_order.tsv')
    with open(tsv, 'w') as f:
        f.write('# imp slot emission order recovered from the reference build\n')
        f.write('# (referenced-name anchors at reference VAs; gap fillers\n')
        f.write('#  in current relative order, byte-neutral)\n')
        for n, va, vb in ordered:
            f.write(f'{n}\t0x{va:x}\t0x{vb:x}\n')
        for n in rest:
            if n not in set(ref_names):
                f.write(f'{n}\t-\t-\n')
    print(f'wrote {tsv} ({len(ordered)} anchored, {len(rest)} filler)')
    print('relink with: python3 build.py link   (impstubs.o is recompiled there)')

if __name__ == '__main__':
    main()
