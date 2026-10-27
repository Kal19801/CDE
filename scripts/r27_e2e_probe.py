#!/usr/bin/env python3
"""r27_e2e_probe.py - 修复后 sec 单 TU 试编译（真实 clang 地面验证）"""
import sys, importlib.util, subprocess
from pathlib import Path

spec = importlib.util.spec_from_file_location(
    'sweep_assemble', '/home/z/my-project/repo/CDE-decomp/scripts/sweep_assemble.py')
SA = importlib.util.module_from_spec(spec)
sys.modules['sweep_assemble'] = SA
spec.loader.exec_module(SA)

SECS = Path('/tmp/sweep_sweep18_secs')
PRELUDE = Path('/tmp/sweep_sweep18_draft.c.prelude')
TC = '/home/z/my-project/repo/CDE-decomp/toolchain/usr/lib/llvm-19/bin/clang'
REPO = '/home/z/my-project/repo/CDE-decomp'

TARGETS = [
    ('004e9060_004e9060_Disarmed.c', '4e9060'),
    ('004e1e80_004e1e80_GetBarTooltip.c', '4e1e80'),
    ('0059f2d0_0059f2d0_FUN_0059f2d0.c', '59f2d0'),
    ('0059ffe0_0059ffe0_GenerateCompartmentPieces.c', '59ffe0'),
    ('007406f0_007406f0_GetInterceptStatus.c', '7406f0'),
    ('0068efe0_0068efe0_CustomPrint.c', '68efe0'),
    ('006909a0_006909a0_FUN_006909a0.c', '6909a0'),
]

pre = PRELUDE.read_text(errors='replace')
for fname, va in TARGETS:
    f = SECS / fname
    if not f.exists():
        # 找真实名
        hits = list(SECS.glob(f'*{va}*.c'))
        if not hits:
            print(f'{va}: NO SEC')
            continue
        f = hits[0]
    txt = f.read_text(errors='replace')
    fixed = SA.strlabel_fix(txt, va)
    fixed = SA.constslice_fix(fixed, va)
    out = Path('/tmp/t_probe.c')
    out.write_text(pre + fixed)
    r = subprocess.run([TC, '--target=i686-w64-mingw32', '-m32', '-x', 'c', '-std=gnu11',
                        '-fsyntax-only', '-ferror-limit=12', '-w',
                        '-Wno-error=implicit-function-declaration',
                        '-Wno-error=incompatible-function-pointer-types',
                        '-Wno-error=incompatible-pointer-types',
                        '-Wno-error=int-conversion',
                        '-I' + REPO + '/src', '-I' + REPO + '/third_party/GL',
                        '-I' + REPO + '/third_party/AL',
                        '-I' + REPO + '/third_party/glfw-3.3.10/include',
                        '-I' + REPO + '/pe_inc', '-I' + REPO + '/pe_inc/freetype2',
                        '-isystem', REPO + '/toolchain/usr/i686-w64-mingw32/include',
                        str(out)], capture_output=True, text=True,
                       env={'LD_LIBRARY_PATH': REPO + '/toolchain/usr/lib/x86_64-linux-gnu',
                            'PATH': '/usr/bin:/bin'})
    errs = [ln for ln in r.stderr.split('\n') if ' error:' in ln]
    # 去掉 t_probe.c 行号前缀归类
    kinds = {}
    for ln in errs:
        m = ln.split(' error: ', 1)
        k = m[1][:70] if len(m) > 1 else ln[:70]
        kinds[k] = kinds.get(k, 0) + 1
    status = 'CLEAN' if not errs else f'{len(errs)} err'
    print(f'{va}: {status}')
    for k, n in sorted(kinds.items(), key=lambda x: -x[1])[:4]:
        print(f'    {n}x {k}')
