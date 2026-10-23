#!/usr/bin/env python3
"""build.py - CDE reconstruction build entry (i686 Windows PE comparison build).

Pipeline (deterministic; see docs/pipeline.md):
  1. compile all game TUs  src/game_000.c .. game_030.c
     (per-TU tail-merge policy, -ftrivial-auto-var-init=pattern -- lesson 70/74)
  2. compile the placeholder-stub file src/cde_stubs.c -> cde_pe_stubs.o
  3. compile support objects (generated win_main.c, cde_win_crt.c, port_ops.c)
     + windres resources (icons + manifest)
  4. link with lld-link: 8-round undefined-symbol stub closure
     (auto-generated cde_autostubs.c / cde_impstubs.c, regenerated FRESH
     each round -- no incremental merge, v1 oscillated)
  5. patch PE header (linker version 14.14 + original link timestamp)

Usage:
  python3 build.py            # everything: tus + stubs + support + link
  python3 build.py tus        # only the 31 game TUs
  python3 build.py link       # only support + link loop (tus must exist)
  python3 build.py clean      # remove pe_obj/

Toolchain: Debian debs extracted to ./toolchain (no root needed).
  Run:  bash scripts/pe_toolchain_setup.sh
  Override location with CDE_TOOLCHAIN=/path/to/toolchain
"""
import os, re, subprocess, sys
from concurrent.futures import ThreadPoolExecutor

REPO = os.path.dirname(os.path.abspath(__file__))
TC   = os.environ.get('CDE_TOOLCHAIN', os.path.join(REPO, 'toolchain'))
BIN  = f'{TC}/usr/lib/llvm-19/bin'
MLIB = f'{TC}/usr/i686-w64-mingw32'
GCCD = f'{TC}/usr/lib/gcc/i686-w64-mingw32/14-posix'
SRC  = os.path.join(REPO, 'src')
OBJ  = os.path.join(REPO, 'pe_obj')
INC  = os.path.join(REPO, 'pe_inc')
OUT  = os.path.join(REPO, 'pe_out')
PLIB = os.path.join(REPO, 'pe_lib')
CC   = f'{BIN}/clang'
LLD  = f'{BIN}/lld-link'

# --- TU compile flags (pe_compile_all.py, verbatim) -----------------------
BASE = ['--target=i686-w64-mingw32', '-m32', '-x', 'c', '-std=gnu11', '-c',
        '-O2', '-g', '-gcodeview', '-ftrivial-auto-var-init=pattern',
        '-ferror-limit=0', '-w', '-Wno-error=implicit-function-declaration',
        '-Wno-error=incompatible-function-pointer-types',
        '-Wno-error=incompatible-pointer-types', '-Wno-error=int-conversion',
        f'-I{SRC}', f'-I{SRC}/../third_party/GL', f'-I{SRC}/../third_party/AL',
        f'-I{SRC}/../third_party/glfw-3.3.10/include',
        f'-I{INC}', f'-I{INC}/freetype2', '-isystem', f'{MLIB}/include']

# support / stub compile flags (pe_build.py CFGS, verbatim)
CFGS = ['-x', 'c', '-std=gnu11', '-c', '-O2', '-g', '-gcodeview',
        '-ftrivial-auto-var-init=pattern',
        '--target=i686-w64-mingw32', '-m32',
        '-ferror-limit=0', '-w', '-Wno-error=implicit-function-declaration',
        f'-I{SRC}', f'-I{SRC}/../third_party/GL', f'-I{SRC}/../third_party/AL',
        f'-I{SRC}/../third_party/glfw-3.3.10/include',
        f'-I{INC}', f'-I{INC}/freetype2', '-isystem', f'{TC}/usr/i686-w64-mingw32/include']

# TUs where MSVC-style NO-tail-merge matches the original better
# (game_024 = EngineCoreLoop main loop; measured per-TU, lesson 74)
MERGE_OFF = {'game_006', 'game_010', 'game_015', 'game_016', 'game_024', 'game_026'}

