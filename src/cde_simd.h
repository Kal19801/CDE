/* cde_simd.h - Ghidra SSE 伪指令等价库 (r26 wave)
 *
 * 语义来源: Ghidra 反编译文本的 auVar/伪指令 = XMM 寄存器的字节级渲染。
 * 全部实现按原指令字节效果重建（objdump 取证: 0048a690 等）:
 *   pmovzxbd xmm1, xmm0   → dst 不读; 结果 dwords[i] = src 低 4 字节的第 i 字节
 *   pmulld   xmm1, xmm2   → 双活; r = (int)a * (int)b 逐 dword (32 位环绕)
 *   pshuflw  xmm1, xmm2,i → dst 不读; 低 4 word 按 imm 2bit 组选择, 高 8 字节拷源
 *   pshufhw  xmm1, xmm2,i → dst 不读; 高 4 word 按 imm 2bit 组选择, 低 8 字节拷源
 *   divpd    xmm1, xmm2   → 双活; r = a / b 逐 double
 * Ghidra 调用渲染形态: result = op(旧dst, 真源...) —— 首参为渲染产物，
 * 对 dst 不读的指令直接丢弃（无副作用，等价）；dst 读的指令作真操作数。
 *
 * 伪指令宏经 cde_simd_tmp 池化为 lvalue（cde_zextb 先例）—— 调用结果可取址、
 * 可 memcpy、可整体赋值，与 Ghidra 的"寄存器槽"语义对齐。
 * ZEXT416/816/412/812: Ghidra i686 无 128 位整型，>8 字节 zext 渲染为 blob
 * 复合字面量（高位补零 = C11 6.7.9p10 并集未指名成员零初始化）。
 * 全 sec 面普查: 本四个宏无标量语境用法，重定义不影响既有通过段。
 *
 * ⚠ 命名纪律: 本头在 cde_types_compat.h 之后包含，其 R9 僵尸数据宏毒化
 *   E G M T a b f k n t v x 十二个单字母 —— 本头全部标识符 cde_/au 前缀。
 */
#ifndef CDE_SIMD_H
#define CDE_SIMD_H

#include <string.h>

/* auV_t: auVar 的值语义载体（并集，可整体赋值/按成员分解）。
 * 成员长名零宏命中（实证明开） */
typedef union {
    unsigned char      bytes[16];
    unsigned short     words[8];
    unsigned int       dwords[4];
    unsigned long long qwords[2];
    float              floats[4];
    double             doubles[2];
} auV16_t;

typedef union {
    unsigned char      bytes[12];
    unsigned short     words[6];
    unsigned int       dwords[3];
} auV12_t;

typedef union {
    unsigned char      bytes[8];
    unsigned short     words[4];
    unsigned int       dwords[2];
    unsigned long long qwords[1];
} auV8_t;

/* ---- 伪指令结果池（单线程反编译语义；cde_zextb 同款先例） ---- */
static auV16_t cde_simd_pool[8];
static int cde_simd_pi;
static auV16_t *cde_simd_tmp(auV16_t cde_val) {
    auV16_t *cde_p = &cde_simd_pool[cde_simd_pi++ & 7];
    *cde_p = cde_val;
    return cde_p;
}

/* ---- ZEXT 族 ----
 * ZEXT48 保持 port_prelude 标量宏（纯整数 zext 4→8，语义正确）。
 * 以下四个重定义: port_prelude 的标量版本对 blob 语境语义不足（普查零标量用法）。 */
#undef ZEXT416
#undef ZEXT816
#undef ZEXT412
#undef ZEXT812
#define ZEXT416(cde_x) ((auV16_t){.dwords={(unsigned int)(cde_x),0u,0u,0u}})
#define ZEXT816(cde_x) ((auV16_t){.qwords={(unsigned long long)(cde_x),0ull}})
#define ZEXT412(cde_x) ((auV12_t){.dwords={(unsigned int)(cde_x),0u,0u}})
#define ZEXT812(cde_x) ((auV12_t){.dwords={(unsigned int)(unsigned long long)(cde_x), \
                                  (unsigned int)((unsigned long long)(cde_x) >> 32), 0u}})

/* ---- SSE 伪指令宏: 首参 = Ghidra 渲染的死 dst（原指令不读，丢弃） ---- */
static inline auV16_t au_pmovzxbd_impl(const void *cde_src) {
    auV16_t cde_r;
    const unsigned char *cde_s = (const unsigned char *)cde_src;
    cde_r.dwords[0] = cde_s[0]; cde_r.dwords[1] = cde_s[1];
    cde_r.dwords[2] = cde_s[2]; cde_r.dwords[3] = cde_s[3];
    return cde_r;
}
#define pmovzxbd(cde_old, cde_src) (*cde_simd_tmp(au_pmovzxbd_impl(&(cde_src))))

