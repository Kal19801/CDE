#!/usr/bin/env python3
"""r27_probe_amb.py - 歧义/零命中站点的取证：候选地址内容 + 函数内近邻立即数"""
import re, bisect, struct
from pathlib import Path

DISASM = Path('/tmp/orig_disasm.txt')
EXE = Path('/tmp/orig/CDE.exe')

data = EXE.read_bytes()
pe_hdr = struct.unpack_from('<I', data, 0x3c)[0]
nsec = struct.unpack_from('<H', data, pe_hdr + 6)[0]
opt_size = struct.unpack_from('<H', data, pe_hdr + 20)[0]
sec0 = pe_hdr + 24 + opt_size
image_base = struct.unpack_from('<I', data, pe_hdr + 24 + 28)[0]
secs = []
for i in range(nsec):
    off = sec0 + 40 * i
    vsize, va, rsize, raw = struct.unpack_from('<IIII', data, off + 8)
    secs.append((va, vsize, raw, rsize))

def read_va(va, n=16):
    rva = va - image_base
    for sva, vsize, raw, rsize in secs:
        if sva <= rva < sva + max(vsize, rsize):
            fo = raw + (rva - sva)
            return data[fo:fo + n]
    return b''

print("=== 歧义候选内容 ===")
for va in (0x0091e17c, 0x0092f384):
    b = read_va(va, 12)
    print(f"  {va:08x}: {b!r}")

# 零命中函数的 .rdata 立即数近邻（缩小到 0x9xxxxx 区间打印）
vas = sorted({ln.split('\t')[0].strip().lower() for ln in open('/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv')
              if re.fullmatch(r'[0-9a-f]{8}', ln.split('\t')[0].strip())})
starts = [int(v, 16) for v in vas]

funcs = {'68efe0': 's___1', '6909a0': 's__s_K', '85dc90': 's__txt', '89fc80': 's__txt'}
imm_pat = re.compile(r'\$?0x([0-9a-f]{5,8})\b')
cur = None
collect = {}
for ln in DISASM.read_text(errors='replace').split('\n'):
    m = re.match(r'^\s*([0-9a-f]+):', ln)
    if m:
        a = int(m.group(1), 16)
        i = bisect.bisect_right(starts, a) - 1
        cur = ('00' + vas[i].lstrip('0')) if i >= 0 else None
    if cur and cur.lstrip('0') in funcs:
        for im in imm_pat.finditer(ln):
            v = int(im.group(1), 16)
            if 0x00900000 <= v < 0x00a00000:
                collect.setdefault(cur.lstrip('0'), set()).add(v)

for f6, lab in funcs.items():
    imms = sorted(collect.get(f6, []))
    print(f"\n{f6} ({lab}): {len(imms)} rdata imms")
    for v in imms[:8]:
        print(f"  {v:08x}: {read_va(v, 12)!r}")
