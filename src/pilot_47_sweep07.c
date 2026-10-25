// pilot_sweep_sweep07.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
#include "port_prelude.h"
typedef union {
  undefined1 raw[32];
} slice_view;
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define _DAT_00968b0c (*(undefined1 *)(0x00968b0cu))
#define _DAT_00969328 (*(undefined1 *)(0x00969328u))
#define _DAT_00969338 (*(undefined1 *)(0x00969338u))
#define _DAT_00969348 (*(undefined1 *)(0x00969348u))
#define _DAT_00969358 (*(undefined1 *)(0x00969358u))
#define _DAT_00969368 (*(undefined1 *)(0x00969368u))
#define _DAT_00969378 (*(undefined1 *)(0x00969378u))
#define _DAT_00969388 (*(undefined1 *)(0x00969388u))
#define _DAT_00969398 (*(undefined1 *)(0x00969398u))
#define _DAT_009693a8 (*(undefined1 *)(0x009693a8u))
#define _DAT_009693b8 (*(undefined1 *)(0x009693b8u))
#define _DAT_00969f84 (*(undefined1 *)(0x00969f84u))
#define _DAT_00969f94 (*(undefined1 *)(0x00969f94u))
#define _DAT_00969fa4 (*(undefined1 *)(0x00969fa4u))
#define _DAT_00969fb4 (*(undefined1 *)(0x00969fb4u))
#define _DAT_00969fc4 (*(undefined1 *)(0x00969fc4u))
#define _DAT_00969fd4 (*(undefined1 *)(0x00969fd4u))
#define _DAT_00969fe4 (*(undefined1 *)(0x00969fe4u))
#define _DAT_00969ff4 (*(undefined1 *)(0x00969ff4u))
#define _DAT_0096a004 (*(undefined1 *)(0x0096a004u))
#define _DAT_0096a014 (*(undefined1 *)(0x0096a014u))
#define _DAT_0096a248 (*(undefined1 *)(0x0096a248u))
#define _DAT_0096a258 (*(undefined1 *)(0x0096a258u))
#define _DAT_0096a268 (*(undefined1 *)(0x0096a268u))
#define _DAT_0096a278 (*(undefined1 *)(0x0096a278u))
#define _DAT_0096a288 (*(undefined1 *)(0x0096a288u))
#define _DAT_0096a298 (*(undefined1 *)(0x0096a298u))
#define _DAT_0096a2a8 (*(undefined1 *)(0x0096a2a8u))
#define _DAT_0096a2b8 (*(undefined1 *)(0x0096a2b8u))
#define _DAT_0096a2c8 (*(undefined1 *)(0x0096a2c8u))
#define _DAT_0096a2d8 (*(undefined1 *)(0x0096a2d8u))
#define _DAT_0096a2e8 (*(undefined1 *)(0x0096a2e8u))
#define _DAT_0096a2f8 (*(undefined1 *)(0x0096a2f8u))
#define _DAT_0096a80c (*(undefined1 *)(0x0096a80cu))
#define _DAT_0096a81c (*(undefined1 *)(0x0096a81cu))
#define _DAT_0096a82c (*(undefined1 *)(0x0096a82cu))
#define _DAT_0096a83c (*(undefined1 *)(0x0096a83cu))
#define _DAT_0096a84c (*(undefined1 *)(0x0096a84cu))
#define _DAT_0096a85c (*(undefined1 *)(0x0096a85cu))
#define _DAT_0096a86c (*(undefined1 *)(0x0096a86cu))
#define _DAT_0096a87c (*(undefined1 *)(0x0096a87cu))
#define _DAT_0096a88c (*(undefined1 *)(0x0096a88cu))
#define _DAT_0096a89c (*(undefined1 *)(0x0096a89cu))
#define _DAT_0096af14 (*(undefined1 *)(0x0096af14u))
#define _DAT_0096af24 (*(undefined1 *)(0x0096af24u))
#define _DAT_0096af34 (*(undefined1 *)(0x0096af34u))
#define _DAT_0096af44 (*(undefined1 *)(0x0096af44u))
#define _DAT_0096af54 (*(undefined1 *)(0x0096af54u))
#define _DAT_0096af64 (*(undefined1 *)(0x0096af64u))
#define _DAT_0096af74 (*(undefined1 *)(0x0096af74u))
#define _DAT_0096af84 (*(undefined1 *)(0x0096af84u))
#define _DAT_0096af94 (*(undefined1 *)(0x0096af94u))
#define _DAT_0096afa4 (*(undefined1 *)(0x0096afa4u))
#define _DAT_0096afb4 (*(undefined1 *)(0x0096afb4u))
#define _DAT_0096b5a0 (*(undefined1 *)(0x0096b5a0u))
#define _DAT_0096b5b0 (*(undefined1 *)(0x0096b5b0u))
#define _DAT_0096b5c0 (*(undefined1 *)(0x0096b5c0u))
#define _DAT_0096b5d0 (*(undefined1 *)(0x0096b5d0u))
#define _DAT_0096b5e0 (*(undefined1 *)(0x0096b5e0u))
#define _DAT_0096b5f0 (*(undefined1 *)(0x0096b5f0u))
#define _DAT_0096b600 (*(undefined1 *)(0x0096b600u))
#define _DAT_0096b610 (*(undefined1 *)(0x0096b610u))
#define _DAT_0096b620 (*(undefined1 *)(0x0096b620u))
#define _DAT_0096b630 (*(undefined1 *)(0x0096b630u))
#define _DAT_0096b81c (*(undefined1 *)(0x0096b81cu))
#define _DAT_0096b82c (*(undefined1 *)(0x0096b82cu))
#define _DAT_0096b83c (*(undefined1 *)(0x0096b83cu))
#define _DAT_0096b84c (*(undefined1 *)(0x0096b84cu))
#define _DAT_0096b85c (*(undefined1 *)(0x0096b85cu))
#define _DAT_0096b86c (*(undefined1 *)(0x0096b86cu))
#define _DAT_0096b87c (*(undefined1 *)(0x0096b87cu))
#define _DAT_0096b88c (*(undefined1 *)(0x0096b88cu))
#define _DAT_0096b89c (*(undefined1 *)(0x0096b89cu))
#define _DAT_0096b8ac (*(undefined1 *)(0x0096b8acu))
#define _DAT_0096bab8 (*(undefined1 *)(0x0096bab8u))
#define _DAT_0096bac8 (*(undefined1 *)(0x0096bac8u))
#define _DAT_0096bad8 (*(undefined1 *)(0x0096bad8u))
#define _DAT_0096bae8 (*(undefined1 *)(0x0096bae8u))
#define _DAT_0096baf8 (*(undefined1 *)(0x0096baf8u))
#define _DAT_0096bb08 (*(undefined1 *)(0x0096bb08u))
#define _DAT_0096bb18 (*(undefined1 *)(0x0096bb18u))
#define _DAT_0096bb28 (*(undefined1 *)(0x0096bb28u))
#define _DAT_0096bb38 (*(undefined1 *)(0x0096bb38u))
#define _DAT_0096bb48 (*(undefined1 *)(0x0096bb48u))
#define _DAT_0096bb58 (*(undefined1 *)(0x0096bb58u))
#define _DAT_0096bdc4 (*(undefined1 *)(0x0096bdc4u))
#define _DAT_0096bdd4 (*(undefined1 *)(0x0096bdd4u))
#define _DAT_0096bde4 (*(undefined1 *)(0x0096bde4u))
#define _DAT_0096bdf4 (*(undefined1 *)(0x0096bdf4u))
#define _DAT_0096be04 (*(undefined1 *)(0x0096be04u))
#define _DAT_0096be14 (*(undefined1 *)(0x0096be14u))
#define _DAT_0096be24 (*(undefined1 *)(0x0096be24u))
#define _DAT_0096be34 (*(undefined1 *)(0x0096be34u))
#define _DAT_0096be44 (*(undefined1 *)(0x0096be44u))
#define _DAT_0096be54 (*(undefined1 *)(0x0096be54u))
#define _DAT_0096c730 (*(undefined1 *)(0x0096c730u))
#define _DAT_0096c740 (*(undefined1 *)(0x0096c740u))
#define _DAT_0096c750 (*(undefined1 *)(0x0096c750u))
#define _DAT_0096c760 (*(undefined1 *)(0x0096c760u))
#define _DAT_0096c770 (*(undefined1 *)(0x0096c770u))
#define _DAT_0096c780 (*(undefined1 *)(0x0096c780u))
#define _DAT_0096c790 (*(undefined1 *)(0x0096c790u))
#define _DAT_0096c7a0 (*(undefined1 *)(0x0096c7a0u))
#define _DAT_0096c7b0 (*(undefined1 *)(0x0096c7b0u))
#define _DAT_0096c7c0 (*(undefined1 *)(0x0096c7c0u))
#define _DAT_0096c9a8 (*(undefined1 *)(0x0096c9a8u))
#define _DAT_0096c9b8 (*(undefined1 *)(0x0096c9b8u))
#define _DAT_0096c9c8 (*(undefined1 *)(0x0096c9c8u))
#define _DAT_0096c9d8 (*(undefined1 *)(0x0096c9d8u))
#define _DAT_0096c9e8 (*(undefined1 *)(0x0096c9e8u))
#define _DAT_0096c9f8 (*(undefined1 *)(0x0096c9f8u))
#define _DAT_0096ca08 (*(undefined1 *)(0x0096ca08u))
#define _DAT_0096ca18 (*(undefined1 *)(0x0096ca18u))
#define _DAT_0096ca28 (*(undefined1 *)(0x0096ca28u))
#define _DAT_0096ca38 (*(undefined1 *)(0x0096ca38u))
#define _DAT_0096d258 (*(undefined1 *)(0x0096d258u))
#define _DAT_0096d268 (*(undefined1 *)(0x0096d268u))
#define _DAT_0096d278 (*(undefined1 *)(0x0096d278u))
#define _DAT_0096d288 (*(undefined1 *)(0x0096d288u))
#define _DAT_0096d298 (*(undefined1 *)(0x0096d298u))
#define _DAT_0096d2a8 (*(undefined1 *)(0x0096d2a8u))
#define _DAT_0096d2b8 (*(undefined1 *)(0x0096d2b8u))
#define _DAT_0096d2c8 (*(undefined1 *)(0x0096d2c8u))
#define _DAT_0096d2d8 (*(undefined1 *)(0x0096d2d8u))
#define _DAT_0096d2e8 (*(undefined1 *)(0x0096d2e8u))
#define _DAT_0096dd20 (*(undefined1 *)(0x0096dd20u))
#define _DAT_0096dd30 (*(undefined1 *)(0x0096dd30u))
#define _DAT_0096dd40 (*(undefined1 *)(0x0096dd40u))
#define _DAT_0096dd50 (*(undefined1 *)(0x0096dd50u))
#define _DAT_0096dd60 (*(undefined1 *)(0x0096dd60u))
#define _DAT_0096dd70 (*(undefined1 *)(0x0096dd70u))
#define _DAT_0096dd80 (*(undefined1 *)(0x0096dd80u))
#define _DAT_0096dd90 (*(undefined1 *)(0x0096dd90u))
#define _DAT_0096dda0 (*(undefined1 *)(0x0096dda0u))
#define _DAT_0096ddb0 (*(undefined1 *)(0x0096ddb0u))
#define _DAT_0096ddc0 (*(undefined1 *)(0x0096ddc0u))
#define _DAT_0096dfe0 (*(undefined1 *)(0x0096dfe0u))
#define _DAT_0096dff0 (*(undefined1 *)(0x0096dff0u))
#define _DAT_0096e000 (*(undefined1 *)(0x0096e000u))
#define _DAT_0096e010 (*(undefined1 *)(0x0096e010u))
#define _DAT_0096e020 (*(undefined1 *)(0x0096e020u))
#define _DAT_0096e030 (*(undefined1 *)(0x0096e030u))
#define _DAT_0096e040 (*(undefined1 *)(0x0096e040u))
#define _DAT_0096e050 (*(undefined1 *)(0x0096e050u))
#define _DAT_0096e060 (*(undefined1 *)(0x0096e060u))
#define _DAT_0096e070 (*(undefined1 *)(0x0096e070u))
#define _DAT_0096e080 (*(undefined1 *)(0x0096e080u))
#define _DAT_0096e84c (*(undefined1 *)(0x0096e84cu))
#define _DAT_0096e85c (*(undefined1 *)(0x0096e85cu))
#define _DAT_0096e86c (*(undefined1 *)(0x0096e86cu))
#define _DAT_0096e87c (*(undefined1 *)(0x0096e87cu))
#define _DAT_0096e88c (*(undefined1 *)(0x0096e88cu))
#define _DAT_0096e89c (*(undefined1 *)(0x0096e89cu))
#define _DAT_0096e8ac (*(undefined1 *)(0x0096e8acu))
#define _DAT_0096e8bc (*(undefined1 *)(0x0096e8bcu))
#define _DAT_0096e8cc (*(undefined1 *)(0x0096e8ccu))
#define _DAT_0096e8dc (*(undefined1 *)(0x0096e8dcu))
#define _DAT_0096efd0 (*(undefined1 *)(0x0096efd0u))
#define _DAT_0096efe0 (*(undefined1 *)(0x0096efe0u))
#define _DAT_0096eff0 (*(undefined1 *)(0x0096eff0u))
#define _DAT_0096f000 (*(undefined1 *)(0x0096f000u))
#define _DAT_0096f010 (*(undefined1 *)(0x0096f010u))
#define _DAT_0096f020 (*(undefined1 *)(0x0096f020u))
#define _DAT_0096f030 (*(undefined1 *)(0x0096f030u))
#define _DAT_0096f040 (*(undefined1 *)(0x0096f040u))
#define _DAT_0096f050 (*(undefined1 *)(0x0096f050u))
#define _DAT_0096f060 (*(undefined1 *)(0x0096f060u))
#define _DAT_0096f7f8 (*(undefined1 *)(0x0096f7f8u))
#define _DAT_0096f808 (*(undefined1 *)(0x0096f808u))
#define _DAT_0096f818 (*(undefined1 *)(0x0096f818u))
#define _DAT_0096f828 (*(undefined1 *)(0x0096f828u))
#define _DAT_0096f838 (*(undefined1 *)(0x0096f838u))
#define _DAT_0096f848 (*(undefined1 *)(0x0096f848u))
#define _DAT_0096f858 (*(undefined1 *)(0x0096f858u))
#define _DAT_0096f868 (*(undefined1 *)(0x0096f868u))
#define _DAT_0096f878 (*(undefined1 *)(0x0096f878u))
#define _DAT_0096f888 (*(undefined1 *)(0x0096f888u))
#define _DAT_0096feac (*(undefined1 *)(0x0096feacu))
#define _DAT_0096febc (*(undefined1 *)(0x0096febcu))
#define _DAT_0096fecc (*(undefined1 *)(0x0096feccu))
#define _DAT_0096fedc (*(undefined1 *)(0x0096fedcu))
#define _DAT_0096feec (*(undefined1 *)(0x0096feecu))
#define _DAT_0096fefc (*(undefined1 *)(0x0096fefcu))
#define _DAT_0096ff0c (*(undefined1 *)(0x0096ff0cu))
#define _DAT_0096ff1c (*(undefined1 *)(0x0096ff1cu))
#define _DAT_0096ff2c (*(undefined1 *)(0x0096ff2cu))
#define _DAT_0096ff3c (*(undefined1 *)(0x0096ff3cu))
#define _DAT_0096ff4c (*(undefined1 *)(0x0096ff4cu))
#define _DAT_00970730 (*(undefined1 *)(0x00970730u))
#define _DAT_00970740 (*(undefined1 *)(0x00970740u))
#define _DAT_00970750 (*(undefined1 *)(0x00970750u))
#define _DAT_00970760 (*(undefined1 *)(0x00970760u))
#define _DAT_00970770 (*(undefined1 *)(0x00970770u))
#define _DAT_00970780 (*(undefined1 *)(0x00970780u))
#define _DAT_00970790 (*(undefined1 *)(0x00970790u))
#define _DAT_009707a0 (*(undefined1 *)(0x009707a0u))
#define _DAT_009707b0 (*(undefined1 *)(0x009707b0u))
#define _DAT_009707c0 (*(undefined1 *)(0x009707c0u))
#define _DAT_009707d0 (*(undefined1 *)(0x009707d0u))
#define _DAT_009709f0 (*(undefined1 *)(0x009709f0u))
#define _DAT_00970a00 (*(undefined1 *)(0x00970a00u))
#define _DAT_00970a10 (*(undefined1 *)(0x00970a10u))
#define _DAT_00970a20 (*(undefined1 *)(0x00970a20u))
#define _DAT_00970a30 (*(undefined1 *)(0x00970a30u))
#define _DAT_00970a40 (*(undefined1 *)(0x00970a40u))
#define _DAT_00970a50 (*(undefined1 *)(0x00970a50u))
#define _DAT_00970a60 (*(undefined1 *)(0x00970a60u))
#define _DAT_00970a70 (*(undefined1 *)(0x00970a70u))
#define _DAT_00970a80 (*(undefined1 *)(0x00970a80u))
#define _DAT_00970a90 (*(undefined1 *)(0x00970a90u))
#define _DAT_00971288 (*(undefined1 *)(0x00971288u))
#define _DAT_00971298 (*(undefined1 *)(0x00971298u))
#define _DAT_009712a8 (*(undefined1 *)(0x009712a8u))
#define _DAT_009712b8 (*(undefined1 *)(0x009712b8u))
#define _DAT_009712c8 (*(undefined1 *)(0x009712c8u))
#define _DAT_009712d8 (*(undefined1 *)(0x009712d8u))
#define _DAT_009712e8 (*(undefined1 *)(0x009712e8u))
#define _DAT_009712f8 (*(undefined1 *)(0x009712f8u))
#define _DAT_00971308 (*(undefined1 *)(0x00971308u))
#define _DAT_00971318 (*(undefined1 *)(0x00971318u))
#define _DAT_00971688 (*(undefined1 *)(0x00971688u))
#define _DAT_00971698 (*(undefined1 *)(0x00971698u))
#define _DAT_009716a8 (*(undefined1 *)(0x009716a8u))
#define _DAT_009716b8 (*(undefined1 *)(0x009716b8u))
#define _DAT_009716c8 (*(undefined1 *)(0x009716c8u))
#define _DAT_009716d8 (*(undefined1 *)(0x009716d8u))
#define _DAT_009716e8 (*(undefined1 *)(0x009716e8u))
#define _DAT_009716f8 (*(undefined1 *)(0x009716f8u))
#define _DAT_00971708 (*(undefined1 *)(0x00971708u))
#define _DAT_00971718 (*(undefined1 *)(0x00971718u))
#define _DAT_00971728 (*(undefined1 *)(0x00971728u))
#define _DAT_00971de8 (*(undefined1 *)(0x00971de8u))
#define _DAT_00971df8 (*(undefined1 *)(0x00971df8u))
#define _DAT_00971e08 (*(undefined1 *)(0x00971e08u))
#define _DAT_00971e18 (*(undefined1 *)(0x00971e18u))
#define _DAT_00971e28 (*(undefined1 *)(0x00971e28u))
#define _DAT_00971e38 (*(undefined1 *)(0x00971e38u))
#define _DAT_00971e48 (*(undefined1 *)(0x00971e48u))
#define _DAT_00971e58 (*(undefined1 *)(0x00971e58u))
#define _DAT_00971e68 (*(undefined1 *)(0x00971e68u))
#define _DAT_00971e78 (*(undefined1 *)(0x00971e78u))
#define _DAT_00972518 (*(undefined1 *)(0x00972518u))
#define _DAT_00972528 (*(undefined1 *)(0x00972528u))
#define _DAT_00972538 (*(undefined1 *)(0x00972538u))
#define _DAT_00972548 (*(undefined1 *)(0x00972548u))
#define _DAT_00972558 (*(undefined1 *)(0x00972558u))
#define _DAT_00972568 (*(undefined1 *)(0x00972568u))
#define _DAT_00972578 (*(undefined1 *)(0x00972578u))
#define _DAT_00972588 (*(undefined1 *)(0x00972588u))
#define _DAT_00972598 (*(undefined1 *)(0x00972598u))
#define _DAT_009725a8 (*(undefined1 *)(0x009725a8u))
#define _DAT_009725b8 (*(undefined1 *)(0x009725b8u))
#define _DAT_00972b24 (*(undefined1 *)(0x00972b24u))
#define _DAT_00972b34 (*(undefined1 *)(0x00972b34u))
#define _DAT_00972b44 (*(undefined1 *)(0x00972b44u))
#define _DAT_00972b54 (*(undefined1 *)(0x00972b54u))
#define _DAT_00972b64 (*(undefined1 *)(0x00972b64u))
#define _DAT_00972b74 (*(undefined1 *)(0x00972b74u))
#define _DAT_00972b84 (*(undefined1 *)(0x00972b84u))
#define _DAT_00972b94 (*(undefined1 *)(0x00972b94u))
#define _DAT_00972ba4 (*(undefined1 *)(0x00972ba4u))
#define _DAT_00972bb4 (*(undefined1 *)(0x00972bb4u))
#define _DAT_00972bc4 (*(undefined1 *)(0x00972bc4u))
#define _DAT_00973090 (*(undefined1 *)(0x00973090u))
#define _DAT_009730a0 (*(undefined1 *)(0x009730a0u))
#define _DAT_009730b0 (*(undefined1 *)(0x009730b0u))
#define _DAT_009730c0 (*(undefined1 *)(0x009730c0u))
#define _DAT_009730d0 (*(undefined1 *)(0x009730d0u))
#define _DAT_009730e0 (*(undefined1 *)(0x009730e0u))
#define _DAT_009730f0 (*(undefined1 *)(0x009730f0u))
#define _DAT_00973100 (*(undefined1 *)(0x00973100u))
#define _DAT_00973110 (*(undefined1 *)(0x00973110u))
#define _DAT_00973120 (*(undefined1 *)(0x00973120u))
#define _DAT_00973130 (*(undefined1 *)(0x00973130u))
#define _DAT_00973c20 (*(undefined1 *)(0x00973c20u))
#define _DAT_00973c30 (*(undefined1 *)(0x00973c30u))
#define _DAT_00973c40 (*(undefined1 *)(0x00973c40u))
#define _DAT_00973c50 (*(undefined1 *)(0x00973c50u))
#define _DAT_00973c60 (*(undefined1 *)(0x00973c60u))
#define _DAT_00973c70 (*(undefined1 *)(0x00973c70u))
#define _DAT_00973c80 (*(undefined1 *)(0x00973c80u))
#define _DAT_00973c90 (*(undefined1 *)(0x00973c90u))
#define _DAT_00973ca0 (*(undefined1 *)(0x00973ca0u))
#define _DAT_00973cb0 (*(undefined1 *)(0x00973cb0u))
#define _DAT_00973cc0 (*(undefined1 *)(0x00973cc0u))
#define _DAT_009743bc (*(undefined1 *)(0x009743bcu))
#define _DAT_009743cc (*(undefined1 *)(0x009743ccu))
#define _DAT_009743dc (*(undefined1 *)(0x009743dcu))
#define _DAT_009743ec (*(undefined1 *)(0x009743ecu))
#define _DAT_009743fc (*(undefined1 *)(0x009743fcu))
#define _DAT_0097440c (*(undefined1 *)(0x0097440cu))
#define _DAT_0097441c (*(undefined1 *)(0x0097441cu))
#define _DAT_0097442c (*(undefined1 *)(0x0097442cu))
#define _DAT_0097443c (*(undefined1 *)(0x0097443cu))
#define _DAT_0097444c (*(undefined1 *)(0x0097444cu))
#define _DAT_0097445c (*(undefined1 *)(0x0097445cu))
#define _DAT_00974b58 (*(undefined1 *)(0x00974b58u))
#define _DAT_00974b68 (*(undefined1 *)(0x00974b68u))
#define _DAT_00974b78 (*(undefined1 *)(0x00974b78u))
#define _DAT_00974b88 (*(undefined1 *)(0x00974b88u))
#define _DAT_00974b98 (*(undefined1 *)(0x00974b98u))
#define _DAT_00974ba8 (*(undefined1 *)(0x00974ba8u))
#define _DAT_00974bb8 (*(undefined1 *)(0x00974bb8u))
#define _DAT_00974bc8 (*(undefined1 *)(0x00974bc8u))
#define _DAT_00974bd8 (*(undefined1 *)(0x00974bd8u))
#define _DAT_00974be8 (*(undefined1 *)(0x00974be8u))
#define _DAT_00974bf8 (*(undefined1 *)(0x00974bf8u))
#define _DAT_00975548 (*(undefined1 *)(0x00975548u))
#define _DAT_00975558 (*(undefined1 *)(0x00975558u))
#define _DAT_00975568 (*(undefined1 *)(0x00975568u))
#define _DAT_00975578 (*(undefined1 *)(0x00975578u))
#define _DAT_00975588 (*(undefined1 *)(0x00975588u))
#define _DAT_00975598 (*(undefined1 *)(0x00975598u))
#define _DAT_009755a8 (*(undefined1 *)(0x009755a8u))
#define _DAT_009755b8 (*(undefined1 *)(0x009755b8u))
#define _DAT_009755c8 (*(undefined1 *)(0x009755c8u))
#define _DAT_009755d8 (*(undefined1 *)(0x009755d8u))
#define _DAT_009755e8 (*(undefined1 *)(0x009755e8u))
#define _DAT_00976130 (*(undefined1 *)(0x00976130u))
#define _DAT_00976140 (*(undefined1 *)(0x00976140u))
#define _DAT_00976150 (*(undefined1 *)(0x00976150u))
#define _DAT_00976160 (*(undefined1 *)(0x00976160u))
#define _DAT_00976170 (*(undefined1 *)(0x00976170u))
#define _DAT_00976180 (*(undefined1 *)(0x00976180u))
#define _DAT_00976190 (*(undefined1 *)(0x00976190u))
#define _DAT_009761a0 (*(undefined1 *)(0x009761a0u))
#define _DAT_009761b0 (*(undefined1 *)(0x009761b0u))
#define _DAT_009761c0 (*(undefined1 *)(0x009761c0u))
#define _DAT_009761d0 (*(undefined1 *)(0x009761d0u))
#define _DAT_00976474 (*(undefined1 *)(0x00976474u))
#define _DAT_00976484 (*(undefined1 *)(0x00976484u))
#define _DAT_00976494 (*(undefined1 *)(0x00976494u))
#define _DAT_009764a4 (*(undefined1 *)(0x009764a4u))
#define _DAT_009764b4 (*(undefined1 *)(0x009764b4u))
#define _DAT_009764c4 (*(undefined1 *)(0x009764c4u))
#define _DAT_009764d4 (*(undefined1 *)(0x009764d4u))
#define _DAT_009764e4 (*(undefined1 *)(0x009764e4u))
#define _DAT_009764f4 (*(undefined1 *)(0x009764f4u))
#define _DAT_00976504 (*(undefined1 *)(0x00976504u))
#define _DAT_00976514 (*(undefined1 *)(0x00976514u))
#define _DAT_009774c8 (*(undefined1 *)(0x009774c8u))
#define _DAT_009774d8 (*(undefined1 *)(0x009774d8u))
#define _DAT_009774e8 (*(undefined1 *)(0x009774e8u))
#define _DAT_009774f8 (*(undefined1 *)(0x009774f8u))
#define _DAT_00977508 (*(undefined1 *)(0x00977508u))
#define _DAT_00977518 (*(undefined1 *)(0x00977518u))
#define _DAT_00977528 (*(undefined1 *)(0x00977528u))
#define _DAT_00977538 (*(undefined1 *)(0x00977538u))
#define _DAT_00977548 (*(undefined1 *)(0x00977548u))
#define _DAT_00977558 (*(undefined1 *)(0x00977558u))
#define _DAT_00977568 (*(undefined1 *)(0x00977568u))
#define _DAT_00977e0c (*(undefined1 *)(0x00977e0cu))
#define _DAT_00977e1c (*(undefined1 *)(0x00977e1cu))
#define _DAT_00977e2c (*(undefined1 *)(0x00977e2cu))
#define _DAT_00977e3c (*(undefined1 *)(0x00977e3cu))
#define _DAT_00977e4c (*(undefined1 *)(0x00977e4cu))
#define _DAT_00977e5c (*(undefined1 *)(0x00977e5cu))
#define _DAT_00977e6c (*(undefined1 *)(0x00977e6cu))
#define _DAT_00977e7c (*(undefined1 *)(0x00977e7cu))
#define _DAT_00977e8c (*(undefined1 *)(0x00977e8cu))
#define _DAT_00977e9c (*(undefined1 *)(0x00977e9cu))
#define _DAT_00977eac (*(undefined1 *)(0x00977eacu))
#define _DAT_00978430 (*(undefined1 *)(0x00978430u))
#define _DAT_00978440 (*(undefined1 *)(0x00978440u))
#define _DAT_00978450 (*(undefined1 *)(0x00978450u))
#define _DAT_00978460 (*(undefined1 *)(0x00978460u))
#define _DAT_00978470 (*(undefined1 *)(0x00978470u))
#define _DAT_00978480 (*(undefined1 *)(0x00978480u))
#define _DAT_00978490 (*(undefined1 *)(0x00978490u))
#define _DAT_009784a0 (*(undefined1 *)(0x009784a0u))
#define _DAT_009784b0 (*(undefined1 *)(0x009784b0u))
#define _DAT_009784c0 (*(undefined1 *)(0x009784c0u))
#define _DAT_009784d0 (*(undefined1 *)(0x009784d0u))
#define _DAT_009786e8 (*(undefined1 *)(0x009786e8u))
#define _DAT_009786f8 (*(undefined1 *)(0x009786f8u))
#define _DAT_00978708 (*(undefined1 *)(0x00978708u))
#define _DAT_00978718 (*(undefined1 *)(0x00978718u))
#define _DAT_00978728 (*(undefined1 *)(0x00978728u))
#define _DAT_00978738 (*(undefined1 *)(0x00978738u))
#define _DAT_00978748 (*(undefined1 *)(0x00978748u))
#define _DAT_00978758 (*(undefined1 *)(0x00978758u))
#define _DAT_00978768 (*(undefined1 *)(0x00978768u))
#define _DAT_00978778 (*(undefined1 *)(0x00978778u))
#define _DAT_00978788 (*(undefined1 *)(0x00978788u))
#define _DAT_00978e88 (*(undefined1 *)(0x00978e88u))
#define _DAT_00978e98 (*(undefined1 *)(0x00978e98u))
#define _DAT_00978ea8 (*(undefined1 *)(0x00978ea8u))
#define _DAT_00978eb8 (*(undefined1 *)(0x00978eb8u))
#define _DAT_00978ec8 (*(undefined1 *)(0x00978ec8u))
#define _DAT_00978ed8 (*(undefined1 *)(0x00978ed8u))
#define _DAT_00978ee8 (*(undefined1 *)(0x00978ee8u))
#define _DAT_00978ef8 (*(undefined1 *)(0x00978ef8u))
#define _DAT_00978f08 (*(undefined1 *)(0x00978f08u))
#define _DAT_00978f18 (*(undefined1 *)(0x00978f18u))
#define _DAT_00978f28 (*(undefined1 *)(0x00978f28u))
#define _DAT_009793d4 (*(undefined1 *)(0x009793d4u))
#define _DAT_009793e4 (*(undefined1 *)(0x009793e4u))
#define _DAT_009794b0 (*(undefined1 *)(0x009794b0u))
#define _DAT_009794c0 (*(undefined1 *)(0x009794c0u))
#define _DAT_009794d0 (*(undefined1 *)(0x009794d0u))
#define _DAT_009794e0 (*(undefined1 *)(0x009794e0u))
#define _DAT_00979e4c (*(undefined1 *)(0x00979e4cu))
#define _DAT_00979f60 (*(undefined1 *)(0x00979f60u))
#define _DAT_00979f70 (*(undefined1 *)(0x00979f70u))
#define _DAT_0097a018 (*(undefined1 *)(0x0097a018u))
#define _DAT_0097a028 (*(undefined1 *)(0x0097a028u))
#define _DAT_0097a038 (*(undefined1 *)(0x0097a038u))
#define _DAT_0097a300 (*(undefined1 *)(0x0097a300u))
#define _DAT_0097a310 (*(undefined1 *)(0x0097a310u))
#define _DAT_0097a320 (*(undefined1 *)(0x0097a320u))
#define _DAT_0097a6a8 (*(undefined1 *)(0x0097a6a8u))
#define _DAT_0097a6b8 (*(undefined1 *)(0x0097a6b8u))
#define _DAT_0097a6c8 (*(undefined1 *)(0x0097a6c8u))
#define _DAT_0097a6d8 (*(undefined1 *)(0x0097a6d8u))
#define _DAT_0097a790 (*(undefined1 *)(0x0097a790u))
#define _DAT_0097ac00 (*(undefined1 *)(0x0097ac00u))
#define _DAT_0097ac10 (*(undefined1 *)(0x0097ac10u))
#define _DAT_0097ac20 (*(undefined1 *)(0x0097ac20u))
#define _DAT_0097ac30 (*(undefined1 *)(0x0097ac30u))
#define _DAT_0097ac40 (*(undefined1 *)(0x0097ac40u))
#define _DAT_0097ac50 (*(undefined1 *)(0x0097ac50u))
#define _DAT_0097ac60 (*(undefined1 *)(0x0097ac60u))
#define _DAT_0097ac70 (*(undefined1 *)(0x0097ac70u))
#define _DAT_0097ac80 (*(undefined1 *)(0x0097ac80u))
#define _DAT_0097ac90 (*(undefined1 *)(0x0097ac90u))
#define _DAT_0097aca0 (*(undefined1 *)(0x0097aca0u))
#define _DAT_0097acb0 (*(undefined1 *)(0x0097acb0u))
#define _DAT_0097af18 (*(undefined1 *)(0x0097af18u))
#define _DAT_0097af28 (*(undefined1 *)(0x0097af28u))
#define _DAT_0097af38 (*(undefined1 *)(0x0097af38u))
#define _DAT_0097af48 (*(undefined1 *)(0x0097af48u))
#define _DAT_0097af58 (*(undefined1 *)(0x0097af58u))
#define _DAT_0097af68 (*(undefined1 *)(0x0097af68u))
#define _DAT_0097af78 (*(undefined1 *)(0x0097af78u))
#define _DAT_0097af88 (*(undefined1 *)(0x0097af88u))
#define _DAT_0097af98 (*(undefined1 *)(0x0097af98u))
#define _DAT_0097afa8 (*(undefined1 *)(0x0097afa8u))
#define _DAT_0097afc8 (*(undefined1 *)(0x0097afc8u))
#define _DAT_0097afd8 (*(undefined1 *)(0x0097afd8u))
#define _DAT_0097b210 (*(undefined1 *)(0x0097b210u))
#define _DAT_0097b220 (*(undefined1 *)(0x0097b220u))
#define _DAT_0097b230 (*(undefined1 *)(0x0097b230u))
#define _DAT_0097b240 (*(undefined1 *)(0x0097b240u))
#define _DAT_0097b250 (*(undefined1 *)(0x0097b250u))
#define _DAT_0097b260 (*(undefined1 *)(0x0097b260u))
#define _DAT_0097b270 (*(undefined1 *)(0x0097b270u))
#define _DAT_0097b280 (*(undefined1 *)(0x0097b280u))
#define _DAT_0097b290 (*(undefined1 *)(0x0097b290u))
#define _DAT_0097b2a0 (*(undefined1 *)(0x0097b2a0u))
#define _DAT_0097b2b0 (*(undefined1 *)(0x0097b2b0u))
#define _DAT_0097b508 (*(undefined1 *)(0x0097b508u))
#define _DAT_0097b518 (*(undefined1 *)(0x0097b518u))
#define _DAT_0097b528 (*(undefined1 *)(0x0097b528u))
#define _DAT_0097b538 (*(undefined1 *)(0x0097b538u))
#define _DAT_0097b548 (*(undefined1 *)(0x0097b548u))
#define _DAT_0097b558 (*(undefined1 *)(0x0097b558u))
#define _DAT_0097b568 (*(undefined1 *)(0x0097b568u))
#define _DAT_0097b578 (*(undefined1 *)(0x0097b578u))
#define _DAT_0097b588 (*(undefined1 *)(0x0097b588u))
#define _DAT_0097b598 (*(undefined1 *)(0x0097b598u))
#define _DAT_0097b5a8 (*(undefined1 *)(0x0097b5a8u))
#define _DAT_0097b5b8 (*(undefined1 *)(0x0097b5b8u))
#define _DAT_0097b5c8 (*(undefined1 *)(0x0097b5c8u))
#define _DAT_0097bf68 (*(undefined1 *)(0x0097bf68u))
#define _DAT_0097bf78 (*(undefined1 *)(0x0097bf78u))
#define _DAT_0097bf88 (*(undefined1 *)(0x0097bf88u))
#define _DAT_0097bf98 (*(undefined1 *)(0x0097bf98u))
#define _DAT_0097bfa8 (*(undefined1 *)(0x0097bfa8u))
#define _DAT_0097bfb8 (*(undefined1 *)(0x0097bfb8u))
#define _DAT_0097bfc8 (*(undefined1 *)(0x0097bfc8u))
#define _DAT_0097ce78 (*(undefined1 *)(0x0097ce78u))
#define _DAT_0097ce88 (*(undefined1 *)(0x0097ce88u))
#define _DAT_0097ce98 (*(undefined1 *)(0x0097ce98u))
#define _DAT_0097d840 (*(undefined1 *)(0x0097d840u))
#define _DAT_0097d850 (*(undefined1 *)(0x0097d850u))
#define _DAT_0097d860 (*(undefined1 *)(0x0097d860u))
#define _DAT_0097d870 (*(undefined1 *)(0x0097d870u))
#define _DAT_0097d880 (*(undefined1 *)(0x0097d880u))
#define _DAT_0097d890 (*(undefined1 *)(0x0097d890u))
#define _DAT_0097d8a0 (*(undefined1 *)(0x0097d8a0u))
#define _DAT_0097d8b0 (*(undefined1 *)(0x0097d8b0u))
#define _DAT_0097d8c0 (*(undefined1 *)(0x0097d8c0u))
#define _DAT_0097d8d0 (*(undefined1 *)(0x0097d8d0u))
#define _DAT_0097d8e0 (*(undefined1 *)(0x0097d8e0u))
#define _DAT_0097d8f0 (*(undefined1 *)(0x0097d8f0u))
#define _DAT_0097db00 (*(undefined1 *)(0x0097db00u))
#define _DAT_0097db10 (*(undefined1 *)(0x0097db10u))
#define _DAT_0097db20 (*(undefined1 *)(0x0097db20u))
#define _DAT_0097db30 (*(undefined1 *)(0x0097db30u))
#define _DAT_0097db40 (*(undefined1 *)(0x0097db40u))
#define _DAT_0097db50 (*(undefined1 *)(0x0097db50u))
#define _DAT_0097db60 (*(undefined1 *)(0x0097db60u))
#define _DAT_0097db70 (*(undefined1 *)(0x0097db70u))
#define _DAT_0097db80 (*(undefined1 *)(0x0097db80u))
#define _DAT_0097fbb4 (*(undefined1 *)(0x0097fbb4u))
#define _DAT_0097fbc4 (*(undefined1 *)(0x0097fbc4u))
#define _DAT_0097fbd4 (*(undefined1 *)(0x0097fbd4u))
#define _DAT_0097fbe4 (*(undefined1 *)(0x0097fbe4u))
#define _DAT_0097fbf4 (*(undefined1 *)(0x0097fbf4u))
#define _DAT_0097fc04 (*(undefined1 *)(0x0097fc04u))
#define _DAT_0097fc14 (*(undefined1 *)(0x0097fc14u))
#define _DAT_0097fc24 (*(undefined1 *)(0x0097fc24u))
#define _DAT_0097fc34 (*(undefined1 *)(0x0097fc34u))
#define _DAT_0097fc44 (*(undefined1 *)(0x0097fc44u))
#define _DAT_0097fc54 (*(undefined1 *)(0x0097fc54u))
#define _DAT_0097fed0 (*(undefined1 *)(0x0097fed0u))
#define _DAT_0097fee0 (*(undefined1 *)(0x0097fee0u))
#define _DAT_0097fef0 (*(undefined1 *)(0x0097fef0u))
#define _DAT_0097ff00 (*(undefined1 *)(0x0097ff00u))
#define _DAT_0097ff10 (*(undefined1 *)(0x0097ff10u))
#define _DAT_0097ff20 (*(undefined1 *)(0x0097ff20u))
#define _DAT_0097ff30 (*(undefined1 *)(0x0097ff30u))
#define _DAT_0097ff40 (*(undefined1 *)(0x0097ff40u))
#define _DAT_0097ff50 (*(undefined1 *)(0x0097ff50u))
#define _DAT_0097ff60 (*(undefined1 *)(0x0097ff60u))
#define _DAT_0097ff70 (*(undefined1 *)(0x0097ff70u))
#define _DAT_0097ff80 (*(undefined1 *)(0x0097ff80u))
#define _DAT_0097ff90 (*(undefined1 *)(0x0097ff90u))
#define _DAT_0097ffa0 (*(undefined1 *)(0x0097ffa0u))
#define _DAT_009801a4 (*(undefined1 *)(0x009801a4u))
#define _DAT_009801b4 (*(undefined1 *)(0x009801b4u))
#define _DAT_009801c4 (*(undefined1 *)(0x009801c4u))
#define _DAT_009801d4 (*(undefined1 *)(0x009801d4u))
#define _DAT_009801e4 (*(undefined1 *)(0x009801e4u))
#define _DAT_009801f4 (*(undefined1 *)(0x009801f4u))
#define _DAT_00980204 (*(undefined1 *)(0x00980204u))
#define _DAT_00980214 (*(undefined1 *)(0x00980214u))
#define _DAT_00980224 (*(undefined1 *)(0x00980224u))
#define _DAT_009803e0 (*(undefined1 *)(0x009803e0u))
#define _DAT_009803f0 (*(undefined1 *)(0x009803f0u))
#define _DAT_00980400 (*(undefined1 *)(0x00980400u))
#define _DAT_00980410 (*(undefined1 *)(0x00980410u))
#define _DAT_00980420 (*(undefined1 *)(0x00980420u))
#define _DAT_00980430 (*(undefined1 *)(0x00980430u))
#define _DAT_00980440 (*(undefined1 *)(0x00980440u))
#define _DAT_00980450 (*(undefined1 *)(0x00980450u))
#define _DAT_00980460 (*(undefined1 *)(0x00980460u))
#define _DAT_00980e60 (*(undefined1 *)(0x00980e60u))
#define _DAT_00980e70 (*(undefined1 *)(0x00980e70u))
#define _DAT_00980e80 (*(undefined1 *)(0x00980e80u))
#define _DAT_00980e90 (*(undefined1 *)(0x00980e90u))
#define _DAT_00980ea0 (*(undefined1 *)(0x00980ea0u))
#define _DAT_00980eb0 (*(undefined1 *)(0x00980eb0u))
#define _DAT_00981198 (*(undefined1 *)(0x00981198u))
#define _DAT_009811a8 (*(undefined1 *)(0x009811a8u))
#define _DAT_009811b8 (*(undefined1 *)(0x009811b8u))
#define _DAT_009811c8 (*(undefined1 *)(0x009811c8u))
#define _DAT_009811d8 (*(undefined1 *)(0x009811d8u))
#define _DAT_009811e8 (*(undefined1 *)(0x009811e8u))
#define _DAT_009811f8 (*(undefined1 *)(0x009811f8u))
#define _DAT_00981208 (*(undefined1 *)(0x00981208u))
#define _DAT_00981218 (*(undefined1 *)(0x00981218u))
#define _DAT_00981470 (*(undefined1 *)(0x00981470u))
#define _DAT_00981480 (*(undefined1 *)(0x00981480u))
#define _DAT_00981490 (*(undefined1 *)(0x00981490u))
#define _DAT_009814a0 (*(undefined1 *)(0x009814a0u))
#define _DAT_009814b0 (*(undefined1 *)(0x009814b0u))
#define _DAT_009814c0 (*(undefined1 *)(0x009814c0u))
#define _DAT_009814d0 (*(undefined1 *)(0x009814d0u))
#define _DAT_009814e0 (*(undefined1 *)(0x009814e0u))
#define _DAT_009814f0 (*(undefined1 *)(0x009814f0u))
#define _DAT_00981500 (*(undefined1 *)(0x00981500u))
#define _DAT_00981510 (*(undefined1 *)(0x00981510u))
#define _DAT_00981520 (*(undefined1 *)(0x00981520u))
#define _DAT_00981718 (*(undefined1 *)(0x00981718u))
#define _DAT_00981728 (*(undefined1 *)(0x00981728u))
#define _DAT_00981738 (*(undefined1 *)(0x00981738u))
#define _DAT_00981748 (*(undefined1 *)(0x00981748u))
#define _DAT_00981758 (*(undefined1 *)(0x00981758u))
#define _DAT_00981768 (*(undefined1 *)(0x00981768u))
#define _DAT_00981778 (*(undefined1 *)(0x00981778u))
#define _DAT_00981788 (*(undefined1 *)(0x00981788u))
#define _DAT_00981798 (*(undefined1 *)(0x00981798u))
#define _DAT_00981980 (*(undefined1 *)(0x00981980u))
#define _DAT_00981990 (*(undefined1 *)(0x00981990u))
#define _DAT_009819a0 (*(undefined1 *)(0x009819a0u))
#define _DAT_009819b0 (*(undefined1 *)(0x009819b0u))
#define _DAT_009819c0 (*(undefined1 *)(0x009819c0u))
#define _DAT_009819d0 (*(undefined1 *)(0x009819d0u))
#define _DAT_009819e0 (*(undefined1 *)(0x009819e0u))
#define _DAT_009819f0 (*(undefined1 *)(0x009819f0u))
#define _DAT_00981a00 (*(undefined1 *)(0x00981a00u))
#define _DAT_00981a10 (*(undefined1 *)(0x00981a10u))
#define _DAT_00982510 (*(undefined1 *)(0x00982510u))
#define _DAT_00982520 (*(undefined1 *)(0x00982520u))
#define _DAT_00982530 (*(undefined1 *)(0x00982530u))
#define _DAT_00982540 (*(undefined1 *)(0x00982540u))
#define _DAT_00982550 (*(undefined1 *)(0x00982550u))
#define _DAT_00982560 (*(undefined1 *)(0x00982560u))
#define _DAT_00982570 (*(undefined1 *)(0x00982570u))
#define _DAT_00982580 (*(undefined1 *)(0x00982580u))
#define _DAT_00982590 (*(undefined1 *)(0x00982590u))
#define _DAT_009825a0 (*(undefined1 *)(0x009825a0u))
#define _DAT_009825b0 (*(undefined1 *)(0x009825b0u))
#define _DAT_00982808 (*(undefined1 *)(0x00982808u))
#define _DAT_00982818 (*(undefined1 *)(0x00982818u))
#define _DAT_00982828 (*(undefined1 *)(0x00982828u))
#define _DAT_00982838 (*(undefined1 *)(0x00982838u))
#define _DAT_00982848 (*(undefined1 *)(0x00982848u))
#define _DAT_00982858 (*(undefined1 *)(0x00982858u))
#define _DAT_00982868 (*(undefined1 *)(0x00982868u))
#define _DAT_00982878 (*(undefined1 *)(0x00982878u))
#define _DAT_00982888 (*(undefined1 *)(0x00982888u))
#define _DAT_00982898 (*(undefined1 *)(0x00982898u))
#define _DAT_009828a8 (*(undefined1 *)(0x009828a8u))
#define _DAT_009828b8 (*(undefined1 *)(0x009828b8u))
#define _DAT_009828c8 (*(undefined1 *)(0x009828c8u))
#define _DAT_00982ad8 (*(undefined1 *)(0x00982ad8u))
#define _DAT_00982ae8 (*(undefined1 *)(0x00982ae8u))
#define _DAT_00982af8 (*(undefined1 *)(0x00982af8u))
#define _DAT_00982b08 (*(undefined1 *)(0x00982b08u))
#define _DAT_00982b18 (*(undefined1 *)(0x00982b18u))
#define _DAT_00982b28 (*(undefined1 *)(0x00982b28u))
#define _DAT_00982b38 (*(undefined1 *)(0x00982b38u))
#define _DAT_00982b48 (*(undefined1 *)(0x00982b48u))
#define _DAT_00982b58 (*(undefined1 *)(0x00982b58u))
#define _DAT_00982d20 (*(undefined1 *)(0x00982d20u))
#define _DAT_00982d30 (*(undefined1 *)(0x00982d30u))
#define _DAT_00982d40 (*(undefined1 *)(0x00982d40u))
#define _DAT_00982d50 (*(undefined1 *)(0x00982d50u))
#define _DAT_00982d60 (*(undefined1 *)(0x00982d60u))
#define _DAT_00982d70 (*(undefined1 *)(0x00982d70u))
#define _DAT_00982d80 (*(undefined1 *)(0x00982d80u))
#define _DAT_00982d90 (*(undefined1 *)(0x00982d90u))
#define _DAT_00982da0 (*(undefined1 *)(0x00982da0u))
#define _DAT_00982f80 (*(undefined1 *)(0x00982f80u))
#define _DAT_00982f90 (*(undefined1 *)(0x00982f90u))
#define _DAT_00982fa0 (*(undefined1 *)(0x00982fa0u))
#define _DAT_00982fb0 (*(undefined1 *)(0x00982fb0u))
#define _DAT_00982fc0 (*(undefined1 *)(0x00982fc0u))
#define _DAT_00982fd0 (*(undefined1 *)(0x00982fd0u))
#define _DAT_00982fe0 (*(undefined1 *)(0x00982fe0u))
#define _DAT_00982ff0 (*(undefined1 *)(0x00982ff0u))
#define _DAT_00983000 (*(undefined1 *)(0x00983000u))
#define _DAT_00983010 (*(undefined1 *)(0x00983010u))
#define _DAT_009831f8 (*(undefined1 *)(0x009831f8u))
#define _DAT_00983208 (*(undefined1 *)(0x00983208u))
#define _DAT_00983218 (*(undefined1 *)(0x00983218u))
#define _DAT_00983228 (*(undefined1 *)(0x00983228u))
#define _DAT_00983238 (*(undefined1 *)(0x00983238u))
#define _DAT_00983248 (*(undefined1 *)(0x00983248u))
#define _DAT_00983258 (*(undefined1 *)(0x00983258u))
#define _DAT_00983268 (*(undefined1 *)(0x00983268u))
#define _DAT_00983278 (*(undefined1 *)(0x00983278u))
#define _DAT_00983288 (*(undefined1 *)(0x00983288u))
#define _DAT_009834c0 (*(undefined1 *)(0x009834c0u))
#define _DAT_009834d0 (*(undefined1 *)(0x009834d0u))
#define _DAT_009834e0 (*(undefined1 *)(0x009834e0u))
#define _DAT_009834f0 (*(undefined1 *)(0x009834f0u))
#define _DAT_00983500 (*(undefined1 *)(0x00983500u))
#define _DAT_00983510 (*(undefined1 *)(0x00983510u))
#define _DAT_00983520 (*(undefined1 *)(0x00983520u))
#define _DAT_00983530 (*(undefined1 *)(0x00983530u))
#define _DAT_00983540 (*(undefined1 *)(0x00983540u))
#define _DAT_00983550 (*(undefined1 *)(0x00983550u))
#define _DAT_00983560 (*(undefined1 *)(0x00983560u))
#define _DAT_00983738 (*(undefined1 *)(0x00983738u))
#define _DAT_00983748 (*(undefined1 *)(0x00983748u))
#define _DAT_00983758 (*(undefined1 *)(0x00983758u))
#define _DAT_00983768 (*(undefined1 *)(0x00983768u))
#define _DAT_00983778 (*(undefined1 *)(0x00983778u))
#define _DAT_00983788 (*(undefined1 *)(0x00983788u))
#define _DAT_00983798 (*(undefined1 *)(0x00983798u))
#define _DAT_009837a8 (*(undefined1 *)(0x009837a8u))
#define _DAT_009837b8 (*(undefined1 *)(0x009837b8u))
#define _DAT_009839a0 (*(undefined1 *)(0x009839a0u))
#define _DAT_009839b0 (*(undefined1 *)(0x009839b0u))
#define _DAT_009839c0 (*(undefined1 *)(0x009839c0u))
#define _DAT_009839d0 (*(undefined1 *)(0x009839d0u))
#define _DAT_009839e0 (*(undefined1 *)(0x009839e0u))
#define _DAT_009839f0 (*(undefined1 *)(0x009839f0u))
#define _DAT_00983a00 (*(undefined1 *)(0x00983a00u))
#define _DAT_00983a10 (*(undefined1 *)(0x00983a10u))
#define _DAT_00983a20 (*(undefined1 *)(0x00983a20u))
#define _DAT_00983a30 (*(undefined1 *)(0x00983a30u))
#define _DAT_00983c18 (*(undefined1 *)(0x00983c18u))
#define _DAT_00983c28 (*(undefined1 *)(0x00983c28u))
#define _DAT_00983c38 (*(undefined1 *)(0x00983c38u))
#define _DAT_00983c48 (*(undefined1 *)(0x00983c48u))
#define _DAT_00983c58 (*(undefined1 *)(0x00983c58u))
#define _DAT_00983c68 (*(undefined1 *)(0x00983c68u))
#define _DAT_00983c78 (*(undefined1 *)(0x00983c78u))
#define _DAT_00983c88 (*(undefined1 *)(0x00983c88u))
#define _DAT_00983c98 (*(undefined1 *)(0x00983c98u))
#define _DAT_00983ca8 (*(undefined1 *)(0x00983ca8u))
#define _DAT_00983eb8 (*(undefined1 *)(0x00983eb8u))
#define _DAT_00983ec8 (*(undefined1 *)(0x00983ec8u))
#define _DAT_00983ed8 (*(undefined1 *)(0x00983ed8u))
#define _DAT_00983ee8 (*(undefined1 *)(0x00983ee8u))
#define _DAT_00983ef8 (*(undefined1 *)(0x00983ef8u))
#define _DAT_00983f08 (*(undefined1 *)(0x00983f08u))
#define _DAT_00983f18 (*(undefined1 *)(0x00983f18u))
#define _DAT_00983f28 (*(undefined1 *)(0x00983f28u))
#define _DAT_00983f38 (*(undefined1 *)(0x00983f38u))
#define _DAT_00983f48 (*(undefined1 *)(0x00983f48u))
#define _DAT_00983f58 (*(undefined1 *)(0x00983f58u))
#define _DAT_009841c0 (*(undefined1 *)(0x009841c0u))
#define _DAT_009841d0 (*(undefined1 *)(0x009841d0u))
#define _DAT_009841e0 (*(undefined1 *)(0x009841e0u))
#define _DAT_009841f0 (*(undefined1 *)(0x009841f0u))
#define _DAT_00984200 (*(undefined1 *)(0x00984200u))
#define _DAT_00984210 (*(undefined1 *)(0x00984210u))
#define _DAT_00984220 (*(undefined1 *)(0x00984220u))
#define _DAT_00984230 (*(undefined1 *)(0x00984230u))
#define _DAT_00984240 (*(undefined1 *)(0x00984240u))
#define _DAT_00984250 (*(undefined1 *)(0x00984250u))
#define _DAT_00984260 (*(undefined1 *)(0x00984260u))
#define _DAT_009843e8 (*(undefined1 *)(0x009843e8u))
#define _DAT_009843f8 (*(undefined1 *)(0x009843f8u))
#define _DAT_00984408 (*(undefined1 *)(0x00984408u))
#define _DAT_00984418 (*(undefined1 *)(0x00984418u))
#define _DAT_00984428 (*(undefined1 *)(0x00984428u))
#define _DAT_00984438 (*(undefined1 *)(0x00984438u))
#define _DAT_009845e8 (*(undefined1 *)(0x009845e8u))
#define _DAT_009845f8 (*(undefined1 *)(0x009845f8u))
#define _DAT_00984608 (*(undefined1 *)(0x00984608u))
#define _DAT_00984618 (*(undefined1 *)(0x00984618u))
#define _DAT_00984628 (*(undefined1 *)(0x00984628u))
#define _DAT_00984638 (*(undefined1 *)(0x00984638u))
#define _DAT_00984648 (*(undefined1 *)(0x00984648u))
#define _DAT_00984658 (*(undefined1 *)(0x00984658u))
#define _DAT_00984668 (*(undefined1 *)(0x00984668u))
#define _DAT_00984678 (*(undefined1 *)(0x00984678u))
#define _DAT_00984830 (*(undefined1 *)(0x00984830u))
#define _DAT_00984840 (*(undefined1 *)(0x00984840u))
#define _DAT_00984850 (*(undefined1 *)(0x00984850u))
#define _DAT_00984860 (*(undefined1 *)(0x00984860u))
#define _DAT_00984870 (*(undefined1 *)(0x00984870u))
#define _DAT_00984880 (*(undefined1 *)(0x00984880u))
#define _DAT_00984890 (*(undefined1 *)(0x00984890u))
#define _DAT_009848a0 (*(undefined1 *)(0x009848a0u))
#define _DAT_00984a90 (*(undefined1 *)(0x00984a90u))
#define _DAT_00984aa0 (*(undefined1 *)(0x00984aa0u))
#define _DAT_00984ab0 (*(undefined1 *)(0x00984ab0u))
#define _DAT_00984ac0 (*(undefined1 *)(0x00984ac0u))
#define _DAT_00984ad0 (*(undefined1 *)(0x00984ad0u))
#define _DAT_00984ae0 (*(undefined1 *)(0x00984ae0u))
#define _DAT_00984af0 (*(undefined1 *)(0x00984af0u))
#define _DAT_00984b00 (*(undefined1 *)(0x00984b00u))
#define _DAT_00984b10 (*(undefined1 *)(0x00984b10u))
#define _DAT_00984b20 (*(undefined1 *)(0x00984b20u))
#define _DAT_00984b30 (*(undefined1 *)(0x00984b30u))
#define _DAT_00984d50 (*(undefined1 *)(0x00984d50u))
#define _DAT_00984d60 (*(undefined1 *)(0x00984d60u))
#define _DAT_00984d70 (*(undefined1 *)(0x00984d70u))
#define _DAT_00984d80 (*(undefined1 *)(0x00984d80u))
#define _DAT_00984d90 (*(undefined1 *)(0x00984d90u))
#define _DAT_00984da0 (*(undefined1 *)(0x00984da0u))
#define _DAT_00984db0 (*(undefined1 *)(0x00984db0u))
#define _DAT_00984dc0 (*(undefined1 *)(0x00984dc0u))
#define _DAT_00984dd0 (*(undefined1 *)(0x00984dd0u))
#define _DAT_00984de0 (*(undefined1 *)(0x00984de0u))
#define _DAT_00984df0 (*(undefined1 *)(0x00984df0u))
#define _DAT_00985010 (*(undefined1 *)(0x00985010u))
#define _DAT_00985020 (*(undefined1 *)(0x00985020u))
#define _DAT_00985030 (*(undefined1 *)(0x00985030u))
#define _DAT_00985040 (*(undefined1 *)(0x00985040u))
#define _DAT_00985050 (*(undefined1 *)(0x00985050u))
#define _DAT_00985060 (*(undefined1 *)(0x00985060u))
#define _DAT_00985070 (*(undefined1 *)(0x00985070u))
#define _DAT_00985080 (*(undefined1 *)(0x00985080u))
#define _DAT_00985090 (*(undefined1 *)(0x00985090u))
#define _DAT_009850a0 (*(undefined1 *)(0x009850a0u))
#define _DAT_009850b0 (*(undefined1 *)(0x009850b0u))
#define _DAT_009852d8 (*(undefined1 *)(0x009852d8u))
#define _DAT_009852e8 (*(undefined1 *)(0x009852e8u))
#define _DAT_009852f8 (*(undefined1 *)(0x009852f8u))
#define _DAT_00985308 (*(undefined1 *)(0x00985308u))
#define _DAT_00985318 (*(undefined1 *)(0x00985318u))
#define _DAT_00985328 (*(undefined1 *)(0x00985328u))
#define _DAT_00985338 (*(undefined1 *)(0x00985338u))
#define _DAT_00985348 (*(undefined1 *)(0x00985348u))
#define _DAT_00985358 (*(undefined1 *)(0x00985358u))
#define _DAT_00985368 (*(undefined1 *)(0x00985368u))
#define _DAT_00985378 (*(undefined1 *)(0x00985378u))
#define _DAT_009855d0 (*(undefined1 *)(0x009855d0u))
#define _DAT_009855e0 (*(undefined1 *)(0x009855e0u))
#define _DAT_009855f0 (*(undefined1 *)(0x009855f0u))
#define _DAT_00985600 (*(undefined1 *)(0x00985600u))
#define _DAT_00985610 (*(undefined1 *)(0x00985610u))
#define _DAT_00985620 (*(undefined1 *)(0x00985620u))
#define _DAT_00985630 (*(undefined1 *)(0x00985630u))
#define _DAT_00985640 (*(undefined1 *)(0x00985640u))
#define _DAT_00985650 (*(undefined1 *)(0x00985650u))
#define _DAT_00985660 (*(undefined1 *)(0x00985660u))
#define _DAT_00985670 (*(undefined1 *)(0x00985670u))
#define _DAT_00985680 (*(undefined1 *)(0x00985680u))
#define _DAT_009858c8 (*(undefined1 *)(0x009858c8u))
#define _DAT_009858d8 (*(undefined1 *)(0x009858d8u))
#define _DAT_00985908 (*(undefined1 *)(0x00985908u))
#define _DAT_00985918 (*(undefined1 *)(0x00985918u))
#define _DAT_00985938 (*(undefined1 *)(0x00985938u))
#define _DAT_00985958 (*(undefined1 *)(0x00985958u))
#define _DAT_00985978 (*(undefined1 *)(0x00985978u))

//==== 00008ed7f0 008ed7f0_FUN_008ed7f0 ====
void FUN_008ed7f0(void);

// decompiled by BatchDecomp @ 008ed7f0 name=FUN_008ed7f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ed7f0(void)

{
  _DAT_00968b0c = ((void *)(0x009194a4u));
  if (DAT_00968b10 != (void *)0x0) {
    operator_delete__(DAT_00968b10);
  }
  _DAT_00968b0c = ((void *)(0x00919488u));
  DAT_00968b10 = (void *)0x0;
  return;
}


//==== 00008ede10 008ede10_FUN_008ede10 ====
void FUN_008ede10(void);

// decompiled by BatchDecomp @ 008ede10 name=FUN_008ede10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ede10(void)

{
  _DAT_00969398 = ((void *)(0x009194a4u));
  if (DAT_0096939c != (void *)0x0) {
    operator_delete__(DAT_0096939c);
  }
  _DAT_00969398 = ((void *)(0x00919488u));
  DAT_0096939c = (void *)0x0;
  return;
}


//==== 00008ede50 008ede50_FUN_008ede50 ====
void FUN_008ede50(void);

// decompiled by BatchDecomp @ 008ede50 name=FUN_008ede50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ede50(void)

{
  _DAT_00969338 = ((void *)(0x009194a4u));
  if (DAT_0096933c != (void *)0x0) {
    operator_delete__(DAT_0096933c);
  }
  _DAT_00969338 = ((void *)(0x00919488u));
  DAT_0096933c = (void *)0x0;
  return;
}


//==== 00008ede90 008ede90_FUN_008ede90 ====
void FUN_008ede90(void);

// decompiled by BatchDecomp @ 008ede90 name=FUN_008ede90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ede90(void)

{
  _DAT_00969378 = ((void *)(0x009194a4u));
  if (DAT_0096937c != (void *)0x0) {
    operator_delete__(DAT_0096937c);
  }
  _DAT_00969378 = ((void *)(0x00919488u));
  DAT_0096937c = (void *)0x0;
  return;
}


//==== 00008eded0 008eded0_FUN_008eded0 ====
void FUN_008eded0(void);

// decompiled by BatchDecomp @ 008eded0 name=FUN_008eded0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eded0(void)

{
  _DAT_00969368 = ((void *)(0x009194a4u));
  if (DAT_0096936c != (void *)0x0) {
    operator_delete__(DAT_0096936c);
  }
  _DAT_00969368 = ((void *)(0x00919488u));
  DAT_0096936c = (void *)0x0;
  return;
}


//==== 00008edf10 008edf10_FUN_008edf10 ====
void FUN_008edf10(void);

// decompiled by BatchDecomp @ 008edf10 name=FUN_008edf10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008edf10(void)

{
  _DAT_009693b8 = ((void *)(0x009194a4u));
  if (DAT_009693bc != (void *)0x0) {
    operator_delete__(DAT_009693bc);
  }
  _DAT_009693b8 = ((void *)(0x00919488u));
  DAT_009693bc = (void *)0x0;
  return;
}


//==== 00008edf50 008edf50_FUN_008edf50 ====
void FUN_008edf50(void);

// decompiled by BatchDecomp @ 008edf50 name=FUN_008edf50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008edf50(void)

{
  _DAT_00969328 = ((void *)(0x009194a4u));
  if (DAT_0096932c != (void *)0x0) {
    operator_delete__(DAT_0096932c);
  }
  _DAT_00969328 = ((void *)(0x00919488u));
  DAT_0096932c = (void *)0x0;
  return;
}


//==== 00008edf90 008edf90_FUN_008edf90 ====
void FUN_008edf90(void);

// decompiled by BatchDecomp @ 008edf90 name=FUN_008edf90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008edf90(void)

{
  _DAT_009693a8 = ((void *)(0x009194a4u));
  if (DAT_009693ac != (void *)0x0) {
    operator_delete__(DAT_009693ac);
  }
  _DAT_009693a8 = ((void *)(0x00919488u));
  DAT_009693ac = (void *)0x0;
  return;
}


//==== 00008edfd0 008edfd0_FUN_008edfd0 ====
void FUN_008edfd0(void);

// decompiled by BatchDecomp @ 008edfd0 name=FUN_008edfd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008edfd0(void)

{
  _DAT_00969358 = ((void *)(0x009194a4u));
  if (DAT_0096935c != (void *)0x0) {
    operator_delete__(DAT_0096935c);
  }
  _DAT_00969358 = ((void *)(0x00919488u));
  DAT_0096935c = (void *)0x0;
  return;
}


//==== 00008ee010 008ee010_FUN_008ee010 ====
void FUN_008ee010(void);

// decompiled by BatchDecomp @ 008ee010 name=FUN_008ee010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee010(void)

{
  _DAT_00969348 = ((void *)(0x009194a4u));
  if (DAT_0096934c != (void *)0x0) {
    operator_delete__(DAT_0096934c);
  }
  _DAT_00969348 = ((void *)(0x00919488u));
  DAT_0096934c = (void *)0x0;
  return;
}


//==== 00008ee050 008ee050_FUN_008ee050 ====
void FUN_008ee050(void);

// decompiled by BatchDecomp @ 008ee050 name=FUN_008ee050 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee050(void)

{
  _DAT_00969388 = ((void *)(0x009194a4u));
  if (DAT_0096938c != (void *)0x0) {
    operator_delete__(DAT_0096938c);
  }
  _DAT_00969388 = ((void *)(0x00919488u));
  DAT_0096938c = (void *)0x0;
  return;
}


//==== 00008ee3f0 008ee3f0_FUN_008ee3f0 ====
void FUN_008ee3f0(void);

// decompiled by BatchDecomp @ 008ee3f0 name=FUN_008ee3f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee3f0(void)

{
  _DAT_00969ff4 = ((void *)(0x009194a4u));
  if (DAT_00969ff8 != (void *)0x0) {
    operator_delete__(DAT_00969ff8);
  }
  _DAT_00969ff4 = ((void *)(0x00919488u));
  DAT_00969ff8 = (void *)0x0;
  return;
}


//==== 00008ee430 008ee430_FUN_008ee430 ====
void FUN_008ee430(void);

// decompiled by BatchDecomp @ 008ee430 name=FUN_008ee430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee430(void)

{
  _DAT_00969f94 = ((void *)(0x009194a4u));
  if (DAT_00969f98 != (void *)0x0) {
    operator_delete__(DAT_00969f98);
  }
  _DAT_00969f94 = ((void *)(0x00919488u));
  DAT_00969f98 = (void *)0x0;
  return;
}


//==== 00008ee470 008ee470_FUN_008ee470 ====
void FUN_008ee470(void);

// decompiled by BatchDecomp @ 008ee470 name=FUN_008ee470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee470(void)

{
  _DAT_00969fd4 = ((void *)(0x009194a4u));
  if (DAT_00969fd8 != (void *)0x0) {
    operator_delete__(DAT_00969fd8);
  }
  _DAT_00969fd4 = ((void *)(0x00919488u));
  DAT_00969fd8 = (void *)0x0;
  return;
}


//==== 00008ee4b0 008ee4b0_FUN_008ee4b0 ====
void FUN_008ee4b0(void);

// decompiled by BatchDecomp @ 008ee4b0 name=FUN_008ee4b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee4b0(void)

{
  _DAT_00969fc4 = ((void *)(0x009194a4u));
  if (DAT_00969fc8 != (void *)0x0) {
    operator_delete__(DAT_00969fc8);
  }
  _DAT_00969fc4 = ((void *)(0x00919488u));
  DAT_00969fc8 = (void *)0x0;
  return;
}


//==== 00008ee4f0 008ee4f0_FUN_008ee4f0 ====
void FUN_008ee4f0(void);

// decompiled by BatchDecomp @ 008ee4f0 name=FUN_008ee4f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee4f0(void)

{
  _DAT_0096a014 = ((void *)(0x009194a4u));
  if (DAT_0096a018 != (void *)0x0) {
    operator_delete__(DAT_0096a018);
  }
  _DAT_0096a014 = ((void *)(0x00919488u));
  DAT_0096a018 = (void *)0x0;
  return;
}


//==== 00008ee530 008ee530_FUN_008ee530 ====
void FUN_008ee530(void);

// decompiled by BatchDecomp @ 008ee530 name=FUN_008ee530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee530(void)

{
  _DAT_00969f84 = ((void *)(0x009194a4u));
  if (DAT_00969f88 != (void *)0x0) {
    operator_delete__(DAT_00969f88);
  }
  _DAT_00969f84 = ((void *)(0x00919488u));
  DAT_00969f88 = (void *)0x0;
  return;
}


//==== 00008ee570 008ee570_FUN_008ee570 ====
void FUN_008ee570(void);

// decompiled by BatchDecomp @ 008ee570 name=FUN_008ee570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee570(void)

{
  _DAT_0096a004 = ((void *)(0x009194a4u));
  if (DAT_0096a008 != (void *)0x0) {
    operator_delete__(DAT_0096a008);
  }
  _DAT_0096a004 = ((void *)(0x00919488u));
  DAT_0096a008 = (void *)0x0;
  return;
}


//==== 00008ee5b0 008ee5b0_FUN_008ee5b0 ====
void FUN_008ee5b0(void);

// decompiled by BatchDecomp @ 008ee5b0 name=FUN_008ee5b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee5b0(void)

{
  _DAT_00969fb4 = ((void *)(0x009194a4u));
  if (DAT_00969fb8 != (void *)0x0) {
    operator_delete__(DAT_00969fb8);
  }
  _DAT_00969fb4 = ((void *)(0x00919488u));
  DAT_00969fb8 = (void *)0x0;
  return;
}


//==== 00008ee5f0 008ee5f0_FUN_008ee5f0 ====
void FUN_008ee5f0(void);

// decompiled by BatchDecomp @ 008ee5f0 name=FUN_008ee5f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee5f0(void)

{
  _DAT_00969fa4 = ((void *)(0x009194a4u));
  if (DAT_00969fa8 != (void *)0x0) {
    operator_delete__(DAT_00969fa8);
  }
  _DAT_00969fa4 = ((void *)(0x00919488u));
  DAT_00969fa8 = (void *)0x0;
  return;
}


//==== 00008ee630 008ee630_FUN_008ee630 ====
void FUN_008ee630(void);

// decompiled by BatchDecomp @ 008ee630 name=FUN_008ee630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee630(void)

{
  _DAT_00969fe4 = ((void *)(0x009194a4u));
  if (DAT_00969fe8 != (void *)0x0) {
    operator_delete__(DAT_00969fe8);
  }
  _DAT_00969fe4 = ((void *)(0x00919488u));
  DAT_00969fe8 = (void *)0x0;
  return;
}


//==== 00008ee940 008ee940_FUN_008ee940 ====
void FUN_008ee940(void);

// decompiled by BatchDecomp @ 008ee940 name=FUN_008ee940 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee940(void)

{
  _DAT_0096a2b8 = ((void *)(0x009194a4u));
  if (DAT_0096a2bc != (void *)0x0) {
    operator_delete__(DAT_0096a2bc);
  }
  _DAT_0096a2b8 = ((void *)(0x00919488u));
  DAT_0096a2bc = (void *)0x0;
  return;
}


//==== 00008ee980 008ee980_FUN_008ee980 ====
void FUN_008ee980(void);

// decompiled by BatchDecomp @ 008ee980 name=FUN_008ee980 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee980(void)

{
  _DAT_0096a258 = ((void *)(0x009194a4u));
  if (DAT_0096a25c != (void *)0x0) {
    operator_delete__(DAT_0096a25c);
  }
  _DAT_0096a258 = ((void *)(0x00919488u));
  DAT_0096a25c = (void *)0x0;
  return;
}


//==== 00008ee9c0 008ee9c0_FUN_008ee9c0 ====
void FUN_008ee9c0(void);

// decompiled by BatchDecomp @ 008ee9c0 name=FUN_008ee9c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ee9c0(void)

{
  _DAT_0096a298 = ((void *)(0x009194a4u));
  if (DAT_0096a29c != (void *)0x0) {
    operator_delete__(DAT_0096a29c);
  }
  _DAT_0096a298 = ((void *)(0x00919488u));
  DAT_0096a29c = (void *)0x0;
  return;
}


//==== 00008eea00 008eea00_FUN_008eea00 ====
void FUN_008eea00(void);

// decompiled by BatchDecomp @ 008eea00 name=FUN_008eea00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eea00(void)

{
  _DAT_0096a288 = ((void *)(0x009194a4u));
  if (DAT_0096a28c != (void *)0x0) {
    operator_delete__(DAT_0096a28c);
  }
  _DAT_0096a288 = ((void *)(0x00919488u));
  DAT_0096a28c = (void *)0x0;
  return;
}


//==== 00008eea40 008eea40_FUN_008eea40 ====
void FUN_008eea40(void);

// decompiled by BatchDecomp @ 008eea40 name=FUN_008eea40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eea40(void)

{
  _DAT_0096a2d8 = ((void *)(0x009194a4u));
  if (DAT_0096a2dc != (void *)0x0) {
    operator_delete__(DAT_0096a2dc);
  }
  _DAT_0096a2d8 = ((void *)(0x00919488u));
  DAT_0096a2dc = (void *)0x0;
  return;
}


//==== 00008eea80 008eea80_FUN_008eea80 ====
void FUN_008eea80(void);

// decompiled by BatchDecomp @ 008eea80 name=FUN_008eea80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eea80(void)

{
  _DAT_0096a248 = ((void *)(0x009194a4u));
  if (DAT_0096a24c != (void *)0x0) {
    operator_delete__(DAT_0096a24c);
  }
  _DAT_0096a248 = ((void *)(0x00919488u));
  DAT_0096a24c = (void *)0x0;
  return;
}


//==== 00008eeac0 008eeac0_FUN_008eeac0 ====
void FUN_008eeac0(void);

// decompiled by BatchDecomp @ 008eeac0 name=FUN_008eeac0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eeac0(void)

{
  _DAT_0096a2f8 = ((void *)(0x009194a4u));
  if (DAT_0096a2fc != (void *)0x0) {
    operator_delete__(DAT_0096a2fc);
  }
  _DAT_0096a2f8 = ((void *)(0x00919488u));
  DAT_0096a2fc = (void *)0x0;
  return;
}


//==== 00008eeb00 008eeb00_FUN_008eeb00 ====
void FUN_008eeb00(void);

// decompiled by BatchDecomp @ 008eeb00 name=FUN_008eeb00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eeb00(void)

{
  _DAT_0096a2c8 = ((void *)(0x009194a4u));
  if (DAT_0096a2cc != (void *)0x0) {
    operator_delete__(DAT_0096a2cc);
  }
  _DAT_0096a2c8 = ((void *)(0x00919488u));
  DAT_0096a2cc = (void *)0x0;
  return;
}


//==== 00008eeb40 008eeb40_FUN_008eeb40 ====
void FUN_008eeb40(void);

// decompiled by BatchDecomp @ 008eeb40 name=FUN_008eeb40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eeb40(void)

{
  _DAT_0096a278 = ((void *)(0x009194a4u));
  if (DAT_0096a27c != (void *)0x0) {
    operator_delete__(DAT_0096a27c);
  }
  _DAT_0096a278 = ((void *)(0x00919488u));
  DAT_0096a27c = (void *)0x0;
  return;
}


//==== 00008eeb80 008eeb80_FUN_008eeb80 ====
void FUN_008eeb80(void);

// decompiled by BatchDecomp @ 008eeb80 name=FUN_008eeb80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eeb80(void)

{
  _DAT_0096a268 = ((void *)(0x009194a4u));
  if (DAT_0096a26c != (void *)0x0) {
    operator_delete__(DAT_0096a26c);
  }
  _DAT_0096a268 = ((void *)(0x00919488u));
  DAT_0096a26c = (void *)0x0;
  return;
}


//==== 00008eebc0 008eebc0_FUN_008eebc0 ====
void FUN_008eebc0(void);

// decompiled by BatchDecomp @ 008eebc0 name=FUN_008eebc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eebc0(void)

{
  _DAT_0096a2e8 = ((void *)(0x009194a4u));
  if (DAT_0096a2ec != (void *)0x0) {
    operator_delete__(DAT_0096a2ec);
  }
  _DAT_0096a2e8 = ((void *)(0x00919488u));
  DAT_0096a2ec = (void *)0x0;
  return;
}


//==== 00008eec00 008eec00_FUN_008eec00 ====
void FUN_008eec00(void);

// decompiled by BatchDecomp @ 008eec00 name=FUN_008eec00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eec00(void)

{
  _DAT_0096a2a8 = ((void *)(0x009194a4u));
  if (DAT_0096a2ac != (void *)0x0) {
    operator_delete__(DAT_0096a2ac);
  }
  _DAT_0096a2a8 = ((void *)(0x00919488u));
  DAT_0096a2ac = (void *)0x0;
  return;
}


//==== 00008eefa0 008eefa0_FUN_008eefa0 ====
void FUN_008eefa0(void);

// decompiled by BatchDecomp @ 008eefa0 name=FUN_008eefa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eefa0(void)

{
  _DAT_0096a87c = ((void *)(0x009194a4u));
  if (DAT_0096a880 != (void *)0x0) {
    operator_delete__(DAT_0096a880);
  }
  _DAT_0096a87c = ((void *)(0x00919488u));
  DAT_0096a880 = (void *)0x0;
  return;
}


//==== 00008eeff0 008eeff0_FUN_008eeff0 ====
void FUN_008eeff0(void);

// decompiled by BatchDecomp @ 008eeff0 name=FUN_008eeff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008eeff0(void)

{
  _DAT_0096a81c = ((void *)(0x009194a4u));
  if (DAT_0096a820 != (void *)0x0) {
    operator_delete__(DAT_0096a820);
  }
  _DAT_0096a81c = ((void *)(0x00919488u));
  DAT_0096a820 = (void *)0x0;
  return;
}


//==== 00008ef030 008ef030_FUN_008ef030 ====
void FUN_008ef030(void);

// decompiled by BatchDecomp @ 008ef030 name=FUN_008ef030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef030(void)

{
  _DAT_0096a85c = ((void *)(0x009194a4u));
  if (DAT_0096a860 != (void *)0x0) {
    operator_delete__(DAT_0096a860);
  }
  _DAT_0096a85c = ((void *)(0x00919488u));
  DAT_0096a860 = (void *)0x0;
  return;
}


//==== 00008ef070 008ef070_FUN_008ef070 ====
void FUN_008ef070(void);

// decompiled by BatchDecomp @ 008ef070 name=FUN_008ef070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef070(void)

{
  _DAT_0096a84c = ((void *)(0x009194a4u));
  if (DAT_0096a850 != (void *)0x0) {
    operator_delete__(DAT_0096a850);
  }
  _DAT_0096a84c = ((void *)(0x00919488u));
  DAT_0096a850 = (void *)0x0;
  return;
}


//==== 00008ef0b0 008ef0b0_FUN_008ef0b0 ====
void FUN_008ef0b0(void);

// decompiled by BatchDecomp @ 008ef0b0 name=FUN_008ef0b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef0b0(void)

{
  _DAT_0096a89c = ((void *)(0x009194a4u));
  if (DAT_0096a8a0 != (void *)0x0) {
    operator_delete__(DAT_0096a8a0);
  }
  _DAT_0096a89c = ((void *)(0x00919488u));
  DAT_0096a8a0 = (void *)0x0;
  return;
}


//==== 00008ef0f0 008ef0f0_FUN_008ef0f0 ====
void FUN_008ef0f0(void);

// decompiled by BatchDecomp @ 008ef0f0 name=FUN_008ef0f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef0f0(void)

{
  _DAT_0096a80c = ((void *)(0x009194a4u));
  if (DAT_0096a810 != (void *)0x0) {
    operator_delete__(DAT_0096a810);
  }
  _DAT_0096a80c = ((void *)(0x00919488u));
  DAT_0096a810 = (void *)0x0;
  return;
}


//==== 00008ef130 008ef130_FUN_008ef130 ====
void FUN_008ef130(void);

// decompiled by BatchDecomp @ 008ef130 name=FUN_008ef130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef130(void)

{
  _DAT_0096a88c = ((void *)(0x009194a4u));
  if (DAT_0096a890 != (void *)0x0) {
    operator_delete__(DAT_0096a890);
  }
  _DAT_0096a88c = ((void *)(0x00919488u));
  DAT_0096a890 = (void *)0x0;
  return;
}


//==== 00008ef170 008ef170_FUN_008ef170 ====
void FUN_008ef170(void);

// decompiled by BatchDecomp @ 008ef170 name=FUN_008ef170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef170(void)

{
  _DAT_0096a83c = ((void *)(0x009194a4u));
  if (DAT_0096a840 != (void *)0x0) {
    operator_delete__(DAT_0096a840);
  }
  _DAT_0096a83c = ((void *)(0x00919488u));
  DAT_0096a840 = (void *)0x0;
  return;
}


//==== 00008ef1b0 008ef1b0_FUN_008ef1b0 ====
void FUN_008ef1b0(void);

// decompiled by BatchDecomp @ 008ef1b0 name=FUN_008ef1b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef1b0(void)

{
  _DAT_0096a82c = ((void *)(0x009194a4u));
  if (DAT_0096a830 != (void *)0x0) {
    operator_delete__(DAT_0096a830);
  }
  _DAT_0096a82c = ((void *)(0x00919488u));
  DAT_0096a830 = (void *)0x0;
  return;
}


//==== 00008ef1f0 008ef1f0_FUN_008ef1f0 ====
void FUN_008ef1f0(void);

// decompiled by BatchDecomp @ 008ef1f0 name=FUN_008ef1f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef1f0(void)

{
  _DAT_0096a86c = ((void *)(0x009194a4u));
  if (DAT_0096a870 != (void *)0x0) {
    operator_delete__(DAT_0096a870);
  }
  _DAT_0096a86c = ((void *)(0x00919488u));
  DAT_0096a870 = (void *)0x0;
  return;
}


//==== 00008ef610 008ef610_FUN_008ef610 ====
void FUN_008ef610(void);

// decompiled by BatchDecomp @ 008ef610 name=FUN_008ef610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef610(void)

{
  _DAT_0096af84 = ((void *)(0x009194a4u));
  if (DAT_0096af88 != (void *)0x0) {
    operator_delete__(DAT_0096af88);
  }
  _DAT_0096af84 = ((void *)(0x00919488u));
  DAT_0096af88 = (void *)0x0;
  return;
}


//==== 00008ef650 008ef650_FUN_008ef650 ====
void FUN_008ef650(void);

// decompiled by BatchDecomp @ 008ef650 name=FUN_008ef650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef650(void)

{
  _DAT_0096af24 = ((void *)(0x009194a4u));
  if (DAT_0096af28 != (void *)0x0) {
    operator_delete__(DAT_0096af28);
  }
  _DAT_0096af24 = ((void *)(0x00919488u));
  DAT_0096af28 = (void *)0x0;
  return;
}


//==== 00008ef690 008ef690_FUN_008ef690 ====
void FUN_008ef690(void);

// decompiled by BatchDecomp @ 008ef690 name=FUN_008ef690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef690(void)

{
  _DAT_0096af64 = ((void *)(0x009194a4u));
  if (DAT_0096af68 != (void *)0x0) {
    operator_delete__(DAT_0096af68);
  }
  _DAT_0096af64 = ((void *)(0x00919488u));
  DAT_0096af68 = (void *)0x0;
  return;
}


//==== 00008ef6d0 008ef6d0_FUN_008ef6d0 ====
void FUN_008ef6d0(void);

// decompiled by BatchDecomp @ 008ef6d0 name=FUN_008ef6d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef6d0(void)

{
  _DAT_0096af54 = ((void *)(0x009194a4u));
  if (DAT_0096af58 != (void *)0x0) {
    operator_delete__(DAT_0096af58);
  }
  _DAT_0096af54 = ((void *)(0x00919488u));
  DAT_0096af58 = (void *)0x0;
  return;
}


//==== 00008ef710 008ef710_FUN_008ef710 ====
void FUN_008ef710(void);

// decompiled by BatchDecomp @ 008ef710 name=FUN_008ef710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef710(void)

{
  _DAT_0096afa4 = ((void *)(0x009194a4u));
  if (DAT_0096afa8 != (void *)0x0) {
    operator_delete__(DAT_0096afa8);
  }
  _DAT_0096afa4 = ((void *)(0x00919488u));
  DAT_0096afa8 = (void *)0x0;
  return;
}


//==== 00008ef750 008ef750_FUN_008ef750 ====
void FUN_008ef750(void);

// decompiled by BatchDecomp @ 008ef750 name=FUN_008ef750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef750(void)

{
  _DAT_0096af14 = ((void *)(0x009194a4u));
  if (DAT_0096af18 != (void *)0x0) {
    operator_delete__(DAT_0096af18);
  }
  _DAT_0096af14 = ((void *)(0x00919488u));
  DAT_0096af18 = (void *)0x0;
  return;
}


//==== 00008ef790 008ef790_FUN_008ef790 ====
void FUN_008ef790(void);

// decompiled by BatchDecomp @ 008ef790 name=FUN_008ef790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef790(void)

{
  _DAT_0096af94 = ((void *)(0x009194a4u));
  if (DAT_0096af98 != (void *)0x0) {
    operator_delete__(DAT_0096af98);
  }
  _DAT_0096af94 = ((void *)(0x00919488u));
  DAT_0096af98 = (void *)0x0;
  return;
}


//==== 00008ef7d0 008ef7d0_FUN_008ef7d0 ====
void FUN_008ef7d0(void);

// decompiled by BatchDecomp @ 008ef7d0 name=FUN_008ef7d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef7d0(void)

{
  _DAT_0096af44 = ((void *)(0x009194a4u));
  if (DAT_0096af48 != (void *)0x0) {
    operator_delete__(DAT_0096af48);
  }
  _DAT_0096af44 = ((void *)(0x00919488u));
  DAT_0096af48 = (void *)0x0;
  return;
}


//==== 00008ef810 008ef810_FUN_008ef810 ====
void FUN_008ef810(void);

// decompiled by BatchDecomp @ 008ef810 name=FUN_008ef810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef810(void)

{
  _DAT_0096af34 = ((void *)(0x009194a4u));
  if (DAT_0096af38 != (void *)0x0) {
    operator_delete__(DAT_0096af38);
  }
  _DAT_0096af34 = ((void *)(0x00919488u));
  DAT_0096af38 = (void *)0x0;
  return;
}


//==== 00008ef850 008ef850_FUN_008ef850 ====
void FUN_008ef850(void);

// decompiled by BatchDecomp @ 008ef850 name=FUN_008ef850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef850(void)

{
  _DAT_0096afb4 = ((void *)(0x009194a4u));
  if (DAT_0096afb8 != (void *)0x0) {
    operator_delete__(DAT_0096afb8);
  }
  _DAT_0096afb4 = ((void *)(0x00919488u));
  DAT_0096afb8 = (void *)0x0;
  return;
}


//==== 00008ef890 008ef890_FUN_008ef890 ====
void FUN_008ef890(void);

// decompiled by BatchDecomp @ 008ef890 name=FUN_008ef890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ef890(void)

{
  _DAT_0096af74 = ((void *)(0x009194a4u));
  if (DAT_0096af78 != (void *)0x0) {
    operator_delete__(DAT_0096af78);
  }
  _DAT_0096af74 = ((void *)(0x00919488u));
  DAT_0096af78 = (void *)0x0;
  return;
}


//==== 00008efc10 008efc10_FUN_008efc10 ====
void FUN_008efc10(void);

// decompiled by BatchDecomp @ 008efc10 name=FUN_008efc10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efc10(void)

{
  _DAT_0096b610 = ((void *)(0x009194a4u));
  if (DAT_0096b614 != (void *)0x0) {
    operator_delete__(DAT_0096b614);
  }
  _DAT_0096b610 = ((void *)(0x00919488u));
  DAT_0096b614 = (void *)0x0;
  return;
}


//==== 00008efc50 008efc50_FUN_008efc50 ====
void FUN_008efc50(void);

// decompiled by BatchDecomp @ 008efc50 name=FUN_008efc50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efc50(void)

{
  _DAT_0096b5b0 = ((void *)(0x009194a4u));
  if (DAT_0096b5b4 != (void *)0x0) {
    operator_delete__(DAT_0096b5b4);
  }
  _DAT_0096b5b0 = ((void *)(0x00919488u));
  DAT_0096b5b4 = (void *)0x0;
  return;
}


//==== 00008efc90 008efc90_FUN_008efc90 ====
void FUN_008efc90(void);

// decompiled by BatchDecomp @ 008efc90 name=FUN_008efc90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efc90(void)

{
  _DAT_0096b5f0 = ((void *)(0x009194a4u));
  if (DAT_0096b5f4 != (void *)0x0) {
    operator_delete__(DAT_0096b5f4);
  }
  _DAT_0096b5f0 = ((void *)(0x00919488u));
  DAT_0096b5f4 = (void *)0x0;
  return;
}


//==== 00008efcd0 008efcd0_FUN_008efcd0 ====
void FUN_008efcd0(void);

// decompiled by BatchDecomp @ 008efcd0 name=FUN_008efcd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efcd0(void)

{
  _DAT_0096b5e0 = ((void *)(0x009194a4u));
  if (DAT_0096b5e4 != (void *)0x0) {
    operator_delete__(DAT_0096b5e4);
  }
  _DAT_0096b5e0 = ((void *)(0x00919488u));
  DAT_0096b5e4 = (void *)0x0;
  return;
}


//==== 00008efd10 008efd10_FUN_008efd10 ====
void FUN_008efd10(void);

// decompiled by BatchDecomp @ 008efd10 name=FUN_008efd10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efd10(void)

{
  _DAT_0096b630 = ((void *)(0x009194a4u));
  if (DAT_0096b634 != (void *)0x0) {
    operator_delete__(DAT_0096b634);
  }
  _DAT_0096b630 = ((void *)(0x00919488u));
  DAT_0096b634 = (void *)0x0;
  return;
}


//==== 00008efd50 008efd50_FUN_008efd50 ====
void FUN_008efd50(void);

// decompiled by BatchDecomp @ 008efd50 name=FUN_008efd50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efd50(void)

{
  _DAT_0096b5a0 = ((void *)(0x009194a4u));
  if (DAT_0096b5a4 != (void *)0x0) {
    operator_delete__(DAT_0096b5a4);
  }
  _DAT_0096b5a0 = ((void *)(0x00919488u));
  DAT_0096b5a4 = (void *)0x0;
  return;
}


//==== 00008efd90 008efd90_FUN_008efd90 ====
void FUN_008efd90(void);

// decompiled by BatchDecomp @ 008efd90 name=FUN_008efd90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efd90(void)

{
  _DAT_0096b620 = ((void *)(0x009194a4u));
  if (DAT_0096b624 != (void *)0x0) {
    operator_delete__(DAT_0096b624);
  }
  _DAT_0096b620 = ((void *)(0x00919488u));
  DAT_0096b624 = (void *)0x0;
  return;
}


//==== 00008efdd0 008efdd0_FUN_008efdd0 ====
void FUN_008efdd0(void);

// decompiled by BatchDecomp @ 008efdd0 name=FUN_008efdd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efdd0(void)

{
  _DAT_0096b5d0 = ((void *)(0x009194a4u));
  if (DAT_0096b5d4 != (void *)0x0) {
    operator_delete__(DAT_0096b5d4);
  }
  _DAT_0096b5d0 = ((void *)(0x00919488u));
  DAT_0096b5d4 = (void *)0x0;
  return;
}


//==== 00008efe10 008efe10_FUN_008efe10 ====
void FUN_008efe10(void);

// decompiled by BatchDecomp @ 008efe10 name=FUN_008efe10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efe10(void)

{
  _DAT_0096b5c0 = ((void *)(0x009194a4u));
  if (DAT_0096b5c4 != (void *)0x0) {
    operator_delete__(DAT_0096b5c4);
  }
  _DAT_0096b5c0 = ((void *)(0x00919488u));
  DAT_0096b5c4 = (void *)0x0;
  return;
}


//==== 00008efe50 008efe50_FUN_008efe50 ====
void FUN_008efe50(void);

// decompiled by BatchDecomp @ 008efe50 name=FUN_008efe50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008efe50(void)

{
  _DAT_0096b600 = ((void *)(0x009194a4u));
  if (DAT_0096b604 != (void *)0x0) {
    operator_delete__(DAT_0096b604);
  }
  _DAT_0096b600 = ((void *)(0x00919488u));
  DAT_0096b604 = (void *)0x0;
  return;
}


//==== 00008f0110 008f0110_FUN_008f0110 ====
void FUN_008f0110(void);

// decompiled by BatchDecomp @ 008f0110 name=FUN_008f0110 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0110(void)

{
  _DAT_0096b88c = ((void *)(0x009194a4u));
  if (DAT_0096b890 != (void *)0x0) {
    operator_delete__(DAT_0096b890);
  }
  _DAT_0096b88c = ((void *)(0x00919488u));
  DAT_0096b890 = (void *)0x0;
  return;
}


//==== 00008f0150 008f0150_FUN_008f0150 ====
void FUN_008f0150(void);

// decompiled by BatchDecomp @ 008f0150 name=FUN_008f0150 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0150(void)

{
  _DAT_0096b82c = ((void *)(0x009194a4u));
  if (DAT_0096b830 != (void *)0x0) {
    operator_delete__(DAT_0096b830);
  }
  _DAT_0096b82c = ((void *)(0x00919488u));
  DAT_0096b830 = (void *)0x0;
  return;
}


//==== 00008f0190 008f0190_FUN_008f0190 ====
void FUN_008f0190(void);

// decompiled by BatchDecomp @ 008f0190 name=FUN_008f0190 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0190(void)

{
  _DAT_0096b86c = ((void *)(0x009194a4u));
  if (DAT_0096b870 != (void *)0x0) {
    operator_delete__(DAT_0096b870);
  }
  _DAT_0096b86c = ((void *)(0x00919488u));
  DAT_0096b870 = (void *)0x0;
  return;
}


//==== 00008f01d0 008f01d0_FUN_008f01d0 ====
void FUN_008f01d0(void);

// decompiled by BatchDecomp @ 008f01d0 name=FUN_008f01d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f01d0(void)

{
  _DAT_0096b85c = ((void *)(0x009194a4u));
  if (DAT_0096b860 != (void *)0x0) {
    operator_delete__(DAT_0096b860);
  }
  _DAT_0096b85c = ((void *)(0x00919488u));
  DAT_0096b860 = (void *)0x0;
  return;
}


//==== 00008f0210 008f0210_FUN_008f0210 ====
void FUN_008f0210(void);

// decompiled by BatchDecomp @ 008f0210 name=FUN_008f0210 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0210(void)

{
  _DAT_0096b8ac = ((void *)(0x009194a4u));
  if (DAT_0096b8b0 != (void *)0x0) {
    operator_delete__(DAT_0096b8b0);
  }
  _DAT_0096b8ac = ((void *)(0x00919488u));
  DAT_0096b8b0 = (void *)0x0;
  return;
}


//==== 00008f0250 008f0250_FUN_008f0250 ====
void FUN_008f0250(void);

// decompiled by BatchDecomp @ 008f0250 name=FUN_008f0250 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0250(void)

{
  _DAT_0096b81c = ((void *)(0x009194a4u));
  if (DAT_0096b820 != (void *)0x0) {
    operator_delete__(DAT_0096b820);
  }
  _DAT_0096b81c = ((void *)(0x00919488u));
  DAT_0096b820 = (void *)0x0;
  return;
}


//==== 00008f0290 008f0290_FUN_008f0290 ====
void FUN_008f0290(void);

// decompiled by BatchDecomp @ 008f0290 name=FUN_008f0290 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0290(void)

{
  _DAT_0096b89c = ((void *)(0x009194a4u));
  if (DAT_0096b8a0 != (void *)0x0) {
    operator_delete__(DAT_0096b8a0);
  }
  _DAT_0096b89c = ((void *)(0x00919488u));
  DAT_0096b8a0 = (void *)0x0;
  return;
}


//==== 00008f02d0 008f02d0_FUN_008f02d0 ====
void FUN_008f02d0(void);

// decompiled by BatchDecomp @ 008f02d0 name=FUN_008f02d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f02d0(void)

{
  _DAT_0096b84c = ((void *)(0x009194a4u));
  if (DAT_0096b850 != (void *)0x0) {
    operator_delete__(DAT_0096b850);
  }
  _DAT_0096b84c = ((void *)(0x00919488u));
  DAT_0096b850 = (void *)0x0;
  return;
}


//==== 00008f0310 008f0310_FUN_008f0310 ====
void FUN_008f0310(void);

// decompiled by BatchDecomp @ 008f0310 name=FUN_008f0310 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0310(void)

{
  _DAT_0096b83c = ((void *)(0x009194a4u));
  if (DAT_0096b840 != (void *)0x0) {
    operator_delete__(DAT_0096b840);
  }
  _DAT_0096b83c = ((void *)(0x00919488u));
  DAT_0096b840 = (void *)0x0;
  return;
}


//==== 00008f0350 008f0350_FUN_008f0350 ====
void FUN_008f0350(void);

// decompiled by BatchDecomp @ 008f0350 name=FUN_008f0350 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0350(void)

{
  _DAT_0096b87c = ((void *)(0x009194a4u));
  if (DAT_0096b880 != (void *)0x0) {
    operator_delete__(DAT_0096b880);
  }
  _DAT_0096b87c = ((void *)(0x00919488u));
  DAT_0096b880 = (void *)0x0;
  return;
}


//==== 00008f0640 008f0640_FUN_008f0640 ====
void FUN_008f0640(void);

// decompiled by BatchDecomp @ 008f0640 name=FUN_008f0640 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0640(void)

{
  _DAT_0096bb28 = ((void *)(0x009194a4u));
  if (DAT_0096bb2c != (void *)0x0) {
    operator_delete__(DAT_0096bb2c);
  }
  _DAT_0096bb28 = ((void *)(0x00919488u));
  DAT_0096bb2c = (void *)0x0;
  return;
}


//==== 00008f0680 008f0680_FUN_008f0680 ====
void FUN_008f0680(void);

// decompiled by BatchDecomp @ 008f0680 name=FUN_008f0680 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0680(void)

{
  _DAT_0096bae8 = ((void *)(0x009194a4u));
  if (DAT_0096baec != (void *)0x0) {
    operator_delete__(DAT_0096baec);
  }
  _DAT_0096bae8 = ((void *)(0x00919488u));
  DAT_0096baec = (void *)0x0;
  return;
}


//==== 00008f06c0 008f06c0_FUN_008f06c0 ====
void FUN_008f06c0(void);

// decompiled by BatchDecomp @ 008f06c0 name=FUN_008f06c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f06c0(void)

{
  _DAT_0096bb08 = ((void *)(0x009194a4u));
  if (DAT_0096bb0c != (void *)0x0) {
    operator_delete__(DAT_0096bb0c);
  }
  _DAT_0096bb08 = ((void *)(0x00919488u));
  DAT_0096bb0c = (void *)0x0;
  return;
}


//==== 00008f0700 008f0700_FUN_008f0700 ====
void FUN_008f0700(void);

// decompiled by BatchDecomp @ 008f0700 name=FUN_008f0700 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0700(void)

{
  _DAT_0096baf8 = ((void *)(0x009194a4u));
  if (DAT_0096bafc != (void *)0x0) {
    operator_delete__(DAT_0096bafc);
  }
  _DAT_0096baf8 = ((void *)(0x00919488u));
  DAT_0096bafc = (void *)0x0;
  return;
}


//==== 00008f0740 008f0740_FUN_008f0740 ====
void FUN_008f0740(void);

// decompiled by BatchDecomp @ 008f0740 name=FUN_008f0740 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0740(void)

{
  _DAT_0096bb48 = ((void *)(0x009194a4u));
  if (DAT_0096bb4c != (void *)0x0) {
    operator_delete__(DAT_0096bb4c);
  }
  _DAT_0096bb48 = ((void *)(0x00919488u));
  DAT_0096bb4c = (void *)0x0;
  return;
}


//==== 00008f0780 008f0780_FUN_008f0780 ====
void FUN_008f0780(void);

// decompiled by BatchDecomp @ 008f0780 name=FUN_008f0780 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0780(void)

{
  _DAT_0096bad8 = ((void *)(0x009194a4u));
  if (DAT_0096badc != (void *)0x0) {
    operator_delete__(DAT_0096badc);
  }
  _DAT_0096bad8 = ((void *)(0x00919488u));
  DAT_0096badc = (void *)0x0;
  return;
}


//==== 00008f07c0 008f07c0_FUN_008f07c0 ====
void FUN_008f07c0(void);

// decompiled by BatchDecomp @ 008f07c0 name=FUN_008f07c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f07c0(void)

{
  _DAT_0096bb38 = ((void *)(0x009194a4u));
  if (DAT_0096bb3c != (void *)0x0) {
    operator_delete__(DAT_0096bb3c);
  }
  _DAT_0096bb38 = ((void *)(0x00919488u));
  DAT_0096bb3c = (void *)0x0;
  return;
}


//==== 00008f0800 008f0800_FUN_008f0800 ====
void FUN_008f0800(void);

// decompiled by BatchDecomp @ 008f0800 name=FUN_008f0800 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0800(void)

{
  _DAT_0096bac8 = ((void *)(0x009194a4u));
  if (DAT_0096bacc != (void *)0x0) {
    operator_delete__(DAT_0096bacc);
  }
  _DAT_0096bac8 = ((void *)(0x00919488u));
  DAT_0096bacc = (void *)0x0;
  return;
}


//==== 00008f0840 008f0840_FUN_008f0840 ====
void FUN_008f0840(void);

// decompiled by BatchDecomp @ 008f0840 name=FUN_008f0840 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0840(void)

{
  _DAT_0096bab8 = ((void *)(0x009194a4u));
  if (DAT_0096babc != (void *)0x0) {
    operator_delete__(DAT_0096babc);
  }
  _DAT_0096bab8 = ((void *)(0x00919488u));
  DAT_0096babc = (void *)0x0;
  return;
}


//==== 00008f0880 008f0880_FUN_008f0880 ====
void FUN_008f0880(void);

// decompiled by BatchDecomp @ 008f0880 name=FUN_008f0880 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0880(void)

{
  _DAT_0096bb58 = ((void *)(0x009194a4u));
  if (DAT_0096bb5c != (void *)0x0) {
    operator_delete__(DAT_0096bb5c);
  }
  _DAT_0096bb58 = ((void *)(0x00919488u));
  DAT_0096bb5c = (void *)0x0;
  return;
}


//==== 00008f08c0 008f08c0_FUN_008f08c0 ====
void FUN_008f08c0(void);

// decompiled by BatchDecomp @ 008f08c0 name=FUN_008f08c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f08c0(void)

{
  _DAT_0096bb18 = ((void *)(0x009194a4u));
  if (DAT_0096bb1c != (void *)0x0) {
    operator_delete__(DAT_0096bb1c);
  }
  _DAT_0096bb18 = ((void *)(0x00919488u));
  DAT_0096bb1c = (void *)0x0;
  return;
}


//==== 00008f0c20 008f0c20_FUN_008f0c20 ====
void FUN_008f0c20(void);

// decompiled by BatchDecomp @ 008f0c20 name=FUN_008f0c20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0c20(void)

{
  _DAT_0096be34 = ((void *)(0x009194a4u));
  if (DAT_0096be38 != (void *)0x0) {
    operator_delete__(DAT_0096be38);
  }
  _DAT_0096be34 = ((void *)(0x00919488u));
  DAT_0096be38 = (void *)0x0;
  return;
}


//==== 00008f0c60 008f0c60_FUN_008f0c60 ====
void FUN_008f0c60(void);

// decompiled by BatchDecomp @ 008f0c60 name=FUN_008f0c60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0c60(void)

{
  _DAT_0096bdf4 = ((void *)(0x009194a4u));
  if (DAT_0096bdf8 != (void *)0x0) {
    operator_delete__(DAT_0096bdf8);
  }
  _DAT_0096bdf4 = ((void *)(0x00919488u));
  DAT_0096bdf8 = (void *)0x0;
  return;
}


//==== 00008f0ca0 008f0ca0_FUN_008f0ca0 ====
void FUN_008f0ca0(void);

// decompiled by BatchDecomp @ 008f0ca0 name=FUN_008f0ca0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0ca0(void)

{
  _DAT_0096be14 = ((void *)(0x009194a4u));
  if (DAT_0096be18 != (void *)0x0) {
    operator_delete__(DAT_0096be18);
  }
  _DAT_0096be14 = ((void *)(0x00919488u));
  DAT_0096be18 = (void *)0x0;
  return;
}


//==== 00008f0ce0 008f0ce0_FUN_008f0ce0 ====
void FUN_008f0ce0(void);

// decompiled by BatchDecomp @ 008f0ce0 name=FUN_008f0ce0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0ce0(void)

{
  _DAT_0096be04 = ((void *)(0x009194a4u));
  if (DAT_0096be08 != (void *)0x0) {
    operator_delete__(DAT_0096be08);
  }
  _DAT_0096be04 = ((void *)(0x00919488u));
  DAT_0096be08 = (void *)0x0;
  return;
}


//==== 00008f0d20 008f0d20_FUN_008f0d20 ====
void FUN_008f0d20(void);

// decompiled by BatchDecomp @ 008f0d20 name=FUN_008f0d20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0d20(void)

{
  _DAT_0096be54 = ((void *)(0x009194a4u));
  if (DAT_0096be58 != (void *)0x0) {
    operator_delete__(DAT_0096be58);
  }
  _DAT_0096be54 = ((void *)(0x00919488u));
  DAT_0096be58 = (void *)0x0;
  return;
}


//==== 00008f0d60 008f0d60_FUN_008f0d60 ====
void FUN_008f0d60(void);

// decompiled by BatchDecomp @ 008f0d60 name=FUN_008f0d60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0d60(void)

{
  _DAT_0096bde4 = ((void *)(0x009194a4u));
  if (DAT_0096bde8 != (void *)0x0) {
    operator_delete__(DAT_0096bde8);
  }
  _DAT_0096bde4 = ((void *)(0x00919488u));
  DAT_0096bde8 = (void *)0x0;
  return;
}


//==== 00008f0da0 008f0da0_FUN_008f0da0 ====
void FUN_008f0da0(void);

// decompiled by BatchDecomp @ 008f0da0 name=FUN_008f0da0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0da0(void)

{
  _DAT_0096be44 = ((void *)(0x009194a4u));
  if (DAT_0096be48 != (void *)0x0) {
    operator_delete__(DAT_0096be48);
  }
  _DAT_0096be44 = ((void *)(0x00919488u));
  DAT_0096be48 = (void *)0x0;
  return;
}


//==== 00008f0de0 008f0de0_FUN_008f0de0 ====
void FUN_008f0de0(void);

// decompiled by BatchDecomp @ 008f0de0 name=FUN_008f0de0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0de0(void)

{
  _DAT_0096bdd4 = ((void *)(0x009194a4u));
  if (DAT_0096bdd8 != (void *)0x0) {
    operator_delete__(DAT_0096bdd8);
  }
  _DAT_0096bdd4 = ((void *)(0x00919488u));
  DAT_0096bdd8 = (void *)0x0;
  return;
}


//==== 00008f0e20 008f0e20_FUN_008f0e20 ====
void FUN_008f0e20(void);

// decompiled by BatchDecomp @ 008f0e20 name=FUN_008f0e20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0e20(void)

{
  _DAT_0096bdc4 = ((void *)(0x009194a4u));
  if (DAT_0096bdc8 != (void *)0x0) {
    operator_delete__(DAT_0096bdc8);
  }
  _DAT_0096bdc4 = ((void *)(0x00919488u));
  DAT_0096bdc8 = (void *)0x0;
  return;
}


//==== 00008f0e60 008f0e60_FUN_008f0e60 ====
void FUN_008f0e60(void);

// decompiled by BatchDecomp @ 008f0e60 name=FUN_008f0e60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f0e60(void)

{
  _DAT_0096be24 = ((void *)(0x009194a4u));
  if (DAT_0096be28 != (void *)0x0) {
    operator_delete__(DAT_0096be28);
  }
  _DAT_0096be24 = ((void *)(0x00919488u));
  DAT_0096be28 = (void *)0x0;
  return;
}


//==== 00008f13a0 008f13a0_FUN_008f13a0 ====
void FUN_008f13a0(void);

// decompiled by BatchDecomp @ 008f13a0 name=FUN_008f13a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f13a0(void)

{
  _DAT_0096c7a0 = ((void *)(0x009194a4u));
  if (DAT_0096c7a4 != (void *)0x0) {
    operator_delete__(DAT_0096c7a4);
  }
  _DAT_0096c7a0 = ((void *)(0x00919488u));
  DAT_0096c7a4 = (void *)0x0;
  return;
}


//==== 00008f13e0 008f13e0_FUN_008f13e0 ====
void FUN_008f13e0(void);

// decompiled by BatchDecomp @ 008f13e0 name=FUN_008f13e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f13e0(void)

{
  _DAT_0096c760 = ((void *)(0x009194a4u));
  if (DAT_0096c764 != (void *)0x0) {
    operator_delete__(DAT_0096c764);
  }
  _DAT_0096c760 = ((void *)(0x00919488u));
  DAT_0096c764 = (void *)0x0;
  return;
}


//==== 00008f1420 008f1420_FUN_008f1420 ====
void FUN_008f1420(void);

// decompiled by BatchDecomp @ 008f1420 name=FUN_008f1420 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1420(void)

{
  _DAT_0096c780 = ((void *)(0x009194a4u));
  if (DAT_0096c784 != (void *)0x0) {
    operator_delete__(DAT_0096c784);
  }
  _DAT_0096c780 = ((void *)(0x00919488u));
  DAT_0096c784 = (void *)0x0;
  return;
}


//==== 00008f1460 008f1460_FUN_008f1460 ====
void FUN_008f1460(void);

// decompiled by BatchDecomp @ 008f1460 name=FUN_008f1460 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1460(void)

{
  _DAT_0096c770 = ((void *)(0x009194a4u));
  if (DAT_0096c774 != (void *)0x0) {
    operator_delete__(DAT_0096c774);
  }
  _DAT_0096c770 = ((void *)(0x00919488u));
  DAT_0096c774 = (void *)0x0;
  return;
}


//==== 00008f14a0 008f14a0_FUN_008f14a0 ====
void FUN_008f14a0(void);

// decompiled by BatchDecomp @ 008f14a0 name=FUN_008f14a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f14a0(void)

{
  _DAT_0096c7c0 = ((void *)(0x009194a4u));
  if (DAT_0096c7c4 != (void *)0x0) {
    operator_delete__(DAT_0096c7c4);
  }
  _DAT_0096c7c0 = ((void *)(0x00919488u));
  DAT_0096c7c4 = (void *)0x0;
  return;
}


//==== 00008f14e0 008f14e0_FUN_008f14e0 ====
void FUN_008f14e0(void);

// decompiled by BatchDecomp @ 008f14e0 name=FUN_008f14e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f14e0(void)

{
  _DAT_0096c750 = ((void *)(0x009194a4u));
  if (DAT_0096c754 != (void *)0x0) {
    operator_delete__(DAT_0096c754);
  }
  _DAT_0096c750 = ((void *)(0x00919488u));
  DAT_0096c754 = (void *)0x0;
  return;
}


//==== 00008f1520 008f1520_FUN_008f1520 ====
void FUN_008f1520(void);

// decompiled by BatchDecomp @ 008f1520 name=FUN_008f1520 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1520(void)

{
  _DAT_0096c7b0 = ((void *)(0x009194a4u));
  if (DAT_0096c7b4 != (void *)0x0) {
    operator_delete__(DAT_0096c7b4);
  }
  _DAT_0096c7b0 = ((void *)(0x00919488u));
  DAT_0096c7b4 = (void *)0x0;
  return;
}


//==== 00008f1560 008f1560_FUN_008f1560 ====
void FUN_008f1560(void);

// decompiled by BatchDecomp @ 008f1560 name=FUN_008f1560 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1560(void)

{
  _DAT_0096c740 = ((void *)(0x009194a4u));
  if (DAT_0096c744 != (void *)0x0) {
    operator_delete__(DAT_0096c744);
  }
  _DAT_0096c740 = ((void *)(0x00919488u));
  DAT_0096c744 = (void *)0x0;
  return;
}


//==== 00008f15a0 008f15a0_FUN_008f15a0 ====
void FUN_008f15a0(void);

// decompiled by BatchDecomp @ 008f15a0 name=FUN_008f15a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f15a0(void)

{
  _DAT_0096c730 = ((void *)(0x009194a4u));
  if (DAT_0096c734 != (void *)0x0) {
    operator_delete__(DAT_0096c734);
  }
  _DAT_0096c730 = ((void *)(0x00919488u));
  DAT_0096c734 = (void *)0x0;
  return;
}


//==== 00008f15e0 008f15e0_FUN_008f15e0 ====
void FUN_008f15e0(void);

// decompiled by BatchDecomp @ 008f15e0 name=FUN_008f15e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f15e0(void)

{
  _DAT_0096c790 = ((void *)(0x009194a4u));
  if (DAT_0096c794 != (void *)0x0) {
    operator_delete__(DAT_0096c794);
  }
  _DAT_0096c790 = ((void *)(0x00919488u));
  DAT_0096c794 = (void *)0x0;
  return;
}


//==== 00008f1a80 008f1a80_FUN_008f1a80 ====
void FUN_008f1a80(void);

// decompiled by BatchDecomp @ 008f1a80 name=FUN_008f1a80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1a80(void)

{
  _DAT_0096ca18 = ((void *)(0x009194a4u));
  if (DAT_0096ca1c != (void *)0x0) {
    operator_delete__(DAT_0096ca1c);
  }
  _DAT_0096ca18 = ((void *)(0x00919488u));
  DAT_0096ca1c = (void *)0x0;
  return;
}


//==== 00008f1ac0 008f1ac0_FUN_008f1ac0 ====
void FUN_008f1ac0(void);

// decompiled by BatchDecomp @ 008f1ac0 name=FUN_008f1ac0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1ac0(void)

{
  _DAT_0096c9b8 = ((void *)(0x009194a4u));
  if (DAT_0096c9bc != (void *)0x0) {
    operator_delete__(DAT_0096c9bc);
  }
  _DAT_0096c9b8 = ((void *)(0x00919488u));
  DAT_0096c9bc = (void *)0x0;
  return;
}


//==== 00008f1b00 008f1b00_FUN_008f1b00 ====
void FUN_008f1b00(void);

// decompiled by BatchDecomp @ 008f1b00 name=FUN_008f1b00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1b00(void)

{
  _DAT_0096c9f8 = ((void *)(0x009194a4u));
  if (DAT_0096c9fc != (void *)0x0) {
    operator_delete__(DAT_0096c9fc);
  }
  _DAT_0096c9f8 = ((void *)(0x00919488u));
  DAT_0096c9fc = (void *)0x0;
  return;
}


//==== 00008f1b40 008f1b40_FUN_008f1b40 ====
void FUN_008f1b40(void);

// decompiled by BatchDecomp @ 008f1b40 name=FUN_008f1b40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1b40(void)

{
  _DAT_0096c9e8 = ((void *)(0x009194a4u));
  if (DAT_0096c9ec != (void *)0x0) {
    operator_delete__(DAT_0096c9ec);
  }
  _DAT_0096c9e8 = ((void *)(0x00919488u));
  DAT_0096c9ec = (void *)0x0;
  return;
}


//==== 00008f1b80 008f1b80_FUN_008f1b80 ====
void FUN_008f1b80(void);

// decompiled by BatchDecomp @ 008f1b80 name=FUN_008f1b80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1b80(void)

{
  _DAT_0096ca38 = ((void *)(0x009194a4u));
  if (DAT_0096ca3c != (void *)0x0) {
    operator_delete__(DAT_0096ca3c);
  }
  _DAT_0096ca38 = ((void *)(0x00919488u));
  DAT_0096ca3c = (void *)0x0;
  return;
}


//==== 00008f1bc0 008f1bc0_FUN_008f1bc0 ====
void FUN_008f1bc0(void);

// decompiled by BatchDecomp @ 008f1bc0 name=FUN_008f1bc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1bc0(void)

{
  _DAT_0096c9a8 = ((void *)(0x009194a4u));
  if (DAT_0096c9ac != (void *)0x0) {
    operator_delete__(DAT_0096c9ac);
  }
  _DAT_0096c9a8 = ((void *)(0x00919488u));
  DAT_0096c9ac = (void *)0x0;
  return;
}


//==== 00008f1c00 008f1c00_FUN_008f1c00 ====
void FUN_008f1c00(void);

// decompiled by BatchDecomp @ 008f1c00 name=FUN_008f1c00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1c00(void)

{
  _DAT_0096ca28 = ((void *)(0x009194a4u));
  if (DAT_0096ca2c != (void *)0x0) {
    operator_delete__(DAT_0096ca2c);
  }
  _DAT_0096ca28 = ((void *)(0x00919488u));
  DAT_0096ca2c = (void *)0x0;
  return;
}


//==== 00008f1c40 008f1c40_FUN_008f1c40 ====
void FUN_008f1c40(void);

// decompiled by BatchDecomp @ 008f1c40 name=FUN_008f1c40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1c40(void)

{
  _DAT_0096c9d8 = ((void *)(0x009194a4u));
  if (DAT_0096c9dc != (void *)0x0) {
    operator_delete__(DAT_0096c9dc);
  }
  _DAT_0096c9d8 = ((void *)(0x00919488u));
  DAT_0096c9dc = (void *)0x0;
  return;
}


//==== 00008f1c80 008f1c80_FUN_008f1c80 ====
void FUN_008f1c80(void);

// decompiled by BatchDecomp @ 008f1c80 name=FUN_008f1c80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1c80(void)

{
  _DAT_0096c9c8 = ((void *)(0x009194a4u));
  if (DAT_0096c9cc != (void *)0x0) {
    operator_delete__(DAT_0096c9cc);
  }
  _DAT_0096c9c8 = ((void *)(0x00919488u));
  DAT_0096c9cc = (void *)0x0;
  return;
}


//==== 00008f1cc0 008f1cc0_FUN_008f1cc0 ====
void FUN_008f1cc0(void);

// decompiled by BatchDecomp @ 008f1cc0 name=FUN_008f1cc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f1cc0(void)

{
  _DAT_0096ca08 = ((void *)(0x009194a4u));
  if (DAT_0096ca0c != (void *)0x0) {
    operator_delete__(DAT_0096ca0c);
  }
  _DAT_0096ca08 = ((void *)(0x00919488u));
  DAT_0096ca0c = (void *)0x0;
  return;
}


//==== 00008f2020 008f2020_FUN_008f2020 ====
void FUN_008f2020(void);

// decompiled by BatchDecomp @ 008f2020 name=FUN_008f2020 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2020(void)

{
  _DAT_0096d2c8 = ((void *)(0x009194a4u));
  if (DAT_0096d2cc != (void *)0x0) {
    operator_delete__(DAT_0096d2cc);
  }
  _DAT_0096d2c8 = ((void *)(0x00919488u));
  DAT_0096d2cc = (void *)0x0;
  return;
}


//==== 00008f2060 008f2060_FUN_008f2060 ====
void FUN_008f2060(void);

// decompiled by BatchDecomp @ 008f2060 name=FUN_008f2060 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2060(void)

{
  _DAT_0096d288 = ((void *)(0x009194a4u));
  if (DAT_0096d28c != (void *)0x0) {
    operator_delete__(DAT_0096d28c);
  }
  _DAT_0096d288 = ((void *)(0x00919488u));
  DAT_0096d28c = (void *)0x0;
  return;
}


//==== 00008f20a0 008f20a0_FUN_008f20a0 ====
void FUN_008f20a0(void);

// decompiled by BatchDecomp @ 008f20a0 name=FUN_008f20a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f20a0(void)

{
  _DAT_0096d2a8 = ((void *)(0x009194a4u));
  if (DAT_0096d2ac != (void *)0x0) {
    operator_delete__(DAT_0096d2ac);
  }
  _DAT_0096d2a8 = ((void *)(0x00919488u));
  DAT_0096d2ac = (void *)0x0;
  return;
}


//==== 00008f20e0 008f20e0_FUN_008f20e0 ====
void FUN_008f20e0(void);

// decompiled by BatchDecomp @ 008f20e0 name=FUN_008f20e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f20e0(void)

{
  _DAT_0096d298 = ((void *)(0x009194a4u));
  if (DAT_0096d29c != (void *)0x0) {
    operator_delete__(DAT_0096d29c);
  }
  _DAT_0096d298 = ((void *)(0x00919488u));
  DAT_0096d29c = (void *)0x0;
  return;
}


//==== 00008f2120 008f2120_FUN_008f2120 ====
void FUN_008f2120(void);

// decompiled by BatchDecomp @ 008f2120 name=FUN_008f2120 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2120(void)

{
  _DAT_0096d2e8 = ((void *)(0x009194a4u));
  if (DAT_0096d2ec != (void *)0x0) {
    operator_delete__(DAT_0096d2ec);
  }
  _DAT_0096d2e8 = ((void *)(0x00919488u));
  DAT_0096d2ec = (void *)0x0;
  return;
}


//==== 00008f2160 008f2160_FUN_008f2160 ====
void FUN_008f2160(void);

// decompiled by BatchDecomp @ 008f2160 name=FUN_008f2160 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2160(void)

{
  _DAT_0096d278 = ((void *)(0x009194a4u));
  if (DAT_0096d27c != (void *)0x0) {
    operator_delete__(DAT_0096d27c);
  }
  _DAT_0096d278 = ((void *)(0x00919488u));
  DAT_0096d27c = (void *)0x0;
  return;
}


//==== 00008f21a0 008f21a0_FUN_008f21a0 ====
void FUN_008f21a0(void);

// decompiled by BatchDecomp @ 008f21a0 name=FUN_008f21a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f21a0(void)

{
  _DAT_0096d2d8 = ((void *)(0x009194a4u));
  if (DAT_0096d2dc != (void *)0x0) {
    operator_delete__(DAT_0096d2dc);
  }
  _DAT_0096d2d8 = ((void *)(0x00919488u));
  DAT_0096d2dc = (void *)0x0;
  return;
}


//==== 00008f21e0 008f21e0_FUN_008f21e0 ====
void FUN_008f21e0(void);

// decompiled by BatchDecomp @ 008f21e0 name=FUN_008f21e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f21e0(void)

{
  _DAT_0096d268 = ((void *)(0x009194a4u));
  if (DAT_0096d26c != (void *)0x0) {
    operator_delete__(DAT_0096d26c);
  }
  _DAT_0096d268 = ((void *)(0x00919488u));
  DAT_0096d26c = (void *)0x0;
  return;
}


//==== 00008f2220 008f2220_FUN_008f2220 ====
void FUN_008f2220(void);

// decompiled by BatchDecomp @ 008f2220 name=FUN_008f2220 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2220(void)

{
  _DAT_0096d258 = ((void *)(0x009194a4u));
  if (DAT_0096d25c != (void *)0x0) {
    operator_delete__(DAT_0096d25c);
  }
  _DAT_0096d258 = ((void *)(0x00919488u));
  DAT_0096d25c = (void *)0x0;
  return;
}


//==== 00008f2260 008f2260_FUN_008f2260 ====
void FUN_008f2260(void);

// decompiled by BatchDecomp @ 008f2260 name=FUN_008f2260 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2260(void)

{
  _DAT_0096d2b8 = ((void *)(0x009194a4u));
  if (DAT_0096d2bc != (void *)0x0) {
    operator_delete__(DAT_0096d2bc);
  }
  _DAT_0096d2b8 = ((void *)(0x00919488u));
  DAT_0096d2bc = (void *)0x0;
  return;
}


//==== 00008f25f0 008f25f0_FUN_008f25f0 ====
void FUN_008f25f0(void);

// decompiled by BatchDecomp @ 008f25f0 name=FUN_008f25f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f25f0(void)

{
  _DAT_0096dd90 = ((void *)(0x009194a4u));
  if (DAT_0096dd94 != (void *)0x0) {
    operator_delete__(DAT_0096dd94);
  }
  _DAT_0096dd90 = ((void *)(0x00919488u));
  DAT_0096dd94 = (void *)0x0;
  return;
}


//==== 00008f2630 008f2630_FUN_008f2630 ====
void FUN_008f2630(void);

// decompiled by BatchDecomp @ 008f2630 name=FUN_008f2630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2630(void)

{
  _DAT_0096dd30 = ((void *)(0x009194a4u));
  if (DAT_0096dd34 != (void *)0x0) {
    operator_delete__(DAT_0096dd34);
  }
  _DAT_0096dd30 = ((void *)(0x00919488u));
  DAT_0096dd34 = (void *)0x0;
  return;
}


//==== 00008f2670 008f2670_FUN_008f2670 ====
void FUN_008f2670(void);

// decompiled by BatchDecomp @ 008f2670 name=FUN_008f2670 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2670(void)

{
  _DAT_0096dd70 = ((void *)(0x009194a4u));
  if (DAT_0096dd74 != (void *)0x0) {
    operator_delete__(DAT_0096dd74);
  }
  _DAT_0096dd70 = ((void *)(0x00919488u));
  DAT_0096dd74 = (void *)0x0;
  return;
}


//==== 00008f26b0 008f26b0_FUN_008f26b0 ====
void FUN_008f26b0(void);

// decompiled by BatchDecomp @ 008f26b0 name=FUN_008f26b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f26b0(void)

{
  _DAT_0096dd60 = ((void *)(0x009194a4u));
  if (DAT_0096dd64 != (void *)0x0) {
    operator_delete__(DAT_0096dd64);
  }
  _DAT_0096dd60 = ((void *)(0x00919488u));
  DAT_0096dd64 = (void *)0x0;
  return;
}


//==== 00008f26f0 008f26f0_FUN_008f26f0 ====
void FUN_008f26f0(void);

// decompiled by BatchDecomp @ 008f26f0 name=FUN_008f26f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f26f0(void)

{
  _DAT_0096ddb0 = ((void *)(0x009194a4u));
  if (DAT_0096ddb4 != (void *)0x0) {
    operator_delete__(DAT_0096ddb4);
  }
  _DAT_0096ddb0 = ((void *)(0x00919488u));
  DAT_0096ddb4 = (void *)0x0;
  return;
}


//==== 00008f2730 008f2730_FUN_008f2730 ====
void FUN_008f2730(void);

// decompiled by BatchDecomp @ 008f2730 name=FUN_008f2730 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2730(void)

{
  _DAT_0096dd20 = ((void *)(0x009194a4u));
  if (DAT_0096dd24 != (void *)0x0) {
    operator_delete__(DAT_0096dd24);
  }
  _DAT_0096dd20 = ((void *)(0x00919488u));
  DAT_0096dd24 = (void *)0x0;
  return;
}


//==== 00008f2770 008f2770_FUN_008f2770 ====
void FUN_008f2770(void);

// decompiled by BatchDecomp @ 008f2770 name=FUN_008f2770 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2770(void)

{
  _DAT_0096dda0 = ((void *)(0x009194a4u));
  if (DAT_0096dda4 != (void *)0x0) {
    operator_delete__(DAT_0096dda4);
  }
  _DAT_0096dda0 = ((void *)(0x00919488u));
  DAT_0096dda4 = (void *)0x0;
  return;
}


//==== 00008f27b0 008f27b0_FUN_008f27b0 ====
void FUN_008f27b0(void);

// decompiled by BatchDecomp @ 008f27b0 name=FUN_008f27b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f27b0(void)

{
  _DAT_0096dd50 = ((void *)(0x009194a4u));
  if (DAT_0096dd54 != (void *)0x0) {
    operator_delete__(DAT_0096dd54);
  }
  _DAT_0096dd50 = ((void *)(0x00919488u));
  DAT_0096dd54 = (void *)0x0;
  return;
}


//==== 00008f27f0 008f27f0_FUN_008f27f0 ====
void FUN_008f27f0(void);

// decompiled by BatchDecomp @ 008f27f0 name=FUN_008f27f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f27f0(void)

{
  _DAT_0096dd40 = ((void *)(0x009194a4u));
  if (DAT_0096dd44 != (void *)0x0) {
    operator_delete__(DAT_0096dd44);
  }
  _DAT_0096dd40 = ((void *)(0x00919488u));
  DAT_0096dd44 = (void *)0x0;
  return;
}


//==== 00008f2830 008f2830_FUN_008f2830 ====
void FUN_008f2830(void);

// decompiled by BatchDecomp @ 008f2830 name=FUN_008f2830 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2830(void)

{
  _DAT_0096ddc0 = ((void *)(0x009194a4u));
  if (DAT_0096ddc4 != (void *)0x0) {
    operator_delete__(DAT_0096ddc4);
  }
  _DAT_0096ddc0 = ((void *)(0x00919488u));
  DAT_0096ddc4 = (void *)0x0;
  return;
}


//==== 00008f2870 008f2870_FUN_008f2870 ====
void FUN_008f2870(void);

// decompiled by BatchDecomp @ 008f2870 name=FUN_008f2870 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2870(void)

{
  _DAT_0096dd80 = ((void *)(0x009194a4u));
  if (DAT_0096dd84 != (void *)0x0) {
    operator_delete__(DAT_0096dd84);
  }
  _DAT_0096dd80 = ((void *)(0x00919488u));
  DAT_0096dd84 = (void *)0x0;
  return;
}


//==== 00008f2c10 008f2c10_FUN_008f2c10 ====
void FUN_008f2c10(void);

// decompiled by BatchDecomp @ 008f2c10 name=FUN_008f2c10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2c10(void)

{
  _DAT_0096e050 = ((void *)(0x009194a4u));
  if (DAT_0096e054 != (void *)0x0) {
    operator_delete__(DAT_0096e054);
  }
  _DAT_0096e050 = ((void *)(0x00919488u));
  DAT_0096e054 = (void *)0x0;
  return;
}


//==== 00008f2c50 008f2c50_FUN_008f2c50 ====
void FUN_008f2c50(void);

// decompiled by BatchDecomp @ 008f2c50 name=FUN_008f2c50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2c50(void)

{
  _DAT_0096dff0 = ((void *)(0x009194a4u));
  if (DAT_0096dff4 != (void *)0x0) {
    operator_delete__(DAT_0096dff4);
  }
  _DAT_0096dff0 = ((void *)(0x00919488u));
  DAT_0096dff4 = (void *)0x0;
  return;
}


//==== 00008f2c90 008f2c90_FUN_008f2c90 ====
void FUN_008f2c90(void);

// decompiled by BatchDecomp @ 008f2c90 name=FUN_008f2c90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2c90(void)

{
  _DAT_0096e030 = ((void *)(0x009194a4u));
  if (DAT_0096e034 != (void *)0x0) {
    operator_delete__(DAT_0096e034);
  }
  _DAT_0096e030 = ((void *)(0x00919488u));
  DAT_0096e034 = (void *)0x0;
  return;
}


//==== 00008f2cd0 008f2cd0_FUN_008f2cd0 ====
void FUN_008f2cd0(void);

// decompiled by BatchDecomp @ 008f2cd0 name=FUN_008f2cd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2cd0(void)

{
  _DAT_0096e020 = ((void *)(0x009194a4u));
  if (DAT_0096e024 != (void *)0x0) {
    operator_delete__(DAT_0096e024);
  }
  _DAT_0096e020 = ((void *)(0x00919488u));
  DAT_0096e024 = (void *)0x0;
  return;
}


//==== 00008f2d10 008f2d10_FUN_008f2d10 ====
void FUN_008f2d10(void);

// decompiled by BatchDecomp @ 008f2d10 name=FUN_008f2d10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2d10(void)

{
  _DAT_0096e070 = ((void *)(0x009194a4u));
  if (DAT_0096e074 != (void *)0x0) {
    operator_delete__(DAT_0096e074);
  }
  _DAT_0096e070 = ((void *)(0x00919488u));
  DAT_0096e074 = (void *)0x0;
  return;
}


//==== 00008f2d50 008f2d50_FUN_008f2d50 ====
void FUN_008f2d50(void);

// decompiled by BatchDecomp @ 008f2d50 name=FUN_008f2d50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2d50(void)

{
  _DAT_0096dfe0 = ((void *)(0x009194a4u));
  if (DAT_0096dfe4 != (void *)0x0) {
    operator_delete__(DAT_0096dfe4);
  }
  _DAT_0096dfe0 = ((void *)(0x00919488u));
  DAT_0096dfe4 = (void *)0x0;
  return;
}


//==== 00008f2d90 008f2d90_FUN_008f2d90 ====
void FUN_008f2d90(void);

// decompiled by BatchDecomp @ 008f2d90 name=FUN_008f2d90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2d90(void)

{
  _DAT_0096e060 = ((void *)(0x009194a4u));
  if (DAT_0096e064 != (void *)0x0) {
    operator_delete__(DAT_0096e064);
  }
  _DAT_0096e060 = ((void *)(0x00919488u));
  DAT_0096e064 = (void *)0x0;
  return;
}


//==== 00008f2dd0 008f2dd0_FUN_008f2dd0 ====
void FUN_008f2dd0(void);

// decompiled by BatchDecomp @ 008f2dd0 name=FUN_008f2dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2dd0(void)

{
  _DAT_0096e010 = ((void *)(0x009194a4u));
  if (DAT_0096e014 != (void *)0x0) {
    operator_delete__(DAT_0096e014);
  }
  _DAT_0096e010 = ((void *)(0x00919488u));
  DAT_0096e014 = (void *)0x0;
  return;
}


//==== 00008f2e10 008f2e10_FUN_008f2e10 ====
void FUN_008f2e10(void);

// decompiled by BatchDecomp @ 008f2e10 name=FUN_008f2e10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2e10(void)

{
  _DAT_0096e000 = ((void *)(0x009194a4u));
  if (DAT_0096e004 != (void *)0x0) {
    operator_delete__(DAT_0096e004);
  }
  _DAT_0096e000 = ((void *)(0x00919488u));
  DAT_0096e004 = (void *)0x0;
  return;
}


//==== 00008f2e50 008f2e50_FUN_008f2e50 ====
void FUN_008f2e50(void);

// decompiled by BatchDecomp @ 008f2e50 name=FUN_008f2e50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2e50(void)

{
  _DAT_0096e080 = ((void *)(0x009194a4u));
  if (DAT_0096e084 != (void *)0x0) {
    operator_delete__(DAT_0096e084);
  }
  _DAT_0096e080 = ((void *)(0x00919488u));
  DAT_0096e084 = (void *)0x0;
  return;
}


//==== 00008f2e90 008f2e90_FUN_008f2e90 ====
void FUN_008f2e90(void);

// decompiled by BatchDecomp @ 008f2e90 name=FUN_008f2e90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2e90(void)

{
  _DAT_0096e040 = ((void *)(0x009194a4u));
  if (DAT_0096e044 != (void *)0x0) {
    operator_delete__(DAT_0096e044);
  }
  _DAT_0096e040 = ((void *)(0x00919488u));
  DAT_0096e044 = (void *)0x0;
  return;
}


//==== 00008f32b0 008f32b0_FUN_008f32b0 ====
void FUN_008f32b0(void);

// decompiled by BatchDecomp @ 008f32b0 name=FUN_008f32b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f32b0(void)

{
  _DAT_0096e8bc = ((void *)(0x009194a4u));
  if (DAT_0096e8c0 != (void *)0x0) {
    operator_delete__(DAT_0096e8c0);
  }
  _DAT_0096e8bc = ((void *)(0x00919488u));
  DAT_0096e8c0 = (void *)0x0;
  return;
}


//==== 00008f32f0 008f32f0_FUN_008f32f0 ====
void FUN_008f32f0(void);

// decompiled by BatchDecomp @ 008f32f0 name=FUN_008f32f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f32f0(void)

{
  _DAT_0096e87c = ((void *)(0x009194a4u));
  if (DAT_0096e880 != (void *)0x0) {
    operator_delete__(DAT_0096e880);
  }
  _DAT_0096e87c = ((void *)(0x00919488u));
  DAT_0096e880 = (void *)0x0;
  return;
}


//==== 00008f3330 008f3330_FUN_008f3330 ====
void FUN_008f3330(void);

// decompiled by BatchDecomp @ 008f3330 name=FUN_008f3330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3330(void)

{
  _DAT_0096e89c = ((void *)(0x009194a4u));
  if (DAT_0096e8a0 != (void *)0x0) {
    operator_delete__(DAT_0096e8a0);
  }
  _DAT_0096e89c = ((void *)(0x00919488u));
  DAT_0096e8a0 = (void *)0x0;
  return;
}


//==== 00008f3370 008f3370_FUN_008f3370 ====
void FUN_008f3370(void);

// decompiled by BatchDecomp @ 008f3370 name=FUN_008f3370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3370(void)

{
  _DAT_0096e88c = ((void *)(0x009194a4u));
  if (DAT_0096e890 != (void *)0x0) {
    operator_delete__(DAT_0096e890);
  }
  _DAT_0096e88c = ((void *)(0x00919488u));
  DAT_0096e890 = (void *)0x0;
  return;
}


//==== 00008f33b0 008f33b0_FUN_008f33b0 ====
void FUN_008f33b0(void);

// decompiled by BatchDecomp @ 008f33b0 name=FUN_008f33b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f33b0(void)

{
  _DAT_0096e8dc = ((void *)(0x009194a4u));
  if (DAT_0096e8e0 != (void *)0x0) {
    operator_delete__(DAT_0096e8e0);
  }
  _DAT_0096e8dc = ((void *)(0x00919488u));
  DAT_0096e8e0 = (void *)0x0;
  return;
}


//==== 00008f33f0 008f33f0_FUN_008f33f0 ====
void FUN_008f33f0(void);

// decompiled by BatchDecomp @ 008f33f0 name=FUN_008f33f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f33f0(void)

{
  _DAT_0096e86c = ((void *)(0x009194a4u));
  if (DAT_0096e870 != (void *)0x0) {
    operator_delete__(DAT_0096e870);
  }
  _DAT_0096e86c = ((void *)(0x00919488u));
  DAT_0096e870 = (void *)0x0;
  return;
}


//==== 00008f3430 008f3430_FUN_008f3430 ====
void FUN_008f3430(void);

// decompiled by BatchDecomp @ 008f3430 name=FUN_008f3430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3430(void)

{
  _DAT_0096e8cc = ((void *)(0x009194a4u));
  if (DAT_0096e8d0 != (void *)0x0) {
    operator_delete__(DAT_0096e8d0);
  }
  _DAT_0096e8cc = ((void *)(0x00919488u));
  DAT_0096e8d0 = (void *)0x0;
  return;
}


//==== 00008f3470 008f3470_FUN_008f3470 ====
void FUN_008f3470(void);

// decompiled by BatchDecomp @ 008f3470 name=FUN_008f3470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3470(void)

{
  _DAT_0096e85c = ((void *)(0x009194a4u));
  if (DAT_0096e860 != (void *)0x0) {
    operator_delete__(DAT_0096e860);
  }
  _DAT_0096e85c = ((void *)(0x00919488u));
  DAT_0096e860 = (void *)0x0;
  return;
}


//==== 00008f34b0 008f34b0_FUN_008f34b0 ====
void FUN_008f34b0(void);

// decompiled by BatchDecomp @ 008f34b0 name=FUN_008f34b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f34b0(void)

{
  _DAT_0096e84c = ((void *)(0x009194a4u));
  if (DAT_0096e850 != (void *)0x0) {
    operator_delete__(DAT_0096e850);
  }
  _DAT_0096e84c = ((void *)(0x00919488u));
  DAT_0096e850 = (void *)0x0;
  return;
}


//==== 00008f34f0 008f34f0_FUN_008f34f0 ====
void FUN_008f34f0(void);

// decompiled by BatchDecomp @ 008f34f0 name=FUN_008f34f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f34f0(void)

{
  _DAT_0096e8ac = ((void *)(0x009194a4u));
  if (DAT_0096e8b0 != (void *)0x0) {
    operator_delete__(DAT_0096e8b0);
  }
  _DAT_0096e8ac = ((void *)(0x00919488u));
  DAT_0096e8b0 = (void *)0x0;
  return;
}


//==== 00008f38f0 008f38f0_FUN_008f38f0 ====
void FUN_008f38f0(void);

// decompiled by BatchDecomp @ 008f38f0 name=FUN_008f38f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f38f0(void)

{
  _DAT_0096f040 = ((void *)(0x009194a4u));
  if (DAT_0096f044 != (void *)0x0) {
    operator_delete__(DAT_0096f044);
  }
  _DAT_0096f040 = ((void *)(0x00919488u));
  DAT_0096f044 = (void *)0x0;
  return;
}


//==== 00008f3930 008f3930_FUN_008f3930 ====
void FUN_008f3930(void);

// decompiled by BatchDecomp @ 008f3930 name=FUN_008f3930 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3930(void)

{
  _DAT_0096f000 = ((void *)(0x009194a4u));
  if (DAT_0096f004 != (void *)0x0) {
    operator_delete__(DAT_0096f004);
  }
  _DAT_0096f000 = ((void *)(0x00919488u));
  DAT_0096f004 = (void *)0x0;
  return;
}


//==== 00008f3970 008f3970_FUN_008f3970 ====
void FUN_008f3970(void);

// decompiled by BatchDecomp @ 008f3970 name=FUN_008f3970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3970(void)

{
  _DAT_0096f020 = ((void *)(0x009194a4u));
  if (DAT_0096f024 != (void *)0x0) {
    operator_delete__(DAT_0096f024);
  }
  _DAT_0096f020 = ((void *)(0x00919488u));
  DAT_0096f024 = (void *)0x0;
  return;
}


//==== 00008f39b0 008f39b0_FUN_008f39b0 ====
void FUN_008f39b0(void);

// decompiled by BatchDecomp @ 008f39b0 name=FUN_008f39b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f39b0(void)

{
  _DAT_0096f010 = ((void *)(0x009194a4u));
  if (DAT_0096f014 != (void *)0x0) {
    operator_delete__(DAT_0096f014);
  }
  _DAT_0096f010 = ((void *)(0x00919488u));
  DAT_0096f014 = (void *)0x0;
  return;
}


//==== 00008f39f0 008f39f0_FUN_008f39f0 ====
void FUN_008f39f0(void);

// decompiled by BatchDecomp @ 008f39f0 name=FUN_008f39f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f39f0(void)

{
  _DAT_0096f060 = ((void *)(0x009194a4u));
  if (DAT_0096f064 != (void *)0x0) {
    operator_delete__(DAT_0096f064);
  }
  _DAT_0096f060 = ((void *)(0x00919488u));
  DAT_0096f064 = (void *)0x0;
  return;
}


//==== 00008f3a30 008f3a30_FUN_008f3a30 ====
void FUN_008f3a30(void);

// decompiled by BatchDecomp @ 008f3a30 name=FUN_008f3a30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3a30(void)

{
  _DAT_0096eff0 = ((void *)(0x009194a4u));
  if (DAT_0096eff4 != (void *)0x0) {
    operator_delete__(DAT_0096eff4);
  }
  _DAT_0096eff0 = ((void *)(0x00919488u));
  DAT_0096eff4 = (void *)0x0;
  return;
}


//==== 00008f3a70 008f3a70_FUN_008f3a70 ====
void FUN_008f3a70(void);

// decompiled by BatchDecomp @ 008f3a70 name=FUN_008f3a70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3a70(void)

{
  _DAT_0096f050 = ((void *)(0x009194a4u));
  if (DAT_0096f054 != (void *)0x0) {
    operator_delete__(DAT_0096f054);
  }
  _DAT_0096f050 = ((void *)(0x00919488u));
  DAT_0096f054 = (void *)0x0;
  return;
}


//==== 00008f3ab0 008f3ab0_FUN_008f3ab0 ====
void FUN_008f3ab0(void);

// decompiled by BatchDecomp @ 008f3ab0 name=FUN_008f3ab0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3ab0(void)

{
  _DAT_0096efe0 = ((void *)(0x009194a4u));
  if (DAT_0096efe4 != (void *)0x0) {
    operator_delete__(DAT_0096efe4);
  }
  _DAT_0096efe0 = ((void *)(0x00919488u));
  DAT_0096efe4 = (void *)0x0;
  return;
}


//==== 00008f3af0 008f3af0_FUN_008f3af0 ====
void FUN_008f3af0(void);

// decompiled by BatchDecomp @ 008f3af0 name=FUN_008f3af0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3af0(void)

{
  _DAT_0096efd0 = ((void *)(0x009194a4u));
  if (DAT_0096efd4 != (void *)0x0) {
    operator_delete__(DAT_0096efd4);
  }
  _DAT_0096efd0 = ((void *)(0x00919488u));
  DAT_0096efd4 = (void *)0x0;
  return;
}


//==== 00008f3b30 008f3b30_FUN_008f3b30 ====
void FUN_008f3b30(void);

// decompiled by BatchDecomp @ 008f3b30 name=FUN_008f3b30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3b30(void)

{
  _DAT_0096f030 = ((void *)(0x009194a4u));
  if (DAT_0096f034 != (void *)0x0) {
    operator_delete__(DAT_0096f034);
  }
  _DAT_0096f030 = ((void *)(0x00919488u));
  DAT_0096f034 = (void *)0x0;
  return;
}


//==== 00008f3f30 008f3f30_FUN_008f3f30 ====
void FUN_008f3f30(void);

// decompiled by BatchDecomp @ 008f3f30 name=FUN_008f3f30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3f30(void)

{
  _DAT_0096f868 = ((void *)(0x009194a4u));
  if (DAT_0096f86c != (void *)0x0) {
    operator_delete__(DAT_0096f86c);
  }
  _DAT_0096f868 = ((void *)(0x00919488u));
  DAT_0096f86c = (void *)0x0;
  return;
}


//==== 00008f3f70 008f3f70_FUN_008f3f70 ====
void FUN_008f3f70(void);

// decompiled by BatchDecomp @ 008f3f70 name=FUN_008f3f70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3f70(void)

{
  _DAT_0096f808 = ((void *)(0x009194a4u));
  if (DAT_0096f80c != (void *)0x0) {
    operator_delete__(DAT_0096f80c);
  }
  _DAT_0096f808 = ((void *)(0x00919488u));
  DAT_0096f80c = (void *)0x0;
  return;
}


//==== 00008f3fb0 008f3fb0_FUN_008f3fb0 ====
void FUN_008f3fb0(void);

// decompiled by BatchDecomp @ 008f3fb0 name=FUN_008f3fb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3fb0(void)

{
  _DAT_0096f848 = ((void *)(0x009194a4u));
  if (DAT_0096f84c != (void *)0x0) {
    operator_delete__(DAT_0096f84c);
  }
  _DAT_0096f848 = ((void *)(0x00919488u));
  DAT_0096f84c = (void *)0x0;
  return;
}


//==== 00008f3ff0 008f3ff0_FUN_008f3ff0 ====
void FUN_008f3ff0(void);

// decompiled by BatchDecomp @ 008f3ff0 name=FUN_008f3ff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f3ff0(void)

{
  _DAT_0096f838 = ((void *)(0x009194a4u));
  if (DAT_0096f83c != (void *)0x0) {
    operator_delete__(DAT_0096f83c);
  }
  _DAT_0096f838 = ((void *)(0x00919488u));
  DAT_0096f83c = (void *)0x0;
  return;
}


//==== 00008f4030 008f4030_FUN_008f4030 ====
void FUN_008f4030(void);

// decompiled by BatchDecomp @ 008f4030 name=FUN_008f4030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4030(void)

{
  _DAT_0096f888 = ((void *)(0x009194a4u));
  if (DAT_0096f88c != (void *)0x0) {
    operator_delete__(DAT_0096f88c);
  }
  _DAT_0096f888 = ((void *)(0x00919488u));
  DAT_0096f88c = (void *)0x0;
  return;
}


//==== 00008f4070 008f4070_FUN_008f4070 ====
void FUN_008f4070(void);

// decompiled by BatchDecomp @ 008f4070 name=FUN_008f4070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4070(void)

{
  _DAT_0096f7f8 = ((void *)(0x009194a4u));
  if (DAT_0096f7fc != (void *)0x0) {
    operator_delete__(DAT_0096f7fc);
  }
  _DAT_0096f7f8 = ((void *)(0x00919488u));
  DAT_0096f7fc = (void *)0x0;
  return;
}


//==== 00008f40b0 008f40b0_FUN_008f40b0 ====
void FUN_008f40b0(void);

// decompiled by BatchDecomp @ 008f40b0 name=FUN_008f40b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f40b0(void)

{
  _DAT_0096f878 = ((void *)(0x009194a4u));
  if (DAT_0096f87c != (void *)0x0) {
    operator_delete__(DAT_0096f87c);
  }
  _DAT_0096f878 = ((void *)(0x00919488u));
  DAT_0096f87c = (void *)0x0;
  return;
}


//==== 00008f40f0 008f40f0_FUN_008f40f0 ====
void FUN_008f40f0(void);

// decompiled by BatchDecomp @ 008f40f0 name=FUN_008f40f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f40f0(void)

{
  _DAT_0096f828 = ((void *)(0x009194a4u));
  if (DAT_0096f82c != (void *)0x0) {
    operator_delete__(DAT_0096f82c);
  }
  _DAT_0096f828 = ((void *)(0x00919488u));
  DAT_0096f82c = (void *)0x0;
  return;
}


//==== 00008f4130 008f4130_FUN_008f4130 ====
void FUN_008f4130(void);

// decompiled by BatchDecomp @ 008f4130 name=FUN_008f4130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4130(void)

{
  _DAT_0096f818 = ((void *)(0x009194a4u));
  if (DAT_0096f81c != (void *)0x0) {
    operator_delete__(DAT_0096f81c);
  }
  _DAT_0096f818 = ((void *)(0x00919488u));
  DAT_0096f81c = (void *)0x0;
  return;
}


//==== 00008f4170 008f4170_FUN_008f4170 ====
void FUN_008f4170(void);

// decompiled by BatchDecomp @ 008f4170 name=FUN_008f4170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4170(void)

{
  _DAT_0096f858 = ((void *)(0x009194a4u));
  if (DAT_0096f85c != (void *)0x0) {
    operator_delete__(DAT_0096f85c);
  }
  _DAT_0096f858 = ((void *)(0x00919488u));
  DAT_0096f85c = (void *)0x0;
  return;
}


//==== 00008f4590 008f4590_FUN_008f4590 ====
void FUN_008f4590(void);

// decompiled by BatchDecomp @ 008f4590 name=FUN_008f4590 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4590(void)

{
  _DAT_0096ff1c = ((void *)(0x009194a4u));
  if (DAT_0096ff20 != (void *)0x0) {
    operator_delete__(DAT_0096ff20);
  }
  _DAT_0096ff1c = ((void *)(0x00919488u));
  DAT_0096ff20 = (void *)0x0;
  return;
}


//==== 00008f45d0 008f45d0_FUN_008f45d0 ====
void FUN_008f45d0(void);

// decompiled by BatchDecomp @ 008f45d0 name=FUN_008f45d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f45d0(void)

{
  _DAT_0096fedc = ((void *)(0x009194a4u));
  if (DAT_0096fee0 != (void *)0x0) {
    operator_delete__(DAT_0096fee0);
  }
  _DAT_0096fedc = ((void *)(0x00919488u));
  DAT_0096fee0 = (void *)0x0;
  return;
}


//==== 00008f4610 008f4610_FUN_008f4610 ====
void FUN_008f4610(void);

// decompiled by BatchDecomp @ 008f4610 name=FUN_008f4610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4610(void)

{
  _DAT_0096fefc = ((void *)(0x009194a4u));
  if (DAT_0096ff00 != (void *)0x0) {
    operator_delete__(DAT_0096ff00);
  }
  _DAT_0096fefc = ((void *)(0x00919488u));
  DAT_0096ff00 = (void *)0x0;
  return;
}


//==== 00008f4650 008f4650_FUN_008f4650 ====
void FUN_008f4650(void);

// decompiled by BatchDecomp @ 008f4650 name=FUN_008f4650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4650(void)

{
  _DAT_0096feec = ((void *)(0x009194a4u));
  if (DAT_0096fef0 != (void *)0x0) {
    operator_delete__(DAT_0096fef0);
  }
  _DAT_0096feec = ((void *)(0x00919488u));
  DAT_0096fef0 = (void *)0x0;
  return;
}


//==== 00008f4690 008f4690_FUN_008f4690 ====
void FUN_008f4690(void);

// decompiled by BatchDecomp @ 008f4690 name=FUN_008f4690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4690(void)

{
  _DAT_0096ff3c = ((void *)(0x009194a4u));
  if (DAT_0096ff40 != (void *)0x0) {
    operator_delete__(DAT_0096ff40);
  }
  _DAT_0096ff3c = ((void *)(0x00919488u));
  DAT_0096ff40 = (void *)0x0;
  return;
}


//==== 00008f46d0 008f46d0_FUN_008f46d0 ====
void FUN_008f46d0(void);

// decompiled by BatchDecomp @ 008f46d0 name=FUN_008f46d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f46d0(void)

{
  _DAT_0096fecc = ((void *)(0x009194a4u));
  if (DAT_0096fed0 != (void *)0x0) {
    operator_delete__(DAT_0096fed0);
  }
  _DAT_0096fecc = ((void *)(0x00919488u));
  DAT_0096fed0 = (void *)0x0;
  return;
}


//==== 00008f4710 008f4710_FUN_008f4710 ====
void FUN_008f4710(void);

// decompiled by BatchDecomp @ 008f4710 name=FUN_008f4710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4710(void)

{
  _DAT_0096ff2c = ((void *)(0x009194a4u));
  if (DAT_0096ff30 != (void *)0x0) {
    operator_delete__(DAT_0096ff30);
  }
  _DAT_0096ff2c = ((void *)(0x00919488u));
  DAT_0096ff30 = (void *)0x0;
  return;
}


//==== 00008f4750 008f4750_FUN_008f4750 ====
void FUN_008f4750(void);

// decompiled by BatchDecomp @ 008f4750 name=FUN_008f4750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4750(void)

{
  _DAT_0096febc = ((void *)(0x009194a4u));
  if (DAT_0096fec0 != (void *)0x0) {
    operator_delete__(DAT_0096fec0);
  }
  _DAT_0096febc = ((void *)(0x00919488u));
  DAT_0096fec0 = (void *)0x0;
  return;
}


//==== 00008f4790 008f4790_FUN_008f4790 ====
void FUN_008f4790(void);

// decompiled by BatchDecomp @ 008f4790 name=FUN_008f4790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4790(void)

{
  _DAT_0096feac = ((void *)(0x009194a4u));
  if (DAT_0096feb0 != (void *)0x0) {
    operator_delete__(DAT_0096feb0);
  }
  _DAT_0096feac = ((void *)(0x00919488u));
  DAT_0096feb0 = (void *)0x0;
  return;
}


//==== 00008f47d0 008f47d0_FUN_008f47d0 ====
void FUN_008f47d0(void);

// decompiled by BatchDecomp @ 008f47d0 name=FUN_008f47d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f47d0(void)

{
  _DAT_0096ff4c = ((void *)(0x009194a4u));
  if (DAT_0096ff50 != (void *)0x0) {
    operator_delete__(DAT_0096ff50);
  }
  _DAT_0096ff4c = ((void *)(0x00919488u));
  DAT_0096ff50 = (void *)0x0;
  return;
}


//==== 00008f4810 008f4810_FUN_008f4810 ====
void FUN_008f4810(void);

// decompiled by BatchDecomp @ 008f4810 name=FUN_008f4810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4810(void)

{
  _DAT_0096ff0c = ((void *)(0x009194a4u));
  if (DAT_0096ff10 != (void *)0x0) {
    operator_delete__(DAT_0096ff10);
  }
  _DAT_0096ff0c = ((void *)(0x00919488u));
  DAT_0096ff10 = (void *)0x0;
  return;
}


//==== 00008f4bb0 008f4bb0_FUN_008f4bb0 ====
void FUN_008f4bb0(void);

// decompiled by BatchDecomp @ 008f4bb0 name=FUN_008f4bb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4bb0(void)

{
  _DAT_009707a0 = ((void *)(0x009194a4u));
  if (DAT_009707a4 != (void *)0x0) {
    operator_delete__(DAT_009707a4);
  }
  _DAT_009707a0 = ((void *)(0x00919488u));
  DAT_009707a4 = (void *)0x0;
  return;
}


//==== 00008f4bf0 008f4bf0_FUN_008f4bf0 ====
void FUN_008f4bf0(void);

// decompiled by BatchDecomp @ 008f4bf0 name=FUN_008f4bf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4bf0(void)

{
  _DAT_00970760 = ((void *)(0x009194a4u));
  if (DAT_00970764 != (void *)0x0) {
    operator_delete__(DAT_00970764);
  }
  _DAT_00970760 = ((void *)(0x00919488u));
  DAT_00970764 = (void *)0x0;
  return;
}


//==== 00008f4c30 008f4c30_FUN_008f4c30 ====
void FUN_008f4c30(void);

// decompiled by BatchDecomp @ 008f4c30 name=FUN_008f4c30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4c30(void)

{
  _DAT_00970780 = ((void *)(0x009194a4u));
  if (DAT_00970784 != (void *)0x0) {
    operator_delete__(DAT_00970784);
  }
  _DAT_00970780 = ((void *)(0x00919488u));
  DAT_00970784 = (void *)0x0;
  return;
}


//==== 00008f4c70 008f4c70_FUN_008f4c70 ====
void FUN_008f4c70(void);

// decompiled by BatchDecomp @ 008f4c70 name=FUN_008f4c70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4c70(void)

{
  _DAT_00970770 = ((void *)(0x009194a4u));
  if (DAT_00970774 != (void *)0x0) {
    operator_delete__(DAT_00970774);
  }
  _DAT_00970770 = ((void *)(0x00919488u));
  DAT_00970774 = (void *)0x0;
  return;
}


//==== 00008f4cb0 008f4cb0_FUN_008f4cb0 ====
void FUN_008f4cb0(void);

// decompiled by BatchDecomp @ 008f4cb0 name=FUN_008f4cb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4cb0(void)

{
  _DAT_009707c0 = ((void *)(0x009194a4u));
  if (DAT_009707c4 != (void *)0x0) {
    operator_delete__(DAT_009707c4);
  }
  _DAT_009707c0 = ((void *)(0x00919488u));
  DAT_009707c4 = (void *)0x0;
  return;
}


//==== 00008f4cf0 008f4cf0_FUN_008f4cf0 ====
void FUN_008f4cf0(void);

// decompiled by BatchDecomp @ 008f4cf0 name=FUN_008f4cf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4cf0(void)

{
  _DAT_00970750 = ((void *)(0x009194a4u));
  if (DAT_00970754 != (void *)0x0) {
    operator_delete__(DAT_00970754);
  }
  _DAT_00970750 = ((void *)(0x00919488u));
  DAT_00970754 = (void *)0x0;
  return;
}


//==== 00008f4d30 008f4d30_FUN_008f4d30 ====
void FUN_008f4d30(void);

// decompiled by BatchDecomp @ 008f4d30 name=FUN_008f4d30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4d30(void)

{
  _DAT_009707b0 = ((void *)(0x009194a4u));
  if (DAT_009707b4 != (void *)0x0) {
    operator_delete__(DAT_009707b4);
  }
  _DAT_009707b0 = ((void *)(0x00919488u));
  DAT_009707b4 = (void *)0x0;
  return;
}


//==== 00008f4d70 008f4d70_FUN_008f4d70 ====
void FUN_008f4d70(void);

// decompiled by BatchDecomp @ 008f4d70 name=FUN_008f4d70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4d70(void)

{
  _DAT_00970740 = ((void *)(0x009194a4u));
  if (DAT_00970744 != (void *)0x0) {
    operator_delete__(DAT_00970744);
  }
  _DAT_00970740 = ((void *)(0x00919488u));
  DAT_00970744 = (void *)0x0;
  return;
}


//==== 00008f4db0 008f4db0_FUN_008f4db0 ====
void FUN_008f4db0(void);

// decompiled by BatchDecomp @ 008f4db0 name=FUN_008f4db0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4db0(void)

{
  _DAT_00970730 = ((void *)(0x009194a4u));
  if (DAT_00970734 != (void *)0x0) {
    operator_delete__(DAT_00970734);
  }
  _DAT_00970730 = ((void *)(0x00919488u));
  DAT_00970734 = (void *)0x0;
  return;
}


//==== 00008f4df0 008f4df0_FUN_008f4df0 ====
void FUN_008f4df0(void);

// decompiled by BatchDecomp @ 008f4df0 name=FUN_008f4df0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4df0(void)

{
  _DAT_009707d0 = ((void *)(0x009194a4u));
  if (DAT_009707d4 != (void *)0x0) {
    operator_delete__(DAT_009707d4);
  }
  _DAT_009707d0 = ((void *)(0x00919488u));
  DAT_009707d4 = (void *)0x0;
  return;
}


//==== 00008f4e30 008f4e30_FUN_008f4e30 ====
void FUN_008f4e30(void);

// decompiled by BatchDecomp @ 008f4e30 name=FUN_008f4e30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f4e30(void)

{
  _DAT_00970790 = ((void *)(0x009194a4u));
  if (DAT_00970794 != (void *)0x0) {
    operator_delete__(DAT_00970794);
  }
  _DAT_00970790 = ((void *)(0x00919488u));
  DAT_00970794 = (void *)0x0;
  return;
}


//==== 00008f5130 008f5130_FUN_008f5130 ====
void FUN_008f5130(void);

// decompiled by BatchDecomp @ 008f5130 name=FUN_008f5130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5130(void)

{
  _DAT_00970a60 = ((void *)(0x009194a4u));
  if (DAT_00970a64 != (void *)0x0) {
    operator_delete__(DAT_00970a64);
  }
  _DAT_00970a60 = ((void *)(0x00919488u));
  DAT_00970a64 = (void *)0x0;
  return;
}


//==== 00008f5170 008f5170_FUN_008f5170 ====
void FUN_008f5170(void);

// decompiled by BatchDecomp @ 008f5170 name=FUN_008f5170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5170(void)

{
  _DAT_00970a00 = ((void *)(0x009194a4u));
  if (DAT_00970a04 != (void *)0x0) {
    operator_delete__(DAT_00970a04);
  }
  _DAT_00970a00 = ((void *)(0x00919488u));
  DAT_00970a04 = (void *)0x0;
  return;
}


//==== 00008f51b0 008f51b0_FUN_008f51b0 ====
void FUN_008f51b0(void);

// decompiled by BatchDecomp @ 008f51b0 name=FUN_008f51b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f51b0(void)

{
  _DAT_00970a40 = ((void *)(0x009194a4u));
  if (DAT_00970a44 != (void *)0x0) {
    operator_delete__(DAT_00970a44);
  }
  _DAT_00970a40 = ((void *)(0x00919488u));
  DAT_00970a44 = (void *)0x0;
  return;
}


//==== 00008f51f0 008f51f0_FUN_008f51f0 ====
void FUN_008f51f0(void);

// decompiled by BatchDecomp @ 008f51f0 name=FUN_008f51f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f51f0(void)

{
  _DAT_00970a30 = ((void *)(0x009194a4u));
  if (DAT_00970a34 != (void *)0x0) {
    operator_delete__(DAT_00970a34);
  }
  _DAT_00970a30 = ((void *)(0x00919488u));
  DAT_00970a34 = (void *)0x0;
  return;
}


//==== 00008f5230 008f5230_FUN_008f5230 ====
void FUN_008f5230(void);

// decompiled by BatchDecomp @ 008f5230 name=FUN_008f5230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5230(void)

{
  _DAT_00970a80 = ((void *)(0x009194a4u));
  if (DAT_00970a84 != (void *)0x0) {
    operator_delete__(DAT_00970a84);
  }
  _DAT_00970a80 = ((void *)(0x00919488u));
  DAT_00970a84 = (void *)0x0;
  return;
}


//==== 00008f5270 008f5270_FUN_008f5270 ====
void FUN_008f5270(void);

// decompiled by BatchDecomp @ 008f5270 name=FUN_008f5270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5270(void)

{
  _DAT_009709f0 = ((void *)(0x009194a4u));
  if (DAT_009709f4 != (void *)0x0) {
    operator_delete__(DAT_009709f4);
  }
  _DAT_009709f0 = ((void *)(0x00919488u));
  DAT_009709f4 = (void *)0x0;
  return;
}


//==== 00008f52b0 008f52b0_FUN_008f52b0 ====
void FUN_008f52b0(void);

// decompiled by BatchDecomp @ 008f52b0 name=FUN_008f52b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f52b0(void)

{
  _DAT_00970a70 = ((void *)(0x009194a4u));
  if (DAT_00970a74 != (void *)0x0) {
    operator_delete__(DAT_00970a74);
  }
  _DAT_00970a70 = ((void *)(0x00919488u));
  DAT_00970a74 = (void *)0x0;
  return;
}


//==== 00008f52f0 008f52f0_FUN_008f52f0 ====
void FUN_008f52f0(void);

// decompiled by BatchDecomp @ 008f52f0 name=FUN_008f52f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f52f0(void)

{
  _DAT_00970a20 = ((void *)(0x009194a4u));
  if (DAT_00970a24 != (void *)0x0) {
    operator_delete__(DAT_00970a24);
  }
  _DAT_00970a20 = ((void *)(0x00919488u));
  DAT_00970a24 = (void *)0x0;
  return;
}


//==== 00008f5330 008f5330_FUN_008f5330 ====
void FUN_008f5330(void);

// decompiled by BatchDecomp @ 008f5330 name=FUN_008f5330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5330(void)

{
  _DAT_00970a10 = ((void *)(0x009194a4u));
  if (DAT_00970a14 != (void *)0x0) {
    operator_delete__(DAT_00970a14);
  }
  _DAT_00970a10 = ((void *)(0x00919488u));
  DAT_00970a14 = (void *)0x0;
  return;
}


//==== 00008f5370 008f5370_FUN_008f5370 ====
void FUN_008f5370(void);

// decompiled by BatchDecomp @ 008f5370 name=FUN_008f5370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5370(void)

{
  _DAT_00970a90 = ((void *)(0x009194a4u));
  if (DAT_00970a94 != (void *)0x0) {
    operator_delete__(DAT_00970a94);
  }
  _DAT_00970a90 = ((void *)(0x00919488u));
  DAT_00970a94 = (void *)0x0;
  return;
}


//==== 00008f53b0 008f53b0_FUN_008f53b0 ====
void FUN_008f53b0(void);

// decompiled by BatchDecomp @ 008f53b0 name=FUN_008f53b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f53b0(void)

{
  _DAT_00970a50 = ((void *)(0x009194a4u));
  if (DAT_00970a54 != (void *)0x0) {
    operator_delete__(DAT_00970a54);
  }
  _DAT_00970a50 = ((void *)(0x00919488u));
  DAT_00970a54 = (void *)0x0;
  return;
}


//==== 00008f57d0 008f57d0_FUN_008f57d0 ====
void FUN_008f57d0(void);

// decompiled by BatchDecomp @ 008f57d0 name=FUN_008f57d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f57d0(void)

{
  _DAT_009712f8 = ((void *)(0x009194a4u));
  if (DAT_009712fc != (void *)0x0) {
    operator_delete__(DAT_009712fc);
  }
  _DAT_009712f8 = ((void *)(0x00919488u));
  DAT_009712fc = (void *)0x0;
  return;
}


//==== 00008f5810 008f5810_FUN_008f5810 ====
void FUN_008f5810(void);

// decompiled by BatchDecomp @ 008f5810 name=FUN_008f5810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5810(void)

{
  _DAT_00971298 = ((void *)(0x009194a4u));
  if (DAT_0097129c != (void *)0x0) {
    operator_delete__(DAT_0097129c);
  }
  _DAT_00971298 = ((void *)(0x00919488u));
  DAT_0097129c = (void *)0x0;
  return;
}


//==== 00008f5850 008f5850_FUN_008f5850 ====
void FUN_008f5850(void);

// decompiled by BatchDecomp @ 008f5850 name=FUN_008f5850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5850(void)

{
  _DAT_009712d8 = ((void *)(0x009194a4u));
  if (DAT_009712dc != (void *)0x0) {
    operator_delete__(DAT_009712dc);
  }
  _DAT_009712d8 = ((void *)(0x00919488u));
  DAT_009712dc = (void *)0x0;
  return;
}


//==== 00008f5890 008f5890_FUN_008f5890 ====
void FUN_008f5890(void);

// decompiled by BatchDecomp @ 008f5890 name=FUN_008f5890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5890(void)

{
  _DAT_009712c8 = ((void *)(0x009194a4u));
  if (DAT_009712cc != (void *)0x0) {
    operator_delete__(DAT_009712cc);
  }
  _DAT_009712c8 = ((void *)(0x00919488u));
  DAT_009712cc = (void *)0x0;
  return;
}


//==== 00008f58d0 008f58d0_FUN_008f58d0 ====
void FUN_008f58d0(void);

// decompiled by BatchDecomp @ 008f58d0 name=FUN_008f58d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f58d0(void)

{
  _DAT_00971318 = ((void *)(0x009194a4u));
  if (DAT_0097131c != (void *)0x0) {
    operator_delete__(DAT_0097131c);
  }
  _DAT_00971318 = ((void *)(0x00919488u));
  DAT_0097131c = (void *)0x0;
  return;
}


//==== 00008f5910 008f5910_FUN_008f5910 ====
void FUN_008f5910(void);

// decompiled by BatchDecomp @ 008f5910 name=FUN_008f5910 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5910(void)

{
  _DAT_00971288 = ((void *)(0x009194a4u));
  if (DAT_0097128c != (void *)0x0) {
    operator_delete__(DAT_0097128c);
  }
  _DAT_00971288 = ((void *)(0x00919488u));
  DAT_0097128c = (void *)0x0;
  return;
}


//==== 00008f5950 008f5950_FUN_008f5950 ====
void FUN_008f5950(void);

// decompiled by BatchDecomp @ 008f5950 name=FUN_008f5950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5950(void)

{
  _DAT_00971308 = ((void *)(0x009194a4u));
  if (DAT_0097130c != (void *)0x0) {
    operator_delete__(DAT_0097130c);
  }
  _DAT_00971308 = ((void *)(0x00919488u));
  DAT_0097130c = (void *)0x0;
  return;
}


//==== 00008f5990 008f5990_FUN_008f5990 ====
void FUN_008f5990(void);

// decompiled by BatchDecomp @ 008f5990 name=FUN_008f5990 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5990(void)

{
  _DAT_009712b8 = ((void *)(0x009194a4u));
  if (DAT_009712bc != (void *)0x0) {
    operator_delete__(DAT_009712bc);
  }
  _DAT_009712b8 = ((void *)(0x00919488u));
  DAT_009712bc = (void *)0x0;
  return;
}


//==== 00008f59d0 008f59d0_FUN_008f59d0 ====
void FUN_008f59d0(void);

// decompiled by BatchDecomp @ 008f59d0 name=FUN_008f59d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f59d0(void)

{
  _DAT_009712a8 = ((void *)(0x009194a4u));
  if (DAT_009712ac != (void *)0x0) {
    operator_delete__(DAT_009712ac);
  }
  _DAT_009712a8 = ((void *)(0x00919488u));
  DAT_009712ac = (void *)0x0;
  return;
}


//==== 00008f5a10 008f5a10_FUN_008f5a10 ====
void FUN_008f5a10(void);

// decompiled by BatchDecomp @ 008f5a10 name=FUN_008f5a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5a10(void)

{
  _DAT_009712e8 = ((void *)(0x009194a4u));
  if (DAT_009712ec != (void *)0x0) {
    operator_delete__(DAT_009712ec);
  }
  _DAT_009712e8 = ((void *)(0x00919488u));
  DAT_009712ec = (void *)0x0;
  return;
}


//==== 00008f5da0 008f5da0_FUN_008f5da0 ====
void FUN_008f5da0(void);

// decompiled by BatchDecomp @ 008f5da0 name=FUN_008f5da0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5da0(void)

{
  _DAT_009716f8 = ((void *)(0x009194a4u));
  if (DAT_009716fc != (void *)0x0) {
    operator_delete__(DAT_009716fc);
  }
  _DAT_009716f8 = ((void *)(0x00919488u));
  DAT_009716fc = (void *)0x0;
  return;
}


//==== 00008f5de0 008f5de0_FUN_008f5de0 ====
void FUN_008f5de0(void);

// decompiled by BatchDecomp @ 008f5de0 name=FUN_008f5de0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5de0(void)

{
  _DAT_00971698 = ((void *)(0x009194a4u));
  if (DAT_0097169c != (void *)0x0) {
    operator_delete__(DAT_0097169c);
  }
  _DAT_00971698 = ((void *)(0x00919488u));
  DAT_0097169c = (void *)0x0;
  return;
}


//==== 00008f5e20 008f5e20_FUN_008f5e20 ====
void FUN_008f5e20(void);

// decompiled by BatchDecomp @ 008f5e20 name=FUN_008f5e20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5e20(void)

{
  _DAT_009716d8 = ((void *)(0x009194a4u));
  if (DAT_009716dc != (void *)0x0) {
    operator_delete__(DAT_009716dc);
  }
  _DAT_009716d8 = ((void *)(0x00919488u));
  DAT_009716dc = (void *)0x0;
  return;
}


//==== 00008f5e60 008f5e60_FUN_008f5e60 ====
void FUN_008f5e60(void);

// decompiled by BatchDecomp @ 008f5e60 name=FUN_008f5e60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5e60(void)

{
  _DAT_009716c8 = ((void *)(0x009194a4u));
  if (DAT_009716cc != (void *)0x0) {
    operator_delete__(DAT_009716cc);
  }
  _DAT_009716c8 = ((void *)(0x00919488u));
  DAT_009716cc = (void *)0x0;
  return;
}


//==== 00008f5ea0 008f5ea0_FUN_008f5ea0 ====
void FUN_008f5ea0(void);

// decompiled by BatchDecomp @ 008f5ea0 name=FUN_008f5ea0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5ea0(void)

{
  _DAT_00971718 = ((void *)(0x009194a4u));
  if (DAT_0097171c != (void *)0x0) {
    operator_delete__(DAT_0097171c);
  }
  _DAT_00971718 = ((void *)(0x00919488u));
  DAT_0097171c = (void *)0x0;
  return;
}


//==== 00008f5ee0 008f5ee0_FUN_008f5ee0 ====
void FUN_008f5ee0(void);

// decompiled by BatchDecomp @ 008f5ee0 name=FUN_008f5ee0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5ee0(void)

{
  _DAT_00971688 = ((void *)(0x009194a4u));
  if (DAT_0097168c != (void *)0x0) {
    operator_delete__(DAT_0097168c);
  }
  _DAT_00971688 = ((void *)(0x00919488u));
  DAT_0097168c = (void *)0x0;
  return;
}


//==== 00008f5f20 008f5f20_FUN_008f5f20 ====
void FUN_008f5f20(void);

// decompiled by BatchDecomp @ 008f5f20 name=FUN_008f5f20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5f20(void)

{
  _DAT_00971708 = ((void *)(0x009194a4u));
  if (DAT_0097170c != (void *)0x0) {
    operator_delete__(DAT_0097170c);
  }
  _DAT_00971708 = ((void *)(0x00919488u));
  DAT_0097170c = (void *)0x0;
  return;
}


//==== 00008f5f60 008f5f60_FUN_008f5f60 ====
void FUN_008f5f60(void);

// decompiled by BatchDecomp @ 008f5f60 name=FUN_008f5f60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5f60(void)

{
  _DAT_009716b8 = ((void *)(0x009194a4u));
  if (DAT_009716bc != (void *)0x0) {
    operator_delete__(DAT_009716bc);
  }
  _DAT_009716b8 = ((void *)(0x00919488u));
  DAT_009716bc = (void *)0x0;
  return;
}


//==== 00008f5fa0 008f5fa0_FUN_008f5fa0 ====
void FUN_008f5fa0(void);

// decompiled by BatchDecomp @ 008f5fa0 name=FUN_008f5fa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5fa0(void)

{
  _DAT_009716a8 = ((void *)(0x009194a4u));
  if (DAT_009716ac != (void *)0x0) {
    operator_delete__(DAT_009716ac);
  }
  _DAT_009716a8 = ((void *)(0x00919488u));
  DAT_009716ac = (void *)0x0;
  return;
}


//==== 00008f5ff0 008f5ff0_FUN_008f5ff0 ====
void FUN_008f5ff0(void);

// decompiled by BatchDecomp @ 008f5ff0 name=FUN_008f5ff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5ff0(void)

{
  _DAT_00971728 = ((void *)(0x009194a4u));
  if (DAT_0097172c != (void *)0x0) {
    operator_delete__(DAT_0097172c);
  }
  _DAT_00971728 = ((void *)(0x00919488u));
  DAT_0097172c = (void *)0x0;
  return;
}


//==== 00008f6030 008f6030_FUN_008f6030 ====
void FUN_008f6030(void);

// decompiled by BatchDecomp @ 008f6030 name=FUN_008f6030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6030(void)

{
  _DAT_009716e8 = ((void *)(0x009194a4u));
  if (DAT_009716ec != (void *)0x0) {
    operator_delete__(DAT_009716ec);
  }
  _DAT_009716e8 = ((void *)(0x00919488u));
  DAT_009716ec = (void *)0x0;
  return;
}


//==== 00008f6450 008f6450_FUN_008f6450 ====
void FUN_008f6450(void);

// decompiled by BatchDecomp @ 008f6450 name=FUN_008f6450 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6450(void)

{
  _DAT_00971e58 = ((void *)(0x009194a4u));
  if (DAT_00971e5c != (void *)0x0) {
    operator_delete__(DAT_00971e5c);
  }
  _DAT_00971e58 = ((void *)(0x00919488u));
  DAT_00971e5c = (void *)0x0;
  return;
}


//==== 00008f6490 008f6490_FUN_008f6490 ====
void FUN_008f6490(void);

// decompiled by BatchDecomp @ 008f6490 name=FUN_008f6490 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6490(void)

{
  _DAT_00971df8 = ((void *)(0x009194a4u));
  if (DAT_00971dfc != (void *)0x0) {
    operator_delete__(DAT_00971dfc);
  }
  _DAT_00971df8 = ((void *)(0x00919488u));
  DAT_00971dfc = (void *)0x0;
  return;
}


//==== 00008f64d0 008f64d0_FUN_008f64d0 ====
void FUN_008f64d0(void);

// decompiled by BatchDecomp @ 008f64d0 name=FUN_008f64d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f64d0(void)

{
  _DAT_00971e38 = ((void *)(0x009194a4u));
  if (DAT_00971e3c != (void *)0x0) {
    operator_delete__(DAT_00971e3c);
  }
  _DAT_00971e38 = ((void *)(0x00919488u));
  DAT_00971e3c = (void *)0x0;
  return;
}


//==== 00008f6510 008f6510_FUN_008f6510 ====
void FUN_008f6510(void);

// decompiled by BatchDecomp @ 008f6510 name=FUN_008f6510 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6510(void)

{
  _DAT_00971e28 = ((void *)(0x009194a4u));
  if (DAT_00971e2c != (void *)0x0) {
    operator_delete__(DAT_00971e2c);
  }
  _DAT_00971e28 = ((void *)(0x00919488u));
  DAT_00971e2c = (void *)0x0;
  return;
}


//==== 00008f6550 008f6550_FUN_008f6550 ====
void FUN_008f6550(void);

// decompiled by BatchDecomp @ 008f6550 name=FUN_008f6550 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6550(void)

{
  _DAT_00971e78 = ((void *)(0x009194a4u));
  if (DAT_00971e7c != (void *)0x0) {
    operator_delete__(DAT_00971e7c);
  }
  _DAT_00971e78 = ((void *)(0x00919488u));
  DAT_00971e7c = (void *)0x0;
  return;
}


//==== 00008f6590 008f6590_FUN_008f6590 ====
void FUN_008f6590(void);

// decompiled by BatchDecomp @ 008f6590 name=FUN_008f6590 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6590(void)

{
  _DAT_00971de8 = ((void *)(0x009194a4u));
  if (DAT_00971dec != (void *)0x0) {
    operator_delete__(DAT_00971dec);
  }
  _DAT_00971de8 = ((void *)(0x00919488u));
  DAT_00971dec = (void *)0x0;
  return;
}


//==== 00008f65d0 008f65d0_FUN_008f65d0 ====
void FUN_008f65d0(void);

// decompiled by BatchDecomp @ 008f65d0 name=FUN_008f65d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f65d0(void)

{
  _DAT_00971e68 = ((void *)(0x009194a4u));
  if (DAT_00971e6c != (void *)0x0) {
    operator_delete__(DAT_00971e6c);
  }
  _DAT_00971e68 = ((void *)(0x00919488u));
  DAT_00971e6c = (void *)0x0;
  return;
}


//==== 00008f6610 008f6610_FUN_008f6610 ====
void FUN_008f6610(void);

// decompiled by BatchDecomp @ 008f6610 name=FUN_008f6610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6610(void)

{
  _DAT_00971e18 = ((void *)(0x009194a4u));
  if (DAT_00971e1c != (void *)0x0) {
    operator_delete__(DAT_00971e1c);
  }
  _DAT_00971e18 = ((void *)(0x00919488u));
  DAT_00971e1c = (void *)0x0;
  return;
}


//==== 00008f6650 008f6650_FUN_008f6650 ====
void FUN_008f6650(void);

// decompiled by BatchDecomp @ 008f6650 name=FUN_008f6650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6650(void)

{
  _DAT_00971e08 = ((void *)(0x009194a4u));
  if (DAT_00971e0c != (void *)0x0) {
    operator_delete__(DAT_00971e0c);
  }
  _DAT_00971e08 = ((void *)(0x00919488u));
  DAT_00971e0c = (void *)0x0;
  return;
}


//==== 00008f6690 008f6690_FUN_008f6690 ====
void FUN_008f6690(void);

// decompiled by BatchDecomp @ 008f6690 name=FUN_008f6690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6690(void)

{
  _DAT_00971e48 = ((void *)(0x009194a4u));
  if (DAT_00971e4c != (void *)0x0) {
    operator_delete__(DAT_00971e4c);
  }
  _DAT_00971e48 = ((void *)(0x00919488u));
  DAT_00971e4c = (void *)0x0;
  return;
}


//==== 00008f6a10 008f6a10_FUN_008f6a10 ====
void FUN_008f6a10(void);

// decompiled by BatchDecomp @ 008f6a10 name=FUN_008f6a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6a10(void)

{
  _DAT_00972588 = ((void *)(0x009194a4u));
  if (DAT_0097258c != (void *)0x0) {
    operator_delete__(DAT_0097258c);
  }
  _DAT_00972588 = ((void *)(0x00919488u));
  DAT_0097258c = (void *)0x0;
  return;
}


//==== 00008f6a50 008f6a50_FUN_008f6a50 ====
void FUN_008f6a50(void);

// decompiled by BatchDecomp @ 008f6a50 name=FUN_008f6a50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6a50(void)

{
  _DAT_00972528 = ((void *)(0x009194a4u));
  if (DAT_0097252c != (void *)0x0) {
    operator_delete__(DAT_0097252c);
  }
  _DAT_00972528 = ((void *)(0x00919488u));
  DAT_0097252c = (void *)0x0;
  return;
}


//==== 00008f6a90 008f6a90_FUN_008f6a90 ====
void FUN_008f6a90(void);

// decompiled by BatchDecomp @ 008f6a90 name=FUN_008f6a90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6a90(void)

{
  _DAT_00972568 = ((void *)(0x009194a4u));
  if (DAT_0097256c != (void *)0x0) {
    operator_delete__(DAT_0097256c);
  }
  _DAT_00972568 = ((void *)(0x00919488u));
  DAT_0097256c = (void *)0x0;
  return;
}


//==== 00008f6ad0 008f6ad0_FUN_008f6ad0 ====
void FUN_008f6ad0(void);

// decompiled by BatchDecomp @ 008f6ad0 name=FUN_008f6ad0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6ad0(void)

{
  _DAT_00972558 = ((void *)(0x009194a4u));
  if (DAT_0097255c != (void *)0x0) {
    operator_delete__(DAT_0097255c);
  }
  _DAT_00972558 = ((void *)(0x00919488u));
  DAT_0097255c = (void *)0x0;
  return;
}


//==== 00008f6b10 008f6b10_FUN_008f6b10 ====
void FUN_008f6b10(void);

// decompiled by BatchDecomp @ 008f6b10 name=FUN_008f6b10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6b10(void)

{
  _DAT_009725a8 = ((void *)(0x009194a4u));
  if (DAT_009725ac != (void *)0x0) {
    operator_delete__(DAT_009725ac);
  }
  _DAT_009725a8 = ((void *)(0x00919488u));
  DAT_009725ac = (void *)0x0;
  return;
}


//==== 00008f6b50 008f6b50_FUN_008f6b50 ====
void FUN_008f6b50(void);

// decompiled by BatchDecomp @ 008f6b50 name=FUN_008f6b50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6b50(void)

{
  _DAT_00972518 = ((void *)(0x009194a4u));
  if (DAT_0097251c != (void *)0x0) {
    operator_delete__(DAT_0097251c);
  }
  _DAT_00972518 = ((void *)(0x00919488u));
  DAT_0097251c = (void *)0x0;
  return;
}


//==== 00008f6b90 008f6b90_FUN_008f6b90 ====
void FUN_008f6b90(void);

// decompiled by BatchDecomp @ 008f6b90 name=FUN_008f6b90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6b90(void)

{
  _DAT_00972598 = ((void *)(0x009194a4u));
  if (DAT_0097259c != (void *)0x0) {
    operator_delete__(DAT_0097259c);
  }
  _DAT_00972598 = ((void *)(0x00919488u));
  DAT_0097259c = (void *)0x0;
  return;
}


//==== 00008f6bd0 008f6bd0_FUN_008f6bd0 ====
void FUN_008f6bd0(void);

// decompiled by BatchDecomp @ 008f6bd0 name=FUN_008f6bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6bd0(void)

{
  _DAT_00972548 = ((void *)(0x009194a4u));
  if (DAT_0097254c != (void *)0x0) {
    operator_delete__(DAT_0097254c);
  }
  _DAT_00972548 = ((void *)(0x00919488u));
  DAT_0097254c = (void *)0x0;
  return;
}


//==== 00008f6c10 008f6c10_FUN_008f6c10 ====
void FUN_008f6c10(void);

// decompiled by BatchDecomp @ 008f6c10 name=FUN_008f6c10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6c10(void)

{
  _DAT_00972538 = ((void *)(0x009194a4u));
  if (DAT_0097253c != (void *)0x0) {
    operator_delete__(DAT_0097253c);
  }
  _DAT_00972538 = ((void *)(0x00919488u));
  DAT_0097253c = (void *)0x0;
  return;
}


//==== 00008f6c50 008f6c50_FUN_008f6c50 ====
void FUN_008f6c50(void);

// decompiled by BatchDecomp @ 008f6c50 name=FUN_008f6c50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6c50(void)

{
  _DAT_009725b8 = ((void *)(0x009194a4u));
  if (DAT_009725bc != (void *)0x0) {
    operator_delete__(DAT_009725bc);
  }
  _DAT_009725b8 = ((void *)(0x00919488u));
  DAT_009725bc = (void *)0x0;
  return;
}


//==== 00008f6c90 008f6c90_FUN_008f6c90 ====
void FUN_008f6c90(void);

// decompiled by BatchDecomp @ 008f6c90 name=FUN_008f6c90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f6c90(void)

{
  _DAT_00972578 = ((void *)(0x009194a4u));
  if (DAT_0097257c != (void *)0x0) {
    operator_delete__(DAT_0097257c);
  }
  _DAT_00972578 = ((void *)(0x00919488u));
  DAT_0097257c = (void *)0x0;
  return;
}


//==== 00008f7030 008f7030_FUN_008f7030 ====
void FUN_008f7030(void);

// decompiled by BatchDecomp @ 008f7030 name=FUN_008f7030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7030(void)

{
  _DAT_00972b94 = ((void *)(0x009194a4u));
  if (DAT_00972b98 != (void *)0x0) {
    operator_delete__(DAT_00972b98);
  }
  _DAT_00972b94 = ((void *)(0x00919488u));
  DAT_00972b98 = (void *)0x0;
  return;
}


//==== 00008f7070 008f7070_FUN_008f7070 ====
void FUN_008f7070(void);

// decompiled by BatchDecomp @ 008f7070 name=FUN_008f7070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7070(void)

{
  _DAT_00972b34 = ((void *)(0x009194a4u));
  if (DAT_00972b38 != (void *)0x0) {
    operator_delete__(DAT_00972b38);
  }
  _DAT_00972b34 = ((void *)(0x00919488u));
  DAT_00972b38 = (void *)0x0;
  return;
}


//==== 00008f70b0 008f70b0_FUN_008f70b0 ====
void FUN_008f70b0(void);

// decompiled by BatchDecomp @ 008f70b0 name=FUN_008f70b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f70b0(void)

{
  _DAT_00972b74 = ((void *)(0x009194a4u));
  if (DAT_00972b78 != (void *)0x0) {
    operator_delete__(DAT_00972b78);
  }
  _DAT_00972b74 = ((void *)(0x00919488u));
  DAT_00972b78 = (void *)0x0;
  return;
}


//==== 00008f70f0 008f70f0_FUN_008f70f0 ====
void FUN_008f70f0(void);

// decompiled by BatchDecomp @ 008f70f0 name=FUN_008f70f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f70f0(void)

{
  _DAT_00972b64 = ((void *)(0x009194a4u));
  if (DAT_00972b68 != (void *)0x0) {
    operator_delete__(DAT_00972b68);
  }
  _DAT_00972b64 = ((void *)(0x00919488u));
  DAT_00972b68 = (void *)0x0;
  return;
}


//==== 00008f7130 008f7130_FUN_008f7130 ====
void FUN_008f7130(void);

// decompiled by BatchDecomp @ 008f7130 name=FUN_008f7130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7130(void)

{
  _DAT_00972bb4 = ((void *)(0x009194a4u));
  if (DAT_00972bb8 != (void *)0x0) {
    operator_delete__(DAT_00972bb8);
  }
  _DAT_00972bb4 = ((void *)(0x00919488u));
  DAT_00972bb8 = (void *)0x0;
  return;
}


//==== 00008f7170 008f7170_FUN_008f7170 ====
void FUN_008f7170(void);

// decompiled by BatchDecomp @ 008f7170 name=FUN_008f7170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7170(void)

{
  _DAT_00972b24 = ((void *)(0x009194a4u));
  if (DAT_00972b28 != (void *)0x0) {
    operator_delete__(DAT_00972b28);
  }
  _DAT_00972b24 = ((void *)(0x00919488u));
  DAT_00972b28 = (void *)0x0;
  return;
}


//==== 00008f71b0 008f71b0_FUN_008f71b0 ====
void FUN_008f71b0(void);

// decompiled by BatchDecomp @ 008f71b0 name=FUN_008f71b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f71b0(void)

{
  _DAT_00972ba4 = ((void *)(0x009194a4u));
  if (DAT_00972ba8 != (void *)0x0) {
    operator_delete__(DAT_00972ba8);
  }
  _DAT_00972ba4 = ((void *)(0x00919488u));
  DAT_00972ba8 = (void *)0x0;
  return;
}


//==== 00008f71f0 008f71f0_FUN_008f71f0 ====
void FUN_008f71f0(void);

// decompiled by BatchDecomp @ 008f71f0 name=FUN_008f71f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f71f0(void)

{
  _DAT_00972b54 = ((void *)(0x009194a4u));
  if (DAT_00972b58 != (void *)0x0) {
    operator_delete__(DAT_00972b58);
  }
  _DAT_00972b54 = ((void *)(0x00919488u));
  DAT_00972b58 = (void *)0x0;
  return;
}


//==== 00008f7230 008f7230_FUN_008f7230 ====
void FUN_008f7230(void);

// decompiled by BatchDecomp @ 008f7230 name=FUN_008f7230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7230(void)

{
  _DAT_00972b44 = ((void *)(0x009194a4u));
  if (DAT_00972b48 != (void *)0x0) {
    operator_delete__(DAT_00972b48);
  }
  _DAT_00972b44 = ((void *)(0x00919488u));
  DAT_00972b48 = (void *)0x0;
  return;
}


//==== 00008f7270 008f7270_FUN_008f7270 ====
void FUN_008f7270(void);

// decompiled by BatchDecomp @ 008f7270 name=FUN_008f7270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7270(void)

{
  _DAT_00972bc4 = ((void *)(0x009194a4u));
  if (DAT_00972bc8 != (void *)0x0) {
    operator_delete__(DAT_00972bc8);
  }
  _DAT_00972bc4 = ((void *)(0x00919488u));
  DAT_00972bc8 = (void *)0x0;
  return;
}


//==== 00008f72b0 008f72b0_FUN_008f72b0 ====
void FUN_008f72b0(void);

// decompiled by BatchDecomp @ 008f72b0 name=FUN_008f72b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f72b0(void)

{
  _DAT_00972b84 = ((void *)(0x009194a4u));
  if (DAT_00972b88 != (void *)0x0) {
    operator_delete__(DAT_00972b88);
  }
  _DAT_00972b84 = ((void *)(0x00919488u));
  DAT_00972b88 = (void *)0x0;
  return;
}


//==== 00008f7650 008f7650_FUN_008f7650 ====
void FUN_008f7650(void);

// decompiled by BatchDecomp @ 008f7650 name=FUN_008f7650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7650(void)

{
  _DAT_00973100 = ((void *)(0x009194a4u));
  if (DAT_00973104 != (void *)0x0) {
    operator_delete__(DAT_00973104);
  }
  _DAT_00973100 = ((void *)(0x00919488u));
  DAT_00973104 = (void *)0x0;
  return;
}


//==== 00008f7690 008f7690_FUN_008f7690 ====
void FUN_008f7690(void);

// decompiled by BatchDecomp @ 008f7690 name=FUN_008f7690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7690(void)

{
  _DAT_009730a0 = ((void *)(0x009194a4u));
  if (DAT_009730a4 != (void *)0x0) {
    operator_delete__(DAT_009730a4);
  }
  _DAT_009730a0 = ((void *)(0x00919488u));
  DAT_009730a4 = (void *)0x0;
  return;
}


//==== 00008f76d0 008f76d0_FUN_008f76d0 ====
void FUN_008f76d0(void);

// decompiled by BatchDecomp @ 008f76d0 name=FUN_008f76d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f76d0(void)

{
  _DAT_009730e0 = ((void *)(0x009194a4u));
  if (DAT_009730e4 != (void *)0x0) {
    operator_delete__(DAT_009730e4);
  }
  _DAT_009730e0 = ((void *)(0x00919488u));
  DAT_009730e4 = (void *)0x0;
  return;
}


//==== 00008f7710 008f7710_FUN_008f7710 ====
void FUN_008f7710(void);

// decompiled by BatchDecomp @ 008f7710 name=FUN_008f7710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7710(void)

{
  _DAT_009730d0 = ((void *)(0x009194a4u));
  if (DAT_009730d4 != (void *)0x0) {
    operator_delete__(DAT_009730d4);
  }
  _DAT_009730d0 = ((void *)(0x00919488u));
  DAT_009730d4 = (void *)0x0;
  return;
}


//==== 00008f7750 008f7750_FUN_008f7750 ====
void FUN_008f7750(void);

// decompiled by BatchDecomp @ 008f7750 name=FUN_008f7750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7750(void)

{
  _DAT_00973120 = ((void *)(0x009194a4u));
  if (DAT_00973124 != (void *)0x0) {
    operator_delete__(DAT_00973124);
  }
  _DAT_00973120 = ((void *)(0x00919488u));
  DAT_00973124 = (void *)0x0;
  return;
}


//==== 00008f7790 008f7790_FUN_008f7790 ====
void FUN_008f7790(void);

// decompiled by BatchDecomp @ 008f7790 name=FUN_008f7790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7790(void)

{
  _DAT_00973090 = ((void *)(0x009194a4u));
  if (DAT_00973094 != (void *)0x0) {
    operator_delete__(DAT_00973094);
  }
  _DAT_00973090 = ((void *)(0x00919488u));
  DAT_00973094 = (void *)0x0;
  return;
}


//==== 00008f77d0 008f77d0_FUN_008f77d0 ====
void FUN_008f77d0(void);

// decompiled by BatchDecomp @ 008f77d0 name=FUN_008f77d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f77d0(void)

{
  _DAT_00973110 = ((void *)(0x009194a4u));
  if (DAT_00973114 != (void *)0x0) {
    operator_delete__(DAT_00973114);
  }
  _DAT_00973110 = ((void *)(0x00919488u));
  DAT_00973114 = (void *)0x0;
  return;
}


//==== 00008f7810 008f7810_FUN_008f7810 ====
void FUN_008f7810(void);

// decompiled by BatchDecomp @ 008f7810 name=FUN_008f7810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7810(void)

{
  _DAT_009730c0 = ((void *)(0x009194a4u));
  if (DAT_009730c4 != (void *)0x0) {
    operator_delete__(DAT_009730c4);
  }
  _DAT_009730c0 = ((void *)(0x00919488u));
  DAT_009730c4 = (void *)0x0;
  return;
}


//==== 00008f7850 008f7850_FUN_008f7850 ====
void FUN_008f7850(void);

// decompiled by BatchDecomp @ 008f7850 name=FUN_008f7850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7850(void)

{
  _DAT_009730b0 = ((void *)(0x009194a4u));
  if (DAT_009730b4 != (void *)0x0) {
    operator_delete__(DAT_009730b4);
  }
  _DAT_009730b0 = ((void *)(0x00919488u));
  DAT_009730b4 = (void *)0x0;
  return;
}


//==== 00008f7890 008f7890_FUN_008f7890 ====
void FUN_008f7890(void);

// decompiled by BatchDecomp @ 008f7890 name=FUN_008f7890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7890(void)

{
  _DAT_00973130 = ((void *)(0x009194a4u));
  if (DAT_00973134 != (void *)0x0) {
    operator_delete__(DAT_00973134);
  }
  _DAT_00973130 = ((void *)(0x00919488u));
  DAT_00973134 = (void *)0x0;
  return;
}


//==== 00008f78d0 008f78d0_FUN_008f78d0 ====
void FUN_008f78d0(void);

// decompiled by BatchDecomp @ 008f78d0 name=FUN_008f78d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f78d0(void)

{
  _DAT_009730f0 = ((void *)(0x009194a4u));
  if (DAT_009730f4 != (void *)0x0) {
    operator_delete__(DAT_009730f4);
  }
  _DAT_009730f0 = ((void *)(0x00919488u));
  DAT_009730f4 = (void *)0x0;
  return;
}


//==== 00008f7d10 008f7d10_FUN_008f7d10 ====
void FUN_008f7d10(void);

// decompiled by BatchDecomp @ 008f7d10 name=FUN_008f7d10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7d10(void)

{
  _DAT_00973c90 = ((void *)(0x009194a4u));
  if (DAT_00973c94 != (void *)0x0) {
    operator_delete__(DAT_00973c94);
  }
  _DAT_00973c90 = ((void *)(0x00919488u));
  DAT_00973c94 = (void *)0x0;
  return;
}


//==== 00008f7d50 008f7d50_FUN_008f7d50 ====
void FUN_008f7d50(void);

// decompiled by BatchDecomp @ 008f7d50 name=FUN_008f7d50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7d50(void)

{
  _DAT_00973c30 = ((void *)(0x009194a4u));
  if (DAT_00973c34 != (void *)0x0) {
    operator_delete__(DAT_00973c34);
  }
  _DAT_00973c30 = ((void *)(0x00919488u));
  DAT_00973c34 = (void *)0x0;
  return;
}


//==== 00008f7d90 008f7d90_FUN_008f7d90 ====
void FUN_008f7d90(void);

// decompiled by BatchDecomp @ 008f7d90 name=FUN_008f7d90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7d90(void)

{
  _DAT_00973c70 = ((void *)(0x009194a4u));
  if (DAT_00973c74 != (void *)0x0) {
    operator_delete__(DAT_00973c74);
  }
  _DAT_00973c70 = ((void *)(0x00919488u));
  DAT_00973c74 = (void *)0x0;
  return;
}


//==== 00008f7dd0 008f7dd0_FUN_008f7dd0 ====
void FUN_008f7dd0(void);

// decompiled by BatchDecomp @ 008f7dd0 name=FUN_008f7dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7dd0(void)

{
  _DAT_00973c60 = ((void *)(0x009194a4u));
  if (DAT_00973c64 != (void *)0x0) {
    operator_delete__(DAT_00973c64);
  }
  _DAT_00973c60 = ((void *)(0x00919488u));
  DAT_00973c64 = (void *)0x0;
  return;
}


//==== 00008f7e10 008f7e10_FUN_008f7e10 ====
void FUN_008f7e10(void);

// decompiled by BatchDecomp @ 008f7e10 name=FUN_008f7e10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7e10(void)

{
  _DAT_00973cb0 = ((void *)(0x009194a4u));
  if (DAT_00973cb4 != (void *)0x0) {
    operator_delete__(DAT_00973cb4);
  }
  _DAT_00973cb0 = ((void *)(0x00919488u));
  DAT_00973cb4 = (void *)0x0;
  return;
}


//==== 00008f7e50 008f7e50_FUN_008f7e50 ====
void FUN_008f7e50(void);

// decompiled by BatchDecomp @ 008f7e50 name=FUN_008f7e50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7e50(void)

{
  _DAT_00973c20 = ((void *)(0x009194a4u));
  if (DAT_00973c24 != (void *)0x0) {
    operator_delete__(DAT_00973c24);
  }
  _DAT_00973c20 = ((void *)(0x00919488u));
  DAT_00973c24 = (void *)0x0;
  return;
}


//==== 00008f7e90 008f7e90_FUN_008f7e90 ====
void FUN_008f7e90(void);

// decompiled by BatchDecomp @ 008f7e90 name=FUN_008f7e90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7e90(void)

{
  _DAT_00973ca0 = ((void *)(0x009194a4u));
  if (DAT_00973ca4 != (void *)0x0) {
    operator_delete__(DAT_00973ca4);
  }
  _DAT_00973ca0 = ((void *)(0x00919488u));
  DAT_00973ca4 = (void *)0x0;
  return;
}


//==== 00008f7ed0 008f7ed0_FUN_008f7ed0 ====
void FUN_008f7ed0(void);

// decompiled by BatchDecomp @ 008f7ed0 name=FUN_008f7ed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7ed0(void)

{
  _DAT_00973c50 = ((void *)(0x009194a4u));
  if (DAT_00973c54 != (void *)0x0) {
    operator_delete__(DAT_00973c54);
  }
  _DAT_00973c50 = ((void *)(0x00919488u));
  DAT_00973c54 = (void *)0x0;
  return;
}


//==== 00008f7f10 008f7f10_FUN_008f7f10 ====
void FUN_008f7f10(void);

// decompiled by BatchDecomp @ 008f7f10 name=FUN_008f7f10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7f10(void)

{
  _DAT_00973c40 = ((void *)(0x009194a4u));
  if (DAT_00973c44 != (void *)0x0) {
    operator_delete__(DAT_00973c44);
  }
  _DAT_00973c40 = ((void *)(0x00919488u));
  DAT_00973c44 = (void *)0x0;
  return;
}


//==== 00008f7f50 008f7f50_FUN_008f7f50 ====
void FUN_008f7f50(void);

// decompiled by BatchDecomp @ 008f7f50 name=FUN_008f7f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7f50(void)

{
  _DAT_00973cc0 = ((void *)(0x009194a4u));
  if (DAT_00973cc4 != (void *)0x0) {
    operator_delete__(DAT_00973cc4);
  }
  _DAT_00973cc0 = ((void *)(0x00919488u));
  DAT_00973cc4 = (void *)0x0;
  return;
}


//==== 00008f7f90 008f7f90_FUN_008f7f90 ====
void FUN_008f7f90(void);

// decompiled by BatchDecomp @ 008f7f90 name=FUN_008f7f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f7f90(void)

{
  _DAT_00973c80 = ((void *)(0x009194a4u));
  if (DAT_00973c84 != (void *)0x0) {
    operator_delete__(DAT_00973c84);
  }
  _DAT_00973c80 = ((void *)(0x00919488u));
  DAT_00973c84 = (void *)0x0;
  return;
}


//==== 00008f8330 008f8330_FUN_008f8330 ====
void FUN_008f8330(void);

// decompiled by BatchDecomp @ 008f8330 name=FUN_008f8330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8330(void)

{
  _DAT_0097442c = ((void *)(0x009194a4u));
  if (DAT_00974430 != (void *)0x0) {
    operator_delete__(DAT_00974430);
  }
  _DAT_0097442c = ((void *)(0x00919488u));
  DAT_00974430 = (void *)0x0;
  return;
}


//==== 00008f8370 008f8370_FUN_008f8370 ====
void FUN_008f8370(void);

// decompiled by BatchDecomp @ 008f8370 name=FUN_008f8370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8370(void)

{
  _DAT_009743cc = ((void *)(0x009194a4u));
  if (DAT_009743d0 != (void *)0x0) {
    operator_delete__(DAT_009743d0);
  }
  _DAT_009743cc = ((void *)(0x00919488u));
  DAT_009743d0 = (void *)0x0;
  return;
}


//==== 00008f83b0 008f83b0_FUN_008f83b0 ====
void FUN_008f83b0(void);

// decompiled by BatchDecomp @ 008f83b0 name=FUN_008f83b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f83b0(void)

{
  _DAT_0097440c = ((void *)(0x009194a4u));
  if (DAT_00974410 != (void *)0x0) {
    operator_delete__(DAT_00974410);
  }
  _DAT_0097440c = ((void *)(0x00919488u));
  DAT_00974410 = (void *)0x0;
  return;
}


//==== 00008f83f0 008f83f0_FUN_008f83f0 ====
void FUN_008f83f0(void);

// decompiled by BatchDecomp @ 008f83f0 name=FUN_008f83f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f83f0(void)

{
  _DAT_009743fc = ((void *)(0x009194a4u));
  if (DAT_00974400 != (void *)0x0) {
    operator_delete__(DAT_00974400);
  }
  _DAT_009743fc = ((void *)(0x00919488u));
  DAT_00974400 = (void *)0x0;
  return;
}


//==== 00008f8430 008f8430_FUN_008f8430 ====
void FUN_008f8430(void);

// decompiled by BatchDecomp @ 008f8430 name=FUN_008f8430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8430(void)

{
  _DAT_0097444c = ((void *)(0x009194a4u));
  if (DAT_00974450 != (void *)0x0) {
    operator_delete__(DAT_00974450);
  }
  _DAT_0097444c = ((void *)(0x00919488u));
  DAT_00974450 = (void *)0x0;
  return;
}


//==== 00008f8470 008f8470_FUN_008f8470 ====
void FUN_008f8470(void);

// decompiled by BatchDecomp @ 008f8470 name=FUN_008f8470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8470(void)

{
  _DAT_009743bc = ((void *)(0x009194a4u));
  if (DAT_009743c0 != (void *)0x0) {
    operator_delete__(DAT_009743c0);
  }
  _DAT_009743bc = ((void *)(0x00919488u));
  DAT_009743c0 = (void *)0x0;
  return;
}


//==== 00008f84b0 008f84b0_FUN_008f84b0 ====
void FUN_008f84b0(void);

// decompiled by BatchDecomp @ 008f84b0 name=FUN_008f84b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f84b0(void)

{
  _DAT_0097443c = ((void *)(0x009194a4u));
  if (DAT_00974440 != (void *)0x0) {
    operator_delete__(DAT_00974440);
  }
  _DAT_0097443c = ((void *)(0x00919488u));
  DAT_00974440 = (void *)0x0;
  return;
}


//==== 00008f84f0 008f84f0_FUN_008f84f0 ====
void FUN_008f84f0(void);

// decompiled by BatchDecomp @ 008f84f0 name=FUN_008f84f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f84f0(void)

{
  _DAT_009743ec = ((void *)(0x009194a4u));
  if (DAT_009743f0 != (void *)0x0) {
    operator_delete__(DAT_009743f0);
  }
  _DAT_009743ec = ((void *)(0x00919488u));
  DAT_009743f0 = (void *)0x0;
  return;
}


//==== 00008f8530 008f8530_FUN_008f8530 ====
void FUN_008f8530(void);

// decompiled by BatchDecomp @ 008f8530 name=FUN_008f8530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8530(void)

{
  _DAT_009743dc = ((void *)(0x009194a4u));
  if (DAT_009743e0 != (void *)0x0) {
    operator_delete__(DAT_009743e0);
  }
  _DAT_009743dc = ((void *)(0x00919488u));
  DAT_009743e0 = (void *)0x0;
  return;
}


//==== 00008f8570 008f8570_FUN_008f8570 ====
void FUN_008f8570(void);

// decompiled by BatchDecomp @ 008f8570 name=FUN_008f8570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8570(void)

{
  _DAT_0097445c = ((void *)(0x009194a4u));
  if (DAT_00974460 != (void *)0x0) {
    operator_delete__(DAT_00974460);
  }
  _DAT_0097445c = ((void *)(0x00919488u));
  DAT_00974460 = (void *)0x0;
  return;
}


//==== 00008f85b0 008f85b0_FUN_008f85b0 ====
void FUN_008f85b0(void);

// decompiled by BatchDecomp @ 008f85b0 name=FUN_008f85b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f85b0(void)

{
  _DAT_0097441c = ((void *)(0x009194a4u));
  if (DAT_00974420 != (void *)0x0) {
    operator_delete__(DAT_00974420);
  }
  _DAT_0097441c = ((void *)(0x00919488u));
  DAT_00974420 = (void *)0x0;
  return;
}


//==== 00008f8950 008f8950_FUN_008f8950 ====
void FUN_008f8950(void);

// decompiled by BatchDecomp @ 008f8950 name=FUN_008f8950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8950(void)

{
  _DAT_00974bc8 = ((void *)(0x009194a4u));
  if (DAT_00974bcc != (void *)0x0) {
    operator_delete__(DAT_00974bcc);
  }
  _DAT_00974bc8 = ((void *)(0x00919488u));
  DAT_00974bcc = (void *)0x0;
  return;
}


//==== 00008f8990 008f8990_FUN_008f8990 ====
void FUN_008f8990(void);

// decompiled by BatchDecomp @ 008f8990 name=FUN_008f8990 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8990(void)

{
  _DAT_00974b68 = ((void *)(0x009194a4u));
  if (DAT_00974b6c != (void *)0x0) {
    operator_delete__(DAT_00974b6c);
  }
  _DAT_00974b68 = ((void *)(0x00919488u));
  DAT_00974b6c = (void *)0x0;
  return;
}


//==== 00008f89d0 008f89d0_FUN_008f89d0 ====
void FUN_008f89d0(void);

// decompiled by BatchDecomp @ 008f89d0 name=FUN_008f89d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f89d0(void)

{
  _DAT_00974ba8 = ((void *)(0x009194a4u));
  if (DAT_00974bac != (void *)0x0) {
    operator_delete__(DAT_00974bac);
  }
  _DAT_00974ba8 = ((void *)(0x00919488u));
  DAT_00974bac = (void *)0x0;
  return;
}


//==== 00008f8a10 008f8a10_FUN_008f8a10 ====
void FUN_008f8a10(void);

// decompiled by BatchDecomp @ 008f8a10 name=FUN_008f8a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8a10(void)

{
  _DAT_00974b98 = ((void *)(0x009194a4u));
  if (DAT_00974b9c != (void *)0x0) {
    operator_delete__(DAT_00974b9c);
  }
  _DAT_00974b98 = ((void *)(0x00919488u));
  DAT_00974b9c = (void *)0x0;
  return;
}


//==== 00008f8a50 008f8a50_FUN_008f8a50 ====
void FUN_008f8a50(void);

// decompiled by BatchDecomp @ 008f8a50 name=FUN_008f8a50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8a50(void)

{
  _DAT_00974be8 = ((void *)(0x009194a4u));
  if (DAT_00974bec != (void *)0x0) {
    operator_delete__(DAT_00974bec);
  }
  _DAT_00974be8 = ((void *)(0x00919488u));
  DAT_00974bec = (void *)0x0;
  return;
}


//==== 00008f8a90 008f8a90_FUN_008f8a90 ====
void FUN_008f8a90(void);

// decompiled by BatchDecomp @ 008f8a90 name=FUN_008f8a90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8a90(void)

{
  _DAT_00974b58 = ((void *)(0x009194a4u));
  if (DAT_00974b5c != (void *)0x0) {
    operator_delete__(DAT_00974b5c);
  }
  _DAT_00974b58 = ((void *)(0x00919488u));
  DAT_00974b5c = (void *)0x0;
  return;
}


//==== 00008f8ad0 008f8ad0_FUN_008f8ad0 ====
void FUN_008f8ad0(void);

// decompiled by BatchDecomp @ 008f8ad0 name=FUN_008f8ad0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8ad0(void)

{
  _DAT_00974bd8 = ((void *)(0x009194a4u));
  if (DAT_00974bdc != (void *)0x0) {
    operator_delete__(DAT_00974bdc);
  }
  _DAT_00974bd8 = ((void *)(0x00919488u));
  DAT_00974bdc = (void *)0x0;
  return;
}


//==== 00008f8b10 008f8b10_FUN_008f8b10 ====
void FUN_008f8b10(void);

// decompiled by BatchDecomp @ 008f8b10 name=FUN_008f8b10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8b10(void)

{
  _DAT_00974b88 = ((void *)(0x009194a4u));
  if (DAT_00974b8c != (void *)0x0) {
    operator_delete__(DAT_00974b8c);
  }
  _DAT_00974b88 = ((void *)(0x00919488u));
  DAT_00974b8c = (void *)0x0;
  return;
}


//==== 00008f8b50 008f8b50_FUN_008f8b50 ====
void FUN_008f8b50(void);

// decompiled by BatchDecomp @ 008f8b50 name=FUN_008f8b50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8b50(void)

{
  _DAT_00974b78 = ((void *)(0x009194a4u));
  if (DAT_00974b7c != (void *)0x0) {
    operator_delete__(DAT_00974b7c);
  }
  _DAT_00974b78 = ((void *)(0x00919488u));
  DAT_00974b7c = (void *)0x0;
  return;
}


//==== 00008f8b90 008f8b90_FUN_008f8b90 ====
void FUN_008f8b90(void);

// decompiled by BatchDecomp @ 008f8b90 name=FUN_008f8b90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8b90(void)

{
  _DAT_00974bf8 = ((void *)(0x009194a4u));
  if (DAT_00974bfc != (void *)0x0) {
    operator_delete__(DAT_00974bfc);
  }
  _DAT_00974bf8 = ((void *)(0x00919488u));
  DAT_00974bfc = (void *)0x0;
  return;
}


//==== 00008f8bd0 008f8bd0_FUN_008f8bd0 ====
void FUN_008f8bd0(void);

// decompiled by BatchDecomp @ 008f8bd0 name=FUN_008f8bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f8bd0(void)

{
  _DAT_00974bb8 = ((void *)(0x009194a4u));
  if (DAT_00974bbc != (void *)0x0) {
    operator_delete__(DAT_00974bbc);
  }
  _DAT_00974bb8 = ((void *)(0x00919488u));
  DAT_00974bbc = (void *)0x0;
  return;
}


//==== 00008f90b0 008f90b0_FUN_008f90b0 ====
void FUN_008f90b0(void);

// decompiled by BatchDecomp @ 008f90b0 name=FUN_008f90b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f90b0(void)

{
  _DAT_009755b8 = ((void *)(0x009194a4u));
  if (DAT_009755bc != (void *)0x0) {
    operator_delete__(DAT_009755bc);
  }
  _DAT_009755b8 = ((void *)(0x00919488u));
  DAT_009755bc = (void *)0x0;
  return;
}


//==== 00008f90f0 008f90f0_FUN_008f90f0 ====
void FUN_008f90f0(void);

// decompiled by BatchDecomp @ 008f90f0 name=FUN_008f90f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f90f0(void)

{
  _DAT_00975558 = ((void *)(0x009194a4u));
  if (DAT_0097555c != (void *)0x0) {
    operator_delete__(DAT_0097555c);
  }
  _DAT_00975558 = ((void *)(0x00919488u));
  DAT_0097555c = (void *)0x0;
  return;
}


//==== 00008f9130 008f9130_FUN_008f9130 ====
void FUN_008f9130(void);

// decompiled by BatchDecomp @ 008f9130 name=FUN_008f9130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9130(void)

{
  _DAT_00975598 = ((void *)(0x009194a4u));
  if (DAT_0097559c != (void *)0x0) {
    operator_delete__(DAT_0097559c);
  }
  _DAT_00975598 = ((void *)(0x00919488u));
  DAT_0097559c = (void *)0x0;
  return;
}


//==== 00008f9170 008f9170_FUN_008f9170 ====
void FUN_008f9170(void);

// decompiled by BatchDecomp @ 008f9170 name=FUN_008f9170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9170(void)

{
  _DAT_00975588 = ((void *)(0x009194a4u));
  if (DAT_0097558c != (void *)0x0) {
    operator_delete__(DAT_0097558c);
  }
  _DAT_00975588 = ((void *)(0x00919488u));
  DAT_0097558c = (void *)0x0;
  return;
}


//==== 00008f91b0 008f91b0_FUN_008f91b0 ====
void FUN_008f91b0(void);

// decompiled by BatchDecomp @ 008f91b0 name=FUN_008f91b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f91b0(void)

{
  _DAT_009755d8 = ((void *)(0x009194a4u));
  if (DAT_009755dc != (void *)0x0) {
    operator_delete__(DAT_009755dc);
  }
  _DAT_009755d8 = ((void *)(0x00919488u));
  DAT_009755dc = (void *)0x0;
  return;
}


//==== 00008f91f0 008f91f0_FUN_008f91f0 ====
void FUN_008f91f0(void);

// decompiled by BatchDecomp @ 008f91f0 name=FUN_008f91f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f91f0(void)

{
  _DAT_00975548 = ((void *)(0x009194a4u));
  if (DAT_0097554c != (void *)0x0) {
    operator_delete__(DAT_0097554c);
  }
  _DAT_00975548 = ((void *)(0x00919488u));
  DAT_0097554c = (void *)0x0;
  return;
}


//==== 00008f9230 008f9230_FUN_008f9230 ====
void FUN_008f9230(void);

// decompiled by BatchDecomp @ 008f9230 name=FUN_008f9230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9230(void)

{
  _DAT_009755c8 = ((void *)(0x009194a4u));
  if (DAT_009755cc != (void *)0x0) {
    operator_delete__(DAT_009755cc);
  }
  _DAT_009755c8 = ((void *)(0x00919488u));
  DAT_009755cc = (void *)0x0;
  return;
}


//==== 00008f9270 008f9270_FUN_008f9270 ====
void FUN_008f9270(void);

// decompiled by BatchDecomp @ 008f9270 name=FUN_008f9270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9270(void)

{
  _DAT_00975578 = ((void *)(0x009194a4u));
  if (DAT_0097557c != (void *)0x0) {
    operator_delete__(DAT_0097557c);
  }
  _DAT_00975578 = ((void *)(0x00919488u));
  DAT_0097557c = (void *)0x0;
  return;
}


//==== 00008f92b0 008f92b0_FUN_008f92b0 ====
void FUN_008f92b0(void);

// decompiled by BatchDecomp @ 008f92b0 name=FUN_008f92b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f92b0(void)

{
  _DAT_00975568 = ((void *)(0x009194a4u));
  if (DAT_0097556c != (void *)0x0) {
    operator_delete__(DAT_0097556c);
  }
  _DAT_00975568 = ((void *)(0x00919488u));
  DAT_0097556c = (void *)0x0;
  return;
}


//==== 00008f92f0 008f92f0_FUN_008f92f0 ====
void FUN_008f92f0(void);

// decompiled by BatchDecomp @ 008f92f0 name=FUN_008f92f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f92f0(void)

{
  _DAT_009755e8 = ((void *)(0x009194a4u));
  if (DAT_009755ec != (void *)0x0) {
    operator_delete__(DAT_009755ec);
  }
  _DAT_009755e8 = ((void *)(0x00919488u));
  DAT_009755ec = (void *)0x0;
  return;
}


//==== 00008f9330 008f9330_FUN_008f9330 ====
void FUN_008f9330(void);

// decompiled by BatchDecomp @ 008f9330 name=FUN_008f9330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9330(void)

{
  _DAT_009755a8 = ((void *)(0x009194a4u));
  if (DAT_009755ac != (void *)0x0) {
    operator_delete__(DAT_009755ac);
  }
  _DAT_009755a8 = ((void *)(0x00919488u));
  DAT_009755ac = (void *)0x0;
  return;
}


//==== 00008f9810 008f9810_FUN_008f9810 ====
void FUN_008f9810(void);

// decompiled by BatchDecomp @ 008f9810 name=FUN_008f9810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9810(void)

{
  _DAT_009761a0 = ((void *)(0x009194a4u));
  if (DAT_009761a4 != (void *)0x0) {
    operator_delete__(DAT_009761a4);
  }
  _DAT_009761a0 = ((void *)(0x00919488u));
  DAT_009761a4 = (void *)0x0;
  return;
}


//==== 00008f9850 008f9850_FUN_008f9850 ====
void FUN_008f9850(void);

// decompiled by BatchDecomp @ 008f9850 name=FUN_008f9850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9850(void)

{
  _DAT_00976140 = ((void *)(0x009194a4u));
  if (DAT_00976144 != (void *)0x0) {
    operator_delete__(DAT_00976144);
  }
  _DAT_00976140 = ((void *)(0x00919488u));
  DAT_00976144 = (void *)0x0;
  return;
}


//==== 00008f9890 008f9890_FUN_008f9890 ====
void FUN_008f9890(void);

// decompiled by BatchDecomp @ 008f9890 name=FUN_008f9890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9890(void)

{
  _DAT_00976180 = ((void *)(0x009194a4u));
  if (DAT_00976184 != (void *)0x0) {
    operator_delete__(DAT_00976184);
  }
  _DAT_00976180 = ((void *)(0x00919488u));
  DAT_00976184 = (void *)0x0;
  return;
}


//==== 00008f98d0 008f98d0_FUN_008f98d0 ====
void FUN_008f98d0(void);

// decompiled by BatchDecomp @ 008f98d0 name=FUN_008f98d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f98d0(void)

{
  _DAT_00976170 = ((void *)(0x009194a4u));
  if (DAT_00976174 != (void *)0x0) {
    operator_delete__(DAT_00976174);
  }
  _DAT_00976170 = ((void *)(0x00919488u));
  DAT_00976174 = (void *)0x0;
  return;
}


//==== 00008f9910 008f9910_FUN_008f9910 ====
void FUN_008f9910(void);

// decompiled by BatchDecomp @ 008f9910 name=FUN_008f9910 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9910(void)

{
  _DAT_009761c0 = ((void *)(0x009194a4u));
  if (DAT_009761c4 != (void *)0x0) {
    operator_delete__(DAT_009761c4);
  }
  _DAT_009761c0 = ((void *)(0x00919488u));
  DAT_009761c4 = (void *)0x0;
  return;
}


//==== 00008f9950 008f9950_FUN_008f9950 ====
void FUN_008f9950(void);

// decompiled by BatchDecomp @ 008f9950 name=FUN_008f9950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9950(void)

{
  _DAT_00976130 = ((void *)(0x009194a4u));
  if (DAT_00976134 != (void *)0x0) {
    operator_delete__(DAT_00976134);
  }
  _DAT_00976130 = ((void *)(0x00919488u));
  DAT_00976134 = (void *)0x0;
  return;
}


//==== 00008f9990 008f9990_FUN_008f9990 ====
void FUN_008f9990(void);

// decompiled by BatchDecomp @ 008f9990 name=FUN_008f9990 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9990(void)

{
  _DAT_009761b0 = ((void *)(0x009194a4u));
  if (DAT_009761b4 != (void *)0x0) {
    operator_delete__(DAT_009761b4);
  }
  _DAT_009761b0 = ((void *)(0x00919488u));
  DAT_009761b4 = (void *)0x0;
  return;
}


//==== 00008f99d0 008f99d0_FUN_008f99d0 ====
void FUN_008f99d0(void);

// decompiled by BatchDecomp @ 008f99d0 name=FUN_008f99d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f99d0(void)

{
  _DAT_00976160 = ((void *)(0x009194a4u));
  if (DAT_00976164 != (void *)0x0) {
    operator_delete__(DAT_00976164);
  }
  _DAT_00976160 = ((void *)(0x00919488u));
  DAT_00976164 = (void *)0x0;
  return;
}


//==== 00008f9a10 008f9a10_FUN_008f9a10 ====
void FUN_008f9a10(void);

// decompiled by BatchDecomp @ 008f9a10 name=FUN_008f9a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9a10(void)

{
  _DAT_00976150 = ((void *)(0x009194a4u));
  if (DAT_00976154 != (void *)0x0) {
    operator_delete__(DAT_00976154);
  }
  _DAT_00976150 = ((void *)(0x00919488u));
  DAT_00976154 = (void *)0x0;
  return;
}


//==== 00008f9a50 008f9a50_FUN_008f9a50 ====
void FUN_008f9a50(void);

// decompiled by BatchDecomp @ 008f9a50 name=FUN_008f9a50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9a50(void)

{
  _DAT_009761d0 = ((void *)(0x009194a4u));
  if (DAT_009761d4 != (void *)0x0) {
    operator_delete__(DAT_009761d4);
  }
  _DAT_009761d0 = ((void *)(0x00919488u));
  DAT_009761d4 = (void *)0x0;
  return;
}


//==== 00008f9a90 008f9a90_FUN_008f9a90 ====
void FUN_008f9a90(void);

// decompiled by BatchDecomp @ 008f9a90 name=FUN_008f9a90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f9a90(void)

{
  _DAT_00976190 = ((void *)(0x009194a4u));
  if (DAT_00976194 != (void *)0x0) {
    operator_delete__(DAT_00976194);
  }
  _DAT_00976190 = ((void *)(0x00919488u));
  DAT_00976194 = (void *)0x0;
  return;
}


//==== 00008fa150 008fa150_FUN_008fa150 ====
void FUN_008fa150(void);

// decompiled by BatchDecomp @ 008fa150 name=FUN_008fa150 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa150(void)

{
  _DAT_009764e4 = ((void *)(0x009194a4u));
  if (DAT_009764e8 != (void *)0x0) {
    operator_delete__(DAT_009764e8);
  }
  _DAT_009764e4 = ((void *)(0x00919488u));
  DAT_009764e8 = (void *)0x0;
  return;
}


//==== 00008fa190 008fa190_FUN_008fa190 ====
void FUN_008fa190(void);

// decompiled by BatchDecomp @ 008fa190 name=FUN_008fa190 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa190(void)

{
  _DAT_00976484 = ((void *)(0x009194a4u));
  if (DAT_00976488 != (void *)0x0) {
    operator_delete__(DAT_00976488);
  }
  _DAT_00976484 = ((void *)(0x00919488u));
  DAT_00976488 = (void *)0x0;
  return;
}


//==== 00008fa1d0 008fa1d0_FUN_008fa1d0 ====
void FUN_008fa1d0(void);

// decompiled by BatchDecomp @ 008fa1d0 name=FUN_008fa1d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa1d0(void)

{
  _DAT_009764c4 = ((void *)(0x009194a4u));
  if (DAT_009764c8 != (void *)0x0) {
    operator_delete__(DAT_009764c8);
  }
  _DAT_009764c4 = ((void *)(0x00919488u));
  DAT_009764c8 = (void *)0x0;
  return;
}


//==== 00008fa210 008fa210_FUN_008fa210 ====
void FUN_008fa210(void);

// decompiled by BatchDecomp @ 008fa210 name=FUN_008fa210 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa210(void)

{
  _DAT_009764b4 = ((void *)(0x009194a4u));
  if (DAT_009764b8 != (void *)0x0) {
    operator_delete__(DAT_009764b8);
  }
  _DAT_009764b4 = ((void *)(0x00919488u));
  DAT_009764b8 = (void *)0x0;
  return;
}


//==== 00008fa250 008fa250_FUN_008fa250 ====
void FUN_008fa250(void);

// decompiled by BatchDecomp @ 008fa250 name=FUN_008fa250 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa250(void)

{
  _DAT_00976504 = ((void *)(0x009194a4u));
  if (DAT_00976508 != (void *)0x0) {
    operator_delete__(DAT_00976508);
  }
  _DAT_00976504 = ((void *)(0x00919488u));
  DAT_00976508 = (void *)0x0;
  return;
}


//==== 00008fa290 008fa290_FUN_008fa290 ====
void FUN_008fa290(void);

// decompiled by BatchDecomp @ 008fa290 name=FUN_008fa290 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa290(void)

{
  _DAT_00976474 = ((void *)(0x009194a4u));
  if (DAT_00976478 != (void *)0x0) {
    operator_delete__(DAT_00976478);
  }
  _DAT_00976474 = ((void *)(0x00919488u));
  DAT_00976478 = (void *)0x0;
  return;
}


//==== 00008fa2d0 008fa2d0_FUN_008fa2d0 ====
void FUN_008fa2d0(void);

// decompiled by BatchDecomp @ 008fa2d0 name=FUN_008fa2d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa2d0(void)

{
  _DAT_009764f4 = ((void *)(0x009194a4u));
  if (DAT_009764f8 != (void *)0x0) {
    operator_delete__(DAT_009764f8);
  }
  _DAT_009764f4 = ((void *)(0x00919488u));
  DAT_009764f8 = (void *)0x0;
  return;
}


//==== 00008fa310 008fa310_FUN_008fa310 ====
void FUN_008fa310(void);

// decompiled by BatchDecomp @ 008fa310 name=FUN_008fa310 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa310(void)

{
  _DAT_009764a4 = ((void *)(0x009194a4u));
  if (DAT_009764a8 != (void *)0x0) {
    operator_delete__(DAT_009764a8);
  }
  _DAT_009764a4 = ((void *)(0x00919488u));
  DAT_009764a8 = (void *)0x0;
  return;
}


//==== 00008fa350 008fa350_FUN_008fa350 ====
void FUN_008fa350(void);

// decompiled by BatchDecomp @ 008fa350 name=FUN_008fa350 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa350(void)

{
  _DAT_00976494 = ((void *)(0x009194a4u));
  if (DAT_00976498 != (void *)0x0) {
    operator_delete__(DAT_00976498);
  }
  _DAT_00976494 = ((void *)(0x00919488u));
  DAT_00976498 = (void *)0x0;
  return;
}


//==== 00008fa390 008fa390_FUN_008fa390 ====
void FUN_008fa390(void);

// decompiled by BatchDecomp @ 008fa390 name=FUN_008fa390 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa390(void)

{
  _DAT_00976514 = ((void *)(0x009194a4u));
  if (DAT_00976518 != (void *)0x0) {
    operator_delete__(DAT_00976518);
  }
  _DAT_00976514 = ((void *)(0x00919488u));
  DAT_00976518 = (void *)0x0;
  return;
}


//==== 00008fa3d0 008fa3d0_FUN_008fa3d0 ====
void FUN_008fa3d0(void);

// decompiled by BatchDecomp @ 008fa3d0 name=FUN_008fa3d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa3d0(void)

{
  _DAT_009764d4 = ((void *)(0x009194a4u));
  if (DAT_009764d8 != (void *)0x0) {
    operator_delete__(DAT_009764d8);
  }
  _DAT_009764d4 = ((void *)(0x00919488u));
  DAT_009764d8 = (void *)0x0;
  return;
}


//==== 00008fa6d0 008fa6d0_FUN_008fa6d0 ====
void FUN_008fa6d0(void);

// decompiled by BatchDecomp @ 008fa6d0 name=FUN_008fa6d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa6d0(void)

{
  _DAT_00977538 = ((void *)(0x009194a4u));
  if (DAT_0097753c != (void *)0x0) {
    operator_delete__(DAT_0097753c);
  }
  _DAT_00977538 = ((void *)(0x00919488u));
  DAT_0097753c = (void *)0x0;
  return;
}


//==== 00008fa710 008fa710_FUN_008fa710 ====
void FUN_008fa710(void);

// decompiled by BatchDecomp @ 008fa710 name=FUN_008fa710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa710(void)

{
  _DAT_009774d8 = ((void *)(0x009194a4u));
  if (DAT_009774dc != (void *)0x0) {
    operator_delete__(DAT_009774dc);
  }
  _DAT_009774d8 = ((void *)(0x00919488u));
  DAT_009774dc = (void *)0x0;
  return;
}


//==== 00008fa750 008fa750_FUN_008fa750 ====
void FUN_008fa750(void);

// decompiled by BatchDecomp @ 008fa750 name=FUN_008fa750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa750(void)

{
  _DAT_00977518 = ((void *)(0x009194a4u));
  if (DAT_0097751c != (void *)0x0) {
    operator_delete__(DAT_0097751c);
  }
  _DAT_00977518 = ((void *)(0x00919488u));
  DAT_0097751c = (void *)0x0;
  return;
}


//==== 00008fa790 008fa790_FUN_008fa790 ====
void FUN_008fa790(void);

// decompiled by BatchDecomp @ 008fa790 name=FUN_008fa790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa790(void)

{
  _DAT_00977508 = ((void *)(0x009194a4u));
  if (DAT_0097750c != (void *)0x0) {
    operator_delete__(DAT_0097750c);
  }
  _DAT_00977508 = ((void *)(0x00919488u));
  DAT_0097750c = (void *)0x0;
  return;
}


//==== 00008fa7d0 008fa7d0_FUN_008fa7d0 ====
void FUN_008fa7d0(void);

// decompiled by BatchDecomp @ 008fa7d0 name=FUN_008fa7d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa7d0(void)

{
  _DAT_00977558 = ((void *)(0x009194a4u));
  if (DAT_0097755c != (void *)0x0) {
    operator_delete__(DAT_0097755c);
  }
  _DAT_00977558 = ((void *)(0x00919488u));
  DAT_0097755c = (void *)0x0;
  return;
}


//==== 00008fa810 008fa810_FUN_008fa810 ====
void FUN_008fa810(void);

// decompiled by BatchDecomp @ 008fa810 name=FUN_008fa810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa810(void)

{
  _DAT_009774c8 = ((void *)(0x009194a4u));
  if (DAT_009774cc != (void *)0x0) {
    operator_delete__(DAT_009774cc);
  }
  _DAT_009774c8 = ((void *)(0x00919488u));
  DAT_009774cc = (void *)0x0;
  return;
}


//==== 00008fa850 008fa850_FUN_008fa850 ====
void FUN_008fa850(void);

// decompiled by BatchDecomp @ 008fa850 name=FUN_008fa850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa850(void)

{
  _DAT_00977548 = ((void *)(0x009194a4u));
  if (DAT_0097754c != (void *)0x0) {
    operator_delete__(DAT_0097754c);
  }
  _DAT_00977548 = ((void *)(0x00919488u));
  DAT_0097754c = (void *)0x0;
  return;
}


//==== 00008fa890 008fa890_FUN_008fa890 ====
void FUN_008fa890(void);

// decompiled by BatchDecomp @ 008fa890 name=FUN_008fa890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa890(void)

{
  _DAT_009774f8 = ((void *)(0x009194a4u));
  if (DAT_009774fc != (void *)0x0) {
    operator_delete__(DAT_009774fc);
  }
  _DAT_009774f8 = ((void *)(0x00919488u));
  DAT_009774fc = (void *)0x0;
  return;
}


//==== 00008fa8d0 008fa8d0_FUN_008fa8d0 ====
void FUN_008fa8d0(void);

// decompiled by BatchDecomp @ 008fa8d0 name=FUN_008fa8d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa8d0(void)

{
  _DAT_009774e8 = ((void *)(0x009194a4u));
  if (DAT_009774ec != (void *)0x0) {
    operator_delete__(DAT_009774ec);
  }
  _DAT_009774e8 = ((void *)(0x00919488u));
  DAT_009774ec = (void *)0x0;
  return;
}


//==== 00008fa910 008fa910_FUN_008fa910 ====
void FUN_008fa910(void);

// decompiled by BatchDecomp @ 008fa910 name=FUN_008fa910 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa910(void)

{
  _DAT_00977568 = ((void *)(0x009194a4u));
  if (DAT_0097756c != (void *)0x0) {
    operator_delete__(DAT_0097756c);
  }
  _DAT_00977568 = ((void *)(0x00919488u));
  DAT_0097756c = (void *)0x0;
  return;
}


//==== 00008fa950 008fa950_FUN_008fa950 ====
void FUN_008fa950(void);

// decompiled by BatchDecomp @ 008fa950 name=FUN_008fa950 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fa950(void)

{
  _DAT_00977528 = ((void *)(0x009194a4u));
  if (DAT_0097752c != (void *)0x0) {
    operator_delete__(DAT_0097752c);
  }
  _DAT_00977528 = ((void *)(0x00919488u));
  DAT_0097752c = (void *)0x0;
  return;
}


//==== 00008fad90 008fad90_FUN_008fad90 ====
void FUN_008fad90(void);

// decompiled by BatchDecomp @ 008fad90 name=FUN_008fad90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fad90(void)

{
  _DAT_00977e7c = ((void *)(0x009194a4u));
  if (DAT_00977e80 != (void *)0x0) {
    operator_delete__(DAT_00977e80);
  }
  _DAT_00977e7c = ((void *)(0x00919488u));
  DAT_00977e80 = (void *)0x0;
  return;
}


//==== 00008fadd0 008fadd0_FUN_008fadd0 ====
void FUN_008fadd0(void);

// decompiled by BatchDecomp @ 008fadd0 name=FUN_008fadd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fadd0(void)

{
  _DAT_00977e1c = ((void *)(0x009194a4u));
  if (DAT_00977e20 != (void *)0x0) {
    operator_delete__(DAT_00977e20);
  }
  _DAT_00977e1c = ((void *)(0x00919488u));
  DAT_00977e20 = (void *)0x0;
  return;
}


//==== 00008fae10 008fae10_FUN_008fae10 ====
void FUN_008fae10(void);

// decompiled by BatchDecomp @ 008fae10 name=FUN_008fae10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fae10(void)

{
  _DAT_00977e5c = ((void *)(0x009194a4u));
  if (DAT_00977e60 != (void *)0x0) {
    operator_delete__(DAT_00977e60);
  }
  _DAT_00977e5c = ((void *)(0x00919488u));
  DAT_00977e60 = (void *)0x0;
  return;
}


//==== 00008fae50 008fae50_FUN_008fae50 ====
void FUN_008fae50(void);

// decompiled by BatchDecomp @ 008fae50 name=FUN_008fae50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fae50(void)

{
  _DAT_00977e4c = ((void *)(0x009194a4u));
  if (DAT_00977e50 != (void *)0x0) {
    operator_delete__(DAT_00977e50);
  }
  _DAT_00977e4c = ((void *)(0x00919488u));
  DAT_00977e50 = (void *)0x0;
  return;
}


//==== 00008fae90 008fae90_FUN_008fae90 ====
void FUN_008fae90(void);

// decompiled by BatchDecomp @ 008fae90 name=FUN_008fae90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fae90(void)

{
  _DAT_00977e9c = ((void *)(0x009194a4u));
  if (DAT_00977ea0 != (void *)0x0) {
    operator_delete__(DAT_00977ea0);
  }
  _DAT_00977e9c = ((void *)(0x00919488u));
  DAT_00977ea0 = (void *)0x0;
  return;
}


//==== 00008faed0 008faed0_FUN_008faed0 ====
void FUN_008faed0(void);

// decompiled by BatchDecomp @ 008faed0 name=FUN_008faed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008faed0(void)

{
  _DAT_00977e0c = ((void *)(0x009194a4u));
  if (DAT_00977e10 != (void *)0x0) {
    operator_delete__(DAT_00977e10);
  }
  _DAT_00977e0c = ((void *)(0x00919488u));
  DAT_00977e10 = (void *)0x0;
  return;
}


//==== 00008faf10 008faf10_FUN_008faf10 ====
void FUN_008faf10(void);

// decompiled by BatchDecomp @ 008faf10 name=FUN_008faf10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008faf10(void)

{
  _DAT_00977e8c = ((void *)(0x009194a4u));
  if (DAT_00977e90 != (void *)0x0) {
    operator_delete__(DAT_00977e90);
  }
  _DAT_00977e8c = ((void *)(0x00919488u));
  DAT_00977e90 = (void *)0x0;
  return;
}


//==== 00008faf50 008faf50_FUN_008faf50 ====
void FUN_008faf50(void);

// decompiled by BatchDecomp @ 008faf50 name=FUN_008faf50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008faf50(void)

{
  _DAT_00977e3c = ((void *)(0x009194a4u));
  if (DAT_00977e40 != (void *)0x0) {
    operator_delete__(DAT_00977e40);
  }
  _DAT_00977e3c = ((void *)(0x00919488u));
  DAT_00977e40 = (void *)0x0;
  return;
}


//==== 00008faf90 008faf90_FUN_008faf90 ====
void FUN_008faf90(void);

// decompiled by BatchDecomp @ 008faf90 name=FUN_008faf90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008faf90(void)

{
  _DAT_00977e2c = ((void *)(0x009194a4u));
  if (DAT_00977e30 != (void *)0x0) {
    operator_delete__(DAT_00977e30);
  }
  _DAT_00977e2c = ((void *)(0x00919488u));
  DAT_00977e30 = (void *)0x0;
  return;
}


//==== 00008fafd0 008fafd0_FUN_008fafd0 ====
void FUN_008fafd0(void);

// decompiled by BatchDecomp @ 008fafd0 name=FUN_008fafd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fafd0(void)

{
  _DAT_00977eac = ((void *)(0x009194a4u));
  if (DAT_00977eb0 != (void *)0x0) {
    operator_delete__(DAT_00977eb0);
  }
  _DAT_00977eac = ((void *)(0x00919488u));
  DAT_00977eb0 = (void *)0x0;
  return;
}


//==== 00008fb010 008fb010_FUN_008fb010 ====
void FUN_008fb010(void);

// decompiled by BatchDecomp @ 008fb010 name=FUN_008fb010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb010(void)

{
  _DAT_00977e6c = ((void *)(0x009194a4u));
  if (DAT_00977e70 != (void *)0x0) {
    operator_delete__(DAT_00977e70);
  }
  _DAT_00977e6c = ((void *)(0x00919488u));
  DAT_00977e70 = (void *)0x0;
  return;
}


//==== 00008fb3b0 008fb3b0_FUN_008fb3b0 ====
void FUN_008fb3b0(void);

// decompiled by BatchDecomp @ 008fb3b0 name=FUN_008fb3b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb3b0(void)

{
  _DAT_009784a0 = ((void *)(0x009194a4u));
  if (DAT_009784a4 != (void *)0x0) {
    operator_delete__(DAT_009784a4);
  }
  _DAT_009784a0 = ((void *)(0x00919488u));
  DAT_009784a4 = (void *)0x0;
  return;
}


//==== 00008fb3f0 008fb3f0_FUN_008fb3f0 ====
void FUN_008fb3f0(void);

// decompiled by BatchDecomp @ 008fb3f0 name=FUN_008fb3f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb3f0(void)

{
  _DAT_00978440 = ((void *)(0x009194a4u));
  if (DAT_00978444 != (void *)0x0) {
    operator_delete__(DAT_00978444);
  }
  _DAT_00978440 = ((void *)(0x00919488u));
  DAT_00978444 = (void *)0x0;
  return;
}


//==== 00008fb430 008fb430_FUN_008fb430 ====
void FUN_008fb430(void);

// decompiled by BatchDecomp @ 008fb430 name=FUN_008fb430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb430(void)

{
  _DAT_00978480 = ((void *)(0x009194a4u));
  if (DAT_00978484 != (void *)0x0) {
    operator_delete__(DAT_00978484);
  }
  _DAT_00978480 = ((void *)(0x00919488u));
  DAT_00978484 = (void *)0x0;
  return;
}


//==== 00008fb470 008fb470_FUN_008fb470 ====
void FUN_008fb470(void);

// decompiled by BatchDecomp @ 008fb470 name=FUN_008fb470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb470(void)

{
  _DAT_00978470 = ((void *)(0x009194a4u));
  if (DAT_00978474 != (void *)0x0) {
    operator_delete__(DAT_00978474);
  }
  _DAT_00978470 = ((void *)(0x00919488u));
  DAT_00978474 = (void *)0x0;
  return;
}


//==== 00008fb4b0 008fb4b0_FUN_008fb4b0 ====
void FUN_008fb4b0(void);

// decompiled by BatchDecomp @ 008fb4b0 name=FUN_008fb4b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb4b0(void)

{
  _DAT_009784c0 = ((void *)(0x009194a4u));
  if (DAT_009784c4 != (void *)0x0) {
    operator_delete__(DAT_009784c4);
  }
  _DAT_009784c0 = ((void *)(0x00919488u));
  DAT_009784c4 = (void *)0x0;
  return;
}


//==== 00008fb4f0 008fb4f0_FUN_008fb4f0 ====
void FUN_008fb4f0(void);

// decompiled by BatchDecomp @ 008fb4f0 name=FUN_008fb4f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb4f0(void)

{
  _DAT_00978430 = ((void *)(0x009194a4u));
  if (DAT_00978434 != (void *)0x0) {
    operator_delete__(DAT_00978434);
  }
  _DAT_00978430 = ((void *)(0x00919488u));
  DAT_00978434 = (void *)0x0;
  return;
}


//==== 00008fb530 008fb530_FUN_008fb530 ====
void FUN_008fb530(void);

// decompiled by BatchDecomp @ 008fb530 name=FUN_008fb530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb530(void)

{
  _DAT_009784b0 = ((void *)(0x009194a4u));
  if (DAT_009784b4 != (void *)0x0) {
    operator_delete__(DAT_009784b4);
  }
  _DAT_009784b0 = ((void *)(0x00919488u));
  DAT_009784b4 = (void *)0x0;
  return;
}


//==== 00008fb570 008fb570_FUN_008fb570 ====
void FUN_008fb570(void);

// decompiled by BatchDecomp @ 008fb570 name=FUN_008fb570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb570(void)

{
  _DAT_00978460 = ((void *)(0x009194a4u));
  if (DAT_00978464 != (void *)0x0) {
    operator_delete__(DAT_00978464);
  }
  _DAT_00978460 = ((void *)(0x00919488u));
  DAT_00978464 = (void *)0x0;
  return;
}


//==== 00008fb5b0 008fb5b0_FUN_008fb5b0 ====
void FUN_008fb5b0(void);

// decompiled by BatchDecomp @ 008fb5b0 name=FUN_008fb5b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb5b0(void)

{
  _DAT_00978450 = ((void *)(0x009194a4u));
  if (DAT_00978454 != (void *)0x0) {
    operator_delete__(DAT_00978454);
  }
  _DAT_00978450 = ((void *)(0x00919488u));
  DAT_00978454 = (void *)0x0;
  return;
}


//==== 00008fb5f0 008fb5f0_FUN_008fb5f0 ====
void FUN_008fb5f0(void);

// decompiled by BatchDecomp @ 008fb5f0 name=FUN_008fb5f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb5f0(void)

{
  _DAT_009784d0 = ((void *)(0x009194a4u));
  if (DAT_009784d4 != (void *)0x0) {
    operator_delete__(DAT_009784d4);
  }
  _DAT_009784d0 = ((void *)(0x00919488u));
  DAT_009784d4 = (void *)0x0;
  return;
}


//==== 00008fb630 008fb630_FUN_008fb630 ====
void FUN_008fb630(void);

// decompiled by BatchDecomp @ 008fb630 name=FUN_008fb630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb630(void)

{
  _DAT_00978490 = ((void *)(0x009194a4u));
  if (DAT_00978494 != (void *)0x0) {
    operator_delete__(DAT_00978494);
  }
  _DAT_00978490 = ((void *)(0x00919488u));
  DAT_00978494 = (void *)0x0;
  return;
}


//==== 00008fb940 008fb940_FUN_008fb940 ====
void FUN_008fb940(void);

// decompiled by BatchDecomp @ 008fb940 name=FUN_008fb940 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb940(void)

{
  _DAT_00978758 = ((void *)(0x009194a4u));
  if (DAT_0097875c != (void *)0x0) {
    operator_delete__(DAT_0097875c);
  }
  _DAT_00978758 = ((void *)(0x00919488u));
  DAT_0097875c = (void *)0x0;
  return;
}


//==== 00008fb980 008fb980_FUN_008fb980 ====
void FUN_008fb980(void);

// decompiled by BatchDecomp @ 008fb980 name=FUN_008fb980 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb980(void)

{
  _DAT_009786f8 = ((void *)(0x009194a4u));
  if (DAT_009786fc != (void *)0x0) {
    operator_delete__(DAT_009786fc);
  }
  _DAT_009786f8 = ((void *)(0x00919488u));
  DAT_009786fc = (void *)0x0;
  return;
}


//==== 00008fb9c0 008fb9c0_FUN_008fb9c0 ====
void FUN_008fb9c0(void);

// decompiled by BatchDecomp @ 008fb9c0 name=FUN_008fb9c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fb9c0(void)

{
  _DAT_00978738 = ((void *)(0x009194a4u));
  if (DAT_0097873c != (void *)0x0) {
    operator_delete__(DAT_0097873c);
  }
  _DAT_00978738 = ((void *)(0x00919488u));
  DAT_0097873c = (void *)0x0;
  return;
}


//==== 00008fba00 008fba00_FUN_008fba00 ====
void FUN_008fba00(void);

// decompiled by BatchDecomp @ 008fba00 name=FUN_008fba00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fba00(void)

{
  _DAT_00978728 = ((void *)(0x009194a4u));
  if (DAT_0097872c != (void *)0x0) {
    operator_delete__(DAT_0097872c);
  }
  _DAT_00978728 = ((void *)(0x00919488u));
  DAT_0097872c = (void *)0x0;
  return;
}


//==== 00008fba40 008fba40_FUN_008fba40 ====
void FUN_008fba40(void);

// decompiled by BatchDecomp @ 008fba40 name=FUN_008fba40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fba40(void)

{
  _DAT_00978778 = ((void *)(0x009194a4u));
  if (DAT_0097877c != (void *)0x0) {
    operator_delete__(DAT_0097877c);
  }
  _DAT_00978778 = ((void *)(0x00919488u));
  DAT_0097877c = (void *)0x0;
  return;
}


//==== 00008fba80 008fba80_FUN_008fba80 ====
void FUN_008fba80(void);

// decompiled by BatchDecomp @ 008fba80 name=FUN_008fba80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fba80(void)

{
  _DAT_009786e8 = ((void *)(0x009194a4u));
  if (DAT_009786ec != (void *)0x0) {
    operator_delete__(DAT_009786ec);
  }
  _DAT_009786e8 = ((void *)(0x00919488u));
  DAT_009786ec = (void *)0x0;
  return;
}


//==== 00008fbac0 008fbac0_FUN_008fbac0 ====
void FUN_008fbac0(void);

// decompiled by BatchDecomp @ 008fbac0 name=FUN_008fbac0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fbac0(void)

{
  _DAT_00978768 = ((void *)(0x009194a4u));
  if (DAT_0097876c != (void *)0x0) {
    operator_delete__(DAT_0097876c);
  }
  _DAT_00978768 = ((void *)(0x00919488u));
  DAT_0097876c = (void *)0x0;
  return;
}


//==== 00008fbb00 008fbb00_FUN_008fbb00 ====
void FUN_008fbb00(void);

// decompiled by BatchDecomp @ 008fbb00 name=FUN_008fbb00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fbb00(void)

{
  _DAT_00978718 = ((void *)(0x009194a4u));
  if (DAT_0097871c != (void *)0x0) {
    operator_delete__(DAT_0097871c);
  }
  _DAT_00978718 = ((void *)(0x00919488u));
  DAT_0097871c = (void *)0x0;
  return;
}


//==== 00008fbb40 008fbb40_FUN_008fbb40 ====
void FUN_008fbb40(void);

// decompiled by BatchDecomp @ 008fbb40 name=FUN_008fbb40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fbb40(void)

{
  _DAT_00978708 = ((void *)(0x009194a4u));
  if (DAT_0097870c != (void *)0x0) {
    operator_delete__(DAT_0097870c);
  }
  _DAT_00978708 = ((void *)(0x00919488u));
  DAT_0097870c = (void *)0x0;
  return;
}


//==== 00008fbb80 008fbb80_FUN_008fbb80 ====
void FUN_008fbb80(void);

// decompiled by BatchDecomp @ 008fbb80 name=FUN_008fbb80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fbb80(void)

{
  _DAT_00978788 = ((void *)(0x009194a4u));
  if (DAT_0097878c != (void *)0x0) {
    operator_delete__(DAT_0097878c);
  }
  _DAT_00978788 = ((void *)(0x00919488u));
  DAT_0097878c = (void *)0x0;
  return;
}


//==== 00008fbbc0 008fbbc0_FUN_008fbbc0 ====
void FUN_008fbbc0(void);

// decompiled by BatchDecomp @ 008fbbc0 name=FUN_008fbbc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fbbc0(void)

{
  _DAT_00978748 = ((void *)(0x009194a4u));
  if (DAT_0097874c != (void *)0x0) {
    operator_delete__(DAT_0097874c);
  }
  _DAT_00978748 = ((void *)(0x00919488u));
  DAT_0097874c = (void *)0x0;
  return;
}


//==== 00008fc0a0 008fc0a0_FUN_008fc0a0 ====
void FUN_008fc0a0(void);

// decompiled by BatchDecomp @ 008fc0a0 name=FUN_008fc0a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc0a0(void)

{
  _DAT_00978ef8 = ((void *)(0x009194a4u));
  if (DAT_00978efc != (void *)0x0) {
    operator_delete__(DAT_00978efc);
  }
  _DAT_00978ef8 = ((void *)(0x00919488u));
  DAT_00978efc = (void *)0x0;
  return;
}


//==== 00008fc0e0 008fc0e0_FUN_008fc0e0 ====
void FUN_008fc0e0(void);

// decompiled by BatchDecomp @ 008fc0e0 name=FUN_008fc0e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc0e0(void)

{
  _DAT_00978e98 = ((void *)(0x009194a4u));
  if (DAT_00978e9c != (void *)0x0) {
    operator_delete__(DAT_00978e9c);
  }
  _DAT_00978e98 = ((void *)(0x00919488u));
  DAT_00978e9c = (void *)0x0;
  return;
}


//==== 00008fc120 008fc120_FUN_008fc120 ====
void FUN_008fc120(void);

// decompiled by BatchDecomp @ 008fc120 name=FUN_008fc120 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc120(void)

{
  _DAT_00978ed8 = ((void *)(0x009194a4u));
  if (DAT_00978edc != (void *)0x0) {
    operator_delete__(DAT_00978edc);
  }
  _DAT_00978ed8 = ((void *)(0x00919488u));
  DAT_00978edc = (void *)0x0;
  return;
}


//==== 00008fc160 008fc160_FUN_008fc160 ====
void FUN_008fc160(void);

// decompiled by BatchDecomp @ 008fc160 name=FUN_008fc160 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc160(void)

{
  _DAT_00978ec8 = ((void *)(0x009194a4u));
  if (DAT_00978ecc != (void *)0x0) {
    operator_delete__(DAT_00978ecc);
  }
  _DAT_00978ec8 = ((void *)(0x00919488u));
  DAT_00978ecc = (void *)0x0;
  return;
}


//==== 00008fc1a0 008fc1a0_FUN_008fc1a0 ====
void FUN_008fc1a0(void);

// decompiled by BatchDecomp @ 008fc1a0 name=FUN_008fc1a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc1a0(void)

{
  _DAT_00978f18 = ((void *)(0x009194a4u));
  if (DAT_00978f1c != (void *)0x0) {
    operator_delete__(DAT_00978f1c);
  }
  _DAT_00978f18 = ((void *)(0x00919488u));
  DAT_00978f1c = (void *)0x0;
  return;
}


//==== 00008fc1e0 008fc1e0_FUN_008fc1e0 ====
void FUN_008fc1e0(void);

// decompiled by BatchDecomp @ 008fc1e0 name=FUN_008fc1e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc1e0(void)

{
  _DAT_00978e88 = ((void *)(0x009194a4u));
  if (DAT_00978e8c != (void *)0x0) {
    operator_delete__(DAT_00978e8c);
  }
  _DAT_00978e88 = ((void *)(0x00919488u));
  DAT_00978e8c = (void *)0x0;
  return;
}


//==== 00008fc220 008fc220_FUN_008fc220 ====
void FUN_008fc220(void);

// decompiled by BatchDecomp @ 008fc220 name=FUN_008fc220 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc220(void)

{
  _DAT_00978f08 = ((void *)(0x009194a4u));
  if (DAT_00978f0c != (void *)0x0) {
    operator_delete__(DAT_00978f0c);
  }
  _DAT_00978f08 = ((void *)(0x00919488u));
  DAT_00978f0c = (void *)0x0;
  return;
}


//==== 00008fc260 008fc260_FUN_008fc260 ====
void FUN_008fc260(void);

// decompiled by BatchDecomp @ 008fc260 name=FUN_008fc260 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc260(void)

{
  _DAT_00978eb8 = ((void *)(0x009194a4u));
  if (DAT_00978ebc != (void *)0x0) {
    operator_delete__(DAT_00978ebc);
  }
  _DAT_00978eb8 = ((void *)(0x00919488u));
  DAT_00978ebc = (void *)0x0;
  return;
}


//==== 00008fc2a0 008fc2a0_FUN_008fc2a0 ====
void FUN_008fc2a0(void);

// decompiled by BatchDecomp @ 008fc2a0 name=FUN_008fc2a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc2a0(void)

{
  _DAT_00978ea8 = ((void *)(0x009194a4u));
  if (DAT_00978eac != (void *)0x0) {
    operator_delete__(DAT_00978eac);
  }
  _DAT_00978ea8 = ((void *)(0x00919488u));
  DAT_00978eac = (void *)0x0;
  return;
}


//==== 00008fc2e0 008fc2e0_FUN_008fc2e0 ====
void FUN_008fc2e0(void);

// decompiled by BatchDecomp @ 008fc2e0 name=FUN_008fc2e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc2e0(void)

{
  _DAT_00978f28 = ((void *)(0x009194a4u));
  if (DAT_00978f2c != (void *)0x0) {
    operator_delete__(DAT_00978f2c);
  }
  _DAT_00978f28 = ((void *)(0x00919488u));
  DAT_00978f2c = (void *)0x0;
  return;
}


//==== 00008fc320 008fc320_FUN_008fc320 ====
void FUN_008fc320(void);

// decompiled by BatchDecomp @ 008fc320 name=FUN_008fc320 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc320(void)

{
  _DAT_00978ee8 = ((void *)(0x009194a4u));
  if (DAT_00978eec != (void *)0x0) {
    operator_delete__(DAT_00978eec);
  }
  _DAT_00978ee8 = ((void *)(0x00919488u));
  DAT_00978eec = (void *)0x0;
  return;
}


//==== 00008fc650 008fc650_FUN_008fc650 ====
void FUN_008fc650(void);

// decompiled by BatchDecomp @ 008fc650 name=FUN_008fc650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc650(void)

{
  _DAT_009793e4 = ((void *)(0x009194a4u));
  if (DAT_009793e8 != (void *)0x0) {
    operator_delete__(DAT_009793e8);
  }
  _DAT_009793e4 = ((void *)(0x00919488u));
  DAT_009793e8 = (void *)0x0;
  return;
}


//==== 00008fc690 008fc690_FUN_008fc690 ====
void FUN_008fc690(void);

// decompiled by BatchDecomp @ 008fc690 name=FUN_008fc690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc690(void)

{
  _DAT_009793d4 = ((void *)(0x009194a4u));
  if (DAT_009793d8 != (void *)0x0) {
    operator_delete__(DAT_009793d8);
  }
  _DAT_009793d4 = ((void *)(0x00919488u));
  DAT_009793d8 = (void *)0x0;
  return;
}


//==== 00008fc790 008fc790_FUN_008fc790 ====
void FUN_008fc790(void);

// decompiled by BatchDecomp @ 008fc790 name=FUN_008fc790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc790(void)

{
  _DAT_009794e0 = ((void *)(0x009194a4u));
  if (DAT_009794e4 != (void *)0x0) {
    operator_delete__(DAT_009794e4);
  }
  _DAT_009794e0 = ((void *)(0x00919488u));
  DAT_009794e4 = (void *)0x0;
  return;
}


//==== 00008fc7d0 008fc7d0_FUN_008fc7d0 ====
void FUN_008fc7d0(void);

// decompiled by BatchDecomp @ 008fc7d0 name=FUN_008fc7d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc7d0(void)

{
  _DAT_009794d0 = ((void *)(0x009194a4u));
  if (DAT_009794d4 != (void *)0x0) {
    operator_delete__(DAT_009794d4);
  }
  _DAT_009794d0 = ((void *)(0x00919488u));
  DAT_009794d4 = (void *)0x0;
  return;
}


//==== 00008fc810 008fc810_FUN_008fc810 ====
void FUN_008fc810(void);

// decompiled by BatchDecomp @ 008fc810 name=FUN_008fc810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc810(void)

{
  _DAT_009794c0 = ((void *)(0x009194a4u));
  if (DAT_009794c4 != (void *)0x0) {
    operator_delete__(DAT_009794c4);
  }
  _DAT_009794c0 = ((void *)(0x00919488u));
  DAT_009794c4 = (void *)0x0;
  return;
}


//==== 00008fc850 008fc850_FUN_008fc850 ====
void FUN_008fc850(void);

// decompiled by BatchDecomp @ 008fc850 name=FUN_008fc850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc850(void)

{
  _DAT_009794b0 = ((void *)(0x009194a4u));
  if (DAT_009794b4 != (void *)0x0) {
    operator_delete__(DAT_009794b4);
  }
  _DAT_009794b0 = ((void *)(0x00919488u));
  DAT_009794b4 = (void *)0x0;
  return;
}


//==== 00008fc9d0 008fc9d0_FUN_008fc9d0 ====
void FUN_008fc9d0(void);

// decompiled by BatchDecomp @ 008fc9d0 name=FUN_008fc9d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fc9d0(void)

{
  _DAT_00979e4c = ((void *)(0x009194a4u));
  if (DAT_00979e50 != (void *)0x0) {
    operator_delete__(DAT_00979e50);
  }
  _DAT_00979e4c = ((void *)(0x00919488u));
  DAT_00979e50 = (void *)0x0;
  return;
}


//==== 00008fcaf0 008fcaf0_FUN_008fcaf0 ====
void FUN_008fcaf0(void);

// decompiled by BatchDecomp @ 008fcaf0 name=FUN_008fcaf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fcaf0(void)

{
  _DAT_00979f70 = ((void *)(0x009194a4u));
  if (DAT_00979f74 != (void *)0x0) {
    operator_delete__(DAT_00979f74);
  }
  _DAT_00979f70 = ((void *)(0x00919488u));
  DAT_00979f74 = (void *)0x0;
  return;
}


//==== 00008fcb30 008fcb30_FUN_008fcb30 ====
void FUN_008fcb30(void);

// decompiled by BatchDecomp @ 008fcb30 name=FUN_008fcb30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fcb30(void)

{
  _DAT_00979f60 = ((void *)(0x009194a4u));
  if (DAT_00979f64 != (void *)0x0) {
    operator_delete__(DAT_00979f64);
  }
  _DAT_00979f60 = ((void *)(0x00919488u));
  DAT_00979f64 = (void *)0x0;
  return;
}


//==== 00008fcc10 008fcc10_FUN_008fcc10 ====
void FUN_008fcc10(void);

// decompiled by BatchDecomp @ 008fcc10 name=FUN_008fcc10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fcc10(void)

{
  _DAT_0097a038 = ((void *)(0x009194a4u));
  if (DAT_0097a03c != (void *)0x0) {
    operator_delete__(DAT_0097a03c);
  }
  _DAT_0097a038 = ((void *)(0x00919488u));
  DAT_0097a03c = (void *)0x0;
  return;
}


//==== 00008fcc50 008fcc50_FUN_008fcc50 ====
void FUN_008fcc50(void);

// decompiled by BatchDecomp @ 008fcc50 name=FUN_008fcc50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fcc50(void)

{
  _DAT_0097a028 = ((void *)(0x009194a4u));
  if (DAT_0097a02c != (void *)0x0) {
    operator_delete__(DAT_0097a02c);
  }
  _DAT_0097a028 = ((void *)(0x00919488u));
  DAT_0097a02c = (void *)0x0;
  return;
}


//==== 00008fcc90 008fcc90_FUN_008fcc90 ====
void FUN_008fcc90(void);

// decompiled by BatchDecomp @ 008fcc90 name=FUN_008fcc90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fcc90(void)

{
  _DAT_0097a018 = ((void *)(0x009194a4u));
  if (DAT_0097a01c != (void *)0x0) {
    operator_delete__(DAT_0097a01c);
  }
  _DAT_0097a018 = ((void *)(0x00919488u));
  DAT_0097a01c = (void *)0x0;
  return;
}


//==== 00008fce40 008fce40_FUN_008fce40 ====
void FUN_008fce40(void);

// decompiled by BatchDecomp @ 008fce40 name=FUN_008fce40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fce40(void)

{
  _DAT_0097a320 = ((void *)(0x009194a4u));
  if (DAT_0097a324 != (void *)0x0) {
    operator_delete__(DAT_0097a324);
  }
  _DAT_0097a320 = ((void *)(0x00919488u));
  DAT_0097a324 = (void *)0x0;
  return;
}


//==== 00008fce80 008fce80_FUN_008fce80 ====
void FUN_008fce80(void);

// decompiled by BatchDecomp @ 008fce80 name=FUN_008fce80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fce80(void)

{
  _DAT_0097a310 = ((void *)(0x009194a4u));
  if (DAT_0097a314 != (void *)0x0) {
    operator_delete__(DAT_0097a314);
  }
  _DAT_0097a310 = ((void *)(0x00919488u));
  DAT_0097a314 = (void *)0x0;
  return;
}


//==== 00008fcec0 008fcec0_FUN_008fcec0 ====
void FUN_008fcec0(void);

// decompiled by BatchDecomp @ 008fcec0 name=FUN_008fcec0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fcec0(void)

{
  _DAT_0097a300 = ((void *)(0x009194a4u));
  if (DAT_0097a304 != (void *)0x0) {
    operator_delete__(DAT_0097a304);
  }
  _DAT_0097a300 = ((void *)(0x00919488u));
  DAT_0097a304 = (void *)0x0;
  return;
}


//==== 00008fcf60 008fcf60_FUN_008fcf60 ====
void FUN_008fcf60(void);

// decompiled by BatchDecomp @ 008fcf60 name=FUN_008fcf60 conv=unknown body=49

void FUN_008fcf60(void)

{
  DAT_0097a730 = ((void *)(0x009199e4u));
  if (DAT_0097a734 != (void *)0x0) {
    operator_delete__(DAT_0097a734);
  }
  DAT_0097a730 = ((void *)(0x00919488u));
  DAT_0097a734 = (void *)0x0;
  return;
}


//==== 00008fcfa0 008fcfa0_FUN_008fcfa0 ====
void FUN_008fcfa0(void);

// decompiled by BatchDecomp @ 008fcfa0 name=FUN_008fcfa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fcfa0(void)

{
  _DAT_0097a71c = ((void *)(0x009199e4u));
  if (DAT_0097a720 != (void *)0x0) {
    operator_delete__(DAT_0097a720);
  }
  _DAT_0097a71c = ((void *)(0x00919488u));
  DAT_0097a720 = (void *)0x0;
  return;
}


//==== 00008fd110 008fd110_FUN_008fd110 ====
void FUN_008fd110(void);

// decompiled by BatchDecomp @ 008fd110 name=FUN_008fd110 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd110(void)

{
  _DAT_0097a6d8 = ((void *)(0x009194a4u));
  if (DAT_0097a6dc != (void *)0x0) {
    operator_delete__(DAT_0097a6dc);
  }
  _DAT_0097a6d8 = ((void *)(0x00919488u));
  DAT_0097a6dc = (void *)0x0;
  return;
}


//==== 00008fd150 008fd150_FUN_008fd150 ====
void FUN_008fd150(void);

// decompiled by BatchDecomp @ 008fd150 name=FUN_008fd150 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd150(void)

{
  _DAT_0097a6a8 = ((void *)(0x009194a4u));
  if (DAT_0097a6ac != (void *)0x0) {
    operator_delete__(DAT_0097a6ac);
  }
  _DAT_0097a6a8 = ((void *)(0x00919488u));
  DAT_0097a6ac = (void *)0x0;
  return;
}


//==== 00008fd190 008fd190_FUN_008fd190 ====
void FUN_008fd190(void);

// decompiled by BatchDecomp @ 008fd190 name=FUN_008fd190 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd190(void)

{
  _DAT_0097a6c8 = ((void *)(0x009194a4u));
  if (DAT_0097a6cc != (void *)0x0) {
    operator_delete__(DAT_0097a6cc);
  }
  _DAT_0097a6c8 = ((void *)(0x00919488u));
  DAT_0097a6cc = (void *)0x0;
  return;
}


//==== 00008fd1d0 008fd1d0_FUN_008fd1d0 ====
void FUN_008fd1d0(void);

// decompiled by BatchDecomp @ 008fd1d0 name=FUN_008fd1d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd1d0(void)

{
  _DAT_0097a6b8 = ((void *)(0x009194a4u));
  if (DAT_0097a6bc != (void *)0x0) {
    operator_delete__(DAT_0097a6bc);
  }
  _DAT_0097a6b8 = ((void *)(0x00919488u));
  DAT_0097a6bc = (void *)0x0;
  return;
}


//==== 00008fd330 008fd330_FUN_008fd330 ====
void FUN_008fd330(void);

// decompiled by BatchDecomp @ 008fd330 name=FUN_008fd330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd330(void)

{
  _DAT_0097a790 = ((void *)(0x009194a4u));
  if (DAT_0097a794 != (void *)0x0) {
    operator_delete__(DAT_0097a794);
  }
  _DAT_0097a790 = ((void *)(0x00919488u));
  DAT_0097a794 = (void *)0x0;
  return;
}


//==== 00008fd5d0 008fd5d0_FUN_008fd5d0 ====
void FUN_008fd5d0(void);

// decompiled by BatchDecomp @ 008fd5d0 name=FUN_008fd5d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd5d0(void)

{
  _DAT_0097ac70 = ((void *)(0x009194a4u));
  if (DAT_0097ac74 != (void *)0x0) {
    operator_delete__(DAT_0097ac74);
  }
  _DAT_0097ac70 = ((void *)(0x00919488u));
  DAT_0097ac74 = (void *)0x0;
  return;
}


//==== 00008fd610 008fd610_FUN_008fd610 ====
void FUN_008fd610(void);

// decompiled by BatchDecomp @ 008fd610 name=FUN_008fd610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd610(void)

{
  _DAT_0097ac10 = ((void *)(0x009194a4u));
  if (DAT_0097ac14 != (void *)0x0) {
    operator_delete__(DAT_0097ac14);
  }
  _DAT_0097ac10 = ((void *)(0x00919488u));
  DAT_0097ac14 = (void *)0x0;
  return;
}


//==== 00008fd650 008fd650_FUN_008fd650 ====
void FUN_008fd650(void);

// decompiled by BatchDecomp @ 008fd650 name=FUN_008fd650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd650(void)

{
  _DAT_0097acb0 = ((void *)(0x009194a4u));
  if (DAT_0097acb4 != (void *)0x0) {
    operator_delete__(DAT_0097acb4);
  }
  _DAT_0097acb0 = ((void *)(0x00919488u));
  DAT_0097acb4 = (void *)0x0;
  return;
}


//==== 00008fd690 008fd690_FUN_008fd690 ====
void FUN_008fd690(void);

// decompiled by BatchDecomp @ 008fd690 name=FUN_008fd690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd690(void)

{
  _DAT_0097ac50 = ((void *)(0x009194a4u));
  if (DAT_0097ac54 != (void *)0x0) {
    operator_delete__(DAT_0097ac54);
  }
  _DAT_0097ac50 = ((void *)(0x00919488u));
  DAT_0097ac54 = (void *)0x0;
  return;
}


//==== 00008fd6d0 008fd6d0_FUN_008fd6d0 ====
void FUN_008fd6d0(void);

// decompiled by BatchDecomp @ 008fd6d0 name=FUN_008fd6d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd6d0(void)

{
  _DAT_0097ac40 = ((void *)(0x009194a4u));
  if (DAT_0097ac44 != (void *)0x0) {
    operator_delete__(DAT_0097ac44);
  }
  _DAT_0097ac40 = ((void *)(0x00919488u));
  DAT_0097ac44 = (void *)0x0;
  return;
}


//==== 00008fd710 008fd710_FUN_008fd710 ====
void FUN_008fd710(void);

// decompiled by BatchDecomp @ 008fd710 name=FUN_008fd710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd710(void)

{
  _DAT_0097ac90 = ((void *)(0x009194a4u));
  if (DAT_0097ac94 != (void *)0x0) {
    operator_delete__(DAT_0097ac94);
  }
  _DAT_0097ac90 = ((void *)(0x00919488u));
  DAT_0097ac94 = (void *)0x0;
  return;
}


//==== 00008fd750 008fd750_FUN_008fd750 ====
void FUN_008fd750(void);

// decompiled by BatchDecomp @ 008fd750 name=FUN_008fd750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd750(void)

{
  _DAT_0097ac00 = ((void *)(0x009194a4u));
  if (DAT_0097ac04 != (void *)0x0) {
    operator_delete__(DAT_0097ac04);
  }
  _DAT_0097ac00 = ((void *)(0x00919488u));
  DAT_0097ac04 = (void *)0x0;
  return;
}


//==== 00008fd790 008fd790_FUN_008fd790 ====
void FUN_008fd790(void);

// decompiled by BatchDecomp @ 008fd790 name=FUN_008fd790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd790(void)

{
  _DAT_0097ac80 = ((void *)(0x009194a4u));
  if (DAT_0097ac84 != (void *)0x0) {
    operator_delete__(DAT_0097ac84);
  }
  _DAT_0097ac80 = ((void *)(0x00919488u));
  DAT_0097ac84 = (void *)0x0;
  return;
}


//==== 00008fd7d0 008fd7d0_FUN_008fd7d0 ====
void FUN_008fd7d0(void);

// decompiled by BatchDecomp @ 008fd7d0 name=FUN_008fd7d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd7d0(void)

{
  _DAT_0097ac30 = ((void *)(0x009194a4u));
  if (DAT_0097ac34 != (void *)0x0) {
    operator_delete__(DAT_0097ac34);
  }
  _DAT_0097ac30 = ((void *)(0x00919488u));
  DAT_0097ac34 = (void *)0x0;
  return;
}


//==== 00008fd810 008fd810_FUN_008fd810 ====
void FUN_008fd810(void);

// decompiled by BatchDecomp @ 008fd810 name=FUN_008fd810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd810(void)

{
  _DAT_0097ac20 = ((void *)(0x009194a4u));
  if (DAT_0097ac24 != (void *)0x0) {
    operator_delete__(DAT_0097ac24);
  }
  _DAT_0097ac20 = ((void *)(0x00919488u));
  DAT_0097ac24 = (void *)0x0;
  return;
}


//==== 00008fd850 008fd850_FUN_008fd850 ====
void FUN_008fd850(void);

// decompiled by BatchDecomp @ 008fd850 name=FUN_008fd850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd850(void)

{
  _DAT_0097aca0 = ((void *)(0x009194a4u));
  if (DAT_0097aca4 != (void *)0x0) {
    operator_delete__(DAT_0097aca4);
  }
  _DAT_0097aca0 = ((void *)(0x00919488u));
  DAT_0097aca4 = (void *)0x0;
  return;
}


//==== 00008fd890 008fd890_FUN_008fd890 ====
void FUN_008fd890(void);

// decompiled by BatchDecomp @ 008fd890 name=FUN_008fd890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fd890(void)

{
  _DAT_0097ac60 = ((void *)(0x009194a4u));
  if (DAT_0097ac64 != (void *)0x0) {
    operator_delete__(DAT_0097ac64);
  }
  _DAT_0097ac60 = ((void *)(0x00919488u));
  DAT_0097ac64 = (void *)0x0;
  return;
}


//==== 00008fdbf0 008fdbf0_FUN_008fdbf0 ====
void FUN_008fdbf0(void);

// decompiled by BatchDecomp @ 008fdbf0 name=FUN_008fdbf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdbf0(void)

{
  _DAT_0097af88 = ((void *)(0x009194a4u));
  if (DAT_0097af8c != (void *)0x0) {
    operator_delete__(DAT_0097af8c);
  }
  _DAT_0097af88 = ((void *)(0x00919488u));
  DAT_0097af8c = (void *)0x0;
  return;
}


//==== 00008fdc30 008fdc30_FUN_008fdc30 ====
void FUN_008fdc30(void);

// decompiled by BatchDecomp @ 008fdc30 name=FUN_008fdc30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdc30(void)

{
  _DAT_0097af28 = ((void *)(0x009194a4u));
  if (DAT_0097af2c != (void *)0x0) {
    operator_delete__(DAT_0097af2c);
  }
  _DAT_0097af28 = ((void *)(0x00919488u));
  DAT_0097af2c = (void *)0x0;
  return;
}


//==== 00008fdc70 008fdc70_FUN_008fdc70 ====
void FUN_008fdc70(void);

// decompiled by BatchDecomp @ 008fdc70 name=FUN_008fdc70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdc70(void)

{
  _DAT_0097afc8 = ((void *)(0x009194a4u));
  if (DAT_0097afcc != (void *)0x0) {
    operator_delete__(DAT_0097afcc);
  }
  _DAT_0097afc8 = ((void *)(0x00919488u));
  DAT_0097afcc = (void *)0x0;
  return;
}


//==== 00008fdcb0 008fdcb0_FUN_008fdcb0 ====
void FUN_008fdcb0(void);

// decompiled by BatchDecomp @ 008fdcb0 name=FUN_008fdcb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdcb0(void)

{
  _DAT_0097af68 = ((void *)(0x009194a4u));
  if (DAT_0097af6c != (void *)0x0) {
    operator_delete__(DAT_0097af6c);
  }
  _DAT_0097af68 = ((void *)(0x00919488u));
  DAT_0097af6c = (void *)0x0;
  return;
}


//==== 00008fdcf0 008fdcf0_FUN_008fdcf0 ====
void FUN_008fdcf0(void);

// decompiled by BatchDecomp @ 008fdcf0 name=FUN_008fdcf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdcf0(void)

{
  _DAT_0097af58 = ((void *)(0x009194a4u));
  if (DAT_0097af5c != (void *)0x0) {
    operator_delete__(DAT_0097af5c);
  }
  _DAT_0097af58 = ((void *)(0x00919488u));
  DAT_0097af5c = (void *)0x0;
  return;
}


//==== 00008fdd30 008fdd30_FUN_008fdd30 ====
void FUN_008fdd30(void);

// decompiled by BatchDecomp @ 008fdd30 name=FUN_008fdd30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdd30(void)

{
  _DAT_0097afa8 = ((void *)(0x009194a4u));
  if (DAT_0097afac != (void *)0x0) {
    operator_delete__(DAT_0097afac);
  }
  _DAT_0097afa8 = ((void *)(0x00919488u));
  DAT_0097afac = (void *)0x0;
  return;
}


//==== 00008fdd70 008fdd70_FUN_008fdd70 ====
void FUN_008fdd70(void);

// decompiled by BatchDecomp @ 008fdd70 name=FUN_008fdd70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdd70(void)

{
  _DAT_0097af18 = ((void *)(0x009194a4u));
  if (DAT_0097af1c != (void *)0x0) {
    operator_delete__(DAT_0097af1c);
  }
  _DAT_0097af18 = ((void *)(0x00919488u));
  DAT_0097af1c = (void *)0x0;
  return;
}


//==== 00008fddb0 008fddb0_FUN_008fddb0 ====
void FUN_008fddb0(void);

// decompiled by BatchDecomp @ 008fddb0 name=FUN_008fddb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fddb0(void)

{
  _DAT_0097afd8 = ((void *)(0x009194a4u));
  if (DAT_0097afdc != (void *)0x0) {
    operator_delete__(DAT_0097afdc);
  }
  _DAT_0097afd8 = ((void *)(0x00919488u));
  DAT_0097afdc = (void *)0x0;
  return;
}


//==== 00008fddf0 008fddf0_FUN_008fddf0 ====
void FUN_008fddf0(void);

// decompiled by BatchDecomp @ 008fddf0 name=FUN_008fddf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fddf0(void)

{
  _DAT_0097af98 = ((void *)(0x009194a4u));
  if (DAT_0097af9c != (void *)0x0) {
    operator_delete__(DAT_0097af9c);
  }
  _DAT_0097af98 = ((void *)(0x00919488u));
  DAT_0097af9c = (void *)0x0;
  return;
}


//==== 00008fde30 008fde30_FUN_008fde30 ====
void FUN_008fde30(void);

// decompiled by BatchDecomp @ 008fde30 name=FUN_008fde30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fde30(void)

{
  _DAT_0097af48 = ((void *)(0x009194a4u));
  if (DAT_0097af4c != (void *)0x0) {
    operator_delete__(DAT_0097af4c);
  }
  _DAT_0097af48 = ((void *)(0x00919488u));
  DAT_0097af4c = (void *)0x0;
  return;
}


//==== 00008fde70 008fde70_FUN_008fde70 ====
void FUN_008fde70(void);

// decompiled by BatchDecomp @ 008fde70 name=FUN_008fde70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fde70(void)

{
  _DAT_0097af38 = ((void *)(0x009194a4u));
  if (DAT_0097af3c != (void *)0x0) {
    operator_delete__(DAT_0097af3c);
  }
  _DAT_0097af38 = ((void *)(0x00919488u));
  DAT_0097af3c = (void *)0x0;
  return;
}


//==== 00008fdeb0 008fdeb0_FUN_008fdeb0 ====
void FUN_008fdeb0(void);

// decompiled by BatchDecomp @ 008fdeb0 name=FUN_008fdeb0 conv=unknown body=49

void FUN_008fdeb0(void)

{
  DAT_0097afb8 = ((void *)(0x009194a4u));
  if (DAT_0097afbc != (void *)0x0) {
    operator_delete__(DAT_0097afbc);
  }
  DAT_0097afb8 = ((void *)(0x00919488u));
  DAT_0097afbc = (void *)0x0;
  return;
}


//==== 00008fdef0 008fdef0_FUN_008fdef0 ====
void FUN_008fdef0(void);

// decompiled by BatchDecomp @ 008fdef0 name=FUN_008fdef0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fdef0(void)

{
  _DAT_0097af78 = ((void *)(0x009194a4u));
  if (DAT_0097af7c != (void *)0x0) {
    operator_delete__(DAT_0097af7c);
  }
  _DAT_0097af78 = ((void *)(0x00919488u));
  DAT_0097af7c = (void *)0x0;
  return;
}


//==== 00008fe230 008fe230_FUN_008fe230 ====
void FUN_008fe230(void);

// decompiled by BatchDecomp @ 008fe230 name=FUN_008fe230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe230(void)

{
  _DAT_0097b280 = ((void *)(0x009194a4u));
  if (DAT_0097b284 != (void *)0x0) {
    operator_delete__(DAT_0097b284);
  }
  _DAT_0097b280 = ((void *)(0x00919488u));
  DAT_0097b284 = (void *)0x0;
  return;
}


//==== 00008fe270 008fe270_FUN_008fe270 ====
void FUN_008fe270(void);

// decompiled by BatchDecomp @ 008fe270 name=FUN_008fe270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe270(void)

{
  _DAT_0097b220 = ((void *)(0x009194a4u));
  if (DAT_0097b224 != (void *)0x0) {
    operator_delete__(DAT_0097b224);
  }
  _DAT_0097b220 = ((void *)(0x00919488u));
  DAT_0097b224 = (void *)0x0;
  return;
}


//==== 00008fe2b0 008fe2b0_FUN_008fe2b0 ====
void FUN_008fe2b0(void);

// decompiled by BatchDecomp @ 008fe2b0 name=FUN_008fe2b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe2b0(void)

{
  _DAT_0097b260 = ((void *)(0x009194a4u));
  if (DAT_0097b264 != (void *)0x0) {
    operator_delete__(DAT_0097b264);
  }
  _DAT_0097b260 = ((void *)(0x00919488u));
  DAT_0097b264 = (void *)0x0;
  return;
}


//==== 00008fe2f0 008fe2f0_FUN_008fe2f0 ====
void FUN_008fe2f0(void);

// decompiled by BatchDecomp @ 008fe2f0 name=FUN_008fe2f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe2f0(void)

{
  _DAT_0097b250 = ((void *)(0x009194a4u));
  if (DAT_0097b254 != (void *)0x0) {
    operator_delete__(DAT_0097b254);
  }
  _DAT_0097b250 = ((void *)(0x00919488u));
  DAT_0097b254 = (void *)0x0;
  return;
}


//==== 00008fe330 008fe330_FUN_008fe330 ====
void FUN_008fe330(void);

// decompiled by BatchDecomp @ 008fe330 name=FUN_008fe330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe330(void)

{
  _DAT_0097b2a0 = ((void *)(0x009194a4u));
  if (DAT_0097b2a4 != (void *)0x0) {
    operator_delete__(DAT_0097b2a4);
  }
  _DAT_0097b2a0 = ((void *)(0x00919488u));
  DAT_0097b2a4 = (void *)0x0;
  return;
}


//==== 00008fe370 008fe370_FUN_008fe370 ====
void FUN_008fe370(void);

// decompiled by BatchDecomp @ 008fe370 name=FUN_008fe370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe370(void)

{
  _DAT_0097b210 = ((void *)(0x009194a4u));
  if (DAT_0097b214 != (void *)0x0) {
    operator_delete__(DAT_0097b214);
  }
  _DAT_0097b210 = ((void *)(0x00919488u));
  DAT_0097b214 = (void *)0x0;
  return;
}


//==== 00008fe3b0 008fe3b0_FUN_008fe3b0 ====
void FUN_008fe3b0(void);

// decompiled by BatchDecomp @ 008fe3b0 name=FUN_008fe3b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe3b0(void)

{
  _DAT_0097b290 = ((void *)(0x009194a4u));
  if (DAT_0097b294 != (void *)0x0) {
    operator_delete__(DAT_0097b294);
  }
  _DAT_0097b290 = ((void *)(0x00919488u));
  DAT_0097b294 = (void *)0x0;
  return;
}


//==== 00008fe3f0 008fe3f0_FUN_008fe3f0 ====
void FUN_008fe3f0(void);

// decompiled by BatchDecomp @ 008fe3f0 name=FUN_008fe3f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe3f0(void)

{
  _DAT_0097b240 = ((void *)(0x009194a4u));
  if (DAT_0097b244 != (void *)0x0) {
    operator_delete__(DAT_0097b244);
  }
  _DAT_0097b240 = ((void *)(0x00919488u));
  DAT_0097b244 = (void *)0x0;
  return;
}


//==== 00008fe430 008fe430_FUN_008fe430 ====
void FUN_008fe430(void);

// decompiled by BatchDecomp @ 008fe430 name=FUN_008fe430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe430(void)

{
  _DAT_0097b230 = ((void *)(0x009194a4u));
  if (DAT_0097b234 != (void *)0x0) {
    operator_delete__(DAT_0097b234);
  }
  _DAT_0097b230 = ((void *)(0x00919488u));
  DAT_0097b234 = (void *)0x0;
  return;
}


//==== 00008fe470 008fe470_FUN_008fe470 ====
void FUN_008fe470(void);

// decompiled by BatchDecomp @ 008fe470 name=FUN_008fe470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe470(void)

{
  _DAT_0097b2b0 = ((void *)(0x009194a4u));
  if (DAT_0097b2b4 != (void *)0x0) {
    operator_delete__(DAT_0097b2b4);
  }
  _DAT_0097b2b0 = ((void *)(0x00919488u));
  DAT_0097b2b4 = (void *)0x0;
  return;
}


//==== 00008fe4b0 008fe4b0_FUN_008fe4b0 ====
void FUN_008fe4b0(void);

// decompiled by BatchDecomp @ 008fe4b0 name=FUN_008fe4b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe4b0(void)

{
  _DAT_0097b270 = ((void *)(0x009194a4u));
  if (DAT_0097b274 != (void *)0x0) {
    operator_delete__(DAT_0097b274);
  }
  _DAT_0097b270 = ((void *)(0x00919488u));
  DAT_0097b274 = (void *)0x0;
  return;
}


//==== 00008fe7f0 008fe7f0_FUN_008fe7f0 ====
void FUN_008fe7f0(void);

// decompiled by BatchDecomp @ 008fe7f0 name=FUN_008fe7f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe7f0(void)

{
  _DAT_0097b598 = ((void *)(0x009194a4u));
  if (DAT_0097b59c != (void *)0x0) {
    operator_delete__(DAT_0097b59c);
  }
  _DAT_0097b598 = ((void *)(0x00919488u));
  DAT_0097b59c = (void *)0x0;
  return;
}


//==== 00008fe830 008fe830_FUN_008fe830 ====
void FUN_008fe830(void);

// decompiled by BatchDecomp @ 008fe830 name=FUN_008fe830 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe830(void)

{
  _DAT_0097b518 = ((void *)(0x009194a4u));
  if (DAT_0097b51c != (void *)0x0) {
    operator_delete__(DAT_0097b51c);
  }
  _DAT_0097b518 = ((void *)(0x00919488u));
  DAT_0097b51c = (void *)0x0;
  return;
}


//==== 00008fe870 008fe870_FUN_008fe870 ====
void FUN_008fe870(void);

// decompiled by BatchDecomp @ 008fe870 name=FUN_008fe870 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe870(void)

{
  _DAT_0097b578 = ((void *)(0x009194a4u));
  if (DAT_0097b57c != (void *)0x0) {
    operator_delete__(DAT_0097b57c);
  }
  _DAT_0097b578 = ((void *)(0x00919488u));
  DAT_0097b57c = (void *)0x0;
  return;
}


//==== 00008fe8b0 008fe8b0_FUN_008fe8b0 ====
void FUN_008fe8b0(void);

// decompiled by BatchDecomp @ 008fe8b0 name=FUN_008fe8b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe8b0(void)

{
  _DAT_0097b558 = ((void *)(0x009194a4u));
  if (DAT_0097b55c != (void *)0x0) {
    operator_delete__(DAT_0097b55c);
  }
  _DAT_0097b558 = ((void *)(0x00919488u));
  DAT_0097b55c = (void *)0x0;
  return;
}


//==== 00008fe8f0 008fe8f0_FUN_008fe8f0 ====
void FUN_008fe8f0(void);

// decompiled by BatchDecomp @ 008fe8f0 name=FUN_008fe8f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe8f0(void)

{
  _DAT_0097b548 = ((void *)(0x009194a4u));
  if (DAT_0097b54c != (void *)0x0) {
    operator_delete__(DAT_0097b54c);
  }
  _DAT_0097b548 = ((void *)(0x00919488u));
  DAT_0097b54c = (void *)0x0;
  return;
}


//==== 00008fe930 008fe930_FUN_008fe930 ====
void FUN_008fe930(void);

// decompiled by BatchDecomp @ 008fe930 name=FUN_008fe930 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe930(void)

{
  _DAT_0097b5a8 = ((void *)(0x009194a4u));
  if (DAT_0097b5ac != (void *)0x0) {
    operator_delete__(DAT_0097b5ac);
  }
  _DAT_0097b5a8 = ((void *)(0x00919488u));
  DAT_0097b5ac = (void *)0x0;
  return;
}


//==== 00008fe970 008fe970_FUN_008fe970 ====
void FUN_008fe970(void);

// decompiled by BatchDecomp @ 008fe970 name=FUN_008fe970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe970(void)

{
  _DAT_0097b508 = ((void *)(0x009194a4u));
  if (DAT_0097b50c != (void *)0x0) {
    operator_delete__(DAT_0097b50c);
  }
  _DAT_0097b508 = ((void *)(0x00919488u));
  DAT_0097b50c = (void *)0x0;
  return;
}


//==== 00008fe9b0 008fe9b0_FUN_008fe9b0 ====
void FUN_008fe9b0(void);

// decompiled by BatchDecomp @ 008fe9b0 name=FUN_008fe9b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe9b0(void)

{
  _DAT_0097b5c8 = ((void *)(0x009194a4u));
  if (DAT_0097b5cc != (void *)0x0) {
    operator_delete__(DAT_0097b5cc);
  }
  _DAT_0097b5c8 = ((void *)(0x00919488u));
  DAT_0097b5cc = (void *)0x0;
  return;
}


//==== 00008fe9f0 008fe9f0_FUN_008fe9f0 ====
void FUN_008fe9f0(void);

// decompiled by BatchDecomp @ 008fe9f0 name=FUN_008fe9f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fe9f0(void)

{
  _DAT_0097b568 = ((void *)(0x009194a4u));
  if (DAT_0097b56c != (void *)0x0) {
    operator_delete__(DAT_0097b56c);
  }
  _DAT_0097b568 = ((void *)(0x00919488u));
  DAT_0097b56c = (void *)0x0;
  return;
}


//==== 00008fea30 008fea30_FUN_008fea30 ====
void FUN_008fea30(void);

// decompiled by BatchDecomp @ 008fea30 name=FUN_008fea30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fea30(void)

{
  _DAT_0097b538 = ((void *)(0x009194a4u));
  if (DAT_0097b53c != (void *)0x0) {
    operator_delete__(DAT_0097b53c);
  }
  _DAT_0097b538 = ((void *)(0x00919488u));
  DAT_0097b53c = (void *)0x0;
  return;
}


//==== 00008fea70 008fea70_FUN_008fea70 ====
void FUN_008fea70(void);

// decompiled by BatchDecomp @ 008fea70 name=FUN_008fea70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fea70(void)

{
  _DAT_0097b528 = ((void *)(0x009194a4u));
  if (DAT_0097b52c != (void *)0x0) {
    operator_delete__(DAT_0097b52c);
  }
  _DAT_0097b528 = ((void *)(0x00919488u));
  DAT_0097b52c = (void *)0x0;
  return;
}


//==== 00008feab0 008feab0_FUN_008feab0 ====
void FUN_008feab0(void);

// decompiled by BatchDecomp @ 008feab0 name=FUN_008feab0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008feab0(void)

{
  _DAT_0097b5b8 = ((void *)(0x009194a4u));
  if (DAT_0097b5bc != (void *)0x0) {
    operator_delete__(DAT_0097b5bc);
  }
  _DAT_0097b5b8 = ((void *)(0x00919488u));
  DAT_0097b5bc = (void *)0x0;
  return;
}


//==== 00008feaf0 008feaf0_FUN_008feaf0 ====
void FUN_008feaf0(void);

// decompiled by BatchDecomp @ 008feaf0 name=FUN_008feaf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008feaf0(void)

{
  _DAT_0097b588 = ((void *)(0x009194a4u));
  if (DAT_0097b58c != (void *)0x0) {
    operator_delete__(DAT_0097b58c);
  }
  _DAT_0097b588 = ((void *)(0x00919488u));
  DAT_0097b58c = (void *)0x0;
  return;
}


//==== 00008ff030 008ff030_FUN_008ff030 ====
void FUN_008ff030(void);

// decompiled by BatchDecomp @ 008ff030 name=FUN_008ff030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff030(void)

{
  _DAT_0097bf78 = ((void *)(0x009194a4u));
  if (DAT_0097bf7c != (void *)0x0) {
    operator_delete__(DAT_0097bf7c);
  }
  _DAT_0097bf78 = ((void *)(0x00919488u));
  DAT_0097bf7c = (void *)0x0;
  return;
}


//==== 00008ff070 008ff070_FUN_008ff070 ====
void FUN_008ff070(void);

// decompiled by BatchDecomp @ 008ff070 name=FUN_008ff070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff070(void)

{
  _DAT_0097bfb8 = ((void *)(0x009194a4u));
  if (DAT_0097bfbc != (void *)0x0) {
    operator_delete__(DAT_0097bfbc);
  }
  _DAT_0097bfb8 = ((void *)(0x00919488u));
  DAT_0097bfbc = (void *)0x0;
  return;
}


//==== 00008ff0b0 008ff0b0_FUN_008ff0b0 ====
void FUN_008ff0b0(void);

// decompiled by BatchDecomp @ 008ff0b0 name=FUN_008ff0b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff0b0(void)

{
  _DAT_0097bfa8 = ((void *)(0x009194a4u));
  if (DAT_0097bfac != (void *)0x0) {
    operator_delete__(DAT_0097bfac);
  }
  _DAT_0097bfa8 = ((void *)(0x00919488u));
  DAT_0097bfac = (void *)0x0;
  return;
}


//==== 00008ff0f0 008ff0f0_FUN_008ff0f0 ====
void FUN_008ff0f0(void);

// decompiled by BatchDecomp @ 008ff0f0 name=FUN_008ff0f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff0f0(void)

{
  _DAT_0097bf68 = ((void *)(0x009194a4u));
  if (DAT_0097bf6c != (void *)0x0) {
    operator_delete__(DAT_0097bf6c);
  }
  _DAT_0097bf68 = ((void *)(0x00919488u));
  DAT_0097bf6c = (void *)0x0;
  return;
}


//==== 00008ff130 008ff130_FUN_008ff130 ====
void FUN_008ff130(void);

// decompiled by BatchDecomp @ 008ff130 name=FUN_008ff130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff130(void)

{
  _DAT_0097bfc8 = ((void *)(0x009194a4u));
  if (DAT_0097bfcc != (void *)0x0) {
    operator_delete__(DAT_0097bfcc);
  }
  _DAT_0097bfc8 = ((void *)(0x00919488u));
  DAT_0097bfcc = (void *)0x0;
  return;
}


//==== 00008ff170 008ff170_FUN_008ff170 ====
void FUN_008ff170(void);

// decompiled by BatchDecomp @ 008ff170 name=FUN_008ff170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff170(void)

{
  _DAT_0097bf98 = ((void *)(0x009194a4u));
  if (DAT_0097bf9c != (void *)0x0) {
    operator_delete__(DAT_0097bf9c);
  }
  _DAT_0097bf98 = ((void *)(0x00919488u));
  DAT_0097bf9c = (void *)0x0;
  return;
}


//==== 00008ff1b0 008ff1b0_FUN_008ff1b0 ====
void FUN_008ff1b0(void);

// decompiled by BatchDecomp @ 008ff1b0 name=FUN_008ff1b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff1b0(void)

{
  _DAT_0097bf88 = ((void *)(0x009194a4u));
  if (DAT_0097bf8c != (void *)0x0) {
    operator_delete__(DAT_0097bf8c);
  }
  _DAT_0097bf88 = ((void *)(0x00919488u));
  DAT_0097bf8c = (void *)0x0;
  return;
}


//==== 00008ff970 008ff970_FUN_008ff970 ====
void FUN_008ff970(void);

// decompiled by BatchDecomp @ 008ff970 name=FUN_008ff970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff970(void)

{
  _DAT_0097ce98 = ((void *)(0x009194a4u));
  if (DAT_0097ce9c != (void *)0x0) {
    operator_delete__(DAT_0097ce9c);
  }
  _DAT_0097ce98 = ((void *)(0x00919488u));
  DAT_0097ce9c = (void *)0x0;
  return;
}


//==== 00008ff9b0 008ff9b0_FUN_008ff9b0 ====
void FUN_008ff9b0(void);

// decompiled by BatchDecomp @ 008ff9b0 name=FUN_008ff9b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff9b0(void)

{
  _DAT_0097ce78 = ((void *)(0x009194a4u));
  if (DAT_0097ce7c != (void *)0x0) {
    operator_delete__(DAT_0097ce7c);
  }
  _DAT_0097ce78 = ((void *)(0x00919488u));
  DAT_0097ce7c = (void *)0x0;
  return;
}


//==== 00008ff9f0 008ff9f0_FUN_008ff9f0 ====
void FUN_008ff9f0(void);

// decompiled by BatchDecomp @ 008ff9f0 name=FUN_008ff9f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ff9f0(void)

{
  _DAT_0097ce88 = ((void *)(0x009194a4u));
  if (DAT_0097ce8c != (void *)0x0) {
    operator_delete__(DAT_0097ce8c);
  }
  _DAT_0097ce88 = ((void *)(0x00919488u));
  DAT_0097ce8c = (void *)0x0;
  return;
}


//==== 00008ffc50 008ffc50_FUN_008ffc50 ====
void FUN_008ffc50(void);

// decompiled by BatchDecomp @ 008ffc50 name=FUN_008ffc50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffc50(void)

{
  _DAT_0097d8b0 = ((void *)(0x009194a4u));
  if (DAT_0097d8b4 != (void *)0x0) {
    operator_delete__(DAT_0097d8b4);
  }
  _DAT_0097d8b0 = ((void *)(0x00919488u));
  DAT_0097d8b4 = (void *)0x0;
  return;
}


//==== 00008ffc90 008ffc90_FUN_008ffc90 ====
void FUN_008ffc90(void);

// decompiled by BatchDecomp @ 008ffc90 name=FUN_008ffc90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffc90(void)

{
  _DAT_0097d880 = ((void *)(0x009194a4u));
  if (DAT_0097d884 != (void *)0x0) {
    operator_delete__(DAT_0097d884);
  }
  _DAT_0097d880 = ((void *)(0x00919488u));
  DAT_0097d884 = (void *)0x0;
  return;
}


//==== 00008ffcd0 008ffcd0_FUN_008ffcd0 ====
void FUN_008ffcd0(void);

// decompiled by BatchDecomp @ 008ffcd0 name=FUN_008ffcd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffcd0(void)

{
  _DAT_0097d8f0 = ((void *)(0x009194a4u));
  if (DAT_0097d8f4 != (void *)0x0) {
    operator_delete__(DAT_0097d8f4);
  }
  _DAT_0097d8f0 = ((void *)(0x00919488u));
  DAT_0097d8f4 = (void *)0x0;
  return;
}


//==== 00008ffd10 008ffd10_FUN_008ffd10 ====
void FUN_008ffd10(void);

// decompiled by BatchDecomp @ 008ffd10 name=FUN_008ffd10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffd10(void)

{
  _DAT_0097d890 = ((void *)(0x009194a4u));
  if (DAT_0097d894 != (void *)0x0) {
    operator_delete__(DAT_0097d894);
  }
  _DAT_0097d890 = ((void *)(0x00919488u));
  DAT_0097d894 = (void *)0x0;
  return;
}


//==== 00008ffd50 008ffd50_FUN_008ffd50 ====
void FUN_008ffd50(void);

// decompiled by BatchDecomp @ 008ffd50 name=FUN_008ffd50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffd50(void)

{
  _DAT_0097d870 = ((void *)(0x009194a4u));
  if (DAT_0097d874 != (void *)0x0) {
    operator_delete__(DAT_0097d874);
  }
  _DAT_0097d870 = ((void *)(0x00919488u));
  DAT_0097d874 = (void *)0x0;
  return;
}


//==== 00008ffd90 008ffd90_FUN_008ffd90 ====
void FUN_008ffd90(void);

// decompiled by BatchDecomp @ 008ffd90 name=FUN_008ffd90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffd90(void)

{
  _DAT_0097d8d0 = ((void *)(0x009194a4u));
  if (DAT_0097d8d4 != (void *)0x0) {
    operator_delete__(DAT_0097d8d4);
  }
  _DAT_0097d8d0 = ((void *)(0x00919488u));
  DAT_0097d8d4 = (void *)0x0;
  return;
}


//==== 00008ffdd0 008ffdd0_FUN_008ffdd0 ====
void FUN_008ffdd0(void);

// decompiled by BatchDecomp @ 008ffdd0 name=FUN_008ffdd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffdd0(void)

{
  _DAT_0097d860 = ((void *)(0x009194a4u));
  if (DAT_0097d864 != (void *)0x0) {
    operator_delete__(DAT_0097d864);
  }
  _DAT_0097d860 = ((void *)(0x00919488u));
  DAT_0097d864 = (void *)0x0;
  return;
}


//==== 00008ffe10 008ffe10_FUN_008ffe10 ====
void FUN_008ffe10(void);

// decompiled by BatchDecomp @ 008ffe10 name=FUN_008ffe10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffe10(void)

{
  _DAT_0097d8c0 = ((void *)(0x009194a4u));
  if (DAT_0097d8c4 != (void *)0x0) {
    operator_delete__(DAT_0097d8c4);
  }
  _DAT_0097d8c0 = ((void *)(0x00919488u));
  DAT_0097d8c4 = (void *)0x0;
  return;
}


//==== 00008ffe50 008ffe50_FUN_008ffe50 ====
void FUN_008ffe50(void);

// decompiled by BatchDecomp @ 008ffe50 name=FUN_008ffe50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffe50(void)

{
  _DAT_0097d850 = ((void *)(0x009194a4u));
  if (DAT_0097d854 != (void *)0x0) {
    operator_delete__(DAT_0097d854);
  }
  _DAT_0097d850 = ((void *)(0x00919488u));
  DAT_0097d854 = (void *)0x0;
  return;
}


//==== 00008ffe90 008ffe90_FUN_008ffe90 ====
void FUN_008ffe90(void);

// decompiled by BatchDecomp @ 008ffe90 name=FUN_008ffe90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffe90(void)

{
  _DAT_0097d840 = ((void *)(0x009194a4u));
  if (DAT_0097d844 != (void *)0x0) {
    operator_delete__(DAT_0097d844);
  }
  _DAT_0097d840 = ((void *)(0x00919488u));
  DAT_0097d844 = (void *)0x0;
  return;
}


//==== 00008ffed0 008ffed0_FUN_008ffed0 ====
void FUN_008ffed0(void);

// decompiled by BatchDecomp @ 008ffed0 name=FUN_008ffed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008ffed0(void)

{
  _DAT_0097d8e0 = ((void *)(0x009194a4u));
  if (DAT_0097d8e4 != (void *)0x0) {
    operator_delete__(DAT_0097d8e4);
  }
  _DAT_0097d8e0 = ((void *)(0x00919488u));
  DAT_0097d8e4 = (void *)0x0;
  return;
}


//==== 00008fff10 008fff10_FUN_008fff10 ====
void FUN_008fff10(void);

// decompiled by BatchDecomp @ 008fff10 name=FUN_008fff10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008fff10(void)

{
  _DAT_0097d8a0 = ((void *)(0x009194a4u));
  if (DAT_0097d8a4 != (void *)0x0) {
    operator_delete__(DAT_0097d8a4);
  }
  _DAT_0097d8a0 = ((void *)(0x00919488u));
  DAT_0097d8a4 = (void *)0x0;
  return;
}


//==== 0000900410 00900410_FUN_00900410 ====
void FUN_00900410(void);

// decompiled by BatchDecomp @ 00900410 name=FUN_00900410 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900410(void)

{
  _DAT_0097db20 = ((void *)(0x009194a4u));
  if (DAT_0097db24 != (void *)0x0) {
    operator_delete__(DAT_0097db24);
  }
  _DAT_0097db20 = ((void *)(0x00919488u));
  DAT_0097db24 = (void *)0x0;
  return;
}


//==== 0000900450 00900450_FUN_00900450 ====
void FUN_00900450(void);

// decompiled by BatchDecomp @ 00900450 name=FUN_00900450 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900450(void)

{
  _DAT_0097db70 = ((void *)(0x009194a4u));
  if (DAT_0097db74 != (void *)0x0) {
    operator_delete__(DAT_0097db74);
  }
  _DAT_0097db70 = ((void *)(0x00919488u));
  DAT_0097db74 = (void *)0x0;
  return;
}


//==== 0000900490 00900490_FUN_00900490 ====
void FUN_00900490(void);

// decompiled by BatchDecomp @ 00900490 name=FUN_00900490 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900490(void)

{
  _DAT_0097db50 = ((void *)(0x009194a4u));
  if (DAT_0097db54 != (void *)0x0) {
    operator_delete__(DAT_0097db54);
  }
  _DAT_0097db50 = ((void *)(0x00919488u));
  DAT_0097db54 = (void *)0x0;
  return;
}


//==== 00009004d0 009004d0_FUN_009004d0 ====
void FUN_009004d0(void);

// decompiled by BatchDecomp @ 009004d0 name=FUN_009004d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009004d0(void)

{
  _DAT_0097db10 = ((void *)(0x009194a4u));
  if (DAT_0097db14 != (void *)0x0) {
    operator_delete__(DAT_0097db14);
  }
  _DAT_0097db10 = ((void *)(0x00919488u));
  DAT_0097db14 = (void *)0x0;
  return;
}


//==== 0000900510 00900510_FUN_00900510 ====
void FUN_00900510(void);

// decompiled by BatchDecomp @ 00900510 name=FUN_00900510 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900510(void)

{
  _DAT_0097db00 = ((void *)(0x009194a4u));
  if (DAT_0097db04 != (void *)0x0) {
    operator_delete__(DAT_0097db04);
  }
  _DAT_0097db00 = ((void *)(0x00919488u));
  DAT_0097db04 = (void *)0x0;
  return;
}


//==== 0000900550 00900550_FUN_00900550 ====
void FUN_00900550(void);

// decompiled by BatchDecomp @ 00900550 name=FUN_00900550 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900550(void)

{
  _DAT_0097db80 = ((void *)(0x009194a4u));
  if (DAT_0097db84 != (void *)0x0) {
    operator_delete__(DAT_0097db84);
  }
  _DAT_0097db80 = ((void *)(0x00919488u));
  DAT_0097db84 = (void *)0x0;
  return;
}


//==== 0000900590 00900590_FUN_00900590 ====
void FUN_00900590(void);

// decompiled by BatchDecomp @ 00900590 name=FUN_00900590 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900590(void)

{
  _DAT_0097db60 = ((void *)(0x009194a4u));
  if (DAT_0097db64 != (void *)0x0) {
    operator_delete__(DAT_0097db64);
  }
  _DAT_0097db60 = ((void *)(0x00919488u));
  DAT_0097db64 = (void *)0x0;
  return;
}


//==== 00009005d0 009005d0_FUN_009005d0 ====
void FUN_009005d0(void);

// decompiled by BatchDecomp @ 009005d0 name=FUN_009005d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009005d0(void)

{
  _DAT_0097db40 = ((void *)(0x009194a4u));
  if (DAT_0097db44 != (void *)0x0) {
    operator_delete__(DAT_0097db44);
  }
  _DAT_0097db40 = ((void *)(0x00919488u));
  DAT_0097db44 = (void *)0x0;
  return;
}


//==== 0000900610 00900610_FUN_00900610 ====
void FUN_00900610(void);

// decompiled by BatchDecomp @ 00900610 name=FUN_00900610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900610(void)

{
  _DAT_0097db30 = ((void *)(0x009194a4u));
  if (DAT_0097db34 != (void *)0x0) {
    operator_delete__(DAT_0097db34);
  }
  _DAT_0097db30 = ((void *)(0x00919488u));
  DAT_0097db34 = (void *)0x0;
  return;
}


//==== 0000900dd0 00900dd0_FUN_00900dd0 ====
void FUN_00900dd0(void);

// decompiled by BatchDecomp @ 00900dd0 name=FUN_00900dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900dd0(void)

{
  _DAT_0097fc34 = ((void *)(0x009194a4u));
  if (DAT_0097fc38 != (void *)0x0) {
    operator_delete__(DAT_0097fc38);
  }
  _DAT_0097fc34 = ((void *)(0x00919488u));
  DAT_0097fc38 = (void *)0x0;
  return;
}


//==== 0000900e10 00900e10_FUN_00900e10 ====
void FUN_00900e10(void);

// decompiled by BatchDecomp @ 00900e10 name=FUN_00900e10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900e10(void)

{
  _DAT_0097fbc4 = ((void *)(0x009194a4u));
  if (DAT_0097fbc8 != (void *)0x0) {
    operator_delete__(DAT_0097fbc8);
  }
  _DAT_0097fbc4 = ((void *)(0x00919488u));
  DAT_0097fbc8 = (void *)0x0;
  return;
}


//==== 0000900e50 00900e50_FUN_00900e50 ====
void FUN_00900e50(void);

// decompiled by BatchDecomp @ 00900e50 name=FUN_00900e50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900e50(void)

{
  _DAT_0097fc04 = ((void *)(0x009194a4u));
  if (DAT_0097fc08 != (void *)0x0) {
    operator_delete__(DAT_0097fc08);
  }
  _DAT_0097fc04 = ((void *)(0x00919488u));
  DAT_0097fc08 = (void *)0x0;
  return;
}


//==== 0000900e90 00900e90_FUN_00900e90 ====
void FUN_00900e90(void);

// decompiled by BatchDecomp @ 00900e90 name=FUN_00900e90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900e90(void)

{
  _DAT_0097fbf4 = ((void *)(0x009194a4u));
  if (DAT_0097fbf8 != (void *)0x0) {
    operator_delete__(DAT_0097fbf8);
  }
  _DAT_0097fbf4 = ((void *)(0x00919488u));
  DAT_0097fbf8 = (void *)0x0;
  return;
}


//==== 0000900ed0 00900ed0_FUN_00900ed0 ====
void FUN_00900ed0(void);

// decompiled by BatchDecomp @ 00900ed0 name=FUN_00900ed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900ed0(void)

{
  _DAT_0097fc44 = ((void *)(0x009194a4u));
  if (DAT_0097fc48 != (void *)0x0) {
    operator_delete__(DAT_0097fc48);
  }
  _DAT_0097fc44 = ((void *)(0x00919488u));
  DAT_0097fc48 = (void *)0x0;
  return;
}


//==== 0000900f10 00900f10_FUN_00900f10 ====
void FUN_00900f10(void);

// decompiled by BatchDecomp @ 00900f10 name=FUN_00900f10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900f10(void)

{
  _DAT_0097fbb4 = ((void *)(0x009194a4u));
  if (DAT_0097fbb8 != (void *)0x0) {
    operator_delete__(DAT_0097fbb8);
  }
  _DAT_0097fbb4 = ((void *)(0x00919488u));
  DAT_0097fbb8 = (void *)0x0;
  return;
}


//==== 0000900f50 00900f50_FUN_00900f50 ====
void FUN_00900f50(void);

// decompiled by BatchDecomp @ 00900f50 name=FUN_00900f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900f50(void)

{
  _DAT_0097fc14 = ((void *)(0x009194a4u));
  if (DAT_0097fc18 != (void *)0x0) {
    operator_delete__(DAT_0097fc18);
  }
  _DAT_0097fc14 = ((void *)(0x00919488u));
  DAT_0097fc18 = (void *)0x0;
  return;
}


//==== 0000900f90 00900f90_FUN_00900f90 ====
void FUN_00900f90(void);

// decompiled by BatchDecomp @ 00900f90 name=FUN_00900f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900f90(void)

{
  _DAT_0097fbe4 = ((void *)(0x009194a4u));
  if (DAT_0097fbe8 != (void *)0x0) {
    operator_delete__(DAT_0097fbe8);
  }
  _DAT_0097fbe4 = ((void *)(0x00919488u));
  DAT_0097fbe8 = (void *)0x0;
  return;
}


//==== 0000900fd0 00900fd0_FUN_00900fd0 ====
void FUN_00900fd0(void);

// decompiled by BatchDecomp @ 00900fd0 name=FUN_00900fd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00900fd0(void)

{
  _DAT_0097fbd4 = ((void *)(0x009194a4u));
  if (DAT_0097fbd8 != (void *)0x0) {
    operator_delete__(DAT_0097fbd8);
  }
  _DAT_0097fbd4 = ((void *)(0x00919488u));
  DAT_0097fbd8 = (void *)0x0;
  return;
}


//==== 0000901010 00901010_FUN_00901010 ====
void FUN_00901010(void);

// decompiled by BatchDecomp @ 00901010 name=FUN_00901010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901010(void)

{
  _DAT_0097fc54 = ((void *)(0x009194a4u));
  if (DAT_0097fc58 != (void *)0x0) {
    operator_delete__(DAT_0097fc58);
  }
  _DAT_0097fc54 = ((void *)(0x00919488u));
  DAT_0097fc58 = (void *)0x0;
  return;
}


//==== 0000901050 00901050_FUN_00901050 ====
void FUN_00901050(void);

// decompiled by BatchDecomp @ 00901050 name=FUN_00901050 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901050(void)

{
  _DAT_0097fc24 = ((void *)(0x009194a4u));
  if (DAT_0097fc28 != (void *)0x0) {
    operator_delete__(DAT_0097fc28);
  }
  _DAT_0097fc24 = ((void *)(0x00919488u));
  DAT_0097fc28 = (void *)0x0;
  return;
}


//==== 00009013b0 009013b0_FUN_009013b0 ====
void FUN_009013b0(void);

// decompiled by BatchDecomp @ 009013b0 name=FUN_009013b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009013b0(void)

{
  _DAT_0097ff50 = ((void *)(0x009194a4u));
  if (DAT_0097ff54 != (void *)0x0) {
    operator_delete__(DAT_0097ff54);
  }
  _DAT_0097ff50 = ((void *)(0x00919488u));
  DAT_0097ff54 = (void *)0x0;
  return;
}


//==== 00009013f0 009013f0_FUN_009013f0 ====
void FUN_009013f0(void);

// decompiled by BatchDecomp @ 009013f0 name=FUN_009013f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009013f0(void)

{
  _DAT_0097ff10 = ((void *)(0x009194a4u));
  if (DAT_0097ff14 != (void *)0x0) {
    operator_delete__(DAT_0097ff14);
  }
  _DAT_0097ff10 = ((void *)(0x00919488u));
  DAT_0097ff14 = (void *)0x0;
  return;
}


//==== 0000901430 00901430_FUN_00901430 ====
void FUN_00901430(void);

// decompiled by BatchDecomp @ 00901430 name=FUN_00901430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901430(void)

{
  _DAT_0097ff80 = ((void *)(0x009194a4u));
  if (DAT_0097ff84 != (void *)0x0) {
    operator_delete__(DAT_0097ff84);
  }
  _DAT_0097ff80 = ((void *)(0x00919488u));
  DAT_0097ff84 = (void *)0x0;
  return;
}


//==== 0000901470 00901470_FUN_00901470 ====
void FUN_00901470(void);

// decompiled by BatchDecomp @ 00901470 name=FUN_00901470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901470(void)

{
  _DAT_0097ff20 = ((void *)(0x009194a4u));
  if (DAT_0097ff24 != (void *)0x0) {
    operator_delete__(DAT_0097ff24);
  }
  _DAT_0097ff20 = ((void *)(0x00919488u));
  DAT_0097ff24 = (void *)0x0;
  return;
}


//==== 00009014b0 009014b0_FUN_009014b0 ====
void FUN_009014b0(void);

// decompiled by BatchDecomp @ 009014b0 name=FUN_009014b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009014b0(void)

{
  _DAT_0097ff00 = ((void *)(0x009194a4u));
  if (DAT_0097ff04 != (void *)0x0) {
    operator_delete__(DAT_0097ff04);
  }
  _DAT_0097ff00 = ((void *)(0x00919488u));
  DAT_0097ff04 = (void *)0x0;
  return;
}


//==== 00009014f0 009014f0_FUN_009014f0 ====
void FUN_009014f0(void);

// decompiled by BatchDecomp @ 009014f0 name=FUN_009014f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009014f0(void)

{
  _DAT_0097ff60 = ((void *)(0x009194a4u));
  if (DAT_0097ff64 != (void *)0x0) {
    operator_delete__(DAT_0097ff64);
  }
  _DAT_0097ff60 = ((void *)(0x00919488u));
  DAT_0097ff64 = (void *)0x0;
  return;
}


//==== 0000901530 00901530_FUN_00901530 ====
void FUN_00901530(void);

// decompiled by BatchDecomp @ 00901530 name=FUN_00901530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901530(void)

{
  _DAT_0097fef0 = ((void *)(0x009194a4u));
  if (DAT_0097fef4 != (void *)0x0) {
    operator_delete__(DAT_0097fef4);
  }
  _DAT_0097fef0 = ((void *)(0x00919488u));
  DAT_0097fef4 = (void *)0x0;
  return;
}


//==== 0000901570 00901570_FUN_00901570 ====
void FUN_00901570(void);

// decompiled by BatchDecomp @ 00901570 name=FUN_00901570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901570(void)

{
  _DAT_0097ff90 = ((void *)(0x009194a4u));
  if (DAT_0097ff94 != (void *)0x0) {
    operator_delete__(DAT_0097ff94);
  }
  _DAT_0097ff90 = ((void *)(0x00919488u));
  DAT_0097ff94 = (void *)0x0;
  return;
}


//==== 00009015b0 009015b0_FUN_009015b0 ====
void FUN_009015b0(void);

// decompiled by BatchDecomp @ 009015b0 name=FUN_009015b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009015b0(void)

{
  _DAT_0097ff30 = ((void *)(0x009194a4u));
  if (DAT_0097ff34 != (void *)0x0) {
    operator_delete__(DAT_0097ff34);
  }
  _DAT_0097ff30 = ((void *)(0x00919488u));
  DAT_0097ff34 = (void *)0x0;
  return;
}


//==== 00009015f0 009015f0_FUN_009015f0 ====
void FUN_009015f0(void);

// decompiled by BatchDecomp @ 009015f0 name=FUN_009015f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009015f0(void)

{
  _DAT_0097fee0 = ((void *)(0x009194a4u));
  if (DAT_0097fee4 != (void *)0x0) {
    operator_delete__(DAT_0097fee4);
  }
  _DAT_0097fee0 = ((void *)(0x00919488u));
  DAT_0097fee4 = (void *)0x0;
  return;
}


//==== 0000901630 00901630_FUN_00901630 ====
void FUN_00901630(void);

// decompiled by BatchDecomp @ 00901630 name=FUN_00901630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901630(void)

{
  _DAT_0097fed0 = ((void *)(0x009194a4u));
  if (DAT_0097fed4 != (void *)0x0) {
    operator_delete__(DAT_0097fed4);
  }
  _DAT_0097fed0 = ((void *)(0x00919488u));
  DAT_0097fed4 = (void *)0x0;
  return;
}


//==== 0000901670 00901670_FUN_00901670 ====
void FUN_00901670(void);

// decompiled by BatchDecomp @ 00901670 name=FUN_00901670 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901670(void)

{
  _DAT_0097ff70 = ((void *)(0x009194a4u));
  if (DAT_0097ff74 != (void *)0x0) {
    operator_delete__(DAT_0097ff74);
  }
  _DAT_0097ff70 = ((void *)(0x00919488u));
  DAT_0097ff74 = (void *)0x0;
  return;
}


//==== 00009016b0 009016b0_FUN_009016b0 ====
void FUN_009016b0(void);

// decompiled by BatchDecomp @ 009016b0 name=FUN_009016b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009016b0(void)

{
  _DAT_0097ffa0 = ((void *)(0x009194a4u));
  if (DAT_0097ffa4 != (void *)0x0) {
    operator_delete__(DAT_0097ffa4);
  }
  _DAT_0097ffa0 = ((void *)(0x00919488u));
  DAT_0097ffa4 = (void *)0x0;
  return;
}


//==== 00009016f0 009016f0_FUN_009016f0 ====
void FUN_009016f0(void);

// decompiled by BatchDecomp @ 009016f0 name=FUN_009016f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009016f0(void)

{
  _DAT_0097ff40 = ((void *)(0x009194a4u));
  if (DAT_0097ff44 != (void *)0x0) {
    operator_delete__(DAT_0097ff44);
  }
  _DAT_0097ff40 = ((void *)(0x00919488u));
  DAT_0097ff44 = (void *)0x0;
  return;
}


//==== 0000901a10 00901a10_FUN_00901a10 ====
void FUN_00901a10(void);

// decompiled by BatchDecomp @ 00901a10 name=FUN_00901a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901a10(void)

{
  _DAT_00980224 = ((void *)(0x009194a4u));
  if (DAT_00980228 != (void *)0x0) {
    operator_delete__(DAT_00980228);
  }
  _DAT_00980224 = ((void *)(0x00919488u));
  DAT_00980228 = (void *)0x0;
  return;
}


//==== 0000901a50 00901a50_FUN_00901a50 ====
void FUN_00901a50(void);

// decompiled by BatchDecomp @ 00901a50 name=FUN_00901a50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901a50(void)

{
  _DAT_009801c4 = ((void *)(0x009194a4u));
  if (DAT_009801c8 != (void *)0x0) {
    operator_delete__(DAT_009801c8);
  }
  _DAT_009801c4 = ((void *)(0x00919488u));
  DAT_009801c8 = (void *)0x0;
  return;
}


//==== 0000901a90 00901a90_FUN_00901a90 ====
void FUN_00901a90(void);

// decompiled by BatchDecomp @ 00901a90 name=FUN_00901a90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901a90(void)

{
  _DAT_009801f4 = ((void *)(0x009194a4u));
  if (DAT_009801f8 != (void *)0x0) {
    operator_delete__(DAT_009801f8);
  }
  _DAT_009801f4 = ((void *)(0x00919488u));
  DAT_009801f8 = (void *)0x0;
  return;
}


//==== 0000901ad0 00901ad0_FUN_00901ad0 ====
void FUN_00901ad0(void);

// decompiled by BatchDecomp @ 00901ad0 name=FUN_00901ad0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901ad0(void)

{
  _DAT_009801b4 = ((void *)(0x009194a4u));
  if (DAT_009801b8 != (void *)0x0) {
    operator_delete__(DAT_009801b8);
  }
  _DAT_009801b4 = ((void *)(0x00919488u));
  DAT_009801b8 = (void *)0x0;
  return;
}


//==== 0000901b10 00901b10_FUN_00901b10 ====
void FUN_00901b10(void);

// decompiled by BatchDecomp @ 00901b10 name=FUN_00901b10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901b10(void)

{
  _DAT_009801a4 = ((void *)(0x009194a4u));
  if (DAT_009801a8 != (void *)0x0) {
    operator_delete__(DAT_009801a8);
  }
  _DAT_009801a4 = ((void *)(0x00919488u));
  DAT_009801a8 = (void *)0x0;
  return;
}


//==== 0000901b50 00901b50_FUN_00901b50 ====
void FUN_00901b50(void);

// decompiled by BatchDecomp @ 00901b50 name=FUN_00901b50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901b50(void)

{
  _DAT_00980204 = ((void *)(0x009194a4u));
  if (DAT_00980208 != (void *)0x0) {
    operator_delete__(DAT_00980208);
  }
  _DAT_00980204 = ((void *)(0x00919488u));
  DAT_00980208 = (void *)0x0;
  return;
}


//==== 0000901b90 00901b90_FUN_00901b90 ====
void FUN_00901b90(void);

// decompiled by BatchDecomp @ 00901b90 name=FUN_00901b90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901b90(void)

{
  _DAT_009801e4 = ((void *)(0x009194a4u));
  if (DAT_009801e8 != (void *)0x0) {
    operator_delete__(DAT_009801e8);
  }
  _DAT_009801e4 = ((void *)(0x00919488u));
  DAT_009801e8 = (void *)0x0;
  return;
}


//==== 0000901bd0 00901bd0_FUN_00901bd0 ====
void FUN_00901bd0(void);

// decompiled by BatchDecomp @ 00901bd0 name=FUN_00901bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901bd0(void)

{
  _DAT_009801d4 = ((void *)(0x009194a4u));
  if (DAT_009801d8 != (void *)0x0) {
    operator_delete__(DAT_009801d8);
  }
  _DAT_009801d4 = ((void *)(0x00919488u));
  DAT_009801d8 = (void *)0x0;
  return;
}


//==== 0000901c10 00901c10_FUN_00901c10 ====
void FUN_00901c10(void);

// decompiled by BatchDecomp @ 00901c10 name=FUN_00901c10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901c10(void)

{
  _DAT_00980214 = ((void *)(0x009194a4u));
  if (DAT_00980218 != (void *)0x0) {
    operator_delete__(DAT_00980218);
  }
  _DAT_00980214 = ((void *)(0x00919488u));
  DAT_00980218 = (void *)0x0;
  return;
}


//==== 0000901e90 00901e90_FUN_00901e90 ====
void FUN_00901e90(void);

// decompiled by BatchDecomp @ 00901e90 name=FUN_00901e90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901e90(void)

{
  _DAT_00980460 = ((void *)(0x009194a4u));
  if (DAT_00980464 != (void *)0x0) {
    operator_delete__(DAT_00980464);
  }
  _DAT_00980460 = ((void *)(0x00919488u));
  DAT_00980464 = (void *)0x0;
  return;
}


//==== 0000901ed0 00901ed0_FUN_00901ed0 ====
void FUN_00901ed0(void);

// decompiled by BatchDecomp @ 00901ed0 name=FUN_00901ed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901ed0(void)

{
  _DAT_009803f0 = ((void *)(0x009194a4u));
  if (DAT_009803f4 != (void *)0x0) {
    operator_delete__(DAT_009803f4);
  }
  _DAT_009803f0 = ((void *)(0x00919488u));
  DAT_009803f4 = (void *)0x0;
  return;
}


//==== 0000901f10 00901f10_FUN_00901f10 ====
void FUN_00901f10(void);

// decompiled by BatchDecomp @ 00901f10 name=FUN_00901f10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901f10(void)

{
  _DAT_00980430 = ((void *)(0x009194a4u));
  if (DAT_00980434 != (void *)0x0) {
    operator_delete__(DAT_00980434);
  }
  _DAT_00980430 = ((void *)(0x00919488u));
  DAT_00980434 = (void *)0x0;
  return;
}


//==== 0000901f50 00901f50_FUN_00901f50 ====
void FUN_00901f50(void);

// decompiled by BatchDecomp @ 00901f50 name=FUN_00901f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901f50(void)

{
  _DAT_00980420 = ((void *)(0x009194a4u));
  if (DAT_00980424 != (void *)0x0) {
    operator_delete__(DAT_00980424);
  }
  _DAT_00980420 = ((void *)(0x00919488u));
  DAT_00980424 = (void *)0x0;
  return;
}


//==== 0000901f90 00901f90_FUN_00901f90 ====
void FUN_00901f90(void);

// decompiled by BatchDecomp @ 00901f90 name=FUN_00901f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901f90(void)

{
  _DAT_009803e0 = ((void *)(0x009194a4u));
  if (DAT_009803e4 != (void *)0x0) {
    operator_delete__(DAT_009803e4);
  }
  _DAT_009803e0 = ((void *)(0x00919488u));
  DAT_009803e4 = (void *)0x0;
  return;
}


//==== 0000901fd0 00901fd0_FUN_00901fd0 ====
void FUN_00901fd0(void);

// decompiled by BatchDecomp @ 00901fd0 name=FUN_00901fd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00901fd0(void)

{
  _DAT_00980440 = ((void *)(0x009194a4u));
  if (DAT_00980444 != (void *)0x0) {
    operator_delete__(DAT_00980444);
  }
  _DAT_00980440 = ((void *)(0x00919488u));
  DAT_00980444 = (void *)0x0;
  return;
}


//==== 0000902010 00902010_FUN_00902010 ====
void FUN_00902010(void);

// decompiled by BatchDecomp @ 00902010 name=FUN_00902010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902010(void)

{
  _DAT_00980410 = ((void *)(0x009194a4u));
  if (DAT_00980414 != (void *)0x0) {
    operator_delete__(DAT_00980414);
  }
  _DAT_00980410 = ((void *)(0x00919488u));
  DAT_00980414 = (void *)0x0;
  return;
}


//==== 0000902050 00902050_FUN_00902050 ====
void FUN_00902050(void);

// decompiled by BatchDecomp @ 00902050 name=FUN_00902050 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902050(void)

{
  _DAT_00980400 = ((void *)(0x009194a4u));
  if (DAT_00980404 != (void *)0x0) {
    operator_delete__(DAT_00980404);
  }
  _DAT_00980400 = ((void *)(0x00919488u));
  DAT_00980404 = (void *)0x0;
  return;
}


//==== 0000902090 00902090_FUN_00902090 ====
void FUN_00902090(void);

// decompiled by BatchDecomp @ 00902090 name=FUN_00902090 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902090(void)

{
  _DAT_00980450 = ((void *)(0x009194a4u));
  if (DAT_00980454 != (void *)0x0) {
    operator_delete__(DAT_00980454);
  }
  _DAT_00980450 = ((void *)(0x00919488u));
  DAT_00980454 = (void *)0x0;
  return;
}


//==== 0000902650 00902650_FUN_00902650 ====
void FUN_00902650(void);

// decompiled by BatchDecomp @ 00902650 name=FUN_00902650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902650(void)

{
  _DAT_00980e70 = ((void *)(0x009194a4u));
  if (DAT_00980e74 != (void *)0x0) {
    operator_delete__(DAT_00980e74);
  }
  _DAT_00980e70 = ((void *)(0x00919488u));
  DAT_00980e74 = (void *)0x0;
  return;
}


//==== 0000902690 00902690_FUN_00902690 ====
void FUN_00902690(void);

// decompiled by BatchDecomp @ 00902690 name=FUN_00902690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902690(void)

{
  _DAT_00980eb0 = ((void *)(0x009194a4u));
  if (DAT_00980eb4 != (void *)0x0) {
    operator_delete__(DAT_00980eb4);
  }
  _DAT_00980eb0 = ((void *)(0x00919488u));
  DAT_00980eb4 = (void *)0x0;
  return;
}


//==== 00009026d0 009026d0_FUN_009026d0 ====
void FUN_009026d0(void);

// decompiled by BatchDecomp @ 009026d0 name=FUN_009026d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009026d0(void)

{
  _DAT_00980ea0 = ((void *)(0x009194a4u));
  if (DAT_00980ea4 != (void *)0x0) {
    operator_delete__(DAT_00980ea4);
  }
  _DAT_00980ea0 = ((void *)(0x00919488u));
  DAT_00980ea4 = (void *)0x0;
  return;
}


//==== 0000902710 00902710_FUN_00902710 ====
void FUN_00902710(void);

// decompiled by BatchDecomp @ 00902710 name=FUN_00902710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902710(void)

{
  _DAT_00980e60 = ((void *)(0x009194a4u));
  if (DAT_00980e64 != (void *)0x0) {
    operator_delete__(DAT_00980e64);
  }
  _DAT_00980e60 = ((void *)(0x00919488u));
  DAT_00980e64 = (void *)0x0;
  return;
}


//==== 0000902750 00902750_FUN_00902750 ====
void FUN_00902750(void);

// decompiled by BatchDecomp @ 00902750 name=FUN_00902750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902750(void)

{
  _DAT_00980e90 = ((void *)(0x009194a4u));
  if (DAT_00980e94 != (void *)0x0) {
    operator_delete__(DAT_00980e94);
  }
  _DAT_00980e90 = ((void *)(0x00919488u));
  DAT_00980e94 = (void *)0x0;
  return;
}


//==== 0000902790 00902790_FUN_00902790 ====
void FUN_00902790(void);

// decompiled by BatchDecomp @ 00902790 name=FUN_00902790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902790(void)

{
  _DAT_00980e80 = ((void *)(0x009194a4u));
  if (DAT_00980e84 != (void *)0x0) {
    operator_delete__(DAT_00980e84);
  }
  _DAT_00980e80 = ((void *)(0x00919488u));
  DAT_00980e84 = (void *)0x0;
  return;
}


//==== 00009029f0 009029f0_FUN_009029f0 ====
void FUN_009029f0(void);

// decompiled by BatchDecomp @ 009029f0 name=FUN_009029f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009029f0(void)

{
  _DAT_00981218 = ((void *)(0x009194a4u));
  if (DAT_0098121c != (void *)0x0) {
    operator_delete__(DAT_0098121c);
  }
  _DAT_00981218 = ((void *)(0x00919488u));
  DAT_0098121c = (void *)0x0;
  return;
}


//==== 0000902a30 00902a30_FUN_00902a30 ====
void FUN_00902a30(void);

// decompiled by BatchDecomp @ 00902a30 name=FUN_00902a30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902a30(void)

{
  _DAT_009811b8 = ((void *)(0x009194a4u));
  if (DAT_009811bc != (void *)0x0) {
    operator_delete__(DAT_009811bc);
  }
  _DAT_009811b8 = ((void *)(0x00919488u));
  DAT_009811bc = (void *)0x0;
  return;
}


//==== 0000902a70 00902a70_FUN_00902a70 ====
void FUN_00902a70(void);

// decompiled by BatchDecomp @ 00902a70 name=FUN_00902a70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902a70(void)

{
  _DAT_009811e8 = ((void *)(0x009194a4u));
  if (DAT_009811ec != (void *)0x0) {
    operator_delete__(DAT_009811ec);
  }
  _DAT_009811e8 = ((void *)(0x00919488u));
  DAT_009811ec = (void *)0x0;
  return;
}


//==== 0000902ab0 00902ab0_FUN_00902ab0 ====
void FUN_00902ab0(void);

// decompiled by BatchDecomp @ 00902ab0 name=FUN_00902ab0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902ab0(void)

{
  _DAT_009811a8 = ((void *)(0x009194a4u));
  if (DAT_009811ac != (void *)0x0) {
    operator_delete__(DAT_009811ac);
  }
  _DAT_009811a8 = ((void *)(0x00919488u));
  DAT_009811ac = (void *)0x0;
  return;
}


//==== 0000902af0 00902af0_FUN_00902af0 ====
void FUN_00902af0(void);

// decompiled by BatchDecomp @ 00902af0 name=FUN_00902af0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902af0(void)

{
  _DAT_00981198 = ((void *)(0x009194a4u));
  if (DAT_0098119c != (void *)0x0) {
    operator_delete__(DAT_0098119c);
  }
  _DAT_00981198 = ((void *)(0x00919488u));
  DAT_0098119c = (void *)0x0;
  return;
}


//==== 0000902b30 00902b30_FUN_00902b30 ====
void FUN_00902b30(void);

// decompiled by BatchDecomp @ 00902b30 name=FUN_00902b30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902b30(void)

{
  _DAT_009811f8 = ((void *)(0x009194a4u));
  if (DAT_009811fc != (void *)0x0) {
    operator_delete__(DAT_009811fc);
  }
  _DAT_009811f8 = ((void *)(0x00919488u));
  DAT_009811fc = (void *)0x0;
  return;
}


//==== 0000902b70 00902b70_FUN_00902b70 ====
void FUN_00902b70(void);

// decompiled by BatchDecomp @ 00902b70 name=FUN_00902b70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902b70(void)

{
  _DAT_009811d8 = ((void *)(0x009194a4u));
  if (DAT_009811dc != (void *)0x0) {
    operator_delete__(DAT_009811dc);
  }
  _DAT_009811d8 = ((void *)(0x00919488u));
  DAT_009811dc = (void *)0x0;
  return;
}


//==== 0000902bb0 00902bb0_FUN_00902bb0 ====
void FUN_00902bb0(void);

// decompiled by BatchDecomp @ 00902bb0 name=FUN_00902bb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902bb0(void)

{
  _DAT_009811c8 = ((void *)(0x009194a4u));
  if (DAT_009811cc != (void *)0x0) {
    operator_delete__(DAT_009811cc);
  }
  _DAT_009811c8 = ((void *)(0x00919488u));
  DAT_009811cc = (void *)0x0;
  return;
}


//==== 0000902bf0 00902bf0_FUN_00902bf0 ====
void FUN_00902bf0(void);

// decompiled by BatchDecomp @ 00902bf0 name=FUN_00902bf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902bf0(void)

{
  _DAT_00981208 = ((void *)(0x009194a4u));
  if (DAT_0098120c != (void *)0x0) {
    operator_delete__(DAT_0098120c);
  }
  _DAT_00981208 = ((void *)(0x00919488u));
  DAT_0098120c = (void *)0x0;
  return;
}


//==== 0000902f10 00902f10_FUN_00902f10 ====
void FUN_00902f10(void);

// decompiled by BatchDecomp @ 00902f10 name=FUN_00902f10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902f10(void)

{
  _DAT_009814f0 = ((void *)(0x009194a4u));
  if (DAT_009814f4 != (void *)0x0) {
    operator_delete__(DAT_009814f4);
  }
  _DAT_009814f0 = ((void *)(0x00919488u));
  DAT_009814f4 = (void *)0x0;
  return;
}


//==== 0000902f50 00902f50_FUN_00902f50 ====
void FUN_00902f50(void);

// decompiled by BatchDecomp @ 00902f50 name=FUN_00902f50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902f50(void)

{
  _DAT_00981480 = ((void *)(0x009194a4u));
  if (DAT_00981484 != (void *)0x0) {
    operator_delete__(DAT_00981484);
  }
  _DAT_00981480 = ((void *)(0x00919488u));
  DAT_00981484 = (void *)0x0;
  return;
}


//==== 0000902f90 00902f90_FUN_00902f90 ====
void FUN_00902f90(void);

// decompiled by BatchDecomp @ 00902f90 name=FUN_00902f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902f90(void)

{
  _DAT_009814c0 = ((void *)(0x009194a4u));
  if (DAT_009814c4 != (void *)0x0) {
    operator_delete__(DAT_009814c4);
  }
  _DAT_009814c0 = ((void *)(0x00919488u));
  DAT_009814c4 = (void *)0x0;
  return;
}


//==== 0000902fd0 00902fd0_FUN_00902fd0 ====
void FUN_00902fd0(void);

// decompiled by BatchDecomp @ 00902fd0 name=FUN_00902fd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00902fd0(void)

{
  _DAT_009814b0 = ((void *)(0x009194a4u));
  if (DAT_009814b4 != (void *)0x0) {
    operator_delete__(DAT_009814b4);
  }
  _DAT_009814b0 = ((void *)(0x00919488u));
  DAT_009814b4 = (void *)0x0;
  return;
}


//==== 0000903010 00903010_FUN_00903010 ====
void FUN_00903010(void);

// decompiled by BatchDecomp @ 00903010 name=FUN_00903010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903010(void)

{
  _DAT_00981500 = ((void *)(0x009194a4u));
  if (DAT_00981504 != (void *)0x0) {
    operator_delete__(DAT_00981504);
  }
  _DAT_00981500 = ((void *)(0x00919488u));
  DAT_00981504 = (void *)0x0;
  return;
}


//==== 0000903050 00903050_FUN_00903050 ====
void FUN_00903050(void);

// decompiled by BatchDecomp @ 00903050 name=FUN_00903050 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903050(void)

{
  _DAT_00981470 = ((void *)(0x009194a4u));
  if (DAT_00981474 != (void *)0x0) {
    operator_delete__(DAT_00981474);
  }
  _DAT_00981470 = ((void *)(0x00919488u));
  DAT_00981474 = (void *)0x0;
  return;
}


//==== 0000903090 00903090_FUN_00903090 ====
void FUN_00903090(void);

// decompiled by BatchDecomp @ 00903090 name=FUN_00903090 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903090(void)

{
  _DAT_00981520 = ((void *)(0x009194a4u));
  if (DAT_00981524 != (void *)0x0) {
    operator_delete__(DAT_00981524);
  }
  _DAT_00981520 = ((void *)(0x00919488u));
  DAT_00981524 = (void *)0x0;
  return;
}


//==== 00009030d0 009030d0_FUN_009030d0 ====
void FUN_009030d0(void);

// decompiled by BatchDecomp @ 009030d0 name=FUN_009030d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009030d0(void)

{
  _DAT_009814d0 = ((void *)(0x009194a4u));
  if (DAT_009814d4 != (void *)0x0) {
    operator_delete__(DAT_009814d4);
  }
  _DAT_009814d0 = ((void *)(0x00919488u));
  DAT_009814d4 = (void *)0x0;
  return;
}


//==== 0000903110 00903110_FUN_00903110 ====
void FUN_00903110(void);

// decompiled by BatchDecomp @ 00903110 name=FUN_00903110 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903110(void)

{
  _DAT_009814a0 = ((void *)(0x009194a4u));
  if (DAT_009814a4 != (void *)0x0) {
    operator_delete__(DAT_009814a4);
  }
  _DAT_009814a0 = ((void *)(0x00919488u));
  DAT_009814a4 = (void *)0x0;
  return;
}


//==== 0000903150 00903150_FUN_00903150 ====
void FUN_00903150(void);

// decompiled by BatchDecomp @ 00903150 name=FUN_00903150 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903150(void)

{
  _DAT_00981490 = ((void *)(0x009194a4u));
  if (DAT_00981494 != (void *)0x0) {
    operator_delete__(DAT_00981494);
  }
  _DAT_00981490 = ((void *)(0x00919488u));
  DAT_00981494 = (void *)0x0;
  return;
}


//==== 0000903190 00903190_FUN_00903190 ====
void FUN_00903190(void);

// decompiled by BatchDecomp @ 00903190 name=FUN_00903190 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903190(void)

{
  _DAT_00981510 = ((void *)(0x009194a4u));
  if (DAT_00981514 != (void *)0x0) {
    operator_delete__(DAT_00981514);
  }
  _DAT_00981510 = ((void *)(0x00919488u));
  DAT_00981514 = (void *)0x0;
  return;
}


//==== 00009031d0 009031d0_FUN_009031d0 ====
void FUN_009031d0(void);

// decompiled by BatchDecomp @ 009031d0 name=FUN_009031d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009031d0(void)

{
  _DAT_009814e0 = ((void *)(0x009194a4u));
  if (DAT_009814e4 != (void *)0x0) {
    operator_delete__(DAT_009814e4);
  }
  _DAT_009814e0 = ((void *)(0x00919488u));
  DAT_009814e4 = (void *)0x0;
  return;
}


//==== 00009034b0 009034b0_FUN_009034b0 ====
void FUN_009034b0(void);

// decompiled by BatchDecomp @ 009034b0 name=FUN_009034b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009034b0(void)

{
  _DAT_00981798 = ((void *)(0x009194a4u));
  if (DAT_0098179c != (void *)0x0) {
    operator_delete__(DAT_0098179c);
  }
  _DAT_00981798 = ((void *)(0x00919488u));
  DAT_0098179c = (void *)0x0;
  return;
}


//==== 00009034f0 009034f0_FUN_009034f0 ====
void FUN_009034f0(void);

// decompiled by BatchDecomp @ 009034f0 name=FUN_009034f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009034f0(void)

{
  _DAT_00981728 = ((void *)(0x009194a4u));
  if (DAT_0098172c != (void *)0x0) {
    operator_delete__(DAT_0098172c);
  }
  _DAT_00981728 = ((void *)(0x00919488u));
  DAT_0098172c = (void *)0x0;
  return;
}


//==== 0000903530 00903530_FUN_00903530 ====
void FUN_00903530(void);

// decompiled by BatchDecomp @ 00903530 name=FUN_00903530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903530(void)

{
  _DAT_00981768 = ((void *)(0x009194a4u));
  if (DAT_0098176c != (void *)0x0) {
    operator_delete__(DAT_0098176c);
  }
  _DAT_00981768 = ((void *)(0x00919488u));
  DAT_0098176c = (void *)0x0;
  return;
}


//==== 0000903570 00903570_FUN_00903570 ====
void FUN_00903570(void);

// decompiled by BatchDecomp @ 00903570 name=FUN_00903570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903570(void)

{
  _DAT_00981758 = ((void *)(0x009194a4u));
  if (DAT_0098175c != (void *)0x0) {
    operator_delete__(DAT_0098175c);
  }
  _DAT_00981758 = ((void *)(0x00919488u));
  DAT_0098175c = (void *)0x0;
  return;
}


//==== 00009035b0 009035b0_FUN_009035b0 ====
void FUN_009035b0(void);

// decompiled by BatchDecomp @ 009035b0 name=FUN_009035b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009035b0(void)

{
  _DAT_00981718 = ((void *)(0x009194a4u));
  if (DAT_0098171c != (void *)0x0) {
    operator_delete__(DAT_0098171c);
  }
  _DAT_00981718 = ((void *)(0x00919488u));
  DAT_0098171c = (void *)0x0;
  return;
}


//==== 00009035f0 009035f0_FUN_009035f0 ====
void FUN_009035f0(void);

// decompiled by BatchDecomp @ 009035f0 name=FUN_009035f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009035f0(void)

{
  _DAT_00981778 = ((void *)(0x009194a4u));
  if (DAT_0098177c != (void *)0x0) {
    operator_delete__(DAT_0098177c);
  }
  _DAT_00981778 = ((void *)(0x00919488u));
  DAT_0098177c = (void *)0x0;
  return;
}


//==== 0000903630 00903630_FUN_00903630 ====
void FUN_00903630(void);

// decompiled by BatchDecomp @ 00903630 name=FUN_00903630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903630(void)

{
  _DAT_00981748 = ((void *)(0x009194a4u));
  if (DAT_0098174c != (void *)0x0) {
    operator_delete__(DAT_0098174c);
  }
  _DAT_00981748 = ((void *)(0x00919488u));
  DAT_0098174c = (void *)0x0;
  return;
}


//==== 0000903670 00903670_FUN_00903670 ====
void FUN_00903670(void);

// decompiled by BatchDecomp @ 00903670 name=FUN_00903670 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903670(void)

{
  _DAT_00981738 = ((void *)(0x009194a4u));
  if (DAT_0098173c != (void *)0x0) {
    operator_delete__(DAT_0098173c);
  }
  _DAT_00981738 = ((void *)(0x00919488u));
  DAT_0098173c = (void *)0x0;
  return;
}


//==== 00009036b0 009036b0_FUN_009036b0 ====
void FUN_009036b0(void);

// decompiled by BatchDecomp @ 009036b0 name=FUN_009036b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009036b0(void)

{
  _DAT_00981788 = ((void *)(0x009194a4u));
  if (DAT_0098178c != (void *)0x0) {
    operator_delete__(DAT_0098178c);
  }
  _DAT_00981788 = ((void *)(0x00919488u));
  DAT_0098178c = (void *)0x0;
  return;
}


//==== 0000903980 00903980_FUN_00903980 ====
void FUN_00903980(void);

// decompiled by BatchDecomp @ 00903980 name=FUN_00903980 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903980(void)

{
  _DAT_00981a00 = ((void *)(0x009194a4u));
  if (DAT_00981a04 != (void *)0x0) {
    operator_delete__(DAT_00981a04);
  }
  _DAT_00981a00 = ((void *)(0x00919488u));
  DAT_00981a04 = (void *)0x0;
  return;
}


//==== 00009039c0 009039c0_FUN_009039c0 ====
void FUN_009039c0(void);

// decompiled by BatchDecomp @ 009039c0 name=FUN_009039c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009039c0(void)

{
  _DAT_009819a0 = ((void *)(0x009194a4u));
  if (DAT_009819a4 != (void *)0x0) {
    operator_delete__(DAT_009819a4);
  }
  _DAT_009819a0 = ((void *)(0x00919488u));
  DAT_009819a4 = (void *)0x0;
  return;
}


//==== 0000903a00 00903a00_FUN_00903a00 ====
void FUN_00903a00(void);

// decompiled by BatchDecomp @ 00903a00 name=FUN_00903a00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903a00(void)

{
  _DAT_009819d0 = ((void *)(0x009194a4u));
  if (DAT_009819d4 != (void *)0x0) {
    operator_delete__(DAT_009819d4);
  }
  _DAT_009819d0 = ((void *)(0x00919488u));
  DAT_009819d4 = (void *)0x0;
  return;
}


//==== 0000903a40 00903a40_FUN_00903a40 ====
void FUN_00903a40(void);

// decompiled by BatchDecomp @ 00903a40 name=FUN_00903a40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903a40(void)

{
  _DAT_00981990 = ((void *)(0x009194a4u));
  if (DAT_00981994 != (void *)0x0) {
    operator_delete__(DAT_00981994);
  }
  _DAT_00981990 = ((void *)(0x00919488u));
  DAT_00981994 = (void *)0x0;
  return;
}


//==== 0000903a80 00903a80_FUN_00903a80 ====
void FUN_00903a80(void);

// decompiled by BatchDecomp @ 00903a80 name=FUN_00903a80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903a80(void)

{
  _DAT_00981980 = ((void *)(0x009194a4u));
  if (DAT_00981984 != (void *)0x0) {
    operator_delete__(DAT_00981984);
  }
  _DAT_00981980 = ((void *)(0x00919488u));
  DAT_00981984 = (void *)0x0;
  return;
}


//==== 0000903ac0 00903ac0_FUN_00903ac0 ====
void FUN_00903ac0(void);

// decompiled by BatchDecomp @ 00903ac0 name=FUN_00903ac0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903ac0(void)

{
  _DAT_00981a10 = ((void *)(0x009194a4u));
  if (DAT_00981a14 != (void *)0x0) {
    operator_delete__(DAT_00981a14);
  }
  _DAT_00981a10 = ((void *)(0x00919488u));
  DAT_00981a14 = (void *)0x0;
  return;
}


//==== 0000903b00 00903b00_FUN_00903b00 ====
void FUN_00903b00(void);

// decompiled by BatchDecomp @ 00903b00 name=FUN_00903b00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903b00(void)

{
  _DAT_009819e0 = ((void *)(0x009194a4u));
  if (DAT_009819e4 != (void *)0x0) {
    operator_delete__(DAT_009819e4);
  }
  _DAT_009819e0 = ((void *)(0x00919488u));
  DAT_009819e4 = (void *)0x0;
  return;
}


//==== 0000903b40 00903b40_FUN_00903b40 ====
void FUN_00903b40(void);

// decompiled by BatchDecomp @ 00903b40 name=FUN_00903b40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903b40(void)

{
  _DAT_009819c0 = ((void *)(0x009194a4u));
  if (DAT_009819c4 != (void *)0x0) {
    operator_delete__(DAT_009819c4);
  }
  _DAT_009819c0 = ((void *)(0x00919488u));
  DAT_009819c4 = (void *)0x0;
  return;
}


//==== 0000903b80 00903b80_FUN_00903b80 ====
void FUN_00903b80(void);

// decompiled by BatchDecomp @ 00903b80 name=FUN_00903b80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903b80(void)

{
  _DAT_009819b0 = ((void *)(0x009194a4u));
  if (DAT_009819b4 != (void *)0x0) {
    operator_delete__(DAT_009819b4);
  }
  _DAT_009819b0 = ((void *)(0x00919488u));
  DAT_009819b4 = (void *)0x0;
  return;
}


//==== 0000903bc0 00903bc0_FUN_00903bc0 ====
void FUN_00903bc0(void);

// decompiled by BatchDecomp @ 00903bc0 name=FUN_00903bc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00903bc0(void)

{
  _DAT_009819f0 = ((void *)(0x009194a4u));
  if (DAT_009819f4 != (void *)0x0) {
    operator_delete__(DAT_009819f4);
  }
  _DAT_009819f0 = ((void *)(0x00919488u));
  DAT_009819f4 = (void *)0x0;
  return;
}


//==== 0000904080 00904080_FUN_00904080 ====
void FUN_00904080(void);

// decompiled by BatchDecomp @ 00904080 name=FUN_00904080 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904080(void)

{
  _DAT_00982590 = ((void *)(0x009194a4u));
  if (DAT_00982594 != (void *)0x0) {
    operator_delete__(DAT_00982594);
  }
  _DAT_00982590 = ((void *)(0x00919488u));
  DAT_00982594 = (void *)0x0;
  return;
}


//==== 00009040c0 009040c0_FUN_009040c0 ====
void FUN_009040c0(void);

// decompiled by BatchDecomp @ 009040c0 name=FUN_009040c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009040c0(void)

{
  _DAT_00982530 = ((void *)(0x009194a4u));
  if (DAT_00982534 != (void *)0x0) {
    operator_delete__(DAT_00982534);
  }
  _DAT_00982530 = ((void *)(0x00919488u));
  DAT_00982534 = (void *)0x0;
  return;
}


//==== 0000904100 00904100_FUN_00904100 ====
void FUN_00904100(void);

// decompiled by BatchDecomp @ 00904100 name=FUN_00904100 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904100(void)

{
  _DAT_00982560 = ((void *)(0x009194a4u));
  if (DAT_00982564 != (void *)0x0) {
    operator_delete__(DAT_00982564);
  }
  _DAT_00982560 = ((void *)(0x00919488u));
  DAT_00982564 = (void *)0x0;
  return;
}


//==== 0000904140 00904140_FUN_00904140 ====
void FUN_00904140(void);

// decompiled by BatchDecomp @ 00904140 name=FUN_00904140 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904140(void)

{
  _DAT_00982520 = ((void *)(0x009194a4u));
  if (DAT_00982524 != (void *)0x0) {
    operator_delete__(DAT_00982524);
  }
  _DAT_00982520 = ((void *)(0x00919488u));
  DAT_00982524 = (void *)0x0;
  return;
}


//==== 0000904180 00904180_FUN_00904180 ====
void FUN_00904180(void);

// decompiled by BatchDecomp @ 00904180 name=FUN_00904180 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904180(void)

{
  _DAT_009825a0 = ((void *)(0x009194a4u));
  if (DAT_009825a4 != (void *)0x0) {
    operator_delete__(DAT_009825a4);
  }
  _DAT_009825a0 = ((void *)(0x00919488u));
  DAT_009825a4 = (void *)0x0;
  return;
}


//==== 00009041c0 009041c0_FUN_009041c0 ====
void FUN_009041c0(void);

// decompiled by BatchDecomp @ 009041c0 name=FUN_009041c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009041c0(void)

{
  _DAT_00982510 = ((void *)(0x009194a4u));
  if (DAT_00982514 != (void *)0x0) {
    operator_delete__(DAT_00982514);
  }
  _DAT_00982510 = ((void *)(0x00919488u));
  DAT_00982514 = (void *)0x0;
  return;
}


//==== 0000904200 00904200_FUN_00904200 ====
void FUN_00904200(void);

// decompiled by BatchDecomp @ 00904200 name=FUN_00904200 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904200(void)

{
  _DAT_00982570 = ((void *)(0x009194a4u));
  if (DAT_00982574 != (void *)0x0) {
    operator_delete__(DAT_00982574);
  }
  _DAT_00982570 = ((void *)(0x00919488u));
  DAT_00982574 = (void *)0x0;
  return;
}


//==== 0000904240 00904240_FUN_00904240 ====
void FUN_00904240(void);

// decompiled by BatchDecomp @ 00904240 name=FUN_00904240 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904240(void)

{
  _DAT_00982550 = ((void *)(0x009194a4u));
  if (DAT_00982554 != (void *)0x0) {
    operator_delete__(DAT_00982554);
  }
  _DAT_00982550 = ((void *)(0x00919488u));
  DAT_00982554 = (void *)0x0;
  return;
}


//==== 0000904280 00904280_FUN_00904280 ====
void FUN_00904280(void);

// decompiled by BatchDecomp @ 00904280 name=FUN_00904280 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904280(void)

{
  _DAT_00982540 = ((void *)(0x009194a4u));
  if (DAT_00982544 != (void *)0x0) {
    operator_delete__(DAT_00982544);
  }
  _DAT_00982540 = ((void *)(0x00919488u));
  DAT_00982544 = (void *)0x0;
  return;
}


//==== 00009042c0 009042c0_FUN_009042c0 ====
void FUN_009042c0(void);

// decompiled by BatchDecomp @ 009042c0 name=FUN_009042c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009042c0(void)

{
  _DAT_009825b0 = ((void *)(0x009194a4u));
  if (DAT_009825b4 != (void *)0x0) {
    operator_delete__(DAT_009825b4);
  }
  _DAT_009825b0 = ((void *)(0x00919488u));
  DAT_009825b4 = (void *)0x0;
  return;
}


//==== 0000904300 00904300_FUN_00904300 ====
void FUN_00904300(void);

// decompiled by BatchDecomp @ 00904300 name=FUN_00904300 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904300(void)

{
  _DAT_00982580 = ((void *)(0x009194a4u));
  if (DAT_00982584 != (void *)0x0) {
    operator_delete__(DAT_00982584);
  }
  _DAT_00982580 = ((void *)(0x00919488u));
  DAT_00982584 = (void *)0x0;
  return;
}


//==== 0000904640 00904640_FUN_00904640 ====
void FUN_00904640(void);

// decompiled by BatchDecomp @ 00904640 name=FUN_00904640 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904640(void)

{
  _DAT_00982888 = ((void *)(0x009194a4u));
  if (DAT_0098288c != (void *)0x0) {
    operator_delete__(DAT_0098288c);
  }
  _DAT_00982888 = ((void *)(0x00919488u));
  DAT_0098288c = (void *)0x0;
  return;
}


//==== 0000904680 00904680_FUN_00904680 ====
void FUN_00904680(void);

// decompiled by BatchDecomp @ 00904680 name=FUN_00904680 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904680(void)

{
  _DAT_00982818 = ((void *)(0x009194a4u));
  if (DAT_0098281c != (void *)0x0) {
    operator_delete__(DAT_0098281c);
  }
  _DAT_00982818 = ((void *)(0x00919488u));
  DAT_0098281c = (void *)0x0;
  return;
}


//==== 00009046c0 009046c0_FUN_009046c0 ====
void FUN_009046c0(void);

// decompiled by BatchDecomp @ 009046c0 name=FUN_009046c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009046c0(void)

{
  _DAT_009828c8 = ((void *)(0x009194a4u));
  if (DAT_009828cc != (void *)0x0) {
    operator_delete__(DAT_009828cc);
  }
  _DAT_009828c8 = ((void *)(0x00919488u));
  DAT_009828cc = (void *)0x0;
  return;
}


//==== 0000904700 00904700_FUN_00904700 ====
void FUN_00904700(void);

// decompiled by BatchDecomp @ 00904700 name=FUN_00904700 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904700(void)

{
  _DAT_00982858 = ((void *)(0x009194a4u));
  if (DAT_0098285c != (void *)0x0) {
    operator_delete__(DAT_0098285c);
  }
  _DAT_00982858 = ((void *)(0x00919488u));
  DAT_0098285c = (void *)0x0;
  return;
}


//==== 0000904740 00904740_FUN_00904740 ====
void FUN_00904740(void);

// decompiled by BatchDecomp @ 00904740 name=FUN_00904740 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904740(void)

{
  _DAT_00982848 = ((void *)(0x009194a4u));
  if (DAT_0098284c != (void *)0x0) {
    operator_delete__(DAT_0098284c);
  }
  _DAT_00982848 = ((void *)(0x00919488u));
  DAT_0098284c = (void *)0x0;
  return;
}


//==== 0000904780 00904780_FUN_00904780 ====
void FUN_00904780(void);

// decompiled by BatchDecomp @ 00904780 name=FUN_00904780 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904780(void)

{
  _DAT_00982898 = ((void *)(0x009194a4u));
  if (DAT_0098289c != (void *)0x0) {
    operator_delete__(DAT_0098289c);
  }
  _DAT_00982898 = ((void *)(0x00919488u));
  DAT_0098289c = (void *)0x0;
  return;
}


//==== 00009047c0 009047c0_FUN_009047c0 ====
void FUN_009047c0(void);

// decompiled by BatchDecomp @ 009047c0 name=FUN_009047c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009047c0(void)

{
  _DAT_00982808 = ((void *)(0x009194a4u));
  if (DAT_0098280c != (void *)0x0) {
    operator_delete__(DAT_0098280c);
  }
  _DAT_00982808 = ((void *)(0x00919488u));
  DAT_0098280c = (void *)0x0;
  return;
}


//==== 0000904800 00904800_FUN_00904800 ====
void FUN_00904800(void);

// decompiled by BatchDecomp @ 00904800 name=FUN_00904800 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904800(void)

{
  _DAT_009828b8 = ((void *)(0x009194a4u));
  if (DAT_009828bc != (void *)0x0) {
    operator_delete__(DAT_009828bc);
  }
  _DAT_009828b8 = ((void *)(0x00919488u));
  DAT_009828bc = (void *)0x0;
  return;
}


//==== 0000904840 00904840_FUN_00904840 ====
void FUN_00904840(void);

// decompiled by BatchDecomp @ 00904840 name=FUN_00904840 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904840(void)

{
  _DAT_00982868 = ((void *)(0x009194a4u));
  if (DAT_0098286c != (void *)0x0) {
    operator_delete__(DAT_0098286c);
  }
  _DAT_00982868 = ((void *)(0x00919488u));
  DAT_0098286c = (void *)0x0;
  return;
}


//==== 0000904880 00904880_FUN_00904880 ====
void FUN_00904880(void);

// decompiled by BatchDecomp @ 00904880 name=FUN_00904880 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904880(void)

{
  _DAT_00982838 = ((void *)(0x009194a4u));
  if (DAT_0098283c != (void *)0x0) {
    operator_delete__(DAT_0098283c);
  }
  _DAT_00982838 = ((void *)(0x00919488u));
  DAT_0098283c = (void *)0x0;
  return;
}


//==== 00009048c0 009048c0_FUN_009048c0 ====
void FUN_009048c0(void);

// decompiled by BatchDecomp @ 009048c0 name=FUN_009048c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009048c0(void)

{
  _DAT_00982828 = ((void *)(0x009194a4u));
  if (DAT_0098282c != (void *)0x0) {
    operator_delete__(DAT_0098282c);
  }
  _DAT_00982828 = ((void *)(0x00919488u));
  DAT_0098282c = (void *)0x0;
  return;
}


//==== 0000904900 00904900_FUN_00904900 ====
void FUN_00904900(void);

// decompiled by BatchDecomp @ 00904900 name=FUN_00904900 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904900(void)

{
  _DAT_009828a8 = ((void *)(0x009194a4u));
  if (DAT_009828ac != (void *)0x0) {
    operator_delete__(DAT_009828ac);
  }
  _DAT_009828a8 = ((void *)(0x00919488u));
  DAT_009828ac = (void *)0x0;
  return;
}


//==== 0000904940 00904940_FUN_00904940 ====
void FUN_00904940(void);

// decompiled by BatchDecomp @ 00904940 name=FUN_00904940 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904940(void)

{
  _DAT_00982878 = ((void *)(0x009194a4u));
  if (DAT_0098287c != (void *)0x0) {
    operator_delete__(DAT_0098287c);
  }
  _DAT_00982878 = ((void *)(0x00919488u));
  DAT_0098287c = (void *)0x0;
  return;
}


//==== 0000904c40 00904c40_FUN_00904c40 ====
void FUN_00904c40(void);

// decompiled by BatchDecomp @ 00904c40 name=FUN_00904c40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904c40(void)

{
  _DAT_00982b58 = ((void *)(0x009194a4u));
  if (DAT_00982b5c != (void *)0x0) {
    operator_delete__(DAT_00982b5c);
  }
  _DAT_00982b58 = ((void *)(0x00919488u));
  DAT_00982b5c = (void *)0x0;
  return;
}


//==== 0000904c80 00904c80_FUN_00904c80 ====
void FUN_00904c80(void);

// decompiled by BatchDecomp @ 00904c80 name=FUN_00904c80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904c80(void)

{
  _DAT_00982af8 = ((void *)(0x009194a4u));
  if (DAT_00982afc != (void *)0x0) {
    operator_delete__(DAT_00982afc);
  }
  _DAT_00982af8 = ((void *)(0x00919488u));
  DAT_00982afc = (void *)0x0;
  return;
}


//==== 0000904cc0 00904cc0_FUN_00904cc0 ====
void FUN_00904cc0(void);

// decompiled by BatchDecomp @ 00904cc0 name=FUN_00904cc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904cc0(void)

{
  _DAT_00982b28 = ((void *)(0x009194a4u));
  if (DAT_00982b2c != (void *)0x0) {
    operator_delete__(DAT_00982b2c);
  }
  _DAT_00982b28 = ((void *)(0x00919488u));
  DAT_00982b2c = (void *)0x0;
  return;
}


//==== 0000904d00 00904d00_FUN_00904d00 ====
void FUN_00904d00(void);

// decompiled by BatchDecomp @ 00904d00 name=FUN_00904d00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904d00(void)

{
  _DAT_00982ae8 = ((void *)(0x009194a4u));
  if (DAT_00982aec != (void *)0x0) {
    operator_delete__(DAT_00982aec);
  }
  _DAT_00982ae8 = ((void *)(0x00919488u));
  DAT_00982aec = (void *)0x0;
  return;
}


//==== 0000904d40 00904d40_FUN_00904d40 ====
void FUN_00904d40(void);

// decompiled by BatchDecomp @ 00904d40 name=FUN_00904d40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904d40(void)

{
  _DAT_00982ad8 = ((void *)(0x009194a4u));
  if (DAT_00982adc != (void *)0x0) {
    operator_delete__(DAT_00982adc);
  }
  _DAT_00982ad8 = ((void *)(0x00919488u));
  DAT_00982adc = (void *)0x0;
  return;
}


//==== 0000904d80 00904d80_FUN_00904d80 ====
void FUN_00904d80(void);

// decompiled by BatchDecomp @ 00904d80 name=FUN_00904d80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904d80(void)

{
  _DAT_00982b38 = ((void *)(0x009194a4u));
  if (DAT_00982b3c != (void *)0x0) {
    operator_delete__(DAT_00982b3c);
  }
  _DAT_00982b38 = ((void *)(0x00919488u));
  DAT_00982b3c = (void *)0x0;
  return;
}


//==== 0000904dc0 00904dc0_FUN_00904dc0 ====
void FUN_00904dc0(void);

// decompiled by BatchDecomp @ 00904dc0 name=FUN_00904dc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904dc0(void)

{
  _DAT_00982b18 = ((void *)(0x009194a4u));
  if (DAT_00982b1c != (void *)0x0) {
    operator_delete__(DAT_00982b1c);
  }
  _DAT_00982b18 = ((void *)(0x00919488u));
  DAT_00982b1c = (void *)0x0;
  return;
}


//==== 0000904e00 00904e00_FUN_00904e00 ====
void FUN_00904e00(void);

// decompiled by BatchDecomp @ 00904e00 name=FUN_00904e00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904e00(void)

{
  _DAT_00982b08 = ((void *)(0x009194a4u));
  if (DAT_00982b0c != (void *)0x0) {
    operator_delete__(DAT_00982b0c);
  }
  _DAT_00982b08 = ((void *)(0x00919488u));
  DAT_00982b0c = (void *)0x0;
  return;
}


//==== 0000904e40 00904e40_FUN_00904e40 ====
void FUN_00904e40(void);

// decompiled by BatchDecomp @ 00904e40 name=FUN_00904e40 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00904e40(void)

{
  _DAT_00982b48 = ((void *)(0x009194a4u));
  if (DAT_00982b4c != (void *)0x0) {
    operator_delete__(DAT_00982b4c);
  }
  _DAT_00982b48 = ((void *)(0x00919488u));
  DAT_00982b4c = (void *)0x0;
  return;
}


//==== 00009050c0 009050c0_FUN_009050c0 ====
void FUN_009050c0(void);

// decompiled by BatchDecomp @ 009050c0 name=FUN_009050c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009050c0(void)

{
  _DAT_00982da0 = ((void *)(0x009194a4u));
  if (DAT_00982da4 != (void *)0x0) {
    operator_delete__(DAT_00982da4);
  }
  _DAT_00982da0 = ((void *)(0x00919488u));
  DAT_00982da4 = (void *)0x0;
  return;
}


//==== 0000905100 00905100_FUN_00905100 ====
void FUN_00905100(void);

// decompiled by BatchDecomp @ 00905100 name=FUN_00905100 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905100(void)

{
  _DAT_00982d30 = ((void *)(0x009194a4u));
  if (DAT_00982d34 != (void *)0x0) {
    operator_delete__(DAT_00982d34);
  }
  _DAT_00982d30 = ((void *)(0x00919488u));
  DAT_00982d34 = (void *)0x0;
  return;
}


//==== 0000905140 00905140_FUN_00905140 ====
void FUN_00905140(void);

// decompiled by BatchDecomp @ 00905140 name=FUN_00905140 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905140(void)

{
  _DAT_00982d70 = ((void *)(0x009194a4u));
  if (DAT_00982d74 != (void *)0x0) {
    operator_delete__(DAT_00982d74);
  }
  _DAT_00982d70 = ((void *)(0x00919488u));
  DAT_00982d74 = (void *)0x0;
  return;
}


//==== 0000905180 00905180_FUN_00905180 ====
void FUN_00905180(void);

// decompiled by BatchDecomp @ 00905180 name=FUN_00905180 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905180(void)

{
  _DAT_00982d60 = ((void *)(0x009194a4u));
  if (DAT_00982d64 != (void *)0x0) {
    operator_delete__(DAT_00982d64);
  }
  _DAT_00982d60 = ((void *)(0x00919488u));
  DAT_00982d64 = (void *)0x0;
  return;
}


//==== 00009051c0 009051c0_FUN_009051c0 ====
void FUN_009051c0(void);

// decompiled by BatchDecomp @ 009051c0 name=FUN_009051c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009051c0(void)

{
  _DAT_00982d20 = ((void *)(0x009194a4u));
  if (DAT_00982d24 != (void *)0x0) {
    operator_delete__(DAT_00982d24);
  }
  _DAT_00982d20 = ((void *)(0x00919488u));
  DAT_00982d24 = (void *)0x0;
  return;
}


//==== 0000905200 00905200_FUN_00905200 ====
void FUN_00905200(void);

// decompiled by BatchDecomp @ 00905200 name=FUN_00905200 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905200(void)

{
  _DAT_00982d80 = ((void *)(0x009194a4u));
  if (DAT_00982d84 != (void *)0x0) {
    operator_delete__(DAT_00982d84);
  }
  _DAT_00982d80 = ((void *)(0x00919488u));
  DAT_00982d84 = (void *)0x0;
  return;
}


//==== 0000905240 00905240_FUN_00905240 ====
void FUN_00905240(void);

// decompiled by BatchDecomp @ 00905240 name=FUN_00905240 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905240(void)

{
  _DAT_00982d50 = ((void *)(0x009194a4u));
  if (DAT_00982d54 != (void *)0x0) {
    operator_delete__(DAT_00982d54);
  }
  _DAT_00982d50 = ((void *)(0x00919488u));
  DAT_00982d54 = (void *)0x0;
  return;
}


//==== 0000905280 00905280_FUN_00905280 ====
void FUN_00905280(void);

// decompiled by BatchDecomp @ 00905280 name=FUN_00905280 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905280(void)

{
  _DAT_00982d40 = ((void *)(0x009194a4u));
  if (DAT_00982d44 != (void *)0x0) {
    operator_delete__(DAT_00982d44);
  }
  _DAT_00982d40 = ((void *)(0x00919488u));
  DAT_00982d44 = (void *)0x0;
  return;
}


//==== 00009052c0 009052c0_FUN_009052c0 ====
void FUN_009052c0(void);

// decompiled by BatchDecomp @ 009052c0 name=FUN_009052c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009052c0(void)

{
  _DAT_00982d90 = ((void *)(0x009194a4u));
  if (DAT_00982d94 != (void *)0x0) {
    operator_delete__(DAT_00982d94);
  }
  _DAT_00982d90 = ((void *)(0x00919488u));
  DAT_00982d94 = (void *)0x0;
  return;
}


//==== 0000905560 00905560_FUN_00905560 ====
void FUN_00905560(void);

// decompiled by BatchDecomp @ 00905560 name=FUN_00905560 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905560(void)

{
  _DAT_00983000 = ((void *)(0x009194a4u));
  if (DAT_00983004 != (void *)0x0) {
    operator_delete__(DAT_00983004);
  }
  _DAT_00983000 = ((void *)(0x00919488u));
  DAT_00983004 = (void *)0x0;
  return;
}


//==== 00009055a0 009055a0_FUN_009055a0 ====
void FUN_009055a0(void);

// decompiled by BatchDecomp @ 009055a0 name=FUN_009055a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009055a0(void)

{
  _DAT_00982fa0 = ((void *)(0x009194a4u));
  if (DAT_00982fa4 != (void *)0x0) {
    operator_delete__(DAT_00982fa4);
  }
  _DAT_00982fa0 = ((void *)(0x00919488u));
  DAT_00982fa4 = (void *)0x0;
  return;
}


//==== 00009055e0 009055e0_FUN_009055e0 ====
void FUN_009055e0(void);

// decompiled by BatchDecomp @ 009055e0 name=FUN_009055e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009055e0(void)

{
  _DAT_00982fd0 = ((void *)(0x009194a4u));
  if (DAT_00982fd4 != (void *)0x0) {
    operator_delete__(DAT_00982fd4);
  }
  _DAT_00982fd0 = ((void *)(0x00919488u));
  DAT_00982fd4 = (void *)0x0;
  return;
}


//==== 0000905620 00905620_FUN_00905620 ====
void FUN_00905620(void);

// decompiled by BatchDecomp @ 00905620 name=FUN_00905620 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905620(void)

{
  _DAT_00982f90 = ((void *)(0x009194a4u));
  if (DAT_00982f94 != (void *)0x0) {
    operator_delete__(DAT_00982f94);
  }
  _DAT_00982f90 = ((void *)(0x00919488u));
  DAT_00982f94 = (void *)0x0;
  return;
}


//==== 0000905660 00905660_FUN_00905660 ====
void FUN_00905660(void);

// decompiled by BatchDecomp @ 00905660 name=FUN_00905660 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905660(void)

{
  _DAT_00982f80 = ((void *)(0x009194a4u));
  if (DAT_00982f84 != (void *)0x0) {
    operator_delete__(DAT_00982f84);
  }
  _DAT_00982f80 = ((void *)(0x00919488u));
  DAT_00982f84 = (void *)0x0;
  return;
}


//==== 00009056a0 009056a0_FUN_009056a0 ====
void FUN_009056a0(void);

// decompiled by BatchDecomp @ 009056a0 name=FUN_009056a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009056a0(void)

{
  _DAT_00983010 = ((void *)(0x009194a4u));
  if (DAT_00983014 != (void *)0x0) {
    operator_delete__(DAT_00983014);
  }
  _DAT_00983010 = ((void *)(0x00919488u));
  DAT_00983014 = (void *)0x0;
  return;
}


//==== 00009056e0 009056e0_FUN_009056e0 ====
void FUN_009056e0(void);

// decompiled by BatchDecomp @ 009056e0 name=FUN_009056e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009056e0(void)

{
  _DAT_00982fe0 = ((void *)(0x009194a4u));
  if (DAT_00982fe4 != (void *)0x0) {
    operator_delete__(DAT_00982fe4);
  }
  _DAT_00982fe0 = ((void *)(0x00919488u));
  DAT_00982fe4 = (void *)0x0;
  return;
}


//==== 0000905720 00905720_FUN_00905720 ====
void FUN_00905720(void);

// decompiled by BatchDecomp @ 00905720 name=FUN_00905720 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905720(void)

{
  _DAT_00982fc0 = ((void *)(0x009194a4u));
  if (DAT_00982fc4 != (void *)0x0) {
    operator_delete__(DAT_00982fc4);
  }
  _DAT_00982fc0 = ((void *)(0x00919488u));
  DAT_00982fc4 = (void *)0x0;
  return;
}


//==== 0000905760 00905760_FUN_00905760 ====
void FUN_00905760(void);

// decompiled by BatchDecomp @ 00905760 name=FUN_00905760 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905760(void)

{
  _DAT_00982fb0 = ((void *)(0x009194a4u));
  if (DAT_00982fb4 != (void *)0x0) {
    operator_delete__(DAT_00982fb4);
  }
  _DAT_00982fb0 = ((void *)(0x00919488u));
  DAT_00982fb4 = (void *)0x0;
  return;
}


//==== 00009057a0 009057a0_FUN_009057a0 ====
void FUN_009057a0(void);

// decompiled by BatchDecomp @ 009057a0 name=FUN_009057a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009057a0(void)

{
  _DAT_00982ff0 = ((void *)(0x009194a4u));
  if (DAT_00982ff4 != (void *)0x0) {
    operator_delete__(DAT_00982ff4);
  }
  _DAT_00982ff0 = ((void *)(0x00919488u));
  DAT_00982ff4 = (void *)0x0;
  return;
}


//==== 0000905aa0 00905aa0_FUN_00905aa0 ====
void FUN_00905aa0(void);

// decompiled by BatchDecomp @ 00905aa0 name=FUN_00905aa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905aa0(void)

{
  _DAT_00983278 = ((void *)(0x009194a4u));
  if (DAT_0098327c != (void *)0x0) {
    operator_delete__(DAT_0098327c);
  }
  _DAT_00983278 = ((void *)(0x00919488u));
  DAT_0098327c = (void *)0x0;
  return;
}


//==== 0000905ae0 00905ae0_FUN_00905ae0 ====
void FUN_00905ae0(void);

// decompiled by BatchDecomp @ 00905ae0 name=FUN_00905ae0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905ae0(void)

{
  _DAT_00983218 = ((void *)(0x009194a4u));
  if (DAT_0098321c != (void *)0x0) {
    operator_delete__(DAT_0098321c);
  }
  _DAT_00983218 = ((void *)(0x00919488u));
  DAT_0098321c = (void *)0x0;
  return;
}


//==== 0000905b20 00905b20_FUN_00905b20 ====
void FUN_00905b20(void);

// decompiled by BatchDecomp @ 00905b20 name=FUN_00905b20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905b20(void)

{
  _DAT_00983248 = ((void *)(0x009194a4u));
  if (DAT_0098324c != (void *)0x0) {
    operator_delete__(DAT_0098324c);
  }
  _DAT_00983248 = ((void *)(0x00919488u));
  DAT_0098324c = (void *)0x0;
  return;
}


//==== 0000905b60 00905b60_FUN_00905b60 ====
void FUN_00905b60(void);

// decompiled by BatchDecomp @ 00905b60 name=FUN_00905b60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905b60(void)

{
  _DAT_00983208 = ((void *)(0x009194a4u));
  if (DAT_0098320c != (void *)0x0) {
    operator_delete__(DAT_0098320c);
  }
  _DAT_00983208 = ((void *)(0x00919488u));
  DAT_0098320c = (void *)0x0;
  return;
}


//==== 0000905ba0 00905ba0_FUN_00905ba0 ====
void FUN_00905ba0(void);

// decompiled by BatchDecomp @ 00905ba0 name=FUN_00905ba0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905ba0(void)

{
  _DAT_009831f8 = ((void *)(0x009194a4u));
  if (DAT_009831fc != (void *)0x0) {
    operator_delete__(DAT_009831fc);
  }
  _DAT_009831f8 = ((void *)(0x00919488u));
  DAT_009831fc = (void *)0x0;
  return;
}


//==== 0000905be0 00905be0_FUN_00905be0 ====
void FUN_00905be0(void);

// decompiled by BatchDecomp @ 00905be0 name=FUN_00905be0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905be0(void)

{
  _DAT_00983288 = ((void *)(0x009194a4u));
  if (DAT_0098328c != (void *)0x0) {
    operator_delete__(DAT_0098328c);
  }
  _DAT_00983288 = ((void *)(0x00919488u));
  DAT_0098328c = (void *)0x0;
  return;
}


//==== 0000905c20 00905c20_FUN_00905c20 ====
void FUN_00905c20(void);

// decompiled by BatchDecomp @ 00905c20 name=FUN_00905c20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905c20(void)

{
  _DAT_00983258 = ((void *)(0x009194a4u));
  if (DAT_0098325c != (void *)0x0) {
    operator_delete__(DAT_0098325c);
  }
  _DAT_00983258 = ((void *)(0x00919488u));
  DAT_0098325c = (void *)0x0;
  return;
}


//==== 0000905c60 00905c60_FUN_00905c60 ====
void FUN_00905c60(void);

// decompiled by BatchDecomp @ 00905c60 name=FUN_00905c60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905c60(void)

{
  _DAT_00983238 = ((void *)(0x009194a4u));
  if (DAT_0098323c != (void *)0x0) {
    operator_delete__(DAT_0098323c);
  }
  _DAT_00983238 = ((void *)(0x00919488u));
  DAT_0098323c = (void *)0x0;
  return;
}


//==== 0000905ca0 00905ca0_FUN_00905ca0 ====
void FUN_00905ca0(void);

// decompiled by BatchDecomp @ 00905ca0 name=FUN_00905ca0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905ca0(void)

{
  _DAT_00983228 = ((void *)(0x009194a4u));
  if (DAT_0098322c != (void *)0x0) {
    operator_delete__(DAT_0098322c);
  }
  _DAT_00983228 = ((void *)(0x00919488u));
  DAT_0098322c = (void *)0x0;
  return;
}


//==== 0000905ce0 00905ce0_FUN_00905ce0 ====
void FUN_00905ce0(void);

// decompiled by BatchDecomp @ 00905ce0 name=FUN_00905ce0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00905ce0(void)

{
  _DAT_00983268 = ((void *)(0x009194a4u));
  if (DAT_0098326c != (void *)0x0) {
    operator_delete__(DAT_0098326c);
  }
  _DAT_00983268 = ((void *)(0x00919488u));
  DAT_0098326c = (void *)0x0;
  return;
}


//==== 0000906000 00906000_FUN_00906000 ====
void FUN_00906000(void);

// decompiled by BatchDecomp @ 00906000 name=FUN_00906000 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906000(void)

{
  _DAT_00983540 = ((void *)(0x009194a4u));
  if (DAT_00983544 != (void *)0x0) {
    operator_delete__(DAT_00983544);
  }
  _DAT_00983540 = ((void *)(0x00919488u));
  DAT_00983544 = (void *)0x0;
  return;
}


//==== 0000906040 00906040_FUN_00906040 ====
void FUN_00906040(void);

// decompiled by BatchDecomp @ 00906040 name=FUN_00906040 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906040(void)

{
  _DAT_009834d0 = ((void *)(0x009194a4u));
  if (DAT_009834d4 != (void *)0x0) {
    operator_delete__(DAT_009834d4);
  }
  _DAT_009834d0 = ((void *)(0x00919488u));
  DAT_009834d4 = (void *)0x0;
  return;
}


//==== 0000906080 00906080_FUN_00906080 ====
void FUN_00906080(void);

// decompiled by BatchDecomp @ 00906080 name=FUN_00906080 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906080(void)

{
  _DAT_00983560 = ((void *)(0x009194a4u));
  if (DAT_00983564 != (void *)0x0) {
    operator_delete__(DAT_00983564);
  }
  _DAT_00983560 = ((void *)(0x00919488u));
  DAT_00983564 = (void *)0x0;
  return;
}


//==== 00009060c0 009060c0_FUN_009060c0 ====
void FUN_009060c0(void);

// decompiled by BatchDecomp @ 009060c0 name=FUN_009060c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009060c0(void)

{
  _DAT_00983510 = ((void *)(0x009194a4u));
  if (DAT_00983514 != (void *)0x0) {
    operator_delete__(DAT_00983514);
  }
  _DAT_00983510 = ((void *)(0x00919488u));
  DAT_00983514 = (void *)0x0;
  return;
}


//==== 0000906100 00906100_FUN_00906100 ====
void FUN_00906100(void);

// decompiled by BatchDecomp @ 00906100 name=FUN_00906100 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906100(void)

{
  _DAT_00983500 = ((void *)(0x009194a4u));
  if (DAT_00983504 != (void *)0x0) {
    operator_delete__(DAT_00983504);
  }
  _DAT_00983500 = ((void *)(0x00919488u));
  DAT_00983504 = (void *)0x0;
  return;
}


//==== 0000906140 00906140_FUN_00906140 ====
void FUN_00906140(void);

// decompiled by BatchDecomp @ 00906140 name=FUN_00906140 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906140(void)

{
  _DAT_009834c0 = ((void *)(0x009194a4u));
  if (DAT_009834c4 != (void *)0x0) {
    operator_delete__(DAT_009834c4);
  }
  _DAT_009834c0 = ((void *)(0x00919488u));
  DAT_009834c4 = (void *)0x0;
  return;
}


//==== 0000906180 00906180_FUN_00906180 ====
void FUN_00906180(void);

// decompiled by BatchDecomp @ 00906180 name=FUN_00906180 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906180(void)

{
  _DAT_00983550 = ((void *)(0x009194a4u));
  if (DAT_00983554 != (void *)0x0) {
    operator_delete__(DAT_00983554);
  }
  _DAT_00983550 = ((void *)(0x00919488u));
  DAT_00983554 = (void *)0x0;
  return;
}


//==== 00009061c0 009061c0_FUN_009061c0 ====
void FUN_009061c0(void);

// decompiled by BatchDecomp @ 009061c0 name=FUN_009061c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009061c0(void)

{
  _DAT_00983520 = ((void *)(0x009194a4u));
  if (DAT_00983524 != (void *)0x0) {
    operator_delete__(DAT_00983524);
  }
  _DAT_00983520 = ((void *)(0x00919488u));
  DAT_00983524 = (void *)0x0;
  return;
}


//==== 0000906200 00906200_FUN_00906200 ====
void FUN_00906200(void);

// decompiled by BatchDecomp @ 00906200 name=FUN_00906200 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906200(void)

{
  _DAT_009834f0 = ((void *)(0x009194a4u));
  if (DAT_009834f4 != (void *)0x0) {
    operator_delete__(DAT_009834f4);
  }
  _DAT_009834f0 = ((void *)(0x00919488u));
  DAT_009834f4 = (void *)0x0;
  return;
}


//==== 0000906240 00906240_FUN_00906240 ====
void FUN_00906240(void);

// decompiled by BatchDecomp @ 00906240 name=FUN_00906240 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906240(void)

{
  _DAT_009834e0 = ((void *)(0x009194a4u));
  if (DAT_009834e4 != (void *)0x0) {
    operator_delete__(DAT_009834e4);
  }
  _DAT_009834e0 = ((void *)(0x00919488u));
  DAT_009834e4 = (void *)0x0;
  return;
}


//==== 0000906280 00906280_FUN_00906280 ====
void FUN_00906280(void);

// decompiled by BatchDecomp @ 00906280 name=FUN_00906280 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906280(void)

{
  _DAT_00983530 = ((void *)(0x009194a4u));
  if (DAT_00983534 != (void *)0x0) {
    operator_delete__(DAT_00983534);
  }
  _DAT_00983530 = ((void *)(0x00919488u));
  DAT_00983534 = (void *)0x0;
  return;
}


//==== 0000906540 00906540_FUN_00906540 ====
void FUN_00906540(void);

// decompiled by BatchDecomp @ 00906540 name=FUN_00906540 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906540(void)

{
  _DAT_009837b8 = ((void *)(0x009194a4u));
  if (DAT_009837bc != (void *)0x0) {
    operator_delete__(DAT_009837bc);
  }
  _DAT_009837b8 = ((void *)(0x00919488u));
  DAT_009837bc = (void *)0x0;
  return;
}


//==== 0000906580 00906580_FUN_00906580 ====
void FUN_00906580(void);

// decompiled by BatchDecomp @ 00906580 name=FUN_00906580 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906580(void)

{
  _DAT_00983748 = ((void *)(0x009194a4u));
  if (DAT_0098374c != (void *)0x0) {
    operator_delete__(DAT_0098374c);
  }
  _DAT_00983748 = ((void *)(0x00919488u));
  DAT_0098374c = (void *)0x0;
  return;
}


//==== 00009065c0 009065c0_FUN_009065c0 ====
void FUN_009065c0(void);

// decompiled by BatchDecomp @ 009065c0 name=FUN_009065c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009065c0(void)

{
  _DAT_00983788 = ((void *)(0x009194a4u));
  if (DAT_0098378c != (void *)0x0) {
    operator_delete__(DAT_0098378c);
  }
  _DAT_00983788 = ((void *)(0x00919488u));
  DAT_0098378c = (void *)0x0;
  return;
}


//==== 0000906600 00906600_FUN_00906600 ====
void FUN_00906600(void);

// decompiled by BatchDecomp @ 00906600 name=FUN_00906600 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906600(void)

{
  _DAT_00983778 = ((void *)(0x009194a4u));
  if (DAT_0098377c != (void *)0x0) {
    operator_delete__(DAT_0098377c);
  }
  _DAT_00983778 = ((void *)(0x00919488u));
  DAT_0098377c = (void *)0x0;
  return;
}


//==== 0000906640 00906640_FUN_00906640 ====
void FUN_00906640(void);

// decompiled by BatchDecomp @ 00906640 name=FUN_00906640 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906640(void)

{
  _DAT_00983738 = ((void *)(0x009194a4u));
  if (DAT_0098373c != (void *)0x0) {
    operator_delete__(DAT_0098373c);
  }
  _DAT_00983738 = ((void *)(0x00919488u));
  DAT_0098373c = (void *)0x0;
  return;
}


//==== 0000906680 00906680_FUN_00906680 ====
void FUN_00906680(void);

// decompiled by BatchDecomp @ 00906680 name=FUN_00906680 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906680(void)

{
  _DAT_00983798 = ((void *)(0x009194a4u));
  if (DAT_0098379c != (void *)0x0) {
    operator_delete__(DAT_0098379c);
  }
  _DAT_00983798 = ((void *)(0x00919488u));
  DAT_0098379c = (void *)0x0;
  return;
}


//==== 00009066c0 009066c0_FUN_009066c0 ====
void FUN_009066c0(void);

// decompiled by BatchDecomp @ 009066c0 name=FUN_009066c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009066c0(void)

{
  _DAT_00983768 = ((void *)(0x009194a4u));
  if (DAT_0098376c != (void *)0x0) {
    operator_delete__(DAT_0098376c);
  }
  _DAT_00983768 = ((void *)(0x00919488u));
  DAT_0098376c = (void *)0x0;
  return;
}


//==== 0000906700 00906700_FUN_00906700 ====
void FUN_00906700(void);

// decompiled by BatchDecomp @ 00906700 name=FUN_00906700 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906700(void)

{
  _DAT_00983758 = ((void *)(0x009194a4u));
  if (DAT_0098375c != (void *)0x0) {
    operator_delete__(DAT_0098375c);
  }
  _DAT_00983758 = ((void *)(0x00919488u));
  DAT_0098375c = (void *)0x0;
  return;
}


//==== 0000906740 00906740_FUN_00906740 ====
void FUN_00906740(void);

// decompiled by BatchDecomp @ 00906740 name=FUN_00906740 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906740(void)

{
  _DAT_009837a8 = ((void *)(0x009194a4u));
  if (DAT_009837ac != (void *)0x0) {
    operator_delete__(DAT_009837ac);
  }
  _DAT_009837a8 = ((void *)(0x00919488u));
  DAT_009837ac = (void *)0x0;
  return;
}


//==== 00009069e0 009069e0_FUN_009069e0 ====
void FUN_009069e0(void);

// decompiled by BatchDecomp @ 009069e0 name=FUN_009069e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009069e0(void)

{
  _DAT_00983a20 = ((void *)(0x009194a4u));
  if (DAT_00983a24 != (void *)0x0) {
    operator_delete__(DAT_00983a24);
  }
  _DAT_00983a20 = ((void *)(0x00919488u));
  DAT_00983a24 = (void *)0x0;
  return;
}


//==== 0000906a20 00906a20_FUN_00906a20 ====
void FUN_00906a20(void);

// decompiled by BatchDecomp @ 00906a20 name=FUN_00906a20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906a20(void)

{
  _DAT_009839c0 = ((void *)(0x009194a4u));
  if (DAT_009839c4 != (void *)0x0) {
    operator_delete__(DAT_009839c4);
  }
  _DAT_009839c0 = ((void *)(0x00919488u));
  DAT_009839c4 = (void *)0x0;
  return;
}


//==== 0000906a60 00906a60_FUN_00906a60 ====
void FUN_00906a60(void);

// decompiled by BatchDecomp @ 00906a60 name=FUN_00906a60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906a60(void)

{
  _DAT_009839f0 = ((void *)(0x009194a4u));
  if (DAT_009839f4 != (void *)0x0) {
    operator_delete__(DAT_009839f4);
  }
  _DAT_009839f0 = ((void *)(0x00919488u));
  DAT_009839f4 = (void *)0x0;
  return;
}


//==== 0000906aa0 00906aa0_FUN_00906aa0 ====
void FUN_00906aa0(void);

// decompiled by BatchDecomp @ 00906aa0 name=FUN_00906aa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906aa0(void)

{
  _DAT_009839b0 = ((void *)(0x009194a4u));
  if (DAT_009839b4 != (void *)0x0) {
    operator_delete__(DAT_009839b4);
  }
  _DAT_009839b0 = ((void *)(0x00919488u));
  DAT_009839b4 = (void *)0x0;
  return;
}


//==== 0000906ae0 00906ae0_FUN_00906ae0 ====
void FUN_00906ae0(void);

// decompiled by BatchDecomp @ 00906ae0 name=FUN_00906ae0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906ae0(void)

{
  _DAT_009839a0 = ((void *)(0x009194a4u));
  if (DAT_009839a4 != (void *)0x0) {
    operator_delete__(DAT_009839a4);
  }
  _DAT_009839a0 = ((void *)(0x00919488u));
  DAT_009839a4 = (void *)0x0;
  return;
}


//==== 0000906b20 00906b20_FUN_00906b20 ====
void FUN_00906b20(void);

// decompiled by BatchDecomp @ 00906b20 name=FUN_00906b20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906b20(void)

{
  _DAT_00983a30 = ((void *)(0x009194a4u));
  if (DAT_00983a34 != (void *)0x0) {
    operator_delete__(DAT_00983a34);
  }
  _DAT_00983a30 = ((void *)(0x00919488u));
  DAT_00983a34 = (void *)0x0;
  return;
}


//==== 0000906b60 00906b60_FUN_00906b60 ====
void FUN_00906b60(void);

// decompiled by BatchDecomp @ 00906b60 name=FUN_00906b60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906b60(void)

{
  _DAT_00983a00 = ((void *)(0x009194a4u));
  if (DAT_00983a04 != (void *)0x0) {
    operator_delete__(DAT_00983a04);
  }
  _DAT_00983a00 = ((void *)(0x00919488u));
  DAT_00983a04 = (void *)0x0;
  return;
}


//==== 0000906ba0 00906ba0_FUN_00906ba0 ====
void FUN_00906ba0(void);

// decompiled by BatchDecomp @ 00906ba0 name=FUN_00906ba0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906ba0(void)

{
  _DAT_009839e0 = ((void *)(0x009194a4u));
  if (DAT_009839e4 != (void *)0x0) {
    operator_delete__(DAT_009839e4);
  }
  _DAT_009839e0 = ((void *)(0x00919488u));
  DAT_009839e4 = (void *)0x0;
  return;
}


//==== 0000906be0 00906be0_FUN_00906be0 ====
void FUN_00906be0(void);

// decompiled by BatchDecomp @ 00906be0 name=FUN_00906be0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906be0(void)

{
  _DAT_009839d0 = ((void *)(0x009194a4u));
  if (DAT_009839d4 != (void *)0x0) {
    operator_delete__(DAT_009839d4);
  }
  _DAT_009839d0 = ((void *)(0x00919488u));
  DAT_009839d4 = (void *)0x0;
  return;
}


//==== 0000906c20 00906c20_FUN_00906c20 ====
void FUN_00906c20(void);

// decompiled by BatchDecomp @ 00906c20 name=FUN_00906c20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906c20(void)

{
  _DAT_00983a10 = ((void *)(0x009194a4u));
  if (DAT_00983a14 != (void *)0x0) {
    operator_delete__(DAT_00983a14);
  }
  _DAT_00983a10 = ((void *)(0x00919488u));
  DAT_00983a14 = (void *)0x0;
  return;
}


//==== 0000906ee0 00906ee0_FUN_00906ee0 ====
void FUN_00906ee0(void);

// decompiled by BatchDecomp @ 00906ee0 name=FUN_00906ee0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906ee0(void)

{
  _DAT_00983c98 = ((void *)(0x009194a4u));
  if (DAT_00983c9c != (void *)0x0) {
    operator_delete__(DAT_00983c9c);
  }
  _DAT_00983c98 = ((void *)(0x00919488u));
  DAT_00983c9c = (void *)0x0;
  return;
}


//==== 0000906f20 00906f20_FUN_00906f20 ====
void FUN_00906f20(void);

// decompiled by BatchDecomp @ 00906f20 name=FUN_00906f20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906f20(void)

{
  _DAT_00983c38 = ((void *)(0x009194a4u));
  if (DAT_00983c3c != (void *)0x0) {
    operator_delete__(DAT_00983c3c);
  }
  _DAT_00983c38 = ((void *)(0x00919488u));
  DAT_00983c3c = (void *)0x0;
  return;
}


//==== 0000906f60 00906f60_FUN_00906f60 ====
void FUN_00906f60(void);

// decompiled by BatchDecomp @ 00906f60 name=FUN_00906f60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906f60(void)

{
  _DAT_00983c68 = ((void *)(0x009194a4u));
  if (DAT_00983c6c != (void *)0x0) {
    operator_delete__(DAT_00983c6c);
  }
  _DAT_00983c68 = ((void *)(0x00919488u));
  DAT_00983c6c = (void *)0x0;
  return;
}


//==== 0000906fa0 00906fa0_FUN_00906fa0 ====
void FUN_00906fa0(void);

// decompiled by BatchDecomp @ 00906fa0 name=FUN_00906fa0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906fa0(void)

{
  _DAT_00983c28 = ((void *)(0x009194a4u));
  if (DAT_00983c2c != (void *)0x0) {
    operator_delete__(DAT_00983c2c);
  }
  _DAT_00983c28 = ((void *)(0x00919488u));
  DAT_00983c2c = (void *)0x0;
  return;
}


//==== 0000906ff0 00906ff0_FUN_00906ff0 ====
void FUN_00906ff0(void);

// decompiled by BatchDecomp @ 00906ff0 name=FUN_00906ff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00906ff0(void)

{
  _DAT_00983c18 = ((void *)(0x009194a4u));
  if (DAT_00983c1c != (void *)0x0) {
    operator_delete__(DAT_00983c1c);
  }
  _DAT_00983c18 = ((void *)(0x00919488u));
  DAT_00983c1c = (void *)0x0;
  return;
}


//==== 0000907030 00907030_FUN_00907030 ====
void FUN_00907030(void);

// decompiled by BatchDecomp @ 00907030 name=FUN_00907030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907030(void)

{
  _DAT_00983ca8 = ((void *)(0x009194a4u));
  if (DAT_00983cac != (void *)0x0) {
    operator_delete__(DAT_00983cac);
  }
  _DAT_00983ca8 = ((void *)(0x00919488u));
  DAT_00983cac = (void *)0x0;
  return;
}


//==== 0000907070 00907070_FUN_00907070 ====
void FUN_00907070(void);

// decompiled by BatchDecomp @ 00907070 name=FUN_00907070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907070(void)

{
  _DAT_00983c78 = ((void *)(0x009194a4u));
  if (DAT_00983c7c != (void *)0x0) {
    operator_delete__(DAT_00983c7c);
  }
  _DAT_00983c78 = ((void *)(0x00919488u));
  DAT_00983c7c = (void *)0x0;
  return;
}


//==== 00009070b0 009070b0_FUN_009070b0 ====
void FUN_009070b0(void);

// decompiled by BatchDecomp @ 009070b0 name=FUN_009070b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009070b0(void)

{
  _DAT_00983c58 = ((void *)(0x009194a4u));
  if (DAT_00983c5c != (void *)0x0) {
    operator_delete__(DAT_00983c5c);
  }
  _DAT_00983c58 = ((void *)(0x00919488u));
  DAT_00983c5c = (void *)0x0;
  return;
}


//==== 00009070f0 009070f0_FUN_009070f0 ====
void FUN_009070f0(void);

// decompiled by BatchDecomp @ 009070f0 name=FUN_009070f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009070f0(void)

{
  _DAT_00983c48 = ((void *)(0x009194a4u));
  if (DAT_00983c4c != (void *)0x0) {
    operator_delete__(DAT_00983c4c);
  }
  _DAT_00983c48 = ((void *)(0x00919488u));
  DAT_00983c4c = (void *)0x0;
  return;
}


//==== 0000907130 00907130_FUN_00907130 ====
void FUN_00907130(void);

// decompiled by BatchDecomp @ 00907130 name=FUN_00907130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907130(void)

{
  _DAT_00983c88 = ((void *)(0x009194a4u));
  if (DAT_00983c8c != (void *)0x0) {
    operator_delete__(DAT_00983c8c);
  }
  _DAT_00983c88 = ((void *)(0x00919488u));
  DAT_00983c8c = (void *)0x0;
  return;
}


//==== 0000907410 00907410_FUN_00907410 ====
void FUN_00907410(void);

// decompiled by BatchDecomp @ 00907410 name=FUN_00907410 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907410(void)

{
  _DAT_00983f28 = ((void *)(0x009194a4u));
  if (DAT_00983f2c != (void *)0x0) {
    operator_delete__(DAT_00983f2c);
  }
  _DAT_00983f28 = ((void *)(0x00919488u));
  DAT_00983f2c = (void *)0x0;
  return;
}


//==== 0000907450 00907450_FUN_00907450 ====
void FUN_00907450(void);

// decompiled by BatchDecomp @ 00907450 name=FUN_00907450 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907450(void)

{
  _DAT_00983ec8 = ((void *)(0x009194a4u));
  if (DAT_00983ecc != (void *)0x0) {
    operator_delete__(DAT_00983ecc);
  }
  _DAT_00983ec8 = ((void *)(0x00919488u));
  DAT_00983ecc = (void *)0x0;
  return;
}


//==== 0000907490 00907490_FUN_00907490 ====
void FUN_00907490(void);

// decompiled by BatchDecomp @ 00907490 name=FUN_00907490 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907490(void)

{
  _DAT_00983f08 = ((void *)(0x009194a4u));
  if (DAT_00983f0c != (void *)0x0) {
    operator_delete__(DAT_00983f0c);
  }
  _DAT_00983f08 = ((void *)(0x00919488u));
  DAT_00983f0c = (void *)0x0;
  return;
}


//==== 00009074d0 009074d0_FUN_009074d0 ====
void FUN_009074d0(void);

// decompiled by BatchDecomp @ 009074d0 name=FUN_009074d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009074d0(void)

{
  _DAT_00983ef8 = ((void *)(0x009194a4u));
  if (DAT_00983efc != (void *)0x0) {
    operator_delete__(DAT_00983efc);
  }
  _DAT_00983ef8 = ((void *)(0x00919488u));
  DAT_00983efc = (void *)0x0;
  return;
}


//==== 0000907510 00907510_FUN_00907510 ====
void FUN_00907510(void);

// decompiled by BatchDecomp @ 00907510 name=FUN_00907510 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907510(void)

{
  _DAT_00983f48 = ((void *)(0x009194a4u));
  if (DAT_00983f4c != (void *)0x0) {
    operator_delete__(DAT_00983f4c);
  }
  _DAT_00983f48 = ((void *)(0x00919488u));
  DAT_00983f4c = (void *)0x0;
  return;
}


//==== 0000907550 00907550_FUN_00907550 ====
void FUN_00907550(void);

// decompiled by BatchDecomp @ 00907550 name=FUN_00907550 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907550(void)

{
  _DAT_00983eb8 = ((void *)(0x009194a4u));
  if (DAT_00983ebc != (void *)0x0) {
    operator_delete__(DAT_00983ebc);
  }
  _DAT_00983eb8 = ((void *)(0x00919488u));
  DAT_00983ebc = (void *)0x0;
  return;
}


//==== 0000907590 00907590_FUN_00907590 ====
void FUN_00907590(void);

// decompiled by BatchDecomp @ 00907590 name=FUN_00907590 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907590(void)

{
  _DAT_00983f38 = ((void *)(0x009194a4u));
  if (DAT_00983f3c != (void *)0x0) {
    operator_delete__(DAT_00983f3c);
  }
  _DAT_00983f38 = ((void *)(0x00919488u));
  DAT_00983f3c = (void *)0x0;
  return;
}


//==== 00009075d0 009075d0_FUN_009075d0 ====
void FUN_009075d0(void);

// decompiled by BatchDecomp @ 009075d0 name=FUN_009075d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009075d0(void)

{
  _DAT_00983ee8 = ((void *)(0x009194a4u));
  if (DAT_00983eec != (void *)0x0) {
    operator_delete__(DAT_00983eec);
  }
  _DAT_00983ee8 = ((void *)(0x00919488u));
  DAT_00983eec = (void *)0x0;
  return;
}


//==== 0000907610 00907610_FUN_00907610 ====
void FUN_00907610(void);

// decompiled by BatchDecomp @ 00907610 name=FUN_00907610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907610(void)

{
  _DAT_00983ed8 = ((void *)(0x009194a4u));
  if (DAT_00983edc != (void *)0x0) {
    operator_delete__(DAT_00983edc);
  }
  _DAT_00983ed8 = ((void *)(0x00919488u));
  DAT_00983edc = (void *)0x0;
  return;
}


//==== 0000907650 00907650_FUN_00907650 ====
void FUN_00907650(void);

// decompiled by BatchDecomp @ 00907650 name=FUN_00907650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907650(void)

{
  _DAT_00983f58 = ((void *)(0x009194a4u));
  if (DAT_00983f5c != (void *)0x0) {
    operator_delete__(DAT_00983f5c);
  }
  _DAT_00983f58 = ((void *)(0x00919488u));
  DAT_00983f5c = (void *)0x0;
  return;
}


//==== 0000907690 00907690_FUN_00907690 ====
void FUN_00907690(void);

// decompiled by BatchDecomp @ 00907690 name=FUN_00907690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907690(void)

{
  _DAT_00983f18 = ((void *)(0x009194a4u));
  if (DAT_00983f1c != (void *)0x0) {
    operator_delete__(DAT_00983f1c);
  }
  _DAT_00983f18 = ((void *)(0x00919488u));
  DAT_00983f1c = (void *)0x0;
  return;
}


//==== 00009079d0 009079d0_FUN_009079d0 ====
void FUN_009079d0(void);

// decompiled by BatchDecomp @ 009079d0 name=FUN_009079d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009079d0(void)

{
  _DAT_00984230 = ((void *)(0x009194a4u));
  if (DAT_00984234 != (void *)0x0) {
    operator_delete__(DAT_00984234);
  }
  _DAT_00984230 = ((void *)(0x00919488u));
  DAT_00984234 = (void *)0x0;
  return;
}


//==== 0000907a10 00907a10_FUN_00907a10 ====
void FUN_00907a10(void);

// decompiled by BatchDecomp @ 00907a10 name=FUN_00907a10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907a10(void)

{
  _DAT_009841d0 = ((void *)(0x009194a4u));
  if (DAT_009841d4 != (void *)0x0) {
    operator_delete__(DAT_009841d4);
  }
  _DAT_009841d0 = ((void *)(0x00919488u));
  DAT_009841d4 = (void *)0x0;
  return;
}


//==== 0000907a50 00907a50_FUN_00907a50 ====
void FUN_00907a50(void);

// decompiled by BatchDecomp @ 00907a50 name=FUN_00907a50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907a50(void)

{
  _DAT_00984210 = ((void *)(0x009194a4u));
  if (DAT_00984214 != (void *)0x0) {
    operator_delete__(DAT_00984214);
  }
  _DAT_00984210 = ((void *)(0x00919488u));
  DAT_00984214 = (void *)0x0;
  return;
}


//==== 0000907a90 00907a90_FUN_00907a90 ====
void FUN_00907a90(void);

// decompiled by BatchDecomp @ 00907a90 name=FUN_00907a90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907a90(void)

{
  _DAT_00984200 = ((void *)(0x009194a4u));
  if (DAT_00984204 != (void *)0x0) {
    operator_delete__(DAT_00984204);
  }
  _DAT_00984200 = ((void *)(0x00919488u));
  DAT_00984204 = (void *)0x0;
  return;
}


//==== 0000907ad0 00907ad0_FUN_00907ad0 ====
void FUN_00907ad0(void);

// decompiled by BatchDecomp @ 00907ad0 name=FUN_00907ad0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907ad0(void)

{
  _DAT_00984250 = ((void *)(0x009194a4u));
  if (DAT_00984254 != (void *)0x0) {
    operator_delete__(DAT_00984254);
  }
  _DAT_00984250 = ((void *)(0x00919488u));
  DAT_00984254 = (void *)0x0;
  return;
}


//==== 0000907b10 00907b10_FUN_00907b10 ====
void FUN_00907b10(void);

// decompiled by BatchDecomp @ 00907b10 name=FUN_00907b10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907b10(void)

{
  _DAT_009841c0 = ((void *)(0x009194a4u));
  if (DAT_009841c4 != (void *)0x0) {
    operator_delete__(DAT_009841c4);
  }
  _DAT_009841c0 = ((void *)(0x00919488u));
  DAT_009841c4 = (void *)0x0;
  return;
}


//==== 0000907b50 00907b50_FUN_00907b50 ====
void FUN_00907b50(void);

// decompiled by BatchDecomp @ 00907b50 name=FUN_00907b50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907b50(void)

{
  _DAT_00984240 = ((void *)(0x009194a4u));
  if (DAT_00984244 != (void *)0x0) {
    operator_delete__(DAT_00984244);
  }
  _DAT_00984240 = ((void *)(0x00919488u));
  DAT_00984244 = (void *)0x0;
  return;
}


//==== 0000907b90 00907b90_FUN_00907b90 ====
void FUN_00907b90(void);

// decompiled by BatchDecomp @ 00907b90 name=FUN_00907b90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907b90(void)

{
  _DAT_009841f0 = ((void *)(0x009194a4u));
  if (DAT_009841f4 != (void *)0x0) {
    operator_delete__(DAT_009841f4);
  }
  _DAT_009841f0 = ((void *)(0x00919488u));
  DAT_009841f4 = (void *)0x0;
  return;
}


//==== 0000907bd0 00907bd0_FUN_00907bd0 ====
void FUN_00907bd0(void);

// decompiled by BatchDecomp @ 00907bd0 name=FUN_00907bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907bd0(void)

{
  _DAT_009841e0 = ((void *)(0x009194a4u));
  if (DAT_009841e4 != (void *)0x0) {
    operator_delete__(DAT_009841e4);
  }
  _DAT_009841e0 = ((void *)(0x00919488u));
  DAT_009841e4 = (void *)0x0;
  return;
}


//==== 0000907c10 00907c10_FUN_00907c10 ====
void FUN_00907c10(void);

// decompiled by BatchDecomp @ 00907c10 name=FUN_00907c10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907c10(void)

{
  _DAT_00984260 = ((void *)(0x009194a4u));
  if (DAT_00984264 != (void *)0x0) {
    operator_delete__(DAT_00984264);
  }
  _DAT_00984260 = ((void *)(0x00919488u));
  DAT_00984264 = (void *)0x0;
  return;
}


//==== 0000907c50 00907c50_FUN_00907c50 ====
void FUN_00907c50(void);

// decompiled by BatchDecomp @ 00907c50 name=FUN_00907c50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907c50(void)

{
  _DAT_00984220 = ((void *)(0x009194a4u));
  if (DAT_00984224 != (void *)0x0) {
    operator_delete__(DAT_00984224);
  }
  _DAT_00984220 = ((void *)(0x00919488u));
  DAT_00984224 = (void *)0x0;
  return;
}


//==== 0000907eb0 00907eb0_FUN_00907eb0 ====
void FUN_00907eb0(void);

// decompiled by BatchDecomp @ 00907eb0 name=FUN_00907eb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907eb0(void)

{
  _DAT_009843f8 = ((void *)(0x009194a4u));
  if (DAT_009843fc != (void *)0x0) {
    operator_delete__(DAT_009843fc);
  }
  _DAT_009843f8 = ((void *)(0x00919488u));
  DAT_009843fc = (void *)0x0;
  return;
}


//==== 0000907ef0 00907ef0_FUN_00907ef0 ====
void FUN_00907ef0(void);

// decompiled by BatchDecomp @ 00907ef0 name=FUN_00907ef0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907ef0(void)

{
  _DAT_00984438 = ((void *)(0x009194a4u));
  if (DAT_0098443c != (void *)0x0) {
    operator_delete__(DAT_0098443c);
  }
  _DAT_00984438 = ((void *)(0x00919488u));
  DAT_0098443c = (void *)0x0;
  return;
}


//==== 0000907f30 00907f30_FUN_00907f30 ====
void FUN_00907f30(void);

// decompiled by BatchDecomp @ 00907f30 name=FUN_00907f30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907f30(void)

{
  _DAT_00984428 = ((void *)(0x009194a4u));
  if (DAT_0098442c != (void *)0x0) {
    operator_delete__(DAT_0098442c);
  }
  _DAT_00984428 = ((void *)(0x00919488u));
  DAT_0098442c = (void *)0x0;
  return;
}


//==== 0000907f70 00907f70_FUN_00907f70 ====
void FUN_00907f70(void);

// decompiled by BatchDecomp @ 00907f70 name=FUN_00907f70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907f70(void)

{
  _DAT_009843e8 = ((void *)(0x009194a4u));
  if (DAT_009843ec != (void *)0x0) {
    operator_delete__(DAT_009843ec);
  }
  _DAT_009843e8 = ((void *)(0x00919488u));
  DAT_009843ec = (void *)0x0;
  return;
}


//==== 0000907fb0 00907fb0_FUN_00907fb0 ====
void FUN_00907fb0(void);

// decompiled by BatchDecomp @ 00907fb0 name=FUN_00907fb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907fb0(void)

{
  _DAT_00984418 = ((void *)(0x009194a4u));
  if (DAT_0098441c != (void *)0x0) {
    operator_delete__(DAT_0098441c);
  }
  _DAT_00984418 = ((void *)(0x00919488u));
  DAT_0098441c = (void *)0x0;
  return;
}


//==== 0000907ff0 00907ff0_FUN_00907ff0 ====
void FUN_00907ff0(void);

// decompiled by BatchDecomp @ 00907ff0 name=FUN_00907ff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00907ff0(void)

{
  _DAT_00984408 = ((void *)(0x009194a4u));
  if (DAT_0098440c != (void *)0x0) {
    operator_delete__(DAT_0098440c);
  }
  _DAT_00984408 = ((void *)(0x00919488u));
  DAT_0098440c = (void *)0x0;
  return;
}


//==== 0000908230 00908230_FUN_00908230 ====
void FUN_00908230(void);

// decompiled by BatchDecomp @ 00908230 name=FUN_00908230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908230(void)

{
  _DAT_00984658 = ((void *)(0x009194a4u));
  if (DAT_0098465c != (void *)0x0) {
    operator_delete__(DAT_0098465c);
  }
  _DAT_00984658 = ((void *)(0x00919488u));
  DAT_0098465c = (void *)0x0;
  return;
}


//==== 0000908270 00908270_FUN_00908270 ====
void FUN_00908270(void);

// decompiled by BatchDecomp @ 00908270 name=FUN_00908270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908270(void)

{
  _DAT_009845f8 = ((void *)(0x009194a4u));
  if (DAT_009845fc != (void *)0x0) {
    operator_delete__(DAT_009845fc);
  }
  _DAT_009845f8 = ((void *)(0x00919488u));
  DAT_009845fc = (void *)0x0;
  return;
}


//==== 00009082b0 009082b0_FUN_009082b0 ====
void FUN_009082b0(void);

// decompiled by BatchDecomp @ 009082b0 name=FUN_009082b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009082b0(void)

{
  _DAT_00984638 = ((void *)(0x009194a4u));
  if (DAT_0098463c != (void *)0x0) {
    operator_delete__(DAT_0098463c);
  }
  _DAT_00984638 = ((void *)(0x00919488u));
  DAT_0098463c = (void *)0x0;
  return;
}


//==== 00009082f0 009082f0_FUN_009082f0 ====
void FUN_009082f0(void);

// decompiled by BatchDecomp @ 009082f0 name=FUN_009082f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009082f0(void)

{
  _DAT_00984628 = ((void *)(0x009194a4u));
  if (DAT_0098462c != (void *)0x0) {
    operator_delete__(DAT_0098462c);
  }
  _DAT_00984628 = ((void *)(0x00919488u));
  DAT_0098462c = (void *)0x0;
  return;
}


//==== 0000908330 00908330_FUN_00908330 ====
void FUN_00908330(void);

// decompiled by BatchDecomp @ 00908330 name=FUN_00908330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908330(void)

{
  _DAT_00984678 = ((void *)(0x009194a4u));
  if (DAT_0098467c != (void *)0x0) {
    operator_delete__(DAT_0098467c);
  }
  _DAT_00984678 = ((void *)(0x00919488u));
  DAT_0098467c = (void *)0x0;
  return;
}


//==== 0000908370 00908370_FUN_00908370 ====
void FUN_00908370(void);

// decompiled by BatchDecomp @ 00908370 name=FUN_00908370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908370(void)

{
  _DAT_009845e8 = ((void *)(0x009194a4u));
  if (DAT_009845ec != (void *)0x0) {
    operator_delete__(DAT_009845ec);
  }
  _DAT_009845e8 = ((void *)(0x00919488u));
  DAT_009845ec = (void *)0x0;
  return;
}


//==== 00009083b0 009083b0_FUN_009083b0 ====
void FUN_009083b0(void);

// decompiled by BatchDecomp @ 009083b0 name=FUN_009083b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009083b0(void)

{
  _DAT_00984668 = ((void *)(0x009194a4u));
  if (DAT_0098466c != (void *)0x0) {
    operator_delete__(DAT_0098466c);
  }
  _DAT_00984668 = ((void *)(0x00919488u));
  DAT_0098466c = (void *)0x0;
  return;
}


//==== 00009083f0 009083f0_FUN_009083f0 ====
void FUN_009083f0(void);

// decompiled by BatchDecomp @ 009083f0 name=FUN_009083f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009083f0(void)

{
  _DAT_00984618 = ((void *)(0x009194a4u));
  if (DAT_0098461c != (void *)0x0) {
    operator_delete__(DAT_0098461c);
  }
  _DAT_00984618 = ((void *)(0x00919488u));
  DAT_0098461c = (void *)0x0;
  return;
}


//==== 0000908430 00908430_FUN_00908430 ====
void FUN_00908430(void);

// decompiled by BatchDecomp @ 00908430 name=FUN_00908430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908430(void)

{
  _DAT_00984608 = ((void *)(0x009194a4u));
  if (DAT_0098460c != (void *)0x0) {
    operator_delete__(DAT_0098460c);
  }
  _DAT_00984608 = ((void *)(0x00919488u));
  DAT_0098460c = (void *)0x0;
  return;
}


//==== 0000908470 00908470_FUN_00908470 ====
void FUN_00908470(void);

// decompiled by BatchDecomp @ 00908470 name=FUN_00908470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908470(void)

{
  _DAT_00984648 = ((void *)(0x009194a4u));
  if (DAT_0098464c != (void *)0x0) {
    operator_delete__(DAT_0098464c);
  }
  _DAT_00984648 = ((void *)(0x00919488u));
  DAT_0098464c = (void *)0x0;
  return;
}


//==== 00009086f0 009086f0_FUN_009086f0 ====
void FUN_009086f0(void);

// decompiled by BatchDecomp @ 009086f0 name=FUN_009086f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009086f0(void)

{
  _DAT_009848a0 = ((void *)(0x009194a4u));
  if (DAT_009848a4 != (void *)0x0) {
    operator_delete__(DAT_009848a4);
  }
  _DAT_009848a0 = ((void *)(0x00919488u));
  DAT_009848a4 = (void *)0x0;
  return;
}


//==== 0000908730 00908730_FUN_00908730 ====
void FUN_00908730(void);

// decompiled by BatchDecomp @ 00908730 name=FUN_00908730 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908730(void)

{
  _DAT_00984840 = ((void *)(0x009194a4u));
  if (DAT_00984844 != (void *)0x0) {
    operator_delete__(DAT_00984844);
  }
  _DAT_00984840 = ((void *)(0x00919488u));
  DAT_00984844 = (void *)0x0;
  return;
}


//==== 0000908770 00908770_FUN_00908770 ====
void FUN_00908770(void);

// decompiled by BatchDecomp @ 00908770 name=FUN_00908770 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908770(void)

{
  _DAT_00984880 = ((void *)(0x009194a4u));
  if (DAT_00984884 != (void *)0x0) {
    operator_delete__(DAT_00984884);
  }
  _DAT_00984880 = ((void *)(0x00919488u));
  DAT_00984884 = (void *)0x0;
  return;
}


//==== 00009087b0 009087b0_FUN_009087b0 ====
void FUN_009087b0(void);

// decompiled by BatchDecomp @ 009087b0 name=FUN_009087b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009087b0(void)

{
  _DAT_00984870 = ((void *)(0x009194a4u));
  if (DAT_00984874 != (void *)0x0) {
    operator_delete__(DAT_00984874);
  }
  _DAT_00984870 = ((void *)(0x00919488u));
  DAT_00984874 = (void *)0x0;
  return;
}


//==== 00009087f0 009087f0_FUN_009087f0 ====
void FUN_009087f0(void);

// decompiled by BatchDecomp @ 009087f0 name=FUN_009087f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009087f0(void)

{
  _DAT_00984830 = ((void *)(0x009194a4u));
  if (DAT_00984834 != (void *)0x0) {
    operator_delete__(DAT_00984834);
  }
  _DAT_00984830 = ((void *)(0x00919488u));
  DAT_00984834 = (void *)0x0;
  return;
}


//==== 0000908830 00908830_FUN_00908830 ====
void FUN_00908830(void);

// decompiled by BatchDecomp @ 00908830 name=FUN_00908830 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908830(void)

{
  _DAT_00984860 = ((void *)(0x009194a4u));
  if (DAT_00984864 != (void *)0x0) {
    operator_delete__(DAT_00984864);
  }
  _DAT_00984860 = ((void *)(0x00919488u));
  DAT_00984864 = (void *)0x0;
  return;
}


//==== 0000908870 00908870_FUN_00908870 ====
void FUN_00908870(void);

// decompiled by BatchDecomp @ 00908870 name=FUN_00908870 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908870(void)

{
  _DAT_00984850 = ((void *)(0x009194a4u));
  if (DAT_00984854 != (void *)0x0) {
    operator_delete__(DAT_00984854);
  }
  _DAT_00984850 = ((void *)(0x00919488u));
  DAT_00984854 = (void *)0x0;
  return;
}


//==== 00009088b0 009088b0_FUN_009088b0 ====
void FUN_009088b0(void);

// decompiled by BatchDecomp @ 009088b0 name=FUN_009088b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009088b0(void)

{
  _DAT_00984890 = ((void *)(0x009194a4u));
  if (DAT_00984894 != (void *)0x0) {
    operator_delete__(DAT_00984894);
  }
  _DAT_00984890 = ((void *)(0x00919488u));
  DAT_00984894 = (void *)0x0;
  return;
}


//==== 0000908b50 00908b50_FUN_00908b50 ====
void FUN_00908b50(void);

// decompiled by BatchDecomp @ 00908b50 name=FUN_00908b50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908b50(void)

{
  _DAT_00984b00 = ((void *)(0x009194a4u));
  if (DAT_00984b04 != (void *)0x0) {
    operator_delete__(DAT_00984b04);
  }
  _DAT_00984b00 = ((void *)(0x00919488u));
  DAT_00984b04 = (void *)0x0;
  return;
}


//==== 0000908b90 00908b90_FUN_00908b90 ====
void FUN_00908b90(void);

// decompiled by BatchDecomp @ 00908b90 name=FUN_00908b90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908b90(void)

{
  _DAT_00984aa0 = ((void *)(0x009194a4u));
  if (DAT_00984aa4 != (void *)0x0) {
    operator_delete__(DAT_00984aa4);
  }
  _DAT_00984aa0 = ((void *)(0x00919488u));
  DAT_00984aa4 = (void *)0x0;
  return;
}


//==== 0000908bd0 00908bd0_FUN_00908bd0 ====
void FUN_00908bd0(void);

// decompiled by BatchDecomp @ 00908bd0 name=FUN_00908bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908bd0(void)

{
  _DAT_00984ae0 = ((void *)(0x009194a4u));
  if (DAT_00984ae4 != (void *)0x0) {
    operator_delete__(DAT_00984ae4);
  }
  _DAT_00984ae0 = ((void *)(0x00919488u));
  DAT_00984ae4 = (void *)0x0;
  return;
}


//==== 0000908c10 00908c10_FUN_00908c10 ====
void FUN_00908c10(void);

// decompiled by BatchDecomp @ 00908c10 name=FUN_00908c10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908c10(void)

{
  _DAT_00984ad0 = ((void *)(0x009194a4u));
  if (DAT_00984ad4 != (void *)0x0) {
    operator_delete__(DAT_00984ad4);
  }
  _DAT_00984ad0 = ((void *)(0x00919488u));
  DAT_00984ad4 = (void *)0x0;
  return;
}


//==== 0000908c50 00908c50_FUN_00908c50 ====
void FUN_00908c50(void);

// decompiled by BatchDecomp @ 00908c50 name=FUN_00908c50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908c50(void)

{
  _DAT_00984b20 = ((void *)(0x009194a4u));
  if (DAT_00984b24 != (void *)0x0) {
    operator_delete__(DAT_00984b24);
  }
  _DAT_00984b20 = ((void *)(0x00919488u));
  DAT_00984b24 = (void *)0x0;
  return;
}


//==== 0000908c90 00908c90_FUN_00908c90 ====
void FUN_00908c90(void);

// decompiled by BatchDecomp @ 00908c90 name=FUN_00908c90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908c90(void)

{
  _DAT_00984a90 = ((void *)(0x009194a4u));
  if (DAT_00984a94 != (void *)0x0) {
    operator_delete__(DAT_00984a94);
  }
  _DAT_00984a90 = ((void *)(0x00919488u));
  DAT_00984a94 = (void *)0x0;
  return;
}


//==== 0000908cd0 00908cd0_FUN_00908cd0 ====
void FUN_00908cd0(void);

// decompiled by BatchDecomp @ 00908cd0 name=FUN_00908cd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908cd0(void)

{
  _DAT_00984b10 = ((void *)(0x009194a4u));
  if (DAT_00984b14 != (void *)0x0) {
    operator_delete__(DAT_00984b14);
  }
  _DAT_00984b10 = ((void *)(0x00919488u));
  DAT_00984b14 = (void *)0x0;
  return;
}


//==== 0000908d10 00908d10_FUN_00908d10 ====
void FUN_00908d10(void);

// decompiled by BatchDecomp @ 00908d10 name=FUN_00908d10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908d10(void)

{
  _DAT_00984ac0 = ((void *)(0x009194a4u));
  if (DAT_00984ac4 != (void *)0x0) {
    operator_delete__(DAT_00984ac4);
  }
  _DAT_00984ac0 = ((void *)(0x00919488u));
  DAT_00984ac4 = (void *)0x0;
  return;
}


//==== 0000908d50 00908d50_FUN_00908d50 ====
void FUN_00908d50(void);

// decompiled by BatchDecomp @ 00908d50 name=FUN_00908d50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908d50(void)

{
  _DAT_00984ab0 = ((void *)(0x009194a4u));
  if (DAT_00984ab4 != (void *)0x0) {
    operator_delete__(DAT_00984ab4);
  }
  _DAT_00984ab0 = ((void *)(0x00919488u));
  DAT_00984ab4 = (void *)0x0;
  return;
}


//==== 0000908d90 00908d90_FUN_00908d90 ====
void FUN_00908d90(void);

// decompiled by BatchDecomp @ 00908d90 name=FUN_00908d90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908d90(void)

{
  _DAT_00984b30 = ((void *)(0x009194a4u));
  if (DAT_00984b34 != (void *)0x0) {
    operator_delete__(DAT_00984b34);
  }
  _DAT_00984b30 = ((void *)(0x00919488u));
  DAT_00984b34 = (void *)0x0;
  return;
}


//==== 0000908dd0 00908dd0_FUN_00908dd0 ====
void FUN_00908dd0(void);

// decompiled by BatchDecomp @ 00908dd0 name=FUN_00908dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00908dd0(void)

{
  _DAT_00984af0 = ((void *)(0x009194a4u));
  if (DAT_00984af4 != (void *)0x0) {
    operator_delete__(DAT_00984af4);
  }
  _DAT_00984af0 = ((void *)(0x00919488u));
  DAT_00984af4 = (void *)0x0;
  return;
}


//==== 00009090d0 009090d0_FUN_009090d0 ====
void FUN_009090d0(void);

// decompiled by BatchDecomp @ 009090d0 name=FUN_009090d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009090d0(void)

{
  _DAT_00984dc0 = ((void *)(0x009194a4u));
  if (DAT_00984dc4 != (void *)0x0) {
    operator_delete__(DAT_00984dc4);
  }
  _DAT_00984dc0 = ((void *)(0x00919488u));
  DAT_00984dc4 = (void *)0x0;
  return;
}


//==== 0000909110 00909110_FUN_00909110 ====
void FUN_00909110(void);

// decompiled by BatchDecomp @ 00909110 name=FUN_00909110 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909110(void)

{
  _DAT_00984d60 = ((void *)(0x009194a4u));
  if (DAT_00984d64 != (void *)0x0) {
    operator_delete__(DAT_00984d64);
  }
  _DAT_00984d60 = ((void *)(0x00919488u));
  DAT_00984d64 = (void *)0x0;
  return;
}


//==== 0000909150 00909150_FUN_00909150 ====
void FUN_00909150(void);

// decompiled by BatchDecomp @ 00909150 name=FUN_00909150 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909150(void)

{
  _DAT_00984da0 = ((void *)(0x009194a4u));
  if (DAT_00984da4 != (void *)0x0) {
    operator_delete__(DAT_00984da4);
  }
  _DAT_00984da0 = ((void *)(0x00919488u));
  DAT_00984da4 = (void *)0x0;
  return;
}


//==== 0000909190 00909190_FUN_00909190 ====
void FUN_00909190(void);

// decompiled by BatchDecomp @ 00909190 name=FUN_00909190 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909190(void)

{
  _DAT_00984d90 = ((void *)(0x009194a4u));
  if (DAT_00984d94 != (void *)0x0) {
    operator_delete__(DAT_00984d94);
  }
  _DAT_00984d90 = ((void *)(0x00919488u));
  DAT_00984d94 = (void *)0x0;
  return;
}


//==== 00009091d0 009091d0_FUN_009091d0 ====
void FUN_009091d0(void);

// decompiled by BatchDecomp @ 009091d0 name=FUN_009091d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009091d0(void)

{
  _DAT_00984de0 = ((void *)(0x009194a4u));
  if (DAT_00984de4 != (void *)0x0) {
    operator_delete__(DAT_00984de4);
  }
  _DAT_00984de0 = ((void *)(0x00919488u));
  DAT_00984de4 = (void *)0x0;
  return;
}


//==== 0000909210 00909210_FUN_00909210 ====
void FUN_00909210(void);

// decompiled by BatchDecomp @ 00909210 name=FUN_00909210 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909210(void)

{
  _DAT_00984d50 = ((void *)(0x009194a4u));
  if (DAT_00984d54 != (void *)0x0) {
    operator_delete__(DAT_00984d54);
  }
  _DAT_00984d50 = ((void *)(0x00919488u));
  DAT_00984d54 = (void *)0x0;
  return;
}


//==== 0000909250 00909250_FUN_00909250 ====
void FUN_00909250(void);

// decompiled by BatchDecomp @ 00909250 name=FUN_00909250 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909250(void)

{
  _DAT_00984dd0 = ((void *)(0x009194a4u));
  if (DAT_00984dd4 != (void *)0x0) {
    operator_delete__(DAT_00984dd4);
  }
  _DAT_00984dd0 = ((void *)(0x00919488u));
  DAT_00984dd4 = (void *)0x0;
  return;
}


//==== 0000909290 00909290_FUN_00909290 ====
void FUN_00909290(void);

// decompiled by BatchDecomp @ 00909290 name=FUN_00909290 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909290(void)

{
  _DAT_00984d80 = ((void *)(0x009194a4u));
  if (DAT_00984d84 != (void *)0x0) {
    operator_delete__(DAT_00984d84);
  }
  _DAT_00984d80 = ((void *)(0x00919488u));
  DAT_00984d84 = (void *)0x0;
  return;
}


//==== 00009092d0 009092d0_FUN_009092d0 ====
void FUN_009092d0(void);

// decompiled by BatchDecomp @ 009092d0 name=FUN_009092d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009092d0(void)

{
  _DAT_00984d70 = ((void *)(0x009194a4u));
  if (DAT_00984d74 != (void *)0x0) {
    operator_delete__(DAT_00984d74);
  }
  _DAT_00984d70 = ((void *)(0x00919488u));
  DAT_00984d74 = (void *)0x0;
  return;
}


//==== 0000909310 00909310_FUN_00909310 ====
void FUN_00909310(void);

// decompiled by BatchDecomp @ 00909310 name=FUN_00909310 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909310(void)

{
  _DAT_00984df0 = ((void *)(0x009194a4u));
  if (DAT_00984df4 != (void *)0x0) {
    operator_delete__(DAT_00984df4);
  }
  _DAT_00984df0 = ((void *)(0x00919488u));
  DAT_00984df4 = (void *)0x0;
  return;
}


//==== 0000909350 00909350_FUN_00909350 ====
void FUN_00909350(void);

// decompiled by BatchDecomp @ 00909350 name=FUN_00909350 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909350(void)

{
  _DAT_00984db0 = ((void *)(0x009194a4u));
  if (DAT_00984db4 != (void *)0x0) {
    operator_delete__(DAT_00984db4);
  }
  _DAT_00984db0 = ((void *)(0x00919488u));
  DAT_00984db4 = (void *)0x0;
  return;
}


//==== 0000909650 00909650_FUN_00909650 ====
void FUN_00909650(void);

// decompiled by BatchDecomp @ 00909650 name=FUN_00909650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909650(void)

{
  _DAT_00985080 = ((void *)(0x009194a4u));
  if (DAT_00985084 != (void *)0x0) {
    operator_delete__(DAT_00985084);
  }
  _DAT_00985080 = ((void *)(0x00919488u));
  DAT_00985084 = (void *)0x0;
  return;
}


//==== 0000909690 00909690_FUN_00909690 ====
void FUN_00909690(void);

// decompiled by BatchDecomp @ 00909690 name=FUN_00909690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909690(void)

{
  _DAT_00985040 = ((void *)(0x009194a4u));
  if (DAT_00985044 != (void *)0x0) {
    operator_delete__(DAT_00985044);
  }
  _DAT_00985040 = ((void *)(0x00919488u));
  DAT_00985044 = (void *)0x0;
  return;
}


//==== 00009096d0 009096d0_FUN_009096d0 ====
void FUN_009096d0(void);

// decompiled by BatchDecomp @ 009096d0 name=FUN_009096d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009096d0(void)

{
  _DAT_00985060 = ((void *)(0x009194a4u));
  if (DAT_00985064 != (void *)0x0) {
    operator_delete__(DAT_00985064);
  }
  _DAT_00985060 = ((void *)(0x00919488u));
  DAT_00985064 = (void *)0x0;
  return;
}


//==== 0000909710 00909710_FUN_00909710 ====
void FUN_00909710(void);

// decompiled by BatchDecomp @ 00909710 name=FUN_00909710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909710(void)

{
  _DAT_00985050 = ((void *)(0x009194a4u));
  if (DAT_00985054 != (void *)0x0) {
    operator_delete__(DAT_00985054);
  }
  _DAT_00985050 = ((void *)(0x00919488u));
  DAT_00985054 = (void *)0x0;
  return;
}


//==== 0000909750 00909750_FUN_00909750 ====
void FUN_00909750(void);

// decompiled by BatchDecomp @ 00909750 name=FUN_00909750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909750(void)

{
  _DAT_009850a0 = ((void *)(0x009194a4u));
  if (DAT_009850a4 != (void *)0x0) {
    operator_delete__(DAT_009850a4);
  }
  _DAT_009850a0 = ((void *)(0x00919488u));
  DAT_009850a4 = (void *)0x0;
  return;
}


//==== 0000909790 00909790_FUN_00909790 ====
void FUN_00909790(void);

// decompiled by BatchDecomp @ 00909790 name=FUN_00909790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909790(void)

{
  _DAT_00985010 = ((void *)(0x009194a4u));
  if (DAT_00985014 != (void *)0x0) {
    operator_delete__(DAT_00985014);
  }
  _DAT_00985010 = ((void *)(0x00919488u));
  DAT_00985014 = (void *)0x0;
  return;
}


//==== 00009097d0 009097d0_FUN_009097d0 ====
void FUN_009097d0(void);

// decompiled by BatchDecomp @ 009097d0 name=FUN_009097d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009097d0(void)

{
  _DAT_00985090 = ((void *)(0x009194a4u));
  if (DAT_00985094 != (void *)0x0) {
    operator_delete__(DAT_00985094);
  }
  _DAT_00985090 = ((void *)(0x00919488u));
  DAT_00985094 = (void *)0x0;
  return;
}


//==== 0000909810 00909810_FUN_00909810 ====
void FUN_00909810(void);

// decompiled by BatchDecomp @ 00909810 name=FUN_00909810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909810(void)

{
  _DAT_00985030 = ((void *)(0x009194a4u));
  if (DAT_00985034 != (void *)0x0) {
    operator_delete__(DAT_00985034);
  }
  _DAT_00985030 = ((void *)(0x00919488u));
  DAT_00985034 = (void *)0x0;
  return;
}


//==== 0000909850 00909850_FUN_00909850 ====
void FUN_00909850(void);

// decompiled by BatchDecomp @ 00909850 name=FUN_00909850 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909850(void)

{
  _DAT_00985020 = ((void *)(0x009194a4u));
  if (DAT_00985024 != (void *)0x0) {
    operator_delete__(DAT_00985024);
  }
  _DAT_00985020 = ((void *)(0x00919488u));
  DAT_00985024 = (void *)0x0;
  return;
}


//==== 0000909890 00909890_FUN_00909890 ====
void FUN_00909890(void);

// decompiled by BatchDecomp @ 00909890 name=FUN_00909890 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909890(void)

{
  _DAT_009850b0 = ((void *)(0x009194a4u));
  if (DAT_009850b4 != (void *)0x0) {
    operator_delete__(DAT_009850b4);
  }
  _DAT_009850b0 = ((void *)(0x00919488u));
  DAT_009850b4 = (void *)0x0;
  return;
}


//==== 00009098d0 009098d0_FUN_009098d0 ====
void FUN_009098d0(void);

// decompiled by BatchDecomp @ 009098d0 name=FUN_009098d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009098d0(void)

{
  _DAT_00985070 = ((void *)(0x009194a4u));
  if (DAT_00985074 != (void *)0x0) {
    operator_delete__(DAT_00985074);
  }
  _DAT_00985070 = ((void *)(0x00919488u));
  DAT_00985074 = (void *)0x0;
  return;
}


//==== 0000909bd0 00909bd0_FUN_00909bd0 ====
void FUN_00909bd0(void);

// decompiled by BatchDecomp @ 00909bd0 name=FUN_00909bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909bd0(void)

{
  _DAT_00985348 = ((void *)(0x009194a4u));
  if (DAT_0098534c != (void *)0x0) {
    operator_delete__(DAT_0098534c);
  }
  _DAT_00985348 = ((void *)(0x00919488u));
  DAT_0098534c = (void *)0x0;
  return;
}


//==== 0000909c10 00909c10_FUN_00909c10 ====
void FUN_00909c10(void);

// decompiled by BatchDecomp @ 00909c10 name=FUN_00909c10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909c10(void)

{
  _DAT_00985308 = ((void *)(0x009194a4u));
  if (DAT_0098530c != (void *)0x0) {
    operator_delete__(DAT_0098530c);
  }
  _DAT_00985308 = ((void *)(0x00919488u));
  DAT_0098530c = (void *)0x0;
  return;
}


//==== 0000909c50 00909c50_FUN_00909c50 ====
void FUN_00909c50(void);

// decompiled by BatchDecomp @ 00909c50 name=FUN_00909c50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909c50(void)

{
  _DAT_00985328 = ((void *)(0x009194a4u));
  if (DAT_0098532c != (void *)0x0) {
    operator_delete__(DAT_0098532c);
  }
  _DAT_00985328 = ((void *)(0x00919488u));
  DAT_0098532c = (void *)0x0;
  return;
}


//==== 0000909c90 00909c90_FUN_00909c90 ====
void FUN_00909c90(void);

// decompiled by BatchDecomp @ 00909c90 name=FUN_00909c90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909c90(void)

{
  _DAT_00985318 = ((void *)(0x009194a4u));
  if (DAT_0098531c != (void *)0x0) {
    operator_delete__(DAT_0098531c);
  }
  _DAT_00985318 = ((void *)(0x00919488u));
  DAT_0098531c = (void *)0x0;
  return;
}


//==== 0000909cd0 00909cd0_FUN_00909cd0 ====
void FUN_00909cd0(void);

// decompiled by BatchDecomp @ 00909cd0 name=FUN_00909cd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909cd0(void)

{
  _DAT_00985368 = ((void *)(0x009194a4u));
  if (DAT_0098536c != (void *)0x0) {
    operator_delete__(DAT_0098536c);
  }
  _DAT_00985368 = ((void *)(0x00919488u));
  DAT_0098536c = (void *)0x0;
  return;
}


//==== 0000909d10 00909d10_FUN_00909d10 ====
void FUN_00909d10(void);

// decompiled by BatchDecomp @ 00909d10 name=FUN_00909d10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909d10(void)

{
  _DAT_009852d8 = ((void *)(0x009194a4u));
  if (DAT_009852dc != (void *)0x0) {
    operator_delete__(DAT_009852dc);
  }
  _DAT_009852d8 = ((void *)(0x00919488u));
  DAT_009852dc = (void *)0x0;
  return;
}


//==== 0000909d50 00909d50_FUN_00909d50 ====
void FUN_00909d50(void);

// decompiled by BatchDecomp @ 00909d50 name=FUN_00909d50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909d50(void)

{
  _DAT_00985358 = ((void *)(0x009194a4u));
  if (DAT_0098535c != (void *)0x0) {
    operator_delete__(DAT_0098535c);
  }
  _DAT_00985358 = ((void *)(0x00919488u));
  DAT_0098535c = (void *)0x0;
  return;
}


//==== 0000909d90 00909d90_FUN_00909d90 ====
void FUN_00909d90(void);

// decompiled by BatchDecomp @ 00909d90 name=FUN_00909d90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909d90(void)

{
  _DAT_009852f8 = ((void *)(0x009194a4u));
  if (DAT_009852fc != (void *)0x0) {
    operator_delete__(DAT_009852fc);
  }
  _DAT_009852f8 = ((void *)(0x00919488u));
  DAT_009852fc = (void *)0x0;
  return;
}


//==== 0000909dd0 00909dd0_FUN_00909dd0 ====
void FUN_00909dd0(void);

// decompiled by BatchDecomp @ 00909dd0 name=FUN_00909dd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909dd0(void)

{
  _DAT_009852e8 = ((void *)(0x009194a4u));
  if (DAT_009852ec != (void *)0x0) {
    operator_delete__(DAT_009852ec);
  }
  _DAT_009852e8 = ((void *)(0x00919488u));
  DAT_009852ec = (void *)0x0;
  return;
}


//==== 0000909e10 00909e10_FUN_00909e10 ====
void FUN_00909e10(void);

// decompiled by BatchDecomp @ 00909e10 name=FUN_00909e10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909e10(void)

{
  _DAT_00985378 = ((void *)(0x009194a4u));
  if (DAT_0098537c != (void *)0x0) {
    operator_delete__(DAT_0098537c);
  }
  _DAT_00985378 = ((void *)(0x00919488u));
  DAT_0098537c = (void *)0x0;
  return;
}


//==== 0000909e50 00909e50_FUN_00909e50 ====
void FUN_00909e50(void);

// decompiled by BatchDecomp @ 00909e50 name=FUN_00909e50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00909e50(void)

{
  _DAT_00985338 = ((void *)(0x009194a4u));
  if (DAT_0098533c != (void *)0x0) {
    operator_delete__(DAT_0098533c);
  }
  _DAT_00985338 = ((void *)(0x00919488u));
  DAT_0098533c = (void *)0x0;
  return;
}


//==== 000090a170 0090a170_FUN_0090a170 ====
void FUN_0090a170(void);

// decompiled by BatchDecomp @ 0090a170 name=FUN_0090a170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a170(void)

{
  _DAT_00985640 = ((void *)(0x009194a4u));
  if (DAT_00985644 != (void *)0x0) {
    operator_delete__(DAT_00985644);
  }
  _DAT_00985640 = ((void *)(0x00919488u));
  DAT_00985644 = (void *)0x0;
  return;
}


//==== 000090a1b0 0090a1b0_FUN_0090a1b0 ====
void FUN_0090a1b0(void);

// decompiled by BatchDecomp @ 0090a1b0 name=FUN_0090a1b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a1b0(void)

{
  _DAT_009855e0 = ((void *)(0x009194a4u));
  if (DAT_009855e4 != (void *)0x0) {
    operator_delete__(DAT_009855e4);
  }
  _DAT_009855e0 = ((void *)(0x00919488u));
  DAT_009855e4 = (void *)0x0;
  return;
}


//==== 000090a1f0 0090a1f0_FUN_0090a1f0 ====
void FUN_0090a1f0(void);

// decompiled by BatchDecomp @ 0090a1f0 name=FUN_0090a1f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a1f0(void)

{
  _DAT_00985620 = ((void *)(0x009194a4u));
  if (DAT_00985624 != (void *)0x0) {
    operator_delete__(DAT_00985624);
  }
  _DAT_00985620 = ((void *)(0x00919488u));
  DAT_00985624 = (void *)0x0;
  return;
}


//==== 000090a230 0090a230_FUN_0090a230 ====
void FUN_0090a230(void);

// decompiled by BatchDecomp @ 0090a230 name=FUN_0090a230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a230(void)

{
  _DAT_00985610 = ((void *)(0x009194a4u));
  if (DAT_00985614 != (void *)0x0) {
    operator_delete__(DAT_00985614);
  }
  _DAT_00985610 = ((void *)(0x00919488u));
  DAT_00985614 = (void *)0x0;
  return;
}


//==== 000090a270 0090a270_FUN_0090a270 ====
void FUN_0090a270(void);

// decompiled by BatchDecomp @ 0090a270 name=FUN_0090a270 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a270(void)

{
  _DAT_00985660 = ((void *)(0x009194a4u));
  if (DAT_00985664 != (void *)0x0) {
    operator_delete__(DAT_00985664);
  }
  _DAT_00985660 = ((void *)(0x00919488u));
  DAT_00985664 = (void *)0x0;
  return;
}


//==== 000090a2b0 0090a2b0_FUN_0090a2b0 ====
void FUN_0090a2b0(void);

// decompiled by BatchDecomp @ 0090a2b0 name=FUN_0090a2b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a2b0(void)

{
  _DAT_009855d0 = ((void *)(0x009194a4u));
  if (DAT_009855d4 != (void *)0x0) {
    operator_delete__(DAT_009855d4);
  }
  _DAT_009855d0 = ((void *)(0x00919488u));
  DAT_009855d4 = (void *)0x0;
  return;
}


//==== 000090a2f0 0090a2f0_FUN_0090a2f0 ====
void FUN_0090a2f0(void);

// decompiled by BatchDecomp @ 0090a2f0 name=FUN_0090a2f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a2f0(void)

{
  _DAT_00985650 = ((void *)(0x009194a4u));
  if (DAT_00985654 != (void *)0x0) {
    operator_delete__(DAT_00985654);
  }
  _DAT_00985650 = ((void *)(0x00919488u));
  DAT_00985654 = (void *)0x0;
  return;
}


//==== 000090a330 0090a330_FUN_0090a330 ====
void FUN_0090a330(void);

// decompiled by BatchDecomp @ 0090a330 name=FUN_0090a330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a330(void)

{
  _DAT_00985600 = ((void *)(0x009194a4u));
  if (DAT_00985604 != (void *)0x0) {
    operator_delete__(DAT_00985604);
  }
  _DAT_00985600 = ((void *)(0x00919488u));
  DAT_00985604 = (void *)0x0;
  return;
}


//==== 000090a370 0090a370_FUN_0090a370 ====
void FUN_0090a370(void);

// decompiled by BatchDecomp @ 0090a370 name=FUN_0090a370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a370(void)

{
  _DAT_009855f0 = ((void *)(0x009194a4u));
  if (DAT_009855f4 != (void *)0x0) {
    operator_delete__(DAT_009855f4);
  }
  _DAT_009855f0 = ((void *)(0x00919488u));
  DAT_009855f4 = (void *)0x0;
  return;
}


//==== 000090a3b0 0090a3b0_FUN_0090a3b0 ====
void FUN_0090a3b0(void);

// decompiled by BatchDecomp @ 0090a3b0 name=FUN_0090a3b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a3b0(void)

{
  _DAT_00985680 = ((void *)(0x009194a4u));
  if (DAT_00985684 != (void *)0x0) {
    operator_delete__(DAT_00985684);
  }
  _DAT_00985680 = ((void *)(0x00919488u));
  DAT_00985684 = (void *)0x0;
  return;
}


//==== 000090a3f0 0090a3f0_FUN_0090a3f0 ====
void FUN_0090a3f0(void);

// decompiled by BatchDecomp @ 0090a3f0 name=FUN_0090a3f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a3f0(void)

{
  _DAT_00985670 = ((void *)(0x009194a4u));
  if (DAT_00985674 != (void *)0x0) {
    operator_delete__(DAT_00985674);
  }
  _DAT_00985670 = ((void *)(0x00919488u));
  DAT_00985674 = (void *)0x0;
  return;
}


//==== 000090a430 0090a430_FUN_0090a430 ====
void FUN_0090a430(void);

// decompiled by BatchDecomp @ 0090a430 name=FUN_0090a430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a430(void)

{
  _DAT_00985630 = ((void *)(0x009194a4u));
  if (DAT_00985634 != (void *)0x0) {
    operator_delete__(DAT_00985634);
  }
  _DAT_00985630 = ((void *)(0x00919488u));
  DAT_00985634 = (void *)0x0;
  return;
}


//==== 000090a770 0090a770_FUN_0090a770 ====
void FUN_0090a770(void);

// decompiled by BatchDecomp @ 0090a770 name=FUN_0090a770 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a770(void)

{
  _DAT_00985938 = ((void *)(0x009194a4u));
  if (DAT_0098593c != (void *)0x0) {
    operator_delete__(DAT_0098593c);
  }
  _DAT_00985938 = ((void *)(0x00919488u));
  DAT_0098593c = (void *)0x0;
  return;
}


//==== 000090a7b0 0090a7b0_FUN_0090a7b0 ====
void FUN_0090a7b0(void);

// decompiled by BatchDecomp @ 0090a7b0 name=FUN_0090a7b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a7b0(void)

{
  _DAT_009858d8 = ((void *)(0x009194a4u));
  if (DAT_009858dc != (void *)0x0) {
    operator_delete__(DAT_009858dc);
  }
  _DAT_009858d8 = ((void *)(0x00919488u));
  DAT_009858dc = (void *)0x0;
  return;
}


//==== 000090a7f0 0090a7f0_FUN_0090a7f0 ====
void FUN_0090a7f0(void);

// decompiled by BatchDecomp @ 0090a7f0 name=FUN_0090a7f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a7f0(void)

{
  _DAT_00985918 = ((void *)(0x009194a4u));
  if (DAT_0098591c != (void *)0x0) {
    operator_delete__(DAT_0098591c);
  }
  _DAT_00985918 = ((void *)(0x00919488u));
  DAT_0098591c = (void *)0x0;
  return;
}


//==== 000090a830 0090a830_FUN_0090a830 ====
void FUN_0090a830(void);

// decompiled by BatchDecomp @ 0090a830 name=FUN_0090a830 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a830(void)

{
  _DAT_00985908 = ((void *)(0x009194a4u));
  if (DAT_0098590c != (void *)0x0) {
    operator_delete__(DAT_0098590c);
  }
  _DAT_00985908 = ((void *)(0x00919488u));
  DAT_0098590c = (void *)0x0;
  return;
}


//==== 000090a870 0090a870_FUN_0090a870 ====
void FUN_0090a870(void);

// decompiled by BatchDecomp @ 0090a870 name=FUN_0090a870 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a870(void)

{
  _DAT_00985958 = ((void *)(0x009194a4u));
  if (DAT_0098595c != (void *)0x0) {
    operator_delete__(DAT_0098595c);
  }
  _DAT_00985958 = ((void *)(0x00919488u));
  DAT_0098595c = (void *)0x0;
  return;
}


//==== 000090a8b0 0090a8b0_FUN_0090a8b0 ====
void FUN_0090a8b0(void);

// decompiled by BatchDecomp @ 0090a8b0 name=FUN_0090a8b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a8b0(void)

{
  _DAT_009858c8 = ((void *)(0x009194a4u));
  if (DAT_009858cc != (void *)0x0) {
    operator_delete__(DAT_009858cc);
  }
  _DAT_009858c8 = ((void *)(0x00919488u));
  DAT_009858cc = (void *)0x0;
  return;
}


//==== 000090a8f0 0090a8f0_FUN_0090a8f0 ====
void FUN_0090a8f0(void);

// decompiled by BatchDecomp @ 0090a8f0 name=FUN_0090a8f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a8f0(void)

{
  _DAT_00985978 = ((void *)(0x009194a4u));
  if (DAT_0098597c != (void *)0x0) {
    operator_delete__(DAT_0098597c);
  }
  _DAT_00985978 = ((void *)(0x00919488u));
  DAT_0098597c = (void *)0x0;
  return;
}

