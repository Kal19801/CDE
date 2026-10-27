#!/usr/bin/env python3
"""sweep_assemble.py - 全量扫荡组装器（r19）

薄包装 fam8_assemble（复用 fam4-8 全部实战修复：zip 神谕/批内原型/vftable
按名通道/数据闭包/slice/pad/pmf 等约 40 个 fix pass），叠加扫荡特化：

  S1 env 参数化   SWEEP_TU / SWEEP_DRAFT / SWEEP_CALLS / SWEEP_BATCH /
                  SWEEP_DEFER（逗号分隔 6 位 VA，与 autodefer 文件并集）
  S2 全约定原型   fam8 的批内规范原型只认 __thiscall（当年冲突类）；扫荡批
                  含 cdecl/stdcall/unknown 定义，K&R `extern int FUN_x();`
                  与 `undefined4 FUN_x(...)` 定义构成 conflicting types ——
                  解析全部定义签名（碰撞互斥时弃用防误替换）
  S3 预筛自动 defer  段文本非注释/非字符串残留 `::`（C 无此语法 = 必死）的
                  函数首轮即排除，省 2-4 轮编译。名单写 SWEEP_DRAFT.autodefer，
                  幂等（重跑同批产生同一名单）
"""
import os, re, sys, glob, json
from pathlib import Path

REPO = Path('/home/z/my-project/repo/CDE-decomp')
BATCH = os.environ.get('SWEEP_BATCH', 'sweep00')
IN = Path(os.environ.get('SWEEP_TU', f'/tmp/sweep_tu_{BATCH}'))
OUT = Path(os.environ.get('SWEEP_DRAFT', f'/tmp/sweep_{BATCH}_draft.c'))
CALLS_P = Path(os.environ.get('SWEEP_CALLS', '/tmp/sweep_calls.json'))

# ---- 先给 fam8_assemble 的 import 期喂空 callsites，再注入真表 ----
Path('/tmp/fam8_callsites.json').write_text('{}')
sys.path.insert(0, str(REPO / 'scripts'))
import fam8_assemble as A

A.CALLS = CALLS_P
A.calls_json = json.load(open(CALLS_P))
A.IN = IN
A.OUT = OUT

ENV_DEFER = {s for s in os.environ.get('SWEEP_DEFER', '').split(',') if s.strip()}
AUTO_F = Path(str(OUT) + '.autodefer')
auto_prev = set()
if AUTO_F.exists():
    auto_prev = {s for s in AUTO_F.read_text().split(',') if s.strip()}


def norm6(va):
    v = va.lstrip('0')
    return v or '0'


# ================= r20: qualified-name closure（限定名闭包） =================
# 病灶：473+/批 的函数被 `::` 残留预筛击杀。根因 = fix_qual 的 pool 来自
# orig_full2.tsv，缺模板实例方法全名（Ghidra 符号表里有，orig_full2 没导）。
# 本 pass 用 DumpFuncNames 全量 dump（meta/func_names.tsv，21,443 条）做
# tnorm2 归一索引，三通道解析：
#   A 调用/取址   唯一 VA → 规范名（COV_NAME 优先，否则 fname_esc 未覆盖名，
#                 write_stubs 按引用名自动补定义——与现网 fname_esc 轨一致）
#   B operator    后缀语法（operator*、operator[]、operator bool...）
#   C 类型 token  后随非 ( → type_escape 变体链（含 class-key 剥离），命中
#                 hdr_names 才换，防错名注入
_T2 = lambda s: re.sub(r'[\s_]+', '', re.sub(r'\b(class|struct|enum)\b', '', s))
_L3 = lambda s: re.sub(r'[^A-Za-z0-9~]', '', s)   # r22: 保留 ~（dtor/ctor 键分离）   # r21: 全剥离归一（::/__/_/空格差异通吃）

# r22: esc 名 -> 原名还原变体（_L_/_G_ 模板标记 + __ -> ::），L3 表多形命中
def _deesc_variants(tok):
    outs = [tok]
    if '_L_' in tok or '_G_' in tok:
        t = tok.replace('_L_', '\x01').replace('_G_', '\x02')
        t = t.replace('__', '\x03')
        t = t.replace('\x01', '<').replace('\x02', '>').replace('\x03', '::')
        outs.append(t)
        base = re.sub(r'^(?:util|std)::', '', t)
        if base != t:
            outs.append(base)
    else:
        base = re.sub(r'^(?:util|std)__', '', tok)
        if base != tok:
            outs.append(base)
    return outs

# r22: esc 名 -> 原名还原变体（_L_/_G_ 模板标记 + __ -> ::），L3 表多形命中
def _deesc_variants(tok):
    outs = [tok]
    if '_L_' in tok or '_G_' in tok:
        t = tok.replace('_L_', '\x01').replace('_G_', '\x02')
        t = t.replace('__', '\x03')
        t = t.replace('\x01', '<').replace('\x02', '>').replace('\x03', '::')
        outs.append(t)
        base = re.sub(r'^(?:util|std)::', '', t)
        if base != t:
            outs.append(base)
    else:
        base = re.sub(r'^(?:util|std)__', '', tok)
        if base != tok:
            outs.append(base)
    return outs

def _fidx_any(tok):
    c = FUNC_ESC_IDX.get(_L3(tok))
    if c:
        return c
    vs = _deesc_variants(tok)
    for v in vs:
        c = FUNC_IDX.get(_L3(v))
        if c:
            return c
    # 原名可能带命名空间前缀（token 转义前被剥过 util__/std__）
    for pre in ('util::', 'std::'):
        for v in vs:
            c = FUNC_IDX.get(_L3(pre + v))
            if c:
                return c
    return None


def _fname_esc(raw):
    """现网规范（game_006/009/011 实证）：<>与空格→_，::→__，不折叠。
    ~X 析构 → esc_type 风格 + __dtor（fix_dtors 同款约定）。"""
    s = raw
    if '~' in s:
        # util::Darray<..>::~Darray<..> → <esc(cls part)>__dtor
        i = s.rfind('::~')
        if i > 0:
            cls = A.type_escape(s[:i]) or s[:i].replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(' ', '_')
            return re.sub(r'[^A-Za-z0-9_]', '_', cls).strip('_') + '__dtor'
    s = s.replace('<', '_').replace('>', '_').replace(' ', '_').replace('::', '__')
    return re.sub(r'[^A-Za-z0-9_]', '_', s)


FUNC_IDX = {}
_fn_p = REPO / 'meta' / 'func_names.tsv'
if _fn_p.exists():
    for _ln in open(_fn_p, encoding='utf-8', errors='replace'):
        _p = _ln.rstrip('\n').split('\t')
        if len(_p) == 2 and _p[1]:
            try:
                _va = int(_p[0], 16)
            except ValueError:
                continue
            FUNC_IDX.setdefault(_L3(_p[1]), []).append((_va, _p[1]))

# 规范名登记表：VA -> 已发出的名字（本进程内一致性防护）
_QNAMES = {}
# fname_esc 名 -> VA（占用检测：多 VA 同名 = 重载歧义，不解析）
_FNAME_VA = {}
for _k, _vs in FUNC_IDX.items():
    if len(_vs) == 1:
        _n = _fname_esc(_vs[0][1])
        if _n in _FNAME_VA and _FNAME_VA[_n] != _vs[0][0]:
            _FNAME_VA[_n] = None  # 歧义
        else:
            _FNAME_VA.setdefault(_n, _vs[0][0])

# r22: esc 键直查索引（esc strip('_') 破坏 _G_ 闭合 -> de-esc 不可逆，反向索引兜底）
# 双形态登记：fname_esc（<> -> _）与 _type_rewrite 转义（< -> _L_，> -> _G_）
FUNC_ESC_IDX = {}
for _k, _vs in FUNC_IDX.items():
    for _va, _nm in _vs:
        FUNC_ESC_IDX.setdefault(_L3(_fname_esc(_nm)), []).append((_va, _nm))
        _e2 = re.sub(r'[^A-Za-z0-9_]', '_', _nm.replace('::', '__').replace('<', '_L_')
                     .replace('>', '_G_').replace(' ', '_')).strip('_')
        if _e2 != _fname_esc(_nm):
            FUNC_ESC_IDX.setdefault(_L3(_e2), []).append((_va, _nm))


def _calleename(va):
    """VA -> 规范调用名。
    平凡名：批内 def → COV_NAME → _QNAMES → STUB_NAME → FUN_。
    限定名（::）：def 行重写与调用重写同走本函数 → fname_esc 自洽；
    INBATCH_DEF 只对平凡名可信（限定名的 def 行短名会跨类碰撞）。"""
    v = va
    full = QVA_FULL.get(v) or ''
    if '::' not in full:
        n = INBATCH_DEF.get(v)
        if n:
            return n
    n = A.COV_NAME.get(v)
    if n:
        return n
    n = _QNAMES.get(v)
    if n:
        return n
    # 反查 fullname（dump 侧 VA 索引）
    if full:
        n = _fname_esc(full)
        if n in _FNAME_VA and _FNAME_VA[n] == v:
            _QNAMES[v] = n
            return n
    n = A.STUB_NAME.get(v)
    if n:
        _QNAMES[v] = n
        return n
    return f'FUN_{v:08x}'


QVA_FULL = {}
for _k, _vs in FUNC_IDX.items():
    for _va, _full in _vs:
        QVA_FULL.setdefault(_va, _full)

# ---- Data-Q 通道：限定名静态数据（Graphics::GlobalState.ViewMatrix...）----
QDATA_IDX = {}   # tnorm2(qualified) -> (va, typename)
_dn_p = REPO / 'meta' / 'data_names.tsv'
if _dn_p.exists():
    for _ln in open(_dn_p, encoding='utf-8', errors='replace'):
        _p = _ln.rstrip('\n').split('\t')
        if len(_p) == 3 and _p[1] and '::' in _p[1]:
            try:
                _va = int(_p[0], 16)
            except ValueError:
                continue
            _k2 = _T2(_p[1])
            if _k2 in QDATA_IDX and QDATA_IDX[_k2][0] != _va:
                QDATA_IDX[_k2] = ('AMBIG', None)
            else:
                QDATA_IDX.setdefault(_k2, (_va, _p[2]))

# ---- thread-static 通道：`LABEL'::__l2::<member>（MSVC 函数局部静态惯用法）----
# 等价重建沿用 game_000 先例：守卫/ID/对象 → cde_l2_<VA>_<member> 命名（VA 基，
# 现网主导形态），extern 声明追加进 src/cde_l2_statics.h（build decl_maps→
# write_stubs 据此生成 BSS 定义）。_Init_thread_header/footer 已有块内定义。
_L3 = lambda s: re.sub(r'[^A-Za-z0-9~]', '', s)   # r22: 保留 ~（dtor/ctor 键分离）

def _l2_canon(s):
    """文本/dump 双端成员拼写归一：{0}↔_0__ 等"""
    s = s.replace('{0}', '0').replace('_thread_safe_static_guard_0__',
                                      'thread_safe_static_guard0')
    return _L3(s)

BT_IDX = {}   # 归一键 -> (va, typename)
_dn_p2 = REPO / 'meta' / 'data_names.tsv'
if _dn_p2.exists():
    for _ln in open(_dn_p2, encoding='utf-8', errors='replace'):
        _p = _ln.rstrip('\n').split('\t')
        if len(_p) == 3 and '__l2::' in _p[1]:
            try:
                _va = int(_p[0], 16)
            except ValueError:
                continue
            _k = _l2_canon(_p[1])
            if _k in BT_IDX and BT_IDX[_k][0] != _va:
                BT_IDX[_k] = ('AMBIG', None)
            else:
                BT_IDX.setdefault(_k, (_va, _p[2]))

L2_NEW = set()   # 待追加 cde_l2_statics.h 的 extern 行（进程内去重）
_BT_RE = re.compile(r"`[^`\n]*'::__l2::\w+|`[^`\n]*'")

def _btrep(m):
    tok = m.group(0)
    hit = BT_IDX.get(_l2_canon(tok))
    if not hit or hit[0] == 'AMBIG':
        return tok
    va, tn = hit
    mm = re.search(r'__l2::(\w+)$', tok)
    member = mm.group(1) if mm else 'Static'
    if 'thread_safe_static_guard' in member or member == 'ID':
        nm = f'cde_l2_{va:08x}__thread_safe_static_guard_0__' \
            if 'thread_safe_static_guard' in member else f'cde_l2_{va:08x}_ID'
        L2_NEW.add(f'extern int {nm};')
        return nm
    t = A.type_escape(tn) if tn else None
    nm = f'cde_l2_{va:08x}_{member}'
    if t and not t.startswith('undefined') and t not in ('int', 'char', 'short', 'long', 'float', 'double', 'bool'):
        L2_NEW.add(f'extern struct {t} {nm};')
    elif t and t in ('int', 'char', 'short', 'long', 'float', 'double', 'bool'):
        L2_NEW.add(f'extern {t} {nm};')
    else:
        L2_NEW.add(f'extern undefined1 {nm}[16];')
    return nm

# ---- r20: vftable 裸引用兼底（&_vftable_ —— 函数所属类的 vtable）----
# fix_vftables 的 cls 探测依赖 disp 含 'Name__'；无名/短名 TU 落空。此处用
# func_names 的 VA→全限定名取类名，再从 data_names 的 ::vftable' 行取 VA。
VFT_BY_CLS = {}
for _ln in open(REPO / 'meta' / 'data_names.tsv', encoding='utf-8', errors='replace'):
    _p = _ln.rstrip('\n').split('\t')
    if len(_p) == 3 and 'vftable' in _p[1] and '::' in _p[1]:
        _cls = _p[1].split("::'")[0].split('::')[0] if _p[1].startswith('`') else _p[1].split('::')[0]
        try:
            _va = int(_p[0], 16)
        except ValueError:
            continue
        _k = _T2(_cls)
        if _k in VFT_BY_CLS and VFT_BY_CLS[_k] != _va:
            VFT_BY_CLS[_k] = ('AMBIG', 0)
        else:
            VFT_BY_CLS.setdefault(_k, (_va, 0))

FUNC_VA_CLS = {}
for _ln in open(REPO / 'meta' / 'func_names.tsv', encoding='utf-8', errors='replace'):
    _p = _ln.rstrip('\n').split('\t')
    if len(_p) == 2 and '::' in _p[1]:
        try:
            FUNC_VA_CLS[int(_p[0], 16)] = _p[1].split('::')[0]
        except ValueError:
            pass

_BARE_VFT = re.compile(r'&_vftable_|(?<![\w)])_vftable_(?!\s*\()')

def vft_bare_fix(txt, va):
    disp_cls = FUNC_VA_CLS.get(int(va, 16))
    if not disp_cls:
        return txt
    hit = VFT_BY_CLS.get(_T2(disp_cls))
    if not hit or hit[0] == 'AMBIG':
        return txt
    lit = f'((void *)(0x{hit[0]:08x}u))'
    return _BARE_VFT.sub(lit, txt)

# ---- r20: 负偏移栈伪符号（stack0xfffffffb 等 = 帧内 sret/暂存槽）----
# 等价重建：Ghidra 丢了局部类型但帧内地址自洽 —— 同名声明为局部 undefined4，
# 同函数内读/写同槽自动同变量；调用写入未消费时行为等价。正偏移（参数区）不碰。
_STACK_RE = re.compile(r'\bstack0x([0-9a-fA-F]+)\b')

def stack_pseudo_fix(txt):
    offs = {m.group(1) for m in _STACK_RE.finditer(txt)}
    neg = [o for o in offs if int(o, 16) >= 0x80000000]
    # r21: 正偏移仅 & 取址（sret 槽传出、结果未读）→ scratch 局部声明等价；
    # 有裸读（值消费）的一律不碰（转发语义，需参数恢复）
    pos_ok = []
    for o in offs:
        v = int(o, 16)
        if 0 < v < 0x80000000:
            nm = f'stack0x{o}'
            uses = re.findall(r'[&]?\b' + nm + r'\b', txt)
            if all(u.startswith('&') for u in uses):
                pos_ok.append(o)
    targets = neg + pos_ok
    if not targets:
        return txt, 0
    have = set(re.findall(r'\bundefined\d*\s+(stack0x[0-9a-fA-F]+)\s*[;=\[]', txt))
    decls = [f'  undefined4 stack0x{o};' for o in sorted(targets)
             if f'stack0x{o}' not in have]
    if not decls:
        return txt, 0
    i = txt.find('{')
    if i < 0:
        return txt, 0
    txt = txt[:i+1] + '\n' + '\n'.join(decls) + txt[i+1:]
    return txt, len(decls)

# ---- r20: 未声明类型不完整 typedef（指针位置可编译；值位置诚实报错 defer）----
_TYPEDEF_POOL = set()
_typedef_pool = _TYPEDEF_POOL

# ---- r23: PDB 完整类型直供（llvm-pdbutil TPI 真值；值位可编译，字节精确）----
R23_UDT_P = Path('/tmp/my-project/work/r23_udt.tsv')
R23_LIB = {}    # display -> {size,kind,mems,bases,vtab}
R23_ESC = {}    # esc 变体 -> display
R23_ESC_NORM = {}  # r23b: 下划线折叠归一（多产 esc 链的字面差异）-> display
R23_DEFINED = set()
R23_DEF_ESC = {}   # r23c: display -> 首发定义所用 esc 名（双形态别名桥接用）
R23_ESC_TAKEN = set()  # r23h: 同 esc 异名去重（防重定义）
R23_PRIM = {'dword': 'unsigned int', 'word': 'unsigned short', 'byte': 'unsigned char',
            'qword': 'unsigned long long', 'longlong': 'long long', 'ushort': 'unsigned short',
            'int': 'int', 'char': 'char', 'short': 'short', 'float': 'float',
            'double': 'double', 'bool': 'unsigned char'}

