// pilot_sweep_sweep04.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
#include "port_prelude.h"
typedef union {
  undefined1 raw[32];
} slice_view;
/* ---- GL PFN typedefs: Khronos headers directly (extraction-free) ---- */
#include <glcorearb.h>
#include <glext.h>
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define ____glewActiveStencilFaceEXT (*(PFNGLACTIVESTENCILFACEEXTPROC *)(0x0098c088u))
#define ____glewBlendBarrierKHR (*(PFNGLBLENDBARRIERKHRPROC *)(0x0098c530u))
#define ____glewBlendColorEXT (*(PFNGLBLENDCOLOREXTPROC *)(0x0098b054u))
#define ____glewBlendEquationEXT (*(PFNGLBLENDEQUATIONEXTPROC *)(0x0098b084u))
#define ____glewBlendEquationSeparateEXT (*(PFNGLBLENDEQUATIONSEPARATEEXTPROC *)(0x0098b068u))
#define ____glewBlendFuncSeparateEXT (*(PFNGLBLENDFUNCSEPARATEEXTPROC *)(0x0098b074u))
#define ____glewBlitFramebufferEXT (*(PFNGLBLITFRAMEBUFFEREXTPROC *)(0x0098bc54u))
#define ____glewBufferPageCommitmentARB (*(PFNGLBUFFERPAGECOMMITMENTARBPROC *)(0x0098a074u))
#define ____glewClampColorARB (*(PFNGLCLAMPCOLORARBPROC *)(0x0098ba00u))
#define ____glewClipControl (*(PFNGLCLIPCONTROLPROC *)(0x0098b9f8u))
#define ____glewConservativeRasterParameterfNV (*(PFNGLCONSERVATIVERASTERPARAMETERFNVPROC *)(0x00989e28u))
#define ____glewConservativeRasterParameteriNV (*(PFNGLCONSERVATIVERASTERPARAMETERINVPROC *)(0x00989e38u))
#define ____glewCopyBufferSubData (*(PFNGLCOPYBUFFERSUBDATAPROC *)(0x0098ba24u))
#define ____glewCopyImageSubData (*(PFNGLCOPYIMAGESUBDATAPROC *)(0x0098ba28u))
#define ____glewCopyImageSubDataNV (*(PFNGLCOPYIMAGESUBDATANVPROC *)(0x00989e40u))
#define ____glewCreateSyncFromCLeventARB (*(PFNGLCREATESYNCFROMCLEVENTARBPROC *)(0x0098b9b4u))
#define ____glewDepthBoundsEXT (*(PFNGLDEPTHBOUNDSEXTPROC *)(0x0098b204u))
#define ____glewDispatchComputeGroupSizeARB (*(PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC *)(0x0098ba18u))
#define ____glewDrawBuffersARB (*(PFNGLDRAWBUFFERSARBPROC *)(0x0098bdc4u))
#define ____glewDrawBuffersATI (*(PFNGLDRAWBUFFERSATIPROC *)(0x0098ab40u))
#define ____glewDrawRangeElementsEXT (*(PFNGLDRAWRANGEELEMENTSEXTPROC *)(0x0098bb78u))
#define ____glewDrawTextureNV (*(PFNGLDRAWTEXTURENVPROC *)(0x00989e64u))
#define ____glewFinishTextureSUNX (*(PFNGLFINISHTEXTURESUNXPROC *)(0x0098b5b4u))
#define ____glewFlushRasterSGIX (*(PFNGLFLUSHRASTERSGIXPROC *)(0x0098b418u))
#define ____glewFragmentCoverageColorNV (*(PFNGLFRAGMENTCOVERAGECOLORNVPROC *)(0x00989f44u))
#define ____glewFrameTerminatorGREMEDY (*(PFNGLFRAMETERMINATORGREMEDYPROC *)(0x0098c3dcu))
#define ____glewFrameZoomSGIX (*(PFNGLFRAMEZOOMSGIXPROC *)(0x0098b4fcu))
#define ____glewFramebufferTextureLayerEXT (*(PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC *)(0x0098c0b4u))
#define ____glewFramebufferTextureMultiviewOVR (*(PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC *)(0x0098b0ecu))
#define ____glewGetActiveAtomicCounterBufferiv (*(PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC *)(0x00989e74u))
#define ____glewGetInternalformatSampleivNV (*(PFNGLGETINTERNALFORMATSAMPLEIVNVPROC *)(0x0098a338u))
#define ____glewGetInternalformati64v (*(PFNGLGETINTERNALFORMATI64VPROC *)(0x0098c294u))
#define ____glewGetInternalformativ (*(PFNGLGETINTERNALFORMATIVPROC *)(0x0098c28cu))
#define ____glewImportSyncEXT (*(PFNGLIMPORTSYNCEXTPROC *)(0x0098c3d4u))
#define ____glewIndexFuncEXT (*(PFNGLINDEXFUNCEXTPROC *)(0x0098beb4u))
#define ____glewIndexMaterialEXT (*(PFNGLINDEXMATERIALEXTPROC *)(0x0098bebcu))
#define ____glewMaxShaderCompilerThreadsARB (*(PFNGLMAXSHADERCOMPILERTHREADSARBPROC *)(0x0098c4dcu))
#define ____glewMemoryBarrierByRegion (*(PFNGLMEMORYBARRIERBYREGIONPROC *)(0x0098b8d0u))
#define ____glewMinSampleShadingARB (*(PFNGLMINSAMPLESHADINGARBPROC *)(0x0098c5fcu))
#define ____glewPixelTexGenSGIX (*(PFNGLPIXELTEXGENSGIXPROC *)(0x0098b510u))
#define ____glewPolygonOffsetClampEXT (*(PFNGLPOLYGONOFFSETCLAMPEXTPROC *)(0x0098bf7cu))
#define ____glewPolygonOffsetEXT (*(PFNGLPOLYGONOFFSETEXTPROC *)(0x0098bf74u))
#define ____glewPrimitiveBoundingBoxARB (*(PFNGLPRIMITIVEBOUNDINGBOXARBPROC *)(0x0098b8d4u))
#define ____glewProgramVertexLimitNV (*(PFNGLPROGRAMVERTEXLIMITNVPROC *)(0x00989f8cu))
#define ____glewProvokingVertex (*(PFNGLPROVOKINGVERTEXPROC *)(0x0098c52cu))
#define ____glewProvokingVertexEXT (*(PFNGLPROVOKINGVERTEXEXTPROC *)(0x0098bf88u))
#define ____glewQueryObjectParameteruiAMD (*(PFNGLQUERYOBJECTPARAMETERUIAMDPROC *)(0x0098b57cu))
#define ____glewReferencePlaneSGIX (*(PFNGLREFERENCEPLANESGIXPROC *)(0x0098b51cu))
#define ____glewRenderbufferStorageMultisampleCoverageNV (*(PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC *)(0x00989f84u))
#define ____glewRenderbufferStorageMultisampleEXT (*(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC *)(0x0098bc5cu))
#define ____glewResizeBuffersMESA (*(PFNGLRESIZEBUFFERSMESAPROC *)(0x0098c5e4u))
#define ____glewSampleCoverageARB (*(PFNGLSAMPLECOVERAGEARBPROC *)(0x0098c35cu))
#define ____glewSetMultisamplefvAMD (*(PFNGLSETMULTISAMPLEFVAMDPROC *)(0x0098b60cu))
#define ____glewShaderStorageBlockBinding (*(PFNGLSHADERSTORAGEBLOCKBINDINGPROC *)(0x00989ff0u))
#define ____glewSpecializeShaderARB (*(PFNGLSPECIALIZESHADERARBPROC *)(0x0098bf50u))
#define ____glewStencilOpValueAMD (*(PFNGLSTENCILOPVALUEAMDPROC *)(0x0098b628u))
#define ____glewStringMarkerGREMEDY (*(PFNGLSTRINGMARKERGREMEDYPROC *)(0x0098c3e8u))
#define ____glewSubpixelPrecisionBiasNV (*(PFNGLSUBPIXELPRECISIONBIASNVPROC *)(0x00989e24u))
#define ____glewTagSampleBufferSGIX (*(PFNGLTAGSAMPLEBUFFERSGIXPROC *)(0x0098b558u))
#define ____glewTbufferMask3DFX (*(PFNGLTBUFFERMASK3DFXPROC *)(0x0098b4c8u))
#define ____glewTexBufferARB (*(PFNGLTEXBUFFERARBPROC *)(0x0098a0e8u))
#define ____glewTexBufferEXT (*(PFNGLTEXBUFFEREXTPROC *)(0x0098c0c0u))
#define ____glewTexImage3DEXT (*(PFNGLTEXIMAGE3DEXTPROC *)(0x0098c0b0u))
#define ____glewTextureBarrier (*(PFNGLTEXTUREBARRIERPROC *)(0x0098a0e0u))
#define ____glewTextureBarrierNV (*(PFNGLTEXTUREBARRIERNVPROC *)(0x0098a848u))
#define ____glewTextureNormalEXT (*(PFNGLTEXTURENORMALEXTPROC *)(0x0098c130u))
#define ____glewTextureView (*(PFNGLTEXTUREVIEWPROC *)(0x0098a1c4u))
#define ____glewVertexAttribDivisor (*(PFNGLVERTEXATTRIBDIVISORPROC *)(0x0098b44cu))
#define ____glewVertexAttribParameteriAMD (*(PFNGLVERTEXATTRIBPARAMETERIAMDPROC *)(0x0098b534u))
#define ____glewViewportPositionWScaleNV (*(PFNGLVIEWPORTPOSITIONWSCALENVPROC *)(0x00989d6cu))
#define ____glewViewportSwizzleNV (*(PFNGLVIEWPORTSWIZZLENVPROC *)(0x0098b09cu))
#define ____glewWindowRectanglesEXT (*(PFNGLWINDOWRECTANGLESEXTPROC *)(0x0098c3d0u))
#define DAT_00988998 (*(undefined1 *)(0x00988998u))
#define DAT_009889a8 (*(undefined1 *)(0x009889a8u))
#define DAT_009889b8 (*(undefined1 *)(0x009889b8u))
#define DAT_009889c8 (*(undefined1 *)(0x009889c8u))
#define DAT_009889d8 (*(undefined1 *)(0x009889d8u))
#define DAT_009889e8 (*(undefined1 *)(0x009889e8u))
#define DAT_009889f8 (*(undefined1 *)(0x009889f8u))
#define DAT_00988a08 (*(undefined1 *)(0x00988a08u))
#define DAT_00988a28 (*(undefined1 *)(0x00988a28u))
#define DAT_00988a48 (*(undefined1 *)(0x00988a48u))
#define DAT_00988a78 (*(undefined1 *)(0x00988a78u))
#define DAT_00988a88 (*(undefined1 *)(0x00988a88u))
#define DAT_00988aa8 (*(undefined1 *)(0x00988aa8u))
#define DAT_00988ac8 (*(undefined1 *)(0x00988ac8u))
#define DAT_00988ae8 (*(undefined1 *)(0x00988ae8u))
#define DAT_00988b08 (*(undefined1 *)(0x00988b08u))
#define DAT_00988b28 (*(undefined1 *)(0x00988b28u))
#define DAT_00988b38 (*(undefined1 *)(0x00988b38u))
#define DAT_00988b48 (*(undefined1 *)(0x00988b48u))
#define DAT_009895d0 (*(undefined1 *)(0x009895d0u))
#define DAT_009895e0 (*(undefined1 *)(0x009895e0u))
#define DAT_00989620 (*(undefined1 *)(0x00989620u))
#define DAT_00989630 (*(undefined1 *)(0x00989630u))
#define DAT_00989660 (*(undefined1 *)(0x00989660u))
#define DAT_00989670 (*(undefined1 *)(0x00989670u))
#define DAT_00989738 (*(undefined1 *)(0x00989738u))
#define DAT_00989748 (*(undefined1 *)(0x00989748u))
#define DAT_00989778 (*(undefined1 *)(0x00989778u))
#define DAT_00989788 (*(undefined1 *)(0x00989788u))
#define DAT_009897f0 (*(undefined1 *)(0x009897f0u))
#define DAT_00989800 (*(undefined1 *)(0x00989800u))
#define DAT_00989848 (*(undefined1 *)(0x00989848u))
#define DAT_00989858 (*(undefined1 *)(0x00989858u))
#define DAT_0098c964 (*(undefined1 *)(0x0098c964u))
#define DAT_0098c974 (*(undefined1 *)(0x0098c974u))
#define DAT_0098c9bc (*(undefined1 *)(0x0098c9bcu))
#define DAT_0098c9cc (*(undefined1 *)(0x0098c9ccu))
#define DAT_0098ca48 (*(undefined1 *)(0x0098ca48u))
#define DAT_0098ca58 (*(undefined1 *)(0x0098ca58u))
#define DAT_0098cab8 (*(undefined1 *)(0x0098cab8u))
#define DAT_0098cac8 (*(undefined1 *)(0x0098cac8u))
#define DAT_0098caf8 (*(undefined1 *)(0x0098caf8u))
#define DAT_0098cb08 (*(undefined1 *)(0x0098cb08u))
#define DAT_0098cc80 (*(undefined1 *)(0x0098cc80u))
#define DAT_0098cc90 (*(undefined1 *)(0x0098cc90u))
#define DAT_0098ccc0 (*(undefined1 *)(0x0098ccc0u))
#define DAT_0098ccd0 (*(undefined1 *)(0x0098ccd0u))
#define DAT_0098cd38 (*(undefined1 *)(0x0098cd38u))
#define DAT_0098cd48 (*(undefined1 *)(0x0098cd48u))
#define DAT_0098cd78 (*(undefined1 *)(0x0098cd78u))
#define DAT_0098cd88 (*(undefined1 *)(0x0098cd88u))
#define DAT_0098d010 (*(undefined1 *)(0x0098d010u))
#define DAT_0098d020 (*(undefined1 *)(0x0098d020u))
#define DAT_0098d050 (*(undefined1 *)(0x0098d050u))
#define DAT_0098d060 (*(undefined1 *)(0x0098d060u))
#define DAT_0098d0e0 (*(undefined1 *)(0x0098d0e0u))
#define DAT_0098d0f0 (*(undefined1 *)(0x0098d0f0u))
#define DAT_0098d188 (*(undefined1 *)(0x0098d188u))
#define DAT_0098d198 (*(undefined1 *)(0x0098d198u))
#define DAT_0098d1c8 (*(undefined1 *)(0x0098d1c8u))
#define DAT_0098d1d8 (*(undefined1 *)(0x0098d1d8u))
#define DAT_0098d220 (*(undefined1 *)(0x0098d220u))
#define DAT_0098d230 (*(undefined1 *)(0x0098d230u))
#define DAT_0098d260 (*(undefined1 *)(0x0098d260u))
#define DAT_0098d270 (*(undefined1 *)(0x0098d270u))
#define DAT_0098d2bc (*(undefined1 *)(0x0098d2bcu))
#define DAT_0098d2cc (*(undefined1 *)(0x0098d2ccu))
#define DAT_0098d308 (*(undefined1 *)(0x0098d308u))
#define DAT_0098d318 (*(undefined1 *)(0x0098d318u))
#define DAT_0099221c (*(undefined1 *)(0x0099221cu))
#define DAT_0099222c (*(undefined1 *)(0x0099222cu))
#define DAT_00992258 (*(undefined1 *)(0x00992258u))
#define DAT_00992268 (*(undefined1 *)(0x00992268u))
#define DAT_00992298 (*(undefined1 *)(0x00992298u))
#define DAT_009922a8 (*(undefined1 *)(0x009922a8u))
#define DAT_009922f0 (*(undefined1 *)(0x009922f0u))
#define DAT_00992300 (*(undefined1 *)(0x00992300u))
#define DAT_00992330 (*(undefined1 *)(0x00992330u))
#define DAT_00992340 (*(undefined1 *)(0x00992340u))
#define DAT_00992388 (*(undefined1 *)(0x00992388u))
#define DAT_00992398 (*(undefined1 *)(0x00992398u))
#define DAT_009923c8 (*(undefined1 *)(0x009923c8u))
#define DAT_009923d8 (*(undefined1 *)(0x009923d8u))
#define DAT_00992448 (*(undefined1 *)(0x00992448u))
#define DAT_00992458 (*(undefined1 *)(0x00992458u))
#define DAT_009924c8 (*(undefined1 *)(0x009924c8u))
#define DAT_009924d8 (*(undefined1 *)(0x009924d8u))
#define DAT_00992530 (*(undefined1 *)(0x00992530u))
#define DAT_00992540 (*(undefined1 *)(0x00992540u))
#define DAT_00992590 (*(undefined1 *)(0x00992590u))
#define DAT_009925a0 (*(undefined1 *)(0x009925a0u))
#define DAT_009925d0 (*(undefined1 *)(0x009925d0u))
#define DAT_009925e0 (*(undefined1 *)(0x009925e0u))
#define DAT_00992610 (*(undefined1 *)(0x00992610u))
#define DAT_00992620 (*(undefined1 *)(0x00992620u))
#define DAT_009929b0 (*(undefined1 *)(0x009929b0u))
#define DAT_009929c0 (*(undefined1 *)(0x009929c0u))
#define DAT_009929f4 (*(undefined1 *)(0x009929f4u))
#define DAT_00992a04 (*(undefined1 *)(0x00992a04u))
#define DAT_00992a70 (*(undefined1 *)(0x00992a70u))
#define DAT_00992a80 (*(undefined1 *)(0x00992a80u))
#define DAT_00992ab0 (*(undefined1 *)(0x00992ab0u))
#define DAT_00992ac0 (*(undefined1 *)(0x00992ac0u))
#define DAT_00992af0 (*(undefined1 *)(0x00992af0u))
#define DAT_00992b00 (*(undefined1 *)(0x00992b00u))
#define DAT_00992b48 (*(undefined1 *)(0x00992b48u))
#define DAT_00992b58 (*(undefined1 *)(0x00992b58u))
#define DAT_00992b88 (*(undefined1 *)(0x00992b88u))
#define DAT_00992b98 (*(undefined1 *)(0x00992b98u))
#define DAT_00992c00 (*(undefined1 *)(0x00992c00u))
#define DAT_00992c10 (*(undefined1 *)(0x00992c10u))
#define DAT_00992c60 (*(undefined1 *)(0x00992c60u))
#define DAT_00992c70 (*(undefined1 *)(0x00992c70u))
#define DAT_00992ca0 (*(undefined1 *)(0x00992ca0u))
#define DAT_00992cb0 (*(undefined1 *)(0x00992cb0u))
#define DAT_00992d00 (*(undefined1 *)(0x00992d00u))
#define DAT_00992d10 (*(undefined1 *)(0x00992d10u))
#define DAT_00992d40 (*(undefined1 *)(0x00992d40u))
#define DAT_00992d50 (*(undefined1 *)(0x00992d50u))
#define DAT_00992d98 (*(undefined1 *)(0x00992d98u))
#define DAT_00992da8 (*(undefined1 *)(0x00992da8u))
#define DAT_00992dd8 (*(undefined1 *)(0x00992dd8u))
#define DAT_00992de8 (*(undefined1 *)(0x00992de8u))
#define DAT_00992e30 (*(undefined1 *)(0x00992e30u))
#define DAT_00992e40 (*(undefined1 *)(0x00992e40u))
#define DAT_00992e70 (*(undefined1 *)(0x00992e70u))
#define DAT_00992e80 (*(undefined1 *)(0x00992e80u))
#define DAT_00992ee8 (*(undefined1 *)(0x00992ee8u))
#define DAT_00992ef8 (*(undefined1 *)(0x00992ef8u))
#define DAT_00992f28 (*(undefined1 *)(0x00992f28u))
#define DAT_00992f38 (*(undefined1 *)(0x00992f38u))
#define DAT_00992f68 (*(undefined1 *)(0x00992f68u))
#define DAT_00992f78 (*(undefined1 *)(0x00992f78u))
#define DAT_00992fe0 (*(undefined1 *)(0x00992fe0u))
#define DAT_00992ff0 (*(undefined1 *)(0x00992ff0u))
#define DAT_00993040 (*(undefined1 *)(0x00993040u))
#define DAT_00993050 (*(undefined1 *)(0x00993050u))
#define DAT_009930a0 (*(undefined1 *)(0x009930a0u))
#define DAT_009930b0 (*(undefined1 *)(0x009930b0u))
#define DAT_009930e0 (*(undefined1 *)(0x009930e0u))
#define DAT_009930f0 (*(undefined1 *)(0x009930f0u))
#define DAT_00993120 (*(undefined1 *)(0x00993120u))
#define DAT_00993130 (*(undefined1 *)(0x00993130u))
#define DAT_00993178 (*(undefined1 *)(0x00993178u))
#define DAT_00993188 (*(undefined1 *)(0x00993188u))
#define DAT_009931b8 (*(undefined1 *)(0x009931b8u))
#define DAT_009931c8 (*(undefined1 *)(0x009931c8u))
#define DAT_00993218 (*(undefined1 *)(0x00993218u))
#define DAT_00993228 (*(undefined1 *)(0x00993228u))
#define DAT_00993258 (*(undefined1 *)(0x00993258u))
#define DAT_00993268 (*(undefined1 *)(0x00993268u))
#define DAT_009932d8 (*(undefined1 *)(0x009932d8u))
#define DAT_009932e8 (*(undefined1 *)(0x009932e8u))

//==== 0000488550 00488550_FUN_00488550 ====
void __fastcall FUN_00488550(int param_1,int param_2);

// decompiled by BatchDecomp @ 00488550 name=FUN_00488550 conv=unknown body=25

void __fastcall FUN_00488550(int param_1,int param_2)

