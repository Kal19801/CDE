// pilot_sweep_sweep06.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
#include "port_prelude.h"
typedef union {
  struct {
    undefined4 _0_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int NodeMouseOver_NodeMouseOver(); /* K&R stub; ret by call site */
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define ___xmm_0000000000000000bff0000000000000 (*(undefined1 (*)[16])(0x0000000000000000bff0000000000000u))
#define _UNK_0091ea14 (*(undefined4 *)(0x0091ea14u))
#define _UNK_0091ea18 (*(undefined4 *)(0x0091ea18u))
#define _UNK_0091ea1c (*(undefined4 *)(0x0091ea1cu))
#define _DAT_00960ce8 (*(undefined1 *)(0x00960ce8u))
#define _DAT_00960d88 (*(undefined1 *)(0x00960d88u))
#define _DAT_00960d98 (*(undefined1 *)(0x00960d98u))
#define _DAT_00961098 (*(undefined1 *)(0x00961098u))
#define _DAT_009610a8 (*(undefined1 *)(0x009610a8u))
#define _DAT_00961310 (*(undefined1 *)(0x00961310u))
#define _DAT_00961320 (*(undefined1 *)(0x00961320u))
#define _DAT_00961938 (*(undefined1 *)(0x00961938u))
#define _DAT_00961948 (*(undefined1 *)(0x00961948u))
#define _DAT_00962a10 (*(undefined1 *)(0x00962a10u))
#define _DAT_00962a20 (*(undefined1 *)(0x00962a20u))
#define _DAT_00962b10 (*(undefined1 *)(0x00962b10u))
#define _DAT_00962b20 (*(undefined1 *)(0x00962b20u))
#define _DAT_00963178 (*(undefined1 *)(0x00963178u))
#define _DAT_00963188 (*(undefined1 *)(0x00963188u))
#define _DAT_00963530 (*(undefined1 *)(0x00963530u))
#define _DAT_00963540 (*(undefined1 *)(0x00963540u))
#define _DAT_00963778 (*(undefined1 *)(0x00963778u))
#define _DAT_00963788 (*(undefined1 *)(0x00963788u))
#define _DAT_00963a90 (*(undefined1 *)(0x00963a90u))
#define _DAT_00963aa0 (*(undefined1 *)(0x00963aa0u))
#define _DAT_00963cc8 (*(undefined1 *)(0x00963cc8u))
#define _DAT_00963cd8 (*(undefined1 *)(0x00963cd8u))
#define _DAT_00964078 (*(undefined1 *)(0x00964078u))
#define _DAT_00964088 (*(undefined1 *)(0x00964088u))
#define _DAT_00964348 (*(undefined1 *)(0x00964348u))
#define _DAT_00964358 (*(undefined1 *)(0x00964358u))
#define _DAT_009645a0 (*(undefined1 *)(0x009645a0u))
#define _DAT_009645b0 (*(undefined1 *)(0x009645b0u))
#define _DAT_00964718 (*(undefined1 *)(0x00964718u))
#define _DAT_00964728 (*(undefined1 *)(0x00964728u))
#define _DAT_00964b90 (*(undefined1 *)(0x00964b90u))
#define _DAT_00964ba0 (*(undefined1 *)(0x00964ba0u))
#define _DAT_00964e10 (*(undefined1 *)(0x00964e10u))
#define _DAT_00964e20 (*(undefined1 *)(0x00964e20u))
#define _DAT_009651f8 (*(undefined1 *)(0x009651f8u))
#define _DAT_00965208 (*(undefined1 *)(0x00965208u))
#define _DAT_00965440 (*(undefined1 *)(0x00965440u))
#define _DAT_00965450 (*(undefined1 *)(0x00965450u))
#define _DAT_00965c68 (*(undefined1 *)(0x00965c68u))
#define _DAT_00965c78 (*(undefined1 *)(0x00965c78u))
#define _DAT_00966bb8 (*(undefined1 *)(0x00966bb8u))
#define _DAT_00966bc8 (*(undefined1 *)(0x00966bc8u))
#define _DAT_00966ee0 (*(undefined1 *)(0x00966ee0u))
#define _DAT_00966ef0 (*(undefined1 *)(0x00966ef0u))
#define _DAT_00967a28 (*(undefined1 *)(0x00967a28u))
#define _DAT_00967a38 (*(undefined1 *)(0x00967a38u))
#define _DAT_00967d30 (*(undefined1 *)(0x00967d30u))
#define _DAT_00967d40 (*(undefined1 *)(0x00967d40u))
#define _DAT_009682a8 (*(undefined1 *)(0x009682a8u))
#define _DAT_009682b8 (*(undefined1 *)(0x009682b8u))
#define _DAT_009689d0 (*(undefined1 *)(0x009689d0u))
#define _DAT_009689e0 (*(undefined1 *)(0x009689e0u))
#define _DAT_00969250 (*(undefined1 *)(0x00969250u))
#define _DAT_00969260 (*(undefined1 *)(0x00969260u))
#define _DAT_00969ea8 (*(undefined1 *)(0x00969ea8u))
#define _DAT_00969eb8 (*(undefined1 *)(0x00969eb8u))
#define _DAT_0096a170 (*(undefined1 *)(0x0096a170u))
#define _DAT_0096a180 (*(undefined1 *)(0x0096a180u))
#define _DAT_0096a730 (*(undefined1 *)(0x0096a730u))
#define _DAT_0096a740 (*(undefined1 *)(0x0096a740u))
#define _DAT_0096ae38 (*(undefined1 *)(0x0096ae38u))
#define _DAT_0096ae48 (*(undefined1 *)(0x0096ae48u))
#define _DAT_0096b4c8 (*(undefined1 *)(0x0096b4c8u))
#define _DAT_0096b4d8 (*(undefined1 *)(0x0096b4d8u))
#define _DAT_0096b740 (*(undefined1 *)(0x0096b740u))
#define _DAT_0096b750 (*(undefined1 *)(0x0096b750u))
#define _DAT_0096b9e0 (*(undefined1 *)(0x0096b9e0u))
#define _DAT_0096b9f0 (*(undefined1 *)(0x0096b9f0u))
#define _DAT_0096bce8 (*(undefined1 *)(0x0096bce8u))
#define _DAT_0096bcf8 (*(undefined1 *)(0x0096bcf8u))
#define _DAT_0096c658 (*(undefined1 *)(0x0096c658u))
#define _DAT_0096c668 (*(undefined1 *)(0x0096c668u))
#define _DAT_0096c8d0 (*(undefined1 *)(0x0096c8d0u))
#define _DAT_0096c8e0 (*(undefined1 *)(0x0096c8e0u))
#define _DAT_0096d180 (*(undefined1 *)(0x0096d180u))
#define _DAT_0096d190 (*(undefined1 *)(0x0096d190u))
#define _DAT_0096dc48 (*(undefined1 *)(0x0096dc48u))
#define _DAT_0096dc58 (*(undefined1 *)(0x0096dc58u))
#define _DAT_0096df08 (*(undefined1 *)(0x0096df08u))
#define _DAT_0096df18 (*(undefined1 *)(0x0096df18u))
#define _DAT_0096e770 (*(undefined1 *)(0x0096e770u))
#define _DAT_0096e780 (*(undefined1 *)(0x0096e780u))
#define _DAT_0096eef8 (*(undefined1 *)(0x0096eef8u))
#define _DAT_0096ef08 (*(undefined1 *)(0x0096ef08u))
#define _DAT_0096f720 (*(undefined1 *)(0x0096f720u))
#define _DAT_0096f730 (*(undefined1 *)(0x0096f730u))
#define _DAT_0096fdd0 (*(undefined1 *)(0x0096fdd0u))
#define _DAT_0096fde0 (*(undefined1 *)(0x0096fde0u))
#define _DAT_00970658 (*(undefined1 *)(0x00970658u))
#define _DAT_00970668 (*(undefined1 *)(0x00970668u))
#define _DAT_00970918 (*(undefined1 *)(0x00970918u))
#define _DAT_00970928 (*(undefined1 *)(0x00970928u))
#define _DAT_009711b0 (*(undefined1 *)(0x009711b0u))
#define _DAT_009711c0 (*(undefined1 *)(0x009711c0u))
#define _DAT_009715b0 (*(undefined1 *)(0x009715b0u))
#define _DAT_009715c0 (*(undefined1 *)(0x009715c0u))
#define _DAT_00971d10 (*(undefined1 *)(0x00971d10u))
#define _DAT_00971d20 (*(undefined1 *)(0x00971d20u))
#define _DAT_00972440 (*(undefined1 *)(0x00972440u))
#define _DAT_00972450 (*(undefined1 *)(0x00972450u))
#define _DAT_00972a48 (*(undefined1 *)(0x00972a48u))
#define _DAT_00972a58 (*(undefined1 *)(0x00972a58u))
#define _DAT_00972fb8 (*(undefined1 *)(0x00972fb8u))
#define _DAT_00972fc8 (*(undefined1 *)(0x00972fc8u))
#define _DAT_00973b48 (*(undefined1 *)(0x00973b48u))
#define _DAT_00973b58 (*(undefined1 *)(0x00973b58u))
#define _DAT_009742e0 (*(undefined1 *)(0x009742e0u))
#define _DAT_009742f0 (*(undefined1 *)(0x009742f0u))
#define _DAT_00974a80 (*(undefined1 *)(0x00974a80u))
#define _DAT_00974a90 (*(undefined1 *)(0x00974a90u))
#define _DAT_00975470 (*(undefined1 *)(0x00975470u))
#define _DAT_00975480 (*(undefined1 *)(0x00975480u))
#define _DAT_00976058 (*(undefined1 *)(0x00976058u))
#define _DAT_00976068 (*(undefined1 *)(0x00976068u))
#define _DAT_00976398 (*(undefined1 *)(0x00976398u))
#define _DAT_009763a8 (*(undefined1 *)(0x009763a8u))
#define _DAT_009773f0 (*(undefined1 *)(0x009773f0u))
#define _DAT_00977400 (*(undefined1 *)(0x00977400u))
#define _DAT_00977d30 (*(undefined1 *)(0x00977d30u))
#define _DAT_00977d40 (*(undefined1 *)(0x00977d40u))
#define _DAT_00978358 (*(undefined1 *)(0x00978358u))
#define _DAT_00978368 (*(undefined1 *)(0x00978368u))
#define _DAT_00978610 (*(undefined1 *)(0x00978610u))
#define _DAT_00978620 (*(undefined1 *)(0x00978620u))
#define _DAT_00978db0 (*(undefined1 *)(0x00978db0u))
#define _DAT_00979398 (*(undefined1 *)(0x00979398u))
#define _DAT_009793a8 (*(undefined1 *)(0x009793a8u))
#define _DAT_00979438 (*(undefined1 *)(0x00979438u))
#define _DAT_00979448 (*(undefined1 *)(0x00979448u))
#define _DAT_00979e30 (*(undefined1 *)(0x00979e30u))
#define _DAT_00979e40 (*(undefined1 *)(0x00979e40u))
#define _DAT_00979ee8 (*(undefined1 *)(0x00979ee8u))
#define _DAT_00979ef8 (*(undefined1 *)(0x00979ef8u))
#define _DAT_00979f28 (*(undefined1 *)(0x00979f28u))
#define _DAT_00979f38 (*(undefined1 *)(0x00979f38u))
#define _DAT_00979fc0 (*(undefined1 *)(0x00979fc0u))
#define _DAT_00979fd0 (*(undefined1 *)(0x00979fd0u))
#define _DAT_0097a2c8 (*(undefined1 *)(0x0097a2c8u))
#define _DAT_0097a2d8 (*(undefined1 *)(0x0097a2d8u))
#define _DAT_0097a650 (*(undefined1 *)(0x0097a650u))
#define _DAT_0097a660 (*(undefined1 *)(0x0097a660u))
#define _DAT_0097a750 (*(undefined1 *)(0x0097a750u))
#define _DAT_0097a760 (*(undefined1 *)(0x0097a760u))
#define _DAT_0097a848 (*(undefined1 *)(0x0097a848u))
#define _DAT_0097a858 (*(undefined1 *)(0x0097a858u))
#define _DAT_0097a870 (*(undefined1 *)(0x0097a870u))
#define _DAT_0097a880 (*(undefined1 *)(0x0097a880u))
#define _DAT_0097ab28 (*(undefined1 *)(0x0097ab28u))
#define _DAT_0097ab38 (*(undefined1 *)(0x0097ab38u))
#define _DAT_0097ae40 (*(undefined1 *)(0x0097ae40u))
#define _DAT_0097ae50 (*(undefined1 *)(0x0097ae50u))
#define _DAT_0097b138 (*(undefined1 *)(0x0097b138u))
#define _DAT_0097b148 (*(undefined1 *)(0x0097b148u))
#define _DAT_0097b430 (*(undefined1 *)(0x0097b430u))
#define _DAT_0097b440 (*(undefined1 *)(0x0097b440u))
#define _DAT_0097bec8 (*(undefined1 *)(0x0097bec8u))
#define _DAT_0097bed8 (*(undefined1 *)(0x0097bed8u))
#define _DAT_0097ce40 (*(undefined1 *)(0x0097ce40u))
#define _DAT_0097ce50 (*(undefined1 *)(0x0097ce50u))
#define _DAT_0097d768 (*(undefined1 *)(0x0097d768u))
#define _DAT_0097d778 (*(undefined1 *)(0x0097d778u))
#define _DAT_0097da68 (*(undefined1 *)(0x0097da68u))
#define _DAT_0097da78 (*(undefined1 *)(0x0097da78u))
#define _DAT_0097fad8 (*(undefined1 *)(0x0097fad8u))
#define _DAT_0097fae8 (*(undefined1 *)(0x0097fae8u))
#define _DAT_0097fdf8 (*(undefined1 *)(0x0097fdf8u))
#define _DAT_0097fe08 (*(undefined1 *)(0x0097fe08u))
#define _DAT_009800e8 (*(undefined1 *)(0x009800e8u))
#define _DAT_009800f8 (*(undefined1 *)(0x009800f8u))
#define _DAT_00980328 (*(undefined1 *)(0x00980328u))
#define _DAT_00980338 (*(undefined1 *)(0x00980338u))
#define _DAT_00980dc8 (*(undefined1 *)(0x00980dc8u))
#define _DAT_00980dd8 (*(undefined1 *)(0x00980dd8u))
#define _DAT_009810e0 (*(undefined1 *)(0x009810e0u))
#define _DAT_009810f0 (*(undefined1 *)(0x009810f0u))
#define _DAT_00981398 (*(undefined1 *)(0x00981398u))
#define _DAT_009813a8 (*(undefined1 *)(0x009813a8u))
#define _DAT_00981660 (*(undefined1 *)(0x00981660u))
#define _DAT_00981670 (*(undefined1 *)(0x00981670u))
#define _DAT_009818c8 (*(undefined1 *)(0x009818c8u))
#define _DAT_009818d8 (*(undefined1 *)(0x009818d8u))
#define _DAT_00982438 (*(undefined1 *)(0x00982438u))
#define _DAT_00982448 (*(undefined1 *)(0x00982448u))
#define _DAT_00982730 (*(undefined1 *)(0x00982730u))
#define _DAT_00982740 (*(undefined1 *)(0x00982740u))
#define _DAT_00982a20 (*(undefined1 *)(0x00982a20u))
#define _DAT_00982a30 (*(undefined1 *)(0x00982a30u))
#define _DAT_00982c68 (*(undefined1 *)(0x00982c68u))
#define _DAT_00982c78 (*(undefined1 *)(0x00982c78u))
#define _DAT_00982ec8 (*(undefined1 *)(0x00982ec8u))
#define _DAT_00982ed8 (*(undefined1 *)(0x00982ed8u))
#define _DAT_00983140 (*(undefined1 *)(0x00983140u))
#define _DAT_00983150 (*(undefined1 *)(0x00983150u))
#define _DAT_00983408 (*(undefined1 *)(0x00983408u))
#define _DAT_00983418 (*(undefined1 *)(0x00983418u))
#define _DAT_00983680 (*(undefined1 *)(0x00983680u))
#define _DAT_00983690 (*(undefined1 *)(0x00983690u))
#define _DAT_009838e8 (*(undefined1 *)(0x009838e8u))
#define _DAT_009838f8 (*(undefined1 *)(0x009838f8u))
#define _DAT_00983b60 (*(undefined1 *)(0x00983b60u))
#define _DAT_00983b70 (*(undefined1 *)(0x00983b70u))
#define _DAT_00983de0 (*(undefined1 *)(0x00983de0u))
#define _DAT_00983df0 (*(undefined1 *)(0x00983df0u))
#define _DAT_009840e8 (*(undefined1 *)(0x009840e8u))
#define _DAT_009840f8 (*(undefined1 *)(0x009840f8u))
#define _DAT_00984350 (*(undefined1 *)(0x00984350u))
#define _DAT_00984360 (*(undefined1 *)(0x00984360u))
#define _DAT_00984510 (*(undefined1 *)(0x00984510u))
#define _DAT_00984520 (*(undefined1 *)(0x00984520u))
#define _DAT_00984778 (*(undefined1 *)(0x00984778u))
#define _DAT_00984788 (*(undefined1 *)(0x00984788u))
#define _DAT_009849b8 (*(undefined1 *)(0x009849b8u))
#define _DAT_009849c8 (*(undefined1 *)(0x009849c8u))
#define _DAT_00984c78 (*(undefined1 *)(0x00984c78u))
#define _DAT_00984c88 (*(undefined1 *)(0x00984c88u))
#define _DAT_00984f38 (*(undefined1 *)(0x00984f38u))
#define _DAT_00984f48 (*(undefined1 *)(0x00984f48u))
#define _DAT_00985200 (*(undefined1 *)(0x00985200u))
#define _DAT_00985210 (*(undefined1 *)(0x00985210u))
#define _DAT_009854f8 (*(undefined1 *)(0x009854f8u))
#define _DAT_00985508 (*(undefined1 *)(0x00985508u))
#define _DAT_009857d0 (*(undefined1 *)(0x009857d0u))
#define _DAT_009857e0 (*(undefined1 *)(0x009857e0u))
#define _DAT_00985ac0 (*(undefined1 *)(0x00985ac0u))
#define _DAT_00985ad0 (*(undefined1 *)(0x00985ad0u))
#define _DAT_00985d80 (*(undefined1 *)(0x00985d80u))
#define _DAT_00985d90 (*(undefined1 *)(0x00985d90u))
#define _DAT_00986058 (*(undefined1 *)(0x00986058u))
#define _DAT_00986068 (*(undefined1 *)(0x00986068u))
#define _DAT_00986388 (*(undefined1 *)(0x00986388u))
#define _DAT_00986398 (*(undefined1 *)(0x00986398u))
#define _DAT_00987220 (*(undefined1 *)(0x00987220u))
#define _DAT_00987230 (*(undefined1 *)(0x00987230u))
#define _DAT_00987548 (*(undefined1 *)(0x00987548u))
#define _DAT_00987558 (*(undefined1 *)(0x00987558u))
#define _DAT_00987868 (*(undefined1 *)(0x00987868u))
#define _DAT_00987878 (*(undefined1 *)(0x00987878u))
#define _DAT_00987b58 (*(undefined1 *)(0x00987b58u))
#define _DAT_00987b68 (*(undefined1 *)(0x00987b68u))
#define _DAT_00987e48 (*(undefined1 *)(0x00987e48u))
#define _DAT_00987e58 (*(undefined1 *)(0x00987e58u))
#define _DAT_00988158 (*(undefined1 *)(0x00988158u))
#define _DAT_00988168 (*(undefined1 *)(0x00988168u))
#define _DAT_00988420 (*(undefined1 *)(0x00988420u))
#define _DAT_00988430 (*(undefined1 *)(0x00988430u))
#define _DAT_00988730 (*(undefined1 *)(0x00988730u))
#define _DAT_00988740 (*(undefined1 *)(0x00988740u))
#define _DAT_00988a60 (*(undefined1 *)(0x00988a60u))
#define _DAT_00988a70 (*(undefined1 *)(0x00988a70u))
#define _DAT_00988cd0 (*(undefined1 *)(0x00988cd0u))
#define _DAT_00989550 (*(undefined1 *)(0x00989550u))
#define _DAT_00989560 (*(undefined1 *)(0x00989560u))
#define _DAT_00989580 (*(undefined1 *)(0x00989580u))
#define _DAT_00989590 (*(undefined1 *)(0x00989590u))
#define _DAT_009895a0 (*(undefined1 *)(0x009895a0u))
#define _DAT_009895b8 (*(undefined1 *)(0x009895b8u))
#define _DAT_009895c8 (*(undefined1 *)(0x009895c8u))
#define _DAT_00989648 (*(undefined1 *)(0x00989648u))
#define _DAT_00989658 (*(undefined1 *)(0x00989658u))
#define _DAT_00989760 (*(undefined1 *)(0x00989760u))
#define _DAT_00989770 (*(undefined1 *)(0x00989770u))
#define _DAT_009897d8 (*(undefined1 *)(0x009897d8u))
#define _DAT_009897e8 (*(undefined1 *)(0x009897e8u))
#define _DAT_00989878 (*(undefined1 *)(0x00989878u))
#define _DAT_00989888 (*(undefined1 *)(0x00989888u))
#define _DAT_0098c998 (*(undefined1 *)(0x0098c998u))
#define _DAT_0098c9a8 (*(undefined1 *)(0x0098c9a8u))
#define _DAT_0098ca30 (*(undefined1 *)(0x0098ca30u))
#define _DAT_0098ca40 (*(undefined1 *)(0x0098ca40u))
#define _DAT_0098cae0 (*(undefined1 *)(0x0098cae0u))
#define _DAT_0098caf0 (*(undefined1 *)(0x0098caf0u))
#define _DAT_0098cc20 (*(undefined1 *)(0x0098cc20u))
#define _DAT_0098cc30 (*(undefined1 *)(0x0098cc30u))
#define _DAT_0098cca8 (*(undefined1 *)(0x0098cca8u))
#define _DAT_0098ccb8 (*(undefined1 *)(0x0098ccb8u))
#define _DAT_0098cd60 (*(undefined1 *)(0x0098cd60u))
#define _DAT_0098cd70 (*(undefined1 *)(0x0098cd70u))
#define _DAT_0098d038 (*(undefined1 *)(0x0098d038u))
#define _DAT_0098d048 (*(undefined1 *)(0x0098d048u))
#define _DAT_0098d0b0 (*(undefined1 *)(0x0098d0b0u))
#define _DAT_0098d0d8 (*(undefined1 *)(0x0098d0d8u))
#define _DAT_0098d1b0 (*(undefined1 *)(0x0098d1b0u))
#define _DAT_0098d1c0 (*(undefined1 *)(0x0098d1c0u))
#define _DAT_0098d248 (*(undefined1 *)(0x0098d248u))
#define _DAT_0098d258 (*(undefined1 *)(0x0098d258u))
#define _DAT_0098d2f0 (*(undefined1 *)(0x0098d2f0u))
#define _DAT_0098d300 (*(undefined1 *)(0x0098d300u))
#define _DAT_0098d3c8 (*(undefined1 *)(0x0098d3c8u))
#define _DAT_00992200 (*(undefined1 *)(0x00992200u))
#define _DAT_00992210 (*(undefined1 *)(0x00992210u))
#define _DAT_00992280 (*(undefined1 *)(0x00992280u))
#define _DAT_00992290 (*(undefined1 *)(0x00992290u))
#define _DAT_00992318 (*(undefined1 *)(0x00992318u))
#define _DAT_00992328 (*(undefined1 *)(0x00992328u))
#define _DAT_009923b0 (*(undefined1 *)(0x009923b0u))
#define _DAT_009923c0 (*(undefined1 *)(0x009923c0u))
#define _DAT_00992428 (*(undefined1 *)(0x00992428u))
#define _DAT_00992440 (*(undefined1 *)(0x00992440u))
#define _DAT_00992470 (*(undefined1 *)(0x00992470u))
#define _DAT_00992480 (*(undefined1 *)(0x00992480u))
#define _DAT_009924b0 (*(undefined1 *)(0x009924b0u))
#define _DAT_009924c0 (*(undefined1 *)(0x009924c0u))
#define _DAT_00992518 (*(undefined1 *)(0x00992518u))
#define _DAT_00992528 (*(undefined1 *)(0x00992528u))
#define _DAT_00992578 (*(undefined1 *)(0x00992578u))
#define _DAT_00992588 (*(undefined1 *)(0x00992588u))
#define _DAT_009925f8 (*(undefined1 *)(0x009925f8u))
#define _DAT_00992608 (*(undefined1 *)(0x00992608u))
#define _DAT_009929d8 (*(undefined1 *)(0x009929d8u))
#define _DAT_009929e8 (*(undefined1 *)(0x009929e8u))
#define _DAT_00992a58 (*(undefined1 *)(0x00992a58u))
#define _DAT_00992a68 (*(undefined1 *)(0x00992a68u))
#define _DAT_00992ad8 (*(undefined1 *)(0x00992ad8u))
#define _DAT_00992ae8 (*(undefined1 *)(0x00992ae8u))
#define _DAT_00992b70 (*(undefined1 *)(0x00992b70u))
#define _DAT_00992b80 (*(undefined1 *)(0x00992b80u))
#define _DAT_00992be8 (*(undefined1 *)(0x00992be8u))
#define _DAT_00992bf8 (*(undefined1 *)(0x00992bf8u))
#define _DAT_00992c48 (*(undefined1 *)(0x00992c48u))
#define _DAT_00992c58 (*(undefined1 *)(0x00992c58u))
#define _DAT_00992c88 (*(undefined1 *)(0x00992c88u))
#define _DAT_00992c98 (*(undefined1 *)(0x00992c98u))
#define _DAT_00992d28 (*(undefined1 *)(0x00992d28u))
#define _DAT_00992d38 (*(undefined1 *)(0x00992d38u))
#define _DAT_00992dc0 (*(undefined1 *)(0x00992dc0u))
#define _DAT_00992dd0 (*(undefined1 *)(0x00992dd0u))
#define _DAT_00992e58 (*(undefined1 *)(0x00992e58u))
#define _DAT_00992e68 (*(undefined1 *)(0x00992e68u))
#define _DAT_00992ed0 (*(undefined1 *)(0x00992ed0u))
#define _DAT_00992ee0 (*(undefined1 *)(0x00992ee0u))
#define _DAT_00992f50 (*(undefined1 *)(0x00992f50u))
#define _DAT_00992f60 (*(undefined1 *)(0x00992f60u))
#define _DAT_00992fc8 (*(undefined1 *)(0x00992fc8u))
#define _DAT_00992fd8 (*(undefined1 *)(0x00992fd8u))
#define _DAT_00993028 (*(undefined1 *)(0x00993028u))
#define _DAT_00993038 (*(undefined1 *)(0x00993038u))
#define _DAT_00993088 (*(undefined1 *)(0x00993088u))
#define _DAT_00993098 (*(undefined1 *)(0x00993098u))
#define _DAT_00993108 (*(undefined1 *)(0x00993108u))
#define _DAT_00993118 (*(undefined1 *)(0x00993118u))
#define _DAT_009931a0 (*(undefined1 *)(0x009931a0u))
#define _DAT_009931b0 (*(undefined1 *)(0x009931b0u))
#define _DAT_00993240 (*(undefined1 *)(0x00993240u))
#define _DAT_00993250 (*(undefined1 *)(0x00993250u))
#define _DAT_009932c0 (*(undefined1 *)(0x009932c0u))
#define _DAT_009932d0 (*(undefined1 *)(0x009932d0u))

//==== 0000401100 00401100_FUN_00401100 ====
void FUN_00401100(void);

// decompiled by BatchDecomp @ 00401100 name=FUN_00401100 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401100(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00960ce8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000401170 00401170_FUN_00401170 ====
void FUN_00401170(void);

// decompiled by BatchDecomp @ 00401170 name=FUN_00401170 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401170(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00960d98 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004011c0 004011c0_FUN_004011c0 ====
void FUN_004011c0(void);

// decompiled by BatchDecomp @ 004011c0 name=FUN_004011c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004011c0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00960d88 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004021d0 004021d0_FUN_004021d0 ====
void FUN_004021d0(void);

// decompiled by BatchDecomp @ 004021d0 name=FUN_004021d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004021d0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009610a8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000402240 00402240_FUN_00402240 ====
void FUN_00402240(void);

// decompiled by BatchDecomp @ 00402240 name=FUN_00402240 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402240(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00961098 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000403700 00403700_FUN_00403700 ====
void FUN_00403700(void);

// decompiled by BatchDecomp @ 00403700 name=FUN_00403700 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403700(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00961320 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000403750 00403750_FUN_00403750 ====
void FUN_00403750(void);

// decompiled by BatchDecomp @ 00403750 name=FUN_00403750 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403750(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00961310 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000403ae0 00403ae0_FUN_00403ae0 ====
void FUN_00403ae0(void);

// decompiled by BatchDecomp @ 00403ae0 name=FUN_00403ae0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403ae0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00961948 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000403b30 00403b30_FUN_00403b30 ====
void FUN_00403b30(void);

// decompiled by BatchDecomp @ 00403b30 name=FUN_00403b30 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b30(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00961938 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004049c0 004049c0_FUN_004049c0 ====
void FUN_004049c0(void);

// decompiled by BatchDecomp @ 004049c0 name=FUN_004049c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004049c0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00962a20 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000404a10 00404a10_FUN_00404a10 ====
void FUN_00404a10(void);

// decompiled by BatchDecomp @ 00404a10 name=FUN_00404a10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404a10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00962a10 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000404c50 00404c50_FUN_00404c50 ====
void FUN_00404c50(void);

// decompiled by BatchDecomp @ 00404c50 name=FUN_00404c50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404c50(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00962b20 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000404ca0 00404ca0_FUN_00404ca0 ====
void FUN_00404ca0(void);

// decompiled by BatchDecomp @ 00404ca0 name=FUN_00404ca0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404ca0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00962b10 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000405e40 00405e40_FUN_00405e40 ====
void FUN_00405e40(void);

// decompiled by BatchDecomp @ 00405e40 name=FUN_00405e40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e40(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963188 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000405e90 00405e90_FUN_00405e90 ====
void FUN_00405e90(void);

// decompiled by BatchDecomp @ 00405e90 name=FUN_00405e90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405e90(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963178 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000406860 00406860_FUN_00406860 ====
void FUN_00406860(void);

// decompiled by BatchDecomp @ 00406860 name=FUN_00406860 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406860(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963540 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000406960 00406960_FUN_00406960 ====
void FUN_00406960(void);

// decompiled by BatchDecomp @ 00406960 name=FUN_00406960 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00406960(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963530 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000407500 00407500_FUN_00407500 ====
void FUN_00407500(void);

// decompiled by BatchDecomp @ 00407500 name=FUN_00407500 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407500(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963788 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000407550 00407550_FUN_00407550 ====
void FUN_00407550(void);

// decompiled by BatchDecomp @ 00407550 name=FUN_00407550 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407550(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963778 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000408a10 00408a10_FUN_00408a10 ====
void FUN_00408a10(void);

// decompiled by BatchDecomp @ 00408a10 name=FUN_00408a10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a10(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963aa0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000408a60 00408a60_FUN_00408a60 ====
void FUN_00408a60(void);

// decompiled by BatchDecomp @ 00408a60 name=FUN_00408a60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a60(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963a90 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000409c00 00409c00_FUN_00409c00 ====
void FUN_00409c00(void);

// decompiled by BatchDecomp @ 00409c00 name=FUN_00409c00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c00(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963cd8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000409c60 00409c60_FUN_00409c60 ====
void FUN_00409c60(void);

// decompiled by BatchDecomp @ 00409c60 name=FUN_00409c60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c60(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963cc8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000040a630 0040a630_FUN_0040a630 ====
void FUN_0040a630(void);

// decompiled by BatchDecomp @ 0040a630 name=FUN_0040a630 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a630(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964088 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000040a7c0 0040a7c0_FUN_0040a7c0 ====
void FUN_0040a7c0(void);

// decompiled by BatchDecomp @ 0040a7c0 name=FUN_0040a7c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a7c0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964078 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000040b960 0040b960_FUN_0040b960 ====
void FUN_0040b960(void);

// decompiled by BatchDecomp @ 0040b960 name=FUN_0040b960 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b960(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964358 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000040b9b0 0040b9b0_FUN_0040b9b0 ====
void FUN_0040b9b0(void);

// decompiled by BatchDecomp @ 0040b9b0 name=FUN_0040b9b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b9b0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964348 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000040cb50 0040cb50_FUN_0040cb50 ====
void FUN_0040cb50(void);

// decompiled by BatchDecomp @ 0040cb50 name=FUN_0040cb50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cb50(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009645b0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000040cba0 0040cba0_FUN_0040cba0 ====
void FUN_0040cba0(void);

// decompiled by BatchDecomp @ 0040cba0 name=FUN_0040cba0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cba0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009645a0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000040d250 0040d250_FUN_0040d250 ====
void FUN_0040d250(void);

// decompiled by BatchDecomp @ 0040d250 name=FUN_0040d250 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d250(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964728 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000040d2a0 0040d2a0_FUN_0040d2a0 ====
void FUN_0040d2a0(void);

// decompiled by BatchDecomp @ 0040d2a0 name=FUN_0040d2a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d2a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964718 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000040e440 0040e440_FUN_0040e440 ====
void FUN_0040e440(void);

// decompiled by BatchDecomp @ 0040e440 name=FUN_0040e440 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e440(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964ba0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000040e580 0040e580_FUN_0040e580 ====
void FUN_0040e580(void);

// decompiled by BatchDecomp @ 0040e580 name=FUN_0040e580 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e580(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964b90 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000040f720 0040f720_FUN_0040f720 ====
void FUN_0040f720(void);

// decompiled by BatchDecomp @ 0040f720 name=FUN_0040f720 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f720(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964e20 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000040f770 0040f770_FUN_0040f770 ====
void FUN_0040f770(void);

// decompiled by BatchDecomp @ 0040f770 name=FUN_0040f770 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f770(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964e10 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000040f970 0040f970_FUN_0040f970 ====
void FUN_0040f970(void);

// decompiled by BatchDecomp @ 0040f970 name=FUN_0040f970 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f970(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965208 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000040fa00 0040fa00_FUN_0040fa00 ====
void FUN_0040fa00(void);

// decompiled by BatchDecomp @ 0040fa00 name=FUN_0040fa00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040fa00(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009651f8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000410560 00410560_FUN_00410560 ====
void FUN_00410560(void);

// decompiled by BatchDecomp @ 00410560 name=FUN_00410560 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00410560(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965450 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004105b0 004105b0_FUN_004105b0 ====
void FUN_004105b0(void);

// decompiled by BatchDecomp @ 004105b0 name=FUN_004105b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004105b0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965440 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000411a70 00411a70_FUN_00411a70 ====
void FUN_00411a70(void);

// decompiled by BatchDecomp @ 00411a70 name=FUN_00411a70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411a70(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965c78 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000411b00 00411b00_FUN_00411b00 ====
void FUN_00411b00(void);

// decompiled by BatchDecomp @ 00411b00 name=FUN_00411b00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411b00(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965c68 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000412ce0 00412ce0_FUN_00412ce0 ====
void FUN_00412ce0(void);

// decompiled by BatchDecomp @ 00412ce0 name=FUN_00412ce0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412ce0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00966bc8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000412d70 00412d70_FUN_00412d70 ====
void FUN_00412d70(void);

// decompiled by BatchDecomp @ 00412d70 name=FUN_00412d70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412d70(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00966bb8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000414230 00414230_FUN_00414230 ====
void FUN_00414230(void);

// decompiled by BatchDecomp @ 00414230 name=FUN_00414230 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414230(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00966ef0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000414280 00414280_FUN_00414280 ====
void FUN_00414280(void);

// decompiled by BatchDecomp @ 00414280 name=FUN_00414280 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00414280(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00966ee0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000415420 00415420_FUN_00415420 ====
void FUN_00415420(void);

// decompiled by BatchDecomp @ 00415420 name=FUN_00415420 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415420(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00967a38 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000415500 00415500_FUN_00415500 ====
void FUN_00415500(void);

// decompiled by BatchDecomp @ 00415500 name=FUN_00415500 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00415500(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00967a28 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004168f0 004168f0_FUN_004168f0 ====
void FUN_004168f0(void);

// decompiled by BatchDecomp @ 004168f0 name=FUN_004168f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004168f0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00967d40 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000416980 00416980_FUN_00416980 ====
void FUN_00416980(void);

// decompiled by BatchDecomp @ 00416980 name=FUN_00416980 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416980(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00967d30 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000417b20 00417b20_FUN_00417b20 ====
void FUN_00417b20(void);

// decompiled by BatchDecomp @ 00417b20 name=FUN_00417b20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417b20(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009682b8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000417b70 00417b70_FUN_00417b70 ====
void FUN_00417b70(void);

// decompiled by BatchDecomp @ 00417b70 name=FUN_00417b70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417b70(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009682a8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000418d50 00418d50_FUN_00418d50 ====
void FUN_00418d50(void);

// decompiled by BatchDecomp @ 00418d50 name=FUN_00418d50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418d50(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009689e0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000418da0 00418da0_FUN_00418da0 ====
void FUN_00418da0(void);

// decompiled by BatchDecomp @ 00418da0 name=FUN_00418da0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418da0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009689d0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000419db0 00419db0_FUN_00419db0 ====
void FUN_00419db0(void);

// decompiled by BatchDecomp @ 00419db0 name=FUN_00419db0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419db0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00969260 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000419e40 00419e40_FUN_00419e40 ====
void FUN_00419e40(void);

// decompiled by BatchDecomp @ 00419e40 name=FUN_00419e40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419e40(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00969250 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000041ae50 0041ae50_FUN_0041ae50 ====
void FUN_0041ae50(void);

// decompiled by BatchDecomp @ 0041ae50 name=FUN_0041ae50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ae50(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00969eb8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000041aea0 0041aea0_FUN_0041aea0 ====
void FUN_0041aea0(void);

// decompiled by BatchDecomp @ 0041aea0 name=FUN_0041aea0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041aea0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00969ea8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000041bef0 0041bef0_FUN_0041bef0 ====
void FUN_0041bef0(void);

// decompiled by BatchDecomp @ 0041bef0 name=FUN_0041bef0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bef0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096a180 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000041bf40 0041bf40_FUN_0041bf40 ====
void FUN_0041bf40(void);

// decompiled by BatchDecomp @ 0041bf40 name=FUN_0041bf40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bf40(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096a170 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000041d270 0041d270_FUN_0041d270 ====
void FUN_0041d270(void);

// decompiled by BatchDecomp @ 0041d270 name=FUN_0041d270 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d270(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096a740 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000041d2c0 0041d2c0_FUN_0041d2c0 ====
void FUN_0041d2c0(void);

// decompiled by BatchDecomp @ 0041d2c0 name=FUN_0041d2c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d2c0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096a730 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000041e310 0041e310_FUN_0041e310 ====
void FUN_0041e310(void);

// decompiled by BatchDecomp @ 0041e310 name=FUN_0041e310 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e310(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096ae48 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000041e360 0041e360_FUN_0041e360 ====
void FUN_0041e360(void);

// decompiled by BatchDecomp @ 0041e360 name=FUN_0041e360 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e360(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096ae38 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000041f580 0041f580_FUN_0041f580 ====
void FUN_0041f580(void);

// decompiled by BatchDecomp @ 0041f580 name=FUN_0041f580 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f580(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b4d8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000041f5d0 0041f5d0_FUN_0041f5d0 ====
void FUN_0041f5d0(void);

// decompiled by BatchDecomp @ 0041f5d0 name=FUN_0041f5d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f5d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b4c8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000420620 00420620_FUN_00420620 ====
void FUN_00420620(void);

// decompiled by BatchDecomp @ 00420620 name=FUN_00420620 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420620(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b750 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000420670 00420670_FUN_00420670 ====
void FUN_00420670(void);

// decompiled by BatchDecomp @ 00420670 name=FUN_00420670 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420670(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b740 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004216c0 004216c0_FUN_004216c0 ====
void FUN_004216c0(void);

// decompiled by BatchDecomp @ 004216c0 name=FUN_004216c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004216c0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b9f0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000421710 00421710_FUN_00421710 ====
void FUN_00421710(void);

// decompiled by BatchDecomp @ 00421710 name=FUN_00421710 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421710(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b9e0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004228b0 004228b0_FUN_004228b0 ====
void FUN_004228b0(void);

// decompiled by BatchDecomp @ 004228b0 name=FUN_004228b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004228b0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096bcf8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000422940 00422940_FUN_00422940 ====
void FUN_00422940(void);

// decompiled by BatchDecomp @ 00422940 name=FUN_00422940 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422940(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096bce8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004239d0 004239d0_FUN_004239d0 ====
void FUN_004239d0(void);

// decompiled by BatchDecomp @ 004239d0 name=FUN_004239d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004239d0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096c668 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000423a20 00423a20_FUN_00423a20 ====
void FUN_00423a20(void);

// decompiled by BatchDecomp @ 00423a20 name=FUN_00423a20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423a20(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096c658 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000424af0 00424af0_FUN_00424af0 ====
void FUN_00424af0(void);

// decompiled by BatchDecomp @ 00424af0 name=FUN_00424af0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424af0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096c8e0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000424b40 00424b40_FUN_00424b40 ====
void FUN_00424b40(void);

// decompiled by BatchDecomp @ 00424b40 name=FUN_00424b40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424b40(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096c8d0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000425bd0 00425bd0_FUN_00425bd0 ====
void FUN_00425bd0(void);

// decompiled by BatchDecomp @ 00425bd0 name=FUN_00425bd0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425bd0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096d190 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000425c20 00425c20_FUN_00425c20 ====
void FUN_00425c20(void);

// decompiled by BatchDecomp @ 00425c20 name=FUN_00425c20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425c20(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096d180 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000426c70 00426c70_FUN_00426c70 ====
void FUN_00426c70(void);

// decompiled by BatchDecomp @ 00426c70 name=FUN_00426c70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426c70(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096dc58 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000426cc0 00426cc0_FUN_00426cc0 ====
void FUN_00426cc0(void);

// decompiled by BatchDecomp @ 00426cc0 name=FUN_00426cc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426cc0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096dc48 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000427ea0 00427ea0_FUN_00427ea0 ====
void FUN_00427ea0(void);

// decompiled by BatchDecomp @ 00427ea0 name=FUN_00427ea0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427ea0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096df18 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000427ef0 00427ef0_FUN_00427ef0 ====
void FUN_00427ef0(void);

// decompiled by BatchDecomp @ 00427ef0 name=FUN_00427ef0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427ef0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096df08 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004290d0 004290d0_FUN_004290d0 ====
void FUN_004290d0(void);

// decompiled by BatchDecomp @ 004290d0 name=FUN_004290d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004290d0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096e780 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000429120 00429120_FUN_00429120 ====
void FUN_00429120(void);

// decompiled by BatchDecomp @ 00429120 name=FUN_00429120 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429120(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096e770 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000042a1b0 0042a1b0_FUN_0042a1b0 ====
void FUN_0042a1b0(void);

// decompiled by BatchDecomp @ 0042a1b0 name=FUN_0042a1b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a1b0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096ef08 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000042a280 0042a280_FUN_0042a280 ====
void FUN_0042a280(void);

// decompiled by BatchDecomp @ 0042a280 name=FUN_0042a280 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a280(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096eef8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000042b350 0042b350_FUN_0042b350 ====
void FUN_0042b350(void);

// decompiled by BatchDecomp @ 0042b350 name=FUN_0042b350 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b350(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096f730 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000042b3e0 0042b3e0_FUN_0042b3e0 ====
void FUN_0042b3e0(void);

// decompiled by BatchDecomp @ 0042b3e0 name=FUN_0042b3e0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b3e0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096f720 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000042c3f0 0042c3f0_FUN_0042c3f0 ====
void FUN_0042c3f0(void);

// decompiled by BatchDecomp @ 0042c3f0 name=FUN_0042c3f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c3f0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096fde0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000042c480 0042c480_FUN_0042c480 ====
void FUN_0042c480(void);

// decompiled by BatchDecomp @ 0042c480 name=FUN_0042c480 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c480(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096fdd0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000042d620 0042d620_FUN_0042d620 ====
void FUN_0042d620(void);

// decompiled by BatchDecomp @ 0042d620 name=FUN_0042d620 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d620(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00970668 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000042d670 0042d670_FUN_0042d670 ====
void FUN_0042d670(void);

// decompiled by BatchDecomp @ 0042d670 name=FUN_0042d670 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d670(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00970658 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000042e850 0042e850_FUN_0042e850 ====
void FUN_0042e850(void);

// decompiled by BatchDecomp @ 0042e850 name=FUN_0042e850 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e850(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00970928 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000042e8e0 0042e8e0_FUN_0042e8e0 ====
void FUN_0042e8e0(void);

// decompiled by BatchDecomp @ 0042e8e0 name=FUN_0042e8e0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e8e0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00970918 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000042fb40 0042fb40_FUN_0042fb40 ====
void FUN_0042fb40(void);

// decompiled by BatchDecomp @ 0042fb40 name=FUN_0042fb40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fb40(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009711c0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000042fb90 0042fb90_FUN_0042fb90 ====
void FUN_0042fb90(void);

// decompiled by BatchDecomp @ 0042fb90 name=FUN_0042fb90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fb90(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009711b0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000430ba0 00430ba0_FUN_00430ba0 ====
void FUN_00430ba0(void);

// decompiled by BatchDecomp @ 00430ba0 name=FUN_00430ba0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430ba0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009715c0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000430bf0 00430bf0_FUN_00430bf0 ====
void FUN_00430bf0(void);

// decompiled by BatchDecomp @ 00430bf0 name=FUN_00430bf0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430bf0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009715b0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000431dd0 00431dd0_FUN_00431dd0 ====
void FUN_00431dd0(void);

// decompiled by BatchDecomp @ 00431dd0 name=FUN_00431dd0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431dd0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00971d20 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000431e20 00431e20_FUN_00431e20 ====
void FUN_00431e20(void);

// decompiled by BatchDecomp @ 00431e20 name=FUN_00431e20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431e20(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00971d10 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000432eb0 00432eb0_FUN_00432eb0 ====
void FUN_00432eb0(void);

// decompiled by BatchDecomp @ 00432eb0 name=FUN_00432eb0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432eb0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972450 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000432f00 00432f00_FUN_00432f00 ====
void FUN_00432f00(void);

// decompiled by BatchDecomp @ 00432f00 name=FUN_00432f00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432f00(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972440 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004340e0 004340e0_FUN_004340e0 ====
void FUN_004340e0(void);

// decompiled by BatchDecomp @ 004340e0 name=FUN_004340e0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004340e0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972a58 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000434130 00434130_FUN_00434130 ====
void FUN_00434130(void);

// decompiled by BatchDecomp @ 00434130 name=FUN_00434130 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434130(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972a48 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000435350 00435350_FUN_00435350 ====
void FUN_00435350(void);

// decompiled by BatchDecomp @ 00435350 name=FUN_00435350 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00435350(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972fc8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004353a0 004353a0_FUN_004353a0 ====
void FUN_004353a0(void);

// decompiled by BatchDecomp @ 004353a0 name=FUN_004353a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004353a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972fb8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004365c0 004365c0_FUN_004365c0 ====
void FUN_004365c0(void);

// decompiled by BatchDecomp @ 004365c0 name=FUN_004365c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004365c0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00973b58 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000436610 00436610_FUN_00436610 ====
void FUN_00436610(void);

// decompiled by BatchDecomp @ 00436610 name=FUN_00436610 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436610(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00973b48 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004377f0 004377f0_FUN_004377f0 ====
void FUN_004377f0(void);

// decompiled by BatchDecomp @ 004377f0 name=FUN_004377f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004377f0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009742f0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000437840 00437840_FUN_00437840 ====
void FUN_00437840(void);

// decompiled by BatchDecomp @ 00437840 name=FUN_00437840 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437840(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009742e0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000438a20 00438a20_FUN_00438a20 ====
void FUN_00438a20(void);

// decompiled by BatchDecomp @ 00438a20 name=FUN_00438a20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438a20(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00974a90 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000438a70 00438a70_FUN_00438a70 ====
void FUN_00438a70(void);

// decompiled by BatchDecomp @ 00438a70 name=FUN_00438a70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438a70(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00974a80 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000439c10 00439c10_FUN_00439c10 ====
void FUN_00439c10(void);

// decompiled by BatchDecomp @ 00439c10 name=FUN_00439c10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439c10(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00975480 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000439ca0 00439ca0_FUN_00439ca0 ====
void FUN_00439ca0(void);

// decompiled by BatchDecomp @ 00439ca0 name=FUN_00439ca0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439ca0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00975470 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000043aec0 0043aec0_FUN_0043aec0 ====
void FUN_0043aec0(void);

// decompiled by BatchDecomp @ 0043aec0 name=FUN_0043aec0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043aec0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00976068 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000043af50 0043af50_FUN_0043af50 ====
void FUN_0043af50(void);

// decompiled by BatchDecomp @ 0043af50 name=FUN_0043af50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043af50(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00976058 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000043c170 0043c170_FUN_0043c170 ====
void FUN_0043c170(void);

// decompiled by BatchDecomp @ 0043c170 name=FUN_0043c170 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c170(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009763a8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000043c240 0043c240_FUN_0043c240 ====
void FUN_0043c240(void);

// decompiled by BatchDecomp @ 0043c240 name=FUN_0043c240 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c240(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00976398 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000043d460 0043d460_FUN_0043d460 ====
void FUN_0043d460(void);

// decompiled by BatchDecomp @ 0043d460 name=FUN_0043d460 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d460(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00977400 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000043d4b0 0043d4b0_FUN_0043d4b0 ====
void FUN_0043d4b0(void);

// decompiled by BatchDecomp @ 0043d4b0 name=FUN_0043d4b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d4b0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009773f0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000043e650 0043e650_FUN_0043e650 ====
void FUN_0043e650(void);

// decompiled by BatchDecomp @ 0043e650 name=FUN_0043e650 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e650(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00977d40 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000043e6a0 0043e6a0_FUN_0043e6a0 ====
void FUN_0043e6a0(void);

// decompiled by BatchDecomp @ 0043e6a0 name=FUN_0043e6a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e6a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00977d30 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000043f8c0 0043f8c0_FUN_0043f8c0 ====
void FUN_0043f8c0(void);

// decompiled by BatchDecomp @ 0043f8c0 name=FUN_0043f8c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f8c0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978368 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000043f910 0043f910_FUN_0043f910 ====
void FUN_0043f910(void);

// decompiled by BatchDecomp @ 0043f910 name=FUN_0043f910 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f910(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978358 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000440af0 00440af0_FUN_00440af0 ====
void FUN_00440af0(void);

// decompiled by BatchDecomp @ 00440af0 name=FUN_00440af0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440af0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978620 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000440b40 00440b40_FUN_00440b40 ====
void FUN_00440b40(void);

// decompiled by BatchDecomp @ 00440b40 name=FUN_00440b40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440b40(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978610 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000441da0 00441da0_FUN_00441da0 ====
void FUN_00441da0(void);

// decompiled by BatchDecomp @ 00441da0 name=FUN_00441da0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441da0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978dc0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000441df0 00441df0_FUN_00441df0 ====
void FUN_00441df0(void);

// decompiled by BatchDecomp @ 00441df0 name=FUN_00441df0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441df0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978db0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000443010 00443010_FUN_00443010 ====
void FUN_00443010(void);

// decompiled by BatchDecomp @ 00443010 name=FUN_00443010 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443010(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009793a8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004430a0 004430a0_FUN_004430a0 ====
void FUN_004430a0(void);

// decompiled by BatchDecomp @ 004430a0 name=FUN_004430a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004430a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979398 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000443430 00443430_FUN_00443430 ====
void FUN_00443430(void);

// decompiled by BatchDecomp @ 00443430 name=FUN_00443430 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443430(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979448 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000443480 00443480_FUN_00443480 ====
void FUN_00443480(void);

// decompiled by BatchDecomp @ 00443480 name=FUN_00443480 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443480(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979438 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000443b30 00443b30_FUN_00443b30 ====
void FUN_00443b30(void);

// decompiled by BatchDecomp @ 00443b30 name=FUN_00443b30 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443b30(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979e40 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000443bc0 00443bc0_FUN_00443bc0 ====
void FUN_00443bc0(void);

// decompiled by BatchDecomp @ 00443bc0 name=FUN_00443bc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443bc0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979e30 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000443dc0 00443dc0_FUN_00443dc0 ====
void FUN_00443dc0(void);

// decompiled by BatchDecomp @ 00443dc0 name=FUN_00443dc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443dc0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979ef8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000443e50 00443e50_FUN_00443e50 ====
void FUN_00443e50(void);

// decompiled by BatchDecomp @ 00443e50 name=FUN_00443e50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443e50(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979ee8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000443ec0 00443ec0_FUN_00443ec0 ====
void FUN_00443ec0(void);

// decompiled by BatchDecomp @ 00443ec0 name=FUN_00443ec0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443ec0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979f38 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000443f10 00443f10_FUN_00443f10 ====
void FUN_00443f10(void);

// decompiled by BatchDecomp @ 00443f10 name=FUN_00443f10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443f10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979f28 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004442a0 004442a0_FUN_004442a0 ====
void FUN_004442a0(void);

// decompiled by BatchDecomp @ 004442a0 name=FUN_004442a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004442a0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979fd0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004442f0 004442f0_FUN_004442f0 ====
void FUN_004442f0(void);

// decompiled by BatchDecomp @ 004442f0 name=FUN_004442f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004442f0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979fc0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000444810 00444810_FUN_00444810 ====
void FUN_00444810(void);

// decompiled by BatchDecomp @ 00444810 name=FUN_00444810 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444810(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a2d8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004448a0 004448a0_FUN_004448a0 ====
void FUN_004448a0(void);

// decompiled by BatchDecomp @ 004448a0 name=FUN_004448a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004448a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a2c8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000444dc0 00444dc0_FUN_00444dc0 ====
void FUN_00444dc0(void);

// decompiled by BatchDecomp @ 00444dc0 name=FUN_00444dc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444dc0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a660 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000444e20 00444e20_FUN_00444e20 ====
void FUN_00444e20(void);

// decompiled by BatchDecomp @ 00444e20 name=FUN_00444e20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444e20(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a650 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000445580 00445580_FUN_00445580 ====
void FUN_00445580(void);

// decompiled by BatchDecomp @ 00445580 name=FUN_00445580 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445580(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a760 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004455d0 004455d0_FUN_004455d0 ====
void FUN_004455d0(void);

// decompiled by BatchDecomp @ 004455d0 name=FUN_004455d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004455d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a750 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000445840 00445840_FUN_00445840 ====
void FUN_00445840(void);

// decompiled by BatchDecomp @ 00445840 name=FUN_00445840 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445840(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a858 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000445890 00445890_FUN_00445890 ====
void FUN_00445890(void);

// decompiled by BatchDecomp @ 00445890 name=FUN_00445890 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445890(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a848 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000445940 00445940_FUN_00445940 ====
void FUN_00445940(void);

// decompiled by BatchDecomp @ 00445940 name=FUN_00445940 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445940(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a880 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000445990 00445990_FUN_00445990 ====
void FUN_00445990(void);

// decompiled by BatchDecomp @ 00445990 name=FUN_00445990 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445990(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a870 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000445a00 00445a00_FUN_00445a00 ====
void FUN_00445a00(void);

// decompiled by BatchDecomp @ 00445a00 name=FUN_00445a00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445a00(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ab38 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000445a50 00445a50_FUN_00445a50 ====
void FUN_00445a50(void);

// decompiled by BatchDecomp @ 00445a50 name=FUN_00445a50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445a50(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ab28 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000446d80 00446d80_FUN_00446d80 ====
void FUN_00446d80(void);

// decompiled by BatchDecomp @ 00446d80 name=FUN_00446d80 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446d80(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ae50 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000446dd0 00446dd0_FUN_00446dd0 ====
void FUN_00446dd0(void);

// decompiled by BatchDecomp @ 00446dd0 name=FUN_00446dd0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446dd0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ae40 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000448290 00448290_FUN_00448290 ====
void FUN_00448290(void);

// decompiled by BatchDecomp @ 00448290 name=FUN_00448290 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448290(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097b148 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004482e0 004482e0_FUN_004482e0 ====
void FUN_004482e0(void);

// decompiled by BatchDecomp @ 004482e0 name=FUN_004482e0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004482e0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097b138 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000449480 00449480_FUN_00449480 ====
void FUN_00449480(void);

// decompiled by BatchDecomp @ 00449480 name=FUN_00449480 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449480(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097b440 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004494d0 004494d0_FUN_004494d0 ====
void FUN_004494d0(void);

// decompiled by BatchDecomp @ 004494d0 name=FUN_004494d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004494d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097b430 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000044a990 0044a990_FUN_0044a990 ====
void FUN_0044a990(void);

// decompiled by BatchDecomp @ 0044a990 name=FUN_0044a990 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044a990(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097bed8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000044aab0 0044aab0_FUN_0044aab0 ====
void FUN_0044aab0(void);

// decompiled by BatchDecomp @ 0044aab0 name=FUN_0044aab0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044aab0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097bec8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000044b650 0044b650_FUN_0044b650 ====
void FUN_0044b650(void);

// decompiled by BatchDecomp @ 0044b650 name=FUN_0044b650 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b650(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ce50 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000044b770 0044b770_FUN_0044b770 ====
void FUN_0044b770(void);

// decompiled by BatchDecomp @ 0044b770 name=FUN_0044b770 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b770(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ce40 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000044bd90 0044bd90_FUN_0044bd90 ====
void FUN_0044bd90(void);

// decompiled by BatchDecomp @ 0044bd90 name=FUN_0044bd90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bd90(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097d778 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000044bde0 0044bde0_FUN_0044bde0 ====
void FUN_0044bde0(void);

// decompiled by BatchDecomp @ 0044bde0 name=FUN_0044bde0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bde0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097d768 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000044d110 0044d110_FUN_0044d110 ====
void FUN_0044d110(void);

// decompiled by BatchDecomp @ 0044d110 name=FUN_0044d110 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d110(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097da78 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000044d160 0044d160_FUN_0044d160 ====
void FUN_0044d160(void);

// decompiled by BatchDecomp @ 0044d160 name=FUN_0044d160 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d160(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097da68 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000044e060 0044e060_FUN_0044e060 ====
void FUN_0044e060(void);

// decompiled by BatchDecomp @ 0044e060 name=FUN_0044e060 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e060(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097fae8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000044e240 0044e240_FUN_0044e240 ====
void FUN_0044e240(void);

// decompiled by BatchDecomp @ 0044e240 name=FUN_0044e240 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e240(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097fad8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000044f520 0044f520_FUN_0044f520 ====
void FUN_0044f520(void);

// decompiled by BatchDecomp @ 0044f520 name=FUN_0044f520 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f520(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097fe08 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000044f570 0044f570_FUN_0044f570 ====
void FUN_0044f570(void);

// decompiled by BatchDecomp @ 0044f570 name=FUN_0044f570 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f570(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097fdf8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000450bc0 00450bc0_FUN_00450bc0 ====
void FUN_00450bc0(void);

// decompiled by BatchDecomp @ 00450bc0 name=FUN_00450bc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450bc0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009800f8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000450c10 00450c10_FUN_00450c10 ====
void FUN_00450c10(void);

// decompiled by BatchDecomp @ 00450c10 name=FUN_00450c10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450c10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009800e8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000451ae0 00451ae0_FUN_00451ae0 ====
void FUN_00451ae0(void);

// decompiled by BatchDecomp @ 00451ae0 name=FUN_00451ae0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451ae0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00980338 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000451b30 00451b30_FUN_00451b30 ====
void FUN_00451b30(void);

// decompiled by BatchDecomp @ 00451b30 name=FUN_00451b30 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451b30(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00980328 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000452b40 00452b40_FUN_00452b40 ====
void FUN_00452b40(void);

// decompiled by BatchDecomp @ 00452b40 name=FUN_00452b40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452b40(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00980dd8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000452bb0 00452bb0_FUN_00452bb0 ====
void FUN_00452bb0(void);

// decompiled by BatchDecomp @ 00452bb0 name=FUN_00452bb0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452bb0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00980dc8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000453580 00453580_FUN_00453580 ====
void FUN_00453580(void);

// decompiled by BatchDecomp @ 00453580 name=FUN_00453580 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453580(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009810f0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004535d0 004535d0_FUN_004535d0 ====
void FUN_004535d0(void);

// decompiled by BatchDecomp @ 004535d0 name=FUN_004535d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004535d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009810e0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000454450 00454450_FUN_00454450 ====
void FUN_00454450(void);

// decompiled by BatchDecomp @ 00454450 name=FUN_00454450 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00454450(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009813a8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004544a0 004544a0_FUN_004544a0 ====
void FUN_004544a0(void);

// decompiled by BatchDecomp @ 004544a0 name=FUN_004544a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004544a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00981398 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004557d0 004557d0_FUN_004557d0 ====
void FUN_004557d0(void);

// decompiled by BatchDecomp @ 004557d0 name=FUN_004557d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004557d0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00981670 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000455820 00455820_FUN_00455820 ====
void FUN_00455820(void);

// decompiled by BatchDecomp @ 00455820 name=FUN_00455820 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455820(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00981660 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004566a0 004566a0_FUN_004566a0 ====
void FUN_004566a0(void);

// decompiled by BatchDecomp @ 004566a0 name=FUN_004566a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004566a0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009818d8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004566f0 004566f0_FUN_004566f0 ====
void FUN_004566f0(void);

// decompiled by BatchDecomp @ 004566f0 name=FUN_004566f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004566f0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009818c8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000457700 00457700_FUN_00457700 ====
void FUN_00457700(void);

// decompiled by BatchDecomp @ 00457700 name=FUN_00457700 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457700(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982448 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000457750 00457750_FUN_00457750 ====
void FUN_00457750(void);

// decompiled by BatchDecomp @ 00457750 name=FUN_00457750 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457750(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982438 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004589b0 004589b0_FUN_004589b0 ====
void FUN_004589b0(void);

// decompiled by BatchDecomp @ 004589b0 name=FUN_004589b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004589b0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982740 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000458a00 00458a00_FUN_00458a00 ====
void FUN_00458a00(void);

// decompiled by BatchDecomp @ 00458a00 name=FUN_00458a00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458a00(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982730 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000459ec0 00459ec0_FUN_00459ec0 ====
void FUN_00459ec0(void);

// decompiled by BatchDecomp @ 00459ec0 name=FUN_00459ec0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459ec0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982a30 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000459f10 00459f10_FUN_00459f10 ====
void FUN_00459f10(void);

// decompiled by BatchDecomp @ 00459f10 name=FUN_00459f10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459f10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982a20 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000045ad90 0045ad90_FUN_0045ad90 ====
void FUN_0045ad90(void);

// decompiled by BatchDecomp @ 0045ad90 name=FUN_0045ad90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ad90(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982c78 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000045ade0 0045ade0_FUN_0045ade0 ====
void FUN_0045ade0(void);

// decompiled by BatchDecomp @ 0045ade0 name=FUN_0045ade0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ade0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982c68 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000045bc60 0045bc60_FUN_0045bc60 ====
void FUN_0045bc60(void);

// decompiled by BatchDecomp @ 0045bc60 name=FUN_0045bc60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045bc60(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982ed8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000045bcb0 0045bcb0_FUN_0045bcb0 ====
void FUN_0045bcb0(void);

// decompiled by BatchDecomp @ 0045bcb0 name=FUN_0045bcb0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045bcb0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982ec8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000045ccc0 0045ccc0_FUN_0045ccc0 ====
void FUN_0045ccc0(void);

// decompiled by BatchDecomp @ 0045ccc0 name=FUN_0045ccc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ccc0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983150 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000045cd10 0045cd10_FUN_0045cd10 ====
void FUN_0045cd10(void);

// decompiled by BatchDecomp @ 0045cd10 name=FUN_0045cd10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cd10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983140 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000045dd20 0045dd20_FUN_0045dd20 ====
void FUN_0045dd20(void);

// decompiled by BatchDecomp @ 0045dd20 name=FUN_0045dd20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dd20(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983418 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000045dd70 0045dd70_FUN_0045dd70 ====
void FUN_0045dd70(void);

// decompiled by BatchDecomp @ 0045dd70 name=FUN_0045dd70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dd70(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983408 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000045ef10 0045ef10_FUN_0045ef10 ====
void FUN_0045ef10(void);

// decompiled by BatchDecomp @ 0045ef10 name=FUN_0045ef10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ef10(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983690 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000045ef60 0045ef60_FUN_0045ef60 ====
void FUN_0045ef60(void);

// decompiled by BatchDecomp @ 0045ef60 name=FUN_0045ef60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ef60(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983680 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000045fde0 0045fde0_FUN_0045fde0 ====
void FUN_0045fde0(void);

// decompiled by BatchDecomp @ 0045fde0 name=FUN_0045fde0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045fde0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009838f8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000045fe30 0045fe30_FUN_0045fe30 ====
void FUN_0045fe30(void);

// decompiled by BatchDecomp @ 0045fe30 name=FUN_0045fe30 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045fe30(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009838e8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000460e40 00460e40_FUN_00460e40 ====
void FUN_00460e40(void);

// decompiled by BatchDecomp @ 00460e40 name=FUN_00460e40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460e40(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983b70 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000460e90 00460e90_FUN_00460e90 ====
void FUN_00460e90(void);

// decompiled by BatchDecomp @ 00460e90 name=FUN_00460e90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460e90(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983b60 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000461ea0 00461ea0_FUN_00461ea0 ====
void FUN_00461ea0(void);

// decompiled by BatchDecomp @ 00461ea0 name=FUN_00461ea0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461ea0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983df0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000461ef0 00461ef0_FUN_00461ef0 ====
void FUN_00461ef0(void);

// decompiled by BatchDecomp @ 00461ef0 name=FUN_00461ef0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461ef0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983de0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000463090 00463090_FUN_00463090 ====
void FUN_00463090(void);

// decompiled by BatchDecomp @ 00463090 name=FUN_00463090 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463090(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009840f8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000463100 00463100_FUN_00463100 ====
void FUN_00463100(void);

// decompiled by BatchDecomp @ 00463100 name=FUN_00463100 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463100(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009840e8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004642a0 004642a0_FUN_004642a0 ====
void FUN_004642a0(void);

// decompiled by BatchDecomp @ 004642a0 name=FUN_004642a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004642a0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984360 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004642f0 004642f0_FUN_004642f0 ====
void FUN_004642f0(void);

// decompiled by BatchDecomp @ 004642f0 name=FUN_004642f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004642f0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984350 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000464cc0 00464cc0_FUN_00464cc0 ====
void FUN_00464cc0(void);

// decompiled by BatchDecomp @ 00464cc0 name=FUN_00464cc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464cc0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984520 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000464d10 00464d10_FUN_00464d10 ====
void FUN_00464d10(void);

// decompiled by BatchDecomp @ 00464d10 name=FUN_00464d10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464d10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984510 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000465d20 00465d20_FUN_00465d20 ====
void FUN_00465d20(void);

// decompiled by BatchDecomp @ 00465d20 name=FUN_00465d20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465d20(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984788 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000465d70 00465d70_FUN_00465d70 ====
void FUN_00465d70(void);

// decompiled by BatchDecomp @ 00465d70 name=FUN_00465d70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465d70(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984778 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000466a60 00466a60_FUN_00466a60 ====
void FUN_00466a60(void);

// decompiled by BatchDecomp @ 00466a60 name=FUN_00466a60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466a60(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009849c8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000466ab0 00466ab0_FUN_00466ab0 ====
void FUN_00466ab0(void);

// decompiled by BatchDecomp @ 00466ab0 name=FUN_00466ab0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466ab0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009849b8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000467c50 00467c50_FUN_00467c50 ====
void FUN_00467c50(void);

// decompiled by BatchDecomp @ 00467c50 name=FUN_00467c50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467c50(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984c88 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000467ca0 00467ca0_FUN_00467ca0 ====
void FUN_00467ca0(void);

// decompiled by BatchDecomp @ 00467ca0 name=FUN_00467ca0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467ca0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984c78 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000468e40 00468e40_FUN_00468e40 ====
void FUN_00468e40(void);

// decompiled by BatchDecomp @ 00468e40 name=FUN_00468e40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468e40(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984f48 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000468e90 00468e90_FUN_00468e90 ====
void FUN_00468e90(void);

// decompiled by BatchDecomp @ 00468e90 name=FUN_00468e90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468e90(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984f38 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000046a030 0046a030_FUN_0046a030 ====
void FUN_0046a030(void);

// decompiled by BatchDecomp @ 0046a030 name=FUN_0046a030 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a030(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985210 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000046a080 0046a080_FUN_0046a080 ====
void FUN_0046a080(void);

// decompiled by BatchDecomp @ 0046a080 name=FUN_0046a080 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a080(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985200 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000046b220 0046b220_FUN_0046b220 ====
void FUN_0046b220(void);

// decompiled by BatchDecomp @ 0046b220 name=FUN_0046b220 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b220(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985508 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000046b270 0046b270_FUN_0046b270 ====
void FUN_0046b270(void);

// decompiled by BatchDecomp @ 0046b270 name=FUN_0046b270 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b270(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009854f8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000046c5a0 0046c5a0_FUN_0046c5a0 ====
void FUN_0046c5a0(void);

// decompiled by BatchDecomp @ 0046c5a0 name=FUN_0046c5a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c5a0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009857e0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000046c5f0 0046c5f0_FUN_0046c5f0 ====
void FUN_0046c5f0(void);

// decompiled by BatchDecomp @ 0046c5f0 name=FUN_0046c5f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c5f0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009857d0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000046d920 0046d920_FUN_0046d920 ====
void FUN_0046d920(void);

// decompiled by BatchDecomp @ 0046d920 name=FUN_0046d920 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d920(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985ad0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000046d970 0046d970_FUN_0046d970 ====
void FUN_0046d970(void);

// decompiled by BatchDecomp @ 0046d970 name=FUN_0046d970 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d970(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985ac0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000046eb10 0046eb10_FUN_0046eb10 ====
void FUN_0046eb10(void);

// decompiled by BatchDecomp @ 0046eb10 name=FUN_0046eb10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046eb10(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985d90 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000046eb60 0046eb60_FUN_0046eb60 ====
void FUN_0046eb60(void);

// decompiled by BatchDecomp @ 0046eb60 name=FUN_0046eb60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046eb60(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985d80 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000046fd00 0046fd00_FUN_0046fd00 ====
void FUN_0046fd00(void);

// decompiled by BatchDecomp @ 0046fd00 name=FUN_0046fd00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046fd00(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00986068 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000046fd50 0046fd50_FUN_0046fd50 ====
void FUN_0046fd50(void);

// decompiled by BatchDecomp @ 0046fd50 name=FUN_0046fd50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046fd50(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00986058 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000471210 00471210_FUN_00471210 ====
void FUN_00471210(void);

// decompiled by BatchDecomp @ 00471210 name=FUN_00471210 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471210(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00986398 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000471260 00471260_FUN_00471260 ====
void FUN_00471260(void);

// decompiled by BatchDecomp @ 00471260 name=FUN_00471260 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471260(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00986388 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000472760 00472760_FUN_00472760 ====
void FUN_00472760(void);

// decompiled by BatchDecomp @ 00472760 name=FUN_00472760 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472760(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987230 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000472910 00472910_FUN_00472910 ====
void FUN_00472910(void);

// decompiled by BatchDecomp @ 00472910 name=FUN_00472910 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472910(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987220 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000473b30 00473b30_FUN_00473b30 ====
void FUN_00473b30(void);

// decompiled by BatchDecomp @ 00473b30 name=FUN_00473b30 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473b30(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987558 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000473b80 00473b80_FUN_00473b80 ====
void FUN_00473b80(void);

// decompiled by BatchDecomp @ 00473b80 name=FUN_00473b80 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473b80(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987548 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000475040 00475040_FUN_00475040 ====
void FUN_00475040(void);

// decompiled by BatchDecomp @ 00475040 name=FUN_00475040 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475040(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987878 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000475090 00475090_FUN_00475090 ====
void FUN_00475090(void);

// decompiled by BatchDecomp @ 00475090 name=FUN_00475090 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00475090(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987868 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004763c0 004763c0_FUN_004763c0 ====
void FUN_004763c0(void);

// decompiled by BatchDecomp @ 004763c0 name=FUN_004763c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004763c0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987b68 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000476410 00476410_FUN_00476410 ====
void FUN_00476410(void);

// decompiled by BatchDecomp @ 00476410 name=FUN_00476410 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476410(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987b58 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000477750 00477750_FUN_00477750 ====
void FUN_00477750(void);

// decompiled by BatchDecomp @ 00477750 name=FUN_00477750 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00477750(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987e58 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004777a0 004777a0_FUN_004777a0 ====
void FUN_004777a0(void);

// decompiled by BatchDecomp @ 004777a0 name=FUN_004777a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004777a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987e48 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000478ad0 00478ad0_FUN_00478ad0 ====
void FUN_00478ad0(void);

// decompiled by BatchDecomp @ 00478ad0 name=FUN_00478ad0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478ad0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988168 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000478b20 00478b20_FUN_00478b20 ====
void FUN_00478b20(void);

// decompiled by BatchDecomp @ 00478b20 name=FUN_00478b20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478b20(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988158 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000479cc0 00479cc0_FUN_00479cc0 ====
void FUN_00479cc0(void);

// decompiled by BatchDecomp @ 00479cc0 name=FUN_00479cc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479cc0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988430 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000479d10 00479d10_FUN_00479d10 ====
void FUN_00479d10(void);

// decompiled by BatchDecomp @ 00479d10 name=FUN_00479d10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479d10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988420 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047b050 0047b050_FUN_0047b050 ====
void FUN_0047b050(void);

// decompiled by BatchDecomp @ 0047b050 name=FUN_0047b050 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b050(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988740 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047b0a0 0047b0a0_FUN_0047b0a0 ====
void FUN_0047b0a0(void);

// decompiled by BatchDecomp @ 0047b0a0 name=FUN_0047b0a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b0a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988730 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047c560 0047c560_FUN_0047c560 ====
void FUN_0047c560(void);

// decompiled by BatchDecomp @ 0047c560 name=FUN_0047c560 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c560(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988a70 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047c5b0 0047c5b0_FUN_0047c5b0 ====
void FUN_0047c5b0(void);

// decompiled by BatchDecomp @ 0047c5b0 name=FUN_0047c5b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c5b0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988a60 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047db10 0047db10_FUN_0047db10 ====
void FUN_0047db10(void);

// decompiled by BatchDecomp @ 0047db10 name=FUN_0047db10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047db10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988cd0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047db70 0047db70_FUN_0047db70 ====
void FUN_0047db70(void);

// decompiled by BatchDecomp @ 0047db70 name=FUN_0047db70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047db70(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989550 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047dbc0 0047dbc0_FUN_0047dbc0 ====
void FUN_0047dbc0(void);

// decompiled by BatchDecomp @ 0047dbc0 name=FUN_0047dbc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dbc0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989560 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047dc70 0047dc70_FUN_0047dc70 ====
void FUN_0047dc70(void);

// decompiled by BatchDecomp @ 0047dc70 name=FUN_0047dc70 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dc70(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989580 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047dcc0 0047dcc0_FUN_0047dcc0 ====
void FUN_0047dcc0(void);

// decompiled by BatchDecomp @ 0047dcc0 name=FUN_0047dcc0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dcc0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989590 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047dd10 0047dd10_FUN_0047dd10 ====
void FUN_0047dd10(void);

// decompiled by BatchDecomp @ 0047dd10 name=FUN_0047dd10 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dd10(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009895a0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047dd40 0047dd40_FUN_0047dd40 ====
void FUN_0047dd40(void);

// decompiled by BatchDecomp @ 0047dd40 name=FUN_0047dd40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dd40(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009895c8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047dd90 0047dd90_FUN_0047dd90 ====
void FUN_0047dd90(void);

// decompiled by BatchDecomp @ 0047dd90 name=FUN_0047dd90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dd90(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009895b8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047df90 0047df90_FUN_0047df90 ====
void FUN_0047df90(void);

// decompiled by BatchDecomp @ 0047df90 name=FUN_0047df90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047df90(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989658 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047dff0 0047dff0_FUN_0047dff0 ====
void FUN_0047dff0(void);

// decompiled by BatchDecomp @ 0047dff0 name=FUN_0047dff0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047dff0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989648 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047e380 0047e380_FUN_0047e380 ====
void FUN_0047e380(void);

// decompiled by BatchDecomp @ 0047e380 name=FUN_0047e380 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e380(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989770 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047e3d0 0047e3d0_FUN_0047e3d0 ====
void FUN_0047e3d0(void);

// decompiled by BatchDecomp @ 0047e3d0 name=FUN_0047e3d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e3d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989760 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047e770 0047e770_FUN_0047e770 ====
void FUN_0047e770(void);

// decompiled by BatchDecomp @ 0047e770 name=FUN_0047e770 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e770(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009897e8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047e840 0047e840_FUN_0047e840 ====
void FUN_0047e840(void);

// decompiled by BatchDecomp @ 0047e840 name=FUN_0047e840 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e840(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009897d8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047ea60 0047ea60_FUN_0047ea60 ====
void FUN_0047ea60(void);

// decompiled by BatchDecomp @ 0047ea60 name=FUN_0047ea60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ea60(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989888 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047eab0 0047eab0_FUN_0047eab0 ====
void FUN_0047eab0(void);

// decompiled by BatchDecomp @ 0047eab0 name=FUN_0047eab0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047eab0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989878 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047ee60 0047ee60_FUN_0047ee60 ====
void FUN_0047ee60(void);

// decompiled by BatchDecomp @ 0047ee60 name=FUN_0047ee60 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ee60(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098c9a8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047eed0 0047eed0_FUN_0047eed0 ====
void FUN_0047eed0(void);

// decompiled by BatchDecomp @ 0047eed0 name=FUN_0047eed0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047eed0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098c998 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047f280 0047f280_FUN_0047f280 ====
void FUN_0047f280(void);

// decompiled by BatchDecomp @ 0047f280 name=FUN_0047f280 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f280(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098ca40 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047f2d0 0047f2d0_FUN_0047f2d0 ====
void FUN_0047f2d0(void);

// decompiled by BatchDecomp @ 0047f2d0 name=FUN_0047f2d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f2d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098ca30 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047f4d0 0047f4d0_FUN_0047f4d0 ====
void FUN_0047f4d0(void);

// decompiled by BatchDecomp @ 0047f4d0 name=FUN_0047f4d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f4d0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098caf0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047f520 0047f520_FUN_0047f520 ====
void FUN_0047f520(void);

// decompiled by BatchDecomp @ 0047f520 name=FUN_0047f520 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f520(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cae0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047f8b0 0047f8b0_FUN_0047f8b0 ====
void FUN_0047f8b0(void);

// decompiled by BatchDecomp @ 0047f8b0 name=FUN_0047f8b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f8b0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cc30 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047f900 0047f900_FUN_0047f900 ====
void FUN_0047f900(void);

// decompiled by BatchDecomp @ 0047f900 name=FUN_0047f900 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f900(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cc20 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 000047fb50 0047fb50_FUN_0047fb50 ====
void FUN_0047fb50(void);

// decompiled by BatchDecomp @ 0047fb50 name=FUN_0047fb50 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047fb50(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098ccb8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 000047fbe0 0047fbe0_FUN_0047fbe0 ====
void FUN_0047fbe0(void);

// decompiled by BatchDecomp @ 0047fbe0 name=FUN_0047fbe0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047fbe0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cca8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000480030 00480030_FUN_00480030 ====
void FUN_00480030(void);

// decompiled by BatchDecomp @ 00480030 name=FUN_00480030 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480030(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cd70 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000480080 00480080_FUN_00480080 ====
void FUN_00480080(void);

// decompiled by BatchDecomp @ 00480080 name=FUN_00480080 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480080(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cd60 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000480410 00480410_FUN_00480410 ====
void FUN_00480410(void);

// decompiled by BatchDecomp @ 00480410 name=FUN_00480410 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480410(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d048 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000480460 00480460_FUN_00480460 ====
void FUN_00480460(void);

// decompiled by BatchDecomp @ 00480460 name=FUN_00480460 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480460(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d038 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000480850 00480850_FUN_00480850 ====
void FUN_00480850(void);

// decompiled by BatchDecomp @ 00480850 name=FUN_00480850 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480850(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d0b0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000480880 00480880_FUN_00480880 ====
void FUN_00480880(void);

// decompiled by BatchDecomp @ 00480880 name=FUN_00480880 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480880(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d0d8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004808d0 004808d0_FUN_004808d0 ====
void FUN_004808d0(void);

// decompiled by BatchDecomp @ 004808d0 name=FUN_004808d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004808d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d0c8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000480ad0 00480ad0_FUN_00480ad0 ====
void FUN_00480ad0(void);

// decompiled by BatchDecomp @ 00480ad0 name=FUN_00480ad0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480ad0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d1c0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000480b20 00480b20_FUN_00480b20 ====
void FUN_00480b20(void);

// decompiled by BatchDecomp @ 00480b20 name=FUN_00480b20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480b20(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d1b0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000480eb0 00480eb0_FUN_00480eb0 ====
void FUN_00480eb0(void);

// decompiled by BatchDecomp @ 00480eb0 name=FUN_00480eb0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480eb0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d258 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000480f00 00480f00_FUN_00480f00 ====
void FUN_00480f00(void);

// decompiled by BatchDecomp @ 00480f00 name=FUN_00480f00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480f00(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d248 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000481290 00481290_FUN_00481290 ====
void FUN_00481290(void);

// decompiled by BatchDecomp @ 00481290 name=FUN_00481290 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481290(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d300 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004812e0 004812e0_FUN_004812e0 ====
void FUN_004812e0(void);

// decompiled by BatchDecomp @ 004812e0 name=FUN_004812e0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004812e0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d2f0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004816a0 004816a0_FUN_004816a0 ====
void FUN_004816a0(void);

// decompiled by BatchDecomp @ 004816a0 name=FUN_004816a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004816a0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d3c8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004816d0 004816d0_FUN_004816d0 ====
void FUN_004816d0(void);

// decompiled by BatchDecomp @ 004816d0 name=FUN_004816d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004816d0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992210 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000481760 00481760_FUN_00481760 ====
void FUN_00481760(void);

// decompiled by BatchDecomp @ 00481760 name=FUN_00481760 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481760(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992200 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004819a0 004819a0_FUN_004819a0 ====
void FUN_004819a0(void);

// decompiled by BatchDecomp @ 004819a0 name=FUN_004819a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004819a0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992290 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004819f0 004819f0_FUN_004819f0 ====
void FUN_004819f0(void);

// decompiled by BatchDecomp @ 004819f0 name=FUN_004819f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004819f0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992280 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000481d80 00481d80_FUN_00481d80 ====
void FUN_00481d80(void);

// decompiled by BatchDecomp @ 00481d80 name=FUN_00481d80 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481d80(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992328 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000481dd0 00481dd0_FUN_00481dd0 ====
void FUN_00481dd0(void);

// decompiled by BatchDecomp @ 00481dd0 name=FUN_00481dd0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481dd0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992318 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000482160 00482160_FUN_00482160 ====
void FUN_00482160(void);

// decompiled by BatchDecomp @ 00482160 name=FUN_00482160 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482160(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009923c0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004821b0 004821b0_FUN_004821b0 ====
void FUN_004821b0(void);

// decompiled by BatchDecomp @ 004821b0 name=FUN_004821b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004821b0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009923b0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000482560 00482560_FUN_00482560 ====
void FUN_00482560(void);

// decompiled by BatchDecomp @ 00482560 name=FUN_00482560 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482560(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992428 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004825b0 004825b0_FUN_004825b0 ====
void FUN_004825b0(void);

// decompiled by BatchDecomp @ 004825b0 name=FUN_004825b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004825b0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992440 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004825e0 004825e0_FUN_004825e0 ====
void FUN_004825e0(void);

// decompiled by BatchDecomp @ 004825e0 name=FUN_004825e0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004825e0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992480 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000482630 00482630_FUN_00482630 ====
void FUN_00482630(void);

// decompiled by BatchDecomp @ 00482630 name=FUN_00482630 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482630(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992470 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000482830 00482830_FUN_00482830 ====
void FUN_00482830(void);

// decompiled by BatchDecomp @ 00482830 name=FUN_00482830 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482830(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009924c0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000482880 00482880_FUN_00482880 ====
void FUN_00482880(void);

// decompiled by BatchDecomp @ 00482880 name=FUN_00482880 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482880(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009924b0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000482a80 00482a80_FUN_00482a80 ====
void FUN_00482a80(void);

// decompiled by BatchDecomp @ 00482a80 name=FUN_00482a80 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482a80(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992528 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000482ad0 00482ad0_FUN_00482ad0 ====
void FUN_00482ad0(void);

// decompiled by BatchDecomp @ 00482ad0 name=FUN_00482ad0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482ad0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992518 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000482cd0 00482cd0_FUN_00482cd0 ====
void FUN_00482cd0(void);

// decompiled by BatchDecomp @ 00482cd0 name=FUN_00482cd0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482cd0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992588 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000482d90 00482d90_FUN_00482d90 ====
void FUN_00482d90(void);

// decompiled by BatchDecomp @ 00482d90 name=FUN_00482d90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482d90(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992578 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000482f90 00482f90_FUN_00482f90 ====
void FUN_00482f90(void);

// decompiled by BatchDecomp @ 00482f90 name=FUN_00482f90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482f90(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992608 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000482ff0 00482ff0_FUN_00482ff0 ====
void FUN_00482ff0(void);

// decompiled by BatchDecomp @ 00482ff0 name=FUN_00482ff0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482ff0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009925f8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000483380 00483380_FUN_00483380 ====
void FUN_00483380(void);

// decompiled by BatchDecomp @ 00483380 name=FUN_00483380 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483380(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009929e8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004833d0 004833d0_FUN_004833d0 ====
void FUN_004833d0(void);

// decompiled by BatchDecomp @ 004833d0 name=FUN_004833d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004833d0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009929d8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004837a0 004837a0_FUN_004837a0 ====
void FUN_004837a0(void);

// decompiled by BatchDecomp @ 004837a0 name=FUN_004837a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004837a0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992a68 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004837f0 004837f0_FUN_004837f0 ====
void FUN_004837f0(void);

// decompiled by BatchDecomp @ 004837f0 name=FUN_004837f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004837f0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992a58 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004839f0 004839f0_FUN_004839f0 ====
void FUN_004839f0(void);

// decompiled by BatchDecomp @ 004839f0 name=FUN_004839f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004839f0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992ae8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000483a40 00483a40_FUN_00483a40 ====
void FUN_00483a40(void);

// decompiled by BatchDecomp @ 00483a40 name=FUN_00483a40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483a40(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992ad8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000483dd0 00483dd0_FUN_00483dd0 ====
void FUN_00483dd0(void);

// decompiled by BatchDecomp @ 00483dd0 name=FUN_00483dd0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483dd0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992b80 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000483e20 00483e20_FUN_00483e20 ====
void FUN_00483e20(void);

// decompiled by BatchDecomp @ 00483e20 name=FUN_00483e20 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483e20(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992b70 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004841b0 004841b0_FUN_004841b0 ====
void FUN_004841b0(void);

// decompiled by BatchDecomp @ 004841b0 name=FUN_004841b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004841b0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992bf8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000484200 00484200_FUN_00484200 ====
void FUN_00484200(void);

// decompiled by BatchDecomp @ 00484200 name=FUN_00484200 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484200(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992be8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000484400 00484400_FUN_00484400 ====
void FUN_00484400(void);

// decompiled by BatchDecomp @ 00484400 name=FUN_00484400 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484400(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992c58 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000484450 00484450_FUN_00484450 ====
void FUN_00484450(void);

// decompiled by BatchDecomp @ 00484450 name=FUN_00484450 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484450(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992c48 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004844c0 004844c0_FUN_004844c0 ====
void FUN_004844c0(void);

// decompiled by BatchDecomp @ 004844c0 name=FUN_004844c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004844c0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992c98 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000484510 00484510_FUN_00484510 ====
void FUN_00484510(void);

// decompiled by BatchDecomp @ 00484510 name=FUN_00484510 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484510(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992c88 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004848a0 004848a0_FUN_004848a0 ====
void FUN_004848a0(void);

// decompiled by BatchDecomp @ 004848a0 name=FUN_004848a0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004848a0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992d38 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004848f0 004848f0_FUN_004848f0 ====
void FUN_004848f0(void);

// decompiled by BatchDecomp @ 004848f0 name=FUN_004848f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004848f0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992d28 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000484c80 00484c80_FUN_00484c80 ====
void FUN_00484c80(void);

// decompiled by BatchDecomp @ 00484c80 name=FUN_00484c80 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484c80(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992dd0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000484cd0 00484cd0_FUN_00484cd0 ====
void FUN_00484cd0(void);

// decompiled by BatchDecomp @ 00484cd0 name=FUN_00484cd0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484cd0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992dc0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000485060 00485060_FUN_00485060 ====
void FUN_00485060(void);

// decompiled by BatchDecomp @ 00485060 name=FUN_00485060 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485060(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992e68 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 00004850b0 004850b0_FUN_004850b0 ====
void FUN_004850b0(void);

// decompiled by BatchDecomp @ 004850b0 name=FUN_004850b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004850b0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992e58 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004854c0 004854c0_FUN_004854c0 ====
void FUN_004854c0(void);

// decompiled by BatchDecomp @ 004854c0 name=FUN_004854c0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004854c0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992ee0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000485510 00485510_FUN_00485510 ====
void FUN_00485510(void);

// decompiled by BatchDecomp @ 00485510 name=FUN_00485510 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485510(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992ed0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000485710 00485710_FUN_00485710 ====
void FUN_00485710(void);

// decompiled by BatchDecomp @ 00485710 name=FUN_00485710 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485710(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992f60 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000485760 00485760_FUN_00485760 ====
void FUN_00485760(void);

// decompiled by BatchDecomp @ 00485760 name=FUN_00485760 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485760(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992f50 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000485af0 00485af0_FUN_00485af0 ====
void FUN_00485af0(void);

// decompiled by BatchDecomp @ 00485af0 name=FUN_00485af0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485af0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992fd8 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000485b40 00485b40_FUN_00485b40 ====
void FUN_00485b40(void);

// decompiled by BatchDecomp @ 00485b40 name=FUN_00485b40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485b40(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992fc8 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000485d40 00485d40_FUN_00485d40 ====
void FUN_00485d40(void);

// decompiled by BatchDecomp @ 00485d40 name=FUN_00485d40 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485d40(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993038 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000485d90 00485d90_FUN_00485d90 ====
void FUN_00485d90(void);

// decompiled by BatchDecomp @ 00485d90 name=FUN_00485d90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485d90(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993028 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000485f90 00485f90_FUN_00485f90 ====
void FUN_00485f90(void);

// decompiled by BatchDecomp @ 00485f90 name=FUN_00485f90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485f90(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993098 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000485ff0 00485ff0_FUN_00485ff0 ====
void FUN_00485ff0(void);

// decompiled by BatchDecomp @ 00485ff0 name=FUN_00485ff0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485ff0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993088 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004861f0 004861f0_FUN_004861f0 ====
void FUN_004861f0(void);

// decompiled by BatchDecomp @ 004861f0 name=FUN_004861f0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004861f0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993118 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000486240 00486240_FUN_00486240 ====
void FUN_00486240(void);

// decompiled by BatchDecomp @ 00486240 name=FUN_00486240 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486240(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993108 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004865d0 004865d0_FUN_004865d0 ====
void FUN_004865d0(void);

// decompiled by BatchDecomp @ 004865d0 name=FUN_004865d0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004865d0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009931b0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000486620 00486620_FUN_00486620 ====
void FUN_00486620(void);

// decompiled by BatchDecomp @ 00486620 name=FUN_00486620 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486620(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009931a0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 00004869b0 004869b0_FUN_004869b0 ====
void FUN_004869b0(void);

// decompiled by BatchDecomp @ 004869b0 name=FUN_004869b0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004869b0(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993250 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000486a00 00486a00_FUN_00486a00 ====
void FUN_00486a00(void);

// decompiled by BatchDecomp @ 00486a00 name=FUN_00486a00 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486a00(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993240 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000486d90 00486d90_FUN_00486d90 ====
void FUN_00486d90(void);

// decompiled by BatchDecomp @ 00486d90 name=FUN_00486d90 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486d90(void)

{
  double dVar1;
  
  dVar1 = /*4008000000000000*/3.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009932d0 = (dVar1 * /*400921fb54442d18*/3.141592653589793) / /*4018000000000000*/6.0;
  return;
}


//==== 0000486de0 00486de0_FUN_00486de0 ====
void FUN_00486de0(void);

// decompiled by BatchDecomp @ 00486de0 name=FUN_00486de0 conv=unknown body=47

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486de0(void)

{
  double dVar1;
  
  dVar1 = /*4014000000000000*/5.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009932c0 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  return;
}


//==== 0000587140 00587140_GetAllObjectsRadius_km ====
// decompiled by BatchDecomp @ 00587140 name=GetAllObjectsRadius_km conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall ModuleDesignManager__GetAllObjectsRadius_km(void)const  */

double __thiscall ModuleDesignManager__GetAllObjectsRadius_km(ModuleDesignManager *this)

{
  UIWidget *this_00;
  bool bVar1;
  double dVar2;
  
  this_00 = (this->MessageBoxA).MessageBoxA.Pointer;
  if (this_00 != (UIWidget *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this_00);
    if (!bVar1) {
      (this->MessageBoxA).Parent = (Manager *)0x0;
    }
  }
  dVar2 = ObjectViewer__GetTotalSizeOfAllObjects_km((ObjectViewer *)(this->MessageBoxA).Parent);
  return dVar2;
}


//==== 00005a1b80 005a1b80_RenderSimple ====
// decompiled by BatchDecomp @ 005a1b80 name=RenderSimple conv=__thiscall body=35

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ModuleCompartment__RenderSimple(void)const  */

void __thiscall ModuleCompartment__RenderSimple(ModuleCompartment *this)

{
  (**(code **)(**(int **)&this->LostPower + 0x100))
            (___xmm_0000000000000000bff0000000000000,_UNK_0091ea14,_UNK_0091ea18,_UNK_0091ea1c,0);
  return;
}


//==== 00005a5690 005a5690_BuildExhaustPlumeModel ====
// decompiled by BatchDecomp @ 005a5690 name=BuildExhaustPlumeModel conv=__thiscall body=42

/* public: virtual void __thiscall CombustionRocketModule__BuildExhaustPlumeModel(void) */

void __thiscall CombustionRocketModule__BuildExhaustPlumeModel(CombustionRocketModule *this)

{
  int iVar1;
  int unaff_ESI;
  double dVar2;
  
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  dVar2 = EngineModule__GetExhaustPlumeStartingHeight_m((EngineModule *)this);
  ThermalRocketSubModule__BuildExhaustPlumeModel((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x0_0,
             (SharedPtr_L_struct_GameColorModel_G_ *)
             &(this->ThermalRocket).GetGasExpansionPlume_MemoizedValue.Data.DisableShimmer,
             (double)CONCAT44(iVar1,(int)((ulonglong)dVar2 >> 0x20)),unaff_ESI);
  return;
}


//==== 00005b76b0 005b76b0_BuildExhaustPlumeModel ====
// decompiled by BatchDecomp @ 005b76b0 name=BuildExhaustPlumeModel conv=__thiscall body=42

/* public: virtual void __thiscall NuclearThermalRocketModule__BuildExhaustPlumeModel(void) */

void __thiscall NuclearThermalRocketModule__BuildExhaustPlumeModel(NuclearThermalRocketModule *this)

{
  int iVar1;
  int unaff_ESI;
  double dVar2;
  
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  dVar2 = EngineModule__GetExhaustPlumeStartingHeight_m((EngineModule *)this);
  ThermalRocketSubModule__BuildExhaustPlumeModel((ThermalRocketSubModule *)&(this->ThermalRocket).Injector.PumpRadius_m,
             (SharedPtr_L_struct_GameColorModel_G_ *)&(this->NuclearReactor).AverageNeutronFlux__m2_s,
             (double)CONCAT44(iVar1,(int)((ulonglong)dVar2 >> 0x20)),unaff_ESI);
  return;
}


//==== 00005c0740 005c0740_BuildExhaustPlumeModel ====
// decompiled by BatchDecomp @ 005c0740 name=BuildExhaustPlumeModel conv=__thiscall body=42

/* public: virtual void __thiscall ResistojetModule__BuildExhaustPlumeModel(void) */

void __thiscall ResistojetModule__BuildExhaustPlumeModel(ResistojetModule *this)

{
  int iVar1;
  int unaff_ESI;
  double dVar2;
  
  iVar1 = EngineModule__GetAttachmentCount((EngineModule *)this);
  dVar2 = EngineModule__GetExhaustPlumeStartingHeight_m((EngineModule *)this);
  ThermalRocketSubModule__BuildExhaustPlumeModel((ThermalRocketSubModule *)&(this->ThermalRocket).Injector._pad_0x0_0,
             (SharedPtr_L_struct_GameColorModel_G_ *)
             &(this->ThermalRocket).GetExhaustPlumeModelRatio_MemoizedValue,
             (double)CONCAT44(iVar1,(int)((ulonglong)dVar2 >> 0x20)),unaff_ESI);
  return;
}


//==== 00005fbe20 005fbe20_EndOfSessionResolution ====
// decompiled by BatchDecomp @ 005fbe20 name=EndOfSessionResolution conv=__thiscall body=47

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall FlareCompartment__EndOfSessionResolution(void) */

bool __thiscall FlareCompartment__EndOfSessionResolution(FlareCompartment *this)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = ModuleCompartment__EndOfSessionResolution((ModuleCompartment *)this);
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar2) {
      this->_pad_0x0_0 = 0;
    }
  }
  Body__Destroy((Body *)this->_pad_0x0_0);
  return bVar1;
}