# ---- r25: pdb.h 名字空间 + v5 对齐转义（全案例实证规则）----
# pdb.h esc = 空白剥 -> ::→__ -> <>→_L_/_G_ -> ,→_C -> *→_P_ -> @→_P
#             + 顶层名 ns 剥离（Str<char>→Str_L_char_G_；模板实参保留 ns）
_PDB_PATH = REPO / 'src' / 'cde_types_pdb.h'
_PDB_NAMES = set()
if _PDB_PATH.exists():
    _t = _PDB_PATH.read_text(errors='replace')
    for _m in re.finditer(r'typedef struct ([A-Za-z_][A-Za-z0-9_]*)', _t):
        _PDB_NAMES.add(_m.group(1))
    for _m in re.finditer(r'\b(?:struct|union|enum)\s+([A-Za-z_][A-Za-z0-9_]*)\s*\{', _t):
        _PDB_NAMES.add(_m.group(1))
    for _m in re.finditer(r'\}\s*([A-Za-z_][A-Za-z0-9_]*)\s*;', _t):
        _PDB_NAMES.add(_m.group(1))

def _pdb_esc(disp):
    """r25 v5: pdb.h 真实 esc 规则（Maybe_L_util__tuple2_L_util__Vec3_L_float_G__C... 全案例吻合）"""
    d = re.sub(r'\s+', '', disp)
    m = re.match(r'^([^<]*)', d)
    top = m.group(1) if m else d
    if '::' in top:
        d = top.rsplit('::', 1)[1] + d[len(top):]
    s = d.replace('::', '__').replace('<', '_L_').replace('>', '_G_')
    s = s.replace(',', '_C').replace('*', '_P_').replace('@', '_P')
    return s

def _r23_esc_v5(disp):
    """生成器侧 esc：pdb.h 对齐名优先（查表验证），退回老候选族；
    含非法字符（方法指针模板参等）一律折叠合法化——legalize 只治毒"""
    p = _pdb_esc(disp)
    if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', p):
        return p
    for c in _r23_esc_variants(disp):
        if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', c):
            return c
    return re.sub(r'[^A-Za-z0-9_]', '_', p)

def _r23_esc_variants(base):
    b = re.sub(r'\s+', '', base).replace('@', '_P_')
    return [b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C'),
            b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C_'),
            b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C'),
            re.sub(r'_+', '_', re.sub(r'[^A-Za-z0-9_]', '_', b.replace('<', '_L_').replace('>', '_G_').replace('::', '__').replace(',', '_C'))),
            re.sub(r'[^A-Za-z0-9_]', '_', base.replace('::', '__').replace('<', '_L_').replace('>', '_G_').replace(' ', '_')).strip('_')]

def _r23_load():
    if R23_LIB or not R23_UDT_P.exists():
        return
    _cur = None
    for _ln in open(R23_UDT_P, encoding='utf-8', errors='replace'):
        _p = _ln.rstrip('\n').split('\t')
        if _p[0] == 'UDT' and len(_p) >= 4:
            _cur = _p[1]
            R23_LIB[_cur] = {'size': int(_p[2]), 'kind': _p[3], 'mems': [], 'bases': [], 'vtab': False}
        elif _p[0] == 'MEMB' and len(_p) >= 6 and _cur:
            R23_LIB[_cur]['mems'].append((_p[2], int(_p[3]), _p[4], int(_p[5])))
        elif _p[0] == 'BASE' and len(_p) >= 5 and _cur:
            R23_LIB[_cur]['bases'].append((_p[2], int(_p[3]), int(_p[4])))
        elif _p[0] == 'VTAB' and _cur:
            R23_LIB[_cur]['vtab'] = True
    # r25: DB 全量导出（members_r25_all.tsv 同 UDT/MEMB 格式）并入 —— 四处皆无的
    # 类（BlastLauncherCompartment 等）唯一真值源；TPI 已有者让位（setdefault）
    _dbp = Path(os.environ.get('SWEEP_DBMEM', '/tmp/my-project/work/members_r25c_all.tsv'))
    if _dbp.exists():
        _cur = None
        _db_new = set()
        for _ln in open(_dbp, encoding='utf-8', errors='replace'):
            _p = _ln.rstrip('\n').split('\t')
            if _p[0] == 'UDT' and len(_p) >= 4:
                _cur = _p[1]
                if _cur not in R23_LIB:
                    R23_LIB[_cur] = {'size': int(_p[2]), 'kind': _p[3], 'mems': [], 'bases': [], 'vtab': False}
                    _db_new.add(_cur)
            elif _cur in _db_new and ((_p[0] == 'MEMB' and len(_p) >= 6) or
                                      (_p[0] == 'BASE' and len(_p) >= 5) or _p[0] == 'VTAB'):
                # r25b: 仅新建条目吃 DB 成员（TPI 已有条目绝不追加——防重复成员）
                if _p[0] == 'MEMB':
                    R23_LIB[_cur]['mems'].append((_p[2], int(_p[3]), _p[4], int(_p[5])))
                elif _p[0] == 'BASE':
                    R23_LIB[_cur]['bases'].append((_p[2], int(_p[3]), int(_p[4])))
                elif _p[0] == 'VTAB':
                    R23_LIB[_cur]['vtab'] = True
    for _d in R23_LIB:
        # r25: pdb.h 对齐名是第一优先变体（文本 token 与 pdb.h 同名时免桥接）
        _pe = _pdb_esc(_d)
        if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', _pe):
            R23_ESC.setdefault(_pe, _d)
            R23_ESC_NORM.setdefault(re.sub(r'_+', '_', _pe).strip('_'), _d)
        for _v in _r23_esc_variants(_d):
            R23_ESC.setdefault(_v, _d)
            R23_ESC_NORM.setdefault(re.sub(r'_+', '_', _v).strip('_'), _d)
        # r25: decomp2c 规则族变体（,→_C_ / *→_P_ 折进通用子再折叠）
        _d2 = re.sub(r'\s+', '', _d).replace('::', '__').replace('<', '_L_') \
            .replace('>', '_G_').replace(',', '_C_').replace('*', '_P_')
        if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', _d2):
            R23_ESC.setdefault(_d2, _d)
            R23_ESC_NORM.setdefault(re.sub(r'_+', '_', _d2).strip('_'), _d)
        # r23b: 文本用短名（Ghidra 去命名空间显示）——逐级剥前缀登记
        _s = _d
        while '::' in _s:
            _s = _s.split('::', 1)[1]
            for _v in _r23_esc_variants(_s):
                R23_ESC.setdefault(_v, _d)
                R23_ESC_NORM.setdefault(re.sub(r'_+', '_', _v).strip('_'), _d)
_r23_load()

def _r23_esc(disp):
    return _r23_esc_v5(disp)

def _r23_bases_of(ts):
    ts = ts.strip()
    out = []
    if ts.endswith('*'):
        b = ts[:-1].strip()
        if b in R23_LIB:
            out.append(b)
        return out
    m = re.fullmatch(r'(.*)\[(\d+)\]', ts)
    if m:
        b = m.group(1).strip()
        if b in R23_LIB:
            out.append(b)
        return out
    if ts in R23_LIB:
        out.append(ts)
    return out

def _r23_elem_c(b, sz):
    b = b.strip()
    if b in R23_PRIM:
        return R23_PRIM[b]
    if b in R23_LIB:
        return _r23_esc(b)
    if b in STRICT_TYPES:
        return b
    return None

def _r23_member_decl(ts, tsz, name):
    if re.match(r'^__|^(this|struct|union|enum|const|volatile|signed|unsigned|register|typedef)$', name or ''):
        name = name + '_m'
    ts = ts.strip()
    if not ts:
        return f'unsigned char {name}[{max(tsz, 1)}];'
    if ts.endswith('*'):
        b = ts[:-1].strip()
        e = _r23_elem_c(b, 4)
        return f'{e if e else "void"} *{name};'
    m = re.fullmatch(r'(.*)\[(\d+)\]', ts)
    if m:
        n = int(m.group(2))
        e = _r23_elem_c(m.group(1).strip(), max(tsz // max(n, 1), 1))
        if e is None:
            return f'unsigned char {name}[{max(tsz, 1)}];'
        return f'{e} {name}[{n}];'
    e = _r23_elem_c(ts, tsz)
    if e is None:
        return f'unsigned char {name}[{max(tsz, 1)}];'
    if not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', e):
        return f'unsigned char {name}[{max(tsz, 1)}];'   # r25: 毒类型名降级字节宿主
    return f'{e} {name};'

def r23_complete_def(disp, out, depth=0, esc=None):
    """发射完整 struct/union 定义（前置 fwd typedef 供指针位/自引用）"""
    if disp in R23_DEFINED or disp not in R23_LIB or depth > 10:
        return False
    ent = R23_LIB[disp]
    if esc is None:
        esc = _r23_esc(disp)
    if esc in STRICT_DEFINED or esc in STRICT_ALIAS or esc in R23_ESC_TAKEN \
            or not re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', esc):
        return False
    R23_DEFINED.add(disp)
    R23_ESC_TAKEN.add(esc)
    R23_DEF_ESC[disp] = esc
    out.append(f'typedef struct {esc} {esc};')
    for (mn, off, ts, tsz) in ent['mems']:
        for b in _r23_bases_of(ts):
            r23_complete_def(b, out, depth + 1)
    for (bd, boff, bsz) in ent['bases']:
        if bd in R23_LIB:
            r23_complete_def(bd, out, depth + 1)
    kw = 'union' if ent['kind'] == 'union' else 'struct'
    lines = []
    mems = sorted(ent['mems'], key=lambda x: x[1])
    cur = 0
    if kw == 'struct':
        zero = any(m[1] == 0 for m in mems) or any(b[1] == 0 for b in ent['bases'])
        if ent['vtab'] and not zero:
            lines.append('  void *_vftable;')
            cur = 4
        items = [('b', b) for b in ent['bases']] + [('m', m) for m in mems]
        items.sort(key=lambda x: x[1][1])
        i = 0
        while i < len(items):
            off = items[i][1][1]
            if off > cur:
                lines.append(f'  unsigned char _pad{cur}[{off - cur}];')
                cur = off
            if off < cur:
                i += 1
                continue
            grp = []
            while i < len(items) and items[i][1][1] == off:
                grp.append(items[i]); i += 1
            if len(grp) == 1:
                k2, it = grp[0]
                if k2 == 'b':
                    be = _r23_esc(it[0])
                    lines.append(f'  {be} _base_{be};')
                    cur += R23_LIB.get(it[0], {}).get('size', it[2])
                else:
                    lines.append('  ' + _r23_member_decl(it[2], it[3], it[0]))
                    cur += it[3]
            else:
                lines.append('  union {')
                mx = 0
                for k2, it in grp:
                    if k2 == 'b':
                        be = _r23_esc(it[0])
                        lines.append(f'    {be} _base_{be};')
                        mx = max(mx, R23_LIB.get(it[0], {}).get('size', it[2]))
                    else:
                        lines.append('    ' + _r23_member_decl(it[2], it[3], it[0]))
                        mx = max(mx, it[3])
                lines.append('  };')
                cur += mx
        if cur < ent['size']:
            lines.append(f'  unsigned char _tail[{ent["size"] - cur}];')
    else:
        for (mn, off, ts, tsz) in ent['mems']:
            lines.append('  ' + _r23_member_decl(ts, tsz, mn))
        mx = max([m[3] for m in ent['mems']] + [0])
        if mx < ent['size']:
            lines.append(f'  unsigned char _pad[{ent["size"] - mx}];')
    out.append(f'{kw} {esc} {{')
    out.extend(lines)
    out.append('};')
    return True
_ESCTYPE_SHAPE = re.compile(r'\b([A-Za-z_][A-Za-z0-9_]*(?:_L_[A-Za-z0-9_]*)+)\b')  # r21: 纯标识符字符（碎片/:://& 拒收）
_SHORT_TMPL = {'Vec2', 'Vec3', 'Maybe', 'Str', 'SharedPtr', 'WeakPtr', 'Darray',
               'IArray', 'tuple2', 'AssocArray', 'Reflectable', 'LocStr'}

def r23_bare_bases():
    """裸模板基名（lib 基名短形 + _SHORT_TMPL）与非模板库短名集"""
    bases, nonames = set(), set()
    for d in R23_LIB:
        if '<' in d:
            b = d.split('<', 1)[0]
            while '::' in b:
                b = b.split('::', 1)[1]
            if re.fullmatch(r'[A-Za-z_]\w*', b):
                bases.add(b)
        else:
            for form in (d, d.split('::')[-1]):
                if re.fullmatch(r'[A-Za-z_]\w*', form):
                    nonames.add(form)
    return bases, nonames

_BARE_BASES, _BARE_NONAMES = r23_bare_bases()
_BARE_BASES |= _SHORT_TMPL
_BARE_EXT = set()   # r23d: 运行期发现的 Ghidra 自产模板基名
# r25: 吃 ns 前缀形态（util__Maybe<int> —— decomp2c 转义后签名位泄漏）
_BARE_TOK = re.compile(r'\b([A-Za-z_][A-Za-z0-9_]*(?:__[A-Za-z][A-Za-z0-9_]*)*)<')

def bare_template_fix(txt):
    """r23c: 裸模板类型（Maybe<double>/Vec2<double>）→ esc 名 —— _QFQN 只吃 :: 名，
    声明位裸模板留在原文则声明全灭，下游 undeclared 级联"""
    out, i, n = [], 0, len(txt)
    while True:
        m = _BARE_TOK.search(txt, i)
        if not m:
            out.append(txt[i:])
            break
        base = m.group(1)
        # r25: ns 前缀形态按尾段判定（util__Maybe → Maybe ∈ 基名集）
        base_tail = base.split('__')[-1] if '__' in base else base
        if base_tail not in _BARE_BASES and base_tail not in _BARE_EXT and base not in _BARE_EXT:
            # r23d: 未见过的模板基名也 esc 化（VecN 等 Ghidra 自产类型）——
            # 前向 typedef 保指针位；值位诚实报错 defer
            if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', base_tail) and not _fidx_any(base_tail) \
                    and not _fidx_any(base):
                _BARE_EXT.add(base_tail)
            else:
                out.append(txt[i:m.end()])
                i = m.end()
                continue
        j, depth = m.end(), 1
        while j < n and depth:
            c = txt[j]
            if c == '<':
                depth += 1
            elif c == '>':
                depth -= 1
            j += 1
        if depth:
            out.append(txt[i:m.end()])
            i = m.end()
            continue
        raw = txt[m.start():j]
        esc = re.sub(r'[^A-Za-z0-9_]', '_', raw.replace('::', '__').replace('<', '_L_')
                     .replace('>', '_G_').replace(' ', '_')).strip('_')
        if esc and re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]{0,160}', esc) \
                and esc not in STRICT_TYPES and not _fidx_any(raw) \
                and not _data_name_hit(esc):
            _TYPEDEF_POOL.add(esc)
            out.append(txt[i:m.start()])
            out.append(esc)
            i = j
        else:
            out.append(txt[i:m.end()])
            i = m.end()
    return ''.join(out)

# r25: 数据/符号名空间（typedef 守卫——`_s` 物理单位后缀误判结构体等）
_DATA_NAMES = set()
for _dn_f in ('data_names.tsv', 'symbols.tsv'):
    _dn_p3 = REPO / 'meta' / _dn_f
    if _dn_p3.exists():
        for _ln in open(_dn_p3, encoding='utf-8', errors='replace'):
            _pp = _ln.rstrip('\n').split('\t')
            for _cell in _pp[1:3]:
                if not _cell:
                    continue
                if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', _cell):
                    _DATA_NAMES.add(_cell)
                elif '::' in _cell:
                    # r25b: 反编译文本 token 是 ::→__ 形态（Physics__X）；短名也备
                    _u = _cell.replace('::', '__')
                    if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', _u):
                        _DATA_NAMES.add(_u)
                    _sh = _cell.rsplit('::', 1)[-1]
                    if re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', _sh):
                        _DATA_NAMES.add(_sh)
# r25b: 头侧 extern 数据名（cde_undecl.h 再生头 = C 侧真值，同名必冲突）
for _h in (REPO / 'src').glob('cde_undecl*.h'):
    for _ln in open(_h, encoding='utf-8', errors='replace'):
        if _ln.startswith('extern') and '(' not in _ln:
            _m3 = re.search(r'([A-Za-z_][A-Za-z0-9_]*)\s*;', _ln)
            if _m3:
                _DATA_NAMES.add(_m3.group(1))

def _data_name_hit(nm):
    """r25: NS 剥链——Physics__DefaultShipOperationalTime_s 形态命中数据名则真"""
    if nm in _DATA_NAMES:
        return True
    s = nm
    while '__' in s:
        s = s.split('__', 1)[1]
        if s in _DATA_NAMES:
            return True
    return False

# r25: xmm 128 位常量字节序真值表（order: 0=as-is 1=swap -1=not-found）
XMM_TRUTH = {}
_xmmp = REPO / 'meta' / 'xmm_truth.tsv'
if _xmmp.exists():
    for _ln in open(_xmmp, encoding='utf-8', errors='replace'):
        _pp = _ln.rstrip('\n').split('\t')
        if len(_pp) >= 2 and re.fullmatch(r'[0-9a-f]{32}', _pp[0]):
            try:
                XMM_TRUTH[_pp[0]] = int(_pp[1])
            except ValueError:
                pass

def typedef_scan(txt):
    out = set()
    for m in _ESCTYPE_SHAPE.finditer(txt):
        nm = m.group(1)
        if nm not in STRICT_TYPES and not nm.startswith(('undefined', 'slice_', 'cde_')) \
                and not _fidx_any(nm) and not _data_name_hit(nm):
            # r22: 函数名（含多候选重载）绝不 typedef（与 _type_rewrite 同纪律）
            # r20: 转义 typo 折叠探测——若折叠后是已知类型，登记为别名需求
            fold = nm.replace('_P__G_', '_P_G_').replace('_L__', '_L_')
            if fold != nm and fold in STRICT_TYPES:
                TYPE_ALIAS.add((fold, nm))
                continue
            out.add(nm)
    for w in re.findall(r'\b([A-Za-z_]\w*)\b', txt):
        if w in _SHORT_TMPL and w not in STRICT_TYPES:
            out.add(w)
        elif w in _BARE_NONAMES and w not in STRICT_TYPES and not _fidx_any(w) \
                and not _data_name_hit(w):
            # r23c: 裸非模板库名（CraftBlueprint/Radiation...）—— 值位声明需要 typedef
            out.add(w)
    return out

# ---- r20c: 编译级机械修复（错误面驱动，等价语义保持）----
# F1: 数组成员 slice 整体赋值 → memcpy（字节拷贝语义等价）
_SLICE_ARR_ASSIGN = re.compile(
    r'\(\(slice_view \*\)&([^;=]+?)\)->_(\d+)_(\d+)_ = \(\(slice_view \*\)&([^;=]+?)\)->_(\d+)_(\d+)_;')

_SLICE_CAST_R = re.compile(
    r'\(\(slice_view \*\)&([^\n;=]+?)\)->_(\d+)_(\d+)_ = \*\(undefined\d \(\*\)\s*\[(\d+)\]\)([^;\n]+);')
_SLICE_CAST_L = re.compile(
    r'\*\(undefined\d \(\*\)\s*\[(\d+)\]\)([^;\n]+) = \(\(slice_view \*\)&([^\n;=]+?)\)->_(\d+)_(\d+)_;')

def slice_cast_fix(txt):
    def rep_r(m):
        e, n, s, dim, src = m.groups()
        return (f'memcpy((void *)((slice_view *)&{e})->raw + {n}, '
                f'(const void *){src}, {dim});')
    def rep_l(m):
        dim, dst, e, n, s = m.groups()
        return (f'memcpy((void *){dst}, '
                f'(const void *)((slice_view *)&{e})->raw + {n}, {dim});')
    txt = _SLICE_CAST_R.sub(rep_r, txt)
    txt = _SLICE_CAST_L.sub(rep_l, txt)
    return txt

def slice_assign_fix(txt):
    def rep(m):
        e1, n1, s1, e2, n2, s2 = m.groups()
        if s1 != s2 or n1 != n2 or s1 in ('1', '2', '4', '8'):
            return m.group(0)
        return (f'memcpy((void *)((slice_view *)&{e1})->raw + {n1}, '
                f'(const void *)((slice_view *)&{e2})->raw + {n2}, {s1});')
    return _SLICE_ARR_ASSIGN.sub(rep, txt)

# F2a: 标量 slice 写的前置 * 剥离（*((slice_view *)&E)->_0_4_ = X 非法）
_SLICE_DEREF = re.compile(r'\*\s*\(\(slice_view \*\)&([^\n;=]+?)\)->_(\d+)_(\d+)_\s*=')

def slice_deref_fix(txt):
    return _SLICE_DEREF.sub(r'((slice_view *)&\1)->_\2_\3_ =', txt)

# F2b: 带 [] 段的成员链 slice wrap（Data[0xf]._4_4_ —— fam8 的 \w+ 链抓不到）
# 基址允许：标识符/括号表达式根（cast-deref 等）+ [] 段 + .成员 链；负向排除 _N_M_ 形状
_SLICE_PATH = re.compile(r'((?:[A-Za-z_]\w*|\((?:[^()\[\]{};]|\([^()]*\))*\))(?:\[[^\]\[]*\])?(?:\.(?!_\d)(?:[A-Za-z_]\w*|\((?:[^()\[\]{};]|\([^()]*\))*\))(?:\[[^\]\[]*\])?)*)\._(\d+)_(\d+)_')

def slice_path_fix(txt):
    return _SLICE_PATH.sub(r'((slice_view *)&\1)->_\2_\3_', txt)

# F5: vcall 基址 cast（(*_param_2 + 0xc) —— param 为 u32 值形态）
_VCALL_BASE = re.compile(r'\(\*([A-Za-z_]\w*) \+ (0x[0-9a-fA-F]+)\)')

_SUB168_ARR = re.compile(
    r'SUB168\(\(\(slice_view \*\)&([^,()]+?)\)->_(\d+)_(\d+)_,\s*(\d+)\)')

def sub168_arr_fix(txt):
    def rep(m):
        e, n, s, k = m.groups()
        if int(s) > 8:
            return f'((slice_view *)&{e})->_{n}_{s}_[{k}]'
        return m.group(0)
    return _SUB168_ARR.sub(rep, txt)

def vcall_base_fix(txt):
    return _VCALL_BASE.sub(r'(*(int *)(uintptr_t)\1 + \2)', txt)

# F3: func-ptr 类型名内嵌原始模板（_func___cdecl_Vec2<int>_void_ptr）
_FUNCPTR_RAW = re.compile(r'\b(_func___cdecl_[A-Za-z_]\w*)<([^<>()]*?)>(_\w+)')

def funcptr_esc_fix(txt):
    def rep(m):
        t = A.type_escape(m.group(2))
        if t:
            _full = f'{m.group(1)}_L_{t}_G_{m.group(3)}'
            if _full not in STRICT_TYPES and re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]*', _full):
                TYPEFUNC_POOL.add(_full)
        return f'{m.group(1)}_L_{t}_G_{m.group(3)}' if t else m.group(0)
    return _FUNCPTR_RAW.sub(rep, txt)