{
  if (*(FILE **)(param_1 + 0x10) != (FILE *)0x0) {
    fseek(*(FILE **)(param_1 + 0x10),param_2,1);
    return;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2;
  return;
}


//==== 00004885f0 004885f0_FUN_004885f0 ====
extern undefined4 FUN_00488570(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
int FUN_004885f0(void);

// decompiled by BatchDecomp @ 004885f0 name=FUN_004885f0 conv=unknown body=26

int FUN_004885f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00488570();
  iVar2 = FUN_00488570();
  return iVar2 + iVar1 * 0x10000;
}


//==== 0000488690 00488690_FUN_00488690 ====
extern undefined4 FUN_00488610(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
int FUN_00488690(void);

// decompiled by BatchDecomp @ 00488690 name=FUN_00488690 conv=unknown body=26

int FUN_00488690(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00488610();
  iVar2 = FUN_00488610();
  return iVar2 * 0x10000 + iVar1;
}


//==== 00004eb8f0 004eb8f0_MatchOrbitEnding ====
// decompiled by BatchDecomp @ 004eb8f0 name=MatchOrbitEnding conv=__cdecl body=28

/* void __cdecl Icons__MatchOrbitEnding(void) */

void __cdecl Icons__MatchOrbitEnding(void)

{
  glColor(White,1.0);
  EndingDiamond();
  PerspectiveOrbit();
  return;
}


//==== 00004fd8d0 004fd8d0_IsPauseMenuUp ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 004fd8d0 name=IsPauseMenuUp conv=__thiscall body=24

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall PauseMenuHandler__IsPauseMenuUp(void)const  */

bool __thiscall PauseMenuHandler__IsPauseMenuUp(PauseMenuHandler *this)

{
  if (((this->PauseMenu).Pointer != (UIWidget *)0x0) &&
     ((this->PauseMenu).Controller != (ReferenceController *)0x0)) {
    return true;
  }
  return false;
}


//==== 000059b860 0059b860_IsDamaged ====
// decompiled by BatchDecomp @ 0059b860 name=IsDamaged conv=__thiscall body=22

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall CrewCompartment__IsDamaged(void)const  */

bool __thiscall CrewCompartment__IsDamaged(CrewCompartment *this)

{
  bool bVar1;
  
  if (this->CrewIsAlive != false) {
    bVar1 = ModuleCompartment__IsDamaged((ModuleCompartment *)this);
    if (!bVar1) {
      return bVar1;
    }
  }
  return true;
}


//==== 00005fc120 005fc120_GetEccentricityComplement_Clear ====
// decompiled by BatchDecomp @ 005fc120 name=GetEccentricityComplement_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall FixedOrbit__GetEccentricityComplement_Clear(void)const  */

void __thiscall FixedOrbit__GetEccentricityComplement_Clear(FixedOrbit *this)

{
  *(undefined1 *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetEccentricityComplement_MemoizedValue).IsValidData = 0;
  return;
}


//==== 00005fc850 005fc850_GetEccentricityPeriapsisRoot_Clear ====
// decompiled by BatchDecomp @ 005fc850 name=GetEccentricityPeriapsisRoot_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall FixedOrbit__GetEccentricityPeriapsisRoot_Clear(void)const  */

void __thiscall FixedOrbit__GetEccentricityPeriapsisRoot_Clear(FixedOrbit *this)

{
  *(undefined1 *)&(this->GetEccentricityApoapsisRoot_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetEccentricityPeriapsisRoot_MemoizedValue).IsValidData = 0;
  return;
}


//==== 00006344a0 006344a0_GetEccentricityApoapsisRoot_Clear ====
// decompiled by BatchDecomp @ 006344a0 name=GetEccentricityApoapsisRoot_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall FixedOrbit__GetEccentricityApoapsisRoot_Clear(void)const  */

void __thiscall FixedOrbit__GetEccentricityApoapsisRoot_Clear(FixedOrbit *this)

{
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  *(undefined8 *)&(this->GetEccentricityApoapsisRoot_MemoizedValue).IsValidData = 0;
  return;
}


//==== 000064cab0 0064cab0_LauncherSubCompartment ====
// decompiled by BatchDecomp @ 0064cab0 name=LauncherSubCompartment conv=__thiscall body=20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall LauncherSubCompartment__LauncherSubCompartment(struct WeaponCompartment *) */

LauncherSubCompartment * __thiscall
LauncherSubCompartment__LauncherSubCompartment(LauncherSubCompartment *this,WeaponCompartment *param_1)

{
  this->Parent = param_1;
  this->SplitLaunches = true;
  this->LaunchWithOrder = true;
  return this;
}


//==== 0000671070 00671070_GetVelocityStateConstant_km__s_Clear ====
// decompiled by BatchDecomp @ 00671070 name=GetVelocityStateConstant_km__s_Clear conv=__thiscall body=19

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall FixedOrbit__GetVelocityStateConstant_km__s_Clear(void)const  */

void __thiscall FixedOrbit__GetVelocityStateConstant_km__s_Clear(FixedOrbit *this)

{
  *(undefined1 *)&(this->GetEccentricityComplement_MemoizedValue).Data = 0;
  *(undefined8 *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).IsValidData = 0;
  return;
}


//==== 000070f760 0070f760_GetApoapsis_km ====
// decompiled by BatchDecomp @ 0070f760 name=GetApoapsis_km conv=__thiscall body=13

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall FixedOrbit__GetApoapsis_km(void)const  */

double __thiscall FixedOrbit__GetApoapsis_km(FixedOrbit *this)

{
  return ((this->Elements).InclinationToRelativePlane_degrees + /*3ff0000000000000*/1.0) *
         (this->Elements).Eccentricity;
}


//==== 0000731330 00731330_GetHotKey ====
// decompiled by BatchDecomp @ 00731330 name=GetHotKey conv=__thiscall body=23

/* public: virtual struct KeyCombination __thiscall
   BalloonPopupPayloadInterface__GetHotKey(void)const  */

KeyCombination __thiscall
BalloonPopupPayloadInterface__GetHotKey(BalloonPopupPayloadInterface *this)

{
  InputModifiers in_EDX;
  KeyCombination KVar1;
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  KVar1.Modifier = in_EDX;
  KVar1.Key = (int)in_stack_00000004;
  return KVar1;
}


//==== 00007403c0 007403c0_GetHotKey ====
// decompiled by BatchDecomp @ 007403c0 name=GetHotKey conv=__thiscall body=23

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct KeyCombination __thiscall BalloonPopupNodePayload__GetHotKey(void)const
    */

KeyCombination __thiscall BalloonPopupNodePayload__GetHotKey(BalloonPopupNodePayload *this)

{
  InputModifiers in_EDX;
  KeyCombination KVar1;
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0x5a;
  in_stack_00000004[1] = 0;
  KVar1.Modifier = in_EDX;
  KVar1.Key = (int)in_stack_00000004;
  return KVar1;
}


//==== 000074b160 0074b160_TacticalAI ====
// decompiled by BatchDecomp @ 0074b160 name=TacticalAI conv=__thiscall body=20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall TacticalAI__TacticalAI(class TacticalManager *,bool) */

TacticalAI * __thiscall
TacticalAI__TacticalAI(TacticalAI *this,TacticalManager *param_1,bool param_2)

{
  this->Parent = param_1;
  this->ControlsAllies = param_2;
  return this;
}


//==== 00007c3330 007c3330_GetMass_kg ====
// decompiled by BatchDecomp @ 007c3330 name=GetMass_kg conv=__thiscall body=26

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall DebrisComponent__GetMass_kg(void)const  */

Maybe_L_double_G_ * __thiscall
DebrisComponent__GetMass_kg(DebrisComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(((this->Compartment).Pointer)->_pad_0x0_0 + 0x10))();
  __return_storage_ptr__->Data = (double)fVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}


//==== 00007e14b0 007e14b0_FUN_007e14b0 ====
void FUN_007e14b0(void);
extern undefined4 FUN_007e3cf0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e14b0 name=FUN_007e14b0 conv=unknown body=24

void FUN_007e14b0(void)

{
  undefined4 local_8;
  
  local_8 = 0;
  FUN_007e3cf0(&local_8);
  return;
}


//==== 0000808000 00808000_IsVisible ====
// decompiled by BatchDecomp @ 00808000 name=IsVisible conv=__thiscall body=11

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall OrderModeOverlay__IsVisible(void)const  */

bool __thiscall OrderModeOverlay__IsVisible(OrderModeOverlay *this)

{
  return this->OrderMode != None;
}


//==== 0000815e60 00815e60_GetDimensionScreenBounds_Clear ====
// decompiled by BatchDecomp @ 00815e60 name=GetDimensionScreenBounds_Clear conv=__thiscall body=28

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CompartmentButton__GetDimensionScreenBounds_Clear(void)const  */

void __thiscall CompartmentButton__GetDimensionScreenBounds_Clear(CompartmentButton *this)

{
  (this->GetDimensionScreenBounds_MemoizedValue).IsValidData = false;
  *(undefined4 *)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Lower.X = 0;
  *(undefined4 *)((int)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Lower.X + 4) = 0;
  *(undefined4 *)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Lower.Y = 0;
  *(undefined4 *)((int)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Lower.Y + 4) = 0;
  *(undefined4 *)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Upper.X = 0;
  *(undefined4 *)((int)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Upper.X + 4) = 0;
  *(undefined4 *)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Upper.Y = 0;
  *(undefined4 *)((int)&(this->GetDimensionScreenBounds_MemoizedValue).Data.Upper.Y + 4) = 0;
  return;
}


//==== 000081b5a0 0081b5a0_IsVisible ====
// decompiled by BatchDecomp @ 0081b5a0 name=IsVisible conv=__thiscall body=20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ModuleProblemIndicator__IsVisible(void)const  */

bool __thiscall ModuleProblemIndicator__IsVisible(ModuleProblemIndicator *this)

{
  return /*0000000000000000*/0.0 < this->VisibilityHysterisisCountdown_s;
}


//==== 000081bc20 0081bc20_PostTick ====
// decompiled by BatchDecomp @ 0081bc20 name=PostTick conv=__thiscall body=28

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftCompartmentUI__PostTick(double) */

void __thiscall SpacecraftCompartmentUI__PostTick(SpacecraftCompartmentUI *this,double param_1)

{
  if (this->RegenerationPending != false) {
    Regenerate(this);
    this->RegenerationPending = false;
  }
  return;
}


//==== 000081bc40 0081bc40_PostTick ====
// decompiled by BatchDecomp @ 0081bc40 name=PostTick conv=__thiscall body=28

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftUIOverlay__PostTick(double) */

void __thiscall SpacecraftUIOverlay__PostTick(SpacecraftUIOverlay *this,double param_1)

{
  if (this->RegenerationPending != false) {
    Regenerate(this);
    this->RegenerationPending = false;
  }
  return;
}


//==== 000081fd90 0081fd90_RequestRegenerate ====
// decompiled by BatchDecomp @ 0081fd90 name=RequestRegenerate conv=__thiscall body=17

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall SpacecraftCompartmentUI__RequestRegenerate(void) */

void __thiscall SpacecraftCompartmentUI__RequestRegenerate(SpacecraftCompartmentUI *this)

{
  UIWidget__PurgeChildWidgets((UIWidget *)this);
  this->RegenerationPending = true;
  return;
}


//==== 00008304c0 008304c0_IsShowingCombatNotifications ====
// decompiled by BatchDecomp @ 008304c0 name=IsShowingCombatNotifications conv=__thiscall body=15

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall HUDTactical__IsShowingCombatNotifications(void)const  */

bool __thiscall HUDTactical__IsShowingCombatNotifications(HUDTactical *this)

{
  bool bVar1;
  Preferences *this_00;
  
  this_00 = (Preferences *)Manager__GetOptions((Manager *)this->_pad_0x0_0);
  bVar1 = Preferences__IsShowingCombatNotifications(this_00);
  return bVar1;
}


//==== 0000830ba0 00830ba0_SetCameraLock ====
// decompiled by BatchDecomp @ 00830ba0 name=SetCameraLock conv=__thiscall body=16

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall HUDTactical__SetCameraLock(bool) */

void __thiscall HUDTactical__SetCameraLock(HUDTactical *this,bool param_1)

{
  this->CameraLocked = param_1;
  return;
}


//==== 0000846e90 00846e90_FUN_00846e90 ====
bool FUN_00846e90(void);

// decompiled by BatchDecomp @ 00846e90 name=FUN_00846e90 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00846e90(void)

{
  ____glewTbufferMask3DFX = wglGetProcAddress("glTbufferMask3DFX");
  return ____glewTbufferMask3DFX== (PROC)0x0;
}


//==== 0000846f90 00846f90_FUN_00846f90 ====
bool FUN_00846f90(void);

// decompiled by BatchDecomp @ 00846f90 name=FUN_00846f90 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00846f90(void)

{
  ____glewVertexAttribParameteriAMD = wglGetProcAddress("glVertexAttribParameteriAMD");
  return ____glewVertexAttribParameteriAMD== (PROC)0x0;
}


//==== 0000847040 00847040_FUN_00847040 ====
bool FUN_00847040(void);

// decompiled by BatchDecomp @ 00847040 name=FUN_00847040 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847040(void)

{
  ____glewQueryObjectParameteruiAMD = wglGetProcAddress("glQueryObjectParameteruiAMD");
  return ____glewQueryObjectParameteruiAMD== (PROC)0x0;
}


//==== 0000847160 00847160_FUN_00847160 ====
bool FUN_00847160(void);

// decompiled by BatchDecomp @ 00847160 name=FUN_00847160 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847160(void)

{
  ____glewSetMultisamplefvAMD = wglGetProcAddress("glSetMultisamplefvAMD");
  return ____glewSetMultisamplefvAMD== (PROC)0x0;
}


//==== 00008471c0 008471c0_FUN_008471c0 ====
bool FUN_008471c0(void);

// decompiled by BatchDecomp @ 008471c0 name=FUN_008471c0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008471c0(void)

{
  ____glewStencilOpValueAMD = wglGetProcAddress("glStencilOpValueAMD");
  return ____glewStencilOpValueAMD== (PROC)0x0;
}


//==== 00008477d0 008477d0_FUN_008477d0 ====
bool FUN_008477d0(void);

// decompiled by BatchDecomp @ 008477d0 name=FUN_008477d0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008477d0(void)

{
  ____glewMemoryBarrierByRegion = wglGetProcAddress("glMemoryBarrierByRegion");
  return ____glewMemoryBarrierByRegion== (PROC)0x0;
}


//==== 00008477f0 008477f0_FUN_008477f0 ====
bool FUN_008477f0(void);

// decompiled by BatchDecomp @ 008477f0 name=FUN_008477f0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008477f0(void)

{
  ____glewPrimitiveBoundingBoxARB = wglGetProcAddress("glPrimitiveBoundingBoxARB");
  return ____glewPrimitiveBoundingBoxARB== (PROC)0x0;
}


//==== 0000847a50 00847a50_FUN_00847a50 ====
bool FUN_00847a50(void);

// decompiled by BatchDecomp @ 00847a50 name=FUN_00847a50 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847a50(void)

{
  ____glewCreateSyncFromCLeventARB = wglGetProcAddress("glCreateSyncFromCLeventARB");
  return ____glewCreateSyncFromCLeventARB== (PROC)0x0;
}


//==== 0000847b20 00847b20_FUN_00847b20 ====
bool FUN_00847b20(void);

// decompiled by BatchDecomp @ 00847b20 name=FUN_00847b20 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847b20(void)

{
  ____glewClipControl = wglGetProcAddress("glClipControl");
  return ____glewClipControl== (PROC)0x0;
}


//==== 0000847b40 00847b40_FUN_00847b40 ====
bool FUN_00847b40(void);

// decompiled by BatchDecomp @ 00847b40 name=FUN_00847b40 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847b40(void)

{
  ____glewClampColorARB = wglGetProcAddress("glClampColorARB");
  return ____glewClampColorARB== (PROC)0x0;
}


//==== 0000847ba0 00847ba0_FUN_00847ba0 ====
bool FUN_00847ba0(void);

// decompiled by BatchDecomp @ 00847ba0 name=FUN_00847ba0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847ba0(void)

{
  ____glewDispatchComputeGroupSizeARB = wglGetProcAddress("glDispatchComputeGroupSizeARB");
  return ____glewDispatchComputeGroupSizeARB== (PROC)0x0;
}


//==== 0000847bc0 00847bc0_FUN_00847bc0 ====
bool FUN_00847bc0(void);

// decompiled by BatchDecomp @ 00847bc0 name=FUN_00847bc0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847bc0(void)

{
  ____glewCopyBufferSubData = wglGetProcAddress("glCopyBufferSubData");
  return ____glewCopyBufferSubData== (PROC)0x0;
}


//==== 0000847be0 00847be0_FUN_00847be0 ====
bool FUN_00847be0(void);

// decompiled by BatchDecomp @ 00847be0 name=FUN_00847be0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00847be0(void)

{
  ____glewCopyImageSubData = wglGetProcAddress("glCopyImageSubData");
  return ____glewCopyImageSubData== (PROC)0x0;
}


//==== 00008484e0 008484e0_FUN_008484e0 ====
bool FUN_008484e0(void);

// decompiled by BatchDecomp @ 008484e0 name=FUN_008484e0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008484e0(void)

{
  ____glewDrawBuffersARB = wglGetProcAddress("glDrawBuffersARB");
  return ____glewDrawBuffersARB== (PROC)0x0;
}


//==== 0000848960 00848960_FUN_00848960 ====
bool FUN_00848960(void);

// decompiled by BatchDecomp @ 00848960 name=FUN_00848960 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00848960(void)

{
  ____glewSpecializeShaderARB = wglGetProcAddress("glSpecializeShaderARB");
  return ____glewSpecializeShaderARB== (PROC)0x0;
}


//==== 00008491e0 008491e0_FUN_008491e0 ====
bool FUN_008491e0(void);

// decompiled by BatchDecomp @ 008491e0 name=FUN_008491e0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008491e0(void)

{
  ____glewGetInternalformativ = wglGetProcAddress("glGetInternalformativ");
  return ____glewGetInternalformativ== (PROC)0x0;
}


//==== 0000849200 00849200_FUN_00849200 ====
bool FUN_00849200(void);

// decompiled by BatchDecomp @ 00849200 name=FUN_00849200 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00849200(void)

{
  ____glewGetInternalformati64v = wglGetProcAddress("glGetInternalformati64v");
  return ____glewGetInternalformati64v== (PROC)0x0;
}


//==== 0000849440 00849440_FUN_00849440 ====
bool FUN_00849440(void);

// decompiled by BatchDecomp @ 00849440 name=FUN_00849440 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00849440(void)

{
  ____glewSampleCoverageARB = wglGetProcAddress("glSampleCoverageARB");
  return ____glewSampleCoverageARB== (PROC)0x0;
}


//==== 0000849820 00849820_FUN_00849820 ====
bool FUN_00849820(void);

// decompiled by BatchDecomp @ 00849820 name=FUN_00849820 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00849820(void)

{
  ____glewMaxShaderCompilerThreadsARB = wglGetProcAddress("glMaxShaderCompilerThreadsARB");
  return ____glewMaxShaderCompilerThreadsARB== (PROC)0x0;
}


//==== 0000849910 00849910_FUN_00849910 ====
bool FUN_00849910(void);

// decompiled by BatchDecomp @ 00849910 name=FUN_00849910 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00849910(void)

{
  ____glewProvokingVertex = wglGetProcAddress("glProvokingVertex");
  return ____glewProvokingVertex== (PROC)0x0;
}


//==== 0000849b40 00849b40_FUN_00849b40 ====
bool FUN_00849b40(void);

// decompiled by BatchDecomp @ 00849b40 name=FUN_00849b40 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00849b40(void)

{
  ____glewMinSampleShadingARB = wglGetProcAddress("glMinSampleShadingARB");
  return ____glewMinSampleShadingARB== (PROC)0x0;
}


//==== 000084a200 0084a200_FUN_0084a200 ====
bool FUN_0084a200(void);

// decompiled by BatchDecomp @ 0084a200 name=FUN_0084a200 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084a200(void)

{
  ____glewGetActiveAtomicCounterBufferiv = wglGetProcAddress("glGetActiveAtomicCounterBufferiv");
  return ____glewGetActiveAtomicCounterBufferiv== (PROC)0x0;
}


//==== 000084a5d0 0084a5d0_FUN_0084a5d0 ====
bool FUN_0084a5d0(void);

// decompiled by BatchDecomp @ 0084a5d0 name=FUN_0084a5d0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084a5d0(void)

{
  ____glewShaderStorageBlockBinding = wglGetProcAddress("glShaderStorageBlockBinding");
  return ____glewShaderStorageBlockBinding== (PROC)0x0;
}


//==== 000084a740 0084a740_FUN_0084a740 ====
bool FUN_0084a740(void);

// decompiled by BatchDecomp @ 0084a740 name=FUN_0084a740 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084a740(void)

{
  ____glewBufferPageCommitmentARB = wglGetProcAddress("glBufferPageCommitmentARB");
  return ____glewBufferPageCommitmentARB== (PROC)0x0;
}


//==== 000084a890 0084a890_FUN_0084a890 ====
bool FUN_0084a890(void);

// decompiled by BatchDecomp @ 0084a890 name=FUN_0084a890 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084a890(void)

{
  ____glewTextureBarrier = wglGetProcAddress("glTextureBarrier");
  return ____glewTextureBarrier== (PROC)0x0;
}


//==== 000084a8b0 0084a8b0_FUN_0084a8b0 ====
bool FUN_0084a8b0(void);

// decompiled by BatchDecomp @ 0084a8b0 name=FUN_0084a8b0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084a8b0(void)

{
  ____glewTexBufferARB = wglGetProcAddress("glTexBufferARB");
  return ____glewTexBufferARB== (PROC)0x0;
}


//==== 000084ab30 0084ab30_FUN_0084ab30 ====
bool FUN_0084ab30(void);

// decompiled by BatchDecomp @ 0084ab30 name=FUN_0084ab30 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ab30(void)

{
  ____glewTextureView = wglGetProcAddress("glTextureView");
  return ____glewTextureView== (PROC)0x0;
}


//==== 000084be30 0084be30_FUN_0084be30 ====
bool FUN_0084be30(void);

// decompiled by BatchDecomp @ 0084be30 name=FUN_0084be30 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084be30(void)

{
  ____glewDrawBuffersATI = wglGetProcAddress("glDrawBuffersATI");
  return ____glewDrawBuffersATI== (PROC)0x0;
}


//==== 000084c6c0 0084c6c0_FUN_0084c6c0 ====
bool FUN_0084c6c0(void);

// decompiled by BatchDecomp @ 0084c6c0 name=FUN_0084c6c0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084c6c0(void)

{
  ____glewBlendColorEXT = wglGetProcAddress("glBlendColorEXT");
  return ____glewBlendColorEXT== (PROC)0x0;
}


//==== 000084c6e0 0084c6e0_FUN_0084c6e0 ====
bool FUN_0084c6e0(void);

// decompiled by BatchDecomp @ 0084c6e0 name=FUN_0084c6e0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084c6e0(void)

{
  ____glewBlendEquationSeparateEXT = wglGetProcAddress("glBlendEquationSeparateEXT");
  return ____glewBlendEquationSeparateEXT== (PROC)0x0;
}


//==== 000084c700 0084c700_FUN_0084c700 ====
bool FUN_0084c700(void);

// decompiled by BatchDecomp @ 0084c700 name=FUN_0084c700 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084c700(void)

{
  ____glewBlendFuncSeparateEXT = wglGetProcAddress("glBlendFuncSeparateEXT");
  return ____glewBlendFuncSeparateEXT== (PROC)0x0;
}


//==== 000084c720 0084c720_FUN_0084c720 ====
bool FUN_0084c720(void);

// decompiled by BatchDecomp @ 0084c720 name=FUN_0084c720 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084c720(void)

{
  ____glewBlendEquationEXT = wglGetProcAddress("glBlendEquationEXT");
  return ____glewBlendEquationEXT== (PROC)0x0;
}


//==== 000084ca80 0084ca80_FUN_0084ca80 ====
bool FUN_0084ca80(void);

// decompiled by BatchDecomp @ 0084ca80 name=FUN_0084ca80 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ca80(void)

{
  ____glewDepthBoundsEXT = wglGetProcAddress("glDepthBoundsEXT");
  return ____glewDepthBoundsEXT== (PROC)0x0;
}


//==== 000084ddf0 0084ddf0_FUN_0084ddf0 ====
bool FUN_0084ddf0(void);

// decompiled by BatchDecomp @ 0084ddf0 name=FUN_0084ddf0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ddf0(void)

{
  ____glewDrawRangeElementsEXT = wglGetProcAddress("glDrawRangeElementsEXT");
  return ____glewDrawRangeElementsEXT== (PROC)0x0;
}


//==== 000084e030 0084e030_FUN_0084e030 ====
bool FUN_0084e030(void);

// decompiled by BatchDecomp @ 0084e030 name=FUN_0084e030 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084e030(void)

{
  ____glewBlitFramebufferEXT = wglGetProcAddress("glBlitFramebufferEXT");
  return ____glewBlitFramebufferEXT== (PROC)0x0;
}


//==== 000084e050 0084e050_FUN_0084e050 ====
bool FUN_0084e050(void);

// decompiled by BatchDecomp @ 0084e050 name=FUN_0084e050 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084e050(void)

{
  ____glewRenderbufferStorageMultisampleEXT =
       wglGetProcAddress("glRenderbufferStorageMultisampleEXT");
  return ____glewRenderbufferStorageMultisampleEXT== (PROC)0x0;
}


//==== 000084e680 0084e680_FUN_0084e680 ====
bool FUN_0084e680(void);

// decompiled by BatchDecomp @ 0084e680 name=FUN_0084e680 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084e680(void)

{
  ____glewIndexFuncEXT = wglGetProcAddress("glIndexFuncEXT");
  return ____glewIndexFuncEXT== (PROC)0x0;
}


//==== 000084e6a0 0084e6a0_FUN_0084e6a0 ====
bool FUN_0084e6a0(void);

// decompiled by BatchDecomp @ 0084e6a0 name=FUN_0084e6a0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084e6a0(void)

{
  ____glewIndexMaterialEXT = wglGetProcAddress("glIndexMaterialEXT");
  return ____glewIndexMaterialEXT== (PROC)0x0;
}


//==== 000084e8d0 0084e8d0_FUN_0084e8d0 ====
bool FUN_0084e8d0(void);

// decompiled by BatchDecomp @ 0084e8d0 name=FUN_0084e8d0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084e8d0(void)

{
  ____glewPolygonOffsetEXT = wglGetProcAddress("glPolygonOffsetEXT");
  return ____glewPolygonOffsetEXT== (PROC)0x0;
}


//==== 000084e8f0 0084e8f0_FUN_0084e8f0 ====
bool FUN_0084e8f0(void);

// decompiled by BatchDecomp @ 0084e8f0 name=FUN_0084e8f0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084e8f0(void)

{
  ____glewPolygonOffsetClampEXT = wglGetProcAddress("glPolygonOffsetClampEXT");
  return ____glewPolygonOffsetClampEXT== (PROC)0x0;
}


//==== 000084e910 0084e910_FUN_0084e910 ====
bool FUN_0084e910(void);

// decompiled by BatchDecomp @ 0084e910 name=FUN_0084e910 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084e910(void)

{
  ____glewProvokingVertexEXT = wglGetProcAddress("glProvokingVertexEXT");
  return ____glewProvokingVertexEXT== (PROC)0x0;
}


//==== 000084ec00 0084ec00_FUN_0084ec00 ====
bool FUN_0084ec00(void);

// decompiled by BatchDecomp @ 0084ec00 name=FUN_0084ec00 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ec00(void)

{
  ____glewActiveStencilFaceEXT = wglGetProcAddress("glActiveStencilFaceEXT");
  return ____glewActiveStencilFaceEXT== (PROC)0x0;
}


//==== 000084ec70 0084ec70_FUN_0084ec70 ====
bool FUN_0084ec70(void);

// decompiled by BatchDecomp @ 0084ec70 name=FUN_0084ec70 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ec70(void)

{
  ____glewTexImage3DEXT = wglGetProcAddress("glTexImage3DEXT");
  return ____glewTexImage3DEXT== (PROC)0x0;
}


//==== 000084ec90 0084ec90_FUN_0084ec90 ====
bool FUN_0084ec90(void);

// decompiled by BatchDecomp @ 0084ec90 name=FUN_0084ec90 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ec90(void)

{
  ____glewFramebufferTextureLayerEXT = wglGetProcAddress("glFramebufferTextureLayerEXT");
  return ____glewFramebufferTextureLayerEXT== (PROC)0x0;
}


//==== 000084ecb0 0084ecb0_FUN_0084ecb0 ====
bool FUN_0084ecb0(void);

// decompiled by BatchDecomp @ 0084ecb0 name=FUN_0084ecb0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ecb0(void)

{
  ____glewTexBufferEXT = wglGetProcAddress("glTexBufferEXT");
  return ____glewTexBufferEXT== (PROC)0x0;
}


//==== 000084edf0 0084edf0_FUN_0084edf0 ====
bool FUN_0084edf0(void);

// decompiled by BatchDecomp @ 0084edf0 name=FUN_0084edf0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084edf0(void)

{
  ____glewTextureNormalEXT = wglGetProcAddress("glTextureNormalEXT");
  return ____glewTextureNormalEXT== (PROC)0x0;
}


//==== 000084f4c0 0084f4c0_FUN_0084f4c0 ====
bool FUN_0084f4c0(void);

// decompiled by BatchDecomp @ 0084f4c0 name=FUN_0084f4c0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084f4c0(void)

{
  ____glewWindowRectanglesEXT = wglGetProcAddress("glWindowRectanglesEXT");
  return ____glewWindowRectanglesEXT== (PROC)0x0;
}


//==== 000084f4e0 0084f4e0_FUN_0084f4e0 ====
bool FUN_0084f4e0(void);

// decompiled by BatchDecomp @ 0084f4e0 name=FUN_0084f4e0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084f4e0(void)

{
  ____glewImportSyncEXT = wglGetProcAddress("glImportSyncEXT");
  return ____glewImportSyncEXT== (PROC)0x0;
}


//==== 000084f500 0084f500_FUN_0084f500 ====
bool FUN_0084f500(void);

// decompiled by BatchDecomp @ 0084f500 name=FUN_0084f500 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084f500(void)

{
  ____glewFrameTerminatorGREMEDY = wglGetProcAddress("glFrameTerminatorGREMEDY");
  return ____glewFrameTerminatorGREMEDY== (PROC)0x0;
}


//==== 000084f520 0084f520_FUN_0084f520 ====
bool FUN_0084f520(void);

// decompiled by BatchDecomp @ 0084f520 name=FUN_0084f520 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084f520(void)

{
  ____glewStringMarkerGREMEDY = wglGetProcAddress("glStringMarkerGREMEDY");
  return ____glewStringMarkerGREMEDY== (PROC)0x0;
}


//==== 000084f8c0 0084f8c0_FUN_0084f8c0 ====
bool FUN_0084f8c0(void);

// decompiled by BatchDecomp @ 0084f8c0 name=FUN_0084f8c0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084f8c0(void)

{
  ____glewBlendBarrierKHR = wglGetProcAddress("glBlendBarrierKHR");
  return ____glewBlendBarrierKHR== (PROC)0x0;
}


//==== 000084fac0 0084fac0_FUN_0084fac0 ====
bool FUN_0084fac0(void);

// decompiled by BatchDecomp @ 0084fac0 name=FUN_0084fac0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084fac0(void)

{
  ____glewResizeBuffersMESA = wglGetProcAddress("glResizeBuffersMESA");
  return ____glewResizeBuffersMESA== (PROC)0x0;
}


//==== 000084ff80 0084ff80_FUN_0084ff80 ====
bool FUN_0084ff80(void);

// decompiled by BatchDecomp @ 0084ff80 name=FUN_0084ff80 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0084ff80(void)

{
  ____glewViewportPositionWScaleNV = wglGetProcAddress("glViewportPositionWScaleNV");
  return ____glewViewportPositionWScaleNV== (PROC)0x0;
}


//==== 0000850170 00850170_FUN_00850170 ====
bool FUN_00850170(void);

// decompiled by BatchDecomp @ 00850170 name=FUN_00850170 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00850170(void)

{
  ____glewSubpixelPrecisionBiasNV = wglGetProcAddress("glSubpixelPrecisionBiasNV");
  return ____glewSubpixelPrecisionBiasNV== (PROC)0x0;
}


//==== 0000850190 00850190_FUN_00850190 ====
bool FUN_00850190(void);

// decompiled by BatchDecomp @ 00850190 name=FUN_00850190 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00850190(void)

{
  ____glewConservativeRasterParameterfNV = wglGetProcAddress("glConservativeRasterParameterfNV");
  return ____glewConservativeRasterParameterfNV== (PROC)0x0;
}


//==== 00008501b0 008501b0_FUN_008501b0 ====
bool FUN_008501b0(void);

// decompiled by BatchDecomp @ 008501b0 name=FUN_008501b0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008501b0(void)

{
  ____glewConservativeRasterParameteriNV = wglGetProcAddress("glConservativeRasterParameteriNV");
  return ____glewConservativeRasterParameteriNV== (PROC)0x0;
}


//==== 00008501d0 008501d0_FUN_008501d0 ====
bool FUN_008501d0(void);

// decompiled by BatchDecomp @ 008501d0 name=FUN_008501d0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008501d0(void)

{
  ____glewCopyImageSubDataNV = wglGetProcAddress("glCopyImageSubDataNV");
  return ____glewCopyImageSubDataNV== (PROC)0x0;
}


//==== 0000850240 00850240_FUN_00850240 ====
bool FUN_00850240(void);

// decompiled by BatchDecomp @ 00850240 name=FUN_00850240 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00850240(void)

{
  ____glewDrawTextureNV = wglGetProcAddress("glDrawTextureNV");
  return ____glewDrawTextureNV== (PROC)0x0;
}


//==== 00008504c0 008504c0_FUN_008504c0 ====
bool FUN_008504c0(void);

// decompiled by BatchDecomp @ 008504c0 name=FUN_008504c0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008504c0(void)

{
  ____glewFragmentCoverageColorNV = wglGetProcAddress("glFragmentCoverageColorNV");
  return ____glewFragmentCoverageColorNV== (PROC)0x0;
}


//==== 0000850570 00850570_FUN_00850570 ====
bool FUN_00850570(void);

// decompiled by BatchDecomp @ 00850570 name=FUN_00850570 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00850570(void)

{
  ____glewRenderbufferStorageMultisampleCoverageNV =
       wglGetProcAddress("glRenderbufferStorageMultisampleCoverageNV");
  return ____glewRenderbufferStorageMultisampleCoverageNV== (PROC)0x0;
}


//==== 0000850590 00850590_FUN_00850590 ====
bool FUN_00850590(void);

// decompiled by BatchDecomp @ 00850590 name=FUN_00850590 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00850590(void)

{
  ____glewProgramVertexLimitNV = wglGetProcAddress("glProgramVertexLimitNV");
  return ____glewProgramVertexLimitNV== (PROC)0x0;
}


//==== 0000850ef0 00850ef0_FUN_00850ef0 ====
bool FUN_00850ef0(void);

// decompiled by BatchDecomp @ 00850ef0 name=FUN_00850ef0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00850ef0(void)

{
  ____glewGetInternalformatSampleivNV = wglGetProcAddress("glGetInternalformatSampleivNV");
  return ____glewGetInternalformatSampleivNV== (PROC)0x0;
}


//==== 00008519d0 008519d0_FUN_008519d0 ====
bool FUN_008519d0(void);

// decompiled by BatchDecomp @ 008519d0 name=FUN_008519d0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008519d0(void)

{
  ____glewTextureBarrierNV = wglGetProcAddress("glTextureBarrierNV");
  return ____glewTextureBarrierNV== (PROC)0x0;
}


//==== 00008526e0 008526e0_FUN_008526e0 ====
bool FUN_008526e0(void);

// decompiled by BatchDecomp @ 008526e0 name=FUN_008526e0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008526e0(void)

{
  ____glewViewportSwizzleNV = wglGetProcAddress("glViewportSwizzleNV");
  return ____glewViewportSwizzleNV== (PROC)0x0;
}


//==== 0000852790 00852790_FUN_00852790 ====
bool FUN_00852790(void);

// decompiled by BatchDecomp @ 00852790 name=FUN_00852790 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00852790(void)

{
  ____glewFramebufferTextureMultiviewOVR = wglGetProcAddress("glFramebufferTextureMultiviewOVR");
  return ____glewFramebufferTextureMultiviewOVR== (PROC)0x0;
}


//==== 0000852e50 00852e50_FUN_00852e50 ====
bool FUN_00852e50(void);

// decompiled by BatchDecomp @ 00852e50 name=FUN_00852e50 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00852e50(void)

{
  ____glewFlushRasterSGIX = wglGetProcAddress("glFlushRasterSGIX");
  return ____glewFlushRasterSGIX== (PROC)0x0;
}


//==== 0000853020 00853020_FUN_00853020 ====
bool FUN_00853020(void);

// decompiled by BatchDecomp @ 00853020 name=FUN_00853020 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00853020(void)

{
  ____glewFrameZoomSGIX = wglGetProcAddress("glFrameZoomSGIX");
  return ____glewFrameZoomSGIX== (PROC)0x0;
}


//==== 0000853040 00853040_FUN_00853040 ====
bool FUN_00853040(void);

// decompiled by BatchDecomp @ 00853040 name=FUN_00853040 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00853040(void)

{
  ____glewPixelTexGenSGIX = wglGetProcAddress("glPixelTexGenSGIX");
  return ____glewPixelTexGenSGIX== (PROC)0x0;
}


//==== 0000853060 00853060_FUN_00853060 ====
bool FUN_00853060(void);

// decompiled by BatchDecomp @ 00853060 name=FUN_00853060 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00853060(void)

{
  ____glewReferencePlaneSGIX = wglGetProcAddress("glReferencePlaneSGIX");
  return ____glewReferencePlaneSGIX== (PROC)0x0;
}


//==== 00008530f0 008530f0_FUN_008530f0 ====
bool FUN_008530f0(void);

// decompiled by BatchDecomp @ 008530f0 name=FUN_008530f0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008530f0(void)

{
  ____glewTagSampleBufferSGIX = wglGetProcAddress("glTagSampleBufferSGIX");
  return ____glewTagSampleBufferSGIX== (PROC)0x0;
}


//==== 00008531c0 008531c0_FUN_008531c0 ====
bool FUN_008531c0(void);

// decompiled by BatchDecomp @ 008531c0 name=FUN_008531c0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_008531c0(void)

{
  ____glewFinishTextureSUNX = wglGetProcAddress("glFinishTextureSUNX");
  return ____glewFinishTextureSUNX== (PROC)0x0;
}


//==== 0000854fe0 00854fe0_FUN_00854fe0 ====
bool FUN_00854fe0(void);

// decompiled by BatchDecomp @ 00854fe0 name=FUN_00854fe0 conv=unknown body=22

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00854fe0(void)

{
  ____glewVertexAttribDivisor = wglGetProcAddress("glVertexAttribDivisor");
  return ____glewVertexAttribDivisor== (PROC)0x0;
}


//==== 0000855d60 00855d60_FUN_00855d60 ====
void FUN_00855d60(char *param_1);

// decompiled by BatchDecomp @ 00855d60 name=FUN_00855d60 conv=unknown body=24

void FUN_00855d60(char *param_1)

{
  char cVar1;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 == ' ') {
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
  }
  return;
}


//==== 00008bce90 008bce90_FUN_008bce90 ====
void __fastcall FUN_008bce90(Darray_L_struct_FileIO__Error_G_ *param_1);

// decompiled by BatchDecomp @ 008bce90 name=FUN_008bce90 conv=unknown body=24

void __fastcall FUN_008bce90(Darray_L_struct_FileIO__Error_G_ *param_1)

{
  int local_8;
  
  local_8 = 0;
  util__Darray_struct_FileIO__Error___SetSize(param_1,&local_8);
  return;
}


//==== 00008dc3e0 008dc3e0___glfwInputMonitorWindowChange ====
// decompiled by BatchDecomp @ 008dc3e0 name=__glfwInputMonitorWindowChange conv=unknown body=12

void __glfwInputMonitorWindowChange(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}


//==== 00008dc550 008dc550___glfwInputWindowDamage ====
// decompiled by BatchDecomp @ 008dc550 name=__glfwInputWindowDamage conv=unknown body=21

void __glfwInputWindowDamage(int param_1)

{
  if (*(code **)(param_1 + 0x250) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dc562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x250))();
    return;
  }
  return;
}


//==== 00008dc610 008dc610___glfwInputWindowMonitorChange ====
// decompiled by BatchDecomp @ 008dc610 name=__glfwInputWindowMonitorChange conv=unknown body=12

void __glfwInputWindowMonitorChange(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}


//==== 00008dcd70 008dcd70___glfwInputCursorEnter ====
// decompiled by BatchDecomp @ 008dcd70 name=__glfwInputCursorEnter conv=unknown body=21

void __glfwInputCursorEnter(int param_1)

{
  if (*(code **)(param_1 + 0x268) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dcd82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x268))();
    return;
  }
  return;
}


//==== 00008dce00 008dce00___glfwInputDrop ====
// decompiled by BatchDecomp @ 008dce00 name=__glfwInputDrop conv=unknown body=21

void __glfwInputDrop(int param_1)

{
  if (*(code **)(param_1 + 0x27c) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008dce12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x27c))();
    return;
  }
  return;
}


//==== 00008dd760 008dd760___glfwPlatformGetCurrentContext ====
// decompiled by BatchDecomp @ 008dd760 name=__glfwPlatformGetCurrentContext conv=unknown body=13

void __glfwPlatformGetCurrentContext(void)

{
  TlsGetValue(DAT_00994c3c);
  return;
}


//==== 00008dd770 008dd770___glfwPlatformSetCurrentContext ====
// decompiled by BatchDecomp @ 008dd770 name=__glfwPlatformSetCurrentContext conv=unknown body=17

void __glfwPlatformSetCurrentContext(LPVOID param_1)

{
  TlsSetValue(DAT_00994c3c,param_1);
  return;
}


//==== 00008dd790 008dd790___glfwTerminateThreadLocalStorageWin32 ====
// decompiled by BatchDecomp @ 008dd790 name=__glfwTerminateThreadLocalStorageWin32 conv=unknown body=22

void __glfwTerminateThreadLocalStorageWin32(void)

{
  if (DAT_00994c38 != 0) {
    TlsFree(DAT_00994c3c);
  }
  return;
}


//==== 00008df2e0 008df2e0___glfwPlatformShowWindow ====
// decompiled by BatchDecomp @ 008df2e0 name=__glfwPlatformShowWindow conv=unknown body=19

void __glfwPlatformShowWindow(int param_1)

{
  ShowWindow(*(HWND *)(param_1 + 0x280),5);
  return;
}


//==== 00008df300 008df300___glfwPlatformWindowFocused ====
// decompiled by BatchDecomp @ 008df300 name=__glfwPlatformWindowFocused conv=unknown body=24

bool __glfwPlatformWindowFocused(int param_1)

{
  HWND pHVar1;
  
  pHVar1 = GetActiveWindow();
  return *(HWND *)(param_1 + 0x280) == pHVar1;
}


//==== 00008df320 008df320___glfwPlatformWindowIconified ====
// decompiled by BatchDecomp @ 008df320 name=__glfwPlatformWindowIconified conv=unknown body=17

void __glfwPlatformWindowIconified(int param_1)

{
  IsIconic(*(HWND *)(param_1 + 0x280));
  return;
}


//==== 00008df340 008df340___glfwPlatformWindowMaximized ====
// decompiled by BatchDecomp @ 008df340 name=__glfwPlatformWindowMaximized conv=unknown body=17

void __glfwPlatformWindowMaximized(int param_1)

{
  IsZoomed(*(HWND *)(param_1 + 0x280));
  return;
}


//==== 00008df360 008df360___glfwPlatformWindowVisible ====
// decompiled by BatchDecomp @ 008df360 name=__glfwPlatformWindowVisible conv=unknown body=17

void __glfwPlatformWindowVisible(int param_1)

{
  IsWindowVisible(*(HWND *)(param_1 + 0x280));
  return;
}


//==== 00008df440 008df440___glfwUnregisterWindowClassWin32 ====
// decompiled by BatchDecomp @ 008df440 name=__glfwUnregisterWindowClassWin32 conv=unknown body=21

void __glfwUnregisterWindowClassWin32(void)

{
  HMODULE hInstance;
  
  hInstance = GetModuleHandleW((LPCWSTR)0x0);
  UnregisterClassW(L"GLFW30",hInstance);
  return;
}