//==== 000064cad0 0064cad0_CancelLaunches ====
// decompiled by BatchDecomp @ 0064cad0 name=CancelLaunches conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LauncherSubCompartment__CancelLaunches(void) */

void __thiscall LauncherSubCompartment__CancelLaunches(LauncherSubCompartment *this)

{
  WeaponCompartment *pWVar1;
  undefined8 local_8;
  
  pWVar1 = this->Parent;
  ((slice_view *)&local_8)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_8)->_1_3_[0] | (((slice_view *)&local_8)->_1_3_[1] << 8) | (((slice_view *)&local_8)->_1_3_[2] << 16)) << 8));
  (pWVar1->PendingLaunchCount).Data = 0;
  *(undefined4 *)&(pWVar1->PendingLaunchCount).IsValidData = local_8;
  return;
}


//==== 00006acc00 006acc00_GetAllObjectsRadius_km ====
// decompiled by BatchDecomp @ 006acc00 name=GetAllObjectsRadius_km conv=__thiscall body=35

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall ShipDesignManager__GetAllObjectsRadius_km(void)const  */

double __thiscall ShipDesignManager__GetAllObjectsRadius_km(ShipDesignManager *this)

{
  ReferenceController *this_00;
  bool bVar1;
  double dVar2;
  
  this_00 = (this->ShipCategoryList).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->ShipCategoryList).Pointer = (UISelectListBox_L_ShipClass_G_ *)0x0;
    }
  }
  dVar2 = ObjectViewer__GetTotalSizeOfAllObjects_km((ObjectViewer *)(this->ShipCategoryList).Pointer);
  return dVar2;
}