TYPEFUNC_POOL = set()

# F4: 裸析构调用（~Fleet(this) —— CALL_RE 不吃 ~ 前缀）
_BARE_DTOR = re.compile(r'(?<![\w:])~([A-Za-z_]\w*)\s*\(')

_PSEUDO_TYPES = {'sbyte': 'signed char'}   # r25: Ghidra 伪类型缺失族（按 iso 错误面扩充）

def pseudo_type_fix(txt):
    """r25: 头契约未定义的 Ghidra 伪类型 → 等宽 C 标量（token 级，\b 防吞前缀）"""
    for k, v in _PSEUDO_TYPES.items():
        if re.search(r'\b' + k + r'\b', txt):
            txt = re.sub(r'\b' + k + r'\b', v, txt)
    return txt

_VFTABLE_M = re.compile(r'(\w(?:[\w\]\.>]*?\w)?)\._vftable\b')
_VFTABLE_A = re.compile(r'([\w\]\)]+)\->_vftable\b')

def vftable_fix(txt):
    """r25: vtable 指针恒在 offset 0 —— 成员访问 → 首槽指针读（字节等价）
       p->_vftable → *(void **)p ;  X._vftable → *(void **)&X
       （真有 _vftable 成员的类型同样字节等价：成员必在 0x0）"""
    n = 0
    txt, c1 = _VFTABLE_A.subn(lambda m: f'(*(void **)&{m.group(1)})', txt)
    txt, c2 = _VFTABLE_M.subn(lambda m: f'(*(void **)&{m.group(1)})', txt)
    return txt

_SCALAR_DECL = re.compile(
    r'^(\s*)((?:const\s+|unsigned\s+|signed\s+)*[A-Za-z_][\w \t]*?[\t ])\**'
    r'((?:local_|in_|auStack|uStack|iStack|sStack|lStack|dStack|fStack|eStack|extraout)[A-Za-z0-9_]*)(\s*;)\s*$',
    re.M)

def scalar_subscript_fix(txt):
    """r25: 标量声明的槽位被下标访问 —— Ghidra 槽数组观感差
       仅 [0] → 剥下标；出现 k>0 → 声明升维 [kmax+1]（访问语义逐点等价）"""
    decls = {}
    for m in _SCALAR_DECL.finditer(txt):
        decls[m.group(3)] = m
    if not decls:
        return txt
    use = {}
    for nm in decls:
        use[nm] = []
        for x in re.findall(r'\b' + nm + r'\s*\[\s*([0-9]+|0x[0-9a-fA-F]+)\s*\]', txt):
            use[nm].append(int(x, 16) if x.startswith('0x') else int(x, 10))
    for nm, ms in decls.items():
        if nm not in use or not use[nm]:
            continue
        mx = max(use[nm])
        # r25b: 混合用法守卫 —— 存在非下标裸用（直接赋值/取址）则不得剥下标/升维
        n_all = len(re.findall(r'\b' + nm + r'\b', txt)) - 1   # 减声明位
        n_sub = len(re.findall(r'\b' + nm + r'\s*\[', txt))
        if n_all != n_sub:
            continue
        if mx == 0:
            txt = re.sub(r'\b' + nm + r'\s*\[\s*0\s*\]', nm, txt)
        elif mx > 0:
            d = ms.group(0)
            if '[' not in d:
                txt = txt.replace(d, d.rstrip() [:-1].rstrip() + f'[{mx + 1}];', 1)
    return txt

# ==================== r25w13: 错误驱动等价改写（iso 原始错误图 + DB 成员真值） ====================
# 输入: SWEEP_ERRMAP = iso_sweep ISO_RAWERRS 产物 (va \t sec行 \t col \t msg)
# 纪律: 只改错误命中的 (va,line) 站点；col 锚定失败/DB 缺证 → 不动（留给下轮）
_ERRMAP_R25 = {}        # va -> {sec_line(1based): [(col, msg), ...]}
_TILE_MEMBERS = {}      # esc_udt -> { member: [(kind, off, size, ctype), ...] }（w15 泛化瓦片成员表）
_M_SNAPS = {}           # membname -> set((elem_size, elem_ctype, total_size))
_M_NAV_PARENTS = {}     # 非标量成员名 -> set(esc_udt)

def w13_load_errmap():
    p = os.environ.get('SWEEP_ERRMAP', '')
    if not p or not Path(p).exists():
        return
    for ln in open(p, encoding='utf-8', errors='replace'):
        q = ln.rstrip('\n').split('\t')
        if len(q) >= 4:
            try:
                _ERRMAP_R25.setdefault(q[0].lstrip('0') or '0', {}) \
                    .setdefault(int(q[1]), []).append((int(q[2]), q[3]))
            except ValueError:
                pass

_ELEM_CTYPE = {'undefined1': 'undefined1', 'undefined2': 'undefined2',
               'undefined4': 'undefined4', 'undefined8': 'undefined8',
               'byte': 'undefined1', 'char': 'char', 'uchar': 'undefined1',
               'sbyte': 'signed char', 'ushort': 'undefined2', 'uint': 'undefined4',
               'int': 'int', 'double': 'double', 'float': 'float', 'ulonglong': 'undefined8',
               'undefined': 'undefined1'}

def _classify_tile_type(typ):
    """TSV 类型串 → (kind, ctype)。kind: bytes(数组退化)/scalar(标量值)/struct(结构体视图)"""
    t = typ.strip()
    m = re.fullmatch(r'([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]', t)
    if m and m.group(1) in _ELEM_CTYPE:
        return ('bytes', None)
    if re.search(r'\*\s*(const\s*)?$', t) and '[' not in t:
        return ('scalar', 'undefined4')
    m = re.fullmatch(r'(undefined[1248]|int|uint|char|uchar|sbyte|ubyte|short|ushort|'
                     r'float|double|longlong|ulonglong|bool|_Bool|long|ulong|dword|word|byte)', t)
    if m:
        ct = {'uint': 'undefined4', 'uchar': 'undefined1', 'ubyte': 'undefined1',
              'ushort': 'undefined2', 'sbyte': 'signed char', 'bool': 'int',
              '_Bool': 'int', 'long': 'int', 'ulong': 'undefined4', 'dword': 'undefined4',
              'word': 'undefined2', 'byte': 'undefined1',
              'longlong': 'undefined8', 'ulonglong': 'undefined8'}.get(m.group(1), m.group(1))
        return ('scalar', ct)
    return ('struct', _pdb_esc(t))

def w13_load_members():
    tsv = Path(os.environ.get('SWEEP_MEMBERS', '/tmp/my-project/work/members_r25c_all.tsv'))
    if not tsv.exists():
        return
    for ln in open(tsv, encoding='utf-8', errors='replace'):
        q = ln.rstrip('\n').split('\t')
        if q[0] != 'MEMB' or len(q) < 6:
            continue
        udt, name, off, typ, size = q[1], q[2], q[3], q[4], q[5]
        try:
            off_i, size_i = int(off), int(size)
        except ValueError:
            continue
        # 数组快照: elem[N] —— 下标类的元素宽度证据
        m = re.fullmatch(r'([A-Za-z_][\w]*)\s*\[\s*(\d+)\s*\]', typ.strip())
        if m and m.group(1) in _ELEM_CTYPE:
            e = _ELEM_CTYPE[m.group(1)]
            _M_SNAPS.setdefault(name, set()).add(
                ({'undefined1': 1, 'char': 1, 'signed char': 1}.get(e, None) or
                 {'undefined2': 2, 'undefined4': 4, 'undefined8': 8,
                  'int': 4, 'double': 8, 'float': 4}.get(e, 1), e, size_i))
        # 标量导航类的父类型证据（唯一父才发射）
        _M_NAV_PARENTS.setdefault(name, set()).add(_pdb_esc(udt))
        # 瓦片成员全量表（_padNN/_tail/field_0xN/Normal…）：esc_udt -> name -> rows
        kind, ct = _classify_tile_type(typ)
        _TILE_MEMBERS.setdefault(_pdb_esc(udt), {}) \
            .setdefault(name, []).append((kind, off_i, size_i, ct))

_PAD_TOK = re.compile(r'\b((?:[A-Za-z_]\w*)|(?:\([^()\n]{1,80}\)))->(_pad\d+)\b')

