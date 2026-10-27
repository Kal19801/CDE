#!/usr/bin/env python3
"""r27_test_fixers.py - r27 fixer 单测 v2: TU 池原始文本 + 合成边界用例
（secs 已被上轮 assemble 改写, 原始站点从 TU 池取）"""
import re, sys, importlib.util
from pathlib import Path

spec = importlib.util.spec_from_file_location(
    'sweep_assemble', '/home/z/my-project/repo/CDE-decomp/scripts/sweep_assemble.py')
SA = importlib.util.module_from_spec(spec)
sys.modules['sweep_assemble'] = SA
spec.loader.exec_module(SA)

fails = []

def check(name, cond, detail=''):
    print(f"{'PASS' if cond else 'FAIL'}  {name}  {detail}")
    if not cond:
        fails.append(name)

TU = Path('/tmp/sweep_tu_sweep18')

def tu_text(f6):
    hits = list(TU.glob(f'*{f6}*.tu.c'))
    return hits[0].read_text(errors='replace') if hits else None

# ---- T1: strlabel 4e1e80 (&s__ → ((const char*)0x0091e17cu)) ----
t1 = tu_text('4e1e80')
r1 = SA.strlabel_fix(t1, '004e1e80')
check('T1 strlabel 4e1e80', '&s__' not in r1 and '((const char *)0x0091e17cu)' in r1)

# ---- T2: 5b6f30 双标签 + TSV 终审值 (s__→e17c, s___→91e128) ----
t2 = tu_text('5b6f30')
r2 = SA.strlabel_fix(t2, '005b6f30')
check('T2a s___→0091e128', '0x0091e128u' in r2 and '0x00920c98u' not in r2)
check('T2b s__→0091e17c', '0x0091e17cu' in r2)
check('T2c 无残留', not re.search(r'&s_[A-Za-z]', r2))

# ---- T3: order-paired 7406f0 交替 (5 站 e17c,f384,e17c,f384,e17c) ----
t3 = tu_text('7406f0')
r3 = SA.strlabel_fix(t3, '007406f0')
seq = re.findall(r'0x(009[0-9a-f]{5})u', r3)
seq = [s for s in seq if s in ('0091e17c', '0092f384')]
check('T3 交替序列', seq == ['0091e17c', '0092f384', '0091e17c', '0092f384', '0091e17c'], str(seq))

# ---- T4: 67c870 TSV 终审值 s____→009323a8 ----
t4 = tu_text('67c870')
r4 = SA.strlabel_fix(t4, '0067c870')
check('T4 s____→009323a8', '0x009323a8u' in r4 and '0x0091e128u' not in r4)

# ---- T5: 89a650 s__→0092f384 ("\t" 函数) ----
t5 = tu_text('89a650')
r5 = SA.strlabel_fix(t5, '0089a650')
check('T5 89a650→0092f384', '0x0092f384u' in r5)

# ---- T6: constslice R3+R4 (Disarmed __xmm 全形态) ----
t6 = (Path('/tmp/sweep_sweep18_secs') / '004e9060_004e9060_Disarmed.c').read_text(errors='replace')
r6 = SA.constslice_fix(t6, '4e9060')
check('T6a R3 切片', '((slice_view *)&__xmm_' not in r6)
check('T6b R4 uint cast', '(uint)__xmm_' not in r6)
seg = [x for x in r6.split('\n') if 'uVar7 ^' in x]
check('T6c hi 腿=0x80000000u', bool(seg) and '0x80000000u' in seg[0], seg[0].strip()[:70] if seg else '')
seg2 = [x for x in r6.split('\n') if 'uVar6 ^' in x]
check('T6d lo 腿=0x0u', bool(seg2) and 'uVar6 ^ 0x0u;' in seg2[0], seg2[0].strip()[:70] if seg2 else '')

# ---- T7: R4 三下划线静默错码 ----
t7 = '  ((slice_view *)&VVar2.X)->_0_4_ = (undefined4)___xmm_00000000000000003ff0000000000000;\n'
r7 = SA.constslice_fix(t7, '000000')
check('T7 3下划线低字', r7.strip().endswith('= 0x0u;'), r7.strip()[:70])

# ---- T8: R4 ulonglong ----
t8 = '  x = (ulonglong)__xmm_80000000000000008000000000000000;\n'
r8 = SA.constslice_fix(t8, '000000')
check('T8 ulonglong 低qword', '0x8000000000000000ull;' in r8, r8.strip()[:70])

# ---- T9: 合法地址语境不碰 ----
t9 = ('  d = *(const double *)&___xmm_00000000000000003ff0000000000000;\n'
      '  b = ((slice_view *)&___xmm_00000000000000003ff0000000000000)->_0_4_;\n'
      '  f(___xmm_00000000000000003fd999999999999a);\n')
r9 = SA.constslice_fix(t9, '000000')
check('T9 合法语境保留', r9 == t9)

# ---- T10: R2 运行态腿不碰 ----
t10 = '  local_38 = (double)CONCAT44(pcVar8,(undefined4)local_38);\n'
r10 = SA.constslice_fix(t10, '000000')
check('T10 运行态保留', r10 == t10)

# ---- T11: R1 无注释负值 ----
t11 = '  x = ((slice_view *)&-1.5)->_4_4_;\n'
r11 = SA.constslice_fix(t11, '000000')
check('T11 无注释负值', '0xbff80000u' in r11, r11.strip()[:60])

# ---- T12: R1 带注释字节切片 (1.0 的 _6_1_ = 0xf0) ----
t12 = '  c = /*3ff0000000000000*/((slice_view *)&1.0)->_6_1_;\n'
r12 = SA.constslice_fix(t12, '000000')
check('T12 字节切片0xf0', '0xf0u' in r12, r12.strip()[:60])

# ---- T13: R2 常量腿 span 替换 ----
t13 = ('  dVar6 = (double)CONCAT44(/*3fe921fb54442d18*/((slice_view *)&0.7853981633974483)->_4_4_,'
       '(undefined4)/*3fe921fb54442d18*/0.7853981633974483);\n')
r13 = SA.constslice_fix(t13, '000000')
check('T13 CONCAT44→字面量', 'CONCAT44' not in r13 and '0.7853981633974483;' in r13, r13.strip()[:70])

# ---- T14: 表外函数不碰 ----
t14 = '  f(&s_Dash, &local_28);\n'
r14 = SA.strlabel_fix(t14, '62b4e0')
check('T14 s_Dash 排除', r14 == t14)

# ---- T15: 保行数 ----
for nm, a, b in (('T15a', t1, r1), ('T15b', t3, r3), ('T15c', t6, r6)):
    check(nm, a.count('\n') == b.count('\n'))

print(f"\n{'ALL PASS' if not fails else f'FAILED: {fails}'}")
sys.exit(1 if fails else 0)
