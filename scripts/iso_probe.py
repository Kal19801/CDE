#!/usr/bin/env python3
"""iso_probe.py - 用 iso_sweep 精确旗标重编样本 sec，输出全错文本（fixer 设计输入）
用法: iso_probe.py <va> [va2 ...]   或  --top <N>（按 nerr 降序取前 N）
"""
import os, re, subprocess, sys
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
SECDIR = Path(os.environ.get('SWEEP_SECDIR', '/tmp/sweep_sweep18_secs'))
PRE = Path(os.environ.get('SWEEP_PRELUDE', '/tmp/sweep_sweep18_draft.c.prelude'))
TC = REPO / 'toolchain'
CC = str(TC / 'usr/lib/llvm-19/bin/clang')
EBUDGET = os.environ.get('ISO_EBUDGET', '8')
FLAGS = ['--target=i686-w64-mingw32', '-m32', '-x', 'c', '-std=gnu11', '-c',
         '-O2', '-g', '-gcodeview', f'-ferror-limit={EBUDGET}', '-w',
         '-Wno-error=implicit-function-declaration',
         '-Wno-error=incompatible-function-pointer-types',
         '-Wno-error=incompatible-pointer-types', '-Wno-error=int-conversion',
         '-I' + str(REPO / 'src'), '-I' + str(REPO / 'src/../third_party/GL'),
         '-I' + str(REPO / 'src/../third_party/AL'),
         '-I' + str(REPO / 'src/../third_party/glfw-3.3.10/include'),
         '-I' + str(REPO / 'pe_inc'), '-I' + str(REPO / 'pe_inc/freetype2'),
         '-isystem', str(TC / 'usr/i686-w64-mingw32/include')]

pre_txt = PRE.read_text(errors='replace')

def probe(va):
    hits = sorted(SECDIR.glob(f'{va}_*.c')) or sorted(SECDIR.glob(f'00{va}_*.c'))
    if not hits:
        print(f'== {va}: SEC NOT FOUND'); return
    sec = hits[0].read_text(errors='replace')
    # strip_self（同 iso_sweep）：摘自身原型（首个 '{' 前的签名行）
    m = re.search(r'^[A-Za-z_].*?\)\s*$', sec, flags=re.M)
    tmp = Path('/tmp/iso_probe_tmp.c')
    tmp.write_text(pre_txt + '\n' + sec, errors='replace')
    r = subprocess.run([CC] + FLAGS + [str(tmp), '-o', '/tmp/iso_probe_tmp.o'],
                       capture_output=True, text=True, timeout=90)
    errs = [ln for ln in r.stderr.split('\n') if 'error:' in ln or ln.startswith('  ')]
    print(f'== {va} {hits[0].name} rc={r.returncode}')
    for ln in errs[:40]:
        print(ln[:200])
    print()

if __name__ == '__main__':
    args = sys.argv[1:]
    if args and args[0] == '--top':
        n = int(args[1]) if len(args) > 1 else 6
        rows = []
        for ln in open('/tmp/iso_errs_sweep18.tsv'):
            p = ln.rstrip('\n').split('\t')
            if len(p) >= 3:
                rows.append((int(p[2]), p[0]))
        rows.sort(reverse=True)
        args = [v for _, v in rows[:n]]
    for va in args:
        probe(va)