def tile_member_fix(txt, va):
    """r25w15: no-member 瓦片成员泛化重建（字节等价，三型按用法裁决）
       bytes:   X->M → (*(char (*)[S])((char *)X + O))   [数组退化=首址，算术=字节步进]
       scalar:  X->M → (*(CT)((char *)X + O))            [值语义]
       struct:  X->M → (*(CT *)((char *)X + O))          [导航语义]
       依据: msg 给 (struct,member)；DB TSV 给 (off,size,kind)；pdb.h 生成器
       丢弃 pad/tail/field 成员 → 反编译文本按 DB 名失配。用法裁决：
       M[ / M+ → bytes 行；M. / 其余 → scalar/struct 优先。"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    lines = txt.split('\n')
    hit = False
    for ln_no, lst in sites.items():
        if not (1 <= ln_no <= len(lines)):
            continue
        specs = {}
        for col, msg in lst:
            m = re.search(r"no member named '([A-Za-z_]\w*)' in 'struct ([A-Za-z0-9_]+)'", msg)
            if not m or m.group(1) in ('_vftable',):
                continue
            nm, sesc = m.group(1), m.group(2)
            rows = _TILE_MEMBERS.get(sesc, {}).get(nm)
            if rows and nm not in specs:
                specs[nm] = rows
        if not specs:
            continue
        s = lines[ln_no - 1]
        for memb, rows in specs.items():
            use_arr = re.search(re.escape(memb) + r'\s*(\[|\+|-)', s)
            if use_arr:
                pick = next((r for r in rows if r[0] == 'bytes'), rows[0])
            else:
                pick = next((r for r in rows if r[0] != 'bytes'), rows[0])
            kind, off, size, ct = pick
            if kind == 'bytes':
                rep = lambda mm, _o=off, _s=size: \
                    f'(*(char (*)[{_s}])((char *){mm.group(1)} + {_o}))'
            elif kind == 'scalar':
                rep = lambda mm, _o=off, _c=ct: \
                    f'(*({_c})((char *){mm.group(1)} + {_o}))'
            else:
                rep = lambda mm, _o=off, _c=ct: \
                    f'(*({_c} *)((char *){mm.group(1)} + {_o}))'
            s = re.sub(r'\b((?:[A-Za-z_]\w*)|(?:\([^()\n]{1,80}\)))->' + re.escape(memb) + r'\b',
                       rep, s)
        if s != lines[ln_no - 1]:
            lines[ln_no - 1] = s
            hit = True
    return '\n'.join(lines) if hit else txt

def _nav_chain_back(line, pos):
    """从 pos(0based) 向左扫导航链: 标识符/./->/[]/配对括号；链内空白处停。
       返回链起点(0based)或 None。`-` 仅在 `->` 中消费（`a - b` 是减法）。"""
    while pos >= 0 and line[pos] == ' ':
        pos -= 1          # 前导空白跳过（`Size + 0xc` 的尾空格）
    i = pos
    j = None
    while i >= 0:
        j = i
        while j >= 0 and (line[j].isalnum() or line[j] == '_'):
            j -= 1
        if j == i:   # 非标识符字符
            if i >= 0 and line[i] == '.':
                i -= 1
                continue
            if i >= 1 and line[i] == '>' and line[i-1] == '-':
                i -= 2
                continue
            if i >= 0 and line[i] == ']':
                depth = 0
                k = i
                while k >= 0:
                    if line[k] == ']':
                        depth += 1
                    elif line[k] == '[':
                        depth -= 1
                        if depth == 0:
                            break
                    k -= 1
                if k < 0:
                    return None
                i = k - 1
                continue
            if i >= 0 and line[i] == ')':
                depth = 0
                k = i
                while k >= 0:
                    if line[k] == ')':
                        depth += 1
                    elif line[k] == '(':
                        depth -= 1
                        if depth == 0:
                            break
                    k -= 1
                if k < 0:
                    return None
                # 前驱延续链（./->/word/]/(/)），否则括号组即链首
                kk = k - 1
                while kk >= 0 and line[kk] == ' ':
                    kk -= 1
                if kk < 0:
                    return k
                c2 = line[kk]
                if c2 in '.)]' or c2.isalnum() or c2 == '_':
                    i = k - 1
                    continue
                if c2 == '>' and kk >= 1 and line[kk - 1] == '-':
                    i = k - 1
                    continue
                return k
            return None
        i = j
        if i < 0:
            return 0
        c = line[i]
        if c == '.':
            i -= 1
            continue
        if c == '>' and i >= 1 and line[i-1] == '-':
            i -= 2
            continue
        break
    return j + 1 if j is not None else None

def member_addr_fix(txt, va):
    """invalid-operands(struct)/arithmetic-required(struct) → 成员地址形式（字节等价）
       (E).M + K → ((char *)&((E).M)) + K   [Ghidra 语义: 成员地址 + K 字节]
       *(T *)(E).M / *(T *)E.M → 插 &（操作数首列锚定）"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    lines = txt.split('\n')
    for ln_no, lst in sites.items():
        if not (1 <= ln_no <= len(lines)):
            continue
        s = lines[ln_no - 1]
        orig = s
        for col, msg in sorted(lst, key=lambda x: -x[0]):
            if "'struct" not in msg:
                continue
            if 'invalid operands to binary' in msg:
                c0 = col - 1   # 0based，应指向 +- 运算符
                if 0 <= c0 < len(s) and s[c0] in '+-' and not (c0 >= 1 and s[c0-1] == '-'):
                    start = _nav_chain_back(s, c0 - 1)
                    if start is not None and start < c0:
                        chain = s[start:c0].rstrip()
                        if chain and re.search(r'(\.|->)[A-Za-z_]\w*$', chain):
                            s = (s[:start] + '((char *)&(' + chain + '))'
                                 + s[c0:])
            elif 'where arithmetic or pointer type is required' in msg:
                c0 = col - 1
                if 0 <= c0 < len(s) and (s[c0] == '(' or s[c0].isalpha() or s[c0] == '_'):
                    m = re.match(r'(?:\([^()\n]+\)|[A-Za-z_][\w\.\>\[\]\-]*)'
                                 r'(?:\.|->)[A-Za-z_]\w*', s[c0:])
                    if m:
                        # 防二次 &: 操作数前不是 &
                        pre = ''
                        k = c0 - 1
                        while k >= 0 and s[k] == ' ':
                            k -= 1
                        if k >= 0 and s[k] == '&':
                            continue
                        s = s[:c0] + '&' + s[c0:]
        if s != orig:
            lines[ln_no - 1] = s
    return '\n'.join(lines)

def subscript_member_fix(txt, va):
    """subscripted-not-array → DB 数组快照边界验证后的元素视图重建（字节等价）
       BASE.M[K] → ((ELEM *)&(BASE.M))[K]
       依据: M 的 DB 数组快照 (elem,S)；(K+1)*elem ≤ S 才发射；歧义跳过"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    lines = txt.split('\n')
    for ln_no, lst in sites.items():
        if not (1 <= ln_no <= len(lines)):
            continue
        s = lines[ln_no - 1]
        orig = s
        for col, msg in sorted(lst, key=lambda x: -x[0]):
            if 'subscripted value is not an array' not in msg:
                continue
            c0 = col - 1    # '[' 位置
            if not (0 <= c0 < len(s) and s[c0] == '['):
                continue
            # K
            mK = re.match(r'\[\s*(0x[0-9a-fA-F]+|\d+)\s*\]', s[c0:])
            if not mK:
                continue
            K = int(mK.group(1), 16) if mK.group(1).startswith('0x') else int(mK.group(1))
            # M: '[' 前的标识符
            j = c0 - 1
            while j >= 0 and (s[j].isalnum() or s[j] == '_'):
                j -= 1
            memb = s[j+1:c0]
            if not memb or j < 0 or s[j] not in '.':
                if not (j >= 1 and s[j] == '>' and s[j-1] == '-'):
                    continue
            # 元素证据: 反编译器只对"数组视图"下标 → 视图必是 M 的某数组快照。
            # 全部快照字节宽 → 字节语义必真（地址 = M 首址 + K 字节）；混合宽度保守跳过。
            cands = _M_SNAPS.get(memb, ())
            if not cands or any(e != 1 for e, ct, S in cands):
                continue
            if not any(S >= K + 1 for e, ct, S in cands):
                continue   # 反编译视图必有 S ≥ K+1（否则 Ghidra 不会发 [K]）
            start = _nav_chain_back(s, j)
            if start is None:
                continue
            base = s[start:c0]
            if not base:
                continue
            s = (s[:start] + f'((undefined1 *)&({base})){mK.group(0)}' + s[c0 + mK.end():])
        if s != orig:
            lines[ln_no - 1] = s
    return '\n'.join(lines)

def scalar_nav_fix(txt, va):
    """member-reference-not-a-pointer → 槽位即对象基址的等价类型视图
       (SLOT)->F → ((T *)&(SLOT))->F   [T=F 的唯一父 UDT]
       依据: 槽内 4 字节 = 对象首 4 字节（内嵌对象），&槽 = 对象地址"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    want_lines = {ln for ln, lst in sites.items()
                  for col, msg in lst
                  if 'member reference type' in msg and 'is not a pointer' in msg}
    if not want_lines:
        return txt
    lines = txt.split('\n')
    for ln_no in want_lines:
        if not (1 <= ln_no <= len(lines)):
            continue
        s = lines[ln_no - 1]
        orig = s
        # 右到左: )->F 形态，平衡回扫取 SLOT，唯一父才发射（右先防位移）
        for m in reversed(list(re.finditer(r'\)->([A-Za-z_]\w*)\b', s))):
            memb = m.group(1)
            pars = _M_NAV_PARENTS.get(memb)
            if not pars or len(pars) != 1:
                continue
            T = next(iter(pars))
            close = m.start()          # ')' 位置
            depth = 0
            k = close
            while k >= 0:
                if s[k] == ')':
                    depth += 1
                elif s[k] == '(':
                    depth -= 1
                    if depth == 0:
                        break
                k -= 1
            if k < 0 or k == close:
                continue
            base = s[k + 1:close]
            s = s[:k] + f'(({T} *)&({base}))' + s[close + 1:]
        if s != orig:
            lines[ln_no - 1] = s
    return '\n'.join(lines)

def base_member_fix(txt, va):
    """no-member 'base_X' → 单继承基类 offset-0 等价
       (E).base_X._vftable → (*(void **)(E))   [虚表槽 = 基首 4 字节]
       &E.base_X → (void *)&E                 [基址 = 对象地址]"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    want = False
    for ln_no, lst in sites.items():
        for col, msg in lst:
            if re.search(r"no member named 'base_[A-Za-z0-9_]+'", msg):
                want = True
    if not want:
        return txt
    txt = re.sub(r'\(([^()\n]+?)(?:->|\.)base_[A-Za-z0-9_]+\)\._vftable\b',
                 r'(*(void **)(\1))', txt)
    txt = re.sub(r'&([A-Za-z_][\w\.\>\[\]]*?)(?:->|\.)base_[A-Za-z0-9_]+\b',
                 r'(void *)&\1', txt)
    return txt

def stray_underscore_fix(txt):
    """decomp2c 渲染伪影: ` _/*hex*/字面量` → 剥离悬挂下划线（字面量本体等价）"""
    return re.sub(r'([\s(=+,]|\A)_(\s*)/\*([0-9a-fA-F]{8})\*/', r'\1\2/*\3*/', txt)

# ==================== r26w1: SIMD auVar 等价接入（战役①） ====================
# 取证: objdump 0048a690 —— pmovzxbd/pshuflw/pshufhw 首参=Ghidra 渲染死 dst（原指令
# 不读 dst，丢弃等价）；pmulld/divpd/pand 双活。ZEXT48=纯整数 zext（port_prelude
# 标量宏语义正确）；ZEXT416/816/412/812 = >8 字节 blob（Ghidra i686 无 128 位整型
# 的落槽渲染，高位补零）。cde_simd.h 提供值语义载体与伪指令宏，本组 fixer 做站点级
# 形式改写（错误驱动，列锚定）。_local_NN = Ghidra 同栈槽异型别名（大视图），以
# *(auV16_t *)&local_NN 重建（写穿相邻槽 = 原程序行为，stack 布局由 Ghidra 保证）。
_SIMD_RVAL_CALL = re.compile(
    r'\s*(?:\([^()]+\)\s*)*(?:ZEXT(?:416|816|412|812)|pmovzxbd|pmulld|pshuflw|'
    r'pshufhw|divpd|au_and2|au_or2|au_xor2)\b')
_SIMD_VT = {8: 'auV8_t', 12: 'auV12_t', 16: 'auV16_t'}
_SIMD_BLOB_NAMES = re.compile(r'^(auVar\d+|local_\w+|auStack_\w+|uStack_\w+|'
                              r'in_XMM\w+|_DAT_[0-9a-f]+|___xmm_[0-9a-f]+)$')

def _simd_blobs(txt):
    """sec 内 blob 局部名 → 声明字节数（undefined1 NAME[N] 声明位）"""
    m = {}
    for mm in re.finditer(r'\bundefined1\s+(auVar\d+|local_\w+|auStack_\w+|'
                          r'uStack_\w+|in_XMM\w+)\s*\[\s*(\d+)\s*\]', txt):
        m[mm.group(1)] = int(mm.group(2))
    return m

def simd_alias_fix(txt, va):
    """Ghidra 同栈槽异型别名: _local_NN 未声明而 local_NN 已声明 →
       _local_NN → (*(auV16_t *)&local_NN)（16 字节大视图；写穿 = 原行为）"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    need = set()
    for ln_no, lst in sites.items():
        for _c, m in lst:
            if "use of undeclared identifier '_local_" in m or \
               "use of undeclared identifier '_auStack_" in m:
                need.add(re.search(r"'(_(?:local|auStack)_\w+)'", m).group(1))
    if not need:
        return txt
    decls = set(re.findall(r'\b(?:undefined1|undefined)\s+(local_\w+|auStack_\w+)\s*\[', txt))
    for nm in sorted(need):
        base = nm[1:]
        if base not in decls:
            continue
        # 仅替换裸名（_local_38 非标识符后半 —— 用否定环视防 _local_38x）
        txt = re.sub(r'(?<![\w])' + re.escape(nm) + r'(?![\w])',
                     f'(*(auV16_t *)&{base})', txt)
    return txt

def simd_cast_fix(txt, va):
    """(T)ZEXTkn(...) blob cast → *(T *)&ZEXTkn(...)（blob 复合字面量地址重释）
       依据: (struct)整数 在 clang 即本类错误（simd_probe.c 实证同消息同列锚）。
       ZEXT48 纯标量不在此列（(double)(u64) 合法，绝不可动）"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    lines = txt.split('\n')
    hit = False
    for ln_no, lst in sites.items():
        if not (1 <= ln_no <= len(lines)):
            continue
        if not any(('where arithmetic or pointer type is required' in m) or
                   ('invalid operands' in m) for _c, m in lst):
            continue
        s = lines[ln_no - 1]
        ns = re.sub(r'\(([^()\n]+)\)\s*(ZEXT(?:416|816|412|812))\(',
                    r'*(\1 *)&\2(', s)
        if ns != s:
            lines[ln_no - 1] = ns
            hit = True
    return '\n'.join(lines) if hit else txt

def _simd_blob_lval(rhs, blobs):
    """RHS 是否 blob lvalue（数组/union 亦可 memcpy 读取的左值）。
    只认简单形态: 裸名/带下标、* 解引用、slice 成员、alias 产物。
    含二元运算符的复合表达式一律拒绝（binop fixer 辖区）"""
    t = rhs.strip()
    if t.startswith('*') or t.startswith('(*(auV'):
        return True
    if re.fullmatch(r'[A-Za-z_]\w*(\s*\[[^\]]*\])?', t):
        m = re.match(r'[A-Za-z_]\w*', t)
        return bool(_SIMD_BLOB_NAMES.match(m.group(0)) or m.group(0) in blobs)
    if t.startswith('((slice_view'):
        return True
    return False

def simd_assign_fix(txt, va):
    """blob 整体赋值（数组不可赋值 / incompatible type）等价化:
       memcpy(&(LHS), &(RHS), N) —— N = RHS 真值尺寸优先（伪指令宏表 / blob 声明 /
       (*)[N] 解析），兜底 LHS 尺寸。Ghidra COPY 语义 = 按源尺寸搬运。
       伪指令结果经 cde_simd 池化为 lvalue（可 &），blob 复合字面量可 &，
       数组/union lvalue 可 & —— 三类 RHS 统一 memcpy。"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    blobs = _simd_blobs(txt)
    lines = txt.split('\n')
    for ln_no, lst in sites.items():
        if not (1 <= ln_no <= len(lines)):
            continue
        msg_all = ' '.join(m for _c, m in lst)
        if 'is not assignable' not in msg_all and \
           'assigning to' not in msg_all:
            continue
        s = lines[ln_no - 1]
        # LHS 已是解引用/池化 lvalue 形态 → memcpy 同样可写（防双包靠 RHS 门）
        # 顶层 '='（不在括号内、非比较/复合赋值）
        depth = 0
        eq = -1
        for i, ch in enumerate(s):
            if ch == '(':
                depth += 1
            elif ch == ')':
                depth -= 1
            elif ch == '=' and depth == 0:
                if i + 1 < len(s) and s[i + 1] == '=':
                    continue
                if i >= 1 and s[i - 1] in '<>!+-*/%&|^=':
                    continue
                eq = i
                break
        if eq <= 0:
            continue
        lhs = s[:eq].strip()
        rhs = s[eq + 1:].strip().rstrip(';').strip()
        if not rhs:
            continue
        # LHS 尺寸（slice 成员 _N_S_ → S；blob 名 → 声明；其余 16 兜底）
        lhs_size = 16
        mm = re.search(r'->_(\d+)_(\d+)_\s*$', lhs)
        if mm:
            lhs_size = int(mm.group(2))
        else:
            nm = re.findall(r'[A-Za-z_]\w*', lhs)
            if nm:
                lhs_size = blobs.get(nm[-1], 16)
        # RHS 真值尺寸
        n = None
        mc = re.match(r'(?:\([^()]+\)\s*)*(ZEXT\d+|pmovzxbd|pmulld|pshuflw|'
                      r'pshufhw|divpd|au_and2|au_or2|au_xor2)\b', rhs)
        if mc:
            n = 12 if mc.group(1) in ('ZEXT412', 'ZEXT812') else 16
        elif not _simd_blob_lval(rhs, blobs):
            continue    # 标量 RHS 等 park
        if n is None:
            ma = re.match(r'\*\s*\(undefined1\s*\(\*\)\s*\[\s*(\d+)\s*\]\)', rhs)
            if ma:
                n = int(ma.group(1))
        if n is None:
            msa = re.match(r'\(\(slice_view\s*\*\)&[A-Za-z_]\w*\)->_(\d+)_(\d+)_', rhs)
            if msa:
                n = int(msa.group(2))
        if n is None:
            mt = re.match(r'[A-Za-z_]\w*', rhs)
            if mt:
                n = blobs.get(mt.group(0))
        if n is None:
            n = lhs_size    # 兜底
        if n not in (1, 2, 4, 8, 12, 16, 24, 32):
            n = 16
        ns = f'memcpy(&({lhs}), &({rhs}), {n});'
        if ns != s:
            lines[ln_no - 1] = ns
    return '\n'.join(lines)

