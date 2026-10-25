/* port_prelude.h - common prelude for all converted game sources */
#pragma once

/* fixed VA of the mapped original PE image (data blob) */
#define CDE_IMAGE_BASE 0x400000u

/* ---- 1. system headers first (glibc/sndfile/freetype own their types) ---- */
#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include <stdarg.h>
#include <time.h>
#include <errno.h>

/* linux build keeps our PDB-reconstructed MSVC CRT structs; mingw provides
 * the same-layout names itself (windows.h clash -> let system own them). */
#if !defined(_WIN32)
#define CDE_KEEP_MSVC_CRT 1
#endif

/* GL / GLFW / OpenAL / sndfile / freetype declarations used by converted code */
/* _WIN32 only: keep glcorearb.h from auto-including mingw windows.h -- its
 * DWORD/ULONG_PTR/__m128 collide with the PDB-reconstructed types below. */
#if defined(_WIN32) && !defined(APIENTRY)
#define APIENTRY
#endif
#include "../third_party/GL/glcorearb.h"
#include "../third_party/GL/glext.h"
#include "../third_party/AL/al.h"
#include "../third_party/AL/alc.h"
#include "../third_party/AL/efx.h"
#include <sndfile.h>
#include <ft2build.h>
#include FT_FREETYPE_H

/* GLFW public API (linked from native libglfw); INCLUDE_NONE: never pull
 * platform GL/windows.h -- on mingw i686 that would collide with the PDB
 * type headers below (DWORD/ULONG_PTR/__m128 double definitions). */
#define GLFW_INCLUDE_NONE
#include "../third_party/glfw-3.3.10/include/GLFW/glfw3.h"

/* ---- 2. MSVC calling conventions / declspecs -> neutralize ---- */
#define __cdecl
#if defined(_WIN32) && defined(__i386__)
/* PE comparison build: keep NATIVE __thiscall (this in ECX, callee pops args)
 * to match the original's MSVC method-call shapes in BSim. */
#ifndef __thiscall
#define __thiscall __attribute__((__thiscall__))
#endif
#else
#define __thiscall
#endif
#define __stdcall
#define __fastcall
#define __clrcall
#define __vectorcall
#define __ptr64
#define __w64
#define __unaligned

/* MSVC/Ghidra NAN(x) intrinsic -> isnan */
#undef NAN
#define NAN(x) isnan(x)

/* ---- 3. Ghidra shorthand that collides with glibc (ulong) ---- */
/* glibc sys/types.h typedefs ulong as unsigned long (8B); game needs the
 * MSVC x86-32 width (4B). Macro expands in game code + clean header only. */
#define ulong uint32_t

/* ---- 4. MSVC CRT intrinsic libm wrappers -> libm ---- */
#define libm_sse2_sqrt_precise sqrt
#define libm_sse2_sin_precise  sin
#define libm_sse2_cos_precise  cos
#define libm_sse2_tan_precise  tan
#define libm_sse2_asin_precise asin
#define libm_sse2_acos_precise acos
#define libm_sse2_atan_precise atan
#define libm_sse2_atan2_precise atan2
#define libm_sse2_log_precise  log
#define libm_sse2_log10_precise log10
#define libm_sse2_exp_precise  exp
#define libm_sse2_pow_precise  pow
#define libm_sse2_fmod_precise fmod
#define libm_sse2_floor_precise floor
#define libm_sse2_ceil_precise ceil


/* ---- 4c. Ghidra undefined3 (3-byte; stored in 4 bytes, low-3-byte semantics) ---- */
typedef uint32_t undefined3;


/* ---- zext buffer materialization (Ghidra SSE zero-extend pseudo-ops) ---- */
static unsigned char cde_zext_pool[16][32];
static int cde_zext_i;
static inline void *cde_zextb(unsigned long long cde_v, int cde_n) {
  unsigned char *cde_p = cde_zext_pool[cde_zext_i++ & 15];
  memset(cde_p, 0, 32);
  memcpy(cde_p, &cde_v, 8);
  (void)cde_n;
  return cde_p;
}
#define ZEXT48(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT412(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT416(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT812(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT816(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT820(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT824(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT828(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT1628(v) ((unsigned long long)(uintptr_t)(v))
#define ZEXT1632(v) ((unsigned long long)(uintptr_t)(v))

#define CONCAT412(h, l) _C64(l, h, 32)

/* ---- 4d. Ghidra CONCAT family: CONCATab(hi, lo) = hi:a-byte | lo:b-byte ----
   total = a+b bytes; shift = b*8 (lo occupies low b bytes) */