MINGW_LIBS = [f'{MLIB}/crt2.o', f'{MLIB}/libmingw32.a', f'{GCCD}/libgcc.a',
              f'{MLIB}/libmingwex.a',
              # --- orig-derived import libs FIRST (api-ms ucrt + game dlls) ---
              f'{PLIB}/lib_api-ms-win-crt-math-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-stdio-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-runtime-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-convert-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-utility-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-filesystem-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-time-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-string-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-heap-l1-1-0.a',
              f'{PLIB}/lib_api-ms-win-crt-locale-l1-1-0.a',
              f'{PLIB}/lib_VCRUNTIME140.a',
              f'{PLIB}/lib_OPENGL32.a',
              f'{PLIB}/lib_freetype6.a',
              f'{PLIB}/lib_libsndfile-1.a',
              f'{PLIB}/lib_steam_api.a',
              f'{PLIB}/lib_OpenAL32.a',
              # --- orig-derived system-dll import libs ---
              f'{PLIB}/lib_KERNEL32.a',
              f'{PLIB}/lib_USER32.a',
              f'{PLIB}/lib_GDI32.a',
              f'{PLIB}/lib_SHELL32.a',
              f'{PLIB}/lib_SHLWAPI.a',
              f'{PLIB}/lib_imagehlp.a',
              # --- mingw CRT + system import libs ---
              f'{MLIB}/libmsvcrt.a',
              f'{MLIB}/libkernel32.a', f'{MLIB}/libuser32.a', f'{MLIB}/libgdi32.a',
              f'{MLIB}/libadvapi32.a', f'{MLIB}/libshell32.a', f'{MLIB}/libole32.a',
              f'{MLIB}/liboleaut32.a', f'{MLIB}/libwinmm.a', f'{MLIB}/libws2_32.a',
              f'{MLIB}/libddraw.a', f'{MLIB}/libdsound.a', f'{MLIB}/libdinput.a',
              f'{MLIB}/libdinput8.a', f'{MLIB}/libdxguid.a', f'{MLIB}/libuuid.a',
              f'{MLIB}/libopengl32.a', f'{MLIB}/libglu32.a', f'{MLIB}/libcomctl32.a',
              f'{MLIB}/libcomdlg32.a', f'{MLIB}/libsetupapi.a', f'{MLIB}/libversion.a',
              f'{MLIB}/libwintrust.a', f'{MLIB}/libcrypt32.a', f'{MLIB}/libimagehlp.a',
              f'{MLIB}/libpsapi.a', f'{MLIB}/libshlwapi.a', f'{MLIB}/librpcrt4.a',
              f'{MLIB}/libsecur32.a', f'{MLIB}/libnetapi32.a', f'{MLIB}/libiphlpapi.a']

WIN_MAIN = r'''
/* win_main.c - PE comparison build entry (auto-generated) */
int _main(int argc, char **argv);
int main(int argc, char **argv) { return _main(argc, argv); }
'''

STUB_HEAD = '''/* cde_autostubs.c - auto-generated undefined-symbol closure (build.py).
 * Trivial cdecl impls for import/aux symbols the game references that are
 * NOT part of the reconstructed function set (GL/AL/sndfile/FT/glfw imports,
 * Win32 glue). Regenerated FRESH each round by build.py. */
#include "port_prelude.h"
#include <stddef.h>
#include <stdint.h>
'''

STATIC_3RD = re.compile(r'^(glfw|stbi|SOIL)')
VOIDISH = {'void'}
SCALAR = {'bool', 'char', 'uchar', 'short', 'ushort', 'int', 'uint', 'undefined',
          'undefined1', 'undefined2', 'undefined3', 'undefined4', 'long', 'ulong',
          'longlong', 'ulonglong', 'long64', 'ulong64', 'int64_t', 'uint64_t',
          'int32_t', 'uint32_t', 'size_t', 'intptr_t', 'uintptr_t', 'float',
          'double', 'T_HRESULT', 'LONG', 'DWORD', 'ULONG', 'BOOL', 'BYTE', 'WORD'}
PROVIDED = {
    '__stdio_common_vsprintf', '__stdio_common_vswprintf',
    '__stdio_common_vfprintf', '__stdio_common_vsscanf',
    '___stdio_common_vsprintf', '___stdio_common_vswprintf',
    '___stdio_common_vfprintf', '___stdio_common_vsscanf',
    '__setusermatherr', '__mingw_setusermatherr',
}
TYPE_WORDS = {'void', 'int', 'char', 'long', 'short', 'unsigned', 'signed',
              'float', 'double', 'const', 'struct', 'union', 'enum', 'volatile',
              'bool', '_Bool'}