//==== 0000710840 00710840_GetOrbitedBody ====
// decompiled by BatchDecomp @ 00710840 name=GetOrbitedBody conv=__thiscall body=41

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct CelestialBody * __thiscall FixedOrbit__GetOrbitedBody(void)const  */

CelestialBody * __thiscall FixedOrbit__GetOrbitedBody(FixedOrbit *this)

{
  ReferenceController *this_00;
  bool bVar1;
  CelestialBody *pCVar2;
  
  pCVar2 = (CelestialBody *)(this->OrbitedBody).Pointer;
  if (pCVar2 == (CelestialBody *)0x0) {
    this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if (this_00 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar1) {
        (this->OrbitedBody).Controller = (ReferenceController *)0x0;
      }
    }
    pCVar2 = (CelestialBody *)(this->OrbitedBody).Controller[6].WeakReferenceCount;
  }
  return pCVar2;
}


//==== 0000713680 00713680_IsCircular ====
// decompiled by BatchDecomp @ 00713680 name=IsCircular conv=__thiscall body=41

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__IsCircular(void)const  */

bool __thiscall FixedOrbit__IsCircular(FixedOrbit *this)

{
  double dVar1;
  
  dVar1 = util__Abs(&(this->Elements).InclinationToRelativePlane_degrees);
  return dVar1 <= /*3f1a36e2eb1c432d*/0.0001;
}