#define _C32(h, l, sh) ((((uint32_t)(uintptr_t)(h)) << (sh)) | (((uint32_t)(uintptr_t)(l)) & (((1u) << (sh)) - 1u)))
#define _C64(h, l, sh) ((((uint64_t)(uintptr_t)(h)) << (sh)) | (((uint64_t)(uintptr_t)(l)) & ((((uint64_t)1) << (sh)) - 1u)))
#define CONCAT11(h, l) _C32(h, l, 8)        /* 1+1=2 */
#define CONCAT13(h, l) _C32(h, l, 24)       /* 1+3=4 */
#define CONCAT22(h, l) _C32(h, l, 16)       /* 2+2=4 */
#define CONCAT31(h, l) _C32(h, l, 8)        /* 3+1=4 */
#define CONCAT44(h, l) _C64(h, l, 32)       /* 4+4=8 */
#define CONCAT17(h, l) _C64(h, l, 56)       /* 1+7=8 */
#define CONCAT26(h, l) _C64(h, l, 48)       /* 2+6=8 */
#define CONCAT35(h, l) _C64(h, l, 40)       /* 3+5=8 */
#define CONCAT53(h, l) _C64(h, l, 24)       /* 5+3=8 */
#define CONCAT62(h, l) _C64(h, l, 16)       /* 6+2=8 */
#define CONCAT71(h, l) _C64(h, l, 8)        /* 7+1=8 */

/* ---- 4f. Ghidra SUB family: SUBab(a,b) = a-b (widths in name; C conversions apply) ---- */
#define SUB41(a,b) ((a)-(b))
#define SUB42(a,b) ((a)-(b))
#define SUB43(a,b) ((a)-(b))
#define SUB74(a,b) ((a)-(b))
#define SUB81(a,b) ((a)-(b))
#define SUB82(a,b) ((a)-(b))
#define SUB84(a,b) ((a)-(b))
#define SUB124(a,b) ((a)-(b))
#define SUB128(a,b) ((a)-(b))
#define SUB164(a,b) ((a)-(b))
#define SUB168(a,b) ((a)-(b))
#define SUB2012(a,b) ((a)-(b))
#define SUB208(a,b) ((a)-(b))
#define SUB2416(a,b) ((a)-(b))
#define SUB248(a,b) ((a)-(b))
#define SUB4032(a,b) ((a)-(b))
#define SUB408(a,b) ((a)-(b))

/* ---- 4g. CONCAT gaps ---- */
#define CONCAT12(h, l) _C32(h, l, 16)       /* 1+2=3 */
#define CONCAT14(h, l) _C64(h, l, 32)       /* 1+4=5 (trunc 8B) */
#define CONCAT15(h, l) _C64(h, l, 40)       /* 1+5=6 (trunc 8B) */
#define CONCAT16(h, l) _C64(h, l, 48)       /* 1+6=7 (trunc 8B) */
#define CONCAT24(h, l) _C64(h, l, 32)       /* 2+4=6 (trunc 8B) */
#define CONCAT48(h, l) ((uint64_t)(uintptr_t)(l))  /* 4+8=12 (trunc 8B) */

/* ---- 4g2. MSVC member-function-pointer (pmf) construction from a plain function:
   zero the 16-byte blob, store the fn address in slot 0 (non-virtual pmf shape) ---- */
#define CDE_PMF(t, fn) __extension__ ({ t _cde_pmf_tmp; memset(&_cde_pmf_tmp, 0, sizeof(_cde_pmf_tmp)); *(void **)&_cde_pmf_tmp = (void *)(uintptr_t)(fn); _cde_pmf_tmp; })

/* ---- 4g3. MSVC CRT long-double float helpers (Ghidra __CI* names) ----
   args not recovered by the decompiler at no-arg call sites (bring-up task) */
long double __CIfmod();
long double __CIatan2();
long double _CIfmod();
long double _CIatan2();

/* ---- 4h. port runtime shims called from decompiled code ----
   NOTE: port_op_new / port_op_delete / _Init_thread_header|footer have chunk-local
   decompiled definitions (game_028/029) with overload-shaped params; declaring them
   here conflicts with those defs. Only DebugBreak / LogAssert are safe to declare. */
void DebugBreak(void);
void LogAssert(char *param_1,int param_2,char *param_3,char *param_4);

/* ---- 4e. Demangler anonymous hook-func pointer slots (no-prototype form) ---- */
typedef void (*Demangler___anon_funcs___func_void_PreferencesBase_ptr)();
typedef void (*Demangler___anon_funcs___func_void_CameraManager_ptr)();
typedef void (*Demangler___anon_funcs___func_void_Vec2_int__Darray_GlobalLight__ptr_Darray_WorldLight__ptr_double)();
typedef void *(*Demangler___anon_funcs___func_Str_char__Reflectable_ptr_Str_char__ptr)();
typedef void *(*Demangler___anon_funcs___func_Str_char__Reflectable_ptr_void_ptr_ClassMember_ptr_Type_int)();

