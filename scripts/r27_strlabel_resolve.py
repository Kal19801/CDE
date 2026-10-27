#!/usr/bin/env python3
"""r27_strlabel_resolve.py - s_ 标签逐函数 objdump 定址 + PE 字节验证
输入: 全 secs 中 &s_LABEL 站点标签 → 候选地址(data_items/data_names)
证据: /tmp/orig_disasm.txt 每函数立即数 → (func,label)→addr 唯一性
验证: PE 原始字节读出字符串内容
输出: /tmp/r27_strlabel_resolved.tsv
"""
import re, bisect, struct
from pathlib import Path
from collections import defaultdict

SECS = Path('/tmp/sweep_sweep18_secs')
DISASM = Path('/tmp/orig_disasm.txt')
EXE = Path('/tmp/orig/CDE.exe')
DMAP_TSV = Path('/home/z/my-project/repo/CDE-decomp/meta/data_items.tsv')
DNAMES_TSV = Path('/home/z/my-project/repo/CDE-decomp/meta/data_names.tsv')

# ---- 1) 标签 → 候选地址 ----
cands = {}
for ln in open(DMAP_TSV, encoding='utf-8', errors='replace'):
    p = ln.rstrip('\n').split('\t')
    if len(p) >= 4 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
        cands.setdefault(p[3].strip(), set()).add(p[0])
for ln in open(DNAMES_TSV, encoding='utf-8', errors='replace'):
    p = ln.rstrip('\n').split('\t')
    if len(p) >= 2 and re.fullmatch(r'[0-9a-f]{8}', p[0].strip()):
        cands.setdefault(p[1].strip(), set()).add(p[0])

# ---- 2) secs 中 &s_LABEL 站点 → (func, label) 对 ----
site_pat = re.compile(r'&(s_[A-Za-z0-9_]+)')
need = defaultdict(set)   # func6 → {labels}
for f in sorted(SECS.glob('*.c')):
    func6 = f.name.split('_')[1] if f.name[0] != '0' else f.name.split('_')[0].lstrip('0')
    func6 = f.name.split('_')[0].lstrip('0')
    txt = f.read_text(errors='replace')
    for m in site_pat.finditer(txt):
        need[func6].add(m.group(1))
print(f"funcs with &s_ sites: {len(need)}")

# ---- 3) 函数起始表 (用于 disasm bisect) ----
vas = sorted({ln.split('\t')[0].strip().lower() for ln in open('/home/z/my-project/repo/CDE-decomp/pdb/functions.tsv')
              if re.fullmatch(r'[0-9a-f]{8}', ln.split('\t')[0].strip())})
starts = [int(v, 16) for v in vas]
func_end = {}  # func_va8 → next start (exclusive)
for i, v in enumerate(vas):
    func_end[v] = starts[i + 1] if i + 1 < len(starts) else 0xffffffff

# ---- 4) 扫 disasm: 每函数立即数集合 ----
imm_pat = re.compile(r'\$?0x([0-9a-f]{5,8})\b')
func_imms = defaultdict(set)
cur = None
cur_lo = cur_hi = 0
for ln in DISASM.read_text(errors='replace').split('\n'):
    m = re.match(r'^\s*([0-9a-f]+):', ln)
    if m:
        a = int(m.group(1), 16)
        i = bisect.bisect_right(starts, a) - 1
        cur = ('00' + vas[i].lstrip('0')) if i >= 0 else None
    if cur is None:
        continue
    for im in imm_pat.finditer(ln):
        func_imms[cur].add(int(im.group(1), 16))

print(f"disasm immediate index: {len(func_imms)} funcs")

# ---- 5) PE 字节读取 (验证字符串内容) ----
data = EXE.read_bytes()
pe_hdr = struct.unpack_from('<I', data, 0x3c)[0]
nsec = struct.unpack_from('<H', data, pe_hdr + 6)[0]
opt_size = struct.unpack_from('<H', data, pe_hdr + 20)[0]
sec0 = pe_hdr + 24 + opt_size
image_base = struct.unpack_from('<I', data, pe_hdr + 24 + 28)[0]
secs = []
for i in range(nsec):
    off = sec0 + 40 * i
    name = data[off:off + 8].rstrip(b'\0').decode(errors='replace')
    vsize, va, rsize, raw = struct.unpack_from('<IIII', data, off + 8)
    secs.append((va + image_base, vsize, raw, rsize))

def read_va(va, n):
    rva = va - image_base
    for sva, vsize, raw, rsize in secs:
        if sva <= rva < sva + max(vsize, rsize):
            fo = raw + (rva - sva)
            return data[fo:fo + n]
    return b''

# ---- 6) 逐 (func,label) 解析 ----
rows = []
amb = []
for func6, labels in sorted(need.items()):
    func8 = func6.zfill(8)
    imms = func_imms.get('00' + func6.lstrip('0'), set())
    for lab in sorted(labels):
        cand = {int(a, 16) for a in cands.get(lab, set())}
        hit = cand & imms if cand else set()
        if len(hit) == 1:
            va = next(iter(hit))
            content = read_va(va, 16)
            rows.append(f"{func6}\t{lab}\t{va:08x}\t{'unique'}\t{content!r}")
        elif len(hit) > 1:
            amb.append((func6, lab, sorted(f'{a:08x}' for a in hit)))
            rows.append(f"{func6}\t{lab}\t{'?'}\tAMBIG:{sorted(f'{a:08x}' for a in hit)}\t?")
        else:
            # 零候选或多候选但无立即数命中: 列函数内 .rdata 区立即数(邻位搜索)
            near = sorted(a for a in imms if 0x00900000 <= a < 0x00a00000)
            rows.append(f"{func6}\t{lab}\t{'?'}\tNOHIT cand={sorted(f'{a:08x}' for a in cand)}\tnear={len(near)}")

out = Path('/tmp/r27_strlabel_resolved.tsv')
out.write_text('\n'.join(rows) + '\n')
ok = sum(1 for r in rows if '\tunique\t' in r)
print(f"resolved unique: {ok} / {len(rows)}; ambiguous: {len(amb)}")
for a in amb[:10]:
    print(f"  AMBIG {a}")