//==== 000079af40 0079af40_Tick ====
// decompiled by BatchDecomp @ 0079af40 name=Tick conv=__thiscall body=49

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ItineraryMarker__Tick(double) */

void __thiscall ItineraryMarker__Tick(ItineraryMarker *this,double param_1)

{
  UIZoomCrosshairs__Tick(&this->Zoom,param_1);
  ItineraryNode__CacheOffsetState(&this->NodeToMark,(StrategicManager *)this->_pad_0x0_0);
  return;
}


//==== 00007a8a20 007a8a20_RegenerateItineraryUI ====
// decompiled by BatchDecomp @ 007a8a20 name=RegenerateItineraryUI conv=__thiscall body=44

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall HUDStrategic__RegenerateItineraryUI(void) */

void __thiscall HUDStrategic__RegenerateItineraryUI(HUDStrategic *this)

{
  ReferenceController *this_00;
  bool bVar1;
  
  this_00 = (this->ItineraryUI).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->ItineraryUI).Pointer = (HUDItineraryInfoPanel *)0x0;
    }
  }
  HUDItineraryInfoPanel__Rebuild((this->ItineraryUI).Pointer);
  return;
}


//==== 00007aa490 007aa490_GetRadius ====
// decompiled by BatchDecomp @ 007aa490 name=GetRadius conv=__thiscall body=34

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual int __thiscall LagrangePointUIButton__GetRadius(void)const  */