/* ---- 4f. PE comparison build (mingw i686): ucrt stdio internals ----
 * Ghidra recorded no-prototype / 7-slot call forms for the ucrt printf
 * plumbing. mingw headers own the real 6-slot prototypes, so bind the
 * decompiled call shapes to private K&R impls in cde_win_crt.c instead. */
#if defined(_WIN32)
int cde_scvs(), cde_scvsw(), cde_scvsf(), cde_scvss();
#define __stdio_common_vsprintf  cde_scvs
#define __stdio_common_vswprintf cde_scvsw
#define __stdio_common_vfprintf  cde_scvsf
#define __stdio_common_vsscanf   cde_scvss
#define ___stdio_common_vsprintf cde_scvs
#define ___stdio_common_vswprintf cde_scvsw
#define ___stdio_common_vfprintf cde_scvsf
#define ___stdio_common_vsscanf  cde_scvss
/* __setusermatherr: mingw declares it directly AND as a macro to
 * __mingw_setusermatherr; bind both names to our private no-proto impl. */
#define __setusermatherr cde_setusermatherr
#define __mingw_setusermatherr cde_setusermatherr
#endif

/* ---- 5. game type/data headers (after system + macros) ---- */
#include "cde_types_pdb.h"
#include "cde_types_compat.h"
#include "cde_undecl.h"
#include "cde_l2_resid.h"
#include "cde_dym.h"
#include "cde_data_map.h"
#include "cde_l2_statics.h"
#include "cde_fun_decls_full.h"
#include "cde_fun_decls_gen.h"
#include "cde_data_gen.h"
#include "cde_aliases.h"


/* ---- platform redirections (Windows -> POSIX equivalents) ---- */
/* GL extension loading */
void *port_wglGetProcAddress(const char *name);
#define wglGetProcAddress port_wglGetProcAddress
/* high-res timers */
int port_QueryPerformanceCounter(int64_t *out);
int port_QueryPerformanceFrequency(int64_t *out);
#define QueryPerformanceCounter port_QueryPerformanceCounter
#define QueryPerformanceFrequency port_QueryPerformanceFrequency
/* time */
uint32_t port_timeGetTime(void);
#define timeGetTime port_timeGetTime

/* called at startup by port main before game main */
int port_init_blob(void);
void port_apply_relocs(void);

/* atexit wrapper: accept any function pointer (MSVC dtor thunks) */
int port_atexit(void (*fn)(void));
#define atexit(fn) port_atexit((void (*)(void))(fn))

/* converted game entry (from decompiled _main) */
int CDE_game_main(int argc, char **argv, char **envp);

/* print callback (body lost in decomp pass; addr 0x0068efe0, restore later) */
extern Str_L_char_G_ __cdecl CustomPrint(double param_1, Str_L_char_G_ param_2);

#define DebugBreak_exref ((void *)port_DebugBreak)

void port_DebugBreak(void);

/* ---- 4f. odd-width int types (subset; unified.h has undefined7/uint56_t) ---- */
typedef unsigned long long uint40_t;
typedef unsigned long long uint48_t;
typedef unsigned long long undefined5;
typedef unsigned long long undefined6;
typedef long long int6_t;
typedef long long int7_t;



/* overlapping guard-array end symbol (decompile artifact); real storage
   linked from cde_l2 storage in a later milestone */
extern int _thread_safe_static_guard_0__;