def simd_binop_fix(txt, va):
    """blob 按位运算 (pand/por/pxor) → au_and2/au_or2/au_xor2 值语义调用
       仅当两侧均为已声明 blob（含 ___xmm_/_DAT_/in_XMM），先 3 元链后 2 元"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    blobs = _simd_blobs(txt)
    lines = txt.split('\n')
    for ln_no, lst in sites.items():
        if not (1 <= ln_no <= len(lines)):
            continue
        if not any('invalid operands' in m for _c, m in lst):
            continue
        s = lines[ln_no - 1]

        def _is_blob(tok):
            return bool(_SIMD_BLOB_NAMES.match(tok)) or tok in blobs

        for _pass in range(4):
            ns = re.sub(r'\b([A-Za-z_]\w*)\s*&\s*([A-Za-z_]\w*)\s*\|\s*([A-Za-z_]\w*)\b',
                        lambda m: (f'au_or2(au_and2(*(const auV16_t *)&({m.group(1)}), '
                                   f'*(const auV16_t *)&({m.group(2)})), '
                                   f'*(const auV16_t *)&({m.group(3)}))')
                         if _is_blob(m.group(1)) and _is_blob(m.group(2))
                         and _is_blob(m.group(3)) else m.group(0), s)
            # 2 元: C 优先级 & > ^ > | —— 邻接更高优先级运算符时禁配（防 X | Y & Z 误对）
            _PREC = {'|': 0, '^': 1, '&': 2}

            def _pair(m):
                a, op, b = m.group(1), m.group(2), m.group(3)
                if not (_is_blob(a) and _is_blob(b)):
                    return m.group(0)
                i0 = m.start()
                k = i0 - 1
                while k >= 0 and ns[k] == ' ':
                    k -= 1
                if k >= 0 and ns[k] in _PREC and _PREC[ns[k]] > _PREC[op]:
                    return m.group(0)
                j = m.end()
                while j < len(ns) and ns[j] == ' ':
                    j += 1
                if j < len(ns) and ns[j] in _PREC and _PREC[ns[j]] > _PREC[op]:
                    return m.group(0)
                return (f"au_{ {'&':'and2','|':'or2','^':'xor2'}[op] }"
                        f"(*(const auV16_t *)&({a}), *(const auV16_t *)&({b}))")
            ns = re.sub(r'\b([A-Za-z_]\w*)\s*([&|^])\s*([A-Za-z_]\w*)\b', _pair, ns)
            # SUB164(blob-op, k) 后处理: 位运算结果为 auV 并值, SUB164 标量宏的
            # (a)-(b) 展开会撞 union-int —— 等价于提取 dword k 再减:
            # SUB164(au_xor2(...), k) → (*(const unsigned int *)&au_xor2(...) - k)
            ns = re.sub(r'SUB164\(\s*(au_(?:and2|or2|xor2)\((?:[^()]|\((?:[^()]|\([^()]*\))*\))*\))\s*,\s*([^(),]+?)\s*\)',
                        r'(*(const unsigned int *)&\1 - \2)', ns)
            if ns == s:
                break
            s = ns
        lines[ln_no - 1] = s
    return '\n'.join(lines)

def simd_shift_fix(txt, va):
    """向量移位计数: >> auVarN → >> (*(unsigned int *)&auVarN)
       （PSRLD 计数取低 8/32 位；站点计数恒为常量初始化的小值，低 dword 等价）"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    lines = txt.split('\n')
    for ln_no, lst in sites.items():
        if not (1 <= ln_no <= len(lines)):
            continue
        if not any('invalid operands' in m for _c, m in lst):
            continue
        s = lines[ln_no - 1]
        ns = re.sub(r'(>>|<<)\s*(auVar\d+)\b',
                    r'\1 (*(unsigned int *)&\2)', s)
        if ns != s:
            lines[ln_no - 1] = ns
    return '\n'.join(lines)


def operator_eq_fix(txt):
    """r25w14: decomp2c 未折叠的 operator 名 → 现网 esc 约定（_fname_esc 同款折叠）
       X__operator=( → X__operator_( ；X__operator==( → X__operator__(
       依据: 已覆盖定义 pilot_63 `ItineraryNode__operator_` 实证；纯名字层修复无语义改动"""
    txt = re.sub(r'\b([A-Za-z_]\w*__operator)==(?=\s*\()', r'\1__', txt)
    txt = re.sub(r'\b([A-Za-z_]\w*__operator)=((?!=))', r'\1_', txt)
    return txt

_WIN32_TYPE_RE = re.compile(
    r'\b(DEVMODEW|RAWINPUTDEVICELIST|PRAWINPUTDEVICELIST|LPRAWINPUTDEVICELIST|'
    r'MONITORINFO|MONITORINFOEXW|ICONINFO|BITMAPV4HEADER|BITMAPINFOHEADER|'
    r'DISPLAY_DEVICEW|ENUMLOGFONTEXW|NEWTEXTMETRICW|LOGFONTW|FONTSIGNATURE|'
    r'LPBOOL|HMONITOR|HDC__|HGLRC|PROC|WNDCLASSEXW|LRESULT|WPARAM|LPARAM|'
    r'UINT_PTR|DWORD_PTR|COLORREF|HRAWINPUT|MSG)\b')

def win32_types_fix(txt):
    """r25w14b: 已上移 prelude 级发射（per-sec 前置会跨轮错位 errmap 行号）——
    本函数保留为 no-op 以稳链序。见 _needs_winuser 块。"""
    return txt

def param_underscore_fix(txt, va):
    """r25w14: decomp2c 掉前缀 —— 声明 pN 用到 _pN（did-you-mean 直证同函数）
       _pN → pN（仅当 pN 在本 sec 有声明/参数位；恢复 decomp2c 丢失的名字拼写）"""
    sites = _ERRMAP_R25.get(va.lstrip('0') or '0')
    if not sites:
        return txt
    want = set()
    for ln_no, lst in sites.items():
        for col, msg in lst:
            m = re.search(r"undeclared identifier '(_p[0-9]+)'; did you mean '(p[0-9]+)'", msg)
            if m:
                want.add((m.group(1), m.group(2)))
    if not want:
        return txt
    for bad, good in want:
        # 守卫: good 必须已在 sec 内声明（签名/声明行）才改写
        if not re.search(r'\b' + re.escape(good) + r'\b(?!\s*\=)', txt.split('{', 1)[0]) \
           and not re.search(r'^\s*[A-Za-z_][\w \t\*]*\b' + re.escape(good) + r'\s*(=|;|,|\[)', txt, re.M):
            continue
        txt = re.sub(r'\b' + re.escape(bad) + r'\b', good, txt)
    return txt

# ---- r25w17: 强转字面量的成员访问等价化 ----
# `(*(T *)&0xADDRu).Lower` —— Ghidra 语义 = 该地址处的对象；&字面量是渲染残渣
# 等价: (*(T *)&0xADDRu) ≡ (*(T *)0xADDRu)（同一地址的对象视图）
_CASTLIT_RE = re.compile(
    r'\(\s*\*\s*\(\s*([A-Za-z_][\w:]*?)\s*\*\s*\)\s*&\s*(0x[0-9a-fA-F]+u?l*)\s*\)')

def own_autoextern_fix(txt, va):
    """r25w19: sec 头部自身 K&R auto(v2) extern（Ghidra x87 判读伪声明）与自身
       定义冲突 → 原位注释化。保行数（1:1 替换）—— errmap 行号对齐纪律。"""
    lines = txt.split('\n')
    for i, ln in enumerate(lines):
        m = re.match(r'^\s*extern\s+\S+\s+([A-Za-z_]\w*)\(\);?\s*/\*\s*K&R auto', ln)
        if not m:
            continue
        nm = m.group(1)
        # 该名字在本 sec 有列 0 定义 → 自身伪声明，整行注释化（保行数）
        for l2 in lines[i + 1:]:
            if re.match(r'[A-Za-z_][\w \t\*]*\b' + re.escape(nm) + r'\s*\(', l2) \
               and not l2.startswith((' ', '\t', '/', '#')):
                lines[i] = '/* r25w19 own-auto-extern elided: ' + ln.replace('*/', '* /') + ' */'
                break
        else:
            continue
    return '\n'.join(lines)

def cast_literal_fix(txt):
    return _CASTLIT_RE.sub(r'(*(\1 *)\2)', txt)

# ---- r25w17: xmm 常量赋值等价化 ----
# movsd/movd/movdqu 语义：LHS 宽度 W = 取 const 低位 W 字节（内存序已在发射期修正）
_XMM_CAST_EQ = re.compile(
    r'\*\s*\(\s*([A-Za-z_][\w]*)\s*\*\s*\)\s*&\s*([A-Za-z_]\w*)\s*=\s*(___xmm_[0-9a-f]{32})\s*;')
_XMM_WIDTH = {'double': 8, 'float': 4, 'undefined4': 4, 'undefined8': 8,
              'undefined2': 2, 'undefined1': 1, 'int': 4, 'uint': 4,
              'unsigned int': 4, 'long long': 8, 'unsigned long long': 8}

def xmm_assign_fix(txt):
    """r25w17: `*(T *)&SLOT = ___xmm_X;` → `*(T *)&SLOT = *(const T *)&___xmm_X[0];`
       （T 宽度 W：movs 系列指令存寄存器低 W 字节；const 已按 XMM_TRUTH 内存序）
       及数组槽整块赋值 `SLOT = ___xmm_X;` → memcpy 16（movdqu 语义）"""
    def _cast_rep(m):
        t = m.group(1)
        if t not in _XMM_WIDTH:
            return m.group(0)
        return (f'*({t} *)&{m.group(2)} = *(const {t} *)&{m.group(3)}[0];')
    txt = _XMM_CAST_EQ.sub(_cast_rep, txt)
    # 数组槽整块：仅当 LHS 是声明过的 undefined1[N] 数组才等价（movdqu 16 字节）
    arrs = {m.group(1): int(m.group(2)) for m in re.finditer(
        r'^\s*undefined1\s+([A-Za-z_]\w*)\s*\[\s*(\d+)\s*\]\s*;', txt, re.M)}
    def _arr_rep(m):
        nm = m.group(1)
        if nm in arrs and arrs[nm] == 16:
            return f'memcpy({nm}, {m.group(2)}, 16);'
        return m.group(0)
    txt = re.sub(r'\b([A-Za-z_]\w*)\s*=\s*(___xmm_[0-9a-f]{32})\s*;', _arr_rep, txt)
    return txt

# ---- r25w17: 结构体返回值/成员赋给 undefined4 变量 → 变量声明类型修正 ----
_RET_STRUCT = {}       # callee -> esc 返回类型（非标量）
_M_STRUCT_TYPES = {}   # member -> set(esc 结构体类型)（跨 UDT 唯一才用）
_SCALDECL = re.compile(
    r'^(\s*)(undefined4|undefined8|undefined2|undefined1|int|uint|unsigned int)\s+'
    r'((?:u|p|pc|pi|pu|pp|i|l|f|d|b|c|s|e)[A-Z]\w*)(\s*;)\s*$', re.M)

def w17_load_rettypes(tu_dir=None):
    """callee → 非标量返回类型表。
    主源 = r23_sigs.tsv(VA→ret) JOIN orig_full2.tsv(VA→fullname)（全量 21,443）；
    pilot 定义行 / TU 签名区为补充。"""
    sigs = Path(os.environ.get('SWEEP_SIGS', '/tmp/my-project/work/r23_sigs.tsv'))
    full2 = Path(os.environ.get('SWEEP_FULL2', str(REPO / 'reports' / 'orig_full2.tsv')))
    va_ret = {}
    if sigs.exists():
        for ln in open(sigs, encoding='utf-8', errors='replace'):
            q = ln.rstrip('\n').split('\t')
            if len(q) >= 3 and re.fullmatch(r'[0-9a-f]{8}', q[0]):
                va_ret.setdefault(q[0], q[2])
    va_name = {}
    if full2.exists():
        for ln in open(full2, encoding='utf-8', errors='replace'):
            q = ln.rstrip('\n').split('\t')
            if len(q) >= 4 and re.fullmatch(r'[0-9a-f]{8}', q[3]):
                va_name.setdefault(q[3], q[1])
    for va, ret in va_ret.items():
        nm_full = va_name.get(va)
        if not nm_full:
            continue
        # 函数名 esc 用 _fname_esc 约定（保留类前缀；调用点文本即此形态）
        nm = _fname_esc(nm_full)
        if nm in _RET_STRUCT:
            continue
        base = re.sub(r'\s+', '', ret)
        base = re.sub(r'^(struct|class|enum)\s*', '', base)
        if not base:
            continue
        if base.endswith('*') or '[' in base or '(' in base:
            continue
        if re.fullmatch(r'(undefined[1248]|int|uint|char|uchar|sbyte|ubyte|short|'
                        r'ushort|float|double|bool|void|long|ulong|longlong|'
                        r'ulonglong|code|_Bool|dword|word|byte|qword)', base):
            continue
        _RET_STRUCT[nm] = _pdb_esc(base)
    # 已覆盖 pilot 定义行补充（col-0 `RET [__cc] NAME(`，含 r23 后命名）
    import glob as _g
    for f in _g.glob(str(REPO / 'src' / 'pilot_*.c')):
        try:
            txt = open(f, encoding='utf-8', errors='replace').read()
        except OSError:
            continue
        for mm in re.finditer(r'(?m)^([A-Za-z_][\w \t\*]*?)\s+(?:__\w+\s+)?([A-Za-z_]\w*)\s*\(', txt):
            ret, nm = mm.group(1).strip(), mm.group(2)
            if not ret or nm in _RET_STRUCT:
                continue
            if 'extern' in ret or 'typedef' in ret:
                continue   # r25w17b: pilot 内的 extern 声明行不是定义（externint 毒）
            base = re.sub(r'\s+', '', ret).rstrip('*')
            if not base or base in ('undefined1', 'undefined2', 'undefined4', 'undefined8',
                                    'int', 'uint', 'char', 'uchar', 'sbyte', 'ubyte',
                                    'short', 'ushort', 'float', 'double', 'bool',
                                    'void', 'long', 'ulong', 'longlong', 'ulonglong', 'code',
                                    'static', 'const'):
                continue
            if '[' in base or '(' in base:
                continue
            _RET_STRUCT[nm] = _pdb_esc(base)
    if tu_dir:
        import glob as _g
        for f in _g.glob(str(Path(tu_dir) / '*.tu.c')):
            try:
                head = open(f, encoding='utf-8', errors='replace').read(8192)
            except OSError:
                continue
            head = head.split('{', 1)[0]
            for mm in re.finditer(r'(?m)^\s*([A-Za-z_][\w \t\*]*?)\s*\b([A-Za-z_]\w*)\s*\(', head):
                ret, nm = mm.group(1).strip(), mm.group(2)
                if not ret or nm in _RET_STRUCT:
                    continue
                base = re.sub(r'\s+', '', ret).rstrip('*')
                if not base or base in ('undefined1', 'undefined2', 'undefined4', 'undefined8',
                                        'int', 'uint', 'char', 'uchar', 'sbyte', 'ubyte',
                                        'short', 'ushort', 'float', 'double', 'bool',
                                        'void', 'long', 'ulong', 'longlong', 'ulonglong', 'code'):
                    continue
                if '[' in base or '(' in base:
                    continue
                _RET_STRUCT[nm] = _pdb_esc(base)

def w17_load_mstructtypes():
    """member → 唯一结构体类型集（TSV 非标量行）"""
    tsv = Path(os.environ.get('SWEEP_MEMBERS', '/tmp/my-project/work/members_r25c_all.tsv'))
    if not tsv.exists():
        return
    acc = {}
    for ln in open(tsv, encoding='utf-8', errors='replace'):
        q = ln.rstrip('\n').split('\t')
        if q[0] != 'MEMB' or len(q) < 6:
            continue
        kind, ct = _classify_tile_type(q[4])
        if kind == 'struct':
            acc.setdefault(q[2], set()).add(ct)
    for nm, ts in acc.items():
        if len(ts) == 1:
            _M_STRUCT_TYPES[nm] = next(iter(ts))

def var_decl_type_fix(txt, va):
    """r25w17: `undefined4 v = 结构体返回调用 / 结构体成员` → 变量声明改结构体类型
       （Ghidra 变量槽宽 4 但语义持有结构体——声明忠实化；混合用法守卫防误改）"""
    lines = txt.split('\n')
    decls = {}
    for m in _SCALDECL.finditer(txt):
        decls[m.group(3)] = m
    if not decls:
        return txt
    retype = {}
    for nm in decls:
        # 收集 VAR 的全部赋值源类型
        rets = set()
        ok = True
        uses = 0
        for mm in re.finditer(r'\b' + re.escape(nm) + r'\b', txt):
            uses += 1
        n_assign = 0
        for mm in re.finditer(r'\b' + re.escape(nm) + r'\s*=\s*([^;]+);', txt):
            n_assign += 1
            rhs = mm.group(1)
            c = re.match(r'\s*([A-Za-z_]\w*)\s*\(', rhs)
            if c and c.group(1) in _RET_STRUCT:
                rets.add(_RET_STRUCT[c.group(1)])
                continue
            c2 = re.match(r'\s*(?:[A-Za-z_]\w*(?:->|\.))+([A-Za-z_]\w*)\s*$', rhs)
            if c2 and c2.group(1) in _M_STRUCT_TYPES:
                rets.add(_M_STRUCT_TYPES[c2.group(1)])
                continue
            rets.add('?')   # 未知源 —— 弃（混合源不忠实）
        if n_assign == 0 or len(rets) != 1 or '?' in rets:
            continue
        # 混合用法守卫：算术/下标/取址即弃
        n_other = uses - n_assign - 1   # -1 声明位
        if n_other > 0 and re.search(r'&\s*' + re.escape(nm) + r'\b|' + re.escape(nm) + r'\s*[\[\+\-\*/]', txt.replace('\n', ' ')):
            continue
        esc_t = next(iter(rets))
        d = decls[nm]
        lines_txt = txt
        new_decl = f'{d.group(1)}{esc_t} {d.group(3)}{d.group(4)}'
        txt = txt[:d.start()] + new_decl + txt[d.end():]
        # 重建 decls 位置失效 —— 一次只改一个（多站留下轮）
        return txt
    return txt