int __thiscall LagrangePointUIButton__GetRadius(LagrangePointUIButton *this)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(*(int *)this + 0xd0))();
  return (int)(fVar1 + (float10)/*4008000000000000*/3.0);
}


//==== 00007aaab0 007aaab0_GetUISize ====
// decompiled by BatchDecomp @ 007aaab0 name=GetUISize conv=__thiscall body=38

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall LagrangePointUIButton__GetUISize(void)const  */

double __thiscall LagrangePointUIButton__GetUISize(LagrangePointUIButton *this)

{
  ReferenceController *this_00;
  bool bVar1;
  double dVar2;
  
  this_00 = (this->LPoint).Object.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->LPoint).Object.Pointer = (CelestialObject *)0x0;
    }
  }
  dVar2 = CelestialObject__GetLPointUIPixelRadius();
  return dVar2;
}


//==== 00007ab180 007ab180_IsVisible ====
// decompiled by BatchDecomp @ 007ab180 name=IsVisible conv=__thiscall body=34

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall CelestialObjectUIButton__IsVisible(void)const  */

bool __thiscall CelestialObjectUIButton__IsVisible(CelestialObjectUIButton *this)

{
  ReferenceController *this_00;
  bool bVar1;
  
  if (((this->Object).Pointer != (CelestialObject *)0x0) &&
     (this_00 = (this->Object).Controller, this_00 != (ReferenceController *)0x0)) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (bVar1) {
      return true;
    }
  }
  return false;
}