/* ---- 4g. code-side Ghidra function-pointer typedefs (unprototyped compat) ---- */
struct tuple2_L_util__Str_L_char_G__Cvoid____cdeclptr__void__G_;
typedef void * _func___cdecl_void_ptr_Str_L_char_G__Str_L_char_G_(Str_L_char_G_, Str_L_char_G_);
typedef int _func___cdecl_int_void_ptr(void *);
typedef int _func___cdecl_Type_void_ptr_conflict(void *);
typedef int _func___cdecl_Type_void_ptr_conflict1(void *);
typedef Range_L_double_G_ _func___cdecl_Range_L_double_G__void_ptr(void *);
typedef Str_L_char_G_ _func___cdecl_Str_L_char_G__void_ptr_double(void *, double);
typedef bool * _func___cdecl_bool_ptr_void_ptr(void *);
typedef bool _func___cdecl_bool_void_ptr_Str_L_char_G_(void *, Str_L_char_G_);
typedef double * _func___cdecl_double_ptr_void_ptr(void *);
typedef void _func___cdecl_void_Color_Color(Color, Color);
typedef void _func___cdecl_void__RTL_CONDITION_VARIABLE_ptr(RTL_CONDITION_VARIABLE *);
typedef void _func___cdecl_void_void_ptr_Str_L_char_G_(void *, Str_L_char_G_);
typedef void _func___cdecl_void_void_ptr_int(void *, int);
typedef UIWidget * _func___cdecl_UIWidget_ptr_void_ptr_Vec2_L_int_G__Vec2_L_int_G_(void *, Vec2_L_int_G_, Vec2_L_int_G_);
typedef Reflectable ** _func___cdecl_Reflectable_ptr_ptr_void_ptr(void *);
typedef Str_L_char_G_ * _func___cdecl_Str_L_char_G__ptr_void_ptr(void *);
typedef Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_int_G___G___G_ _func___cdecl_Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_int_G___G___G__void_ptr(void *);
typedef void _func___cdecl_void_void_ptr__func___cdecl_void_ptr_Str_L_char_G__Str_L_char_G_(void *, _func___cdecl_void_ptr_Str_L_char_G__Str_L_char_G_);
typedef void _func___cdecl_void_void_ptr_tuple2_L_util__Str_L_char_G__Cvoid____cdeclptr__void__G_(void *, struct tuple2_L_util__Str_L_char_G__Cvoid____cdeclptr__void__G_);

/* ---- 4h. enum value placeholders v2 (usage-driven, collision-filtered) ----
/* values are sequential per group: NOT real binary values (PDB has no enum
   value metadata); correctness risk noted in worklog */


#include "cde_stackdefs.h"
#include "cde_types_r23.h"

/* ---- 4z. Ghidra vector/sret scratch helpers (session-g) ---- */
static unsigned char cde_z16_pool[16][16];
static int cde_z16_idx;
static inline void *cde_z16lit(unsigned long long cde_val) {
  unsigned char *cde_p = cde_z16_pool[cde_z16_idx++ & 15];
  memset(cde_p, 0, 16);
  *(unsigned long long *)(void *)cde_p = cde_val;
  return cde_p;
}
static unsigned char cde_shl16_pool[8][16];
static int cde_shl16_i;
static inline void *cde_shl16(const void *cde_src, int cde_s) {
  unsigned char *cde_d = cde_shl16_pool[cde_shl16_i++ & 7];
  const unsigned char *cde_p = (const unsigned char *)cde_src;
  int cde_byte = cde_s >> 3, cde_bit = cde_s & 7, cde_i;
  memset(cde_d, 0, 16);
  for (cde_i = 15; cde_i >= 0; cde_i--) {
    int cde_j = cde_i - cde_byte;
    unsigned cde_w = 0;
    if (cde_j >= 0 && cde_j < 16) cde_w = (unsigned)cde_p[cde_j] << cde_bit;
    if (cde_bit && cde_j - 1 >= 0 && cde_j - 1 < 16) cde_w |= cde_p[cde_j - 1] >> (8 - cde_bit);
    cde_d[cde_i] = (unsigned char)cde_w;
  }
  return cde_d;
}
static inline void *cde_rsp_slot(void) {
  static unsigned char cde_bufs[8][256];
  static int cde_i;
  return cde_bufs[cde_i++ & 7];
}

static unsigned char cde_tmp64_pool[8][16];
static int cde_tmp64_i;
static inline void *cde_tmp64(unsigned long long cde_v) {
  unsigned char *p = cde_tmp64_pool[cde_tmp64_i++ & 7];
  memset(p, 0, 16);
  *(unsigned long long *)(void *)p = cde_v;
  return p;
}

static inline void *cde_shr16(const void *src, int s) {
  unsigned char *d = cde_shl16_pool[cde_shl16_i++ & 7];
  const unsigned char *p = (const unsigned char *)src;
  int byte = s >> 3, bit = s & 7, i;
  memset(d, 0, 16);
  for (i = 0; i < 16; i++) {
    int j = i + byte;
    unsigned cde_v = 0;
    if (j >= 0 && j < 16) cde_v = (unsigned)p[j] >> bit;
    if (bit && j + 1 >= 0 && j + 1 < 16) cde_v |= (unsigned)p[j + 1] << (8 - bit);
    d[i] = (unsigned char)cde_v;
  }
  return d;
}

/* p68: Ghidra pointer->double pun helper (was implicitly declared since p38).
   Value-conversion semantics: (double)(uintptr_t)ptr — matches the implicit-int
   behavior all existing call sites relied on, now with a real prototype. */
static inline double cde_ptr_as_double(const void *cde_p) {
  return (double)(uintptr_t)cde_p;
}