def bare_dtor_fix(txt, disp):
    def rep(m):
        cls = m.group(1)
        cands = FUNC_IDX.get(_L3(f'{cls}::~{cls}'))
        if cands and len(cands) == 1:
            sym = _calleename(cands[0][0])
            if sym:
                A.sym_externs.add(sym)
                return sym + '('
        return f'{cls}__dtor('
    return _BARE_DTOR.sub(rep, txt)

TYPE_ALIAS = set()
# ---- r21: hdr 冲突改名表（持久化；组装时对出现在本批文本中的 OLD 发 #define）----
RENAMES = set()

def load_renames():
    _rn = {}
    _rnp = REPO / 'tools' / 'r20_renames.tsv'
    if _rnp.exists():
        for _ln in open(_rnp, encoding='utf-8'):
            if _ln.startswith('#') or '\t' not in _ln:
                continue
            _pp = _ln.rstrip('\n').split('\t')
            if len(_pp) >= 2 and re.match(r'^[A-Za-z_]\w*$', _pp[0]) and re.match(r'^[A-Za-z_]\w*$', _pp[1]):
                _rn[_pp[0]] = _pp[1]
    return _rn

RENAMES_MAP = {}

_NM = r'~?[A-Za-z_]\w*(?:<(?:[^<>{};]*(?:<[^<>{};]*>[^<>{};]*)*)>)?'
# f-string 内必须 (?:::{_NM})：渲染后组内容 = '::'（(?: 吃掉第一个冒，剩两个才是分隔符）
_QFQN = re.compile(rf'\b{_NM}(?:::{_NM})+')


def _type_rewrite(tok):
    """类型位置的统一改写：esc 变体链 → Data-Q cast → 确定性转义+不完整 typedef"""
    base = re.sub(r'\b(class|struct|enum)_', '', tok)
    for cand in (tok,
                 base,
                 re.sub(r'\b(class|struct|enum)\b', '', tok).strip(),
                 re.sub(r'\b(class|struct|enum)\b', '', tok).replace(' ', '').strip(),
                 re.sub(r'^(?:util|std)::', '', base).strip(),
                 re.sub(r'^(?:util|std)::', '', base).replace(' ', '').strip()):
        t = A.type_escape(cand)
        if t and (t in STRICT_TYPES or not STRICT_TYPES):
            return t
    # Data-Q 兜底：限定名静态数据 → (*(T *)&VA)（成员链由真实 struct 承接）
    d = QDATA_IDX.get(_T2(tok))
    if d and d[0] != 'AMBIG' and d[1]:
        t = A.type_escape(d[1])
        if t and (t in STRICT_TYPES or not STRICT_TYPES):
            return f'(*({t} *)&0x{d[0]:08x}u)'
    # r21: 确定性转义 + 不完整 typedef（指针位编译，值位诚实报错 defer）
    esc = re.sub(r'[^A-Za-z0-9_]', '_', tok.replace('::', '__').replace('<', '_L_')
                 .replace('>', '_G_').replace(' ', '_')).strip('_')
    if esc and re.fullmatch(r'[A-Za-z_][A-Za-z0-9_]{0,160}', esc):
        _isfn = _fidx_any(tok)
        if esc not in STRICT_TYPES and not _isfn and not _data_name_hit(esc):
            # r21/r22: 函数名绝不 typedef（r22 收紧：多候选重载也不 typedef——
            # typedef 后调用位必语法错；esc 名引用靠 stub oracle 链接兜底）
            _TYPEDEF_POOL.add(esc)
        return esc
    return tok


def _qrep(m):
    tok = m.group(0)
    if tok.endswith('_vftable_'):
        return tok  # vftable 尾交回 fix_vftables（已扩 tnorm2 兜底）
    cands = _fidx_any(tok)
    if cands and len(cands) == 1:
        va, full = cands[0]
        after = m.string[m.end():m.end() + 1]
        before = m.string[max(0, m.start() - 1):m.start()]
        if after == '(' or before == '&' or after == ',' or after == ')':
            # 调用/取址/实参位置 → 函数名
            sym = _calleename(va)
            if after == '(':
                A.sym_externs.add(sym)
            return sym or tok
    # 类型位置（无论函数命中与否——ctor 名同时是类型形态）
    return _type_rewrite(tok)


def qual_pass(txt, disp):
    # 1) 跨行限定名拼回（Ghidra 长名换行；注释内拼回无害）
    txt = re.sub(r'::[ \t]*\n[ \t]*', '::', txt)
    # 1b) thread-static 反引号标签（含 __l2 成员；必须在 QFQN 前）
    if '`' in txt:
        txt = _BT_RE.sub(_btrep, txt)
    txt = _QFQN.sub(_qrep, txt)
    # 2) operator 后缀（QFQN 止于 operator 词，吃后缀到 '('）
    if '::operator' in txt:
        def orep(m):
            tok = m.group(1)
            cands = _fidx_any(tok)
            if cands and len(cands) == 1:
                sym = _calleename(cands[0][0])
                if sym:
                    A.sym_externs.add(sym)
                    return sym + m.group(2)
            return m.group(0)
        txt = re.sub(r'\b((?:' + _NM + r')(?:::' + _NM +
                     r')*::operator[^(){};]*?)\s*(\()', orep, txt)
    return txt
# ================ end r20 qualified-name closure ================

# ---- r20b: 批内定义名注册表（VA -> def 名）——_calleename 最高优先通道 ----
# TU 文件的 def 行名 = esc_ident/fix 链产物；调用名必须与之同串（否则 extern
# 与批内定义构成 CC/类型冲突，或静默双名）
INBATCH_DEF = {}

def scan_inbatch_defs(files):
    for path in files:
        txt = Path(path).read_text(errors='replace')
        m = re.search(r'// decompiled by BatchDecomp @ ([0-9a-f]+)', txt)
        if not m:
            continue
        va = int(m.group(1), 16)
        # def 名精确锚定：首个 col-0 '{' 的最近前置非空行 = 签名行
        # （Ghidra 输出格式：签名行独立成行，'{' 在行首）
        lines = txt.split('\n')
        for i, ln in enumerate(lines):
            if ln.startswith('{'):
                for j in range(i - 1, max(0, i - 4), -1):
                    sig = re.sub(r'/\*.*?\*/', ' ', lines[j])
                    mm = re.search(r'\b([A-Za-z_]\w*)\s*\(', sig)
                    if mm and mm.group(1) not in ('if', 'for', 'while', 'switch', 'return'):
                        INBATCH_DEF[va] = mm.group(1)
                        break
                break


# r20b: 严格类型名集（typedef/struct 定义形态），防 hdr_names 注释/member 误报
STRICT_TYPES = set()
STRICT_DEFINED = set()   # r23: 头部已有完整定义的 tag（struct/union X {）—— r23 完整定义仅对这类让位
STRICT_ALIAS = {}        # r23f: 头部别名 typedef（typedef A B; → B 映射 A）—— esc 名撞别名时让位
STRICT_SELFHDR = set()   # r23i: 头部已有 typedef struct X X;（含 cde_types_r23.h）—— 该名由头部提供

def build_strict_types():
    import glob as _g
    pats = [re.compile(r'\btypedef\s+[^;{}]*?([A-Za-z_]\w*)\s*;'),
            re.compile(r'\}\s*([A-Za-z_]\w*)\s*;'),
            re.compile(r'\b(?:struct|union|enum)\s+([A-Za-z_]\w*)\s*\{'),
            # 函数指针 typedef：typedef RET NAME(ARGS); —— 名在 '(' 前
            re.compile(r'\btypedef\s+[^;{}]*?\b([A-Za-z_]\w*)\s*\([^;{}]*\)\s*;')]
    _p_alias = re.compile(r'\btypedef\s+([A-Za-z_][A-Za-z0-9_]*)\s+([A-Za-z_][A-Za-z0-9_]*)\s*;')
    _scal = {'int', 'char', 'short', 'long', 'float', 'double', 'void', 'signed', 'unsigned',
             'struct', 'union', 'enum', 'const', 'bool'}
    _p_self = re.compile(r'\btypedef\s+(?:struct|union)\s+([A-Za-z_][A-Za-z0-9_]*)\s+\1\s*(?:,[^;]*)?;')
    # r25: compat 头的标量 typedef（typedef int NAME; / typedef unsigned *NAME; 等）
    #      —— 头部已提供 int 兜底，池子必须让位（否则 prelude 级 typedef 重定义毒化全批）
    _p_scaldef = re.compile(r'\btypedef\s+(?:const\s+|unsigned\s+|signed\s+|long\s+|short\s+)*'
                            r'(?:int|char|long|short|float|double|bool|void|_Bool|size_t|uint64_t|uint32_t|int64_t|int32_t)'
                            r'\s*\**\s*([A-Za-z_][A-Za-z0-9_]*)\s*;')
    for h in _g.glob(f'{REPO}/src/cde_*.h'):
        t = Path(h).read_text(errors='replace')
        for mm in _p_scaldef.finditer(t):
            STRICT_DEFINED.add(mm.group(1))
        for pat in pats:
            for mm in pat.finditer(t):
                STRICT_TYPES.add(mm.group(1))
                if pat is pats[2]:
                    STRICT_DEFINED.add(mm.group(1))
        for mm in _p_self.finditer(t):
            STRICT_SELFHDR.add(mm.group(1))
        for mm in _p_alias.finditer(t):
            if mm.group(1) not in _scal and mm.group(2) not in _scal:
                STRICT_ALIAS[mm.group(2)] = mm.group(1)



def prescreen(txt):
    """非注释/非字符串残留 `::` → 必死（C 无此语法）
    r20: /* */ 块注释同样无编译效应（Ghidra 原型注释带大量 ::）——一并剥离"""
    txt = re.sub(r'/\*.*?\*/', ' ', txt, flags=re.S)
    txt = re.sub(r'//[^\n]*', ' ', txt)
    txt = re.sub(r'"(?:[^"\\]|\\.)*"', '""', txt)
    return '::' in txt


_LIBM_CALL = re.compile(r'^(\s*)(?:([A-Za-z_]\w*)\s*=\s*)?libm_sse2_(\w+)\(\);\s*$')
_LIBM_DVAR = re.compile(r'^\s*((?:dVar|unaff_d|in_d|extraout_d)[A-Za-z0-9_]*)\s*=\s*(.+?);\s*$')


def libm_fix(txt):
    """libm_sse2 零参调用修复（r19）：MSVC SSE2 数学内建 xmm0 约定。
    port_prelude 已把 libm_sse2_* 宏映射到 libc（sqrt/exp/...，double ABI）。
    Ghidra 对无 callspec 的站点发零参调用；但数据流可证明：xmm0 是
    caller-saved，紧邻赋值的 dVar 跨调用后仍被读 ⇒ 其新值只能是返回值。
    'dVarK = expr;' + 'libm_fn();' ⇒ 'dVarK = expr;' + 'dVarK = fn(dVarK);'"""
    lines = txt.split('\n')
    lastd = None
    for i, ln in enumerate(lines):
        md = _LIBM_DVAR.match(ln)
        if md:
            lastd = (i, md.group(1))
            continue
        mc = _LIBM_CALL.match(ln)
        if mc and lastd and i - lastd[0] == 1:
            ind, dst, fn = mc.group(1), mc.group(2), mc.group(3)
            if dst is None or dst == lastd[1]:
                lines[i] = f'{ind}{lastd[1]} = libm_sse2_{fn}({lastd[1]});'
                lastd = (i, lastd[1])
    return '\n'.join(lines)