//==== 00008e1930 008e1930___glfwTerminateWGL ====
// decompiled by BatchDecomp @ 008e1930 name=__glfwTerminateWGL conv=unknown body=17

void __glfwTerminateWGL(void)

{
  if (DAT_00994848 != (HMODULE)0x0) {
    FreeLibrary(DAT_00994848);
  }
  return;
}


//==== 00008e3b2f 008e3b2f__ftoul3 ====
// decompiled by BatchDecomp @ 008e3b2f name=_ftoul3 conv=__cdecl body=15

void __cdecl _ftoul3(void)

{
  _ftol3_NaN();
  return;
}


//==== 00008e3d10 008e3d10__dtoul3 ====
// decompiled by BatchDecomp @ 008e3d10 name=_dtoul3 conv=__cdecl body=15

void __cdecl _dtoul3(void)

{
  _dtol3_NaN();
  return;
}


//==== 00008e41f6 008e41f6___SEH_epilog4 ====
// decompiled by BatchDecomp @ 008e41f6 name=__SEH_epilog4 conv=__cdecl body=21

/* WARNING: This is an inlined function */

void __cdecl __SEH_epilog4(void)

{
  undefined4 *unaff_EBP;
  undefined4 unaff_retaddr;
  
  ExceptionList = (void *)unaff_EBP[-4];
  *unaff_EBP = unaff_retaddr;
  return;
}


//==== 00008e4690 008e4690_FUN_008e4690 ====
void FUN_008e4690(void);

// decompiled by BatchDecomp @ 008e4690 name=FUN_008e4690 conv=unknown body=29

void FUN_008e4690(void)

{
  if (DAT_00960f54 != (void *)0x0) {
    operator_delete__(DAT_00960f54);
    DAT_00960f54 = (void *)0x0;
  }
  return;
}


//==== 00008e46b0 008e46b0_FUN_008e46b0 ====
void FUN_008e46b0(void);

// decompiled by BatchDecomp @ 008e46b0 name=FUN_008e46b0 conv=unknown body=29

void FUN_008e46b0(void)

{
  if (DAT_00960f24 != (void *)0x0) {
    operator_delete__(DAT_00960f24);
    DAT_00960f24 = (void *)0x0;
  }
  return;
}


//==== 00008e46d0 008e46d0_FUN_008e46d0 ====
void FUN_008e46d0(void);

// decompiled by BatchDecomp @ 008e46d0 name=FUN_008e46d0 conv=unknown body=29

void FUN_008e46d0(void)

{
  if (DAT_00960f3c != (void *)0x0) {
    operator_delete__(DAT_00960f3c);
    DAT_00960f3c = (void *)0x0;
  }
  return;
}


//==== 00008e46f0 008e46f0_FUN_008e46f0 ====
void FUN_008e46f0(void);

// decompiled by BatchDecomp @ 008e46f0 name=FUN_008e46f0 conv=unknown body=29

void FUN_008e46f0(void)

{
  if (DAT_00960f30 != (void *)0x0) {
    operator_delete__(DAT_00960f30);
    DAT_00960f30 = (void *)0x0;
  }
  return;
}


//==== 00008e4710 008e4710_FUN_008e4710 ====
void FUN_008e4710(void);

// decompiled by BatchDecomp @ 008e4710 name=FUN_008e4710 conv=unknown body=29

void FUN_008e4710(void)

{
  if (DAT_00960f6c != (void *)0x0) {
    operator_delete__(DAT_00960f6c);
    DAT_00960f6c = (void *)0x0;
  }
  return;
}


//==== 00008e4730 008e4730_FUN_008e4730 ====
void FUN_008e4730(void);

// decompiled by BatchDecomp @ 008e4730 name=FUN_008e4730 conv=unknown body=29

void FUN_008e4730(void)

{
  if (DAT_00960f00 != (void *)0x0) {
    operator_delete__(DAT_00960f00);
    DAT_00960f00 = (void *)0x0;
  }
  return;
}


//==== 00008e4750 008e4750_FUN_008e4750 ====
void FUN_008e4750(void);

// decompiled by BatchDecomp @ 008e4750 name=FUN_008e4750 conv=unknown body=29

void FUN_008e4750(void)

{
  if (DAT_00960f60 != (void *)0x0) {
    operator_delete__(DAT_00960f60);
    DAT_00960f60 = (void *)0x0;
  }
  return;
}


//==== 00008e4770 008e4770_FUN_008e4770 ====
void FUN_008e4770(void);

// decompiled by BatchDecomp @ 008e4770 name=FUN_008e4770 conv=unknown body=29

void FUN_008e4770(void)

{
  if (DAT_00960f18 != (void *)0x0) {
    operator_delete__(DAT_00960f18);
    DAT_00960f18 = (void *)0x0;
  }
  return;
}


//==== 00008e4790 008e4790_FUN_008e4790 ====
void FUN_008e4790(void);

// decompiled by BatchDecomp @ 008e4790 name=FUN_008e4790 conv=unknown body=29

void FUN_008e4790(void)

{
  if (DAT_00960f0c != (void *)0x0) {
    operator_delete__(DAT_00960f0c);
    DAT_00960f0c = (void *)0x0;
  }
  return;
}


//==== 00008e47b0 008e47b0_FUN_008e47b0 ====
void FUN_008e47b0(void);

// decompiled by BatchDecomp @ 008e47b0 name=FUN_008e47b0 conv=unknown body=29

void FUN_008e47b0(void)

{
  if (DAT_00960f48 != (void *)0x0) {
    operator_delete__(DAT_00960f48);
    DAT_00960f48 = (void *)0x0;
  }
  return;
}


//==== 00008e4bd0 008e4bd0_FUN_008e4bd0 ====
void FUN_008e4bd0(void);

// decompiled by BatchDecomp @ 008e4bd0 name=FUN_008e4bd0 conv=unknown body=29

void FUN_008e4bd0(void)

{
  if (GlobalLevel.Data != (char *)0x0) {
    operator_delete__(GlobalLevel.Data);
    GlobalLevel.Data = (char *)0x0;
  }
  return;
}


//==== 00008e4bf0 008e4bf0_FUN_008e4bf0 ====
void FUN_008e4bf0(void);

// decompiled by BatchDecomp @ 008e4bf0 name=FUN_008e4bf0 conv=unknown body=29

void FUN_008e4bf0(void)

{
  if (DAT_009612b8 != (void *)0x0) {
    operator_delete__(DAT_009612b8);
    DAT_009612b8 = (void *)0x0;
  }
  return;
}


//==== 00008e4c10 008e4c10_FUN_008e4c10 ====
void FUN_008e4c10(void);

// decompiled by BatchDecomp @ 008e4c10 name=FUN_008e4c10 conv=unknown body=29

void FUN_008e4c10(void)

{
  if (DAT_00961264 != (void *)0x0) {
    operator_delete__(DAT_00961264);
    DAT_00961264 = (void *)0x0;
  }
  return;
}


//==== 00008e4c30 008e4c30_FUN_008e4c30 ====
void FUN_008e4c30(void);

// decompiled by BatchDecomp @ 008e4c30 name=FUN_008e4c30 conv=unknown body=29

void FUN_008e4c30(void)

{
  if (DAT_009612a0 != (void *)0x0) {
    operator_delete__(DAT_009612a0);
    DAT_009612a0 = (void *)0x0;
  }
  return;
}


//==== 00008e4c50 008e4c50_FUN_008e4c50 ====
void FUN_008e4c50(void);

// decompiled by BatchDecomp @ 008e4c50 name=FUN_008e4c50 conv=unknown body=29

void FUN_008e4c50(void)

{
  if (DAT_00961288 != (void *)0x0) {
    operator_delete__(DAT_00961288);
    DAT_00961288 = (void *)0x0;
  }
  return;
}


//==== 00008e4c70 008e4c70_FUN_008e4c70 ====
void FUN_008e4c70(void);

// decompiled by BatchDecomp @ 008e4c70 name=FUN_008e4c70 conv=unknown body=29

void FUN_008e4c70(void)

{
  if (DAT_00961258 != (void *)0x0) {
    operator_delete__(DAT_00961258);
    DAT_00961258 = (void *)0x0;
  }
  return;
}


//==== 00008e4c90 008e4c90_FUN_008e4c90 ====
void FUN_008e4c90(void);

// decompiled by BatchDecomp @ 008e4c90 name=FUN_008e4c90 conv=unknown body=29

void FUN_008e4c90(void)

{
  if (DAT_009612c4 != (void *)0x0) {
    operator_delete__(DAT_009612c4);
    DAT_009612c4 = (void *)0x0;
  }
  return;
}


//==== 00008e4cb0 008e4cb0_FUN_008e4cb0 ====
void FUN_008e4cb0(void);

// decompiled by BatchDecomp @ 008e4cb0 name=FUN_008e4cb0 conv=unknown body=29

void FUN_008e4cb0(void)

{
  if (DAT_0096124c != (void *)0x0) {
    operator_delete__(DAT_0096124c);
    DAT_0096124c = (void *)0x0;
  }
  return;
}


//==== 00008e4cd0 008e4cd0_FUN_008e4cd0 ====
void FUN_008e4cd0(void);

// decompiled by BatchDecomp @ 008e4cd0 name=FUN_008e4cd0 conv=unknown body=29

void FUN_008e4cd0(void)

{
  if (DAT_009612dc != (void *)0x0) {
    operator_delete__(DAT_009612dc);
    DAT_009612dc = (void *)0x0;
  }
  return;
}


//==== 00008e4cf0 008e4cf0_FUN_008e4cf0 ====
void FUN_008e4cf0(void);

// decompiled by BatchDecomp @ 008e4cf0 name=FUN_008e4cf0 conv=unknown body=29

void FUN_008e4cf0(void)

{
  if (DAT_00961294 != (void *)0x0) {
    operator_delete__(DAT_00961294);
    DAT_00961294 = (void *)0x0;
  }
  return;
}


//==== 00008e4d10 008e4d10_FUN_008e4d10 ====
void FUN_008e4d10(void);

// decompiled by BatchDecomp @ 008e4d10 name=FUN_008e4d10 conv=unknown body=29

void FUN_008e4d10(void)

{
  if (DAT_0096127c != (void *)0x0) {
    operator_delete__(DAT_0096127c);
    DAT_0096127c = (void *)0x0;
  }
  return;
}


//==== 00008e4d30 008e4d30_FUN_008e4d30 ====
void FUN_008e4d30(void);

// decompiled by BatchDecomp @ 008e4d30 name=FUN_008e4d30 conv=unknown body=29

void FUN_008e4d30(void)

{
  if (DAT_00961270 != (void *)0x0) {
    operator_delete__(DAT_00961270);
    DAT_00961270 = (void *)0x0;
  }
  return;
}


//==== 00008e4d50 008e4d50_FUN_008e4d50 ====
void FUN_008e4d50(void);

// decompiled by BatchDecomp @ 008e4d50 name=FUN_008e4d50 conv=unknown body=29

void FUN_008e4d50(void)

{
  if (DAT_009612d0 != (void *)0x0) {
    operator_delete__(DAT_009612d0);
    DAT_009612d0 = (void *)0x0;
  }
  return;
}


//==== 00008e4d70 008e4d70_FUN_008e4d70 ====
void FUN_008e4d70(void);

// decompiled by BatchDecomp @ 008e4d70 name=FUN_008e4d70 conv=unknown body=29

void FUN_008e4d70(void)

{
  if (DAT_009612ac != (void *)0x0) {
    operator_delete__(DAT_009612ac);
    DAT_009612ac = (void *)0x0;
  }
  return;
}


//==== 00008e5930 008e5930_FUN_008e5930 ====
void FUN_008e5930(void);

// decompiled by BatchDecomp @ 008e5930 name=FUN_008e5930 conv=unknown body=29

void FUN_008e5930(void)

{
  if (DAT_00961368 != (void *)0x0) {
    operator_delete__(DAT_00961368);
    DAT_00961368 = (void *)0x0;
  }
  return;
}


//==== 00008e5950 008e5950_FUN_008e5950 ====
void FUN_008e5950(void);

// decompiled by BatchDecomp @ 008e5950 name=FUN_008e5950 conv=unknown body=29

void FUN_008e5950(void)

{
  if (DAT_00961374 != (void *)0x0) {
    operator_delete__(DAT_00961374);
    DAT_00961374 = (void *)0x0;
  }
  return;
}


//==== 00008e60f0 008e60f0_FUN_008e60f0 ====
void FUN_008e60f0(void);

// decompiled by BatchDecomp @ 008e60f0 name=FUN_008e60f0 conv=unknown body=29

void FUN_008e60f0(void)

{
  if (DAT_00961a84 != (void *)0x0) {
    operator_delete__(DAT_00961a84);
    DAT_00961a84 = (void *)0x0;
  }
  return;
}


//==== 00008e6110 008e6110_FUN_008e6110 ====
void FUN_008e6110(void);

// decompiled by BatchDecomp @ 008e6110 name=FUN_008e6110 conv=unknown body=29

void FUN_008e6110(void)

{
  if (DAT_00961ac0 != (void *)0x0) {
    operator_delete__(DAT_00961ac0);
    DAT_00961ac0 = (void *)0x0;
  }
  return;
}


//==== 00008e6130 008e6130_FUN_008e6130 ====
void FUN_008e6130(void);

// decompiled by BatchDecomp @ 008e6130 name=FUN_008e6130 conv=unknown body=29

void FUN_008e6130(void)

{
  if (DAT_00961aa8 != (void *)0x0) {
    operator_delete__(DAT_00961aa8);
    DAT_00961aa8 = (void *)0x0;
  }
  return;
}


//==== 00008e6150 008e6150_FUN_008e6150 ====
void FUN_008e6150(void);

// decompiled by BatchDecomp @ 008e6150 name=FUN_008e6150 conv=unknown body=29

void FUN_008e6150(void)

{
  if (DAT_00961a6c != (void *)0x0) {
    operator_delete__(DAT_00961a6c);
    DAT_00961a6c = (void *)0x0;
  }
  return;
}


//==== 00008e6170 008e6170_FUN_008e6170 ====
void FUN_008e6170(void);

// decompiled by BatchDecomp @ 008e6170 name=FUN_008e6170 conv=unknown body=29

void FUN_008e6170(void)

{
  if (DAT_00961a60 != (void *)0x0) {
    operator_delete__(DAT_00961a60);
    DAT_00961a60 = (void *)0x0;
  }
  return;
}


//==== 00008e6190 008e6190_FUN_008e6190 ====
void FUN_008e6190(void);

// decompiled by BatchDecomp @ 008e6190 name=FUN_008e6190 conv=unknown body=29

void FUN_008e6190(void)

{
  if (DAT_00961a78 != (void *)0x0) {
    operator_delete__(DAT_00961a78);
    DAT_00961a78 = (void *)0x0;
  }
  return;
}


//==== 00008e61b0 008e61b0_FUN_008e61b0 ====
void FUN_008e61b0(void);

// decompiled by BatchDecomp @ 008e61b0 name=FUN_008e61b0 conv=unknown body=29

void FUN_008e61b0(void)

{
  if (DAT_00961ab4 != (void *)0x0) {
    operator_delete__(DAT_00961ab4);
    DAT_00961ab4 = (void *)0x0;
  }
  return;
}


//==== 00008e61d0 008e61d0_FUN_008e61d0 ====
void FUN_008e61d0(void);

// decompiled by BatchDecomp @ 008e61d0 name=FUN_008e61d0 conv=unknown body=29

void FUN_008e61d0(void)

{
  if (DAT_00961a9c != (void *)0x0) {
    operator_delete__(DAT_00961a9c);
    DAT_00961a9c = (void *)0x0;
  }
  return;
}


//==== 00008e61f0 008e61f0_FUN_008e61f0 ====
void FUN_008e61f0(void);

// decompiled by BatchDecomp @ 008e61f0 name=FUN_008e61f0 conv=unknown body=29

void FUN_008e61f0(void)

{
  if (DAT_00961a90 != (void *)0x0) {
    operator_delete__(DAT_00961a90);
    DAT_00961a90 = (void *)0x0;
  }
  return;
}


//==== 00008e6750 008e6750_FUN_008e6750 ====
void FUN_008e6750(void);

// decompiled by BatchDecomp @ 008e6750 name=FUN_008e6750 conv=unknown body=29

void FUN_008e6750(void)

{
  if (DAT_00962a5c != (void *)0x0) {
    operator_delete__(DAT_00962a5c);
    DAT_00962a5c = (void *)0x0;
  }
  return;
}


//==== 00008e6910 008e6910_FUN_008e6910 ====
void FUN_008e6910(void);

// decompiled by BatchDecomp @ 008e6910 name=FUN_008e6910 conv=unknown body=29

void FUN_008e6910(void)

{
  if (DAT_00962cf8 != (void *)0x0) {
    operator_delete__(DAT_00962cf8);
    DAT_00962cf8 = (void *)0x0;
  }
  return;
}


//==== 00008e6930 008e6930_FUN_008e6930 ====
void FUN_008e6930(void);

// decompiled by BatchDecomp @ 008e6930 name=FUN_008e6930 conv=unknown body=29

void FUN_008e6930(void)

{
  if (DAT_00962cb0 != (void *)0x0) {
    operator_delete__(DAT_00962cb0);
    DAT_00962cb0 = (void *)0x0;
  }
  return;
}


//==== 00008e6950 008e6950_FUN_008e6950 ====
void FUN_008e6950(void);

// decompiled by BatchDecomp @ 008e6950 name=FUN_008e6950 conv=unknown body=29

void FUN_008e6950(void)

{
  if (DAT_00962cd4 != (void *)0x0) {
    operator_delete__(DAT_00962cd4);
    DAT_00962cd4 = (void *)0x0;
  }
  return;
}


//==== 00008e6970 008e6970_FUN_008e6970 ====
void FUN_008e6970(void);

// decompiled by BatchDecomp @ 008e6970 name=FUN_008e6970 conv=unknown body=29

void FUN_008e6970(void)

{
  if (DAT_00962ca4 != (void *)0x0) {
    operator_delete__(DAT_00962ca4);
    DAT_00962ca4 = (void *)0x0;
  }
  return;
}


//==== 00008e6990 008e6990_FUN_008e6990 ====
void FUN_008e6990(void);

// decompiled by BatchDecomp @ 008e6990 name=FUN_008e6990 conv=unknown body=29

void FUN_008e6990(void)

{
  if (DAT_00962d04 != (void *)0x0) {
    operator_delete__(DAT_00962d04);
    DAT_00962d04 = (void *)0x0;
  }
  return;
}


//==== 00008e69b0 008e69b0_FUN_008e69b0 ====
void FUN_008e69b0(void);

// decompiled by BatchDecomp @ 008e69b0 name=FUN_008e69b0 conv=unknown body=29

void FUN_008e69b0(void)

{
  if (DAT_00962c98 != (void *)0x0) {
    operator_delete__(DAT_00962c98);
    DAT_00962c98 = (void *)0x0;
  }
  return;
}


//==== 00008e69d0 008e69d0_FUN_008e69d0 ====
void FUN_008e69d0(void);

// decompiled by BatchDecomp @ 008e69d0 name=FUN_008e69d0 conv=unknown body=29

void FUN_008e69d0(void)

{
  if (DAT_00962ce0 != (void *)0x0) {
    operator_delete__(DAT_00962ce0);
    DAT_00962ce0 = (void *)0x0;
  }
  return;
}


//==== 00008e69f0 008e69f0_FUN_008e69f0 ====
void FUN_008e69f0(void);

// decompiled by BatchDecomp @ 008e69f0 name=FUN_008e69f0 conv=unknown body=29

void FUN_008e69f0(void)

{
  if (DAT_00962cc8 != (void *)0x0) {
    operator_delete__(DAT_00962cc8);
    DAT_00962cc8 = (void *)0x0;
  }
  return;
}


//==== 00008e6a10 008e6a10_FUN_008e6a10 ====
void FUN_008e6a10(void);

// decompiled by BatchDecomp @ 008e6a10 name=FUN_008e6a10 conv=unknown body=29

void FUN_008e6a10(void)

{
  if (DAT_00962cbc != (void *)0x0) {
    operator_delete__(DAT_00962cbc);
    DAT_00962cbc = (void *)0x0;
  }
  return;
}


//==== 00008e6a30 008e6a30_FUN_008e6a30 ====
void FUN_008e6a30(void);

// decompiled by BatchDecomp @ 008e6a30 name=FUN_008e6a30 conv=unknown body=29

void FUN_008e6a30(void)

{
  if (DAT_00962d10 != (void *)0x0) {
    operator_delete__(DAT_00962d10);
    DAT_00962d10 = (void *)0x0;
  }
  return;
}


//==== 00008e6a50 008e6a50_FUN_008e6a50 ====
void FUN_008e6a50(void);

// decompiled by BatchDecomp @ 008e6a50 name=FUN_008e6a50 conv=unknown body=29

void FUN_008e6a50(void)

{
  if (DAT_00962cec != (void *)0x0) {
    operator_delete__(DAT_00962cec);
    DAT_00962cec = (void *)0x0;
  }
  return;
}


//==== 00008e6e90 008e6e90_FUN_008e6e90 ====
void FUN_008e6e90(void);

// decompiled by BatchDecomp @ 008e6e90 name=FUN_008e6e90 conv=unknown body=29

void FUN_008e6e90(void)

{
  if (DAT_0096327c != (void *)0x0) {
    operator_delete__(DAT_0096327c);
    DAT_0096327c = (void *)0x0;
  }
  return;
}


//==== 00008e6eb0 008e6eb0_FUN_008e6eb0 ====
void FUN_008e6eb0(void);

// decompiled by BatchDecomp @ 008e6eb0 name=FUN_008e6eb0 conv=unknown body=29

void FUN_008e6eb0(void)

{
  if (DAT_009632ac != (void *)0x0) {
    operator_delete__(DAT_009632ac);
    DAT_009632ac = (void *)0x0;
  }
  return;
}


//==== 00008e6ed0 008e6ed0_FUN_008e6ed0 ====
void FUN_008e6ed0(void);

// decompiled by BatchDecomp @ 008e6ed0 name=FUN_008e6ed0 conv=unknown body=29

void FUN_008e6ed0(void)

{
  if (DAT_009632a0 != (void *)0x0) {
    operator_delete__(DAT_009632a0);
    DAT_009632a0 = (void *)0x0;
  }
  return;
}


//==== 00008e6ef0 008e6ef0_FUN_008e6ef0 ====
void FUN_008e6ef0(void);

// decompiled by BatchDecomp @ 008e6ef0 name=FUN_008e6ef0 conv=unknown body=29

void FUN_008e6ef0(void)

{
  if (DAT_00963270 != (void *)0x0) {
    operator_delete__(DAT_00963270);
    DAT_00963270 = (void *)0x0;
  }
  return;
}


//==== 00008e6f10 008e6f10_FUN_008e6f10 ====
void FUN_008e6f10(void);

// decompiled by BatchDecomp @ 008e6f10 name=FUN_008e6f10 conv=unknown body=29

void FUN_008e6f10(void)

{
  if (DAT_00963294 != (void *)0x0) {
    operator_delete__(DAT_00963294);
    DAT_00963294 = (void *)0x0;
  }
  return;
}


//==== 00008e6f30 008e6f30_FUN_008e6f30 ====
void FUN_008e6f30(void);

// decompiled by BatchDecomp @ 008e6f30 name=FUN_008e6f30 conv=unknown body=29

void FUN_008e6f30(void)

{
  if (DAT_00963288 != (void *)0x0) {
    operator_delete__(DAT_00963288);
    DAT_00963288 = (void *)0x0;
  }
  return;
}


//==== 00008e7230 008e7230_FUN_008e7230 ====
void FUN_008e7230(void);

// decompiled by BatchDecomp @ 008e7230 name=FUN_008e7230 conv=unknown body=29

void FUN_008e7230(void)

{
  if (DAT_00963644 != (void *)0x0) {
    operator_delete__(DAT_00963644);
    DAT_00963644 = (void *)0x0;
  }
  return;
}


//==== 00008e7250 008e7250_FUN_008e7250 ====
void FUN_008e7250(void);

// decompiled by BatchDecomp @ 008e7250 name=FUN_008e7250 conv=unknown body=29

void FUN_008e7250(void)

{
  if (DAT_00963674 != (void *)0x0) {
    operator_delete__(DAT_00963674);
    DAT_00963674 = (void *)0x0;
  }
  return;
}


//==== 00008e7270 008e7270_FUN_008e7270 ====
void FUN_008e7270(void);

// decompiled by BatchDecomp @ 008e7270 name=FUN_008e7270 conv=unknown body=29

void FUN_008e7270(void)

{
  if (DAT_00963668 != (void *)0x0) {
    operator_delete__(DAT_00963668);
    DAT_00963668 = (void *)0x0;
  }
  return;
}


//==== 00008e7290 008e7290_FUN_008e7290 ====
void FUN_008e7290(void);

// decompiled by BatchDecomp @ 008e7290 name=FUN_008e7290 conv=unknown body=29

void FUN_008e7290(void)

{
  if (DAT_00963638 != (void *)0x0) {
    operator_delete__(DAT_00963638);
    DAT_00963638 = (void *)0x0;
  }
  return;
}


//==== 00008e72b0 008e72b0_FUN_008e72b0 ====
void FUN_008e72b0(void);

// decompiled by BatchDecomp @ 008e72b0 name=FUN_008e72b0 conv=unknown body=29

void FUN_008e72b0(void)

{
  if (DAT_00963680 != (void *)0x0) {
    operator_delete__(DAT_00963680);
    DAT_00963680 = (void *)0x0;
  }
  return;
}


//==== 00008e72d0 008e72d0_FUN_008e72d0 ====
void FUN_008e72d0(void);

// decompiled by BatchDecomp @ 008e72d0 name=FUN_008e72d0 conv=unknown body=29

void FUN_008e72d0(void)

{
  if (DAT_0096365c != (void *)0x0) {
    operator_delete__(DAT_0096365c);
    DAT_0096365c = (void *)0x0;
  }
  return;
}


//==== 00008e72f0 008e72f0_FUN_008e72f0 ====
void FUN_008e72f0(void);

// decompiled by BatchDecomp @ 008e72f0 name=FUN_008e72f0 conv=unknown body=29

void FUN_008e72f0(void)

{
  if (DAT_00963650 != (void *)0x0) {
    operator_delete__(DAT_00963650);
    DAT_00963650 = (void *)0x0;
  }
  return;
}


//==== 00008e75b0 008e75b0_FUN_008e75b0 ====
void FUN_008e75b0(void);

// decompiled by BatchDecomp @ 008e75b0 name=FUN_008e75b0 conv=unknown body=29

void FUN_008e75b0(void)

{
  if (DAT_00963974 != (void *)0x0) {
    operator_delete__(DAT_00963974);
    DAT_00963974 = (void *)0x0;
  }
  return;
}


//==== 00008e75d0 008e75d0_FUN_008e75d0 ====
void FUN_008e75d0(void);

// decompiled by BatchDecomp @ 008e75d0 name=FUN_008e75d0 conv=unknown body=29

void FUN_008e75d0(void)

{
  if (DAT_00963938 != (void *)0x0) {
    operator_delete__(DAT_00963938);
    DAT_00963938 = (void *)0x0;
  }
  return;
}


//==== 00008e75f0 008e75f0_FUN_008e75f0 ====
void FUN_008e75f0(void);

// decompiled by BatchDecomp @ 008e75f0 name=FUN_008e75f0 conv=unknown body=29

void FUN_008e75f0(void)

{
  if (DAT_009639b0 != (void *)0x0) {
    operator_delete__(DAT_009639b0);
    DAT_009639b0 = (void *)0x0;
  }
  return;
}


//==== 00008e7610 008e7610_FUN_008e7610 ====
void FUN_008e7610(void);

// decompiled by BatchDecomp @ 008e7610 name=FUN_008e7610 conv=unknown body=29

void FUN_008e7610(void)

{
  if (DAT_0096395c != (void *)0x0) {
    operator_delete__(DAT_0096395c);
    DAT_0096395c = (void *)0x0;
  }
  return;
}


//==== 00008e7630 008e7630_FUN_008e7630 ====
void FUN_008e7630(void);

// decompiled by BatchDecomp @ 008e7630 name=FUN_008e7630 conv=unknown body=29

void FUN_008e7630(void)

{
  if (DAT_0096392c != (void *)0x0) {
    operator_delete__(DAT_0096392c);
    DAT_0096392c = (void *)0x0;
  }
  return;
}


//==== 00008e7650 008e7650_FUN_008e7650 ====
void FUN_008e7650(void);

// decompiled by BatchDecomp @ 008e7650 name=FUN_008e7650 conv=unknown body=29

void FUN_008e7650(void)

{
  if (DAT_0096398c != (void *)0x0) {
    operator_delete__(DAT_0096398c);
    DAT_0096398c = (void *)0x0;
  }
  return;
}


//==== 00008e7670 008e7670_FUN_008e7670 ====
void FUN_008e7670(void);

// decompiled by BatchDecomp @ 008e7670 name=FUN_008e7670 conv=unknown body=29

void FUN_008e7670(void)

{
  if (DAT_00963920 != (void *)0x0) {
    operator_delete__(DAT_00963920);
    DAT_00963920 = (void *)0x0;
  }
  return;
}


//==== 00008e7690 008e7690_FUN_008e7690 ====
void FUN_008e7690(void);

// decompiled by BatchDecomp @ 008e7690 name=FUN_008e7690 conv=unknown body=29

void FUN_008e7690(void)

{
  if (DAT_009639a4 != (void *)0x0) {
    operator_delete__(DAT_009639a4);
    DAT_009639a4 = (void *)0x0;
  }
  return;
}


//==== 00008e76b0 008e76b0_FUN_008e76b0 ====
void FUN_008e76b0(void);

// decompiled by BatchDecomp @ 008e76b0 name=FUN_008e76b0 conv=unknown body=29

void FUN_008e76b0(void)

{
  if (DAT_00963980 != (void *)0x0) {
    operator_delete__(DAT_00963980);
    DAT_00963980 = (void *)0x0;
  }
  return;
}


//==== 00008e76d0 008e76d0_FUN_008e76d0 ====
void FUN_008e76d0(void);

// decompiled by BatchDecomp @ 008e76d0 name=FUN_008e76d0 conv=unknown body=29

void FUN_008e76d0(void)

{
  if (DAT_00963950 != (void *)0x0) {
    operator_delete__(DAT_00963950);
    DAT_00963950 = (void *)0x0;
  }
  return;
}


//==== 00008e76f0 008e76f0_FUN_008e76f0 ====
void FUN_008e76f0(void);

// decompiled by BatchDecomp @ 008e76f0 name=FUN_008e76f0 conv=unknown body=29

void FUN_008e76f0(void)

{
  if (DAT_00963944 != (void *)0x0) {
    operator_delete__(DAT_00963944);
    DAT_00963944 = (void *)0x0;
  }
  return;
}


//==== 00008e7710 008e7710_FUN_008e7710 ====
void FUN_008e7710(void);

// decompiled by BatchDecomp @ 008e7710 name=FUN_008e7710 conv=unknown body=29

void FUN_008e7710(void)

{
  if (DAT_00963998 != (void *)0x0) {
    operator_delete__(DAT_00963998);
    DAT_00963998 = (void *)0x0;
  }
  return;
}


//==== 00008e7730 008e7730_FUN_008e7730 ====
void FUN_008e7730(void);

// decompiled by BatchDecomp @ 008e7730 name=FUN_008e7730 conv=unknown body=29

void FUN_008e7730(void)

{
  if (DAT_00963968 != (void *)0x0) {
    operator_delete__(DAT_00963968);
    DAT_00963968 = (void *)0x0;
  }
  return;
}


//==== 00008e7c30 008e7c30_FUN_008e7c30 ====
void FUN_008e7c30(void);

// decompiled by BatchDecomp @ 008e7c30 name=FUN_008e7c30 conv=unknown body=29

void FUN_008e7c30(void)

{
  if (DAT_00963c64 != (void *)0x0) {
    operator_delete__(DAT_00963c64);
    DAT_00963c64 = (void *)0x0;
  }
  return;
}


//==== 00008e7c50 008e7c50_FUN_008e7c50 ====
void FUN_008e7c50(void);

// decompiled by BatchDecomp @ 008e7c50 name=FUN_008e7c50 conv=unknown body=29

void FUN_008e7c50(void)

{
  if (DAT_00963c10 != (void *)0x0) {
    operator_delete__(DAT_00963c10);
    DAT_00963c10 = (void *)0x0;
  }
  return;
}


//==== 00008e7c70 008e7c70_FUN_008e7c70 ====
void FUN_008e7c70(void);

// decompiled by BatchDecomp @ 008e7c70 name=FUN_008e7c70 conv=unknown body=29

void FUN_008e7c70(void)

{
  if (DAT_00963c70 != (void *)0x0) {
    operator_delete__(DAT_00963c70);
    DAT_00963c70 = (void *)0x0;
  }
  return;
}


//==== 00008e7c90 008e7c90_FUN_008e7c90 ====
void FUN_008e7c90(void);

// decompiled by BatchDecomp @ 008e7c90 name=FUN_008e7c90 conv=unknown body=29

void FUN_008e7c90(void)

