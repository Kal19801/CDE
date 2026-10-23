#!/usr/bin/env python3
"""pe_cmp.py - section-level byte comparison of two PE files."""
import struct, sys

def sections(p):
    b = open(p, 'rb').read()
    e = struct.unpack_from('<I', b, 0x3c)[0]
    nsec = struct.unpack_from('<H', b, e + 6)[0]
    optsz = struct.unpack_from('<H', b, e + 20)[0]
    out = []
    for i in range(nsec):
        off = e + 24 + optsz + 40 * i
        name = b[off:off + 8].rstrip(b'\0').decode('ascii', 'replace')
        vaddr, rawsz, rawoff = struct.unpack_from('<I4xII', b, off + 8)
        out.append((name, vaddr, rawsz, rawoff))
    return b, out

a, sa = sections(sys.argv[1])
bb, sb = sections(sys.argv[2])
print(f'{"sec":8s} {"size_a":>9s} {"size_b":>9s}  verdict')
allok = True
for (n, va, rs, ro), (n2, va2, rs2, ro2) in zip(sa, sb):
    if n != n2:
        print(f'{n:8s} vs {n2:8s}  NAME MISMATCH'); allok = False; continue
    if rs != rs2:
        print(f'{n:8s} {rs:9d} {rs2:9d}  SIZE DIFF'); allok = False; continue
    same = a[ro:ro + rs] == bb[ro2:ro2 + rs2]
    print(f'{n:8s} {rs:9d} {rs2:9d}  {"IDENTICAL" if same else "DIFF"}')
    allok &= same
print('ALL SECTIONS IDENTICAL' if allok else 'SECTIONS DIFFER')