//==== 00007c21a0 007c21a0_GetManager ====
// decompiled by BatchDecomp @ 007c21a0 name=GetManager conv=__thiscall body=37

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: class TacticalManager * __thiscall Component__GetManager(void)const  */

TacticalManager * __thiscall Component__GetManager(Component *this)

{
  ReferenceController *this_00;
  bool bVar1;
  
  this_00 = (this->Parent).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->Parent).Pointer = (Body *)0x0;
    }
  }
  return ((this->Parent).Pointer)->ParentTactical;
}


//==== 0000807ea0 00807ea0_Hover ====
// decompiled by BatchDecomp @ 00807ea0 name=Hover conv=__thiscall body=31

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall OrderModeOverlay__Hover(struct util__Vec2_L_double_G_) */

bool __thiscall OrderModeOverlay__Hover(OrderModeOverlay *this,Vec2_L_double_G_ param_1)

{
  (this->CurrentMouseLocation).X = (int)param_1.X;
  (this->CurrentMouseLocation).Y = (int)param_1.Y;
  return true;
}


//==== 00008085a0 008085a0_Render3DTransparent ====
// decompiled by BatchDecomp @ 008085a0 name=Render3DTransparent conv=__thiscall body=40

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall OrderModeOverlay__Render3DTransparent(void)const  */

void __thiscall OrderModeOverlay__Render3DTransparent(OrderModeOverlay *this)

{
  glColor(DarkYellow,1.0);
  if (this->OrderMode != None) {
    DrawDirectionCircles(this);
    return;
  }
  return;
}


//==== 0000830350 00830350_IsArmorVisualizerEnabled ====
// decompiled by BatchDecomp @ 00830350 name=IsArmorVisualizerEnabled conv=__thiscall body=46

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall HUDTactical__IsArmorVisualizerEnabled(void)const  */

bool __thiscall HUDTactical__IsArmorVisualizerEnabled(HUDTactical *this)

{
  ReferenceController *this_00;
  bool bVar1;
  
  this_00 = (this->ModuleUI).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->ModuleUI).Pointer = (SpacecraftCompartmentUI *)0x0;
    }
  }
  return ((this->ModuleUI).Pointer)->ShowArmorVisualizer;
}


//==== 0000846e50 00846e50_FUN_00846e50 ====
extern undefined4 FUN_00846dc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined * FUN_00846e50(undefined4 param_1);

// decompiled by BatchDecomp @ 00846e50 name=FUN_00846e50 conv=unknown body=31

undefined * FUN_00846e50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00846dc0(param_1);
  if (-1 < iVar1) {
    return (&PTR____GLEW_VERSION_1_2_0095f510)[iVar1];
  }
  return (undefined *)0x0;
}


//==== 0000846e70 00846e70_FUN_00846e70 ====
extern undefined4 FUN_00846dc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
int FUN_00846e70(undefined4 param_1);

// decompiled by BatchDecomp @ 00846e70 name=FUN_00846e70 conv=unknown body=30

int FUN_00846e70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00846dc0(param_1);
  if (-1 < iVar1) {
    return (int)&DAT_0098c6f0 + iVar1;
  }
  return 0;
}


//==== 0000855d80 00855d80_FUN_00855d80 ====
void FUN_00855d80(char *param_1);

// decompiled by BatchDecomp @ 00855d80 name=FUN_00855d80 conv=unknown body=32

void FUN_00855d80(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while ((cVar2 != ' ' && (cVar2 != '\0'))) {
      pcVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar2 = *pcVar1;
    }
  }
  return;
}


//==== 00008dbf60 008dbf60___glfwAllocMonitor ====
// decompiled by BatchDecomp @ 008dbf60 name=__glfwAllocMonitor conv=unknown body=49

undefined4 * __glfwAllocMonitor(char *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  puVar1 = (undefined4 *)calloc(1,0x158);
  pcVar2 = _strdup(param_1);
  puVar1[1] = param_2;
  *puVar1 = pcVar2;
  puVar1[2] = param_3;
  return puVar1;
}


//==== 00008dcc40 008dcc40_glfwPollEvents ====
// decompiled by BatchDecomp @ 008dcc40 name=glfwPollEvents conv=__cdecl body=30

/* glfwPollEvents */

void __cdecl glfwPollEvents(void)

{
  if (__glfwInitialized == 0) {
    __glfwInputError(0x10001,0);
    return;
  }
  __glfwPlatformPollEvents();
  return;
}


