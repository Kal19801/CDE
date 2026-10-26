// pilot_sweep_sweep08.c - assembled by scripts/sweep_assemble.py (r19)
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
/* ---- GL PFN typedefs: Khronos headers directly (extraction-free) ---- */
#include <glcorearb.h>
#include <glext.h>
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define ____glewActiveProgramEXT (*(PFNGLACTIVEPROGRAMEXTPROC *)(0x0098c05cu))
#define ____glewApplyTextureEXT (*(PFNGLAPPLYTEXTUREEXTPROC *)(0x0098bec8u))
#define ____glewBeginConditionalRenderNV (*(PFNGLBEGINCONDITIONALRENDERNVPROC *)(0x00989e10u))
#define ____glewBeginConditionalRenderNVX (*(PFNGLBEGINCONDITIONALRENDERNVXPROC *)(0x0098c6c0u))
#define ____glewBindAttribLocationARB (*(PFNGLBINDATTRIBLOCATIONARBPROC *)(0x0098a710u))
#define ____glewBindFragDataLocationIndexed (*(PFNGLBINDFRAGDATALOCATIONINDEXEDPROC *)(0x0098b990u))
#define ____glewBindImageTexture (*(PFNGLBINDIMAGETEXTUREPROC *)(0x00989e80u))
#define ____glewBindImageTextureEXT (*(PFNGLBINDIMAGETEXTUREEXTPROC *)(0x0098c078u))
#define ____glewBinormalPointerEXT (*(PFNGLBINORMALPOINTEREXTPROC *)(0x0098b158u))
#define ____glewBlendBarrierNV (*(PFNGLBLENDBARRIERNVPROC *)(0x00989d60u))
#define ____glewBlendParameteriNV (*(PFNGLBLENDPARAMETERINVPROC *)(0x00989d64u))
#define ____glewBufferParameteriAPPLE (*(PFNGLBUFFERPARAMETERIAPPLEPROC *)(0x0098b7bcu))
#define ____glewBufferStorage (*(PFNGLBUFFERSTORAGEPROC *)(0x0098b9a4u))
#define ____glewClearDepthdNV (*(PFNGLCLEARDEPTHDNVPROC *)(0x00989e48u))
#define ____glewClearTexImage (*(PFNGLCLEARTEXIMAGEPROC *)(0x0098b9e4u))
#define ____glewClearTexSubImage (*(PFNGLCLEARTEXSUBIMAGEPROC *)(0x0098b9ecu))
#define ____glewColorSubTableEXT (*(PFNGLCOLORSUBTABLEEXTPROC *)(0x0098b08cu))
#define ____glewCombinerStageParameterfvNV (*(PFNGLCOMBINERSTAGEPARAMETERFVNVPROC *)(0x0098a730u))
#define ____glewCopyColorSubTableEXT (*(PFNGLCOPYCOLORSUBTABLEEXTPROC *)(0x0098b094u))
#define ____glewCreateShaderProgramEXT (*(PFNGLCREATESHADERPROGRAMEXTPROC *)(0x0098c064u))
#define ____glewCullParameterdvEXT (*(PFNGLCULLPARAMETERDVEXTPROC *)(0x0098b1a8u))
#define ____glewCullParameterfvEXT (*(PFNGLCULLPARAMETERFVEXTPROC *)(0x0098b1b4u))
#define ____glewDeleteNamesAMD (*(PFNGLDELETENAMESAMDPROC *)(0x0098b554u))
#define ____glewDepthBoundsdNV (*(PFNGLDEPTHBOUNDSDNVPROC *)(0x00989e50u))
#define ____glewDepthRangedNV (*(PFNGLDEPTHRANGEDNVPROC *)(0x00989e5cu))
#define ____glewDetailTexFuncSGIS (*(PFNGLDETAILTEXFUNCSGISPROC *)(0x0098b340u))
#define ____glewDispatchCompute (*(PFNGLDISPATCHCOMPUTEPROC *)(0x0098ba0cu))
#define ____glewDispatchComputeIndirect (*(PFNGLDISPATCHCOMPUTEINDIRECTPROC *)(0x0098ba10u))
#define ____glewDrawArraysIndirect (*(PFNGLDRAWARRAYSINDIRECTPROC *)(0x0098be14u))
#define ____glewDrawArraysInstancedARB (*(PFNGLDRAWARRAYSINSTANCEDARBPROC *)(0x0098c270u))
#define ____glewDrawArraysInstancedBaseInstance (*(PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC *)(0x0098b8e0u))
#define ____glewDrawArraysInstancedEXT (*(PFNGLDRAWARRAYSINSTANCEDEXTPROC *)(0x0098bb64u))
#define ____glewDrawElementArrayATI (*(PFNGLDRAWELEMENTARRAYATIPROC *)(0x0098ab5cu))
#define ____glewDrawElementsIndirect (*(PFNGLDRAWELEMENTSINDIRECTPROC *)(0x0098be18u))
#define ____glewDrawElementsInstancedARB (*(PFNGLDRAWELEMENTSINSTANCEDARBPROC *)(0x0098c278u))
#define ____glewDrawElementsInstancedBaseInstance (*(PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC *)(0x0098b8e8u))
#define ____glewDrawElementsInstancedBaseVertexBaseInstance (*(PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC *)(0x0098b8f0u))
#define ____glewDrawElementsInstancedEXT (*(PFNGLDRAWELEMENTSINSTANCEDEXTPROC *)(0x0098bb74u))
#define ____glewDrawRangeElementArrayATI (*(PFNGLDRAWRANGEELEMENTARRAYATIPROC *)(0x0098ab6cu))
#define ____glewDrawTransformFeedbackInstanced (*(PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC *)(0x0098a24cu))
#define ____glewDrawTransformFeedbackStreamInstanced (*(PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC *)(0x0098a250u))
#define ____glewElementPointerATI (*(PFNGLELEMENTPOINTERATIPROC *)(0x0098ab78u))
#define ____glewEndConditionalRenderNV (*(PFNGLENDCONDITIONALRENDERNVPROC *)(0x00989e18u))
#define ____glewEndConditionalRenderNVX (*(PFNGLENDCONDITIONALRENDERNVXPROC *)(0x0098c6c8u))
#define ____glewFlushMappedBufferRange (*(PFNGLFLUSHMAPPEDBUFFERRANGEPROC *)(0x0098c2d4u))
#define ____glewFlushMappedBufferRangeAPPLE (*(PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC *)(0x0098b7c0u))
#define ____glewFlushPixelDataRangeNV (*(PFNGLFLUSHPIXELDATARANGENVPROC *)(0x0098a5ccu))
#define ____glewFlushVertexArrayRangeAPPLE (*(PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC *)(0x0098b840u))
#define ____glewFlushVertexArrayRangeNV (*(PFNGLFLUSHVERTEXARRAYRANGENVPROC *)(0x0098aa74u))
#define ____glewFogFuncSGIS (*(PFNGLFOGFUNCSGISPROC *)(0x0098b360u))
#define ____glewFramebufferSampleLocationsfvARB (*(PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC *)(0x0098c5e8u))
#define ____glewFramebufferSampleLocationsfvNV (*(PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC *)(0x0098a750u))
#define ____glewFramebufferTextureEXT (*(PFNGLFRAMEBUFFERTEXTUREEXTPROC *)(0x0098bcfcu))
#define ____glewFramebufferTextureFaceEXT (*(PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC *)(0x0098bd04u))
#define ____glewGenNamesAMD (*(PFNGLGENNAMESAMDPROC *)(0x0098b560u))
#define ____glewGetActiveAttribARB (*(PFNGLGETACTIVEATTRIBARBPROC *)(0x0098a72cu))
#define ____glewGetAttribLocationARB (*(PFNGLGETATTRIBLOCATIONARBPROC *)(0x0098a73cu))
#define ____glewGetCombinerStageParameterfvNV (*(PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC *)(0x0098a744u))
#define ____glewGetCompressedTextureSubImage (*(PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC *)(0x0098bf38u))
#define ____glewGetDetailTexFuncSGIS (*(PFNGLGETDETAILTEXFUNCSGISPROC *)(0x0098b350u))
#define ____glewGetFogFuncSGIS (*(PFNGLGETFOGFUNCSGISPROC *)(0x0098b368u))
#define ____glewGetFragDataIndex (*(PFNGLGETFRAGDATAINDEXPROC *)(0x0098b99cu))
#define ____glewGetMultisamplefvNV (*(PFNGLGETMULTISAMPLEFVNVPROC *)(0x00989ee8u))
#define ____glewGetObjectLabelEXT (*(PFNGLGETOBJECTLABELEXTPROC *)(0x0098b1c8u))
#define ____glewGetObjectParameterivAPPLE (*(PFNGLGETOBJECTPARAMETERIVAPPLEPROC *)(0x0098b7d0u))
#define ____glewGetProgramBinary (*(PFNGLGETPROGRAMBINARYPROC *)(0x0098bf24u))
#define ____glewGetQueryObjecti64v (*(PFNGLGETQUERYOBJECTI64VPROC *)(0x0098a1c8u))
#define ____glewGetQueryObjecti64vEXT (*(PFNGLGETQUERYOBJECTI64VEXTPROC *)(0x0098c13cu))
#define ____glewGetQueryObjectui64v (*(PFNGLGETQUERYOBJECTUI64VPROC *)(0x0098a1d8u))
#define ____glewGetQueryObjectui64vEXT (*(PFNGLGETQUERYOBJECTUI64VEXTPROC *)(0x0098c144u))
#define ____glewGetSharpenTexFuncSGIS (*(PFNGLGETSHARPENTEXFUNCSGISPROC *)(0x0098b388u))
#define ____glewGetTexFilterFuncSGIS (*(PFNGLGETTEXFILTERFUNCSGISPROC *)(0x0098b3bcu))
#define ____glewGetTexParameterPointervAPPLE (*(PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC *)(0x0098b7f8u))
#define ____glewGetTextureSubImage (*(PFNGLGETTEXTURESUBIMAGEPROC *)(0x0098bf48u))
#define ____glewGetUniformBufferSizeEXT (*(PFNGLGETUNIFORMBUFFERSIZEEXTPROC *)(0x0098b034u))
#define ____glewGetUniformOffsetEXT (*(PFNGLGETUNIFORMOFFSETEXTPROC *)(0x0098b040u))
#define ____glewGetVertexAttribArrayObjectfvATI (*(PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC *)(0x0098adc0u))
#define ____glewGetVertexAttribArrayObjectivATI (*(PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC *)(0x0098add4u))
#define ____glewInsertEventMarkerEXT (*(PFNGLINSERTEVENTMARKEREXTPROC *)(0x0098b1d8u))
#define ____glewIsNameAMD (*(PFNGLISNAMEAMDPROC *)(0x0098b568u))
#define ____glewLGPUCopyImageSubDataNVX (*(PFNGLLGPUCOPYIMAGESUBDATANVXPROC *)(0x0098c6d0u))
#define ____glewLGPUInterlockNVX (*(PFNGLLGPUINTERLOCKNVXPROC *)(0x0098c6e0u))
#define ____glewLGPUNamedBufferSubDataNVX (*(PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC *)(0x0098c6e4u))
#define ____glewLabelObjectEXT (*(PFNGLLABELOBJECTEXTPROC *)(0x0098b1ccu))
#define ____glewLockArraysEXT (*(PFNGLLOCKARRAYSEXTPROC *)(0x0098b0a0u))
#define ____glewMapBufferRange (*(PFNGLMAPBUFFERRANGEPROC *)(0x0098c2dcu))
#define ____glewMapObjectBufferATI (*(PFNGLMAPOBJECTBUFFERATIPROC *)(0x0098aca4u))
#define ____glewMapTexture2DINTEL (*(PFNGLMAPTEXTURE2DINTELPROC *)(0x0098c484u))
#define ____glewMemoryBarrier (*(PFNGLMEMORYBARRIERPROC *)(0x00989e84u))
#define ____glewMemoryBarrierEXT (*(PFNGLMEMORYBARRIEREXTPROC *)(0x0098c084u))
#define ____glewMultiDrawArraysEXT (*(PFNGLMULTIDRAWARRAYSEXTPROC *)(0x0098bee4u))
#define ____glewMultiDrawArraysIndirect (*(PFNGLMULTIDRAWARRAYSINDIRECTPROC *)(0x0098c348u))
#define ____glewMultiDrawArraysIndirectAMD (*(PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC *)(0x0098b53cu))
#define ____glewMultiDrawArraysIndirectBindlessCountNV (*(PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC *)(0x00989cd8u))
#define ____glewMultiDrawArraysIndirectBindlessNV (*(PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC *)(0x00989cc8u))
#define ____glewMultiDrawArraysIndirectCountARB (*(PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC *)(0x0098c25cu))
#define ____glewMultiDrawElementsEXT (*(PFNGLMULTIDRAWELEMENTSEXTPROC *)(0x0098bee8u))
#define ____glewMultiDrawElementsIndirect (*(PFNGLMULTIDRAWELEMENTSINDIRECTPROC *)(0x0098c350u))
#define ____glewMultiDrawElementsIndirectAMD (*(PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC *)(0x0098b54cu))
#define ____glewMultiDrawElementsIndirectBindlessCountNV (*(PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC *)(0x00989ce0u))
#define ____glewMultiDrawElementsIndirectBindlessNV (*(PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC *)(0x00989cccu))
#define ____glewMultiDrawElementsIndirectCountARB (*(PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC *)(0x0098c264u))
#define ____glewMultiModeDrawArraysIBM (*(PFNGLMULTIMODEDRAWARRAYSIBMPROC *)(0x0098c424u))
#define ____glewMultiModeDrawElementsIBM (*(PFNGLMULTIMODEDRAWELEMENTSIBMPROC *)(0x0098c430u))
#define ____glewNamedBufferStorageEXT (*(PFNGLNAMEDBUFFERSTORAGEEXTPROC *)(0x0098b9acu))
#define ____glewNamedFramebufferSampleLocationsfvARB (*(PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC *)(0x0098c5f0u))
#define ____glewNamedFramebufferSampleLocationsfvNV (*(PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC *)(0x0098a764u))
#define ____glewObjectPurgeableAPPLE (*(PFNGLOBJECTPURGEABLEAPPLEPROC *)(0x0098b7e0u))
#define ____glewObjectUnpurgeableAPPLE (*(PFNGLOBJECTUNPURGEABLEAPPLEPROC *)(0x0098b7ecu))
#define ____glewPNTrianglesfATI (*(PFNGLPNTRIANGLESFATIPROC *)(0x0098acc8u))
#define ____glewPNTrianglesiATI (*(PFNGLPNTRIANGLESIATIPROC *)(0x0098acd4u))
#define ____glewPatchParameterfv (*(PFNGLPATCHPARAMETERFVPROC *)(0x0098a0ccu))
#define ____glewPatchParameteri (*(PFNGLPATCHPARAMETERIPROC *)(0x0098a0d4u))
#define ____glewPixelDataRangeNV (*(PFNGLPIXELDATARANGENVPROC *)(0x0098a5d8u))
#define ____glewPointParameterfARB (*(PFNGLPOINTPARAMETERFARBPROC *)(0x0098c4e8u))
#define ____glewPointParameterfEXT (*(PFNGLPOINTPARAMETERFEXTPROC *)(0x0098bf64u))
#define ____glewPointParameterfvARB (*(PFNGLPOINTPARAMETERFVARBPROC *)(0x0098c4ecu))
#define ____glewPointParameterfvEXT (*(PFNGLPOINTPARAMETERFVEXTPROC *)(0x0098bf6cu))
#define ____glewPointParameteriNV (*(PFNGLPOINTPARAMETERINVPROC *)(0x0098a5e4u))
#define ____glewPointParameterivNV (*(PFNGLPOINTPARAMETERIVNVPROC *)(0x0098a5f8u))
#define ____glewPopGroupMarkerEXT (*(PFNGLPOPGROUPMARKEREXTPROC *)(0x0098b1e8u))
#define ____glewPrimitiveRestartIndexNV (*(PFNGLPRIMITIVERESTARTINDEXNVPROC *)(0x0098a64cu))
#define ____glewPrimitiveRestartNV (*(PFNGLPRIMITIVERESTARTNVPROC *)(0x0098a65cu))
#define ____glewProgramBinary (*(PFNGLPROGRAMBINARYPROC *)(0x0098bf28u))
#define ____glewProgramBufferParametersIivNV (*(PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC *)(0x0098a380u))
#define ____glewProgramBufferParametersIuivNV (*(PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC *)(0x0098a388u))
#define ____glewProgramBufferParametersfvNV (*(PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC *)(0x0098a394u))
#define ____glewProgramEnvParameters4fvEXT (*(PFNGLPROGRAMENVPARAMETERS4FVEXTPROC *)(0x0098bd14u))
#define ____glewProgramLocalParameters4fvEXT (*(PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC *)(0x0098bd24u))
#define ____glewProgramParameteri (*(PFNGLPROGRAMPARAMETERIPROC *)(0x0098bf34u))
#define ____glewProgramParameteriEXT (*(PFNGLPROGRAMPARAMETERIEXTPROC *)(0x0098bd10u))
#define ____glewPushGroupMarkerEXT (*(PFNGLPUSHGROUPMARKEREXTPROC *)(0x0098b1f0u))
#define ____glewQueryCounter (*(PFNGLQUERYCOUNTERPROC *)(0x0098a1e0u))
#define ____glewSampleMaskEXT (*(PFNGLSAMPLEMASKEXTPROC *)(0x0098bef4u))
#define ____glewSampleMaskIndexedNV (*(PFNGLSAMPLEMASKINDEXEDNVPROC *)(0x00989ef4u))
#define ____glewSampleMaskSGIS (*(PFNGLSAMPLEMASKSGISPROC *)(0x0098b378u))
#define ____glewSamplePatternEXT (*(PFNGLSAMPLEPATTERNEXTPROC *)(0x0098befcu))
#define ____glewSamplePatternSGIS (*(PFNGLSAMPLEPATTERNSGISPROC *)(0x0098b384u))
#define ____glewSharpenTexFuncSGIS (*(PFNGLSHARPENTEXFUNCSGISPROC *)(0x0098b398u))
#define ____glewStencilFuncSeparateATI (*(PFNGLSTENCILFUNCSEPARATEATIPROC *)(0x0098ace4u))
#define ____glewStencilOpSeparateATI (*(PFNGLSTENCILOPSEPARATEATIPROC *)(0x0098acfcu))
#define ____glewSyncTextureINTEL (*(PFNGLSYNCTEXTUREINTELPROC *)(0x0098c48cu))
#define ____glewTangentPointerEXT (*(PFNGLTANGENTPOINTEREXTPROC *)(0x0098b164u))
#define ____glewTessellationFactorAMD (*(PFNGLTESSELLATIONFACTORAMDPROC *)(0x0098b634u))
#define ____glewTessellationModeAMD (*(PFNGLTESSELLATIONMODEAMDPROC *)(0x0098b648u))
#define ____glewTexBufferRange (*(PFNGLTEXBUFFERRANGEPROC *)(0x0098a0f4u))
#define ____glewTexFilterFuncSGIS (*(PFNGLTEXFILTERFUNCSGISPROC *)(0x0098b3c4u))
#define ____glewTexImage4DSGIS (*(PFNGLTEXIMAGE4DSGISPROC *)(0x0098b3a8u))
#define ____glewTexPageCommitmentARB (*(PFNGLTEXPAGECOMMITMENTARBPROC *)(0x0098a07cu))
#define ____glewTexRenderbufferNV (*(PFNGLTEXRENDERBUFFERNVPROC *)(0x00989efcu))
#define ____glewTexStorageSparseAMD (*(PFNGLTEXSTORAGESPARSEAMDPROC *)(0x0098b614u))
#define ____glewTexSubImage1DEXT (*(PFNGLTEXSUBIMAGE1DEXTPROC *)(0x0098c094u))
#define ____glewTexSubImage2DEXT (*(PFNGLTEXSUBIMAGE2DEXTPROC *)(0x0098c09cu))
#define ____glewTexSubImage3DEXT (*(PFNGLTEXSUBIMAGE3DEXTPROC *)(0x0098c0a4u))
#define ____glewTexSubImage4DSGIS (*(PFNGLTEXSUBIMAGE4DSGISPROC *)(0x0098b3acu))
#define ____glewTextureBufferRangeEXT (*(PFNGLTEXTUREBUFFERRANGEEXTPROC *)(0x0098a0fcu))
#define ____glewTextureLightEXT (*(PFNGLTEXTURELIGHTEXTPROC *)(0x0098bed4u))
#define ____glewTextureMaterialEXT (*(PFNGLTEXTUREMATERIALEXTPROC *)(0x0098bed8u))
#define ____glewTexturePageCommitmentEXT (*(PFNGLTEXTUREPAGECOMMITMENTEXTPROC *)(0x0098a084u))
#define ____glewTextureRangeAPPLE (*(PFNGLTEXTURERANGEAPPLEPROC *)(0x0098b7fcu))
#define ____glewTextureStorageSparseAMD (*(PFNGLTEXTURESTORAGESPARSEAMDPROC *)(0x0098b61cu))
#define ____glewUniformBufferEXT (*(PFNGLUNIFORMBUFFEREXTPROC *)(0x0098b04cu))
#define ____glewUnlockArraysEXT (*(PFNGLUNLOCKARRAYSEXTPROC *)(0x0098b0b0u))
#define ____glewUnmapObjectBufferATI (*(PFNGLUNMAPOBJECTBUFFERATIPROC *)(0x0098acb8u))
#define ____glewUnmapTexture2DINTEL (*(PFNGLUNMAPTEXTURE2DINTELPROC *)(0x0098c494u))
#define ____glewUseShaderProgramEXT (*(PFNGLUSESHADERPROGRAMEXTPROC *)(0x0098c070u))
#define ____glewVertexArrayParameteriAPPLE (*(PFNGLVERTEXARRAYPARAMETERIAPPLEPROC *)(0x0098b84cu))
#define ____glewVertexArrayRangeAPPLE (*(PFNGLVERTEXARRAYRANGEAPPLEPROC *)(0x0098b850u))
#define ____glewVertexArrayRangeNV (*(PFNGLVERTEXARRAYRANGENVPROC *)(0x0098aa8cu))
#define ____glewVertexAttribArrayObjectATI (*(PFNGLVERTEXATTRIBARRAYOBJECTATIPROC *)(0x0098ade0u))
#define ____glewVertexAttribDivisorARB (*(PFNGLVERTEXATTRIBDIVISORARBPROC *)(0x0098c280u))
#define ____glewVertexWeightPointerEXT (*(PFNGLVERTEXWEIGHTPOINTEREXTPROC *)(0x0098c3b0u))
#define ____glewVertexWeightfEXT (*(PFNGLVERTEXWEIGHTFEXTPROC *)(0x0098c3b8u))
#define ____glewVertexWeightfvEXT (*(PFNGLVERTEXWEIGHTFVEXTPROC *)(0x0098c3c8u))
#define DAT_009640d0 (*(undefined1 *)(0x009640d0u))
#define DAT_009640e0 (*(undefined1 *)(0x009640e0u))
#define DAT_00967a60 (*(undefined1 *)(0x00967a60u))
#define DAT_00967a70 (*(undefined1 *)(0x00967a70u))
#define DAT_0097cdf0 (*(undefined1 *)(0x0097cdf0u))
#define DAT_0097ce00 (*(undefined1 *)(0x0097ce00u))
#define DAT_00987170 (*(undefined1 *)(0x00987170u))
#define DAT_009871a4 (*(undefined1 *)(0x009871a4u))
#define DAT_00987238 (*(undefined1 *)(0x00987238u))
#define DAT_00987248 (*(undefined1 *)(0x00987248u))
#define _DAT_00960cf0 (*(undefined1 *)(0x00960cf0u))
#define _DAT_00960d90 (*(undefined1 *)(0x00960d90u))
#define _DAT_009610a0 (*(undefined1 *)(0x009610a0u))
#define _DAT_00961318 (*(undefined1 *)(0x00961318u))
#define _DAT_00961940 (*(undefined1 *)(0x00961940u))
#define _DAT_00962a18 (*(undefined1 *)(0x00962a18u))
#define _DAT_00962b18 (*(undefined1 *)(0x00962b18u))
#define _DAT_00963180 (*(undefined1 *)(0x00963180u))
#define _DAT_00963538 (*(undefined1 *)(0x00963538u))
#define _DAT_00963780 (*(undefined1 *)(0x00963780u))
#define _DAT_00963a98 (*(undefined1 *)(0x00963a98u))
#define _DAT_00963cd0 (*(undefined1 *)(0x00963cd0u))
#define _DAT_00964080 (*(undefined1 *)(0x00964080u))
#define _DAT_00964350 (*(undefined1 *)(0x00964350u))
#define _DAT_009645a8 (*(undefined1 *)(0x009645a8u))
#define _DAT_00964720 (*(undefined1 *)(0x00964720u))
#define _DAT_00964b98 (*(undefined1 *)(0x00964b98u))
#define _DAT_00964e18 (*(undefined1 *)(0x00964e18u))
#define _DAT_00965200 (*(undefined1 *)(0x00965200u))
#define _DAT_00965448 (*(undefined1 *)(0x00965448u))
#define _DAT_00965c70 (*(undefined1 *)(0x00965c70u))
#define _DAT_00966bc0 (*(undefined1 *)(0x00966bc0u))
#define _DAT_00966ee8 (*(undefined1 *)(0x00966ee8u))
#define _DAT_00967a30 (*(undefined1 *)(0x00967a30u))
#define _DAT_00967d38 (*(undefined1 *)(0x00967d38u))
#define _DAT_009682b0 (*(undefined1 *)(0x009682b0u))
#define _DAT_009689d8 (*(undefined1 *)(0x009689d8u))
#define _DAT_00969258 (*(undefined1 *)(0x00969258u))
#define _DAT_00969eb0 (*(undefined1 *)(0x00969eb0u))
#define _DAT_0096a178 (*(undefined1 *)(0x0096a178u))
#define _DAT_0096a738 (*(undefined1 *)(0x0096a738u))
#define _DAT_0096ae40 (*(undefined1 *)(0x0096ae40u))
#define _DAT_0096b4d0 (*(undefined1 *)(0x0096b4d0u))
#define _DAT_0096b748 (*(undefined1 *)(0x0096b748u))
#define _DAT_0096b9e8 (*(undefined1 *)(0x0096b9e8u))
#define _DAT_0096bcf0 (*(undefined1 *)(0x0096bcf0u))
#define _DAT_0096c660 (*(undefined1 *)(0x0096c660u))
#define _DAT_0096c8d8 (*(undefined1 *)(0x0096c8d8u))
#define _DAT_0096d188 (*(undefined1 *)(0x0096d188u))
#define _DAT_0096dc50 (*(undefined1 *)(0x0096dc50u))
#define _DAT_0096df10 (*(undefined1 *)(0x0096df10u))
#define _DAT_0096e778 (*(undefined1 *)(0x0096e778u))
#define _DAT_0096ef00 (*(undefined1 *)(0x0096ef00u))
#define _DAT_0096f728 (*(undefined1 *)(0x0096f728u))
#define _DAT_0096fdd8 (*(undefined1 *)(0x0096fdd8u))
#define _DAT_00970660 (*(undefined1 *)(0x00970660u))
#define _DAT_00970920 (*(undefined1 *)(0x00970920u))
#define _DAT_009711b8 (*(undefined1 *)(0x009711b8u))
#define _DAT_009715b8 (*(undefined1 *)(0x009715b8u))
#define _DAT_00971d18 (*(undefined1 *)(0x00971d18u))
#define _DAT_00972448 (*(undefined1 *)(0x00972448u))
#define _DAT_00972a50 (*(undefined1 *)(0x00972a50u))
#define _DAT_00972fc0 (*(undefined1 *)(0x00972fc0u))
#define _DAT_00973b50 (*(undefined1 *)(0x00973b50u))
#define _DAT_009742e8 (*(undefined1 *)(0x009742e8u))
#define _DAT_00974a88 (*(undefined1 *)(0x00974a88u))
#define _DAT_00975478 (*(undefined1 *)(0x00975478u))
#define _DAT_00976060 (*(undefined1 *)(0x00976060u))
#define _DAT_009763a0 (*(undefined1 *)(0x009763a0u))
#define _DAT_009773f8 (*(undefined1 *)(0x009773f8u))
#define _DAT_00977d38 (*(undefined1 *)(0x00977d38u))
#define _DAT_00978360 (*(undefined1 *)(0x00978360u))
#define _DAT_00978618 (*(undefined1 *)(0x00978618u))
#define _DAT_00978db8 (*(undefined1 *)(0x00978db8u))
#define _DAT_009793a0 (*(undefined1 *)(0x009793a0u))
#define _DAT_00979440 (*(undefined1 *)(0x00979440u))
#define _DAT_00979e38 (*(undefined1 *)(0x00979e38u))
#define _DAT_00979ef0 (*(undefined1 *)(0x00979ef0u))
#define _DAT_00979f30 (*(undefined1 *)(0x00979f30u))
#define _DAT_00979fc8 (*(undefined1 *)(0x00979fc8u))
#define _DAT_0097a2d0 (*(undefined1 *)(0x0097a2d0u))
#define _DAT_0097a658 (*(undefined1 *)(0x0097a658u))
#define _DAT_0097a758 (*(undefined1 *)(0x0097a758u))
#define _DAT_0097a850 (*(undefined1 *)(0x0097a850u))
#define _DAT_0097a878 (*(undefined1 *)(0x0097a878u))
#define _DAT_0097ab30 (*(undefined1 *)(0x0097ab30u))
#define _DAT_0097ae48 (*(undefined1 *)(0x0097ae48u))
#define _DAT_0097b140 (*(undefined1 *)(0x0097b140u))
#define _DAT_0097b438 (*(undefined1 *)(0x0097b438u))
#define _DAT_0097bed0 (*(undefined1 *)(0x0097bed0u))
#define _DAT_0097ce48 (*(undefined1 *)(0x0097ce48u))
#define _DAT_0097d770 (*(undefined1 *)(0x0097d770u))
#define _DAT_0097da70 (*(undefined1 *)(0x0097da70u))
#define _DAT_0097fae0 (*(undefined1 *)(0x0097fae0u))
#define _DAT_0097fe00 (*(undefined1 *)(0x0097fe00u))
#define _DAT_009800f0 (*(undefined1 *)(0x009800f0u))
#define _DAT_00980330 (*(undefined1 *)(0x00980330u))
#define _DAT_00980dd0 (*(undefined1 *)(0x00980dd0u))
#define _DAT_009810e8 (*(undefined1 *)(0x009810e8u))
#define _DAT_009813a0 (*(undefined1 *)(0x009813a0u))
#define _DAT_00981668 (*(undefined1 *)(0x00981668u))
#define _DAT_009818d0 (*(undefined1 *)(0x009818d0u))
#define _DAT_00982440 (*(undefined1 *)(0x00982440u))
#define _DAT_00982738 (*(undefined1 *)(0x00982738u))
#define _DAT_00982a28 (*(undefined1 *)(0x00982a28u))
#define _DAT_00982c70 (*(undefined1 *)(0x00982c70u))
#define _DAT_00982ed0 (*(undefined1 *)(0x00982ed0u))
#define _DAT_00983148 (*(undefined1 *)(0x00983148u))
#define _DAT_00983410 (*(undefined1 *)(0x00983410u))
#define _DAT_00983688 (*(undefined1 *)(0x00983688u))
#define _DAT_009838f0 (*(undefined1 *)(0x009838f0u))
#define _DAT_00983b68 (*(undefined1 *)(0x00983b68u))
#define _DAT_00983de8 (*(undefined1 *)(0x00983de8u))
#define _DAT_009840f0 (*(undefined1 *)(0x009840f0u))
#define _DAT_00984358 (*(undefined1 *)(0x00984358u))
#define _DAT_00984518 (*(undefined1 *)(0x00984518u))
#define _DAT_00984780 (*(undefined1 *)(0x00984780u))
#define _DAT_009849c0 (*(undefined1 *)(0x009849c0u))
#define _DAT_00984c80 (*(undefined1 *)(0x00984c80u))
#define _DAT_00984f40 (*(undefined1 *)(0x00984f40u))
#define _DAT_00985208 (*(undefined1 *)(0x00985208u))
#define _DAT_00985500 (*(undefined1 *)(0x00985500u))
#define _DAT_009857d8 (*(undefined1 *)(0x009857d8u))
#define _DAT_009858e8 (*(undefined1 *)(0x009858e8u))
#define _DAT_009858f8 (*(undefined1 *)(0x009858f8u))
#define _DAT_00985928 (*(undefined1 *)(0x00985928u))
#define _DAT_00985948 (*(undefined1 *)(0x00985948u))
#define _DAT_00985968 (*(undefined1 *)(0x00985968u))
#define _DAT_00985ac8 (*(undefined1 *)(0x00985ac8u))
#define _DAT_00985b98 (*(undefined1 *)(0x00985b98u))
#define _DAT_00985ba8 (*(undefined1 *)(0x00985ba8u))
#define _DAT_00985bb8 (*(undefined1 *)(0x00985bb8u))
#define _DAT_00985bc8 (*(undefined1 *)(0x00985bc8u))
#define _DAT_00985bd8 (*(undefined1 *)(0x00985bd8u))
#define _DAT_00985be8 (*(undefined1 *)(0x00985be8u))
#define _DAT_00985bf8 (*(undefined1 *)(0x00985bf8u))
#define _DAT_00985c08 (*(undefined1 *)(0x00985c08u))
#define _DAT_00985c18 (*(undefined1 *)(0x00985c18u))
#define _DAT_00985c28 (*(undefined1 *)(0x00985c28u))
#define _DAT_00985c38 (*(undefined1 *)(0x00985c38u))
#define _DAT_00985d88 (*(undefined1 *)(0x00985d88u))
#define _DAT_00985e58 (*(undefined1 *)(0x00985e58u))
#define _DAT_00985e68 (*(undefined1 *)(0x00985e68u))
#define _DAT_00985e78 (*(undefined1 *)(0x00985e78u))
#define _DAT_00985e88 (*(undefined1 *)(0x00985e88u))
#define _DAT_00985e98 (*(undefined1 *)(0x00985e98u))
#define _DAT_00985ea8 (*(undefined1 *)(0x00985ea8u))
#define _DAT_00985eb8 (*(undefined1 *)(0x00985eb8u))
#define _DAT_00985ec8 (*(undefined1 *)(0x00985ec8u))
#define _DAT_00985ed8 (*(undefined1 *)(0x00985ed8u))
#define _DAT_00985ee8 (*(undefined1 *)(0x00985ee8u))
#define _DAT_00985ef8 (*(undefined1 *)(0x00985ef8u))
#define _DAT_00986060 (*(undefined1 *)(0x00986060u))
#define _DAT_00986150 (*(undefined1 *)(0x00986150u))
#define _DAT_00986160 (*(undefined1 *)(0x00986160u))
#define _DAT_00986170 (*(undefined1 *)(0x00986170u))
#define _DAT_00986180 (*(undefined1 *)(0x00986180u))
#define _DAT_00986190 (*(undefined1 *)(0x00986190u))
#define _DAT_009861a0 (*(undefined1 *)(0x009861a0u))
#define _DAT_009861b0 (*(undefined1 *)(0x009861b0u))
#define _DAT_009861c0 (*(undefined1 *)(0x009861c0u))
#define _DAT_009861d0 (*(undefined1 *)(0x009861d0u))
#define _DAT_009861e0 (*(undefined1 *)(0x009861e0u))
#define _DAT_009861f0 (*(undefined1 *)(0x009861f0u))
#define _DAT_00986200 (*(undefined1 *)(0x00986200u))
#define _DAT_00986210 (*(undefined1 *)(0x00986210u))
#define _DAT_00986390 (*(undefined1 *)(0x00986390u))
#define _DAT_00986480 (*(undefined1 *)(0x00986480u))
#define _DAT_00986490 (*(undefined1 *)(0x00986490u))
#define _DAT_009864a0 (*(undefined1 *)(0x009864a0u))
#define _DAT_009864b0 (*(undefined1 *)(0x009864b0u))
#define _DAT_009864c0 (*(undefined1 *)(0x009864c0u))
#define _DAT_009864d0 (*(undefined1 *)(0x009864d0u))
#define _DAT_009864e0 (*(undefined1 *)(0x009864e0u))
#define _DAT_009864f0 (*(undefined1 *)(0x009864f0u))
#define _DAT_00986500 (*(undefined1 *)(0x00986500u))
#define _DAT_00986510 (*(undefined1 *)(0x00986510u))
#define _DAT_00986520 (*(undefined1 *)(0x00986520u))
#define _DAT_00986530 (*(undefined1 *)(0x00986530u))
#define _DAT_00986540 (*(undefined1 *)(0x00986540u))
#define _DAT_00987228 (*(undefined1 *)(0x00987228u))
#define _DAT_009872f8 (*(undefined1 *)(0x009872f8u))
#define _DAT_00987308 (*(undefined1 *)(0x00987308u))
#define _DAT_00987318 (*(undefined1 *)(0x00987318u))
#define _DAT_00987328 (*(undefined1 *)(0x00987328u))
#define _DAT_00987338 (*(undefined1 *)(0x00987338u))
#define _DAT_00987348 (*(undefined1 *)(0x00987348u))
#define _DAT_00987358 (*(undefined1 *)(0x00987358u))
#define _DAT_00987368 (*(undefined1 *)(0x00987368u))
#define _DAT_00987378 (*(undefined1 *)(0x00987378u))
#define _DAT_00987388 (*(undefined1 *)(0x00987388u))
#define _DAT_00987398 (*(undefined1 *)(0x00987398u))
#define _DAT_00987550 (*(undefined1 *)(0x00987550u))
#define _DAT_00987620 (*(undefined1 *)(0x00987620u))
#define _DAT_00987630 (*(undefined1 *)(0x00987630u))
#define _DAT_00987640 (*(undefined1 *)(0x00987640u))
#define _DAT_00987650 (*(undefined1 *)(0x00987650u))
#define _DAT_00987660 (*(undefined1 *)(0x00987660u))
#define _DAT_00987670 (*(undefined1 *)(0x00987670u))
#define _DAT_00987680 (*(undefined1 *)(0x00987680u))
#define _DAT_00987690 (*(undefined1 *)(0x00987690u))
#define _DAT_009876a0 (*(undefined1 *)(0x009876a0u))
#define _DAT_009876b0 (*(undefined1 *)(0x009876b0u))
#define _DAT_009876c0 (*(undefined1 *)(0x009876c0u))
#define _DAT_009876d0 (*(undefined1 *)(0x009876d0u))
#define _DAT_009876e0 (*(undefined1 *)(0x009876e0u))
#define _DAT_00987870 (*(undefined1 *)(0x00987870u))
#define _DAT_00987940 (*(undefined1 *)(0x00987940u))
#define _DAT_00987950 (*(undefined1 *)(0x00987950u))
#define _DAT_00987960 (*(undefined1 *)(0x00987960u))
#define _DAT_00987970 (*(undefined1 *)(0x00987970u))
#define _DAT_00987980 (*(undefined1 *)(0x00987980u))
#define _DAT_00987990 (*(undefined1 *)(0x00987990u))
#define _DAT_009879a0 (*(undefined1 *)(0x009879a0u))
#define _DAT_009879b0 (*(undefined1 *)(0x009879b0u))
#define _DAT_009879c0 (*(undefined1 *)(0x009879c0u))
#define _DAT_009879d0 (*(undefined1 *)(0x009879d0u))
#define _DAT_009879e0 (*(undefined1 *)(0x009879e0u))
#define _DAT_009879f0 (*(undefined1 *)(0x009879f0u))
#define _DAT_00987b60 (*(undefined1 *)(0x00987b60u))
#define _DAT_00987c30 (*(undefined1 *)(0x00987c30u))
#define _DAT_00987c40 (*(undefined1 *)(0x00987c40u))
#define _DAT_00987c50 (*(undefined1 *)(0x00987c50u))
#define _DAT_00987c60 (*(undefined1 *)(0x00987c60u))
#define _DAT_00987c70 (*(undefined1 *)(0x00987c70u))
#define _DAT_00987c80 (*(undefined1 *)(0x00987c80u))
#define _DAT_00987c90 (*(undefined1 *)(0x00987c90u))
#define _DAT_00987ca0 (*(undefined1 *)(0x00987ca0u))
#define _DAT_00987cb0 (*(undefined1 *)(0x00987cb0u))
#define _DAT_00987cc0 (*(undefined1 *)(0x00987cc0u))
#define _DAT_00987cd0 (*(undefined1 *)(0x00987cd0u))
#define _DAT_00987ce0 (*(undefined1 *)(0x00987ce0u))
#define _DAT_00987e50 (*(undefined1 *)(0x00987e50u))
#define _DAT_00987f20 (*(undefined1 *)(0x00987f20u))
#define _DAT_00987f30 (*(undefined1 *)(0x00987f30u))
#define _DAT_00987f40 (*(undefined1 *)(0x00987f40u))
#define _DAT_00987f50 (*(undefined1 *)(0x00987f50u))
#define _DAT_00987f60 (*(undefined1 *)(0x00987f60u))
#define _DAT_00987f70 (*(undefined1 *)(0x00987f70u))
#define _DAT_00987f80 (*(undefined1 *)(0x00987f80u))
#define _DAT_00987f90 (*(undefined1 *)(0x00987f90u))
#define _DAT_00987fa0 (*(undefined1 *)(0x00987fa0u))
#define _DAT_00987fb0 (*(undefined1 *)(0x00987fb0u))
#define _DAT_00987fc0 (*(undefined1 *)(0x00987fc0u))
#define _DAT_00987fd0 (*(undefined1 *)(0x00987fd0u))
#define _DAT_00988160 (*(undefined1 *)(0x00988160u))
#define _DAT_00988230 (*(undefined1 *)(0x00988230u))
#define _DAT_00988240 (*(undefined1 *)(0x00988240u))
#define _DAT_00988250 (*(undefined1 *)(0x00988250u))
#define _DAT_00988260 (*(undefined1 *)(0x00988260u))
#define _DAT_00988270 (*(undefined1 *)(0x00988270u))
#define _DAT_00988280 (*(undefined1 *)(0x00988280u))
#define _DAT_00988290 (*(undefined1 *)(0x00988290u))
#define _DAT_009882a0 (*(undefined1 *)(0x009882a0u))
#define _DAT_009882b0 (*(undefined1 *)(0x009882b0u))
#define _DAT_009882c0 (*(undefined1 *)(0x009882c0u))
#define _DAT_009882d0 (*(undefined1 *)(0x009882d0u))
#define _DAT_00988428 (*(undefined1 *)(0x00988428u))
#define _DAT_00988518 (*(undefined1 *)(0x00988518u))
#define _DAT_00988528 (*(undefined1 *)(0x00988528u))
#define _DAT_00988538 (*(undefined1 *)(0x00988538u))
#define _DAT_00988548 (*(undefined1 *)(0x00988548u))
#define _DAT_00988558 (*(undefined1 *)(0x00988558u))
#define _DAT_00988568 (*(undefined1 *)(0x00988568u))
#define _DAT_00988578 (*(undefined1 *)(0x00988578u))
#define _DAT_00988588 (*(undefined1 *)(0x00988588u))
#define _DAT_00988598 (*(undefined1 *)(0x00988598u))
#define _DAT_009885a8 (*(undefined1 *)(0x009885a8u))
#define _DAT_009885b8 (*(undefined1 *)(0x009885b8u))
#define _DAT_009885c8 (*(undefined1 *)(0x009885c8u))
#define _DAT_00988738 (*(undefined1 *)(0x00988738u))
#define _DAT_00988828 (*(undefined1 *)(0x00988828u))
#define _DAT_00988838 (*(undefined1 *)(0x00988838u))
#define _DAT_00988848 (*(undefined1 *)(0x00988848u))
#define _DAT_00988858 (*(undefined1 *)(0x00988858u))
#define _DAT_00988868 (*(undefined1 *)(0x00988868u))
#define _DAT_00988878 (*(undefined1 *)(0x00988878u))
#define _DAT_00988888 (*(undefined1 *)(0x00988888u))
#define _DAT_00988898 (*(undefined1 *)(0x00988898u))
#define _DAT_009888a8 (*(undefined1 *)(0x009888a8u))
#define _DAT_009888b8 (*(undefined1 *)(0x009888b8u))
#define _DAT_009888c8 (*(undefined1 *)(0x009888c8u))
#define _DAT_009888d8 (*(undefined1 *)(0x009888d8u))
#define _DAT_009888e8 (*(undefined1 *)(0x009888e8u))
#define _DAT_00988a68 (*(undefined1 *)(0x00988a68u))
#define _DAT_00988b58 (*(undefined1 *)(0x00988b58u))
#define _DAT_00988b68 (*(undefined1 *)(0x00988b68u))
#define _DAT_00988b78 (*(undefined1 *)(0x00988b78u))
#define _DAT_00988b88 (*(undefined1 *)(0x00988b88u))
#define _DAT_00988b98 (*(undefined1 *)(0x00988b98u))
#define _DAT_00988ba8 (*(undefined1 *)(0x00988ba8u))
#define _DAT_00988bb8 (*(undefined1 *)(0x00988bb8u))
#define _DAT_00988bc8 (*(undefined1 *)(0x00988bc8u))
#define _DAT_00988bd8 (*(undefined1 *)(0x00988bd8u))
#define _DAT_00988be8 (*(undefined1 *)(0x00988be8u))
#define _DAT_00988bf8 (*(undefined1 *)(0x00988bf8u))
#define _DAT_00988c08 (*(undefined1 *)(0x00988c08u))
#define _DAT_00988c18 (*(undefined1 *)(0x00988c18u))
#define _DAT_009895c0 (*(undefined1 *)(0x009895c0u))
#define _DAT_009895f0 (*(undefined1 *)(0x009895f0u))
#define _DAT_00989650 (*(undefined1 *)(0x00989650u))
#define _DAT_00989680 (*(undefined1 *)(0x00989680u))
#define _DAT_00989690 (*(undefined1 *)(0x00989690u))
#define _DAT_00989768 (*(undefined1 *)(0x00989768u))
#define _DAT_00989798 (*(undefined1 *)(0x00989798u))
#define _DAT_009897a8 (*(undefined1 *)(0x009897a8u))
#define _DAT_009897e0 (*(undefined1 *)(0x009897e0u))
#define _DAT_00989810 (*(undefined1 *)(0x00989810u))
#define _DAT_00989880 (*(undefined1 *)(0x00989880u))
#define _DAT_0098c9a0 (*(undefined1 *)(0x0098c9a0u))
#define _DAT_0098c9e8 (*(undefined1 *)(0x0098c9e8u))
#define _DAT_0098c9f8 (*(undefined1 *)(0x0098c9f8u))
#define _DAT_0098ca38 (*(undefined1 *)(0x0098ca38u))
#define _DAT_0098ca68 (*(undefined1 *)(0x0098ca68u))
#define _DAT_0098cae8 (*(undefined1 *)(0x0098cae8u))
#define _DAT_0098cb18 (*(undefined1 *)(0x0098cb18u))
#define _DAT_0098cb28 (*(undefined1 *)(0x0098cb28u))
#define _DAT_0098cc28 (*(undefined1 *)(0x0098cc28u))
#define _DAT_0098cc58 (*(undefined1 *)(0x0098cc58u))
#define _DAT_0098ccb0 (*(undefined1 *)(0x0098ccb0u))
#define _DAT_0098ccf0 (*(undefined1 *)(0x0098ccf0u))
#define _DAT_0098cd00 (*(undefined1 *)(0x0098cd00u))
#define _DAT_0098cd68 (*(undefined1 *)(0x0098cd68u))
#define _DAT_0098cd98 (*(undefined1 *)(0x0098cd98u))
#define _DAT_0098cda8 (*(undefined1 *)(0x0098cda8u))
#define _DAT_0098d040 (*(undefined1 *)(0x0098d040u))
#define _DAT_0098d070 (*(undefined1 *)(0x0098d070u))
#define _DAT_0098d080 (*(undefined1 *)(0x0098d080u))
#define _DAT_0098d0d0 (*(undefined1 *)(0x0098d0d0u))
#define _DAT_0098d100 (*(undefined1 *)(0x0098d100u))
#define _DAT_0098d1b8 (*(undefined1 *)(0x0098d1b8u))
#define _DAT_0098d1e8 (*(undefined1 *)(0x0098d1e8u))
#define _DAT_0098d1f8 (*(undefined1 *)(0x0098d1f8u))
#define _DAT_0098d250 (*(undefined1 *)(0x0098d250u))
#define _DAT_0098d280 (*(undefined1 *)(0x0098d280u))
#define _DAT_0098d290 (*(undefined1 *)(0x0098d290u))
#define _DAT_0098d2f8 (*(undefined1 *)(0x0098d2f8u))
#define _DAT_0098d328 (*(undefined1 *)(0x0098d328u))
#define _DAT_0098d338 (*(undefined1 *)(0x0098d338u))
#define _DAT_00992208 (*(undefined1 *)(0x00992208u))
#define _DAT_0099223c (*(undefined1 *)(0x0099223cu))
#define _DAT_00992288 (*(undefined1 *)(0x00992288u))
#define _DAT_009922b8 (*(undefined1 *)(0x009922b8u))
#define _DAT_009922c8 (*(undefined1 *)(0x009922c8u))
#define _DAT_00992320 (*(undefined1 *)(0x00992320u))
#define _DAT_00992350 (*(undefined1 *)(0x00992350u))
#define _DAT_00992360 (*(undefined1 *)(0x00992360u))
#define _DAT_009923b8 (*(undefined1 *)(0x009923b8u))
#define _DAT_009923e8 (*(undefined1 *)(0x009923e8u))
#define _DAT_009923f8 (*(undefined1 *)(0x009923f8u))
#define _DAT_00992478 (*(undefined1 *)(0x00992478u))
#define _DAT_00992488 (*(undefined1 *)(0x00992488u))
#define _DAT_009924b8 (*(undefined1 *)(0x009924b8u))
#define _DAT_009924e8 (*(undefined1 *)(0x009924e8u))
#define _DAT_00992520 (*(undefined1 *)(0x00992520u))
#define _DAT_00992550 (*(undefined1 *)(0x00992550u))
#define _DAT_00992580 (*(undefined1 *)(0x00992580u))
#define _DAT_009925b0 (*(undefined1 *)(0x009925b0u))
#define _DAT_00992600 (*(undefined1 *)(0x00992600u))
#define _DAT_00992630 (*(undefined1 *)(0x00992630u))
#define _DAT_00992640 (*(undefined1 *)(0x00992640u))
#define _DAT_009929e0 (*(undefined1 *)(0x009929e0u))
#define _DAT_00992a14 (*(undefined1 *)(0x00992a14u))
#define _DAT_00992a24 (*(undefined1 *)(0x00992a24u))
#define _DAT_00992a60 (*(undefined1 *)(0x00992a60u))
#define _DAT_00992a90 (*(undefined1 *)(0x00992a90u))
#define _DAT_00992ae0 (*(undefined1 *)(0x00992ae0u))
#define _DAT_00992b10 (*(undefined1 *)(0x00992b10u))
#define _DAT_00992b20 (*(undefined1 *)(0x00992b20u))
#define _DAT_00992b78 (*(undefined1 *)(0x00992b78u))
#define _DAT_00992ba8 (*(undefined1 *)(0x00992ba8u))
#define _DAT_00992bb8 (*(undefined1 *)(0x00992bb8u))
#define _DAT_00992bf0 (*(undefined1 *)(0x00992bf0u))
#define _DAT_00992c20 (*(undefined1 *)(0x00992c20u))
#define _DAT_00992c50 (*(undefined1 *)(0x00992c50u))
#define _DAT_00992c90 (*(undefined1 *)(0x00992c90u))
#define _DAT_00992cc0 (*(undefined1 *)(0x00992cc0u))
#define _DAT_00992cd0 (*(undefined1 *)(0x00992cd0u))
#define _DAT_00992d30 (*(undefined1 *)(0x00992d30u))
#define _DAT_00992d60 (*(undefined1 *)(0x00992d60u))
#define _DAT_00992d70 (*(undefined1 *)(0x00992d70u))
#define _DAT_00992dc8 (*(undefined1 *)(0x00992dc8u))
#define _DAT_00992df8 (*(undefined1 *)(0x00992df8u))
#define _DAT_00992e08 (*(undefined1 *)(0x00992e08u))
#define _DAT_00992e60 (*(undefined1 *)(0x00992e60u))
#define _DAT_00992e90 (*(undefined1 *)(0x00992e90u))
#define _DAT_00992ea0 (*(undefined1 *)(0x00992ea0u))
#define _DAT_00992ed8 (*(undefined1 *)(0x00992ed8u))
#define _DAT_00992f08 (*(undefined1 *)(0x00992f08u))
#define _DAT_00992f58 (*(undefined1 *)(0x00992f58u))
#define _DAT_00992f88 (*(undefined1 *)(0x00992f88u))
#define _DAT_00992f98 (*(undefined1 *)(0x00992f98u))
#define _DAT_00992fd0 (*(undefined1 *)(0x00992fd0u))
#define _DAT_00993000 (*(undefined1 *)(0x00993000u))
#define _DAT_00993030 (*(undefined1 *)(0x00993030u))
#define _DAT_00993060 (*(undefined1 *)(0x00993060u))
#define _DAT_00993090 (*(undefined1 *)(0x00993090u))
#define _DAT_009930c0 (*(undefined1 *)(0x009930c0u))
#define _DAT_00993110 (*(undefined1 *)(0x00993110u))
#define _DAT_00993140 (*(undefined1 *)(0x00993140u))
#define _DAT_00993150 (*(undefined1 *)(0x00993150u))
#define _DAT_009931a8 (*(undefined1 *)(0x009931a8u))
#define _DAT_009931d8 (*(undefined1 *)(0x009931d8u))
#define _DAT_009931e8 (*(undefined1 *)(0x009931e8u))
#define _DAT_00993248 (*(undefined1 *)(0x00993248u))
#define _DAT_00993278 (*(undefined1 *)(0x00993278u))
#define _DAT_00993288 (*(undefined1 *)(0x00993288u))
#define _DAT_009932c8 (*(undefined1 *)(0x009932c8u))
#define _DAT_009932f8 (*(undefined1 *)(0x009932f8u))
#define _DAT_009948b0 (*(undefined1 *)(0x009948b0u))
#define _DAT_009948b4 (*(undefined1 *)(0x009948b4u))

//==== 0000401130 00401130_FUN_00401130 ====
void FUN_00401130(void);

// decompiled by BatchDecomp @ 00401130 name=FUN_00401130 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401130(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00960cf0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004011f0 004011f0_FUN_004011f0 ====
void FUN_004011f0(void);

// decompiled by BatchDecomp @ 004011f0 name=FUN_004011f0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004011f0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00960d90 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000402270 00402270_FUN_00402270 ====
void FUN_00402270(void);

// decompiled by BatchDecomp @ 00402270 name=FUN_00402270 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00402270(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009610a0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000403780 00403780_FUN_00403780 ====
void FUN_00403780(void);

// decompiled by BatchDecomp @ 00403780 name=FUN_00403780 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403780(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00961318 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000403b60 00403b60_FUN_00403b60 ====
void FUN_00403b60(void);

// decompiled by BatchDecomp @ 00403b60 name=FUN_00403b60 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403b60(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00961940 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000404a40 00404a40_FUN_00404a40 ====
void FUN_00404a40(void);

// decompiled by BatchDecomp @ 00404a40 name=FUN_00404a40 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404a40(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00962a18 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000404c10 00404c10_FUN_00404c10 ====
void FUN_00404c10(void);

// decompiled by BatchDecomp @ 00404c10 name=FUN_00404c10 conv=unknown body=61

void FUN_00404c10(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"UITheme");
  pRVar1 = (ReflectionInfoBase *)UITheme__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000404cd0 00404cd0_FUN_00404cd0 ====
void FUN_00404cd0(void);

// decompiled by BatchDecomp @ 00404cd0 name=FUN_00404cd0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00404cd0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00962b18 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000405ec0 00405ec0_FUN_00405ec0 ====
void FUN_00405ec0(void);

// decompiled by BatchDecomp @ 00405ec0 name=FUN_00405ec0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405ec0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963180 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000406990 00406990_FUN_00406990 ====
void FUN_00406990(void);

// decompiled by BatchDecomp @ 00406990 name=FUN_00406990 conv=unknown body=61

void FUN_00406990(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Speaker");
  pRVar1 = (ReflectionInfoBase *)Speaker__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004069d0 004069d0_FUN_004069d0 ====
void FUN_004069d0(void);

// decompiled by BatchDecomp @ 004069d0 name=FUN_004069d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004069d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963538 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000407580 00407580_FUN_00407580 ====
void FUN_00407580(void);

// decompiled by BatchDecomp @ 00407580 name=FUN_00407580 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00407580(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963780 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000408a90 00408a90_FUN_00408a90 ====
void FUN_00408a90(void);

// decompiled by BatchDecomp @ 00408a90 name=FUN_00408a90 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00408a90(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963a98 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000409c90 00409c90_FUN_00409c90 ====
void FUN_00409c90(void);

// decompiled by BatchDecomp @ 00409c90 name=FUN_00409c90 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409c90(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00963cd0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000040a660 0040a660_FUN_0040a660 ====
void FUN_0040a660(void);

// decompiled by BatchDecomp @ 0040a660 name=FUN_0040a660 conv=unknown body=61

void FUN_0040a660(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CraftBlueprintArmor");
  pRVar1 = (ReflectionInfoBase *)CraftBlueprintArmor__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000040a750 0040a750_FUN_0040a750 ====
void FUN_0040a750(void);

// decompiled by BatchDecomp @ 0040a750 name=FUN_0040a750 conv=unknown body=65

void FUN_0040a750(void)

{
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__LocStr_G_ *pDVar3;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ArmorShape");
  pDVar3 = (Darray_L_class_util__LocStr_G_ *)&DAT_009640e0;
  pSVar1 = &local_10;
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)&DAT_009640d0;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterEnum(this,pSVar1,pDVar2,pDVar3);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000040a7f0 0040a7f0_FUN_0040a7f0 ====
void FUN_0040a7f0(void);

// decompiled by BatchDecomp @ 0040a7f0 name=FUN_0040a7f0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040a7f0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964080 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000040b9e0 0040b9e0_FUN_0040b9e0 ====
void FUN_0040b9e0(void);

// decompiled by BatchDecomp @ 0040b9e0 name=FUN_0040b9e0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040b9e0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964350 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000040cbd0 0040cbd0_FUN_0040cbd0 ====
void FUN_0040cbd0(void);

// decompiled by BatchDecomp @ 0040cbd0 name=FUN_0040cbd0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040cbd0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009645a8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000040d2d0 0040d2d0_FUN_0040d2d0 ====
void FUN_0040d2d0(void);

// decompiled by BatchDecomp @ 0040d2d0 name=FUN_0040d2d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040d2d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964720 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000040e470 0040e470_FUN_0040e470 ====
void FUN_0040e470(void);

// decompiled by BatchDecomp @ 0040e470 name=FUN_0040e470 conv=unknown body=61

void FUN_0040e470(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CraftBlueprint");
  pRVar1 = (ReflectionInfoBase *)CraftBlueprint__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000040e5b0 0040e5b0_FUN_0040e5b0 ====
void FUN_0040e5b0(void);

// decompiled by BatchDecomp @ 0040e5b0 name=FUN_0040e5b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e5b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964b98 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000040f7a0 0040f7a0_FUN_0040f7a0 ====
void FUN_0040f7a0(void);

// decompiled by BatchDecomp @ 0040f7a0 name=FUN_0040f7a0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f7a0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00964e18 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000040f9c0 0040f9c0_FUN_0040f9c0 ====
void FUN_0040f9c0(void);

// decompiled by BatchDecomp @ 0040f9c0 name=FUN_0040f9c0 conv=unknown body=61

void FUN_0040f9c0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Faction");
  pRVar1 = (ReflectionInfoBase *)Faction__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000040fa30 0040fa30_FUN_0040fa30 ====
void FUN_0040fa30(void);

// decompiled by BatchDecomp @ 0040fa30 name=FUN_0040fa30 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040fa30(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965200 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004105e0 004105e0_FUN_004105e0 ====
void FUN_004105e0(void);

// decompiled by BatchDecomp @ 004105e0 name=FUN_004105e0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004105e0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965448 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000411ac0 00411ac0_FUN_00411ac0 ====
void FUN_00411ac0(void);

// decompiled by BatchDecomp @ 00411ac0 name=FUN_00411ac0 conv=unknown body=61

void FUN_00411ac0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GameConstants");
  pRVar1 = (ReflectionInfoBase *)GameConstants__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000411b30 00411b30_FUN_00411b30 ====
void FUN_00411b30(void);

// decompiled by BatchDecomp @ 00411b30 name=FUN_00411b30 conv=unknown body=61

void FUN_00411b30(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ImportLog");
  pRVar1 = (ReflectionInfoBase *)ImportLog__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000411b70 00411b70_FUN_00411b70 ====
void FUN_00411b70(void);

// decompiled by BatchDecomp @ 00411b70 name=FUN_00411b70 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411b70(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00965c70 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000412d10 00412d10_FUN_00412d10 ====
void FUN_00412d10(void);

// decompiled by BatchDecomp @ 00412d10 name=FUN_00412d10 conv=unknown body=61

void FUN_00412d10(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  ComparisonModel *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ComparisonModel");
  pRVar1 = ComparisonModel__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000412da0 00412da0_FUN_00412da0 ====
void FUN_00412da0(void);

// decompiled by BatchDecomp @ 00412da0 name=FUN_00412da0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412da0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00966bc0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004142b0 004142b0_FUN_004142b0 ====
void FUN_004142b0(void);

// decompiled by BatchDecomp @ 004142b0 name=FUN_004142b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004142b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00966ee8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000415450 00415450_FUN_00415450 ====
void FUN_00415450(void);

// decompiled by BatchDecomp @ 00415450 name=FUN_00415450 conv=unknown body=65

void FUN_00415450(void)

{
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__LocStr_G_ *pDVar3;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GuidanceAlgorithm");
  pDVar3 = (Darray_L_class_util__LocStr_G_ *)&DAT_00967a70;
  pSVar1 = &local_10;
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00967a60;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterEnum(this,pSVar1,pDVar2,pDVar3);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004154c0 004154c0_FUN_004154c0 ====
void FUN_004154c0(void);

// decompiled by BatchDecomp @ 004154c0 name=FUN_004154c0 conv=unknown body=61

void FUN_004154c0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"FuseModule");
  pRVar1 = (ReflectionInfoBase *)FuseModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000415530 00415530_FUN_00415530 ====
void FUN_00415530(void);

// decompiled by BatchDecomp @ 00415530 name=FUN_00415530 conv=unknown body=61

void FUN_00415530(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"HomingPhase");
  pRVar1 = (ReflectionInfoBase *)HomingPhase__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000415570 00415570_FUN_00415570 ====
void FUN_00415570(void);

// decompiled by BatchDecomp @ 00415570 name=FUN_00415570 conv=unknown body=61

void FUN_00415570(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"HomingProperties");
  pRVar1 = (ReflectionInfoBase *)HomingProperties__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004155b0 004155b0_FUN_004155b0 ====
void FUN_004155b0(void);

// decompiled by BatchDecomp @ 004155b0 name=FUN_004155b0 conv=unknown body=61

void FUN_004155b0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RemoteControlModule");
  pRVar1 = (ReflectionInfoBase *)RemoteControlModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004155f0 004155f0_FUN_004155f0 ====
void FUN_004155f0(void);

// decompiled by BatchDecomp @ 004155f0 name=FUN_004155f0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004155f0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00967a30 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000416920 00416920_FUN_00416920 ====
void FUN_00416920(void);

// decompiled by BatchDecomp @ 00416920 name=FUN_00416920 conv=unknown body=61

void FUN_00416920(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CrewModule");
  pRVar1 = (ReflectionInfoBase *)CrewModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004169b0 004169b0_FUN_004169b0 ====
void FUN_004169b0(void);

// decompiled by BatchDecomp @ 004169b0 name=FUN_004169b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004169b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00967d38 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000417ba0 00417ba0_FUN_00417ba0 ====
void FUN_00417ba0(void);

// decompiled by BatchDecomp @ 00417ba0 name=FUN_00417ba0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417ba0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009682b0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000418d10 00418d10_FUN_00418d10 ====
void FUN_00418d10(void);

// decompiled by BatchDecomp @ 00418d10 name=FUN_00418d10 conv=unknown body=61

void FUN_00418d10(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BlackBoxEngineModule");
  pRVar1 = (ReflectionInfoBase *)BlackBoxEngineModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000418dd0 00418dd0_FUN_00418dd0 ====
void FUN_00418dd0(void);

// decompiled by BatchDecomp @ 00418dd0 name=FUN_00418dd0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418dd0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009689d8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000419de0 00419de0_FUN_00419de0 ====
void FUN_00419de0(void);

// decompiled by BatchDecomp @ 00419de0 name=FUN_00419de0 conv=unknown body=61

void FUN_00419de0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CombustionRocketModule");
  pRVar1 = (ReflectionInfoBase *)CombustionRocketModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000419e70 00419e70_FUN_00419e70 ====
void FUN_00419e70(void);

// decompiled by BatchDecomp @ 00419e70 name=FUN_00419e70 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00419e70(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00969258 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000041aed0 0041aed0_FUN_0041aed0 ====
void FUN_0041aed0(void);

// decompiled by BatchDecomp @ 0041aed0 name=FUN_0041aed0 conv=unknown body=61

void FUN_0041aed0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"MagnetoplasmadynamicThrusterModule");
  pRVar1 = (ReflectionInfoBase *)MagnetoplasmadynamicThrusterModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000041af10 0041af10_FUN_0041af10 ====
void FUN_0041af10(void);

// decompiled by BatchDecomp @ 0041af10 name=FUN_0041af10 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041af10(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00969eb0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000041bf70 0041bf70_FUN_0041bf70 ====
void FUN_0041bf70(void);

// decompiled by BatchDecomp @ 0041bf70 name=FUN_0041bf70 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041bf70(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096a178 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000041d2f0 0041d2f0_FUN_0041d2f0 ====
void FUN_0041d2f0(void);

// decompiled by BatchDecomp @ 0041d2f0 name=FUN_0041d2f0 conv=unknown body=61

void FUN_0041d2f0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"NuclearThermalRocketModule");
  pRVar1 = (ReflectionInfoBase *)NuclearThermalRocketModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000041d330 0041d330_FUN_0041d330 ====
void FUN_0041d330(void);

// decompiled by BatchDecomp @ 0041d330 name=FUN_0041d330 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d330(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096a738 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000041e390 0041e390_FUN_0041e390 ====
void FUN_0041e390(void);

// decompiled by BatchDecomp @ 0041e390 name=FUN_0041e390 conv=unknown body=61

void FUN_0041e390(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"PropellantTankModule");
  pRVar1 = (ReflectionInfoBase *)PropellantTankModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000041e3d0 0041e3d0_FUN_0041e3d0 ====
void FUN_0041e3d0(void);

// decompiled by BatchDecomp @ 0041e3d0 name=FUN_0041e3d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e3d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096ae40 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000041f600 0041f600_FUN_0041f600 ====
void FUN_0041f600(void);

// decompiled by BatchDecomp @ 0041f600 name=FUN_0041f600 conv=unknown body=61

void FUN_0041f600(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ResistojetModule");
  pRVar1 = (ReflectionInfoBase *)ResistojetModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000041f640 0041f640_FUN_0041f640 ====
void FUN_0041f640(void);

// decompiled by BatchDecomp @ 0041f640 name=FUN_0041f640 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041f640(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b4d0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004206a0 004206a0_FUN_004206a0 ====
void FUN_004206a0(void);

// decompiled by BatchDecomp @ 004206a0 name=FUN_004206a0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004206a0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b748 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000421740 00421740_FUN_00421740 ====
void FUN_00421740(void);

// decompiled by BatchDecomp @ 00421740 name=FUN_00421740 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421740(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096b9e8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004228e0 004228e0_FUN_004228e0 ====
void FUN_004228e0(void);

// decompiled by BatchDecomp @ 004228e0 name=FUN_004228e0 conv=unknown body=61

void FUN_004228e0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CylindricalCoolerSubModule");
  pRVar1 = (ReflectionInfoBase *)CylindricalCoolerSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000422970 00422970_FUN_00422970 ====
void FUN_00422970(void);

// decompiled by BatchDecomp @ 00422970 name=FUN_00422970 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422970(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096bcf0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000423950 00423950_FUN_00423950 ====
void FUN_00423950(void);

// decompiled by BatchDecomp @ 00423950 name=FUN_00423950 conv=unknown body=61

void FUN_00423950(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CapacitorBankSubModule");
  pRVar1 = (ReflectionInfoBase *)CapacitorBankSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000423990 00423990_FUN_00423990 ====
void FUN_00423990(void);

// decompiled by BatchDecomp @ 00423990 name=FUN_00423990 conv=unknown body=61

void FUN_00423990(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CapacitorSubModule");
  pRVar1 = (ReflectionInfoBase *)CapacitorSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000423a50 00423a50_FUN_00423a50 ====
void FUN_00423a50(void);

// decompiled by BatchDecomp @ 00423a50 name=FUN_00423a50 conv=unknown body=61

void FUN_00423a50(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LinearInductionMotorSubModule");
  pRVar1 = (ReflectionInfoBase *)LinearInductionMotorSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000423a90 00423a90_FUN_00423a90 ====
void FUN_00423a90(void);

// decompiled by BatchDecomp @ 00423a90 name=FUN_00423a90 conv=unknown body=61

void FUN_00423a90(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LinearMotorSubModule");
  pRVar1 = (ReflectionInfoBase *)LinearMotorSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000423ad0 00423ad0_FUN_00423ad0 ====
void FUN_00423ad0(void);

// decompiled by BatchDecomp @ 00423ad0 name=FUN_00423ad0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423ad0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096c660 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000424ab0 00424ab0_FUN_00424ab0 ====
void FUN_00424ab0(void);

// decompiled by BatchDecomp @ 00424ab0 name=FUN_00424ab0 conv=unknown body=61

void FUN_00424ab0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CargoModule");
  pRVar1 = (ReflectionInfoBase *)CargoModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000424b70 00424b70_FUN_00424b70 ====
void FUN_00424b70(void);

// decompiled by BatchDecomp @ 00424b70 name=FUN_00424b70 conv=unknown body=61

void FUN_00424b70(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RadiationShieldModule");
  pRVar1 = (ReflectionInfoBase *)RadiationShieldModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000424bb0 00424bb0_FUN_00424bb0 ====
void FUN_00424bb0(void);

// decompiled by BatchDecomp @ 00424bb0 name=FUN_00424bb0 conv=unknown body=61

void FUN_00424bb0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"SpacerModule");
  pRVar1 = (ReflectionInfoBase *)SpacerModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000424bf0 00424bf0_FUN_00424bf0 ====
void FUN_00424bf0(void);

// decompiled by BatchDecomp @ 00424bf0 name=FUN_00424bf0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00424bf0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096c8d8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000425c50 00425c50_FUN_00425c50 ====
void FUN_00425c50(void);

// decompiled by BatchDecomp @ 00425c50 name=FUN_00425c50 conv=unknown body=61

void FUN_00425c50(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"NuclearReactorSubModule");
  pRVar1 = (ReflectionInfoBase *)NuclearReactorSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000425c90 00425c90_FUN_00425c90 ====
void FUN_00425c90(void);

// decompiled by BatchDecomp @ 00425c90 name=FUN_00425c90 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00425c90(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096d188 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000426cf0 00426cf0_FUN_00426cf0 ====
void FUN_00426cf0(void);

// decompiled by BatchDecomp @ 00426cf0 name=FUN_00426cf0 conv=unknown body=61

void FUN_00426cf0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RadiatorModule");
  pRVar1 = (ReflectionInfoBase *)RadiatorModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000426d30 00426d30_FUN_00426d30 ====
void FUN_00426d30(void);

// decompiled by BatchDecomp @ 00426d30 name=FUN_00426d30 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00426d30(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096dc50 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000427f20 00427f20_FUN_00427f20 ====
void FUN_00427f20(void);

// decompiled by BatchDecomp @ 00427f20 name=FUN_00427f20 conv=unknown body=61

void FUN_00427f20(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RefuelerModule");
  pRVar1 = (ReflectionInfoBase *)RefuelerModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000427f60 00427f60_FUN_00427f60 ====
void FUN_00427f60(void);

// decompiled by BatchDecomp @ 00427f60 name=FUN_00427f60 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427f60(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096df10 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000429150 00429150_FUN_00429150 ====
void FUN_00429150(void);

// decompiled by BatchDecomp @ 00429150 name=FUN_00429150 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00429150(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096e778 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000429190 00429190_FUN_00429190 ====
void FUN_00429190(void);

// decompiled by BatchDecomp @ 00429190 name=FUN_00429190 conv=unknown body=61

void FUN_00429190(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"TurbineSubModule");
  pRVar1 = (ReflectionInfoBase *)TurbineSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042a200 0042a200_FUN_0042a200 ====
void FUN_0042a200(void);

// decompiled by BatchDecomp @ 0042a200 name=FUN_0042a200 conv=unknown body=61

void FUN_0042a200(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ExtrudableSoloTurretSubModule");
  pRVar1 = (ReflectionInfoBase *)ExtrudableSoloTurretSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042a240 0042a240_FUN_0042a240 ====
void FUN_0042a240(void);

// decompiled by BatchDecomp @ 0042a240 name=FUN_0042a240 conv=unknown body=61

void FUN_0042a240(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ExtrudableTurretSubModule");
  pRVar1 = (ReflectionInfoBase *)ExtrudableTurretSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042a2b0 0042a2b0_FUN_0042a2b0 ====
void FUN_0042a2b0(void);

// decompiled by BatchDecomp @ 0042a2b0 name=FUN_0042a2b0 conv=unknown body=61

void FUN_0042a2b0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ReactionWheelSubModule");
  pRVar1 = (ReflectionInfoBase *)ReactionWheelSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042a2f0 0042a2f0_FUN_0042a2f0 ====
void FUN_0042a2f0(void);

// decompiled by BatchDecomp @ 0042a2f0 name=FUN_0042a2f0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a2f0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096ef00 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000042a330 0042a330_FUN_0042a330 ====
void FUN_0042a330(void);

// decompiled by BatchDecomp @ 0042a330 name=FUN_0042a330 conv=unknown body=61

void FUN_0042a330(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"TurretMotorSubModule");
  pRVar1 = (ReflectionInfoBase *)TurretMotorSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042b3a0 0042b3a0_FUN_0042b3a0 ====
void FUN_0042b3a0(void);

// decompiled by BatchDecomp @ 0042b3a0 name=FUN_0042b3a0 conv=unknown body=61

void FUN_0042b3a0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ExplosiveModule");
  pRVar1 = (ReflectionInfoBase *)ExplosiveModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042b410 0042b410_FUN_0042b410 ====
void FUN_0042b410(void);

// decompiled by BatchDecomp @ 0042b410 name=FUN_0042b410 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042b410(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096f728 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000042c440 0042c440_FUN_0042c440 ====
void FUN_0042c440(void);

// decompiled by BatchDecomp @ 0042c440 name=FUN_0042c440 conv=unknown body=61

void FUN_0042c440(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"FlareModule");
  pRVar1 = (ReflectionInfoBase *)FlareModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042c4b0 0042c4b0_FUN_0042c4b0 ====
void FUN_0042c4b0(void);

// decompiled by BatchDecomp @ 0042c4b0 name=FUN_0042c4b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042c4b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0096fdd8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000042d6a0 0042d6a0_FUN_0042d6a0 ====
void FUN_0042d6a0(void);

// decompiled by BatchDecomp @ 0042d6a0 name=FUN_0042d6a0 conv=unknown body=61

void FUN_0042d6a0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"NuclearPayloadModule");
  pRVar1 = (ReflectionInfoBase *)NuclearPayloadModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042d6e0 0042d6e0_FUN_0042d6e0 ====
void FUN_0042d6e0(void);

// decompiled by BatchDecomp @ 0042d6e0 name=FUN_0042d6e0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042d6e0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00970660 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000042e880 0042e880_FUN_0042e880 ====
void FUN_0042e880(void);

// decompiled by BatchDecomp @ 0042e880 name=FUN_0042e880 conv=unknown body=61

void FUN_0042e880(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  CombustionMixtureSubModule *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CombustionMixtureSubModule");
  pRVar1 = CombustionMixtureSubModule__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042e910 0042e910_FUN_0042e910 ====
void FUN_0042e910(void);

// decompiled by BatchDecomp @ 0042e910 name=FUN_0042e910 conv=unknown body=61

void FUN_0042e910(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  ProximityDetonator *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ProximityDetonator");
  pRVar1 = ProximityDetonator__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042e950 0042e950_FUN_0042e950 ====
void FUN_0042e950(void);

// decompiled by BatchDecomp @ 0042e950 name=FUN_0042e950 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042e950(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00970920 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000042fac0 0042fac0_FUN_0042fac0 ====
void FUN_0042fac0(void);

// decompiled by BatchDecomp @ 0042fac0 name=FUN_0042fac0 conv=unknown body=61

void FUN_0042fac0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BlackBoxPowerModule");
  pRVar1 = (ReflectionInfoBase *)BlackBoxPowerModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042fb00 0042fb00_FUN_0042fb00 ====
void FUN_0042fb00(void);

// decompiled by BatchDecomp @ 0042fb00 name=FUN_0042fb00 conv=unknown body=61

void FUN_0042fb00(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BlackBoxRadiationSubModule");
  pRVar1 = (ReflectionInfoBase *)BlackBoxRadiationSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000042fbc0 0042fbc0_FUN_0042fbc0 ====
void FUN_0042fbc0(void);

// decompiled by BatchDecomp @ 0042fbc0 name=FUN_0042fbc0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042fbc0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009711b8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000430c20 00430c20_FUN_00430c20 ====
void FUN_00430c20(void);

// decompiled by BatchDecomp @ 00430c20 name=FUN_00430c20 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430c20(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009715b8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000431e50 00431e50_FUN_00431e50 ====
void FUN_00431e50(void);

// decompiled by BatchDecomp @ 00431e50 name=FUN_00431e50 conv=unknown body=61

void FUN_00431e50(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RadioisotopePelletSubModule");
  pRVar1 = (ReflectionInfoBase *)RadioisotopePelletSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000431e90 00431e90_FUN_00431e90 ====
void FUN_00431e90(void);

// decompiled by BatchDecomp @ 00431e90 name=FUN_00431e90 conv=unknown body=61

void FUN_00431e90(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RadioisotopeThermoelectricGeneratorModule");
  pRVar1 = (ReflectionInfoBase *)
           RadioisotopeThermoelectricGeneratorModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000431ed0 00431ed0_FUN_00431ed0 ====
void FUN_00431ed0(void);

// decompiled by BatchDecomp @ 00431ed0 name=FUN_00431ed0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00431ed0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00971d18 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000432f30 00432f30_FUN_00432f30 ====
void FUN_00432f30(void);

// decompiled by BatchDecomp @ 00432f30 name=FUN_00432f30 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00432f30(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972448 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000434160 00434160_FUN_00434160 ====
void FUN_00434160(void);

// decompiled by BatchDecomp @ 00434160 name=FUN_00434160 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434160(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972a50 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000435310 00435310_FUN_00435310 ====
void FUN_00435310(void);

// decompiled by BatchDecomp @ 00435310 name=FUN_00435310 conv=unknown body=61

void FUN_00435310(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"AmmoModule");
  pRVar1 = (ReflectionInfoBase *)AmmoModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004353d0 004353d0_FUN_004353d0 ====
void FUN_004353d0(void);

// decompiled by BatchDecomp @ 004353d0 name=FUN_004353d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004353d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00972fc0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000436540 00436540_FUN_00436540 ====
void FUN_00436540(void);

// decompiled by BatchDecomp @ 00436540 name=FUN_00436540 conv=unknown body=61

void FUN_00436540(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BlackBoxLaserInfoSubModule");
  pRVar1 = (ReflectionInfoBase *)BlackBoxLaserInfoSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000436580 00436580_FUN_00436580 ====
void FUN_00436580(void);

// decompiled by BatchDecomp @ 00436580 name=FUN_00436580 conv=unknown body=61

void FUN_00436580(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BlackBoxWeaponModule");
  pRVar1 = (ReflectionInfoBase *)BlackBoxWeaponModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000436640 00436640_FUN_00436640 ====
void FUN_00436640(void);

// decompiled by BatchDecomp @ 00436640 name=FUN_00436640 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00436640(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00973b50 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004377b0 004377b0_FUN_004377b0 ====
void FUN_004377b0(void);

// decompiled by BatchDecomp @ 004377b0 name=FUN_004377b0 conv=unknown body=61

void FUN_004377b0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BlastLauncherModule");
  pRVar1 = (ReflectionInfoBase *)BlastLauncherModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000437870 00437870_FUN_00437870 ====
void FUN_00437870(void);

// decompiled by BatchDecomp @ 00437870 name=FUN_00437870 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437870(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009742e8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004389e0 004389e0_FUN_004389e0 ====
void FUN_004389e0(void);

// decompiled by BatchDecomp @ 004389e0 name=FUN_004389e0 conv=unknown body=61

void FUN_004389e0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CarrierModule");
  pRVar1 = (ReflectionInfoBase *)CarrierModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000438aa0 00438aa0_FUN_00438aa0 ====
void FUN_00438aa0(void);

// decompiled by BatchDecomp @ 00438aa0 name=FUN_00438aa0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00438aa0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00974a88 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000439c40 00439c40_FUN_00439c40 ====
void FUN_00439c40(void);

// decompiled by BatchDecomp @ 00439c40 name=FUN_00439c40 conv=unknown body=61

void FUN_00439c40(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CoilgunModule");
  pRVar1 = (ReflectionInfoBase *)CoilgunModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000439cd0 00439cd0_FUN_00439cd0 ====
void FUN_00439cd0(void);

// decompiled by BatchDecomp @ 00439cd0 name=FUN_00439cd0 conv=unknown body=61

void FUN_00439cd0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"SolenoidSubModule");
  pRVar1 = (ReflectionInfoBase *)SolenoidSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000439d10 00439d10_FUN_00439d10 ====
void FUN_00439d10(void);

// decompiled by BatchDecomp @ 00439d10 name=FUN_00439d10 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439d10(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00975478 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000043ae80 0043ae80_FUN_0043ae80 ====
void FUN_0043ae80(void);

// decompiled by BatchDecomp @ 0043ae80 name=FUN_0043ae80 conv=unknown body=61

void FUN_0043ae80(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BallisticTubeSubModule");
  pRVar1 = (ReflectionInfoBase *)BallisticTubeSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043aef0 0043aef0_FUN_0043aef0 ====
void FUN_0043aef0(void);

// decompiled by BatchDecomp @ 0043aef0 name=FUN_0043aef0 conv=unknown body=61

void FUN_0043aef0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ConventionalGunModule");
  pRVar1 = (ReflectionInfoBase *)ConventionalGunModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043af80 0043af80_FUN_0043af80 ====
void FUN_0043af80(void);

// decompiled by BatchDecomp @ 0043af80 name=FUN_0043af80 conv=unknown body=61

void FUN_0043af80(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"SolidPropellantSubModule");
  pRVar1 = (ReflectionInfoBase *)SolidPropellantSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043afc0 0043afc0_FUN_0043afc0 ====
void FUN_0043afc0(void);

// decompiled by BatchDecomp @ 0043afc0 name=FUN_0043afc0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043afc0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00976060 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000043c130 0043c130_FUN_0043c130 ====
void FUN_0043c130(void);

// decompiled by BatchDecomp @ 0043c130 name=FUN_0043c130 conv=unknown body=61

void FUN_0043c130(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ArcLampPumpSubModule");
  pRVar1 = (ReflectionInfoBase *)ArcLampPumpSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043c1c0 0043c1c0_FUN_0043c1c0 ====
void FUN_0043c1c0(void);

// decompiled by BatchDecomp @ 0043c1c0 name=FUN_0043c1c0 conv=unknown body=61

void FUN_0043c1c0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"FixedLaserMountSubModule");
  pRVar1 = (ReflectionInfoBase *)FixedLaserMountSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043c200 0043c200_FUN_0043c200 ====
void FUN_0043c200(void);

// decompiled by BatchDecomp @ 0043c200 name=FUN_0043c200 conv=unknown body=61

void FUN_0043c200(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"FrequencyDoublerSubModule");
  pRVar1 = (ReflectionInfoBase *)FrequencyDoublerSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043c270 0043c270_FUN_0043c270 ====
void FUN_0043c270(void);

// decompiled by BatchDecomp @ 0043c270 name=FUN_0043c270 conv=unknown body=61

void FUN_0043c270(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LaserModule");
  pRVar1 = (ReflectionInfoBase *)LaserModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043c2b0 0043c2b0_FUN_0043c2b0 ====
void FUN_0043c2b0(void);

// decompiled by BatchDecomp @ 0043c2b0 name=FUN_0043c2b0 conv=unknown body=61

void FUN_0043c2b0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LensSubModule");
  pRVar1 = (ReflectionInfoBase *)LensSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043c2f0 0043c2f0_FUN_0043c2f0 ====
void FUN_0043c2f0(void);

// decompiled by BatchDecomp @ 0043c2f0 name=FUN_0043c2f0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043c2f0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009763a0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000043d4e0 0043d4e0_FUN_0043d4e0 ====
void FUN_0043d4e0(void);

// decompiled by BatchDecomp @ 0043d4e0 name=FUN_0043d4e0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043d4e0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009773f8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000043e6d0 0043e6d0_FUN_0043e6d0 ====
void FUN_0043e6d0(void);

// decompiled by BatchDecomp @ 0043e6d0 name=FUN_0043e6d0 conv=unknown body=61

void FUN_0043e6d0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RailgunModule");
  pRVar1 = (ReflectionInfoBase *)RailgunModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043e710 0043e710_FUN_0043e710 ====
void FUN_0043e710(void);

// decompiled by BatchDecomp @ 0043e710 name=FUN_0043e710 conv=unknown body=61

void FUN_0043e710(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RailsSubModule");
  pRVar1 = (ReflectionInfoBase *)RailsSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000043e750 0043e750_FUN_0043e750 ====
void FUN_0043e750(void);

// decompiled by BatchDecomp @ 0043e750 name=FUN_0043e750 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043e750(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00977d38 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000043f940 0043f940_FUN_0043f940 ====
void FUN_0043f940(void);

// decompiled by BatchDecomp @ 0043f940 name=FUN_0043f940 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043f940(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978360 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000440b70 00440b70_FUN_00440b70 ====
void FUN_00440b70(void);

// decompiled by BatchDecomp @ 00440b70 name=FUN_00440b70 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00440b70(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978618 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000441ce0 00441ce0_FUN_00441ce0 ====
void FUN_00441ce0(void);

// decompiled by BatchDecomp @ 00441ce0 name=FUN_00441ce0 conv=unknown body=61

void FUN_00441ce0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"AmmoBaySubModule");
  pRVar1 = (ReflectionInfoBase *)AmmoBaySubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000441d20 00441d20_FUN_00441d20 ====
void FUN_00441d20(void);

// decompiled by BatchDecomp @ 00441d20 name=FUN_00441d20 conv=unknown body=61

void FUN_00441d20(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  BarrelArmorSubModule *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BarrelArmorSubModule");
  pRVar1 = BarrelArmorSubModule__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000441d60 00441d60_FUN_00441d60 ====
void FUN_00441d60(void);

// decompiled by BatchDecomp @ 00441d60 name=FUN_00441d60 conv=unknown body=61

void FUN_00441d60(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"BarrelCoolingSubModule");
  pRVar1 = (ReflectionInfoBase *)BarrelCoolingSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000441e20 00441e20_FUN_00441e20 ====
void FUN_00441e20(void);

// decompiled by BatchDecomp @ 00441e20 name=FUN_00441e20 conv=unknown body=61

void FUN_00441e20(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"MassProjectileSubModule");
  pRVar1 = (ReflectionInfoBase *)MassProjectileSubModule__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000441e60 00441e60_FUN_00441e60 ====
void FUN_00441e60(void);

// decompiled by BatchDecomp @ 00441e60 name=FUN_00441e60 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00441e60(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00978db8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000442fd0 00442fd0_FUN_00442fd0 ====
void FUN_00442fd0(void);

// decompiled by BatchDecomp @ 00442fd0 name=FUN_00442fd0 conv=unknown body=61

void FUN_00442fd0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ChemicalReaction");
  pRVar1 = (ReflectionInfoBase *)ChemicalReaction__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000443040 00443040_FUN_00443040 ====
void FUN_00443040(void);

// decompiled by BatchDecomp @ 00443040 name=FUN_00443040 conv=unknown body=61

void FUN_00443040(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"DissociationReaction");
  pRVar1 = (ReflectionInfoBase *)DissociationReaction__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004430d0 004430d0_FUN_004430d0 ====
void FUN_004430d0(void);

// decompiled by BatchDecomp @ 004430d0 name=FUN_004430d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004430d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009793a0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004434b0 004434b0_FUN_004434b0 ====
void FUN_004434b0(void);

// decompiled by BatchDecomp @ 004434b0 name=FUN_004434b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004434b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979440 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000443b60 00443b60_FUN_00443b60 ====
void FUN_00443b60(void);

// decompiled by BatchDecomp @ 00443b60 name=FUN_00443b60 conv=unknown body=61

void FUN_00443b60(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Element");
  pRVar1 = (ReflectionInfoBase *)Element__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000443bf0 00443bf0_FUN_00443bf0 ====
void FUN_00443bf0(void);

// decompiled by BatchDecomp @ 00443bf0 name=FUN_00443bf0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443bf0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979e38 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000443df0 00443df0_FUN_00443df0 ====
void FUN_00443df0(void);

// decompiled by BatchDecomp @ 00443df0 name=FUN_00443df0 conv=unknown body=61

void FUN_00443df0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"EmissionSpectrum");
  pRVar1 = (ReflectionInfoBase *)EmissionSpectrum__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000443e80 00443e80_FUN_00443e80 ====
void FUN_00443e80(void);

// decompiled by BatchDecomp @ 00443e80 name=FUN_00443e80 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443e80(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979ef0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000443f40 00443f40_FUN_00443f40 ====
void FUN_00443f40(void);

// decompiled by BatchDecomp @ 00443f40 name=FUN_00443f40 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00443f40(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979f30 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000444320 00444320_FUN_00444320 ====
void FUN_00444320(void);

// decompiled by BatchDecomp @ 00444320 name=FUN_00444320 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444320(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00979fc8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000444860 00444860_FUN_00444860 ====
void FUN_00444860(void);

// decompiled by BatchDecomp @ 00444860 name=FUN_00444860 conv=unknown body=61

void FUN_00444860(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"FusionReaction");
  pRVar1 = (ReflectionInfoBase *)FusionReaction__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004448d0 004448d0_FUN_004448d0 ====
void FUN_004448d0(void);

// decompiled by BatchDecomp @ 004448d0 name=FUN_004448d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004448d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a2d0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000444e50 00444e50_FUN_00444e50 ====
void FUN_00444e50(void);

// decompiled by BatchDecomp @ 00444e50 name=FUN_00444e50 conv=unknown body=61

void FUN_00444e50(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LasingMedium");
  pRVar1 = (ReflectionInfoBase *)LasingMedium__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000444e90 00444e90_FUN_00444e90 ====
void FUN_00444e90(void);

// decompiled by BatchDecomp @ 00444e90 name=FUN_00444e90 conv=unknown body=61

void FUN_00444e90(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Material");
  pRVar1 = (ReflectionInfoBase *)Material__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000444ed0 00444ed0_FUN_00444ed0 ====
void FUN_00444ed0(void);

// decompiled by BatchDecomp @ 00444ed0 name=FUN_00444ed0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00444ed0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a658 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000445670 00445670_FUN_00445670 ====
void FUN_00445670(void);

// decompiled by BatchDecomp @ 00445670 name=FUN_00445670 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445670(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a758 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004458c0 004458c0_FUN_004458c0 ====
void FUN_004458c0(void);

// decompiled by BatchDecomp @ 004458c0 name=FUN_004458c0 conv=unknown body=61

void FUN_004458c0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"RefractiveIndexSpectrum");
  pRVar1 = (ReflectionInfoBase *)RefractiveIndexSpectrum__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000445900 00445900_FUN_00445900 ====
void FUN_00445900(void);

// decompiled by BatchDecomp @ 00445900 name=FUN_00445900 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445900(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a850 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004459c0 004459c0_FUN_004459c0 ====
void FUN_004459c0(void);

// decompiled by BatchDecomp @ 004459c0 name=FUN_004459c0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004459c0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097a878 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000445a80 00445a80_FUN_00445a80 ====
void FUN_00445a80(void);

// decompiled by BatchDecomp @ 00445a80 name=FUN_00445a80 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00445a80(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ab30 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000446e00 00446e00_FUN_00446e00 ====
void FUN_00446e00(void);

// decompiled by BatchDecomp @ 00446e00 name=FUN_00446e00 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00446e00(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ae48 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000448310 00448310_FUN_00448310 ====
void FUN_00448310(void);

// decompiled by BatchDecomp @ 00448310 name=FUN_00448310 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00448310(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097b140 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000449500 00449500_FUN_00449500 ====
void FUN_00449500(void);

// decompiled by BatchDecomp @ 00449500 name=FUN_00449500 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00449500(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097b438 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000044a9c0 0044a9c0_FUN_0044a9c0 ====
void FUN_0044a9c0(void);

// decompiled by BatchDecomp @ 0044a9c0 name=FUN_0044a9c0 conv=unknown body=61

void FUN_0044a9c0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Concept");
  pRVar1 = (ReflectionInfoBase *)Concept__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044aa00 0044aa00_FUN_0044aa00 ====
void FUN_0044aa00(void);

// decompiled by BatchDecomp @ 0044aa00 name=FUN_0044aa00 conv=unknown body=61

void FUN_0044aa00(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Credits");
  pRVar1 = (ReflectionInfoBase *)Credits__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044aa40 0044aa40_FUN_0044aa40 ====
void FUN_0044aa40(void);

// decompiled by BatchDecomp @ 0044aa40 name=FUN_0044aa40 conv=unknown body=61

void FUN_0044aa40(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CreditsSection");
  pRVar1 = (ReflectionInfoBase *)CreditsSection__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044aae0 0044aae0_FUN_0044aae0 ====
void FUN_0044aae0(void);

// decompiled by BatchDecomp @ 0044aae0 name=FUN_0044aae0 conv=unknown body=61

void FUN_0044aae0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"NewsItem");
  pRVar1 = (ReflectionInfoBase *)NewsItem__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044ab20 0044ab20_FUN_0044ab20 ====
void FUN_0044ab20(void);

// decompiled by BatchDecomp @ 0044ab20 name=FUN_0044ab20 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044ab20(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097bed0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000044b680 0044b680_FUN_0044b680 ====
void FUN_0044b680(void);

// decompiled by BatchDecomp @ 0044b680 name=FUN_0044b680 conv=unknown body=65

void FUN_0044b680(void)

{
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__LocStr_G_ *pDVar3;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GraphicsSetting");
  pDVar3 = (Darray_L_class_util__LocStr_G_ *)&DAT_0097ce00;
  pSVar1 = &local_10;
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)&DAT_0097cdf0;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterEnum(this,pSVar1,pDVar2,pDVar3);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044b6f0 0044b6f0_FUN_0044b6f0 ====
void FUN_0044b6f0(void);

// decompiled by BatchDecomp @ 0044b6f0 name=FUN_0044b6f0 conv=unknown body=61

void FUN_0044b6f0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GameGraphicsSettings");
  pRVar1 = (ReflectionInfoBase *)GameGraphicsSettings__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044b730 0044b730_FUN_0044b730 ====
void FUN_0044b730(void);

// decompiled by BatchDecomp @ 0044b730 name=FUN_0044b730 conv=unknown body=61

void FUN_0044b730(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GameplaySettings");
  pRVar1 = (ReflectionInfoBase *)GameplaySettings__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044b7a0 0044b7a0_FUN_0044b7a0 ====
void FUN_0044b7a0(void);

// decompiled by BatchDecomp @ 0044b7a0 name=FUN_0044b7a0 conv=unknown body=61

void FUN_0044b7a0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"InterfaceSettings");
  pRVar1 = (ReflectionInfoBase *)InterfaceSettings__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044b7e0 0044b7e0_FUN_0044b7e0 ====
void FUN_0044b7e0(void);

// decompiled by BatchDecomp @ 0044b7e0 name=FUN_0044b7e0 conv=unknown body=61

void FUN_0044b7e0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LightingSettings");
  pRVar1 = (ReflectionInfoBase *)LightingSettings__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044b820 0044b820_FUN_0044b820 ====
void FUN_0044b820(void);

// decompiled by BatchDecomp @ 0044b820 name=FUN_0044b820 conv=unknown body=61

void FUN_0044b820(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Preferences");
  pRVar1 = (ReflectionInfoBase *)Preferences__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044b860 0044b860_FUN_0044b860 ====
void FUN_0044b860(void);

// decompiled by BatchDecomp @ 0044b860 name=FUN_0044b860 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044b860(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097ce48 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000044be10 0044be10_FUN_0044be10 ====
void FUN_0044be10(void);

// decompiled by BatchDecomp @ 0044be10 name=FUN_0044be10 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044be10(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097d770 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000044d190 0044d190_FUN_0044d190 ====
void FUN_0044d190(void);

// decompiled by BatchDecomp @ 0044d190 name=FUN_0044d190 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044d190(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097da70 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000044dfe0 0044dfe0_FUN_0044dfe0 ====
void FUN_0044dfe0(void);

// decompiled by BatchDecomp @ 0044dfe0 name=FUN_0044dfe0 conv=unknown body=61

void FUN_0044dfe0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Campaign");
  pRVar1 = (ReflectionInfoBase *)Campaign__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e020 0044e020_FUN_0044e020 ====
void FUN_0044e020(void);

// decompiled by BatchDecomp @ 0044e020 name=FUN_0044e020 conv=unknown body=61

void FUN_0044e020(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CelestialLocation");
  pRVar1 = (ReflectionInfoBase *)CelestialLocation__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e090 0044e090_FUN_0044e090 ====
void FUN_0044e090(void);

// decompiled by BatchDecomp @ 0044e090 name=FUN_0044e090 conv=unknown body=61

void FUN_0044e090(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CustomObjective");
  pRVar1 = (ReflectionInfoBase *)CustomObjective__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e0d0 0044e0d0_FUN_0044e0d0 ====
void FUN_0044e0d0(void);

// decompiled by BatchDecomp @ 0044e0d0 name=FUN_0044e0d0 conv=unknown body=61

void FUN_0044e0d0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CutsceneMessage");
  pRVar1 = (ReflectionInfoBase *)CutsceneMessage__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e200 0044e200_FUN_0044e200 ====
void FUN_0044e200(void);

// decompiled by BatchDecomp @ 0044e200 name=FUN_0044e200 conv=unknown body=61

void FUN_0044e200(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GlobalSaveValues");
  pRVar1 = (ReflectionInfoBase *)GlobalSaveValues__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e270 0044e270_FUN_0044e270 ====
void FUN_0044e270(void);

// decompiled by BatchDecomp @ 0044e270 name=FUN_0044e270 conv=unknown body=61

void FUN_0044e270(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LevelBadges");
  pRVar1 = (ReflectionInfoBase *)LevelBadges__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e2b0 0044e2b0_FUN_0044e2b0 ====
void FUN_0044e2b0(void);

// decompiled by BatchDecomp @ 0044e2b0 name=FUN_0044e2b0 conv=unknown body=61

void FUN_0044e2b0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LevelMessages");
  pRVar1 = (ReflectionInfoBase *)LevelMessages__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e2f0 0044e2f0_FUN_0044e2f0 ====
void FUN_0044e2f0(void);

// decompiled by BatchDecomp @ 0044e2f0 name=FUN_0044e2f0 conv=unknown body=61

void FUN_0044e2f0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  LevelRecord *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LevelRecord");
  pRVar1 = LevelRecord__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e330 0044e330_FUN_0044e330 ====
void FUN_0044e330(void);

// decompiled by BatchDecomp @ 0044e330 name=FUN_0044e330 conv=unknown body=61

void FUN_0044e330(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Level");
  pRVar1 = (ReflectionInfoBase *)Level__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e370 0044e370_FUN_0044e370 ====
void FUN_0044e370(void);

// decompiled by BatchDecomp @ 0044e370 name=FUN_0044e370 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044e370(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097fae0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000044f5a0 0044f5a0_FUN_0044f5a0 ====
void FUN_0044f5a0(void);

// decompiled by BatchDecomp @ 0044f5a0 name=FUN_0044f5a0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f5a0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0097fe00 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000450c40 00450c40_FUN_00450c40 ====
void FUN_00450c40(void);

// decompiled by BatchDecomp @ 00450c40 name=FUN_00450c40 conv=unknown body=61

void FUN_00450c40(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  OrbitalElements *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"OrbitalElements");
  pRVar1 = OrbitalElements__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000450c80 00450c80_FUN_00450c80 ====
void FUN_00450c80(void);

// decompiled by BatchDecomp @ 00450c80 name=FUN_00450c80 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00450c80(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009800f0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000451b60 00451b60_FUN_00451b60 ====
void FUN_00451b60(void);

// decompiled by BatchDecomp @ 00451b60 name=FUN_00451b60 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451b60(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00980330 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004529c0 004529c0_FUN_004529c0 ====
void FUN_004529c0(void);

// decompiled by BatchDecomp @ 004529c0 name=FUN_004529c0 conv=unknown body=61

void FUN_004529c0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"AsteroidSpectralType");
  pRVar1 = (ReflectionInfoBase *)AsteroidSpectralType__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000452a00 00452a00_FUN_00452a00 ====
void FUN_00452a00(void);

// decompiled by BatchDecomp @ 00452a00 name=FUN_00452a00 conv=unknown body=61

void FUN_00452a00(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CelestialAtmosphere");
  pRVar1 = (ReflectionInfoBase *)CelestialAtmosphere__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000452a40 00452a40_FUN_00452a40 ====
void FUN_00452a40(void);

// decompiled by BatchDecomp @ 00452a40 name=FUN_00452a40 conv=unknown body=61

void FUN_00452a40(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CelestialBody");
  pRVar1 = (ReflectionInfoBase *)CelestialBody__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000452a80 00452a80_FUN_00452a80 ====
void FUN_00452a80(void);

// decompiled by BatchDecomp @ 00452a80 name=FUN_00452a80 conv=unknown body=61

void FUN_00452a80(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  CelestialOrbit *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CelestialOrbit");
  pRVar1 = CelestialOrbit__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000452ac0 00452ac0_FUN_00452ac0 ====
void FUN_00452ac0(void);

// decompiled by BatchDecomp @ 00452ac0 name=FUN_00452ac0 conv=unknown body=61

void FUN_00452ac0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CelestialRing");
  pRVar1 = (ReflectionInfoBase *)CelestialRing__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000452b00 00452b00_FUN_00452b00 ====
void FUN_00452b00(void);

// decompiled by BatchDecomp @ 00452b00 name=FUN_00452b00 conv=unknown body=61

void FUN_00452b00(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CelestialRotation");
  pRVar1 = (ReflectionInfoBase *)CelestialRotation__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000452be0 00452be0_FUN_00452be0 ====
void FUN_00452be0(void);

// decompiled by BatchDecomp @ 00452be0 name=FUN_00452be0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452be0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00980dd0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000453600 00453600_FUN_00453600 ====
void FUN_00453600(void);

// decompiled by BatchDecomp @ 00453600 name=FUN_00453600 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00453600(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009810e8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004544d0 004544d0_FUN_004544d0 ====
void FUN_004544d0(void);

// decompiled by BatchDecomp @ 004544d0 name=FUN_004544d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004544d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009813a0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000455850 00455850_FUN_00455850 ====
void FUN_00455850(void);

// decompiled by BatchDecomp @ 00455850 name=FUN_00455850 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455850(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00981668 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000456720 00456720_FUN_00456720 ====
void FUN_00456720(void);

// decompiled by BatchDecomp @ 00456720 name=FUN_00456720 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00456720(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009818d0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000457780 00457780_FUN_00457780 ====
void FUN_00457780(void);

// decompiled by BatchDecomp @ 00457780 name=FUN_00457780 conv=unknown body=61

void FUN_00457780(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"InterceptionProtocol");
  pRVar1 = (ReflectionInfoBase *)InterceptionProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004577c0 004577c0_FUN_004577c0 ====
void FUN_004577c0(void);

// decompiled by BatchDecomp @ 004577c0 name=FUN_004577c0 conv=unknown body=61

void FUN_004577c0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LaunchProtocol");
  pRVar1 = (ReflectionInfoBase *)LaunchProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000457800 00457800_FUN_00457800 ====
void FUN_00457800(void);

// decompiled by BatchDecomp @ 00457800 name=FUN_00457800 conv=unknown body=61

void FUN_00457800(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"MilitaryDoctrine");
  pRVar1 = (ReflectionInfoBase *)MilitaryDoctrine__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000457840 00457840_FUN_00457840 ====
void FUN_00457840(void);

// decompiled by BatchDecomp @ 00457840 name=FUN_00457840 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00457840(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982440 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000458a30 00458a30_FUN_00458a30 ====
void FUN_00458a30(void);

// decompiled by BatchDecomp @ 00458a30 name=FUN_00458a30 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00458a30(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982738 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000459f40 00459f40_FUN_00459f40 ====
void FUN_00459f40(void);

// decompiled by BatchDecomp @ 00459f40 name=FUN_00459f40 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459f40(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982a28 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000045ae10 0045ae10_FUN_0045ae10 ====
void FUN_0045ae10(void);

// decompiled by BatchDecomp @ 0045ae10 name=FUN_0045ae10 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ae10(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982c70 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000045bce0 0045bce0_FUN_0045bce0 ====
void FUN_0045bce0(void);

// decompiled by BatchDecomp @ 0045bce0 name=FUN_0045bce0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045bce0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00982ed0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000045cd40 0045cd40_FUN_0045cd40 ====
void FUN_0045cd40(void);

// decompiled by BatchDecomp @ 0045cd40 name=FUN_0045cd40 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045cd40(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983148 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000045dda0 0045dda0_FUN_0045dda0 ====
void FUN_0045dda0(void);

// decompiled by BatchDecomp @ 0045dda0 name=FUN_0045dda0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045dda0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983410 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000045ef90 0045ef90_FUN_0045ef90 ====
void FUN_0045ef90(void);

// decompiled by BatchDecomp @ 0045ef90 name=FUN_0045ef90 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045ef90(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983688 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000045fe60 0045fe60_FUN_0045fe60 ====
void FUN_0045fe60(void);

// decompiled by BatchDecomp @ 0045fe60 name=FUN_0045fe60 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0045fe60(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009838f0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000460ec0 00460ec0_FUN_00460ec0 ====
void FUN_00460ec0(void);

// decompiled by BatchDecomp @ 00460ec0 name=FUN_00460ec0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460ec0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983b68 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000461f20 00461f20_FUN_00461f20 ====
void FUN_00461f20(void);

// decompiled by BatchDecomp @ 00461f20 name=FUN_00461f20 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00461f20(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00983de8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000463130 00463130_FUN_00463130 ====
void FUN_00463130(void);

// decompiled by BatchDecomp @ 00463130 name=FUN_00463130 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463130(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009840f0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000464320 00464320_FUN_00464320 ====
void FUN_00464320(void);

// decompiled by BatchDecomp @ 00464320 name=FUN_00464320 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464320(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984358 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000464d40 00464d40_FUN_00464d40 ====
void FUN_00464d40(void);

// decompiled by BatchDecomp @ 00464d40 name=FUN_00464d40 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00464d40(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984518 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000465da0 00465da0_FUN_00465da0 ====
void FUN_00465da0(void);

// decompiled by BatchDecomp @ 00465da0 name=FUN_00465da0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465da0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984780 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000466ae0 00466ae0_FUN_00466ae0 ====
void FUN_00466ae0(void);

// decompiled by BatchDecomp @ 00466ae0 name=FUN_00466ae0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00466ae0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009849c0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000467cd0 00467cd0_FUN_00467cd0 ====
void FUN_00467cd0(void);

// decompiled by BatchDecomp @ 00467cd0 name=FUN_00467cd0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00467cd0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984c80 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000468ec0 00468ec0_FUN_00468ec0 ====
void FUN_00468ec0(void);

// decompiled by BatchDecomp @ 00468ec0 name=FUN_00468ec0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468ec0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00984f40 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000046a0b0 0046a0b0_FUN_0046a0b0 ====
void FUN_0046a0b0(void);

// decompiled by BatchDecomp @ 0046a0b0 name=FUN_0046a0b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046a0b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985208 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000046b2a0 0046b2a0_FUN_0046b2a0 ====
void FUN_0046b2a0(void);

// decompiled by BatchDecomp @ 0046b2a0 name=FUN_0046b2a0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b2a0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985500 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000046c620 0046c620_FUN_0046c620 ====
void FUN_0046c620(void);

// decompiled by BatchDecomp @ 0046c620 name=FUN_0046c620 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046c620(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009857d8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000046d9a0 0046d9a0_FUN_0046d9a0 ====
void FUN_0046d9a0(void);

// decompiled by BatchDecomp @ 0046d9a0 name=FUN_0046d9a0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d9a0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985ac8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000046eb90 0046eb90_FUN_0046eb90 ====
void FUN_0046eb90(void);

// decompiled by BatchDecomp @ 0046eb90 name=FUN_0046eb90 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046eb90(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00985d88 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000046fd80 0046fd80_FUN_0046fd80 ====
void FUN_0046fd80(void);

// decompiled by BatchDecomp @ 0046fd80 name=FUN_0046fd80 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046fd80(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00986060 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000471290 00471290_FUN_00471290 ====
void FUN_00471290(void);

// decompiled by BatchDecomp @ 00471290 name=FUN_00471290 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00471290(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00986390 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000472720 00472720_FUN_00472720 ====
void FUN_00472720(void);

// decompiled by BatchDecomp @ 00472720 name=FUN_00472720 conv=unknown body=61

void FUN_00472720(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CapitalShipProtocol");
  pRVar1 = (ReflectionInfoBase *)CapitalShipProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000472790 00472790_FUN_00472790 ====
void FUN_00472790(void);

// decompiled by BatchDecomp @ 00472790 name=FUN_00472790 conv=unknown body=61

void FUN_00472790(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CombatProtocol");
  pRVar1 = (ReflectionInfoBase *)CombatProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004727d0 004727d0_FUN_004727d0 ====
void FUN_004727d0(void);

// decompiled by BatchDecomp @ 004727d0 name=FUN_004727d0 conv=unknown body=65

void FUN_004727d0(void)

{
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__LocStr_G_ *pDVar3;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"AIOrder");
  pDVar3 = (Darray_L_class_util__LocStr_G_ *)&DAT_00987248;
  pSVar1 = &local_10;
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00987238;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterEnum(this,pSVar1,pDVar2,pDVar3);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000472820 00472820_FUN_00472820 ====
void FUN_00472820(void);

// decompiled by BatchDecomp @ 00472820 name=FUN_00472820 conv=unknown body=65

void FUN_00472820(void)

{
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__LocStr_G_ *pDVar3;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"TargetPriority");
  pDVar3 = (Darray_L_class_util__LocStr_G_ *)&DAT_009871a4;
  pSVar1 = &local_10;
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)&DAT_00987170;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterEnum(this,pSVar1,pDVar2,pDVar3);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000472870 00472870_FUN_00472870 ====
void FUN_00472870(void);

// decompiled by BatchDecomp @ 00472870 name=FUN_00472870 conv=unknown body=61

void FUN_00472870(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"DroneProtocol");
  pRVar1 = (ReflectionInfoBase *)DroneProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 00004728d0 004728d0_FUN_004728d0 ====
void FUN_004728d0(void);

// decompiled by BatchDecomp @ 004728d0 name=FUN_004728d0 conv=unknown body=61

void FUN_004728d0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"FlareProtocol");
  pRVar1 = (ReflectionInfoBase *)FlareProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000472940 00472940_FUN_00472940 ====
void FUN_00472940(void);

// decompiled by BatchDecomp @ 00472940 name=FUN_00472940 conv=unknown body=61

void FUN_00472940(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"MissileProtocol");
  pRVar1 = (ReflectionInfoBase *)MissileProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000472980 00472980_FUN_00472980 ====
void FUN_00472980(void);

// decompiled by BatchDecomp @ 00472980 name=FUN_00472980 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00472980(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987228 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000473af0 00473af0_FUN_00473af0 ====
void FUN_00473af0(void);

// decompiled by BatchDecomp @ 00473af0 name=FUN_00473af0 conv=unknown body=61

void FUN_00473af0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"WeaponsProtocol");
  pRVar1 = (ReflectionInfoBase *)WeaponsProtocol__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000473bb0 00473bb0_FUN_00473bb0 ====
void FUN_00473bb0(void);

// decompiled by BatchDecomp @ 00473bb0 name=FUN_00473bb0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00473bb0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987550 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004750c0 004750c0_FUN_004750c0 ====
void FUN_004750c0(void);

// decompiled by BatchDecomp @ 004750c0 name=FUN_004750c0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004750c0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987870 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000476440 00476440_FUN_00476440 ====
void FUN_00476440(void);

// decompiled by BatchDecomp @ 00476440 name=FUN_00476440 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00476440(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987b60 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004777d0 004777d0_FUN_004777d0 ====
void FUN_004777d0(void);

// decompiled by BatchDecomp @ 004777d0 name=FUN_004777d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004777d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00987e50 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000478b50 00478b50_FUN_00478b50 ====
void FUN_00478b50(void);

// decompiled by BatchDecomp @ 00478b50 name=FUN_00478b50 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478b50(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988160 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000479d40 00479d40_FUN_00479d40 ====
void FUN_00479d40(void);

// decompiled by BatchDecomp @ 00479d40 name=FUN_00479d40 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479d40(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988428 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047b0d0 0047b0d0_FUN_0047b0d0 ====
void FUN_0047b0d0(void);

// decompiled by BatchDecomp @ 0047b0d0 name=FUN_0047b0d0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047b0d0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988738 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047c5e0 0047c5e0_FUN_0047c5e0 ====
void FUN_0047c5e0(void);

// decompiled by BatchDecomp @ 0047c5e0 name=FUN_0047c5e0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c5e0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00988a68 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047ddc0 0047ddc0_FUN_0047ddc0 ====
void FUN_0047ddc0(void);

// decompiled by BatchDecomp @ 0047ddc0 name=FUN_0047ddc0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ddc0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009895c0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047e020 0047e020_FUN_0047e020 ====
void FUN_0047e020(void);

// decompiled by BatchDecomp @ 0047e020 name=FUN_0047e020 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e020(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989650 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047e400 0047e400_FUN_0047e400 ====
void FUN_0047e400(void);

// decompiled by BatchDecomp @ 0047e400 name=FUN_0047e400 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e400(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989768 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047e870 0047e870_FUN_0047e870 ====
void FUN_0047e870(void);

// decompiled by BatchDecomp @ 0047e870 name=FUN_0047e870 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047e870(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009897e0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047eae0 0047eae0_FUN_0047eae0 ====
void FUN_0047eae0(void);

// decompiled by BatchDecomp @ 0047eae0 name=FUN_0047eae0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047eae0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00989880 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047ef00 0047ef00_FUN_0047ef00 ====
void FUN_0047ef00(void);

// decompiled by BatchDecomp @ 0047ef00 name=FUN_0047ef00 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047ef00(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098c9a0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047f300 0047f300_FUN_0047f300 ====
void FUN_0047f300(void);

// decompiled by BatchDecomp @ 0047f300 name=FUN_0047f300 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f300(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098ca38 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047f550 0047f550_FUN_0047f550 ====
void FUN_0047f550(void);

// decompiled by BatchDecomp @ 0047f550 name=FUN_0047f550 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f550(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cae8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047f930 0047f930_FUN_0047f930 ====
void FUN_0047f930(void);

// decompiled by BatchDecomp @ 0047f930 name=FUN_0047f930 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047f930(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cc28 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 000047fb10 0047fb10_FUN_0047fb10 ====
void FUN_0047fb10(void);

// decompiled by BatchDecomp @ 0047fb10 name=FUN_0047fb10 conv=unknown body=61

void FUN_0047fb10(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  AudioSettings *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"AudioSettings");
  pRVar1 = AudioSettings__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000047fba0 0047fba0_FUN_0047fba0 ====
void FUN_0047fba0(void);

// decompiled by BatchDecomp @ 0047fba0 name=FUN_0047fba0 conv=unknown body=61

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0047fba0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  GeneralSettings *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GeneralSettings");
  pRVar1 = GeneralSettings__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000047fc10 0047fc10_FUN_0047fc10 ====
void FUN_0047fc10(void);

// decompiled by BatchDecomp @ 0047fc10 name=FUN_0047fc10 conv=unknown body=61

void FUN_0047fc10(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  GraphicsSettings *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"GraphicsSettings");
  pRVar1 = GraphicsSettings__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000047fc50 0047fc50_FUN_0047fc50 ====
void FUN_0047fc50(void);

// decompiled by BatchDecomp @ 0047fc50 name=FUN_0047fc50 conv=unknown body=61

void FUN_0047fc50(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  LanguageOption *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"LanguageOption");
  pRVar1 = LanguageOption__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000047fc90 0047fc90_FUN_0047fc90 ====
void FUN_0047fc90(void);

// decompiled by BatchDecomp @ 0047fc90 name=FUN_0047fc90 conv=unknown body=61

void FUN_0047fc90(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  PostProcessSettings *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"PostProcessSettings");
  pRVar1 = PostProcessSettings__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000047fcd0 0047fcd0_FUN_0047fcd0 ====
void FUN_0047fcd0(void);

// decompiled by BatchDecomp @ 0047fcd0 name=FUN_0047fcd0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047fcd0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098ccb0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004800b0 004800b0_FUN_004800b0 ====
void FUN_004800b0(void);

// decompiled by BatchDecomp @ 004800b0 name=FUN_004800b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004800b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098cd68 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000480490 00480490_FUN_00480490 ====
void FUN_00480490(void);

// decompiled by BatchDecomp @ 00480490 name=FUN_00480490 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480490(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d040 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004807f0 004807f0_FUN_004807f0 ====
void FUN_004807f0(void);

// decompiled by BatchDecomp @ 004807f0 name=FUN_004807f0 conv=unknown body=61

void FUN_004807f0(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Color *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"Color");
  pRVar1 = util__Color__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000480900 00480900_FUN_00480900 ====
void FUN_00480900(void);

// decompiled by BatchDecomp @ 00480900 name=FUN_00480900 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480900(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d0d0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000480b50 00480b50_FUN_00480b50 ====
void FUN_00480b50(void);

// decompiled by BatchDecomp @ 00480b50 name=FUN_00480b50 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480b50(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d1b8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000480f30 00480f30_FUN_00480f30 ====
void FUN_00480f30(void);

// decompiled by BatchDecomp @ 00480f30 name=FUN_00480f30 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480f30(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d250 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000481310 00481310_FUN_00481310 ====
void FUN_00481310(void);

// decompiled by BatchDecomp @ 00481310 name=FUN_00481310 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481310(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_0098d2f8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000481700 00481700_FUN_00481700 ====
void FUN_00481700(void);

// decompiled by BatchDecomp @ 00481700 name=FUN_00481700 conv=unknown body=61

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00481700(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  CoreUITheme *this_00;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"CoreUITheme");
  pRVar1 = CoreUITheme__GetReflectionInfo(this_00);
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000481790 00481790_FUN_00481790 ====
void FUN_00481790(void);

// decompiled by BatchDecomp @ 00481790 name=FUN_00481790 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481790(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992208 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000481a20 00481a20_FUN_00481a20 ====
void FUN_00481a20(void);

// decompiled by BatchDecomp @ 00481a20 name=FUN_00481a20 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481a20(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992288 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000481e00 00481e00_FUN_00481e00 ====
void FUN_00481e00(void);

// decompiled by BatchDecomp @ 00481e00 name=FUN_00481e00 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00481e00(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992320 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004821e0 004821e0_FUN_004821e0 ====
void FUN_004821e0(void);

// decompiled by BatchDecomp @ 004821e0 name=FUN_004821e0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004821e0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009923b8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000482660 00482660_FUN_00482660 ====
void FUN_00482660(void);

// decompiled by BatchDecomp @ 00482660 name=FUN_00482660 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482660(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992478 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004828b0 004828b0_FUN_004828b0 ====
void FUN_004828b0(void);

// decompiled by BatchDecomp @ 004828b0 name=FUN_004828b0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004828b0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009924b8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000482b00 00482b00_FUN_00482b00 ====
void FUN_00482b00(void);

// decompiled by BatchDecomp @ 00482b00 name=FUN_00482b00 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482b00(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992520 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000482dc0 00482dc0_FUN_00482dc0 ====
void FUN_00482dc0(void);

// decompiled by BatchDecomp @ 00482dc0 name=FUN_00482dc0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00482dc0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992580 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000483020 00483020_FUN_00483020 ====
void FUN_00483020(void);

// decompiled by BatchDecomp @ 00483020 name=FUN_00483020 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483020(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992600 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000483400 00483400_FUN_00483400 ====
void FUN_00483400(void);

// decompiled by BatchDecomp @ 00483400 name=FUN_00483400 conv=unknown body=61

void FUN_00483400(void)

{
  ReflectionInfoBase *pRVar1;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"SoundEffect");
  pRVar1 = (ReflectionInfoBase *)SoundEffect__StaticGetReflectionInfo();
  pSVar2 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterStruct(this,pSVar2,pRVar1);
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000483440 00483440_FUN_00483440 ====
void FUN_00483440(void);

// decompiled by BatchDecomp @ 00483440 name=FUN_00483440 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483440(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009929e0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000483820 00483820_FUN_00483820 ====
void FUN_00483820(void);

// decompiled by BatchDecomp @ 00483820 name=FUN_00483820 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483820(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992a60 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000483a70 00483a70_FUN_00483a70 ====
void FUN_00483a70(void);

// decompiled by BatchDecomp @ 00483a70 name=FUN_00483a70 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483a70(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992ae0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000483e50 00483e50_FUN_00483e50 ====
void FUN_00483e50(void);

// decompiled by BatchDecomp @ 00483e50 name=FUN_00483e50 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483e50(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992b78 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000484230 00484230_FUN_00484230 ====
void FUN_00484230(void);

// decompiled by BatchDecomp @ 00484230 name=FUN_00484230 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484230(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992bf0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000484480 00484480_FUN_00484480 ====
void FUN_00484480(void);

// decompiled by BatchDecomp @ 00484480 name=FUN_00484480 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484480(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992c50 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000484540 00484540_FUN_00484540 ====
void FUN_00484540(void);

// decompiled by BatchDecomp @ 00484540 name=FUN_00484540 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484540(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992c90 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000484920 00484920_FUN_00484920 ====
void FUN_00484920(void);

// decompiled by BatchDecomp @ 00484920 name=FUN_00484920 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484920(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992d30 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000484d00 00484d00_FUN_00484d00 ====
void FUN_00484d00(void);

// decompiled by BatchDecomp @ 00484d00 name=FUN_00484d00 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00484d00(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992dc8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004850e0 004850e0_FUN_004850e0 ====
void FUN_004850e0(void);

// decompiled by BatchDecomp @ 004850e0 name=FUN_004850e0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004850e0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992e60 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000485540 00485540_FUN_00485540 ====
void FUN_00485540(void);

// decompiled by BatchDecomp @ 00485540 name=FUN_00485540 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485540(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992ed8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000485790 00485790_FUN_00485790 ====
void FUN_00485790(void);

// decompiled by BatchDecomp @ 00485790 name=FUN_00485790 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485790(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992f58 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000485b70 00485b70_FUN_00485b70 ====
void FUN_00485b70(void);

// decompiled by BatchDecomp @ 00485b70 name=FUN_00485b70 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485b70(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00992fd0 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000485dc0 00485dc0_FUN_00485dc0 ====
void FUN_00485dc0(void);

// decompiled by BatchDecomp @ 00485dc0 name=FUN_00485dc0 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00485dc0(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993030 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000486020 00486020_FUN_00486020 ====
void FUN_00486020(void);

// decompiled by BatchDecomp @ 00486020 name=FUN_00486020 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486020(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993090 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000486270 00486270_FUN_00486270 ====
void FUN_00486270(void);

// decompiled by BatchDecomp @ 00486270 name=FUN_00486270 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486270(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993110 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000486650 00486650_FUN_00486650 ====
void FUN_00486650(void);

// decompiled by BatchDecomp @ 00486650 name=FUN_00486650 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486650(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009931a8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000486a30 00486a30_FUN_00486a30 ====
void FUN_00486a30(void);

// decompiled by BatchDecomp @ 00486a30 name=FUN_00486a30 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486a30(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_00993248 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 0000486e10 00486e10_FUN_00486e10 ====
void FUN_00486e10(void);

// decompiled by BatchDecomp @ 00486e10 name=FUN_00486e10 conv=unknown body=51

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00486e10(void)

{
  double dVar1;
  
  dVar1 = /*4000000000000000*/2.0;
  dVar1 = libm_sse2_sqrt_precise(dVar1);
  _DAT_009932c8 = /*400921fb54442d18*/3.141592653589793 / (dVar1 * /*4008000000000000*/3.0);
  return;
}


//==== 00004886b0 004886b0_FUN_004886b0 ====
void __fastcall FUN_004886b0(int param_1,void *param_2,size_t param_3);

// decompiled by BatchDecomp @ 004886b0 name=FUN_004886b0 conv=unknown body=56

void __fastcall FUN_004886b0(int param_1,void *param_2,size_t param_3)

{
  if (*(FILE **)(param_1 + 0x10) != (FILE *)0x0) {
    fread(param_2,1,param_3,*(FILE **)(param_1 + 0x10));
    return;
  }
  memcpy(param_2,*(undefined4 *)(param_1 + 0x14),param_3);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_3;
  return;
}


//==== 000048aa30 0048aa30_FUN_0048aa30 ====
int FUN_0048aa30(int param_1,int param_2,undefined4 param_3,int param_4,int param_5);

// decompiled by BatchDecomp @ 0048aa30 name=FUN_0048aa30 conv=unknown body=59

int FUN_0048aa30(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  if (0 < param_4) {
    do {
      iVar1 = 0;
      if (0 < param_5) {
        do {
          *(undefined1 *)(iVar3 + iVar1) = *(undefined1 *)(iVar2 + param_2);
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_5);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + param_5;
    } while (iVar2 < param_4);
  }
  return param_1;
}


//==== 000048b3a0 0048b3a0_FUN_0048b3a0 ====
void __fastcall FUN_0048b3a0(undefined4 *param_1);

// decompiled by BatchDecomp @ 0048b3a0 name=FUN_0048b3a0 conv=unknown body=58

void __fastcall FUN_0048b3a0(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1[3];
  iVar4 = param_1[2];
  do {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 < (byte *)param_1[1]) {
      bVar1 = *pbVar2;
      *param_1 = pbVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      uVar3 = 0;
    }
    iVar5 = iVar4 + 8;
    uVar6 = uVar6 | uVar3 << ((byte)iVar4 & 0x1f);
    param_1[2] = iVar5;
    param_1[3] = uVar6;
    iVar4 = iVar5;
  } while (iVar5 < 0x19);
  return;
}


//==== 000048d660 0048d660_FUN_0048d660 ====
uint __fastcall FUN_0048d660(uint param_1);

// decompiled by BatchDecomp @ 0048d660 name=FUN_0048d660 conv=unknown body=67

uint __fastcall FUN_0048d660(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 >> 1 & 0x55555555) + (param_1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4) + uVar1 & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return (uVar1 >> 0x10) + uVar1 & 0xff;
}


//==== 000048d6b0 0048d6b0_FUN_0048d6b0 ====
int __fastcall FUN_0048d6b0(int param_1,int param_2,int param_3);

// decompiled by BatchDecomp @ 0048d6b0 name=FUN_0048d6b0 conv=unknown body=54

int __fastcall FUN_0048d6b0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0) {
    param_1 = param_1 << (-(byte)param_2 & 0x1f);
  }
  else {
    param_1 = param_1 >> ((byte)param_2 & 0x1f);
  }
  iVar2 = param_3;
  iVar3 = param_1;
  if (param_3 < 8) {
    do {
      bVar1 = (byte)iVar2;
      iVar2 = iVar2 + param_3;
      iVar3 = iVar3 + (param_1 >> (bVar1 & 0x1f));
    } while (iVar2 < 8);
  }
  return iVar3;
}


//==== 000048ee30 0048ee30_stbi_hdr_test_file ====
extern undefined4 FUN_0048edd0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0048ee30 name=stbi_hdr_test_file conv=__cdecl body=55

/* stbi_hdr_test_file */

undefined4 __cdecl stbi_hdr_test_file(void)

{
  long _Offset;
  undefined4 uVar1;
  FILE *in_ECX;
  
  _Offset = ftell(in_ECX);
  uVar1 = FUN_0048edd0();
  fseek(in_ECX,_Offset,0);
  return uVar1;
}


//==== 0000492380 00492380__vector_destructor_iterator_ ====
// decompiled by BatchDecomp @ 00492380 name=`vector_destructor_iterator' conv=__stdcall body=51

/* void __stdcall `vector destructor iterator'(void *,unsigned int,unsigned int,void
   (__thiscall*)(void *)) */

void _vector_destructor_iterator_
               (void *param_1,uint param_2,uint param_3,_func_void_void_ptr *param_4)

{
  void *unaff_EDI;
  
  if (param_3 != 0) {
    do {
      (*param_4)(unaff_EDI);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}


//==== 00004fceb0 004fceb0_Back ====
#undef PauseMenu /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 004fceb0 name=Back conv=__thiscall body=74

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall PauseMenuHandler__Back(void) */

void __thiscall PauseMenuHandler__Back(PauseMenuHandler *this)

{
  if (((this->PauseMenu).Pointer != (UIWidget *)0x0) &&
     ((this->PauseMenu).Controller != (ReferenceController *)0x0)) {
    if (((char)this[1]._pad_0x0_0 != '\0') && (*(char *)((int)&this[1]._pad_0x0_0 + 1) == '\0')) {
      Clear(this);
      Open(this);
      *(undefined1 *)&this[1]._pad_0x0_0 = 0;
      return;
    }
    Clear(this);
  }
  *(undefined1 *)&this[1]._pad_0x0_0 = 0;
  return;
}


//==== 000058b050 0058b050_RenderSimple ====
// decompiled by BatchDecomp @ 0058b050 name=RenderSimple conv=__thiscall body=65

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ModuleDesignManager__RenderSimple(void)const  */

void __thiscall ModuleDesignManager__RenderSimple(ModuleDesignManager *this)

{
  UIWidget *pUVar1;
  bool bVar2;
  
  if (((this->MessageBoxA).Parent != (Manager *)0x0) &&
     (pUVar1 = (this->MessageBoxA).MessageBoxA.Pointer, pUVar1 != (UIWidget *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)pUVar1);
    if (bVar2) {
      pUVar1 = (this->MessageBoxA).MessageBoxA.Pointer;
      if (pUVar1 != (UIWidget *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)pUVar1);
        if (!bVar2) {
          (this->MessageBoxA).Parent = (Manager *)0x0;
        }
      }
      ObjectViewer__RenderSimple((ObjectViewer *)(this->MessageBoxA).Parent);
      return;
    }
  }
  return;
}


//==== 00005e348d 005e348d_FUN_005e348d ====
float10 FUN_005e348d(void);

// decompiled by BatchDecomp @ 005e348d name=FUN_005e348d conv=unknown body=60

float10 FUN_005e348d(void)

{
  Material *this;
  int unaff_EBP;
  int unaff_ESI;
  double in_XMM1_Qa;
  double dVar1;
  
  dVar1 = Physics__GetBlackbodyRadiationPeakWavelength_nm(in_XMM1_Qa);
  this = *(Material **)(unaff_ESI + 0x110);
  *(double *)(unaff_EBP + 8) = dVar1;
  if (this == (Material *)0x0) {
    this = *(Material **)(unaff_ESI + 0xd4);
  }
  dVar1 = Material__GetEmissivityCoefficient(this,*(double *)(unaff_EBP + 8));
  return (float10)dVar1;
}


//==== 000062cd10 0062cd10_IsOverheated ====
// decompiled by BatchDecomp @ 0062cd10 name=IsOverheated conv=__thiscall body=52

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall CoilgunCompartment__IsOverheated(void)const  */

bool __thiscall CoilgunCompartment__IsOverheated(CoilgunCompartment *this)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  iVar1 = this->_pad_0x0_0;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x28))();
  dVar3 = Material__GetSafeUseTemperature_K(*(Material **)(iVar1 + 0x160));
  return dVar3 <= (double)fVar2;
}


//==== 00006302b0 006302b0_Tick ====
// decompiled by BatchDecomp @ 006302b0 name=Tick conv=__thiscall body=80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ConventionalGunCompartment__Tick(double) */

void __thiscall ConventionalGunCompartment__Tick(ConventionalGunCompartment *this,double param_1)

{
  double dVar1;
  double dVar2;
  
  WeaponCompartment__Tick((WeaponCompartment *)this,param_1);
  dVar1 = *(double *)&this->_pad_0x0_0;
  dVar2 = BarrelArmorSubModule__GetBarrelRadiantCooling_W((BarrelArmorSubModule *)(this->_pad_0x0_0 + 0x198));
  dVar1 = dVar1 - dVar2 * param_1;
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  *(double *)&this->_pad_0x0_0 = dVar2;
  return;
}


//==== 0000636640 00636640_IsOverheated ====
// decompiled by BatchDecomp @ 00636640 name=IsOverheated conv=__thiscall body=52

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ConventionalGunCompartment__IsOverheated(void)const  */

bool __thiscall ConventionalGunCompartment__IsOverheated(ConventionalGunCompartment *this)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  iVar1 = this->_pad_0x0_0;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x28))();
  dVar3 = Material__GetSafeUseTemperature_K(*(Material **)(iVar1 + 0x168));
  return dVar3 <= (double)fVar2;
}


//==== 000064cb00 0064cb00_EndOfSessionResolution ====
// decompiled by BatchDecomp @ 0064cb00 name=EndOfSessionResolution conv=__thiscall body=71

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall LauncherSubCompartment__EndOfSessionResolution(void) */

bool __thiscall LauncherSubCompartment__EndOfSessionResolution(LauncherSubCompartment *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)this->Parent->_pad_0x0_0 + 0x188))();
  if (iVar3 != 0) {
    cVar1 = (**(code **)(*(int *)this->Parent + 0x18))();
    if (cVar1 == '\0') {
      bVar2 = LaunchOnce(this,0.0,true,(Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)0x0);
      return !bVar2;
    }
  }
  return true;
}


//==== 00006550f0 006550f0_IsOverheated ====
// decompiled by BatchDecomp @ 006550f0 name=IsOverheated conv=__thiscall body=52

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall RailgunCompartment__IsOverheated(void)const  */

bool __thiscall RailgunCompartment__IsOverheated(RailgunCompartment *this)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  
  iVar1 = this->_pad_0x0_0;
  fVar2 = (float10)(**(code **)(*(int *)this + 0x28))();
  dVar3 = Material__GetSafeUseTemperature_K(*(Material **)(iVar1 + 0x128));
  return dVar3 <= (double)fVar2;
}


//==== 0000657ad0 00657ad0_Tick ====
// decompiled by BatchDecomp @ 00657ad0 name=Tick conv=__thiscall body=80

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RailgunCompartment__Tick(double) */

void __thiscall RailgunCompartment__Tick(RailgunCompartment *this,double param_1)

{
  double dVar1;
  double dVar2;
  
  WeaponCompartment__Tick((WeaponCompartment *)this,param_1);
  dVar1 = *(double *)&this->_pad_0x0_0;
  dVar2 = BarrelArmorSubModule__GetBarrelRadiantCooling_W((BarrelArmorSubModule *)(this->_pad_0x0_0 + 0x148));
  dVar1 = dVar1 - dVar2 * param_1;
  dVar2 = 0.0;
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  *(double *)&this->_pad_0x0_0 = dVar2;
  return;
}


//==== 00006afd70 006afd70_RenderSimple ====
// decompiled by BatchDecomp @ 006afd70 name=RenderSimple conv=__thiscall body=59

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall ShipDesignManager__RenderSimple(void)const  */

void __thiscall ShipDesignManager__RenderSimple(ShipDesignManager *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  if (((this->ShipCategoryList).Pointer != (UISelectListBox_L_ShipClass_G_ *)0x0) &&
     (pRVar1 = (this->ShipCategoryList).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      pRVar1 = (this->ShipCategoryList).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          (this->ShipCategoryList).Pointer = (UISelectListBox_L_ShipClass_G_ *)0x0;
        }
      }
      ObjectViewer__RenderSimple((ObjectViewer *)(this->ShipCategoryList).Pointer);
      return;
    }
  }
  return;
}


//==== 000070ba30 0070ba30_GetReferenceIrradiance ====
// decompiled by BatchDecomp @ 0070ba30 name=GetReferenceIrradiance conv=__thiscall body=78

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall MainManager__GetReferenceIrradiance(void)const  */

double __thiscall MainManager__GetReferenceIrradiance(MainManager *this)

{
  bool bVar1;
  Level *this_00;
  CelestialBody *this_01;
  double dVar2;
  
  bVar1 = ScenarioEditor__IsOpen((ScenarioEditor *)(this->Editor).Parent);
  if (bVar1) {
    bVar1 = ScenarioEditor__IsOpen((ScenarioEditor *)(this->Editor).Parent);
    if (bVar1) {
      dVar2 = ScenarioEditor__GetReferenceIrradiance_W__m2((ScenarioEditor *)(this->Editor).Parent);
      return dVar2;
    }
  }
  else {
    this_00 = BriefingsHandler__GetLevel((this->Briefings).Pointer);
    if (this_00 != (Level *)0x0) {
      this_01 = Level__GetImportantBody(this_00);
      if (this_01 != (CelestialBody *)0x0) {
        dVar2 = CelestialBody__GetAverageIrradianceFromIlluminator_W__m2(this_01);
        return dVar2 / /*4024000000000000*/10.0;
      }
    }
  }
  return 1.0;
}


//==== 00007450d0 007450d0_IsValid ====
// decompiled by BatchDecomp @ 007450d0 name=IsValid conv=__thiscall body=65

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall ItineraryNode__IsValid(void)const  */

bool __thiscall ItineraryNode__IsValid(ItineraryNode *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  if (((this->Parent).Pointer != (Fleet *)0x0) &&
     (pRVar1 = (this->Parent).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      pRVar1 = (this->Parent).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          (this->Parent).Pointer = (Fleet *)0x0;
        }
      }
      bVar2 = Fleet__HasMission((this->Parent).Pointer);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}


//==== 00007a0ac0 007a0ac0_IsPopupVisible ====
// decompiled by BatchDecomp @ 007a0ac0 name=IsPopupVisible conv=__thiscall body=71

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall BalloonPopupNodePayload__IsPopupVisible(void)const  */

bool __thiscall BalloonPopupNodePayload__IsPopupVisible(BalloonPopupNodePayload *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  if (((this->Node).Parent.Pointer != (Fleet *)0x0) &&
     (pRVar1 = (this->Node).Parent.Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar2) {
      pRVar1 = (this->Node).Parent.Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar2) {
          (this->Node).Parent.Pointer = (Fleet *)0x0;
        }
      }
      bVar2 = StrategicManager__IsNotInScreenshotMode(((this->Node).Parent.Pointer)->ParentStrategic);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}


//==== 00007a9040 007a9040_NodeMouseOver ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 007a9040 name=NodeMouseOver conv=__thiscall body=58

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall NodeMouseOver__NodeMouseOver(struct NodeMouseOver const &) */

NodeMouseOver * __thiscall NodeMouseOver__NodeMouseOver(NodeMouseOver *this,NodeMouseOver *param_1)

{
  ItineraryNode__ItineraryNode(&this->LastNode,&param_1->LastNode);
  ItineraryNode__ItineraryNode(&this->NextNode,&param_1->NextNode);
  this->t = param_1->t;
  return this;
}


//==== 00007aab90 007aab90_IsEnabled ====
// decompiled by BatchDecomp @ 007aab90 name=IsEnabled conv=__thiscall body=76

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall CelestialObjectUIButton__IsEnabled(void)const  */

bool __thiscall CelestialObjectUIButton__IsEnabled(CelestialObjectUIButton *this)

{
  ReferenceController *this_00;
  CelestialObject *this_01;
  bool bVar1;
  
  this_00 = (this->Object).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->Object).Pointer = (CelestialObject *)0x0;
    }
  }
  this_01 = (this->Object).Pointer;
  (**(code **)(*(int *)this + 0xd0))();
  CelestialObject__GetOrbitedObject(this_01);
  bVar1 = GhostedUIButton__IsScreenDistanceToObjectUnobscured((GhostedUIButton *)this);
  return bVar1;
}


//==== 00007c3290 007c3290_GetCrossSection_m2 ====
// decompiled by BatchDecomp @ 007c3290 name=GetCrossSection_m2 conv=__thiscall body=82

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall
   DebrisComponent__GetCrossSection_m2(void)const  */

Maybe_L_double_G_ * __thiscall
DebrisComponent__GetCrossSection_m2(DebrisComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  ModuleCompartment *this_00;
  double dVar2;
  
  this_00 = (this->Compartment).Pointer;
  ModuleCompartment__GetBoundingSphereRadius_m_Memoize(this_00);
  if ((this_00->GetBoundingSphereRadius_m_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = (this_00->GetBoundingSphereRadius_m_MemoizedValue).Data * /*400921fb54442d18*/3.141592653589793;
  dVar1 = (this_00->GetBoundingSphereRadius_m_MemoizedValue).Data;
  __return_storage_ptr__->IsValidData = true;
  __return_storage_ptr__->Data = dVar2 * dVar1;
  return __return_storage_ptr__;
}


//==== 00007c3350 007c3350_GetRadius_km ====
// decompiled by BatchDecomp @ 007c3350 name=GetRadius_km conv=__thiscall body=77

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual class util__Maybe_L_double_G_ __thiscall DebrisComponent__GetRadius_km(void)const  */

Maybe_L_double_G_ * __thiscall
DebrisComponent__GetRadius_km(DebrisComponent *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  ModuleCompartment *this_00;
  double dVar1;
  
  this_00 = (this->Compartment).Pointer;
  ModuleCompartment__GetBoundingSphereRadius_m_Memoize(this_00);
  if ((this_00->GetBoundingSphereRadius_m_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar1 = (this_00->GetBoundingSphereRadius_m_MemoizedValue).Data / /*408f400000000000*/1000.0;
  __return_storage_ptr__->IsValidData = true;
  __return_storage_ptr__->Data = dVar1;
  return __return_storage_ptr__;
}


//==== 00007c5720 007c5720_ForceStartCountdown ====
// decompiled by BatchDecomp @ 007c5720 name=ForceStartCountdown conv=__thiscall body=69

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall UntrackComponent__ForceStartCountdown(void) */

void __thiscall UntrackComponent__ForceStartCountdown(UntrackComponent *this)

{
  int iVar1;
  undefined8 uStack_c;
  undefined4 uStack_8;
  
  iVar1 = rand();
  ((slice_view *)&uStack_c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_c)->_1_3_[0] | (((slice_view *)&uStack_c)->_1_3_[1] << 8) | (((slice_view *)&uStack_c)->_1_3_[2] << 16)) << 8));
  (this->Countdown_s).Data =
       (double)iVar1 * /*3f00000000000000*/3.0517578125e-05 * /*3fefae147ae147ae*/0.99 + /*3f847ae147ae147b*/0.01;
  *(undefined4 *)&(this->Countdown_s).IsValidData = uStack_c;
  *(undefined4 *)((char *)&(this->Countdown_s) + 0xc) = uStack_8;
  return;
}


//==== 00008184d0 008184d0_GetModuleType ====
// decompiled by BatchDecomp @ 008184d0 name=GetModuleType conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: class Module const * __thiscall ModuleUI__GetModuleType(void)const  */

Module * __thiscall ModuleUI__GetModuleType(ModuleUI *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  Module *pMVar3;
  
  pMVar3 = this->ModuleType;
  if (pMVar3 == (Module *)0x0) {
    if (((this->TargetCompartment).Pointer != (ModuleCompartment *)0x0) &&
       (pRVar1 = (this->TargetCompartment).Controller, pRVar1 != (ReferenceController *)0x0)) {
      bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (bVar2) {
        pRVar1 = (this->TargetCompartment).Controller;
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar2) {
            (this->TargetCompartment).Pointer = (ModuleCompartment *)0x0;
          }
        }
        return *(Module **)&((this->TargetCompartment).Pointer)->LostPower;
      }
    }
    pMVar3 = (Module *)0x0;
  }
  return pMVar3;
}


//==== 000081ad50 0081ad50_IsEnabled ====
// decompiled by BatchDecomp @ 0081ad50 name=IsEnabled conv=__thiscall body=73

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall CompartmentButton__IsEnabled(void)const  */

bool __thiscall CompartmentButton__IsEnabled(CompartmentButton *this)

{
  SpacecraftComponent *pSVar1;
  bool bVar2;
  int iVar3;
  ReferenceController *pRVar4;
  
  pRVar4 = (this->Ship).Controller;
  if (pRVar4 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
    if (!bVar2) {
      (this->Ship).Pointer = (SpacecraftComponent *)0x0;
    }
  }
  pSVar1 = (this->Ship).Pointer;
  iVar3 = pSVar1->_pad_0x0_0;
  pRVar4 = (ReferenceController *)pSVar1->_pad_0x0_0;
  if (pRVar4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar4);
  }
  bVar2 = TacticalManager__IsOnlyBodySelected((TacticalManager *)this->_pad_0x0_0,iVar3,pRVar4);
  return bVar2;
}


//==== 0000821420 00821420_Tick ====
// decompiled by BatchDecomp @ 00821420 name=Tick conv=__thiscall body=75

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall CompartmentButton__Tick(double) */

void __thiscall CompartmentButton__Tick(CompartmentButton *this,double param_1)

{
  bool bVar1;
  
  bVar1 = ShouldDrawCrosshairs(this);
  if (bVar1 != this->WasLastDrawingCrosshairs) {
    UIZoomCrosshairs__Reset(&this->Zoom);
    this->WasLastDrawingCrosshairs = bVar1;
    return;
  }
  UIZoomCrosshairs__Tick(&this->Zoom,param_1);
  this->WasLastDrawingCrosshairs = bVar1;
  return;
}


//==== 0000821f20 00821f20_IsActionVisible ====
// decompiled by BatchDecomp @ 00821f20 name=IsActionVisible conv=__thiscall body=55

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall BalloonPopupCombatPayload__IsActionVisible(void)const  */

bool __thiscall BalloonPopupCombatPayload__IsActionVisible(BalloonPopupCombatPayload *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  if ((((this->Spacecraft).Pointer != (SpacecraftComponent *)0x0) &&
      (pRVar1 = (this->Spacecraft).Controller, pRVar1 != (ReferenceController *)0x0)) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), bVar2)) {
    return true;
  }
  if ((((this->System).Pointer != (ModuleCompartment *)0x0) &&
      (pRVar1 = (this->System).Controller, pRVar1 != (ReferenceController *)0x0)) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), bVar2)) {
    return true;
  }
  return false;
}


//==== 00008235c0 008235c0_Click ====
// decompiled by BatchDecomp @ 008235c0 name=Click conv=__thiscall body=67

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall OrderButton__Click(void) */

void __thiscall OrderButton__Click(OrderButton *this)

{
  TacticalManager *pTVar1;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar2;
  Interface *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[16];
  
  pTVar1 = (TacticalManager *)this->_pad_0x0_0;
  pDVar2 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)GetShips(this);
  ChangeOrder(pTVar1,this->OrderButtonType,pDVar2);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
  this_00 = Manager__GetInterfacer((Manager *)this->_pad_0x0_0);
  Interface__KillPopup(this_00);
  return;
}


//==== 00008308e0 008308e0_RequestRebuildOfModules ====
// decompiled by BatchDecomp @ 008308e0 name=RequestRebuildOfModules conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall HUDTactical__RequestRebuildOfModules(void) */

void __thiscall HUDTactical__RequestRebuildOfModules(HUDTactical *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  pRVar1 = (this->SpacecraftUI).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->SpacecraftUI).Pointer = (SpacecraftUIOverlay *)0x0;
    }
  }
  SpacecraftUIOverlay__RequestRegenerate((this->SpacecraftUI).Pointer);
  pRVar1 = (this->ModuleUI).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->ModuleUI).Pointer = (SpacecraftCompartmentUI *)0x0;
    }
  }
  SpacecraftCompartmentUI__RequestRegenerate((this->ModuleUI).Pointer);
  return;
}


//==== 0000846e10 00846e10_FUN_00846e10 ====
undefined4 FUN_00846e10(int param_1,char *param_2);

// decompiled by BatchDecomp @ 00846e10 name=FUN_00846e10 conv=unknown body=57

undefined4 FUN_00846e10(int param_1,char *param_2)

{
  char cVar1;
  
  param_1 = param_1 - (int)param_2;
  while( true ) {
    cVar1 = param_2[param_1];
    if ((cVar1 == '\0') && (*param_2 == '\0')) {
      return 0;
    }
    if (*param_2 < cVar1) {
      return 1;
    }
    if (cVar1 < *param_2) break;
    param_2 = param_2 + 1;
  }
  return 0xffffffff;
}


//==== 0000846fb0 00846fb0_FUN_00846fb0 ====
undefined4 FUN_00846fb0(void);

// decompiled by BatchDecomp @ 00846fb0 name=FUN_00846fb0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00846fb0(void)

{
  bool bVar1;
  
  ____glewMultiDrawArraysIndirectAMD = wglGetProcAddress("glMultiDrawArraysIndirectAMD");
  bVar1 = ____glewMultiDrawArraysIndirectAMD != (PROC)0x0;
  ____glewMultiDrawElementsIndirectAMD = wglGetProcAddress("glMultiDrawElementsIndirectAMD");
  if ((____glewMultiDrawElementsIndirectAMD != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000846ff0 00846ff0_FUN_00846ff0 ====
undefined4 FUN_00846ff0(void);

// decompiled by BatchDecomp @ 00846ff0 name=FUN_00846ff0 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00846ff0(void)

{
  bool bVar1;
  
  ____glewDeleteNamesAMD = wglGetProcAddress("glDeleteNamesAMD");
  bVar1 = ____glewDeleteNamesAMD == (PROC)0x0;
  ____glewGenNamesAMD = wglGetProcAddress("glGenNamesAMD");
  if ((____glewGenNamesAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsNameAMD = wglGetProcAddress("glIsNameAMD");
  if ((____glewIsNameAMD != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847180 00847180_FUN_00847180 ====
undefined4 FUN_00847180(void);

// decompiled by BatchDecomp @ 00847180 name=FUN_00847180 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847180(void)

{
  bool bVar1;
  
  ____glewTexStorageSparseAMD = wglGetProcAddress("glTexStorageSparseAMD");
  bVar1 = ____glewTexStorageSparseAMD != (PROC)0x0;
  ____glewTextureStorageSparseAMD = wglGetProcAddress("glTextureStorageSparseAMD");
  if ((____glewTextureStorageSparseAMD != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008471e0 008471e0_FUN_008471e0 ====
undefined4 FUN_008471e0(void);

// decompiled by BatchDecomp @ 008471e0 name=FUN_008471e0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008471e0(void)

{
  bool bVar1;
  
  ____glewTessellationFactorAMD = wglGetProcAddress("glTessellationFactorAMD");
  bVar1 = ____glewTessellationFactorAMD != (PROC)0x0;
  ____glewTessellationModeAMD = wglGetProcAddress("glTessellationModeAMD");
  if ((____glewTessellationModeAMD != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847510 00847510_FUN_00847510 ====
undefined4 FUN_00847510(void);

// decompiled by BatchDecomp @ 00847510 name=FUN_00847510 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847510(void)

{
  bool bVar1;
  
  ____glewBufferParameteriAPPLE = wglGetProcAddress("glBufferParameteriAPPLE");
  bVar1 = ____glewBufferParameteriAPPLE != (PROC)0x0;
  ____glewFlushMappedBufferRangeAPPLE = wglGetProcAddress("glFlushMappedBufferRangeAPPLE");
  if ((____glewFlushMappedBufferRangeAPPLE != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847550 00847550_FUN_00847550 ====
undefined4 FUN_00847550(void);

// decompiled by BatchDecomp @ 00847550 name=FUN_00847550 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847550(void)

{
  bool bVar1;
  
  ____glewGetObjectParameterivAPPLE = wglGetProcAddress("glGetObjectParameterivAPPLE");
  bVar1 = ____glewGetObjectParameterivAPPLE == (PROC)0x0;
  ____glewObjectPurgeableAPPLE = wglGetProcAddress("glObjectPurgeableAPPLE");
  if ((____glewObjectPurgeableAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewObjectUnpurgeableAPPLE = wglGetProcAddress("glObjectUnpurgeableAPPLE");
  if ((____glewObjectUnpurgeableAPPLE != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008475a0 008475a0_FUN_008475a0 ====
undefined4 FUN_008475a0(void);

// decompiled by BatchDecomp @ 008475a0 name=FUN_008475a0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008475a0(void)

{
  bool bVar1;
  
  ____glewGetTexParameterPointervAPPLE = wglGetProcAddress("glGetTexParameterPointervAPPLE");
  bVar1 = ____glewGetTexParameterPointervAPPLE != (PROC)0x0;
  ____glewTextureRangeAPPLE = wglGetProcAddress("glTextureRangeAPPLE");
  if ((____glewTextureRangeAPPLE != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847650 00847650_FUN_00847650 ====
undefined4 FUN_00847650(void);

// decompiled by BatchDecomp @ 00847650 name=FUN_00847650 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847650(void)

{
  bool bVar1;
  
  ____glewFlushVertexArrayRangeAPPLE = wglGetProcAddress("glFlushVertexArrayRangeAPPLE");
  bVar1 = ____glewFlushVertexArrayRangeAPPLE == (PROC)0x0;
  ____glewVertexArrayParameteriAPPLE = wglGetProcAddress("glVertexArrayParameteriAPPLE");
  if ((____glewVertexArrayParameteriAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayRangeAPPLE = wglGetProcAddress("glVertexArrayRangeAPPLE");
  if ((____glewVertexArrayRangeAPPLE != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847810 00847810_FUN_00847810 ====
undefined4 FUN_00847810(void);

// decompiled by BatchDecomp @ 00847810 name=FUN_00847810 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847810(void)

{
  bool bVar1;
  
  ____glewDrawArraysInstancedBaseInstance = wglGetProcAddress("glDrawArraysInstancedBaseInstance");
  bVar1 = ____glewDrawArraysInstancedBaseInstance == (PROC)0x0;
  ____glewDrawElementsInstancedBaseInstance =
       wglGetProcAddress("glDrawElementsInstancedBaseInstance");
  if ((____glewDrawElementsInstancedBaseInstance == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDrawElementsInstancedBaseVertexBaseInstance =
       wglGetProcAddress("glDrawElementsInstancedBaseVertexBaseInstance");
  if ((____glewDrawElementsInstancedBaseVertexBaseInstance != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008479d0 008479d0_FUN_008479d0 ====
undefined4 FUN_008479d0(void);

// decompiled by BatchDecomp @ 008479d0 name=FUN_008479d0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008479d0(void)

{
  bool bVar1;
  
  ____glewBindFragDataLocationIndexed = wglGetProcAddress("glBindFragDataLocationIndexed");
  bVar1 = ____glewBindFragDataLocationIndexed != (PROC)0x0;
  ____glewGetFragDataIndex = wglGetProcAddress("glGetFragDataIndex");
  if ((____glewGetFragDataIndex != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847a10 00847a10_FUN_00847a10 ====
undefined4 FUN_00847a10(void);

// decompiled by BatchDecomp @ 00847a10 name=FUN_00847a10 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847a10(void)

{
  bool bVar1;
  
  ____glewBufferStorage = wglGetProcAddress("glBufferStorage");
  bVar1 = ____glewBufferStorage != (PROC)0x0;
  ____glewNamedBufferStorageEXT = wglGetProcAddress("glNamedBufferStorageEXT");
  if ((____glewNamedBufferStorageEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847ae0 00847ae0_FUN_00847ae0 ====
undefined4 FUN_00847ae0(void);

// decompiled by BatchDecomp @ 00847ae0 name=FUN_00847ae0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847ae0(void)

{
  bool bVar1;
  
  ____glewClearTexImage = wglGetProcAddress("glClearTexImage");
  bVar1 = ____glewClearTexImage != (PROC)0x0;
  ____glewClearTexSubImage = wglGetProcAddress("glClearTexSubImage");
  if ((____glewClearTexSubImage != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847b60 00847b60_FUN_00847b60 ====
undefined4 FUN_00847b60(void);

// decompiled by BatchDecomp @ 00847b60 name=FUN_00847b60 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847b60(void)

{
  bool bVar1;
  
  ____glewDispatchCompute = wglGetProcAddress("glDispatchCompute");
  bVar1 = ____glewDispatchCompute != (PROC)0x0;
  ____glewDispatchComputeIndirect = wglGetProcAddress("glDispatchComputeIndirect");
  if ((____glewDispatchComputeIndirect != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008485e0 008485e0_FUN_008485e0 ====
undefined4 FUN_008485e0(void);

// decompiled by BatchDecomp @ 008485e0 name=FUN_008485e0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008485e0(void)

{
  bool bVar1;
  
  ____glewDrawArraysIndirect = wglGetProcAddress("glDrawArraysIndirect");
  bVar1 = ____glewDrawArraysIndirect != (PROC)0x0;
  ____glewDrawElementsIndirect = wglGetProcAddress("glDrawElementsIndirect");
  if ((____glewDrawElementsIndirect != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008488d0 008488d0_FUN_008488d0 ====
undefined4 FUN_008488d0(void);

// decompiled by BatchDecomp @ 008488d0 name=FUN_008488d0 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008488d0(void)

{
  bool bVar1;
  
  ____glewGetProgramBinary = wglGetProcAddress("glGetProgramBinary");
  bVar1 = ____glewGetProgramBinary == (PROC)0x0;
  ____glewProgramBinary = wglGetProcAddress("glProgramBinary");
  if ((____glewProgramBinary == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameteri = wglGetProcAddress("glProgramParameteri");
  if ((____glewProgramParameteri != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000848920 00848920_FUN_00848920 ====
undefined4 FUN_00848920(void);

// decompiled by BatchDecomp @ 00848920 name=FUN_00848920 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848920(void)

{
  bool bVar1;
  
  ____glewGetCompressedTextureSubImage = wglGetProcAddress("glGetCompressedTextureSubImage");
  bVar1 = ____glewGetCompressedTextureSubImage != (PROC)0x0;
  ____glewGetTextureSubImage = wglGetProcAddress("glGetTextureSubImage");
  if ((____glewGetTextureSubImage != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849150 00849150_FUN_00849150 ====
undefined4 FUN_00849150(void);

// decompiled by BatchDecomp @ 00849150 name=FUN_00849150 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849150(void)

{
  bool bVar1;
  
  ____glewMultiDrawArraysIndirectCountARB = wglGetProcAddress("glMultiDrawArraysIndirectCountARB");
  bVar1 = ____glewMultiDrawArraysIndirectCountARB != (PROC)0x0;
  ____glewMultiDrawElementsIndirectCountARB =
       wglGetProcAddress("glMultiDrawElementsIndirectCountARB");
  if ((____glewMultiDrawElementsIndirectCountARB != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849190 00849190_FUN_00849190 ====
undefined4 FUN_00849190(void);

// decompiled by BatchDecomp @ 00849190 name=FUN_00849190 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849190(void)

{
  bool bVar1;
  
  ____glewDrawArraysInstancedARB = wglGetProcAddress("glDrawArraysInstancedARB");
  bVar1 = ____glewDrawArraysInstancedARB == (PROC)0x0;
  ____glewDrawElementsInstancedARB = wglGetProcAddress("glDrawElementsInstancedARB");
  if ((____glewDrawElementsInstancedARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribDivisorARB = wglGetProcAddress("glVertexAttribDivisorARB");
  if ((____glewVertexAttribDivisorARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008492b0 008492b0_FUN_008492b0 ====
undefined4 FUN_008492b0(void);

// decompiled by BatchDecomp @ 008492b0 name=FUN_008492b0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008492b0(void)

{
  bool bVar1;
  
  ____glewFlushMappedBufferRange = wglGetProcAddress("glFlushMappedBufferRange");
  bVar1 = ____glewFlushMappedBufferRange != (PROC)0x0;
  ____glewMapBufferRange = wglGetProcAddress("glMapBufferRange");
  if ((____glewMapBufferRange != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849400 00849400_FUN_00849400 ====
undefined4 FUN_00849400(void);

// decompiled by BatchDecomp @ 00849400 name=FUN_00849400 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849400(void)

{
  bool bVar1;
  
  ____glewMultiDrawArraysIndirect = wglGetProcAddress("glMultiDrawArraysIndirect");
  bVar1 = ____glewMultiDrawArraysIndirect != (PROC)0x0;
  ____glewMultiDrawElementsIndirect = wglGetProcAddress("glMultiDrawElementsIndirect");
  if ((____glewMultiDrawElementsIndirect != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849840 00849840_FUN_00849840 ====
undefined4 FUN_00849840(void);

// decompiled by BatchDecomp @ 00849840 name=FUN_00849840 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849840(void)

{
  bool bVar1;
  
  ____glewPointParameterfARB = wglGetProcAddress("glPointParameterfARB");
  bVar1 = ____glewPointParameterfARB != (PROC)0x0;
  ____glewPointParameterfvARB = wglGetProcAddress("glPointParameterfvARB");
  if ((____glewPointParameterfvARB != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849b00 00849b00_FUN_00849b00 ====
undefined4 FUN_00849b00(void);

// decompiled by BatchDecomp @ 00849b00 name=FUN_00849b00 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849b00(void)

{
  bool bVar1;
  
  ____glewFramebufferSampleLocationsfvARB = wglGetProcAddress("glFramebufferSampleLocationsfvARB");
  bVar1 = ____glewFramebufferSampleLocationsfvARB != (PROC)0x0;
  ____glewNamedFramebufferSampleLocationsfvARB =
       wglGetProcAddress("glNamedFramebufferSampleLocationsfvARB");
  if ((____glewNamedFramebufferSampleLocationsfvARB != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a220 0084a220_FUN_0084a220 ====
undefined4 FUN_0084a220(void);

// decompiled by BatchDecomp @ 0084a220 name=FUN_0084a220 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a220(void)

{
  bool bVar1;
  
  ____glewBindImageTexture = wglGetProcAddress("glBindImageTexture");
  bVar1 = ____glewBindImageTexture != (PROC)0x0;
  ____glewMemoryBarrier = wglGetProcAddress("glMemoryBarrier");
  if ((____glewMemoryBarrier != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a760 0084a760_FUN_0084a760 ====
undefined4 FUN_0084a760(void);

// decompiled by BatchDecomp @ 0084a760 name=FUN_0084a760 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a760(void)

{
  bool bVar1;
  
  ____glewTexPageCommitmentARB = wglGetProcAddress("glTexPageCommitmentARB");
  bVar1 = ____glewTexPageCommitmentARB != (PROC)0x0;
  ____glewTexturePageCommitmentEXT = wglGetProcAddress("glTexturePageCommitmentEXT");
  if ((____glewTexturePageCommitmentEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a850 0084a850_FUN_0084a850 ====
undefined4 FUN_0084a850(void);

// decompiled by BatchDecomp @ 0084a850 name=FUN_0084a850 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a850(void)

{
  bool bVar1;
  
  ____glewPatchParameterfv = wglGetProcAddress("glPatchParameterfv");
  bVar1 = ____glewPatchParameterfv != (PROC)0x0;
  ____glewPatchParameteri = wglGetProcAddress("glPatchParameteri");
  if ((____glewPatchParameteri != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a8d0 0084a8d0_FUN_0084a8d0 ====
undefined4 FUN_0084a8d0(void);

// decompiled by BatchDecomp @ 0084a8d0 name=FUN_0084a8d0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a8d0(void)

{
  bool bVar1;
  
  ____glewTexBufferRange = wglGetProcAddress("glTexBufferRange");
  bVar1 = ____glewTexBufferRange != (PROC)0x0;
  ____glewTextureBufferRangeEXT = wglGetProcAddress("glTextureBufferRangeEXT");
  if ((____glewTextureBufferRangeEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ab50 0084ab50_FUN_0084ab50 ====
undefined4 FUN_0084ab50(void);

// decompiled by BatchDecomp @ 0084ab50 name=FUN_0084ab50 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ab50(void)

{
  bool bVar1;
  
  ____glewGetQueryObjecti64v = wglGetProcAddress("glGetQueryObjecti64v");
  bVar1 = ____glewGetQueryObjecti64v == (PROC)0x0;
  ____glewGetQueryObjectui64v = wglGetProcAddress("glGetQueryObjectui64v");
  if ((____glewGetQueryObjectui64v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewQueryCounter = wglGetProcAddress("glQueryCounter");
  if ((____glewQueryCounter != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084acc0 0084acc0_FUN_0084acc0 ====
undefined4 FUN_0084acc0(void);

// decompiled by BatchDecomp @ 0084acc0 name=FUN_0084acc0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084acc0(void)

{
  bool bVar1;
  
  ____glewDrawTransformFeedbackInstanced = wglGetProcAddress("glDrawTransformFeedbackInstanced");
  bVar1 = ____glewDrawTransformFeedbackInstanced != (PROC)0x0;
  ____glewDrawTransformFeedbackStreamInstanced =
       wglGetProcAddress("glDrawTransformFeedbackStreamInstanced");
  if ((____glewDrawTransformFeedbackStreamInstanced != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084b830 0084b830_FUN_0084b830 ====
undefined4 FUN_0084b830(void);

// decompiled by BatchDecomp @ 0084b830 name=FUN_0084b830 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084b830(void)

{
  bool bVar1;
  
  ____glewBindAttribLocationARB = wglGetProcAddress("glBindAttribLocationARB");
  bVar1 = ____glewBindAttribLocationARB == (PROC)0x0;
  ____glewGetActiveAttribARB = wglGetProcAddress("glGetActiveAttribARB");
  if ((____glewGetActiveAttribARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetAttribLocationARB = wglGetProcAddress("glGetAttribLocationARB");
  if ((____glewGetAttribLocationARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084be50 0084be50_FUN_0084be50 ====
undefined4 FUN_0084be50(void);

// decompiled by BatchDecomp @ 0084be50 name=FUN_0084be50 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084be50(void)

{
  bool bVar1;
  
  ____glewDrawElementArrayATI = wglGetProcAddress("glDrawElementArrayATI");
  bVar1 = ____glewDrawElementArrayATI == (PROC)0x0;
  ____glewDrawRangeElementArrayATI = wglGetProcAddress("glDrawRangeElementArrayATI");
  if ((____glewDrawRangeElementArrayATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewElementPointerATI = wglGetProcAddress("glElementPointerATI");
  if ((____glewElementPointerATI != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c050 0084c050_FUN_0084c050 ====
undefined4 FUN_0084c050(void);

// decompiled by BatchDecomp @ 0084c050 name=FUN_0084c050 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c050(void)

{
  bool bVar1;
  
  ____glewMapObjectBufferATI = wglGetProcAddress("glMapObjectBufferATI");
  bVar1 = ____glewMapObjectBufferATI != (PROC)0x0;
  ____glewUnmapObjectBufferATI = wglGetProcAddress("glUnmapObjectBufferATI");
  if ((____glewUnmapObjectBufferATI != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c090 0084c090_FUN_0084c090 ====
undefined4 FUN_0084c090(void);

// decompiled by BatchDecomp @ 0084c090 name=FUN_0084c090 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c090(void)

{
  bool bVar1;
  
  ____glewPNTrianglesfATI = wglGetProcAddress("glPNTrianglesfATI");
  bVar1 = ____glewPNTrianglesfATI != (PROC)0x0;
  ____glewPNTrianglesiATI = wglGetProcAddress("glPNTrianglesiATI");
  if ((____glewPNTrianglesiATI != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c0d0 0084c0d0_FUN_0084c0d0 ====
undefined4 FUN_0084c0d0(void);

// decompiled by BatchDecomp @ 0084c0d0 name=FUN_0084c0d0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c0d0(void)

{
  bool bVar1;
  
  ____glewStencilFuncSeparateATI = wglGetProcAddress("glStencilFuncSeparateATI");
  bVar1 = ____glewStencilFuncSeparateATI != (PROC)0x0;
  ____glewStencilOpSeparateATI = wglGetProcAddress("glStencilOpSeparateATI");
  if ((____glewStencilOpSeparateATI != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c230 0084c230_FUN_0084c230 ====
undefined4 FUN_0084c230(void);

// decompiled by BatchDecomp @ 0084c230 name=FUN_0084c230 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c230(void)

{
  bool bVar1;
  
  ____glewGetVertexAttribArrayObjectfvATI = wglGetProcAddress("glGetVertexAttribArrayObjectfvATI");
  bVar1 = ____glewGetVertexAttribArrayObjectfvATI == (PROC)0x0;
  ____glewGetVertexAttribArrayObjectivATI = wglGetProcAddress("glGetVertexAttribArrayObjectivATI");
  if ((____glewGetVertexAttribArrayObjectivATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribArrayObjectATI = wglGetProcAddress("glVertexAttribArrayObjectATI");
  if ((____glewVertexAttribArrayObjectATI != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c670 0084c670_FUN_0084c670 ====
undefined4 FUN_0084c670(void);

// decompiled by BatchDecomp @ 0084c670 name=FUN_0084c670 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c670(void)

{
  bool bVar1;
  
  ____glewGetUniformBufferSizeEXT = wglGetProcAddress("glGetUniformBufferSizeEXT");
  bVar1 = ____glewGetUniformBufferSizeEXT == (PROC)0x0;
  ____glewGetUniformOffsetEXT = wglGetProcAddress("glGetUniformOffsetEXT");
  if ((____glewGetUniformOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformBufferEXT = wglGetProcAddress("glUniformBufferEXT");
  if ((____glewUniformBufferEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c740 0084c740_FUN_0084c740 ====
undefined4 FUN_0084c740(void);

// decompiled by BatchDecomp @ 0084c740 name=FUN_0084c740 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c740(void)

{
  bool bVar1;
  
  ____glewColorSubTableEXT = wglGetProcAddress("glColorSubTableEXT");
  bVar1 = ____glewColorSubTableEXT != (PROC)0x0;
  ____glewCopyColorSubTableEXT = wglGetProcAddress("glCopyColorSubTableEXT");
  if ((____glewCopyColorSubTableEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c780 0084c780_FUN_0084c780 ====
undefined4 FUN_0084c780(void);

// decompiled by BatchDecomp @ 0084c780 name=FUN_0084c780 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c780(void)

{
  bool bVar1;
  
  ____glewLockArraysEXT = wglGetProcAddress("glLockArraysEXT");
  bVar1 = ____glewLockArraysEXT != (PROC)0x0;
  ____glewUnlockArraysEXT = wglGetProcAddress("glUnlockArraysEXT");
  if ((____glewUnlockArraysEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c8f0 0084c8f0_FUN_0084c8f0 ====
undefined4 FUN_0084c8f0(void);

// decompiled by BatchDecomp @ 0084c8f0 name=FUN_0084c8f0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c8f0(void)

{
  bool bVar1;
  
  ____glewBinormalPointerEXT = wglGetProcAddress("glBinormalPointerEXT");
  bVar1 = ____glewBinormalPointerEXT != (PROC)0x0;
  ____glewTangentPointerEXT = wglGetProcAddress("glTangentPointerEXT");
  if ((____glewTangentPointerEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c9b0 0084c9b0_FUN_0084c9b0 ====
undefined4 FUN_0084c9b0(void);

// decompiled by BatchDecomp @ 0084c9b0 name=FUN_0084c9b0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c9b0(void)

{
  bool bVar1;
  
  ____glewCullParameterdvEXT = wglGetProcAddress("glCullParameterdvEXT");
  bVar1 = ____glewCullParameterdvEXT != (PROC)0x0;
  ____glewCullParameterfvEXT = wglGetProcAddress("glCullParameterfvEXT");
  if ((____glewCullParameterfvEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c9f0 0084c9f0_FUN_0084c9f0 ====
undefined4 FUN_0084c9f0(void);

// decompiled by BatchDecomp @ 0084c9f0 name=FUN_0084c9f0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c9f0(void)

{
  bool bVar1;
  
  ____glewGetObjectLabelEXT = wglGetProcAddress("glGetObjectLabelEXT");
  bVar1 = ____glewGetObjectLabelEXT != (PROC)0x0;
  ____glewLabelObjectEXT = wglGetProcAddress("glLabelObjectEXT");
  if ((____glewLabelObjectEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ca30 0084ca30_FUN_0084ca30 ====
undefined4 FUN_0084ca30(void);

// decompiled by BatchDecomp @ 0084ca30 name=FUN_0084ca30 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ca30(void)

{
  bool bVar1;
  
  ____glewInsertEventMarkerEXT = wglGetProcAddress("glInsertEventMarkerEXT");
  bVar1 = ____glewInsertEventMarkerEXT == (PROC)0x0;
  ____glewPopGroupMarkerEXT = wglGetProcAddress("glPopGroupMarkerEXT");
  if ((____glewPopGroupMarkerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPushGroupMarkerEXT = wglGetProcAddress("glPushGroupMarkerEXT");
  if ((____glewPushGroupMarkerEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ddb0 0084ddb0_FUN_0084ddb0 ====
undefined4 FUN_0084ddb0(void);

// decompiled by BatchDecomp @ 0084ddb0 name=FUN_0084ddb0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ddb0(void)

{
  bool bVar1;
  
  ____glewDrawArraysInstancedEXT = wglGetProcAddress("glDrawArraysInstancedEXT");
  bVar1 = ____glewDrawArraysInstancedEXT != (PROC)0x0;
  ____glewDrawElementsInstancedEXT = wglGetProcAddress("glDrawElementsInstancedEXT");
  if ((____glewDrawElementsInstancedEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e200 0084e200_FUN_0084e200 ====
undefined4 FUN_0084e200(void);

// decompiled by BatchDecomp @ 0084e200 name=FUN_0084e200 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e200(void)

{
  bool bVar1;
  
  ____glewFramebufferTextureEXT = wglGetProcAddress("glFramebufferTextureEXT");
  bVar1 = ____glewFramebufferTextureEXT == (PROC)0x0;
  ____glewFramebufferTextureFaceEXT = wglGetProcAddress("glFramebufferTextureFaceEXT");
  if ((____glewFramebufferTextureFaceEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameteriEXT = wglGetProcAddress("glProgramParameteriEXT");
  if ((____glewProgramParameteriEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e250 0084e250_FUN_0084e250 ====
undefined4 FUN_0084e250(void);

// decompiled by BatchDecomp @ 0084e250 name=FUN_0084e250 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e250(void)

{
  bool bVar1;
  
  ____glewProgramEnvParameters4fvEXT = wglGetProcAddress("glProgramEnvParameters4fvEXT");
  bVar1 = ____glewProgramEnvParameters4fvEXT != (PROC)0x0;
  ____glewProgramLocalParameters4fvEXT = wglGetProcAddress("glProgramLocalParameters4fvEXT");
  if ((____glewProgramLocalParameters4fvEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e6c0 0084e6c0_FUN_0084e6c0 ====
undefined4 FUN_0084e6c0(void);

// decompiled by BatchDecomp @ 0084e6c0 name=FUN_0084e6c0 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e6c0(void)

{
  bool bVar1;
  
  ____glewApplyTextureEXT = wglGetProcAddress("glApplyTextureEXT");
  bVar1 = ____glewApplyTextureEXT == (PROC)0x0;
  ____glewTextureLightEXT = wglGetProcAddress("glTextureLightEXT");
  if ((____glewTextureLightEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureMaterialEXT = wglGetProcAddress("glTextureMaterialEXT");
  if ((____glewTextureMaterialEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e710 0084e710_FUN_0084e710 ====
undefined4 FUN_0084e710(void);

// decompiled by BatchDecomp @ 0084e710 name=FUN_0084e710 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e710(void)

{
  bool bVar1;
  
  ____glewMultiDrawArraysEXT = wglGetProcAddress("glMultiDrawArraysEXT");
  bVar1 = ____glewMultiDrawArraysEXT != (PROC)0x0;
  ____glewMultiDrawElementsEXT = wglGetProcAddress("glMultiDrawElementsEXT");
  if ((____glewMultiDrawElementsEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e750 0084e750_FUN_0084e750 ====
undefined4 FUN_0084e750(void);

// decompiled by BatchDecomp @ 0084e750 name=FUN_0084e750 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e750(void)

{
  bool bVar1;
  
  ____glewSampleMaskEXT = wglGetProcAddress("glSampleMaskEXT");
  bVar1 = ____glewSampleMaskEXT != (PROC)0x0;
  ____glewSamplePatternEXT = wglGetProcAddress("glSamplePatternEXT");
  if ((____glewSamplePatternEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e890 0084e890_FUN_0084e890 ====
undefined4 FUN_0084e890(void);

// decompiled by BatchDecomp @ 0084e890 name=FUN_0084e890 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e890(void)

{
  bool bVar1;
  
  ____glewPointParameterfEXT = wglGetProcAddress("glPointParameterfEXT");
  bVar1 = ____glewPointParameterfEXT != (PROC)0x0;
  ____glewPointParameterfvEXT = wglGetProcAddress("glPointParameterfvEXT");
  if ((____glewPointParameterfvEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084eb70 0084eb70_FUN_0084eb70 ====
undefined4 FUN_0084eb70(void);

// decompiled by BatchDecomp @ 0084eb70 name=FUN_0084eb70 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084eb70(void)

{
  bool bVar1;
  
  ____glewActiveProgramEXT = wglGetProcAddress("glActiveProgramEXT");
  bVar1 = ____glewActiveProgramEXT == (PROC)0x0;
  ____glewCreateShaderProgramEXT = wglGetProcAddress("glCreateShaderProgramEXT");
  if ((____glewCreateShaderProgramEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUseShaderProgramEXT = wglGetProcAddress("glUseShaderProgramEXT");
  if ((____glewUseShaderProgramEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ebc0 0084ebc0_FUN_0084ebc0 ====
undefined4 FUN_0084ebc0(void);

// decompiled by BatchDecomp @ 0084ebc0 name=FUN_0084ebc0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ebc0(void)

{
  bool bVar1;
  
  ____glewBindImageTextureEXT = wglGetProcAddress("glBindImageTextureEXT");
  bVar1 = ____glewBindImageTextureEXT != (PROC)0x0;
  ____glewMemoryBarrierEXT = wglGetProcAddress("glMemoryBarrierEXT");
  if ((____glewMemoryBarrierEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ec20 0084ec20_FUN_0084ec20 ====
undefined4 FUN_0084ec20(void);

// decompiled by BatchDecomp @ 0084ec20 name=FUN_0084ec20 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ec20(void)

{
  bool bVar1;
  
  ____glewTexSubImage1DEXT = wglGetProcAddress("glTexSubImage1DEXT");
  bVar1 = ____glewTexSubImage1DEXT == (PROC)0x0;
  ____glewTexSubImage2DEXT = wglGetProcAddress("glTexSubImage2DEXT");
  if ((____glewTexSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexSubImage3DEXT = wglGetProcAddress("glTexSubImage3DEXT");
  if ((____glewTexSubImage3DEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ee10 0084ee10_FUN_0084ee10 ====
undefined4 FUN_0084ee10(void);

// decompiled by BatchDecomp @ 0084ee10 name=FUN_0084ee10 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ee10(void)

{
  bool bVar1;
  
  ____glewGetQueryObjecti64vEXT = wglGetProcAddress("glGetQueryObjecti64vEXT");
  bVar1 = ____glewGetQueryObjecti64vEXT != (PROC)0x0;
  ____glewGetQueryObjectui64vEXT = wglGetProcAddress("glGetQueryObjectui64vEXT");
  if ((____glewGetQueryObjectui64vEXT != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f470 0084f470_FUN_0084f470 ====
undefined4 FUN_0084f470(void);

// decompiled by BatchDecomp @ 0084f470 name=FUN_0084f470 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f470(void)

{
  bool bVar1;
  
  ____glewVertexWeightPointerEXT = wglGetProcAddress("glVertexWeightPointerEXT");
  bVar1 = ____glewVertexWeightPointerEXT == (PROC)0x0;
  ____glewVertexWeightfEXT = wglGetProcAddress("glVertexWeightfEXT");
  if ((____glewVertexWeightfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexWeightfvEXT = wglGetProcAddress("glVertexWeightfvEXT");
  if ((____glewVertexWeightfvEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f5d0 0084f5d0_FUN_0084f5d0 ====
undefined4 FUN_0084f5d0(void);

// decompiled by BatchDecomp @ 0084f5d0 name=FUN_0084f5d0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f5d0(void)

{
  bool bVar1;
  
  ____glewMultiModeDrawArraysIBM = wglGetProcAddress("glMultiModeDrawArraysIBM");
  bVar1 = ____glewMultiModeDrawArraysIBM != (PROC)0x0;
  ____glewMultiModeDrawElementsIBM = wglGetProcAddress("glMultiModeDrawElementsIBM");
  if ((____glewMultiModeDrawElementsIBM != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f6d0 0084f6d0_FUN_0084f6d0 ====
undefined4 FUN_0084f6d0(void);

// decompiled by BatchDecomp @ 0084f6d0 name=FUN_0084f6d0 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f6d0(void)

{
  bool bVar1;
  
  ____glewMapTexture2DINTEL = wglGetProcAddress("glMapTexture2DINTEL");
  bVar1 = ____glewMapTexture2DINTEL == (PROC)0x0;
  ____glewSyncTextureINTEL = wglGetProcAddress("glSyncTextureINTEL");
  if ((____glewSyncTextureINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUnmapTexture2DINTEL = wglGetProcAddress("glUnmapTexture2DINTEL");
  if ((____glewUnmapTexture2DINTEL != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084fd00 0084fd00_FUN_0084fd00 ====
undefined4 FUN_0084fd00(void);

// decompiled by BatchDecomp @ 0084fd00 name=FUN_0084fd00 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084fd00(void)

{
  bool bVar1;
  
  ____glewBeginConditionalRenderNVX = wglGetProcAddress("glBeginConditionalRenderNVX");
  bVar1 = ____glewBeginConditionalRenderNVX != (PROC)0x0;
  ____glewEndConditionalRenderNVX = wglGetProcAddress("glEndConditionalRenderNVX");
  if ((____glewEndConditionalRenderNVX != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084fd40 0084fd40_FUN_0084fd40 ====
undefined4 FUN_0084fd40(void);

// decompiled by BatchDecomp @ 0084fd40 name=FUN_0084fd40 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084fd40(void)

{
  bool bVar1;
  
  ____glewLGPUCopyImageSubDataNVX = wglGetProcAddress("glLGPUCopyImageSubDataNVX");
  bVar1 = ____glewLGPUCopyImageSubDataNVX == (PROC)0x0;
  ____glewLGPUInterlockNVX = wglGetProcAddress("glLGPUInterlockNVX");
  if ((____glewLGPUInterlockNVX == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewLGPUNamedBufferSubDataNVX = wglGetProcAddress("glLGPUNamedBufferSubDataNVX");
  if ((____glewLGPUNamedBufferSubDataNVX != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084fd90 0084fd90_FUN_0084fd90 ====
undefined4 FUN_0084fd90(void);

// decompiled by BatchDecomp @ 0084fd90 name=FUN_0084fd90 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084fd90(void)

{
  bool bVar1;
  
  ____glewMultiDrawArraysIndirectBindlessNV =
       wglGetProcAddress("glMultiDrawArraysIndirectBindlessNV");
  bVar1 = ____glewMultiDrawArraysIndirectBindlessNV != (PROC)0x0;
  ____glewMultiDrawElementsIndirectBindlessNV =
       wglGetProcAddress("glMultiDrawElementsIndirectBindlessNV");
  if ((____glewMultiDrawElementsIndirectBindlessNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084fdd0 0084fdd0_FUN_0084fdd0 ====
undefined4 FUN_0084fdd0(void);

// decompiled by BatchDecomp @ 0084fdd0 name=FUN_0084fdd0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084fdd0(void)

{
  bool bVar1;
  
  ____glewMultiDrawArraysIndirectBindlessCountNV =
       wglGetProcAddress("glMultiDrawArraysIndirectBindlessCountNV");
  bVar1 = ____glewMultiDrawArraysIndirectBindlessCountNV != (PROC)0x0;
  ____glewMultiDrawElementsIndirectBindlessCountNV =
       wglGetProcAddress("glMultiDrawElementsIndirectBindlessCountNV");
  if ((____glewMultiDrawElementsIndirectBindlessCountNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ff40 0084ff40_FUN_0084ff40 ====
undefined4 FUN_0084ff40(void);

// decompiled by BatchDecomp @ 0084ff40 name=FUN_0084ff40 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ff40(void)

{
  bool bVar1;
  
  ____glewBlendBarrierNV = wglGetProcAddress("glBlendBarrierNV");
  bVar1 = ____glewBlendBarrierNV != (PROC)0x0;
  ____glewBlendParameteriNV = wglGetProcAddress("glBlendParameteriNV");
  if ((____glewBlendParameteriNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000850130 00850130_FUN_00850130 ====
undefined4 FUN_00850130(void);

// decompiled by BatchDecomp @ 00850130 name=FUN_00850130 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00850130(void)

{
  bool bVar1;
  
  ____glewBeginConditionalRenderNV = wglGetProcAddress("glBeginConditionalRenderNV");
  bVar1 = ____glewBeginConditionalRenderNV != (PROC)0x0;
  ____glewEndConditionalRenderNV = wglGetProcAddress("glEndConditionalRenderNV");
  if ((____glewEndConditionalRenderNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008501f0 008501f0_FUN_008501f0 ====
undefined4 FUN_008501f0(void);

// decompiled by BatchDecomp @ 008501f0 name=FUN_008501f0 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008501f0(void)

{
  bool bVar1;
  
  ____glewClearDepthdNV = wglGetProcAddress("glClearDepthdNV");
  bVar1 = ____glewClearDepthdNV == (PROC)0x0;
  ____glewDepthBoundsdNV = wglGetProcAddress("glDepthBoundsdNV");
  if ((____glewDepthBoundsdNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDepthRangedNV = wglGetProcAddress("glDepthRangedNV");
  if ((____glewDepthRangedNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008503c0 008503c0_FUN_008503c0 ====
undefined4 FUN_008503c0(void);

// decompiled by BatchDecomp @ 008503c0 name=FUN_008503c0 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008503c0(void)

{
  bool bVar1;
  
  ____glewGetMultisamplefvNV = wglGetProcAddress("glGetMultisamplefvNV");
  bVar1 = ____glewGetMultisamplefvNV == (PROC)0x0;
  ____glewSampleMaskIndexedNV = wglGetProcAddress("glSampleMaskIndexedNV");
  if ((____glewSampleMaskIndexedNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexRenderbufferNV = wglGetProcAddress("glTexRenderbufferNV");
  if ((____glewTexRenderbufferNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000850fc0 00850fc0_FUN_00850fc0 ====
undefined4 FUN_00850fc0(void);

// decompiled by BatchDecomp @ 00850fc0 name=FUN_00850fc0 conv=unknown body=77

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00850fc0(void)

{
  bool bVar1;
  
  ____glewProgramBufferParametersIivNV = wglGetProcAddress("glProgramBufferParametersIivNV");
  bVar1 = ____glewProgramBufferParametersIivNV == (PROC)0x0;
  ____glewProgramBufferParametersIuivNV = wglGetProcAddress("glProgramBufferParametersIuivNV");
  if ((____glewProgramBufferParametersIuivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramBufferParametersfvNV = wglGetProcAddress("glProgramBufferParametersfvNV");
  if ((____glewProgramBufferParametersfvNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008515a0 008515a0_FUN_008515a0 ====
undefined4 FUN_008515a0(void);

// decompiled by BatchDecomp @ 008515a0 name=FUN_008515a0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008515a0(void)

{
  bool bVar1;
  
  ____glewFlushPixelDataRangeNV = wglGetProcAddress("glFlushPixelDataRangeNV");
  bVar1 = ____glewFlushPixelDataRangeNV != (PROC)0x0;
  ____glewPixelDataRangeNV = wglGetProcAddress("glPixelDataRangeNV");
  if ((____glewPixelDataRangeNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008515e0 008515e0_FUN_008515e0 ====
undefined4 FUN_008515e0(void);

// decompiled by BatchDecomp @ 008515e0 name=FUN_008515e0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008515e0(void)

{
  bool bVar1;
  
  ____glewPointParameteriNV = wglGetProcAddress("glPointParameteriNV");
  bVar1 = ____glewPointParameteriNV != (PROC)0x0;
  ____glewPointParameterivNV = wglGetProcAddress("glPointParameterivNV");
  if ((____glewPointParameterivNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008516b0 008516b0_FUN_008516b0 ====
undefined4 FUN_008516b0(void);

// decompiled by BatchDecomp @ 008516b0 name=FUN_008516b0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008516b0(void)

{
  bool bVar1;
  
  ____glewPrimitiveRestartIndexNV = wglGetProcAddress("glPrimitiveRestartIndexNV");
  bVar1 = ____glewPrimitiveRestartIndexNV != (PROC)0x0;
  ____glewPrimitiveRestartNV = wglGetProcAddress("glPrimitiveRestartNV");
  if ((____glewPrimitiveRestartNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851820 00851820_FUN_00851820 ====
undefined4 FUN_00851820(void);

// decompiled by BatchDecomp @ 00851820 name=FUN_00851820 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851820(void)

{
  bool bVar1;
  
  ____glewCombinerStageParameterfvNV = wglGetProcAddress("glCombinerStageParameterfvNV");
  bVar1 = ____glewCombinerStageParameterfvNV != (PROC)0x0;
  ____glewGetCombinerStageParameterfvNV = wglGetProcAddress("glGetCombinerStageParameterfvNV");
  if ((____glewGetCombinerStageParameterfvNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851860 00851860_FUN_00851860 ====
undefined4 FUN_00851860(void);

// decompiled by BatchDecomp @ 00851860 name=FUN_00851860 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851860(void)

{
  bool bVar1;
  
  ____glewFramebufferSampleLocationsfvNV = wglGetProcAddress("glFramebufferSampleLocationsfvNV");
  bVar1 = ____glewFramebufferSampleLocationsfvNV != (PROC)0x0;
  ____glewNamedFramebufferSampleLocationsfvNV =
       wglGetProcAddress("glNamedFramebufferSampleLocationsfvNV");
  if ((____glewNamedFramebufferSampleLocationsfvNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851d20 00851d20_FUN_00851d20 ====
undefined4 FUN_00851d20(void);

// decompiled by BatchDecomp @ 00851d20 name=FUN_00851d20 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851d20(void)

{
  bool bVar1;
  
  ____glewFlushVertexArrayRangeNV = wglGetProcAddress("glFlushVertexArrayRangeNV");
  bVar1 = ____glewFlushVertexArrayRangeNV != (PROC)0x0;
  ____glewVertexArrayRangeNV = wglGetProcAddress("glVertexArrayRangeNV");
  if ((____glewVertexArrayRangeNV != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852c40 00852c40_FUN_00852c40 ====
undefined4 FUN_00852c40(void);

// decompiled by BatchDecomp @ 00852c40 name=FUN_00852c40 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852c40(void)

{
  bool bVar1;
  
  ____glewDetailTexFuncSGIS = wglGetProcAddress("glDetailTexFuncSGIS");
  bVar1 = ____glewDetailTexFuncSGIS != (PROC)0x0;
  ____glewGetDetailTexFuncSGIS = wglGetProcAddress("glGetDetailTexFuncSGIS");
  if ((____glewGetDetailTexFuncSGIS != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852c80 00852c80_FUN_00852c80 ====
undefined4 FUN_00852c80(void);

// decompiled by BatchDecomp @ 00852c80 name=FUN_00852c80 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852c80(void)

{
  bool bVar1;
  
  ____glewFogFuncSGIS = wglGetProcAddress("glFogFuncSGIS");
  bVar1 = ____glewFogFuncSGIS != (PROC)0x0;
  ____glewGetFogFuncSGIS = wglGetProcAddress("glGetFogFuncSGIS");
  if ((____glewGetFogFuncSGIS != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852cc0 00852cc0_FUN_00852cc0 ====
undefined4 FUN_00852cc0(void);

// decompiled by BatchDecomp @ 00852cc0 name=FUN_00852cc0 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852cc0(void)

{
  bool bVar1;
  
  ____glewSampleMaskSGIS = wglGetProcAddress("glSampleMaskSGIS");
  bVar1 = ____glewSampleMaskSGIS != (PROC)0x0;
  ____glewSamplePatternSGIS = wglGetProcAddress("glSamplePatternSGIS");
  if ((____glewSamplePatternSGIS != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852d00 00852d00_FUN_00852d00 ====
undefined4 FUN_00852d00(void);

// decompiled by BatchDecomp @ 00852d00 name=FUN_00852d00 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852d00(void)

{
  bool bVar1;
  
  ____glewGetSharpenTexFuncSGIS = wglGetProcAddress("glGetSharpenTexFuncSGIS");
  bVar1 = ____glewGetSharpenTexFuncSGIS != (PROC)0x0;
  ____glewSharpenTexFuncSGIS = wglGetProcAddress("glSharpenTexFuncSGIS");
  if ((____glewSharpenTexFuncSGIS != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852d40 00852d40_FUN_00852d40 ====
undefined4 FUN_00852d40(void);

// decompiled by BatchDecomp @ 00852d40 name=FUN_00852d40 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852d40(void)

{
  bool bVar1;
  
  ____glewTexImage4DSGIS = wglGetProcAddress("glTexImage4DSGIS");
  bVar1 = ____glewTexImage4DSGIS != (PROC)0x0;
  ____glewTexSubImage4DSGIS = wglGetProcAddress("glTexSubImage4DSGIS");
  if ((____glewTexSubImage4DSGIS != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852d80 00852d80_FUN_00852d80 ====
undefined4 FUN_00852d80(void);

// decompiled by BatchDecomp @ 00852d80 name=FUN_00852d80 conv=unknown body=54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852d80(void)

{
  bool bVar1;
  
  ____glewGetTexFilterFuncSGIS = wglGetProcAddress("glGetTexFilterFuncSGIS");
  bVar1 = ____glewGetTexFilterFuncSGIS != (PROC)0x0;
  ____glewTexFilterFuncSGIS = wglGetProcAddress("glTexFilterFuncSGIS");
  if ((____glewTexFilterFuncSGIS != (PROC)0x0) && (bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000855e00 00855e00_FUN_00855e00 ====
int FUN_00855e00(char *param_1,char param_2);

// decompiled by BatchDecomp @ 00855e00 name=FUN_00855e00 conv=unknown body=50

int FUN_00855e00(char *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
    while ((cVar2 != '\0' && (cVar2 != param_2))) {
      iVar1 = iVar3 + 1;
      iVar3 = iVar3 + 1;
      cVar2 = param_1[iVar1];
    }
    return iVar3;
  }
  return 0;
}


//==== 0000855e40 00855e40_FUN_00855e40 ====
char * FUN_00855e40(int param_1,char *param_2,char param_3);

// decompiled by BatchDecomp @ 00855e40 name=FUN_00855e40 conv=unknown body=60

char * FUN_00855e40(int param_1,char *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)0x0;
  if (param_2 == (char *)0x0) {
    return param_2;
  }
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    iVar3 = param_1 - (int)param_2;
    do {
      if (cVar1 == param_3) break;
      param_2[iVar3] = cVar1;
      pcVar2 = pcVar2 + 1;
      cVar1 = param_2[1];
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
  }
  pcVar2[param_1] = '\0';
  return pcVar2;
}


//==== 00008dc0f0 008dc0f0___glfwCompareVideoModes ====
// decompiled by BatchDecomp @ 008dc0f0 name=__glfwCompareVideoModes conv=unknown body=73

int __glfwCompareVideoModes(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[4] + param_1[3] + param_1[2];
  iVar2 = param_2[4] + param_2[3] + param_2[2];
  if (iVar1 != iVar2) {
    return iVar1 - iVar2;
  }
  if (param_1[1] * *param_1 - param_2[1] * *param_2 != 0) {
    return param_1[1] * *param_1 - param_2[1] * *param_2;
  }
  return param_1[5] - param_2[5];
}


//==== 00008dc3f0 008dc3f0___glfwSplitBPP ====
// decompiled by BatchDecomp @ 008dc3f0 name=__glfwSplitBPP conv=unknown body=71

void __glfwSplitBPP(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  if (param_1 == 0x20) {
    param_1 = 0x18;
  }
  iVar1 = param_1 / 3;
  *param_4 = iVar1;
  *param_3 = iVar1;
  *param_2 = iVar1;
  if (0 < param_1 % 3) {
    *param_3 = *param_3 + 1;
  }
  if (param_1 % 3 == 2) {
    *param_2 = *param_2 + 1;
  }
  return;
}


//==== 00008dcea0 008dcea0___glfwInputMouseClick ====
// decompiled by BatchDecomp @ 008dcea0 name=__glfwInputMouseClick conv=unknown body=63

void __glfwInputMouseClick(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  if (param_2 < 8) {
    if ((param_3 == 0) && (*(int *)(param_1 + 0x58) != 0)) {
      *(undefined1 *)(param_1 + 0x60 + param_2) = 3;
    }
    else {
      *(char *)(param_1 + 0x60 + param_2) = (char)param_3;
    }
    if (*(code **)(param_1 + 0x260) != (code *)0x0) {
      (**(code **)(param_1 + 0x260))(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


//==== 00008dd720 008dd720___glfwInitThreadLocalStorageWin32 ====
// decompiled by BatchDecomp @ 008dd720 name=__glfwInitThreadLocalStorageWin32 conv=unknown body=53

undefined4 __glfwInitThreadLocalStorageWin32(void)

{
  DAT_00994c3c = TlsAlloc();
  if (DAT_00994c3c == 0xffffffff) {
    __glfwInputError(0x10008,"Win32: Failed to allocate TLS index");
    return 0;
  }
  DAT_00994c38 = 1;
  return 1;
}


//==== 00008de8d0 008de8d0___glfwInitTimerWin32 ====
// decompiled by BatchDecomp @ 008de8d0 name=__glfwInitTimerWin32 conv=unknown body=82

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __glfwInitTimerWin32(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  if (BVar1 != 0) {
    _DAT_009948b0 = local_8.s.LowPart;
    DAT_009948a8 = 1;
    _DAT_009948b4 = local_8.s.HighPart;
    return;
  }
  DAT_009948a8 = 0;
  _DAT_009948b0 = 1000;
  _DAT_009948b4 = 0;
  return;
}


//==== 00008de960 008de960___glfwTerminateVulkan ====
// decompiled by BatchDecomp @ 008de960 name=__glfwTerminateVulkan conv=unknown body=70

void __glfwTerminateVulkan(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if (DAT_009940bc != 0) {
    do {
      free(*(void **)(DAT_009940b8 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_009940bc);
  }
  free((void *)DAT_009940b8);
  if (DAT_009940b4 != (HMODULE)0x0) {
    FreeLibrary(DAT_009940b4);
  }
  return;
}


//==== 00008def90 008def90___glfwPlatformSetCursorPos ====
// decompiled by BatchDecomp @ 008def90 name=__glfwPlatformSetCursorPos conv=unknown body=68

void __glfwPlatformSetCursorPos(int param_1,int param_2,int param_3,double param_4)

{
  param_2 = (int)(double)CONCAT44(param_3,param_2);
  *(int *)(param_1 + 0x298) = (int)param_4;
  *(int *)(param_1 + 0x294) = param_2;
  param_3 = (int)param_4;
  ClientToScreen(*(HWND *)(param_1 + 0x280),(LPPOINT)&param_2);
  SetCursorPos(param_2,param_3);
  return;
}


//==== 00008dfbb0 008dfbb0_FUN_008dfbb0 ====
byte FUN_008dfbb0(void);

// decompiled by BatchDecomp @ 008dfbb0 name=FUN_008dfbb0 conv=unknown body=80

byte FUN_008dfbb0(void)

{
  SHORT SVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  
  SVar1 = GetAsyncKeyState(0x10);
  bVar4 = ((int)SVar1 & 0x80000000U) != 0;
  SVar1 = GetAsyncKeyState(0x11);
  if (SVar1 < 0) {
    bVar4 = bVar4 | 2;
  }
  SVar1 = GetAsyncKeyState(0x12);
  if (SVar1 < 0) {
    bVar4 = bVar4 | 4;
  }
  uVar2 = GetAsyncKeyState(0x5c);
  uVar3 = GetAsyncKeyState(0x5b);
  if ((short)(uVar3 | uVar2) < 0) {
    bVar4 = bVar4 | 8;
  }
  return bVar4;
}


//==== 00008dfc80 008dfc80_FUN_008dfc80 ====
byte FUN_008dfc80(void);

// decompiled by BatchDecomp @ 008dfc80 name=FUN_008dfc80 conv=unknown body=80

byte FUN_008dfc80(void)

{
  SHORT SVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  
  SVar1 = GetKeyState(0x10);
  bVar4 = ((int)SVar1 & 0x80000000U) != 0;
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    bVar4 = bVar4 | 2;
  }
  SVar1 = GetKeyState(0x12);
  if (SVar1 < 0) {
    bVar4 = bVar4 | 4;
  }
  uVar2 = GetKeyState(0x5c);
  uVar3 = GetKeyState(0x5b);
  if ((short)(uVar3 | uVar2) < 0) {
    bVar4 = bVar4 | 8;
  }
  return bVar4;
}


//==== 00008e36d0 008e36d0__Init_thread_footer ====
// decompiled by BatchDecomp @ 008e36d0 name=_Init_thread_footer conv=__cdecl body=74

void __cdecl _Init_thread_footer(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&_Tss_mutex);
  _Init_global_epoch = _Init_global_epoch + 1;
  *param_1 = _Init_global_epoch;
  *(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) = _Init_global_epoch;
  LeaveCriticalSection((LPCRITICAL_SECTION)&_Tss_mutex);
  _Init_thread_notify();
  return;
}


//==== 000090a930 0090a930_FUN_0090a930 ====
void FUN_0090a930(void);

// decompiled by BatchDecomp @ 0090a930 name=FUN_0090a930 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a930(void)

{
  _DAT_00985948 = ((void *)(0x009194a4u));
  if (DAT_0098594c != (void *)0x0) {
    operator_delete__(DAT_0098594c);
  }
  _DAT_00985948 = ((void *)(0x00919488u));
  DAT_0098594c = (void *)0x0;
  return;
}


//==== 000090a970 0090a970_FUN_0090a970 ====
void FUN_0090a970(void);

// decompiled by BatchDecomp @ 0090a970 name=FUN_0090a970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a970(void)

{
  _DAT_009858f8 = ((void *)(0x009194a4u));
  if (DAT_009858fc != (void *)0x0) {
    operator_delete__(DAT_009858fc);
  }
  _DAT_009858f8 = ((void *)(0x00919488u));
  DAT_009858fc = (void *)0x0;
  return;
}


//==== 000090a9b0 0090a9b0_FUN_0090a9b0 ====
void FUN_0090a9b0(void);

// decompiled by BatchDecomp @ 0090a9b0 name=FUN_0090a9b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a9b0(void)

{
  _DAT_009858e8 = ((void *)(0x009194a4u));
  if (DAT_009858ec != (void *)0x0) {
    operator_delete__(DAT_009858ec);
  }
  _DAT_009858e8 = ((void *)(0x00919488u));
  DAT_009858ec = (void *)0x0;
  return;
}


//==== 000090a9f0 0090a9f0_FUN_0090a9f0 ====
void FUN_0090a9f0(void);

// decompiled by BatchDecomp @ 0090a9f0 name=FUN_0090a9f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090a9f0(void)

{
  _DAT_00985968 = ((void *)(0x009194a4u));
  if (DAT_0098596c != (void *)0x0) {
    operator_delete__(DAT_0098596c);
  }
  _DAT_00985968 = ((void *)(0x00919488u));
  DAT_0098596c = (void *)0x0;
  return;
}


//==== 000090aa30 0090aa30_FUN_0090aa30 ====
void FUN_0090aa30(void);

// decompiled by BatchDecomp @ 0090aa30 name=FUN_0090aa30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090aa30(void)

{
  _DAT_00985928 = ((void *)(0x009194a4u));
  if (DAT_0098592c != (void *)0x0) {
    operator_delete__(DAT_0098592c);
  }
  _DAT_00985928 = ((void *)(0x00919488u));
  DAT_0098592c = (void *)0x0;
  return;
}


//==== 000090ad70 0090ad70_FUN_0090ad70 ====
void FUN_0090ad70(void);

// decompiled by BatchDecomp @ 0090ad70 name=FUN_0090ad70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ad70(void)

{
  _DAT_00985c08 = ((void *)(0x009194a4u));
  if (DAT_00985c0c != (void *)0x0) {
    operator_delete__(DAT_00985c0c);
  }
  _DAT_00985c08 = ((void *)(0x00919488u));
  DAT_00985c0c = (void *)0x0;
  return;
}


//==== 000090adb0 0090adb0_FUN_0090adb0 ====
void FUN_0090adb0(void);

// decompiled by BatchDecomp @ 0090adb0 name=FUN_0090adb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090adb0(void)

{
  _DAT_00985ba8 = ((void *)(0x009194a4u));
  if (DAT_00985bac != (void *)0x0) {
    operator_delete__(DAT_00985bac);
  }
  _DAT_00985ba8 = ((void *)(0x00919488u));
  DAT_00985bac = (void *)0x0;
  return;
}


//==== 000090adf0 0090adf0_FUN_0090adf0 ====
void FUN_0090adf0(void);

// decompiled by BatchDecomp @ 0090adf0 name=FUN_0090adf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090adf0(void)

{
  _DAT_00985be8 = ((void *)(0x009194a4u));
  if (DAT_00985bec != (void *)0x0) {
    operator_delete__(DAT_00985bec);
  }
  _DAT_00985be8 = ((void *)(0x00919488u));
  DAT_00985bec = (void *)0x0;
  return;
}


//==== 000090ae30 0090ae30_FUN_0090ae30 ====
void FUN_0090ae30(void);

// decompiled by BatchDecomp @ 0090ae30 name=FUN_0090ae30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ae30(void)

{
  _DAT_00985bd8 = ((void *)(0x009194a4u));
  if (DAT_00985bdc != (void *)0x0) {
    operator_delete__(DAT_00985bdc);
  }
  _DAT_00985bd8 = ((void *)(0x00919488u));
  DAT_00985bdc = (void *)0x0;
  return;
}


//==== 000090ae70 0090ae70_FUN_0090ae70 ====
void FUN_0090ae70(void);

// decompiled by BatchDecomp @ 0090ae70 name=FUN_0090ae70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ae70(void)

{
  _DAT_00985c38 = ((void *)(0x009194a4u));
  if (DAT_00985c3c != (void *)0x0) {
    operator_delete__(DAT_00985c3c);
  }
  _DAT_00985c38 = ((void *)(0x00919488u));
  DAT_00985c3c = (void *)0x0;
  return;
}


//==== 000090aeb0 0090aeb0_FUN_0090aeb0 ====
void FUN_0090aeb0(void);

// decompiled by BatchDecomp @ 0090aeb0 name=FUN_0090aeb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090aeb0(void)

{
  _DAT_00985b98 = ((void *)(0x009194a4u));
  if (DAT_00985b9c != (void *)0x0) {
    operator_delete__(DAT_00985b9c);
  }
  _DAT_00985b98 = ((void *)(0x00919488u));
  DAT_00985b9c = (void *)0x0;
  return;
}


//==== 000090aef0 0090aef0_FUN_0090aef0 ====
void FUN_0090aef0(void);

// decompiled by BatchDecomp @ 0090aef0 name=FUN_0090aef0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090aef0(void)

{
  _DAT_00985c18 = ((void *)(0x009194a4u));
  if (DAT_00985c1c != (void *)0x0) {
    operator_delete__(DAT_00985c1c);
  }
  _DAT_00985c18 = ((void *)(0x00919488u));
  DAT_00985c1c = (void *)0x0;
  return;
}


//==== 000090af30 0090af30_FUN_0090af30 ====
void FUN_0090af30(void);

// decompiled by BatchDecomp @ 0090af30 name=FUN_0090af30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090af30(void)

{
  _DAT_00985c28 = ((void *)(0x009194a4u));
  if (DAT_00985c2c != (void *)0x0) {
    operator_delete__(DAT_00985c2c);
  }
  _DAT_00985c28 = ((void *)(0x00919488u));
  DAT_00985c2c = (void *)0x0;
  return;
}


//==== 000090af70 0090af70_FUN_0090af70 ====
void FUN_0090af70(void);

// decompiled by BatchDecomp @ 0090af70 name=FUN_0090af70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090af70(void)

{
  _DAT_00985bc8 = ((void *)(0x009194a4u));
  if (DAT_00985bcc != (void *)0x0) {
    operator_delete__(DAT_00985bcc);
  }
  _DAT_00985bc8 = ((void *)(0x00919488u));
  DAT_00985bcc = (void *)0x0;
  return;
}


//==== 000090afb0 0090afb0_FUN_0090afb0 ====
void FUN_0090afb0(void);

// decompiled by BatchDecomp @ 0090afb0 name=FUN_0090afb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090afb0(void)

{
  _DAT_00985bb8 = ((void *)(0x009194a4u));
  if (DAT_00985bbc != (void *)0x0) {
    operator_delete__(DAT_00985bbc);
  }
  _DAT_00985bb8 = ((void *)(0x00919488u));
  DAT_00985bbc = (void *)0x0;
  return;
}


//==== 000090aff0 0090aff0_FUN_0090aff0 ====
void FUN_0090aff0(void);

// decompiled by BatchDecomp @ 0090aff0 name=FUN_0090aff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090aff0(void)

{
  _DAT_00985bf8 = ((void *)(0x009194a4u));
  if (DAT_00985bfc != (void *)0x0) {
    operator_delete__(DAT_00985bfc);
  }
  _DAT_00985bf8 = ((void *)(0x00919488u));
  DAT_00985bfc = (void *)0x0;
  return;
}


//==== 000090b2f0 0090b2f0_FUN_0090b2f0 ====
void FUN_0090b2f0(void);

// decompiled by BatchDecomp @ 0090b2f0 name=FUN_0090b2f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b2f0(void)

{
  _DAT_00985ec8 = ((void *)(0x009194a4u));
  if (DAT_00985ecc != (void *)0x0) {
    operator_delete__(DAT_00985ecc);
  }
  _DAT_00985ec8 = ((void *)(0x00919488u));
  DAT_00985ecc = (void *)0x0;
  return;
}


//==== 000090b330 0090b330_FUN_0090b330 ====
void FUN_0090b330(void);

// decompiled by BatchDecomp @ 0090b330 name=FUN_0090b330 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b330(void)

{
  _DAT_00985e68 = ((void *)(0x009194a4u));
  if (DAT_00985e6c != (void *)0x0) {
    operator_delete__(DAT_00985e6c);
  }
  _DAT_00985e68 = ((void *)(0x00919488u));
  DAT_00985e6c = (void *)0x0;
  return;
}


//==== 000090b370 0090b370_FUN_0090b370 ====
void FUN_0090b370(void);

// decompiled by BatchDecomp @ 0090b370 name=FUN_0090b370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b370(void)

{
  _DAT_00985ea8 = ((void *)(0x009194a4u));
  if (DAT_00985eac != (void *)0x0) {
    operator_delete__(DAT_00985eac);
  }
  _DAT_00985ea8 = ((void *)(0x00919488u));
  DAT_00985eac = (void *)0x0;
  return;
}


//==== 000090b3b0 0090b3b0_FUN_0090b3b0 ====
void FUN_0090b3b0(void);

// decompiled by BatchDecomp @ 0090b3b0 name=FUN_0090b3b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b3b0(void)

{
  _DAT_00985e98 = ((void *)(0x009194a4u));
  if (DAT_00985e9c != (void *)0x0) {
    operator_delete__(DAT_00985e9c);
  }
  _DAT_00985e98 = ((void *)(0x00919488u));
  DAT_00985e9c = (void *)0x0;
  return;
}


//==== 000090b3f0 0090b3f0_FUN_0090b3f0 ====
void FUN_0090b3f0(void);

// decompiled by BatchDecomp @ 0090b3f0 name=FUN_0090b3f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b3f0(void)

{
  _DAT_00985ee8 = ((void *)(0x009194a4u));
  if (DAT_00985eec != (void *)0x0) {
    operator_delete__(DAT_00985eec);
  }
  _DAT_00985ee8 = ((void *)(0x00919488u));
  DAT_00985eec = (void *)0x0;
  return;
}


//==== 000090b430 0090b430_FUN_0090b430 ====
void FUN_0090b430(void);

// decompiled by BatchDecomp @ 0090b430 name=FUN_0090b430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b430(void)

{
  _DAT_00985e58 = ((void *)(0x009194a4u));
  if (DAT_00985e5c != (void *)0x0) {
    operator_delete__(DAT_00985e5c);
  }
  _DAT_00985e58 = ((void *)(0x00919488u));
  DAT_00985e5c = (void *)0x0;
  return;
}


//==== 000090b470 0090b470_FUN_0090b470 ====
void FUN_0090b470(void);

// decompiled by BatchDecomp @ 0090b470 name=FUN_0090b470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b470(void)

{
  _DAT_00985ed8 = ((void *)(0x009194a4u));
  if (DAT_00985edc != (void *)0x0) {
    operator_delete__(DAT_00985edc);
  }
  _DAT_00985ed8 = ((void *)(0x00919488u));
  DAT_00985edc = (void *)0x0;
  return;
}


//==== 000090b4b0 0090b4b0_FUN_0090b4b0 ====
void FUN_0090b4b0(void);

// decompiled by BatchDecomp @ 0090b4b0 name=FUN_0090b4b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b4b0(void)

{
  _DAT_00985e88 = ((void *)(0x009194a4u));
  if (DAT_00985e8c != (void *)0x0) {
    operator_delete__(DAT_00985e8c);
  }
  _DAT_00985e88 = ((void *)(0x00919488u));
  DAT_00985e8c = (void *)0x0;
  return;
}


//==== 000090b4f0 0090b4f0_FUN_0090b4f0 ====
void FUN_0090b4f0(void);

// decompiled by BatchDecomp @ 0090b4f0 name=FUN_0090b4f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b4f0(void)

{
  _DAT_00985e78 = ((void *)(0x009194a4u));
  if (DAT_00985e7c != (void *)0x0) {
    operator_delete__(DAT_00985e7c);
  }
  _DAT_00985e78 = ((void *)(0x00919488u));
  DAT_00985e7c = (void *)0x0;
  return;
}


//==== 000090b530 0090b530_FUN_0090b530 ====
void FUN_0090b530(void);

// decompiled by BatchDecomp @ 0090b530 name=FUN_0090b530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b530(void)

{
  _DAT_00985ef8 = ((void *)(0x009194a4u));
  if (DAT_00985efc != (void *)0x0) {
    operator_delete__(DAT_00985efc);
  }
  _DAT_00985ef8 = ((void *)(0x00919488u));
  DAT_00985efc = (void *)0x0;
  return;
}


//==== 000090b570 0090b570_FUN_0090b570 ====
void FUN_0090b570(void);

// decompiled by BatchDecomp @ 0090b570 name=FUN_0090b570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b570(void)

{
  _DAT_00985eb8 = ((void *)(0x009194a4u));
  if (DAT_00985ebc != (void *)0x0) {
    operator_delete__(DAT_00985ebc);
  }
  _DAT_00985eb8 = ((void *)(0x00919488u));
  DAT_00985ebc = (void *)0x0;
  return;
}


//==== 000090b8b0 0090b8b0_FUN_0090b8b0 ====
void FUN_0090b8b0(void);

// decompiled by BatchDecomp @ 0090b8b0 name=FUN_0090b8b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b8b0(void)

{
  _DAT_009861c0 = ((void *)(0x009194a4u));
  if (DAT_009861c4 != (void *)0x0) {
    operator_delete__(DAT_009861c4);
  }
  _DAT_009861c0 = ((void *)(0x00919488u));
  DAT_009861c4 = (void *)0x0;
  return;
}


//==== 000090b8f0 0090b8f0_FUN_0090b8f0 ====
void FUN_0090b8f0(void);

// decompiled by BatchDecomp @ 0090b8f0 name=FUN_0090b8f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b8f0(void)

{
  _DAT_00986160 = ((void *)(0x009194a4u));
  if (DAT_00986164 != (void *)0x0) {
    operator_delete__(DAT_00986164);
  }
  _DAT_00986160 = ((void *)(0x00919488u));
  DAT_00986164 = (void *)0x0;
  return;
}


//==== 000090b930 0090b930_FUN_0090b930 ====
void FUN_0090b930(void);

// decompiled by BatchDecomp @ 0090b930 name=FUN_0090b930 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b930(void)

{
  _DAT_009861a0 = ((void *)(0x009194a4u));
  if (DAT_009861a4 != (void *)0x0) {
    operator_delete__(DAT_009861a4);
  }
  _DAT_009861a0 = ((void *)(0x00919488u));
  DAT_009861a4 = (void *)0x0;
  return;
}


//==== 000090b970 0090b970_FUN_0090b970 ====
void FUN_0090b970(void);

// decompiled by BatchDecomp @ 0090b970 name=FUN_0090b970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b970(void)

{
  _DAT_00986190 = ((void *)(0x009194a4u));
  if (DAT_00986194 != (void *)0x0) {
    operator_delete__(DAT_00986194);
  }
  _DAT_00986190 = ((void *)(0x00919488u));
  DAT_00986194 = (void *)0x0;
  return;
}


//==== 000090b9b0 0090b9b0_FUN_0090b9b0 ====
void FUN_0090b9b0(void);

// decompiled by BatchDecomp @ 0090b9b0 name=FUN_0090b9b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b9b0(void)

{
  _DAT_009861e0 = ((void *)(0x009194a4u));
  if (DAT_009861e4 != (void *)0x0) {
    operator_delete__(DAT_009861e4);
  }
  _DAT_009861e0 = ((void *)(0x00919488u));
  DAT_009861e4 = (void *)0x0;
  return;
}


//==== 000090b9f0 0090b9f0_FUN_0090b9f0 ====
void FUN_0090b9f0(void);

// decompiled by BatchDecomp @ 0090b9f0 name=FUN_0090b9f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090b9f0(void)

{
  _DAT_00986150 = ((void *)(0x009194a4u));
  if (DAT_00986154 != (void *)0x0) {
    operator_delete__(DAT_00986154);
  }
  _DAT_00986150 = ((void *)(0x00919488u));
  DAT_00986154 = (void *)0x0;
  return;
}


//==== 000090ba30 0090ba30_FUN_0090ba30 ====
void FUN_0090ba30(void);

// decompiled by BatchDecomp @ 0090ba30 name=FUN_0090ba30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ba30(void)

{
  _DAT_00986210 = ((void *)(0x009194a4u));
  if (DAT_00986214 != (void *)0x0) {
    operator_delete__(DAT_00986214);
  }
  _DAT_00986210 = ((void *)(0x00919488u));
  DAT_00986214 = (void *)0x0;
  return;
}


//==== 000090ba70 0090ba70_FUN_0090ba70 ====
void FUN_0090ba70(void);

// decompiled by BatchDecomp @ 0090ba70 name=FUN_0090ba70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ba70(void)

{
  _DAT_009861d0 = ((void *)(0x009194a4u));
  if (DAT_009861d4 != (void *)0x0) {
    operator_delete__(DAT_009861d4);
  }
  _DAT_009861d0 = ((void *)(0x00919488u));
  DAT_009861d4 = (void *)0x0;
  return;
}


//==== 000090bab0 0090bab0_FUN_0090bab0 ====
void FUN_0090bab0(void);

// decompiled by BatchDecomp @ 0090bab0 name=FUN_0090bab0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bab0(void)

{
  _DAT_00986180 = ((void *)(0x009194a4u));
  if (DAT_00986184 != (void *)0x0) {
    operator_delete__(DAT_00986184);
  }
  _DAT_00986180 = ((void *)(0x00919488u));
  DAT_00986184 = (void *)0x0;
  return;
}


//==== 000090baf0 0090baf0_FUN_0090baf0 ====
void FUN_0090baf0(void);

// decompiled by BatchDecomp @ 0090baf0 name=FUN_0090baf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090baf0(void)

{
  _DAT_00986170 = ((void *)(0x009194a4u));
  if (DAT_00986174 != (void *)0x0) {
    operator_delete__(DAT_00986174);
  }
  _DAT_00986170 = ((void *)(0x00919488u));
  DAT_00986174 = (void *)0x0;
  return;
}


//==== 000090bb30 0090bb30_FUN_0090bb30 ====
void FUN_0090bb30(void);

// decompiled by BatchDecomp @ 0090bb30 name=FUN_0090bb30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bb30(void)

{
  _DAT_00986200 = ((void *)(0x009194a4u));
  if (DAT_00986204 != (void *)0x0) {
    operator_delete__(DAT_00986204);
  }
  _DAT_00986200 = ((void *)(0x00919488u));
  DAT_00986204 = (void *)0x0;
  return;
}


//==== 000090bb70 0090bb70_FUN_0090bb70 ====
void FUN_0090bb70(void);

// decompiled by BatchDecomp @ 0090bb70 name=FUN_0090bb70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bb70(void)

{
  _DAT_009861f0 = ((void *)(0x009194a4u));
  if (DAT_009861f4 != (void *)0x0) {
    operator_delete__(DAT_009861f4);
  }
  _DAT_009861f0 = ((void *)(0x00919488u));
  DAT_009861f4 = (void *)0x0;
  return;
}


//==== 000090bbb0 0090bbb0_FUN_0090bbb0 ====
void FUN_0090bbb0(void);

// decompiled by BatchDecomp @ 0090bbb0 name=FUN_0090bbb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bbb0(void)

{
  _DAT_009861b0 = ((void *)(0x009194a4u));
  if (DAT_009861b4 != (void *)0x0) {
    operator_delete__(DAT_009861b4);
  }
  _DAT_009861b0 = ((void *)(0x00919488u));
  DAT_009861b4 = (void *)0x0;
  return;
}


//==== 000090bf30 0090bf30_FUN_0090bf30 ====
void FUN_0090bf30(void);

// decompiled by BatchDecomp @ 0090bf30 name=FUN_0090bf30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bf30(void)

{
  _DAT_009864f0 = ((void *)(0x009194a4u));
  if (DAT_009864f4 != (void *)0x0) {
    operator_delete__(DAT_009864f4);
  }
  _DAT_009864f0 = ((void *)(0x00919488u));
  DAT_009864f4 = (void *)0x0;
  return;
}


//==== 000090bf70 0090bf70_FUN_0090bf70 ====
void FUN_0090bf70(void);

// decompiled by BatchDecomp @ 0090bf70 name=FUN_0090bf70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bf70(void)

{
  _DAT_00986490 = ((void *)(0x009194a4u));
  if (DAT_00986494 != (void *)0x0) {
    operator_delete__(DAT_00986494);
  }
  _DAT_00986490 = ((void *)(0x00919488u));
  DAT_00986494 = (void *)0x0;
  return;
}


//==== 000090bfb0 0090bfb0_FUN_0090bfb0 ====
void FUN_0090bfb0(void);

// decompiled by BatchDecomp @ 0090bfb0 name=FUN_0090bfb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bfb0(void)

{
  _DAT_009864d0 = ((void *)(0x009194a4u));
  if (DAT_009864d4 != (void *)0x0) {
    operator_delete__(DAT_009864d4);
  }
  _DAT_009864d0 = ((void *)(0x00919488u));
  DAT_009864d4 = (void *)0x0;
  return;
}


//==== 000090bff0 0090bff0_FUN_0090bff0 ====
void FUN_0090bff0(void);

// decompiled by BatchDecomp @ 0090bff0 name=FUN_0090bff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090bff0(void)

{
  _DAT_009864c0 = ((void *)(0x009194a4u));
  if (DAT_009864c4 != (void *)0x0) {
    operator_delete__(DAT_009864c4);
  }
  _DAT_009864c0 = ((void *)(0x00919488u));
  DAT_009864c4 = (void *)0x0;
  return;
}


//==== 000090c030 0090c030_FUN_0090c030 ====
void FUN_0090c030(void);

// decompiled by BatchDecomp @ 0090c030 name=FUN_0090c030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c030(void)

{
  _DAT_00986510 = ((void *)(0x009194a4u));
  if (DAT_00986514 != (void *)0x0) {
    operator_delete__(DAT_00986514);
  }
  _DAT_00986510 = ((void *)(0x00919488u));
  DAT_00986514 = (void *)0x0;
  return;
}


//==== 000090c070 0090c070_FUN_0090c070 ====
void FUN_0090c070(void);

// decompiled by BatchDecomp @ 0090c070 name=FUN_0090c070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c070(void)

{
  _DAT_00986480 = ((void *)(0x009194a4u));
  if (DAT_00986484 != (void *)0x0) {
    operator_delete__(DAT_00986484);
  }
  _DAT_00986480 = ((void *)(0x00919488u));
  DAT_00986484 = (void *)0x0;
  return;
}


//==== 000090c0b0 0090c0b0_FUN_0090c0b0 ====
void FUN_0090c0b0(void);

// decompiled by BatchDecomp @ 0090c0b0 name=FUN_0090c0b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c0b0(void)

{
  _DAT_00986520 = ((void *)(0x009194a4u));
  if (DAT_00986524 != (void *)0x0) {
    operator_delete__(DAT_00986524);
  }
  _DAT_00986520 = ((void *)(0x00919488u));
  DAT_00986524 = (void *)0x0;
  return;
}


//==== 000090c0f0 0090c0f0_FUN_0090c0f0 ====
void FUN_0090c0f0(void);

// decompiled by BatchDecomp @ 0090c0f0 name=FUN_0090c0f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c0f0(void)

{
  _DAT_00986500 = ((void *)(0x009194a4u));
  if (DAT_00986504 != (void *)0x0) {
    operator_delete__(DAT_00986504);
  }
  _DAT_00986500 = ((void *)(0x00919488u));
  DAT_00986504 = (void *)0x0;
  return;
}


//==== 000090c130 0090c130_FUN_0090c130 ====
void FUN_0090c130(void);

// decompiled by BatchDecomp @ 0090c130 name=FUN_0090c130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c130(void)

{
  _DAT_009864b0 = ((void *)(0x009194a4u));
  if (DAT_009864b4 != (void *)0x0) {
    operator_delete__(DAT_009864b4);
  }
  _DAT_009864b0 = ((void *)(0x00919488u));
  DAT_009864b4 = (void *)0x0;
  return;
}


//==== 000090c170 0090c170_FUN_0090c170 ====
void FUN_0090c170(void);

// decompiled by BatchDecomp @ 0090c170 name=FUN_0090c170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c170(void)

{
  _DAT_009864a0 = ((void *)(0x009194a4u));
  if (DAT_009864a4 != (void *)0x0) {
    operator_delete__(DAT_009864a4);
  }
  _DAT_009864a0 = ((void *)(0x00919488u));
  DAT_009864a4 = (void *)0x0;
  return;
}


//==== 000090c1b0 0090c1b0_FUN_0090c1b0 ====
void FUN_0090c1b0(void);

// decompiled by BatchDecomp @ 0090c1b0 name=FUN_0090c1b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c1b0(void)

{
  _DAT_00986530 = ((void *)(0x009194a4u));
  if (DAT_00986534 != (void *)0x0) {
    operator_delete__(DAT_00986534);
  }
  _DAT_00986530 = ((void *)(0x00919488u));
  DAT_00986534 = (void *)0x0;
  return;
}


//==== 000090c1f0 0090c1f0_FUN_0090c1f0 ====
void FUN_0090c1f0(void);

// decompiled by BatchDecomp @ 0090c1f0 name=FUN_0090c1f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c1f0(void)

{
  _DAT_00986540 = ((void *)(0x009194a4u));
  if (DAT_00986544 != (void *)0x0) {
    operator_delete__(DAT_00986544);
  }
  _DAT_00986540 = ((void *)(0x00919488u));
  DAT_00986544 = (void *)0x0;
  return;
}


//==== 000090c230 0090c230_FUN_0090c230 ====
void FUN_0090c230(void);

// decompiled by BatchDecomp @ 0090c230 name=FUN_0090c230 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c230(void)

{
  _DAT_009864e0 = ((void *)(0x009194a4u));
  if (DAT_009864e4 != (void *)0x0) {
    operator_delete__(DAT_009864e4);
  }
  _DAT_009864e0 = ((void *)(0x00919488u));
  DAT_009864e4 = (void *)0x0;
  return;
}


//==== 000090c930 0090c930_FUN_0090c930 ====
void FUN_0090c930(void);

// decompiled by BatchDecomp @ 0090c930 name=FUN_0090c930 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c930(void)

{
  _DAT_00987308 = ((void *)(0x009194a4u));
  if (DAT_0098730c != (void *)0x0) {
    operator_delete__(DAT_0098730c);
  }
  _DAT_00987308 = ((void *)(0x00919488u));
  DAT_0098730c = (void *)0x0;
  return;
}


//==== 000090c970 0090c970_FUN_0090c970 ====
void FUN_0090c970(void);

// decompiled by BatchDecomp @ 0090c970 name=FUN_0090c970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c970(void)

{
  _DAT_00987328 = ((void *)(0x009194a4u));
  if (DAT_0098732c != (void *)0x0) {
    operator_delete__(DAT_0098732c);
  }
  _DAT_00987328 = ((void *)(0x00919488u));
  DAT_0098732c = (void *)0x0;
  return;
}


//==== 000090c9b0 0090c9b0_FUN_0090c9b0 ====
void FUN_0090c9b0(void);

// decompiled by BatchDecomp @ 0090c9b0 name=FUN_0090c9b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c9b0(void)

{
  _DAT_00987368 = ((void *)(0x009194a4u));
  if (DAT_0098736c != (void *)0x0) {
    operator_delete__(DAT_0098736c);
  }
  _DAT_00987368 = ((void *)(0x00919488u));
  DAT_0098736c = (void *)0x0;
  return;
}


//==== 000090c9f0 0090c9f0_FUN_0090c9f0 ====
void FUN_0090c9f0(void);

// decompiled by BatchDecomp @ 0090c9f0 name=FUN_0090c9f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090c9f0(void)

{
  _DAT_00987358 = ((void *)(0x009194a4u));
  if (DAT_0098735c != (void *)0x0) {
    operator_delete__(DAT_0098735c);
  }
  _DAT_00987358 = ((void *)(0x00919488u));
  DAT_0098735c = (void *)0x0;
  return;
}


//==== 000090ca30 0090ca30_FUN_0090ca30 ====
void FUN_0090ca30(void);

// decompiled by BatchDecomp @ 0090ca30 name=FUN_0090ca30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ca30(void)

{
  _DAT_00987388 = ((void *)(0x009194a4u));
  if (DAT_0098738c != (void *)0x0) {
    operator_delete__(DAT_0098738c);
  }
  _DAT_00987388 = ((void *)(0x00919488u));
  DAT_0098738c = (void *)0x0;
  return;
}


//==== 000090ca70 0090ca70_FUN_0090ca70 ====
void FUN_0090ca70(void);

// decompiled by BatchDecomp @ 0090ca70 name=FUN_0090ca70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ca70(void)

{
  _DAT_00987318 = ((void *)(0x009194a4u));
  if (DAT_0098731c != (void *)0x0) {
    operator_delete__(DAT_0098731c);
  }
  _DAT_00987318 = ((void *)(0x00919488u));
  DAT_0098731c = (void *)0x0;
  return;
}


//==== 000090cab0 0090cab0_FUN_0090cab0 ====
void FUN_0090cab0(void);

// decompiled by BatchDecomp @ 0090cab0 name=FUN_0090cab0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cab0(void)

{
  _DAT_00987378 = ((void *)(0x009194a4u));
  if (DAT_0098737c != (void *)0x0) {
    operator_delete__(DAT_0098737c);
  }
  _DAT_00987378 = ((void *)(0x00919488u));
  DAT_0098737c = (void *)0x0;
  return;
}


//==== 000090caf0 0090caf0_FUN_0090caf0 ====
void FUN_0090caf0(void);

// decompiled by BatchDecomp @ 0090caf0 name=FUN_0090caf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090caf0(void)

{
  _DAT_00987348 = ((void *)(0x009194a4u));
  if (DAT_0098734c != (void *)0x0) {
    operator_delete__(DAT_0098734c);
  }
  _DAT_00987348 = ((void *)(0x00919488u));
  DAT_0098734c = (void *)0x0;
  return;
}


//==== 000090cb30 0090cb30_FUN_0090cb30 ====
void FUN_0090cb30(void);

// decompiled by BatchDecomp @ 0090cb30 name=FUN_0090cb30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cb30(void)

{
  _DAT_00987338 = ((void *)(0x009194a4u));
  if (DAT_0098733c != (void *)0x0) {
    operator_delete__(DAT_0098733c);
  }
  _DAT_00987338 = ((void *)(0x00919488u));
  DAT_0098733c = (void *)0x0;
  return;
}


//==== 000090cb70 0090cb70_FUN_0090cb70 ====
void FUN_0090cb70(void);

// decompiled by BatchDecomp @ 0090cb70 name=FUN_0090cb70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cb70(void)

{
  _DAT_00987398 = ((void *)(0x009194a4u));
  if (DAT_0098739c != (void *)0x0) {
    operator_delete__(DAT_0098739c);
  }
  _DAT_00987398 = ((void *)(0x00919488u));
  DAT_0098739c = (void *)0x0;
  return;
}


//==== 000090cbb0 0090cbb0_FUN_0090cbb0 ====
void FUN_0090cbb0(void);

// decompiled by BatchDecomp @ 0090cbb0 name=FUN_0090cbb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cbb0(void)

{
  _DAT_009872f8 = ((void *)(0x009194a4u));
  if (DAT_009872fc != (void *)0x0) {
    operator_delete__(DAT_009872fc);
  }
  _DAT_009872f8 = ((void *)(0x00919488u));
  DAT_009872fc = (void *)0x0;
  return;
}


//==== 000090cef0 0090cef0_FUN_0090cef0 ====
void FUN_0090cef0(void);

// decompiled by BatchDecomp @ 0090cef0 name=FUN_0090cef0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cef0(void)

{
  _DAT_00987690 = ((void *)(0x009194a4u));
  if (DAT_00987694 != (void *)0x0) {
    operator_delete__(DAT_00987694);
  }
  _DAT_00987690 = ((void *)(0x00919488u));
  DAT_00987694 = (void *)0x0;
  return;
}


//==== 000090cf30 0090cf30_FUN_0090cf30 ====
void FUN_0090cf30(void);

// decompiled by BatchDecomp @ 0090cf30 name=FUN_0090cf30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cf30(void)

{
  _DAT_00987630 = ((void *)(0x009194a4u));
  if (DAT_00987634 != (void *)0x0) {
    operator_delete__(DAT_00987634);
  }
  _DAT_00987630 = ((void *)(0x00919488u));
  DAT_00987634 = (void *)0x0;
  return;
}


//==== 000090cf70 0090cf70_FUN_0090cf70 ====
void FUN_0090cf70(void);

// decompiled by BatchDecomp @ 0090cf70 name=FUN_0090cf70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cf70(void)

{
  _DAT_009876e0 = ((void *)(0x009194a4u));
  if (DAT_009876e4 != (void *)0x0) {
    operator_delete__(DAT_009876e4);
  }
  _DAT_009876e0 = ((void *)(0x00919488u));
  DAT_009876e4 = (void *)0x0;
  return;
}


//==== 000090cfb0 0090cfb0_FUN_0090cfb0 ====
void FUN_0090cfb0(void);

// decompiled by BatchDecomp @ 0090cfb0 name=FUN_0090cfb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cfb0(void)

{
  _DAT_00987670 = ((void *)(0x009194a4u));
  if (DAT_00987674 != (void *)0x0) {
    operator_delete__(DAT_00987674);
  }
  _DAT_00987670 = ((void *)(0x00919488u));
  DAT_00987674 = (void *)0x0;
  return;
}


//==== 000090cff0 0090cff0_FUN_0090cff0 ====
void FUN_0090cff0(void);

// decompiled by BatchDecomp @ 0090cff0 name=FUN_0090cff0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090cff0(void)

{
  _DAT_00987660 = ((void *)(0x009194a4u));
  if (DAT_00987664 != (void *)0x0) {
    operator_delete__(DAT_00987664);
  }
  _DAT_00987660 = ((void *)(0x00919488u));
  DAT_00987664 = (void *)0x0;
  return;
}


//==== 000090d030 0090d030_FUN_0090d030 ====
void FUN_0090d030(void);

// decompiled by BatchDecomp @ 0090d030 name=FUN_0090d030 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d030(void)

{
  _DAT_009876b0 = ((void *)(0x009194a4u));
  if (DAT_009876b4 != (void *)0x0) {
    operator_delete__(DAT_009876b4);
  }
  _DAT_009876b0 = ((void *)(0x00919488u));
  DAT_009876b4 = (void *)0x0;
  return;
}


//==== 000090d070 0090d070_FUN_0090d070 ====
void FUN_0090d070(void);

// decompiled by BatchDecomp @ 0090d070 name=FUN_0090d070 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d070(void)

{
  _DAT_00987620 = ((void *)(0x009194a4u));
  if (DAT_00987624 != (void *)0x0) {
    operator_delete__(DAT_00987624);
  }
  _DAT_00987620 = ((void *)(0x00919488u));
  DAT_00987624 = (void *)0x0;
  return;
}


//==== 000090d0b0 0090d0b0_FUN_0090d0b0 ====
void FUN_0090d0b0(void);

// decompiled by BatchDecomp @ 0090d0b0 name=FUN_0090d0b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d0b0(void)

{
  _DAT_009876d0 = ((void *)(0x009194a4u));
  if (DAT_009876d4 != (void *)0x0) {
    operator_delete__(DAT_009876d4);
  }
  _DAT_009876d0 = ((void *)(0x00919488u));
  DAT_009876d4 = (void *)0x0;
  return;
}


//==== 000090d0f0 0090d0f0_FUN_0090d0f0 ====
void FUN_0090d0f0(void);

// decompiled by BatchDecomp @ 0090d0f0 name=FUN_0090d0f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d0f0(void)

{
  _DAT_009876a0 = ((void *)(0x009194a4u));
  if (DAT_009876a4 != (void *)0x0) {
    operator_delete__(DAT_009876a4);
  }
  _DAT_009876a0 = ((void *)(0x00919488u));
  DAT_009876a4 = (void *)0x0;
  return;
}


//==== 000090d130 0090d130_FUN_0090d130 ====
void FUN_0090d130(void);

// decompiled by BatchDecomp @ 0090d130 name=FUN_0090d130 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d130(void)

{
  _DAT_00987650 = ((void *)(0x009194a4u));
  if (DAT_00987654 != (void *)0x0) {
    operator_delete__(DAT_00987654);
  }
  _DAT_00987650 = ((void *)(0x00919488u));
  DAT_00987654 = (void *)0x0;
  return;
}


//==== 000090d170 0090d170_FUN_0090d170 ====
void FUN_0090d170(void);

// decompiled by BatchDecomp @ 0090d170 name=FUN_0090d170 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d170(void)

{
  _DAT_00987640 = ((void *)(0x009194a4u));
  if (DAT_00987644 != (void *)0x0) {
    operator_delete__(DAT_00987644);
  }
  _DAT_00987640 = ((void *)(0x00919488u));
  DAT_00987644 = (void *)0x0;
  return;
}


//==== 000090d1b0 0090d1b0_FUN_0090d1b0 ====
void FUN_0090d1b0(void);

// decompiled by BatchDecomp @ 0090d1b0 name=FUN_0090d1b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d1b0(void)

{
  _DAT_009876c0 = ((void *)(0x009194a4u));
  if (DAT_009876c4 != (void *)0x0) {
    operator_delete__(DAT_009876c4);
  }
  _DAT_009876c0 = ((void *)(0x00919488u));
  DAT_009876c4 = (void *)0x0;
  return;
}


//==== 000090d1f0 0090d1f0_FUN_0090d1f0 ====
void FUN_0090d1f0(void);

// decompiled by BatchDecomp @ 0090d1f0 name=FUN_0090d1f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d1f0(void)

{
  _DAT_00987680 = ((void *)(0x009194a4u));
  if (DAT_00987684 != (void *)0x0) {
    operator_delete__(DAT_00987684);
  }
  _DAT_00987680 = ((void *)(0x00919488u));
  DAT_00987684 = (void *)0x0;
  return;
}


//==== 000090d550 0090d550_FUN_0090d550 ====
void FUN_0090d550(void);

// decompiled by BatchDecomp @ 0090d550 name=FUN_0090d550 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d550(void)

{
  _DAT_009879b0 = ((void *)(0x009194a4u));
  if (DAT_009879b4 != (void *)0x0) {
    operator_delete__(DAT_009879b4);
  }
  _DAT_009879b0 = ((void *)(0x00919488u));
  DAT_009879b4 = (void *)0x0;
  return;
}


//==== 000090d590 0090d590_FUN_0090d590 ====
void FUN_0090d590(void);

// decompiled by BatchDecomp @ 0090d590 name=FUN_0090d590 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d590(void)

{
  _DAT_00987950 = ((void *)(0x009194a4u));
  if (DAT_00987954 != (void *)0x0) {
    operator_delete__(DAT_00987954);
  }
  _DAT_00987950 = ((void *)(0x00919488u));
  DAT_00987954 = (void *)0x0;
  return;
}


//==== 000090d5d0 0090d5d0_FUN_0090d5d0 ====
void FUN_0090d5d0(void);

// decompiled by BatchDecomp @ 0090d5d0 name=FUN_0090d5d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d5d0(void)

{
  _DAT_00987990 = ((void *)(0x009194a4u));
  if (DAT_00987994 != (void *)0x0) {
    operator_delete__(DAT_00987994);
  }
  _DAT_00987990 = ((void *)(0x00919488u));
  DAT_00987994 = (void *)0x0;
  return;
}


//==== 000090d610 0090d610_FUN_0090d610 ====
void FUN_0090d610(void);

// decompiled by BatchDecomp @ 0090d610 name=FUN_0090d610 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d610(void)

{
  _DAT_00987980 = ((void *)(0x009194a4u));
  if (DAT_00987984 != (void *)0x0) {
    operator_delete__(DAT_00987984);
  }
  _DAT_00987980 = ((void *)(0x00919488u));
  DAT_00987984 = (void *)0x0;
  return;
}


//==== 000090d650 0090d650_FUN_0090d650 ====
void FUN_0090d650(void);

// decompiled by BatchDecomp @ 0090d650 name=FUN_0090d650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d650(void)

{
  _DAT_009879d0 = ((void *)(0x009194a4u));
  if (DAT_009879d4 != (void *)0x0) {
    operator_delete__(DAT_009879d4);
  }
  _DAT_009879d0 = ((void *)(0x00919488u));
  DAT_009879d4 = (void *)0x0;
  return;
}


//==== 000090d690 0090d690_FUN_0090d690 ====
void FUN_0090d690(void);

// decompiled by BatchDecomp @ 0090d690 name=FUN_0090d690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d690(void)

{
  _DAT_00987940 = ((void *)(0x009194a4u));
  if (DAT_00987944 != (void *)0x0) {
    operator_delete__(DAT_00987944);
  }
  _DAT_00987940 = ((void *)(0x00919488u));
  DAT_00987944 = (void *)0x0;
  return;
}


//==== 000090d6d0 0090d6d0_FUN_0090d6d0 ====
void FUN_0090d6d0(void);

// decompiled by BatchDecomp @ 0090d6d0 name=FUN_0090d6d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d6d0(void)

{
  _DAT_009879f0 = ((void *)(0x009194a4u));
  if (DAT_009879f4 != (void *)0x0) {
    operator_delete__(DAT_009879f4);
  }
  _DAT_009879f0 = ((void *)(0x00919488u));
  DAT_009879f4 = (void *)0x0;
  return;
}


//==== 000090d710 0090d710_FUN_0090d710 ====
void FUN_0090d710(void);

// decompiled by BatchDecomp @ 0090d710 name=FUN_0090d710 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d710(void)

{
  _DAT_009879c0 = ((void *)(0x009194a4u));
  if (DAT_009879c4 != (void *)0x0) {
    operator_delete__(DAT_009879c4);
  }
  _DAT_009879c0 = ((void *)(0x00919488u));
  DAT_009879c4 = (void *)0x0;
  return;
}


//==== 000090d750 0090d750_FUN_0090d750 ====
void FUN_0090d750(void);

// decompiled by BatchDecomp @ 0090d750 name=FUN_0090d750 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d750(void)

{
  _DAT_00987970 = ((void *)(0x009194a4u));
  if (DAT_00987974 != (void *)0x0) {
    operator_delete__(DAT_00987974);
  }
  _DAT_00987970 = ((void *)(0x00919488u));
  DAT_00987974 = (void *)0x0;
  return;
}


//==== 000090d790 0090d790_FUN_0090d790 ====
void FUN_0090d790(void);

// decompiled by BatchDecomp @ 0090d790 name=FUN_0090d790 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d790(void)

{
  _DAT_00987960 = ((void *)(0x009194a4u));
  if (DAT_00987964 != (void *)0x0) {
    operator_delete__(DAT_00987964);
  }
  _DAT_00987960 = ((void *)(0x00919488u));
  DAT_00987964 = (void *)0x0;
  return;
}


//==== 000090d7d0 0090d7d0_FUN_0090d7d0 ====
void FUN_0090d7d0(void);

// decompiled by BatchDecomp @ 0090d7d0 name=FUN_0090d7d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d7d0(void)

{
  _DAT_009879e0 = ((void *)(0x009194a4u));
  if (DAT_009879e4 != (void *)0x0) {
    operator_delete__(DAT_009879e4);
  }
  _DAT_009879e0 = ((void *)(0x00919488u));
  DAT_009879e4 = (void *)0x0;
  return;
}


//==== 000090d810 0090d810_FUN_0090d810 ====
void FUN_0090d810(void);

// decompiled by BatchDecomp @ 0090d810 name=FUN_0090d810 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090d810(void)

{
  _DAT_009879a0 = ((void *)(0x009194a4u));
  if (DAT_009879a4 != (void *)0x0) {
    operator_delete__(DAT_009879a4);
  }
  _DAT_009879a0 = ((void *)(0x00919488u));
  DAT_009879a4 = (void *)0x0;
  return;
}


//==== 000090db50 0090db50_FUN_0090db50 ====
void FUN_0090db50(void);

// decompiled by BatchDecomp @ 0090db50 name=FUN_0090db50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090db50(void)

{
  _DAT_00987ca0 = ((void *)(0x009194a4u));
  if (DAT_00987ca4 != (void *)0x0) {
    operator_delete__(DAT_00987ca4);
  }
  _DAT_00987ca0 = ((void *)(0x00919488u));
  DAT_00987ca4 = (void *)0x0;
  return;
}


//==== 000090db90 0090db90_FUN_0090db90 ====
void FUN_0090db90(void);

// decompiled by BatchDecomp @ 0090db90 name=FUN_0090db90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090db90(void)

{
  _DAT_00987c40 = ((void *)(0x009194a4u));
  if (DAT_00987c44 != (void *)0x0) {
    operator_delete__(DAT_00987c44);
  }
  _DAT_00987c40 = ((void *)(0x00919488u));
  DAT_00987c44 = (void *)0x0;
  return;
}


//==== 000090dbd0 0090dbd0_FUN_0090dbd0 ====
void FUN_0090dbd0(void);

// decompiled by BatchDecomp @ 0090dbd0 name=FUN_0090dbd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dbd0(void)

{
  _DAT_00987c80 = ((void *)(0x009194a4u));
  if (DAT_00987c84 != (void *)0x0) {
    operator_delete__(DAT_00987c84);
  }
  _DAT_00987c80 = ((void *)(0x00919488u));
  DAT_00987c84 = (void *)0x0;
  return;
}


//==== 000090dc10 0090dc10_FUN_0090dc10 ====
void FUN_0090dc10(void);

// decompiled by BatchDecomp @ 0090dc10 name=FUN_0090dc10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dc10(void)

{
  _DAT_00987c70 = ((void *)(0x009194a4u));
  if (DAT_00987c74 != (void *)0x0) {
    operator_delete__(DAT_00987c74);
  }
  _DAT_00987c70 = ((void *)(0x00919488u));
  DAT_00987c74 = (void *)0x0;
  return;
}


//==== 000090dc50 0090dc50_FUN_0090dc50 ====
void FUN_0090dc50(void);

// decompiled by BatchDecomp @ 0090dc50 name=FUN_0090dc50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dc50(void)

{
  _DAT_00987cc0 = ((void *)(0x009194a4u));
  if (DAT_00987cc4 != (void *)0x0) {
    operator_delete__(DAT_00987cc4);
  }
  _DAT_00987cc0 = ((void *)(0x00919488u));
  DAT_00987cc4 = (void *)0x0;
  return;
}


//==== 000090dc90 0090dc90_FUN_0090dc90 ====
void FUN_0090dc90(void);

// decompiled by BatchDecomp @ 0090dc90 name=FUN_0090dc90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dc90(void)

{
  _DAT_00987c30 = ((void *)(0x009194a4u));
  if (DAT_00987c34 != (void *)0x0) {
    operator_delete__(DAT_00987c34);
  }
  _DAT_00987c30 = ((void *)(0x00919488u));
  DAT_00987c34 = (void *)0x0;
  return;
}


//==== 000090dcd0 0090dcd0_FUN_0090dcd0 ====
void FUN_0090dcd0(void);

// decompiled by BatchDecomp @ 0090dcd0 name=FUN_0090dcd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dcd0(void)

{
  _DAT_00987ce0 = ((void *)(0x009194a4u));
  if (DAT_00987ce4 != (void *)0x0) {
    operator_delete__(DAT_00987ce4);
  }
  _DAT_00987ce0 = ((void *)(0x00919488u));
  DAT_00987ce4 = (void *)0x0;
  return;
}


//==== 000090dd10 0090dd10_FUN_0090dd10 ====
void FUN_0090dd10(void);

// decompiled by BatchDecomp @ 0090dd10 name=FUN_0090dd10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dd10(void)

{
  _DAT_00987cb0 = ((void *)(0x009194a4u));
  if (DAT_00987cb4 != (void *)0x0) {
    operator_delete__(DAT_00987cb4);
  }
  _DAT_00987cb0 = ((void *)(0x00919488u));
  DAT_00987cb4 = (void *)0x0;
  return;
}


//==== 000090dd50 0090dd50_FUN_0090dd50 ====
void FUN_0090dd50(void);

// decompiled by BatchDecomp @ 0090dd50 name=FUN_0090dd50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dd50(void)

{
  _DAT_00987c60 = ((void *)(0x009194a4u));
  if (DAT_00987c64 != (void *)0x0) {
    operator_delete__(DAT_00987c64);
  }
  _DAT_00987c60 = ((void *)(0x00919488u));
  DAT_00987c64 = (void *)0x0;
  return;
}


//==== 000090dd90 0090dd90_FUN_0090dd90 ====
void FUN_0090dd90(void);

// decompiled by BatchDecomp @ 0090dd90 name=FUN_0090dd90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090dd90(void)

{
  _DAT_00987c50 = ((void *)(0x009194a4u));
  if (DAT_00987c54 != (void *)0x0) {
    operator_delete__(DAT_00987c54);
  }
  _DAT_00987c50 = ((void *)(0x00919488u));
  DAT_00987c54 = (void *)0x0;
  return;
}


//==== 000090ddd0 0090ddd0_FUN_0090ddd0 ====
void FUN_0090ddd0(void);

// decompiled by BatchDecomp @ 0090ddd0 name=FUN_0090ddd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ddd0(void)

{
  _DAT_00987cd0 = ((void *)(0x009194a4u));
  if (DAT_00987cd4 != (void *)0x0) {
    operator_delete__(DAT_00987cd4);
  }
  _DAT_00987cd0 = ((void *)(0x00919488u));
  DAT_00987cd4 = (void *)0x0;
  return;
}


//==== 000090de10 0090de10_FUN_0090de10 ====
void FUN_0090de10(void);

// decompiled by BatchDecomp @ 0090de10 name=FUN_0090de10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090de10(void)

{
  _DAT_00987c90 = ((void *)(0x009194a4u));
  if (DAT_00987c94 != (void *)0x0) {
    operator_delete__(DAT_00987c94);
  }
  _DAT_00987c90 = ((void *)(0x00919488u));
  DAT_00987c94 = (void *)0x0;
  return;
}


//==== 000090e190 0090e190_FUN_0090e190 ====
void FUN_0090e190(void);

// decompiled by BatchDecomp @ 0090e190 name=FUN_0090e190 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e190(void)

{
  _DAT_00987f90 = ((void *)(0x009194a4u));
  if (DAT_00987f94 != (void *)0x0) {
    operator_delete__(DAT_00987f94);
  }
  _DAT_00987f90 = ((void *)(0x00919488u));
  DAT_00987f94 = (void *)0x0;
  return;
}


//==== 000090e1d0 0090e1d0_FUN_0090e1d0 ====
void FUN_0090e1d0(void);

// decompiled by BatchDecomp @ 0090e1d0 name=FUN_0090e1d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e1d0(void)

{
  _DAT_00987f30 = ((void *)(0x009194a4u));
  if (DAT_00987f34 != (void *)0x0) {
    operator_delete__(DAT_00987f34);
  }
  _DAT_00987f30 = ((void *)(0x00919488u));
  DAT_00987f34 = (void *)0x0;
  return;
}


//==== 000090e210 0090e210_FUN_0090e210 ====
void FUN_0090e210(void);

// decompiled by BatchDecomp @ 0090e210 name=FUN_0090e210 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e210(void)

{
  _DAT_00987f70 = ((void *)(0x009194a4u));
  if (DAT_00987f74 != (void *)0x0) {
    operator_delete__(DAT_00987f74);
  }
  _DAT_00987f70 = ((void *)(0x00919488u));
  DAT_00987f74 = (void *)0x0;
  return;
}


//==== 000090e250 0090e250_FUN_0090e250 ====
void FUN_0090e250(void);

// decompiled by BatchDecomp @ 0090e250 name=FUN_0090e250 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e250(void)

{
  _DAT_00987f60 = ((void *)(0x009194a4u));
  if (DAT_00987f64 != (void *)0x0) {
    operator_delete__(DAT_00987f64);
  }
  _DAT_00987f60 = ((void *)(0x00919488u));
  DAT_00987f64 = (void *)0x0;
  return;
}


//==== 000090e290 0090e290_FUN_0090e290 ====
void FUN_0090e290(void);

// decompiled by BatchDecomp @ 0090e290 name=FUN_0090e290 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e290(void)

{
  _DAT_00987fb0 = ((void *)(0x009194a4u));
  if (DAT_00987fb4 != (void *)0x0) {
    operator_delete__(DAT_00987fb4);
  }
  _DAT_00987fb0 = ((void *)(0x00919488u));
  DAT_00987fb4 = (void *)0x0;
  return;
}


//==== 000090e2d0 0090e2d0_FUN_0090e2d0 ====
void FUN_0090e2d0(void);

// decompiled by BatchDecomp @ 0090e2d0 name=FUN_0090e2d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e2d0(void)

{
  _DAT_00987f20 = ((void *)(0x009194a4u));
  if (DAT_00987f24 != (void *)0x0) {
    operator_delete__(DAT_00987f24);
  }
  _DAT_00987f20 = ((void *)(0x00919488u));
  DAT_00987f24 = (void *)0x0;
  return;
}


//==== 000090e310 0090e310_FUN_0090e310 ====
void FUN_0090e310(void);

// decompiled by BatchDecomp @ 0090e310 name=FUN_0090e310 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e310(void)

{
  _DAT_00987fd0 = ((void *)(0x009194a4u));
  if (DAT_00987fd4 != (void *)0x0) {
    operator_delete__(DAT_00987fd4);
  }
  _DAT_00987fd0 = ((void *)(0x00919488u));
  DAT_00987fd4 = (void *)0x0;
  return;
}


//==== 000090e350 0090e350_FUN_0090e350 ====
void FUN_0090e350(void);

// decompiled by BatchDecomp @ 0090e350 name=FUN_0090e350 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e350(void)

{
  _DAT_00987fa0 = ((void *)(0x009194a4u));
  if (DAT_00987fa4 != (void *)0x0) {
    operator_delete__(DAT_00987fa4);
  }
  _DAT_00987fa0 = ((void *)(0x00919488u));
  DAT_00987fa4 = (void *)0x0;
  return;
}


//==== 000090e390 0090e390_FUN_0090e390 ====
void FUN_0090e390(void);

// decompiled by BatchDecomp @ 0090e390 name=FUN_0090e390 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e390(void)

{
  _DAT_00987f50 = ((void *)(0x009194a4u));
  if (DAT_00987f54 != (void *)0x0) {
    operator_delete__(DAT_00987f54);
  }
  _DAT_00987f50 = ((void *)(0x00919488u));
  DAT_00987f54 = (void *)0x0;
  return;
}


//==== 000090e3d0 0090e3d0_FUN_0090e3d0 ====
void FUN_0090e3d0(void);

// decompiled by BatchDecomp @ 0090e3d0 name=FUN_0090e3d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e3d0(void)

{
  _DAT_00987f40 = ((void *)(0x009194a4u));
  if (DAT_00987f44 != (void *)0x0) {
    operator_delete__(DAT_00987f44);
  }
  _DAT_00987f40 = ((void *)(0x00919488u));
  DAT_00987f44 = (void *)0x0;
  return;
}


//==== 000090e410 0090e410_FUN_0090e410 ====
void FUN_0090e410(void);

// decompiled by BatchDecomp @ 0090e410 name=FUN_0090e410 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e410(void)

{
  _DAT_00987fc0 = ((void *)(0x009194a4u));
  if (DAT_00987fc4 != (void *)0x0) {
    operator_delete__(DAT_00987fc4);
  }
  _DAT_00987fc0 = ((void *)(0x00919488u));
  DAT_00987fc4 = (void *)0x0;
  return;
}


//==== 000090e450 0090e450_FUN_0090e450 ====
void FUN_0090e450(void);

// decompiled by BatchDecomp @ 0090e450 name=FUN_0090e450 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e450(void)

{
  _DAT_00987f80 = ((void *)(0x009194a4u));
  if (DAT_00987f84 != (void *)0x0) {
    operator_delete__(DAT_00987f84);
  }
  _DAT_00987f80 = ((void *)(0x00919488u));
  DAT_00987f84 = (void *)0x0;
  return;
}


//==== 000090e7b0 0090e7b0_FUN_0090e7b0 ====
void FUN_0090e7b0(void);

// decompiled by BatchDecomp @ 0090e7b0 name=FUN_0090e7b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e7b0(void)

{
  _DAT_009882a0 = ((void *)(0x009194a4u));
  if (DAT_009882a4 != (void *)0x0) {
    operator_delete__(DAT_009882a4);
  }
  _DAT_009882a0 = ((void *)(0x00919488u));
  DAT_009882a4 = (void *)0x0;
  return;
}


//==== 000090e7f0 0090e7f0_FUN_0090e7f0 ====
void FUN_0090e7f0(void);

// decompiled by BatchDecomp @ 0090e7f0 name=FUN_0090e7f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e7f0(void)

{
  _DAT_00988240 = ((void *)(0x009194a4u));
  if (DAT_00988244 != (void *)0x0) {
    operator_delete__(DAT_00988244);
  }
  _DAT_00988240 = ((void *)(0x00919488u));
  DAT_00988244 = (void *)0x0;
  return;
}


//==== 000090e830 0090e830_FUN_0090e830 ====
void FUN_0090e830(void);

// decompiled by BatchDecomp @ 0090e830 name=FUN_0090e830 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e830(void)

{
  _DAT_00988280 = ((void *)(0x009194a4u));
  if (DAT_00988284 != (void *)0x0) {
    operator_delete__(DAT_00988284);
  }
  _DAT_00988280 = ((void *)(0x00919488u));
  DAT_00988284 = (void *)0x0;
  return;
}


//==== 000090e870 0090e870_FUN_0090e870 ====
void FUN_0090e870(void);

// decompiled by BatchDecomp @ 0090e870 name=FUN_0090e870 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e870(void)

{
  _DAT_00988270 = ((void *)(0x009194a4u));
  if (DAT_00988274 != (void *)0x0) {
    operator_delete__(DAT_00988274);
  }
  _DAT_00988270 = ((void *)(0x00919488u));
  DAT_00988274 = (void *)0x0;
  return;
}


//==== 000090e8b0 0090e8b0_FUN_0090e8b0 ====
void FUN_0090e8b0(void);

// decompiled by BatchDecomp @ 0090e8b0 name=FUN_0090e8b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e8b0(void)

{
  _DAT_009882c0 = ((void *)(0x009194a4u));
  if (DAT_009882c4 != (void *)0x0) {
    operator_delete__(DAT_009882c4);
  }
  _DAT_009882c0 = ((void *)(0x00919488u));
  DAT_009882c4 = (void *)0x0;
  return;
}


//==== 000090e8f0 0090e8f0_FUN_0090e8f0 ====
void FUN_0090e8f0(void);

// decompiled by BatchDecomp @ 0090e8f0 name=FUN_0090e8f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e8f0(void)

{
  _DAT_00988230 = ((void *)(0x009194a4u));
  if (DAT_00988234 != (void *)0x0) {
    operator_delete__(DAT_00988234);
  }
  _DAT_00988230 = ((void *)(0x00919488u));
  DAT_00988234 = (void *)0x0;
  return;
}


//==== 000090e930 0090e930_FUN_0090e930 ====
void FUN_0090e930(void);

// decompiled by BatchDecomp @ 0090e930 name=FUN_0090e930 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e930(void)

{
  _DAT_009882b0 = ((void *)(0x009194a4u));
  if (DAT_009882b4 != (void *)0x0) {
    operator_delete__(DAT_009882b4);
  }
  _DAT_009882b0 = ((void *)(0x00919488u));
  DAT_009882b4 = (void *)0x0;
  return;
}


//==== 000090e970 0090e970_FUN_0090e970 ====
void FUN_0090e970(void);

// decompiled by BatchDecomp @ 0090e970 name=FUN_0090e970 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e970(void)

{
  _DAT_00988260 = ((void *)(0x009194a4u));
  if (DAT_00988264 != (void *)0x0) {
    operator_delete__(DAT_00988264);
  }
  _DAT_00988260 = ((void *)(0x00919488u));
  DAT_00988264 = (void *)0x0;
  return;
}


//==== 000090e9b0 0090e9b0_FUN_0090e9b0 ====
void FUN_0090e9b0(void);

// decompiled by BatchDecomp @ 0090e9b0 name=FUN_0090e9b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e9b0(void)

{
  _DAT_00988250 = ((void *)(0x009194a4u));
  if (DAT_00988254 != (void *)0x0) {
    operator_delete__(DAT_00988254);
  }
  _DAT_00988250 = ((void *)(0x00919488u));
  DAT_00988254 = (void *)0x0;
  return;
}


//==== 000090e9f0 0090e9f0_FUN_0090e9f0 ====
void FUN_0090e9f0(void);

// decompiled by BatchDecomp @ 0090e9f0 name=FUN_0090e9f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090e9f0(void)

{
  _DAT_009882d0 = ((void *)(0x009194a4u));
  if (DAT_009882d4 != (void *)0x0) {
    operator_delete__(DAT_009882d4);
  }
  _DAT_009882d0 = ((void *)(0x00919488u));
  DAT_009882d4 = (void *)0x0;
  return;
}


//==== 000090ea30 0090ea30_FUN_0090ea30 ====
void FUN_0090ea30(void);

// decompiled by BatchDecomp @ 0090ea30 name=FUN_0090ea30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ea30(void)

{
  _DAT_00988290 = ((void *)(0x009194a4u));
  if (DAT_00988294 != (void *)0x0) {
    operator_delete__(DAT_00988294);
  }
  _DAT_00988290 = ((void *)(0x00919488u));
  DAT_00988294 = (void *)0x0;
  return;
}


//==== 000090ed50 0090ed50_FUN_0090ed50 ====
void FUN_0090ed50(void);

// decompiled by BatchDecomp @ 0090ed50 name=FUN_0090ed50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ed50(void)

{
  _DAT_00988598 = ((void *)(0x009194a4u));
  if (DAT_0098859c != (void *)0x0) {
    operator_delete__(DAT_0098859c);
  }
  _DAT_00988598 = ((void *)(0x00919488u));
  DAT_0098859c = (void *)0x0;
  return;
}


//==== 000090ed90 0090ed90_FUN_0090ed90 ====
void FUN_0090ed90(void);

// decompiled by BatchDecomp @ 0090ed90 name=FUN_0090ed90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ed90(void)

{
  _DAT_00988528 = ((void *)(0x009194a4u));
  if (DAT_0098852c != (void *)0x0) {
    operator_delete__(DAT_0098852c);
  }
  _DAT_00988528 = ((void *)(0x00919488u));
  DAT_0098852c = (void *)0x0;
  return;
}


//==== 000090edd0 0090edd0_FUN_0090edd0 ====
void FUN_0090edd0(void);

// decompiled by BatchDecomp @ 0090edd0 name=FUN_0090edd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090edd0(void)

{
  _DAT_00988568 = ((void *)(0x009194a4u));
  if (DAT_0098856c != (void *)0x0) {
    operator_delete__(DAT_0098856c);
  }
  _DAT_00988568 = ((void *)(0x00919488u));
  DAT_0098856c = (void *)0x0;
  return;
}


//==== 000090ee10 0090ee10_FUN_0090ee10 ====
void FUN_0090ee10(void);

// decompiled by BatchDecomp @ 0090ee10 name=FUN_0090ee10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ee10(void)

{
  _DAT_00988558 = ((void *)(0x009194a4u));
  if (DAT_0098855c != (void *)0x0) {
    operator_delete__(DAT_0098855c);
  }
  _DAT_00988558 = ((void *)(0x00919488u));
  DAT_0098855c = (void *)0x0;
  return;
}


//==== 000090ee50 0090ee50_FUN_0090ee50 ====
void FUN_0090ee50(void);

// decompiled by BatchDecomp @ 0090ee50 name=FUN_0090ee50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ee50(void)

{
  _DAT_009885b8 = ((void *)(0x009194a4u));
  if (DAT_009885bc != (void *)0x0) {
    operator_delete__(DAT_009885bc);
  }
  _DAT_009885b8 = ((void *)(0x00919488u));
  DAT_009885bc = (void *)0x0;
  return;
}


//==== 000090ee90 0090ee90_FUN_0090ee90 ====
void FUN_0090ee90(void);

// decompiled by BatchDecomp @ 0090ee90 name=FUN_0090ee90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ee90(void)

{
  _DAT_00988518 = ((void *)(0x009194a4u));
  if (DAT_0098851c != (void *)0x0) {
    operator_delete__(DAT_0098851c);
  }
  _DAT_00988518 = ((void *)(0x00919488u));
  DAT_0098851c = (void *)0x0;
  return;
}


//==== 000090eed0 0090eed0_FUN_0090eed0 ====
void FUN_0090eed0(void);

// decompiled by BatchDecomp @ 0090eed0 name=FUN_0090eed0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090eed0(void)

{
  _DAT_009885a8 = ((void *)(0x009194a4u));
  if (DAT_009885ac != (void *)0x0) {
    operator_delete__(DAT_009885ac);
  }
  _DAT_009885a8 = ((void *)(0x00919488u));
  DAT_009885ac = (void *)0x0;
  return;
}


//==== 000090ef10 0090ef10_FUN_0090ef10 ====
void FUN_0090ef10(void);

// decompiled by BatchDecomp @ 0090ef10 name=FUN_0090ef10 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ef10(void)

{
  _DAT_00988548 = ((void *)(0x009194a4u));
  if (DAT_0098854c != (void *)0x0) {
    operator_delete__(DAT_0098854c);
  }
  _DAT_00988548 = ((void *)(0x00919488u));
  DAT_0098854c = (void *)0x0;
  return;
}


//==== 000090ef50 0090ef50_FUN_0090ef50 ====
void FUN_0090ef50(void);

// decompiled by BatchDecomp @ 0090ef50 name=FUN_0090ef50 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ef50(void)

{
  _DAT_00988538 = ((void *)(0x009194a4u));
  if (DAT_0098853c != (void *)0x0) {
    operator_delete__(DAT_0098853c);
  }
  _DAT_00988538 = ((void *)(0x00919488u));
  DAT_0098853c = (void *)0x0;
  return;
}


//==== 000090ef90 0090ef90_FUN_0090ef90 ====
void FUN_0090ef90(void);

// decompiled by BatchDecomp @ 0090ef90 name=FUN_0090ef90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090ef90(void)

{
  _DAT_00988578 = ((void *)(0x009194a4u));
  if (DAT_0098857c != (void *)0x0) {
    operator_delete__(DAT_0098857c);
  }
  _DAT_00988578 = ((void *)(0x00919488u));
  DAT_0098857c = (void *)0x0;
  return;
}


//==== 000090efd0 0090efd0_FUN_0090efd0 ====
void FUN_0090efd0(void);

// decompiled by BatchDecomp @ 0090efd0 name=FUN_0090efd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090efd0(void)

{
  _DAT_009885c8 = ((void *)(0x009194a4u));
  if (DAT_009885cc != (void *)0x0) {
    operator_delete__(DAT_009885cc);
  }
  _DAT_009885c8 = ((void *)(0x00919488u));
  DAT_009885cc = (void *)0x0;
  return;
}


//==== 000090f010 0090f010_FUN_0090f010 ====
void FUN_0090f010(void);

// decompiled by BatchDecomp @ 0090f010 name=FUN_0090f010 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f010(void)

{
  _DAT_00988588 = ((void *)(0x009194a4u));
  if (DAT_0098858c != (void *)0x0) {
    operator_delete__(DAT_0098858c);
  }
  _DAT_00988588 = ((void *)(0x00919488u));
  DAT_0098858c = (void *)0x0;
  return;
}


//==== 000090f370 0090f370_FUN_0090f370 ====
void FUN_0090f370(void);

// decompiled by BatchDecomp @ 0090f370 name=FUN_0090f370 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f370(void)

{
  _DAT_00988898 = ((void *)(0x009194a4u));
  if (DAT_0098889c != (void *)0x0) {
    operator_delete__(DAT_0098889c);
  }
  _DAT_00988898 = ((void *)(0x00919488u));
  DAT_0098889c = (void *)0x0;
  return;
}


//==== 000090f3b0 0090f3b0_FUN_0090f3b0 ====
void FUN_0090f3b0(void);

// decompiled by BatchDecomp @ 0090f3b0 name=FUN_0090f3b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f3b0(void)

{
  _DAT_00988838 = ((void *)(0x009194a4u));
  if (DAT_0098883c != (void *)0x0) {
    operator_delete__(DAT_0098883c);
  }
  _DAT_00988838 = ((void *)(0x00919488u));
  DAT_0098883c = (void *)0x0;
  return;
}


//==== 000090f3f0 0090f3f0_FUN_0090f3f0 ====
void FUN_0090f3f0(void);

// decompiled by BatchDecomp @ 0090f3f0 name=FUN_0090f3f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f3f0(void)

{
  _DAT_00988878 = ((void *)(0x009194a4u));
  if (DAT_0098887c != (void *)0x0) {
    operator_delete__(DAT_0098887c);
  }
  _DAT_00988878 = ((void *)(0x00919488u));
  DAT_0098887c = (void *)0x0;
  return;
}


//==== 000090f430 0090f430_FUN_0090f430 ====
void FUN_0090f430(void);

// decompiled by BatchDecomp @ 0090f430 name=FUN_0090f430 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f430(void)

{
  _DAT_00988868 = ((void *)(0x009194a4u));
  if (DAT_0098886c != (void *)0x0) {
    operator_delete__(DAT_0098886c);
  }
  _DAT_00988868 = ((void *)(0x00919488u));
  DAT_0098886c = (void *)0x0;
  return;
}


//==== 000090f470 0090f470_FUN_0090f470 ====
void FUN_0090f470(void);

// decompiled by BatchDecomp @ 0090f470 name=FUN_0090f470 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f470(void)

{
  _DAT_009888b8 = ((void *)(0x009194a4u));
  if (DAT_009888bc != (void *)0x0) {
    operator_delete__(DAT_009888bc);
  }
  _DAT_009888b8 = ((void *)(0x00919488u));
  DAT_009888bc = (void *)0x0;
  return;
}


//==== 000090f4b0 0090f4b0_FUN_0090f4b0 ====
void FUN_0090f4b0(void);

// decompiled by BatchDecomp @ 0090f4b0 name=FUN_0090f4b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f4b0(void)

{
  _DAT_00988828 = ((void *)(0x009194a4u));
  if (DAT_0098882c != (void *)0x0) {
    operator_delete__(DAT_0098882c);
  }
  _DAT_00988828 = ((void *)(0x00919488u));
  DAT_0098882c = (void *)0x0;
  return;
}


//==== 000090f4f0 0090f4f0_FUN_0090f4f0 ====
void FUN_0090f4f0(void);

// decompiled by BatchDecomp @ 0090f4f0 name=FUN_0090f4f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f4f0(void)

{
  _DAT_009888d8 = ((void *)(0x009194a4u));
  if (DAT_009888dc != (void *)0x0) {
    operator_delete__(DAT_009888dc);
  }
  _DAT_009888d8 = ((void *)(0x00919488u));
  DAT_009888dc = (void *)0x0;
  return;
}


//==== 000090f530 0090f530_FUN_0090f530 ====
void FUN_0090f530(void);

// decompiled by BatchDecomp @ 0090f530 name=FUN_0090f530 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f530(void)

{
  _DAT_009888a8 = ((void *)(0x009194a4u));
  if (DAT_009888ac != (void *)0x0) {
    operator_delete__(DAT_009888ac);
  }
  _DAT_009888a8 = ((void *)(0x00919488u));
  DAT_009888ac = (void *)0x0;
  return;
}


//==== 000090f570 0090f570_FUN_0090f570 ====
void FUN_0090f570(void);

// decompiled by BatchDecomp @ 0090f570 name=FUN_0090f570 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f570(void)

{
  _DAT_00988858 = ((void *)(0x009194a4u));
  if (DAT_0098885c != (void *)0x0) {
    operator_delete__(DAT_0098885c);
  }
  _DAT_00988858 = ((void *)(0x00919488u));
  DAT_0098885c = (void *)0x0;
  return;
}


//==== 000090f5b0 0090f5b0_FUN_0090f5b0 ====
void FUN_0090f5b0(void);

// decompiled by BatchDecomp @ 0090f5b0 name=FUN_0090f5b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f5b0(void)

{
  _DAT_00988848 = ((void *)(0x009194a4u));
  if (DAT_0098884c != (void *)0x0) {
    operator_delete__(DAT_0098884c);
  }
  _DAT_00988848 = ((void *)(0x00919488u));
  DAT_0098884c = (void *)0x0;
  return;
}


//==== 000090f5f0 0090f5f0_FUN_0090f5f0 ====
void FUN_0090f5f0(void);

// decompiled by BatchDecomp @ 0090f5f0 name=FUN_0090f5f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f5f0(void)

{
  _DAT_009888e8 = ((void *)(0x009194a4u));
  if (DAT_009888ec != (void *)0x0) {
    operator_delete__(DAT_009888ec);
  }
  _DAT_009888e8 = ((void *)(0x00919488u));
  DAT_009888ec = (void *)0x0;
  return;
}


//==== 000090f630 0090f630_FUN_0090f630 ====
void FUN_0090f630(void);

// decompiled by BatchDecomp @ 0090f630 name=FUN_0090f630 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f630(void)

{
  _DAT_009888c8 = ((void *)(0x009194a4u));
  if (DAT_009888cc != (void *)0x0) {
    operator_delete__(DAT_009888cc);
  }
  _DAT_009888c8 = ((void *)(0x00919488u));
  DAT_009888cc = (void *)0x0;
  return;
}


//==== 000090f670 0090f670_FUN_0090f670 ====
void FUN_0090f670(void);

// decompiled by BatchDecomp @ 0090f670 name=FUN_0090f670 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f670(void)

{
  _DAT_00988888 = ((void *)(0x009194a4u));
  if (DAT_0098888c != (void *)0x0) {
    operator_delete__(DAT_0098888c);
  }
  _DAT_00988888 = ((void *)(0x00919488u));
  DAT_0098888c = (void *)0x0;
  return;
}


//==== 000090f9f0 0090f9f0_FUN_0090f9f0 ====
void FUN_0090f9f0(void);

// decompiled by BatchDecomp @ 0090f9f0 name=FUN_0090f9f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090f9f0(void)

{
  _DAT_00988bc8 = ((void *)(0x009194a4u));
  if (DAT_00988bcc != (void *)0x0) {
    operator_delete__(DAT_00988bcc);
  }
  _DAT_00988bc8 = ((void *)(0x00919488u));
  DAT_00988bcc = (void *)0x0;
  return;
}


//==== 000090fa30 0090fa30_FUN_0090fa30 ====
void FUN_0090fa30(void);

// decompiled by BatchDecomp @ 0090fa30 name=FUN_0090fa30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fa30(void)

{
  _DAT_00988b68 = ((void *)(0x009194a4u));
  if (DAT_00988b6c != (void *)0x0) {
    operator_delete__(DAT_00988b6c);
  }
  _DAT_00988b68 = ((void *)(0x00919488u));
  DAT_00988b6c = (void *)0x0;
  return;
}


//==== 000090fa70 0090fa70_FUN_0090fa70 ====
void FUN_0090fa70(void);

// decompiled by BatchDecomp @ 0090fa70 name=FUN_0090fa70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fa70(void)

{
  _DAT_00988ba8 = ((void *)(0x009194a4u));
  if (DAT_00988bac != (void *)0x0) {
    operator_delete__(DAT_00988bac);
  }
  _DAT_00988ba8 = ((void *)(0x00919488u));
  DAT_00988bac = (void *)0x0;
  return;
}


//==== 000090fab0 0090fab0_FUN_0090fab0 ====
void FUN_0090fab0(void);

// decompiled by BatchDecomp @ 0090fab0 name=FUN_0090fab0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fab0(void)

{
  _DAT_00988b98 = ((void *)(0x009194a4u));
  if (DAT_00988b9c != (void *)0x0) {
    operator_delete__(DAT_00988b9c);
  }
  _DAT_00988b98 = ((void *)(0x00919488u));
  DAT_00988b9c = (void *)0x0;
  return;
}


//==== 000090faf0 0090faf0_FUN_0090faf0 ====
void FUN_0090faf0(void);

// decompiled by BatchDecomp @ 0090faf0 name=FUN_0090faf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090faf0(void)

{
  _DAT_00988be8 = ((void *)(0x009194a4u));
  if (DAT_00988bec != (void *)0x0) {
    operator_delete__(DAT_00988bec);
  }
  _DAT_00988be8 = ((void *)(0x00919488u));
  DAT_00988bec = (void *)0x0;
  return;
}


//==== 000090fb30 0090fb30_FUN_0090fb30 ====
void FUN_0090fb30(void);

// decompiled by BatchDecomp @ 0090fb30 name=FUN_0090fb30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fb30(void)

{
  _DAT_00988b58 = ((void *)(0x009194a4u));
  if (DAT_00988b5c != (void *)0x0) {
    operator_delete__(DAT_00988b5c);
  }
  _DAT_00988b58 = ((void *)(0x00919488u));
  DAT_00988b5c = (void *)0x0;
  return;
}


//==== 000090fb70 0090fb70_FUN_0090fb70 ====
void FUN_0090fb70(void);

// decompiled by BatchDecomp @ 0090fb70 name=FUN_0090fb70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fb70(void)

{
  _DAT_00988c08 = ((void *)(0x009194a4u));
  if (DAT_00988c0c != (void *)0x0) {
    operator_delete__(DAT_00988c0c);
  }
  _DAT_00988c08 = ((void *)(0x00919488u));
  DAT_00988c0c = (void *)0x0;
  return;
}


//==== 000090fbb0 0090fbb0_FUN_0090fbb0 ====
void FUN_0090fbb0(void);

// decompiled by BatchDecomp @ 0090fbb0 name=FUN_0090fbb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fbb0(void)

{
  _DAT_00988bd8 = ((void *)(0x009194a4u));
  if (DAT_00988bdc != (void *)0x0) {
    operator_delete__(DAT_00988bdc);
  }
  _DAT_00988bd8 = ((void *)(0x00919488u));
  DAT_00988bdc = (void *)0x0;
  return;
}


//==== 000090fbf0 0090fbf0_FUN_0090fbf0 ====
void FUN_0090fbf0(void);

// decompiled by BatchDecomp @ 0090fbf0 name=FUN_0090fbf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fbf0(void)

{
  _DAT_00988b88 = ((void *)(0x009194a4u));
  if (DAT_00988b8c != (void *)0x0) {
    operator_delete__(DAT_00988b8c);
  }
  _DAT_00988b88 = ((void *)(0x00919488u));
  DAT_00988b8c = (void *)0x0;
  return;
}


//==== 000090fc30 0090fc30_FUN_0090fc30 ====
void FUN_0090fc30(void);

// decompiled by BatchDecomp @ 0090fc30 name=FUN_0090fc30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fc30(void)

{
  _DAT_00988b78 = ((void *)(0x009194a4u));
  if (DAT_00988b7c != (void *)0x0) {
    operator_delete__(DAT_00988b7c);
  }
  _DAT_00988b78 = ((void *)(0x00919488u));
  DAT_00988b7c = (void *)0x0;
  return;
}


//==== 000090fc70 0090fc70_FUN_0090fc70 ====
void FUN_0090fc70(void);

// decompiled by BatchDecomp @ 0090fc70 name=FUN_0090fc70 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fc70(void)

{
  _DAT_00988c18 = ((void *)(0x009194a4u));
  if (DAT_00988c1c != (void *)0x0) {
    operator_delete__(DAT_00988c1c);
  }
  _DAT_00988c18 = ((void *)(0x00919488u));
  DAT_00988c1c = (void *)0x0;
  return;
}


//==== 000090fcb0 0090fcb0_FUN_0090fcb0 ====
void FUN_0090fcb0(void);

// decompiled by BatchDecomp @ 0090fcb0 name=FUN_0090fcb0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fcb0(void)

{
  _DAT_00988bf8 = ((void *)(0x009194a4u));
  if (DAT_00988bfc != (void *)0x0) {
    operator_delete__(DAT_00988bfc);
  }
  _DAT_00988bf8 = ((void *)(0x00919488u));
  DAT_00988bfc = (void *)0x0;
  return;
}


//==== 000090fcf0 0090fcf0_FUN_0090fcf0 ====
void FUN_0090fcf0(void);

// decompiled by BatchDecomp @ 0090fcf0 name=FUN_0090fcf0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0090fcf0(void)

{
  _DAT_00988bb8 = ((void *)(0x009194a4u));
  if (DAT_00988bbc != (void *)0x0) {
    operator_delete__(DAT_00988bbc);
  }
  _DAT_00988bb8 = ((void *)(0x00919488u));
  DAT_00988bbc = (void *)0x0;
  return;
}


//==== 0000910050 00910050_FUN_00910050 ====
void FUN_00910050(void);

// decompiled by BatchDecomp @ 00910050 name=FUN_00910050 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910050(void)

{
  _DAT_009895f0 = ((void *)(0x009194a4u));
  if (DAT_009895f4 != (void *)0x0) {
    operator_delete__(DAT_009895f4);
  }
  _DAT_009895f0 = ((void *)(0x00919488u));
  DAT_009895f4 = (void *)0x0;
  return;
}


//==== 00009101b0 009101b0_FUN_009101b0 ====
void FUN_009101b0(void);

// decompiled by BatchDecomp @ 009101b0 name=FUN_009101b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009101b0(void)

{
  _DAT_00989690 = ((void *)(0x009194a4u));
  if (DAT_00989694 != (void *)0x0) {
    operator_delete__(DAT_00989694);
  }
  _DAT_00989690 = ((void *)(0x00919488u));
  DAT_00989694 = (void *)0x0;
  return;
}


//==== 00009101f0 009101f0_FUN_009101f0 ====
void FUN_009101f0(void);

// decompiled by BatchDecomp @ 009101f0 name=FUN_009101f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009101f0(void)

{
  _DAT_00989680 = ((void *)(0x009194a4u));
  if (DAT_00989684 != (void *)0x0) {
    operator_delete__(DAT_00989684);
  }
  _DAT_00989680 = ((void *)(0x00919488u));
  DAT_00989684 = (void *)0x0;
  return;
}


//==== 00009102b0 009102b0_FUN_009102b0 ====
void FUN_009102b0(void);

// decompiled by BatchDecomp @ 009102b0 name=FUN_009102b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009102b0(void)

{
  _DAT_009897a8 = ((void *)(0x009194a4u));
  if (DAT_009897ac != (void *)0x0) {
    operator_delete__(DAT_009897ac);
  }
  _DAT_009897a8 = ((void *)(0x00919488u));
  DAT_009897ac = (void *)0x0;
  return;
}


//==== 00009102f0 009102f0_FUN_009102f0 ====
void FUN_009102f0(void);

// decompiled by BatchDecomp @ 009102f0 name=FUN_009102f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009102f0(void)

{
  _DAT_00989798 = ((void *)(0x009194a4u));
  if (DAT_0098979c != (void *)0x0) {
    operator_delete__(DAT_0098979c);
  }
  _DAT_00989798 = ((void *)(0x00919488u));
  DAT_0098979c = (void *)0x0;
  return;
}


//==== 00009103c0 009103c0_FUN_009103c0 ====
void FUN_009103c0(void);

// decompiled by BatchDecomp @ 009103c0 name=FUN_009103c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009103c0(void)

{
  _DAT_00989810 = ((void *)(0x009194a4u));
  if (DAT_00989814 != (void *)0x0) {
    operator_delete__(DAT_00989814);
  }
  _DAT_00989810 = ((void *)(0x00919488u));
  DAT_00989814 = (void *)0x0;
  return;
}


//==== 00009106b0 009106b0_FUN_009106b0 ====
void FUN_009106b0(void);

// decompiled by BatchDecomp @ 009106b0 name=FUN_009106b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009106b0(void)

{
  _DAT_0098c9f8 = ((void *)(0x009194a4u));
  if (DAT_0098c9fc != (void *)0x0) {
    operator_delete__(DAT_0098c9fc);
  }
  _DAT_0098c9f8 = ((void *)(0x00919488u));
  DAT_0098c9fc = (void *)0x0;
  return;
}


//==== 00009106f0 009106f0_FUN_009106f0 ====
void FUN_009106f0(void);

// decompiled by BatchDecomp @ 009106f0 name=FUN_009106f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009106f0(void)

{
  _DAT_0098c9e8 = ((void *)(0x009194a4u));
  if (DAT_0098c9ec != (void *)0x0) {
    operator_delete__(DAT_0098c9ec);
  }
  _DAT_0098c9e8 = ((void *)(0x00919488u));
  DAT_0098c9ec = (void *)0x0;
  return;
}


//==== 00009107f0 009107f0_FUN_009107f0 ====
void FUN_009107f0(void);

// decompiled by BatchDecomp @ 009107f0 name=FUN_009107f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009107f0(void)

{
  _DAT_0098ca68 = ((void *)(0x009194a4u));
  if (DAT_0098ca6c != (void *)0x0) {
    operator_delete__(DAT_0098ca6c);
  }
  _DAT_0098ca68 = ((void *)(0x00919488u));
  DAT_0098ca6c = (void *)0x0;
  return;
}


//==== 00009109f0 009109f0_FUN_009109f0 ====
void FUN_009109f0(void);

// decompiled by BatchDecomp @ 009109f0 name=FUN_009109f0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009109f0(void)

{
  _DAT_0098cb28 = ((void *)(0x009194a4u));
  if (DAT_0098cb2c != (void *)0x0) {
    operator_delete__(DAT_0098cb2c);
  }
  _DAT_0098cb28 = ((void *)(0x00919488u));
  DAT_0098cb2c = (void *)0x0;
  return;
}


//==== 0000910a30 00910a30_FUN_00910a30 ====
void FUN_00910a30(void);

// decompiled by BatchDecomp @ 00910a30 name=FUN_00910a30 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910a30(void)

{
  _DAT_0098cb18 = ((void *)(0x009194a4u));
  if (DAT_0098cb1c != (void *)0x0) {
    operator_delete__(DAT_0098cb1c);
  }
  _DAT_0098cb18 = ((void *)(0x00919488u));
  DAT_0098cb1c = (void *)0x0;
  return;
}


//==== 0000910ad0 00910ad0_FUN_00910ad0 ====
void FUN_00910ad0(void);

// decompiled by BatchDecomp @ 00910ad0 name=FUN_00910ad0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910ad0(void)

{
  _DAT_0098cc58 = ((void *)(0x009194a4u));
  if (DAT_0098cc5c != (void *)0x0) {
    operator_delete__(DAT_0098cc5c);
  }
  _DAT_0098cc58 = ((void *)(0x00919488u));
  DAT_0098cc5c = (void *)0x0;
  return;
}


//==== 0000910b90 00910b90_FUN_00910b90 ====
void FUN_00910b90(void);

// decompiled by BatchDecomp @ 00910b90 name=FUN_00910b90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910b90(void)

{
  _DAT_0098cd00 = ((void *)(0x009194a4u));
  if (DAT_0098cd04 != (void *)0x0) {
    operator_delete__(DAT_0098cd04);
  }
  _DAT_0098cd00 = ((void *)(0x00919488u));
  DAT_0098cd04 = (void *)0x0;
  return;
}


//==== 0000910bd0 00910bd0_FUN_00910bd0 ====
void FUN_00910bd0(void);

// decompiled by BatchDecomp @ 00910bd0 name=FUN_00910bd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910bd0(void)

{
  _DAT_0098ccf0 = ((void *)(0x009194a4u));
  if (DAT_0098ccf4 != (void *)0x0) {
    operator_delete__(DAT_0098ccf4);
  }
  _DAT_0098ccf0 = ((void *)(0x00919488u));
  DAT_0098ccf4 = (void *)0x0;
  return;
}


//==== 0000910f90 00910f90_FUN_00910f90 ====
void FUN_00910f90(void);

// decompiled by BatchDecomp @ 00910f90 name=FUN_00910f90 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910f90(void)

{
  _DAT_0098cda8 = ((void *)(0x009194a4u));
  if (DAT_0098cdac != (void *)0x0) {
    operator_delete__(DAT_0098cdac);
  }
  _DAT_0098cda8 = ((void *)(0x00919488u));
  DAT_0098cdac = (void *)0x0;
  return;
}


//==== 0000910fd0 00910fd0_FUN_00910fd0 ====
void FUN_00910fd0(void);

// decompiled by BatchDecomp @ 00910fd0 name=FUN_00910fd0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00910fd0(void)

{
  _DAT_0098cd98 = ((void *)(0x009194a4u));
  if (DAT_0098cd9c != (void *)0x0) {
    operator_delete__(DAT_0098cd9c);
  }
  _DAT_0098cd98 = ((void *)(0x00919488u));
  DAT_0098cd9c = (void *)0x0;
  return;
}


//==== 0000911390 00911390_FUN_00911390 ====
void FUN_00911390(void);

// decompiled by BatchDecomp @ 00911390 name=FUN_00911390 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911390(void)

{
  _DAT_0098d080 = ((void *)(0x009194a4u));
  if (DAT_0098d084 != (void *)0x0) {
    operator_delete__(DAT_0098d084);
  }
  _DAT_0098d080 = ((void *)(0x00919488u));
  DAT_0098d084 = (void *)0x0;
  return;
}


//==== 00009113d0 009113d0_FUN_009113d0 ====
void FUN_009113d0(void);

// decompiled by BatchDecomp @ 009113d0 name=FUN_009113d0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009113d0(void)

{
  _DAT_0098d070 = ((void *)(0x009194a4u));
  if (DAT_0098d074 != (void *)0x0) {
    operator_delete__(DAT_0098d074);
  }
  _DAT_0098d070 = ((void *)(0x00919488u));
  DAT_0098d074 = (void *)0x0;
  return;
}


//==== 00009114b0 009114b0_FUN_009114b0 ====
void FUN_009114b0(void);

// decompiled by BatchDecomp @ 009114b0 name=FUN_009114b0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009114b0(void)

{
  _DAT_0098d100 = ((void *)(0x009194a4u));
  if (DAT_0098d104 != (void *)0x0) {
    operator_delete__(DAT_0098d104);
  }
  _DAT_0098d100 = ((void *)(0x00919488u));
  DAT_0098d104 = (void *)0x0;
  return;
}


//==== 0000911550 00911550_FUN_00911550 ====
void FUN_00911550(void);

// decompiled by BatchDecomp @ 00911550 name=FUN_00911550 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911550(void)

{
  _DAT_0098d1f8 = ((void *)(0x009194a4u));
  if (DAT_0098d1fc != (void *)0x0) {
    operator_delete__(DAT_0098d1fc);
  }
  _DAT_0098d1f8 = ((void *)(0x00919488u));
  DAT_0098d1fc = (void *)0x0;
  return;
}


//==== 0000911590 00911590_FUN_00911590 ====
void FUN_00911590(void);

// decompiled by BatchDecomp @ 00911590 name=FUN_00911590 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911590(void)

{
  _DAT_0098d1e8 = ((void *)(0x009194a4u));
  if (DAT_0098d1ec != (void *)0x0) {
    operator_delete__(DAT_0098d1ec);
  }
  _DAT_0098d1e8 = ((void *)(0x00919488u));
  DAT_0098d1ec = (void *)0x0;
  return;
}


//==== 0000911650 00911650_FUN_00911650 ====
void FUN_00911650(void);

// decompiled by BatchDecomp @ 00911650 name=FUN_00911650 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911650(void)

{
  _DAT_0098d290 = ((void *)(0x009194a4u));
  if (DAT_0098d294 != (void *)0x0) {
    operator_delete__(DAT_0098d294);
  }
  _DAT_0098d290 = ((void *)(0x00919488u));
  DAT_0098d294 = (void *)0x0;
  return;
}


//==== 0000911690 00911690_FUN_00911690 ====
void FUN_00911690(void);

// decompiled by BatchDecomp @ 00911690 name=FUN_00911690 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911690(void)

{
  _DAT_0098d280 = ((void *)(0x009194a4u));
  if (DAT_0098d284 != (void *)0x0) {
    operator_delete__(DAT_0098d284);
  }
  _DAT_0098d280 = ((void *)(0x00919488u));
  DAT_0098d284 = (void *)0x0;
  return;
}


//==== 0000911780 00911780_FUN_00911780 ====
void FUN_00911780(void);

// decompiled by BatchDecomp @ 00911780 name=FUN_00911780 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911780(void)

{
  _DAT_0098d338 = ((void *)(0x009194a4u));
  if (DAT_0098d33c != (void *)0x0) {
    operator_delete__(DAT_0098d33c);
  }
  _DAT_0098d338 = ((void *)(0x00919488u));
  DAT_0098d33c = (void *)0x0;
  return;
}


//==== 00009117c0 009117c0_FUN_009117c0 ====
void FUN_009117c0(void);

// decompiled by BatchDecomp @ 009117c0 name=FUN_009117c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009117c0(void)

{
  _DAT_0098d328 = ((void *)(0x009194a4u));
  if (DAT_0098d32c != (void *)0x0) {
    operator_delete__(DAT_0098d32c);
  }
  _DAT_0098d328 = ((void *)(0x00919488u));
  DAT_0098d32c = (void *)0x0;
  return;
}


//==== 0000911880 00911880_FUN_00911880 ====
void FUN_00911880(void);

// decompiled by BatchDecomp @ 00911880 name=FUN_00911880 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911880(void)

{
  _DAT_0099223c = ((void *)(0x009194a4u));
  if (DAT_00992240 != (void *)0x0) {
    operator_delete__(DAT_00992240);
  }
  _DAT_0099223c = ((void *)(0x00919488u));
  DAT_00992240 = (void *)0x0;
  return;
}


//==== 0000911920 00911920_FUN_00911920 ====
void FUN_00911920(void);

// decompiled by BatchDecomp @ 00911920 name=FUN_00911920 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911920(void)

{
  _DAT_009922c8 = ((void *)(0x009194a4u));
  if (DAT_009922cc != (void *)0x0) {
    operator_delete__(DAT_009922cc);
  }
  _DAT_009922c8 = ((void *)(0x00919488u));
  DAT_009922cc = (void *)0x0;
  return;
}


//==== 0000911960 00911960_FUN_00911960 ====
void FUN_00911960(void);

// decompiled by BatchDecomp @ 00911960 name=FUN_00911960 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911960(void)

{
  _DAT_009922b8 = ((void *)(0x009194a4u));
  if (DAT_009922bc != (void *)0x0) {
    operator_delete__(DAT_009922bc);
  }
  _DAT_009922b8 = ((void *)(0x00919488u));
  DAT_009922bc = (void *)0x0;
  return;
}


//==== 0000911a20 00911a20_FUN_00911a20 ====
void FUN_00911a20(void);

// decompiled by BatchDecomp @ 00911a20 name=FUN_00911a20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911a20(void)

{
  _DAT_00992360 = ((void *)(0x009194a4u));
  if (DAT_00992364 != (void *)0x0) {
    operator_delete__(DAT_00992364);
  }
  _DAT_00992360 = ((void *)(0x00919488u));
  DAT_00992364 = (void *)0x0;
  return;
}


//==== 0000911a60 00911a60_FUN_00911a60 ====
void FUN_00911a60(void);

// decompiled by BatchDecomp @ 00911a60 name=FUN_00911a60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911a60(void)

{
  _DAT_00992350 = ((void *)(0x009194a4u));
  if (DAT_00992354 != (void *)0x0) {
    operator_delete__(DAT_00992354);
  }
  _DAT_00992350 = ((void *)(0x00919488u));
  DAT_00992354 = (void *)0x0;
  return;
}


//==== 0000911b20 00911b20_FUN_00911b20 ====
void FUN_00911b20(void);

// decompiled by BatchDecomp @ 00911b20 name=FUN_00911b20 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911b20(void)

{
  _DAT_009923f8 = ((void *)(0x009194a4u));
  if (DAT_009923fc != (void *)0x0) {
    operator_delete__(DAT_009923fc);
  }
  _DAT_009923f8 = ((void *)(0x00919488u));
  DAT_009923fc = (void *)0x0;
  return;
}


//==== 0000911b60 00911b60_FUN_00911b60 ====
void FUN_00911b60(void);

// decompiled by BatchDecomp @ 00911b60 name=FUN_00911b60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911b60(void)

{
  _DAT_009923e8 = ((void *)(0x009194a4u));
  if (DAT_009923ec != (void *)0x0) {
    operator_delete__(DAT_009923ec);
  }
  _DAT_009923e8 = ((void *)(0x00919488u));
  DAT_009923ec = (void *)0x0;
  return;
}


//==== 0000911c00 00911c00_FUN_00911c00 ====
void FUN_00911c00(void);

// decompiled by BatchDecomp @ 00911c00 name=FUN_00911c00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911c00(void)

{
  _DAT_00992488 = ((void *)(0x009194a4u));
  if (DAT_0099248c != (void *)0x0) {
    operator_delete__(DAT_0099248c);
  }
  _DAT_00992488 = ((void *)(0x00919488u));
  DAT_0099248c = (void *)0x0;
  return;
}


//==== 0000911c80 00911c80_FUN_00911c80 ====
void FUN_00911c80(void);

// decompiled by BatchDecomp @ 00911c80 name=FUN_00911c80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911c80(void)

{
  _DAT_009924e8 = ((void *)(0x009194a4u));
  if (DAT_009924ec != (void *)0x0) {
    operator_delete__(DAT_009924ec);
  }
  _DAT_009924e8 = ((void *)(0x00919488u));
  DAT_009924ec = (void *)0x0;
  return;
}


//==== 0000911d00 00911d00_FUN_00911d00 ====
void FUN_00911d00(void);

// decompiled by BatchDecomp @ 00911d00 name=FUN_00911d00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911d00(void)

{
  _DAT_00992550 = ((void *)(0x009194a4u));
  if (DAT_00992554 != (void *)0x0) {
    operator_delete__(DAT_00992554);
  }
  _DAT_00992550 = ((void *)(0x00919488u));
  DAT_00992554 = (void *)0x0;
  return;
}


//==== 0000911d60 00911d60_FUN_00911d60 ====
void FUN_00911d60(void);

// decompiled by BatchDecomp @ 00911d60 name=FUN_00911d60 conv=unknown body=49

void FUN_00911d60(void)

{
  PTR__vftable__009608f8 = (undefined *)((void *)(0x009194a4u));
  if (DAT_009608fc != (void *)0x0) {
    operator_delete__(DAT_009608fc);
  }
  PTR__vftable__009608f8 = (undefined *)((void *)(0x00919488u));
  DAT_009608fc = (void *)0x0;
  return;
}


//==== 0000911dc0 00911dc0_FUN_00911dc0 ====
void FUN_00911dc0(void);

// decompiled by BatchDecomp @ 00911dc0 name=FUN_00911dc0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911dc0(void)

{
  _DAT_009925b0 = ((void *)(0x009194a4u));
  if (DAT_009925b4 != (void *)0x0) {
    operator_delete__(DAT_009925b4);
  }
  _DAT_009925b0 = ((void *)(0x00919488u));
  DAT_009925b4 = (void *)0x0;
  return;
}


//==== 0000911e60 00911e60_FUN_00911e60 ====
void FUN_00911e60(void);

// decompiled by BatchDecomp @ 00911e60 name=FUN_00911e60 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911e60(void)

{
  _DAT_00992640 = ((void *)(0x009194a4u));
  if (DAT_00992644 != (void *)0x0) {
    operator_delete__(DAT_00992644);
  }
  _DAT_00992640 = ((void *)(0x00919488u));
  DAT_00992644 = (void *)0x0;
  return;
}


//==== 0000911ea0 00911ea0_FUN_00911ea0 ====
void FUN_00911ea0(void);

// decompiled by BatchDecomp @ 00911ea0 name=FUN_00911ea0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00911ea0(void)

{
  _DAT_00992630 = ((void *)(0x009194a4u));
  if (DAT_00992634 != (void *)0x0) {
    operator_delete__(DAT_00992634);
  }
  _DAT_00992630 = ((void *)(0x00919488u));
  DAT_00992634 = (void *)0x0;
  return;
}


//==== 0000912000 00912000_FUN_00912000 ====
void FUN_00912000(void);

// decompiled by BatchDecomp @ 00912000 name=FUN_00912000 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912000(void)

{
  _DAT_00992a24 = ((void *)(0x009194a4u));
  if (DAT_00992a28 != (void *)0x0) {
    operator_delete__(DAT_00992a28);
  }
  _DAT_00992a24 = ((void *)(0x00919488u));
  DAT_00992a28 = (void *)0x0;
  return;
}


//==== 0000912040 00912040_FUN_00912040 ====
void FUN_00912040(void);

// decompiled by BatchDecomp @ 00912040 name=FUN_00912040 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912040(void)

{
  _DAT_00992a14 = ((void *)(0x009194a4u));
  if (DAT_00992a18 != (void *)0x0) {
    operator_delete__(DAT_00992a18);
  }
  _DAT_00992a14 = ((void *)(0x00919488u));
  DAT_00992a18 = (void *)0x0;
  return;
}


//==== 00009120e0 009120e0_FUN_009120e0 ====
void FUN_009120e0(void);

// decompiled by BatchDecomp @ 009120e0 name=FUN_009120e0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009120e0(void)

{
  _DAT_00992a90 = ((void *)(0x009194a4u));
  if (DAT_00992a94 != (void *)0x0) {
    operator_delete__(DAT_00992a94);
  }
  _DAT_00992a90 = ((void *)(0x00919488u));
  DAT_00992a94 = (void *)0x0;
  return;
}


//==== 0000912180 00912180_FUN_00912180 ====
void FUN_00912180(void);

// decompiled by BatchDecomp @ 00912180 name=FUN_00912180 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912180(void)

{
  _DAT_00992b20 = ((void *)(0x009194a4u));
  if (DAT_00992b24 != (void *)0x0) {
    operator_delete__(DAT_00992b24);
  }
  _DAT_00992b20 = ((void *)(0x00919488u));
  DAT_00992b24 = (void *)0x0;
  return;
}


//==== 00009121c0 009121c0_FUN_009121c0 ====
void FUN_009121c0(void);

// decompiled by BatchDecomp @ 009121c0 name=FUN_009121c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009121c0(void)

{
  _DAT_00992b10 = ((void *)(0x009194a4u));
  if (DAT_00992b14 != (void *)0x0) {
    operator_delete__(DAT_00992b14);
  }
  _DAT_00992b10 = ((void *)(0x00919488u));
  DAT_00992b14 = (void *)0x0;
  return;
}


//==== 0000912280 00912280_FUN_00912280 ====
void FUN_00912280(void);

// decompiled by BatchDecomp @ 00912280 name=FUN_00912280 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912280(void)

{
  _DAT_00992bb8 = ((void *)(0x009194a4u));
  if (DAT_00992bbc != (void *)0x0) {
    operator_delete__(DAT_00992bbc);
  }
  _DAT_00992bb8 = ((void *)(0x00919488u));
  DAT_00992bbc = (void *)0x0;
  return;
}


//==== 00009122c0 009122c0_FUN_009122c0 ====
void FUN_009122c0(void);

// decompiled by BatchDecomp @ 009122c0 name=FUN_009122c0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009122c0(void)

{
  _DAT_00992ba8 = ((void *)(0x009194a4u));
  if (DAT_00992bac != (void *)0x0) {
    operator_delete__(DAT_00992bac);
  }
  _DAT_00992ba8 = ((void *)(0x00919488u));
  DAT_00992bac = (void *)0x0;
  return;
}


//==== 0000912360 00912360_FUN_00912360 ====
void FUN_00912360(void);

// decompiled by BatchDecomp @ 00912360 name=FUN_00912360 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912360(void)

{
  _DAT_00992c20 = ((void *)(0x009194a4u));
  if (DAT_00992c24 != (void *)0x0) {
    operator_delete__(DAT_00992c24);
  }
  _DAT_00992c20 = ((void *)(0x00919488u));
  DAT_00992c24 = (void *)0x0;
  return;
}


//==== 0000912460 00912460_FUN_00912460 ====
void FUN_00912460(void);

// decompiled by BatchDecomp @ 00912460 name=FUN_00912460 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912460(void)

{
  _DAT_00992cd0 = ((void *)(0x009194a4u));
  if (DAT_00992cd4 != (void *)0x0) {
    operator_delete__(DAT_00992cd4);
  }
  _DAT_00992cd0 = ((void *)(0x00919488u));
  DAT_00992cd4 = (void *)0x0;
  return;
}


//==== 00009124a0 009124a0_FUN_009124a0 ====
void FUN_009124a0(void);

// decompiled by BatchDecomp @ 009124a0 name=FUN_009124a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009124a0(void)

{
  _DAT_00992cc0 = ((void *)(0x009194a4u));
  if (DAT_00992cc4 != (void *)0x0) {
    operator_delete__(DAT_00992cc4);
  }
  _DAT_00992cc0 = ((void *)(0x00919488u));
  DAT_00992cc4 = (void *)0x0;
  return;
}


//==== 0000912560 00912560_FUN_00912560 ====
void FUN_00912560(void);

// decompiled by BatchDecomp @ 00912560 name=FUN_00912560 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912560(void)

{
  _DAT_00992d70 = ((void *)(0x009194a4u));
  if (DAT_00992d74 != (void *)0x0) {
    operator_delete__(DAT_00992d74);
  }
  _DAT_00992d70 = ((void *)(0x00919488u));
  DAT_00992d74 = (void *)0x0;
  return;
}


//==== 00009125a0 009125a0_FUN_009125a0 ====
void FUN_009125a0(void);

// decompiled by BatchDecomp @ 009125a0 name=FUN_009125a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009125a0(void)

{
  _DAT_00992d60 = ((void *)(0x009194a4u));
  if (DAT_00992d64 != (void *)0x0) {
    operator_delete__(DAT_00992d64);
  }
  _DAT_00992d60 = ((void *)(0x00919488u));
  DAT_00992d64 = (void *)0x0;
  return;
}


//==== 0000912660 00912660_FUN_00912660 ====
void FUN_00912660(void);

// decompiled by BatchDecomp @ 00912660 name=FUN_00912660 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912660(void)

{
  _DAT_00992e08 = ((void *)(0x009194a4u));
  if (DAT_00992e0c != (void *)0x0) {
    operator_delete__(DAT_00992e0c);
  }
  _DAT_00992e08 = ((void *)(0x00919488u));
  DAT_00992e0c = (void *)0x0;
  return;
}


//==== 00009126a0 009126a0_FUN_009126a0 ====
void FUN_009126a0(void);

// decompiled by BatchDecomp @ 009126a0 name=FUN_009126a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009126a0(void)

{
  _DAT_00992df8 = ((void *)(0x009194a4u));
  if (DAT_00992dfc != (void *)0x0) {
    operator_delete__(DAT_00992dfc);
  }
  _DAT_00992df8 = ((void *)(0x00919488u));
  DAT_00992dfc = (void *)0x0;
  return;
}


//==== 0000912760 00912760_FUN_00912760 ====
void FUN_00912760(void);

// decompiled by BatchDecomp @ 00912760 name=FUN_00912760 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912760(void)

{
  _DAT_00992ea0 = ((void *)(0x009194a4u));
  if (DAT_00992ea4 != (void *)0x0) {
    operator_delete__(DAT_00992ea4);
  }
  _DAT_00992ea0 = ((void *)(0x00919488u));
  DAT_00992ea4 = (void *)0x0;
  return;
}


//==== 00009127a0 009127a0_FUN_009127a0 ====
void FUN_009127a0(void);

// decompiled by BatchDecomp @ 009127a0 name=FUN_009127a0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009127a0(void)

{
  _DAT_00992e90 = ((void *)(0x009194a4u));
  if (DAT_00992e94 != (void *)0x0) {
    operator_delete__(DAT_00992e94);
  }
  _DAT_00992e90 = ((void *)(0x00919488u));
  DAT_00992e94 = (void *)0x0;
  return;
}


//==== 0000912880 00912880_FUN_00912880 ====
void FUN_00912880(void);

// decompiled by BatchDecomp @ 00912880 name=FUN_00912880 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912880(void)

{
  _DAT_00992f08 = ((void *)(0x009194a4u));
  if (DAT_00992f0c != (void *)0x0) {
    operator_delete__(DAT_00992f0c);
  }
  _DAT_00992f08 = ((void *)(0x00919488u));
  DAT_00992f0c = (void *)0x0;
  return;
}


//==== 0000912920 00912920_FUN_00912920 ====
void FUN_00912920(void);

// decompiled by BatchDecomp @ 00912920 name=FUN_00912920 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912920(void)

{
  _DAT_00992f98 = ((void *)(0x009194a4u));
  if (DAT_00992f9c != (void *)0x0) {
    operator_delete__(DAT_00992f9c);
  }
  _DAT_00992f98 = ((void *)(0x00919488u));
  DAT_00992f9c = (void *)0x0;
  return;
}


//==== 0000912960 00912960_FUN_00912960 ====
void FUN_00912960(void);

// decompiled by BatchDecomp @ 00912960 name=FUN_00912960 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912960(void)

{
  _DAT_00992f88 = ((void *)(0x009194a4u));
  if (DAT_00992f8c != (void *)0x0) {
    operator_delete__(DAT_00992f8c);
  }
  _DAT_00992f88 = ((void *)(0x00919488u));
  DAT_00992f8c = (void *)0x0;
  return;
}


//==== 0000912a00 00912a00_FUN_00912a00 ====
void FUN_00912a00(void);

// decompiled by BatchDecomp @ 00912a00 name=FUN_00912a00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912a00(void)

{
  _DAT_00993000 = ((void *)(0x009194a4u));
  if (DAT_00993004 != (void *)0x0) {
    operator_delete__(DAT_00993004);
  }
  _DAT_00993000 = ((void *)(0x00919488u));
  DAT_00993004 = (void *)0x0;
  return;
}


//==== 0000912a80 00912a80_FUN_00912a80 ====
void FUN_00912a80(void);

// decompiled by BatchDecomp @ 00912a80 name=FUN_00912a80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912a80(void)

{
  _DAT_00993060 = ((void *)(0x009194a4u));
  if (DAT_00993064 != (void *)0x0) {
    operator_delete__(DAT_00993064);
  }
  _DAT_00993060 = ((void *)(0x00919488u));
  DAT_00993064 = (void *)0x0;
  return;
}


//==== 0000912b00 00912b00_FUN_00912b00 ====
void FUN_00912b00(void);

// decompiled by BatchDecomp @ 00912b00 name=FUN_00912b00 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912b00(void)

{
  _DAT_009930c0 = ((void *)(0x009194a4u));
  if (DAT_009930c4 != (void *)0x0) {
    operator_delete__(DAT_009930c4);
  }
  _DAT_009930c0 = ((void *)(0x00919488u));
  DAT_009930c4 = (void *)0x0;
  return;
}


//==== 0000912ba0 00912ba0_FUN_00912ba0 ====
void FUN_00912ba0(void);

// decompiled by BatchDecomp @ 00912ba0 name=FUN_00912ba0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912ba0(void)

{
  _DAT_00993150 = ((void *)(0x009194a4u));
  if (DAT_00993154 != (void *)0x0) {
    operator_delete__(DAT_00993154);
  }
  _DAT_00993150 = ((void *)(0x00919488u));
  DAT_00993154 = (void *)0x0;
  return;
}


//==== 0000912be0 00912be0_FUN_00912be0 ====
void FUN_00912be0(void);

// decompiled by BatchDecomp @ 00912be0 name=FUN_00912be0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912be0(void)

{
  _DAT_00993140 = ((void *)(0x009194a4u));
  if (DAT_00993144 != (void *)0x0) {
    operator_delete__(DAT_00993144);
  }
  _DAT_00993140 = ((void *)(0x00919488u));
  DAT_00993144 = (void *)0x0;
  return;
}


//==== 0000912ca0 00912ca0_FUN_00912ca0 ====
void FUN_00912ca0(void);

// decompiled by BatchDecomp @ 00912ca0 name=FUN_00912ca0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912ca0(void)

{
  _DAT_009931e8 = ((void *)(0x009194a4u));
  if (DAT_009931ec != (void *)0x0) {
    operator_delete__(DAT_009931ec);
  }
  _DAT_009931e8 = ((void *)(0x00919488u));
  DAT_009931ec = (void *)0x0;
  return;
}


//==== 0000912ce0 00912ce0_FUN_00912ce0 ====
void FUN_00912ce0(void);

// decompiled by BatchDecomp @ 00912ce0 name=FUN_00912ce0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912ce0(void)

{
  _DAT_009931d8 = ((void *)(0x009194a4u));
  if (DAT_009931dc != (void *)0x0) {
    operator_delete__(DAT_009931dc);
  }
  _DAT_009931d8 = ((void *)(0x00919488u));
  DAT_009931dc = (void *)0x0;
  return;
}


//==== 0000912da0 00912da0_FUN_00912da0 ====
void FUN_00912da0(void);

// decompiled by BatchDecomp @ 00912da0 name=FUN_00912da0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912da0(void)

{
  _DAT_00993288 = ((void *)(0x009194a4u));
  if (DAT_0099328c != (void *)0x0) {
    operator_delete__(DAT_0099328c);
  }
  _DAT_00993288 = ((void *)(0x00919488u));
  DAT_0099328c = (void *)0x0;
  return;
}


//==== 0000912de0 00912de0_FUN_00912de0 ====
void FUN_00912de0(void);

// decompiled by BatchDecomp @ 00912de0 name=FUN_00912de0 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912de0(void)

{
  _DAT_00993278 = ((void *)(0x009194a4u));
  if (DAT_0099327c != (void *)0x0) {
    operator_delete__(DAT_0099327c);
  }
  _DAT_00993278 = ((void *)(0x00919488u));
  DAT_0099327c = (void *)0x0;
  return;
}


//==== 0000912e80 00912e80_FUN_00912e80 ====
void FUN_00912e80(void);

// decompiled by BatchDecomp @ 00912e80 name=FUN_00912e80 conv=unknown body=49

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00912e80(void)

{
  _DAT_009932f8 = ((void *)(0x009194a4u));
  if (DAT_009932fc != (void *)0x0) {
    operator_delete__(DAT_009932fc);
  }
  _DAT_009932f8 = ((void *)(0x00919488u));
  DAT_009932fc = (void *)0x0;
  return;
}

