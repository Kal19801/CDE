/* cde_win_crt.c - PE comparison build (mingw i686) CRT shim layer.
 *
 * Compiled ONLY for the _WIN32 PE build (see pe_build.py); the official Linux
 * syntax check never touches this file. It provides:
 *   - K&R impls for the ucrt printf plumbing the decompiled code calls with
 *     Ghidra's no-prototype / 7-slot shapes (aliased via port_prelude.h 4f),
 *     forwarding to mingw's real 6-slot ucrt functions (best-effort arg map).
 *   - no-op __setusermatherr (mingw macro undef'd in prelude, name is ours).
 *   - port_op_new / port_op_delete / _Init_thread_header / _Init_thread_footer
 *     / _vector_destructor_iterator_ (MSVC static-init + eh vector helpers),
 *     which the decompiled bodies reference without prototypes.
 */
#include "port_prelude.h"

/* undo the private aliases so the REAL mingw ucrt functions are callable here */
#undef __stdio_common_vsprintf
#undef __stdio_common_vswprintf
#undef __stdio_common_vfprintf
#undef __stdio_common_vsscanf
#undef ___stdio_common_vsprintf
#undef ___stdio_common_vswprintf
#undef ___stdio_common_vfprintf
#undef ___stdio_common_vsscanf
#undef __setusermatherr
#undef __mingw_setusermatherr

/* ---- ucrt printf plumbing (see port_prelude.h section 4f) ----
 * Ghidra x86-32 7-slot form observed in game_024:
 *   (optLo, optHi, str, len, format, locale, valist)
 * real ucrt: (options:u64, str, len, format, locale, valist) */
int cde_scvs(unsigned long cde_o0, unsigned long cde_o1, char *cde_str,
             size_t cde_len, const char *cde_fmt, void *cde_loc,
             void *cde_va) {
  return __stdio_common_vsprintf(((unsigned long long)cde_o1 << 32) | cde_o0,
                                 cde_str, cde_len, cde_fmt, (_locale_t)cde_loc,
                                 (va_list)cde_va);
}
int cde_scvsw(unsigned long cde_o0, unsigned long cde_o1, wchar_t *cde_str,
              size_t cde_len, const wchar_t *cde_fmt, void *cde_loc,
              void *cde_va) {
  return __stdio_common_vswprintf(((unsigned long long)cde_o1 << 32) | cde_o0,
                                  cde_str, cde_len, cde_fmt,
                                  (_locale_t)cde_loc, (va_list)cde_va);
}
int cde_scvsf(unsigned long cde_o0, unsigned long cde_o1, FILE *cde_file,
              const char *cde_fmt, void *cde_loc, void *cde_loc2,
              void *cde_va) {
  (void)cde_loc2;
  return __stdio_common_vfprintf(((unsigned long long)cde_o1 << 32) | cde_o0,
                                 cde_file, cde_fmt, (_locale_t)cde_loc,
                                 (va_list)cde_va);
}
int cde_scvss(unsigned long cde_o0, unsigned long cde_o1, const char *cde_in,
              size_t cde_len, const char *cde_fmt, void *cde_loc,
              void *cde_va) {
  return __stdio_common_vsscanf(((unsigned long long)cde_o1 << 32) | cde_o0,
                                cde_in, cde_len, cde_fmt, (_locale_t)cde_loc,
                                (va_list)cde_va);
}

/* ---- __setusermatherr: decompiled reference was a no-proto call ---- */
long long cde_setusermatherr(void *cde_h) { (void)cde_h; return 0; }

/* ---- raw ucrt entry points: NOW REAL IMPORTS via api-ms-win-crt-stdio
 * (import lib built from the original exe's import table). The previous
 * local forwarders were removed so the import thunks bind exactly like
 * the original's /MD ucrt wiring. */

/* ---- MSVC magic-static helpers (no prototypes at call sites) ---- */
static volatile long cde_init_epoch;
void *_Init_thread_header(int *cde_once) {
  /* crude single-threaded gate: good enough for a comparison build */
  if (*cde_once == 0) { *cde_once = 1; return (void *)1; }
  return 0;
}
void _Init_thread_footer(int *cde_once) { (void)cde_once; cde_init_epoch++; }

/* ---- MSVC _vector_destructor_iterator_ (eh vector cleanup) ----
 * real ucrt walks the cookie'd array calling each dtor; comparison build
 * only needs the symbol + plausible walk. */
typedef void (*thiscall_dtor_fn)(void *);
void _vector_destructor_iterator_(void *cde_ptr, unsigned cde_size,
                                  unsigned cde_count, void *cde_dtor) {
  char *p = (char *)cde_ptr + (size_t)cde_size * cde_count;
  while (cde_count--) { p -= cde_size; ((void (*)(void *))cde_dtor)(p); }
}

/* ---- port-shell helpers the game references ---- */
void *_port_wglGetProcAddress(const char *cde_name) { (void)cde_name; return 0; }
static char cde_intern_pool[1 << 16];
static unsigned cde_intern_i;
uintptr_t port_intern_string(const char *cde_s, unsigned cde_n) {
  uintptr_t cde_d = (uintptr_t)(cde_intern_pool + cde_intern_i);
  if (cde_n >= sizeof cde_intern_pool - 1) cde_n = sizeof cde_intern_pool - 1;
  memcpy((void *)cde_d, cde_s, cde_n);
  ((char *)cde_d)[cde_n] = 0;
  cde_intern_i += cde_n + 1;
  return cde_d;
}
void DebugBreak(void) { }
void *__security_check_cookie(void *cde_cookie) { (void)cde_cookie; return 0; }
void __dynamic_atexit_destructor_for___Fac_tidy_reg__(void) { }