//==== 00008dcee0 008dcee0___glfwInputScroll ====
// decompiled by BatchDecomp @ 008dcee0 name=__glfwInputScroll conv=unknown body=47

void __glfwInputScroll(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(code **)(param_1 + 0x26c) != (code *)0x0) {
    (**(code **)(param_1 + 0x26c))(param_1,param_2,param_3);
  }
  return;
}


//==== 00008de9b0 008de9b0___glfwPlatformCreateCursor ====
extern undefined4 FUN_008df6f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 008de9b0 name=__glfwPlatformCreateCursor conv=unknown body=39

bool __glfwPlatformCreateCursor
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_008df6f0(param_2,param_3,param_4,0);
  *(int *)(param_1 + 4) = iVar1;
  return iVar1 != 0;
}


//==== 00008deb60 008deb60___glfwPlatformFocusWindow ====
// decompiled by BatchDecomp @ 008deb60 name=__glfwPlatformFocusWindow conv=unknown body=43

void __glfwPlatformFocusWindow(int param_1)

{
  BringWindowToTop(*(HWND *)(param_1 + 0x280));
  SetForegroundWindow(*(HWND *)(param_1 + 0x280));
  SetFocus(*(HWND *)(param_1 + 0x280));
  return;
}


//==== 000090f330 0090f330_FUN_0090f330 ====
void FUN_0090f330(void);

// decompiled by BatchDecomp @ 0090f330 name=FUN_0090f330 conv=unknown body=29

void FUN_0090f330(void)

{
  if (DAT_00988970 != (void *)0x0) {
    operator_delete__(DAT_00988970);
    DAT_00988970 = (void *)0x0;
  }
  return;
}


//==== 000090f350 0090f350_FUN_0090f350 ====
void FUN_0090f350(void);

// decompiled by BatchDecomp @ 0090f350 name=FUN_0090f350 conv=unknown body=29

void FUN_0090f350(void)

{
  if (DAT_00988940 != (void *)0x0) {
    operator_delete__(DAT_00988940);
    DAT_00988940 = (void *)0x0;
  }
  return;
}


//==== 000090f850 0090f850_FUN_0090f850 ====
void FUN_0090f850(void);

// decompiled by BatchDecomp @ 0090f850 name=FUN_0090f850 conv=unknown body=29

void FUN_0090f850(void)

{
  if (DAT_00988c7c != (void *)0x0) {
    operator_delete__(DAT_00988c7c);
    DAT_00988c7c = (void *)0x0;
  }
  return;
}


//==== 000090f870 0090f870_FUN_0090f870 ====
void FUN_0090f870(void);

// decompiled by BatchDecomp @ 0090f870 name=FUN_0090f870 conv=unknown body=29

void FUN_0090f870(void)

{
  if (DAT_00988c34 != (void *)0x0) {
    operator_delete__(DAT_00988c34);
    DAT_00988c34 = (void *)0x0;
  }
  return;
}


//==== 000090f890 0090f890_FUN_0090f890 ====
void FUN_0090f890(void);

// decompiled by BatchDecomp @ 0090f890 name=FUN_0090f890 conv=unknown body=29

void FUN_0090f890(void)

{
  if (DAT_00988c64 != (void *)0x0) {
    operator_delete__(DAT_00988c64);
    DAT_00988c64 = (void *)0x0;
  }
  return;
}


//==== 000090f8b0 0090f8b0_FUN_0090f8b0 ====
void FUN_0090f8b0(void);

// decompiled by BatchDecomp @ 0090f8b0 name=FUN_0090f8b0 conv=unknown body=29

void FUN_0090f8b0(void)

{
  if (DAT_00988c58 != (void *)0x0) {
    operator_delete__(DAT_00988c58);
    DAT_00988c58 = (void *)0x0;
  }
  return;
}


//==== 000090f8d0 0090f8d0_FUN_0090f8d0 ====
void FUN_0090f8d0(void);

// decompiled by BatchDecomp @ 0090f8d0 name=FUN_0090f8d0 conv=unknown body=29

void FUN_0090f8d0(void)

{
  if (DAT_00988c94 != (void *)0x0) {
    operator_delete__(DAT_00988c94);
    DAT_00988c94 = (void *)0x0;
  }
  return;
}


//==== 000090f8f0 0090f8f0_FUN_0090f8f0 ====
void FUN_0090f8f0(void);

// decompiled by BatchDecomp @ 0090f8f0 name=FUN_0090f8f0 conv=unknown body=29

void FUN_0090f8f0(void)

{
  if (DAT_00988c28 != (void *)0x0) {
    operator_delete__(DAT_00988c28);
    DAT_00988c28 = (void *)0x0;
  }
  return;
}


//==== 000090f910 0090f910_FUN_0090f910 ====
void FUN_0090f910(void);

// decompiled by BatchDecomp @ 0090f910 name=FUN_0090f910 conv=unknown body=29

void FUN_0090f910(void)

{
  if (DAT_00988cac != (void *)0x0) {
    operator_delete__(DAT_00988cac);
    DAT_00988cac = (void *)0x0;
  }
  return;
}


//==== 000090f930 0090f930_FUN_0090f930 ====
void FUN_0090f930(void);

// decompiled by BatchDecomp @ 0090f930 name=FUN_0090f930 conv=unknown body=29

void FUN_0090f930(void)

{
  if (DAT_00988c88 != (void *)0x0) {
    operator_delete__(DAT_00988c88);
    DAT_00988c88 = (void *)0x0;
  }
  return;
}


//==== 000090f950 0090f950_FUN_0090f950 ====
void FUN_0090f950(void);

// decompiled by BatchDecomp @ 0090f950 name=FUN_0090f950 conv=unknown body=29

void FUN_0090f950(void)

{
  if (DAT_00988c4c != (void *)0x0) {
    operator_delete__(DAT_00988c4c);
    DAT_00988c4c = (void *)0x0;
  }
  return;
}


//==== 000090f970 0090f970_FUN_0090f970 ====
void FUN_0090f970(void);

// decompiled by BatchDecomp @ 0090f970 name=FUN_0090f970 conv=unknown body=29

void FUN_0090f970(void)

{
  if (DAT_00988c40 != (void *)0x0) {
    operator_delete__(DAT_00988c40);
    DAT_00988c40 = (void *)0x0;
  }
  return;
}


//==== 000090f990 0090f990_FUN_0090f990 ====
void FUN_0090f990(void);

// decompiled by BatchDecomp @ 0090f990 name=FUN_0090f990 conv=unknown body=29

void FUN_0090f990(void)

{
  if (DAT_00988cb8 != (void *)0x0) {
    operator_delete__(DAT_00988cb8);
    DAT_00988cb8 = (void *)0x0;
  }
  return;
}


//==== 000090f9b0 0090f9b0_FUN_0090f9b0 ====
void FUN_0090f9b0(void);

// decompiled by BatchDecomp @ 0090f9b0 name=FUN_0090f9b0 conv=unknown body=29

void FUN_0090f9b0(void)

{
  if (DAT_00988ca0 != (void *)0x0) {
    operator_delete__(DAT_00988ca0);
    DAT_00988ca0 = (void *)0x0;
  }
  return;
}


//==== 000090f9d0 0090f9d0_FUN_0090f9d0 ====
void FUN_0090f9d0(void);

// decompiled by BatchDecomp @ 0090f9d0 name=FUN_0090f9d0 conv=unknown body=29

void FUN_0090f9d0(void)

{
  if (DAT_00988c70 != (void *)0x0) {
    operator_delete__(DAT_00988c70);
    DAT_00988c70 = (void *)0x0;
  }
  return;
}


//==== 0000910030 00910030_FUN_00910030 ====
void FUN_00910030(void);

// decompiled by BatchDecomp @ 00910030 name=FUN_00910030 conv=unknown body=29

void FUN_00910030(void)

{
  if (DAT_00989600 != (void *)0x0) {
    operator_delete__(DAT_00989600);
    DAT_00989600 = (void *)0x0;
  }
  return;
}


//==== 0000910170 00910170_FUN_00910170 ====
void FUN_00910170(void);

// decompiled by BatchDecomp @ 00910170 name=FUN_00910170 conv=unknown body=29

void FUN_00910170(void)

{
  if (DAT_009896ac != (void *)0x0) {
    operator_delete__(DAT_009896ac);
    DAT_009896ac = (void *)0x0;
  }
  return;
}


//==== 0000910190 00910190_FUN_00910190 ====
void FUN_00910190(void);

// decompiled by BatchDecomp @ 00910190 name=FUN_00910190 conv=unknown body=29

void FUN_00910190(void)

{
  if (DAT_009896a0 != (void *)0x0) {
    operator_delete__(DAT_009896a0);
    DAT_009896a0 = (void *)0x0;
  }
  return;
}


//==== 0000910270 00910270_FUN_00910270 ====
void FUN_00910270(void);

// decompiled by BatchDecomp @ 00910270 name=FUN_00910270 conv=unknown body=29

void FUN_00910270(void)

{
  if (DAT_009897c4 != (void *)0x0) {
    operator_delete__(DAT_009897c4);
    DAT_009897c4 = (void *)0x0;
  }
  return;
}


//==== 0000910290 00910290_FUN_00910290 ====
void FUN_00910290(void);

// decompiled by BatchDecomp @ 00910290 name=FUN_00910290 conv=unknown body=29

void FUN_00910290(void)

{
  if (DAT_009897b8 != (void *)0x0) {
    operator_delete__(DAT_009897b8);
    DAT_009897b8 = (void *)0x0;
  }
  return;
}


//==== 0000910370 00910370_FUN_00910370 ====
void FUN_00910370(void);

// decompiled by BatchDecomp @ 00910370 name=FUN_00910370 conv=unknown body=29

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910370(void)

{
  if (_CurrentShaders != (void *)0x0) {
    operator_delete__(_CurrentShaders);
  }
  _CurrentShaders = (void *)0x0;
  return;
}


//==== 00009103a0 009103a0_FUN_009103a0 ====
void FUN_009103a0(void);

// decompiled by BatchDecomp @ 009103a0 name=FUN_009103a0 conv=unknown body=29

void FUN_009103a0(void)

{
  if (DAT_00989830 != (void *)0x0) {
    operator_delete__(DAT_00989830);
    DAT_00989830 = (void *)0x0;
  }
  return;
}


//==== 0000910630 00910630_FUN_00910630 ====
void FUN_00910630(void);

// decompiled by BatchDecomp @ 00910630 name=FUN_00910630 conv=unknown body=29

void FUN_00910630(void)

{
  if (DAT_0098c9b0 != (void *)0x0) {
    operator_delete__(DAT_0098c9b0);
    DAT_0098c9b0 = (void *)0x0;
  }
  return;
}


//==== 0000910650 00910650_FUN_00910650 ====
void FUN_00910650(void);

// decompiled by BatchDecomp @ 00910650 name=FUN_00910650 conv=unknown body=29

void FUN_00910650(void)

{
  if (DAT_0098c9dc != (void *)0x0) {
    operator_delete__(DAT_0098c9dc);
    DAT_0098c9dc = (void *)0x0;
  }
  return;
}


//==== 0000910670 00910670_FUN_00910670 ====
void FUN_00910670(void);

// decompiled by BatchDecomp @ 00910670 name=FUN_00910670 conv=unknown body=29

void FUN_00910670(void)

{
  if (DAT_0098ca14 != (void *)0x0) {
    operator_delete__(DAT_0098ca14);
    DAT_0098ca14 = (void *)0x0;
  }
  return;
}


//==== 0000910690 00910690_FUN_00910690 ====
void FUN_00910690(void);

// decompiled by BatchDecomp @ 00910690 name=FUN_00910690 conv=unknown body=29

void FUN_00910690(void)

{
  if (DAT_0098ca08 != (void *)0x0) {
    operator_delete__(DAT_0098ca08);
    DAT_0098ca08 = (void *)0x0;
  }
  return;
}


//==== 0000910770 00910770_FUN_00910770 ====
void FUN_00910770(void);

// decompiled by BatchDecomp @ 00910770 name=FUN_00910770 conv=unknown body=29

void FUN_00910770(void)

{
  if (DAT_0098c984 != (void *)0x0) {
    operator_delete__(DAT_0098c984);
    DAT_0098c984 = (void *)0x0;
  }
  return;
}


//==== 00009107d0 009107d0_FUN_009107d0 ====
void FUN_009107d0(void);

// decompiled by BatchDecomp @ 009107d0 name=FUN_009107d0 conv=unknown body=29

void FUN_009107d0(void)

{
  if (DAT_0098ca78 != (void *)0x0) {
    operator_delete__(DAT_0098ca78);
    DAT_0098ca78 = (void *)0x0;
  }
  return;
}


//==== 00009109b0 009109b0_FUN_009109b0 ====
void FUN_009109b0(void);

// decompiled by BatchDecomp @ 009109b0 name=FUN_009109b0 conv=unknown body=29

void FUN_009109b0(void)

{
  if (DAT_0098cb44 != (void *)0x0) {
    operator_delete__(DAT_0098cb44);
    DAT_0098cb44 = (void *)0x0;
  }
  return;
}


//==== 00009109d0 009109d0_FUN_009109d0 ====
void FUN_009109d0(void);

// decompiled by BatchDecomp @ 009109d0 name=FUN_009109d0 conv=unknown body=29

void FUN_009109d0(void)

{
  if (DAT_0098cb38 != (void *)0x0) {
    operator_delete__(DAT_0098cb38);
    DAT_0098cb38 = (void *)0x0;
  }
  return;
}


//==== 0000910ab0 00910ab0_FUN_00910ab0 ====
void FUN_00910ab0(void);

// decompiled by BatchDecomp @ 00910ab0 name=FUN_00910ab0 conv=unknown body=29

void FUN_00910ab0(void)

{
  if (DAT_0098cc68 != (void *)0x0) {
    operator_delete__(DAT_0098cc68);
    DAT_0098cc68 = (void *)0x0;
  }
  return;
}


//==== 0000910b50 00910b50_FUN_00910b50 ====
void FUN_00910b50(void);

// decompiled by BatchDecomp @ 00910b50 name=FUN_00910b50 conv=unknown body=29

void FUN_00910b50(void)

{
  if (DAT_0098cd1c != (void *)0x0) {
    operator_delete__(DAT_0098cd1c);
    DAT_0098cd1c = (void *)0x0;
  }
  return;
}


//==== 0000910b70 00910b70_FUN_00910b70 ====
void FUN_00910b70(void);

// decompiled by BatchDecomp @ 00910b70 name=FUN_00910b70 conv=unknown body=29

void FUN_00910b70(void)

{
  if (DAT_0098cd10 != (void *)0x0) {
    operator_delete__(DAT_0098cd10);
    DAT_0098cd10 = (void *)0x0;
  }
  return;
}


//==== 0000910f50 00910f50_FUN_00910f50 ====
void FUN_00910f50(void);

// decompiled by BatchDecomp @ 00910f50 name=FUN_00910f50 conv=unknown body=29

void FUN_00910f50(void)

{
  if (DAT_0098cdc4 != (void *)0x0) {
    operator_delete__(DAT_0098cdc4);
    DAT_0098cdc4 = (void *)0x0;
  }
  return;
}


//==== 0000910f70 00910f70_FUN_00910f70 ====
void FUN_00910f70(void);

// decompiled by BatchDecomp @ 00910f70 name=FUN_00910f70 conv=unknown body=29

void FUN_00910f70(void)

{
  if (DAT_0098cdb8 != (void *)0x0) {
    operator_delete__(DAT_0098cdb8);
    DAT_0098cdb8 = (void *)0x0;
  }
  return;
}


//==== 0000911350 00911350_FUN_00911350 ====
void FUN_00911350(void);

// decompiled by BatchDecomp @ 00911350 name=FUN_00911350 conv=unknown body=29

void FUN_00911350(void)

{
  if (DAT_0098d09c != (void *)0x0) {
    operator_delete__(DAT_0098d09c);
    DAT_0098d09c = (void *)0x0;
  }
  return;
}


//==== 0000911370 00911370_FUN_00911370 ====
void FUN_00911370(void);

// decompiled by BatchDecomp @ 00911370 name=FUN_00911370 conv=unknown body=29

void FUN_00911370(void)

{
  if (DAT_0098d090 != (void *)0x0) {
    operator_delete__(DAT_0098d090);
    DAT_0098d090 = (void *)0x0;
  }
  return;
}


//==== 0000911490 00911490_FUN_00911490 ====
void FUN_00911490(void);

// decompiled by BatchDecomp @ 00911490 name=FUN_00911490 conv=unknown body=29

void FUN_00911490(void)

{
  if (DAT_0098d110 != (void *)0x0) {
    operator_delete__(DAT_0098d110);
    DAT_0098d110 = (void *)0x0;
  }
  return;
}


//==== 0000911510 00911510_FUN_00911510 ====
void FUN_00911510(void);

// decompiled by BatchDecomp @ 00911510 name=FUN_00911510 conv=unknown body=29

void FUN_00911510(void)

{
  if (DAT_0098d214 != (void *)0x0) {
    operator_delete__(DAT_0098d214);
    DAT_0098d214 = (void *)0x0;
  }
  return;
}


//==== 0000911530 00911530_FUN_00911530 ====
void FUN_00911530(void);

// decompiled by BatchDecomp @ 00911530 name=FUN_00911530 conv=unknown body=29

void FUN_00911530(void)

{
  if (DAT_0098d208 != (void *)0x0) {
    operator_delete__(DAT_0098d208);
    DAT_0098d208 = (void *)0x0;
  }
  return;
}


//==== 0000911610 00911610_FUN_00911610 ====
void FUN_00911610(void);

// decompiled by BatchDecomp @ 00911610 name=FUN_00911610 conv=unknown body=29

void FUN_00911610(void)

{
  if (DAT_0098d2ac != (void *)0x0) {
    operator_delete__(DAT_0098d2ac);
    DAT_0098d2ac = (void *)0x0;
  }
  return;
}


//==== 0000911630 00911630_FUN_00911630 ====
void FUN_00911630(void);

// decompiled by BatchDecomp @ 00911630 name=FUN_00911630 conv=unknown body=29

void FUN_00911630(void)