{
  if (DAT_00963c34 != (void *)0x0) {
    operator_delete__(DAT_00963c34);
    DAT_00963c34 = (void *)0x0;
  }
  return;
}


//==== 00008e7cb0 008e7cb0_FUN_008e7cb0 ====
void FUN_008e7cb0(void);

// decompiled by BatchDecomp @ 008e7cb0 name=FUN_008e7cb0 conv=unknown body=29

void FUN_008e7cb0(void)

{
  if (DAT_00963c04 != (void *)0x0) {
    operator_delete__(DAT_00963c04);
    DAT_00963c04 = (void *)0x0;
  }
  return;
}


//==== 00008e7cd0 008e7cd0_FUN_008e7cd0 ====
void FUN_008e7cd0(void);

// decompiled by BatchDecomp @ 008e7cd0 name=FUN_008e7cd0 conv=unknown body=29

void FUN_008e7cd0(void)

{
  if (DAT_00963bf8 != (void *)0x0) {
    operator_delete__(DAT_00963bf8);
    DAT_00963bf8 = (void *)0x0;
  }
  return;
}


//==== 00008e7cf0 008e7cf0_FUN_008e7cf0 ====
void FUN_008e7cf0(void);

// decompiled by BatchDecomp @ 008e7cf0 name=FUN_008e7cf0 conv=unknown body=29

void FUN_008e7cf0(void)

{
  if (DAT_00963c40 != (void *)0x0) {
    operator_delete__(DAT_00963c40);
    DAT_00963c40 = (void *)0x0;
  }
  return;
}


//==== 00008e7d10 008e7d10_FUN_008e7d10 ====
void FUN_008e7d10(void);

// decompiled by BatchDecomp @ 008e7d10 name=FUN_008e7d10 conv=unknown body=29

void FUN_008e7d10(void)

{
  if (DAT_00963c4c != (void *)0x0) {
    operator_delete__(DAT_00963c4c);
    DAT_00963c4c = (void *)0x0;
  }
  return;
}


//==== 00008e7d30 008e7d30_FUN_008e7d30 ====
void FUN_008e7d30(void);

// decompiled by BatchDecomp @ 008e7d30 name=FUN_008e7d30 conv=unknown body=29

void FUN_008e7d30(void)

{
  if (DAT_00963c28 != (void *)0x0) {
    operator_delete__(DAT_00963c28);
    DAT_00963c28 = (void *)0x0;
  }
  return;
}


//==== 00008e7d50 008e7d50_FUN_008e7d50 ====
void FUN_008e7d50(void);

// decompiled by BatchDecomp @ 008e7d50 name=FUN_008e7d50 conv=unknown body=29

void FUN_008e7d50(void)

{
  if (DAT_00963c1c != (void *)0x0) {
    operator_delete__(DAT_00963c1c);
    DAT_00963c1c = (void *)0x0;
  }
  return;
}


//==== 00008e7d70 008e7d70_FUN_008e7d70 ====
void FUN_008e7d70(void);

// decompiled by BatchDecomp @ 008e7d70 name=FUN_008e7d70 conv=unknown body=29

void FUN_008e7d70(void)

{
  if (DAT_00963c58 != (void *)0x0) {
    operator_delete__(DAT_00963c58);
    DAT_00963c58 = (void *)0x0;
  }
  return;
}


//==== 00008e81b0 008e81b0_FUN_008e81b0 ====
void FUN_008e81b0(void);

// decompiled by BatchDecomp @ 008e81b0 name=FUN_008e81b0 conv=unknown body=29

void FUN_008e81b0(void)

{
  if (DAT_00963dd0 != (void *)0x0) {
    operator_delete__(DAT_00963dd0);
    DAT_00963dd0 = (void *)0x0;
  }
  return;
}


//==== 00008e81d0 008e81d0_FUN_008e81d0 ====
void FUN_008e81d0(void);

// decompiled by BatchDecomp @ 008e81d0 name=FUN_008e81d0 conv=unknown body=29

void FUN_008e81d0(void)

{
  if (DAT_00963e00 != (void *)0x0) {
    operator_delete__(DAT_00963e00);
    DAT_00963e00 = (void *)0x0;
  }
  return;
}


//==== 00008e81f0 008e81f0_FUN_008e81f0 ====
void FUN_008e81f0(void);

// decompiled by BatchDecomp @ 008e81f0 name=FUN_008e81f0 conv=unknown body=29

void FUN_008e81f0(void)

{
  if (DAT_00963df4 != (void *)0x0) {
    operator_delete__(DAT_00963df4);
    DAT_00963df4 = (void *)0x0;
  }
  return;
}


//==== 00008e8210 008e8210_FUN_008e8210 ====
void FUN_008e8210(void);

// decompiled by BatchDecomp @ 008e8210 name=FUN_008e8210 conv=unknown body=29

void FUN_008e8210(void)

{
  if (DAT_00963dc4 != (void *)0x0) {
    operator_delete__(DAT_00963dc4);
    DAT_00963dc4 = (void *)0x0;
  }
  return;
}


//==== 00008e8230 008e8230_FUN_008e8230 ====
void FUN_008e8230(void);

// decompiled by BatchDecomp @ 008e8230 name=FUN_008e8230 conv=unknown body=29

void FUN_008e8230(void)

{
  if (DAT_00963de8 != (void *)0x0) {
    operator_delete__(DAT_00963de8);
    DAT_00963de8 = (void *)0x0;
  }
  return;
}


//==== 00008e8250 008e8250_FUN_008e8250 ====
void FUN_008e8250(void);

// decompiled by BatchDecomp @ 008e8250 name=FUN_008e8250 conv=unknown body=29

void FUN_008e8250(void)

{
  if (DAT_00963ddc != (void *)0x0) {
    operator_delete__(DAT_00963ddc);
    DAT_00963ddc = (void *)0x0;
  }
  return;
}


//==== 00008e85f0 008e85f0_FUN_008e85f0 ====
void FUN_008e85f0(void);

// decompiled by BatchDecomp @ 008e85f0 name=FUN_008e85f0 conv=unknown body=29

void FUN_008e85f0(void)

{
  if (DAT_00964254 != (void *)0x0) {
    operator_delete__(DAT_00964254);
    DAT_00964254 = (void *)0x0;
  }
  return;
}


//==== 00008e8610 008e8610_FUN_008e8610 ====
void FUN_008e8610(void);

// decompiled by BatchDecomp @ 008e8610 name=FUN_008e8610 conv=unknown body=29

void FUN_008e8610(void)

{
  if (DAT_0096420c != (void *)0x0) {
    operator_delete__(DAT_0096420c);
    DAT_0096420c = (void *)0x0;
  }
  return;
}


//==== 00008e8630 008e8630_FUN_008e8630 ====
void FUN_008e8630(void);

// decompiled by BatchDecomp @ 008e8630 name=FUN_008e8630 conv=unknown body=29

void FUN_008e8630(void)

{
  if (DAT_0096423c != (void *)0x0) {
    operator_delete__(DAT_0096423c);
    DAT_0096423c = (void *)0x0;
  }
  return;
}


//==== 00008e8650 008e8650_FUN_008e8650 ====
void FUN_008e8650(void);

// decompiled by BatchDecomp @ 008e8650 name=FUN_008e8650 conv=unknown body=29

void FUN_008e8650(void)

{
  if (DAT_00964230 != (void *)0x0) {
    operator_delete__(DAT_00964230);
    DAT_00964230 = (void *)0x0;
  }
  return;
}


//==== 00008e8670 008e8670_FUN_008e8670 ====
void FUN_008e8670(void);

// decompiled by BatchDecomp @ 008e8670 name=FUN_008e8670 conv=unknown body=29

void FUN_008e8670(void)

{
  if (DAT_0096426c != (void *)0x0) {
    operator_delete__(DAT_0096426c);
    DAT_0096426c = (void *)0x0;
  }
  return;
}


//==== 00008e8690 008e8690_FUN_008e8690 ====
void FUN_008e8690(void);

// decompiled by BatchDecomp @ 008e8690 name=FUN_008e8690 conv=unknown body=29

void FUN_008e8690(void)

{
  if (DAT_00964200 != (void *)0x0) {
    operator_delete__(DAT_00964200);
    DAT_00964200 = (void *)0x0;
  }
  return;
}


//==== 00008e86b0 008e86b0_FUN_008e86b0 ====
void FUN_008e86b0(void);

// decompiled by BatchDecomp @ 008e86b0 name=FUN_008e86b0 conv=unknown body=29

void FUN_008e86b0(void)

{
  if (DAT_00964260 != (void *)0x0) {
    operator_delete__(DAT_00964260);
    DAT_00964260 = (void *)0x0;
  }
  return;
}


//==== 00008e86d0 008e86d0_FUN_008e86d0 ====
void FUN_008e86d0(void);

// decompiled by BatchDecomp @ 008e86d0 name=FUN_008e86d0 conv=unknown body=29

void FUN_008e86d0(void)

{
  if (DAT_00964224 != (void *)0x0) {
    operator_delete__(DAT_00964224);
    DAT_00964224 = (void *)0x0;
  }
  return;
}


//==== 00008e86f0 008e86f0_FUN_008e86f0 ====
void FUN_008e86f0(void);

// decompiled by BatchDecomp @ 008e86f0 name=FUN_008e86f0 conv=unknown body=29

void FUN_008e86f0(void)

{
  if (DAT_00964218 != (void *)0x0) {
    operator_delete__(DAT_00964218);
    DAT_00964218 = (void *)0x0;
  }
  return;
}


//==== 00008e8710 008e8710_FUN_008e8710 ====
void FUN_008e8710(void);

// decompiled by BatchDecomp @ 008e8710 name=FUN_008e8710 conv=unknown body=29

void FUN_008e8710(void)

{
  if (DAT_00964278 != (void *)0x0) {
    operator_delete__(DAT_00964278);
    DAT_00964278 = (void *)0x0;
  }
  return;
}


//==== 00008e8730 008e8730_FUN_008e8730 ====
void FUN_008e8730(void);

// decompiled by BatchDecomp @ 008e8730 name=FUN_008e8730 conv=unknown body=29

void FUN_008e8730(void)

{
  if (DAT_00964248 != (void *)0x0) {
    operator_delete__(DAT_00964248);
    DAT_00964248 = (void *)0x0;
  }
  return;
}


//==== 00008e8b70 008e8b70_FUN_008e8b70 ====
void FUN_008e8b70(void);

// decompiled by BatchDecomp @ 008e8b70 name=FUN_008e8b70 conv=unknown body=29

void FUN_008e8b70(void)

{
  if (DAT_00964524 != (void *)0x0) {
    operator_delete__(DAT_00964524);
    DAT_00964524 = (void *)0x0;
  }
  return;
}


//==== 00008e8b90 008e8b90_FUN_008e8b90 ====
void FUN_008e8b90(void);

// decompiled by BatchDecomp @ 008e8b90 name=FUN_008e8b90 conv=unknown body=29

void FUN_008e8b90(void)

{
  if (DAT_009644dc != (void *)0x0) {
    operator_delete__(DAT_009644dc);
    DAT_009644dc = (void *)0x0;
  }
  return;
}


//==== 00008e8bb0 008e8bb0_FUN_008e8bb0 ====
void FUN_008e8bb0(void);

// decompiled by BatchDecomp @ 008e8bb0 name=FUN_008e8bb0 conv=unknown body=29

void FUN_008e8bb0(void)

{
  if (DAT_0096450c != (void *)0x0) {
    operator_delete__(DAT_0096450c);
    DAT_0096450c = (void *)0x0;
  }
  return;
}


//==== 00008e8bd0 008e8bd0_FUN_008e8bd0 ====
void FUN_008e8bd0(void);

// decompiled by BatchDecomp @ 008e8bd0 name=FUN_008e8bd0 conv=unknown body=29

void FUN_008e8bd0(void)

{
  if (DAT_00964500 != (void *)0x0) {
    operator_delete__(DAT_00964500);
    DAT_00964500 = (void *)0x0;
  }
  return;
}


//==== 00008e8bf0 008e8bf0_FUN_008e8bf0 ====
void FUN_008e8bf0(void);

// decompiled by BatchDecomp @ 008e8bf0 name=FUN_008e8bf0 conv=unknown body=29

void FUN_008e8bf0(void)

{
  if (DAT_0096453c != (void *)0x0) {
    operator_delete__(DAT_0096453c);
    DAT_0096453c = (void *)0x0;
  }
  return;
}


//==== 00008e8c10 008e8c10_FUN_008e8c10 ====
void FUN_008e8c10(void);

// decompiled by BatchDecomp @ 008e8c10 name=FUN_008e8c10 conv=unknown body=29

void FUN_008e8c10(void)

{
  if (DAT_009644d0 != (void *)0x0) {
    operator_delete__(DAT_009644d0);
    DAT_009644d0 = (void *)0x0;
  }
  return;
}


//==== 00008e8c30 008e8c30_FUN_008e8c30 ====
void FUN_008e8c30(void);

// decompiled by BatchDecomp @ 008e8c30 name=FUN_008e8c30 conv=unknown body=29

void FUN_008e8c30(void)

{
  if (DAT_00964530 != (void *)0x0) {
    operator_delete__(DAT_00964530);
    DAT_00964530 = (void *)0x0;
  }
  return;
}


//==== 00008e8c50 008e8c50_FUN_008e8c50 ====
void FUN_008e8c50(void);

// decompiled by BatchDecomp @ 008e8c50 name=FUN_008e8c50 conv=unknown body=29

void FUN_008e8c50(void)

{
  if (DAT_009644f4 != (void *)0x0) {
    operator_delete__(DAT_009644f4);
    DAT_009644f4 = (void *)0x0;
  }
  return;
}


//==== 00008e8c70 008e8c70_FUN_008e8c70 ====
void FUN_008e8c70(void);

// decompiled by BatchDecomp @ 008e8c70 name=FUN_008e8c70 conv=unknown body=29

void FUN_008e8c70(void)

{
  if (DAT_009644e8 != (void *)0x0) {
    operator_delete__(DAT_009644e8);
    DAT_009644e8 = (void *)0x0;
  }
  return;
}


//==== 00008e8c90 008e8c90_FUN_008e8c90 ====
void FUN_008e8c90(void);

// decompiled by BatchDecomp @ 008e8c90 name=FUN_008e8c90 conv=unknown body=29

void FUN_008e8c90(void)

{
  if (DAT_00964548 != (void *)0x0) {
    operator_delete__(DAT_00964548);
    DAT_00964548 = (void *)0x0;
  }
  return;
}


//==== 00008e8cb0 008e8cb0_FUN_008e8cb0 ====
void FUN_008e8cb0(void);

// decompiled by BatchDecomp @ 008e8cb0 name=FUN_008e8cb0 conv=unknown body=29

void FUN_008e8cb0(void)

{
  if (DAT_00964518 != (void *)0x0) {
    operator_delete__(DAT_00964518);
    DAT_00964518 = (void *)0x0;
  }
  return;
}


//==== 00008e9100 008e9100_FUN_008e9100 ====
void FUN_008e9100(void);

// decompiled by BatchDecomp @ 008e9100 name=FUN_008e9100 conv=unknown body=29

void FUN_008e9100(void)

{
  if (DAT_00964644 != (void *)0x0) {
    operator_delete__(DAT_00964644);
    DAT_00964644 = (void *)0x0;
  }
  return;
}


//==== 00008e9120 008e9120_FUN_008e9120 ====
void FUN_008e9120(void);

// decompiled by BatchDecomp @ 008e9120 name=FUN_008e9120 conv=unknown body=29

void FUN_008e9120(void)

{
  if (DAT_0096465c != (void *)0x0) {
    operator_delete__(DAT_0096465c);
    DAT_0096465c = (void *)0x0;
  }
  return;
}


//==== 00008e9140 008e9140_FUN_008e9140 ====
void FUN_008e9140(void);

// decompiled by BatchDecomp @ 008e9140 name=FUN_008e9140 conv=unknown body=29

void FUN_008e9140(void)

{
  if (DAT_00964638 != (void *)0x0) {
    operator_delete__(DAT_00964638);
    DAT_00964638 = (void *)0x0;
  }
  return;
}


//==== 00008e9160 008e9160_FUN_008e9160 ====
void FUN_008e9160(void);

// decompiled by BatchDecomp @ 008e9160 name=FUN_008e9160 conv=unknown body=29

void FUN_008e9160(void)

{
  if (DAT_00964650 != (void *)0x0) {
    operator_delete__(DAT_00964650);
    DAT_00964650 = (void *)0x0;
  }
  return;
}


//==== 00008e9300 008e9300_FUN_008e9300 ====
void FUN_008e9300(void);

// decompiled by BatchDecomp @ 008e9300 name=FUN_008e9300 conv=unknown body=29

void FUN_008e9300(void)

{
  if (DAT_009648f4 != (void *)0x0) {
    operator_delete__(DAT_009648f4);
    DAT_009648f4 = (void *)0x0;
  }
  return;
}


//==== 00008e9320 008e9320_FUN_008e9320 ====
void FUN_008e9320(void);

// decompiled by BatchDecomp @ 008e9320 name=FUN_008e9320 conv=unknown body=29

void FUN_008e9320(void)

{
  if (DAT_009648ac != (void *)0x0) {
    operator_delete__(DAT_009648ac);
    DAT_009648ac = (void *)0x0;
  }
  return;
}


//==== 00008e9340 008e9340_FUN_008e9340 ====
void FUN_008e9340(void);

// decompiled by BatchDecomp @ 008e9340 name=FUN_008e9340 conv=unknown body=29

void FUN_008e9340(void)

{
  if (DAT_009648dc != (void *)0x0) {
    operator_delete__(DAT_009648dc);
    DAT_009648dc = (void *)0x0;
  }
  return;
}


//==== 00008e9360 008e9360_FUN_008e9360 ====
void FUN_008e9360(void);

// decompiled by BatchDecomp @ 008e9360 name=FUN_008e9360 conv=unknown body=29

void FUN_008e9360(void)

{
  if (DAT_009648d0 != (void *)0x0) {
    operator_delete__(DAT_009648d0);
    DAT_009648d0 = (void *)0x0;
  }
  return;
}


//==== 00008e9380 008e9380_FUN_008e9380 ====
void FUN_008e9380(void);

// decompiled by BatchDecomp @ 008e9380 name=FUN_008e9380 conv=unknown body=29

void FUN_008e9380(void)

{
  if (DAT_0096490c != (void *)0x0) {
    operator_delete__(DAT_0096490c);
    DAT_0096490c = (void *)0x0;
  }
  return;
}


//==== 00008e93a0 008e93a0_FUN_008e93a0 ====
void FUN_008e93a0(void);

// decompiled by BatchDecomp @ 008e93a0 name=FUN_008e93a0 conv=unknown body=29

void FUN_008e93a0(void)

{
  if (DAT_009648a0 != (void *)0x0) {
    operator_delete__(DAT_009648a0);
    DAT_009648a0 = (void *)0x0;
  }
  return;
}


//==== 00008e93c0 008e93c0_FUN_008e93c0 ====
void FUN_008e93c0(void);

// decompiled by BatchDecomp @ 008e93c0 name=FUN_008e93c0 conv=unknown body=29

void FUN_008e93c0(void)

{
  if (DAT_00964900 != (void *)0x0) {
    operator_delete__(DAT_00964900);
    DAT_00964900 = (void *)0x0;
  }
  return;
}


//==== 00008e93e0 008e93e0_FUN_008e93e0 ====
void FUN_008e93e0(void);

// decompiled by BatchDecomp @ 008e93e0 name=FUN_008e93e0 conv=unknown body=29

void FUN_008e93e0(void)

{
  if (DAT_009648c4 != (void *)0x0) {
    operator_delete__(DAT_009648c4);
    DAT_009648c4 = (void *)0x0;
  }
  return;
}


//==== 00008e9400 008e9400_FUN_008e9400 ====
void FUN_008e9400(void);

// decompiled by BatchDecomp @ 008e9400 name=FUN_008e9400 conv=unknown body=29

void FUN_008e9400(void)

{
  if (DAT_009648b8 != (void *)0x0) {
    operator_delete__(DAT_009648b8);
    DAT_009648b8 = (void *)0x0;
  }
  return;
}


//==== 00008e9420 008e9420_FUN_008e9420 ====
void FUN_008e9420(void);

// decompiled by BatchDecomp @ 008e9420 name=FUN_008e9420 conv=unknown body=29

void FUN_008e9420(void)

{
  if (DAT_00964918 != (void *)0x0) {
    operator_delete__(DAT_00964918);
    DAT_00964918 = (void *)0x0;
  }
  return;
}


//==== 00008e9440 008e9440_FUN_008e9440 ====
void FUN_008e9440(void);

// decompiled by BatchDecomp @ 008e9440 name=FUN_008e9440 conv=unknown body=29

void FUN_008e9440(void)

{
  if (DAT_009648e8 != (void *)0x0) {
    operator_delete__(DAT_009648e8);
    DAT_009648e8 = (void *)0x0;
  }
  return;
}


//==== 00008e9970 008e9970_FUN_008e9970 ====
void FUN_008e9970(void);

// decompiled by BatchDecomp @ 008e9970 name=FUN_008e9970 conv=unknown body=29

void FUN_008e9970(void)

{
  if (DAT_00964d6c != (void *)0x0) {
    operator_delete__(DAT_00964d6c);
    DAT_00964d6c = (void *)0x0;
  }
  return;
}


//==== 00008e9990 008e9990_FUN_008e9990 ====
void FUN_008e9990(void);

// decompiled by BatchDecomp @ 008e9990 name=FUN_008e9990 conv=unknown body=29

void FUN_008e9990(void)

{
  if (DAT_00964d24 != (void *)0x0) {
    operator_delete__(DAT_00964d24);
    DAT_00964d24 = (void *)0x0;
  }
  return;
}


//==== 00008e99b0 008e99b0_FUN_008e99b0 ====
void FUN_008e99b0(void);

// decompiled by BatchDecomp @ 008e99b0 name=FUN_008e99b0 conv=unknown body=29

void FUN_008e99b0(void)

{
  if (DAT_00964d54 != (void *)0x0) {
    operator_delete__(DAT_00964d54);
    DAT_00964d54 = (void *)0x0;
  }
  return;
}


//==== 00008e99d0 008e99d0_FUN_008e99d0 ====
void FUN_008e99d0(void);

// decompiled by BatchDecomp @ 008e99d0 name=FUN_008e99d0 conv=unknown body=29

void FUN_008e99d0(void)

{
  if (DAT_00964d48 != (void *)0x0) {
    operator_delete__(DAT_00964d48);
    DAT_00964d48 = (void *)0x0;
  }
  return;
}


//==== 00008e99f0 008e99f0_FUN_008e99f0 ====
void FUN_008e99f0(void);

// decompiled by BatchDecomp @ 008e99f0 name=FUN_008e99f0 conv=unknown body=29

void FUN_008e99f0(void)

{
  if (DAT_00964d84 != (void *)0x0) {
    operator_delete__(DAT_00964d84);
    DAT_00964d84 = (void *)0x0;
  }
  return;
}


//==== 00008e9a10 008e9a10_FUN_008e9a10 ====
void FUN_008e9a10(void);

// decompiled by BatchDecomp @ 008e9a10 name=FUN_008e9a10 conv=unknown body=29

void FUN_008e9a10(void)

{
  if (DAT_00964d18 != (void *)0x0) {
    operator_delete__(DAT_00964d18);
    DAT_00964d18 = (void *)0x0;
  }
  return;
}


//==== 00008e9a30 008e9a30_FUN_008e9a30 ====
void FUN_008e9a30(void);

// decompiled by BatchDecomp @ 008e9a30 name=FUN_008e9a30 conv=unknown body=29

void FUN_008e9a30(void)

{
  if (DAT_00964d78 != (void *)0x0) {
    operator_delete__(DAT_00964d78);
    DAT_00964d78 = (void *)0x0;
  }
  return;
}


//==== 00008e9a50 008e9a50_FUN_008e9a50 ====
void FUN_008e9a50(void);

// decompiled by BatchDecomp @ 008e9a50 name=FUN_008e9a50 conv=unknown body=29

void FUN_008e9a50(void)

{
  if (DAT_00964d3c != (void *)0x0) {
    operator_delete__(DAT_00964d3c);
    DAT_00964d3c = (void *)0x0;
  }
  return;
}


//==== 00008e9a70 008e9a70_FUN_008e9a70 ====
void FUN_008e9a70(void);

// decompiled by BatchDecomp @ 008e9a70 name=FUN_008e9a70 conv=unknown body=29

void FUN_008e9a70(void)

{
  if (DAT_00964d30 != (void *)0x0) {
    operator_delete__(DAT_00964d30);
    DAT_00964d30 = (void *)0x0;
  }
  return;
}


//==== 00008e9a90 008e9a90_FUN_008e9a90 ====
void FUN_008e9a90(void);

// decompiled by BatchDecomp @ 008e9a90 name=FUN_008e9a90 conv=unknown body=29

void FUN_008e9a90(void)

{
  if (DAT_00964d90 != (void *)0x0) {
    operator_delete__(DAT_00964d90);
    DAT_00964d90 = (void *)0x0;
  }
  return;
}


//==== 00008e9ab0 008e9ab0_FUN_008e9ab0 ====
void FUN_008e9ab0(void);

// decompiled by BatchDecomp @ 008e9ab0 name=FUN_008e9ab0 conv=unknown body=29

void FUN_008e9ab0(void)

{
  if (DAT_00964d60 != (void *)0x0) {
    operator_delete__(DAT_00964d60);
    DAT_00964d60 = (void *)0x0;
  }
  return;
}


//==== 00008e9f30 008e9f30_FUN_008e9f30 ====
void FUN_008e9f30(void);

// decompiled by BatchDecomp @ 008e9f30 name=FUN_008e9f30 conv=unknown body=29

void FUN_008e9f30(void)

{
  if (DAT_00964e38 != (void *)0x0) {
    operator_delete__(DAT_00964e38);
    DAT_00964e38 = (void *)0x0;
  }
  return;
}


//==== 00008ea050 008ea050_FUN_008ea050 ====
void FUN_008ea050(void);

// decompiled by BatchDecomp @ 008ea050 name=FUN_008ea050 conv=unknown body=29

void FUN_008ea050(void)

{
  if (DAT_00965310 != (void *)0x0) {
    operator_delete__(DAT_00965310);
    DAT_00965310 = (void *)0x0;
  }
  return;
}


//==== 00008ea070 008ea070_FUN_008ea070 ====
void FUN_008ea070(void);

// decompiled by BatchDecomp @ 008ea070 name=FUN_008ea070 conv=unknown body=29

void FUN_008ea070(void)

{
  if (DAT_00965340 != (void *)0x0) {
    operator_delete__(DAT_00965340);
    DAT_00965340 = (void *)0x0;
  }
  return;
}


//==== 00008ea090 008ea090_FUN_008ea090 ====
void FUN_008ea090(void);

// decompiled by BatchDecomp @ 008ea090 name=FUN_008ea090 conv=unknown body=29

void FUN_008ea090(void)

{
  if (DAT_00965334 != (void *)0x0) {
    operator_delete__(DAT_00965334);
    DAT_00965334 = (void *)0x0;
  }
  return;
}


//==== 00008ea0b0 008ea0b0_FUN_008ea0b0 ====
void FUN_008ea0b0(void);

// decompiled by BatchDecomp @ 008ea0b0 name=FUN_008ea0b0 conv=unknown body=29

void FUN_008ea0b0(void)

{
  if (DAT_00965304 != (void *)0x0) {
    operator_delete__(DAT_00965304);
    DAT_00965304 = (void *)0x0;
  }
  return;
}


//==== 00008ea0d0 008ea0d0_FUN_008ea0d0 ====
void FUN_008ea0d0(void);

// decompiled by BatchDecomp @ 008ea0d0 name=FUN_008ea0d0 conv=unknown body=29

void FUN_008ea0d0(void)

{
  if (DAT_0096534c != (void *)0x0) {
    operator_delete__(DAT_0096534c);
    DAT_0096534c = (void *)0x0;
  }
  return;
}


//==== 00008ea0f0 008ea0f0_FUN_008ea0f0 ====
void FUN_008ea0f0(void);

// decompiled by BatchDecomp @ 008ea0f0 name=FUN_008ea0f0 conv=unknown body=29

void FUN_008ea0f0(void)

{
  if (DAT_00965328 != (void *)0x0) {
    operator_delete__(DAT_00965328);
    DAT_00965328 = (void *)0x0;
  }
  return;
}


//==== 00008ea110 008ea110_FUN_008ea110 ====
void FUN_008ea110(void);

// decompiled by BatchDecomp @ 008ea110 name=FUN_008ea110 conv=unknown body=29

void FUN_008ea110(void)

{
  if (DAT_0096531c != (void *)0x0) {
    operator_delete__(DAT_0096531c);
    DAT_0096531c = (void *)0x0;
  }
  return;
}


//==== 00008ea530 008ea530_FUN_008ea530 ====
void FUN_008ea530(void);

// decompiled by BatchDecomp @ 008ea530 name=FUN_008ea530 conv=unknown body=29

void FUN_008ea530(void)

{
  if (DAT_0096563c != (void *)0x0) {
    operator_delete__(DAT_0096563c);
    DAT_0096563c = (void *)0x0;
  }
  return;
}


//==== 00008ea550 008ea550_FUN_008ea550 ====
void FUN_008ea550(void);

// decompiled by BatchDecomp @ 008ea550 name=FUN_008ea550 conv=unknown body=29

void FUN_008ea550(void)

{
  if (DAT_0096560c != (void *)0x0) {
    operator_delete__(DAT_0096560c);
    DAT_0096560c = (void *)0x0;
  }
  return;
}


//==== 00008ea570 008ea570_FUN_008ea570 ====
void FUN_008ea570(void);

// decompiled by BatchDecomp @ 008ea570 name=FUN_008ea570 conv=unknown body=29

void FUN_008ea570(void)

{
  if (DAT_0096566c != (void *)0x0) {
    operator_delete__(DAT_0096566c);
    DAT_0096566c = (void *)0x0;
  }
  return;
}


//==== 00008ea590 008ea590_FUN_008ea590 ====
void FUN_008ea590(void);

// decompiled by BatchDecomp @ 008ea590 name=FUN_008ea590 conv=unknown body=29

void FUN_008ea590(void)

{
  if (DAT_00965624 != (void *)0x0) {
    operator_delete__(DAT_00965624);
    DAT_00965624 = (void *)0x0;
  }
  return;
}


//==== 00008ea5b0 008ea5b0_FUN_008ea5b0 ====
void FUN_008ea5b0(void);

// decompiled by BatchDecomp @ 008ea5b0 name=FUN_008ea5b0 conv=unknown body=29

void FUN_008ea5b0(void)

{
  if (DAT_00965618 != (void *)0x0) {
    operator_delete__(DAT_00965618);
    DAT_00965618 = (void *)0x0;
  }
  return;
}


//==== 00008ea5d0 008ea5d0_FUN_008ea5d0 ====
void FUN_008ea5d0(void);

// decompiled by BatchDecomp @ 008ea5d0 name=FUN_008ea5d0 conv=unknown body=29

void FUN_008ea5d0(void)

{
  if (DAT_00965654 != (void *)0x0) {
    operator_delete__(DAT_00965654);
    DAT_00965654 = (void *)0x0;
  }
  return;
}


//==== 00008ea5f0 008ea5f0_FUN_008ea5f0 ====
void FUN_008ea5f0(void);

// decompiled by BatchDecomp @ 008ea5f0 name=FUN_008ea5f0 conv=unknown body=29

void FUN_008ea5f0(void)

{
  if (DAT_00965600 != (void *)0x0) {
    operator_delete__(DAT_00965600);
    DAT_00965600 = (void *)0x0;
  }
  return;
}


//==== 00008ea610 008ea610_FUN_008ea610 ====
void FUN_008ea610(void);

// decompiled by BatchDecomp @ 008ea610 name=FUN_008ea610 conv=unknown body=29

void FUN_008ea610(void)

{
  if (DAT_00965678 != (void *)0x0) {
    operator_delete__(DAT_00965678);
    DAT_00965678 = (void *)0x0;
  }
  return;
}


//==== 00008ea630 008ea630_FUN_008ea630 ====
void FUN_008ea630(void);

// decompiled by BatchDecomp @ 008ea630 name=FUN_008ea630 conv=unknown body=29

void FUN_008ea630(void)

{
  if (DAT_00965648 != (void *)0x0) {
    operator_delete__(DAT_00965648);
    DAT_00965648 = (void *)0x0;
  }
  return;
}


//==== 00008ea650 008ea650_FUN_008ea650 ====
void FUN_008ea650(void);

// decompiled by BatchDecomp @ 008ea650 name=FUN_008ea650 conv=unknown body=29

void FUN_008ea650(void)

{
  if (DAT_009655f4 != (void *)0x0) {
    operator_delete__(DAT_009655f4);
    DAT_009655f4 = (void *)0x0;
  }
  return;
}


//==== 00008ea670 008ea670_FUN_008ea670 ====
void FUN_008ea670(void);

// decompiled by BatchDecomp @ 008ea670 name=FUN_008ea670 conv=unknown body=29

void FUN_008ea670(void)

