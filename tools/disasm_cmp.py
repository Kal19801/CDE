#!/usr/bin/env python3
"""disasm_cmp.py <orig_va> <rec_va> [nbytes] - dump mnemonic sequences of orig
vs rec function for quick eyeball diff."""
import re, subprocess, sys

ORIG = '/tmp/orig/CDE.exe'
REC = '/home/z/my-project/repo/CDE-decomp/pe_out/CDE_recomp.exe'

def mns(exe, va, n):
    out = subprocess.run(['objdump', '-d', '-M', 'intel', '--start-address=' + va,
                          '--stop-address=' + hex(int(va, 16) + n), exe],
                         capture_output=True, text=True).stdout
    seq = []
    for ln in out.split('\n'):
        m = re.match(r'\s*[0-9a-f]+:\s+(?:[0-9a-f]{2} )+\s*\t(\S+)', ln)
        if m:
            seq.append(m.group(1))
    return seq

ova, rva, n = sys.argv[1], sys.argv[2], int(sys.argv[3]) if len(sys.argv) > 3 else 256
a = mns(ORIG, ova, n)
b = mns(REC, rva, n)
print(f'orig[{ova}] {len(a)} insns: {" ".join(a[:40])}')
print()
print(f'rec [{rva}] {len(b)} insns: {" ".join(b[:40])}')
