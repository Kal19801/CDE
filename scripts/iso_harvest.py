#!/usr/bin/env python3
"""iso_harvest.py - iso_ok 候选段收割为 pilot TU（r25）
用法: iso_harvest.py <batch> <pilot_num>
  batch=sweep18, pilot_num=98 → src/pilot_98_sweep18.c
组成: prelude(去已定义函数原型) + cc 正确定义 extern + iso_ok 各 sec（VA 注释约定供 quant）
r25w13: ①prelude 原型摘除（防 cc/参数不一致 conflicting types）
        ②定义签名导出 `extern <def>;`（带 __thiscall/cc，供前置调用者；与定义逐字一致）
        ③同名双定义去重（重载 VA 撞名——沿用 r24 先例：留 defer，不重写原版）
"""
import os, re, sys
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
BATCH = sys.argv[1] if len(sys.argv) > 1 else 'sweep18'
NUM = sys.argv[2] if len(sys.argv) > 2 else '98'
SECDIR = Path(os.environ.get('SWEEP_SECDIR', f'/tmp/sweep_{BATCH}_secs'))
PRE = Path(os.environ.get('SWEEP_PRELUDE', f'/tmp/sweep_{BATCH}_draft.c.prelude'))
OKF = Path(os.environ.get('SWEEP_ISO_OK', f'/tmp/iso_ok_{BATCH}.tsv'))
OUT = REPO / 'src' / f'pilot_{NUM}_{BATCH}.c'


def def_sig(sec, name):
    """sec 内列 0 起始的定义签名行（含 cc；调用行有缩进不会命中）。
       注意: ①文件名 disp 可能是短名而定义是全限定名 —— 不加 \\b（列 0 已过滤）
             ②返回类型可能独行（sret 形态）—— 向上拼接列 0 延续行"""
    lines = sec.split('\n')
    for i, ln in enumerate(lines):
        if ln.startswith((' ', '\t', '/', '#', '{', '}')) or not ln.strip():
            continue
        if re.search(re.escape(name) + r'\s*\(', ln):
            sig = ln.strip()
            k = i - 1
            while k >= 0:
                p = lines[k]
                if (p.startswith((' ', '\t', '/', '#', '{', '}')) or not p.strip()
                        or p.rstrip().endswith((';', '{', '}'))):
                    break
                sig = p.strip() + ' ' + sig
                k -= 1
            return sig
    return None


ok_rows = [ln.split('\t') for ln in OKF.read_text().split('\n') if ln.strip()]
ok_vas = [r[0].strip() for r in ok_rows]
ok_names = {r[1].strip() for r in ok_rows if len(r) > 1}

# ①合并级 strip_self —— 已定义函数的 prelude 原型摘除（定义即权威声明）
_pre_lines = PRE.read_text(errors='replace').split('\n')
if ok_names:
    _keep = []
    for _ln in _pre_lines:
        if any(re.search(r'\b' + re.escape(_nm) + r'\s*\(', _ln) for _nm in ok_names):
            continue
        _keep.append(_ln)
    _pre_lines = _keep

# ②③先收集 sec，按名字去重（首胜），导出定义 extern
used, deferred_dup, sigs = [], [], []
seen_names = set()
for va in ok_vas:
    hits = (sorted(SECDIR.glob(f'{va}_*.c')) or sorted(SECDIR.glob(f'00{va}_*.c'))
            or sorted(SECDIR.glob(f'{va.zfill(8)}_*.c')))
    if not hits:
        print(f'skip {va}: sec missing'); continue
    sec = hits[0].read_text(errors='replace')
    m = re.match(r'0*([0-9a-f]+)_(.+)\.c$', hits[0].name)
    disp = m.group(2) if m else 'fn'
    # sec 文件名 = <va>_<disp>，而 disp 自身常带 <va>_ 前缀 —— 函数名需剥离
    fnm = re.sub(r'^[0-9a-fA-F]{5,8}_', '', disp)
    sig = def_sig(sec, fnm)
    # 重载 VA 撞名按函数名去重（首胜）—— 不同 VA 同名定义无法共存（r24 先例：留 defer）
    key = fnm
    if key in seen_names:
        deferred_dup.append(f'00{va} {fnm}')
        continue
    seen_names.add(key)
    if sig and sig.rstrip().endswith(')'):
        sigs.append(sig)
    used.append((va, disp[:80], sec))

parts = ['\n'.join(_pre_lines)]
if sigs:
    parts.append('\n/* ---- r25w13: 定义导出 extern（cc 忠实，防前置调用隐式声明） ---- */\n'
                 + '\n'.join(f'extern {s};' for s in sorted(set(sigs))) + '\n')
for va, disp, sec in used:
    parts.append(f'\n//==== 00{va} {disp} ====\n')
    parts.append(sec)
OUT.write_text(''.join(parts), errors='replace')
print(f'harvested {len(used)} secs -> {OUT} ({OUT.stat().st_size} bytes)')
if deferred_dup:
    print(f'dup-name deferred {len(deferred_dup)}: ' + ', '.join(deferred_dup[:6]))