{
  if (DAT_009655e8 != (void *)0x0) {
    operator_delete__(DAT_009655e8);
    DAT_009655e8 = (void *)0x0;
  }
  return;
}


//==== 00008ea690 008ea690_FUN_008ea690 ====
void FUN_008ea690(void);

// decompiled by BatchDecomp @ 008ea690 name=FUN_008ea690 conv=unknown body=29

void FUN_008ea690(void)

{
  if (DAT_00965660 != (void *)0x0) {
    operator_delete__(DAT_00965660);
    DAT_00965660 = (void *)0x0;
  }
  return;
}


//==== 00008ea6b0 008ea6b0_FUN_008ea6b0 ====
void FUN_008ea6b0(void);

// decompiled by BatchDecomp @ 008ea6b0 name=FUN_008ea6b0 conv=unknown body=29

void FUN_008ea6b0(void)

{
  if (DAT_00965630 != (void *)0x0) {
    operator_delete__(DAT_00965630);
    DAT_00965630 = (void *)0x0;
  }
  return;
}


//==== 00008ead90 008ead90_FUN_008ead90 ====
void FUN_008ead90(void);

// decompiled by BatchDecomp @ 008ead90 name=FUN_008ead90 conv=unknown body=29

void FUN_008ead90(void)

{
  if (DAT_00965e44 != (void *)0x0) {
    operator_delete__(DAT_00965e44);
    DAT_00965e44 = (void *)0x0;
  }
  return;
}


//==== 00008eadb0 008eadb0_FUN_008eadb0 ====
void FUN_008eadb0(void);

// decompiled by BatchDecomp @ 008eadb0 name=FUN_008eadb0 conv=unknown body=29

void FUN_008eadb0(void)

{
  if (DAT_00965dfc != (void *)0x0) {
    operator_delete__(DAT_00965dfc);
    DAT_00965dfc = (void *)0x0;
  }
  return;
}


//==== 00008eadd0 008eadd0_FUN_008eadd0 ====
void FUN_008eadd0(void);

// decompiled by BatchDecomp @ 008eadd0 name=FUN_008eadd0 conv=unknown body=29

void FUN_008eadd0(void)

{
  if (DAT_00965e2c != (void *)0x0) {
    operator_delete__(DAT_00965e2c);
    DAT_00965e2c = (void *)0x0;
  }
  return;
}


//==== 00008eadf0 008eadf0_FUN_008eadf0 ====
void FUN_008eadf0(void);

// decompiled by BatchDecomp @ 008eadf0 name=FUN_008eadf0 conv=unknown body=29

void FUN_008eadf0(void)

{
  if (DAT_00965e20 != (void *)0x0) {
    operator_delete__(DAT_00965e20);
    DAT_00965e20 = (void *)0x0;
  }
  return;
}


//==== 00008eae10 008eae10_FUN_008eae10 ====
void FUN_008eae10(void);

// decompiled by BatchDecomp @ 008eae10 name=FUN_008eae10 conv=unknown body=29

void FUN_008eae10(void)

{
  if (DAT_00965e5c != (void *)0x0) {
    operator_delete__(DAT_00965e5c);
    DAT_00965e5c = (void *)0x0;
  }
  return;
}


//==== 00008eae30 008eae30_FUN_008eae30 ====
void FUN_008eae30(void);

// decompiled by BatchDecomp @ 008eae30 name=FUN_008eae30 conv=unknown body=29

void FUN_008eae30(void)

{
  if (DAT_00965df0 != (void *)0x0) {
    operator_delete__(DAT_00965df0);
    DAT_00965df0 = (void *)0x0;
  }
  return;
}


//==== 00008eae50 008eae50_FUN_008eae50 ====
void FUN_008eae50(void);

// decompiled by BatchDecomp @ 008eae50 name=FUN_008eae50 conv=unknown body=29

void FUN_008eae50(void)

{
  if (DAT_00965e50 != (void *)0x0) {
    operator_delete__(DAT_00965e50);
    DAT_00965e50 = (void *)0x0;
  }
  return;
}


//==== 00008eae70 008eae70_FUN_008eae70 ====
void FUN_008eae70(void);

// decompiled by BatchDecomp @ 008eae70 name=FUN_008eae70 conv=unknown body=29

void FUN_008eae70(void)

{
  if (DAT_00965e14 != (void *)0x0) {
    operator_delete__(DAT_00965e14);
    DAT_00965e14 = (void *)0x0;
  }
  return;
}


//==== 00008eae90 008eae90_FUN_008eae90 ====
void FUN_008eae90(void);

// decompiled by BatchDecomp @ 008eae90 name=FUN_008eae90 conv=unknown body=29

void FUN_008eae90(void)

{
  if (DAT_00965e08 != (void *)0x0) {
    operator_delete__(DAT_00965e08);
    DAT_00965e08 = (void *)0x0;
  }
  return;
}


//==== 00008eaeb0 008eaeb0_FUN_008eaeb0 ====
void FUN_008eaeb0(void);

// decompiled by BatchDecomp @ 008eaeb0 name=FUN_008eaeb0 conv=unknown body=29

void FUN_008eaeb0(void)

{
  if (DAT_00965e68 != (void *)0x0) {
    operator_delete__(DAT_00965e68);
    DAT_00965e68 = (void *)0x0;
  }
  return;
}


//==== 00008eaed0 008eaed0_FUN_008eaed0 ====
void FUN_008eaed0(void);

// decompiled by BatchDecomp @ 008eaed0 name=FUN_008eaed0 conv=unknown body=29

void FUN_008eaed0(void)

{
  if (DAT_00965e38 != (void *)0x0) {
    operator_delete__(DAT_00965e38);
    DAT_00965e38 = (void *)0x0;
  }
  return;
}


//==== 00008eb350 008eb350_FUN_008eb350 ====
void FUN_008eb350(void);

// decompiled by BatchDecomp @ 008eb350 name=FUN_008eb350 conv=unknown body=29

void FUN_008eb350(void)

{
  if (DAT_00966db4 != (void *)0x0) {
    operator_delete__(DAT_00966db4);
    DAT_00966db4 = (void *)0x0;
  }
  return;
}


//==== 00008eb370 008eb370_FUN_008eb370 ====
void FUN_008eb370(void);

// decompiled by BatchDecomp @ 008eb370 name=FUN_008eb370 conv=unknown body=29

void FUN_008eb370(void)

{
  if (DAT_00966d6c != (void *)0x0) {
    operator_delete__(DAT_00966d6c);
    DAT_00966d6c = (void *)0x0;
  }
  return;
}


//==== 00008eb390 008eb390_FUN_008eb390 ====
void FUN_008eb390(void);

// decompiled by BatchDecomp @ 008eb390 name=FUN_008eb390 conv=unknown body=29

void FUN_008eb390(void)

{
  if (DAT_00966de4 != (void *)0x0) {
    operator_delete__(DAT_00966de4);
    DAT_00966de4 = (void *)0x0;
  }
  return;
}


//==== 00008eb3b0 008eb3b0_FUN_008eb3b0 ====
void FUN_008eb3b0(void);

// decompiled by BatchDecomp @ 008eb3b0 name=FUN_008eb3b0 conv=unknown body=29

void FUN_008eb3b0(void)

{
  if (DAT_00966d9c != (void *)0x0) {
    operator_delete__(DAT_00966d9c);
    DAT_00966d9c = (void *)0x0;
  }
  return;
}


//==== 00008eb3d0 008eb3d0_FUN_008eb3d0 ====
void FUN_008eb3d0(void);

// decompiled by BatchDecomp @ 008eb3d0 name=FUN_008eb3d0 conv=unknown body=29

void FUN_008eb3d0(void)

{
  if (DAT_00966d90 != (void *)0x0) {
    operator_delete__(DAT_00966d90);
    DAT_00966d90 = (void *)0x0;
  }
  return;
}


//==== 00008eb3f0 008eb3f0_FUN_008eb3f0 ====
void FUN_008eb3f0(void);

// decompiled by BatchDecomp @ 008eb3f0 name=FUN_008eb3f0 conv=unknown body=29

void FUN_008eb3f0(void)

{
  if (DAT_00966dcc != (void *)0x0) {
    operator_delete__(DAT_00966dcc);
    DAT_00966dcc = (void *)0x0;
  }
  return;
}


//==== 00008eb410 008eb410_FUN_008eb410 ====
void FUN_008eb410(void);

// decompiled by BatchDecomp @ 008eb410 name=FUN_008eb410 conv=unknown body=29

void FUN_008eb410(void)

{
  if (DAT_00966d60 != (void *)0x0) {
    operator_delete__(DAT_00966d60);
    DAT_00966d60 = (void *)0x0;
  }
  return;
}


//==== 00008eb430 008eb430_FUN_008eb430 ====
void FUN_008eb430(void);

// decompiled by BatchDecomp @ 008eb430 name=FUN_008eb430 conv=unknown body=29

void FUN_008eb430(void)

{
  if (DAT_00966df0 != (void *)0x0) {
    operator_delete__(DAT_00966df0);
    DAT_00966df0 = (void *)0x0;
  }
  return;
}


//==== 00008eb450 008eb450_FUN_008eb450 ====
void FUN_008eb450(void);

// decompiled by BatchDecomp @ 008eb450 name=FUN_008eb450 conv=unknown body=29

void FUN_008eb450(void)

{
  if (DAT_00966dc0 != (void *)0x0) {
    operator_delete__(DAT_00966dc0);
    DAT_00966dc0 = (void *)0x0;
  }
  return;
}


//==== 00008eb470 008eb470_FUN_008eb470 ====
void FUN_008eb470(void);

// decompiled by BatchDecomp @ 008eb470 name=FUN_008eb470 conv=unknown body=29

void FUN_008eb470(void)

{
  if (DAT_00966d84 != (void *)0x0) {
    operator_delete__(DAT_00966d84);
    DAT_00966d84 = (void *)0x0;
  }
  return;
}


//==== 00008eb490 008eb490_FUN_008eb490 ====
void FUN_008eb490(void);

// decompiled by BatchDecomp @ 008eb490 name=FUN_008eb490 conv=unknown body=29

void FUN_008eb490(void)

{
  if (DAT_00966d78 != (void *)0x0) {
    operator_delete__(DAT_00966d78);
    DAT_00966d78 = (void *)0x0;
  }
  return;
}


//==== 00008eb4b0 008eb4b0_FUN_008eb4b0 ====
void FUN_008eb4b0(void);

// decompiled by BatchDecomp @ 008eb4b0 name=FUN_008eb4b0 conv=unknown body=29

void FUN_008eb4b0(void)

{
  if (DAT_00966dd8 != (void *)0x0) {
    operator_delete__(DAT_00966dd8);
    DAT_00966dd8 = (void *)0x0;
  }
  return;
}


//==== 00008eb4d0 008eb4d0_FUN_008eb4d0 ====
void FUN_008eb4d0(void);

// decompiled by BatchDecomp @ 008eb4d0 name=FUN_008eb4d0 conv=unknown body=29

void FUN_008eb4d0(void)

{
  if (DAT_00966da8 != (void *)0x0) {
    operator_delete__(DAT_00966da8);
    DAT_00966da8 = (void *)0x0;
  }
  return;
}


//==== 00008eba10 008eba10_FUN_008eba10 ====
void FUN_008eba10(void);

// decompiled by BatchDecomp @ 008eba10 name=FUN_008eba10 conv=unknown body=29

void FUN_008eba10(void)

{
  if (DAT_009670bc != (void *)0x0) {
    operator_delete__(DAT_009670bc);
    DAT_009670bc = (void *)0x0;
  }
  return;
}


//==== 00008eba30 008eba30_FUN_008eba30 ====
void FUN_008eba30(void);

// decompiled by BatchDecomp @ 008eba30 name=FUN_008eba30 conv=unknown body=29

void FUN_008eba30(void)

{
  if (DAT_00967074 != (void *)0x0) {
    operator_delete__(DAT_00967074);
    DAT_00967074 = (void *)0x0;
  }
  return;
}


//==== 00008eba50 008eba50_FUN_008eba50 ====
void FUN_008eba50(void);

// decompiled by BatchDecomp @ 008eba50 name=FUN_008eba50 conv=unknown body=29

void FUN_008eba50(void)

{
  if (DAT_009670a4 != (void *)0x0) {
    operator_delete__(DAT_009670a4);
    DAT_009670a4 = (void *)0x0;
  }
  return;
}


//==== 00008eba70 008eba70_FUN_008eba70 ====
void FUN_008eba70(void);

// decompiled by BatchDecomp @ 008eba70 name=FUN_008eba70 conv=unknown body=29

void FUN_008eba70(void)

{
  if (DAT_00967098 != (void *)0x0) {
    operator_delete__(DAT_00967098);
    DAT_00967098 = (void *)0x0;
  }
  return;
}


//==== 00008eba90 008eba90_FUN_008eba90 ====
void FUN_008eba90(void);

// decompiled by BatchDecomp @ 008eba90 name=FUN_008eba90 conv=unknown body=29

void FUN_008eba90(void)

{
  if (DAT_009670d4 != (void *)0x0) {
    operator_delete__(DAT_009670d4);
    DAT_009670d4 = (void *)0x0;
  }
  return;
}


//==== 00008ebab0 008ebab0_FUN_008ebab0 ====
void FUN_008ebab0(void);

// decompiled by BatchDecomp @ 008ebab0 name=FUN_008ebab0 conv=unknown body=29

void FUN_008ebab0(void)

{
  if (DAT_00967068 != (void *)0x0) {
    operator_delete__(DAT_00967068);
    DAT_00967068 = (void *)0x0;
  }
  return;
}


//==== 00008ebad0 008ebad0_FUN_008ebad0 ====
void FUN_008ebad0(void);

// decompiled by BatchDecomp @ 008ebad0 name=FUN_008ebad0 conv=unknown body=29

void FUN_008ebad0(void)

{
  if (DAT_009670c8 != (void *)0x0) {
    operator_delete__(DAT_009670c8);
    DAT_009670c8 = (void *)0x0;
  }
  return;
}


//==== 00008ebaf0 008ebaf0_FUN_008ebaf0 ====
void FUN_008ebaf0(void);

// decompiled by BatchDecomp @ 008ebaf0 name=FUN_008ebaf0 conv=unknown body=29

void FUN_008ebaf0(void)

{
  if (DAT_0096708c != (void *)0x0) {
    operator_delete__(DAT_0096708c);
    DAT_0096708c = (void *)0x0;
  }
  return;
}


//==== 00008ebb10 008ebb10_FUN_008ebb10 ====
void FUN_008ebb10(void);

// decompiled by BatchDecomp @ 008ebb10 name=FUN_008ebb10 conv=unknown body=29

void FUN_008ebb10(void)

{
  if (DAT_00967080 != (void *)0x0) {
    operator_delete__(DAT_00967080);
    DAT_00967080 = (void *)0x0;
  }
  return;
}


//==== 00008ebb30 008ebb30_FUN_008ebb30 ====
void FUN_008ebb30(void);

// decompiled by BatchDecomp @ 008ebb30 name=FUN_008ebb30 conv=unknown body=29

void FUN_008ebb30(void)

{
  if (DAT_009670e0 != (void *)0x0) {
    operator_delete__(DAT_009670e0);
    DAT_009670e0 = (void *)0x0;
  }
  return;
}


//==== 00008ebb50 008ebb50_FUN_008ebb50 ====
void FUN_008ebb50(void);

// decompiled by BatchDecomp @ 008ebb50 name=FUN_008ebb50 conv=unknown body=29

void FUN_008ebb50(void)

{
  if (DAT_009670b0 != (void *)0x0) {
    operator_delete__(DAT_009670b0);
    DAT_009670b0 = (void *)0x0;
  }
  return;
}


//==== 00008ec210 008ec210_FUN_008ec210 ====
void FUN_008ec210(void);

// decompiled by BatchDecomp @ 008ec210 name=FUN_008ec210 conv=unknown body=29

void FUN_008ec210(void)

{
  if (DAT_00967c34 != (void *)0x0) {
    operator_delete__(DAT_00967c34);
    DAT_00967c34 = (void *)0x0;
  }
  return;
}


//==== 00008ec230 008ec230_FUN_008ec230 ====
void FUN_008ec230(void);

// decompiled by BatchDecomp @ 008ec230 name=FUN_008ec230 conv=unknown body=29

void FUN_008ec230(void)

{
  if (DAT_00967bec != (void *)0x0) {
    operator_delete__(DAT_00967bec);
    DAT_00967bec = (void *)0x0;
  }
  return;
}


//==== 00008ec250 008ec250_FUN_008ec250 ====
void FUN_008ec250(void);

// decompiled by BatchDecomp @ 008ec250 name=FUN_008ec250 conv=unknown body=29

void FUN_008ec250(void)

{
  if (DAT_00967c1c != (void *)0x0) {
    operator_delete__(DAT_00967c1c);
    DAT_00967c1c = (void *)0x0;
  }
  return;
}


//==== 00008ec270 008ec270_FUN_008ec270 ====
void FUN_008ec270(void);

// decompiled by BatchDecomp @ 008ec270 name=FUN_008ec270 conv=unknown body=29

void FUN_008ec270(void)

{
  if (DAT_00967c10 != (void *)0x0) {
    operator_delete__(DAT_00967c10);
    DAT_00967c10 = (void *)0x0;
  }
  return;
}


//==== 00008ec290 008ec290_FUN_008ec290 ====
void FUN_008ec290(void);

// decompiled by BatchDecomp @ 008ec290 name=FUN_008ec290 conv=unknown body=29

void FUN_008ec290(void)

{
  if (DAT_00967c4c != (void *)0x0) {
    operator_delete__(DAT_00967c4c);
    DAT_00967c4c = (void *)0x0;
  }
  return;
}


//==== 00008ec2b0 008ec2b0_FUN_008ec2b0 ====
void FUN_008ec2b0(void);

// decompiled by BatchDecomp @ 008ec2b0 name=FUN_008ec2b0 conv=unknown body=29

void FUN_008ec2b0(void)

{
  if (DAT_00967be0 != (void *)0x0) {
    operator_delete__(DAT_00967be0);
    DAT_00967be0 = (void *)0x0;
  }
  return;
}


//==== 00008ec2d0 008ec2d0_FUN_008ec2d0 ====
void FUN_008ec2d0(void);

// decompiled by BatchDecomp @ 008ec2d0 name=FUN_008ec2d0 conv=unknown body=29

void FUN_008ec2d0(void)

{
  if (DAT_00967c58 != (void *)0x0) {
    operator_delete__(DAT_00967c58);
    DAT_00967c58 = (void *)0x0;
  }
  return;
}


//==== 00008ec2f0 008ec2f0_FUN_008ec2f0 ====
void FUN_008ec2f0(void);

// decompiled by BatchDecomp @ 008ec2f0 name=FUN_008ec2f0 conv=unknown body=29

void FUN_008ec2f0(void)

{
  if (DAT_00967c40 != (void *)0x0) {
    operator_delete__(DAT_00967c40);
    DAT_00967c40 = (void *)0x0;
  }
  return;
}


//==== 00008ec310 008ec310_FUN_008ec310 ====
void FUN_008ec310(void);

// decompiled by BatchDecomp @ 008ec310 name=FUN_008ec310 conv=unknown body=29

void FUN_008ec310(void)

{
  if (DAT_00967c04 != (void *)0x0) {
    operator_delete__(DAT_00967c04);
    DAT_00967c04 = (void *)0x0;
  }
  return;
}


//==== 00008ec330 008ec330_FUN_008ec330 ====
void FUN_008ec330(void);

// decompiled by BatchDecomp @ 008ec330 name=FUN_008ec330 conv=unknown body=29

void FUN_008ec330(void)

{
  if (DAT_00967bf8 != (void *)0x0) {
    operator_delete__(DAT_00967bf8);
    DAT_00967bf8 = (void *)0x0;
  }
  return;
}


//==== 00008ec350 008ec350_FUN_008ec350 ====
void FUN_008ec350(void);

// decompiled by BatchDecomp @ 008ec350 name=FUN_008ec350 conv=unknown body=29

void FUN_008ec350(void)

{
  if (DAT_00967c64 != (void *)0x0) {
    operator_delete__(DAT_00967c64);
    DAT_00967c64 = (void *)0x0;
  }
  return;
}


//==== 00008ec370 008ec370_FUN_008ec370 ====
void FUN_008ec370(void);

// decompiled by BatchDecomp @ 008ec370 name=FUN_008ec370 conv=unknown body=29

void FUN_008ec370(void)

{
  if (DAT_00967c28 != (void *)0x0) {
    operator_delete__(DAT_00967c28);
    DAT_00967c28 = (void *)0x0;
  }
  return;
}


//==== 00008ec8c0 008ec8c0_FUN_008ec8c0 ====
void FUN_008ec8c0(void);

// decompiled by BatchDecomp @ 008ec8c0 name=FUN_008ec8c0 conv=unknown body=29

void FUN_008ec8c0(void)

{
  if (DAT_00967f10 != (void *)0x0) {
    operator_delete__(DAT_00967f10);
    DAT_00967f10 = (void *)0x0;
  }
  return;
}


//==== 00008ec8e0 008ec8e0_FUN_008ec8e0 ====
void FUN_008ec8e0(void);

// decompiled by BatchDecomp @ 008ec8e0 name=FUN_008ec8e0 conv=unknown body=29

void FUN_008ec8e0(void)

{
  if (DAT_00967ec8 != (void *)0x0) {
    operator_delete__(DAT_00967ec8);
    DAT_00967ec8 = (void *)0x0;
  }
  return;
}


//==== 00008ec900 008ec900_FUN_008ec900 ====
void FUN_008ec900(void);

// decompiled by BatchDecomp @ 008ec900 name=FUN_008ec900 conv=unknown body=29

void FUN_008ec900(void)

{
  if (DAT_00967ef8 != (void *)0x0) {
    operator_delete__(DAT_00967ef8);
    DAT_00967ef8 = (void *)0x0;
  }
  return;
}


//==== 00008ec920 008ec920_FUN_008ec920 ====
void FUN_008ec920(void);

// decompiled by BatchDecomp @ 008ec920 name=FUN_008ec920 conv=unknown body=29

void FUN_008ec920(void)

{
  if (DAT_00967eec != (void *)0x0) {
    operator_delete__(DAT_00967eec);
    DAT_00967eec = (void *)0x0;
  }
  return;
}


//==== 00008ec940 008ec940_FUN_008ec940 ====
void FUN_008ec940(void);

// decompiled by BatchDecomp @ 008ec940 name=FUN_008ec940 conv=unknown body=29

void FUN_008ec940(void)

{
  if (DAT_00967f28 != (void *)0x0) {
    operator_delete__(DAT_00967f28);
    DAT_00967f28 = (void *)0x0;
  }
  return;
}


//==== 00008ec960 008ec960_FUN_008ec960 ====
void FUN_008ec960(void);

// decompiled by BatchDecomp @ 008ec960 name=FUN_008ec960 conv=unknown body=29

void FUN_008ec960(void)

{
  if (DAT_00967ebc != (void *)0x0) {
    operator_delete__(DAT_00967ebc);
    DAT_00967ebc = (void *)0x0;
  }
  return;
}


//==== 00008ec980 008ec980_FUN_008ec980 ====
void FUN_008ec980(void);

// decompiled by BatchDecomp @ 008ec980 name=FUN_008ec980 conv=unknown body=29

void FUN_008ec980(void)

{
  if (DAT_00967f1c != (void *)0x0) {
    operator_delete__(DAT_00967f1c);
    DAT_00967f1c = (void *)0x0;
  }
  return;
}


//==== 00008ec9a0 008ec9a0_FUN_008ec9a0 ====
void FUN_008ec9a0(void);

// decompiled by BatchDecomp @ 008ec9a0 name=FUN_008ec9a0 conv=unknown body=29

void FUN_008ec9a0(void)

{
  if (DAT_00967ee0 != (void *)0x0) {
    operator_delete__(DAT_00967ee0);
    DAT_00967ee0 = (void *)0x0;
  }
  return;
}


//==== 00008ec9c0 008ec9c0_FUN_008ec9c0 ====
void FUN_008ec9c0(void);

// decompiled by BatchDecomp @ 008ec9c0 name=FUN_008ec9c0 conv=unknown body=29

void FUN_008ec9c0(void)

{
  if (DAT_00967ed4 != (void *)0x0) {
    operator_delete__(DAT_00967ed4);
    DAT_00967ed4 = (void *)0x0;
  }
  return;
}


//==== 00008ec9e0 008ec9e0_FUN_008ec9e0 ====
void FUN_008ec9e0(void);

// decompiled by BatchDecomp @ 008ec9e0 name=FUN_008ec9e0 conv=unknown body=29

void FUN_008ec9e0(void)

{
  if (DAT_00967f34 != (void *)0x0) {
    operator_delete__(DAT_00967f34);
    DAT_00967f34 = (void *)0x0;
  }
  return;
}


//==== 00008eca00 008eca00_FUN_008eca00 ====
void FUN_008eca00(void);

// decompiled by BatchDecomp @ 008eca00 name=FUN_008eca00 conv=unknown body=29

void FUN_008eca00(void)

{
  if (DAT_00967f04 != (void *)0x0) {
    operator_delete__(DAT_00967f04);
    DAT_00967f04 = (void *)0x0;
  }
  return;
}


//==== 00008ece40 008ece40_FUN_008ece40 ====
void FUN_008ece40(void);

// decompiled by BatchDecomp @ 008ece40 name=FUN_008ece40 conv=unknown body=29

void FUN_008ece40(void)

{
  if (DAT_00968484 != (void *)0x0) {
    operator_delete__(DAT_00968484);
    DAT_00968484 = (void *)0x0;
  }
  return;
}


//==== 00008ece60 008ece60_FUN_008ece60 ====
void FUN_008ece60(void);

// decompiled by BatchDecomp @ 008ece60 name=FUN_008ece60 conv=unknown body=29

void FUN_008ece60(void)

{
  if (DAT_00968454 != (void *)0x0) {
    operator_delete__(DAT_00968454);
    DAT_00968454 = (void *)0x0;
  }
  return;
}


//==== 00008ece80 008ece80_FUN_008ece80 ====
void FUN_008ece80(void);

// decompiled by BatchDecomp @ 008ece80 name=FUN_008ece80 conv=unknown body=29

void FUN_008ece80(void)

{
  if (DAT_0096846c != (void *)0x0) {
    operator_delete__(DAT_0096846c);
    DAT_0096846c = (void *)0x0;
  }
  return;
}


//==== 00008ecea0 008ecea0_FUN_008ecea0 ====
void FUN_008ecea0(void);

// decompiled by BatchDecomp @ 008ecea0 name=FUN_008ecea0 conv=unknown body=29

void FUN_008ecea0(void)

{
  if (DAT_00968460 != (void *)0x0) {
    operator_delete__(DAT_00968460);
    DAT_00968460 = (void *)0x0;
  }
  return;
}


//==== 00008ecec0 008ecec0_FUN_008ecec0 ====
void FUN_008ecec0(void);

// decompiled by BatchDecomp @ 008ecec0 name=FUN_008ecec0 conv=unknown body=29

void FUN_008ecec0(void)

{
  if (DAT_0096849c != (void *)0x0) {
    operator_delete__(DAT_0096849c);
    DAT_0096849c = (void *)0x0;
  }
  return;
}


//==== 00008ecee0 008ecee0_FUN_008ecee0 ====
void FUN_008ecee0(void);

// decompiled by BatchDecomp @ 008ecee0 name=FUN_008ecee0 conv=unknown body=29

void FUN_008ecee0(void)

{
  if (DAT_00968448 != (void *)0x0) {
    operator_delete__(DAT_00968448);
    DAT_00968448 = (void *)0x0;
  }
  return;
}


//==== 00008ecf00 008ecf00_FUN_008ecf00 ====
void FUN_008ecf00(void);

// decompiled by BatchDecomp @ 008ecf00 name=FUN_008ecf00 conv=unknown body=29

void FUN_008ecf00(void)

{
  if (DAT_00968490 != (void *)0x0) {
    operator_delete__(DAT_00968490);
    DAT_00968490 = (void *)0x0;
  }
  return;
}


//==== 00008ecf20 008ecf20_FUN_008ecf20 ====
void FUN_008ecf20(void);

// decompiled by BatchDecomp @ 008ecf20 name=FUN_008ecf20 conv=unknown body=29

void FUN_008ecf20(void)

{
  if (DAT_0096843c != (void *)0x0) {
    operator_delete__(DAT_0096843c);
    DAT_0096843c = (void *)0x0;
  }
  return;
}


//==== 00008ecf40 008ecf40_FUN_008ecf40 ====
void FUN_008ecf40(void);

// decompiled by BatchDecomp @ 008ecf40 name=FUN_008ecf40 conv=unknown body=29

void FUN_008ecf40(void)

{
  if (DAT_00968430 != (void *)0x0) {
    operator_delete__(DAT_00968430);
    DAT_00968430 = (void *)0x0;
  }
  return;
}


//==== 00008ecf60 008ecf60_FUN_008ecf60 ====
void FUN_008ecf60(void);

// decompiled by BatchDecomp @ 008ecf60 name=FUN_008ecf60 conv=unknown body=29

void FUN_008ecf60(void)

{
  if (DAT_009684a8 != (void *)0x0) {
    operator_delete__(DAT_009684a8);
    DAT_009684a8 = (void *)0x0;
  }
  return;
}


//==== 00008ecf80 008ecf80_FUN_008ecf80 ====
void FUN_008ecf80(void);

// decompiled by BatchDecomp @ 008ecf80 name=FUN_008ecf80 conv=unknown body=29

void FUN_008ecf80(void)

{
  if (DAT_00968478 != (void *)0x0) {
    operator_delete__(DAT_00968478);
    DAT_00968478 = (void *)0x0;
  }
  return;
}


//==== 00008ed470 008ed470_FUN_008ed470 ====
void FUN_008ed470(void);

// decompiled by BatchDecomp @ 008ed470 name=FUN_008ed470 conv=unknown body=29

void FUN_008ed470(void)

{
  if (DAT_00968ba0 != (void *)0x0) {
    operator_delete__(DAT_00968ba0);
    DAT_00968ba0 = (void *)0x0;
  }
  return;
}


//==== 00008ed490 008ed490_FUN_008ed490 ====
void FUN_008ed490(void);

// decompiled by BatchDecomp @ 008ed490 name=FUN_008ed490 conv=unknown body=29

void FUN_008ed490(void)

{
  if (DAT_00968b58 != (void *)0x0) {
    operator_delete__(DAT_00968b58);
    DAT_00968b58 = (void *)0x0;
  }
  return;
}


//==== 00008ed4b0 008ed4b0_FUN_008ed4b0 ====
void FUN_008ed4b0(void);

// decompiled by BatchDecomp @ 008ed4b0 name=FUN_008ed4b0 conv=unknown body=29

void FUN_008ed4b0(void)

{
  if (DAT_00968b88 != (void *)0x0) {
    operator_delete__(DAT_00968b88);
    DAT_00968b88 = (void *)0x0;
  }
  return;
}


//==== 00008ed4d0 008ed4d0_FUN_008ed4d0 ====
void FUN_008ed4d0(void);

// decompiled by BatchDecomp @ 008ed4d0 name=FUN_008ed4d0 conv=unknown body=29

void FUN_008ed4d0(void)

{
  if (DAT_00968b7c != (void *)0x0) {
    operator_delete__(DAT_00968b7c);
    DAT_00968b7c = (void *)0x0;
  }
  return;
}


//==== 00008ed4f0 008ed4f0_FUN_008ed4f0 ====
void FUN_008ed4f0(void);

// decompiled by BatchDecomp @ 008ed4f0 name=FUN_008ed4f0 conv=unknown body=29

void FUN_008ed4f0(void)

{
  if (DAT_00968bb8 != (void *)0x0) {
    operator_delete__(DAT_00968bb8);
    DAT_00968bb8 = (void *)0x0;
  }
  return;
}


//==== 00008ed510 008ed510_FUN_008ed510 ====
void FUN_008ed510(void);

// decompiled by BatchDecomp @ 008ed510 name=FUN_008ed510 conv=unknown body=29

void FUN_008ed510(void)

{
  if (DAT_00968b4c != (void *)0x0) {
    operator_delete__(DAT_00968b4c);
    DAT_00968b4c = (void *)0x0;
  }
  return;
}


//==== 00008ed530 008ed530_FUN_008ed530 ====
void FUN_008ed530(void);

// decompiled by BatchDecomp @ 008ed530 name=FUN_008ed530 conv=unknown body=29

void FUN_008ed530(void)

{
  if (DAT_00968bac != (void *)0x0) {
    operator_delete__(DAT_00968bac);
    DAT_00968bac = (void *)0x0;
  }
  return;
}


//==== 00008ed550 008ed550_FUN_008ed550 ====
void FUN_008ed550(void);

// decompiled by BatchDecomp @ 008ed550 name=FUN_008ed550 conv=unknown body=29

void FUN_008ed550(void)

{
  if (DAT_00968b70 != (void *)0x0) {
    operator_delete__(DAT_00968b70);
    DAT_00968b70 = (void *)0x0;
  }
  return;
}


//==== 00008ed570 008ed570_FUN_008ed570 ====
void FUN_008ed570(void);

