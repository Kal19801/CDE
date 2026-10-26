#!/usr/bin/env python3
"""iso_sweep.py - 逐函数隔离编译生产线（r25）

范式转换：放弃 defer 螺旋，逐函数带批级 prelude 独立编译——
  prelude(摘自身原型) + 函数处理态文本 → clang -c → 0 错 = 候选段。

输入（sweep_assemble SWEEP_DUMP_SECS 产物）:
  SWEEP_SECDIR/*.c          每函数处理态文本
  <OUT>.prelude             批级前奏（includes/typedef池/r23defs/桥/externs/数据宏 + 批内规范原型）
输出:
  SWEEP_ISO_OK   va\tname          （0 错候选段）
  SWEEP_ISO_ERRS va\tname\tnerr\tclass1 || class2 ...  （≤BUDGET 条分类消息）

断点续传：已有 OK/ERR 记录的 va 跳过（重跑只增量）。
"""
import os, re, sys, subprocess, hashlib
from pathlib import Path
from concurrent.futures import ThreadPoolExecutor

REPO = Path('/home/z/my-project/repo/CDE-decomp')
BATCH = os.environ.get('SWEEP_BATCH', 'sweep18')
SECDIR = Path(os.environ.get('SWEEP_SECDIR', f'/tmp/sweep_{BATCH}_secs'))
PRE = Path(os.environ.get('SWEEP_PRELUDE', f'/tmp/sweep_{BATCH}_draft.c.prelude'))
OKF = Path(os.environ.get('SWEEP_ISO_OK', f'/tmp/iso_ok_{BATCH}.tsv'))
ERRF = Path(os.environ.get('SWEEP_ISO_ERRS', f'/tmp/iso_errs_{BATCH}.tsv'))
WORK = Path(os.environ.get('SWEEP_ISO_WORK', '/tmp/iso_work'))
NPAR = int(os.environ.get('ISO_PAR', '12'))
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
ENV = dict(os.environ, LD_LIBRARY_PATH=str(TC / 'usr/lib/x86_64-linux-gnu'))


def strip_self(pre, name):
    """摘除 prelude 中声明该函数名的行（防 conflicting types with 自身定义）"""
    if not name:
        return pre
    pat = re.compile(r'\b' + re.escape(name) + r'\s*\(')
    out = [ln for ln in pre.split('\n') if not pat.search(ln)]
    return '\n'.join(out)


def classify(msg):
    """错误消息 → 类别键（剥离细节括号与引号名，供普查聚合）"""
    s = re.sub(r"'[^']*'", "''", msg)
    s = re.sub(r'\([^()]*\)', '()', s)
    s = re.sub(r'\s+', ' ', s).strip()
    return s[:110]


def run_one(job):
    va, name, path, sha = job
    unit = WORK / f'i_{va}.c'
    obj = WORK / f'i_{va}.o'
    try:
        pre = strip_self(PRE_RAW, name) if name else PRE_RAW
        txt = Path(path).read_text(errors='replace')
        unit.write_text(pre + '\n' + txt)
        r = subprocess.run([CC] + FLAGS + [str(unit), '-o', str(obj)],
                           capture_output=True, text=True, timeout=180, env=ENV)
        errs = [ln.split(': error:', 1)[1] if ': error:' in ln else ln
                for ln in r.stderr.split('\n') if ': error:' in ln]
        return va, name, errs, sha
    except subprocess.TimeoutExpired:
        return va, name, ['TIMEOUT'], sha
    except Exception as e:
        return va, name, [f'ISO_INTERNAL {e}'], sha


def main():
    global PRE_RAW
    if not PRE.exists():
        print(f'-- prelude missing: {PRE} (run sweep_assemble with SWEEP_DUMP_SECS=1)')
        sys.exit(2)
    jobs = []
    for f in sorted(SECDIR.glob('*.c')):
        m = re.match(r'0*([0-9a-f]+)_?(.*)\.c$', f.name)
        if not m:
            continue
        _txt = f.read_text(errors='replace')
        _sha = hashlib.sha1((PRE.read_text(errors='replace') + _txt).encode('utf-8', 'replace')).hexdigest()[:12]
        jobs.append((m.group(1).lstrip('0') or '0', m.group(2), f, _sha))
    done = {}   # r25b: va -> sec sha —— 文本变化自动复验（防 resume 掩护回归）
    if OKF.exists():
        for ln in OKF.read_text().split('\n'):
            p = ln.split('\t')
            if p and p[0].strip():
                done[p[0].strip()] = p[2].strip() if len(p) > 2 else ''
    if ERRF.exists():
        for ln in ERRF.read_text().split('\n'):
            if ln.strip():
                done.setdefault(ln.split('\t')[0], None)   # errs 无 sha：仍跳过（成本低）
    # sha 一致 → 真·已完成跳过；sha 漂移（prelude/sec 变化）→ 复验（防 resume 掩护回归）
    jobs = [j for j in jobs if done.get(j[0]) != j[3]]
    print(f'iso: total={len(jobs)} (resumed skip={len(done)}) par={NPAR}')
    WORK.mkdir(parents=True, exist_ok=True)
    PRE_RAW = PRE.read_text(errors='replace')
    n_ok = 0
    ok_f = open(OKF, 'a', encoding='utf-8')
    err_f = open(ERRF, 'a', encoding='utf-8')

    with ThreadPoolExecutor(max_workers=NPAR) as ex:
        for va, name, errs, sha in ex.map(run_one, jobs):
            if not errs:
                ok_f.write(f'{va}\t{name}\t{sha}\n')
                n_ok += 1
            else:
                cls = [classify(e) for e in errs[:EBUDGET and 8]]
                err_f.write(f'{va}\t{name}\t{len(errs)}\t' + ' || '.join(cls) + '\n')
            if (n_ok + len(done)) % 200 == 0:
                ok_f.flush()
                err_f.flush()
                print(f'.. progress ok={n_ok} done={n_ok + len(done)}', flush=True)
    ok_f.close()
    err_f.close()
    print(f'iso done: ok={n_ok} err={len(jobs) - n_ok} -> {OKF.name}/{ERRF.name}')


if __name__ == '__main__':
    main()