{
  if (DAT_0098d2a0 != (void *)0x0) {
    operator_delete__(DAT_0098d2a0);
    DAT_0098d2a0 = (void *)0x0;
  }
  return;
}


//==== 0000911740 00911740_FUN_00911740 ====
void FUN_00911740(void);

// decompiled by BatchDecomp @ 00911740 name=FUN_00911740 conv=unknown body=29

void FUN_00911740(void)

{
  if (DAT_0098d348 != (void *)0x0) {
    operator_delete__(DAT_0098d348);
    DAT_0098d348 = (void *)0x0;
  }
  return;
}


//==== 0000911760 00911760_FUN_00911760 ====
void FUN_00911760(void);

// decompiled by BatchDecomp @ 00911760 name=FUN_00911760 conv=unknown body=29

void FUN_00911760(void)

{
  if (DAT_0098d2dc != (void *)0x0) {
    operator_delete__(DAT_0098d2dc);
    DAT_0098d2dc = (void *)0x0;
  }
  return;
}


//==== 0000911840 00911840_FUN_00911840 ====
void FUN_00911840(void);

// decompiled by BatchDecomp @ 00911840 name=FUN_00911840 conv=unknown body=29

void FUN_00911840(void)

{
  if (DAT_0098d3b0 != (void *)0x0) {
    operator_delete__(DAT_0098d3b0);
    DAT_0098d3b0 = (void *)0x0;
  }
  return;
}


//==== 0000911860 00911860_FUN_00911860 ====
void FUN_00911860(void);

// decompiled by BatchDecomp @ 00911860 name=FUN_00911860 conv=unknown body=29

void FUN_00911860(void)

{
  if (DAT_0099224c != (void *)0x0) {
    operator_delete__(DAT_0099224c);
    DAT_0099224c = (void *)0x0;
  }
  return;
}


//==== 00009118e0 009118e0_FUN_009118e0 ====
void FUN_009118e0(void);

// decompiled by BatchDecomp @ 009118e0 name=FUN_009118e0 conv=unknown body=29

void FUN_009118e0(void)

{
  if (DAT_009922e4 != (void *)0x0) {
    operator_delete__(DAT_009922e4);
    DAT_009922e4 = (void *)0x0;
  }
  return;
}


//==== 0000911900 00911900_FUN_00911900 ====
void FUN_00911900(void);

// decompiled by BatchDecomp @ 00911900 name=FUN_00911900 conv=unknown body=29

void FUN_00911900(void)

{
  if (DAT_009922d8 != (void *)0x0) {
    operator_delete__(DAT_009922d8);
    DAT_009922d8 = (void *)0x0;
  }
  return;
}


//==== 00009119e0 009119e0_FUN_009119e0 ====
void FUN_009119e0(void);

// decompiled by BatchDecomp @ 009119e0 name=FUN_009119e0 conv=unknown body=29

void FUN_009119e0(void)

{
  if (DAT_0099237c != (void *)0x0) {
    operator_delete__(DAT_0099237c);
    DAT_0099237c = (void *)0x0;
  }
  return;
}


//==== 0000911a00 00911a00_FUN_00911a00 ====
void FUN_00911a00(void);

// decompiled by BatchDecomp @ 00911a00 name=FUN_00911a00 conv=unknown body=29

void FUN_00911a00(void)

{
  if (DAT_00992370 != (void *)0x0) {
    operator_delete__(DAT_00992370);
    DAT_00992370 = (void *)0x0;
  }
  return;
}


//==== 0000911ae0 00911ae0_FUN_00911ae0 ====
void FUN_00911ae0(void);

// decompiled by BatchDecomp @ 00911ae0 name=FUN_00911ae0 conv=unknown body=29

void FUN_00911ae0(void)

{
  if (DAT_00992414 != (void *)0x0) {
    operator_delete__(DAT_00992414);
    DAT_00992414 = (void *)0x0;
  }
  return;
}


//==== 0000911b00 00911b00_FUN_00911b00 ====
void FUN_00911b00(void);

// decompiled by BatchDecomp @ 00911b00 name=FUN_00911b00 conv=unknown body=29

void FUN_00911b00(void)

{
  if (DAT_00992408 != (void *)0x0) {
    operator_delete__(DAT_00992408);
    DAT_00992408 = (void *)0x0;
  }
  return;
}


//==== 0000911be0 00911be0_FUN_00911be0 ====
void FUN_00911be0(void);

// decompiled by BatchDecomp @ 00911be0 name=FUN_00911be0 conv=unknown body=29

void FUN_00911be0(void)

{
  if (DAT_00992498 != (void *)0x0) {
    operator_delete__(DAT_00992498);
    DAT_00992498 = (void *)0x0;
  }
  return;
}


//==== 0000911c60 00911c60_FUN_00911c60 ====
void FUN_00911c60(void);

// decompiled by BatchDecomp @ 00911c60 name=FUN_00911c60 conv=unknown body=29

void FUN_00911c60(void)

{
  if (DAT_009924f8 != (void *)0x0) {
    operator_delete__(DAT_009924f8);
    DAT_009924f8 = (void *)0x0;
  }
  return;
}


//==== 0000911ce0 00911ce0_FUN_00911ce0 ====
void FUN_00911ce0(void);

// decompiled by BatchDecomp @ 00911ce0 name=FUN_00911ce0 conv=unknown body=29

void FUN_00911ce0(void)

{
  if (DAT_00992560 != (void *)0x0) {
    operator_delete__(DAT_00992560);
    DAT_00992560 = (void *)0x0;
  }
  return;
}


//==== 0000911da0 00911da0_FUN_00911da0 ====
void FUN_00911da0(void);

// decompiled by BatchDecomp @ 00911da0 name=FUN_00911da0 conv=unknown body=29

void FUN_00911da0(void)

{
  if (DAT_009925c0 != (void *)0x0) {
    operator_delete__(DAT_009925c0);
    DAT_009925c0 = (void *)0x0;
  }
  return;
}


//==== 0000911e20 00911e20_FUN_00911e20 ====
void FUN_00911e20(void);

// decompiled by BatchDecomp @ 00911e20 name=FUN_00911e20 conv=unknown body=29

void FUN_00911e20(void)

{
  if (DAT_0099265c != (void *)0x0) {
    operator_delete__(DAT_0099265c);
    DAT_0099265c = (void *)0x0;
  }
  return;
}


//==== 0000911e40 00911e40_FUN_00911e40 ====
void FUN_00911e40(void);

// decompiled by BatchDecomp @ 00911e40 name=FUN_00911e40 conv=unknown body=29

void FUN_00911e40(void)

{
  if (DAT_00992650 != (void *)0x0) {
    operator_delete__(DAT_00992650);
    DAT_00992650 = (void *)0x0;
  }
  return;
}


//==== 0000911fc0 00911fc0_FUN_00911fc0 ====
void FUN_00911fc0(void);

// decompiled by BatchDecomp @ 00911fc0 name=FUN_00911fc0 conv=unknown body=29

void FUN_00911fc0(void)

{
  if (DAT_00992a40 != (void *)0x0) {
    operator_delete__(DAT_00992a40);
    DAT_00992a40 = (void *)0x0;
  }
  return;
}


//==== 0000911fe0 00911fe0_FUN_00911fe0 ====
void FUN_00911fe0(void);

// decompiled by BatchDecomp @ 00911fe0 name=FUN_00911fe0 conv=unknown body=29

void FUN_00911fe0(void)

{
  if (DAT_00992a34 != (void *)0x0) {
    operator_delete__(DAT_00992a34);
    DAT_00992a34 = (void *)0x0;
  }
  return;
}


//==== 00009120c0 009120c0_FUN_009120c0 ====
void FUN_009120c0(void);

// decompiled by BatchDecomp @ 009120c0 name=FUN_009120c0 conv=unknown body=29

void FUN_009120c0(void)

{
  if (DAT_00992aa0 != (void *)0x0) {
    operator_delete__(DAT_00992aa0);
    DAT_00992aa0 = (void *)0x0;
  }
  return;
}


//==== 0000912140 00912140_FUN_00912140 ====
void FUN_00912140(void);

// decompiled by BatchDecomp @ 00912140 name=FUN_00912140 conv=unknown body=29

void FUN_00912140(void)

{
  if (DAT_00992b3c != (void *)0x0) {
    operator_delete__(DAT_00992b3c);
    DAT_00992b3c = (void *)0x0;
  }
  return;
}


//==== 0000912160 00912160_FUN_00912160 ====
void FUN_00912160(void);

// decompiled by BatchDecomp @ 00912160 name=FUN_00912160 conv=unknown body=29

void FUN_00912160(void)

{
  if (DAT_00992b30 != (void *)0x0) {
    operator_delete__(DAT_00992b30);
    DAT_00992b30 = (void *)0x0;
  }
  return;
}


//==== 0000912240 00912240_FUN_00912240 ====
void FUN_00912240(void);

// decompiled by BatchDecomp @ 00912240 name=FUN_00912240 conv=unknown body=29

void FUN_00912240(void)

{
  if (DAT_00992bd4 != (void *)0x0) {
    operator_delete__(DAT_00992bd4);
    DAT_00992bd4 = (void *)0x0;
  }
  return;
}


//==== 0000912260 00912260_FUN_00912260 ====
void FUN_00912260(void);

// decompiled by BatchDecomp @ 00912260 name=FUN_00912260 conv=unknown body=29

void FUN_00912260(void)

{
  if (DAT_00992bc8 != (void *)0x0) {
    operator_delete__(DAT_00992bc8);
    DAT_00992bc8 = (void *)0x0;
  }
  return;
}


//==== 0000912340 00912340_FUN_00912340 ====
void FUN_00912340(void);

// decompiled by BatchDecomp @ 00912340 name=FUN_00912340 conv=unknown body=29

void FUN_00912340(void)

{
  if (DAT_00992c30 != (void *)0x0) {
    operator_delete__(DAT_00992c30);
    DAT_00992c30 = (void *)0x0;
  }
  return;
}


//==== 0000912420 00912420_FUN_00912420 ====
void FUN_00912420(void);

// decompiled by BatchDecomp @ 00912420 name=FUN_00912420 conv=unknown body=29

void FUN_00912420(void)

{
  if (DAT_00992cec != (void *)0x0) {
    operator_delete__(DAT_00992cec);
    DAT_00992cec = (void *)0x0;
  }
  return;
}


//==== 0000912440 00912440_FUN_00912440 ====
void FUN_00912440(void);

// decompiled by BatchDecomp @ 00912440 name=FUN_00912440 conv=unknown body=29

void FUN_00912440(void)

{
  if (DAT_00992ce0 != (void *)0x0) {
    operator_delete__(DAT_00992ce0);
    DAT_00992ce0 = (void *)0x0;
  }
  return;
}


//==== 0000912520 00912520_FUN_00912520 ====
void FUN_00912520(void);

// decompiled by BatchDecomp @ 00912520 name=FUN_00912520 conv=unknown body=29

void FUN_00912520(void)

{
  if (DAT_00992d8c != (void *)0x0) {
    operator_delete__(DAT_00992d8c);
    DAT_00992d8c = (void *)0x0;
  }
  return;
}


//==== 0000912540 00912540_FUN_00912540 ====
void FUN_00912540(void);

// decompiled by BatchDecomp @ 00912540 name=FUN_00912540 conv=unknown body=29

void FUN_00912540(void)

{
  if (DAT_00992d80 != (void *)0x0) {
    operator_delete__(DAT_00992d80);
    DAT_00992d80 = (void *)0x0;
  }
  return;
}


//==== 0000912620 00912620_FUN_00912620 ====
void FUN_00912620(void);

// decompiled by BatchDecomp @ 00912620 name=FUN_00912620 conv=unknown body=29

void FUN_00912620(void)

{
  if (DAT_00992e24 != (void *)0x0) {
    operator_delete__(DAT_00992e24);
    DAT_00992e24 = (void *)0x0;
  }
  return;
}


//==== 0000912640 00912640_FUN_00912640 ====
void FUN_00912640(void);

// decompiled by BatchDecomp @ 00912640 name=FUN_00912640 conv=unknown body=29

void FUN_00912640(void)

{
  if (DAT_00992e18 != (void *)0x0) {
    operator_delete__(DAT_00992e18);
    DAT_00992e18 = (void *)0x0;
  }
  return;
}


//==== 0000912720 00912720_FUN_00912720 ====
void FUN_00912720(void);

// decompiled by BatchDecomp @ 00912720 name=FUN_00912720 conv=unknown body=29

void FUN_00912720(void)

{
  if (DAT_00992ebc != (void *)0x0) {
    operator_delete__(DAT_00992ebc);
    DAT_00992ebc = (void *)0x0;
  }
  return;
}


//==== 0000912740 00912740_FUN_00912740 ====
void FUN_00912740(void);

// decompiled by BatchDecomp @ 00912740 name=FUN_00912740 conv=unknown body=29

void FUN_00912740(void)

{
  if (DAT_00992eb0 != (void *)0x0) {
    operator_delete__(DAT_00992eb0);
    DAT_00992eb0 = (void *)0x0;
  }
  return;
}


//==== 0000912860 00912860_FUN_00912860 ====
void FUN_00912860(void);

// decompiled by BatchDecomp @ 00912860 name=FUN_00912860 conv=unknown body=29

void FUN_00912860(void)

{
  if (DAT_00992f18 != (void *)0x0) {
    operator_delete__(DAT_00992f18);
    DAT_00992f18 = (void *)0x0;
  }
  return;
}


//==== 00009128e0 009128e0_FUN_009128e0 ====
void FUN_009128e0(void);

// decompiled by BatchDecomp @ 009128e0 name=FUN_009128e0 conv=unknown body=29

void FUN_009128e0(void)

{
  if (DAT_00992fb4 != (void *)0x0) {
    operator_delete__(DAT_00992fb4);
    DAT_00992fb4 = (void *)0x0;
  }
  return;
}


//==== 0000912900 00912900_FUN_00912900 ====
void FUN_00912900(void);

// decompiled by BatchDecomp @ 00912900 name=FUN_00912900 conv=unknown body=29

void FUN_00912900(void)

{
  if (DAT_00992fa8 != (void *)0x0) {
    operator_delete__(DAT_00992fa8);
    DAT_00992fa8 = (void *)0x0;
  }
  return;
}


//==== 00009129e0 009129e0_FUN_009129e0 ====
void FUN_009129e0(void);

// decompiled by BatchDecomp @ 009129e0 name=FUN_009129e0 conv=unknown body=29

void FUN_009129e0(void)

{
  if (DAT_00993010 != (void *)0x0) {
    operator_delete__(DAT_00993010);
    DAT_00993010 = (void *)0x0;
  }
  return;
}


//==== 0000912a60 00912a60_FUN_00912a60 ====
void FUN_00912a60(void);

// decompiled by BatchDecomp @ 00912a60 name=FUN_00912a60 conv=unknown body=29

void FUN_00912a60(void)

{
  if (DAT_00993070 != (void *)0x0) {
    operator_delete__(DAT_00993070);
    DAT_00993070 = (void *)0x0;
  }
  return;
}


//==== 0000912ae0 00912ae0_FUN_00912ae0 ====
void FUN_00912ae0(void);

// decompiled by BatchDecomp @ 00912ae0 name=FUN_00912ae0 conv=unknown body=29

void FUN_00912ae0(void)

{
  if (DAT_009930d0 != (void *)0x0) {
    operator_delete__(DAT_009930d0);
    DAT_009930d0 = (void *)0x0;
  }
  return;
}


//==== 0000912b60 00912b60_FUN_00912b60 ====
void FUN_00912b60(void);

// decompiled by BatchDecomp @ 00912b60 name=FUN_00912b60 conv=unknown body=29

void FUN_00912b60(void)

{
  if (DAT_0099316c != (void *)0x0) {
    operator_delete__(DAT_0099316c);
    DAT_0099316c = (void *)0x0;
  }
  return;
}


//==== 0000912b80 00912b80_FUN_00912b80 ====
void FUN_00912b80(void);

// decompiled by BatchDecomp @ 00912b80 name=FUN_00912b80 conv=unknown body=29

void FUN_00912b80(void)

{
  if (DAT_00993160 != (void *)0x0) {
    operator_delete__(DAT_00993160);
    DAT_00993160 = (void *)0x0;
  }
  return;
}


//==== 0000912c60 00912c60_FUN_00912c60 ====
void FUN_00912c60(void);

// decompiled by BatchDecomp @ 00912c60 name=FUN_00912c60 conv=unknown body=29

void FUN_00912c60(void)

{
  if (DAT_00993204 != (void *)0x0) {
    operator_delete__(DAT_00993204);
    DAT_00993204 = (void *)0x0;
  }
  return;
}


//==== 0000912c80 00912c80_FUN_00912c80 ====
void FUN_00912c80(void);

// decompiled by BatchDecomp @ 00912c80 name=FUN_00912c80 conv=unknown body=29

void FUN_00912c80(void)

{
  if (DAT_009931f8 != (void *)0x0) {
    operator_delete__(DAT_009931f8);
    DAT_009931f8 = (void *)0x0;
  }
  return;
}


//==== 0000912d60 00912d60_FUN_00912d60 ====
void FUN_00912d60(void);

// decompiled by BatchDecomp @ 00912d60 name=FUN_00912d60 conv=unknown body=29

void FUN_00912d60(void)

{
  if (DAT_009932a4 != (void *)0x0) {
    operator_delete__(DAT_009932a4);
    DAT_009932a4 = (void *)0x0;
  }
  return;
}


//==== 0000912d80 00912d80_FUN_00912d80 ====
void FUN_00912d80(void);

// decompiled by BatchDecomp @ 00912d80 name=FUN_00912d80 conv=unknown body=29

void FUN_00912d80(void)

{
  if (DAT_00993298 != (void *)0x0) {
    operator_delete__(DAT_00993298);
    DAT_00993298 = (void *)0x0;
  }
  return;
}


//==== 0000912e60 00912e60_FUN_00912e60 ====
void FUN_00912e60(void);

// decompiled by BatchDecomp @ 00912e60 name=FUN_00912e60 conv=unknown body=29

void FUN_00912e60(void)

{
  if (DAT_00993308 != (void *)0x0) {
    operator_delete__(DAT_00993308);
    DAT_00993308 = (void *)0x0;
  }
  return;
}