def sh(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def compile_tus():
    os.makedirs(f'{OBJ}/log', exist_ok=True)
    names = sorted(f[:-2] for f in os.listdir(SRC) if re.match(r'game_\d+\.c$', f))
    def build(name):
        flags = BASE + (['-mllvm', '-enable-tail-merge=false'] if name in MERGE_OFF else [])
        r = subprocess.run([CC, *flags, f'{SRC}/{name}.c', '-o', f'{OBJ}/{name}.o'],
                           capture_output=True, text=True, timeout=1800)
        open(f'{OBJ}/log/{name}.log', 'w', encoding='utf-8', errors='replace').write(r.stderr)
        return name, len(re.findall(r'error:', r.stderr)), r.returncode
    res = {}
    with ThreadPoolExecutor(max_workers=2) as ex:
        for name, n, rc in ex.map(build, names):
            res[name] = (n, rc)
            print(f'{name}: errors={n} rc={rc}', flush=True)
    tot = sum(v[0] for v in res.values())
    print(f'TOTAL errors={tot} TUs={len(names)}')
    if tot:
        sys.exit(3)
    return len(names)


def compile_stubs():
    r = sh([CC, *CFGS, f'{SRC}/cde_stubs.c', '-o', f'{OBJ}/cde_pe_stubs.o'])
    if r.returncode:
        print('-- cde_stubs.c compile FAIL'); print(r.stderr[:2000]); sys.exit(4)
    print('cde_pe_stubs.o OK')


def compile_support():
    objs = []
    os.makedirs(OUT, exist_ok=True)
    os.makedirs(f'{OBJ}/log', exist_ok=True)
    open(f'{OBJ}/win_main.c', 'w').write(WIN_MAIN)
    for name, path in (('win_main', f'{OBJ}/win_main.c'),
                       ('cde_win_crt', f'{SRC}/cde_win_crt.c'),
                       ('port_ops', f'{SRC}/port_ops.c')):
        r = sh([CC, *CFGS, path, '-o', f'{OBJ}/{name}.o'])
        if r.returncode:
            print(f'-- support compile FAIL {name}'); print(r.stderr[:2000]); sys.exit(1)
        objs.append(f'{OBJ}/{name}.o')
    # resources from the ORIGINAL .rsrc (icons + manifest), windres -> COFF
    res_o = f'{OBJ}/CDE_res.o'
    if not os.path.exists(res_o):
        wr = f'{TC}/usr/bin/i686-w64-mingw32-windres'
        rr = sh([wr, f'{SRC}/../pe_res/CDE.rc', '-O', 'coff', '-o', res_o])
        if rr.returncode:
            print('-- windres FAIL'); print(rr.stderr[:1500]); sys.exit(1)
    objs.append(res_o)
    # the big placeholder-stub object (from src/cde_stubs.c)
    stub_o = f'{OBJ}/cde_pe_stubs.o'
    objs.append(stub_o)
    return objs


def game_objs():
    return sorted(f'{OBJ}/{f}' for f in os.listdir(OBJ) if re.match(r'game_\d+\.o$', f))


def link(objs, exe, pdb):
    cmd = [LLD, f'-out:{exe}', f'-pdb:{pdb}', '-debug', '-subsystem:windows',
           '-safeseh:no', '-stack:0x100000', '-force:multiple', '-errorlimit:0',
           '-entry:mainCRTStartup'] + objs + MINGW_LIBS
    open(f'{OUT}/link_cmd.log', 'a').write(' '.join(cmd) + '\n\n')
    return sh(cmd)


def patch_pe(exe, linker=(14, 14), ts=0x5b49457a):
    """match the original's linker-version bytes and link timestamp."""
    import struct as _s
    b = bytearray(open(exe, 'rb').read())
    e = _s.unpack_from('<I', b, 0x3c)[0]
    _s.pack_into('<I', b, e + 8, ts)          # COFF TimeDateStamp
    opt = e + 4 + 20
    b[opt + 2] = linker[0]                    # MajorLinkerVersion
    b[opt + 3] = linker[1]                    # MinorLinkerVersion
    open(exe, 'wb').write(bytes(b))


def undefined_from(log):
    """lld-link reports the OBJECT-level symbol; i386 cdecl prepends exactly
    one '_' to the C name. dllimport refs print as
    '__declspec(dllimport) _name' and must become _imp__NAME data slots."""
    out = []
    seen = set()
    for m in re.finditer(r'undefined symbol: (.+)$', log, re.M):
        s = m.group(1).strip()
        if s.startswith('__declspec'):
            s = s[s.index(')') + 1:].strip()
            kind, name = 'imp', s[1:]
        elif s.startswith('___Cxx') or s.startswith('__real'):
            continue
        else:
            kind, name = 'fn', s[1:]
        if not re.match(r'^[A-Za-z_]\w*$', name):
            continue
        if (kind, name) in seen:
            continue
        seen.add((kind, name))
        out.append((kind, name))
    return sorted(out)


def rename_params(params):
    if not params or params in ('()', '(void)'):
        return params
    inner = params[1:-1] if params.startswith('(') else params
    out, tok, depth = [], '', 0
    parts = []
    for ch in inner:
        if ch == ',' and depth == 0:
            parts.append(tok); tok = ''
        else:
            depth += (ch in '([') - (ch in ')]')
            tok += ch
    if tok.strip():
        parts.append(tok)
    for i, part in enumerate(parts):
        t = part.strip()
        m = re.match(r'^(.*?)([A-Za-z_]\w*)$', t)
        if m and m.group(2) not in TYPE_WORDS:
            t = m.group(1).rstrip() + f' cde_p{i} '
        out.append(t)
    return '(' + ', '.join(out) + ')'


def decl_maps():
    """scan the prelude include chain + third-party headers for declarations,
    so stub definitions match the prototypes the game code was compiled with."""
    rets, vars_ = {}, {}
    hdrs = ('port_prelude.h', 'cde_types_pdb.h', 'cde_types_compat.h',
            'cde_undecl.h', 'cde_l2_resid.h', 'cde_dym.h', 'cde_data_map.h',
            'cde_l2_statics.h', 'cde_fun_decls_full.h', 'cde_fun_decls_gen.h',
            'cde_data_gen.h', 'cde_aliases.h')
    ext = []
    _root = f'{SRC}/../pe_inc'
    for _r, _d, _fs in os.walk(_root):
        ext += [os.path.join(_r, f) for f in _fs if f.endswith('.h')]
    for _d in ('AL', 'GL', 'glfw-3.3.10/include/GLFW'):
        _dd = f'{SRC}/../third_party/{_d}'
        if os.path.isdir(_dd):
            ext += [os.path.join(_dd, f) for f in os.listdir(_dd) if f.endswith('.h')]
    all_hdrs = [f'{SRC}/{h}' for h in hdrs if os.path.exists(f'{SRC}/{h}')] + ext
    for p in all_hdrs:
        if not os.path.exists(p):
            continue
        raw = open(p, encoding='utf-8', errors='replace').read()
        raw = re.sub(r'/\*.*?\*/', ' ', raw, flags=re.S)
        buf = ''
        for line in raw.split('\n'):
            t = re.sub(r'//[^\n]*', '', line).strip()
            if not buf:
                if not t or t.startswith(('#', 'typedef', 'struct', 'union',
                                          'enum', '}', '/')):
                    continue
                if not t.endswith(';'):
                    buf = t
                    continue
                t_proc = t
            else:
                buf += ' ' + t
                if not buf.rstrip().endswith(';'):
                    continue
                t_proc = buf
                buf = ''
            t = t_proc
            if not t.endswith(';') or t.startswith(('#', 'typedef', 'struct',
                                                    'union', 'enum', '}')):
                continue
            if '(' in t:
                t2 = re.sub(r'__?(?:cdecl|stdcall|thiscall|fastcall|clrcall|'
                            r'vectorcall|ptr64|w64|unaligned)\b', '', t)
                t2 = re.sub(r'\b(?:GLAPI|GLAPIENTRY|APIENTRY|APIENTRYP|ALAPI|'
                            r'ALAPIENTRY|ALC_API|ALC_APIENTRY|STBIDEF|'
                            r'SOILSTATICS|AL_API|AL_APIENTRY|'
                            r'FT_CALLBACKDEF|GL_APIENTRY|GL_APICALL|GLFWAPI|'
                            r'GLFWAPIENTRY|WINGDIAPI|WINAPI|CALLBACK)\b', '', t2)
                t2 = re.sub(r'FT_EXPORT\s*\(([^)]*)\)', r'\1', t2)
                fp = re.match(r'(.+?)\(\s*\*\s*([A-Za-z_]\w*)\s*\)\s*\(', t2)
                if fp and fp.group(2) not in vars_ and fp.group(2) not in rets:
                    body_txt = t2[:-1].strip()
                    body_txt = re.sub(r'^extern\s+', '', body_txt)
                    vars_[fp.group(2)] = ('fnptr', body_txt)
                    continue
                m = re.match(r'(?:extern\s+)?(.+?)\b([A-Za-z_]\w*)\s*\(', t2)
                if m and m.group(2) not in rets:
                    pt = re.match(r'.*?(\(.*\))\s*;$', t2)
                    rets[m.group(2)] = (m.group(1).strip(),
                                        pt.group(1) if pt else '()')
            elif t.startswith('extern '):
                m = re.match(r'extern\s+(.+?)\b([A-Za-z_]\w*)\s*(\[[^\]]*\])?\s*;$', t)
                if m and m.group(2) not in vars_:
                    arr = m.group(3) or ''
                    vars_[m.group(2)] = (m.group(1).strip(), arr)
    return rets, vars_


def write_stubs(syms, stub_path, imp_path, rets, vars_):
    """FRESH regeneration: cumulative syms only, no merge parsing."""
    imp_body = ['/* cde_impstubs.c - dllimport pointer slots; headerless so the',
                ' * project data_map.h __imp__ macros cannot hijack the names. */\n']
    body = [STUB_HEAD]
    n_imp = n_fn = 0
    for kind, s in sorted(syms):
        if s in ('main', '_main') or s in PROVIDED:
            continue
        if kind == 'imp':
            imp_body.append(f'void *_imp__{s} = 0;\n')
            n_imp += 1
            continue
        if s in vars_:
            vt, va = vars_[s]
            if vt == 'fnptr':
                body.append(f'{va} = 0;\n')
            else:
                body.append(f'{vt} {s}{va};\n')
            n_fn += 1
            continue
        if not re.match(r'^[A-Za-z_]\w*$', s):
            body.append(f'void {s}(void) {{ }}\n')
            n_fn += 1
            continue
        ret, params = rets.get(s, ('void', '()'))
        params = rename_params(params)
        if ret == 'void' and params == '()' and STATIC_3RD.match(s):
            body.append(f'void {s}(void) {{ }}\n')
            n_fn += 1
            continue
        base = ret.replace('*', '').strip()
        if ret in VOIDISH:
            body.append(f'{ret} {s}{params} {{ }}\n')
        elif '*' in ret or base in SCALAR:
            body.append(f'{ret} {s}{params} {{ return 0; }}\n')
        else:
            body.append(f'{ret} {s}{params} {{ {ret} cde_r; memset(&cde_r, 0, '
                        f'sizeof cde_r); return cde_r; }}\n')
        n_fn += 1
    open(stub_path, 'w').write(''.join(body))
    open(imp_path, 'w').write(''.join(imp_body))
    return n_fn, n_imp


def do_link():
    support = compile_support()
    games = game_objs()
    print(f'objects: {len(games)} game + {len(support)} support', flush=True)
    exe, pdb = f'{OUT}/CDE_recomp.exe', f'{OUT}/CDE_recomp.pdb'
    stub_c, imp_c = f'{OBJ}/cde_autostubs.c', f'{OBJ}/cde_impstubs.c'
    syms = set()
    stub_o = imp_o = None
    for rnd in range(1, 9):
        objs = support + games
        if stub_o: objs.append(stub_o)
        if imp_o:  objs.append(imp_o)
        r = link(objs, exe, pdb)
        log = r.stdout + r.stderr
        open(f'{OUT}/link_r{rnd}.log', 'w').write(log)
        if r.returncode == 0:
            print(f'LINK OK round {rnd}')
            patch_pe(exe)
            break
        und = undefined_from(log)
        new = set(und) - syms
        print(f'round {rnd}: rc={r.returncode} undefined={len(und)} new={len(new)}')
        if not und or not new:
            print('-- no progress possible; first errors:')
            print('\n'.join(l for l in log.splitlines() if 'error' in l)[:20])
            sys.exit(2)
        syms |= set(und)
        r_, v_ = decl_maps()
        n_fn, n_imp = write_stubs(syms, stub_c, imp_c, r_, v_)
        rc = sh([CC, *CFGS, stub_c, '-o', f'{OBJ}/cde_autostubs.o'])
        if rc.returncode:
            print('-- stub compile fail'); print(rc.stderr[:1500]); sys.exit(4)
        rc = sh([CC, *CFGS, imp_c, '-o', f'{OBJ}/cde_impstubs.o'])
        if rc.returncode:
            print('-- imp stub compile fail'); print(rc.stderr[:1500]); sys.exit(4)
        stub_o = f'{OBJ}/cde_autostubs.o'
        imp_o = f'{OBJ}/cde_impstubs.o'
        print(f'  stubs regenerated: fn/data={n_fn} imp={n_imp}')
    else:
        print('-- link did not converge in 8 rounds'); sys.exit(5)
    for f in (exe, pdb):
        print(f, os.path.getsize(f) if os.path.exists(f) else 'MISSING')


def main():
    if not os.path.exists(CC):
        print('-- toolchain missing; run: bash scripts/pe_toolchain_setup.sh')
        sys.exit(10)
    step = sys.argv[1] if len(sys.argv) > 1 else 'all'
    if step == 'clean':
        subprocess.run(['rm', '-rf', OBJ]); return
    if step in ('tus', 'all'):
        n = compile_tus()
        print(f'-- {n} game TUs done')
    if step in ('stubs', 'all'):
        compile_stubs()
    if step in ('link', 'all'):
        do_link()
    print('done.')


if __name__ == '__main__':
    main()
