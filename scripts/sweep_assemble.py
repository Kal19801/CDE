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
            FUNC_IDX.setdefault(_T2(_p[1]), []).append((_va, _p[1]))

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
_L3 = lambda s: re.sub(r'[^A-Za-z0-9]', '', s)

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
    L2_NEW.add(f'extern struct {t} {nm};' if t else f'extern undefined1 {nm}[16];')
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
    if not neg:
        return txt, 0
    have = set(re.findall(r'\bundefined\d*\s+(stack0x[0-9a-fA-F]+)\s*[;=\[]', txt))
    decls = [f'  undefined4 stack0x{o};' for o in sorted(neg)
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
_ESCTYPE_SHAPE = re.compile(r'\b([A-Za-z_]\w*(?:_L_[^\s;(),\[\]]*)+)\b')
_SHORT_TMPL = {'Vec2', 'Vec3', 'Maybe', 'Str', 'SharedPtr', 'WeakPtr', 'Darray',
               'IArray', 'tuple2', 'AssocArray', 'Reflectable', 'LocStr'}

def typedef_scan(txt):
    out = set()
    for m in _ESCTYPE_SHAPE.finditer(txt):
        nm = m.group(1)
        if nm not in STRICT_TYPES and not nm.startswith(('undefined', 'slice_', 'cde_')):
            # r20: 转义 typo 折叠探测——若折叠后是已知类型，登记为别名需求
            fold = nm.replace('_P__G_', '_P_G_').replace('_L__', '_L_')
            if fold != nm and fold in STRICT_TYPES:
                TYPE_ALIAS.add((fold, nm))
                continue
            out.add(nm)
    for w in re.findall(r'\b([A-Za-z_]\w*)\b', txt):
        if w in _SHORT_TMPL and w not in STRICT_TYPES:
            out.add(w)
    return out

TYPE_ALIAS = set()

_NM = r'~?[A-Za-z_]\w*(?:<(?:[^<>{};]*(?:<[^<>{};]*>[^<>{};]*)*)>)?'
# f-string 内必须 (?:::{_NM})：渲染后组内容 = '::'（(?: 吃掉第一个冒，剩两个才是分隔符）
_QFQN = re.compile(rf'\b{_NM}(?:::{_NM})+')


def _qrep(m):
    tok = m.group(0)
    if tok.endswith('_vftable_'):
        return tok  # vftable 尾交回 fix_vftables（已扩 tnorm2 兜底）
    cands = FUNC_IDX.get(_T2(tok))
    if not cands or len(cands) > 1:
        # Data-Q 兜底：限定名静态数据 → (*(T *)&VA)（成员链由真实 struct 承接）
        d = QDATA_IDX.get(_T2(tok))
        if d and d[0] != 'AMBIG' and d[1]:
            t = A.type_escape(d[1])
            if t and (t in STRICT_TYPES or not STRICT_TYPES):
                return f'(*({t} *)&0x{d[0]:08x}u)'
        return tok
    va, full = cands[0]
    after = m.string[m.end():m.end() + 1]
    before = m.string[max(0, m.start() - 1):m.start()]
    sym = None
    if after == '(' or before == '&' or after == ',' or after == ')':
        # 调用/取址/实参位置 → 函数名
        sym = _calleename(va)
        if after == '(':
            A.sym_externs.add(sym)
        return sym or tok
    # 类型位置：esc 变体链，命中严格类型名集才换（防 hdr_names 注释/member 误报）
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
    return tok


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
            cands = FUNC_IDX.get(_T2(tok))
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

def build_strict_types():
    import glob as _g
    pats = [re.compile(r'\btypedef\s+[^;{}]*?([A-Za-z_]\w*)\s*;'),
            re.compile(r'\}\s*([A-Za-z_]\w*)\s*;'),
            re.compile(r'\b(?:struct|union|enum)\s+([A-Za-z_]\w*)\s*\{')]
    for h in _g.glob(f'{REPO}/src/cde_types_*.h'):
        t = Path(h).read_text(errors='replace')
        for pat in pats:
            for mm in pat.finditer(t):
                STRICT_TYPES.add(mm.group(1))



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
    scan_inbatch_defs(files)      # r20b: VA->批内 def 名
    build_strict_types()          # r20b: 严格类型名集
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
        txt = qual_pass(txt, disp)   # r20: 限定名闭包（模板方法/operator/dtor/跨行名）
        # r20: 批内 vftable 兼底（按函数所属类，data_names 的 ::vftable' 行）
        txt = vft_bare_fix(txt, va)
        # r20: 负偏移栈伪符号 → 局部声明（Ghidra 丢局部类型的 sret 槽）
        txt, sloc = stack_pseudo_fix(txt)
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
    for va_, disp_, txt_ in sections:
        i = txt_.find('{')
        if i < 0:
            continue
        sigc = re.sub(r'/\*.*?\*/', ' ', txt_[:i], flags=re.S)
        sigc = re.sub(r'//[^\n]*', ' ', sigc)
        sig = re.sub(r'\s+', ' ', sigc.split(';')[-1]).strip()
        mm = re.match(r'^(.*?)\b([A-Za-z_]\w*)\s*\(([^()]*)\)(\s*const)?$', sig)
        if not mm:
            continue
        nm, sg = mm.group(2), re.sub(r'\s+', '', sig)
        if nm in proto_map:
            # 碰撞互斥 → 弃用防误替换；None（已弃用）不再复比较（r19 崩溃修复）
            if proto_map[nm] is None or re.sub(r'\s+', '', proto_map[nm]) != sg:
                proto_map[nm] = None
        else:
            proto_map[nm] = sig
    proto_map = {k: v for k, v in proto_map.items() if v}
    A.L(f'prototypes: {len(proto_map)} (all-CC)')

    # ---- r20: decls_gen 陈旧声明刷新（批内 def 签名赢）----
    # 病灶：decls_gen.h 的无参/旧签名 extern 与批内 def 冲突（uint f() vs
    # void f(char*)）。gen.h 是生成产物——以当前反编译 def 为准原位刷新。
    _gen_changed = 0
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
                _gl[_i] = _sig + ';'
                _gen_changed += 1
        # r20: gen.h 陈旧行含原始模板语法（Vec2<int> __cdecl F(...);）——转义类型
        _esc_changed = 0
        for _i, _ln in enumerate(_gl):
            if '<' not in _ln or not _ln.lstrip().startswith('extern'):
                continue
            _m3 = re.match(r'(extern\s+)([A-Za-z_]\w*)<([^;]*?)>(\s+[^;]+;)\s*$', _ln)
            if not _m3:
                continue
            _t = A.type_escape(_m3.group(2) + '<' + _m3.group(3) + '>')
            if _t:
                _gl[_i] = _m3.group(1) + _t + _m3.group(4)
                _esc_changed += 1
        # r20 pass3: 无 extern 前缀的原始模板行 / half-escape（class_util__X_L_..）/
        # 破损 token（int_G_）——类型部分不可信 → 整行 K&R 化（extern long long N();）
        _kr_changed = 0
        for _i, _ln in enumerate(_gl):
            if not re.match(r'^[A-Za-z_]', _ln) or not _ln.rstrip().endswith(';'):
                continue
            if '(' not in _ln:
                continue
            _head = _ln[:_ln.rfind('(')]
            _nm = re.findall(r'([A-Za-z_]\w*)\s*$', _head)
            if not _nm:
                continue
            _ret = _head[:_head.rfind(_nm[0])]
            _bad = ('<' in _ret or
                    re.search(r'\b(class|struct|enum)_\w+__', _ret) or
                    re.search(r'\b(class|struct|enum)_G_\b|\bint_G_\b', _ret))
            if not _bad:
                continue
            _gl[_i] = f'extern long long {_nm[0]}();'
            _kr_changed += 1
        # r20 pass4: 转义 typo 折叠（_P__G_ → _P_G_、_L__ → _L_）——已知正名存在时原位修
        for _i, _ln in enumerate(_gl):
            if '_P__G_' in _ln or '_L__' in _ln:
                _fix = _ln.replace('_P__G_', '_P_G_').replace('_L__', '_L_')
                if _fix != _ln:
                    _gl[_i] = _fix
                    _kr_changed += 1
        # r20 pass3b: 破损 token（int_G_ 等数字开头的 _G_ 伪类型、逗号粘速）→ K&R 化
        _aliased = set()
        for _i, _ln in enumerate(_gl):
            if not re.match(r'^[A-Za-z_]', _ln) or not _ln.rstrip().endswith(';'):
                continue
            if '(' not in _ln:
                continue
            if re.search(r'\b\d+_G_\b', _ln) or re.search(r'\w_G_,\w+_G_', _ln):
                _head2 = _ln[:_ln.rfind('(')]
                _nm2 = re.findall(r'([A-Za-z_]\w*)\s*$', _head2)
                if _nm2:
                    _gl[_i] = f'extern long long {_nm2[0]}();'
                    _kr_changed += 1
        # r20 pass5: 未知 esc 类型 token（class_ 前缀变体）→ 别名 typedef 入常驻头
        for _i, _ln in enumerate(_gl):
            for _tok in re.findall(r'\b[A-Za-z_]\w*(?:_L_[^\s;(),\[\]]*)_G_\b', _ln):
                if _tok in STRICT_TYPES or _tok in _aliased:
                    continue
                _stripped = re.sub(r'\b(class|struct|enum)_', '', _tok)
                if _stripped != _tok and _stripped in STRICT_TYPES:
                    _aliased.add((_stripped, _tok))
        if _aliased:
            _alp = REPO / 'src' / 'cde_types_r20.h'
            _have = set(re.findall(r'typedef\s+[^;]+;', _alp.read_text(errors='replace'))) if _alp.exists() else set()
            _new_al = [f'typedef struct {k} {v};' for k, v in sorted(_aliased)
                       if f'typedef struct {k} {v};' not in _have]
            if _new_al:
                with open(_alp, 'a', encoding='utf-8') as _af:
                    if not _alp.exists():
                        _af.write('/* r20: 类型别名（class_ 前缀变体 → 已知正名） */\n#pragma once\n')
                    _af.write('\n'.join(_new_al) + '\n')
                _kr_changed += len(_new_al)
        # r20 pass5b: 仍含未知 esc token 的行（不可别名）→ K&R 化（hdr_ids2 全头标识符判定）
        _known_ids = set()
        for _h in sorted((REPO / 'src').glob('*.h')):
            if _h.name in ('cde_fun_decls_gen.h', 'cde_types_r20.h'):
                continue  # 自我指涉：gen.h 的坏行会让未知 token 假性"已知"
            _known_ids |= set(re.findall(r'\b([A-Za-z_]\w*)\b', _h.read_text(errors='replace')))
        for _i, _ln in enumerate(_gl):
            if not re.match(r'^[A-Za-z_]', _ln) or not _ln.rstrip().endswith(';'):
                continue
            _badline = False
            for _tok in re.findall(r'\b[A-Za-z_]\w*(?:_L_[^\s;(),\[\]]*)_G_\b', _ln):
                if _tok not in _known_ids and not _tok.startswith('slice_'):
                    _badline = True
                    break
            if not _badline:
                for _tok in re.findall(r'\b_func__[A-Za-z_]+\b', _ln):
                    if _tok not in _known_ids:
                        _badline = True
                        break
            if _badline:
                _head3 = _ln[:_ln.rfind('(')]
                _nm3 = re.findall(r'([A-Za-z_]\w*)\s*$', _head3)
                if _nm3:
                    _gl[_i] = f'extern long long {_nm3[0]}();'
                    _kr_changed += 1
        if _gen_changed or _esc_changed or _kr_changed:
            _genp.write_text('\n'.join(_gl))
            A.L(f'decls_gen refreshed: {_gen_changed} sigs, {_esc_changed} templates, {_kr_changed} K&R')
    except Exception as _e:
        A.L(f'decls_gen refresh failed: {_e}')

    hdr_ids2 = set()
    for _h in sorted((REPO / 'src').glob('*.h')):
        hdr_ids2 |= set(re.findall(r'\b([A-Za-z_]\w*)\b', _h.read_text(errors='replace')))

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
        if _n in hdr_ids2:      # 已有头声明/宏（DebugBreak 等）
            continue
        if _n.startswith('_'):  # _BADOFF 等数据导入——直连无等价保证，留给 defer
            continue
        _exr_defines.append(f'#define {_e} {_n}')
    if _exr_defines:
        A.L(f'exref defines: {len(_exr_defines)}')

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
        """token -> (ghidra_label, cands, src)；反编译对 '_' 开头标签多加一个 '_'"""
        s = t
        while True:
            if s in dmap:
                return s, dmap[s], 'data'
            if s in smap:
                return s, smap[s], 'sym'
            if not s.startswith('_'):
                return None, None, None
            s = s[1:]

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
    have = {d.split()[1] for d in data_defs}
    for m in sorted({m.group(0) for m in re.finditer(r'___xmm_[0-9a-f]{6,16}\b', body)}):
        if m in hdr_ids2 or m in have:
            continue
        hx = m[7:]
        if len(hx) <= 16:
            data_defs.append(f'#define {m} (*(undefined1 (*)[16])(0x{hx}u))')
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
            exts.append(f'extern int {s}(); /* K&R; ret by call site */')
        else:
            exts.append(f'extern int {s}(); /* K&R stub; ret by call site */')
    parts = [
        f'// pilot_sweep_{BATCH}.c - assembled by scripts/sweep_assemble.py (r19)\n'
        '// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)\n',
    ]
    # r20: 未声明类型不完整 typedef —— 必须在 port_prelude 之前（gen.h 引用它们）
    if _TYPEDEF_POOL or TYPE_ALIAS:
        tds = [f'typedef struct {t} {t};' for t in sorted(_TYPEDEF_POOL)]
        tds += [f'typedef struct {k} {v};' for k, v in sorted(TYPE_ALIAS)]
        parts.append('/* ---- r20 incomplete-type forward decls (pointer-position only) ---- */\n' +
                     '\n'.join(tds) + '\n')
        A.L(f'typedef forwards: {len(tds)} (alias {len(TYPE_ALIAS)})')
    parts += [
        '#include "port_prelude.h"\n',
        '#include "cde_win32_compat.h"\n',
        '#include "cde_types_r20.h"\n',
        A.build_slice_view(all_pairs) + '\n',
    ]
    if exts:
        parts.append('/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */\n' +
                     '\n'.join(exts) + '\n')
    if _exr_defines:
        parts.append('/* ---- r20 exref direct-bind (IAT slot reads -> direct refs) ---- */\n' +
                     '\n'.join(_exr_defines) + '\n')
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
    for va, disp, txt in sections:
        parts.append(f'\n//==== 00{va} {disp} ====\n')
        # r19 修复：fam8 的 fix_externs 结果(body)从未进 parts（当年批内全具名，
        # R8 不发批内 extern 所以没炸）；扫荡批 FUN_ 互调必须逐段替换。
        # 只替换签名区（第一个 '{' 之前）——原型语句只出现在那里，函数体内的
        # 调用语句形态相近但绝不能碰
        i = txt.find('{')
        head, tail = (txt[:i], txt[i:]) if i >= 0 else (txt, '')
        parts.append(fix_externs(head) + tail)
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