static inline auV16_t au_pmulld_impl(const void *cde_a, const void *cde_b) {
    auV16_t cde_r;
    const unsigned int *cde_x = (const unsigned int *)cde_a;
    const unsigned int *cde_y = (const unsigned int *)cde_b;
    cde_r.dwords[0] = (unsigned)((int)cde_x[0] * (int)cde_y[0]);
    cde_r.dwords[1] = (unsigned)((int)cde_x[1] * (int)cde_y[1]);
    cde_r.dwords[2] = (unsigned)((int)cde_x[2] * (int)cde_y[2]);
    cde_r.dwords[3] = (unsigned)((int)cde_x[3] * (int)cde_y[3]);
    return cde_r;
}
#define pmulld(cde_a, cde_b) (*cde_simd_tmp(au_pmulld_impl(&(cde_a), &(cde_b))))

static inline auV16_t au_pshuflw_impl(const void *cde_src, unsigned cde_imm) {
    auV16_t cde_r;
    const unsigned short *cde_s = (const unsigned short *)cde_src;
    int cde_i;
    for (cde_i = 0; cde_i < 4; cde_i++)
        cde_r.words[cde_i] = cde_s[(cde_imm >> (cde_i * 2)) & 3];
    cde_r.words[4] = cde_s[4]; cde_r.words[5] = cde_s[5];
    cde_r.words[6] = cde_s[6]; cde_r.words[7] = cde_s[7];
    return cde_r;
}
#define pshuflw(cde_old, cde_src, cde_imm) \
    (*cde_simd_tmp(au_pshuflw_impl(&(cde_src), (unsigned)(cde_imm))))

static inline auV16_t au_pshufhw_impl(const void *cde_src, unsigned cde_imm) {
    auV16_t cde_r;
    const unsigned short *cde_s = (const unsigned short *)cde_src;
    int cde_i;
    cde_r.words[0] = cde_s[0]; cde_r.words[1] = cde_s[1];
    cde_r.words[2] = cde_s[2]; cde_r.words[3] = cde_s[3];
    for (cde_i = 0; cde_i < 4; cde_i++)
        cde_r.words[4 + cde_i] = cde_s[4 + ((cde_imm >> (cde_i * 2)) & 3)];
    return cde_r;
}
#define pshufhw(cde_old, cde_src, cde_imm) \
    (*cde_simd_tmp(au_pshufhw_impl(&(cde_src), (unsigned)(cde_imm))))

static inline auV16_t au_divpd_impl(const void *cde_a, const void *cde_b) {
    auV16_t cde_r;
    const double *cde_x = (const double *)cde_a;
    const double *cde_y = (const double *)cde_b;
    cde_r.doubles[0] = cde_x[0] / cde_y[0];
    cde_r.doubles[1] = cde_x[1] / cde_y[1];
    return cde_r;
}
#define divpd(cde_a, cde_b) (*cde_simd_tmp(au_divpd_impl(&(cde_a), &(cde_b))))

/* ---- blob 按位逻辑: 双活操作数（pand/por/pxor） ----
 * 参数为 auV16_t 值语义（调用点由 fixer 以 *(const auV16_t *)&E 解引用产生）。
 * 结果经池化为 lvalue —— SUB164(au_xor2(A,B),0) 等"结果再取址/再分解"形态可用 */
static inline auV16_t au_and2_impl(auV16_t cde_a, auV16_t cde_b) {
    auV16_t cde_r;
    cde_r.qwords[0] = cde_a.qwords[0] & cde_b.qwords[0];
    cde_r.qwords[1] = cde_a.qwords[1] & cde_b.qwords[1];
    return cde_r;
}
static inline auV16_t au_or2_impl(auV16_t cde_a, auV16_t cde_b) {
    auV16_t cde_r;
    cde_r.qwords[0] = cde_a.qwords[0] | cde_b.qwords[0];
    cde_r.qwords[1] = cde_a.qwords[1] | cde_b.qwords[1];
    return cde_r;
}
static inline auV16_t au_xor2_impl(auV16_t cde_a, auV16_t cde_b) {
    auV16_t cde_r;
    cde_r.qwords[0] = cde_a.qwords[0] ^ cde_b.qwords[0];
    cde_r.qwords[1] = cde_a.qwords[1] ^ cde_b.qwords[1];
    return cde_r;
}
#define au_and2(cde_a, cde_b) (*cde_simd_tmp(au_and2_impl(cde_a, cde_b)))
#define au_or2(cde_a, cde_b)  (*cde_simd_tmp(au_or2_impl(cde_a, cde_b)))
#define au_xor2(cde_a, cde_b) (*cde_simd_tmp(au_xor2_impl(cde_a, cde_b)))

#endif /* CDE_SIMD_H */
