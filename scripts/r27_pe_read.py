#!/usr/bin/env python3
"""r27_pe_read.py - 原版 CDE.exe PE 字节读取器（VA→file offset）+ s__ 字节取证"""
import struct, sys
from pathlib import Path

EXE = Path('/tmp/my-project/orig_backup/CDE.exe')
data = EXE.read_bytes()

# --- PE 头解析
e_lfanew = struct.unpack_from('<I', data, 0x3c)[0]
assert data[e_lfanew:e_lfanew+4] == b'PE\0\0', 'not PE'
coff = e_lfanew + 4
machine, nsec, _, _, _, opt_size, _ = struct.unpack_from('<HHIIIHH', data, coff)
opt = coff + 20
magic = struct.unpack_from('<H', data, opt)[0]
assert magic == 0x10b, f'not PE32: {magic:#x}'
image_base = struct.unpack_from('<I', data, opt + 28)[0]
sec_off = opt + opt_size
sections = []  # (va, vsize, raw_ptr, raw_size, name)
for i in range(nsec):
    o = sec_off + 40 * i
    name = data[o:o+8].rstrip(b'\0').decode(errors='replace')
    vsize, va, rawsize, rawptr = struct.unpack_from('<IIII', data, o+8)
    sections.append((va, vsize, rawptr, rawsize, name))

def va2off(va):
    rva = va - image_base
    for sva, vs, rp, rs, nm in sections:
        if sva <= rva < sva + max(vs, rs):
            fo = rp + (rva - sva)
            if fo < len(data):
                return fo, nm
    return None, None

def read_va(va, n=16):
    fo, nm = va2off(va)
    if fo is None:
        return None
    return data[fo:fo+n], nm

if __name__ == '__main__':
    print(f'image_base={image_base:#x} sections={[(nm, f"{va:#x}", f"{vs:#x}") for va,vs,_,_,nm in sections]}')
    # s__ 地址取证（data_names.tsv 里名为 s__ 的）
    import re
    addrs = []
    for ln in open('/home/z/my-project/repo/CDE-decomp/meta/data_names.tsv', encoding='utf-8', errors='replace'):
        p = ln.rstrip('\n').split('\t')
        if len(p) >= 2 and p[1].strip() == 's__':
            addrs.append(p[0].strip())
    print(f'\ns__ entries in data_names: {len(addrs)}')
    for a in addrs[:12]:
        va = int(a, 16)
        b, nm = read_va(va, 8)
        print(f'  {va:08x} [{nm}] bytes={b.hex() if b else "N/A"} repr={b!r}' if b else f'  {va:08x} OOR')