// decompiled by BatchDecomp @ 008ed570 name=FUN_008ed570 conv=unknown body=29

void FUN_008ed570(void)

{
  if (DAT_00968b64 != (void *)0x0) {
    operator_delete__(DAT_00968b64);
    DAT_00968b64 = (void *)0x0;
  }
  return;
}


//==== 00008ed590 008ed590_FUN_008ed590 ====
void FUN_008ed590(void);

// decompiled by BatchDecomp @ 008ed590 name=FUN_008ed590 conv=unknown body=29

void FUN_008ed590(void)

{
  if (DAT_00968b94 != (void *)0x0) {
    operator_delete__(DAT_00968b94);
    DAT_00968b94 = (void *)0x0;
  }
  return;
}


//==== 00008edcd0 008edcd0_FUN_008edcd0 ====
void FUN_008edcd0(void);

// decompiled by BatchDecomp @ 008edcd0 name=FUN_008edcd0 conv=unknown body=29

void FUN_008edcd0(void)

{
  if (DAT_0096941c != (void *)0x0) {
    operator_delete__(DAT_0096941c);
    DAT_0096941c = (void *)0x0;
  }
  return;
}


//==== 00008edcf0 008edcf0_FUN_008edcf0 ====
void FUN_008edcf0(void);

// decompiled by BatchDecomp @ 008edcf0 name=FUN_008edcf0 conv=unknown body=29

void FUN_008edcf0(void)

{
  if (DAT_009693d4 != (void *)0x0) {
    operator_delete__(DAT_009693d4);
    DAT_009693d4 = (void *)0x0;
  }
  return;
}


//==== 00008edd10 008edd10_FUN_008edd10 ====
void FUN_008edd10(void);

// decompiled by BatchDecomp @ 008edd10 name=FUN_008edd10 conv=unknown body=29

void FUN_008edd10(void)

{
  if (DAT_00969404 != (void *)0x0) {
    operator_delete__(DAT_00969404);
    DAT_00969404 = (void *)0x0;
  }
  return;
}


//==== 00008edd30 008edd30_FUN_008edd30 ====
void FUN_008edd30(void);

// decompiled by BatchDecomp @ 008edd30 name=FUN_008edd30 conv=unknown body=29

void FUN_008edd30(void)

{
  if (DAT_009693f8 != (void *)0x0) {
    operator_delete__(DAT_009693f8);
    DAT_009693f8 = (void *)0x0;
  }
  return;
}


//==== 00008edd50 008edd50_FUN_008edd50 ====
void FUN_008edd50(void);

// decompiled by BatchDecomp @ 008edd50 name=FUN_008edd50 conv=unknown body=29

void FUN_008edd50(void)

{
  if (DAT_00969434 != (void *)0x0) {
    operator_delete__(DAT_00969434);
    DAT_00969434 = (void *)0x0;
  }
  return;
}


//==== 00008edd70 008edd70_FUN_008edd70 ====
void FUN_008edd70(void);

// decompiled by BatchDecomp @ 008edd70 name=FUN_008edd70 conv=unknown body=29

void FUN_008edd70(void)

{
  if (DAT_009693c8 != (void *)0x0) {
    operator_delete__(DAT_009693c8);
    DAT_009693c8 = (void *)0x0;
  }
  return;
}


//==== 00008edd90 008edd90_FUN_008edd90 ====
void FUN_008edd90(void);

// decompiled by BatchDecomp @ 008edd90 name=FUN_008edd90 conv=unknown body=29

void FUN_008edd90(void)

{
  if (DAT_00969428 != (void *)0x0) {
    operator_delete__(DAT_00969428);
    DAT_00969428 = (void *)0x0;
  }
  return;
}


//==== 00008eddb0 008eddb0_FUN_008eddb0 ====
void FUN_008eddb0(void);

// decompiled by BatchDecomp @ 008eddb0 name=FUN_008eddb0 conv=unknown body=29

void FUN_008eddb0(void)

{
  if (DAT_009693ec != (void *)0x0) {
    operator_delete__(DAT_009693ec);
    DAT_009693ec = (void *)0x0;
  }
  return;
}


//==== 00008eddd0 008eddd0_FUN_008eddd0 ====
void FUN_008eddd0(void);

// decompiled by BatchDecomp @ 008eddd0 name=FUN_008eddd0 conv=unknown body=29

void FUN_008eddd0(void)

{
  if (DAT_009693e0 != (void *)0x0) {
    operator_delete__(DAT_009693e0);
    DAT_009693e0 = (void *)0x0;
  }
  return;
}


//==== 00008eddf0 008eddf0_FUN_008eddf0 ====
void FUN_008eddf0(void);

// decompiled by BatchDecomp @ 008eddf0 name=FUN_008eddf0 conv=unknown body=29

void FUN_008eddf0(void)

{
  if (DAT_00969410 != (void *)0x0) {
    operator_delete__(DAT_00969410);
    DAT_00969410 = (void *)0x0;
  }
  return;
}


//==== 00008ee2b0 008ee2b0_FUN_008ee2b0 ====
void FUN_008ee2b0(void);

// decompiled by BatchDecomp @ 008ee2b0 name=FUN_008ee2b0 conv=unknown body=29

void FUN_008ee2b0(void)

{
  if (DAT_0096a078 != (void *)0x0) {
    operator_delete__(DAT_0096a078);
    DAT_0096a078 = (void *)0x0;
  }
  return;
}


//==== 00008ee2d0 008ee2d0_FUN_008ee2d0 ====
void FUN_008ee2d0(void);

// decompiled by BatchDecomp @ 008ee2d0 name=FUN_008ee2d0 conv=unknown body=29

void FUN_008ee2d0(void)

{
  if (DAT_0096a030 != (void *)0x0) {
    operator_delete__(DAT_0096a030);
    DAT_0096a030 = (void *)0x0;
  }
  return;
}


//==== 00008ee2f0 008ee2f0_FUN_008ee2f0 ====
void FUN_008ee2f0(void);

// decompiled by BatchDecomp @ 008ee2f0 name=FUN_008ee2f0 conv=unknown body=29

void FUN_008ee2f0(void)

{
  if (DAT_0096a060 != (void *)0x0) {
    operator_delete__(DAT_0096a060);
    DAT_0096a060 = (void *)0x0;
  }
  return;
}


//==== 00008ee310 008ee310_FUN_008ee310 ====
void FUN_008ee310(void);

// decompiled by BatchDecomp @ 008ee310 name=FUN_008ee310 conv=unknown body=29

void FUN_008ee310(void)

{
  if (DAT_0096a054 != (void *)0x0) {
    operator_delete__(DAT_0096a054);
    DAT_0096a054 = (void *)0x0;
  }
  return;
}


//==== 00008ee330 008ee330_FUN_008ee330 ====
void FUN_008ee330(void);

// decompiled by BatchDecomp @ 008ee330 name=FUN_008ee330 conv=unknown body=29

void FUN_008ee330(void)

{
  if (DAT_0096a090 != (void *)0x0) {
    operator_delete__(DAT_0096a090);
    DAT_0096a090 = (void *)0x0;
  }
  return;
}


//==== 00008ee350 008ee350_FUN_008ee350 ====
void FUN_008ee350(void);

// decompiled by BatchDecomp @ 008ee350 name=FUN_008ee350 conv=unknown body=29

void FUN_008ee350(void)

{
  if (DAT_0096a024 != (void *)0x0) {
    operator_delete__(DAT_0096a024);
    DAT_0096a024 = (void *)0x0;
  }
  return;
}


//==== 00008ee370 008ee370_FUN_008ee370 ====
void FUN_008ee370(void);

// decompiled by BatchDecomp @ 008ee370 name=FUN_008ee370 conv=unknown body=29

void FUN_008ee370(void)

{
  if (DAT_0096a084 != (void *)0x0) {
    operator_delete__(DAT_0096a084);
    DAT_0096a084 = (void *)0x0;
  }
  return;
}


//==== 00008ee390 008ee390_FUN_008ee390 ====
void FUN_008ee390(void);

// decompiled by BatchDecomp @ 008ee390 name=FUN_008ee390 conv=unknown body=29

void FUN_008ee390(void)

{
  if (DAT_0096a048 != (void *)0x0) {
    operator_delete__(DAT_0096a048);
    DAT_0096a048 = (void *)0x0;
  }
  return;
}


//==== 00008ee3b0 008ee3b0_FUN_008ee3b0 ====
void FUN_008ee3b0(void);

// decompiled by BatchDecomp @ 008ee3b0 name=FUN_008ee3b0 conv=unknown body=29

void FUN_008ee3b0(void)

{
  if (DAT_0096a03c != (void *)0x0) {
    operator_delete__(DAT_0096a03c);
    DAT_0096a03c = (void *)0x0;
  }
  return;
}


//==== 00008ee3d0 008ee3d0_FUN_008ee3d0 ====
void FUN_008ee3d0(void);

// decompiled by BatchDecomp @ 008ee3d0 name=FUN_008ee3d0 conv=unknown body=29

void FUN_008ee3d0(void)

{
  if (DAT_0096a06c != (void *)0x0) {
    operator_delete__(DAT_0096a06c);
    DAT_0096a06c = (void *)0x0;
  }
  return;
}


//==== 00008ee7c0 008ee7c0_FUN_008ee7c0 ====
void FUN_008ee7c0(void);

// decompiled by BatchDecomp @ 008ee7c0 name=FUN_008ee7c0 conv=unknown body=29

void FUN_008ee7c0(void)

{
  if (DAT_0096a35c != (void *)0x0) {
    operator_delete__(DAT_0096a35c);
    DAT_0096a35c = (void *)0x0;
  }
  return;
}


//==== 00008ee7e0 008ee7e0_FUN_008ee7e0 ====
void FUN_008ee7e0(void);

// decompiled by BatchDecomp @ 008ee7e0 name=FUN_008ee7e0 conv=unknown body=29

void FUN_008ee7e0(void)

{
  if (DAT_0096a314 != (void *)0x0) {
    operator_delete__(DAT_0096a314);
    DAT_0096a314 = (void *)0x0;
  }
  return;
}


//==== 00008ee800 008ee800_FUN_008ee800 ====
void FUN_008ee800(void);

// decompiled by BatchDecomp @ 008ee800 name=FUN_008ee800 conv=unknown body=29

void FUN_008ee800(void)

{
  if (DAT_0096a344 != (void *)0x0) {
    operator_delete__(DAT_0096a344);
    DAT_0096a344 = (void *)0x0;
  }
  return;
}


//==== 00008ee820 008ee820_FUN_008ee820 ====
void FUN_008ee820(void);

// decompiled by BatchDecomp @ 008ee820 name=FUN_008ee820 conv=unknown body=29

void FUN_008ee820(void)

{
  if (DAT_0096a338 != (void *)0x0) {
    operator_delete__(DAT_0096a338);
    DAT_0096a338 = (void *)0x0;
  }
  return;
}


//==== 00008ee840 008ee840_FUN_008ee840 ====
void FUN_008ee840(void);

// decompiled by BatchDecomp @ 008ee840 name=FUN_008ee840 conv=unknown body=29

void FUN_008ee840(void)

{
  if (DAT_0096a374 != (void *)0x0) {
    operator_delete__(DAT_0096a374);
    DAT_0096a374 = (void *)0x0;
  }
  return;
}


//==== 00008ee860 008ee860_FUN_008ee860 ====
void FUN_008ee860(void);

// decompiled by BatchDecomp @ 008ee860 name=FUN_008ee860 conv=unknown body=29

void FUN_008ee860(void)

{
  if (DAT_0096a308 != (void *)0x0) {
    operator_delete__(DAT_0096a308);
    DAT_0096a308 = (void *)0x0;
  }
  return;
}


//==== 00008ee880 008ee880_FUN_008ee880 ====
void FUN_008ee880(void);

// decompiled by BatchDecomp @ 008ee880 name=FUN_008ee880 conv=unknown body=29

void FUN_008ee880(void)

{
  if (DAT_0096a38c != (void *)0x0) {
    operator_delete__(DAT_0096a38c);
    DAT_0096a38c = (void *)0x0;
  }
  return;
}


//==== 00008ee8a0 008ee8a0_FUN_008ee8a0 ====
void FUN_008ee8a0(void);

// decompiled by BatchDecomp @ 008ee8a0 name=FUN_008ee8a0 conv=unknown body=29

void FUN_008ee8a0(void)

{
  if (DAT_0096a368 != (void *)0x0) {
    operator_delete__(DAT_0096a368);
    DAT_0096a368 = (void *)0x0;
  }
  return;
}


//==== 00008ee8c0 008ee8c0_FUN_008ee8c0 ====
void FUN_008ee8c0(void);

// decompiled by BatchDecomp @ 008ee8c0 name=FUN_008ee8c0 conv=unknown body=29

void FUN_008ee8c0(void)

{
  if (DAT_0096a32c != (void *)0x0) {
    operator_delete__(DAT_0096a32c);
    DAT_0096a32c = (void *)0x0;
  }
  return;
}


//==== 00008ee8e0 008ee8e0_FUN_008ee8e0 ====
void FUN_008ee8e0(void);

// decompiled by BatchDecomp @ 008ee8e0 name=FUN_008ee8e0 conv=unknown body=29

void FUN_008ee8e0(void)

{
  if (DAT_0096a320 != (void *)0x0) {
    operator_delete__(DAT_0096a320);
    DAT_0096a320 = (void *)0x0;
  }
  return;
}


//==== 00008ee900 008ee900_FUN_008ee900 ====
void FUN_008ee900(void);

// decompiled by BatchDecomp @ 008ee900 name=FUN_008ee900 conv=unknown body=29

void FUN_008ee900(void)

{
  if (DAT_0096a380 != (void *)0x0) {
    operator_delete__(DAT_0096a380);
    DAT_0096a380 = (void *)0x0;
  }
  return;
}


//==== 00008ee920 008ee920_FUN_008ee920 ====
void FUN_008ee920(void);

// decompiled by BatchDecomp @ 008ee920 name=FUN_008ee920 conv=unknown body=29

void FUN_008ee920(void)

{
  if (DAT_0096a350 != (void *)0x0) {
    operator_delete__(DAT_0096a350);
    DAT_0096a350 = (void *)0x0;
  }
  return;
}


//==== 00008eee60 008eee60_FUN_008eee60 ====
void FUN_008eee60(void);

// decompiled by BatchDecomp @ 008eee60 name=FUN_008eee60 conv=unknown body=29

void FUN_008eee60(void)

{
  if (DAT_0096a900 != (void *)0x0) {
    operator_delete__(DAT_0096a900);
    DAT_0096a900 = (void *)0x0;
  }
  return;
}


//==== 00008eee80 008eee80_FUN_008eee80 ====
void FUN_008eee80(void);

// decompiled by BatchDecomp @ 008eee80 name=FUN_008eee80 conv=unknown body=29

void FUN_008eee80(void)

{
  if (DAT_0096a8b8 != (void *)0x0) {
    operator_delete__(DAT_0096a8b8);
    DAT_0096a8b8 = (void *)0x0;
  }
  return;
}


//==== 00008eeea0 008eeea0_FUN_008eeea0 ====
void FUN_008eeea0(void);

// decompiled by BatchDecomp @ 008eeea0 name=FUN_008eeea0 conv=unknown body=29

void FUN_008eeea0(void)

{
  if (DAT_0096a8e8 != (void *)0x0) {
    operator_delete__(DAT_0096a8e8);
    DAT_0096a8e8 = (void *)0x0;
  }
  return;
}


//==== 00008eeec0 008eeec0_FUN_008eeec0 ====
void FUN_008eeec0(void);

// decompiled by BatchDecomp @ 008eeec0 name=FUN_008eeec0 conv=unknown body=29

void FUN_008eeec0(void)

{
  if (DAT_0096a8dc != (void *)0x0) {
    operator_delete__(DAT_0096a8dc);
    DAT_0096a8dc = (void *)0x0;
  }
  return;
}


//==== 00008eeee0 008eeee0_FUN_008eeee0 ====
void FUN_008eeee0(void);

// decompiled by BatchDecomp @ 008eeee0 name=FUN_008eeee0 conv=unknown body=29

void FUN_008eeee0(void)

{
  if (DAT_0096a918 != (void *)0x0) {
    operator_delete__(DAT_0096a918);
    DAT_0096a918 = (void *)0x0;
  }
  return;
}


//==== 00008eef00 008eef00_FUN_008eef00 ====
void FUN_008eef00(void);

// decompiled by BatchDecomp @ 008eef00 name=FUN_008eef00 conv=unknown body=29

void FUN_008eef00(void)

{
  if (DAT_0096a8ac != (void *)0x0) {
    operator_delete__(DAT_0096a8ac);
    DAT_0096a8ac = (void *)0x0;
  }
  return;
}


//==== 00008eef20 008eef20_FUN_008eef20 ====
void FUN_008eef20(void);

// decompiled by BatchDecomp @ 008eef20 name=FUN_008eef20 conv=unknown body=29

void FUN_008eef20(void)

{
  if (DAT_0096a90c != (void *)0x0) {
    operator_delete__(DAT_0096a90c);
    DAT_0096a90c = (void *)0x0;
  }
  return;
}


//==== 00008eef40 008eef40_FUN_008eef40 ====
void FUN_008eef40(void);

// decompiled by BatchDecomp @ 008eef40 name=FUN_008eef40 conv=unknown body=29

void FUN_008eef40(void)

{
  if (DAT_0096a8d0 != (void *)0x0) {
    operator_delete__(DAT_0096a8d0);
    DAT_0096a8d0 = (void *)0x0;
  }
  return;
}


//==== 00008eef60 008eef60_FUN_008eef60 ====
void FUN_008eef60(void);

// decompiled by BatchDecomp @ 008eef60 name=FUN_008eef60 conv=unknown body=29

void FUN_008eef60(void)

{
  if (DAT_0096a8c4 != (void *)0x0) {
    operator_delete__(DAT_0096a8c4);
    DAT_0096a8c4 = (void *)0x0;
  }
  return;
}


//==== 00008eef80 008eef80_FUN_008eef80 ====
void FUN_008eef80(void);

// decompiled by BatchDecomp @ 008eef80 name=FUN_008eef80 conv=unknown body=29

void FUN_008eef80(void)

{
  if (DAT_0096a8f4 != (void *)0x0) {
    operator_delete__(DAT_0096a8f4);
    DAT_0096a8f4 = (void *)0x0;
  }
  return;
}


//==== 00008ef4b0 008ef4b0_FUN_008ef4b0 ====
void FUN_008ef4b0(void);

// decompiled by BatchDecomp @ 008ef4b0 name=FUN_008ef4b0 conv=unknown body=29

void FUN_008ef4b0(void)

{
  if (DAT_0096b018 != (void *)0x0) {
    operator_delete__(DAT_0096b018);
    DAT_0096b018 = (void *)0x0;
  }
  return;
}


//==== 00008ef4d0 008ef4d0_FUN_008ef4d0 ====
void FUN_008ef4d0(void);

// decompiled by BatchDecomp @ 008ef4d0 name=FUN_008ef4d0 conv=unknown body=29

void FUN_008ef4d0(void)

{
  if (DAT_0096afd0 != (void *)0x0) {
    operator_delete__(DAT_0096afd0);
    DAT_0096afd0 = (void *)0x0;
  }
  return;
}


//==== 00008ef4f0 008ef4f0_FUN_008ef4f0 ====
void FUN_008ef4f0(void);

// decompiled by BatchDecomp @ 008ef4f0 name=FUN_008ef4f0 conv=unknown body=29

void FUN_008ef4f0(void)

{
  if (DAT_0096b000 != (void *)0x0) {
    operator_delete__(DAT_0096b000);
    DAT_0096b000 = (void *)0x0;
  }
  return;
}


//==== 00008ef510 008ef510_FUN_008ef510 ====
void FUN_008ef510(void);

// decompiled by BatchDecomp @ 008ef510 name=FUN_008ef510 conv=unknown body=29

void FUN_008ef510(void)

{
  if (DAT_0096aff4 != (void *)0x0) {
    operator_delete__(DAT_0096aff4);
    DAT_0096aff4 = (void *)0x0;
  }
  return;
}


//==== 00008ef530 008ef530_FUN_008ef530 ====
void FUN_008ef530(void);

// decompiled by BatchDecomp @ 008ef530 name=FUN_008ef530 conv=unknown body=29

void FUN_008ef530(void)

{
  if (DAT_0096b030 != (void *)0x0) {
    operator_delete__(DAT_0096b030);
    DAT_0096b030 = (void *)0x0;
  }
  return;
}


//==== 00008ef550 008ef550_FUN_008ef550 ====
void FUN_008ef550(void);

// decompiled by BatchDecomp @ 008ef550 name=FUN_008ef550 conv=unknown body=29

void FUN_008ef550(void)

{
  if (DAT_0096afc4 != (void *)0x0) {
    operator_delete__(DAT_0096afc4);
    DAT_0096afc4 = (void *)0x0;
  }
  return;
}


//==== 00008ef570 008ef570_FUN_008ef570 ====
void FUN_008ef570(void);

// decompiled by BatchDecomp @ 008ef570 name=FUN_008ef570 conv=unknown body=29

void FUN_008ef570(void)

{
  if (DAT_0096b024 != (void *)0x0) {
    operator_delete__(DAT_0096b024);
    DAT_0096b024 = (void *)0x0;
  }
  return;
}


//==== 00008ef590 008ef590_FUN_008ef590 ====
void FUN_008ef590(void);

// decompiled by BatchDecomp @ 008ef590 name=FUN_008ef590 conv=unknown body=29

void FUN_008ef590(void)

{
  if (DAT_0096afe8 != (void *)0x0) {
    operator_delete__(DAT_0096afe8);
    DAT_0096afe8 = (void *)0x0;
  }
  return;
}


//==== 00008ef5b0 008ef5b0_FUN_008ef5b0 ====
void FUN_008ef5b0(void);

// decompiled by BatchDecomp @ 008ef5b0 name=FUN_008ef5b0 conv=unknown body=29

void FUN_008ef5b0(void)

{
  if (DAT_0096afdc != (void *)0x0) {
    operator_delete__(DAT_0096afdc);
    DAT_0096afdc = (void *)0x0;
  }
  return;
}


//==== 00008ef5d0 008ef5d0_FUN_008ef5d0 ====
void FUN_008ef5d0(void);

// decompiled by BatchDecomp @ 008ef5d0 name=FUN_008ef5d0 conv=unknown body=29

void FUN_008ef5d0(void)

{
  if (DAT_0096b03c != (void *)0x0) {
    operator_delete__(DAT_0096b03c);
    DAT_0096b03c = (void *)0x0;
  }
  return;
}


//==== 00008ef5f0 008ef5f0_FUN_008ef5f0 ====
void FUN_008ef5f0(void);

// decompiled by BatchDecomp @ 008ef5f0 name=FUN_008ef5f0 conv=unknown body=29

void FUN_008ef5f0(void)

{
  if (DAT_0096b00c != (void *)0x0) {
    operator_delete__(DAT_0096b00c);
    DAT_0096b00c = (void *)0x0;
  }
  return;
}


//==== 00008efad0 008efad0_FUN_008efad0 ====
void FUN_008efad0(void);

// decompiled by BatchDecomp @ 008efad0 name=FUN_008efad0 conv=unknown body=29

void FUN_008efad0(void)

{
  if (DAT_0096b694 != (void *)0x0) {
    operator_delete__(DAT_0096b694);
    DAT_0096b694 = (void *)0x0;
  }
  return;
}


//==== 00008efaf0 008efaf0_FUN_008efaf0 ====
void FUN_008efaf0(void);

// decompiled by BatchDecomp @ 008efaf0 name=FUN_008efaf0 conv=unknown body=29

void FUN_008efaf0(void)

{
  if (DAT_0096b64c != (void *)0x0) {
    operator_delete__(DAT_0096b64c);
    DAT_0096b64c = (void *)0x0;
  }
  return;
}


//==== 00008efb10 008efb10_FUN_008efb10 ====
void FUN_008efb10(void);

// decompiled by BatchDecomp @ 008efb10 name=FUN_008efb10 conv=unknown body=29

void FUN_008efb10(void)

{
  if (DAT_0096b67c != (void *)0x0) {
    operator_delete__(DAT_0096b67c);
    DAT_0096b67c = (void *)0x0;
  }
  return;
}


//==== 00008efb30 008efb30_FUN_008efb30 ====
void FUN_008efb30(void);

// decompiled by BatchDecomp @ 008efb30 name=FUN_008efb30 conv=unknown body=29

void FUN_008efb30(void)

{
  if (DAT_0096b670 != (void *)0x0) {
    operator_delete__(DAT_0096b670);
    DAT_0096b670 = (void *)0x0;
  }
  return;
}


//==== 00008efb50 008efb50_FUN_008efb50 ====
void FUN_008efb50(void);

// decompiled by BatchDecomp @ 008efb50 name=FUN_008efb50 conv=unknown body=29

void FUN_008efb50(void)

{
  if (DAT_0096b6ac != (void *)0x0) {
    operator_delete__(DAT_0096b6ac);
    DAT_0096b6ac = (void *)0x0;
  }
  return;
}


//==== 00008efb70 008efb70_FUN_008efb70 ====
void FUN_008efb70(void);

// decompiled by BatchDecomp @ 008efb70 name=FUN_008efb70 conv=unknown body=29

void FUN_008efb70(void)

{
  if (DAT_0096b640 != (void *)0x0) {
    operator_delete__(DAT_0096b640);
    DAT_0096b640 = (void *)0x0;
  }
  return;
}


//==== 00008efb90 008efb90_FUN_008efb90 ====
void FUN_008efb90(void);

// decompiled by BatchDecomp @ 008efb90 name=FUN_008efb90 conv=unknown body=29

void FUN_008efb90(void)

{
  if (DAT_0096b6a0 != (void *)0x0) {
    operator_delete__(DAT_0096b6a0);
    DAT_0096b6a0 = (void *)0x0;
  }
  return;
}


//==== 00008efbb0 008efbb0_FUN_008efbb0 ====
void FUN_008efbb0(void);

// decompiled by BatchDecomp @ 008efbb0 name=FUN_008efbb0 conv=unknown body=29

void FUN_008efbb0(void)

{
  if (DAT_0096b664 != (void *)0x0) {
    operator_delete__(DAT_0096b664);
    DAT_0096b664 = (void *)0x0;
  }
  return;
}


//==== 00008efbd0 008efbd0_FUN_008efbd0 ====
void FUN_008efbd0(void);

// decompiled by BatchDecomp @ 008efbd0 name=FUN_008efbd0 conv=unknown body=29

void FUN_008efbd0(void)

{
  if (DAT_0096b658 != (void *)0x0) {
    operator_delete__(DAT_0096b658);
    DAT_0096b658 = (void *)0x0;
  }
  return;
}


//==== 00008efbf0 008efbf0_FUN_008efbf0 ====
void FUN_008efbf0(void);

// decompiled by BatchDecomp @ 008efbf0 name=FUN_008efbf0 conv=unknown body=29

void FUN_008efbf0(void)

{
  if (DAT_0096b688 != (void *)0x0) {
    operator_delete__(DAT_0096b688);
    DAT_0096b688 = (void *)0x0;
  }
  return;
}


//==== 00008effd0 008effd0_FUN_008effd0 ====
void FUN_008effd0(void);

// decompiled by BatchDecomp @ 008effd0 name=FUN_008effd0 conv=unknown body=29

void FUN_008effd0(void)

{
  if (DAT_0096b910 != (void *)0x0) {
    operator_delete__(DAT_0096b910);
    DAT_0096b910 = (void *)0x0;
  }
  return;
}


//==== 00008efff0 008efff0_FUN_008efff0 ====
void FUN_008efff0(void);

// decompiled by BatchDecomp @ 008efff0 name=FUN_008efff0 conv=unknown body=29

void FUN_008efff0(void)

{
  if (DAT_0096b8c8 != (void *)0x0) {
    operator_delete__(DAT_0096b8c8);
    DAT_0096b8c8 = (void *)0x0;
  }
  return;
}


//==== 00008f0010 008f0010_FUN_008f0010 ====
void FUN_008f0010(void);

// decompiled by BatchDecomp @ 008f0010 name=FUN_008f0010 conv=unknown body=29

void FUN_008f0010(void)

{
  if (DAT_0096b8f8 != (void *)0x0) {
    operator_delete__(DAT_0096b8f8);
    DAT_0096b8f8 = (void *)0x0;
  }
  return;
}


//==== 00008f0030 008f0030_FUN_008f0030 ====
void FUN_008f0030(void);

// decompiled by BatchDecomp @ 008f0030 name=FUN_008f0030 conv=unknown body=29

void FUN_008f0030(void)

{
  if (DAT_0096b8ec != (void *)0x0) {
    operator_delete__(DAT_0096b8ec);
    DAT_0096b8ec = (void *)0x0;
  }
  return;
}


//==== 00008f0050 008f0050_FUN_008f0050 ====
void FUN_008f0050(void);

// decompiled by BatchDecomp @ 008f0050 name=FUN_008f0050 conv=unknown body=29

void FUN_008f0050(void)

{
  if (DAT_0096b928 != (void *)0x0) {
    operator_delete__(DAT_0096b928);
    DAT_0096b928 = (void *)0x0;
  }
  return;
}


//==== 00008f0070 008f0070_FUN_008f0070 ====
void FUN_008f0070(void);

// decompiled by BatchDecomp @ 008f0070 name=FUN_008f0070 conv=unknown body=29

void FUN_008f0070(void)

{
  if (DAT_0096b8bc != (void *)0x0) {
    operator_delete__(DAT_0096b8bc);
    DAT_0096b8bc = (void *)0x0;
  }
  return;
}


//==== 00008f0090 008f0090_FUN_008f0090 ====
void FUN_008f0090(void);

// decompiled by BatchDecomp @ 008f0090 name=FUN_008f0090 conv=unknown body=29

void FUN_008f0090(void)

{
  if (DAT_0096b91c != (void *)0x0) {
    operator_delete__(DAT_0096b91c);
    DAT_0096b91c = (void *)0x0;
  }
  return;
}


//==== 00008f00b0 008f00b0_FUN_008f00b0 ====
void FUN_008f00b0(void);

// decompiled by BatchDecomp @ 008f00b0 name=FUN_008f00b0 conv=unknown body=29

void FUN_008f00b0(void)

{
  if (DAT_0096b8e0 != (void *)0x0) {
    operator_delete__(DAT_0096b8e0);
    DAT_0096b8e0 = (void *)0x0;
  }
  return;
}


//==== 00008f00d0 008f00d0_FUN_008f00d0 ====
void FUN_008f00d0(void);

// decompiled by BatchDecomp @ 008f00d0 name=FUN_008f00d0 conv=unknown body=29

void FUN_008f00d0(void)

{
  if (DAT_0096b8d4 != (void *)0x0) {
    operator_delete__(DAT_0096b8d4);
    DAT_0096b8d4 = (void *)0x0;
  }
  return;
}


//==== 00008f00f0 008f00f0_FUN_008f00f0 ====
void FUN_008f00f0(void);

// decompiled by BatchDecomp @ 008f00f0 name=FUN_008f00f0 conv=unknown body=29

void FUN_008f00f0(void)

{
  if (DAT_0096b904 != (void *)0x0) {
    operator_delete__(DAT_0096b904);
    DAT_0096b904 = (void *)0x0;
  }
  return;
}


//==== 00008f04e0 008f04e0_FUN_008f04e0 ====
void FUN_008f04e0(void);

// decompiled by BatchDecomp @ 008f04e0 name=FUN_008f04e0 conv=unknown body=29

void FUN_008f04e0(void)

{
  if (DAT_0096bbbc != (void *)0x0) {
    operator_delete__(DAT_0096bbbc);
    DAT_0096bbbc = (void *)0x0;
  }
  return;
}


//==== 00008f0500 008f0500_FUN_008f0500 ====
void FUN_008f0500(void);

// decompiled by BatchDecomp @ 008f0500 name=FUN_008f0500 conv=unknown body=29

void FUN_008f0500(void)

{
  if (DAT_0096bb8c != (void *)0x0) {
    operator_delete__(DAT_0096bb8c);
    DAT_0096bb8c = (void *)0x0;
  }
  return;
}


//==== 00008f0520 008f0520_FUN_008f0520 ====
void FUN_008f0520(void);

// decompiled by BatchDecomp @ 008f0520 name=FUN_008f0520 conv=unknown body=29

void FUN_008f0520(void)

{
  if (DAT_0096bba4 != (void *)0x0) {
    operator_delete__(DAT_0096bba4);
    DAT_0096bba4 = (void *)0x0;
  }
  return;
}


//==== 00008f0540 008f0540_FUN_008f0540 ====
void FUN_008f0540(void);

// decompiled by BatchDecomp @ 008f0540 name=FUN_008f0540 conv=unknown body=29

void FUN_008f0540(void)

{
  if (DAT_0096bb98 != (void *)0x0) {
    operator_delete__(DAT_0096bb98);
    DAT_0096bb98 = (void *)0x0;
  }
  return;
}


//==== 00008f0560 008f0560_FUN_008f0560 ====
void FUN_008f0560(void);

// decompiled by BatchDecomp @ 008f0560 name=FUN_008f0560 conv=unknown body=29