def main():
    DEFER_ALL = {d.lstrip('0') for d in (ENV_DEFER | auto_prev)}
    files = sorted(f for f in glob.glob(str(IN / '*.tu.c'))
                   if Path(f).name.split('_')[0].lstrip('0') not in DEFER_ALL)
    n_total = len(glob.glob(str(IN / '*.tu.c')))
    RENAMES_MAP.update(load_renames())   # r21: hdr 冲突改名表
    scan_inbatch_defs(files)      # r20b: VA->批内 def 名
    build_strict_types()          # r20b: 严格类型名集
    w13_load_errmap()             # r25w13: iso 原始错误图
    w13_load_members()            # r25w13: DB 成员真值（pad/数组快照/父类型）
    w17_load_rettypes()           # r25w17: r23_sigs 全量返回类型
    w17_load_mstructtypes()       # r25w17: member → 唯一结构体类型
    A.scan_templates(files)
    A.L(f'batch={BATCH} total={n_total} in={len(files)} '
        f'(env_defer={len(ENV_DEFER)} auto_prev={len(auto_prev)}) '
        f'tpl_defs={len(A.TPL_DEFS)}')
    A.sym_externs.clear()
    A.unresolved.clear()
    sections, all_pairs = [], set()
    auto_now = set()
    for f in files:
        va, disp, txt = A.process(f)
        txt = libm_fix(txt)
        txt = pseudo_type_fix(txt)   # r25: Ghidra 伪类型补缺（sbyte 族）
        txt = qual_pass(txt, disp)   # r20: 限定名闭包（模板方法/operator/dtor/跨行名）
        txt = bare_template_fix(txt)  # r23c: 裸模板类型 esc 化（声明位生存的前提）
        # r20c: 编译级机械修复链（错误面驱动，等价语义保持）
        txt = funcptr_esc_fix(txt)
        txt = slice_path_fix(txt)
        txt = slice_assign_fix(txt)
        txt = slice_cast_fix(txt)
        txt = slice_deref_fix(txt)
        txt = vftable_fix(txt)       # r25: vtable 首槽读等价化
        txt = scalar_subscript_fix(txt)  # r25: 标量槽下标访问
        txt = vcall_base_fix(txt)
        txt = sub168_arr_fix(txt)
        txt = bare_dtor_fix(txt, disp)
        # r20: 批内 vftable 兼底（按函数所属类，data_names 的 ::vftable' 行）
        txt = vft_bare_fix(txt, va)
        # r20: 负偏移栈伪符号 → 局部声明（Ghidra 丢局部类型的 sret 槽）
        txt, sloc = stack_pseudo_fix(txt)
        # r25w19: 自身 auto-extern 注释化（保行数，链首）
        txt = own_autoextern_fix(txt, va)
        # r25w13: 错误驱动等价改写（iso 原始错误图 col 锚定 + DB 成员真值；不命中不动）
        txt = tile_member_fix(txt, va)
        txt = base_member_fix(txt, va)
        txt = member_addr_fix(txt, va)
        txt = subscript_member_fix(txt, va)
        txt = scalar_nav_fix(txt, va)
        txt = stray_underscore_fix(txt)
        txt = param_underscore_fix(txt, va)
        txt = operator_eq_fix(txt)
        txt = win32_types_fix(txt)
        # r25w17: 强转字面量对象视图 / xmm 赋值低位语义 / 结构体返回值声明忠实化
        txt = cast_literal_fix(txt)
        txt = xmm_assign_fix(txt)
        txt = var_decl_type_fix(txt, va)
        # r26w1: SIMD auVar 等价接入（战役①）—— 错误驱动站点改写
        txt = simd_alias_fix(txt, va)
        txt = simd_cast_fix(txt, va)
        txt = simd_binop_fix(txt, va)
        txt = simd_shift_fix(txt, va)
        txt = simd_assign_fix(txt, va)
        _typedef_pool.update(typedef_scan(txt))
        if prescreen(txt):
            auto_now.add(norm6(va))
            A.L(f'AUTODEFER {norm6(va)} {disp}: ::-residue')
            continue
        for m in re.finditer(r'(?:\.|->)(_(\d+))_(\d+)_', txt):
            all_pairs.add((int(m.group(2)), int(m.group(3))))
        sections.append((va, disp, txt))
    AUTO_F.write_text(','.join(sorted(auto_prev | auto_now)))
    A.L(f'prescreen: auto-defer now={len(auto_now)} total={len(auto_prev | auto_now)}')
    body = '\n'.join(t for _, _, t in sections)

    # ---- S2: 全约定批内规范原型（fam8 只认 __thiscall；扫荡批全 CC）----
    proto_map = {}
    PROTO_VA = {}
    for va_, disp_, txt_ in sections:
        i = txt_.find('{')
        if i < 0:
            continue
        sigc = re.sub(r'/\*.*?\*/', ' ', txt_[:i], flags=re.S)
        sigc = re.sub(r'//[^\n]*', ' ', sigc)
        # r25: TU 头的 #undef/#define 僵尸宏行（decomp2c R9）会以裸残留卷进末段签名
        #      → `extern #undef t void ...` 毒化 prelude 全批。签名区剥离预处理行。
        sigc = re.sub(r'(?m)^[ \t]*#[^\n]*', ' ', sigc)
        sig = re.sub(r'\s+', ' ', sigc.split(';')[-1]).strip()
        mm = re.match(r'^(.*?)\b([A-Za-z_]\w*)\s*\(([^()]*)\)(\s*const)?$', sig)
        if not mm:
            continue
        if re.search(r'\(\s*\*\s*\)', sig):
            continue    # r25: 数组/函数指针返回（undefined1 (*)[16]）—— extern 化必死，弃
        if re.search(r'[\[,()\]]', mm.group(1)):
            continue    # r25: 返回区含 [,[] 等（byte [4] / 模板 esc 残留逗号）—— 非纯类型，弃
        # r25: 模板实参内裸逗号泄漏（Delegate_L_X_G_,struct_Y_G_ / Node,double_G_）
        #      —— esc 半途，参数表被劈裂。合法参数表逗号后必跟 undefined4/int 等非 _G_ 尾型
        if re.search(r',\s*\w*\s*_G_\b', sig) or re.search(r'_G_\s*,\s*\w', sig):
            continue
        nm, sg = mm.group(2), re.sub(r'\s+', '', sig)
        if nm in proto_map:
            # 碰撞互斥 → 弃用防误替换；None（已弃用）不再复比较（r19 崩溃修复）
            if proto_map[nm] is None or re.sub(r'\s+', '', proto_map[nm]) != sg:
                proto_map[nm] = None
        else:
            proto_map[nm] = sig
            PROTO_VA[nm] = int(va_, 16) if isinstance(va_, str) else va_
    proto_map = {k: v for k, v in proto_map.items() if v}
    PROTO_VA = {k: v for k, v in PROTO_VA.items() if k in proto_map}
    A.L(f'prototypes: {len(proto_map)} (all-CC)')

    # ---- r20b: 头签名冲突检测（等价纪律：头 = game TU 的既验证契约，绝不改写）----
    # 批内 def 签名 ≠ 头声明 → 该函数本批 defer（r20 教训：写头破坏 game TU 调用）
    _conflict_names = set()
    try:
        _genp = REPO / 'src' / 'cde_fun_decls_gen.h'
        _gl = _genp.read_text(errors='replace').split('\n')
        _gidx = {}
        for _i, _ln in enumerate(_gl):
            _m2 = re.match(r'\s*extern\s+[^;]+?\b([A-Za-z_]\w*)\s*\(', _ln)
            if _m2 and _m2.group(1) not in _gidx:
                _gidx[_m2.group(1)] = _i
        for _nm, _sig in proto_map.items():
            _i = _gidx.get(_nm)
            if _i is None:
                continue
            _old = re.sub(r'[^A-Za-z0-9_]', '', _gl[_i])
            _new = re.sub(r'[^A-Za-z0-9_]', '', _sig + ';')
            if _old != _new:
                _va = PROTO_VA.get(_nm)
                if _va is not None:
                    # r21: 冲突仲裁 = #define 重命名 + 链接别名（-alternatename）。
                    # 头声明保持不动（game TU 契约），pilot 内 #define OLD NEW 使
                    # 头声明与批内 def 各归其名；链接期 OLD→NEW 转发到真身。
                    _newnm = _nm + '__r20'
                    RENAMES.add((_nm, _newnm))
                    _conflict_names.add(_nm)
        if _conflict_names:
            A.L(f'hdr sig conflicts renamed: {len(_conflict_names)}')
    except Exception as _e:
        A.L(f'hdr conflict check failed: {_e}')
    # r21: 冲突改名落盘（重命名表 + 链接别名表）
    if RENAMES:
        _rnp = REPO / 'tools' / 'r20_renames.tsv'
        _have = set()
        if _rnp.exists():
            for _ln in open(_rnp, encoding='utf-8'):
                if '\t' in _ln and not _ln.startswith('#'):
                    _have.add(tuple(_ln.rstrip('\n').split('\t')[:2]))
        _newr = sorted(set(RENAMES) - _have)
        if _newr:
            with open(_rnp, 'a', encoding='utf-8') as _rf:
                if not _rnp.exists():
                    _rf.write('# hdr-conflict renames: gen.h name -> pilot impl name\n')
                for _o, _n in _newr:
                    _rf.write(f'{_o}\t{_n}\n')
        _alp = REPO / 'tools' / 'alias_alternatenames.tsv'
        _havea = set()
        if _alp.exists():
            for _ln in open(_alp, encoding='utf-8'):
                if '\t' in _ln and not _ln.startswith('#'):
                    _havea.add(tuple(_ln.rstrip('\n').split('\t')[:2]))
        _newa = sorted({(_o, _n) for _o, _n in RENAMES} - _havea)
        if _newa:
            with open(_alp, 'a', encoding='utf-8') as _af:
                for _o, _n in _newa:
                    _af.write(f'{_o}\t{_n}\n')
        A.L(f'renames: +{len(_newr)} (alias +{len(_newa)})')
    RENAMES_MAP.update({o: n for o, n in RENAMES})   # r21: 首轮即时生效

    hdr_ids2 = set()
    for _h in sorted((REPO / 'src').glob('*.h')):
        hdr_ids2 |= set(re.findall(r'\b([A-Za-z_]\w*)\b', _h.read_text(errors='replace')))
    # r25: 系统三方头（glfw/OpenAL/GL）真原型 —— TU 猜测签名 extern 与之冲突
    for _h in ['third_party/glfw-3.3.10/include/GLFW/glfw3.h',
               'third_party/AL/al.h', 'third_party/AL/alc.h', 'third_party/AL/efx.h',
               'third_party/GL/glcorearb.h', 'third_party/GL/glext.h']:
        _hp = REPO / _h
        if _hp.exists():
            hdr_ids2 |= set(re.findall(r'\b([A-Za-z_]\w*)\b', _hp.read_text(errors='replace')))

    def fix_externs(text):
        out = []
        for ln in text.split('\n'):
            # 尾随 /* */ 注释会让 $ 锚失败——先在剥注释副本上探测
            probe = re.sub(r'/\*.*?\*/', ' ', ln)
            m = re.match(r'\s*(?:extern\s+)?[A-Za-z_][\w\s\*]*\b([A-Za-z_]\w*)\s*\([^;{}]*\)\s*;\s*$',
                         probe)
            if m and m.group(1) in proto_map:
                ln = proto_map[m.group(1)] + ';'
            elif m and m.group(1) in hdr_ids2:
                # r20: 原型语句与声明头权威签名冲突（undefined4 vs long long、
                # Ghidra 自带前向声明 vs decls_gen）——头优先，语句丢弃
                continue
            out.append(ln)
        return '\n'.join(out)

    body = fix_externs(body)

    # ---- r20: EXREF 通道——IAT 槽读等价直连 ----
    # Ghidra 对导入符号的引用形态 = NAME_exref（IAT 槽）。等价重建：函数导入
    # 直连（#define X_exref X）——IAT 槽运行时值 = 函数地址，直连引用同一目标。
    # DebugBreak_exref 等已有 port_prelude 宏的跳过。
    _exrefs = sorted({m for m in re.findall(r'\b([A-Za-z_]\w*_exref)\b', body)})
    _exr_defines = []
    for _e in _exrefs:
        _n = _e[:-len('_exref')]
        if _n.startswith('_'):
            # 数据导入（_BADOFF 等）——IAT 槽地址+值等价：static const 同值槽
            if _n == '_BADOFF':
                _exr_defines.append('static const unsigned int _cde_badoff_slot = 0xFFFFFFFFu;')
                _exr_defines.append(f'#define {_e} ((void *)&_cde_badoff_slot)')
            continue
        # 头符号（free/glTexParameteri/DebugBreak…）直连正是等价目标——
        # IAT 槽运行时值 = 函数地址；r25w13: 修复 hdr_ids2 误跳过（原逻辑漏发 define）
        _exr_defines.append(f'#define {_e} {_n}')
    if _exr_defines:
        A.L(f'exref defines: {len(_exr_defines)}')

    # ---- r25w14: _Clear 惰性清除函数 extern（K&R 约定 ret-by-call-site）----
    # 三道门: hdr_ids2（头 id 集）/ stub-oracle（exts 发 int 版）/ cde_*.h 既有声明
    _hdr_clear = set()
    for _h in (REPO / 'src').glob('cde_*.h'):
        _hdr_clear |= set(re.findall(r'\b([A-Za-z_]\w*_Clear)\b', _h.read_text(errors='replace')))
    _clears = sorted({m for m in re.findall(r'\b([A-Za-z_]\w*_Clear)\b', body)
                      if m not in hdr_ids2 and m not in A.sym_externs
                      and m not in _hdr_clear and m not in proto_map})
    if _clears:
        A.L(f'clear externs: {len(_clears)}')

    # ---- 数据引用闭包 v2（r19）：全类型数据项宏 ----
    #   一手真值 = meta/data_items.tsv（DumpData.py 全量导出 219k 项）。
    #   形态沿用 cde_data_map.h 既有惯例：s_*→(const char*)、u_*→(const
    #   unsigned short*)、PTR_*→(void**)、DAT_*→(*(undefinedN*))、
    #   double/float 类型忠实；_DAT_ 变体同址注册；与函数名碰撞的标签跳过。
    DATA_TSV = Path(os.environ.get('SWEEP_DATA', str(REPO / 'meta' / 'data_items.tsv')))
    SYM_TSV = Path(os.environ.get('SWEEP_SYM', str(REPO / 'meta' / 'symbols.tsv')))
    dmap = {}
    if DATA_TSV.exists():
        for ln in open(DATA_TSV, encoding='utf-8', errors='replace'):
            p = ln.rstrip('\n').split('\t')
            if len(p) >= 4 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
                try:
                    dmap.setdefault(p[3], set()).add((p[0], int(p[1]), p[2]))
                except ValueError:
                    pass
    smap = {}   # 符号表（含未定义但有标签的数据）：name -> set(addr)
    FUNC_ADDR = set()
    for ln in open(REPO / 'pdb' / 'functions.tsv', encoding='utf-8', errors='replace'):
        _va = ln.split('\t')[0].strip().lower()
        if re.fullmatch(r'[0-9a-f]{8}', _va):
            FUNC_ADDR.add(_va)
    if SYM_TSV.exists():
        for ln in open(SYM_TSV, encoding='utf-8', errors='replace'):
            p = ln.rstrip('\n').split('\t')
            if len(p) == 2 and re.fullmatch(r'[0-9a-f]{8}', p[0]):
                if p[0] in FUNC_ADDR:
                    continue    # 函数符号永不作为数据宏（否裠摧毁调用站）
                smap.setdefault(p[1], set()).add(p[0])
    func_names = (set(proto_map) | A.INFILE_SYMS |
                  {v for v in A.COV_NAME.values()} | {v for v in A.STUB_NAME.values()})
    # 批内全部函数名（含被 defer 的）也占名——数据标签与函数同名时让位
    for _f in glob.glob(str(IN / '*.tu.c')):
        _nm = Path(_f).stem.split('_', 1)
        if len(_nm) == 2 and _nm[1]:
            func_names.add(_nm[1])
            func_names.add(_nm[1].lstrip('_'))
    # ---- PFN typedef 通道：____glewXxx / ____wglewXxx 函数指针变量 ----
    #   Ghidra 反编译对下划线开头标签多加一个 '_'（___glewX -> ____glewX）。
    #   签名真值 = Khronos glcorearb/glext 的 PFN*PROC typedef（与 GLEW 同名）。
    #   typedef 语句跨多行 → 按括号/分号截取整条；嵌套（GLDEBUGPROC）递归一层。
    TD, TDALL = {}, {}
    for _gh in ('glcorearb.h', 'glext.h'):
        _p = REPO / 'third_party' / 'GL' / _gh
        if _p.exists():
            for _m in re.finditer(r'typedef[^;{}]*;', _p.read_text(errors='replace')):
                _st = re.sub(r'\s+', ' ', _m.group(0)).strip()
                _n1 = re.search(r'\b(PFN\w+PROC)\b', _st)
                if _n1:
                    TD.setdefault(_n1.group(1), _st)
                _n2 = (re.search(r'\(\s*[A-Za-z_]*\*?\s*([A-Za-z_]\w*)\s*\)', _st) or
                       re.match(r'typedef.*\b([A-Za-z_]\w*)\s*;$', _st))
                if _n2:
                    TDALL.setdefault(_n2.group(1), _st)
    GL_PRELUDE = (
        'typedef void GLvoid; typedef char GLchar; typedef unsigned char GLboolean;\n'
        'typedef signed char GLbyte; typedef short GLshort; typedef int GLint;\n'
        'typedef unsigned char GLubyte; typedef unsigned short GLushort;\n'
        'typedef unsigned int GLuint; typedef float GLfloat; typedef float GLclampf;\n'
        'typedef double GLdouble; typedef double GLclampd; typedef unsigned int GLenum;\n'
        'typedef unsigned int GLbitfield; typedef long GLintptr; typedef long GLsizeiptr;\n'
        'typedef unsigned long long GLint64; typedef unsigned long long GLuint64;\n'
        'typedef char GLcharARB; typedef unsigned int GLhandleARB;\n'
        'typedef struct __GLsync *GLsync;\n'
        '#define APIENTRY __stdcall\n'
        '#define APIENTRYP APIENTRY *\n')
    SIMPLE_T = {'undefined1', 'undefined2', 'undefined4', 'undefined8', 'int',
                'uint', 'char', 'uchar', 'short', 'ushort', 'bool', 'byte',
                'word', 'dword', 'longlong', 'ulonglong', 'float', 'double'}
    data_defs, data_skipped = [], 0
    used_td = set()
    body_tokens = set(re.findall(r'\b[A-Za-z_]\w*\b', body))

    def label_for(t):
        """token -> (ghidra_label, cands, src)；反编译对 '_' 开头标签多加一个 '_'
        r25: NS 剥前缀链（Physics__RequiredLagrangePointMassRatio → 短名）"""
        s = t
        while True:
            if s in dmap:
                return s, dmap[s], 'data'
            if s in smap:
                return s, smap[s], 'sym'
            if not s.startswith('_'):
                break
            s = s[1:]
        s = t
        while '__' in s:
            s = s.split('__', 1)[1]
            if s in dmap:
                return s, dmap[s], 'data'
            if s in smap:
                return s, smap[s], 'sym'
        return None, None, None

    need = set()
    for t in body_tokens:
        if t in hdr_ids2 or t in func_names:
            continue
        if re.fullmatch(r'FUN_[0-9a-f]{8}', t):
            continue    # 函数符号走 R8 extern，永不作数据
        lab, _c, _s = label_for(t)
        if lab:
            need.add(t)
    for t in sorted(need):
        lab, cands, src = label_for(t)
        if re.fullmatch(r'_?DAT_[0-9a-f]{6,8}', t) and src == 'sym':
            continue    # DAT_ 形状未定义项由 undefined1 兑底宏处理（值读安全）
        mp = re.match(r'^_+(w?glew)([A-Za-z_]\w*)$', t)
        if mp and lab:
            pref = 'WGL' if mp.group(1) == 'wglew' else 'GL'
            tdname = f'PFN{pref}{mp.group(2).upper()}PROC'
            if tdname in TD and cands:
                addrs_ = sorted({(c[0] if isinstance(c, tuple) else c) for c in cands})
                if len(addrs_) == 1:
                    used_td.add(tdname)
                    data_defs.append(f'#define {t} (*({tdname} *)(0x{addrs_[0]}u))')
                    continue
            data_skipped += 1
            continue
        if not lab:
            data_skipped += 1
            continue
        if src == 'sym':
            # 符号表单项（未定义数据）：仅 Ghidra 数据标签形态才宏化，
            # libc/API 名（fseek 等 IMPORT 符号）绝不宏化（会摧毁调用站）
            if not re.match(r'^(_*DAT_|PTR_|s_|u_|___xmm|_UNK_|_+w?glew)', t):
                data_skipped += 1
                continue
            if len(cands) != 1:
                data_skipped += 1
                continue
            va = next(iter(cands))
            data_defs.append(f'#define {t} (*(void **)(0x{va}u))')
            continue
        addrs = {c[0] for c in cands}
        if len(addrs) != 1:
            data_skipped += 1
            continue
        va, sz, tn = next(iter(cands))
        tl = tn.lower()
        if 'unicode' in tl or ('ushort' in tl and 'string' in tl):
            form = f'((const unsigned short *)0x{va}u)'
        elif 'string' in tl or tn.startswith('char['):
            form = f'((const char *)0x{va}u)'
        elif tn in ('float', 'double'):
            form = f'(*({tn} *)(0x{va}u))'
        elif t.startswith('PTR_') or tn.endswith('*') or 'pointer' in tl:
            form = f'(*(void **)(0x{va}u))'
        elif tn in SIMPLE_T:
            form = f'(*({tn} *)(0x{va}u))'
        elif 'code' in tl:
            form = f'(*(code **)(0x{va}u))'
        elif sz in (1, 2, 4, 8):
            form = f'(*(undefined{sz} *)(0x{va}u))'
        elif sz == 16:
            form = f'(*(undefined1 (*)[16])(0x{va}u))'
        else:
            data_skipped += 1
            continue
        data_defs.append(f'#define {t} {form}')
    if data_defs:
        A.L(f'data closure v2: {len(data_defs)} macros (skipped {data_skipped}) '
            f'pfn={len(used_td)}')
    # xmm/_UNK_ 兜底（fam8 r18 形态：dump 无标签时按名取 VA）
    # 注意：___xmm_<32hex> 是 Ghidra 折叠的 128 位常量值名（非地址），其字节序
    # 与 game_024 静态惯例对不上——不猜，留编译错→defer（等价纪律优先）
    have = {d.split()[1] for d in data_defs if d.startswith('#define')}
    for m in sorted({m.group(0) for m in re.finditer(r'___xmm_[0-9a-f]{6,32}\b', body)}):
        if m in hdr_ids2 or m in have:
            continue
        hx = m[7:]
        if len(hx) <= 16:
            data_defs.append(f'#define {m} (*(undefined1 (*)[16])(0x{hx}u))')
        elif len(hx) == 32 and re.fullmatch(r'[0-9a-f]{32}', hx):
            # r25: 128 位寄存器折叠常量（值非地址）——meta/xmm_truth.tsv 字节序实证收编
            _xb = bytes.fromhex(hx)
            if XMM_TRUTH.get(hx, 0) == 1:
                _xb = _xb[::-1]
            _arr = ','.join(f'0x{x:02x}' for x in _xb)
            data_defs.append(f'static const undefined1 {m}[16] = {{{_arr}}}; /* xmm128 const */')
            have.add(m)
    for m in sorted({m.group(0) for m in re.finditer(r'_UNK_[0-9a-f]+', body)}):
        if m not in hdr_ids2 and m not in have:
            data_defs.append(f'#define {m} (*(undefined4 *)(0x{m[5:]}u))')
    # 未定义地址 DAT_ 兜底（Ghidra 引用但无 defined item；宽访问必带显式转型，
    # 字节宏指针算术/取址/窄读全兼容——等价口径同 cde_data_map.h undefined1）
    for m in sorted({m.group(0) for m in re.finditer(r'\b_?DAT_[0-9a-f]{6,8}\b', body)}):
        if m in have or m in hdr_ids2:
            continue
        va = m.lstrip('_')[4:]
        data_defs.append(f'#define {m} (*(undefined1 *)(0x{va}u))')

    hdr_ids = hdr_ids2
    exts = []
    for s in sorted(A.sym_externs):
        if s in hdr_ids or s in A.INFILE_SYMS or s in proto_map:
            continue
        if s.startswith('FUN_00'):
            # 精确去重：`extern int NAME(` 完整形态（r20b：旧模糊窗口跨名误跳）
            if re.search(r'extern\s+\w[\w\s\*]*\b' + re.escape(s) + r'\s*\(', body):
                continue
            # r25: 批内定义守卫（定义行带 __fastcall 等 cc 关键字也能命中）
            if re.search(r'\b' + re.escape(s) + r'\s*\([^;{}]*\)\s*\{', body):
                continue
            exts.append(f'extern int {s}(); /* K&R; ret by call site */')
        else:
            # r25w17: ret 真值升级（r23_sigs JOIN）—— 结构体返回的 K&R int 误型
            # 是 assigning-incompatible 主族根因；K&R 仍无原型（参数不标），ret 忠实
            # 守卫: ret 类型名必须在 hdr_ids2 已有 typedef（fpos<dword> 等无定义类型退 int）
            _rt = _RET_STRUCT.get(s)
            if _rt and (_rt not in hdr_ids2 or _rt.startswith('_func')):
                _rt = None   # _func_* = 函数类型 typedef，不能作返回类型
            exts.append(f'extern {_rt} {s}(); /* K&R stub; ret by call site */'
                        if _rt else
                        f'extern int {s}(); /* K&R stub; ret by call site */')
    # r25w19c: ret 真值 extern 兜底 —— 已回退（净伤 -18：int 语境调用点
    # （比较/算术）无配套 fixer，暴露新错比修复多；等 assign/compare 联合 fixer 后再启）
    parts = [
        f'// pilot_sweep_{BATCH}.c - assembled by scripts/sweep_assemble.py (r19)\n'
        '// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)\n',
    ]
    # r20: 未声明类型不完整 typedef —— 必须在 port_prelude 之前（gen.h 引用它们）
    _r23defs = []
    _r23bridges = []
    _FWD_NAMES = set()   # r25: 本批前置 typedef 名 —— 同名函数原型让位（esc 打平撞车）
    if _TYPEDEF_POOL or TYPE_ALIAS or TYPEFUNC_POOL:
        tds = []
        _n23 = 0
        for t in sorted(_TYPEDEF_POOL):
            if t in _PDB_NAMES:
                continue    # r25: pdb.h include 提供真身，文本 token 同名直连免声明
            _disp = R23_ESC.get(t) or R23_ESC_NORM.get(re.sub(r'_+', '_', t).strip('_'))
            if t in STRICT_SELFHDR or t in STRICT_DEFINED or t in STRICT_ALIAS:
                # r23i: 头部已提供（tag/自指 typedef/别名）—— 静默跳过；
                # r23j: 登记 display 已定义（防后续变体重发定义）
                if _disp:
                    R23_DEFINED.add(_disp)
                    R23_DEF_ESC.setdefault(_disp, t)
                elif t not in STRICT_TYPES and not _fidx_any(t):
                    tds.append(f'typedef struct {t} {t};')
            elif _disp and _pdb_esc(_disp) in _PDB_NAMES and _pdb_esc(_disp) != t:
                # r25: display 在 pdb.h 有真身 —— 别名桥接（体由 include 提供）
                _pe = _pdb_esc(_disp)
                R23_DEFINED.add(_disp)
                R23_DEF_ESC.setdefault(_disp, _pe)
                _r23bridges.append(f'typedef struct {_pe} {t};')
            elif _disp and _disp not in R23_DEFINED and r23_complete_def(_disp, _r23defs, esc=t):
                _n23 += 1
            elif _disp and _disp in R23_DEF_ESC and R23_DEF_ESC[_disp] != t:
                # r23c: 同类型多 esc 形态 —— 已有定义，别名桥接（须在定义后，r23i 移桩）
                _r23bridges.append(f'typedef {R23_DEF_ESC[_disp]} {t};')
            else:
                tds.append(f'typedef struct {t} {t};')
                _FWD_NAMES.add(t)
        for k, v in sorted(TYPE_ALIAS):
            _disp = R23_ESC.get(v) or R23_ESC_NORM.get(re.sub(r'_+', '_', v).strip('_'))
            if _disp:
                r23_complete_def(_disp, _r23defs, esc=k)
            tds.append(f'typedef struct {k} {v};')
            _FWD_NAMES.add(k)
        tds += [f'typedef void *{t};' for t in sorted(TYPEFUNC_POOL)]
        _FWD_NAMES.update(TYPEFUNC_POOL)
        parts.append('/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */\n' +
                     '\n'.join(tds) + '\n')
        A.L(f'typedef forwards: {len(tds)} (r23 complete {_n23}) (alias {len(TYPE_ALIAS)})')
    parts += [
        '#include "port_prelude.h"\n',
        '#include "cde_win32_compat.h"\n',
        '#include "cde_types_r20.h"\n',
        '#include "cde_types_pdb.h"\n',
        A.build_slice_view(all_pairs) + '\n',
    ]
    # r23: 完整定义必须在 includes 之后（成员可能引用 STRICT_TYPES 头内类型）
    if _r23defs:
        parts.append('/* ---- r23 PDB complete types (value-position layouts, byte-exact) ---- */\n' +
                     '\n'.join(_r23defs) + '\n')
    if _r23bridges:
        parts.append('/* ---- r23i esc-form bridges (after defs they reference) ---- */\n' +
                     '\n'.join(_r23bridges) + '\n')
    # r21: hdr 冲突改名——必须 AFTER port_prelude：头声明以 OLD 落地（本 TU 无
    # 人引用），#undef+define 后批内 def/调用走 NEW；链接期 alias OLD→NEW
    _ren_used = sorted((o, n) for o, n in RENAMES_MAP.items()
                       if re.search(r'\b' + re.escape(o) + r'\b', body))
    if _ren_used:
        parts.append('/* ---- r21 hdr-conflict renames (decl stays OLD for game TUs; '
                     'pilot impl+calls = NEW; linker aliases OLD -> NEW) ---- */\n' +
                     '\n'.join(f'#undef {o}\n#define {o} {n}' for o, n in _ren_used) + '\n')
        A.L(f'renames applied: {len(_ren_used)}')
    if exts:
        parts.append('/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */\n' +
                     '\n'.join(exts) + '\n')
    if _exr_defines:
        parts.append('/* ---- r20 exref direct-bind (IAT slot reads -> direct refs) ---- */\n' +
                     '\n'.join(_exr_defines) + '\n')
    if _clears:
        parts.append('/* ---- r25w14: _Clear memoization-clear externs (K&R stub conv) ---- */\n'
                     + '\n'.join(f'extern void *{_c}();' for _c in _clears) + '\n')
    if used_td:
        td_lines, seen = [], set()

        def add_td(nm, depth=0):
            return  # include 直接取 Khronos 头，不再抽取

        for nm in sorted(used_td):
            add_td(nm)
        parts.append('/* ---- GL PFN typedefs: Khronos headers directly (extraction-free) ---- */\n'
                     '#include <glcorearb.h>\n#include <glext.h>\n')
    if data_defs:
        parts.append('/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */\n' +
                     '\n'.join(data_defs) + '\n')
    # r25: tile 文本 DB 原语名 + Win32 型名（DB 类型化反编译特有；头侧无定义才发）
    _extra_tds = []
    for _n, _c in sorted({'dword': 'unsigned int', 'word': 'unsigned short',
                          'byte': 'unsigned char', 'qword': 'unsigned long long',
                          'longlong': 'long long'}.items()):
        if re.search(rf'\b{_n}\b', body) and _n not in STRICT_TYPES:
            _extra_tds.append(f'typedef {_c} {_n};')
    for _n, _c in sorted({'LRESULT': 'long', 'LPARAM': 'long', 'WPARAM': 'unsigned int',
                          'HDROP': 'void *', 'HANDLE': 'void *', 'HDC': 'void *',
                          'HWND': 'void *', 'HINSTANCE': 'void *', 'HMODULE': 'void *',
                          'HBITMAP': 'void *', 'HBRUSH': 'void *', 'HCURSOR': 'void *',
                          'HICON': 'void *', 'HMENU': 'void *', 'BOOL': 'int',
                          'UINT': 'unsigned int', 'DWORD': 'unsigned long',
                          'WORD': 'unsigned short', 'BYTE': 'unsigned char',
                          'LPSTR': 'char *', 'LPCSTR': 'const char *',
                          'LPWSTR': 'unsigned short *', 'LPCWSTR': 'const unsigned short *'}.items()):
        if re.search(rf'\b{_n}\b', body) and _n not in STRICT_TYPES:
            _extra_tds.append(f'typedef {_c} {_n};')
    if _extra_tds:
        parts.append('/* ---- r25: DB primitive / Win32 type names (tile-decomp text) ---- */\n' +
                     '\n'.join(_extra_tds) + '\n')
        A.L(f'extra typedefs: {len(_extra_tds)}')
    _dump_secs = bool(os.environ.get('SWEEP_DUMP_SECS'))
    if _dump_secs:
        SECDIR = Path(os.environ.get('SWEEP_SECDIR', f'/tmp/sweep_{BATCH}_secs'))
        SECDIR.mkdir(parents=True, exist_ok=True)
        for _f in SECDIR.glob('*.c'):
            _f.unlink()
        # r25: iso prelude = 批级前奏 + 批内规范原型（兄弟调用类型齐全；
        # 自身原型由 iso_sweep.strip_self 摘除，防 conflicting types）
        # r25w19: 原型源切换 —— fixer 后最终 sec 的定义行（col-0 + 回溯拼接）
        #         取代 pre-fixer TU 头推导的 proto_map（esc/qual 双源分歧是
        #         conflicting-types 主族根因；定义即权威声明）
        def _def_sig_from(sec, fnm):
            slines = sec.split('\n')
            for i, ln in enumerate(slines):
                if ln.startswith((' ', '\t', '/', '#', '{', '}')) or not ln.strip():
                    continue
                if re.search(re.escape(fnm) + r'\s*\(', ln):
                    sig = ln.strip()
                    k = i - 1
                    while k >= 0:
                        p = slines[k]
                        if (p.startswith((' ', '\t', '/', '#', '{', '}')) or not p.strip()
                                or p.rstrip().endswith((';', '{', '}'))):
                            break
                        sig = p.strip() + ' ' + sig
                        k -= 1
                    # r25w19b: 尾逗号/括号未闭 → 向前拼接续行（跨行签名）
                    j = i + 1
                    while j < len(slines) and j < i + 6:
                        if sig.count('(') > sig.count(')') or sig.rstrip().endswith(','):
                            sig = sig + ' ' + slines[j].strip()
                            j += 1
                        else:
                            break
                    return sig.rstrip()
            return None
        _def_sigs, _def_names = {}, set()
        for _va, _disp, _t in sections:
            _fnm = re.sub(r'^[0-9a-fA-F]{5,8}_', '', _disp)
            _sg = _def_sig_from(_t, _fnm)
            if _sg and re.search(r'\b' + re.escape(_fnm) + r'\s*\(', _sg) \
               and not re.match(r'^(typedef|extern|#)', _sg) \
               and _sg.count('(') == _sg.count(')') and _sg.rstrip().endswith(')'):
                _def_sigs.setdefault(_fnm, _sg)
                _def_names.add(_fnm)
        _proto_lines = []
        for nm2, sig2 in sorted(proto_map.items()):
            if nm2 in _def_sigs:
                if nm2 in hdr_ids2:
                    continue   # 头侧 K&R decl 治权（定义即权威，但头已声明者不重复）
                _proto_lines.append(f'extern {_def_sigs[nm2]};')
            elif nm2 not in hdr_ids2 and nm2 not in _FWD_NAMES:
                _proto_lines.append(f'extern {sig2};')
        # 批内 def 名不在 proto_map 的（重命名/新增）也导出——兄弟调用需要
        for _fnm, _sg in sorted(_def_sigs.items()):
            if _fnm not in proto_map and _fnm not in hdr_ids2 and _fnm not in _FWD_NAMES:
                _proto_lines.append(f'extern {_sg};')
        # r25w14b: winuser 精细类型需求 → prelude 级一次发射（sec 相对行号免疫）
        # 最小镜像头 cde_winuser_min.h —— 整拉 winuser.h 会撞 pdb.h _GUID tag
        if any(_WIN32_TYPE_RE.search(_t) for _, _, _t in sections):
            _proto_lines = ['#include "cde_winuser_min.h"'] + _proto_lines
            A.L('winuser_min include: emitted at prelude')
        # r26w1: SIMD 伪指令等价库（战役①）—— 批内出现 auVar/ZEXT blob/SSE 伪指令
        # 即发射（自包含头，#undef port_prelude 标量 ZEXT 后重定义 blob 版）
        _simd_need = re.compile(r'\bauVar\d+\b|ZEXT(?:416|816|412|812)|pmovzxbd|'
                                r'pmulld|pshuflw|pshufhw|divpd|_local_\d')
        if any(_simd_need.search(_t) for _, _, _t in sections):
            _proto_lines = ['#include "cde_simd.h"'] + _proto_lines
            A.L('cde_simd include: emitted at prelude')
        Path(str(OUT) + '.prelude').write_text(
            ''.join(parts) +
            '/* ---- r25 iso: in-batch canonical prototypes ---- */\n' +
            '\n'.join(_proto_lines) + '\n')
        A.L(f'iso prelude: {len(_proto_lines)} protos -> {OUT}.prelude')
    for va, disp, txt in sections:
        parts.append(f'\n//==== 00{va} {disp} ====\n')
        # r19 修复：fam8 的 fix_externs 结果(body)从未进 parts（当年批内全具名，
        # R8 不发批内 extern 所以没炸）；扫荡批 FUN_ 互调必须逐段替换。
        # 只替换签名区（第一个 '{' 之前）——原型语句只出现在那里，函数体内的
        # 调用语句形态相近但绝不能碰
        i = txt.find('{')
        head, tail = (txt[:i], txt[i:]) if i >= 0 else (txt, '')
        _fixed = fix_externs(head) + tail
        parts.append(_fixed)
        if _dump_secs:
            _nm3 = _fname_esc(disp)[:80] or 'fn'
            (SECDIR / f'{va}_{_nm3}.c').write_text(_fixed)
    OUT.write_text(''.join(parts))
    # r20: thread-static 新 extern 冲刷进 cde_l2_statics.h（去重追加）
    if L2_NEW:
        l2p = REPO / 'src' / 'cde_l2_statics.h'
        have = set(re.findall(r'extern [^;]+;', l2p.read_text(errors='replace')))
        add = sorted(L2_NEW - have)
        if add:
            with open(l2p, 'a', encoding='utf-8') as f:
                f.write('\n/* r20 sweep batch additions */\n' + '\n'.join(add) + '\n')
        A.L(f'l2 statics: +{len(add)} (of {len(L2_NEW)})')
    A.L(f'WROTE {OUT} ({OUT.stat().st_size}B) sections={len(sections)} '
        f'externs={len(exts)} unresolved={len(A.unresolved)}')
    (REPO / 'reports' / 'poison_fix' / f'sweep_{BATCH}_log.txt').write_text(
        '\n'.join(A.log) + '\n')
    print(f'OK {BATCH}: total={n_total} sections={len(sections)} '
          f'auto={len(auto_now)} exts={len(exts)} unresolved={len(A.unresolved)}')


if __name__ == '__main__':
    main()