void FUN_008f0560(void)

{
  if (DAT_0096bbd4 != (void *)0x0) {
    operator_delete__(DAT_0096bbd4);
    DAT_0096bbd4 = (void *)0x0;
  }
  return;
}


//==== 00008f0580 008f0580_FUN_008f0580 ====
void FUN_008f0580(void);

// decompiled by BatchDecomp @ 008f0580 name=FUN_008f0580 conv=unknown body=29

void FUN_008f0580(void)

{
  if (DAT_0096bb80 != (void *)0x0) {
    operator_delete__(DAT_0096bb80);
    DAT_0096bb80 = (void *)0x0;
  }
  return;
}


//==== 00008f05a0 008f05a0_FUN_008f05a0 ====
void FUN_008f05a0(void);

// decompiled by BatchDecomp @ 008f05a0 name=FUN_008f05a0 conv=unknown body=29

void FUN_008f05a0(void)

{
  if (DAT_0096bbc8 != (void *)0x0) {
    operator_delete__(DAT_0096bbc8);
    DAT_0096bbc8 = (void *)0x0;
  }
  return;
}


//==== 00008f05c0 008f05c0_FUN_008f05c0 ====
void FUN_008f05c0(void);

// decompiled by BatchDecomp @ 008f05c0 name=FUN_008f05c0 conv=unknown body=29

void FUN_008f05c0(void)

{
  if (DAT_0096bb74 != (void *)0x0) {
    operator_delete__(DAT_0096bb74);
    DAT_0096bb74 = (void *)0x0;
  }
  return;
}


//==== 00008f05e0 008f05e0_FUN_008f05e0 ====
void FUN_008f05e0(void);

// decompiled by BatchDecomp @ 008f05e0 name=FUN_008f05e0 conv=unknown body=29

void FUN_008f05e0(void)

{
  if (DAT_0096bb68 != (void *)0x0) {
    operator_delete__(DAT_0096bb68);
    DAT_0096bb68 = (void *)0x0;
  }
  return;
}


//==== 00008f0600 008f0600_FUN_008f0600 ====
void FUN_008f0600(void);

// decompiled by BatchDecomp @ 008f0600 name=FUN_008f0600 conv=unknown body=29

void FUN_008f0600(void)

{
  if (DAT_0096bbe0 != (void *)0x0) {
    operator_delete__(DAT_0096bbe0);
    DAT_0096bbe0 = (void *)0x0;
  }
  return;
}


//==== 00008f0620 008f0620_FUN_008f0620 ====
void FUN_008f0620(void);

// decompiled by BatchDecomp @ 008f0620 name=FUN_008f0620 conv=unknown body=29

void FUN_008f0620(void)

{
  if (DAT_0096bbb0 != (void *)0x0) {
    operator_delete__(DAT_0096bbb0);
    DAT_0096bbb0 = (void *)0x0;
  }
  return;
}


//==== 00008f0ae0 008f0ae0_FUN_008f0ae0 ====
void FUN_008f0ae0(void);

// decompiled by BatchDecomp @ 008f0ae0 name=FUN_008f0ae0 conv=unknown body=29

void FUN_008f0ae0(void)

{
  if (DAT_0096beb8 != (void *)0x0) {
    operator_delete__(DAT_0096beb8);
    DAT_0096beb8 = (void *)0x0;
  }
  return;
}


//==== 00008f0b00 008f0b00_FUN_008f0b00 ====
void FUN_008f0b00(void);

// decompiled by BatchDecomp @ 008f0b00 name=FUN_008f0b00 conv=unknown body=29

void FUN_008f0b00(void)

{
  if (DAT_0096be88 != (void *)0x0) {
    operator_delete__(DAT_0096be88);
    DAT_0096be88 = (void *)0x0;
  }
  return;
}


//==== 00008f0b20 008f0b20_FUN_008f0b20 ====
void FUN_008f0b20(void);

// decompiled by BatchDecomp @ 008f0b20 name=FUN_008f0b20 conv=unknown body=29

void FUN_008f0b20(void)

{
  if (DAT_0096bea0 != (void *)0x0) {
    operator_delete__(DAT_0096bea0);
    DAT_0096bea0 = (void *)0x0;
  }
  return;
}


//==== 00008f0b40 008f0b40_FUN_008f0b40 ====
void FUN_008f0b40(void);

// decompiled by BatchDecomp @ 008f0b40 name=FUN_008f0b40 conv=unknown body=29

void FUN_008f0b40(void)

{
  if (DAT_0096be94 != (void *)0x0) {
    operator_delete__(DAT_0096be94);
    DAT_0096be94 = (void *)0x0;
  }
  return;
}


//==== 00008f0b60 008f0b60_FUN_008f0b60 ====
void FUN_008f0b60(void);

// decompiled by BatchDecomp @ 008f0b60 name=FUN_008f0b60 conv=unknown body=29

void FUN_008f0b60(void)

{
  if (DAT_0096bed0 != (void *)0x0) {
    operator_delete__(DAT_0096bed0);
    DAT_0096bed0 = (void *)0x0;
  }
  return;
}


//==== 00008f0b80 008f0b80_FUN_008f0b80 ====
void FUN_008f0b80(void);

// decompiled by BatchDecomp @ 008f0b80 name=FUN_008f0b80 conv=unknown body=29

void FUN_008f0b80(void)

{
  if (DAT_0096be7c != (void *)0x0) {
    operator_delete__(DAT_0096be7c);
    DAT_0096be7c = (void *)0x0;
  }
  return;
}


//==== 00008f0ba0 008f0ba0_FUN_008f0ba0 ====
void FUN_008f0ba0(void);

// decompiled by BatchDecomp @ 008f0ba0 name=FUN_008f0ba0 conv=unknown body=29

void FUN_008f0ba0(void)

{
  if (DAT_0096bec4 != (void *)0x0) {
    operator_delete__(DAT_0096bec4);
    DAT_0096bec4 = (void *)0x0;
  }
  return;
}


//==== 00008f0bc0 008f0bc0_FUN_008f0bc0 ====
void FUN_008f0bc0(void);

// decompiled by BatchDecomp @ 008f0bc0 name=FUN_008f0bc0 conv=unknown body=29

void FUN_008f0bc0(void)

{
  if (DAT_0096be70 != (void *)0x0) {
    operator_delete__(DAT_0096be70);
    DAT_0096be70 = (void *)0x0;
  }
  return;
}


//==== 00008f0be0 008f0be0_FUN_008f0be0 ====
void FUN_008f0be0(void);

// decompiled by BatchDecomp @ 008f0be0 name=FUN_008f0be0 conv=unknown body=29

void FUN_008f0be0(void)

{
  if (DAT_0096be64 != (void *)0x0) {
    operator_delete__(DAT_0096be64);
    DAT_0096be64 = (void *)0x0;
  }
  return;
}


//==== 00008f0c00 008f0c00_FUN_008f0c00 ====
void FUN_008f0c00(void);

// decompiled by BatchDecomp @ 008f0c00 name=FUN_008f0c00 conv=unknown body=29

void FUN_008f0c00(void)

{
  if (DAT_0096beac != (void *)0x0) {
    operator_delete__(DAT_0096beac);
    DAT_0096beac = (void *)0x0;
  }
  return;
}


//==== 00008f1260 008f1260_FUN_008f1260 ====
void FUN_008f1260(void);

// decompiled by BatchDecomp @ 008f1260 name=FUN_008f1260 conv=unknown body=29

void FUN_008f1260(void)

{
  if (DAT_0096c818 != (void *)0x0) {
    operator_delete__(DAT_0096c818);
    DAT_0096c818 = (void *)0x0;
  }
  return;
}


//==== 00008f1280 008f1280_FUN_008f1280 ====
void FUN_008f1280(void);

// decompiled by BatchDecomp @ 008f1280 name=FUN_008f1280 conv=unknown body=29

void FUN_008f1280(void)

{
  if (DAT_0096c7e8 != (void *)0x0) {
    operator_delete__(DAT_0096c7e8);
    DAT_0096c7e8 = (void *)0x0;
  }
  return;
}


//==== 00008f12a0 008f12a0_FUN_008f12a0 ====
void FUN_008f12a0(void);

// decompiled by BatchDecomp @ 008f12a0 name=FUN_008f12a0 conv=unknown body=29

void FUN_008f12a0(void)

{
  if (DAT_0096c800 != (void *)0x0) {
    operator_delete__(DAT_0096c800);
    DAT_0096c800 = (void *)0x0;
  }
  return;
}


//==== 00008f12c0 008f12c0_FUN_008f12c0 ====
void FUN_008f12c0(void);

// decompiled by BatchDecomp @ 008f12c0 name=FUN_008f12c0 conv=unknown body=29

void FUN_008f12c0(void)

{
  if (DAT_0096c7f4 != (void *)0x0) {
    operator_delete__(DAT_0096c7f4);
    DAT_0096c7f4 = (void *)0x0;
  }
  return;
}


//==== 00008f12e0 008f12e0_FUN_008f12e0 ====
void FUN_008f12e0(void);

// decompiled by BatchDecomp @ 008f12e0 name=FUN_008f12e0 conv=unknown body=29

void FUN_008f12e0(void)

{
  if (DAT_0096c830 != (void *)0x0) {
    operator_delete__(DAT_0096c830);
    DAT_0096c830 = (void *)0x0;
  }
  return;
}


//==== 00008f1300 008f1300_FUN_008f1300 ====
void FUN_008f1300(void);

// decompiled by BatchDecomp @ 008f1300 name=FUN_008f1300 conv=unknown body=29

void FUN_008f1300(void)

{
  if (DAT_0096c7dc != (void *)0x0) {
    operator_delete__(DAT_0096c7dc);
    DAT_0096c7dc = (void *)0x0;
  }
  return;
}


//==== 00008f1320 008f1320_FUN_008f1320 ====
void FUN_008f1320(void);

// decompiled by BatchDecomp @ 008f1320 name=FUN_008f1320 conv=unknown body=29

void FUN_008f1320(void)

{
  if (DAT_0096c824 != (void *)0x0) {
    operator_delete__(DAT_0096c824);
    DAT_0096c824 = (void *)0x0;
  }
  return;
}


//==== 00008f1340 008f1340_FUN_008f1340 ====
void FUN_008f1340(void);

// decompiled by BatchDecomp @ 008f1340 name=FUN_008f1340 conv=unknown body=29

void FUN_008f1340(void)

{
  if (DAT_0096c7d0 != (void *)0x0) {
    operator_delete__(DAT_0096c7d0);
    DAT_0096c7d0 = (void *)0x0;
  }
  return;
}


//==== 00008f1360 008f1360_FUN_008f1360 ====
void FUN_008f1360(void);

// decompiled by BatchDecomp @ 008f1360 name=FUN_008f1360 conv=unknown body=29

void FUN_008f1360(void)

{
  if (DAT_0096c644 != (void *)0x0) {
    operator_delete__(DAT_0096c644);
    DAT_0096c644 = (void *)0x0;
  }
  return;
}


//==== 00008f1380 008f1380_FUN_008f1380 ====
void FUN_008f1380(void);

// decompiled by BatchDecomp @ 008f1380 name=FUN_008f1380 conv=unknown body=29

void FUN_008f1380(void)

{
  if (DAT_0096c80c != (void *)0x0) {
    operator_delete__(DAT_0096c80c);
    DAT_0096c80c = (void *)0x0;
  }
  return;
}


//==== 00008f1940 008f1940_FUN_008f1940 ====
void FUN_008f1940(void);

// decompiled by BatchDecomp @ 008f1940 name=FUN_008f1940 conv=unknown body=29

void FUN_008f1940(void)

{
  if (DAT_0096ca9c != (void *)0x0) {
    operator_delete__(DAT_0096ca9c);
    DAT_0096ca9c = (void *)0x0;
  }
  return;
}


//==== 00008f1960 008f1960_FUN_008f1960 ====
void FUN_008f1960(void);

// decompiled by BatchDecomp @ 008f1960 name=FUN_008f1960 conv=unknown body=29

void FUN_008f1960(void)

{
  if (DAT_0096ca54 != (void *)0x0) {
    operator_delete__(DAT_0096ca54);
    DAT_0096ca54 = (void *)0x0;
  }
  return;
}


//==== 00008f1980 008f1980_FUN_008f1980 ====
void FUN_008f1980(void);

// decompiled by BatchDecomp @ 008f1980 name=FUN_008f1980 conv=unknown body=29

void FUN_008f1980(void)

{
  if (DAT_0096ca84 != (void *)0x0) {
    operator_delete__(DAT_0096ca84);
    DAT_0096ca84 = (void *)0x0;
  }
  return;
}


//==== 00008f19a0 008f19a0_FUN_008f19a0 ====
void FUN_008f19a0(void);

// decompiled by BatchDecomp @ 008f19a0 name=FUN_008f19a0 conv=unknown body=29

void FUN_008f19a0(void)

{
  if (DAT_0096ca78 != (void *)0x0) {
    operator_delete__(DAT_0096ca78);
    DAT_0096ca78 = (void *)0x0;
  }
  return;
}


//==== 00008f19c0 008f19c0_FUN_008f19c0 ====
void FUN_008f19c0(void);

// decompiled by BatchDecomp @ 008f19c0 name=FUN_008f19c0 conv=unknown body=29

void FUN_008f19c0(void)

{
  if (DAT_0096cab4 != (void *)0x0) {
    operator_delete__(DAT_0096cab4);
    DAT_0096cab4 = (void *)0x0;
  }
  return;
}


//==== 00008f19e0 008f19e0_FUN_008f19e0 ====
void FUN_008f19e0(void);

// decompiled by BatchDecomp @ 008f19e0 name=FUN_008f19e0 conv=unknown body=29

void FUN_008f19e0(void)

{
  if (DAT_0096ca48 != (void *)0x0) {
    operator_delete__(DAT_0096ca48);
    DAT_0096ca48 = (void *)0x0;
  }
  return;
}


//==== 00008f1a00 008f1a00_FUN_008f1a00 ====
void FUN_008f1a00(void);

// decompiled by BatchDecomp @ 008f1a00 name=FUN_008f1a00 conv=unknown body=29

void FUN_008f1a00(void)

{
  if (DAT_0096caa8 != (void *)0x0) {
    operator_delete__(DAT_0096caa8);
    DAT_0096caa8 = (void *)0x0;
  }
  return;
}


//==== 00008f1a20 008f1a20_FUN_008f1a20 ====
void FUN_008f1a20(void);

// decompiled by BatchDecomp @ 008f1a20 name=FUN_008f1a20 conv=unknown body=29

void FUN_008f1a20(void)

{
  if (DAT_0096ca6c != (void *)0x0) {
    operator_delete__(DAT_0096ca6c);
    DAT_0096ca6c = (void *)0x0;
  }
  return;
}


//==== 00008f1a40 008f1a40_FUN_008f1a40 ====
void FUN_008f1a40(void);

// decompiled by BatchDecomp @ 008f1a40 name=FUN_008f1a40 conv=unknown body=29

void FUN_008f1a40(void)

{
  if (DAT_0096ca60 != (void *)0x0) {
    operator_delete__(DAT_0096ca60);
    DAT_0096ca60 = (void *)0x0;
  }
  return;
}


//==== 00008f1a60 008f1a60_FUN_008f1a60 ====
void FUN_008f1a60(void);

// decompiled by BatchDecomp @ 008f1a60 name=FUN_008f1a60 conv=unknown body=29

void FUN_008f1a60(void)

{
  if (DAT_0096ca90 != (void *)0x0) {
    operator_delete__(DAT_0096ca90);
    DAT_0096ca90 = (void *)0x0;
  }
  return;
}


//==== 00008f1ee0 008f1ee0_FUN_008f1ee0 ====
void FUN_008f1ee0(void);

// decompiled by BatchDecomp @ 008f1ee0 name=FUN_008f1ee0 conv=unknown body=29

void FUN_008f1ee0(void)

{
  if (DAT_0096d34c != (void *)0x0) {
    operator_delete__(DAT_0096d34c);
    DAT_0096d34c = (void *)0x0;
  }
  return;
}


//==== 00008f1f00 008f1f00_FUN_008f1f00 ====
void FUN_008f1f00(void);

// decompiled by BatchDecomp @ 008f1f00 name=FUN_008f1f00 conv=unknown body=29

void FUN_008f1f00(void)

{
  if (DAT_0096d31c != (void *)0x0) {
    operator_delete__(DAT_0096d31c);
    DAT_0096d31c = (void *)0x0;
  }
  return;
}


//==== 00008f1f20 008f1f20_FUN_008f1f20 ====
void FUN_008f1f20(void);

// decompiled by BatchDecomp @ 008f1f20 name=FUN_008f1f20 conv=unknown body=29

void FUN_008f1f20(void)

{
  if (DAT_0096d334 != (void *)0x0) {
    operator_delete__(DAT_0096d334);
    DAT_0096d334 = (void *)0x0;
  }
  return;
}


//==== 00008f1f40 008f1f40_FUN_008f1f40 ====
void FUN_008f1f40(void);

// decompiled by BatchDecomp @ 008f1f40 name=FUN_008f1f40 conv=unknown body=29

void FUN_008f1f40(void)

{
  if (DAT_0096d328 != (void *)0x0) {
    operator_delete__(DAT_0096d328);
    DAT_0096d328 = (void *)0x0;
  }
  return;
}


//==== 00008f1f60 008f1f60_FUN_008f1f60 ====
void FUN_008f1f60(void);

// decompiled by BatchDecomp @ 008f1f60 name=FUN_008f1f60 conv=unknown body=29

void FUN_008f1f60(void)

{
  if (DAT_0096d364 != (void *)0x0) {
    operator_delete__(DAT_0096d364);
    DAT_0096d364 = (void *)0x0;
  }
  return;
}


//==== 00008f1f80 008f1f80_FUN_008f1f80 ====
void FUN_008f1f80(void);

// decompiled by BatchDecomp @ 008f1f80 name=FUN_008f1f80 conv=unknown body=29

void FUN_008f1f80(void)

{
  if (DAT_0096d310 != (void *)0x0) {
    operator_delete__(DAT_0096d310);
    DAT_0096d310 = (void *)0x0;
  }
  return;
}


//==== 00008f1fa0 008f1fa0_FUN_008f1fa0 ====
void FUN_008f1fa0(void);

// decompiled by BatchDecomp @ 008f1fa0 name=FUN_008f1fa0 conv=unknown body=29

void FUN_008f1fa0(void)

{
  if (DAT_0096d358 != (void *)0x0) {
    operator_delete__(DAT_0096d358);
    DAT_0096d358 = (void *)0x0;
  }
  return;
}


//==== 00008f1fc0 008f1fc0_FUN_008f1fc0 ====
void FUN_008f1fc0(void);

// decompiled by BatchDecomp @ 008f1fc0 name=FUN_008f1fc0 conv=unknown body=29

void FUN_008f1fc0(void)

{
  if (DAT_0096d304 != (void *)0x0) {
    operator_delete__(DAT_0096d304);
    DAT_0096d304 = (void *)0x0;
  }
  return;
}


//==== 00008f1fe0 008f1fe0_FUN_008f1fe0 ====
void FUN_008f1fe0(void);

// decompiled by BatchDecomp @ 008f1fe0 name=FUN_008f1fe0 conv=unknown body=29

void FUN_008f1fe0(void)

{
  if (DAT_0096d2f8 != (void *)0x0) {
    operator_delete__(DAT_0096d2f8);
    DAT_0096d2f8 = (void *)0x0;
  }
  return;
}


//==== 00008f2000 008f2000_FUN_008f2000 ====
void FUN_008f2000(void);

// decompiled by BatchDecomp @ 008f2000 name=FUN_008f2000 conv=unknown body=29

void FUN_008f2000(void)

{
  if (DAT_0096d340 != (void *)0x0) {
    operator_delete__(DAT_0096d340);
    DAT_0096d340 = (void *)0x0;
  }
  return;
}


//==== 00008f2490 008f2490_FUN_008f2490 ====
void FUN_008f2490(void);

// decompiled by BatchDecomp @ 008f2490 name=FUN_008f2490 conv=unknown body=29

void FUN_008f2490(void)

{
  if (DAT_0096de24 != (void *)0x0) {
    operator_delete__(DAT_0096de24);
    DAT_0096de24 = (void *)0x0;
  }
  return;
}


//==== 00008f24b0 008f24b0_FUN_008f24b0 ====
void FUN_008f24b0(void);

// decompiled by BatchDecomp @ 008f24b0 name=FUN_008f24b0 conv=unknown body=29

void FUN_008f24b0(void)

{
  if (DAT_0096dddc != (void *)0x0) {
    operator_delete__(DAT_0096dddc);
    DAT_0096dddc = (void *)0x0;
  }
  return;
}


//==== 00008f24d0 008f24d0_FUN_008f24d0 ====
void FUN_008f24d0(void);

// decompiled by BatchDecomp @ 008f24d0 name=FUN_008f24d0 conv=unknown body=29

void FUN_008f24d0(void)

{
  if (DAT_0096de0c != (void *)0x0) {
    operator_delete__(DAT_0096de0c);
    DAT_0096de0c = (void *)0x0;
  }
  return;
}


//==== 00008f24f0 008f24f0_FUN_008f24f0 ====
void FUN_008f24f0(void);

// decompiled by BatchDecomp @ 008f24f0 name=FUN_008f24f0 conv=unknown body=29

void FUN_008f24f0(void)

{
  if (DAT_0096de00 != (void *)0x0) {
    operator_delete__(DAT_0096de00);
    DAT_0096de00 = (void *)0x0;
  }
  return;
}


//==== 00008f2510 008f2510_FUN_008f2510 ====
void FUN_008f2510(void);

// decompiled by BatchDecomp @ 008f2510 name=FUN_008f2510 conv=unknown body=29

void FUN_008f2510(void)

{
  if (DAT_0096de3c != (void *)0x0) {
    operator_delete__(DAT_0096de3c);
    DAT_0096de3c = (void *)0x0;
  }
  return;
}


//==== 00008f2530 008f2530_FUN_008f2530 ====
void FUN_008f2530(void);

// decompiled by BatchDecomp @ 008f2530 name=FUN_008f2530 conv=unknown body=29

void FUN_008f2530(void)

{
  if (DAT_0096ddd0 != (void *)0x0) {
    operator_delete__(DAT_0096ddd0);
    DAT_0096ddd0 = (void *)0x0;
  }
  return;
}


//==== 00008f2550 008f2550_FUN_008f2550 ====
void FUN_008f2550(void);

// decompiled by BatchDecomp @ 008f2550 name=FUN_008f2550 conv=unknown body=29

void FUN_008f2550(void)

{
  if (DAT_0096de30 != (void *)0x0) {
    operator_delete__(DAT_0096de30);
    DAT_0096de30 = (void *)0x0;
  }
  return;
}


//==== 00008f2570 008f2570_FUN_008f2570 ====
void FUN_008f2570(void);

// decompiled by BatchDecomp @ 008f2570 name=FUN_008f2570 conv=unknown body=29

void FUN_008f2570(void)

{
  if (DAT_0096ddf4 != (void *)0x0) {
    operator_delete__(DAT_0096ddf4);
    DAT_0096ddf4 = (void *)0x0;
  }
  return;
}


//==== 00008f2590 008f2590_FUN_008f2590 ====
void FUN_008f2590(void);

// decompiled by BatchDecomp @ 008f2590 name=FUN_008f2590 conv=unknown body=29

void FUN_008f2590(void)

{
  if (DAT_0096dde8 != (void *)0x0) {
    operator_delete__(DAT_0096dde8);
    DAT_0096dde8 = (void *)0x0;
  }
  return;
}


//==== 00008f25b0 008f25b0_FUN_008f25b0 ====
void FUN_008f25b0(void);

// decompiled by BatchDecomp @ 008f25b0 name=FUN_008f25b0 conv=unknown body=29

void FUN_008f25b0(void)

{
  if (DAT_0096de48 != (void *)0x0) {
    operator_delete__(DAT_0096de48);
    DAT_0096de48 = (void *)0x0;
  }
  return;
}


//==== 00008f25d0 008f25d0_FUN_008f25d0 ====
void FUN_008f25d0(void);

// decompiled by BatchDecomp @ 008f25d0 name=FUN_008f25d0 conv=unknown body=29

void FUN_008f25d0(void)

{
  if (DAT_0096de18 != (void *)0x0) {
    operator_delete__(DAT_0096de18);
    DAT_0096de18 = (void *)0x0;
  }
  return;
}


//==== 00008f2ab0 008f2ab0_FUN_008f2ab0 ====
void FUN_008f2ab0(void);

// decompiled by BatchDecomp @ 008f2ab0 name=FUN_008f2ab0 conv=unknown body=29

void FUN_008f2ab0(void)

{
  if (DAT_0096e0e4 != (void *)0x0) {
    operator_delete__(DAT_0096e0e4);
    DAT_0096e0e4 = (void *)0x0;
  }
  return;
}


//==== 00008f2ad0 008f2ad0_FUN_008f2ad0 ====
void FUN_008f2ad0(void);

// decompiled by BatchDecomp @ 008f2ad0 name=FUN_008f2ad0 conv=unknown body=29

void FUN_008f2ad0(void)

{
  if (DAT_0096e09c != (void *)0x0) {
    operator_delete__(DAT_0096e09c);
    DAT_0096e09c = (void *)0x0;
  }
  return;
}


//==== 00008f2af0 008f2af0_FUN_008f2af0 ====
void FUN_008f2af0(void);

// decompiled by BatchDecomp @ 008f2af0 name=FUN_008f2af0 conv=unknown body=29

void FUN_008f2af0(void)

{
  if (DAT_0096e0cc != (void *)0x0) {
    operator_delete__(DAT_0096e0cc);
    DAT_0096e0cc = (void *)0x0;
  }
  return;
}


//==== 00008f2b10 008f2b10_FUN_008f2b10 ====
void FUN_008f2b10(void);

// decompiled by BatchDecomp @ 008f2b10 name=FUN_008f2b10 conv=unknown body=29

void FUN_008f2b10(void)

{
  if (DAT_0096e0c0 != (void *)0x0) {
    operator_delete__(DAT_0096e0c0);
    DAT_0096e0c0 = (void *)0x0;
  }
  return;
}


//==== 00008f2b30 008f2b30_FUN_008f2b30 ====
void FUN_008f2b30(void);

// decompiled by BatchDecomp @ 008f2b30 name=FUN_008f2b30 conv=unknown body=29

void FUN_008f2b30(void)

{
  if (DAT_0096e0fc != (void *)0x0) {
    operator_delete__(DAT_0096e0fc);
    DAT_0096e0fc = (void *)0x0;
  }
  return;
}


//==== 00008f2b50 008f2b50_FUN_008f2b50 ====
void FUN_008f2b50(void);

// decompiled by BatchDecomp @ 008f2b50 name=FUN_008f2b50 conv=unknown body=29

void FUN_008f2b50(void)

{
  if (DAT_0096e090 != (void *)0x0) {
    operator_delete__(DAT_0096e090);
    DAT_0096e090 = (void *)0x0;
  }
  return;
}


//==== 000090fda0 0090fda0_FUN_0090fda0 ====
void FUN_0090fda0(void);

// decompiled by BatchDecomp @ 0090fda0 name=FUN_0090fda0 conv=unknown body=10

void FUN_0090fda0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009889f8);
  return;
}


//==== 000090fdb0 0090fdb0_FUN_0090fdb0 ====
void FUN_0090fdb0(void);

// decompiled by BatchDecomp @ 0090fdb0 name=FUN_0090fdb0 conv=unknown body=10

void FUN_0090fdb0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009889b8);
  return;
}


//==== 000090fdc0 0090fdc0_FUN_0090fdc0 ====
void FUN_0090fdc0(void);

// decompiled by BatchDecomp @ 0090fdc0 name=FUN_0090fdc0 conv=unknown body=10

void FUN_0090fdc0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00988b38);
  return;
}


//==== 000090fdd0 0090fdd0_FUN_0090fdd0 ====
void FUN_0090fdd0(void);

// decompiled by BatchDecomp @ 0090fdd0 name=FUN_0090fdd0 conv=unknown body=10

void FUN_0090fdd0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00988a78);
  return;
}


//==== 000090fde0 0090fde0_FUN_0090fde0 ====
void FUN_0090fde0(void);

// decompiled by BatchDecomp @ 0090fde0 name=FUN_0090fde0 conv=unknown body=10

void FUN_0090fde0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009889a8);
  return;
}


//==== 000090fdf0 0090fdf0_FUN_0090fdf0 ====
void FUN_0090fdf0(void);

// decompiled by BatchDecomp @ 0090fdf0 name=FUN_0090fdf0 conv=unknown body=10

void FUN_0090fdf0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00988998);
  return;
}


//==== 000090fe00 0090fe00_FUN_0090fe00 ====
void FUN_0090fe00(void);

// decompiled by BatchDecomp @ 0090fe00 name=FUN_0090fe00 conv=unknown body=10

void FUN_0090fe00(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988aa8);
  return;
}


//==== 000090fe10 0090fe10_FUN_0090fe10 ====
void FUN_0090fe10(void);

// decompiled by BatchDecomp @ 0090fe10 name=FUN_0090fe10 conv=unknown body=10

void FUN_0090fe10(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988ae8);
  return;
}


//==== 000090fe20 0090fe20_FUN_0090fe20 ====
void FUN_0090fe20(void);

// decompiled by BatchDecomp @ 0090fe20 name=FUN_0090fe20 conv=unknown body=10

void FUN_0090fe20(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988b08);
  return;
}


//==== 000090fe30 0090fe30_FUN_0090fe30 ====
void FUN_0090fe30(void);

// decompiled by BatchDecomp @ 0090fe30 name=FUN_0090fe30 conv=unknown body=10

void FUN_0090fe30(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988a48);
  return;
}


//==== 000090fe40 0090fe40_FUN_0090fe40 ====
void FUN_0090fe40(void);

// decompiled by BatchDecomp @ 0090fe40 name=FUN_0090fe40 conv=unknown body=10

void FUN_0090fe40(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988ac8);
  return;
}


//==== 000090fe50 0090fe50_FUN_0090fe50 ====
void FUN_0090fe50(void);

// decompiled by BatchDecomp @ 0090fe50 name=FUN_0090fe50 conv=unknown body=10

void FUN_0090fe50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988b28);
  return;
}


//==== 000090fe60 0090fe60_FUN_0090fe60 ====
void FUN_0090fe60(void);

// decompiled by BatchDecomp @ 0090fe60 name=FUN_0090fe60 conv=unknown body=10

void FUN_0090fe60(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988a28);
  return;
}


//==== 000090fe70 0090fe70_FUN_0090fe70 ====
void FUN_0090fe70(void);

// decompiled by BatchDecomp @ 0090fe70 name=FUN_0090fe70 conv=unknown body=10

void FUN_0090fe70(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988a08);
  return;
}


//==== 000090fe80 0090fe80_FUN_0090fe80 ====
void FUN_0090fe80(void);

// decompiled by BatchDecomp @ 0090fe80 name=FUN_0090fe80 conv=unknown body=10

void FUN_0090fe80(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009889c8);
  return;
}


//==== 000090fe90 0090fe90_FUN_0090fe90 ====
void FUN_0090fe90(void);

// decompiled by BatchDecomp @ 0090fe90 name=FUN_0090fe90 conv=unknown body=10

void FUN_0090fe90(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988b48);
  return;
}


//==== 000090fea0 0090fea0_FUN_0090fea0 ====
void FUN_0090fea0(void);

// decompiled by BatchDecomp @ 0090fea0 name=FUN_0090fea0 conv=unknown body=10

void FUN_0090fea0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00988a88);
  return;
}


//==== 000090feb0 0090feb0_FUN_0090feb0 ====
void FUN_0090feb0(void);

// decompiled by BatchDecomp @ 0090feb0 name=FUN_0090feb0 conv=unknown body=10

void FUN_0090feb0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009889e8);
  return;
}


//==== 000090fec0 0090fec0_FUN_0090fec0 ====
void FUN_0090fec0(void);

// decompiled by BatchDecomp @ 0090fec0 name=FUN_0090fec0 conv=unknown body=10

void FUN_0090fec0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009889d8);
  return;
}


//==== 0000910090 00910090_FUN_00910090 ====
void FUN_00910090(void);

// decompiled by BatchDecomp @ 00910090 name=FUN_00910090 conv=unknown body=10

void FUN_00910090(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009895d0);
  return;
}


//==== 00009100a0 009100a0_FUN_009100a0 ====
void FUN_009100a0(void);

// decompiled by BatchDecomp @ 009100a0 name=FUN_009100a0 conv=unknown body=10

void FUN_009100a0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009895e0);
  return;
}


//==== 0000910230 00910230_FUN_00910230 ====
void FUN_00910230(void);

// decompiled by BatchDecomp @ 00910230 name=FUN_00910230 conv=unknown body=10

void FUN_00910230(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00989620);
  return;
}


//==== 0000910240 00910240_FUN_00910240 ====
void FUN_00910240(void);

// decompiled by BatchDecomp @ 00910240 name=FUN_00910240 conv=unknown body=10

void FUN_00910240(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00989660);
  return;
}


//==== 0000910250 00910250_FUN_00910250 ====
void FUN_00910250(void);

// decompiled by BatchDecomp @ 00910250 name=FUN_00910250 conv=unknown body=10

void FUN_00910250(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00989630);
  return;
}


//==== 0000910260 00910260_FUN_00910260 ====
void FUN_00910260(void);

// decompiled by BatchDecomp @ 00910260 name=FUN_00910260 conv=unknown body=10

void FUN_00910260(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00989670);
  return;
}


//==== 0000910330 00910330_FUN_00910330 ====
void FUN_00910330(void);

// decompiled by BatchDecomp @ 00910330 name=FUN_00910330 conv=unknown body=10

void FUN_00910330(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00989738);
  return;
}


//==== 0000910340 00910340_FUN_00910340 ====
void FUN_00910340(void);

// decompiled by BatchDecomp @ 00910340 name=FUN_00910340 conv=unknown body=10

void FUN_00910340(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00989778);
  return;
}


//==== 0000910350 00910350_FUN_00910350 ====
void FUN_00910350(void);

// decompiled by BatchDecomp @ 00910350 name=FUN_00910350 conv=unknown body=10

void FUN_00910350(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00989748);
  return;
}


//==== 0000910360 00910360_FUN_00910360 ====
void FUN_00910360(void);

// decompiled by BatchDecomp @ 00910360 name=FUN_00910360 conv=unknown body=10

void FUN_00910360(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00989788);
  return;
}


//==== 0000910390 00910390_FUN_00910390 ====
void FUN_00910390(void);

// decompiled by BatchDecomp @ 00910390 name=FUN_00910390 conv=unknown body=10

void FUN_00910390(void)

{
  util__AutoDarray_struct_CustomTexture____AutoDarray_struct_CustomTexture((AutoDarray_L_struct_CustomTexture_G_ *)&PTR__vftable__0095f4d4);
  return;
}


//==== 0000910400 00910400_FUN_00910400 ====
void FUN_00910400(void);

// decompiled by BatchDecomp @ 00910400 name=FUN_00910400 conv=unknown body=10

void FUN_00910400(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009897f0);
  return;
}


//==== 0000910410 00910410_FUN_00910410 ====
void FUN_00910410(void);

// decompiled by BatchDecomp @ 00910410 name=FUN_00910410 conv=unknown body=10

void FUN_00910410(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00989800);
  return;
}


//==== 00009105f0 009105f0_FUN_009105f0 ====
void FUN_009105f0(void);

// decompiled by BatchDecomp @ 009105f0 name=FUN_009105f0 conv=unknown body=10

void FUN_009105f0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00989848);
  return;
}


//==== 0000910610 00910610_FUN_00910610 ====
void FUN_00910610(void);

// decompiled by BatchDecomp @ 00910610 name=FUN_00910610 conv=unknown body=10

void FUN_00910610(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00989858);
  return;
}


//==== 0000910730 00910730_FUN_00910730 ====
void FUN_00910730(void);

// decompiled by BatchDecomp @ 00910730 name=FUN_00910730 conv=unknown body=10

void FUN_00910730(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098c964);
  return;
}


//==== 0000910740 00910740_FUN_00910740 ====
void FUN_00910740(void);

// decompiled by BatchDecomp @ 00910740 name=FUN_00910740 conv=unknown body=10

void FUN_00910740(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098c9bc);
  return;
}


//==== 0000910750 00910750_FUN_00910750 ====
void FUN_00910750(void);

// decompiled by BatchDecomp @ 00910750 name=FUN_00910750 conv=unknown body=10

void FUN_00910750(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098c974);
  return;
}


//==== 0000910760 00910760_FUN_00910760 ====
void FUN_00910760(void);

// decompiled by BatchDecomp @ 00910760 name=FUN_00910760 conv=unknown body=10

void FUN_00910760(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098c9cc);
  return;
}


//==== 0000910830 00910830_FUN_00910830 ====
void FUN_00910830(void);

// decompiled by BatchDecomp @ 00910830 name=FUN_00910830 conv=unknown body=10

void FUN_00910830(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098ca48);
  return;
}


//==== 0000910840 00910840_FUN_00910840 ====
void FUN_00910840(void);

// decompiled by BatchDecomp @ 00910840 name=FUN_00910840 conv=unknown body=10

void FUN_00910840(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098ca58);
  return;
}


//==== 0000910a70 00910a70_FUN_00910a70 ====
void FUN_00910a70(void);

// decompiled by BatchDecomp @ 00910a70 name=FUN_00910a70 conv=unknown body=10

void FUN_00910a70(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098cab8);
  return;
}


//==== 0000910a80 00910a80_FUN_00910a80 ====
void FUN_00910a80(void);

// decompiled by BatchDecomp @ 00910a80 name=FUN_00910a80 conv=unknown body=10

void FUN_00910a80(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098caf8);
  return;
}


//==== 0000910a90 00910a90_FUN_00910a90 ====
void FUN_00910a90(void);

// decompiled by BatchDecomp @ 00910a90 name=FUN_00910a90 conv=unknown body=10

void FUN_00910a90(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098cac8);
  return;
}


//==== 0000910aa0 00910aa0_FUN_00910aa0 ====
void FUN_00910aa0(void);

// decompiled by BatchDecomp @ 00910aa0 name=FUN_00910aa0 conv=unknown body=10

void FUN_00910aa0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098cb08);
  return;
}


//==== 0000910b10 00910b10_FUN_00910b10 ====
void FUN_00910b10(void);

// decompiled by BatchDecomp @ 00910b10 name=FUN_00910b10 conv=unknown body=10

void FUN_00910b10(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098cc38);
  return;
}


//==== 0000910b20 00910b20_FUN_00910b20 ====
void FUN_00910b20(void);

// decompiled by BatchDecomp @ 00910b20 name=FUN_00910b20 conv=unknown body=10

void FUN_00910b20(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098cc48);
  return;
}


//==== 0000910c10 00910c10_FUN_00910c10 ====
void FUN_00910c10(void);

// decompiled by BatchDecomp @ 00910c10 name=FUN_00910c10 conv=unknown body=10

void FUN_00910c10(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098cc80);
  return;
}


//==== 0000910c20 00910c20_FUN_00910c20 ====
void FUN_00910c20(void);

// decompiled by BatchDecomp @ 00910c20 name=FUN_00910c20 conv=unknown body=10

void FUN_00910c20(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098ccc0);
  return;
}


//==== 0000910c30 00910c30_FUN_00910c30 ====
void FUN_00910c30(void);

// decompiled by BatchDecomp @ 00910c30 name=FUN_00910c30 conv=unknown body=10

void FUN_00910c30(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098cc90);
  return;
}


//==== 0000910c40 00910c40_FUN_00910c40 ====
void FUN_00910c40(void);

// decompiled by BatchDecomp @ 00910c40 name=FUN_00910c40 conv=unknown body=10

void FUN_00910c40(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098ccd0);
  return;
}


//==== 0000911010 00911010_FUN_00911010 ====
void FUN_00911010(void);

// decompiled by BatchDecomp @ 00911010 name=FUN_00911010 conv=unknown body=10

void FUN_00911010(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098cd38);
  return;
}


//==== 0000911020 00911020_FUN_00911020 ====
void FUN_00911020(void);

// decompiled by BatchDecomp @ 00911020 name=FUN_00911020 conv=unknown body=10

void FUN_00911020(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098cd78);
  return;
}


//==== 0000911030 00911030_FUN_00911030 ====
void FUN_00911030(void);

// decompiled by BatchDecomp @ 00911030 name=FUN_00911030 conv=unknown body=10

void FUN_00911030(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098cd48);
  return;
}


//==== 0000911040 00911040_FUN_00911040 ====
void FUN_00911040(void);

// decompiled by BatchDecomp @ 00911040 name=FUN_00911040 conv=unknown body=10

void FUN_00911040(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098cd88);
  return;
}


//==== 0000911410 00911410_FUN_00911410 ====
void FUN_00911410(void);

// decompiled by BatchDecomp @ 00911410 name=FUN_00911410 conv=unknown body=10

void FUN_00911410(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d010);
  return;
}


//==== 0000911420 00911420_FUN_00911420 ====
void FUN_00911420(void);

// decompiled by BatchDecomp @ 00911420 name=FUN_00911420 conv=unknown body=10

void FUN_00911420(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d050);
  return;
}


//==== 0000911430 00911430_FUN_00911430 ====
void FUN_00911430(void);

// decompiled by BatchDecomp @ 00911430 name=FUN_00911430 conv=unknown body=10

void FUN_00911430(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d020);
  return;
}


//==== 0000911440 00911440_FUN_00911440 ====
void FUN_00911440(void);

// decompiled by BatchDecomp @ 00911440 name=FUN_00911440 conv=unknown body=10

void FUN_00911440(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d060);
  return;
}


//==== 00009114f0 009114f0_FUN_009114f0 ====
void FUN_009114f0(void);

// decompiled by BatchDecomp @ 009114f0 name=FUN_009114f0 conv=unknown body=10

void FUN_009114f0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d0e0);
  return;
}


//==== 0000911500 00911500_FUN_00911500 ====
void FUN_00911500(void);

// decompiled by BatchDecomp @ 00911500 name=FUN_00911500 conv=unknown body=10

void FUN_00911500(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d0f0);
  return;
}


//==== 00009115d0 009115d0_FUN_009115d0 ====
void FUN_009115d0(void);

// decompiled by BatchDecomp @ 009115d0 name=FUN_009115d0 conv=unknown body=10

void FUN_009115d0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d188);
  return;
}


//==== 00009115e0 009115e0_FUN_009115e0 ====
void FUN_009115e0(void);

// decompiled by BatchDecomp @ 009115e0 name=FUN_009115e0 conv=unknown body=10

void FUN_009115e0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d1c8);
  return;
}


//==== 00009115f0 009115f0_FUN_009115f0 ====
void FUN_009115f0(void);

// decompiled by BatchDecomp @ 009115f0 name=FUN_009115f0 conv=unknown body=10

void FUN_009115f0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d198);
  return;
}


//==== 0000911600 00911600_FUN_00911600 ====
void FUN_00911600(void);

// decompiled by BatchDecomp @ 00911600 name=FUN_00911600 conv=unknown body=10

void FUN_00911600(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d1d8);
  return;
}


//==== 00009116d0 009116d0_FUN_009116d0 ====
void FUN_009116d0(void);

// decompiled by BatchDecomp @ 009116d0 name=FUN_009116d0 conv=unknown body=10

void FUN_009116d0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d220);
  return;
}


//==== 00009116e0 009116e0_FUN_009116e0 ====
void FUN_009116e0(void);

// decompiled by BatchDecomp @ 009116e0 name=FUN_009116e0 conv=unknown body=10

void FUN_009116e0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d260);
  return;
}


//==== 00009116f0 009116f0_FUN_009116f0 ====
void FUN_009116f0(void);

// decompiled by BatchDecomp @ 009116f0 name=FUN_009116f0 conv=unknown body=10

void FUN_009116f0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d230);
  return;
}


//==== 0000911700 00911700_FUN_00911700 ====
void FUN_00911700(void);

// decompiled by BatchDecomp @ 00911700 name=FUN_00911700 conv=unknown body=10

void FUN_00911700(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d270);
  return;
}


//==== 0000911800 00911800_FUN_00911800 ====
void FUN_00911800(void);

// decompiled by BatchDecomp @ 00911800 name=FUN_00911800 conv=unknown body=10

void FUN_00911800(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d2bc);
  return;
}


//==== 0000911810 00911810_FUN_00911810 ====
void FUN_00911810(void);

// decompiled by BatchDecomp @ 00911810 name=FUN_00911810 conv=unknown body=10

void FUN_00911810(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0098d308);
  return;
}


//==== 0000911820 00911820_FUN_00911820 ====
void FUN_00911820(void);

// decompiled by BatchDecomp @ 00911820 name=FUN_00911820 conv=unknown body=10

void FUN_00911820(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d2cc);
  return;
}


//==== 0000911830 00911830_FUN_00911830 ====
void FUN_00911830(void);

// decompiled by BatchDecomp @ 00911830 name=FUN_00911830 conv=unknown body=10

void FUN_00911830(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0098d318);
  return;
}


//==== 00009118c0 009118c0_FUN_009118c0 ====
void FUN_009118c0(void);

// decompiled by BatchDecomp @ 009118c0 name=FUN_009118c0 conv=unknown body=10

void FUN_009118c0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0099221c);
  return;
}


//==== 00009118d0 009118d0_FUN_009118d0 ====
void FUN_009118d0(void);

// decompiled by BatchDecomp @ 009118d0 name=FUN_009118d0 conv=unknown body=10

void FUN_009118d0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_0099222c);
  return;
}


//==== 00009119a0 009119a0_FUN_009119a0 ====
void FUN_009119a0(void);

// decompiled by BatchDecomp @ 009119a0 name=FUN_009119a0 conv=unknown body=10

void FUN_009119a0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992258);
  return;
}


//==== 00009119b0 009119b0_FUN_009119b0 ====
void FUN_009119b0(void);

// decompiled by BatchDecomp @ 009119b0 name=FUN_009119b0 conv=unknown body=10

void FUN_009119b0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992298);
  return;
}


//==== 00009119c0 009119c0_FUN_009119c0 ====
void FUN_009119c0(void);

// decompiled by BatchDecomp @ 009119c0 name=FUN_009119c0 conv=unknown body=10

void FUN_009119c0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992268);
  return;
}


//==== 00009119d0 009119d0_FUN_009119d0 ====
void FUN_009119d0(void);

// decompiled by BatchDecomp @ 009119d0 name=FUN_009119d0 conv=unknown body=10

void FUN_009119d0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009922a8);
  return;
}


//==== 0000911aa0 00911aa0_FUN_00911aa0 ====
void FUN_00911aa0(void);

// decompiled by BatchDecomp @ 00911aa0 name=FUN_00911aa0 conv=unknown body=10

void FUN_00911aa0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009922f0);
  return;
}


//==== 0000911ab0 00911ab0_FUN_00911ab0 ====
void FUN_00911ab0(void);

// decompiled by BatchDecomp @ 00911ab0 name=FUN_00911ab0 conv=unknown body=10

void FUN_00911ab0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992330);
  return;
}


//==== 0000911ac0 00911ac0_FUN_00911ac0 ====
void FUN_00911ac0(void);

// decompiled by BatchDecomp @ 00911ac0 name=FUN_00911ac0 conv=unknown body=10

void FUN_00911ac0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992300);
  return;
}


//==== 0000911ad0 00911ad0_FUN_00911ad0 ====
void FUN_00911ad0(void);

// decompiled by BatchDecomp @ 00911ad0 name=FUN_00911ad0 conv=unknown body=10

void FUN_00911ad0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992340);
  return;
}


//==== 0000911ba0 00911ba0_FUN_00911ba0 ====
void FUN_00911ba0(void);

// decompiled by BatchDecomp @ 00911ba0 name=FUN_00911ba0 conv=unknown body=10

void FUN_00911ba0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992388);
  return;
}


//==== 0000911bb0 00911bb0_FUN_00911bb0 ====
void FUN_00911bb0(void);

// decompiled by BatchDecomp @ 00911bb0 name=FUN_00911bb0 conv=unknown body=10

void FUN_00911bb0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009923c8);
  return;
}


//==== 0000911bc0 00911bc0_FUN_00911bc0 ====
void FUN_00911bc0(void);

// decompiled by BatchDecomp @ 00911bc0 name=FUN_00911bc0 conv=unknown body=10

void FUN_00911bc0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992398);
  return;
}


//==== 0000911bd0 00911bd0_FUN_00911bd0 ====
void FUN_00911bd0(void);

// decompiled by BatchDecomp @ 00911bd0 name=FUN_00911bd0 conv=unknown body=10

void FUN_00911bd0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009923d8);
  return;
}


//==== 0000911c40 00911c40_FUN_00911c40 ====
void FUN_00911c40(void);

// decompiled by BatchDecomp @ 00911c40 name=FUN_00911c40 conv=unknown body=10

void FUN_00911c40(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992448);
  return;
}


//==== 0000911c50 00911c50_FUN_00911c50 ====
void FUN_00911c50(void);

// decompiled by BatchDecomp @ 00911c50 name=FUN_00911c50 conv=unknown body=10

void FUN_00911c50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992458);
  return;
}


//==== 0000911cc0 00911cc0_FUN_00911cc0 ====
void FUN_00911cc0(void);

// decompiled by BatchDecomp @ 00911cc0 name=FUN_00911cc0 conv=unknown body=10

void FUN_00911cc0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009924c8);
  return;
}


//==== 0000911cd0 00911cd0_FUN_00911cd0 ====
void FUN_00911cd0(void);

// decompiled by BatchDecomp @ 00911cd0 name=FUN_00911cd0 conv=unknown body=10

void FUN_00911cd0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009924d8);
  return;
}


//==== 0000911d40 00911d40_FUN_00911d40 ====
void FUN_00911d40(void);

// decompiled by BatchDecomp @ 00911d40 name=FUN_00911d40 conv=unknown body=10

void FUN_00911d40(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992530);
  return;
}


//==== 0000911d50 00911d50_FUN_00911d50 ====
void FUN_00911d50(void);

// decompiled by BatchDecomp @ 00911d50 name=FUN_00911d50 conv=unknown body=10

void FUN_00911d50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992540);
  return;
}


//==== 0000911e00 00911e00_FUN_00911e00 ====
void FUN_00911e00(void);

// decompiled by BatchDecomp @ 00911e00 name=FUN_00911e00 conv=unknown body=10

void FUN_00911e00(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992590);
  return;
}


//==== 0000911e10 00911e10_FUN_00911e10 ====
void FUN_00911e10(void);

// decompiled by BatchDecomp @ 00911e10 name=FUN_00911e10 conv=unknown body=10

void FUN_00911e10(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009925a0);
  return;
}


//==== 0000911ee0 00911ee0_FUN_00911ee0 ====
void FUN_00911ee0(void);

// decompiled by BatchDecomp @ 00911ee0 name=FUN_00911ee0 conv=unknown body=10

void FUN_00911ee0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009925d0);
  return;
}


//==== 0000911ef0 00911ef0_FUN_00911ef0 ====
void FUN_00911ef0(void);

// decompiled by BatchDecomp @ 00911ef0 name=FUN_00911ef0 conv=unknown body=10

void FUN_00911ef0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992610);
  return;
}


//==== 0000911f00 00911f00_FUN_00911f00 ====
void FUN_00911f00(void);

// decompiled by BatchDecomp @ 00911f00 name=FUN_00911f00 conv=unknown body=10

void FUN_00911f00(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009925e0);
  return;
}


//==== 0000911f10 00911f10_FUN_00911f10 ====
void FUN_00911f10(void);

// decompiled by BatchDecomp @ 00911f10 name=FUN_00911f10 conv=unknown body=10

void FUN_00911f10(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992620);
  return;
}


//==== 0000912080 00912080_FUN_00912080 ====
void FUN_00912080(void);

// decompiled by BatchDecomp @ 00912080 name=FUN_00912080 conv=unknown body=10

void FUN_00912080(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009929b0);
  return;
}


//==== 0000912090 00912090_FUN_00912090 ====
void FUN_00912090(void);

// decompiled by BatchDecomp @ 00912090 name=FUN_00912090 conv=unknown body=10

void FUN_00912090(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009929f4);
  return;
}


//==== 00009120a0 009120a0_FUN_009120a0 ====
void FUN_009120a0(void);

// decompiled by BatchDecomp @ 009120a0 name=FUN_009120a0 conv=unknown body=10

void FUN_009120a0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009929c0);
  return;
}


//==== 00009120b0 009120b0_FUN_009120b0 ====
void FUN_009120b0(void);

// decompiled by BatchDecomp @ 009120b0 name=FUN_009120b0 conv=unknown body=10

void FUN_009120b0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992a04);
  return;
}


//==== 0000912120 00912120_FUN_00912120 ====
void FUN_00912120(void);

// decompiled by BatchDecomp @ 00912120 name=FUN_00912120 conv=unknown body=10

void FUN_00912120(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992a70);
  return;
}


//==== 0000912130 00912130_FUN_00912130 ====
void FUN_00912130(void);

// decompiled by BatchDecomp @ 00912130 name=FUN_00912130 conv=unknown body=10

void FUN_00912130(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992a80);
  return;
}


//==== 0000912200 00912200_FUN_00912200 ====
void FUN_00912200(void);

// decompiled by BatchDecomp @ 00912200 name=FUN_00912200 conv=unknown body=10

void FUN_00912200(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992ab0);
  return;
}


//==== 0000912210 00912210_FUN_00912210 ====
void FUN_00912210(void);

// decompiled by BatchDecomp @ 00912210 name=FUN_00912210 conv=unknown body=10

void FUN_00912210(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992af0);
  return;
}


//==== 0000912220 00912220_FUN_00912220 ====
void FUN_00912220(void);

// decompiled by BatchDecomp @ 00912220 name=FUN_00912220 conv=unknown body=10

void FUN_00912220(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992ac0);
  return;
}


//==== 0000912230 00912230_FUN_00912230 ====
void FUN_00912230(void);

// decompiled by BatchDecomp @ 00912230 name=FUN_00912230 conv=unknown body=10

void FUN_00912230(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992b00);
  return;
}


//==== 0000912300 00912300_FUN_00912300 ====
void FUN_00912300(void);

// decompiled by BatchDecomp @ 00912300 name=FUN_00912300 conv=unknown body=10

void FUN_00912300(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992b48);
  return;
}


//==== 0000912310 00912310_FUN_00912310 ====
void FUN_00912310(void);

// decompiled by BatchDecomp @ 00912310 name=FUN_00912310 conv=unknown body=10

void FUN_00912310(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992b88);
  return;
}


//==== 0000912320 00912320_FUN_00912320 ====
void FUN_00912320(void);

// decompiled by BatchDecomp @ 00912320 name=FUN_00912320 conv=unknown body=10

void FUN_00912320(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992b58);
  return;
}


//==== 0000912330 00912330_FUN_00912330 ====
void FUN_00912330(void);

// decompiled by BatchDecomp @ 00912330 name=FUN_00912330 conv=unknown body=10

void FUN_00912330(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992b98);
  return;
}


//==== 00009123a0 009123a0_FUN_009123a0 ====
void FUN_009123a0(void);

// decompiled by BatchDecomp @ 009123a0 name=FUN_009123a0 conv=unknown body=10

void FUN_009123a0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992c00);
  return;
}


//==== 00009123b0 009123b0_FUN_009123b0 ====
void FUN_009123b0(void);

// decompiled by BatchDecomp @ 009123b0 name=FUN_009123b0 conv=unknown body=10

void FUN_009123b0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992c10);
  return;
}


//==== 00009124e0 009124e0_FUN_009124e0 ====
void FUN_009124e0(void);

// decompiled by BatchDecomp @ 009124e0 name=FUN_009124e0 conv=unknown body=10

void FUN_009124e0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992c60);
  return;
}


//==== 00009124f0 009124f0_FUN_009124f0 ====
void FUN_009124f0(void);

// decompiled by BatchDecomp @ 009124f0 name=FUN_009124f0 conv=unknown body=10

void FUN_009124f0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992ca0);
  return;
}


//==== 0000912500 00912500_FUN_00912500 ====
void FUN_00912500(void);

// decompiled by BatchDecomp @ 00912500 name=FUN_00912500 conv=unknown body=10

void FUN_00912500(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992c70);
  return;
}


//==== 0000912510 00912510_FUN_00912510 ====
void FUN_00912510(void);

// decompiled by BatchDecomp @ 00912510 name=FUN_00912510 conv=unknown body=10

void FUN_00912510(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992cb0);
  return;
}


//==== 00009125e0 009125e0_FUN_009125e0 ====
void FUN_009125e0(void);

// decompiled by BatchDecomp @ 009125e0 name=FUN_009125e0 conv=unknown body=10

void FUN_009125e0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992d00);
  return;
}


//==== 00009125f0 009125f0_FUN_009125f0 ====
void FUN_009125f0(void);

// decompiled by BatchDecomp @ 009125f0 name=FUN_009125f0 conv=unknown body=10

void FUN_009125f0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992d40);
  return;
}


//==== 0000912600 00912600_FUN_00912600 ====
void FUN_00912600(void);

// decompiled by BatchDecomp @ 00912600 name=FUN_00912600 conv=unknown body=10

void FUN_00912600(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992d10);
  return;
}


//==== 0000912610 00912610_FUN_00912610 ====
void FUN_00912610(void);

// decompiled by BatchDecomp @ 00912610 name=FUN_00912610 conv=unknown body=10

void FUN_00912610(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992d50);
  return;
}


//==== 00009126e0 009126e0_FUN_009126e0 ====
void FUN_009126e0(void);

// decompiled by BatchDecomp @ 009126e0 name=FUN_009126e0 conv=unknown body=10

void FUN_009126e0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992d98);
  return;
}


//==== 00009126f0 009126f0_FUN_009126f0 ====
void FUN_009126f0(void);

// decompiled by BatchDecomp @ 009126f0 name=FUN_009126f0 conv=unknown body=10

void FUN_009126f0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992dd8);
  return;
}


//==== 0000912700 00912700_FUN_00912700 ====
void FUN_00912700(void);

// decompiled by BatchDecomp @ 00912700 name=FUN_00912700 conv=unknown body=10

void FUN_00912700(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992da8);
  return;
}


//==== 0000912710 00912710_FUN_00912710 ====
void FUN_00912710(void);

// decompiled by BatchDecomp @ 00912710 name=FUN_00912710 conv=unknown body=10

void FUN_00912710(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992de8);
  return;
}


//==== 00009127e0 009127e0_FUN_009127e0 ====
void FUN_009127e0(void);

// decompiled by BatchDecomp @ 009127e0 name=FUN_009127e0 conv=unknown body=10

void FUN_009127e0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992e30);
  return;
}


//==== 00009127f0 009127f0_FUN_009127f0 ====
void FUN_009127f0(void);

// decompiled by BatchDecomp @ 009127f0 name=FUN_009127f0 conv=unknown body=10

void FUN_009127f0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992e70);
  return;
}


//==== 0000912800 00912800_FUN_00912800 ====
void FUN_00912800(void);

// decompiled by BatchDecomp @ 00912800 name=FUN_00912800 conv=unknown body=10

void FUN_00912800(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992e40);
  return;
}


//==== 0000912810 00912810_FUN_00912810 ====
void FUN_00912810(void);

// decompiled by BatchDecomp @ 00912810 name=FUN_00912810 conv=unknown body=10

void FUN_00912810(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992e80);
  return;
}


//==== 00009128c0 009128c0_FUN_009128c0 ====
void FUN_009128c0(void);

// decompiled by BatchDecomp @ 009128c0 name=FUN_009128c0 conv=unknown body=10

void FUN_009128c0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992ee8);
  return;
}


//==== 00009128d0 009128d0_FUN_009128d0 ====
void FUN_009128d0(void);

// decompiled by BatchDecomp @ 009128d0 name=FUN_009128d0 conv=unknown body=10

void FUN_009128d0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992ef8);
  return;
}


//==== 00009129a0 009129a0_FUN_009129a0 ====
void FUN_009129a0(void);

// decompiled by BatchDecomp @ 009129a0 name=FUN_009129a0 conv=unknown body=10

void FUN_009129a0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992f28);
  return;
}


//==== 00009129b0 009129b0_FUN_009129b0 ====
void FUN_009129b0(void);

// decompiled by BatchDecomp @ 009129b0 name=FUN_009129b0 conv=unknown body=10

void FUN_009129b0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992f68);
  return;
}


//==== 00009129c0 009129c0_FUN_009129c0 ====
void FUN_009129c0(void);

// decompiled by BatchDecomp @ 009129c0 name=FUN_009129c0 conv=unknown body=10

void FUN_009129c0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992f38);
  return;
}


//==== 00009129d0 009129d0_FUN_009129d0 ====
void FUN_009129d0(void);

// decompiled by BatchDecomp @ 009129d0 name=FUN_009129d0 conv=unknown body=10

void FUN_009129d0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992f78);
  return;
}


//==== 0000912a40 00912a40_FUN_00912a40 ====
void FUN_00912a40(void);

// decompiled by BatchDecomp @ 00912a40 name=FUN_00912a40 conv=unknown body=10

void FUN_00912a40(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00992fe0);
  return;
}


//==== 0000912a50 00912a50_FUN_00912a50 ====
void FUN_00912a50(void);

// decompiled by BatchDecomp @ 00912a50 name=FUN_00912a50 conv=unknown body=10

void FUN_00912a50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00992ff0);
  return;
}


//==== 0000912ac0 00912ac0_FUN_00912ac0 ====
void FUN_00912ac0(void);

// decompiled by BatchDecomp @ 00912ac0 name=FUN_00912ac0 conv=unknown body=10

void FUN_00912ac0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00993040);
  return;
}


//==== 0000912ad0 00912ad0_FUN_00912ad0 ====
void FUN_00912ad0(void);

// decompiled by BatchDecomp @ 00912ad0 name=FUN_00912ad0 conv=unknown body=10

void FUN_00912ad0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00993050);
  return;
}


//==== 0000912b40 00912b40_FUN_00912b40 ====
void FUN_00912b40(void);

// decompiled by BatchDecomp @ 00912b40 name=FUN_00912b40 conv=unknown body=10

void FUN_00912b40(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009930a0);
  return;
}


//==== 0000912b50 00912b50_FUN_00912b50 ====
void FUN_00912b50(void);

// decompiled by BatchDecomp @ 00912b50 name=FUN_00912b50 conv=unknown body=10

void FUN_00912b50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009930b0);
  return;
}


//==== 0000912c20 00912c20_FUN_00912c20 ====
void FUN_00912c20(void);

// decompiled by BatchDecomp @ 00912c20 name=FUN_00912c20 conv=unknown body=10

void FUN_00912c20(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009930e0);
  return;
}


//==== 0000912c30 00912c30_FUN_00912c30 ====
void FUN_00912c30(void);

// decompiled by BatchDecomp @ 00912c30 name=FUN_00912c30 conv=unknown body=10

void FUN_00912c30(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00993120);
  return;
}


//==== 0000912c40 00912c40_FUN_00912c40 ====
void FUN_00912c40(void);

// decompiled by BatchDecomp @ 00912c40 name=FUN_00912c40 conv=unknown body=10

void FUN_00912c40(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009930f0);
  return;
}


//==== 0000912c50 00912c50_FUN_00912c50 ====
void FUN_00912c50(void);

// decompiled by BatchDecomp @ 00912c50 name=FUN_00912c50 conv=unknown body=10

void FUN_00912c50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00993130);
  return;
}


//==== 0000912d20 00912d20_FUN_00912d20 ====
void FUN_00912d20(void);

// decompiled by BatchDecomp @ 00912d20 name=FUN_00912d20 conv=unknown body=10

void FUN_00912d20(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00993178);
  return;
}


//==== 0000912d30 00912d30_FUN_00912d30 ====
void FUN_00912d30(void);

// decompiled by BatchDecomp @ 00912d30 name=FUN_00912d30 conv=unknown body=10

void FUN_00912d30(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009931b8);
  return;
}


//==== 0000912d40 00912d40_FUN_00912d40 ====
void FUN_00912d40(void);

// decompiled by BatchDecomp @ 00912d40 name=FUN_00912d40 conv=unknown body=10

void FUN_00912d40(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00993188);
  return;
}


//==== 0000912d50 00912d50_FUN_00912d50 ====
void FUN_00912d50(void);

// decompiled by BatchDecomp @ 00912d50 name=FUN_00912d50 conv=unknown body=10

void FUN_00912d50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009931c8);
  return;
}


//==== 0000912e20 00912e20_FUN_00912e20 ====
void FUN_00912e20(void);

// decompiled by BatchDecomp @ 00912e20 name=FUN_00912e20 conv=unknown body=10

void FUN_00912e20(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00993218);
  return;
}


//==== 0000912e30 00912e30_FUN_00912e30 ====
void FUN_00912e30(void);

// decompiled by BatchDecomp @ 00912e30 name=FUN_00912e30 conv=unknown body=10

void FUN_00912e30(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00993258);
  return;
}


//==== 0000912e40 00912e40_FUN_00912e40 ====
void FUN_00912e40(void);

// decompiled by BatchDecomp @ 00912e40 name=FUN_00912e40 conv=unknown body=10

void FUN_00912e40(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00993228);
  return;
}


//==== 0000912e50 00912e50_FUN_00912e50 ====
void FUN_00912e50(void);

// decompiled by BatchDecomp @ 00912e50 name=FUN_00912e50 conv=unknown body=10

void FUN_00912e50(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_00993268);
  return;
}


//==== 0000912ec0 00912ec0_FUN_00912ec0 ====
void FUN_00912ec0(void);

// decompiled by BatchDecomp @ 00912ec0 name=FUN_00912ec0 conv=unknown body=10

void FUN_00912ec0(void)

{
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009932d8);
  return;
}


//==== 0000912ed0 00912ed0_FUN_00912ed0 ====
void FUN_00912ed0(void);

// decompiled by BatchDecomp @ 00912ed0 name=FUN_00912ed0 conv=unknown body=10

void FUN_00912ed0(void)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr((Darray_L_class_util__LocStr_G_ *)&DAT_009932e8);
  return;
}

