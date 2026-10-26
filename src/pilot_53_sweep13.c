// pilot_sweep_sweep13.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
#include "port_prelude.h"
typedef union {
  struct {
    undefined8 _0_8_;
    undefined8 _8_8_;
  };
  struct {
    undefined1 _1_7_[7];
  };
  struct {
    undefined4 _0_4_;
    undefined4 _4_4_;
    undefined4 _8_4_;
    undefined4 _12_4_;
    undefined4 _16_4_;
    undefined4 _20_4_;
    undefined4 _24_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  struct {
    undefined1 _0_1_;
    undefined1 _2_1_;
    undefined1 _3_1_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int Body__GetTightRadius_km_Clear(); /* K&R stub; ret by call site */
extern int CraftInstance__GetCapableMainEngineModules_Clear(); /* K&R stub; ret by call site */
extern int FixedOrbit_FixedOrbit__o3(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint(); /* K&R stub; ret by call site */
extern int util__Darray_struct_CraftSplinePoint___operator(); /* K&R stub; ret by call site */
/* ---- GL PFN typedefs: Khronos headers directly (extraction-free) ---- */
#include <glcorearb.h>
#include <glext.h>
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define ____glewActiveShaderProgram (*(PFNGLACTIVESHADERPROGRAMPROC *)(0x0098c680u))
#define ____glewActiveTextureARB (*(PFNGLACTIVETEXTUREARBPROC *)(0x0098c360u))
#define ____glewAreProgramsResidentNV (*(PFNGLAREPROGRAMSRESIDENTNVPROC *)(0x0098ac80u))
#define ____glewAttachObjectARB (*(PFNGLATTACHOBJECTARBPROC *)(0x00989e90u))
#define ____glewBeginConditionalRender (*(PFNGLBEGINCONDITIONALRENDERPROC *)(0x0098b168u))
#define ____glewBeginTransformFeedback (*(PFNGLBEGINTRANSFORMFEEDBACKPROC *)(0x0098b16cu))
#define ____glewBeginVertexShaderEXT (*(PFNGLBEGINVERTEXSHADEREXTPROC *)(0x0098c23cu))
#define ____glewBindAttribLocation (*(PFNGLBINDATTRIBLOCATIONPROC *)(0x0098ac30u))
#define ____glewBindFragDataLocation (*(PFNGLBINDFRAGDATALOCATIONPROC *)(0x0098b17cu))
#define ____glewBindFragDataLocationEXT (*(PFNGLBINDFRAGDATALOCATIONEXTPROC *)(0x0098bd28u))
#define ____glewBindLightParameterEXT (*(PFNGLBINDLIGHTPARAMETEREXTPROC *)(0x0098c240u))
#define ____glewBindMaterialParameterEXT (*(PFNGLBINDMATERIALPARAMETEREXTPROC *)(0x0098c24cu))
#define ____glewBindMultiTextureEXT (*(PFNGLBINDMULTITEXTUREEXTPROC *)(0x0098b208u))
#define ____glewBindParameterEXT (*(PFNGLBINDPARAMETEREXTPROC *)(0x0098c254u))
#define ____glewBindProgramARB (*(PFNGLBINDPROGRAMARBPROC *)(0x0098a464u))
#define ____glewBindProgramNV (*(PFNGLBINDPROGRAMNVPROC *)(0x0098ac9cu))
#define ____glewBindProgramPipeline (*(PFNGLBINDPROGRAMPIPELINEPROC *)(0x0098c68cu))
#define ____glewBindTexGenParameterEXT (*(PFNGLBINDTEXGENPARAMETEREXTPROC *)(0x0098c260u))
#define ____glewBindTextureUnit (*(PFNGLBINDTEXTUREUNITPROC *)(0x0098ba5cu))
#define ____glewBindTextureUnitParameterEXT (*(PFNGLBINDTEXTUREUNITPARAMETEREXTPROC *)(0x0098c268u))
#define ____glewBindVertexShaderEXT (*(PFNGLBINDVERTEXSHADEREXTPROC *)(0x0098c26cu))
#define ____glewBlitNamedFramebuffer (*(PFNGLBLITNAMEDFRAMEBUFFERPROC *)(0x0098ba64u))
#define ____glewCheckNamedFramebufferStatus (*(PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC *)(0x0098ba6cu))
#define ____glewCheckNamedFramebufferStatusEXT (*(PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC *)(0x0098b21cu))
#define ____glewClampColor (*(PFNGLCLAMPCOLORPROC *)(0x0098b188u))
#define ____glewClearBufferfi (*(PFNGLCLEARBUFFERFIPROC *)(0x0098b198u))
#define ____glewClearBufferfv (*(PFNGLCLEARBUFFERFVPROC *)(0x0098b1a4u))
#define ____glewClearBufferiv (*(PFNGLCLEARBUFFERIVPROC *)(0x0098b1acu))
#define ____glewClearBufferuiv (*(PFNGLCLEARBUFFERUIVPROC *)(0x0098b1b8u))
#define ____glewClearNamedBufferData (*(PFNGLCLEARNAMEDBUFFERDATAPROC *)(0x0098ba70u))
#define ____glewClearNamedBufferSubData (*(PFNGLCLEARNAMEDBUFFERSUBDATAPROC *)(0x0098ba7cu))
#define ____glewClearNamedFramebufferfi (*(PFNGLCLEARNAMEDFRAMEBUFFERFIPROC *)(0x0098ba84u))
#define ____glewClearNamedFramebufferfv (*(PFNGLCLEARNAMEDFRAMEBUFFERFVPROC *)(0x0098ba8cu))
#define ____glewClearNamedFramebufferiv (*(PFNGLCLEARNAMEDFRAMEBUFFERIVPROC *)(0x0098ba98u))
#define ____glewClearNamedFramebufferuiv (*(PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC *)(0x0098baa4u))
#define ____glewClientActiveTextureARB (*(PFNGLCLIENTACTIVETEXTUREARBPROC *)(0x0098c368u))
#define ____glewClientActiveVertexStreamATI (*(PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC *)(0x0098adecu))
#define ____glewClientAttribDefaultEXT (*(PFNGLCLIENTATTRIBDEFAULTEXTPROC *)(0x0098b224u))
#define ____glewColor3fVertex3fSUN (*(PFNGLCOLOR3FVERTEX3FSUNPROC *)(0x0098b684u))
#define ____glewColor3fVertex3fvSUN (*(PFNGLCOLOR3FVERTEX3FVSUNPROC *)(0x0098b688u))
#define ____glewColor3hNV (*(PFNGLCOLOR3HNVPROC *)(0x0098a19cu))
#define ____glewColor3hvNV (*(PFNGLCOLOR3HVNVPROC *)(0x0098a1a8u))
#define ____glewColor4fNormal3fVertex3fSUN (*(PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC *)(0x0098b694u))
#define ____glewColor4fNormal3fVertex3fvSUN (*(PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC *)(0x0098b6a8u))
#define ____glewColor4hNV (*(PFNGLCOLOR4HNVPROC *)(0x0098a1b4u))
#define ____glewColor4hvNV (*(PFNGLCOLOR4HVNVPROC *)(0x0098a1b8u))
#define ____glewColor4ubVertex2fSUN (*(PFNGLCOLOR4UBVERTEX2FSUNPROC *)(0x0098b6b4u))
#define ____glewColor4ubVertex2fvSUN (*(PFNGLCOLOR4UBVERTEX2FVSUNPROC *)(0x0098b6bcu))
#define ____glewColor4ubVertex3fSUN (*(PFNGLCOLOR4UBVERTEX3FSUNPROC *)(0x0098b6ccu))
#define ____glewColor4ubVertex3fvSUN (*(PFNGLCOLOR4UBVERTEX3FVSUNPROC *)(0x0098b6d0u))
#define ____glewColorMaski (*(PFNGLCOLORMASKIPROC *)(0x0098b1c0u))
#define ____glewCompileShaderARB (*(PFNGLCOMPILESHADERARBPROC *)(0x00989e9cu))
#define ____glewCompressedMultiTexImage1DEXT (*(PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC *)(0x0098b234u))
#define ____glewCompressedMultiTexImage2DEXT (*(PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC *)(0x0098b23cu))
#define ____glewCompressedMultiTexImage3DEXT (*(PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC *)(0x0098b248u))
#define ____glewCompressedMultiTexSubImage1DEXT (*(PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC *)(0x0098b258u))
#define ____glewCompressedMultiTexSubImage2DEXT (*(PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC *)(0x0098b25cu))
#define ____glewCompressedMultiTexSubImage3DEXT (*(PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC *)(0x0098b26cu))
#define ____glewCompressedTextureImage1DEXT (*(PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC *)(0x0098b278u))
#define ____glewCompressedTextureImage2DEXT (*(PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC *)(0x0098b280u))
#define ____glewCompressedTextureImage3DEXT (*(PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC *)(0x0098b290u))
#define ____glewCompressedTextureSubImage1D (*(PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC *)(0x0098baacu))
#define ____glewCompressedTextureSubImage1DEXT (*(PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC *)(0x0098b298u))
#define ____glewCompressedTextureSubImage2D (*(PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC *)(0x0098bab4u))
#define ____glewCompressedTextureSubImage2DEXT (*(PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC *)(0x0098b2a4u))
#define ____glewCompressedTextureSubImage3D (*(PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC *)(0x0098bac0u))
#define ____glewCompressedTextureSubImage3DEXT (*(PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC *)(0x0098b2b0u))
#define ____glewCopyMultiTexImage1DEXT (*(PFNGLCOPYMULTITEXIMAGE1DEXTPROC *)(0x0098b2c4u))
#define ____glewCopyMultiTexImage2DEXT (*(PFNGLCOPYMULTITEXIMAGE2DEXTPROC *)(0x0098b2d0u))
#define ____glewCopyMultiTexSubImage1DEXT (*(PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC *)(0x0098b2d4u))
#define ____glewCopyMultiTexSubImage2DEXT (*(PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC *)(0x0098b2e4u))
#define ____glewCopyMultiTexSubImage3DEXT (*(PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC *)(0x0098b2f0u))
#define ____glewCopyNamedBufferSubData (*(PFNGLCOPYNAMEDBUFFERSUBDATAPROC *)(0x0098bac8u))
#define ____glewCopyTextureImage1DEXT (*(PFNGLCOPYTEXTUREIMAGE1DEXTPROC *)(0x0098b2f8u))
#define ____glewCopyTextureImage2DEXT (*(PFNGLCOPYTEXTUREIMAGE2DEXTPROC *)(0x0098b308u))
#define ____glewCopyTextureSubImage1D (*(PFNGLCOPYTEXTURESUBIMAGE1DPROC *)(0x0098baccu))
#define ____glewCopyTextureSubImage1DEXT (*(PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC *)(0x0098b318u))
#define ____glewCopyTextureSubImage2D (*(PFNGLCOPYTEXTURESUBIMAGE2DPROC *)(0x0098bad4u))
#define ____glewCopyTextureSubImage2DEXT (*(PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC *)(0x0098b320u))
#define ____glewCopyTextureSubImage3D (*(PFNGLCOPYTEXTURESUBIMAGE3DPROC *)(0x0098badcu))
#define ____glewCopyTextureSubImage3DEXT (*(PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC *)(0x0098b330u))
#define ____glewCreateBuffers (*(PFNGLCREATEBUFFERSPROC *)(0x0098bae8u))
#define ____glewCreateFramebuffers (*(PFNGLCREATEFRAMEBUFFERSPROC *)(0x0098baf4u))
#define ____glewCreateProgramObjectARB (*(PFNGLCREATEPROGRAMOBJECTARBPROC *)(0x00989ea0u))
#define ____glewCreateProgramPipelines (*(PFNGLCREATEPROGRAMPIPELINESPROC *)(0x0098baf8u))
#define ____glewCreateQueries (*(PFNGLCREATEQUERIESPROC *)(0x0098bb04u))
#define ____glewCreateRenderbuffers (*(PFNGLCREATERENDERBUFFERSPROC *)(0x0098bb10u))
#define ____glewCreateSamplers (*(PFNGLCREATESAMPLERSPROC *)(0x0098bb14u))
#define ____glewCreateShaderObjectARB (*(PFNGLCREATESHADEROBJECTARBPROC *)(0x00989ea8u))
#define ____glewCreateShaderProgramv (*(PFNGLCREATESHADERPROGRAMVPROC *)(0x0098c694u))
#define ____glewCreateTextures (*(PFNGLCREATETEXTURESPROC *)(0x0098bb1cu))
#define ____glewCreateTransformFeedbacks (*(PFNGLCREATETRANSFORMFEEDBACKSPROC *)(0x0098bb24u))
#define ____glewCreateVertexArrays (*(PFNGLCREATEVERTEXARRAYSPROC *)(0x0098bb34u))
#define ____glewDeleteObjectARB (*(PFNGLDELETEOBJECTARBPROC *)(0x00989eb4u))
#define ____glewDeleteProgramPipelines (*(PFNGLDELETEPROGRAMPIPELINESPROC *)(0x0098c69cu))
#define ____glewDeleteProgramsARB (*(PFNGLDELETEPROGRAMSARBPROC *)(0x0098a46cu))
#define ____glewDeleteProgramsNV (*(PFNGLDELETEPROGRAMSNVPROC *)(0x0098aca8u))
#define ____glewDeleteVertexShaderEXT (*(PFNGLDELETEVERTEXSHADEREXTPROC *)(0x0098c27cu))
#define ____glewDetachObjectARB (*(PFNGLDETACHOBJECTARBPROC *)(0x00989ec0u))
#define ____glewDisableClientStateIndexedEXT (*(PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC *)(0x0098b338u))
#define ____glewDisableClientStateiEXT (*(PFNGLDISABLECLIENTSTATEIEXTPROC *)(0x0098b344u))
#define ____glewDisableVariantClientStateEXT (*(PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC *)(0x0098c284u))
#define ____glewDisableVertexArrayAttrib (*(PFNGLDISABLEVERTEXARRAYATTRIBPROC *)(0x0098bb38u))
#define ____glewDisableVertexArrayAttribEXT (*(PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC *)(0x0098b34cu))
#define ____glewDisableVertexArrayEXT (*(PFNGLDISABLEVERTEXARRAYEXTPROC *)(0x0098b35cu))
#define ____glewDisableVertexAttribArrayARB (*(PFNGLDISABLEVERTEXATTRIBARRAYARBPROC *)(0x0098a478u))
#define ____glewDisablei (*(PFNGLDISABLEIPROC *)(0x0098b1d4u))
#define ____glewEnableClientStateIndexedEXT (*(PFNGLENABLECLIENTSTATEINDEXEDEXTPROC *)(0x0098b36cu))
#define ____glewEnableClientStateiEXT (*(PFNGLENABLECLIENTSTATEIEXTPROC *)(0x0098b370u))
#define ____glewEnableVariantClientStateEXT (*(PFNGLENABLEVARIANTCLIENTSTATEEXTPROC *)(0x0098c288u))
#define ____glewEnableVertexArrayAttrib (*(PFNGLENABLEVERTEXARRAYATTRIBPROC *)(0x0098bb40u))
#define ____glewEnableVertexArrayAttribEXT (*(PFNGLENABLEVERTEXARRAYATTRIBEXTPROC *)(0x0098b380u))
#define ____glewEnableVertexArrayEXT (*(PFNGLENABLEVERTEXARRAYEXTPROC *)(0x0098b390u))
#define ____glewEnableVertexAttribArrayARB (*(PFNGLENABLEVERTEXATTRIBARRAYARBPROC *)(0x0098a47cu))
#define ____glewEnablei (*(PFNGLENABLEIPROC *)(0x0098b1e0u))
#define ____glewEndConditionalRender (*(PFNGLENDCONDITIONALRENDERPROC *)(0x0098b1ecu))
#define ____glewEndTransformFeedback (*(PFNGLENDTRANSFORMFEEDBACKPROC *)(0x0098b1f4u))
#define ____glewEndVertexShaderEXT (*(PFNGLENDVERTEXSHADEREXTPROC *)(0x0098c290u))
#define ____glewExecuteProgramNV (*(PFNGLEXECUTEPROGRAMNVPROC *)(0x0098acb4u))
#define ____glewExtractComponentEXT (*(PFNGLEXTRACTCOMPONENTEXTPROC *)(0x0098c29cu))
#define ____glewFlushMappedNamedBufferRange (*(PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC *)(0x0098bb4cu))
#define ____glewFlushMappedNamedBufferRangeEXT (*(PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC *)(0x0098b39cu))
#define ____glewFogCoordhNV (*(PFNGLFOGCOORDHNVPROC *)(0x0098a1c0u))
#define ____glewFogCoordhvNV (*(PFNGLFOGCOORDHVNVPROC *)(0x0098a1ccu))
#define ____glewFramebufferDrawBufferEXT (*(PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC *)(0x0098b3a0u))
#define ____glewFramebufferDrawBuffersEXT (*(PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC *)(0x0098b3b4u))
#define ____glewFramebufferReadBufferEXT (*(PFNGLFRAMEBUFFERREADBUFFEREXTPROC *)(0x0098b3b8u))
#define ____glewGenProgramPipelines (*(PFNGLGENPROGRAMPIPELINESPROC *)(0x0098c6a4u))
#define ____glewGenProgramsARB (*(PFNGLGENPROGRAMSARBPROC *)(0x0098a488u))
#define ____glewGenProgramsNV (*(PFNGLGENPROGRAMSNVPROC *)(0x0098acc4u))
#define ____glewGenSymbolsEXT (*(PFNGLGENSYMBOLSEXTPROC *)(0x0098c2a8u))
#define ____glewGenVertexShadersEXT (*(PFNGLGENVERTEXSHADERSEXTPROC *)(0x0098c2b0u))
#define ____glewGenerateMultiTexMipmapEXT (*(PFNGLGENERATEMULTITEXMIPMAPEXTPROC *)(0x0098b3c8u))
#define ____glewGenerateTextureMipmap (*(PFNGLGENERATETEXTUREMIPMAPPROC *)(0x0098bb54u))
#define ____glewGenerateTextureMipmapEXT (*(PFNGLGENERATETEXTUREMIPMAPEXTPROC *)(0x0098b3d8u))
#define ____glewGetActiveAttrib (*(PFNGLGETACTIVEATTRIBPROC *)(0x0098acecu))
#define ____glewGetActiveUniform (*(PFNGLGETACTIVEUNIFORMPROC *)(0x0098acf0u))
#define ____glewGetActiveUniformARB (*(PFNGLGETACTIVEUNIFORMARBPROC *)(0x00989ec4u))
#define ____glewGetAttachedObjectsARB (*(PFNGLGETATTACHEDOBJECTSARBPROC *)(0x00989ed0u))
#define ____glewGetAttachedShaders (*(PFNGLGETATTACHEDSHADERSPROC *)(0x0098ad04u))
#define ____glewGetBooleani_v (*(PFNGLGETBOOLEANI_VPROC *)(0x0098b1fcu))
#define ____glewGetCompressedMultiTexImageEXT (*(PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC *)(0x0098b3e0u))
#define ____glewGetCompressedTextureImage (*(PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC *)(0x0098bb60u))
#define ____glewGetCompressedTextureImageEXT (*(PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC *)(0x0098b3e8u))
#define ____glewGetDoubleIndexedvEXT (*(PFNGLGETDOUBLEINDEXEDVEXTPROC *)(0x0098b3f4u))
#define ____glewGetDoublei_vEXT (*(PFNGLGETDOUBLEI_VEXTPROC *)(0x0098b400u))
#define ____glewGetFloatIndexedvEXT (*(PFNGLGETFLOATINDEXEDVEXTPROC *)(0x0098b40cu))
#define ____glewGetFloati_vEXT (*(PFNGLGETFLOATI_VEXTPROC *)(0x0098b41cu))
#define ____glewGetFragDataLocation (*(PFNGLGETFRAGDATALOCATIONPROC *)(0x0098b20cu))
#define ____glewGetFragDataLocationEXT (*(PFNGLGETFRAGDATALOCATIONEXTPROC *)(0x0098bd30u))
#define ____glewGetFramebufferParameterivEXT (*(PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC *)(0x0098b424u))
#define ____glewGetHandleARB (*(PFNGLGETHANDLEARBPROC *)(0x00989ed4u))
#define ____glewGetInfoLogARB (*(PFNGLGETINFOLOGARBPROC *)(0x00989ee0u))
#define ____glewGetInvariantBooleanvEXT (*(PFNGLGETINVARIANTBOOLEANVEXTPROC *)(0x0098c2b8u))
#define ____glewGetInvariantFloatvEXT (*(PFNGLGETINVARIANTFLOATVEXTPROC *)(0x0098c2c4u))
#define ____glewGetInvariantIntegervEXT (*(PFNGLGETINVARIANTINTEGERVEXTPROC *)(0x0098c2ccu))
#define ____glewGetLocalConstantBooleanvEXT (*(PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC *)(0x0098c2d0u))
#define ____glewGetLocalConstantFloatvEXT (*(PFNGLGETLOCALCONSTANTFLOATVEXTPROC *)(0x0098c2d8u))
#define ____glewGetLocalConstantIntegervEXT (*(PFNGLGETLOCALCONSTANTINTEGERVEXTPROC *)(0x0098c2e0u))
#define ____glewGetMultiTexEnvfvEXT (*(PFNGLGETMULTITEXENVFVEXTPROC *)(0x0098b434u))
#define ____glewGetMultiTexEnvivEXT (*(PFNGLGETMULTITEXENVIVEXTPROC *)(0x0098b440u))
#define ____glewGetMultiTexGendvEXT (*(PFNGLGETMULTITEXGENDVEXTPROC *)(0x0098b448u))
#define ____glewGetMultiTexGenfvEXT (*(PFNGLGETMULTITEXGENFVEXTPROC *)(0x0098b458u))
#define ____glewGetMultiTexGenivEXT (*(PFNGLGETMULTITEXGENIVEXTPROC *)(0x0098b468u))
#define ____glewGetMultiTexImageEXT (*(PFNGLGETMULTITEXIMAGEEXTPROC *)(0x0098b470u))
#define ____glewGetMultiTexLevelParameterfvEXT (*(PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC *)(0x0098b480u))
#define ____glewGetMultiTexLevelParameterivEXT (*(PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC *)(0x0098b484u))
#define ____glewGetMultiTexParameterIivEXT (*(PFNGLGETMULTITEXPARAMETERIIVEXTPROC *)(0x0098b490u))
#define ____glewGetMultiTexParameterIuivEXT (*(PFNGLGETMULTITEXPARAMETERIUIVEXTPROC *)(0x0098b49cu))
#define ____glewGetMultiTexParameterfvEXT (*(PFNGLGETMULTITEXPARAMETERFVEXTPROC *)(0x0098b4a8u))
#define ____glewGetMultiTexParameterivEXT (*(PFNGLGETMULTITEXPARAMETERIVEXTPROC *)(0x0098b4b8u))
#define ____glewGetNamedBufferParameteri64v (*(PFNGLGETNAMEDBUFFERPARAMETERI64VPROC *)(0x0098bb68u))
#define ____glewGetNamedBufferParameteriv (*(PFNGLGETNAMEDBUFFERPARAMETERIVPROC *)(0x0098bb70u))
#define ____glewGetNamedBufferParameterivEXT (*(PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC *)(0x0098b4c4u))
#define ____glewGetNamedBufferPointerv (*(PFNGLGETNAMEDBUFFERPOINTERVPROC *)(0x0098bb7cu))
#define ____glewGetNamedBufferPointervEXT (*(PFNGLGETNAMEDBUFFERPOINTERVEXTPROC *)(0x0098b4d0u))
#define ____glewGetNamedBufferSubData (*(PFNGLGETNAMEDBUFFERSUBDATAPROC *)(0x0098bb80u))
#define ____glewGetNamedBufferSubDataEXT (*(PFNGLGETNAMEDBUFFERSUBDATAEXTPROC *)(0x0098b4e0u))
#define ____glewGetNamedFramebufferAttachmentParameteriv (*(PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC *)(0x0098bb8cu))
#define ____glewGetNamedFramebufferAttachmentParameterivEXT (*(PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC *)(0x0098b4e8u))
#define ____glewGetNamedFramebufferParameteriv (*(PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC *)(0x0098bb98u))
#define ____glewGetNamedProgramLocalParameterIivEXT (*(PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC *)(0x0098b4f4u))
#define ____glewGetNamedProgramLocalParameterIuivEXT (*(PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC *)(0x0098b504u))
#define ____glewGetNamedProgramLocalParameterdvEXT (*(PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC *)(0x0098b508u))
#define ____glewGetNamedProgramLocalParameterfvEXT (*(PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC *)(0x0098b518u))
#define ____glewGetNamedProgramStringEXT (*(PFNGLGETNAMEDPROGRAMSTRINGEXTPROC *)(0x0098b528u))
#define ____glewGetNamedProgramivEXT (*(PFNGLGETNAMEDPROGRAMIVEXTPROC *)(0x0098b52cu))
#define ____glewGetNamedRenderbufferParameteriv (*(PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC *)(0x0098bba0u))
#define ____glewGetNamedRenderbufferParameterivEXT (*(PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC *)(0x0098b540u))
#define ____glewGetObjectParameterfvARB (*(PFNGLGETOBJECTPARAMETERFVARBPROC *)(0x00989eecu))
#define ____glewGetObjectParameterivARB (*(PFNGLGETOBJECTPARAMETERIVARBPROC *)(0x00989ef0u))
#define ____glewGetPointerIndexedvEXT (*(PFNGLGETPOINTERINDEXEDVEXTPROC *)(0x0098b548u))
#define ____glewGetPointeri_vEXT (*(PFNGLGETPOINTERI_VEXTPROC *)(0x0098b550u))
#define ____glewGetProgramEnvParameterdvARB (*(PFNGLGETPROGRAMENVPARAMETERDVARBPROC *)(0x0098a48cu))
#define ____glewGetProgramEnvParameterfvARB (*(PFNGLGETPROGRAMENVPARAMETERFVARBPROC *)(0x0098a498u))
#define ____glewGetProgramLocalParameterdvARB (*(PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC *)(0x0098a4a0u))
#define ____glewGetProgramLocalParameterfvARB (*(PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC *)(0x0098a4a8u))
#define ____glewGetProgramParameterdvNV (*(PFNGLGETPROGRAMPARAMETERDVNVPROC *)(0x0098acd0u))
#define ____glewGetProgramParameterfvNV (*(PFNGLGETPROGRAMPARAMETERFVNVPROC *)(0x0098ace8u))
#define ____glewGetProgramPipelineInfoLog (*(PFNGLGETPROGRAMPIPELINEINFOLOGPROC *)(0x0098c6b0u))
#define ____glewGetProgramPipelineiv (*(PFNGLGETPROGRAMPIPELINEIVPROC *)(0x0098c6b8u))
#define ____glewGetProgramStringARB (*(PFNGLGETPROGRAMSTRINGARBPROC *)(0x0098a4b0u))
#define ____glewGetProgramStringNV (*(PFNGLGETPROGRAMSTRINGNVPROC *)(0x0098acf4u))
#define ____glewGetProgramivARB (*(PFNGLGETPROGRAMIVARBPROC *)(0x0098a4b4u))
#define ____glewGetProgramivNV (*(PFNGLGETPROGRAMIVNVPROC *)(0x0098ad08u))
#define ____glewGetQueryBufferObjecti64v (*(PFNGLGETQUERYBUFFEROBJECTI64VPROC *)(0x0098bba8u))
#define ____glewGetQueryBufferObjectiv (*(PFNGLGETQUERYBUFFEROBJECTIVPROC *)(0x0098bbacu))
#define ____glewGetQueryBufferObjectui64v (*(PFNGLGETQUERYBUFFEROBJECTUI64VPROC *)(0x0098bbbcu))
#define ____glewGetQueryBufferObjectuiv (*(PFNGLGETQUERYBUFFEROBJECTUIVPROC *)(0x0098bbc4u))
#define ____glewGetShaderSource (*(PFNGLGETSHADERSOURCEPROC *)(0x0098ad54u))
#define ____glewGetShaderSourceARB (*(PFNGLGETSHADERSOURCEARBPROC *)(0x00989ef8u))
#define ____glewGetStringi (*(PFNGLGETSTRINGIPROC *)(0x0098b214u))
#define ____glewGetTexParameterIiv (*(PFNGLGETTEXPARAMETERIIVPROC *)(0x0098b228u))
#define ____glewGetTexParameterIuiv (*(PFNGLGETTEXPARAMETERIUIVPROC *)(0x0098b230u))
#define ____glewGetTextureImage (*(PFNGLGETTEXTUREIMAGEPROC *)(0x0098bbc8u))
#define ____glewGetTextureImageEXT (*(PFNGLGETTEXTUREIMAGEEXTPROC *)(0x0098b55cu))
#define ____glewGetTextureLevelParameterfv (*(PFNGLGETTEXTURELEVELPARAMETERFVPROC *)(0x0098bbd0u))
#define ____glewGetTextureLevelParameterfvEXT (*(PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC *)(0x0098b56cu))
#define ____glewGetTextureLevelParameteriv (*(PFNGLGETTEXTURELEVELPARAMETERIVPROC *)(0x0098bbdcu))
#define ____glewGetTextureLevelParameterivEXT (*(PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC *)(0x0098b578u))
#define ____glewGetTextureParameterIiv (*(PFNGLGETTEXTUREPARAMETERIIVPROC *)(0x0098bbe4u))
#define ____glewGetTextureParameterIivEXT (*(PFNGLGETTEXTUREPARAMETERIIVEXTPROC *)(0x0098b584u))
#define ____glewGetTextureParameterIuiv (*(PFNGLGETTEXTUREPARAMETERIUIVPROC *)(0x0098bbf0u))
#define ____glewGetTextureParameterIuivEXT (*(PFNGLGETTEXTUREPARAMETERIUIVEXTPROC *)(0x0098b590u))
#define ____glewGetTextureParameterfv (*(PFNGLGETTEXTUREPARAMETERFVPROC *)(0x0098bbf8u))
#define ____glewGetTextureParameterfvEXT (*(PFNGLGETTEXTUREPARAMETERFVEXTPROC *)(0x0098b598u))
#define ____glewGetTextureParameteriv (*(PFNGLGETTEXTUREPARAMETERIVPROC *)(0x0098bc04u))
#define ____glewGetTextureParameterivEXT (*(PFNGLGETTEXTUREPARAMETERIVEXTPROC *)(0x0098b5acu))
#define ____glewGetTrackMatrixivNV (*(PFNGLGETTRACKMATRIXIVNVPROC *)(0x0098ad10u))
#define ____glewGetTransformFeedbackVarying (*(PFNGLGETTRANSFORMFEEDBACKVARYINGPROC *)(0x0098b238u))
#define ____glewGetTransformFeedbacki64_v (*(PFNGLGETTRANSFORMFEEDBACKI64_VPROC *)(0x0098bc08u))
#define ____glewGetTransformFeedbacki_v (*(PFNGLGETTRANSFORMFEEDBACKI_VPROC *)(0x0098bc14u))
#define ____glewGetTransformFeedbackiv (*(PFNGLGETTRANSFORMFEEDBACKIVPROC *)(0x0098bc1cu))
#define ____glewGetUniformLocationARB (*(PFNGLGETUNIFORMLOCATIONARBPROC *)(0x00989f08u))
#define ____glewGetUniformfv (*(PFNGLGETUNIFORMFVPROC *)(0x0098ad88u))
#define ____glewGetUniformfvARB (*(PFNGLGETUNIFORMFVARBPROC *)(0x00989f0cu))
#define ____glewGetUniformi64vARB (*(PFNGLGETUNIFORMI64VARBPROC *)(0x0098bffcu))
#define ____glewGetUniformi64vNV (*(PFNGLGETUNIFORMI64VNVPROC *)(0x0098a06cu))
#define ____glewGetUniformiv (*(PFNGLGETUNIFORMIVPROC *)(0x0098ad98u))
#define ____glewGetUniformivARB (*(PFNGLGETUNIFORMIVARBPROC *)(0x00989f18u))
#define ____glewGetUniformui64vARB (*(PFNGLGETUNIFORMUI64VARBPROC *)(0x0098c004u))
#define ____glewGetUniformui64vNV (*(PFNGLGETUNIFORMUI64VNVPROC *)(0x0098a078u))
#define ____glewGetUniformuiv (*(PFNGLGETUNIFORMUIVPROC *)(0x0098b24cu))
#define ____glewGetUniformuivEXT (*(PFNGLGETUNIFORMUIVEXTPROC *)(0x0098bd38u))
#define ____glewGetVariantBooleanvEXT (*(PFNGLGETVARIANTBOOLEANVEXTPROC *)(0x0098c2ecu))
#define ____glewGetVariantFloatvEXT (*(PFNGLGETVARIANTFLOATVEXTPROC *)(0x0098c2f4u))
#define ____glewGetVariantIntegervEXT (*(PFNGLGETVARIANTINTEGERVEXTPROC *)(0x0098c2fcu))
#define ____glewGetVariantPointervEXT (*(PFNGLGETVARIANTPOINTERVEXTPROC *)(0x0098c308u))
#define ____glewGetVertexArrayIndexed64iv (*(PFNGLGETVERTEXARRAYINDEXED64IVPROC *)(0x0098bc28u))
#define ____glewGetVertexArrayIndexediv (*(PFNGLGETVERTEXARRAYINDEXEDIVPROC *)(0x0098bc30u))
#define ____glewGetVertexArrayIntegeri_vEXT (*(PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC *)(0x0098b5b0u))
#define ____glewGetVertexArrayIntegervEXT (*(PFNGLGETVERTEXARRAYINTEGERVEXTPROC *)(0x0098b5c4u))
#define ____glewGetVertexArrayPointeri_vEXT (*(PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC *)(0x0098b5ccu))
#define ____glewGetVertexArrayPointervEXT (*(PFNGLGETVERTEXARRAYPOINTERVEXTPROC *)(0x0098b5d4u))
#define ____glewGetVertexArrayiv (*(PFNGLGETVERTEXARRAYIVPROC *)(0x0098bc34u))
#define ____glewGetVertexAttribIiv (*(PFNGLGETVERTEXATTRIBIIVPROC *)(0x0098b254u))
#define ____glewGetVertexAttribIivEXT (*(PFNGLGETVERTEXATTRIBIIVEXTPROC *)(0x0098bd40u))
#define ____glewGetVertexAttribIuiv (*(PFNGLGETVERTEXATTRIBIUIVPROC *)(0x0098b264u))
#define ____glewGetVertexAttribIuivEXT (*(PFNGLGETVERTEXATTRIBIUIVEXTPROC *)(0x0098bd4cu))
#define ____glewGetVertexAttribPointerv (*(PFNGLGETVERTEXATTRIBPOINTERVPROC *)(0x0098ada0u))
#define ____glewGetVertexAttribPointervARB (*(PFNGLGETVERTEXATTRIBPOINTERVARBPROC *)(0x0098a4c0u))
#define ____glewGetVertexAttribPointervNV (*(PFNGLGETVERTEXATTRIBPOINTERVNVPROC *)(0x0098ad24u))
#define ____glewGetVertexAttribdv (*(PFNGLGETVERTEXATTRIBDVPROC *)(0x0098adb4u))
#define ____glewGetVertexAttribdvARB (*(PFNGLGETVERTEXATTRIBDVARBPROC *)(0x0098a4c4u))
#define ____glewGetVertexAttribdvNV (*(PFNGLGETVERTEXATTRIBDVNVPROC *)(0x0098ad3cu))
#define ____glewGetVertexAttribfv (*(PFNGLGETVERTEXATTRIBFVPROC *)(0x0098adc8u))
#define ____glewGetVertexAttribfvARB (*(PFNGLGETVERTEXATTRIBFVARBPROC *)(0x0098a4d0u))
#define ____glewGetVertexAttribfvNV (*(PFNGLGETVERTEXATTRIBFVNVPROC *)(0x0098ad4cu))
#define ____glewGetVertexAttribiv (*(PFNGLGETVERTEXATTRIBIVPROC *)(0x0098add0u))
#define ____glewGetVertexAttribivARB (*(PFNGLGETVERTEXATTRIBIVARBPROC *)(0x0098a4d4u))
#define ____glewGetVertexAttribivNV (*(PFNGLGETVERTEXATTRIBIVNVPROC *)(0x0098ad50u))
#define ____glewGetnUniformi64vARB (*(PFNGLGETNUNIFORMI64VARBPROC *)(0x0098c00cu))
#define ____glewGetnUniformui64vARB (*(PFNGLGETNUNIFORMUI64VARBPROC *)(0x0098c018u))
#define ____glewInsertComponentEXT (*(PFNGLINSERTCOMPONENTEXTPROC *)(0x0098c310u))
#define ____glewInvalidateNamedFramebufferData (*(PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC *)(0x0098bc3cu))
#define ____glewInvalidateNamedFramebufferSubData (*(PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC *)(0x0098bc44u))
#define ____glewIsEnabledi (*(PFNGLISENABLEDIPROC *)(0x0098b270u))
#define ____glewIsProgram (*(PFNGLISPROGRAMPROC *)(0x0098addcu))
#define ____glewIsProgramARB (*(PFNGLISPROGRAMARBPROC *)(0x0098a4e0u))
#define ____glewIsProgramNV (*(PFNGLISPROGRAMNVPROC *)(0x0098ad68u))
#define ____glewIsProgramPipeline (*(PFNGLISPROGRAMPIPELINEPROC *)(0x0098c6c4u))
#define ____glewIsShader (*(PFNGLISSHADERPROC *)(0x0098ade4u))
#define ____glewIsVariantEnabledEXT (*(PFNGLISVARIANTENABLEDEXTPROC *)(0x0098c31cu))
#define ____glewLinkProgramARB (*(PFNGLLINKPROGRAMARBPROC *)(0x00989f1cu))
#define ____glewLoadProgramNV (*(PFNGLLOADPROGRAMNVPROC *)(0x0098ad70u))
#define ____glewMapNamedBuffer (*(PFNGLMAPNAMEDBUFFERPROC *)(0x0098bc50u))
#define ____glewMapNamedBufferEXT (*(PFNGLMAPNAMEDBUFFEREXTPROC *)(0x0098b5e4u))
#define ____glewMapNamedBufferRange (*(PFNGLMAPNAMEDBUFFERRANGEPROC *)(0x0098bc58u))
#define ____glewMapNamedBufferRangeEXT (*(PFNGLMAPNAMEDBUFFERRANGEEXTPROC *)(0x0098b5ecu))
#define ____glewMatrixFrustumEXT (*(PFNGLMATRIXFRUSTUMEXTPROC *)(0x0098b5f8u))
#define ____glewMatrixLoadIdentityEXT (*(PFNGLMATRIXLOADIDENTITYEXTPROC *)(0x0098b608u))
#define ____glewMatrixLoadTransposedEXT (*(PFNGLMATRIXLOADTRANSPOSEDEXTPROC *)(0x0098b610u))
#define ____glewMatrixLoadTransposefEXT (*(PFNGLMATRIXLOADTRANSPOSEFEXTPROC *)(0x0098b620u))
#define ____glewMatrixLoaddEXT (*(PFNGLMATRIXLOADDEXTPROC *)(0x0098b62cu))
#define ____glewMatrixLoadfEXT (*(PFNGLMATRIXLOADFEXTPROC *)(0x0098b638u))
#define ____glewMatrixMultTransposedEXT (*(PFNGLMATRIXMULTTRANSPOSEDEXTPROC *)(0x0098b644u))
#define ____glewMatrixMultTransposefEXT (*(PFNGLMATRIXMULTTRANSPOSEFEXTPROC *)(0x0098b64cu))
#define ____glewMatrixMultdEXT (*(PFNGLMATRIXMULTDEXTPROC *)(0x0098b660u))
#define ____glewMatrixMultfEXT (*(PFNGLMATRIXMULTFEXTPROC *)(0x0098b66cu))
#define ____glewMatrixOrthoEXT (*(PFNGLMATRIXORTHOEXTPROC *)(0x0098b670u))
#define ____glewMatrixPopEXT (*(PFNGLMATRIXPOPEXTPROC *)(0x0098b67cu))
#define ____glewMatrixPushEXT (*(PFNGLMATRIXPUSHEXTPROC *)(0x0098b690u))
#define ____glewMatrixRotatedEXT (*(PFNGLMATRIXROTATEDEXTPROC *)(0x0098b698u))
#define ____glewMatrixRotatefEXT (*(PFNGLMATRIXROTATEFEXTPROC *)(0x0098b6a0u))
#define ____glewMatrixScaledEXT (*(PFNGLMATRIXSCALEDEXTPROC *)(0x0098b6b0u))
#define ____glewMatrixScalefEXT (*(PFNGLMATRIXSCALEFEXTPROC *)(0x0098b6b8u))
#define ____glewMatrixTranslatedEXT (*(PFNGLMATRIXTRANSLATEDEXTPROC *)(0x0098b6c8u))
#define ____glewMatrixTranslatefEXT (*(PFNGLMATRIXTRANSLATEFEXTPROC *)(0x0098b6d8u))
#define ____glewMultiTexBufferEXT (*(PFNGLMULTITEXBUFFEREXTPROC *)(0x0098b6e4u))
#define ____glewMultiTexCoord1dARB (*(PFNGLMULTITEXCOORD1DARBPROC *)(0x0098c374u))
#define ____glewMultiTexCoord1dvARB (*(PFNGLMULTITEXCOORD1DVARBPROC *)(0x0098c37cu))
#define ____glewMultiTexCoord1fARB (*(PFNGLMULTITEXCOORD1FARBPROC *)(0x0098c388u))
#define ____glewMultiTexCoord1fvARB (*(PFNGLMULTITEXCOORD1FVARBPROC *)(0x0098c390u))
#define ____glewMultiTexCoord1hNV (*(PFNGLMULTITEXCOORD1HNVPROC *)(0x0098a1d0u))
#define ____glewMultiTexCoord1hvNV (*(PFNGLMULTITEXCOORD1HVNVPROC *)(0x0098a1dcu))
#define ____glewMultiTexCoord1iARB (*(PFNGLMULTITEXCOORD1IARBPROC *)(0x0098c394u))
#define ____glewMultiTexCoord1ivARB (*(PFNGLMULTITEXCOORD1IVARBPROC *)(0x0098c3a0u))
#define ____glewMultiTexCoord1sARB (*(PFNGLMULTITEXCOORD1SARBPROC *)(0x0098c3a8u))
#define ____glewMultiTexCoord1svARB (*(PFNGLMULTITEXCOORD1SVARBPROC *)(0x0098c3b4u))
#define ____glewMultiTexCoord2dARB (*(PFNGLMULTITEXCOORD2DARBPROC *)(0x0098c3bcu))
#define ____glewMultiTexCoord2dvARB (*(PFNGLMULTITEXCOORD2DVARBPROC *)(0x0098c3c4u))
#define ____glewMultiTexCoord2fARB (*(PFNGLMULTITEXCOORD2FARBPROC *)(0x0098c3ccu))
#define ____glewMultiTexCoord2fvARB (*(PFNGLMULTITEXCOORD2FVARBPROC *)(0x0098c3d8u))
#define ____glewMultiTexCoord2hNV (*(PFNGLMULTITEXCOORD2HNVPROC *)(0x0098a1e4u))
#define ____glewMultiTexCoord2hvNV (*(PFNGLMULTITEXCOORD2HVNVPROC *)(0x0098a1ecu))
#define ____glewMultiTexCoord2iARB (*(PFNGLMULTITEXCOORD2IARBPROC *)(0x0098c3e0u))
#define ____glewMultiTexCoord2ivARB (*(PFNGLMULTITEXCOORD2IVARBPROC *)(0x0098c3ecu))
#define ____glewMultiTexCoord2sARB (*(PFNGLMULTITEXCOORD2SARBPROC *)(0x0098c3f0u))
#define ____glewMultiTexCoord2svARB (*(PFNGLMULTITEXCOORD2SVARBPROC *)(0x0098c3f8u))
#define ____glewMultiTexCoord3dARB (*(PFNGLMULTITEXCOORD3DARBPROC *)(0x0098c400u))
#define ____glewMultiTexCoord3dvARB (*(PFNGLMULTITEXCOORD3DVARBPROC *)(0x0098c40cu))
#define ____glewMultiTexCoord3fARB (*(PFNGLMULTITEXCOORD3FARBPROC *)(0x0098c414u))
#define ____glewMultiTexCoord3fvARB (*(PFNGLMULTITEXCOORD3FVARBPROC *)(0x0098c420u))
#define ____glewMultiTexCoord3hNV (*(PFNGLMULTITEXCOORD3HNVPROC *)(0x0098a1f8u))
#define ____glewMultiTexCoord3hvNV (*(PFNGLMULTITEXCOORD3HVNVPROC *)(0x0098a204u))
#define ____glewMultiTexCoord3iARB (*(PFNGLMULTITEXCOORD3IARBPROC *)(0x0098c42cu))
#define ____glewMultiTexCoord3ivARB (*(PFNGLMULTITEXCOORD3IVARBPROC *)(0x0098c434u))
#define ____glewMultiTexCoord3sARB (*(PFNGLMULTITEXCOORD3SARBPROC *)(0x0098c438u))
#define ____glewMultiTexCoord3svARB (*(PFNGLMULTITEXCOORD3SVARBPROC *)(0x0098c444u))
#define ____glewMultiTexCoord4dARB (*(PFNGLMULTITEXCOORD4DARBPROC *)(0x0098c44cu))
#define ____glewMultiTexCoord4dvARB (*(PFNGLMULTITEXCOORD4DVARBPROC *)(0x0098c458u))
#define ____glewMultiTexCoord4fARB (*(PFNGLMULTITEXCOORD4FARBPROC *)(0x0098c45cu))
#define ____glewMultiTexCoord4fvARB (*(PFNGLMULTITEXCOORD4FVARBPROC *)(0x0098c468u))
#define ____glewMultiTexCoord4hNV (*(PFNGLMULTITEXCOORD4HNVPROC *)(0x0098a20cu))
#define ____glewMultiTexCoord4hvNV (*(PFNGLMULTITEXCOORD4HVNVPROC *)(0x0098a210u))
#define ____glewMultiTexCoord4iARB (*(PFNGLMULTITEXCOORD4IARBPROC *)(0x0098c474u))
#define ____glewMultiTexCoord4ivARB (*(PFNGLMULTITEXCOORD4IVARBPROC *)(0x0098c478u))
#define ____glewMultiTexCoord4sARB (*(PFNGLMULTITEXCOORD4SARBPROC *)(0x0098c480u))
#define ____glewMultiTexCoord4svARB (*(PFNGLMULTITEXCOORD4SVARBPROC *)(0x0098c488u))
#define ____glewMultiTexCoordPointerEXT (*(PFNGLMULTITEXCOORDPOINTEREXTPROC *)(0x0098b6ecu))
#define ____glewMultiTexEnvfEXT (*(PFNGLMULTITEXENVFEXTPROC *)(0x0098b6fcu))
#define ____glewMultiTexEnvfvEXT (*(PFNGLMULTITEXENVFVEXTPROC *)(0x0098b704u))
#define ____glewMultiTexEnviEXT (*(PFNGLMULTITEXENVIEXTPROC *)(0x0098b710u))
#define ____glewMultiTexEnvivEXT (*(PFNGLMULTITEXENVIVEXTPROC *)(0x0098b71cu))
#define ____glewMultiTexGendEXT (*(PFNGLMULTITEXGENDEXTPROC *)(0x0098b724u))
#define ____glewMultiTexGendvEXT (*(PFNGLMULTITEXGENDVEXTPROC *)(0x0098b738u))
#define ____glewMultiTexGenfEXT (*(PFNGLMULTITEXGENFEXTPROC *)(0x0098b73cu))
#define ____glewMultiTexGenfvEXT (*(PFNGLMULTITEXGENFVEXTPROC *)(0x0098b74cu))
#define ____glewMultiTexGeniEXT (*(PFNGLMULTITEXGENIEXTPROC *)(0x0098b758u))
#define ____glewMultiTexGenivEXT (*(PFNGLMULTITEXGENIVEXTPROC *)(0x0098b764u))
#define ____glewMultiTexImage1DEXT (*(PFNGLMULTITEXIMAGE1DEXTPROC *)(0x0098b76cu))
#define ____glewMultiTexImage2DEXT (*(PFNGLMULTITEXIMAGE2DEXTPROC *)(0x0098b778u))
#define ____glewMultiTexImage3DEXT (*(PFNGLMULTITEXIMAGE3DEXTPROC *)(0x0098b784u))
#define ____glewMultiTexParameterIivEXT (*(PFNGLMULTITEXPARAMETERIIVEXTPROC *)(0x0098b798u))
#define ____glewMultiTexParameterIuivEXT (*(PFNGLMULTITEXPARAMETERIUIVEXTPROC *)(0x0098b7a4u))
#define ____glewMultiTexParameterfEXT (*(PFNGLMULTITEXPARAMETERFEXTPROC *)(0x0098b7acu))
#define ____glewMultiTexParameterfvEXT (*(PFNGLMULTITEXPARAMETERFVEXTPROC *)(0x0098b7b8u))
#define ____glewMultiTexParameteriEXT (*(PFNGLMULTITEXPARAMETERIEXTPROC *)(0x0098b7c4u))
#define ____glewMultiTexParameterivEXT (*(PFNGLMULTITEXPARAMETERIVEXTPROC *)(0x0098b7ccu))
#define ____glewMultiTexRenderbufferEXT (*(PFNGLMULTITEXRENDERBUFFEREXTPROC *)(0x0098b7d8u))
#define ____glewMultiTexSubImage1DEXT (*(PFNGLMULTITEXSUBIMAGE1DEXTPROC *)(0x0098b7e4u))
#define ____glewMultiTexSubImage2DEXT (*(PFNGLMULTITEXSUBIMAGE2DEXTPROC *)(0x0098b7f0u))
#define ____glewMultiTexSubImage3DEXT (*(PFNGLMULTITEXSUBIMAGE3DEXTPROC *)(0x0098b800u))
#define ____glewNamedBufferData (*(PFNGLNAMEDBUFFERDATAPROC *)(0x0098bc64u))
#define ____glewNamedBufferDataEXT (*(PFNGLNAMEDBUFFERDATAEXTPROC *)(0x0098b80cu))
#define ____glewNamedBufferStorage (*(PFNGLNAMEDBUFFERSTORAGEPROC *)(0x0098bc68u))
#define ____glewNamedBufferSubData (*(PFNGLNAMEDBUFFERSUBDATAPROC *)(0x0098bc78u))
#define ____glewNamedBufferSubDataEXT (*(PFNGLNAMEDBUFFERSUBDATAEXTPROC *)(0x0098b81cu))
#define ____glewNamedCopyBufferSubDataEXT (*(PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC *)(0x0098b820u))
#define ____glewNamedFramebufferDrawBuffer (*(PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC *)(0x0098bc7cu))
#define ____glewNamedFramebufferDrawBuffers (*(PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC *)(0x0098bc88u))
#define ____glewNamedFramebufferParameteri (*(PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC *)(0x0098bc8cu))
#define ____glewNamedFramebufferReadBuffer (*(PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC *)(0x0098bc98u))
#define ____glewNamedFramebufferRenderbuffer (*(PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC *)(0x0098bca4u))
#define ____glewNamedFramebufferRenderbufferEXT (*(PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC *)(0x0098b82cu))
#define ____glewNamedFramebufferTexture (*(PFNGLNAMEDFRAMEBUFFERTEXTUREPROC *)(0x0098bcacu))
#define ____glewNamedFramebufferTexture1DEXT (*(PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC *)(0x0098b83cu))
#define ____glewNamedFramebufferTexture2DEXT (*(PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC *)(0x0098b848u))
#define ____glewNamedFramebufferTexture3DEXT (*(PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC *)(0x0098b854u))
#define ____glewNamedFramebufferTextureEXT (*(PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC *)(0x0098b860u))
#define ____glewNamedFramebufferTextureFaceEXT (*(PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC *)(0x0098b868u))
#define ____glewNamedFramebufferTextureLayer (*(PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC *)(0x0098bcb4u))
#define ____glewNamedFramebufferTextureLayerEXT (*(PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC *)(0x0098b870u))
#define ____glewNamedProgramLocalParameter4dEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC *)(0x0098b880u))
#define ____glewNamedProgramLocalParameter4dvEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC *)(0x0098b888u))
#define ____glewNamedProgramLocalParameter4fEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC *)(0x0098b890u))
#define ____glewNamedProgramLocalParameter4fvEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC *)(0x0098b898u))
#define ____glewNamedProgramLocalParameterI4iEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC *)(0x0098b8a0u))
#define ____glewNamedProgramLocalParameterI4ivEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC *)(0x0098b8acu))
#define ____glewNamedProgramLocalParameterI4uiEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC *)(0x0098b8b0u))
#define ____glewNamedProgramLocalParameterI4uivEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC *)(0x0098b8c0u))
#define ____glewNamedProgramLocalParameters4fvEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC *)(0x0098b8c8u))
#define ____glewNamedProgramLocalParametersI4ivEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC *)(0x0098b8ccu))
#define ____glewNamedProgramLocalParametersI4uivEXT (*(PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC *)(0x0098b8d8u))
#define ____glewNamedProgramStringEXT (*(PFNGLNAMEDPROGRAMSTRINGEXTPROC *)(0x0098b8dcu))
#define ____glewNamedRenderbufferStorage (*(PFNGLNAMEDRENDERBUFFERSTORAGEPROC *)(0x0098bcbcu))
#define ____glewNamedRenderbufferStorageEXT (*(PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC *)(0x0098b8ecu))
#define ____glewNamedRenderbufferStorageMultisample (*(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC *)(0x0098bcc8u))
#define ____glewNamedRenderbufferStorageMultisampleCoverageEXT (*(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC *)(0x0098b8f4u))
#define ____glewNamedRenderbufferStorageMultisampleEXT (*(PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC *)(0x0098b8fcu))
#define ____glewNormal3fVertex3fSUN (*(PFNGLNORMAL3FVERTEX3FSUNPROC *)(0x0098b6dcu))
#define ____glewNormal3fVertex3fvSUN (*(PFNGLNORMAL3FVERTEX3FVSUNPROC *)(0x0098b6e8u))
#define ____glewNormal3hNV (*(PFNGLNORMAL3HNVPROC *)(0x0098a220u))
#define ____glewNormal3hvNV (*(PFNGLNORMAL3HVNVPROC *)(0x0098a228u))
#define ____glewNormalStream3bATI (*(PFNGLNORMALSTREAM3BATIPROC *)(0x0098adf8u))
#define ____glewNormalStream3bvATI (*(PFNGLNORMALSTREAM3BVATIPROC *)(0x0098ae04u))
#define ____glewNormalStream3dATI (*(PFNGLNORMALSTREAM3DATIPROC *)(0x0098ae10u))
#define ____glewNormalStream3dvATI (*(PFNGLNORMALSTREAM3DVATIPROC *)(0x0098ae20u))
#define ____glewNormalStream3fATI (*(PFNGLNORMALSTREAM3FATIPROC *)(0x0098ae30u))
#define ____glewNormalStream3fvATI (*(PFNGLNORMALSTREAM3FVATIPROC *)(0x0098ae34u))
#define ____glewNormalStream3iATI (*(PFNGLNORMALSTREAM3IATIPROC *)(0x0098ae40u))
#define ____glewNormalStream3ivATI (*(PFNGLNORMALSTREAM3IVATIPROC *)(0x0098ae50u))
#define ____glewNormalStream3sATI (*(PFNGLNORMALSTREAM3SATIPROC *)(0x0098ae5cu))
#define ____glewNormalStream3svATI (*(PFNGLNORMALSTREAM3SVATIPROC *)(0x0098ae68u))
#define ____glewProgramEnvParameter4dARB (*(PFNGLPROGRAMENVPARAMETER4DARBPROC *)(0x0098a4e8u))
#define ____glewProgramEnvParameter4dvARB (*(PFNGLPROGRAMENVPARAMETER4DVARBPROC *)(0x0098a4ecu))
#define ____glewProgramEnvParameter4fARB (*(PFNGLPROGRAMENVPARAMETER4FARBPROC *)(0x0098a4f4u))
#define ____glewProgramEnvParameter4fvARB (*(PFNGLPROGRAMENVPARAMETER4FVARBPROC *)(0x0098a4fcu))
#define ____glewProgramLocalParameter4dARB (*(PFNGLPROGRAMLOCALPARAMETER4DARBPROC *)(0x0098a504u))
#define ____glewProgramLocalParameter4dvARB (*(PFNGLPROGRAMLOCALPARAMETER4DVARBPROC *)(0x0098a510u))
#define ____glewProgramLocalParameter4fARB (*(PFNGLPROGRAMLOCALPARAMETER4FARBPROC *)(0x0098a518u))
#define ____glewProgramLocalParameter4fvARB (*(PFNGLPROGRAMLOCALPARAMETER4FVARBPROC *)(0x0098a51cu))
#define ____glewProgramParameter4dNV (*(PFNGLPROGRAMPARAMETER4DNVPROC *)(0x0098ad80u))
#define ____glewProgramParameter4dvNV (*(PFNGLPROGRAMPARAMETER4DVNVPROC *)(0x0098ad9cu))
#define ____glewProgramParameter4fNV (*(PFNGLPROGRAMPARAMETER4FNVPROC *)(0x0098ada4u))
#define ____glewProgramParameter4fvNV (*(PFNGLPROGRAMPARAMETER4FVNVPROC *)(0x0098adb0u))
#define ____glewProgramParameters4dvNV (*(PFNGLPROGRAMPARAMETERS4DVNVPROC *)(0x0098adc4u))
#define ____glewProgramParameters4fvNV (*(PFNGLPROGRAMPARAMETERS4FVNVPROC *)(0x0098adccu))
#define ____glewProgramStringARB (*(PFNGLPROGRAMSTRINGARBPROC *)(0x0098a524u))
#define ____glewProgramUniform1d (*(PFNGLPROGRAMUNIFORM1DPROC *)(0x0098c6ccu))
#define ____glewProgramUniform1dv (*(PFNGLPROGRAMUNIFORM1DVPROC *)(0x0098c6d4u))
#define ____glewProgramUniform1f (*(PFNGLPROGRAMUNIFORM1FPROC *)(0x0098c6dcu))
#define ____glewProgramUniform1fEXT (*(PFNGLPROGRAMUNIFORM1FEXTPROC *)(0x0098b904u))
#define ____glewProgramUniform1fv (*(PFNGLPROGRAMUNIFORM1FVPROC *)(0x0098c6e8u))
#define ____glewProgramUniform1fvEXT (*(PFNGLPROGRAMUNIFORM1FVEXTPROC *)(0x0098b910u))
#define ____glewProgramUniform1i (*(PFNGLPROGRAMUNIFORM1IPROC *)(0x00989cc0u))
#define ____glewProgramUniform1i64ARB (*(PFNGLPROGRAMUNIFORM1I64ARBPROC *)(0x0098c01cu))
#define ____glewProgramUniform1i64NV (*(PFNGLPROGRAMUNIFORM1I64NVPROC *)(0x0098a080u))
#define ____glewProgramUniform1i64vARB (*(PFNGLPROGRAMUNIFORM1I64VARBPROC *)(0x0098c028u))
#define ____glewProgramUniform1i64vNV (*(PFNGLPROGRAMUNIFORM1I64VNVPROC *)(0x0098a088u))
#define ____glewProgramUniform1iEXT (*(PFNGLPROGRAMUNIFORM1IEXTPROC *)(0x0098b918u))
#define ____glewProgramUniform1iv (*(PFNGLPROGRAMUNIFORM1IVPROC *)(0x00989cd0u))
#define ____glewProgramUniform1ivEXT (*(PFNGLPROGRAMUNIFORM1IVEXTPROC *)(0x0098b920u))
#define ____glewProgramUniform1ui (*(PFNGLPROGRAMUNIFORM1UIPROC *)(0x00989cd4u))
#define ____glewProgramUniform1ui64ARB (*(PFNGLPROGRAMUNIFORM1UI64ARBPROC *)(0x0098c02cu))
#define ____glewProgramUniform1ui64NV (*(PFNGLPROGRAMUNIFORM1UI64NVPROC *)(0x0098a094u))
#define ____glewProgramUniform1ui64vARB (*(PFNGLPROGRAMUNIFORM1UI64VARBPROC *)(0x0098c038u))
#define ____glewProgramUniform1ui64vNV (*(PFNGLPROGRAMUNIFORM1UI64VNVPROC *)(0x0098a098u))
#define ____glewProgramUniform1uiEXT (*(PFNGLPROGRAMUNIFORM1UIEXTPROC *)(0x0098b928u))
#define ____glewProgramUniform1uiv (*(PFNGLPROGRAMUNIFORM1UIVPROC *)(0x00989cdcu))
#define ____glewProgramUniform1uivEXT (*(PFNGLPROGRAMUNIFORM1UIVEXTPROC *)(0x0098b930u))
#define ____glewProgramUniform2d (*(PFNGLPROGRAMUNIFORM2DPROC *)(0x00989cecu))
#define ____glewProgramUniform2dv (*(PFNGLPROGRAMUNIFORM2DVPROC *)(0x00989cf0u))
#define ____glewProgramUniform2f (*(PFNGLPROGRAMUNIFORM2FPROC *)(0x00989cf8u))
#define ____glewProgramUniform2fEXT (*(PFNGLPROGRAMUNIFORM2FEXTPROC *)(0x0098b93cu))
#define ____glewProgramUniform2fv (*(PFNGLPROGRAMUNIFORM2FVPROC *)(0x00989d00u))
#define ____glewProgramUniform2fvEXT (*(PFNGLPROGRAMUNIFORM2FVEXTPROC *)(0x0098b944u))
#define ____glewProgramUniform2i (*(PFNGLPROGRAMUNIFORM2IPROC *)(0x00989d08u))
#define ____glewProgramUniform2i64ARB (*(PFNGLPROGRAMUNIFORM2I64ARBPROC *)(0x0098c044u))
#define ____glewProgramUniform2i64NV (*(PFNGLPROGRAMUNIFORM2I64NVPROC *)(0x0098a0a4u))
#define ____glewProgramUniform2i64vARB (*(PFNGLPROGRAMUNIFORM2I64VARBPROC *)(0x0098c048u))
#define ____glewProgramUniform2i64vNV (*(PFNGLPROGRAMUNIFORM2I64VNVPROC *)(0x0098a0a8u))
#define ____glewProgramUniform2iEXT (*(PFNGLPROGRAMUNIFORM2IEXTPROC *)(0x0098b950u))
#define ____glewProgramUniform2iv (*(PFNGLPROGRAMUNIFORM2IVPROC *)(0x00989d14u))
#define ____glewProgramUniform2ivEXT (*(PFNGLPROGRAMUNIFORM2IVEXTPROC *)(0x0098b958u))
#define ____glewProgramUniform2ui (*(PFNGLPROGRAMUNIFORM2UIPROC *)(0x00989d1cu))
#define ____glewProgramUniform2ui64ARB (*(PFNGLPROGRAMUNIFORM2UI64ARBPROC *)(0x0098c050u))
#define ____glewProgramUniform2ui64NV (*(PFNGLPROGRAMUNIFORM2UI64NVPROC *)(0x0098a0b0u))
#define ____glewProgramUniform2ui64vARB (*(PFNGLPROGRAMUNIFORM2UI64VARBPROC *)(0x0098c058u))
#define ____glewProgramUniform2ui64vNV (*(PFNGLPROGRAMUNIFORM2UI64VNVPROC *)(0x0098a0c0u))
#define ____glewProgramUniform2uiEXT (*(PFNGLPROGRAMUNIFORM2UIEXTPROC *)(0x0098b95cu))
#define ____glewProgramUniform2uiv (*(PFNGLPROGRAMUNIFORM2UIVPROC *)(0x00989d24u))
#define ____glewProgramUniform2uivEXT (*(PFNGLPROGRAMUNIFORM2UIVEXTPROC *)(0x0098b968u))
#define ____glewProgramUniform3d (*(PFNGLPROGRAMUNIFORM3DPROC *)(0x00989d30u))
#define ____glewProgramUniform3dv (*(PFNGLPROGRAMUNIFORM3DVPROC *)(0x00989d3cu))
#define ____glewProgramUniform3f (*(PFNGLPROGRAMUNIFORM3FPROC *)(0x00989d44u))
#define ____glewProgramUniform3fEXT (*(PFNGLPROGRAMUNIFORM3FEXTPROC *)(0x0098b970u))
#define ____glewProgramUniform3fv (*(PFNGLPROGRAMUNIFORM3FVPROC *)(0x00989d4cu))
#define ____glewProgramUniform3fvEXT (*(PFNGLPROGRAMUNIFORM3FVEXTPROC *)(0x0098b978u))
#define ____glewProgramUniform3i (*(PFNGLPROGRAMUNIFORM3IPROC *)(0x00989d50u))
#define ____glewProgramUniform3i64ARB (*(PFNGLPROGRAMUNIFORM3I64ARBPROC *)(0x0098c068u))
#define ____glewProgramUniform3i64NV (*(PFNGLPROGRAMUNIFORM3I64NVPROC *)(0x0098a0c8u))
#define ____glewProgramUniform3i64vARB (*(PFNGLPROGRAMUNIFORM3I64VARBPROC *)(0x0098c06cu))
#define ____glewProgramUniform3i64vNV (*(PFNGLPROGRAMUNIFORM3I64VNVPROC *)(0x0098a0d0u))
#define ____glewProgramUniform3iEXT (*(PFNGLPROGRAMUNIFORM3IEXTPROC *)(0x0098b984u))
#define ____glewProgramUniform3iv (*(PFNGLPROGRAMUNIFORM3IVPROC *)(0x00989d5cu))
#define ____glewProgramUniform3ivEXT (*(PFNGLPROGRAMUNIFORM3IVEXTPROC *)(0x0098b98cu))
#define ____glewProgramUniform3ui (*(PFNGLPROGRAMUNIFORM3UIPROC *)(0x00989d68u))
#define ____glewProgramUniform3ui64ARB (*(PFNGLPROGRAMUNIFORM3UI64ARBPROC *)(0x0098c074u))
#define ____glewProgramUniform3ui64NV (*(PFNGLPROGRAMUNIFORM3UI64NVPROC *)(0x0098a0dcu))
#define ____glewProgramUniform3ui64vARB (*(PFNGLPROGRAMUNIFORM3UI64VARBPROC *)(0x0098c07cu))
#define ____glewProgramUniform3ui64vNV (*(PFNGLPROGRAMUNIFORM3UI64VNVPROC *)(0x0098a0e4u))
#define ____glewProgramUniform3uiEXT (*(PFNGLPROGRAMUNIFORM3UIEXTPROC *)(0x0098b9a0u))
#define ____glewProgramUniform3uiv (*(PFNGLPROGRAMUNIFORM3UIVPROC *)(0x00989d70u))
#define ____glewProgramUniform3uivEXT (*(PFNGLPROGRAMUNIFORM3UIVEXTPROC *)(0x0098b9a8u))
#define ____glewProgramUniform4d (*(PFNGLPROGRAMUNIFORM4DPROC *)(0x00989d7cu))
#define ____glewProgramUniform4dv (*(PFNGLPROGRAMUNIFORM4DVPROC *)(0x00989d84u))
#define ____glewProgramUniform4f (*(PFNGLPROGRAMUNIFORM4FPROC *)(0x00989d8cu))
#define ____glewProgramUniform4fEXT (*(PFNGLPROGRAMUNIFORM4FEXTPROC *)(0x0098b9b0u))
#define ____glewProgramUniform4fv (*(PFNGLPROGRAMUNIFORM4FVPROC *)(0x00989d94u))
#define ____glewProgramUniform4fvEXT (*(PFNGLPROGRAMUNIFORM4FVEXTPROC *)(0x0098b9b8u))
#define ____glewProgramUniform4i (*(PFNGLPROGRAMUNIFORM4IPROC *)(0x00989d9cu))
#define ____glewProgramUniform4i64ARB (*(PFNGLPROGRAMUNIFORM4I64ARBPROC *)(0x0098c08cu))
#define ____glewProgramUniform4i64NV (*(PFNGLPROGRAMUNIFORM4I64NVPROC *)(0x0098a0ecu))
#define ____glewProgramUniform4i64vARB (*(PFNGLPROGRAMUNIFORM4I64VARBPROC *)(0x0098c090u))
#define ____glewProgramUniform4i64vNV (*(PFNGLPROGRAMUNIFORM4I64VNVPROC *)(0x0098a0f0u))
#define ____glewProgramUniform4iEXT (*(PFNGLPROGRAMUNIFORM4IEXTPROC *)(0x0098b9c4u))
#define ____glewProgramUniform4iv (*(PFNGLPROGRAMUNIFORM4IVPROC *)(0x00989da4u))
#define ____glewProgramUniform4ivEXT (*(PFNGLPROGRAMUNIFORM4IVEXTPROC *)(0x0098b9c8u))
#define ____glewProgramUniform4ui (*(PFNGLPROGRAMUNIFORM4UIPROC *)(0x00989db0u))
#define ____glewProgramUniform4ui64ARB (*(PFNGLPROGRAMUNIFORM4UI64ARBPROC *)(0x0098c098u))
#define ____glewProgramUniform4ui64NV (*(PFNGLPROGRAMUNIFORM4UI64NVPROC *)(0x0098a0f8u))
#define ____glewProgramUniform4ui64vARB (*(PFNGLPROGRAMUNIFORM4UI64VARBPROC *)(0x0098c0a8u))
#define ____glewProgramUniform4ui64vNV (*(PFNGLPROGRAMUNIFORM4UI64VNVPROC *)(0x0098a104u))
#define ____glewProgramUniform4uiEXT (*(PFNGLPROGRAMUNIFORM4UIEXTPROC *)(0x0098b9d4u))
#define ____glewProgramUniform4uiv (*(PFNGLPROGRAMUNIFORM4UIVPROC *)(0x00989db8u))
#define ____glewProgramUniform4uivEXT (*(PFNGLPROGRAMUNIFORM4UIVEXTPROC *)(0x0098b9dcu))
#define ____glewProgramUniformMatrix2dv (*(PFNGLPROGRAMUNIFORMMATRIX2DVPROC *)(0x00989dbcu))
#define ____glewProgramUniformMatrix2fv (*(PFNGLPROGRAMUNIFORMMATRIX2FVPROC *)(0x00989dccu))
#define ____glewProgramUniformMatrix2fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC *)(0x0098b9e0u))
#define ____glewProgramUniformMatrix2x3dv (*(PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC *)(0x00989dd0u))
#define ____glewProgramUniformMatrix2x3fv (*(PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC *)(0x00989ddcu))
#define ____glewProgramUniformMatrix2x3fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC *)(0x0098b9f0u))
#define ____glewProgramUniformMatrix2x4dv (*(PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC *)(0x00989de0u))
#define ____glewProgramUniformMatrix2x4fv (*(PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC *)(0x00989decu))
#define ____glewProgramUniformMatrix2x4fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC *)(0x0098b9f4u))
#define ____glewProgramUniformMatrix3dv (*(PFNGLPROGRAMUNIFORMMATRIX3DVPROC *)(0x00989df8u))
#define ____glewProgramUniformMatrix3fv (*(PFNGLPROGRAMUNIFORMMATRIX3FVPROC *)(0x00989dfcu))
#define ____glewProgramUniformMatrix3fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC *)(0x0098b9fcu))
#define ____glewProgramUniformMatrix3x2dv (*(PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC *)(0x00989e0cu))
#define ____glewProgramUniformMatrix3x2fv (*(PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC *)(0x00989e14u))
#define ____glewProgramUniformMatrix3x2fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC *)(0x0098ba04u))
#define ____glewProgramUniformMatrix3x4dv (*(PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC *)(0x00989e1cu))
#define ____glewProgramUniformMatrix3x4fv (*(PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC *)(0x00989e20u))
#define ____glewProgramUniformMatrix3x4fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC *)(0x0098ba14u))
#define ____glewProgramUniformMatrix4dv (*(PFNGLPROGRAMUNIFORMMATRIX4DVPROC *)(0x00989e30u))
#define ____glewProgramUniformMatrix4fv (*(PFNGLPROGRAMUNIFORMMATRIX4FVPROC *)(0x00989e34u))
#define ____glewProgramUniformMatrix4fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC *)(0x0098ba1cu))
#define ____glewProgramUniformMatrix4x2dv (*(PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC *)(0x00989e3cu))
#define ____glewProgramUniformMatrix4x2fv (*(PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC *)(0x00989e44u))
#define ____glewProgramUniformMatrix4x2fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC *)(0x0098ba20u))
#define ____glewProgramUniformMatrix4x3dv (*(PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC *)(0x00989e4cu))
#define ____glewProgramUniformMatrix4x3fv (*(PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC *)(0x00989e58u))
#define ____glewProgramUniformMatrix4x3fvEXT (*(PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC *)(0x0098ba2cu))
#define ____glewPushClientAttribDefaultEXT (*(PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC *)(0x0098ba34u))
#define ____glewReplacementCodeuiColor3fVertex3fSUN (*(PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC *)(0x0098b6f8u))
#define ____glewReplacementCodeuiColor3fVertex3fvSUN (*(PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC *)(0x0098b708u))
#define ____glewReplacementCodeuiColor4fNormal3fVertex3fSUN (*(PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC *)(0x0098b714u))
#define ____glewReplacementCodeuiColor4fNormal3fVertex3fvSUN (*(PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC *)(0x0098b718u))
#define ____glewReplacementCodeuiColor4ubVertex3fSUN (*(PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC *)(0x0098b72cu))
#define ____glewReplacementCodeuiColor4ubVertex3fvSUN (*(PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC *)(0x0098b730u))
#define ____glewReplacementCodeuiNormal3fVertex3fSUN (*(PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC *)(0x0098b744u))
#define ____glewReplacementCodeuiNormal3fVertex3fvSUN (*(PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC *)(0x0098b750u))
#define ____glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN (*(PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC *)(0x0098b75cu))
#define ____glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN (*(PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC *)(0x0098b768u))
#define ____glewReplacementCodeuiTexCoord2fNormal3fVertex3fSUN (*(PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC *)(0x0098b770u))
#define ____glewReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN (*(PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC *)(0x0098b780u))
#define ____glewReplacementCodeuiTexCoord2fVertex3fSUN (*(PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC *)(0x0098b78cu))
#define ____glewReplacementCodeuiTexCoord2fVertex3fvSUN (*(PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC *)(0x0098b790u))
#define ____glewReplacementCodeuiVertex3fSUN (*(PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC *)(0x0098b79cu))
#define ____glewReplacementCodeuiVertex3fvSUN (*(PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC *)(0x0098b7a8u))
#define ____glewRequestResidentProgramsNV (*(PFNGLREQUESTRESIDENTPROGRAMSNVPROC *)(0x0098add8u))
#define ____glewSecondaryColor3hNV (*(PFNGLSECONDARYCOLOR3HNVPROC *)(0x0098a230u))
#define ____glewSecondaryColor3hvNV (*(PFNGLSECONDARYCOLOR3HVNVPROC *)(0x0098a234u))
#define ____glewSetInvariantEXT (*(PFNGLSETINVARIANTEXTPROC *)(0x0098c324u))
#define ____glewSetLocalConstantEXT (*(PFNGLSETLOCALCONSTANTEXTPROC *)(0x0098c330u))
#define ____glewShaderOp1EXT (*(PFNGLSHADEROP1EXTPROC *)(0x0098c338u))
#define ____glewShaderOp2EXT (*(PFNGLSHADEROP2EXTPROC *)(0x0098c33cu))
#define ____glewShaderOp3EXT (*(PFNGLSHADEROP3EXTPROC *)(0x0098c344u))
#define ____glewShaderSourceARB (*(PFNGLSHADERSOURCEARBPROC *)(0x00989f28u))
#define ____glewStencilFuncSeparate (*(PFNGLSTENCILFUNCSEPARATEPROC *)(0x0098ae14u))
#define ____glewStencilMaskSeparate (*(PFNGLSTENCILMASKSEPARATEPROC *)(0x0098ae1cu))
#define ____glewStencilOpSeparate (*(PFNGLSTENCILOPSEPARATEPROC *)(0x0098ae28u))
#define ____glewSwizzleEXT (*(PFNGLSWIZZLEEXTPROC *)(0x0098c354u))
#define ____glewTexCoord1hNV (*(PFNGLTEXCOORD1HNVPROC *)(0x0098a244u))
#define ____glewTexCoord1hvNV (*(PFNGLTEXCOORD1HVNVPROC *)(0x0098a248u))
#define ____glewTexCoord2fColor3fVertex3fSUN (*(PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC *)(0x0098b7b4u))
#define ____glewTexCoord2fColor3fVertex3fvSUN (*(PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC *)(0x0098b7c8u))
#define ____glewTexCoord2fColor4fNormal3fVertex3fSUN (*(PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC *)(0x0098b7d4u))
#define ____glewTexCoord2fColor4fNormal3fVertex3fvSUN (*(PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC *)(0x0098b7dcu))
#define ____glewTexCoord2fColor4ubVertex3fSUN (*(PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC *)(0x0098b7e8u))
#define ____glewTexCoord2fColor4ubVertex3fvSUN (*(PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC *)(0x0098b7f4u))
#define ____glewTexCoord2fNormal3fVertex3fSUN (*(PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC *)(0x0098b804u))
#define ____glewTexCoord2fNormal3fVertex3fvSUN (*(PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC *)(0x0098b810u))
#define ____glewTexCoord2fVertex3fSUN (*(PFNGLTEXCOORD2FVERTEX3FSUNPROC *)(0x0098b818u))
#define ____glewTexCoord2fVertex3fvSUN (*(PFNGLTEXCOORD2FVERTEX3FVSUNPROC *)(0x0098b828u))
#define ____glewTexCoord2hNV (*(PFNGLTEXCOORD2HNVPROC *)(0x0098a254u))
#define ____glewTexCoord2hvNV (*(PFNGLTEXCOORD2HVNVPROC *)(0x0098a25cu))
#define ____glewTexCoord3hNV (*(PFNGLTEXCOORD3HNVPROC *)(0x0098a264u))
#define ____glewTexCoord3hvNV (*(PFNGLTEXCOORD3HVNVPROC *)(0x0098a26cu))
#define ____glewTexCoord4fColor4fNormal3fVertex4fSUN (*(PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC *)(0x0098b830u))
#define ____glewTexCoord4fColor4fNormal3fVertex4fvSUN (*(PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC *)(0x0098b838u))
#define ____glewTexCoord4fVertex4fSUN (*(PFNGLTEXCOORD4FVERTEX4FSUNPROC *)(0x0098b844u))
#define ____glewTexCoord4fVertex4fvSUN (*(PFNGLTEXCOORD4FVERTEX4FVSUNPROC *)(0x0098b858u))
#define ____glewTexCoord4hNV (*(PFNGLTEXCOORD4HNVPROC *)(0x0098a274u))
#define ____glewTexCoord4hvNV (*(PFNGLTEXCOORD4HVNVPROC *)(0x0098a27cu))
#define ____glewTexParameterIiv (*(PFNGLTEXPARAMETERIIVPROC *)(0x0098b274u))
#define ____glewTexParameterIuiv (*(PFNGLTEXPARAMETERIUIVPROC *)(0x0098b288u))
#define ____glewTextureBuffer (*(PFNGLTEXTUREBUFFERPROC *)(0x0098bcccu))
#define ____glewTextureBufferEXT (*(PFNGLTEXTUREBUFFEREXTPROC *)(0x0098ba3cu))
#define ____glewTextureBufferRange (*(PFNGLTEXTUREBUFFERRANGEPROC *)(0x0098bcd8u))
#define ____glewTextureImage1DEXT (*(PFNGLTEXTUREIMAGE1DEXTPROC *)(0x0098ba48u))
#define ____glewTextureImage2DEXT (*(PFNGLTEXTUREIMAGE2DEXTPROC *)(0x0098ba54u))
#define ____glewTextureImage3DEXT (*(PFNGLTEXTUREIMAGE3DEXTPROC *)(0x0098ba58u))
#define ____glewTextureParameterIiv (*(PFNGLTEXTUREPARAMETERIIVPROC *)(0x0098bce0u))
#define ____glewTextureParameterIivEXT (*(PFNGLTEXTUREPARAMETERIIVEXTPROC *)(0x0098ba60u))
#define ____glewTextureParameterIuiv (*(PFNGLTEXTUREPARAMETERIUIVPROC *)(0x0098bce8u))
#define ____glewTextureParameterIuivEXT (*(PFNGLTEXTUREPARAMETERIUIVEXTPROC *)(0x0098ba68u))
#define ____glewTextureParameterf (*(PFNGLTEXTUREPARAMETERFPROC *)(0x0098bcf0u))
#define ____glewTextureParameterfEXT (*(PFNGLTEXTUREPARAMETERFEXTPROC *)(0x0098ba74u))
#define ____glewTextureParameterfv (*(PFNGLTEXTUREPARAMETERFVPROC *)(0x0098bd00u))
#define ____glewTextureParameterfvEXT (*(PFNGLTEXTUREPARAMETERFVEXTPROC *)(0x0098ba80u))
#define ____glewTextureParameteri (*(PFNGLTEXTUREPARAMETERIPROC *)(0x0098bd08u))
#define ____glewTextureParameteriEXT (*(PFNGLTEXTUREPARAMETERIEXTPROC *)(0x0098ba88u))
#define ____glewTextureParameteriv (*(PFNGLTEXTUREPARAMETERIVPROC *)(0x0098bd0cu))
#define ____glewTextureParameterivEXT (*(PFNGLTEXTUREPARAMETERIVEXTPROC *)(0x0098ba90u))
#define ____glewTextureRenderbufferEXT (*(PFNGLTEXTURERENDERBUFFEREXTPROC *)(0x0098ba9cu))
#define ____glewTextureStorage1D (*(PFNGLTEXTURESTORAGE1DPROC *)(0x0098bd18u))
#define ____glewTextureStorage2D (*(PFNGLTEXTURESTORAGE2DPROC *)(0x0098bd20u))
#define ____glewTextureStorage2DMultisample (*(PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC *)(0x0098bd2cu))
#define ____glewTextureStorage3D (*(PFNGLTEXTURESTORAGE3DPROC *)(0x0098bd34u))
#define ____glewTextureStorage3DMultisample (*(PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC *)(0x0098bd3cu))
#define ____glewTextureSubImage1D (*(PFNGLTEXTURESUBIMAGE1DPROC *)(0x0098bd48u))
#define ____glewTextureSubImage1DEXT (*(PFNGLTEXTURESUBIMAGE1DEXTPROC *)(0x0098baa0u))
#define ____glewTextureSubImage2D (*(PFNGLTEXTURESUBIMAGE2DPROC *)(0x0098bd50u))
#define ____glewTextureSubImage2DEXT (*(PFNGLTEXTURESUBIMAGE2DEXTPROC *)(0x0098baa8u))
#define ____glewTextureSubImage3D (*(PFNGLTEXTURESUBIMAGE3DPROC *)(0x0098bd54u))
#define ____glewTextureSubImage3DEXT (*(PFNGLTEXTURESUBIMAGE3DEXTPROC *)(0x0098bab0u))
#define ____glewTrackMatrixNV (*(PFNGLTRACKMATRIXNVPROC *)(0x0098ade8u))
#define ____glewTransformFeedbackBufferBase (*(PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC *)(0x0098bd60u))
#define ____glewTransformFeedbackBufferRange (*(PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC *)(0x0098bd64u))
#define ____glewTransformFeedbackVaryings (*(PFNGLTRANSFORMFEEDBACKVARYINGSPROC *)(0x0098b294u))
#define ____glewUniform1fARB (*(PFNGLUNIFORM1FARBPROC *)(0x00989f34u))
#define ____glewUniform1fvARB (*(PFNGLUNIFORM1FVARBPROC *)(0x00989f3cu))
#define ____glewUniform1i64ARB (*(PFNGLUNIFORM1I64ARBPROC *)(0x0098c0acu))
#define ____glewUniform1i64NV (*(PFNGLUNIFORM1I64NVPROC *)(0x0098a110u))
#define ____glewUniform1i64vARB (*(PFNGLUNIFORM1I64VARBPROC *)(0x0098c0b8u))
#define ____glewUniform1i64vNV (*(PFNGLUNIFORM1I64VNVPROC *)(0x0098a114u))
#define ____glewUniform1iARB (*(PFNGLUNIFORM1IARBPROC *)(0x00989f40u))
#define ____glewUniform1iv (*(PFNGLUNIFORM1IVPROC *)(0x0098ae64u))
#define ____glewUniform1ivARB (*(PFNGLUNIFORM1IVARBPROC *)(0x00989f4cu))
#define ____glewUniform1ui (*(PFNGLUNIFORM1UIPROC *)(0x0098b29cu))
#define ____glewUniform1ui64ARB (*(PFNGLUNIFORM1UI64ARBPROC *)(0x0098c0bcu))
#define ____glewUniform1ui64NV (*(PFNGLUNIFORM1UI64NVPROC *)(0x0098a124u))
#define ____glewUniform1ui64vARB (*(PFNGLUNIFORM1UI64VARBPROC *)(0x0098c0ccu))
#define ____glewUniform1ui64vNV (*(PFNGLUNIFORM1UI64VNVPROC *)(0x0098a12cu))
#define ____glewUniform1uiEXT (*(PFNGLUNIFORM1UIEXTPROC *)(0x0098bd58u))
#define ____glewUniform1uiv (*(PFNGLUNIFORM1UIVPROC *)(0x0098b2acu))
#define ____glewUniform1uivEXT (*(PFNGLUNIFORM1UIVEXTPROC *)(0x0098bd5cu))
#define ____glewUniform2f (*(PFNGLUNIFORM2FPROC *)(0x0098ae6cu))
#define ____glewUniform2fARB (*(PFNGLUNIFORM2FARBPROC *)(0x00989f58u))
#define ____glewUniform2fvARB (*(PFNGLUNIFORM2FVARBPROC *)(0x00989f5cu))
#define ____glewUniform2i (*(PFNGLUNIFORM2IPROC *)(0x0098ae84u))
#define ____glewUniform2i64ARB (*(PFNGLUNIFORM2I64ARBPROC *)(0x0098c0d4u))
#define ____glewUniform2i64NV (*(PFNGLUNIFORM2I64NVPROC *)(0x0098a134u))
#define ____glewUniform2i64vARB (*(PFNGLUNIFORM2I64VARBPROC *)(0x0098c0dcu))
#define ____glewUniform2i64vNV (*(PFNGLUNIFORM2I64VNVPROC *)(0x0098a13cu))
#define ____glewUniform2iARB (*(PFNGLUNIFORM2IARBPROC *)(0x00989f68u))
#define ____glewUniform2ivARB (*(PFNGLUNIFORM2IVARBPROC *)(0x00989f6cu))
#define ____glewUniform2ui (*(PFNGLUNIFORM2UIPROC *)(0x0098b2b4u))
#define ____glewUniform2ui64ARB (*(PFNGLUNIFORM2UI64ARBPROC *)(0x0098c0e0u))
#define ____glewUniform2ui64NV (*(PFNGLUNIFORM2UI64NVPROC *)(0x0098a144u))
#define ____glewUniform2ui64vARB (*(PFNGLUNIFORM2UI64VARBPROC *)(0x0098c0f0u))
#define ____glewUniform2ui64vNV (*(PFNGLUNIFORM2UI64VNVPROC *)(0x0098a14cu))
#define ____glewUniform2uiEXT (*(PFNGLUNIFORM2UIEXTPROC *)(0x0098bd6cu))
#define ____glewUniform2uiv (*(PFNGLUNIFORM2UIVPROC *)(0x0098b2bcu))
#define ____glewUniform2uivEXT (*(PFNGLUNIFORM2UIVEXTPROC *)(0x0098bd74u))
#define ____glewUniform3f (*(PFNGLUNIFORM3FPROC *)(0x0098aea0u))
#define ____glewUniform3fARB (*(PFNGLUNIFORM3FARBPROC *)(0x00989f7cu))
#define ____glewUniform3fvARB (*(PFNGLUNIFORM3FVARBPROC *)(0x00989f80u))
#define ____glewUniform3i (*(PFNGLUNIFORM3IPROC *)(0x0098aec0u))
#define ____glewUniform3i64ARB (*(PFNGLUNIFORM3I64ARBPROC *)(0x0098c0f4u))
#define ____glewUniform3i64NV (*(PFNGLUNIFORM3I64NVPROC *)(0x0098a158u))
#define ____glewUniform3i64vARB (*(PFNGLUNIFORM3I64VARBPROC *)(0x0098c0fcu))
#define ____glewUniform3i64vNV (*(PFNGLUNIFORM3I64VNVPROC *)(0x0098a15cu))
#define ____glewUniform3iARB (*(PFNGLUNIFORM3IARBPROC *)(0x00989f88u))
#define ____glewUniform3iv (*(PFNGLUNIFORM3IVPROC *)(0x0098aeccu))
#define ____glewUniform3ivARB (*(PFNGLUNIFORM3IVARBPROC *)(0x00989f90u))
#define ____glewUniform3ui (*(PFNGLUNIFORM3UIPROC *)(0x0098b2c8u))
#define ____glewUniform3ui64ARB (*(PFNGLUNIFORM3UI64ARBPROC *)(0x0098c108u))
#define ____glewUniform3ui64NV (*(PFNGLUNIFORM3UI64NVPROC *)(0x0098a168u))
#define ____glewUniform3ui64vARB (*(PFNGLUNIFORM3UI64VARBPROC *)(0x0098c110u))
#define ____glewUniform3ui64vNV (*(PFNGLUNIFORM3UI64VNVPROC *)(0x0098a174u))
#define ____glewUniform3uiEXT (*(PFNGLUNIFORM3UIEXTPROC *)(0x0098bd7cu))
#define ____glewUniform3uiv (*(PFNGLUNIFORM3UIVPROC *)(0x0098b2dcu))
#define ____glewUniform3uivEXT (*(PFNGLUNIFORM3UIVEXTPROC *)(0x0098bd84u))
#define ____glewUniform4f (*(PFNGLUNIFORM4FPROC *)(0x0098aed4u))
#define ____glewUniform4fARB (*(PFNGLUNIFORM4FARBPROC *)(0x00989f9cu))
#define ____glewUniform4fv (*(PFNGLUNIFORM4FVPROC *)(0x0098aee0u))
#define ____glewUniform4fvARB (*(PFNGLUNIFORM4FVARBPROC *)(0x00989fa4u))
#define ____glewUniform4i (*(PFNGLUNIFORM4IPROC *)(0x0098aef4u))
#define ____glewUniform4i64ARB (*(PFNGLUNIFORM4I64ARBPROC *)(0x0098c11cu))
#define ____glewUniform4i64NV (*(PFNGLUNIFORM4I64NVPROC *)(0x0098a178u))
#define ____glewUniform4i64vARB (*(PFNGLUNIFORM4I64VARBPROC *)(0x0098c124u))
#define ____glewUniform4i64vNV (*(PFNGLUNIFORM4I64VNVPROC *)(0x0098a180u))
#define ____glewUniform4iARB (*(PFNGLUNIFORM4IARBPROC *)(0x00989fb0u))
#define ____glewUniform4iv (*(PFNGLUNIFORM4IVPROC *)(0x0098aefcu))
#define ____glewUniform4ivARB (*(PFNGLUNIFORM4IVARBPROC *)(0x00989fbcu))
#define ____glewUniform4ui (*(PFNGLUNIFORM4UIPROC *)(0x0098b2e8u))
#define ____glewUniform4ui64ARB (*(PFNGLUNIFORM4UI64ARBPROC *)(0x0098c128u))
#define ____glewUniform4ui64NV (*(PFNGLUNIFORM4UI64NVPROC *)(0x0098a190u))
#define ____glewUniform4ui64vARB (*(PFNGLUNIFORM4UI64VARBPROC *)(0x0098c134u))
#define ____glewUniform4ui64vNV (*(PFNGLUNIFORM4UI64VNVPROC *)(0x0098a194u))
#define ____glewUniform4uiEXT (*(PFNGLUNIFORM4UIEXTPROC *)(0x0098bd8cu))
#define ____glewUniform4uiv (*(PFNGLUNIFORM4UIVPROC *)(0x0098b2ecu))
#define ____glewUniform4uivEXT (*(PFNGLUNIFORM4UIVEXTPROC *)(0x0098bd94u))
#define ____glewUniformMatrix2fv (*(PFNGLUNIFORMMATRIX2FVPROC *)(0x0098af08u))
#define ____glewUniformMatrix2fvARB (*(PFNGLUNIFORMMATRIX2FVARBPROC *)(0x00989fc0u))
#define ____glewUniformMatrix3fvARB (*(PFNGLUNIFORMMATRIX3FVARBPROC *)(0x00989fc8u))
#define ____glewUniformMatrix4fvARB (*(PFNGLUNIFORMMATRIX4FVARBPROC *)(0x00989fd4u))
#define ____glewUnmapNamedBuffer (*(PFNGLUNMAPNAMEDBUFFERPROC *)(0x0098bd70u))
#define ____glewUnmapNamedBufferEXT (*(PFNGLUNMAPNAMEDBUFFEREXTPROC *)(0x0098bab8u))
#define ____glewUseProgramObjectARB (*(PFNGLUSEPROGRAMOBJECTARBPROC *)(0x00989fd8u))
#define ____glewUseProgramStages (*(PFNGLUSEPROGRAMSTAGESPROC *)(0x00989e60u))
#define ____glewValidateProgram (*(PFNGLVALIDATEPROGRAMPROC *)(0x0098af38u))
#define ____glewValidateProgramARB (*(PFNGLVALIDATEPROGRAMARBPROC *)(0x00989fe4u))
#define ____glewValidateProgramPipeline (*(PFNGLVALIDATEPROGRAMPIPELINEPROC *)(0x00989e68u))
#define ____glewVariantPointerEXT (*(PFNGLVARIANTPOINTEREXTPROC *)(0x0098c358u))
#define ____glewVariantbvEXT (*(PFNGLVARIANTBVEXTPROC *)(0x0098c364u))
#define ____glewVariantdvEXT (*(PFNGLVARIANTDVEXTPROC *)(0x0098c36cu))
#define ____glewVariantfvEXT (*(PFNGLVARIANTFVEXTPROC *)(0x0098c370u))
#define ____glewVariantivEXT (*(PFNGLVARIANTIVEXTPROC *)(0x0098c380u))
#define ____glewVariantsvEXT (*(PFNGLVARIANTSVEXTPROC *)(0x0098c384u))
#define ____glewVariantubvEXT (*(PFNGLVARIANTUBVEXTPROC *)(0x0098c38cu))
#define ____glewVariantuivEXT (*(PFNGLVARIANTUIVEXTPROC *)(0x0098c398u))
#define ____glewVariantusvEXT (*(PFNGLVARIANTUSVEXTPROC *)(0x0098c3a4u))
#define ____glewVertex2hNV (*(PFNGLVERTEX2HNVPROC *)(0x0098a28cu))
#define ____glewVertex2hvNV (*(PFNGLVERTEX2HVNVPROC *)(0x0098a290u))
#define ____glewVertex3hNV (*(PFNGLVERTEX3HNVPROC *)(0x0098a298u))
#define ____glewVertex3hvNV (*(PFNGLVERTEX3HVNVPROC *)(0x0098a2a0u))
#define ____glewVertex4hNV (*(PFNGLVERTEX4HNVPROC *)(0x0098a2b0u))
#define ____glewVertex4hvNV (*(PFNGLVERTEX4HVNVPROC *)(0x0098a2b4u))
#define ____glewVertexArrayAttribBinding (*(PFNGLVERTEXARRAYATTRIBBINDINGPROC *)(0x0098bd78u))
#define ____glewVertexArrayAttribFormat (*(PFNGLVERTEXARRAYATTRIBFORMATPROC *)(0x0098bd80u))
#define ____glewVertexArrayAttribIFormat (*(PFNGLVERTEXARRAYATTRIBIFORMATPROC *)(0x0098bd88u))
#define ____glewVertexArrayAttribLFormat (*(PFNGLVERTEXARRAYATTRIBLFORMATPROC *)(0x0098bd98u))
#define ____glewVertexArrayBindingDivisor (*(PFNGLVERTEXARRAYBINDINGDIVISORPROC *)(0x0098bda0u))
#define ____glewVertexArrayColorOffsetEXT (*(PFNGLVERTEXARRAYCOLOROFFSETEXTPROC *)(0x0098bac4u))
#define ____glewVertexArrayEdgeFlagOffsetEXT (*(PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC *)(0x0098bad0u))
#define ____glewVertexArrayElementBuffer (*(PFNGLVERTEXARRAYELEMENTBUFFERPROC *)(0x0098bda4u))
#define ____glewVertexArrayFogCoordOffsetEXT (*(PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC *)(0x0098bad8u))
#define ____glewVertexArrayIndexOffsetEXT (*(PFNGLVERTEXARRAYINDEXOFFSETEXTPROC *)(0x0098bae0u))
#define ____glewVertexArrayMultiTexCoordOffsetEXT (*(PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC *)(0x0098baecu))
#define ____glewVertexArrayNormalOffsetEXT (*(PFNGLVERTEXARRAYNORMALOFFSETEXTPROC *)(0x0098baf0u))
#define ____glewVertexArraySecondaryColorOffsetEXT (*(PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC *)(0x0098bafcu))
#define ____glewVertexArrayTexCoordOffsetEXT (*(PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC *)(0x0098bb08u))
#define ____glewVertexArrayVertexAttribDivisorEXT (*(PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC *)(0x0098bb0cu))
#define ____glewVertexArrayVertexAttribIOffsetEXT (*(PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC *)(0x0098bb18u))
#define ____glewVertexArrayVertexAttribOffsetEXT (*(PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC *)(0x0098bb20u))
#define ____glewVertexArrayVertexBuffer (*(PFNGLVERTEXARRAYVERTEXBUFFERPROC *)(0x0098bdb0u))
#define ____glewVertexArrayVertexBuffers (*(PFNGLVERTEXARRAYVERTEXBUFFERSPROC *)(0x0098bdbcu))
#define ____glewVertexArrayVertexOffsetEXT (*(PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC *)(0x0098bb28u))
#define ____glewVertexAttrib1d (*(PFNGLVERTEXATTRIB1DPROC *)(0x0098af44u))
#define ____glewVertexAttrib1dARB (*(PFNGLVERTEXATTRIB1DARBPROC *)(0x0098a530u))
#define ____glewVertexAttrib1dNV (*(PFNGLVERTEXATTRIB1DNVPROC *)(0x0098adfcu))
#define ____glewVertexAttrib1dv (*(PFNGLVERTEXATTRIB1DVPROC *)(0x0098af54u))
#define ____glewVertexAttrib1dvARB (*(PFNGLVERTEXATTRIB1DVARBPROC *)(0x0098a538u))
#define ____glewVertexAttrib1dvNV (*(PFNGLVERTEXATTRIB1DVNVPROC *)(0x0098ae00u))
#define ____glewVertexAttrib1f (*(PFNGLVERTEXATTRIB1FPROC *)(0x0098af68u))
#define ____glewVertexAttrib1fARB (*(PFNGLVERTEXATTRIB1FARBPROC *)(0x0098a540u))
#define ____glewVertexAttrib1fNV (*(PFNGLVERTEXATTRIB1FNVPROC *)(0x0098ae0cu))
#define ____glewVertexAttrib1fv (*(PFNGLVERTEXATTRIB1FVPROC *)(0x0098af74u))
#define ____glewVertexAttrib1fvARB (*(PFNGLVERTEXATTRIB1FVARBPROC *)(0x0098a550u))
#define ____glewVertexAttrib1fvNV (*(PFNGLVERTEXATTRIB1FVNVPROC *)(0x0098ae18u))
#define ____glewVertexAttrib1hNV (*(PFNGLVERTEXATTRIB1HNVPROC *)(0x0098a2c0u))
#define ____glewVertexAttrib1hvNV (*(PFNGLVERTEXATTRIB1HVNVPROC *)(0x0098a2c4u))
#define ____glewVertexAttrib1s (*(PFNGLVERTEXATTRIB1SPROC *)(0x0098af78u))
#define ____glewVertexAttrib1sARB (*(PFNGLVERTEXATTRIB1SARBPROC *)(0x0098a558u))
#define ____glewVertexAttrib1sNV (*(PFNGLVERTEXATTRIB1SNVPROC *)(0x0098ae2cu))
#define ____glewVertexAttrib1sv (*(PFNGLVERTEXATTRIB1SVPROC *)(0x0098af8cu))
#define ____glewVertexAttrib1svARB (*(PFNGLVERTEXATTRIB1SVARBPROC *)(0x0098a564u))
#define ____glewVertexAttrib1svNV (*(PFNGLVERTEXATTRIB1SVNVPROC *)(0x0098ae3cu))
#define ____glewVertexAttrib2d (*(PFNGLVERTEXATTRIB2DPROC *)(0x0098af9cu))
#define ____glewVertexAttrib2dARB (*(PFNGLVERTEXATTRIB2DARBPROC *)(0x0098a574u))
#define ____glewVertexAttrib2dNV (*(PFNGLVERTEXATTRIB2DNVPROC *)(0x0098ae44u))
#define ____glewVertexAttrib2dv (*(PFNGLVERTEXATTRIB2DVPROC *)(0x0098afa0u))
#define ____glewVertexAttrib2dvARB (*(PFNGLVERTEXATTRIB2DVARBPROC *)(0x0098a580u))
#define ____glewVertexAttrib2dvNV (*(PFNGLVERTEXATTRIB2DVNVPROC *)(0x0098ae54u))
#define ____glewVertexAttrib2f (*(PFNGLVERTEXATTRIB2FPROC *)(0x0098afacu))
#define ____glewVertexAttrib2fARB (*(PFNGLVERTEXATTRIB2FARBPROC *)(0x0098a58cu))
#define ____glewVertexAttrib2fNV (*(PFNGLVERTEXATTRIB2FNVPROC *)(0x0098ae60u))
#define ____glewVertexAttrib2fv (*(PFNGLVERTEXATTRIB2FVPROC *)(0x0098afc4u))
#define ____glewVertexAttrib2fvARB (*(PFNGLVERTEXATTRIB2FVARBPROC *)(0x0098a594u))
#define ____glewVertexAttrib2fvNV (*(PFNGLVERTEXATTRIB2FVNVPROC *)(0x0098ae70u))
#define ____glewVertexAttrib2hNV (*(PFNGLVERTEXATTRIB2HNVPROC *)(0x0098a2ccu))
#define ____glewVertexAttrib2hvNV (*(PFNGLVERTEXATTRIB2HVNVPROC *)(0x0098a2d8u))
#define ____glewVertexAttrib2s (*(PFNGLVERTEXATTRIB2SPROC *)(0x0098afd0u))
#define ____glewVertexAttrib2sARB (*(PFNGLVERTEXATTRIB2SARBPROC *)(0x0098a5a4u))
#define ____glewVertexAttrib2sNV (*(PFNGLVERTEXATTRIB2SNVPROC *)(0x0098ae7cu))
#define ____glewVertexAttrib2sv (*(PFNGLVERTEXATTRIB2SVPROC *)(0x0098afd4u))
#define ____glewVertexAttrib2svARB (*(PFNGLVERTEXATTRIB2SVARBPROC *)(0x0098a5b0u))
#define ____glewVertexAttrib2svNV (*(PFNGLVERTEXATTRIB2SVNVPROC *)(0x0098ae8cu))
#define ____glewVertexAttrib3d (*(PFNGLVERTEXATTRIB3DPROC *)(0x0098afe8u))
#define ____glewVertexAttrib3dARB (*(PFNGLVERTEXATTRIB3DARBPROC *)(0x0098a5b4u))
#define ____glewVertexAttrib3dNV (*(PFNGLVERTEXATTRIB3DNVPROC *)(0x0098ae94u))
#define ____glewVertexAttrib3dv (*(PFNGLVERTEXATTRIB3DVPROC *)(0x0098afecu))
#define ____glewVertexAttrib3dvARB (*(PFNGLVERTEXATTRIB3DVARBPROC *)(0x0098a5c0u))
#define ____glewVertexAttrib3dvNV (*(PFNGLVERTEXATTRIB3DVNVPROC *)(0x0098aea4u))
#define ____glewVertexAttrib3f (*(PFNGLVERTEXATTRIB3FPROC *)(0x0098b000u))
#define ____glewVertexAttrib3fARB (*(PFNGLVERTEXATTRIB3FARBPROC *)(0x0098a5d4u))
#define ____glewVertexAttrib3fNV (*(PFNGLVERTEXATTRIB3FNVPROC *)(0x0098aeacu))
#define ____glewVertexAttrib3fv (*(PFNGLVERTEXATTRIB3FVPROC *)(0x0098b010u))
#define ____glewVertexAttrib3fvARB (*(PFNGLVERTEXATTRIB3FVARBPROC *)(0x0098a5e0u))
#define ____glewVertexAttrib3fvNV (*(PFNGLVERTEXATTRIB3FVNVPROC *)(0x0098aeb4u))
#define ____glewVertexAttrib3hNV (*(PFNGLVERTEXATTRIB3HNVPROC *)(0x0098a2e4u))
#define ____glewVertexAttrib3hvNV (*(PFNGLVERTEXATTRIB3HVNVPROC *)(0x0098a2e8u))
#define ____glewVertexAttrib3s (*(PFNGLVERTEXATTRIB3SPROC *)(0x0098b014u))
#define ____glewVertexAttrib3sARB (*(PFNGLVERTEXATTRIB3SARBPROC *)(0x0098a5ecu))
#define ____glewVertexAttrib3sNV (*(PFNGLVERTEXATTRIB3SNVPROC *)(0x0098aec4u))
#define ____glewVertexAttrib3sv (*(PFNGLVERTEXATTRIB3SVPROC *)(0x0098b028u))
#define ____glewVertexAttrib3svARB (*(PFNGLVERTEXATTRIB3SVARBPROC *)(0x0098a5f0u))
#define ____glewVertexAttrib3svNV (*(PFNGLVERTEXATTRIB3SVNVPROC *)(0x0098aed0u))
#define ____glewVertexAttrib4Nbv (*(PFNGLVERTEXATTRIB4NBVPROC *)(0x0098b030u))
#define ____glewVertexAttrib4NbvARB (*(PFNGLVERTEXATTRIB4NBVARBPROC *)(0x0098a600u))
#define ____glewVertexAttrib4Niv (*(PFNGLVERTEXATTRIB4NIVPROC *)(0x0098b03cu))
#define ____glewVertexAttrib4NivARB (*(PFNGLVERTEXATTRIB4NIVARBPROC *)(0x0098a60cu))
#define ____glewVertexAttrib4Nsv (*(PFNGLVERTEXATTRIB4NSVPROC *)(0x0098b048u))
#define ____glewVertexAttrib4NsvARB (*(PFNGLVERTEXATTRIB4NSVARBPROC *)(0x0098a61cu))
#define ____glewVertexAttrib4Nub (*(PFNGLVERTEXATTRIB4NUBPROC *)(0x0098b060u))
#define ____glewVertexAttrib4NubARB (*(PFNGLVERTEXATTRIB4NUBARBPROC *)(0x0098a624u))
#define ____glewVertexAttrib4Nubv (*(PFNGLVERTEXATTRIB4NUBVPROC *)(0x0098b06cu))
#define ____glewVertexAttrib4NubvARB (*(PFNGLVERTEXATTRIB4NUBVARBPROC *)(0x0098a634u))
#define ____glewVertexAttrib4Nuiv (*(PFNGLVERTEXATTRIB4NUIVPROC *)(0x0098b070u))
#define ____glewVertexAttrib4NuivARB (*(PFNGLVERTEXATTRIB4NUIVARBPROC *)(0x0098a640u))
#define ____glewVertexAttrib4Nusv (*(PFNGLVERTEXATTRIB4NUSVPROC *)(0x0098b07cu))
#define ____glewVertexAttrib4NusvARB (*(PFNGLVERTEXATTRIB4NUSVARBPROC *)(0x0098a648u))
#define ____glewVertexAttrib4bv (*(PFNGLVERTEXATTRIB4BVPROC *)(0x0098b090u))
#define ____glewVertexAttrib4bvARB (*(PFNGLVERTEXATTRIB4BVARBPROC *)(0x0098a654u))
#define ____glewVertexAttrib4d (*(PFNGLVERTEXATTRIB4DPROC *)(0x0098b098u))
#define ____glewVertexAttrib4dARB (*(PFNGLVERTEXATTRIB4DARBPROC *)(0x0098a66cu))
#define ____glewVertexAttrib4dNV (*(PFNGLVERTEXATTRIB4DNVPROC *)(0x0098aee4u))
#define ____glewVertexAttrib4dv (*(PFNGLVERTEXATTRIB4DVPROC *)(0x0098b0a4u))
#define ____glewVertexAttrib4dvARB (*(PFNGLVERTEXATTRIB4DVARBPROC *)(0x0098a67cu))
#define ____glewVertexAttrib4dvNV (*(PFNGLVERTEXATTRIB4DVNVPROC *)(0x0098aee8u))
#define ____glewVertexAttrib4f (*(PFNGLVERTEXATTRIB4FPROC *)(0x0098b0b4u))
#define ____glewVertexAttrib4fARB (*(PFNGLVERTEXATTRIB4FARBPROC *)(0x0098a680u))
#define ____glewVertexAttrib4fNV (*(PFNGLVERTEXATTRIB4FNVPROC *)(0x0098aef8u))
#define ____glewVertexAttrib4fv (*(PFNGLVERTEXATTRIB4FVPROC *)(0x0098b0bcu))
#define ____glewVertexAttrib4fvARB (*(PFNGLVERTEXATTRIB4FVARBPROC *)(0x0098a69cu))
#define ____glewVertexAttrib4fvNV (*(PFNGLVERTEXATTRIB4FVNVPROC *)(0x0098af04u))
#define ____glewVertexAttrib4hNV (*(PFNGLVERTEXATTRIB4HNVPROC *)(0x0098a2f4u))
#define ____glewVertexAttrib4hvNV (*(PFNGLVERTEXATTRIB4HVNVPROC *)(0x0098a300u))
#define ____glewVertexAttrib4iv (*(PFNGLVERTEXATTRIB4IVPROC *)(0x0098b0c8u))
#define ____glewVertexAttrib4ivARB (*(PFNGLVERTEXATTRIB4IVARBPROC *)(0x0098a6acu))
#define ____glewVertexAttrib4s (*(PFNGLVERTEXATTRIB4SPROC *)(0x0098b0d4u))
#define ____glewVertexAttrib4sARB (*(PFNGLVERTEXATTRIB4SARBPROC *)(0x0098a6b8u))
#define ____glewVertexAttrib4sNV (*(PFNGLVERTEXATTRIB4SNVPROC *)(0x0098af18u))
#define ____glewVertexAttrib4sv (*(PFNGLVERTEXATTRIB4SVPROC *)(0x0098b0dcu))
#define ____glewVertexAttrib4svARB (*(PFNGLVERTEXATTRIB4SVARBPROC *)(0x0098a6ccu))
#define ____glewVertexAttrib4svNV (*(PFNGLVERTEXATTRIB4SVNVPROC *)(0x0098af24u))
#define ____glewVertexAttrib4ubNV (*(PFNGLVERTEXATTRIB4UBNVPROC *)(0x0098af30u))
#define ____glewVertexAttrib4ubv (*(PFNGLVERTEXATTRIB4UBVPROC *)(0x0098b0f0u))
#define ____glewVertexAttrib4ubvARB (*(PFNGLVERTEXATTRIB4UBVARBPROC *)(0x0098a6dcu))
#define ____glewVertexAttrib4ubvNV (*(PFNGLVERTEXATTRIB4UBVNVPROC *)(0x0098af40u))
#define ____glewVertexAttrib4uiv (*(PFNGLVERTEXATTRIB4UIVPROC *)(0x0098b0fcu))
#define ____glewVertexAttrib4uivARB (*(PFNGLVERTEXATTRIB4UIVARBPROC *)(0x0098a6e4u))
#define ____glewVertexAttrib4usv (*(PFNGLVERTEXATTRIB4USVPROC *)(0x0098b104u))
#define ____glewVertexAttrib4usvARB (*(PFNGLVERTEXATTRIB4USVARBPROC *)(0x0098a6fcu))
#define ____glewVertexAttribI1i (*(PFNGLVERTEXATTRIBI1IPROC *)(0x0098b300u))
#define ____glewVertexAttribI1iEXT (*(PFNGLVERTEXATTRIBI1IEXTPROC *)(0x0098bd9cu))
#define ____glewVertexAttribI1iv (*(PFNGLVERTEXATTRIBI1IVPROC *)(0x0098b30cu))
#define ____glewVertexAttribI1ivEXT (*(PFNGLVERTEXATTRIBI1IVEXTPROC *)(0x0098bda8u))
#define ____glewVertexAttribI1ui (*(PFNGLVERTEXATTRIBI1UIPROC *)(0x0098b310u))
#define ____glewVertexAttribI1uiEXT (*(PFNGLVERTEXATTRIBI1UIEXTPROC *)(0x0098bdacu))
#define ____glewVertexAttribI1uiv (*(PFNGLVERTEXATTRIBI1UIVPROC *)(0x0098b31cu))
#define ____glewVertexAttribI1uivEXT (*(PFNGLVERTEXATTRIBI1UIVEXTPROC *)(0x0098bdb8u))
#define ____glewVertexAttribI2i (*(PFNGLVERTEXATTRIBI2IPROC *)(0x0098b328u))
#define ____glewVertexAttribI2iEXT (*(PFNGLVERTEXATTRIBI2IEXTPROC *)(0x0098bdc0u))
#define ____glewVertexAttribI2iv (*(PFNGLVERTEXATTRIBI2IVPROC *)(0x0098b33cu))
#define ____glewVertexAttribI2ivEXT (*(PFNGLVERTEXATTRIBI2IVEXTPROC *)(0x0098bdc8u))
#define ____glewVertexAttribI2ui (*(PFNGLVERTEXATTRIBI2UIPROC *)(0x0098b348u))
#define ____glewVertexAttribI2uiEXT (*(PFNGLVERTEXATTRIBI2UIEXTPROC *)(0x0098bdd0u))
#define ____glewVertexAttribI2uiv (*(PFNGLVERTEXATTRIBI2UIVPROC *)(0x0098b354u))
#define ____glewVertexAttribI2uivEXT (*(PFNGLVERTEXATTRIBI2UIVEXTPROC *)(0x0098bddcu))
#define ____glewVertexAttribI3i (*(PFNGLVERTEXATTRIBI3IPROC *)(0x0098b358u))
#define ____glewVertexAttribI3iEXT (*(PFNGLVERTEXATTRIBI3IEXTPROC *)(0x0098bde4u))
#define ____glewVertexAttribI3iv (*(PFNGLVERTEXATTRIBI3IVPROC *)(0x0098b364u))
#define ____glewVertexAttribI3ivEXT (*(PFNGLVERTEXATTRIBI3IVEXTPROC *)(0x0098bdecu))
#define ____glewVertexAttribI3ui (*(PFNGLVERTEXATTRIBI3UIPROC *)(0x0098b374u))
#define ____glewVertexAttribI3uiEXT (*(PFNGLVERTEXATTRIBI3UIEXTPROC *)(0x0098bdf4u))
#define ____glewVertexAttribI3uiv (*(PFNGLVERTEXATTRIBI3UIVPROC *)(0x0098b37cu))
#define ____glewVertexAttribI3uivEXT (*(PFNGLVERTEXATTRIBI3UIVEXTPROC *)(0x0098be04u))
#define ____glewVertexAttribI4bv (*(PFNGLVERTEXATTRIBI4BVPROC *)(0x0098b38cu))
#define ____glewVertexAttribI4bvEXT (*(PFNGLVERTEXATTRIBI4BVEXTPROC *)(0x0098be0cu))
#define ____glewVertexAttribI4i (*(PFNGLVERTEXATTRIBI4IPROC *)(0x0098b394u))
#define ____glewVertexAttribI4iEXT (*(PFNGLVERTEXATTRIBI4IEXTPROC *)(0x0098be10u))
#define ____glewVertexAttribI4iv (*(PFNGLVERTEXATTRIBI4IVPROC *)(0x0098b3a4u))
#define ____glewVertexAttribI4ivEXT (*(PFNGLVERTEXATTRIBI4IVEXTPROC *)(0x0098be20u))
#define ____glewVertexAttribI4sv (*(PFNGLVERTEXATTRIBI4SVPROC *)(0x0098b3b0u))
#define ____glewVertexAttribI4svEXT (*(PFNGLVERTEXATTRIBI4SVEXTPROC *)(0x0098be28u))
#define ____glewVertexAttribI4ubv (*(PFNGLVERTEXATTRIBI4UBVPROC *)(0x0098b3c0u))
#define ____glewVertexAttribI4ubvEXT (*(PFNGLVERTEXATTRIBI4UBVEXTPROC *)(0x0098be2cu))
#define ____glewVertexAttribI4ui (*(PFNGLVERTEXATTRIBI4UIPROC *)(0x0098b3ccu))
#define ____glewVertexAttribI4uiEXT (*(PFNGLVERTEXATTRIBI4UIEXTPROC *)(0x0098be34u))
#define ____glewVertexAttribI4uiv (*(PFNGLVERTEXATTRIBI4UIVPROC *)(0x0098b3d0u))
#define ____glewVertexAttribI4uivEXT (*(PFNGLVERTEXATTRIBI4UIVEXTPROC *)(0x0098be40u))
#define ____glewVertexAttribI4usv (*(PFNGLVERTEXATTRIBI4USVPROC *)(0x0098b3e4u))
#define ____glewVertexAttribI4usvEXT (*(PFNGLVERTEXATTRIBI4USVEXTPROC *)(0x0098be48u))
#define ____glewVertexAttribIPointer (*(PFNGLVERTEXATTRIBIPOINTERPROC *)(0x0098b3ecu))
#define ____glewVertexAttribIPointerEXT (*(PFNGLVERTEXATTRIBIPOINTEREXTPROC *)(0x0098be50u))
#define ____glewVertexAttribPointerARB (*(PFNGLVERTEXATTRIBPOINTERARBPROC *)(0x0098a700u))
#define ____glewVertexAttribPointerNV (*(PFNGLVERTEXATTRIBPOINTERNVPROC *)(0x0098af4cu))
#define ____glewVertexAttribs1dvNV (*(PFNGLVERTEXATTRIBS1DVNVPROC *)(0x0098af58u))
#define ____glewVertexAttribs1fvNV (*(PFNGLVERTEXATTRIBS1FVNVPROC *)(0x0098af64u))
#define ____glewVertexAttribs1hvNV (*(PFNGLVERTEXATTRIBS1HVNVPROC *)(0x0098a308u))
#define ____glewVertexAttribs1svNV (*(PFNGLVERTEXATTRIBS1SVNVPROC *)(0x0098af6cu))
#define ____glewVertexAttribs2dvNV (*(PFNGLVERTEXATTRIBS2DVNVPROC *)(0x0098af80u))
#define ____glewVertexAttribs2fvNV (*(PFNGLVERTEXATTRIBS2FVNVPROC *)(0x0098af88u))
#define ____glewVertexAttribs2hvNV (*(PFNGLVERTEXATTRIBS2HVNVPROC *)(0x0098a30cu))
#define ____glewVertexAttribs2svNV (*(PFNGLVERTEXATTRIBS2SVNVPROC *)(0x0098af98u))
#define ____glewVertexAttribs3dvNV (*(PFNGLVERTEXATTRIBS3DVNVPROC *)(0x0098afa4u))
#define ____glewVertexAttribs3fvNV (*(PFNGLVERTEXATTRIBS3FVNVPROC *)(0x0098afb4u))
#define ____glewVertexAttribs3hvNV (*(PFNGLVERTEXATTRIBS3HVNVPROC *)(0x0098a318u))
#define ____glewVertexAttribs3svNV (*(PFNGLVERTEXATTRIBS3SVNVPROC *)(0x0098afb8u))
#define ____glewVertexAttribs4dvNV (*(PFNGLVERTEXATTRIBS4DVNVPROC *)(0x0098afccu))
#define ____glewVertexAttribs4fvNV (*(PFNGLVERTEXATTRIBS4FVNVPROC *)(0x0098afd8u))
#define ____glewVertexAttribs4hvNV (*(PFNGLVERTEXATTRIBS4HVNVPROC *)(0x0098a320u))
#define ____glewVertexAttribs4svNV (*(PFNGLVERTEXATTRIBS4SVNVPROC *)(0x0098afe0u))
#define ____glewVertexAttribs4ubvNV (*(PFNGLVERTEXATTRIBS4UBVNVPROC *)(0x0098aff4u))
#define ____glewVertexBlendEnvfATI (*(PFNGLVERTEXBLENDENVFATIPROC *)(0x0098ae78u))
#define ____glewVertexBlendEnviATI (*(PFNGLVERTEXBLENDENVIATIPROC *)(0x0098ae80u))
#define ____glewVertexStream1dATI (*(PFNGLVERTEXSTREAM1DATIPROC *)(0x0098ae90u))
#define ____glewVertexStream1dvATI (*(PFNGLVERTEXSTREAM1DVATIPROC *)(0x0098ae9cu))
#define ____glewVertexStream1fATI (*(PFNGLVERTEXSTREAM1FATIPROC *)(0x0098aea8u))
#define ____glewVertexStream1fvATI (*(PFNGLVERTEXSTREAM1FVATIPROC *)(0x0098aebcu))
#define ____glewVertexStream1iATI (*(PFNGLVERTEXSTREAM1IATIPROC *)(0x0098aec8u))
#define ____glewVertexStream1ivATI (*(PFNGLVERTEXSTREAM1IVATIPROC *)(0x0098aed8u))
#define ____glewVertexStream1sATI (*(PFNGLVERTEXSTREAM1SATIPROC *)(0x0098aedcu))
#define ____glewVertexStream1svATI (*(PFNGLVERTEXSTREAM1SVATIPROC *)(0x0098aeecu))
#define ____glewVertexStream2dATI (*(PFNGLVERTEXSTREAM2DATIPROC *)(0x0098af00u))
#define ____glewVertexStream2dvATI (*(PFNGLVERTEXSTREAM2DVATIPROC *)(0x0098af0cu))
#define ____glewVertexStream2fATI (*(PFNGLVERTEXSTREAM2FATIPROC *)(0x0098af14u))
#define ____glewVertexStream2fvATI (*(PFNGLVERTEXSTREAM2FVATIPROC *)(0x0098af1cu))
#define ____glewVertexStream2iATI (*(PFNGLVERTEXSTREAM2IATIPROC *)(0x0098af34u))
#define ____glewVertexStream2ivATI (*(PFNGLVERTEXSTREAM2IVATIPROC *)(0x0098af3cu))
#define ____glewVertexStream2sATI (*(PFNGLVERTEXSTREAM2SATIPROC *)(0x0098af48u))
#define ____glewVertexStream2svATI (*(PFNGLVERTEXSTREAM2SVATIPROC *)(0x0098af5cu))
#define ____glewVertexStream3dATI (*(PFNGLVERTEXSTREAM3DATIPROC *)(0x0098af60u))
#define ____glewVertexStream3dvATI (*(PFNGLVERTEXSTREAM3DVATIPROC *)(0x0098af70u))
#define ____glewVertexStream3fATI (*(PFNGLVERTEXSTREAM3FATIPROC *)(0x0098af7cu))
#define ____glewVertexStream3fvATI (*(PFNGLVERTEXSTREAM3FVATIPROC *)(0x0098af84u))
#define ____glewVertexStream3iATI (*(PFNGLVERTEXSTREAM3IATIPROC *)(0x0098af94u))
#define ____glewVertexStream3ivATI (*(PFNGLVERTEXSTREAM3IVATIPROC *)(0x0098afa8u))
#define ____glewVertexStream3sATI (*(PFNGLVERTEXSTREAM3SATIPROC *)(0x0098afb0u))
#define ____glewVertexStream3svATI (*(PFNGLVERTEXSTREAM3SVATIPROC *)(0x0098afbcu))
#define ____glewVertexStream4dATI (*(PFNGLVERTEXSTREAM4DATIPROC *)(0x0098afc8u))
#define ____glewVertexStream4dvATI (*(PFNGLVERTEXSTREAM4DVATIPROC *)(0x0098afdcu))
#define ____glewVertexStream4fATI (*(PFNGLVERTEXSTREAM4FATIPROC *)(0x0098afe4u))
#define ____glewVertexStream4fvATI (*(PFNGLVERTEXSTREAM4FVATIPROC *)(0x0098aff0u))
#define ____glewVertexStream4iATI (*(PFNGLVERTEXSTREAM4IATIPROC *)(0x0098affcu))
#define ____glewVertexStream4ivATI (*(PFNGLVERTEXSTREAM4IVATIPROC *)(0x0098b008u))
#define ____glewVertexStream4sATI (*(PFNGLVERTEXSTREAM4SATIPROC *)(0x0098b01cu))
#define ____glewVertexStream4svATI (*(PFNGLVERTEXSTREAM4SVATIPROC *)(0x0098b020u))
#define ____glewVertexWeighthNV (*(PFNGLVERTEXWEIGHTHNVPROC *)(0x0098a328u))
#define ____glewVertexWeighthvNV (*(PFNGLVERTEXWEIGHTHVNVPROC *)(0x0098a330u))
#define ____glewWriteMaskEXT (*(PFNGLWRITEMASKEXTPROC *)(0x0098c3acu))
#define DAT_00937db0 (*(undefined1 *)(0x00937db0u))
#define DAT_0095b210 (*(undefined1 *)(0x0095b210u))
#define DAT_0095b290 (*(undefined1 *)(0x0095b290u))
#define DAT_0095b2b0 (*(undefined1 *)(0x0095b2b0u))
#define DAT_0095b47c (*(undefined1 *)(0x0095b47cu))
#define DAT_009936d0 (*(undefined1 *)(0x009936d0u))
#define DAT_00993b54 (*(undefined1 *)(0x00993b54u))
#define DAT_00993c74 (*(undefined1 *)(0x00993c74u))

//==== 00004886f0 004886f0_FUN_004886f0 ====
byte * __fastcall FUN_004886f0(byte *param_1,int param_2,int param_3,int param_4,int param_5);

// decompiled by BatchDecomp @ 004886f0 name=FUN_004886f0 conv=unknown body=814

byte * __fastcall FUN_004886f0(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *local_10;
  
  if (param_3 == param_2) {
    return param_1;
  }
  pbVar6 = (byte *)malloc(param_3 * param_4 * param_5);
  if (pbVar6 == (byte *)0x0) {
    free(param_1);
    DAT_009936c8 = "Out of memory";
    return (byte *)0x0;
  }
  if (0 < param_5) {
    pbVar8 = pbVar6;
    local_10 = param_1;
    do {
      switch(param_2 * 8 + -10 + param_3) {
      case 0:
        pbVar1 = pbVar8;
        pbVar2 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          *pbVar1 = *pbVar2;
          pbVar2 = pbVar2 + 1;
          pbVar1[1] = 0xff;
          pbVar1 = pbVar1 + 2;
        }
        break;
      case 1:
        pbVar1 = pbVar8;
        pbVar2 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          bVar3 = *pbVar2;
          pbVar1[2] = bVar3;
          pbVar2 = pbVar2 + 1;
          pbVar1[1] = bVar3;
          *pbVar1 = bVar3;
          pbVar1 = pbVar1 + 3;
        }
        break;
      case 2:
        pbVar1 = pbVar8;
        pbVar2 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          bVar3 = *pbVar2;
          pbVar1[2] = bVar3;
          pbVar2 = pbVar2 + 1;
          pbVar1[1] = bVar3;
          *pbVar1 = bVar3;
          pbVar1[3] = 0xff;
          pbVar1 = pbVar1 + 4;
        }
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 8:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0x11:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
        break;
      case 7:
        pbVar1 = pbVar8;
        pbVar2 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          *pbVar1 = *pbVar2;
          pbVar2 = pbVar2 + 2;
          pbVar1 = pbVar1 + 1;
        }
        break;
      case 9:
        pbVar1 = pbVar8;
        pbVar2 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          bVar3 = *pbVar2;
          pbVar1[2] = bVar3;
          pbVar2 = pbVar2 + 2;
          pbVar1[1] = bVar3;
          *pbVar1 = bVar3;
          pbVar1 = pbVar1 + 3;
        }
        break;
      case 10:
        pbVar2 = pbVar8;
        pbVar1 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          bVar3 = *pbVar1;
          pbVar2[2] = bVar3;
          pbVar2[1] = bVar3;
          *pbVar2 = bVar3;
          pbVar2[3] = pbVar1[1];
          pbVar2 = pbVar2 + 4;
          pbVar1 = pbVar1 + 2;
        }
        break;
      case 0xf:
        pbVar2 = pbVar8;
        pbVar1 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          *pbVar2 = (byte)((uint)pbVar1[1] * 0x96 + (uint)pbVar1[2] * 0x1d + (uint)*pbVar1 * 0x4d >>
                          8);
          pbVar2 = pbVar2 + 1;
          pbVar1 = pbVar1 + 3;
        }
        break;
      case 0x10:
        pbVar2 = pbVar8;
        pbVar1 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          bVar3 = pbVar1[1];
          bVar4 = pbVar1[2];
          bVar5 = *pbVar1;
          pbVar2[1] = 0xff;
          *pbVar2 = (byte)((uint)bVar3 * 0x96 + (uint)bVar4 * 0x1d + (uint)bVar5 * 0x4d >> 8);
          pbVar2 = pbVar2 + 2;
          pbVar1 = pbVar1 + 3;
        }
        break;
      case 0x12:
        pbVar2 = pbVar8;
        pbVar1 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          *pbVar2 = *pbVar1;
          pbVar2[1] = pbVar1[1];
          pbVar2[2] = pbVar1[2];
          pbVar2[3] = 0xff;
          pbVar2 = pbVar2 + 4;
          pbVar1 = pbVar1 + 3;
        }
        break;
      case 0x17:
        pbVar2 = pbVar8;
        pbVar1 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          *pbVar2 = (byte)((uint)pbVar1[1] * 0x96 + (uint)pbVar1[2] * 0x1d + (uint)*pbVar1 * 0x4d >>
                          8);
          pbVar2 = pbVar2 + 1;
          pbVar1 = pbVar1 + 4;
        }
        break;
      case 0x18:
        pbVar2 = pbVar8;
        pbVar1 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          *pbVar2 = (byte)((uint)pbVar1[1] * 0x96 + (uint)pbVar1[2] * 0x1d + (uint)*pbVar1 * 0x4d >>
                          8);
          pbVar2[1] = pbVar1[3];
          pbVar2 = pbVar2 + 2;
          pbVar1 = pbVar1 + 4;
        }
        break;
      case 0x19:
        pbVar2 = pbVar8;
        pbVar1 = local_10;
        for (iVar7 = param_4 + -1; -1 < iVar7; iVar7 = iVar7 + -1) {
          *pbVar2 = *pbVar1;
          pbVar2[1] = pbVar1[1];
          pbVar2[2] = pbVar1[2];
          pbVar2 = pbVar2 + 3;
          pbVar1 = pbVar1 + 4;
        }
        break;
      default:
        goto switchD_00488794_default;
      }
switchD_00488794_default:
      pbVar8 = pbVar8 + param_3 * param_4;
      local_10 = local_10 + param_2 * param_4;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  free(param_1);
  return pbVar6;
}


//==== 0000489120 00489120_FUN_00489120 ====
void __fastcall FUN_00489120(int param_1,int param_2,int param_3,int param_4);

// decompiled by BatchDecomp @ 00489120 name=FUN_00489120 conv=unknown body=1478

void __fastcall FUN_00489120(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  int iVar16;
  int iVar17;
  undefined1 *local_120;
  int local_11c;
  uint local_118;
  int local_104[23];
  int local_a8[8];
  int local_88[8];
  int local_68[24];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar10 = local_104 + 7;
  pbVar15 = (byte *)(param_4 + 0x30);
  psVar9 = (short *)(param_3 + 0x20);
  local_120 = (undefined1 *)0x8;
  do {
    if ((((psVar9[-8] == 0) && (*psVar9 == 0)) && (psVar9[8] == 0)) &&
       (((psVar9[0x10] == 0 && (psVar9[0x18] == 0)) && ((psVar9[0x20] == 0 && (psVar9[0x28] == 0))))
       )) {
      iVar5 = (int)psVar9[-0x10] * (uint)pbVar15[-0x30] * 4;
      piVar10[0x30] = iVar5;
      piVar10[0x28] = iVar5;
      piVar10[8] = iVar5;
      *piVar10 = iVar5;
      piVar10[-8] = iVar5;
      iVar11 = iVar5;
      iVar1 = iVar5;
    }
    else {
      iVar8 = ((int)psVar9[0x20] * (uint)*pbVar15 + (uint)pbVar15[-0x20] * (int)*psVar9) * 0x8a9;
      iVar12 = (uint)pbVar15[-0x20] * (int)*psVar9 * 0xc3f + iVar8;
      iVar8 = iVar8 + (int)psVar9[0x20] * (uint)*pbVar15 * -0x1d8f;
      iVar2 = ((int)psVar9[0x10] * (uint)pbVar15[-0x10] + (int)psVar9[-0x10] * (uint)pbVar15[-0x30])
              * 0x1000;
      iVar4 = ((int)psVar9[-0x10] * (uint)pbVar15[-0x30] - (int)psVar9[0x10] * (uint)pbVar15[-0x10])
              * 0x1000;
      iVar16 = (int)psVar9[0x28] * (uint)pbVar15[8];
      iVar6 = (int)psVar9[0x18] * (uint)pbVar15[-8];
      iVar1 = (int)psVar9[8] * (uint)pbVar15[-0x18];
      iVar7 = (uint)pbVar15[-0x28] * (int)psVar9[-8];
      iVar3 = (iVar1 + iVar16) * -0x1f62;
      iVar11 = (iVar6 + iVar7 + iVar1 + iVar16) * 0x12d0;
      iVar17 = iVar11 + (iVar16 + iVar7) * -0xe65;
      iVar11 = iVar11 + (iVar1 + iVar6) * -0x2901;
      iVar5 = (iVar6 + iVar7) * -0x63d;
      iVar7 = iVar7 * 0x1805 + iVar5 + iVar17;
      iVar14 = iVar1 * 0x312a + iVar3 + iVar11;
      iVar11 = iVar6 * 0x20da + iVar5 + iVar11;
      iVar3 = iVar16 * 0x4c7 + iVar17 + iVar3;
      iVar1 = iVar2 + iVar12 + 0x200;
      iVar5 = (iVar4 - iVar8) + 0x200;
      iVar8 = iVar4 + iVar8 + 0x200;
      iVar2 = (iVar2 - iVar12) + 0x200;
      piVar10[-8] = iVar1 + iVar7 >> 10;
      piVar10[0x30] = iVar1 - iVar7 >> 10;
      *piVar10 = iVar8 + iVar14 >> 10;
      piVar10[8] = iVar5 + iVar11 >> 10;
      piVar10[0x28] = iVar8 - iVar14 >> 10;
      iVar1 = iVar2 + iVar3 >> 10;
      iVar5 = iVar5 - iVar11 >> 10;
      iVar11 = iVar2 - iVar3 >> 10;
    }
    piVar10[0x18] = iVar11;
    psVar9 = psVar9 + 1;
    piVar10[0x20] = iVar5;
    pbVar15 = pbVar15 + 1;
    piVar10[0x10] = iVar1;
    piVar10 = piVar10 + 1;
    local_120 = (undefined1 *)((int)local_120 + -1);
  } while (local_120 != (undefined1 *)0x0);
  piVar10 = local_104 + 5;
  local_120 = (undefined1 *)(param_1 + 1);
  local_11c = 8;
  do {
    iVar6 = (*piVar10 + piVar10[-4]) * 0x8a9;
    iVar14 = piVar10[-4] * 0xc3f + iVar6;
    iVar6 = iVar6 + *piVar10 * -0x1d8f;
    iVar1 = (piVar10[-6] - piVar10[-2]) * 0x1000;
    iVar7 = (piVar10[-2] + piVar10[-6]) * 0x1000;
    iVar2 = piVar10[-5];
    iVar5 = (iVar7 - iVar14) + 0x10000;
    iVar11 = (piVar10[-1] + iVar2 + piVar10[1] + piVar10[-3]) * 0x12d0;
    iVar8 = (piVar10[1] + piVar10[-3]) * -0x1f62;
    iVar12 = iVar11 + (piVar10[1] + iVar2) * -0xe65;
    iVar11 = iVar11 + (piVar10[-3] + piVar10[-1]) * -0x2901;
    iVar4 = (piVar10[-1] + iVar2) * -0x63d;
    iVar2 = iVar2 * 0x1805 + iVar4 + iVar12;
    iVar3 = piVar10[-3] * 0x312a + iVar8 + iVar11;
    iVar11 = piVar10[-1] * 0x20da + iVar4 + iVar11;
    iVar7 = iVar7 + iVar14 + 0x10000;
    iVar8 = piVar10[1] * 0x4c7 + iVar12 + iVar8;
    iVar4 = iVar1 + iVar6 + 0x10000;
    iVar1 = (iVar1 - iVar6) + 0x10000;
    local_118 = (iVar7 + iVar2 >> 0x11) + 0x80;
    if (0xff < local_118) {
      if ((int)local_118 < 0) {
        local_118 = 0;
      }
      else if (0xff < (int)local_118) {
        local_118 = 0xff;
      }
    }
    uVar13 = (iVar7 - iVar2 >> 0x11) + 0x80;
    local_120[-1] = (char)local_118;
    if (0xff < uVar13) {
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
    }
    local_120[6] = (char)uVar13;
    uVar13 = (iVar4 + iVar3 >> 0x11) + 0x80;
    if (0xff < uVar13) {
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
    }
    *local_120 = (char)uVar13;
    uVar13 = (iVar4 - iVar3 >> 0x11) + 0x80;
    if (0xff < uVar13) {
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
    }
    local_120[5] = (char)uVar13;
    uVar13 = (iVar1 + iVar11 >> 0x11) + 0x80;
    if (0xff < uVar13) {
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
    }
    local_120[1] = (char)uVar13;
    uVar13 = (iVar1 - iVar11 >> 0x11) + 0x80;
    if (0xff < uVar13) {
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
    }
    local_120[4] = (char)uVar13;
    uVar13 = (iVar5 + iVar8 >> 0x11) + 0x80;
    if (0xff < uVar13) {
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
    }
    local_120[2] = (char)uVar13;
    uVar13 = (iVar5 - iVar8 >> 0x11) + 0x80;
    if (0xff < uVar13) {
      if ((int)uVar13 < 0) {
        uVar13 = 0;
      }
      else if (0xff < (int)uVar13) {
        uVar13 = 0xff;
      }
    }
    local_120[3] = (char)uVar13;
    piVar10 = piVar10 + 8;
    local_120 = local_120 + param_2;
    local_11c = local_11c + -1;
  } while (local_11c != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000048a1e0 0048a1e0_FUN_0048a1e0 ====
extern undefined4 FUN_00488570(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 __fastcall FUN_0048a1e0(uint *param_1,int param_2);

// decompiled by BatchDecomp @ 0048a1e0 name=FUN_0048a1e0 conv=unknown body=983

undefined4 __fastcall FUN_0048a1e0(uint *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  uint local_14;
  int local_10;
  uint local_8;
  
  local_14 = 1;
  local_8 = 1;
  iVar3 = FUN_00488570();
  if (10 < iVar3) {
    if ((FILE *)param_1[4] == (FILE *)0x0) {
      pbVar2 = (byte *)param_1[5];
      if ((byte *)param_1[6] <= pbVar2) goto LAB_0048a591;
      bVar1 = *pbVar2;
      param_1[5] = (uint)(pbVar2 + 1);
      uVar4 = (uint)bVar1;
    }
    else {
      uVar4 = fgetc((FILE *)param_1[4]);
      if (uVar4 == 0xffffffff) {
        uVar4 = 0;
      }
    }
    if (uVar4 != 8) {
LAB_0048a591:
      DAT_009936c8 = "JPEG format not supported: 8-bit only";
      return 0;
    }
    uVar4 = FUN_00488570();
    param_1[1] = uVar4;
    if (uVar4 == 0) {
      DAT_009936c8 = "JPEG format not supported: delayed height";
      return 0;
    }
    uVar4 = FUN_00488570();
    *param_1 = uVar4;
    if (uVar4 != 0) {
      if ((FILE *)param_1[4] == (FILE *)0x0) {
        pbVar2 = (byte *)param_1[5];
        if ((byte *)param_1[6] <= pbVar2) goto LAB_0048a5a4;
        bVar1 = *pbVar2;
        param_1[5] = (uint)(pbVar2 + 1);
        uVar4 = (uint)bVar1;
      }
      else {
        uVar4 = fgetc((FILE *)param_1[4]);
        if (uVar4 == 0xffffffff) {
          uVar4 = 0;
        }
      }
      if ((uVar4 == 3) || (uVar4 == 1)) {
        param_1[2] = uVar4;
        if (0 < (int)uVar4) {
          puVar5 = param_1 + 0xd7a;
          do {
            puVar5[-2] = 0;
            *puVar5 = 0;
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 0xe;
          } while (uVar4 != 0);
          uVar4 = param_1[2];
        }
        if (iVar3 == uVar4 * 3 + 8) {
          if (0 < (int)uVar4) {
            puVar5 = param_1 + 0xd6e;
            uVar7 = 0;
            do {
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                pbVar2 = (byte *)param_1[5];
                if (pbVar2 < (byte *)param_1[6]) {
                  bVar1 = *pbVar2;
                  param_1[5] = (uint)(pbVar2 + 1);
                  uVar4 = (uint)bVar1;
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = fgetc((FILE *)param_1[4]);
                if (uVar4 == 0xffffffff) {
                  uVar4 = 0;
                }
              }
              uVar8 = uVar7 + 1;
              puVar5[-1] = uVar4;
              if ((uVar4 != uVar8) && (uVar4 != uVar7)) goto LAB_0048a5a4;
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                pbVar2 = (byte *)param_1[5];
                if (pbVar2 < (byte *)param_1[6]) {
                  bVar1 = *pbVar2;
                  param_1[5] = (uint)(pbVar2 + 1);
                  uVar4 = (uint)bVar1;
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = fgetc((FILE *)param_1[4]);
                if (uVar4 == 0xffffffff) {
                  uVar4 = 0;
                }
              }
              uVar7 = (int)uVar4 >> 4;
              *puVar5 = uVar7;
              if ((uVar7 == 0) || (4 < (int)uVar7)) goto LAB_0048a5a4;
              uVar4 = uVar4 & 0xf;
              puVar5[1] = uVar4;
              if ((uVar4 == 0) || (4 < uVar4)) goto LAB_0048a5a4;
              if ((FILE *)param_1[4] == (FILE *)0x0) {
                pbVar2 = (byte *)param_1[5];
                if (pbVar2 < (byte *)param_1[6]) {
                  bVar1 = *pbVar2;
                  param_1[5] = (uint)(pbVar2 + 1);
                  uVar4 = (uint)bVar1;
                }
                else {
                  uVar4 = 0;
                }
              }
              else {
                uVar4 = fgetc((FILE *)param_1[4]);
                if (uVar4 == 0xffffffff) {
                  uVar4 = 0;
                }
              }
              puVar5[2] = uVar4;
              if (3 < (int)uVar4) goto LAB_0048a5a4;
              puVar5 = puVar5 + 0xe;
              uVar4 = param_1[2];
              uVar7 = uVar8;
            } while ((int)uVar8 < (int)uVar4);
          }
          if (param_2 == 0) {
            if ((uint)((0x40000000 / (ulonglong)*param_1) / (ulonglong)uVar4) < param_1[1]) {
              DAT_009936c8 = "Image too large to decode";
              return 0;
            }
            if (0 < (int)uVar4) {
              uVar7 = 1;
              puVar5 = param_1 + 0xd6f;
              uVar8 = 1;
              do {
                local_14 = puVar5[-1];
                if ((int)puVar5[-1] <= (int)uVar8) {
                  local_14 = uVar8;
                }
                local_8 = *puVar5;
                if ((int)*puVar5 <= (int)uVar7) {
                  local_8 = uVar7;
                }
                uVar4 = uVar4 - 1;
                uVar7 = local_8;
                puVar5 = puVar5 + 0xe;
                uVar8 = local_14;
              } while (uVar4 != 0);
            }
            uVar4 = local_8 * 8;
            param_1[0xd68] = local_8;
            uVar7 = local_14 * 8;
            param_1[0xd67] = local_14;
            param_1[0xd6b] = uVar7;
            param_1[0xd6c] = uVar4;
            local_10 = 0;
            param_1[0xd69] = ((*param_1 - 1) + uVar7) / uVar7;
            param_1[0xd6a] = ((param_1[1] - 1) + uVar4) / uVar4;
            if (0 < (int)param_1[2]) {
              puVar5 = param_1 + 0xd74;
              do {
                *puVar5 = (*param_1 * puVar5[-6] + -1 + local_14) / local_14;
                puVar5[1] = (param_1[1] * puVar5[-5] + (local_8 - 1)) / local_8;
                uVar7 = param_1[0xd69] * puVar5[-6] * 8;
                puVar5[2] = uVar7;
                uVar4 = param_1[0xd6a] * puVar5[-5] * 8;
                puVar5[3] = uVar4;
                pvVar6 = malloc(uVar4 * uVar7 + 0xf);
                puVar5[5] = (uint)pvVar6;
                if (pvVar6 == (void *)0x0) {
                  local_10 = local_10 + -1;
                  if (-1 < local_10) {
                    param_1 = param_1 + local_10 * 0xe + 0xd78;
                    do {
                      free((void *)param_1[1]);
                      *param_1 = 0;
                      local_10 = local_10 + -1;
                      param_1 = param_1 + -0xe;
                    } while (-1 < local_10);
                  }
                  DAT_009936c8 = "Out of memory";
                  return 0;
                }
                puVar5[6] = 0;
                puVar5[4] = (int)pvVar6 + 0xfU & 0xfffffff0;
                puVar5 = puVar5 + 0xe;
                local_10 = local_10 + 1;
              } while (local_10 < (int)param_1[2]);
            }
          }
          return 1;
        }
      }
    }
  }
LAB_0048a5a4:
  DAT_009936c8 = "Corrupt JPEG";
  return 0;
}


//==== 000048b450 0048b450_FUN_0048b450 ====
extern undefined4 FUN_0048b3e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 __fastcall FUN_0048b450(undefined4 *param_1);

// decompiled by BatchDecomp @ 0048b450 name=FUN_0048b450 conv=unknown body=1023

undefined4 __fastcall FUN_0048b450(undefined4 *param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte *pbVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  size_t _NewSize;
  int iVar13;
  int local_8;
  
  while( true ) {
    while( true ) {
      iVar12 = param_1[2];
      if (iVar12 < 0x10) {
        uVar8 = param_1[3];
        iVar9 = iVar12;
        do {
          pbVar4 = (byte *)*param_1;
          if (pbVar4 < (byte *)param_1[1]) {
            bVar1 = *pbVar4;
            *param_1 = pbVar4 + 1;
            uVar7 = (uint)bVar1;
          }
          else {
            uVar7 = 0;
          }
          iVar12 = iVar9 + 8;
          uVar8 = uVar7 << ((byte)iVar9 & 0x1f) | uVar8;
          param_1[2] = iVar12;
          param_1[3] = uVar8;
          iVar9 = iVar12;
        } while (iVar12 < 0x19);
      }
      else {
        uVar8 = param_1[3];
      }
      uVar7 = (uint)*(ushort *)((int)param_1 + (uVar8 & 0x1ff) * 2 + 0x20);
      if (uVar7 < 0xffff) {
        bVar1 = *(byte *)(uVar7 + 0x4a4 + (int)param_1);
        uVar8 = uVar8 >> (bVar1 & 0x1f);
        iVar12 = iVar12 - (uint)bVar1;
        param_1[3] = uVar8;
        param_1[2] = iVar12;
      }
      else {
        iVar12 = 10;
        uVar8 = (int)uVar8 >> 1 & 0x5555U | (uVar8 & 0x5555) * 2;
        uVar8 = uVar8 >> 2 & 0x3333 | (uVar8 & 0x3333) << 2;
        uVar8 = uVar8 >> 4 & 0xf0f | (uVar8 & 0xf0f) << 4;
        uVar8 = (uVar8 & 0xff) << 8 | uVar8 >> 8;
        piVar6 = param_1 + 0x11a;
        if (*piVar6 <= (int)uVar8) {
          do {
            piVar6 = piVar6 + 1;
            iVar12 = iVar12 + 1;
          } while (*piVar6 <= (int)uVar8);
          if (iVar12 == 0x10) goto LAB_0048b830;
        }
        uVar2 = *(ushort *)((int)param_1 + iVar12 * 2 + 0x420);
        uVar3 = *(ushort *)((int)param_1 + iVar12 * 2 + 0x484);
        param_1[3] = (uint)param_1[3] >> ((byte)iVar12 & 0x1f);
        uVar7 = (((int)uVar8 >> (0x10 - (byte)iVar12 & 0x1f)) - (uint)uVar2) + (uint)uVar3;
        param_1[2] = param_1[2] - iVar12;
        iVar12 = param_1[2];
        uVar8 = param_1[3];
      }
      uVar2 = *(ushort *)((int)param_1 + uVar7 * 2 + 0x5c4);
      uVar7 = (uint)uVar2;
      if (0xff < uVar7) break;
      puVar10 = (undefined1 *)param_1[4];
      if ((undefined1 *)param_1[6] <= puVar10) {
        if (param_1[7] == 0) {
          DAT_009936c8 = "Corrupt PNG";
          return 0;
        }
        pvVar5 = (void *)param_1[5];
        iVar12 = (int)puVar10 - (int)pvVar5;
        _NewSize = (int)param_1[6] - (int)pvVar5;
        if ((int)_NewSize < iVar12 + 1) {
          do {
            _NewSize = _NewSize * 2;
          } while ((int)_NewSize <= iVar12);
        }
        pvVar5 = realloc(pvVar5,_NewSize);
        if (pvVar5 == (void *)0x0) {
          DAT_009936c8 = "Out of memory";
          return 0;
        }
        puVar10 = (undefined1 *)(iVar12 + (int)pvVar5);
        param_1[5] = pvVar5;
        param_1[4] = puVar10;
        param_1[6] = (int)pvVar5 + _NewSize;
      }
      *puVar10 = (char)uVar2;
      param_1[4] = param_1[4] + 1;
    }
    if (uVar7 == 0x100) {
      return 1;
    }
    local_8 = *(int *)("PNG not supported: interlaced mode" + uVar7 * 4 + 0x1c);
    iVar9 = *(int *)("JPEG format not supported: 8-bit only" + uVar7 * 4 + 0x20);
    uVar7 = uVar8;
    if (iVar9 != 0) {
      if (iVar12 < iVar9) {
        iVar13 = iVar12;
        do {
          pbVar4 = (byte *)*param_1;
          if (pbVar4 < (byte *)param_1[1]) {
            bVar1 = *pbVar4;
            *param_1 = pbVar4 + 1;
            uVar7 = (uint)bVar1;
          }
          else {
            uVar7 = 0;
          }
          iVar12 = iVar13 + 8;
          uVar8 = uVar7 << ((byte)iVar13 & 0x1f) | uVar8;
          param_1[2] = iVar12;
          param_1[3] = uVar8;
          iVar13 = iVar12;
        } while (iVar12 < 0x19);
      }
      iVar12 = iVar12 - iVar9;
      uVar7 = uVar8 >> ((byte)iVar9 & 0x1f);
      param_1[3] = uVar7;
      local_8 = local_8 + ((1 << ((byte)iVar9 & 0x1f)) - 1U & uVar8);
      param_1[2] = iVar12;
    }
    iVar9 = iVar12;
    if (iVar12 < 0x10) {
      do {
        pbVar4 = (byte *)*param_1;
        if (pbVar4 < (byte *)param_1[1]) {
          bVar1 = *pbVar4;
          *param_1 = pbVar4 + 1;
          uVar8 = (uint)bVar1;
        }
        else {
          uVar8 = 0;
        }
        iVar12 = iVar9 + 8;
        uVar7 = uVar8 << ((byte)iVar9 & 0x1f) | uVar7;
        param_1[2] = iVar12;
        param_1[3] = uVar7;
        iVar9 = iVar12;
      } while (iVar12 < 0x19);
    }
    uVar8 = (uint)*(ushort *)((int)param_1 + (uVar7 & 0x1ff) * 2 + 0x804);
    if (uVar8 < 0xffff) {
      bVar1 = *(byte *)(uVar8 + 0xc88 + (int)param_1);
      uVar7 = uVar7 >> (bVar1 & 0x1f);
      iVar12 = iVar12 - (uint)bVar1;
      param_1[3] = uVar7;
      param_1[2] = iVar12;
    }
    else {
      iVar12 = 10;
      uVar8 = (int)uVar7 >> 1 & 0x5555U | (uVar7 & 0x5555) * 2;
      uVar8 = uVar8 >> 2 & 0x3333 | (uVar8 & 0x3333) << 2;
      uVar8 = uVar8 >> 4 & 0xf0f | (uVar8 & 0xf0f) << 4;
      uVar8 = (uVar8 & 0xff) << 8 | uVar8 >> 8;
      piVar6 = param_1 + 0x313;
      if (*piVar6 <= (int)uVar8) {
        do {
          piVar6 = piVar6 + 1;
          iVar12 = iVar12 + 1;
        } while (*piVar6 <= (int)uVar8);
        if (iVar12 == 0x10) break;
      }
      uVar2 = *(ushort *)((int)param_1 + iVar12 * 2 + 0xc04);
      uVar3 = *(ushort *)((int)param_1 + iVar12 * 2 + 0xc68);
      param_1[3] = (uint)param_1[3] >> ((byte)iVar12 & 0x1f);
      uVar8 = (((int)uVar8 >> (0x10 - (byte)iVar12 & 0x1f)) - (uint)uVar2) + (uint)uVar3;
      param_1[2] = param_1[2] - iVar12;
      uVar7 = param_1[3];
      iVar12 = param_1[2];
    }
    uVar8 = (uint)*(ushort *)((int)param_1 + uVar8 * 2 + 0xda8);
    iVar9 = *(int *)(&DAT_0095b2b0 + uVar8 * 4);
    iVar13 = *(int *)(&DAT_0095b210 + uVar8 * 4);
    if (iVar13 != 0) {
      iVar11 = iVar12;
      if (iVar12 < iVar13) {
        do {
          pbVar4 = (byte *)*param_1;
          if (pbVar4 < (byte *)param_1[1]) {
            bVar1 = *pbVar4;
            *param_1 = pbVar4 + 1;
            uVar8 = (uint)bVar1;
          }
          else {
            uVar8 = 0;
          }
          iVar12 = iVar11 + 8;
          uVar7 = uVar8 << ((byte)iVar11 & 0x1f) | uVar7;
          param_1[2] = iVar12;
          param_1[3] = uVar7;
          iVar11 = iVar12;
        } while (iVar12 < 0x19);
      }
      param_1[3] = uVar7 >> ((byte)iVar13 & 0x1f);
      param_1[2] = iVar12 - iVar13;
      iVar9 = iVar9 + ((1 << ((byte)iVar13 & 0x1f)) - 1U & uVar7);
    }
    if ((int)(param_1[4] - param_1[5]) < iVar9) break;
    if (((uint)param_1[6] < (uint)(param_1[4] + local_8)) && (iVar12 = FUN_0048b3e0(), iVar12 == 0))
    {
      return 0;
    }
    puVar10 = (undefined1 *)(param_1[4] - iVar9);
    for (; local_8 != 0; local_8 = local_8 + -1) {
      *(undefined1 *)param_1[4] = *puVar10;
      param_1[4] = param_1[4] + 1;
      puVar10 = puVar10 + 1;
    }
  }
LAB_0048b830:
  DAT_009936c8 = "Corrupt PNG";
  return 0;
}


//==== 000048b850 0048b850_FUN_0048b850 ====
extern undefined4 FUN_0048b150(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048b3a0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __fastcall FUN_0048b850(undefined4 *param_1);

// decompiled by BatchDecomp @ 0048b850 name=FUN_0048b850 conv=unknown body=1115

void __fastcall FUN_0048b850(undefined4 *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 uVar13;
  undefined1 *local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4[456];
  byte local_1c[20];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar7 = param_1[2];
  if (iVar7 < 5) {
    FUN_0048b3a0();
    iVar7 = param_1[2];
  }
  iVar7 = iVar7 + -5;
  param_1[2] = iVar7;
  uVar10 = (uint)param_1[3] >> 5;
  iVar2 = (param_1[3] & 0x1f) + 0x101;
  param_1[3] = uVar10;
  if (iVar7 < 5) {
    FUN_0048b3a0();
    uVar10 = param_1[3];
    iVar7 = param_1[2];
  }
  iVar7 = iVar7 + -5;
  uVar3 = uVar10 >> 5;
  iVar11 = (uVar10 & 0x1f) + 1;
  param_1[3] = uVar3;
  param_1[2] = iVar7;
  if (iVar7 < 4) {
    FUN_0048b3a0();
    uVar3 = param_1[3];
    iVar7 = param_1[2];
  }
  local_1c[0x10] = 0;
  local_1c[0x11] = 0;
  uVar10 = uVar3 >> 4;
  iVar7 = iVar7 + -4;
  param_1[3] = uVar10;
  param_1[2] = iVar7;
  local_1c[0] = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  local_1c[4] = 0;
  local_1c[5] = 0;
  local_1c[6] = 0;
  local_1c[7] = 0;
  local_1c[8] = 0;
  local_1c[9] = 0;
  local_1c[10] = 0;
  local_1c[0xb] = 0;
  local_1c[0xc] = 0;
  local_1c[0xd] = 0;
  local_1c[0xe] = 0;
  local_1c[0xf] = 0;
  local_1c[0x12] = 0;
  local_1e8 = 0;
  if ((uVar3 & 0xf) != 0xfffffffc) {
    do {
      uVar8 = uVar10;
      iVar12 = iVar7;
      if (iVar7 < 3) {
        do {
          pbVar9 = (byte *)*param_1;
          if (pbVar9 < (byte *)param_1[1]) {
            bVar6 = *pbVar9;
            *param_1 = pbVar9 + 1;
            uVar8 = (uint)bVar6;
          }
          else {
            uVar8 = 0;
          }
          iVar7 = iVar12 + 8;
          uVar8 = uVar8 << ((byte)iVar12 & 0x1f) | uVar10;
          param_1[2] = iVar7;
          param_1[3] = uVar8;
          uVar10 = uVar8;
          iVar12 = iVar7;
        } while (iVar7 < 0x19);
      }
      iVar7 = iVar7 + -3;
      uVar10 = uVar8 >> 3;
      param_1[2] = iVar7;
      param_1[3] = uVar10;
      local_1c[(byte)(&DAT_0095b290)[local_1e8]] = (byte)uVar8 & 7;
      local_1e8 = local_1e8 + 1;
    } while ((int)local_1e8 < (int)((uVar3 & 0xf) + 4));
  }
  iVar7 = FUN_0048b150(0x13);
  if (iVar7 != 0) {
    iVar7 = param_1[2];
    uVar10 = param_1[3];
    local_1ec = (undefined1 *)0x0;
    do {
      if (iVar7 < 0x10) {
        iVar12 = iVar7;
        do {
          pbVar9 = (byte *)*param_1;
          if (pbVar9 < (byte *)param_1[1]) {
            bVar6 = *pbVar9;
            *param_1 = pbVar9 + 1;
            uVar3 = (uint)bVar6;
          }
          else {
            uVar3 = 0;
          }
          iVar7 = iVar12 + 8;
          uVar10 = uVar10 | uVar3 << ((byte)iVar12 & 0x1f);
          param_1[2] = iVar7;
          param_1[3] = uVar10;
          iVar12 = iVar7;
        } while (iVar7 < 0x19);
      }
      uVar3 = (uint)*(ushort *)(&DAT_009936d0 + (uVar10 & 0x1ff) * 2);
      if (uVar3 < 0xffff) {
        bVar6 = (&DAT_00993b54)[uVar3];
        uVar8 = (uint)bVar6;
LAB_0048bad2:
        iVar7 = iVar7 - uVar8;
        uVar10 = uVar10 >> (bVar6 & 0x1f);
        param_1[3] = uVar10;
        param_1[2] = iVar7;
        uVar1 = *(ushort *)(&DAT_00993c74 + uVar3 * 2);
        if (uVar1 < 0x10) {
          local_1e4[(int)local_1ec] = (char)uVar1;
          uVar3 = 1;
        }
        else {
          if (uVar1 == 0x10) {
            if (iVar7 < 2) {
              pbVar9 = (byte *)*param_1;
              iVar12 = iVar7;
              do {
                if (pbVar9 < (byte *)param_1[1]) {
                  bVar6 = *pbVar9;
                  pbVar9 = pbVar9 + 1;
                  *param_1 = pbVar9;
                  uVar3 = (uint)bVar6;
                }
                else {
                  uVar3 = 0;
                }
                iVar7 = iVar12 + 8;
                uVar10 = uVar10 | uVar3 << ((byte)iVar12 & 0x1f);
                param_1[2] = iVar7;
                param_1[3] = uVar10;
                iVar12 = iVar7;
              } while (iVar7 < 0x19);
            }
            local_1e8 = uVar10 & 3;
            uVar10 = uVar10 >> 2;
            iVar7 = iVar7 + -2;
            local_1e8 = local_1e8 + 3;
            uVar13 = local_1ec[(int)&local_1e8 + 3];
            puVar4 = local_1e4;
            puVar5 = local_1ec;
          }
          else {
            if (uVar1 == 0x11) {
              if (iVar7 < 3) {
                pbVar9 = (byte *)*param_1;
                iVar12 = iVar7;
                do {
                  if (pbVar9 < (byte *)param_1[1]) {
                    bVar6 = *pbVar9;
                    pbVar9 = pbVar9 + 1;
                    *param_1 = pbVar9;
                    uVar3 = (uint)bVar6;
                  }
                  else {
                    uVar3 = 0;
                  }
                  iVar7 = iVar12 + 8;
                  uVar10 = uVar10 | uVar3 << ((byte)iVar12 & 0x1f);
                  param_1[2] = iVar7;
                  param_1[3] = uVar10;
                  iVar12 = iVar7;
                } while (iVar7 < 0x19);
              }
              iVar7 = iVar7 + -3;
              local_1e8 = uVar10 & 7;
              uVar10 = uVar10 >> 3;
              local_1e8 = local_1e8 + 3;
            }
            else {
              if (iVar7 < 7) {
                iVar12 = iVar7;
                do {
                  pbVar9 = (byte *)*param_1;
                  if (pbVar9 < (byte *)param_1[1]) {
                    bVar6 = *pbVar9;
                    *param_1 = pbVar9 + 1;
                    uVar3 = (uint)bVar6;
                  }
                  else {
                    uVar3 = 0;
                  }
                  iVar7 = iVar12 + 8;
                  uVar10 = uVar3 << ((byte)iVar12 & 0x1f) | uVar10;
                  param_1[2] = iVar7;
                  param_1[3] = uVar10;
                  iVar12 = iVar7;
                } while (iVar7 < 0x19);
              }
              iVar7 = iVar7 + -7;
              local_1e8 = uVar10 & 0x7f;
              uVar10 = uVar10 >> 7;
              local_1e8 = local_1e8 + 0xb;
            }
            puVar5 = local_1e4;
            uVar13 = 0;
            puVar4 = local_1ec;
          }
          param_1[3] = uVar10;
          param_1[2] = iVar7;
          memset(puVar4 + (int)puVar5,uVar13,local_1e8);
          uVar3 = local_1e8;
        }
      }
      else {
        uVar3 = (int)uVar10 >> 1 & 0x5555U | (uVar10 & 0x5555) * 2;
        uVar3 = uVar3 >> 2 & 0x3333 | (uVar3 & 0x3333) << 2;
        uVar3 = uVar3 >> 4 & 0xf0f | (uVar3 & 0xf0f) << 4;
        uVar8 = 10;
        local_1e8 = (uVar3 & 0xff) << 8 | uVar3 >> 8;
        if ((int)local_1e8 < DAT_00993b18) {
LAB_0048ba99:
          bVar6 = (byte)uVar8;
          uVar3 = (((int)local_1e8 >> (0x10 - bVar6 & 0x1f)) -
                  (uint)*(ushort *)(uVar8 * 2 + 0x993ad0)) + (uint)*(ushort *)(uVar8 * 2 + 0x993b34)
          ;
          local_1e8 = uVar3;
          goto LAB_0048bad2;
        }
        do {
          uVar3 = uVar8;
          uVar8 = uVar3 + 1;
        } while (*(int *)(uVar8 * 4 + 0x993af0) <= (int)local_1e8);
        if (uVar8 != 0x10) goto LAB_0048ba99;
        local_1e4[(int)local_1ec] = 0xff;
        uVar3 = uVar3 - 0xe;
      }
      local_1ec = local_1ec + uVar3;
      puVar5 = (undefined1 *)(iVar11 + iVar2);
    } while ((int)local_1ec < (int)puVar5);
    if (local_1ec == puVar5) {
      iVar7 = FUN_0048b150(iVar2);
      if ((iVar7 != 0) && (iVar7 = FUN_0048b150(iVar11), iVar7 != 0)) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    else {
      DAT_009936c8 = "Corrupt PNG";
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000048bfd0 0048bfd0_FUN_0048bfd0 ====
undefined4 __fastcall FUN_0048bfd0(int *param_1,byte *param_2,int param_3,uint param_4);

// decompiled by BatchDecomp @ 0048bfd0 name=FUN_0048bfd0 conv=unknown body=2814

undefined4 __fastcall FUN_0048bfd0(int *param_1,byte *param_2,int param_3,uint param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  void *pvVar53;
  byte *pbVar54;
  int iVar55;
  uint uVar56;
  int iVar57;
  uint uVar58;
  int iVar59;
  byte *pbVar60;
  int iVar61;
  byte *pbVar62;
  uint uVar63;
  byte *pbVar64;
  byte *pbVar65;
  uint uVar66;
  int iVar67;
  int local_38;
  undefined8 local_34;
  uint local_2c;
  byte *local_28;
  byte local_24;
  uint local_20;
  uint local_10;
  uint local_8;
  
  iVar57 = *param_1 * param_4;
  uVar6 = param_1[2];
  pvVar53 = malloc(*param_1 * param_4 * param_1[1]);
  param_1[9] = (int)pvVar53;
  if (pvVar53 == (void *)0x0) {
    DAT_009936c8 = "Out of memory";
    return 0;
  }
  if (param_3 != (*param_1 * uVar6 + 1) * param_1[1]) {
LAB_0048cabb:
    DAT_009936c8 = "Corrupt PNG";
    return 0;
  }
  local_2c = 0;
  if (param_1[1] != 0) {
    do {
      pbVar64 = (byte *)(local_2c * iVar57 + param_1[9]);
      local_20 = (uint)*param_2;
      param_2 = param_2 + 1;
      if (4 < local_20) goto LAB_0048cabb;
      if (local_2c == 0) {
        local_20 = (uint)(byte)(&DAT_0095b47c)[local_20];
      }
      if (0 < (int)uVar6) {
        pbVar54 = pbVar64 + (-(int)param_2 - iVar57);
        iVar55 = (int)pbVar64 - (int)param_2;
        local_28 = param_2;
        local_8 = uVar6;
LAB_0048c097:
        switch(local_20) {
        case 0:
          do {
            local_8 = local_8 - 1;
            (local_28 + 1)[iVar55 + -1] = *local_28;
            local_28 = local_28 + 1;
          } while (local_8 != 0);
          break;
        case 1:
          do {
            local_8 = local_8 - 1;
            (local_28 + 1)[iVar55 + -1] = *local_28;
            local_28 = local_28 + 1;
          } while (local_8 != 0);
          break;
        case 2:
          do {
            pbVar62 = local_28 + 1;
            local_8 = local_8 - 1;
            pbVar62[iVar55 + -1] = pbVar62[(int)(pbVar54 + -1)] + *local_28;
            local_28 = pbVar62;
          } while (local_8 != 0);
          break;
        case 3:
          do {
            pbVar62 = local_28 + 1;
            local_8 = local_8 - 1;
            pbVar62[iVar55 + -1] = (pbVar62[(int)(pbVar54 + -1)] >> 1) + *local_28;
            local_28 = pbVar62;
          } while (local_8 != 0);
          break;
        case 4:
          do {
            local_28[iVar55] = (-(local_28[(int)pbVar54] != 0) & local_28[(int)pbVar54]) + *local_28
            ;
            local_28 = local_28 + 1;
            local_8 = local_8 - 1;
          } while (local_8 != 0);
          break;
        case 5:
          do {
            local_8 = local_8 - 1;
            (local_28 + 1)[iVar55 + -1] = *local_28;
            local_28 = local_28 + 1;
          } while (local_8 != 0);
          break;
        case 6:
          do {
            bVar5 = *local_28;
            local_28 = local_28 + 1;
            local_28[iVar55 + -1] = bVar5;
            local_8 = local_8 - 1;
          } while (local_8 != 0);
          break;
        default:
          goto switchD_0048c0a0_default;
        }
      }
LAB_0048c1b7:
      if (uVar6 != param_4) {
        pbVar64[uVar6] = 0xff;
      }
      param_2 = param_2 + uVar6;
      pbVar54 = pbVar64 + param_4;
      pbVar62 = pbVar64 + (param_4 - iVar57);
      if (uVar6 == param_4) {
        switch(local_20) {
        case 0:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            if (0 < (int)uVar6) {
              pbVar64 = pbVar54;
              uVar56 = uVar6;
              do {
                *pbVar64 = pbVar64[(int)param_2 - (int)pbVar54];
                uVar56 = uVar56 - 1;
                pbVar64 = pbVar64 + 1;
              } while (uVar56 != 0);
            }
            param_2 = param_2 + uVar6;
            pbVar54 = pbVar54 + uVar6;
          }
          break;
        case 1:
          iVar55 = *param_1 + -1;
          if (iVar55 != 0) {
            iVar61 = (int)pbVar54 - uVar6;
            do {
              iVar67 = 0;
              if (0 < (int)uVar6) {
                do {
                  pbVar64 = pbVar54 + iVar67;
                  pcVar1 = (char *)(iVar61 + iVar67);
                  iVar67 = iVar67 + 1;
                  *pbVar64 = *pcVar1 + pbVar64[(int)param_2 - (int)pbVar54];
                } while (iVar67 < (int)uVar6);
              }
              param_2 = param_2 + uVar6;
              iVar61 = iVar61 + uVar6;
              pbVar54 = pbVar54 + uVar6;
              iVar55 = iVar55 + -1;
            } while (iVar55 != 0);
          }
          break;
        case 2:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            iVar61 = 0;
            local_28 = (byte *)0x0;
            if (0 < (int)uVar6) {
              if (((0x3f < uVar6) &&
                  ((local_28 = (byte *)0x0, param_2 + (uVar6 - 1) < pbVar54 ||
                   (pbVar54 + (uVar6 - 1) < param_2)))) &&
                 ((pbVar62 + (uVar6 - 1) < pbVar54 || (pbVar54 + (uVar6 - 1) < pbVar62)))) {
                uVar56 = uVar6 & 0x8000003f;
                if ((int)uVar56 < 0) {
                  uVar56 = (uVar56 - 1 | 0xffffffc0) + 1;
                }
                pbVar64 = pbVar54 + 0x10;
                pbVar60 = param_2 + 0x30;
                do {
                  pbVar65 = pbVar62 + iVar61;
                  bVar5 = pbVar65[1];
                  bVar7 = pbVar65[2];
                  bVar8 = pbVar65[3];
                  bVar9 = pbVar65[4];
                  bVar10 = pbVar65[5];
                  bVar11 = pbVar65[6];
                  bVar12 = pbVar65[7];
                  bVar13 = pbVar65[8];
                  bVar14 = pbVar65[9];
                  bVar15 = pbVar65[10];
                  bVar16 = pbVar65[0xb];
                  bVar17 = pbVar65[0xc];
                  bVar18 = pbVar65[0xd];
                  bVar19 = pbVar65[0xe];
                  bVar20 = pbVar65[0xf];
                  bVar21 = pbVar60[-0x2f];
                  bVar22 = pbVar60[-0x2e];
                  bVar23 = pbVar60[-0x2d];
                  bVar24 = pbVar60[-0x2c];
                  bVar25 = pbVar60[-0x2b];
                  bVar26 = pbVar60[-0x2a];
                  bVar27 = pbVar60[-0x29];
                  bVar28 = pbVar60[-0x28];
                  bVar29 = pbVar60[-0x27];
                  bVar30 = pbVar60[-0x26];
                  bVar31 = pbVar60[-0x25];
                  bVar32 = pbVar60[-0x24];
                  bVar33 = pbVar60[-0x23];
                  bVar34 = pbVar60[-0x22];
                  bVar35 = pbVar60[-0x21];
                  pbVar3 = pbVar64 + ((int)param_2 - (int)pbVar54);
                  bVar36 = *pbVar3;
                  bVar37 = pbVar3[1];
                  bVar38 = pbVar3[2];
                  bVar39 = pbVar3[3];
                  bVar40 = pbVar3[4];
                  bVar41 = pbVar3[5];
                  bVar42 = pbVar3[6];
                  bVar43 = pbVar3[7];
                  bVar44 = pbVar3[8];
                  bVar45 = pbVar3[9];
                  bVar46 = pbVar3[10];
                  bVar47 = pbVar3[0xb];
                  bVar48 = pbVar3[0xc];
                  bVar49 = pbVar3[0xd];
                  bVar50 = pbVar3[0xe];
                  bVar51 = pbVar3[0xf];
                  pbVar64[-0x10] = *pbVar65 + pbVar60[-0x30];
                  pbVar64[-0xf] = bVar5 + bVar21;
                  pbVar64[-0xe] = bVar7 + bVar22;
                  pbVar64[-0xd] = bVar8 + bVar23;
                  pbVar64[-0xc] = bVar9 + bVar24;
                  pbVar64[-0xb] = bVar10 + bVar25;
                  pbVar64[-10] = bVar11 + bVar26;
                  pbVar64[-9] = bVar12 + bVar27;
                  pbVar64[-8] = bVar13 + bVar28;
                  pbVar64[-7] = bVar14 + bVar29;
                  pbVar64[-6] = bVar15 + bVar30;
                  pbVar64[-5] = bVar16 + bVar31;
                  pbVar64[-4] = bVar17 + bVar32;
                  pbVar64[-3] = bVar18 + bVar33;
                  pbVar64[-2] = bVar19 + bVar34;
                  pbVar64[-1] = bVar20 + bVar35;
                  pbVar65 = pbVar64 + 0x40 + (int)(pbVar62 + (-0x40 - (int)pbVar54));
                  bVar5 = pbVar65[1];
                  bVar7 = pbVar65[2];
                  bVar8 = pbVar65[3];
                  bVar9 = pbVar65[4];
                  bVar10 = pbVar65[5];
                  bVar11 = pbVar65[6];
                  bVar12 = pbVar65[7];
                  bVar13 = pbVar65[8];
                  bVar14 = pbVar65[9];
                  bVar15 = pbVar65[10];
                  bVar16 = pbVar65[0xb];
                  bVar17 = pbVar65[0xc];
                  bVar18 = pbVar65[0xd];
                  bVar19 = pbVar65[0xe];
                  bVar20 = pbVar65[0xf];
                  bVar21 = pbVar60[-0x10];
                  bVar22 = pbVar60[-0xf];
                  bVar23 = pbVar60[-0xe];
                  bVar24 = pbVar60[-0xd];
                  bVar25 = pbVar60[-0xc];
                  bVar26 = pbVar60[-0xb];
                  bVar27 = pbVar60[-10];
                  bVar28 = pbVar60[-9];
                  bVar29 = pbVar60[-8];
                  bVar30 = pbVar60[-7];
                  bVar31 = pbVar60[-6];
                  bVar32 = pbVar60[-5];
                  bVar33 = pbVar60[-4];
                  bVar34 = pbVar60[-3];
                  bVar35 = pbVar60[-2];
                  bVar52 = pbVar60[-1];
                  *pbVar64 = *pbVar65 + bVar36;
                  pbVar64[1] = bVar5 + bVar37;
                  pbVar64[2] = bVar7 + bVar38;
                  pbVar64[3] = bVar8 + bVar39;
                  pbVar64[4] = bVar9 + bVar40;
                  pbVar64[5] = bVar10 + bVar41;
                  pbVar64[6] = bVar11 + bVar42;
                  pbVar64[7] = bVar12 + bVar43;
                  pbVar64[8] = bVar13 + bVar44;
                  pbVar64[9] = bVar14 + bVar45;
                  pbVar64[10] = bVar15 + bVar46;
                  pbVar64[0xb] = bVar16 + bVar47;
                  pbVar64[0xc] = bVar17 + bVar48;
                  pbVar64[0xd] = bVar18 + bVar49;
                  pbVar64[0xe] = bVar19 + bVar50;
                  pbVar64[0xf] = bVar20 + bVar51;
                  pbVar65 = pbVar62 + iVar61 + 0x20;
                  bVar5 = pbVar65[1];
                  bVar7 = pbVar65[2];
                  bVar8 = pbVar65[3];
                  bVar9 = pbVar65[4];
                  bVar10 = pbVar65[5];
                  bVar11 = pbVar65[6];
                  bVar12 = pbVar65[7];
                  bVar13 = pbVar65[8];
                  bVar14 = pbVar65[9];
                  bVar15 = pbVar65[10];
                  bVar16 = pbVar65[0xb];
                  bVar17 = pbVar65[0xc];
                  bVar18 = pbVar65[0xd];
                  bVar19 = pbVar65[0xe];
                  bVar20 = pbVar65[0xf];
                  iVar61 = iVar61 + 0x40;
                  bVar36 = *pbVar60;
                  bVar37 = pbVar60[1];
                  bVar38 = pbVar60[2];
                  bVar39 = pbVar60[3];
                  bVar40 = pbVar60[4];
                  bVar41 = pbVar60[5];
                  bVar42 = pbVar60[6];
                  bVar43 = pbVar60[7];
                  bVar44 = pbVar60[8];
                  bVar45 = pbVar60[9];
                  bVar46 = pbVar60[10];
                  bVar47 = pbVar60[0xb];
                  bVar48 = pbVar60[0xc];
                  bVar49 = pbVar60[0xd];
                  bVar50 = pbVar60[0xe];
                  bVar51 = pbVar60[0xf];
                  pbVar64[0x10] = *pbVar65 + bVar21;
                  pbVar64[0x11] = bVar5 + bVar22;
                  pbVar64[0x12] = bVar7 + bVar23;
                  pbVar64[0x13] = bVar8 + bVar24;
                  pbVar64[0x14] = bVar9 + bVar25;
                  pbVar64[0x15] = bVar10 + bVar26;
                  pbVar64[0x16] = bVar11 + bVar27;
                  pbVar64[0x17] = bVar12 + bVar28;
                  pbVar64[0x18] = bVar13 + bVar29;
                  pbVar64[0x19] = bVar14 + bVar30;
                  pbVar64[0x1a] = bVar15 + bVar31;
                  pbVar64[0x1b] = bVar16 + bVar32;
                  pbVar64[0x1c] = bVar17 + bVar33;
                  pbVar64[0x1d] = bVar18 + bVar34;
                  pbVar64[0x1e] = bVar19 + bVar35;
                  pbVar64[0x1f] = bVar20 + bVar52;
                  pbVar65 = pbVar60 + ((int)pbVar62 - (int)param_2);
                  bVar5 = pbVar65[1];
                  bVar7 = pbVar65[2];
                  bVar8 = pbVar65[3];
                  bVar9 = pbVar65[4];
                  bVar10 = pbVar65[5];
                  bVar11 = pbVar65[6];
                  bVar12 = pbVar65[7];
                  bVar13 = pbVar65[8];
                  bVar14 = pbVar65[9];
                  bVar15 = pbVar65[10];
                  bVar16 = pbVar65[0xb];
                  bVar17 = pbVar65[0xc];
                  bVar18 = pbVar65[0xd];
                  bVar19 = pbVar65[0xe];
                  bVar20 = pbVar65[0xf];
                  pbVar64[0x20] = *pbVar65 + bVar36;
                  pbVar64[0x21] = bVar5 + bVar37;
                  pbVar64[0x22] = bVar7 + bVar38;
                  pbVar64[0x23] = bVar8 + bVar39;
                  pbVar64[0x24] = bVar9 + bVar40;
                  pbVar64[0x25] = bVar10 + bVar41;
                  pbVar64[0x26] = bVar11 + bVar42;
                  pbVar64[0x27] = bVar12 + bVar43;
                  pbVar64[0x28] = bVar13 + bVar44;
                  pbVar64[0x29] = bVar14 + bVar45;
                  pbVar64[0x2a] = bVar15 + bVar46;
                  pbVar64[0x2b] = bVar16 + bVar47;
                  pbVar64[0x2c] = bVar17 + bVar48;
                  pbVar64[0x2d] = bVar18 + bVar49;
                  pbVar64[0x2e] = bVar19 + bVar50;
                  pbVar64[0x2f] = bVar20 + bVar51;
                  pbVar64 = pbVar64 + 0x40;
                  pbVar60 = pbVar60 + 0x40;
                  local_28 = (byte *)iVar61;
                } while (iVar61 < (int)(uVar6 - uVar56));
              }
              if ((int)local_28 < (int)uVar6) {
                iVar61 = uVar6 - (int)local_28;
                pbVar64 = param_2 + (int)local_28;
                do {
                  (pbVar64 + 1)[(int)(pbVar54 + (-1 - (int)param_2))] =
                       pbVar64[(int)pbVar62 - (int)param_2] + *pbVar64;
                  iVar61 = iVar61 + -1;
                  pbVar64 = pbVar64 + 1;
                } while (iVar61 != 0);
              }
            }
            param_2 = param_2 + uVar6;
            pbVar54 = pbVar54 + uVar6;
            pbVar62 = pbVar62 + uVar6;
          }
          break;
        case 3:
          iVar55 = *param_1 + -1;
          if (iVar55 != 0) {
            iVar61 = (int)pbVar54 - uVar6;
            do {
              if (0 < (int)uVar6) {
                iVar67 = 0;
                pbVar64 = param_2;
                do {
                  pbVar65 = (byte *)(iVar61 + iVar67);
                  pbVar60 = pbVar64 + 1;
                  iVar67 = iVar67 + 1;
                  pbVar60[(int)(pbVar54 + (-1 - (int)param_2))] =
                       (char)((uint)*pbVar65 + (uint)pbVar60[(int)(pbVar62 + (-1 - (int)param_2))]
                             >> 1) + *pbVar64;
                  pbVar64 = pbVar60;
                } while (iVar67 < (int)uVar6);
              }
              param_2 = param_2 + uVar6;
              pbVar54 = pbVar54 + uVar6;
              iVar61 = iVar61 + uVar6;
              pbVar62 = pbVar62 + uVar6;
              iVar55 = iVar55 + -1;
            } while (iVar55 != 0);
          }
          break;
        case 4:
          iVar55 = *param_1 + -1;
          if (iVar55 != 0) {
            pbVar64 = pbVar54 + -uVar6;
            do {
              if (0 < (int)uVar6) {
                pbVar60 = param_2;
                pbVar65 = pbVar64;
                local_10 = uVar6;
                do {
                  bVar5 = pbVar65[(int)pbVar62 - (int)pbVar54];
                  local_24 = *pbVar65;
                  uVar58 = (uint)local_24 - (uint)bVar5;
                  iVar61 = pbVar60[(int)pbVar62 - (int)param_2] + uVar58;
                  uVar66 = iVar61 - (uint)bVar5;
                  uVar56 = iVar61 - (uint)local_24;
                  uVar63 = (int)uVar56 >> 0x1f;
                  iVar61 = (uVar56 ^ uVar63) - uVar63;
                  iVar67 = (uVar58 ^ (int)uVar58 >> 0x1f) - ((int)uVar58 >> 0x1f);
                  uVar56 = (int)uVar66 >> 0x1f;
                  iVar59 = (uVar66 ^ uVar56) - uVar56;
                  if (((iVar67 < iVar61) || (iVar59 < iVar61)) &&
                     (local_24 = bVar5, iVar67 <= iVar59)) {
                    local_24 = pbVar60[(int)pbVar62 - (int)param_2];
                  }
                  bVar5 = *pbVar60;
                  pbVar60 = pbVar60 + 1;
                  pbVar65[uVar6] = bVar5 + local_24;
                  pbVar65 = pbVar65 + 1;
                  local_10 = local_10 - 1;
                } while (local_10 != 0);
              }
              param_2 = param_2 + uVar6;
              pbVar54 = pbVar54 + uVar6;
              pbVar64 = pbVar64 + uVar6;
              pbVar62 = pbVar62 + uVar6;
              iVar55 = iVar55 + -1;
            } while (iVar55 != 0);
          }
          break;
        case 5:
          iVar55 = *param_1 + -1;
          if (iVar55 != 0) {
            iVar61 = (int)pbVar54 - uVar6;
            do {
              iVar67 = 0;
              if (0 < (int)uVar6) {
                do {
                  pbVar64 = pbVar54 + iVar67;
                  pbVar62 = (byte *)(iVar61 + iVar67);
                  iVar67 = iVar67 + 1;
                  *pbVar64 = (*pbVar62 >> 1) + pbVar64[(int)param_2 - (int)pbVar54];
                } while (iVar67 < (int)uVar6);
              }
              param_2 = param_2 + uVar6;
              iVar61 = iVar61 + uVar6;
              pbVar54 = pbVar54 + uVar6;
              iVar55 = iVar55 + -1;
            } while (iVar55 != 0);
          }
          break;
        case 6:
          iVar55 = *param_1 + -1;
          if (iVar55 != 0) {
            iVar61 = (int)pbVar54 - uVar6;
            do {
              if (0 < (int)uVar6) {
                iVar67 = 0;
                do {
                  pcVar1 = (char *)(iVar61 + iVar67);
                  pbVar64 = pbVar54 + iVar67;
                  iVar67 = iVar67 + 1;
                  *pbVar64 = pbVar64[(int)param_2 - (int)pbVar54] + *pcVar1;
                } while (iVar67 < (int)uVar6);
              }
              param_2 = param_2 + uVar6;
              iVar61 = iVar61 + uVar6;
              pbVar54 = pbVar54 + uVar6;
              iVar55 = iVar55 + -1;
            } while (iVar55 != 0);
          }
        }
      }
      else {
        switch(local_20) {
        case 0:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            if (0 < (int)uVar6) {
              pbVar64 = pbVar54;
              uVar56 = uVar6;
              do {
                *pbVar64 = pbVar64[(int)param_2 - (int)pbVar54];
                uVar56 = uVar56 - 1;
                pbVar64 = pbVar64 + 1;
              } while (uVar56 != 0);
            }
            pbVar54[uVar6] = 0xff;
            param_2 = param_2 + uVar6;
            pbVar54 = pbVar54 + param_4;
          }
          break;
        case 1:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            iVar61 = 0;
            if (0 < (int)uVar6) {
              do {
                pbVar62 = pbVar54 + iVar61;
                pbVar60 = pbVar64 + iVar61;
                iVar61 = iVar61 + 1;
                *pbVar62 = *pbVar60 + pbVar62[(int)param_2 - (int)pbVar54];
              } while (iVar61 < (int)uVar6);
            }
            pbVar54[uVar6] = 0xff;
            param_2 = param_2 + uVar6;
            pbVar64 = pbVar64 + param_4;
            pbVar54 = pbVar54 + param_4;
          }
          break;
        case 2:
          local_34 = *param_1 + -1;
          if (local_34 != 0) {
            pbVar64 = pbVar54 + uVar6;
            do {
              iVar55 = 0;
              local_28 = (byte *)0x0;
              if (0 < (int)uVar6) {
                if (((0x3f < uVar6) &&
                    ((local_28 = (byte *)0x0, param_2 + (uVar6 - 1) < pbVar54 ||
                     (pbVar54 + (uVar6 - 1) < param_2)))) &&
                   ((pbVar62 + (uVar6 - 1) < pbVar54 || (pbVar54 + (uVar6 - 1) < pbVar62)))) {
                  uVar56 = uVar6 & 0x8000003f;
                  if ((int)uVar56 < 0) {
                    uVar56 = (uVar56 - 1 | 0xffffffc0) + 1;
                  }
                  pbVar60 = param_2 + 0x10;
                  pbVar65 = pbVar64 + (0x20 - uVar6);
                  do {
                    bVar5 = pbVar60[-0xf];
                    bVar7 = pbVar60[-0xe];
                    bVar8 = pbVar60[-0xd];
                    bVar9 = pbVar60[-0xc];
                    bVar10 = pbVar60[-0xb];
                    bVar11 = pbVar60[-10];
                    bVar12 = pbVar60[-9];
                    bVar13 = pbVar60[-8];
                    bVar14 = pbVar60[-7];
                    bVar15 = pbVar60[-6];
                    bVar16 = pbVar60[-5];
                    bVar17 = pbVar60[-4];
                    bVar18 = pbVar60[-3];
                    bVar19 = pbVar60[-2];
                    bVar20 = pbVar60[-1];
                    pbVar3 = pbVar60 + 0x40;
                    pbVar2 = pbVar62 + iVar55;
                    bVar21 = pbVar2[1];
                    bVar22 = pbVar2[2];
                    bVar23 = pbVar2[3];
                    bVar24 = pbVar2[4];
                    bVar25 = pbVar2[5];
                    bVar26 = pbVar2[6];
                    bVar27 = pbVar2[7];
                    bVar28 = pbVar2[8];
                    bVar29 = pbVar2[9];
                    bVar30 = pbVar2[10];
                    bVar31 = pbVar2[0xb];
                    bVar32 = pbVar2[0xc];
                    bVar33 = pbVar2[0xd];
                    bVar34 = pbVar2[0xe];
                    bVar35 = pbVar2[0xf];
                    bVar36 = *pbVar60;
                    bVar37 = pbVar60[1];
                    bVar38 = pbVar60[2];
                    bVar39 = pbVar60[3];
                    bVar40 = pbVar60[4];
                    bVar41 = pbVar60[5];
                    bVar42 = pbVar60[6];
                    bVar43 = pbVar60[7];
                    bVar44 = pbVar60[8];
                    bVar45 = pbVar60[9];
                    bVar46 = pbVar60[10];
                    bVar47 = pbVar60[0xb];
                    bVar48 = pbVar60[0xc];
                    bVar49 = pbVar60[0xd];
                    bVar50 = pbVar60[0xe];
                    bVar51 = pbVar60[0xf];
                    pbVar65[-0x20] = *pbVar2 + pbVar60[-0x10];
                    pbVar65[-0x1f] = bVar21 + bVar5;
                    pbVar65[-0x1e] = bVar22 + bVar7;
                    pbVar65[-0x1d] = bVar23 + bVar8;
                    pbVar65[-0x1c] = bVar24 + bVar9;
                    pbVar65[-0x1b] = bVar25 + bVar10;
                    pbVar65[-0x1a] = bVar26 + bVar11;
                    pbVar65[-0x19] = bVar27 + bVar12;
                    pbVar65[-0x18] = bVar28 + bVar13;
                    pbVar65[-0x17] = bVar29 + bVar14;
                    pbVar65[-0x16] = bVar30 + bVar15;
                    pbVar65[-0x15] = bVar31 + bVar16;
                    pbVar65[-0x14] = bVar32 + bVar17;
                    pbVar65[-0x13] = bVar33 + bVar18;
                    pbVar65[-0x12] = bVar34 + bVar19;
                    pbVar65[-0x11] = bVar35 + bVar20;
                    pbVar2 = pbVar3 + (int)(pbVar62 + (-0x40 - (int)param_2));
                    bVar5 = pbVar2[1];
                    bVar7 = pbVar2[2];
                    bVar8 = pbVar2[3];
                    bVar9 = pbVar2[4];
                    bVar10 = pbVar2[5];
                    bVar11 = pbVar2[6];
                    bVar12 = pbVar2[7];
                    bVar13 = pbVar2[8];
                    bVar14 = pbVar2[9];
                    bVar15 = pbVar2[10];
                    bVar16 = pbVar2[0xb];
                    bVar17 = pbVar2[0xc];
                    bVar18 = pbVar2[0xd];
                    bVar19 = pbVar2[0xe];
                    bVar20 = pbVar2[0xf];
                    bVar21 = pbVar60[0x10];
                    bVar22 = pbVar60[0x11];
                    bVar23 = pbVar60[0x12];
                    bVar24 = pbVar60[0x13];
                    bVar25 = pbVar60[0x14];
                    bVar26 = pbVar60[0x15];
                    bVar27 = pbVar60[0x16];
                    bVar28 = pbVar60[0x17];
                    bVar29 = pbVar60[0x18];
                    bVar30 = pbVar60[0x19];
                    bVar31 = pbVar60[0x1a];
                    bVar32 = pbVar60[0x1b];
                    bVar33 = pbVar60[0x1c];
                    bVar34 = pbVar60[0x1d];
                    bVar35 = pbVar60[0x1e];
                    bVar52 = pbVar60[0x1f];
                    pbVar4 = pbVar3 + (int)(pbVar54 + (-0x40 - (int)param_2));
                    *pbVar4 = *pbVar2 + bVar36;
                    pbVar4[1] = bVar5 + bVar37;
                    pbVar4[2] = bVar7 + bVar38;
                    pbVar4[3] = bVar8 + bVar39;
                    pbVar4[4] = bVar9 + bVar40;
                    pbVar4[5] = bVar10 + bVar41;
                    pbVar4[6] = bVar11 + bVar42;
                    pbVar4[7] = bVar12 + bVar43;
                    pbVar4[8] = bVar13 + bVar44;
                    pbVar4[9] = bVar14 + bVar45;
                    pbVar4[10] = bVar15 + bVar46;
                    pbVar4[0xb] = bVar16 + bVar47;
                    pbVar4[0xc] = bVar17 + bVar48;
                    pbVar4[0xd] = bVar18 + bVar49;
                    pbVar4[0xe] = bVar19 + bVar50;
                    pbVar4[0xf] = bVar20 + bVar51;
                    pbVar2 = pbVar65 + 0x40 + (int)(pbVar62 + (-0x40 - (int)pbVar54));
                    bVar5 = pbVar2[1];
                    bVar7 = pbVar2[2];
                    bVar8 = pbVar2[3];
                    bVar9 = pbVar2[4];
                    bVar10 = pbVar2[5];
                    bVar11 = pbVar2[6];
                    bVar12 = pbVar2[7];
                    bVar13 = pbVar2[8];
                    bVar14 = pbVar2[9];
                    bVar15 = pbVar2[10];
                    bVar16 = pbVar2[0xb];
                    bVar17 = pbVar2[0xc];
                    bVar18 = pbVar2[0xd];
                    bVar19 = pbVar2[0xe];
                    bVar20 = pbVar2[0xf];
                    bVar36 = pbVar60[0x20];
                    bVar37 = pbVar60[0x21];
                    bVar38 = pbVar60[0x22];
                    bVar39 = pbVar60[0x23];
                    bVar40 = pbVar60[0x24];
                    bVar41 = pbVar60[0x25];
                    bVar42 = pbVar60[0x26];
                    bVar43 = pbVar60[0x27];
                    bVar44 = pbVar60[0x28];
                    bVar45 = pbVar60[0x29];
                    bVar46 = pbVar60[0x2a];
                    bVar47 = pbVar60[0x2b];
                    bVar48 = pbVar60[0x2c];
                    bVar49 = pbVar60[0x2d];
                    bVar50 = pbVar60[0x2e];
                    bVar51 = pbVar60[0x2f];
                    *pbVar65 = *pbVar2 + bVar21;
                    pbVar65[1] = bVar5 + bVar22;
                    pbVar65[2] = bVar7 + bVar23;
                    pbVar65[3] = bVar8 + bVar24;
                    pbVar65[4] = bVar9 + bVar25;
                    pbVar65[5] = bVar10 + bVar26;
                    pbVar65[6] = bVar11 + bVar27;
                    pbVar65[7] = bVar12 + bVar28;
                    pbVar65[8] = bVar13 + bVar29;
                    pbVar65[9] = bVar14 + bVar30;
                    pbVar65[10] = bVar15 + bVar31;
                    pbVar65[0xb] = bVar16 + bVar32;
                    pbVar65[0xc] = bVar17 + bVar33;
                    pbVar65[0xd] = bVar18 + bVar34;
                    pbVar65[0xe] = bVar19 + bVar35;
                    pbVar65[0xf] = bVar20 + bVar52;
                    pbVar60 = pbVar62 + iVar55 + 0x30;
                    bVar5 = pbVar60[1];
                    bVar7 = pbVar60[2];
                    bVar8 = pbVar60[3];
                    bVar9 = pbVar60[4];
                    bVar10 = pbVar60[5];
                    bVar11 = pbVar60[6];
                    bVar12 = pbVar60[7];
                    bVar13 = pbVar60[8];
                    bVar14 = pbVar60[9];
                    bVar15 = pbVar60[10];
                    bVar16 = pbVar60[0xb];
                    bVar17 = pbVar60[0xc];
                    bVar18 = pbVar60[0xd];
                    bVar19 = pbVar60[0xe];
                    bVar20 = pbVar60[0xf];
                    iVar55 = iVar55 + 0x40;
                    pbVar65[0x10] = *pbVar60 + bVar36;
                    pbVar65[0x11] = bVar5 + bVar37;
                    pbVar65[0x12] = bVar7 + bVar38;
                    pbVar65[0x13] = bVar8 + bVar39;
                    pbVar65[0x14] = bVar9 + bVar40;
                    pbVar65[0x15] = bVar10 + bVar41;
                    pbVar65[0x16] = bVar11 + bVar42;
                    pbVar65[0x17] = bVar12 + bVar43;
                    pbVar65[0x18] = bVar13 + bVar44;
                    pbVar65[0x19] = bVar14 + bVar45;
                    pbVar65[0x1a] = bVar15 + bVar46;
                    pbVar65[0x1b] = bVar16 + bVar47;
                    pbVar65[0x1c] = bVar17 + bVar48;
                    pbVar65[0x1d] = bVar18 + bVar49;
                    pbVar65[0x1e] = bVar19 + bVar50;
                    pbVar65[0x1f] = bVar20 + bVar51;
                    pbVar60 = pbVar3;
                    pbVar65 = pbVar65 + 0x40;
                    local_28 = (byte *)iVar55;
                  } while (iVar55 < (int)(uVar6 - uVar56));
                }
                if ((int)local_28 < (int)uVar6) {
                  iVar55 = uVar6 - (int)local_28;
                  pbVar60 = param_2 + (int)local_28;
                  do {
                    (pbVar60 + 1)[(int)(pbVar54 + (-1 - (int)param_2))] =
                         pbVar60[(int)pbVar62 - (int)param_2] + *pbVar60;
                    iVar55 = iVar55 + -1;
                    pbVar60 = pbVar60 + 1;
                  } while (iVar55 != 0);
                }
              }
              param_2 = param_2 + uVar6;
              *pbVar64 = 0xff;
              pbVar54 = pbVar54 + param_4;
              pbVar64 = pbVar64 + param_4;
              pbVar62 = pbVar62 + param_4;
              local_34 = local_34 + -1;
            } while (local_34 != 0);
          }
          break;
        case 3:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            if (0 < (int)uVar6) {
              iVar61 = 0;
              pbVar60 = param_2;
              do {
                pbVar65 = pbVar64 + iVar61;
                iVar61 = iVar61 + 1;
                (pbVar60 + 1)[(int)(pbVar54 + (-1 - (int)param_2))] =
                     (char)((uint)*pbVar65 + (uint)pbVar60[(int)pbVar62 - (int)param_2] >> 1) +
                     *pbVar60;
                pbVar60 = pbVar60 + 1;
              } while (iVar61 < (int)uVar6);
            }
            pbVar54[uVar6] = 0xff;
            param_2 = param_2 + uVar6;
            pbVar54 = pbVar54 + param_4;
            pbVar64 = pbVar64 + param_4;
            pbVar62 = pbVar62 + param_4;
          }
          break;
        case 4:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            if (0 < (int)uVar6) {
              pbVar60 = param_2;
              pbVar65 = pbVar64;
              local_28 = (byte *)uVar6;
              do {
                bVar5 = pbVar65[(int)pbVar62 - (int)pbVar54];
                ((slice_view *)&local_34)->_0_1_ = *pbVar65;
                uVar58 = (uint)(byte)local_34 - (uint)bVar5;
                iVar61 = pbVar60[(int)pbVar62 - (int)param_2] + uVar58;
                uVar66 = iVar61 - (uint)bVar5;
                uVar56 = iVar61 - (uint)(byte)local_34;
                uVar63 = (int)uVar56 >> 0x1f;
                iVar61 = (uVar56 ^ uVar63) - uVar63;
                iVar67 = (uVar58 ^ (int)uVar58 >> 0x1f) - ((int)uVar58 >> 0x1f);
                uVar56 = (int)uVar66 >> 0x1f;
                iVar59 = (uVar66 ^ uVar56) - uVar56;
                if (((iVar67 < iVar61) || (iVar59 < iVar61)) &&
                   (((slice_view *)&local_34)->_0_1_ = bVar5, iVar67 <= iVar59)) {
                  ((slice_view *)&local_34)->_0_1_ = pbVar60[(int)pbVar62 - (int)param_2];
                }
                bVar5 = *pbVar60;
                pbVar60 = pbVar60 + 1;
                pbVar65[param_4] = bVar5 + (byte)local_34;
                pbVar65 = pbVar65 + 1;
                local_28 = (byte *)((int)local_28 - 1);
              } while (local_28 != (byte *)0x0);
            }
            pbVar54[uVar6] = 0xff;
            param_2 = param_2 + uVar6;
            pbVar54 = pbVar54 + param_4;
            pbVar64 = pbVar64 + param_4;
            pbVar62 = pbVar62 + param_4;
          }
          break;
        case 5:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            iVar61 = 0;
            if (0 < (int)uVar6) {
              do {
                pbVar62 = pbVar64 + iVar61;
                pbVar60 = pbVar54 + iVar61;
                iVar61 = iVar61 + 1;
                *pbVar60 = (*pbVar62 >> 1) + pbVar60[(int)param_2 - (int)pbVar54];
              } while (iVar61 < (int)uVar6);
            }
            pbVar54[uVar6] = 0xff;
            param_2 = param_2 + uVar6;
            pbVar64 = pbVar64 + param_4;
            pbVar54 = pbVar54 + param_4;
          }
          break;
        case 6:
          iVar55 = *param_1;
          while (iVar55 = iVar55 + -1, iVar55 != 0) {
            local_38 = 0;
            if (0 < (int)uVar6) {
              do {
                pbVar54[local_38] =
                     (pbVar54 + local_38)[(int)param_2 - (int)pbVar54] + pbVar64[local_38];
                local_38 = local_38 + 1;
              } while (local_38 < (int)uVar6);
            }
            pbVar54[uVar6] = 0xff;
            param_2 = param_2 + uVar6;
            pbVar64 = pbVar64 + param_4;
            pbVar54 = pbVar54 + param_4;
          }
        }
      }
      local_2c = local_2c + 1;
    } while (local_2c < (uint)param_1[1]);
  }
  return 1;
switchD_0048c0a0_default:
  local_28 = local_28 + 1;
  local_8 = local_8 - 1;
  if (local_8 == 0) goto LAB_0048c1b7;
  goto LAB_0048c097;
}


//==== 000048e450 0048e450_FUN_0048e450 ====
extern undefined4 FUN_00488550(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00488610(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_004886b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void * __fastcall FUN_0048e450(int param_1,int *param_2,int *param_3,uint *param_4,uint param_5);

// decompiled by BatchDecomp @ 0048e450 name=FUN_0048e450 conv=unknown body=1408

void * __fastcall FUN_0048e450(int param_1,int *param_2,int *param_3,uint *param_4,uint param_5)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  int iVar14;
  undefined4 uVar15;
  FILE *pFVar16;
  uint uVar17;
  undefined4 *puVar18;
  size_t _Size;
  byte *pbVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int local_50;
  uint local_48;
  void *local_3c;
  int local_38;
  byte local_2c;
  uint local_24;
  int local_20;
  undefined8 local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;
  
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar19 = *(byte **)(param_1 + 0x14);
    if (pbVar19 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar19;
      *(byte **)(param_1 + 0x14) = pbVar19 + 1;
      uVar5 = (uint)bVar1;
    }
    else {
      uVar5 = 0;
    }
    pFVar16 = (FILE *)0x0;
  }
  else {
    uVar5 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar5 == 0xffffffff) {
      uVar5 = 0;
    }
    pFVar16 = *(FILE **)(param_1 + 0x10);
  }
  if (pFVar16 == (FILE *)0x0) {
    pbVar19 = *(byte **)(param_1 + 0x14);
    if (*(byte **)(param_1 + 0x18) <= pbVar19) {
      local_24 = 0;
      pFVar16 = (FILE *)0x0;
      goto LAB_0048e4e5;
    }
    local_2c = *pbVar19;
    local_24 = (uint)local_2c;
    *(byte **)(param_1 + 0x14) = pbVar19 + 1;
  }
  else {
    local_24 = fgetc(pFVar16);
    pFVar16 = *(FILE **)(param_1 + 0x10);
    if (local_24 == 0xffffffff) {
      local_24 = 0;
    }
LAB_0048e4e5:
    local_2c = (byte)local_24;
    local_24 = local_24 & 0xff;
    if (pFVar16 != (FILE *)0x0) {
      uVar6 = fgetc(pFVar16);
      if (uVar6 == 0xffffffff) {
        uVar6 = 0;
      }
      goto LAB_0048e504;
    }
  }
  pbVar19 = *(byte **)(param_1 + 0x14);
  if (pbVar19 < *(byte **)(param_1 + 0x18)) {
    bVar1 = *pbVar19;
    *(byte **)(param_1 + 0x14) = pbVar19 + 1;
    uVar6 = (uint)bVar1;
  }
  else {
    uVar6 = 0;
  }
LAB_0048e504:
  uVar6 = uVar6 & 0xff;
  local_c = FUN_00488610();
  iVar7 = FUN_00488610();
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar19 = *(byte **)(param_1 + 0x14);
    if (pbVar19 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar19;
      *(byte **)(param_1 + 0x14) = pbVar19 + 1;
      uVar8 = (uint)bVar1;
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar8 == 0xffffffff) {
      uVar8 = 0;
    }
  }
  FUN_00488610();
  FUN_00488610();
  iVar9 = FUN_00488610();
  iVar10 = FUN_00488610();
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar19 = *(byte **)(param_1 + 0x14);
    if (pbVar19 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar19;
      *(byte **)(param_1 + 0x14) = pbVar19 + 1;
      uVar11 = (uint)bVar1;
    }
    else {
      uVar11 = 0;
    }
    pFVar16 = (FILE *)0x0;
  }
  else {
    uVar11 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar11 == 0xffffffff) {
      uVar11 = 0;
    }
    pFVar16 = *(FILE **)(param_1 + 0x10);
  }
  uVar11 = uVar11 & 0xff;
  if (pFVar16 == (FILE *)0x0) {
    pbVar19 = *(byte **)(param_1 + 0x14);
    if (pbVar19 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar19;
      *(byte **)(param_1 + 0x14) = pbVar19 + 1;
      uVar12 = (uint)bVar1;
    }
    else {
      uVar12 = 0;
    }
  }
  else {
    uVar12 = fgetc(pFVar16);
    if (uVar12 == 0xffffffff) {
      uVar12 = 0;
    }
  }
  local_3c = (void *)0x0;
  local_5 = 0;
  local_6 = 0;
  uVar17 = uVar6 - 8;
  if (uVar6 < 8) {
    uVar17 = uVar6;
  }
  local_7 = 0;
  local_8 = 0;
  local_20 = 0;
  local_48 = 0;
  bVar3 = true;
  if ((((iVar9 < 1) || (iVar10 < 1)) || (2 < uVar17 - 1)) ||
     (((uVar11 != 8 && (uVar11 != 0x10)) && ((uVar11 != 0x18 && (uVar11 != 0x20)))))) {
    return (void *)0x0;
  }
  uVar17 = uVar8 & 0xff;
  if (local_24 == 0) {
    uVar17 = uVar11;
  }
  *param_2 = iVar9;
  *param_3 = iVar10;
  uVar11 = uVar17 >> 3;
  if (3 < param_5 - 1) {
    param_5 = uVar11;
  }
  local_38 = iVar10 * iVar9;
  *param_4 = uVar11;
  pvVar13 = malloc(local_38 * param_5);
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (uVar5 & 0xff);
  }
  else {
    fseek(*(FILE **)(param_1 + 0x10),uVar5 & 0xff,1);
  }
  if (local_24 != 0) {
    FUN_00488550();
    iVar14 = (uVar8 & 0xff) * iVar7;
    _Size = (int)((iVar14 >> 0x1f & 7U) + iVar14) >> 3;
    local_3c = malloc(_Size);
    FUN_004886b0(_Size);
  }
  if (0 < local_38) {
    pbVar19 = (byte *)((int)pvVar13 + 1);
    do {
      if (7 < uVar6) {
        if (local_20 == 0) {
          if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
            pbVar2 = *(byte **)(param_1 + 0x14);
            if (pbVar2 < *(byte **)(param_1 + 0x18)) {
              bVar1 = *pbVar2;
              *(byte **)(param_1 + 0x14) = pbVar2 + 1;
              uVar5 = (uint)bVar1;
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = fgetc(*(FILE **)(param_1 + 0x10));
            if (uVar5 == 0xffffffff) {
              uVar5 = 0;
            }
          }
          local_20 = (uVar5 & 0x7f) + 1;
          local_48 = (uVar5 & 0xff) >> 7;
          goto LAB_0048e772;
        }
        if ((local_48 == 0) || (bVar3)) goto LAB_0048e772;
        goto LAB_0048e88e;
      }
LAB_0048e772:
      if (local_2c == 0) {
        if (uVar17 != 0) {
          iVar14 = 0;
          puVar18 = &local_c;
          do {
            if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
              puVar20 = *(undefined1 **)(param_1 + 0x14);
              if (puVar20 < *(undefined1 **)(param_1 + 0x18)) {
                uVar4 = *puVar20;
                *(undefined1 **)(param_1 + 0x14) = puVar20 + 1;
              }
              else {
                uVar4 = 0;
              }
            }
            else {
              iVar22 = fgetc(*(FILE **)(param_1 + 0x10));
              if (iVar22 == -1) {
                iVar22 = 0;
              }
              uVar4 = (undefined1)iVar22;
            }
            *(undefined1 *)puVar18 = uVar4;
            iVar14 = iVar14 + 8;
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          } while (iVar14 < (int)uVar17);
        }
      }
      else {
        if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
          pbVar2 = *(byte **)(param_1 + 0x14);
          if (pbVar2 < *(byte **)(param_1 + 0x18)) {
            bVar1 = *pbVar2;
            *(byte **)(param_1 + 0x14) = pbVar2 + 1;
            uVar5 = (uint)bVar1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = fgetc(*(FILE **)(param_1 + 0x10));
          if (uVar5 == 0xffffffff) {
            uVar5 = 0;
          }
        }
        iVar14 = 0;
        uVar5 = uVar5 & 0xff;
        if (iVar7 <= (int)uVar5) {
          uVar5 = 0;
        }
        if (uVar17 != 0) {
          puVar20 = (undefined1 *)(uVar11 * uVar5 + (int)local_3c);
          puVar18 = &local_c;
          do {
            uVar4 = *puVar20;
            puVar20 = puVar20 + 1;
            iVar14 = iVar14 + 8;
            *(undefined1 *)puVar18 = uVar4;
            puVar18 = (undefined4 *)((int)puVar18 + 1);
          } while (iVar14 < (int)uVar17);
        }
      }
      switch(uVar17) {
      case 8:
        local_5 = (byte)local_c;
        local_6 = (byte)local_c;
        local_8 = 0xff;
        local_7 = (byte)local_c;
        break;
      case 0x10:
        local_5 = (byte)local_c;
        local_6 = (byte)local_c;
        local_8 = (byte)((uint)local_c >> 8);
        local_7 = (byte)local_c;
        break;
      case 0x18:
        local_8 = 0xff;
        uVar15 = local_c;
        goto LAB_0048e87d;
      case 0x20:
        local_8 = ((slice_view *)&local_c)->_3_1_;
        uVar15 = CONCAT31((int3)((uint)local_c >> 8),((slice_view *)&local_c)->_3_1_);
LAB_0048e87d:
        local_5 = ((slice_view *)&local_c)->_2_1_;
        local_6 = (byte)((uint)uVar15 >> 8);
        local_7 = (byte)local_c;
      }
      bVar3 = false;
LAB_0048e88e:
      switch(param_5) {
      case 1:
        pbVar19[-1] = (byte)((uint)local_6 * 0x96 + (uint)local_5 * 0x4d + (uint)local_7 * 0x1d >> 8
                            );
        break;
      case 2:
        pbVar19[-1] = (byte)((uint)local_6 * 0x96 + (uint)local_5 * 0x4d + (uint)local_7 * 0x1d >> 8
                            );
        *pbVar19 = local_8;
        break;
      case 3:
        pbVar19[-1] = local_5;
        *pbVar19 = local_6;
        pbVar19[1] = local_7;
        break;
      case 4:
        pbVar19[-1] = local_5;
        *pbVar19 = local_6;
        pbVar19[1] = local_7;
        pbVar19[2] = local_8;
      }
      local_20 = local_20 + -1;
      pbVar19 = pbVar19 + param_5;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  if ((((uVar12 & 0xff) >> 5 & 1) != 1) && (local_50 = 0, 0 < iVar10)) {
    uVar5 = 0;
    iVar14 = 0;
    iVar7 = iVar9 * param_5;
    do {
      if (0 < iVar7) {
        puVar20 = (undefined1 *)((~uVar5 + iVar10) * iVar9 * param_5 + iVar14 + (int)pvVar13);
        puVar21 = (undefined1 *)(iVar14 + (int)pvVar13);
        iVar22 = iVar7;
        do {
          uVar4 = *puVar21;
          *puVar21 = *puVar20;
          iVar22 = iVar22 + -1;
          *puVar20 = uVar4;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 1;
        } while (0 < iVar22);
      }
      local_50 = local_50 + 1;
      iVar14 = iVar14 + iVar7;
      uVar5 = local_50 * 2;
    } while ((int)uVar5 < iVar10);
  }
  if (local_3c != (void *)0x0) {
    free(local_3c);
  }
  return pvVar13;
}


//==== 00004919b0 004919b0__LSE_master_colors_max_min ====
// decompiled by BatchDecomp @ 004919b0 name=_LSE_master_colors_max_min conv=unknown body=701

void __fastcall _LSE_master_colors_max_min(uint *param_1,uint *param_2,int param_3,byte *param_4)

{
  float fVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_38[6];
  float local_20[6];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = 0.0;
  local_20[3] = 0.0;
  local_20[4] = 0.0;
  local_20[5] = 0.0;
  if (param_3 - 3U < 2) {
    compute_color_line_STDEV(local_20,local_20 + 3);
    pbVar2 = param_4 + param_3 + 2;
    iVar4 = 0xf;
    fVar13 = /*3f800000*/1.0f /
             (local_20[3] * local_20[3] + /*3727c5ac*/9.999999747378752e-06f + local_20[4] * local_20[4] +
             local_20[5] * local_20[5]);
    fVar11 = (float)param_4[1] * local_20[4] + (float)*param_4 * local_20[3] +
             (float)param_4[2] * local_20[5];
    fVar10 = fVar11;
    do {
      fVar9 = (float)pbVar2[-1] * local_20[4] + (float)pbVar2[-2] * local_20[3] +
              (float)*pbVar2 * local_20[5];
      fVar12 = fVar9;
      fVar1 = fVar11;
      if ((fVar10 <= fVar9) && (fVar12 = fVar10, fVar1 = fVar9, fVar9 <= fVar11)) {
        fVar1 = fVar11;
      }
      fVar11 = fVar1;
      pbVar2 = pbVar2 + param_3;
      iVar4 = iVar4 + -1;
      fVar10 = fVar12;
    } while (iVar4 != 0);
    iVar4 = 0;
    fVar10 = local_20[4] * local_20[1] + local_20[3] * local_20[0] + local_20[5] * local_20[2];
    do {
      fVar1 = *(float *)((int)local_20 + iVar4 + 0xc);
      fVar9 = *(float *)((int)local_20 + iVar4) + /*3f000000*/0.5f;
      iVar3 = (int)(fVar1 * (fVar11 - fVar10) * fVar13 + fVar9);
      *(int *)((int)local_38 + iVar4 + 0xc) = iVar3;
      if (iVar3 < 0) {
        *(undefined4 *)((int)local_38 + iVar4 + 0xc) = 0;
      }
      else if (0xff < iVar3) {
        *(undefined4 *)((int)local_38 + iVar4 + 0xc) = 0xff;
      }
      iVar3 = (int)(fVar1 * (fVar12 - fVar10) * fVar13 + fVar9);
      *(int *)((int)local_38 + iVar4) = iVar3;
      if (iVar3 < 0) {
        *(undefined4 *)((int)local_38 + iVar4) = 0;
      }
      else if (0xff < iVar3) {
        *(undefined4 *)((int)local_38 + iVar4) = 0xff;
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < 0xc);
    iVar3 = local_38[4] * 0x3f + 0x80;
    iVar4 = local_38[5] * 0x1f + 0x80;
    iVar7 = local_38[3] * 0x1f + 0x80;
    iVar5 = local_38[1] * 0x3f + 0x80;
    uVar8 = (int)((iVar3 >> 8) + iVar3 & 0xffffff07U | (iVar4 >> 8) + iVar4 >> 5) >> 3 |
            (iVar7 >> 5) + iVar7 * 8 & 0xfffff800U;
    iVar4 = local_38[2] * 0x1f + 0x80;
    iVar3 = local_38[0] * 0x1f + 0x80;
    uVar6 = (int)((iVar5 >> 8) + iVar5 & 0xffffff07U | (iVar4 >> 8) + iVar4 >> 5) >> 3 |
            (iVar3 >> 5) + iVar3 * 8 & 0xfffff800U;
    if ((int)uVar6 < (int)uVar8) {
      *param_1 = uVar8;
      *param_2 = uVar6;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *param_1 = uVar6;
    *param_2 = uVar8;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000524770 00524770_FUN_00524770 ====
void FUN_00524770(int *param_1, Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *param_2);

// decompiled by BatchDecomp @ 00524770 name=FUN_00524770 conv=unknown body=729

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00524770(int *param_1,
                 Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_
                 *param_2)

{
  ModuleCompartment *this;
  ReferenceController *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *pDVar4;
  undefined4 *puVar5;
  int iVar6;
  Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *this_01;
  undefined1 *puVar7;
  int *piVar8;
  ReferenceControllerRegistry *this_02;
  Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *this_03;
  ReferenceController *local_1c;
  Darray_L_class_util__Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G___G_ *local_18;
  char local_11;
  int local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar3) {
    local_18 = param_2;
    this_03 = param_2;
    do {
      pDVar4 = (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
               (**(code **)*param_1)(&local_10);
      iVar3 = (**(code **)(*(int *)pDVar4 + 0xc))();
      if (0 < iVar3) {
        local_c = (int *)0x0;
        iVar3 = (**(code **)(*(int *)pDVar4 + 0xc))();
        if ((int)local_c < iVar3) {
          do {
            puVar5 = (undefined4 *)(*(code *)**(undefined4 **)pDVar4)(&local_c);
            this = (ModuleCompartment *)*puVar5;
            puVar5 = (undefined4 *)(**(code **)(*(int *)pDVar4 + 0x20))();
            iVar3 = ModuleCompartment__GetLengthIndex((ModuleCompartment *)*puVar5);
            iVar6 = ModuleCompartment__GetLengthIndex(this);
            if (iVar6 != iVar3) {
              util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\craftblueprintinstances.cpp"
                              ,0x32e,
                              "All(CompartmentList, [&](SharedPtr<ModuleCompartment>& c) {return c->GetLengthIndex() == CompartmentList.First()->GetLengthIndex();})"
                              ,(char *)0x0);
              DebugBreak();
              this_03 = local_18;
              break;
            }
            local_c = (int *)((int)local_c + 1);
            iVar3 = (**(code **)(*(int *)pDVar4 + 0xc))();
            this_03 = local_18;
          } while ((int)local_c < iVar3);
        }
        puVar5 = (undefined4 *)(**(code **)(*(int *)pDVar4 + 0x20))();
        local_1c = (ReferenceController *)
                   ModuleCompartment__GetLengthIndex((ModuleCompartment *)*puVar5);
        iVar3 = (**(code **)(*(int *)param_2 + 0xc))();
        if (iVar3 < 1) {
LAB_00524a0c:
          iVar3 = *(int *)(this_03 + 8);
          local_1c = (ReferenceController *)(iVar3 + 1);
          util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment_______SetSize(this_03,(int *)&local_1c);
          bVar2 = util__Darray_class_util__Darray_class_util__SharedPtr_struct_ModuleCompartment_______CheckSize(this_03,iVar3);
          if (bVar2) {
            util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator__o2
                      ((Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
                       (*(int *)(this_03 + 8) * 0x10 + *(int *)(this_03 + 4) + -0x10),pDVar4);
          }
        }
        else {
          this_01 = (Darray_L_class_util__SharedPtr_L_struct_ModuleCompartment_G___G_ *)
                    (**(code **)(*(int *)param_2 + 8))();
          iVar3 = (**(code **)(*(int *)this_01 + 0xc))();
          if (iVar3 < 1) {
            puVar7 = (undefined1 *)0x0;
          }
          else {
            puVar5 = (undefined4 *)(**(code **)(*(int *)this_01 + 8))();
            puVar7 = (undefined1 *)ModuleCompartment__GetLengthIndex((ModuleCompartment *)*puVar5);
          }
          local_c = (int *)0x0;
          iVar3 = (**(code **)(*(int *)pDVar4 + 0xc))();
          if ((int)local_c < iVar3) {
            do {
              piVar8 = (int *)(*(code *)**(undefined4 **)pDVar4)(&local_c);
              cVar1 = (**(code **)(**(int **)(*piVar8 + 0x38) + 0x78))();
              if (cVar1 == '\0') {
                local_11 = '\x01';
                goto LAB_005248c1;
              }
              local_c = (int *)((int)local_c + 1);
              iVar3 = (**(code **)(*(int *)pDVar4 + 0xc))();
            } while ((int)local_c < iVar3);
          }
          local_11 = '\0';
LAB_005248c1:
          local_c = (int *)0x0;
          iVar3 = (**(code **)(*(int *)this_01 + 0xc))();
          if ((int)local_c < iVar3) {
            do {
              piVar8 = (int *)(*(code *)**(undefined4 **)this_01)(&local_c);
              cVar1 = (**(code **)(**(int **)(*piVar8 + 0x38) + 0x78))();
              if (cVar1 == '\0') {
                bVar2 = true;
                goto LAB_005248ff;
              }
              local_c = (int *)((int)local_c + 1);
              iVar3 = (**(code **)(*(int *)this_01 + 0xc))();
            } while ((int)local_c < iVar3);
          }
          bVar2 = false;
LAB_005248ff:
          this_03 = local_18;
          if (local_11 != '\0') {
            if ((!bVar2) || (puVar7 != (undefined1 *)((int)&local_1c[-1].Pointer + 3)))
            goto LAB_00524a0c;
            if (*(int *)(this_01 + 8) == 0) {
              util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____operator__o2
                        (this_01,pDVar4);
              this_03 = local_18;
            }
            else {
              iVar3 = (**(code **)(*(int *)pDVar4 + 0xc))();
              this_03 = local_18;
              if (iVar3 != 0) {
                iVar3 = *(int *)(this_01 + 8);
                iVar6 = (**(code **)(*(int *)pDVar4 + 0xc))();
                local_1c = (ReferenceController *)(iVar6 + *(int *)(this_01 + 8));
                util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____SetSize(this_01,(int *)&local_1c);
                util__Darray_class_util__SharedPtr_struct_ModuleCompartment_____CheckSize(this_01,iVar3);
                local_c = *(int **)(pDVar4 + 4);
                piVar8 = (int *)(*(int *)(this_01 + 4) + iVar3 * 8);
                this_03 = local_18;
                if (piVar8 != (int *)(*(int *)(this_01 + 4) + *(int *)(this_01 + 8) * 8)) {
                  do {
                    local_1c = (ReferenceController *)piVar8[1];
                    puVar5 = (undefined4 *)*piVar8;
                    *piVar8 = *local_c;
                    this_00 = (ReferenceController *)local_c[1];
                    piVar8[1] = (int)this_00;
                    if (this_00 != (ReferenceController *)0x0) {
                      util__ReferenceController__AddStrongReference(this_00);
                    }
                    if ((local_1c != (ReferenceController *)0x0) &&
                       (bVar2 = util__ReferenceController__ReleaseStrongReference(local_1c), bVar2))
                    {
                      if (puVar5 != (undefined4 *)0x0) {
                        (**(code **)*puVar5)(1);
                      }
                      this_02 = util__ReferenceControllerRegistry__Get();
                      util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,puVar5);
                    }
                    local_c = local_c + 2;
                    piVar8 = piVar8 + 2;
                    this_03 = local_18;
                  } while (piVar8 != (int *)(*(int *)(this_01 + 4) + *(int *)(this_01 + 8) * 8));
                }
              }
            }
          }
        }
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000529e10 00529e10_FUN_00529e10 ====
double * FUN_00529e10(double *param_1,int param_2);

// decompiled by BatchDecomp @ 00529e10 name=FUN_00529e10 conv=unknown body=1281

double * FUN_00529e10(double *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  Vec3_L_double_G_ *pVVar6;
  double dVar7;
  double dVar8;
  Vec3_L_double_G_ local_64;
  Vec3_L_double_G_ local_4c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  if (*(char *)(param_2 + 0xe8) != '\0') {
    local_2c = *(double *)(param_2 + 0xb8) * *(double *)(param_2 + 200) -
               *(double *)(param_2 + 0xb0) * *(double *)(param_2 + 0xd0);
    local_c = *(double *)(param_2 + 0xc0) * *(double *)(param_2 + 0xb0) -
              *(double *)(param_2 + 0xa8) * *(double *)(param_2 + 200);
    local_34 = *(double *)(param_2 + 0xa8) * *(double *)(param_2 + 0xd0) -
               *(double *)(param_2 + 0xc0) * *(double *)(param_2 + 0xb8);
    iVar5 = rand();
    local_14 = (double)iVar5 * /*3f00000000000000*/3.0517578125e-05 - /*3fe0000000000000*/0.5;
    iVar5 = rand();
    cVar4 = *(char *)(param_2 + 0xe8);
    local_24 = (double)iVar5 * /*3f00000000000000*/3.0517578125e-05 - /*3fe0000000000000*/0.5;
    if (cVar4 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      cVar4 = *(char *)(param_2 + 0xe8);
    }
    dVar8 = *(double *)(param_2 + 0xe0);
    local_2c = dVar8 * local_2c * local_24;
    local_34 = dVar8 * local_34 * local_24;
    local_1c = dVar8 * local_c * local_24;
    if (cVar4 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if (*(char *)(param_2 + 0xe8) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar8 = *(double *)(param_2 + 0xd8);
    dVar7 = dVar8 * *(double *)(param_2 + 0xc0) * local_14;
    local_c = dVar8 * *(double *)(param_2 + 200) * local_14;
    local_24 = dVar8 * *(double *)(param_2 + 0xd0) * local_14;
    local_14 = dVar7;
    if (*(char *)(param_2 + 0xe8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar8 = *(double *)(param_2 + 0xa0);
    dVar7 = *(double *)(param_2 + 0x90);
    param_1[1] = local_c + *(double *)(param_2 + 0x98) + local_34;
    *param_1 = local_14 + dVar7 + local_2c;
    param_1[2] = dVar8 + local_24 + local_1c;
    return param_1;
  }
  if (*(char *)(param_2 + 0x88) != '\0') {
    iVar5 = rand();
    local_24 = (double)iVar5 * /*3f00000000000000*/3.0517578125e-05;
    if (*(char *)(param_2 + 0x88) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if (*(char *)(param_2 + 0x88) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    local_1c = (/*3ff0000000000000*/1.0 - local_24) * *(double *)(param_2 + 0x70) +
               *(double *)(param_2 + 0x78) * local_24;
util__FUN_00529e10(&local_4c);
    if (*(char *)(param_2 + 0x88) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar8 = *(double *)(param_2 + 0x40) * local_4c.X + *(double *)(param_2 + 0x48) * local_4c.Y +
            *(double *)(param_2 + 0x50) * local_4c.Z;
    local_4c.X = local_4c.X - dVar8 * *(double *)(param_2 + 0x40);
    local_4c.Y = local_4c.Y - dVar8 * *(double *)(param_2 + 0x48);
    local_4c.Z = local_4c.Z - dVar8 * *(double *)(param_2 + 0x50);
    pVVar6 = util__Vec3_double___SafeNormalized(&local_4c,&local_64);
    dVar8 = local_1c * pVVar6->X;
    local_14 = pVVar6->Y * local_1c;
    local_c = pVVar6->Z * local_1c;
    local_1c = dVar8;
    if (*(char *)(param_2 + 0x88) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar8 = *(double *)(param_2 + 0x20);
    dVar7 = *(double *)(param_2 + 0x38);
    dVar1 = *(double *)(param_2 + 0x28);
    dVar2 = *(double *)(param_2 + 0x10);
    dVar3 = *(double *)(param_2 + 0x10);
    param_1[1] = (*(double *)(param_2 + 0x30) - *(double *)(param_2 + 0x18)) * local_24 +
                 *(double *)(param_2 + 0x18) + local_14;
    *param_1 = (dVar1 - dVar2) * local_24 + dVar3 + local_1c;
    param_1[2] = (dVar7 - dVar8) * local_24 + dVar8 + local_c;
    return param_1;
  }
  if (*(char *)(param_2 + 0x110) != '\0') {
    pVVar6 = util__FUN_00529e10(&local_64);
    local_14 = *(double *)(param_2 + 0x108);
    local_1c = local_14 * pVVar6->X;
    local_c = pVVar6->Y * local_14;
    local_14 = pVVar6->Z * local_14;
    if (*(char *)(param_2 + 0x110) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar8 = *(double *)(param_2 + 0x100);
    dVar7 = *(double *)(param_2 + 0xf8);
    *param_1 = local_1c + *(double *)(param_2 + 0xf0);
    param_1[2] = dVar8 + local_14;
    param_1[1] = dVar7 + local_c;
    return param_1;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\craftblueprintinstances.cpp"
                  ,0x3bf,"0",(char *)0x0);
  DebugBreak();
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  param_1[2] = 0.0;
  return param_1;
}


//==== 000052e460 0052e460_GetDeltaVRemaining_km__s ====
extern undefined4 FUN_00524250(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0052e460 name=GetDeltaVRemaining_km__s conv=__thiscall body=1094

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall CraftInstance__GetDeltaVRemaining_km__s(void)const  */

double __thiscall CraftInstance__GetDeltaVRemaining_km__s(CraftInstance *this)

{
  bool bVar1;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined4 uStack_60;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_5c[4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_4c;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_48[4];
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 uStack_38;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ local_34[8];
  double local_2c;
  double local_24;
  undefined8 local_1c;
  int local_14;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
    iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_14 = iVar3 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               &local_14);
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar3);
    if (bVar1) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, CraftInstance__GetCapableMainEngineModules_Clear);
    }
    local_10 = GetCurrentPowerGeneration_W(this);
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
      local_14 = iVar3 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
                 &local_14);
      bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                         &this->CraftInstanceMemoizationHandlerInstance,iVar3);
      if (bVar1) {
        (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
        [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
             CDE_PMF(pmf_57e8e8d5, GetMainEngineModules_Clear);
      }
      pDVar2 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
               GetMainEngineModules_MemoizedFunction(this);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_5c,pDVar2);
      ((slice_view *)&uStack_4c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_4c)->_1_3_[0] | (((slice_view *)&uStack_4c)->_1_3_[1] << 8) | (((slice_view *)&uStack_4c)->_1_3_[2] << 16)) << 8));
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 &this->GetMainEngineModules_MemoizedValue,
                 (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_5c);
      (this->GetMainEngineModules_MemoizedValue).IsValidData = ((slice_view *)&uStack_4c)->_0_1_;
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_5c);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_6c);
    }
    if ((this->GetMainEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    FUN_00524250(local_34,&this->GetMainEngineModules_MemoizedValue,&local_10);
    util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment(local_48,local_34);
    ((slice_view *)&uStack_38)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_38)->_1_3_[0] | (((slice_view *)&uStack_38)->_1_3_[1] << 8) | (((slice_view *)&uStack_38)->_1_3_[2] << 16)) << 8));
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               &this->GetCapableMainEngineModules_MemoizedValue,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_48);
    (this->GetCapableMainEngineModules_MemoizedValue).IsValidData = ((slice_view *)&uStack_38)->_0_1_;
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_48);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_34);
    if ((this->GetCapableMainEngineModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  iVar3 = (**(code **)((this->GetCapableMainEngineModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
  if (iVar3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  local_10 = 0.0;
  local_14 = 0;
  do {
    if (local_14 == 1) {
      if ((this->GetStagingWetMass_kg_MemoizedValue).IsValidData == false) {
        iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
        local_1c = (double)CONCAT44(iVar3 + 1,(undefined4)local_1c);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                   &this->CraftInstanceMemoizationHandlerInstance,(int *)((int)&local_1c + 4));
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                           &this->CraftInstanceMemoizationHandlerInstance,iVar3);
        if (bVar1) {
          (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
          [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_57e8e8d5, GetStagingWetMass_kg_Clear);
        }
        dVar6 = GetWetMass_kg(this,true);
        ((slice_view *)&uStack_74)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_74)->_1_3_[0] | (((slice_view *)&uStack_74)->_1_3_[1] << 8) | (((slice_view *)&uStack_74)->_1_3_[2] << 16)) << 8));
        local_7c = *(undefined4 *)&dVar6;
        uStack_78 = *(undefined4 *)((char *)&dVar6 + 4);
        *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).Data = local_7c;
        *(undefined4 *)((int)&(this->GetStagingWetMass_kg_MemoizedValue).Data + 4) = uStack_78;
        *(undefined4 *)&(this->GetStagingWetMass_kg_MemoizedValue).IsValidData = uStack_74;
        *(undefined4 *)((char *)&(this->GetStagingWetMass_kg_MemoizedValue) + 0xc) = uStack_70;
        if ((this->GetStagingWetMass_kg_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      local_24 = (this->GetStagingWetMass_kg_MemoizedValue).Data;
      if ((this->GetStagingDryMass_kg_MemoizedValue).IsValidData == false) {
        iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
        local_1c = (double)CONCAT44(iVar3 + 1,(undefined4)local_1c);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                   &this->CraftInstanceMemoizationHandlerInstance,(int *)((int)&local_1c + 4));
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                           &this->CraftInstanceMemoizationHandlerInstance,iVar3);
        if (bVar1) {
          (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
          [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_57e8e8d5, GhostedUIButton__GetTimeSinceJ2000_s_Clear);
        }
        dVar6 = GetDryMass_kg(this,true);
        ((slice_view *)&uStack_3c)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_3c)->_1_3_[0] | (((slice_view *)&uStack_3c)->_1_3_[1] << 8) | (((slice_view *)&uStack_3c)->_1_3_[2] << 16)) << 8));
        ((slice_view *)&local_44)->_0_4_ = *(undefined4 *)&dVar6;
        ((slice_view *)&local_44)->_4_4_ = *(undefined4 *)((char *)&dVar6 + 4);
        *(undefined4 *)&(this->GetStagingDryMass_kg_MemoizedValue).Data = (undefined4)local_44;
        *(undefined4 *)((int)&(this->GetStagingDryMass_kg_MemoizedValue).Data + 4) = ((slice_view *)&local_44)->_4_4_;
        *(undefined4 *)&(this->GetStagingDryMass_kg_MemoizedValue).IsValidData = uStack_3c;
        *(undefined4 *)((char *)&(this->GetStagingDryMass_kg_MemoizedValue) + 0xc) = uStack_38;
        local_44 = dVar6;
        if ((this->GetStagingDryMass_kg_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      dVar6 = (this->GetStagingDryMass_kg_MemoizedValue).Data;
      uVar4 = *(undefined4 *)&dVar6;
      uVar5 = *(undefined4 *)((char *)&dVar6 + 4);
    }
    else {
      if ((this->GetUnstagedWetMass_kg_MemoizedValue).IsValidData == false) {
        iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
        local_1c = (double)CONCAT44(iVar3 + 1,(undefined4)local_1c);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                   &this->CraftInstanceMemoizationHandlerInstance,(int *)((int)&local_1c + 4));
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                           &this->CraftInstanceMemoizationHandlerInstance,iVar3);
        if (bVar1) {
          (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
          [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_57e8e8d5, GetUnstagedWetMass_kg_Clear);
        }
        dVar6 = GetWetMass_kg(this,false);
        ((slice_view *)&uStack_50)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_50)->_1_3_[0] | (((slice_view *)&uStack_50)->_1_3_[1] << 8) | (((slice_view *)&uStack_50)->_1_3_[2] << 16)) << 8));
        ((slice_view *)&local_58)->_0_4_ = *(undefined4 *)&dVar6;
        ((slice_view *)&local_58)->_4_4_ = *(undefined4 *)((char *)&dVar6 + 4);
        *(undefined4 *)&(this->GetUnstagedWetMass_kg_MemoizedValue).Data = (undefined4)local_58;
        *(undefined4 *)((int)&(this->GetUnstagedWetMass_kg_MemoizedValue).Data + 4) = ((slice_view *)&local_58)->_4_4_
        ;
        *(undefined4 *)&(this->GetUnstagedWetMass_kg_MemoizedValue).IsValidData = uStack_50;
        *(undefined4 *)((char *)&(this->GetUnstagedWetMass_kg_MemoizedValue) + 0xc) = uStack_4c;
        local_58 = dVar6;
        if ((this->GetUnstagedWetMass_kg_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      local_24 = (this->GetUnstagedWetMass_kg_MemoizedValue).Data;
      if ((this->GetUnstagedDryMass_kg_MemoizedValue).IsValidData == false) {
        iVar3 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
        local_1c = (double)CONCAT44(iVar3 + 1,(undefined4)local_1c);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                   &this->CraftInstanceMemoizationHandlerInstance,(int *)((int)&local_1c + 4));
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                           &this->CraftInstanceMemoizationHandlerInstance,iVar3);
        if (bVar1) {
          (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
          [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_57e8e8d5, Body__GetTightRadius_km_Clear);
        }
        dVar6 = GetDryMass_kg(this,false);
        ((slice_view *)&uStack_64)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_64)->_1_3_[0] | (((slice_view *)&uStack_64)->_1_3_[1] << 8) | (((slice_view *)&uStack_64)->_1_3_[2] << 16)) << 8));
        ((slice_view *)&local_6c)->_0_4_ = *(undefined4 *)&dVar6;
        ((slice_view *)&local_6c)->_4_4_ = *(undefined4 *)((char *)&dVar6 + 4);
        *(undefined4 *)&(this->GetUnstagedDryMass_kg_MemoizedValue).Data = (undefined4)local_6c;
        *(undefined4 *)((int)&(this->GetUnstagedDryMass_kg_MemoizedValue).Data + 4) = ((slice_view *)&local_6c)->_4_4_
        ;
        *(undefined4 *)&(this->GetUnstagedDryMass_kg_MemoizedValue).IsValidData = uStack_64;
        *(undefined4 *)((char *)&(this->GetUnstagedDryMass_kg_MemoizedValue) + 0xc) = uStack_60;
        local_6c = dVar6;
        if ((this->GetUnstagedDryMass_kg_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      dVar6 = (this->GetUnstagedDryMass_kg_MemoizedValue).Data;
      uVar4 = *(undefined4 *)&dVar6;
      uVar5 = *(undefined4 *)((char *)&dVar6 + 4);
    }
    local_1c = (double)CONCAT44(uVar5,uVar4);
    if ((local_24 < (double)CONCAT44(uVar5,uVar4) || local_24 == (double)CONCAT44(uVar5,uVar4)) ||
       ((double)CONCAT44(uVar5,uVar4) < /*0000000000000000*/0.0 ||
        (double)CONCAT44(uVar5,uVar4) == /*0000000000000000*/0.0)) {
      local_2c = 0.0;
    }
    else {
      local_2c = GetCombinedExhaustVelocity_km__s(this);
      dVar6 = local_24 / local_1c;
      dVar6 = libm_sse2_log_precise(dVar6);
      local_2c = dVar6 * local_2c;
      local_24 = dVar6;
    }
    local_2c = local_2c + local_10;
    local_14 = local_14 + 1;
    local_10 = local_2c;
  } while (local_14 < 2);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 0000534610 00534610_FUN_00534610 ====
void FUN_00534610(int *param_1,double *param_2,CraftBlueprint *param_3, Darray_L_struct_CraftSplinePoint_G_ *param_4);

// decompiled by BatchDecomp @ 00534610 name=FUN_00534610 conv=unknown body=808

void FUN_00534610(int *param_1,double *param_2,CraftBlueprint *param_3,
                 Darray_L_struct_CraftSplinePoint_G_ *param_4)

{
  ModulePlacer *pMVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar9;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar10;
  float10 fVar11;
  Vec2_L_double_G_ local_88;
  double local_78;
  double local_70;
  undefined **local_68;
  void *local_64;
  int *local_50;
  int local_4c;
  undefined **local_48;
  void *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined **local_38;
  void *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  double local_28;
  Vec2_L_double_G_ *local_20;
  undefined **local_1c;
  void *pvStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_50 = param_1;
  local_c = 0;
  iVar7 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar7) {
    do {
      pDVar10 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_c;
      puVar8 = (undefined4 *)(**(code **)*param_1)();
      pMVar1 = (ModulePlacer *)*puVar8;
      fVar11 = (float10)(**(code **)(*(int *)pMVar1->ModuleType + 0xa8))();
      local_28 = (double)fVar11;
      if (0.0 < local_28) {
LAB_0053468d:
        fVar11 = (float10)(**(code **)(*(int *)pMVar1->ModuleType + 0xa4))();
        local_78 = (double)fVar11;
        fVar11 = (float10)(**(code **)(*(int *)pMVar1->ModuleType + 0xa8))();
        local_70 = (double)fVar11;
        local_28 = *param_2 + local_70;
        local_1c = (undefined **)0x0;
        pvStack_18 = (void *)0x0;
        iStack_14 = 0;
        uStack_10 = 0;
        util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,pMVar1->Multiplier);
        iVar7 = 0;
        if (0 < pMVar1->Multiplier) {
          do {
            local_20 = CraftBlueprint__GetCompartment2DOffset_m(param_3,&local_88,pMVar1,iVar7);
            iVar5 = iStack_14;
            local_4c = iStack_14 + 1;
            util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,&local_4c);
            bVar6 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_1c,iVar5);
            if (bVar6) {
              uVar2 = *(undefined4 *)((int)&local_20->X + 4);
              uVar3 = *(undefined4 *)&local_20->Y;
              uVar4 = *(undefined4 *)((int)&local_20->Y + 4);
              puVar8 = (undefined4 *)((int)pvStack_18 + iStack_14 * 0x10 + -0x10);
              *puVar8 = *(undefined4 *)&local_20->X;
              puVar8[1] = uVar2;
              puVar8[2] = uVar3;
              puVar8[3] = uVar4;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < pMVar1->Multiplier);
        }
        local_38 = ((void *)(0x00919ac4u));
        local_34 = (void *)0x0;
        local_30 = 0;
        local_2c = 0;
        pDVar9 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)
                 CraftSplinePoint__CraftSplinePoint((CraftSplinePoint *)&local_68,8,
                            (double)CONCAT44(SUB84(*param_2,0),(int)((ulonglong)local_78 >> 0x20)),
                            (double)CONCAT44(&local_1c,(int)((ulonglong)*param_2 >> 0x20)),
                            (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_38,pDVar10);
        iVar7 = *(int *)(param_4 + 8);
        local_20 = (Vec2_L_double_G_ *)(iVar7 + 1);
        util__Darray_struct_CraftSplinePoint___SetSize(param_4,(int *)&local_20);
        bVar6 = util__Darray_struct_CraftSplinePoint___CheckSize(param_4,iVar7);
        if (bVar6) {
          iVar7 = *(int *)(param_4 + 4) + *(int *)(param_4 + 8) * 0x18;
          util__Darray_struct_util__Vec2_double_____operator
                    ((Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar7 + -0x18),pDVar9);
          *(undefined8 *)(iVar7 + -8) = *(undefined8 *)(pDVar9 + 0x10);
        }
        local_68 = ((void *)(0x00919ac4u));
        if (local_64 != (void *)0x0) {
          operator_delete__(local_64);
        }
        local_64 = (void *)0x0;
        local_68 = ((void *)(0x00919488u));
        local_38 = ((void *)(0x00919ac4u));
        if (local_34 != (void *)0x0) {
          operator_delete__(local_34);
        }
        local_34 = (void *)0x0;
        local_38 = ((void *)(0x00919488u));
        if (0.0 < local_70) {
          local_48 = ((void *)(0x00919ac4u));
          local_44 = (void *)0x0;
          local_40 = 0;
          local_3c = 0;
          pDVar10 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)
                    CraftSplinePoint__CraftSplinePoint((CraftSplinePoint *)&local_68,8,
                               (double)CONCAT44(SUB84(local_28,0),(int)((ulonglong)local_78 >> 0x20)
                                               ),
                               (double)CONCAT44(&local_1c,(int)((ulonglong)local_28 >> 0x20)),
                               (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_48,pDVar10);
          iVar7 = *(int *)(param_4 + 8);
          local_20 = (Vec2_L_double_G_ *)(iVar7 + 1);
          util__Darray_struct_CraftSplinePoint___SetSize(param_4,(int *)&local_20);
          bVar6 = util__Darray_struct_CraftSplinePoint___CheckSize(param_4,iVar7);
          if (bVar6) {
            iVar7 = *(int *)(param_4 + 4) + *(int *)(param_4 + 8) * 0x18;
            util__Darray_struct_util__Vec2_double_____operator
                      ((Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar7 + -0x18),pDVar10);
            *(undefined8 *)(iVar7 + -8) = *(undefined8 *)(pDVar10 + 0x10);
          }
          local_68 = ((void *)(0x00919ac4u));
          if (local_64 != (void *)0x0) {
            operator_delete__(local_64);
          }
          local_64 = (void *)0x0;
          local_68 = ((void *)(0x00919488u));
          local_48 = ((void *)(0x00919ac4u));
          if (local_44 != (void *)0x0) {
            operator_delete__(local_44);
          }
          local_44 = (void *)0x0;
          local_48 = ((void *)(0x00919488u));
        }
        *param_2 = local_28;
        local_1c = ((void *)(0x00919ac4u));
        if (pvStack_18 != (void *)0x0) {
          operator_delete__(pvStack_18);
        }
        pvStack_18 = (void *)0x0;
        local_1c = ((void *)(0x00919488u));
      }
      else {
        fVar11 = (float10)(**(code **)(*(int *)pMVar1->ModuleType + 0xa4))();
        local_28 = (double)fVar11;
        if (0.0 < local_28) goto LAB_0053468d;
      }
      param_1 = local_50;
      local_c = local_c + 1;
      iVar7 = (**(code **)(*local_50 + 0xc))();
    } while (local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000540950 00540950_FUN_00540950 ====
extern undefined4 FUN_005397b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __thiscall FUN_00540950(undefined4 *param_1,ModulePlacer *param_2);

// decompiled by BatchDecomp @ 00540950 name=FUN_00540950 conv=unknown body=1073

void __thiscall FUN_00540950(undefined4 *param_1,ModulePlacer *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Range_L_double_G_ RVar8;
  int iVar9;
  bool bVar10;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar11;
  CraftSplinePoint *this;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar12;
  undefined4 *puVar13;
  Darray_L_struct_util__Vec2_L_double_G___G_ *unaff_EDI;
  int iVar14;
  float10 fVar15;
  undefined **local_a8;
  CraftSplinePoint *local_a4;
  undefined **local_98;
  void *local_94;
  Vec2_L_double_G_ local_90;
  Darray_L_struct_util__Vec2_L_double_G___G_ *local_80;
  Vec2_L_double_G_ *local_7c;
  Range_L_double_G_ local_78;
  double local_68;
  undefined **local_60;
  void *local_5c;
  undefined **local_50;
  void *local_4c;
  undefined **local_40;
  void *pvStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined **local_30;
  void *pvStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined **local_20;
  void *pvStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined1 local_10[4];
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_1;
  fVar15 = (float10)(**(code **)(*(int *)param_2->ModuleType + 0xa8))();
  local_68 = (double)fVar15;
  if (local_68 <= 0.0) {
    fVar15 = (float10)(**(code **)(*(int *)param_2->ModuleType + 0xa4))();
    local_68 = (double)fVar15;
    if (local_68 <= 0.0) goto LAB_00540d6e;
  }
  local_68 = Module__GetPackingRadius_m(param_2->ModuleType);
  CraftBlueprint__GetModuleLocationRange_m((CraftBlueprint *)*param_1,&local_78,param_2);
  ((slice_view *)&RVar8.Lower)->_4_4_ = ((slice_view *)&local_78.Lower)->_4_4_;
  ((slice_view *)&RVar8.Lower)->_0_4_ = ((slice_view *)&local_78.Lower)->_0_4_;
  ((slice_view *)&RVar8.Upper)->_0_4_ = ((slice_view *)&local_78.Upper)->_0_4_;
  ((slice_view *)&RVar8.Upper)->_4_4_ = ((slice_view *)&local_78.Upper)->_4_4_;
  GetSplineLoopsBeforeAndAfterRange((Darray_L_struct_CraftSplinePoint_G_ *)&local_60,RVar8);
  local_40 = (undefined **)0x0;
  pvStack_3c = (void *)0x0;
  uStack_38 = 0;
  uStack_34 = 0;
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_40,
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_60);
  local_30 = (undefined **)0x0;
  pvStack_2c = (void *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_30,
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_50);
  local_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_20,param_2->Multiplier);
  iVar14 = 0;
  if (0 < param_2->Multiplier) {
    do {
      local_7c = CraftBlueprint__GetCompartment2DOffset_m((CraftBlueprint *)*param_1,&local_90,param_2,iVar14);
      iVar9 = iStack_18;
      local_80 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(iStack_18 + 1);
      util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_20,(int *)&local_80);
      bVar10 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_20,iVar9);
      if (bVar10) {
        uVar5 = *(undefined4 *)((int)&local_7c->X + 4);
        uVar6 = *(undefined4 *)&local_7c->Y;
        uVar7 = *(undefined4 *)((int)&local_7c->Y + 4);
        puVar13 = (undefined4 *)((int)pvStack_1c + iStack_18 * 0x10 + -0x10);
        *puVar13 = *(undefined4 *)&local_7c->X;
        puVar13[1] = uVar5;
        puVar13[2] = uVar6;
        puVar13[3] = uVar7;
      }
      iVar14 = iVar14 + 1;
      param_1 = local_c;
    } while (iVar14 < param_2->Multiplier);
  }
  pDVar11 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)
            CraftSplinePoint__CraftSplinePoint((CraftSplinePoint *)&local_98,8,
                       (double)CONCAT44(((slice_view *)&local_78.Lower)->_0_4_,(int)((ulonglong)local_68 >> 0x20)),
                       (double)CONCAT44(&local_20,((slice_view *)&local_78.Lower)->_4_4_),
                       (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_40,unaff_EDI);
  pDVar3 = (Darray_L_struct_CraftSplinePoint_G_ *)param_1[1];
  iVar14 = *(int *)(pDVar3 + 8);
  local_7c = (Vec2_L_double_G_ *)(iVar14 + 1);
  util__Darray_struct_CraftSplinePoint___SetSize(pDVar3,(int *)&local_7c);
  bVar10 = util__Darray_struct_CraftSplinePoint___CheckSize(pDVar3,iVar14);
  if (bVar10) {
    iVar14 = *(int *)(pDVar3 + 4) + *(int *)(pDVar3 + 8) * 0x18;
    util__Darray_struct_util__Vec2_double_____operator
              ((Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar14 + -0x18),pDVar11);
    *(undefined8 *)(iVar14 + -8) = *(undefined8 *)(pDVar11 + 0x10);
  }
  local_98 = ((void *)(0x00919ac4u));
  if (local_94 != (void *)0x0) {
    operator_delete__(local_94);
  }
  local_80 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)
             CraftSplinePoint__CraftSplinePoint((CraftSplinePoint *)&local_98,8,
                        (double)CONCAT44(((slice_view *)&local_78.Upper)->_0_4_,(int)((ulonglong)local_68 >> 0x20)),
                        (double)CONCAT44(&local_20,((slice_view *)&local_78.Upper)->_4_4_),
                        (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_30,unaff_EDI);
  puVar13 = local_c;
  pDVar3 = (Darray_L_struct_CraftSplinePoint_G_ *)local_c[1];
  iVar14 = *(int *)(pDVar3 + 8);
  local_7c = (Vec2_L_double_G_ *)(iVar14 + 1);
  util__Darray_struct_CraftSplinePoint___SetSize(pDVar3,(int *)&local_7c);
  bVar10 = util__Darray_struct_CraftSplinePoint___CheckSize(pDVar3,iVar14);
  pDVar11 = local_80;
  if (bVar10) {
    iVar14 = *(int *)(pDVar3 + 4) + *(int *)(pDVar3 + 8) * 0x18;
    util__Darray_struct_util__Vec2_double_____operator
              ((Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar14 + -0x18),local_80);
    *(undefined8 *)(iVar14 + -8) = *(undefined8 *)(pDVar11 + 0x10);
  }
  local_98 = ((void *)(0x00919ac4u));
  if (local_94 != (void *)0x0) {
    operator_delete__(local_94);
  }
  piVar4 = (int *)puVar13[1];
  local_c = (undefined4 *)0x0;
  iVar14 = (**(code **)(*piVar4 + 0xc))();
  if ((int)local_c < iVar14) {
    do {
      pDVar11 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_c;
      this = (CraftSplinePoint *)(**(code **)*piVar4)();
      dVar2 = *(double *)(this + 0x10);
      if (((double)CONCAT44(((slice_view *)&local_78.Lower)->_4_4_,((slice_view *)&local_78.Lower)->_0_4_) <= dVar2 &&
           dVar2 != (double)CONCAT44(((slice_view *)&local_78.Lower)->_4_4_,((slice_view *)&local_78.Lower)->_0_4_)) &&
         (dVar2 < (double)CONCAT44(((slice_view *)&local_78.Upper)->_4_4_,((slice_view *)&local_78.Upper)->_0_4_))) {
        CraftSplinePoint__AddPoints(this,8,(double)CONCAT44(&local_20,(int)((ulonglong)local_68 >> 0x20)),pDVar11);
      }
      local_c = (undefined4 *)((int)local_c + 1);
      iVar14 = (**(code **)(*piVar4 + 0xc))();
    } while ((int)local_c < iVar14);
  }
  pDVar3 = (Darray_L_struct_CraftSplinePoint_G_ *)puVar13[1];
  local_10[0] = 0;
  pDVar12 = (Darray_L_struct_CraftSplinePoint_G_ *)FUN_005397b0(&local_a8,pDVar3,local_10);
  util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint((Darray_L_struct_CraftSplinePoint_G_ *)&local_90,pDVar12);
  local_a8 = ((void *)(0x00919b0cu));
  if (local_a4 != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor_(local_a4,3);
  }
  local_a4 = (CraftSplinePoint *)0x0;
  local_a8 = ((void *)(0x00919488u));
  util__Darray_struct_CraftSplinePoint___operator
            (pDVar3,(Darray_L_struct_CraftSplinePoint_G_ *)&local_90);
  ((slice_view *)&local_90.X)->_0_4_ = ((void *)(0x00919b0cu));
  if (((slice_view *)&local_90.X)->_4_4_ != 0) {
    iVar14 = *(int *)(((slice_view *)&local_90.X)->_4_4_ + -4);
    puVar13 = (undefined4 *)(((slice_view *)&local_90.X)->_4_4_ + iVar14 * 0x18);
    if (iVar14 != 0) {
      do {
        puVar1 = puVar13 + -6;
        iVar14 = iVar14 + -1;
        *puVar1 = ((void *)(0x00919ac4u));
        if ((void *)puVar13[-5] != (void *)0x0) {
          operator_delete__((void *)puVar13[-5]);
        }
        puVar13[-5] = 0;
        *puVar1 = ((void *)(0x00919488u));
        puVar13 = puVar1;
      } while (iVar14 != 0);
      iVar14 = *(int *)(((slice_view *)&local_90.X)->_4_4_ + -4);
    }
    operator_delete__((int *)(((slice_view *)&local_90.X)->_4_4_ + -4),iVar14 * 0x18 + 4);
  }
  local_20 = ((void *)(0x00919ac4u));
  if (pvStack_1c != (void *)0x0) {
    operator_delete__(pvStack_1c);
  }
  pvStack_1c = (void *)0x0;
  local_20 = ((void *)(0x00919488u));
  local_30 = ((void *)(0x00919ac4u));
  if (pvStack_2c != (void *)0x0) {
    operator_delete__(pvStack_2c);
  }
  pvStack_2c = (void *)0x0;
  local_30 = ((void *)(0x00919488u));
  local_40 = ((void *)(0x00919ac4u));
  if (pvStack_3c != (void *)0x0) {
    operator_delete__(pvStack_3c);
  }
  pvStack_3c = (void *)0x0;
  local_40 = ((void *)(0x00919488u));
  local_50 = ((void *)(0x00919ac4u));
  if (local_4c != (void *)0x0) {
    operator_delete__(local_4c);
  }
  local_4c = (void *)0x0;
  local_50 = ((void *)(0x00919488u));
  local_60 = ((void *)(0x00919ac4u));
  if (local_5c != (void *)0x0) {
    operator_delete__(local_5c);
  }
LAB_00540d6e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006f1c70 006f1c70_CreateNewBody ====
// decompiled by BatchDecomp @ 006f1c70 name=CreateNewBody conv=__thiscall body=866

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall LevelEditor__CreateNewBody(void) */

void __thiscall LevelEditor__CreateNewBody(LevelEditor *this)

{
  bool bVar1;
  GameManager *this_00;
  SimpleSerializationManager *this_01;
  CelestialBody *this_02;
  Reflectable *pRVar2;
  LocStr *this_03;
  Str_L_char_G_ *pSVar3;
  int *piVar4;
  HWND unaff_EDI;
  double dVar5;
  Str_L_char_G_ local_10c;
  undefined4 local_100;
  undefined **local_f8;
  Str_L_char_G_ local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined **local_b0;
  Str_L_char_G_ local_ac;
  int local_a0;
  undefined **local_98;
  Str_L_char_G_ local_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  void *local_48[3];
  void *local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  LevelEditor *local_18;
  Str_L_char_G_ local_14;
  WorldObject *local_8;
  
  local_18 = this;
  this_00 = (GameManager *)Manager__GetParent(unaff_EDI);
  this_01 = (SimpleSerializationManager *)GameManager__GetDataManager(this_00);
  this_02 = (CelestialBody *)operator_new(0x4b0);
  if (this_02 == (CelestialBody *)0x0) {
    pRVar2 = (Reflectable *)0x0;
  }
  else {
    pRVar2 = (Reflectable *)CelestialBody__CelestialBody(this_02);
  }
  util__Str_char___Str_char__o5(&local_30,"NewBody");
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  local_14.Length = 0;
  this_03 = (LocStr *)util__LocStr__LocStr((LocStr *)local_48,&local_30,&local_14);
  pSVar3 = util__LocStr__operator__o3(this_03);
  pSVar3 = util__SimpleSerializationManager__GenerateUniqueName(this_01,&local_24,pRVar2,pSVar3);
  util__Str_char___operator__o8(&pRVar2->Name,pSVar3);
  if (local_24.Data != (char *)0x0) {
    operator_delete__(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_3c != (void *)0x0) {
    operator_delete__(local_3c);
    local_3c = (void *)0x0;
  }
  if (local_48[0] != (void *)0x0) {
    operator_delete__(local_48[0]);
    local_48[0] = (void *)0x0;
  }
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    local_14.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    operator_delete__(local_30.Data);
  }
  (**(code **)(this_01->_pad_0x0_0 + 8))(pRVar2);
  (**(code **)(*(int *)pRVar2 + 0x40))();
  local_8 = (WorldObject *)(this + 0x80);
  bVar1 = WorldObject__IsLevelEditorBody(local_8);
  if (bVar1) {
    local_10c.Data = (char *)0x0;
    local_10c.Capacity = 0;
    local_10c.Length = 0;
    local_100 = 0;
    local_f4.Data = (char *)0x0;
    local_f4.Capacity = 0;
    local_f4.Length = 0;
    local_f8 = ((void *)(0x00936958u));
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    local_b0 = ((void *)(0x00919980u));
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_b8 = 0;
    util__Str_char___Str_char(&local_ac,&local_10c);
    local_b0 = ((void *)(0x00936bb8u));
    local_a0 = 0;
    local_98 = ((void *)(0x00919980u));
    util__Str_char___Str_char(&local_94,&local_f4);
    local_98 = ((void *)(0x00936958u));
    local_58 = 0;
    local_50 = 1;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
    util__Str_char___operator__o8((Str_L_char_G_ *)&pRVar2[9].Name.Length,&local_ac);
    pRVar2[10].Name.Capacity = local_a0;
    util__Str_char___operator__o8(&pRVar2[0xb].Name,&local_94);
    pRVar2[0xf]._pad_0x0_0 = 0;
    pRVar2[0xf].Name.Data = (char *)0x0;
    pRVar2[0xc]._pad_0x0_0 = 0;
    pRVar2[0xc].Name.Data = (char *)0x0;
    pRVar2[0xc].Name.Capacity = 0;
    pRVar2[0xc].Name.Length = 0;
    pRVar2[0xd]._pad_0x0_0 = 0;
    pRVar2[0xd].Name.Data = (char *)0x0;
    pRVar2[0xd].Name.Capacity = 0;
    pRVar2[0xd].Name.Length = 0;
    pRVar2[0xe]._pad_0x0_0 = 0;
    pRVar2[0xe].Name.Data = (char *)0x0;
    pRVar2[0xe].Name.Capacity = 0;
    pRVar2[0xe].Name.Length = 0;
    *(undefined1 *)&pRVar2[0xf].Name.Capacity = 1;
    if (local_94.Data != (char *)0x0) {
      operator_delete__(local_94.Data);
    }
    if (local_ac.Data != (char *)0x0) {
      operator_delete__(local_ac.Data);
    }
    piVar4 = (int *)WorldObject__AsLevelEditorBody(local_8);
    if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
      if (!bVar1) {
        *piVar4 = 0;
      }
    }
    local_8 = *(WorldObject **)(*piVar4 + 0x14);
    if ((char)pRVar2[0xf].Name.Capacity == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pRVar2[10].Name.Capacity = (int)local_8;
    if ((ReferenceController *)local_14.Length != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_14.Length);
    }
    if ((char)pRVar2[0xf].Name.Capacity == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      if ((char)pRVar2[0xf].Name.Capacity == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar5 = CelestialBody__GetRadius_km((CelestialBody *)pRVar2[10].Name.Capacity);
    *(double *)&pRVar2[0xc].Name.Capacity = dVar5 + dVar5;
    this = local_18;
  }
  util__SimpleSerializationManager__CorrectImport(this_01,pRVar2);
  AddChildBody(this,pRVar2);
  return;
}


//==== 00006f27d0 006f27d0_DeleteSelectedObject ====
// decompiled by BatchDecomp @ 006f27d0 name=DeleteSelectedObject conv=__thiscall body=774

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall LevelEditor__DeleteSelectedObject(void) */

void __thiscall LevelEditor__DeleteSelectedObject(LevelEditor *this)

{
  Reflectable *pRVar1;
  bool bVar2;
  int *piVar3;
  StartingFleet *pSVar4;
  undefined4 *puVar5;
  char *pcVar6;
  ActorHandler *this_00;
  Reflectable *pRVar7;
  int iVar8;
  ReferenceController *this_01;
  void *local_40;
  int local_30;
  ReferenceController *local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined **local_1c;
  int *piStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = WorldObject__IsValid((WorldObject *)(this + 0x80));
  if (bVar2) {
    this_01 = *(ReferenceController **)(this + 0x84);
    iVar8 = *(int *)(this + 0x80);
    local_2c = this_01;
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_01);
      bVar2 = util__ReferenceController__IsDataStillValid(this_01);
      if (!bVar2) {
        iVar8 = 0;
      }
    }
    if (*(int *)(iVar8 + 0x14) == 0) {
      if ((this_01 != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(this_01), !bVar2)) {
        iVar8 = 0;
      }
      DeleteFleet(this,*(StartingFleet **)(iVar8 + 0x18));
    }
    else {
      if ((this_01 != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(this_01), !bVar2)) {
        iVar8 = 0;
      }
      local_24 = *(undefined4 *)(iVar8 + 0x14);
      local_20 = &local_24;
      local_1c = (undefined **)0x0;
      piStack_18 = (int *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      piVar3 = (int *)ScenarioEditor__GetAllBodies(*(ScenarioEditor **)(this + 4));
      local_1c = (undefined **)0x0;
      piStack_18 = (int *)0x0;
      iStack_14 = 0;
      uStack_10 = 0;
      iVar8 = (**(code **)(*piVar3 + 0xc))();
      util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_1c,iVar8);
      local_c = 0;
      iVar8 = (**(code **)(*piVar3 + 0xc))();
      if (local_c < iVar8) {
        do {
          local_28 = (int *)(**(code **)*piVar3)(&local_c);
          if (((CelestialBody *)*local_28 == (CelestialBody *)*local_20) ||
             (bVar2 = CelestialBody__IsBodyAParent((CelestialBody *)*local_28,(CelestialBody *)*local_20), bVar2)) {
            iVar8 = iStack_14;
            local_30 = iStack_14 + 1;
            util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_30);
            bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar8);
            if (bVar2) {
              piStack_18[iStack_14 + -1] = *local_28;
            }
          }
          local_c = local_c + 1;
          iVar8 = (**(code **)(*piVar3 + 0xc))();
        } while (local_c < iVar8);
      }
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
      }
      local_c = 0;
LAB_006f2912:
      pRVar1 = *(Reflectable **)(*(int *)(this + 4) + 100);
      if (pRVar1 == (Reflectable *)0x0) {
        pRVar7 = (Reflectable *)0x0;
      }
      else {
        bVar2 = Reflectable__DeleteSelectedObject(pRVar1);
        pRVar7 = (Reflectable *)0x0;
        if (bVar2) {
          pRVar7 = pRVar1;
        }
      }
      iVar8 = (**(code **)(pRVar7[0x21]._pad_0x0_0 + 0xc))();
      if (local_c < iVar8) {
        pRVar1 = *(Reflectable **)(*(int *)(this + 4) + 100);
        if (pRVar1 == (Reflectable *)0x0) {
          pRVar7 = (Reflectable *)0x0;
        }
        else {
          bVar2 = Reflectable__DeleteSelectedObject(pRVar1);
          pRVar7 = (Reflectable *)0x0;
          if (bVar2) {
            pRVar7 = pRVar1;
          }
        }
        pSVar4 = (StartingFleet *)(**(code **)pRVar7[0x21]._pad_0x0_0)(&local_c);
        if (piStack_18 != piStack_18 + iStack_14) {
          piVar3 = piStack_18;
          do {
            if ((CelestialBody *)*piVar3 == pSVar4->StartingBody) {
              DeleteFleet(this,pSVar4);
              goto LAB_006f2912;
            }
            piVar3 = piVar3 + 1;
          } while (piVar3 != piStack_18 + iStack_14);
        }
        local_c = local_c + 1;
        goto LAB_006f2912;
      }
      local_c = 0;
      iVar8 = (*(code *)local_1c[3])();
      if (local_c < iVar8) {
        do {
          puVar5 = (undefined4 *)(*(code *)*local_1c)(&local_c);
          local_28 = (int *)*puVar5;
          pRVar1 = *(Reflectable **)(*(int *)(this + 4) + 100);
          if (pRVar1 == (Reflectable *)0x0) {
            pRVar7 = (Reflectable *)0x0;
          }
          else {
            bVar2 = Reflectable__DeleteSelectedObject(pRVar1);
            pRVar7 = (Reflectable *)0x0;
            if (bVar2) {
              pRVar7 = pRVar1;
            }
          }
          pcVar6 = pRVar7[0x20].Name.Data;
          bVar2 = false;
          if (pcVar6 != pcVar6 + pRVar7[0x20].Name.Capacity * 4) {
            do {
              if (bVar2) {
                *(undefined4 *)(pcVar6 + -4) = *(undefined4 *)pcVar6;
              }
              else if (*(int **)pcVar6 == local_28) {
                bVar2 = true;
              }
              iVar8 = pRVar7[0x20].Name.Capacity;
              pcVar6 = pcVar6 + 4;
            } while (pcVar6 != pRVar7[0x20].Name.Data + iVar8 * 4);
            if (bVar2) {
              local_28 = (int *)(iVar8 + -1);
              util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)(pRVar7 + 0x20),(int *)&local_28);
            }
          }
          local_c = local_c + 1;
          iVar8 = (*(code *)local_1c[3])();
        } while (local_c < iVar8);
      }
      SetMainBody(this);
      local_1c = ((void *)(0x009194a4u));
      this_01 = local_2c;
      if (piStack_18 != (int *)0x0) {
        operator_delete__(piStack_18);
        this_01 = local_2c;
      }
    }
    this_00 = (ActorHandler *)
              util__Darray_enum_CrewDepartment__Type___Num(*(Darray_L_enum_CrewDepartment__Type_G_ **)this);
    ActorHandler__ResetAllActors(this_00);
    SetupLevel(this);
    GenerateUI(this);
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this_01);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000712ec0 00712ec0_HasEqualCodirectionalLineOfApsides ====
// decompiled by BatchDecomp @ 00712ec0 name=HasEqualCodirectionalLineOfApsides conv=__thiscall body=899

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__HasEqualCodirectionalLineOfApsides(struct FixedOrbit const
   &)const  */

bool __thiscall FixedOrbit__HasEqualCodirectionalLineOfApsides(FixedOrbit *this,FixedOrbit *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  Maybe_L_double_G_ *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  Vec3_L_double_G_ local_b8[2];
  Vec3_L_double_G_ local_88;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  Vec3_L_double_G_ local_50;
  undefined1 local_38[16];
  double local_28;
  double local_20;
  double local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0.0;
  local_18 = util__Cos((double *)&local_10);
  dVar4 = (this->Elements).InclinationToRelativePlane_degrees;
  local_18 = util__HasEqualCodirectionalLineOfApsides((dVar4 + local_18) / (dVar4 * local_18 + /*3ff0000000000000*/1.0));
  dVar4 = local_18;
  if (/*400921fb54442d18*/3.141592653589793 < local_10) {
    dVar4 = /*401921fb54442d18*/6.283185307179586 - local_18;
  }
  GetStateFromEccentricAndTrueAnomaly
            (this,(double)ZEXT48(&local_50),(double)((longlong)dVar4 << 0x20));
  util__Vec3_double___SafeNormalized(&local_50,&local_88);
  local_18 = 0.0;
  local_10 = util__Cos(&local_18);
  dVar4 = (param_1->Elements).InclinationToRelativePlane_degrees;
  local_10 = util__HasEqualCodirectionalLineOfApsides((dVar4 + local_10) / (dVar4 * local_10 + /*3ff0000000000000*/1.0));
  dVar4 = local_10;
  if (/*400921fb54442d18*/3.141592653589793 < local_18) {
    dVar4 = /*401921fb54442d18*/6.283185307179586 - local_10;
  }
  GetStateFromEccentricAndTrueAnomaly
            (param_1,(double)ZEXT48(local_b8),(double)((longlong)dVar4 << 0x20));
  util__Vec3_double___SafeNormalized(local_b8,(Vec3_L_double_G_ *)local_38);
  dVar6 = local_88.Z * (double)((slice_view *)&local_38)->_0_8_ - local_28 * local_88.X;
  dVar5 = local_28 * local_88.Y - local_88.Z * (double)((slice_view *)&local_38)->_8_8_;
  dVar4 = (double)((slice_view *)&local_38)->_8_8_ * local_88.X - (double)((slice_view *)&local_38)->_0_8_ * local_88.Y;
  local_18 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
  pMVar3 = util__Sqrt((Maybe_L_double_G_ *)(local_38 + 8),&local_18);
  local_10 = (double)CONCAT44(pMVar3,(undefined4)local_10);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
    pMVar3 = ((slice_view *)&local_10)->_4_4_;
  }
  local_20 = pMVar3->Data;
  if (((param_1->Elements)._pad_0x0_0 != (this->Elements)._pad_0x0_0) ||
     ((param_1->OrbitedBody).Controller != (this->OrbitedBody).Controller)) goto LAB_0071322e;
  local_18 = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
  local_10 = util__Abs(&local_18);
  if (local_10 <= /*3f1a36e2eb1c432d*/0.0001) {
LAB_0071311d:
    bVar1 = IsEquatorial(param_1);
    if (!bVar1) goto LAB_0071312c;
  }
  else {
    local_10 = /*3f1a36e2eb1c432d*/0.0001;
    local_58 = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__Equals_double(&local_58,(double *)&DAT_00937db0,(double *)&local_10);
    if (bVar1) goto LAB_0071311d;
LAB_0071312c:
    local_10 = /*3f1a36e2eb1c432d*/0.0001;
    local_60 = (param_1->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    local_68 = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__Equals_double(&local_68,&local_60,(double *)&local_10);
    if (!bVar1) goto LAB_0071322e;
    local_10 = /*3f1a36e2eb1c432d*/0.0001;
    local_70 = (param_1->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    local_28 = (this->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__Equals_double(&local_28,&local_70,(double *)&local_10);
    if (!bVar1) goto LAB_0071322e;
  }
  local_28 = util__Abs(&(this->Elements).InclinationToRelativePlane_degrees);
  if (((local_28 <= /*3f1a36e2eb1c432d*/0.0001) ||
      (local_28 = util__Abs(&(param_1->Elements).InclinationToRelativePlane_degrees),
      local_28 <= /*3f1a36e2eb1c432d*/0.0001)) ||
     (local_20 = util__Abs(&local_20), local_20 <= /*3f50624dd2f1a9fc*/0.001)) {
    uVar2 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar2;
  }
LAB_0071322e:
  uVar2 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 000072cdb0 0072cdb0_FUN_0072cdb0 ====
void __thiscall FUN_0072cdb0(undefined4 *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 0072cdb0 name=FUN_0072cdb0 conv=unknown body=1925

void __thiscall FUN_0072cdb0(undefined4 *param_1,undefined4 *param_2)

{
  double dVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  char *pcVar4;
  LocStr *pLVar5;
  Str_L_char_G_ *pSVar6;
  uint uVar7;
  int unaff_EDI;
  double dVar8;
  void *local_148[3];
  void *local_13c;
  void *local_130[3];
  void *local_124;
  Str_L_char_G_ local_118;
  Str_L_char_G_ local_10c;
  void *local_100[3];
  Str_L_char_G_ local_f4;
  Str_L_char_G_ local_e8;
  Str_L_char_G_ local_dc;
  Str_L_char_G_ local_d0;
  Str_L_char_G_ local_c4;
  Str_L_char_G_ local_b8;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  Str_L_char_G_ local_94;
  uint local_88;
  undefined4 *local_84;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_88 = 0;
  local_84 = param_1;
  if ((*(char *)*param_1 == '\0') || (dVar1 = *(double *)(param_2 + 4), dVar1 <= 0.0)) {
    pSVar2 = &local_74;
    local_74.Data = (char *)0x0;
    local_74.Capacity = 0;
    local_74.Length = 0;
    uVar7 = 0x40;
  }
  else {
    dVar8 = dVar1 - *(double *)(param_2 + 2);
    if (NAN(dVar8) == (dVar8 == 0.0)) {
      pSVar2 = PrintSigFigures(&local_20,(double)CONCAT44(2,(int)((ulonglong)dVar1 >> 0x20)),
                               unaff_EDI);
      if (pSVar2->Capacity < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pSVar2->Data;
      }
      pSVar2 = PrintSigFigures(&local_2c,
                               (double)CONCAT44(2,(int)((ulonglong)*(undefined8 *)(param_2 + 2) >>
                                                       0x20)),unaff_EDI);
      if (pSVar2->Capacity < 1) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pSVar2->Data;
      }
      pSVar2 = util__Printf(&local_94," (%s-%s km/s)",pcVar3,pcVar4);
      uVar7 = 0x3c;
      pSVar2 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_80,pSVar2);
    }
    else {
      pSVar2 = PrintSigFigures(&local_5c,
                               (double)CONCAT44(2,(int)((ulonglong)*(double *)(param_2 + 2) >> 0x20)
                                               ),unaff_EDI);
      if (pSVar2->Capacity < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = pSVar2->Data;
      }
      pSVar2 = util__Printf(&local_14," (%s km/s)",pcVar4);
      uVar7 = 0x23;
      pSVar2 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_80,pSVar2);
    }
  }
  pcVar4 = local_74.Data;
  util__Str_char___Str_char(&local_68,pSVar2);
  if (((uVar7 & 0x40) != 0) && (uVar7 = uVar7 & 0xffffffbf, pcVar4 != (char *)0x0)) {
    operator_delete__(pcVar4);
  }
  if ((uVar7 & 0x20) != 0) {
    uVar7 = uVar7 & 0xffffffdf;
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
      local_80.Data = (char *)0x0;
    }
  }
  if ((uVar7 & 0x10) != 0) {
    uVar7 = uVar7 & 0xffffffef;
    if (local_94.Data != (char *)0x0) {
      operator_delete__(local_94.Data);
      local_94.Data = (char *)0x0;
    }
  }
  if ((uVar7 & 8) != 0) {
    uVar7 = uVar7 & 0xfffffff7;
    if (local_2c.Data != (char *)0x0) {
      operator_delete__(local_2c.Data);
      ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
    }
  }
  if ((uVar7 & 4) != 0) {
    uVar7 = uVar7 & 0xfffffffb;
    if (local_20.Data != (char *)0x0) {
      operator_delete__(local_20.Data);
      ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
    }
  }
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    if (local_14.Data != (char *)0x0) {
      operator_delete__(local_14.Data);
      ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
    }
  }
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffe;
    if (local_5c.Data != (char *)0x0) {
      operator_delete__(local_5c.Data);
    }
  }
  if ((*(char *)*local_84 == '\0') || (*(double *)(param_2 + 6) <= 0.0)) {
    pSVar2 = &local_74;
    local_74.Data = (char *)0x0;
    local_88 = 0x200;
    local_74.Capacity = 0;
    local_74.Length = 0;
  }
  else {
    pSVar2 = PrintAcceleration(&local_a0,
                               (double)CONCAT44(unaff_EDI,
                                                (int)((ulonglong)*(double *)(param_2 + 6) >> 0x20)))
    ;
    if (pSVar2->Capacity < 1) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pSVar2->Data;
    }
    pSVar2 = util__Printf(&local_80," (%s)",pcVar4);
    local_88 = 0x180;
  }
  pcVar4 = local_74.Data;
  local_88 = local_88 | uVar7;
  util__Str_char___Str_char(&local_5c,pSVar2);
  uVar7 = local_88;
  if (((local_88 & 0x200) != 0) && (uVar7 = local_88 & 0xfffffdff, pcVar4 != (char *)0x0)) {
    operator_delete__(pcVar4);
  }
  if ((uVar7 & 0x100) != 0) {
    uVar7 = uVar7 & 0xfffffeff;
    if (local_80.Data != (char *)0x0) {
      operator_delete__(local_80.Data);
      local_80.Data = (char *)0x0;
    }
  }
  if ((local_a0.Data != (char *)0x0) && ((char)uVar7 < '\0')) {
    operator_delete__(local_a0.Data);
  }
  util__Str_char___Str_char__o5(&local_a0,"Space");
  pSVar2 = util__Printf(&local_118,"%i",param_2[1]);
  if (pSVar2->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar2->Data;
  }
  util__Str_char___Str_char__o5(&local_10c,pcVar4);
  util__Str_char___Str_char__o5(&local_80,"Space");
  local_74.Data = (char *)0x0;
  local_74.Capacity = 0;
  local_74.Length = 0;
  local_94.Data = (char *)0x0;
  local_94.Capacity = 0;
  local_94.Length = 0;
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_130,&local_80,&local_94);
  pSVar2 = util__LocStr__operator__o3(pLVar5);
  pSVar6 = (Str_L_char_G_ *)util__Str_char___Str_char__o5(&local_f4,"\n");
  local_38.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  util__Str_char___Str_char(&local_38,pSVar6);
  util__Str_char___operator__o10(&local_38,pSVar2);
  util__Str_char___Str_char(&local_e8,&local_38);
  if (local_38.Data != (char *)0x0) {
    operator_delete__(local_38.Data);
    ((slice_view *)&local_38)->_0_8_ = ((slice_view *)&local_38)->_0_8_ & 0xffffffff00000000;
  }
  local_44.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  util__Str_char___Str_char(&local_44,&local_e8);
  util__Str_char___operator__o10(&local_44,&local_10c);
  util__Str_char___Str_char(&local_dc,&local_44);
  if (local_44.Data != (char *)0x0) {
    operator_delete__(local_44.Data);
    ((slice_view *)&local_44)->_0_8_ = ((slice_view *)&local_44)->_0_8_ & 0xffffffff00000000;
  }
  pLVar5 = (LocStr *)util__LocStr__LocStr((LocStr *)local_148,&local_a0,&local_74);
  pSVar2 = util__LocStr__operator__o3(pLVar5);
  local_50.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  util__Str_char___Str_char(&local_50,&local_dc);
  util__Str_char___operator__o10(&local_50,pSVar2);
  util__Str_char___Str_char(&local_d0,&local_50);
  if (local_50.Data != (char *)0x0) {
    operator_delete__(local_50.Data);
    ((slice_view *)&local_50)->_0_8_ = ((slice_view *)&local_50)->_0_8_ & 0xffffffff00000000;
  }
  pSVar2 = (Str_L_char_G_ *)(**(code **)(*(int *)*param_2 + 0x48))(local_100);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,&local_d0);
  util__Str_char___operator__o10(&local_14,pSVar2);
  util__Str_char___Str_char(&local_c4,&local_14);
  if (local_14.Data != (char *)0x0) {
    operator_delete__(local_14.Data);
    ((slice_view *)&local_14)->_0_8_ = ((slice_view *)&local_14)->_0_8_ & 0xffffffff00000000;
  }
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_c4);
  util__Str_char___operator__o10(&local_20,&local_68);
  util__Str_char___Str_char(&local_b8,&local_20);
  if (local_20.Data != (char *)0x0) {
    operator_delete__(local_20.Data);
    ((slice_view *)&local_20)->_0_8_ = ((slice_view *)&local_20)->_0_8_ & 0xffffffff00000000;
  }
  local_2c.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  util__Str_char___Str_char(&local_2c,&local_b8);
  util__Str_char___operator__o10(&local_2c,&local_5c);
  util__Str_char___Str_char(&local_ac,&local_2c);
  if (local_2c.Data != (char *)0x0) {
    operator_delete__(local_2c.Data);
    ((slice_view *)&local_2c)->_0_8_ = ((slice_view *)&local_2c)->_0_8_ & 0xffffffff00000000;
  }
  util__Str_char___operator__o10((Str_L_char_G_ *)local_84[1],&local_ac);
  if (local_ac.Data != (char *)0x0) {
    operator_delete__(local_ac.Data);
  }
  if (local_b8.Data != (char *)0x0) {
    operator_delete__(local_b8.Data);
  }
  if (local_c4.Data != (char *)0x0) {
    operator_delete__(local_c4.Data);
  }
  if (local_d0.Data != (char *)0x0) {
    operator_delete__(local_d0.Data);
  }
  if (local_dc.Data != (char *)0x0) {
    operator_delete__(local_dc.Data);
  }
  if (local_e8.Data != (char *)0x0) {
    operator_delete__(local_e8.Data);
  }
  if (local_f4.Data != (char *)0x0) {
    operator_delete__(local_f4.Data);
    local_f4.Data = (char *)0x0;
  }
  if (local_124 != (void *)0x0) {
    operator_delete__(local_124);
    local_124 = (void *)0x0;
  }
  if (local_130[0] != (void *)0x0) {
    operator_delete__(local_130[0]);
    local_130[0] = (void *)0x0;
  }
  if (local_94.Data != (char *)0x0) {
    operator_delete__(local_94.Data);
    local_94.Data = (char *)0x0;
  }
  if (local_13c != (void *)0x0) {
    operator_delete__(local_13c);
    local_13c = (void *)0x0;
  }
  if (local_148[0] != (void *)0x0) {
    operator_delete__(local_148[0]);
    local_148[0] = (void *)0x0;
  }
  if (local_74.Data != (char *)0x0) {
    operator_delete__(local_74.Data);
    local_74.Data = (char *)0x0;
  }
  if (local_100[0] != (void *)0x0) {
    operator_delete__(local_100[0]);
    local_100[0] = (void *)0x0;
  }
  if (local_80.Data != (char *)0x0) {
    operator_delete__(local_80.Data);
    local_80.Data = (char *)0x0;
  }
  if (local_10c.Data != (char *)0x0) {
    operator_delete__(local_10c.Data);
  }
  if (local_118.Data != (char *)0x0) {
    operator_delete__(local_118.Data);
    local_118.Data = (char *)0x0;
  }
  if (local_a0.Data != (char *)0x0) {
    operator_delete__(local_a0.Data);
  }
  if (local_5c.Data != (char *)0x0) {
    operator_delete__(local_5c.Data);
  }
  if (local_68.Data != (char *)0x0) {
    operator_delete__(local_68.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000736060 00736060_FUN_00736060 ====
void FUN_00736060(int *param_1,Itinerary *param_2,undefined4 param_3,undefined4 *param_4, undefined4 *param_5);

// decompiled by BatchDecomp @ 00736060 name=FUN_00736060 conv=unknown body=738

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00736060(int *param_1,Itinerary *param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  double dVar1;
  Fleet *pFVar2;
  ReferenceController *pRVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  Faction *pFVar7;
  Faction *pFVar8;
  uint uVar9;
  ReferenceController *pRVar10;
  Fleet *local_48;
  ReferenceController *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *local_30;
  ReferenceController *local_2c;
  ReferenceController *local_28;
  ReferenceController *local_24;
  Fleet *local_20;
  uint local_1c;
  Fleet *local_18;
  Fleet *local_14;
  char local_e;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  local_1c = 0;
  local_c = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  uVar9 = 0;
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar4)) {
        *piVar6 = 0;
      }
      pFVar7 = Fleet__GetAlliance((Fleet *)*piVar6);
      if (pFVar7 == (Faction *)0x0) {
LAB_007360f0:
        bVar4 = false;
      }
      else {
        local_1c = uVar9 | 1;
        pFVar2 = (param_2->ParentFleet).Pointer;
        local_24 = (param_2->ParentFleet).Controller;
        if (local_24 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(local_24);
        }
        if ((local_24 == (ReferenceController *)piVar6[1]) && (pFVar2 == (Fleet *)*piVar6))
        goto LAB_007360f0;
        bVar4 = true;
      }
      if (((local_1c & 1) != 0) &&
         (local_1c = local_1c & 0xfffffffe, local_24 != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(local_24);
      }
      if (bVar4) {
        iVar5 = *piVar6;
        pRVar10 = (ReferenceController *)piVar6[1];
        if (pRVar10 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar10);
        }
        Itinerary__GetFleetDistanceAndParam_km(param_2,&local_48,param_3,*param_4,param_4[1],param_4[2],param_4[3],param_4[4],
                   param_4[5],param_4[6],param_4[7],param_4[8],param_4[9],param_4[10],param_4[0xb],
                   iVar5,pRVar10);
        pRVar10 = local_44;
        if (*(char *)(param_5 + 6) == '\0') {
LAB_007362c7:
          if (pRVar10 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar10);
          }
          pRVar3 = (ReferenceController *)param_5[1];
          *param_5 = local_48;
          param_5[1] = pRVar10;
          if (pRVar10 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar10);
          }
          if (pRVar3 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar3);
          }
          param_5[2] = local_40;
          param_5[3] = uStack_3c;
          param_5[4] = uStack_38;
          param_5[5] = uStack_34;
          *(undefined1 *)(param_5 + 6) = 1;
          if (pRVar10 == (ReferenceController *)0x0) goto LAB_00736318;
          util__ReferenceController__ReleaseWeakReference(pRVar10);
        }
        else {
          local_20 = local_48;
          if (local_44 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(local_44);
          }
          if (*(char *)(param_5 + 6) == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          local_28 = (ReferenceController *)param_5[1];
          local_18 = (Fleet *)*param_5;
          if (local_28 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(local_28);
          }
          dVar1 = *(double *)(param_5 + 2);
          if ((local_28 != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid(local_28), !bVar4)) {
            local_18 = (Fleet *)0x0;
          }
          pRVar3 = (param_2->ParentFleet).Controller;
          local_14 = (param_2->ParentFleet).Pointer;
          local_2c = pRVar3;
          if (pRVar3 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar3);
            bVar4 = util__ReferenceController__IsDataStillValid(pRVar3);
            if (!bVar4) {
              local_14 = (Fleet *)0x0;
            }
          }
          pFVar7 = Fleet__GetAlliance(local_18);
          pFVar8 = Fleet__GetAlliance(local_14);
          local_e = pFVar7 != pFVar8;
          if (local_2c != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_2c);
          }
          if ((pRVar10 != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid(pRVar10), !bVar4)) {
            local_20 = (Fleet *)0x0;
          }
          pRVar3 = (param_2->ParentFleet).Controller;
          local_14 = (param_2->ParentFleet).Pointer;
          if (pRVar3 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar3);
            bVar4 = util__ReferenceController__IsDataStillValid(pRVar3);
            if (!bVar4) {
              local_14 = (Fleet *)0x0;
            }
          }
          pFVar7 = Fleet__GetAlliance(local_20);
          pFVar8 = Fleet__GetAlliance(local_14);
          local_d = pFVar7 != pFVar8;
          if (pRVar3 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar3);
          }
          if (local_e == local_d) {
            local_d = (double)CONCAT44(uStack_3c,local_40) <= dVar1 &&
                      dVar1 != (double)CONCAT44(uStack_3c,local_40);
          }
          if (local_28 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_28);
          }
          if (pRVar10 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar10);
          }
          if (local_d != '\0') goto LAB_007362c7;
        }
        if (pRVar10 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar10);
        }
      }
LAB_00736318:
      param_1 = local_30;
      local_c = local_c + 1;
      iVar5 = (**(code **)(*local_30 + 0xc))();
      uVar9 = local_1c;
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007373b0 007373b0_FUN_007373b0 ====
void __thiscall FUN_007373b0(int *param_1,undefined8 *param_2,int *param_3);

// decompiled by BatchDecomp @ 007373b0 name=FUN_007373b0 conv=unknown body=750

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_007373b0(int *param_1,undefined8 *param_2,int *param_3)

{
  ReferenceController *pRVar1;
  double *pdVar2;
  Line3_L_double_G_ LVar3;
  int *piVar4;
  bool bVar5;
  Faction *pFVar6;
  Faction *pFVar7;
  Maybe_L_double_G_ *pMVar8;
  int iVar9;
  ReferenceController *pRVar10;
  Fleet *pFVar11;
  WeakPtr_L_class_CelestialObject_G_ *unaff_EDI;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Maybe_L_double_G_ local_6c;
  double local_5c;
  undefined8 local_54;
  undefined8 *local_4c;
  int *local_48;
  undefined8 local_44;
  char local_39;
  Line3_L_double_G_ local_38;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_4c = param_2;
  pRVar10 = (ReferenceController *)((int *)*param_1)[1];
  iVar9 = *(int *)*param_1;
  local_44 = (double)CONCAT44(iVar9,(undefined4)local_44);
  local_54 = (double)CONCAT44(pRVar10,(undefined4)local_54);
  local_48 = param_1;
  if (pRVar10 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar10);
    iVar9 = (int)((slice_view *)&local_44)->_4_4_;
  }
  pRVar1 = (ReferenceController *)param_3[1];
  if ((pRVar10 == pRVar1) && (iVar9 == *param_3)) {
LAB_00737477:
    bVar5 = false;
    pRVar10 = (ReferenceController *)((slice_view *)&local_44)->_4_4_;
  }
  else {
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar5) {
        *param_3 = 0;
      }
    }
    pFVar6 = Fleet__GetAlliance((Fleet *)*param_3);
    if (pFVar6 == (Faction *)0x0) goto LAB_00737477;
    if ((ReferenceController *)param_3[1] != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_3[1]);
      if (!bVar5) {
        *param_3 = 0;
      }
    }
    local_44 = (double)CONCAT44(*param_3,(undefined4)local_44);
    pRVar10 = (ReferenceController *)((undefined4 *)*param_1)[1];
    pFVar11 = *(Fleet **)*param_1;
    if (pRVar10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar10);
      bVar5 = util__ReferenceController__IsDataStillValid(pRVar10);
      if (!bVar5) {
        pFVar11 = (Fleet *)0x0;
      }
    }
    pFVar6 = Fleet__GetAlliance(pFVar11);
    pFVar7 = Fleet__GetAlliance(((slice_view *)&local_44)->_4_4_);
    bVar5 = true;
    if (pFVar7 != pFVar6) {
      local_39 = '\x01';
      goto LAB_00737483;
    }
  }
  local_39 = '\0';
LAB_00737483:
  if ((pRVar10 != (ReferenceController *)0x0) && (bVar5)) {
    util__ReferenceController__ReleaseWeakReference(pRVar10);
  }
  if (((slice_view *)&local_54)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_54)->_4_4_);
  }
  if (local_39 == '\0') {
    uVar15 = 0;
    uVar16 = 0;
    *(undefined1 *)(local_4c + 1) = 0;
  }
  else {
    iVar9 = *param_3;
    uVar16 = 0;
    uVar15 = 1;
    pRVar10 = (ReferenceController *)param_3[1];
    if (pRVar10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar10);
    }
    pRVar1 = (ReferenceController *)((undefined4 *)*local_48)[1];
    pFVar11 = *(Fleet **)*local_48;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar5) {
          pFVar11 = (Fleet *)0x0;
        }
      }
    }
    local_5c = Fleet__GetCombatDistance_km(pFVar11,iVar9,pRVar10,uVar15,uVar16);
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
    }
    if ((ReferenceController *)param_3[1] != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_3[1]);
      if (!bVar5) {
        *param_3 = 0;
      }
    }
    piVar4 = local_48;
    Fleet__GetRelativeSweepLine((Fleet *)*param_3,&local_38,
               (double)CONCAT44((int)*(undefined8 *)local_48[2],
                                (int)((ulonglong)*(undefined8 *)local_48[1] >> 0x20)),
               (double)CONCAT44(local_48[3],(int)((ulonglong)*(undefined8 *)local_48[2] >> 0x20)),
               unaff_EDI);
    ((slice_view *)&LVar3.A.X)->_4_4_ = ((slice_view *)&local_38.A.X)->_4_4_;
    ((slice_view *)&LVar3.A.X)->_0_4_ = ((slice_view *)&local_38.A.X)->_0_4_;
    ((slice_view *)&LVar3.A.Y)->_0_4_ = ((slice_view *)&local_38.A.Y)->_0_4_;
    ((slice_view *)&LVar3.A.Y)->_4_4_ = ((slice_view *)&local_38.A.Y)->_4_4_;
    ((slice_view *)&LVar3.A.Z)->_0_4_ = ((slice_view *)&local_38.A.Z)->_0_4_;
    ((slice_view *)&LVar3.A.Z)->_4_4_ = ((slice_view *)&local_38.A.Z)->_4_4_;
    ((slice_view *)&LVar3.B.X)->_0_4_ = ((slice_view *)&local_38.B.X)->_0_4_;
    ((slice_view *)&LVar3.B.X)->_4_4_ = ((slice_view *)&local_38.B.X)->_4_4_;
    ((slice_view *)&LVar3.B.Y)->_0_4_ = ((slice_view *)&local_38.B.Y)->_0_4_;
    ((slice_view *)&LVar3.B.Y)->_4_4_ = ((slice_view *)&local_38.B.Y)->_4_4_;
    ((slice_view *)&LVar3.B.Z)->_0_4_ = ((slice_view *)&local_38.B.Z)->_0_4_;
    ((slice_view *)&LVar3.B.Z)->_4_4_ = ((slice_view *)&local_38.B.Z)->_4_4_;
    local_54 = util__FUN_007373b0(*(Line3_L_double_G_ *)piVar4[4],LVar3);
    pdVar2 = (double *)piVar4[4];
    dVar14 = ((pdVar2[4] - pdVar2[1]) * local_54 + pdVar2[1]) -
             (((double)CONCAT44(((slice_view *)&local_38.B.Y)->_4_4_,((slice_view *)&local_38.B.Y)->_0_4_) -
              (double)CONCAT44(((slice_view *)&local_38.A.Y)->_4_4_,((slice_view *)&local_38.A.Y)->_0_4_)) * local_54 +
             (double)CONCAT44(((slice_view *)&local_38.A.Y)->_4_4_,((slice_view *)&local_38.A.Y)->_0_4_));
    dVar13 = ((pdVar2[3] - *pdVar2) * local_54 + *pdVar2) -
             (((double)CONCAT44(((slice_view *)&local_38.B.X)->_4_4_,((slice_view *)&local_38.B.X)->_0_4_) -
              (double)CONCAT44(((slice_view *)&local_38.A.X)->_4_4_,((slice_view *)&local_38.A.X)->_0_4_)) * local_54 +
             (double)CONCAT44(((slice_view *)&local_38.A.X)->_4_4_,((slice_view *)&local_38.A.X)->_0_4_));
    dVar12 = ((pdVar2[5] - pdVar2[2]) * local_54 + pdVar2[2]) -
             (((double)CONCAT44(((slice_view *)&local_38.B.Z)->_4_4_,((slice_view *)&local_38.B.Z)->_0_4_) -
              (double)CONCAT44(((slice_view *)&local_38.A.Z)->_4_4_,((slice_view *)&local_38.A.Z)->_0_4_)) * local_54 +
             (double)CONCAT44(((slice_view *)&local_38.A.Z)->_4_4_,((slice_view *)&local_38.A.Z)->_0_4_));
    local_44 = dVar13 * dVar13 + dVar14 * dVar14 + dVar12 * dVar12;
    pMVar8 = util__Sqrt(&local_6c,(double *)&local_44);
    if (pMVar8->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (local_5c < pMVar8->Data) {
      uVar15 = 0;
      uVar16 = 0;
      *(undefined1 *)(local_4c + 1) = 0;
    }
    else {
      uVar15 = *(undefined4 *)&local_54;
      uVar16 = *(undefined4 *)((char *)&local_54 + 4);
      *(undefined1 *)(local_4c + 1) = 1;
    }
  }
  *local_4c = CONCAT44(uVar16,uVar15);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007376a0 007376a0_FUN_007376a0 ====
void __thiscall FUN_007376a0(int *param_1,undefined4 *param_2,ItineraryNode *param_3);

// decompiled by BatchDecomp @ 007376a0 name=FUN_007376a0 conv=unknown body=736

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_007376a0(int *param_1,undefined4 *param_2,ItineraryNode *param_3)

{
  undefined4 *puVar1;
  Fleet *this;
  int *piVar2;
  bool bVar3;
  AstrogateResult *pAVar4;
  double dVar5;
  undefined4 uVar6;
  ReferenceController *pRVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ReferenceController *this_00;
  undefined1 local_94[48];
  undefined1 local_64[32];
  undefined1 local_44[32];
  double local_24;
  double local_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  local_1c = Itinerary__GetTimeStep_s((Itinerary *)*param_1,param_3);
  puVar1 = (undefined4 *)*param_1;
  if ((ReferenceController *)puVar1[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar1[1]);
    if (!bVar3) {
      *puVar1 = 0;
    }
  }
  local_24 = Fleet__GetInterceptTimeMultiplier((Fleet *)*puVar1);
  puVar1 = (undefined4 *)*param_1;
  uStack_c = *(double *)param_1[1] - param_3->TimeSinceJ2000_s;
  local_24 = local_24 * uStack_c;
  if ((ReferenceController *)puVar1[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar1[1]);
    if (!bVar3) {
      *puVar1 = 0;
    }
  }
  this = (Fleet *)*puVar1;
  Fleet__GetRemainingDeltaV_km__s_Memoize(this);
  if ((this->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar5 = Itinerary__GetDeltaVCostUpToNode_km__s((Itinerary *)*param_1,param_3);
  puVar1 = (undefined4 *)param_1[4];
  dVar5 = ((this->GetRemainingDeltaV_km__s_MemoizedValue).Data - dVar5) - *(double *)param_1[2];
  uStack_c = 0.0;
  if (0.0 <= dVar5) {
    uStack_c = dVar5;
  }
  if (*(char *)param_1[3] == '\0') {
    uVar6 = *puVar1;
    pRVar7 = (ReferenceController *)puVar1[1];
    dVar5 = local_24;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    uVar8 = *(undefined4 *)*param_1;
    this_00 = (ReferenceController *)((undefined4 *)*param_1)[1];
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    piVar2 = (int *)*param_1;
    if ((ReferenceController *)piVar2[1] != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar2[1]);
      if (!bVar3) {
        *piVar2 = 0;
      }
    }
    pAVar4 = Astrogation__InterceptFleet_km__s(local_64,*(undefined4 *)(*piVar2 + 0x74),param_3->TimeSinceJ2000_s,local_1c,
                        *(undefined4 *)&(param_3->State).Position.X,
                        *(undefined4 *)((int)&(param_3->State).Position.X + 4),
                        *(undefined4 *)&(param_3->State).Position.Y,
                        *(undefined4 *)((int)&(param_3->State).Position.Y + 4),
                        *(undefined4 *)&(param_3->State).Position.Z,
                        *(undefined4 *)((int)&(param_3->State).Position.Z + 4),
                        *(undefined4 *)&(param_3->State).Velocity.X,
                        *(undefined4 *)((int)&(param_3->State).Velocity.X + 4),
                        *(undefined4 *)&(param_3->State).Velocity.Y,
                        *(undefined4 *)((int)&(param_3->State).Velocity.Y + 4),
                        *(undefined4 *)&(param_3->State).Velocity.Z,
                        *(undefined4 *)((int)&(param_3->State).Velocity.Z + 4),uVar8,this_00,uVar6,
                        pRVar7,dVar5);
  }
  else {
    if ((ReferenceController *)puVar1[1] != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar1[1]);
      if (!bVar3) {
        *puVar1 = 0;
      }
    }
    Fleet__GetStateAt((Fleet *)*puVar1,(double)CONCAT44(SUB84(param_3->TimeSinceJ2000_s,0),local_94)
                     );
    uVar8 = *(undefined4 *)&(param_3->State).Position.X;
    uVar9 = *(undefined4 *)((int)&(param_3->State).Position.X + 4);
    uVar10 = *(undefined4 *)&(param_3->State).Position.Y;
    uVar11 = *(undefined4 *)((int)&(param_3->State).Position.Y + 4);
    uVar6 = *(undefined4 *)*param_1;
    pRVar7 = (ReferenceController *)((undefined4 *)*param_1)[1];
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    piVar2 = (int *)*param_1;
    if ((ReferenceController *)piVar2[1] != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar2[1]);
      if (!bVar3) {
        *piVar2 = 0;
      }
    }
    pAVar4 = Astrogation__Strafe_km__s(local_44,*(undefined4 *)(*piVar2 + 0x74),param_3->TimeSinceJ2000_s,local_1c,
                        uVar6,pRVar7,uVar8,uVar9,uVar10,uVar11);
  }
  local_14 = *(undefined4 *)&(pAVar4->DeltaV_km__s).X;
  uStack_10 = *(undefined4 *)((int)&(pAVar4->DeltaV_km__s).X + 4);
  uStack_c = (pAVar4->DeltaV_km__s).Y;
  local_24 = (pAVar4->DeltaV_km__s).Z;
  if (*(ReferenceController **)(param_1[4] + 4) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(*(ReferenceController **)(param_1[4] + 4));
  }
  uVar6 = *(undefined4 *)*param_1;
  pRVar7 = (ReferenceController *)((undefined4 *)*param_1)[1];
  if (pRVar7 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar7);
  }
  param_1 = (int *)*param_1;
  if ((ReferenceController *)param_1[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_1[1]);
    if (!bVar3) {
      *param_1 = 0;
    }
  }
  bVar3 = Astrogation__IsOnTopOfTargetFleet(*(undefined4 *)(*param_1 + 0x74),param_3->TimeSinceJ2000_s,SUB84(local_1c,0),
                     (int)((ulonglong)local_1c >> 0x20),uVar6,pRVar7);
  *param_2 = local_14;
  param_2[1] = uStack_10;
  param_2[2] = (undefined4)uStack_c;
  param_2[3] = ((slice_view *)&uStack_c)->_4_4_;
  *(double *)(param_2 + 4) = local_24;
  *(bool *)(param_2 + 6) = bVar3;
  return;
}


//==== 0000751c30 00751c30_IsCurrentlyPhasing ====
// decompiled by BatchDecomp @ 00751c30 name=IsCurrentlyPhasing conv=__thiscall body=1302

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall OrbitalInterception__IsCurrentlyPhasing(void)const  */

bool __thiscall OrbitalInterception__IsCurrentlyPhasing(OrbitalInterception *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  Maybe_L_double_G_ MVar3;
  Maybe_L_double_G_ MVar4;
  Maybe_L_double_G_ MVar5;
  Maybe_L_double_G_ MVar6;
  Maybe_L_double_G_ MVar7;
  Maybe_L_double_G_ MVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  Maybe_L_double_G_ *pMVar13;
  undefined4 unaff_EDI;
  double dVar14;
  uint in_stack_fffffda8;
  uint uVar15;
  undefined4 in_stack_fffffdac;
  undefined4 uVar16;
  undefined4 uVar17;
  void *pvVar18;
  undefined1 local_244[28];
  void *local_228;
  undefined **local_1e4;
  void *local_1e0;
  undefined1 local_15c[28];
  void *local_140;
  undefined **local_fc;
  void *local_f8;
  double local_74;
  double local_6c;
  double local_64;
  undefined1 local_5c[16];
  double local_4c;
  double local_44;
  char local_39;
  Vec3_L_double_G_ local_38;
  Vec3_L_double_G_ local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar17 = 0;
  uVar15 = in_stack_fffffda8 & 0xffffff00;
  pRVar1 = (this->TargetFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar10 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar10) {
      (this->TargetFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&MVar3.Data)->_4_4_ = uVar15;
  ((slice_view *)&MVar3.Data)->_0_4_ = uVar17;
  ((slice_view *)&MVar3)->_8_4_ = in_stack_fffffdac;
  ((slice_view *)&MVar3)->_12_4_ = unaff_EDI;
  Fleet__GetEstimatedOrbit((this->TargetFleet).Pointer,(FixedOrbit *)local_15c,MVar3);
  uVar17 = 0;
  uVar15 = uVar15 & 0xffffff00;
  pRVar1 = (this->OurFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar10 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar10) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&MVar4.Data)->_4_4_ = uVar15;
  ((slice_view *)&MVar4.Data)->_0_4_ = uVar17;
  ((slice_view *)&MVar4)->_8_4_ = in_stack_fffffdac;
  ((slice_view *)&MVar4)->_12_4_ = unaff_EDI;
  Fleet__GetEstimatedOrbit((this->OurFleet).Pointer,(FixedOrbit *)local_244,MVar4);
  bVar10 = FixedOrbit__HasEqualCodirectionalLineOfApsides((FixedOrbit *)local_244,(FixedOrbit *)local_15c);
  local_1e4 = ((void *)(0x009194a4u));
  if (local_1e0 != (void *)0x0) {
    operator_delete__(local_1e0);
  }
  local_1e0 = (void *)0x0;
  local_1e4 = ((void *)(0x00919488u));
  ((slice_view *)&local_244)->_24_4_ = ((void *)(0x00919980u));
  if (local_228 != (void *)0x0) {
    operator_delete__(local_228);
    local_228 = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_244)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_244)->_16_4_);
  }
  local_fc = ((void *)(0x009194a4u));
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
  local_f8 = (void *)0x0;
  local_fc = ((void *)(0x00919488u));
  ((slice_view *)&local_15c)->_24_4_ = ((void *)(0x00919980u));
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_140 = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_15c)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_15c)->_16_4_);
  }
  ((slice_view *)&local_5c)->_8_8_ = GetTargetPeriapsis_km(this);
  local_4c = GetOurPeriapsis_km(this);
  local_4c = local_4c - (double)((slice_view *)&local_5c)->_8_8_;
  local_44 = util__Abs(&local_4c);
  local_4c = GetDistanceBuffer_km(this);
  bVar2 = local_44 <= local_4c;
  local_44 = GetOurApoapsis_km(this);
  local_44 = local_44 - (double)((slice_view *)&local_5c)->_8_8_;
  uVar15 = 0x751de9;
  local_4c = util__Abs(&local_44);
  uVar16 = 0x751df6;
  local_44 = GetDistanceBuffer_km(this);
  local_39 = local_4c <= local_44;
  uVar17 = 0;
  uVar15 = uVar15 & 0xffffff00;
  pRVar1 = (this->OurFleet).Controller;
  if (bVar2) {
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar11 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar11) {
        (this->OurFleet).Pointer = (Fleet *)0x0;
      }
    }
    ((slice_view *)&MVar5.Data)->_4_4_ = uVar15;
    ((slice_view *)&MVar5.Data)->_0_4_ = uVar17;
    ((slice_view *)&MVar5)->_8_4_ = uVar16;
    ((slice_view *)&MVar5)->_12_4_ = unaff_EDI;
    Fleet__GetEstimatedOrbit((this->OurFleet).Pointer,(FixedOrbit *)local_244,MVar5);
    dVar14 = this->TimeSinceJ2000_s;
    uVar15 = *(undefined4 *)&dVar14;
    uVar17 = *(undefined4 *)((char *)&dVar14 + 4);
    ((slice_view *)&local_5c)->_8_8_ = FixedOrbit__GetRemainingTimeToPeriapsis_s((FixedOrbit *)local_244,dVar14);
    bVar9 = true;
    bVar11 = false;
  }
  else {
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar11 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar11) {
        (this->OurFleet).Pointer = (Fleet *)0x0;
      }
    }
    ((slice_view *)&MVar6.Data)->_4_4_ = uVar15;
    ((slice_view *)&MVar6.Data)->_0_4_ = uVar17;
    ((slice_view *)&MVar6)->_8_4_ = uVar16;
    ((slice_view *)&MVar6)->_12_4_ = unaff_EDI;
    Fleet__GetEstimatedOrbit((this->OurFleet).Pointer,(FixedOrbit *)local_15c,MVar6);
    dVar14 = this->TimeSinceJ2000_s;
    uVar15 = *(undefined4 *)&dVar14;
    uVar17 = *(undefined4 *)((char *)&dVar14 + 4);
    ((slice_view *)&local_5c)->_8_8_ = FixedOrbit__GetRemainingTimeToApoapsis_s((FixedOrbit *)local_15c,dVar14);
    bVar9 = false;
    bVar11 = true;
  }
  if (bVar11) {
    uVar17 = 0x751eb6;
    FixedOrbit_FixedOrbit__o3((FixedOrbit *)local_15c);
  }
  if (bVar9) {
    uVar17 = 0x751ec5;
    FixedOrbit_FixedOrbit__o3((FixedOrbit *)local_244);
  }
  ((slice_view *)&local_5c)->_8_8_ = this->TimeSinceJ2000_s + (double)((slice_view *)&local_5c)->_8_8_;
  uVar16 = 0;
  uVar15 = uVar15 & 0xffffff00;
  pRVar1 = (this->TargetFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar11 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar11) {
      (this->TargetFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&MVar7.Data)->_4_4_ = uVar15;
  ((slice_view *)&MVar7.Data)->_0_4_ = uVar16;
  ((slice_view *)&MVar7)->_8_4_ = uVar17;
  ((slice_view *)&MVar7)->_12_4_ = unaff_EDI;
  Fleet__GetEstimatedOrbit((this->TargetFleet).Pointer,(FixedOrbit *)local_15c,MVar7);
  uVar15 = (uint)((slice_view *)&local_5c)->_8_8_;
  pvVar18 = SUB84(((slice_view *)&local_5c)->_8_8_,4);
  FixedOrbit__GetRelativePosition_km((FixedOrbit *)local_15c,&local_20,(double)CONCAT44(unaff_EDI,pvVar18));
  local_fc = ((void *)(0x009194a4u));
  if (local_f8 != (void *)0x0) {
    uVar15 = 0x751f40;
    operator_delete__(local_f8);
    pvVar18 = local_f8;
  }
  local_f8 = (void *)0x0;
  local_fc = ((void *)(0x00919488u));
  ((slice_view *)&local_15c)->_24_4_ = ((void *)(0x00919980u));
  if (local_140 != (void *)0x0) {
    uVar15 = 0x751f71;
    pvVar18 = local_140;
    operator_delete__(local_140);
    local_140 = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_15c)->_16_4_ != (ReferenceController *)0x0) {
    pvVar18 = (void *)0x751f8d;
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_15c)->_16_4_);
  }
  uVar17 = 0;
  uVar15 = uVar15 & 0xffffff00;
  pRVar1 = (this->OurFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar11 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar11) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&MVar8.Data)->_4_4_ = uVar15;
  ((slice_view *)&MVar8.Data)->_0_4_ = uVar17;
  ((slice_view *)&MVar8)->_8_4_ = pvVar18;
  ((slice_view *)&MVar8)->_12_4_ = unaff_EDI;
  Fleet__GetEstimatedOrbit((this->OurFleet).Pointer,(FixedOrbit *)local_15c,MVar8);
  FixedOrbit__GetRelativePosition_km((FixedOrbit *)local_15c,&local_38,(double)CONCAT44(unaff_EDI,SUB84(((slice_view *)&local_5c)->_8_8_,4)));
  local_fc = ((void *)(0x009194a4u));
  if (local_f8 != (void *)0x0) {
    operator_delete__(local_f8);
  }
  local_f8 = (void *)0x0;
  local_fc = ((void *)(0x00919488u));
  ((slice_view *)&local_15c)->_24_4_ = ((void *)(0x00919980u));
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_140 = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_15c)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_15c)->_16_4_);
  }
  local_74 = local_20.X - local_38.X;
  local_6c = local_20.Y - local_38.Y;
  local_64 = local_20.Z - local_38.Z;
  ((slice_view *)&local_5c)->_8_8_ = util__Abs(&local_64);
  local_4c = util__Abs(&local_6c);
  dVar14 = util__Abs(&local_74);
  local_44 = dVar14 * dVar14 + local_4c * local_4c + (double)((slice_view *)&local_5c)->_8_8_ * (double)((slice_view *)&local_5c)->_8_8_
  ;
  pMVar13 = util__Sqrt((Maybe_L_double_G_ *)local_5c,&local_44);
  if (pMVar13->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_4c = pMVar13->Data;
  local_44 = GetDistanceBuffer_km(this);
  if (((bVar10) && (bVar2 != (bool)local_39)) && (local_4c <= local_44)) {
    uVar12 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar12;
  }
  uVar12 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar12;
}


//==== 000079d6d0 0079d6d0_Render3DTransparent ====
// decompiled by BatchDecomp @ 0079d6d0 name=Render3DTransparent conv=__thiscall body=1010

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall OrbitDirectionArrow__Render3DTransparent(void)const  */

void __thiscall OrbitDirectionArrow__Render3DTransparent(OrbitDirectionArrow *this)

{
  ReferenceController *pRVar1;
  OrbitUI *pOVar2;
  Vec3_L_double_G_ VVar3;
  Vec3_L_double_G_ VVar4;
  Maybe_L_double_G_ MVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  CameraManager *pCVar10;
  Vec3_L_double_G_ *pVVar11;
  FixedOrbit *this_00;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined1 local_13c[28];
  void *local_120;
  undefined **local_e4;
  pmf_e345282a *local_e0;
  undefined **local_dc;
  void *local_d8;
  Vec3_L_double_G_ local_54;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  double local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double local_14;
  undefined4 local_c;
  char local_5;
  
  bVar8 = false;
  local_c = 0;
  if ((this->ParentOrbit).Pointer == (OrbitUI *)0x0) {
    return;
  }
  pRVar1 = (this->ParentOrbit).Controller;
  if (pRVar1 == (ReferenceController *)0x0) {
    return;
  }
  bVar7 = util__ReferenceController__IsDataStillValid(pRVar1);
  if (!bVar7) {
    return;
  }
  pRVar1 = (this->ParentOrbit).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar7 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar7)) {
    (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
  }
  bVar7 = OrbitUI__SetupOrbitColor((this->ParentOrbit).Pointer);
  if (bVar7) {
    pRVar1 = (this->ParentOrbit).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar7)) {
      (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
    }
    if (((this->ParentOrbit).Pointer)->IsProjectedOrbit != false) {
      pRVar1 = (this->ParentOrbit).Controller;
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar8)) {
        (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
      }
      iVar9 = OrbitUI__GetProjectedOrbit((this->ParentOrbit).Pointer);
      bVar8 = true;
      if (*(char *)(iVar9 + 0xe8) == '\0') goto LAB_0079d798;
    }
    local_5 = '\x01';
  }
  else {
LAB_0079d798:
    local_5 = '\0';
  }
  if (bVar8) {
    local_e4 = ((void *)(0x009194a4u));
    if (local_e0 != (pmf_e345282a *)0x0) {
      operator_delete__(local_e0);
    }
    local_e0 = (pmf_e345282a *)0x0;
    local_e4 = ((void *)(0x00919488u));
    ((slice_view *)&local_13c)->_16_4_ = ((void *)(0x00919980u));
    if ((void *)((slice_view *)&local_13c)->_20_4_ != (void *)0x0) {
      operator_delete__((void *)((slice_view *)&local_13c)->_20_4_);
      ((slice_view *)&local_13c)->_20_4_ = (void *)0x0;
    }
    if ((CelestialObject *)((slice_view *)&local_13c)->_8_4_ != (CelestialObject *)0x0) {
      util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_13c)->_8_4_);
    }
  }
  if (local_5 != '\0') {
    pRVar1 = (this->ParentOrbit).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar8 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar8)) {
      (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
    }
    bVar8 = OrbitUI__IsLibrationOrbit((this->ParentOrbit).Pointer);
    pRVar1 = (this->ParentOrbit).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar7 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar7)) {
      (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
    }
    pOVar2 = (this->ParentOrbit).Pointer;
    bVar7 = OrbitUI__IsInStrategicGame(pOVar2);
    if ((bVar7) &&
       (bVar7 = StrategicManager__IsNotInScreenshotMode((StrategicManager *)pOVar2->_pad_0x0_0),
       !bVar7)) {
      return;
    }
    pRVar1 = (this->ParentOrbit).Controller;
    if (bVar8) {
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar8)) {
        (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
      }
      pOVar2 = (this->ParentOrbit).Pointer;
      dVar12 = GetArrowTime_s(this);
      uVar15 = *(undefined4 *)&dVar12;
      uVar16 = *(undefined4 *)((char *)&dVar12 + 4);
      OrbitUI__GetLagrangePointAndTangent_km(pOVar2,(double)CONCAT44(uVar15,&local_3c));
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = uVar15 & 0xffffff00;
      pRVar1 = (this->ParentOrbit).Controller;
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar8)) {
        (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
      }
      pVVar11 = &local_54;
      pOVar2 = (this->ParentOrbit).Pointer;
      pCVar10 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
      pVVar11 = CameraManager__GetCameraPos(pCVar10,pVVar11);
      dVar12 = OrbitUI__GetArrowSize_km(pOVar2);
    }
    else {
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar8)) {
        (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
      }
      this_00 = OrbitUI__GetOrbit((this->ParentOrbit).Pointer,(FixedOrbit *)local_13c);
      FixedOrbit__GetOrbitalPeriod_s_Memoize(this_00);
      if (*(char *)&(this_00->GetFullRotator_MemoizedValue).Data.X == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar6 = /*0000000000000000*/0.0;
      dVar12 = *(double *)&(this_00->GetOrbitalPeriod_s_MemoizedValue).IsValidData;
      local_dc = ((void *)(0x009194a4u));
      if (local_d8 != (void *)0x0) {
        operator_delete__(local_d8);
      }
      local_d8 = (void *)0x0;
      local_dc = ((void *)(0x00919488u));
      ((slice_view *)&local_13c)->_24_4_ = ((void *)(0x00919980u));
      if (local_120 != (void *)0x0) {
        operator_delete__(local_120);
        local_120 = (void *)0x0;
      }
      if ((ReferenceController *)((slice_view *)&local_13c)->_16_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_13c)->_16_4_);
      }
      if (dVar12 <= dVar6) {
        return;
      }
      pRVar1 = (this->ParentOrbit).Controller;
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar8)) {
        (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
      }
      pOVar2 = (this->ParentOrbit).Pointer;
      dVar12 = GetArrowTime_s(this);
      uVar15 = *(undefined4 *)&dVar12;
      uVar16 = *(undefined4 *)((char *)&dVar12 + 4);
      OrbitUI__GetPointAndTangent_km(pOVar2,(double)CONCAT44(uVar15,&local_3c));
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = uVar15 & 0xffffff00;
      pRVar1 = (this->ParentOrbit).Controller;
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar8 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar8)) {
        (this->ParentOrbit).Pointer = (OrbitUI *)0x0;
      }
      pVVar11 = &local_54;
      pOVar2 = (this->ParentOrbit).Pointer;
      pCVar10 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
      pVVar11 = CameraManager__GetCameraPos(pCVar10,pVVar11);
      dVar12 = OrbitUI__GetArrowSize_km(pOVar2);
    }
    ((slice_view *)&VVar3.X)->_4_4_ = uStack_38;
    ((slice_view *)&VVar3.X)->_0_4_ = local_3c;
    ((slice_view *)&VVar3.Y)->_0_4_ = uStack_34;
    ((slice_view *)&VVar3.Y)->_4_4_ = uStack_30;
    VVar3.Z = local_2c;
    ((slice_view *)&VVar4.X)->_4_4_ = uStack_20;
    ((slice_view *)&VVar4.X)->_0_4_ = local_24;
    ((slice_view *)&VVar4.Y)->_0_4_ = uStack_1c;
    ((slice_view *)&VVar4.Y)->_4_4_ = uStack_18;
    VVar4.Z = local_14;
    ((slice_view *)&MVar5.Data)->_4_4_ = uVar14;
    ((slice_view *)&MVar5.Data)->_0_4_ = uVar13;
    ((slice_view *)&MVar5)->_8_4_ = uVar15;
    ((slice_view *)&MVar5)->_12_4_ = uVar16;
    DrawAntialiasedArrowhead(VVar3,VVar4,*pVVar11,dVar12,MVar5);
  }
  return;
}


//==== 00007ab1b0 007ab1b0_IsVisible ====
// decompiled by BatchDecomp @ 007ab1b0 name=IsVisible conv=__thiscall body=790

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall LagrangePointUIButton__IsVisible(void)const  */

bool __thiscall LagrangePointUIButton__IsVisible(LagrangePointUIButton *this)

{
  ReferenceController *pRVar1;
  int iVar2;
  CelestialObject *this_00;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  ControllableComponent *this_01;
  double dVar6;
  int local_2c0;
  int iStack_2bc;
  undefined8 uStack_2b8;
  int local_2b0;
  ReferenceController *local_2ac;
  ReferenceController *local_1bc;
  ReferenceController *local_1b4;
  ReferenceController *local_1ac;
  ReferenceController *local_184;
  ItineraryNode local_158;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((this->LPoint).Object.Pointer != (CelestialObject *)0x0) &&
     (pRVar1 = (this->LPoint).Object.Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar3) {
      this_01 = (ControllableComponent *)Manager__GetOptions((Manager *)this->_pad_0x0_0);
      bVar3 = ControllableComponent__HasAnyOrder(this_01);
      if (bVar3) {
        pRVar1 = (this->LPoint).Object.Controller;
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar3) {
            (this->LPoint).Object.Pointer = (CelestialObject *)0x0;
          }
        }
        bVar3 = CelestialObject__IsOriginAParent((this->LPoint).Object.Pointer);
        if (bVar3) {
          if ((char)this->_pad_0x0_0 == '\0') {
            iVar2 = this->_pad_0x0_0;
            uStack_2b8 = CONCAT44(iVar2 + 1,(int)uStack_2b8);
            util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->_pad_0x0_0,
                       (int *)((int)&uStack_2b8 + 4));
            bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->_pad_0x0_0,iVar2);
            if (bVar3) {
              *(code **)(this->_pad_0x0_0 + -4 + this->_pad_0x0_0 * 4) =
                   GhostedUIButton__GetTimeSinceJ2000_s_Clear;
            }
            StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
            StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x0_0);
            if ((local_158.Parent.Pointer == (Fleet *)0x0) && (local_2b0 == 0)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (local_184 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_184);
            }
            if (local_1ac != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_1ac);
            }
            if (local_1b4 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_1b4);
            }
            if (local_1bc != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_1bc);
            }
            if (local_2ac != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_2ac);
            }
            if (local_158.CachedNearestOrbiter.Controller != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestOrbiter.Controller);
            }
            if (local_158.CachedNearestFleet.Controller != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestFleet.Controller);
            }
            if (local_158.CachedNearestBody.Controller != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_158.CachedNearestBody.Controller);
            }
            if (local_158.CachedGravityBody.Controller != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_158.CachedGravityBody.Controller);
            }
            if (local_158.Parent.Controller != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_158.Parent.Controller);
            }
            if (bVar3) {
              dVar6 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
            }
            else {
              dVar6 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
            }
            uStack_2b8 = CONCAT71((int7)((ulonglong)dVar6 >> 8),1);
            local_2c0 = *(undefined4 *)&dVar6;
            iStack_2bc = (int)((ulonglong)dVar6 >> 0x20);
            this->_pad_0x0_0 = local_2c0;
            this->_pad_0x0_0 = iStack_2bc;
            this->_pad_0x0_0 = (int)uStack_2b8;
            this->_pad_0x0_0 = iStack_2bc;
          }
          if ((char)this->_pad_0x0_0 == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          pRVar1 = (this->LPoint).Object.Controller;
          if (pRVar1 != (ReferenceController *)0x0) {
            bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
            if (!bVar3) {
              (this->LPoint).Object.Pointer = (CelestialObject *)0x0;
            }
          }
          bVar3 = CelestialObject__DoesLagrangePointExist((this->LPoint).Object.Pointer,*(double *)&this->_pad_0x0_0,
                             (this->LPoint).LPointID);
          if (bVar3) {
            (**(code **)(*(int *)this + 0xcc))();
            pRVar1 = (this->LPoint).Object.Controller;
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar1);
            }
            bVar3 = GhostedUIButton__IsScreenDistanceToObjectUnobscured((GhostedUIButton *)this);
            if (bVar3) {
              pRVar1 = (this->LPoint).Object.Controller;
              if (pRVar1 != (ReferenceController *)0x0) {
                bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
                if (!bVar3) {
                  (this->LPoint).Object.Pointer = (CelestialObject *)0x0;
                }
              }
              this_00 = (this->LPoint).Object.Pointer;
              (**(code **)(*(int *)this + 0xcc))();
              CelestialObject__GetOrbitedObject(this_00);
              bVar3 = GhostedUIButton__IsScreenDistanceToObjectUnobscured((GhostedUIButton *)this);
              if (bVar3) {
                if ((this->_pad_0x0_0 == 0) || ((code *)this->_pad_0x0_0 == (code *)0x0)) {
                  cVar4 = (char)this->_pad_0x0_0;
                }
                else {
                  cVar4 = (*(code *)this->_pad_0x0_0)();
                }
                if (cVar4 != '\0') {
                  uVar5 = 1;
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return (bool)uVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar5 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


//==== 00007bacf0 007bacf0_FUN_007bacf0 ====
void FUN_007bacf0(int *param_1,int *param_2,undefined8 *param_3);

// decompiled by BatchDecomp @ 007bacf0 name=FUN_007bacf0 conv=unknown body=938

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007bacf0(int *param_1,int *param_2,undefined8 *param_3)

{
  Body *pBVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  int *piVar4;
  TacticalManager *pTVar5;
  ReferenceController *pRVar6;
  code *pcVar7;
  Component *pCVar8;
  Component *this_00;
  Component *pCVar9;
  ReferenceController *pRVar10;
  ReferenceController *pRVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  pcVar7 = DebugBreak_exref;
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      if (((*param_2 != 0) && ((ReferenceController *)param_2[1] != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         bVar2)) {
        if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
           !bVar2)) {
          *param_2 = 0;
        }
        pBVar1 = (Body *)*param_2;
        Body__GetColliderComponent_Memoize(pBVar1);
        if ((pBVar1->GetColliderComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar7)();
        }
        pRVar6 = (pBVar1->GetColliderComponent_MemoizedValue).Data.Controller;
        if ((pRVar6 != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(pRVar6), !bVar2)) {
          (pBVar1->GetColliderComponent_MemoizedValue).Data.Pointer = (Component *)0x0;
        }
        pCVar8 = (pBVar1->GetColliderComponent_MemoizedValue).Data.Pointer;
        pRVar6 = (pCVar8->Parent).Controller;
        if ((pRVar6 != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(pRVar6), !bVar2)) {
          (pCVar8->Parent).Pointer = (Body *)0x0;
        }
        pBVar1 = (pCVar8->Parent).Pointer;
        Body__IsAlive_Memoize(pBVar1);
        if ((pBVar1->IsAlive_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar7)();
        }
        if (((((pBVar1->IsAlive_MemoizedValue).Data != false) && (*piVar4 != 0)) &&
            ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           bVar2)) {
          if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
             !bVar2)) {
            *piVar4 = 0;
          }
          pBVar1 = (Body *)*piVar4;
          Body__GetColliderComponent_Memoize(pBVar1);
          if ((pBVar1->GetColliderComponent_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            (*pcVar7)();
          }
          pRVar6 = (pBVar1->GetColliderComponent_MemoizedValue).Data.Controller;
          if ((pRVar6 != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__IsDataStillValid(pRVar6), !bVar2)) {
            (pBVar1->GetColliderComponent_MemoizedValue).Data.Pointer = (Component *)0x0;
          }
          pCVar8 = (pBVar1->GetColliderComponent_MemoizedValue).Data.Pointer;
          pRVar6 = (pCVar8->Parent).Controller;
          if ((pRVar6 != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__IsDataStillValid(pRVar6), !bVar2)) {
            (pCVar8->Parent).Pointer = (Body *)0x0;
          }
          pBVar1 = (pCVar8->Parent).Pointer;
          Body__IsAlive_Memoize(pBVar1);
          if ((pBVar1->IsAlive_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            (*pcVar7)();
          }
          if ((pBVar1->IsAlive_MemoizedValue).Data != false) {
            pRVar6 = (ReferenceController *)piVar4[1];
            if (((ReferenceController *)param_2[1] == pRVar6) && (*param_2 == *piVar4)) {
              util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\collision.cpp",
                              0x2db,"hit.Value1 != Collider",(char *)0x0);
              (*pcVar7)();
              pRVar6 = (ReferenceController *)piVar4[1];
            }
            if ((pRVar6 != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid(pRVar6), !bVar2)) {
              *piVar4 = 0;
            }
            pBVar1 = (Body *)*piVar4;
            Body__GetColliderComponent_Memoize(pBVar1);
            pcVar7 = DebugBreak_exref;
            if ((pBVar1->GetColliderComponent_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              pcVar7 = DebugBreak_exref;
              DebugBreak();
            }
            pCVar8 = (pBVar1->GetColliderComponent_MemoizedValue).Data.Pointer;
            pRVar6 = (pBVar1->GetColliderComponent_MemoizedValue).Data.Controller;
            if (pRVar6 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar6);
            }
            if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar2)) {
              *param_2 = 0;
            }
            pBVar1 = (Body *)*param_2;
            Body__GetColliderComponent_Memoize(pBVar1);
            if ((pBVar1->GetColliderComponent_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              (*pcVar7)();
            }
            this = (pBVar1->GetColliderComponent_MemoizedValue).Data.Controller;
            this_00 = (pBVar1->GetColliderComponent_MemoizedValue).Data.Pointer;
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this);
            }
            uVar13 = *param_3;
            uVar12 = *(undefined8 *)(piVar4 + 2);
            if ((pRVar6 != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid(pRVar6), !bVar2)) {
              pCVar8 = (Component *)0x0;
            }
            iVar3 = (**(code **)(*(int *)pCVar8 + 0x3c))();
            pcVar7 = (code *)(&PTR_ShipVsExplosion_0095f478)[iVar3];
            if (pcVar7 != (code *)0x0) {
              pRVar11 = pRVar6;
              if (pRVar6 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(pRVar6);
              }
              pCVar9 = this_00;
              pRVar10 = this;
              if (((this != (ReferenceController *)0x0) &&
                  (util__ReferenceController__AddWeakReference(this),
                  this != (ReferenceController *)0x0)) &&
                 (bVar2 = util__ReferenceController__IsDataStillValid(this), !bVar2)) {
                this_00 = (Component *)0x0;
              }
              pTVar5 = Component__GetManager(this_00);
              (*pcVar7)(pTVar5,pCVar9,pRVar10,pCVar8,pRVar11,uVar12,uVar13);
            }
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(this);
            }
            pcVar7 = DebugBreak_exref;
            if (pRVar6 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar6);
              pcVar7 = DebugBreak_exref;
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c67d0 007c67d0_PostTick ====
// decompiled by BatchDecomp @ 007c67d0 name=PostTick conv=__thiscall body=828

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall UntrackComponent__PostTick(double) */

void __thiscall UntrackComponent__PostTick(UntrackComponent *this,double param_1)

{
  double dVar1;
  double dVar2;
  Body *pBVar3;
  ReferenceController *pRVar4;
  SpacecraftComponent *this_00;
  Body *pBVar5;
  bool bVar6;
  bool bVar7;
  Vec3_L_double_G_ *pVVar8;
  Vec3_L_double_G_ *pVVar9;
  int iVar10;
  Vec3_L_double_G_ local_58;
  Vec3_L_double_G_ local_40;
  Vec3_L_double_G_ local_28;
  double local_10;
  char local_5;
  
  dVar1 = local_28.Z;
  if ((this->Countdown_s).IsValidData != false) {
    local_28.Y = (this->Countdown_s).Data - param_1;
    local_28.Z = (double)CONCAT71(((slice_view *)&local_28.Z)->_1_7_,1);
    dVar2 = local_28.Z;
    ((slice_view *)&local_28.Z)->_4_4_ = SUB84(dVar1,4);
    (this->Countdown_s).Data = local_28.Y;
    *(undefined4 *)&(this->Countdown_s).IsValidData = ((slice_view *)&local_28.Z)->_0_4_;
    *(undefined4 *)((char *)&(this->Countdown_s) + 0xc) = ((slice_view *)&local_28.Z)->_4_4_;
    local_28.Z = dVar2;
    if ((this->Countdown_s).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (0.0 < (this->Countdown_s).Data) {
      return;
    }
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar6)) {
      this->_pad_0x0_0 = 0;
    }
    Body__Destroy((Body *)this->_pad_0x0_0);
    return;
  }
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar6)) {
    this->_pad_0x0_0 = 0;
  }
  pBVar3 = (Body *)this->_pad_0x0_0;
  Body__IsABullet_Memoize(pBVar3);
  if ((pBVar3->IsABullet_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_5 = (pBVar3->IsABullet_MemoizedValue).Data;
  if ((bool)local_5 == false) {
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar6)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar3 = (Body *)this->_pad_0x0_0;
    Body__GetSpacecraftComponent_Memoize(pBVar3);
    if ((pBVar3->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((((pBVar3->GetSpacecraftComponent_MemoizedValue).Data.Pointer != (SpacecraftComponent *)0x0)
        && (pRVar4 = (pBVar3->GetSpacecraftComponent_MemoizedValue).Data.Controller,
           pRVar4 != (ReferenceController *)0x0)) &&
       (bVar6 = util__ReferenceController__IsDataStillValid(pRVar4), bVar6)) {
      if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
         (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0), !bVar6)) {
        this->_pad_0x0_0 = 0;
      }
      pBVar3 = (Body *)this->_pad_0x0_0;
      Body__GetSpacecraftComponent_Memoize(pBVar3);
      if ((pBVar3->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pRVar4 = (pBVar3->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if ((pRVar4 != (ReferenceController *)0x0) &&
         (bVar6 = util__ReferenceController__IsDataStillValid(pRVar4), !bVar6)) {
        (pBVar3->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
      }
      this_00 = (pBVar3->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
      SpacecraftComponent__IsThreatening_Memoize(this_00);
      if ((this_00->IsThreatening_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar6 = false;
      if ((this_00->IsThreatening_MemoizedValue).Data != false) goto LAB_007c6995;
    }
  }
  bVar6 = true;
LAB_007c6995:
  if ((((this->Target).Pointer == (Body *)0x0) ||
      (pRVar4 = (this->Target).Controller, pRVar4 == (ReferenceController *)0x0)) ||
     (bVar7 = util__ReferenceController__IsDataStillValid(pRVar4), !bVar7)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((local_5 != '\0') && (bVar7)) {
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar6)) {
      this->_pad_0x0_0 = 0;
    }
    pRVar4 = (this->Target).Controller;
    pBVar3 = (Body *)this->_pad_0x0_0;
    if ((pRVar4 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid(pRVar4), !bVar6)) {
      (this->Target).Pointer = (Body *)0x0;
    }
    pBVar5 = (this->Target).Pointer;
    pVVar8 = Body__GetPosition_km(pBVar3,&local_28);
    pVVar9 = Body__GetPosition_km(pBVar5,&local_40);
    pRVar4 = (this->Target).Controller;
    local_10 = pVVar9->X - pVVar8->X;
    dVar1 = pVVar9->Y;
    dVar2 = pVVar8->Y;
    local_28.Z = pVVar9->Z - pVVar8->Z;
    if ((pRVar4 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid(pRVar4), !bVar6)) {
      (this->Target).Pointer = (Body *)0x0;
    }
    pBVar3 = (this->Target).Pointer;
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar6 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar6)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar5 = (Body *)this->_pad_0x0_0;
    pVVar8 = Body__GetVelocity_km__s(pBVar3,&local_40);
    pVVar9 = Body__GetVelocity_km__s(pBVar5,&local_58);
    bVar6 = (pVVar9->Y - pVVar8->Y) * (dVar1 - dVar2) + (pVVar9->X - pVVar8->X) * local_10 +
            (pVVar9->Z - pVVar8->Z) * local_28.Z <= 0.0;
  }
  if (bVar6) {
    iVar10 = rand();
    dVar1 = local_28.Z;
    local_28.Z = (double)CONCAT71(((slice_view *)&local_28.Z)->_1_7_,1);
    ((slice_view *)&local_28.Z)->_4_4_ = SUB84(dVar1,4);
    (this->Countdown_s).Data =
         (double)iVar10 * /*3f00000000000000*/3.0517578125e-05 * /*3fefae147ae147ae*/0.99 +
         /*3f847ae147ae147b*/0.01;
    *(undefined4 *)&(this->Countdown_s).IsValidData = ((slice_view *)&local_28.Z)->_0_4_;
    *(undefined4 *)((char *)&(this->Countdown_s) + 0xc) = ((slice_view *)&local_28.Z)->_4_4_;
  }
  return;
}


//==== 00007c7de0 007c7de0_FUN_007c7de0 ====
void FUN_007c7de0(int *param_1,char *param_2,Str_L_char_G_ *param_3);

// decompiled by BatchDecomp @ 007c7de0 name=FUN_007c7de0 conv=unknown body=746

void FUN_007c7de0(int *param_1,char *param_2,Str_L_char_G_ *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  LocStr *this;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  void *local_a4[3];
  void *local_98;
  void *local_8c[3];
  Str_L_char_G_ local_80;
  void *local_74[3];
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  int *local_2c;
  undefined4 *local_28;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = 0;
  local_2c = param_1;
  local_28 = (undefined4 *)0x0;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  pcVar6 = local_50.Data;
  pcVar7 = local_44.Data;
  if (local_c < iVar2) {
    do {
      local_28 = (undefined4 *)(**(code **)*local_2c)(&local_c);
      if (*param_2 == '\0') {
        util__Str_char___Str_char__o5(&local_5c,"\n");
        util__Str_char___operator__o10(param_3,&local_5c);
        if (local_5c.Data != (char *)0x0) {
          operator_delete__(local_5c.Data);
          local_5c.Data = (char *)0x0;
        }
      }
      if ((int)local_28[1] < 2) {
        bVar5 = bVar5 | 0x80;
        pSVar3 = (Str_L_char_G_ *)(**(code **)(*(int *)*local_28 + 0x48))(local_74);
      }
      else {
        util__Str_char___Str_char__o5(&local_68,"Space");
        local_38.Data = (char *)0x0;
        local_38.Capacity = 0;
        local_38.Length = 0;
        bVar5 = bVar5 | 0x7f;
        this = (LocStr *)util__LocStr__LocStr((LocStr *)local_a4,&local_68,&local_38);
        pSVar3 = util__LocStr__operator__o3(this);
        puVar1 = local_28;
        pSVar4 = util__Printf(&local_80,"%ix",local_28[1]);
        local_18.Length = 0;
        local_18.Data = (char *)0x0;
        local_18.Capacity = 0;
        util__Str_char___Str_char(&local_18,pSVar4);
        util__Str_char___operator__o10(&local_18,pSVar3);
        util__Str_char___Str_char(&local_50,&local_18);
        if (local_18.Data != (char *)0x0) {
          operator_delete__(local_18.Data);
          ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
        }
        pSVar3 = (Str_L_char_G_ *)(**(code **)(*(int *)*puVar1 + 0x48))(local_8c);
        local_24.Length = 0;
        local_24.Data = (char *)0x0;
        local_24.Capacity = 0;
        util__Str_char___Str_char(&local_24,&local_50);
        util__Str_char___operator__o10(&local_24,pSVar3);
        util__Str_char___Str_char(&local_44,&local_24);
        if (local_24.Data != (char *)0x0) {
          operator_delete__(local_24.Data);
          ((slice_view *)&local_24)->_0_8_ = ((slice_view *)&local_24)->_0_8_ & 0xffffffff00000000;
        }
        pSVar3 = &local_44;
        pcVar6 = local_50.Data;
        pcVar7 = local_44.Data;
      }
      util__Str_char___operator__o10(param_3,pSVar3);
      if (((char)bVar5 < '\0') && (bVar5 = bVar5 & 0x7f, local_74[0] != (void *)0x0)) {
        operator_delete__(local_74[0]);
        local_74[0] = (void *)0x0;
      }
      if (((bVar5 & 0x40) != 0) && (bVar5 = bVar5 & 0xbf, pcVar7 != (char *)0x0)) {
        operator_delete__(pcVar7);
        pcVar7 = (char *)0x0;
        local_44.Data = (char *)0x0;
      }
      if (((bVar5 & 0x20) != 0) && (bVar5 = bVar5 & 0xdf, pcVar6 != (char *)0x0)) {
        operator_delete__(pcVar6);
        pcVar6 = (char *)0x0;
        local_50.Data = (char *)0x0;
      }
      if (((bVar5 & 0x10) != 0) && (bVar5 = bVar5 & 0xef, local_80.Data != (char *)0x0)) {
        operator_delete__(local_80.Data);
        local_80.Data = (char *)0x0;
      }
      if ((bVar5 & 8) != 0) {
        bVar5 = bVar5 & 0xf7;
        if (local_98 != (void *)0x0) {
          operator_delete__(local_98);
          local_98 = (void *)0x0;
        }
        if (local_a4[0] != (void *)0x0) {
          operator_delete__(local_a4[0]);
          local_a4[0] = (void *)0x0;
        }
      }
      if (((bVar5 & 4) != 0) && (bVar5 = bVar5 & 0xfb, local_38.Data != (char *)0x0)) {
        operator_delete__(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      if (((bVar5 & 2) != 0) && (bVar5 = bVar5 & 0xfd, local_8c[0] != (void *)0x0)) {
        operator_delete__(local_8c[0]);
        local_8c[0] = (void *)0x0;
      }
      if (((bVar5 & 1) != 0) && (bVar5 = bVar5 & 0xfe, local_68.Data != (char *)0x0)) {
        operator_delete__(local_68.Data);
        local_68.Data = (char *)0x0;
      }
      *param_2 = '\0';
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_2c + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c9120 007c9120_FUN_007c9120 ====
void FUN_007c9120(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 007c9120 name=FUN_007c9120 conv=unknown body=769

void FUN_007c9120(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  ReferenceController *pRVar4;
  ReferenceController *pRVar5;
  bool bVar6;
  int *piVar7;
  int *piVar8;
  ReferenceControllerRegistry *pRVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  void *pvVar14;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  double dVar3;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar13 = *param_4;
  if ((int)local_10 < iVar13) {
    do {
      if (*param_6 <= (int)local_c) break;
      piVar7 = (int *)(**(code **)*param_1)(&local_10);
      local_14 = piVar7;
      piVar8 = (int *)(**(code **)*param_1)(&local_c);
      dVar1 = *(double *)(*piVar7 + 0x1a8);
      dVar2 = *(double *)(*piVar8 + 0x1a8);
      dVar3 = *(double *)(*piVar8 + 0x1a8);
      local_18 = (int *)*param_7;
      *param_7 = (int)local_18 + 1;
      if (dVar1 < dVar3 || dVar1 == dVar2) {
        piVar7 = (int *)(**(code **)*param_2)(&local_18);
        pvVar14 = (void *)*piVar7;
        pRVar4 = (ReferenceController *)piVar7[1];
        *piVar7 = *local_14;
        pRVar5 = (ReferenceController *)local_14[1];
        piVar7[1] = (int)pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(pRVar5);
        }
        if ((pRVar4 != (ReferenceController *)0x0) &&
           (bVar6 = util__ReferenceController__ReleaseStrongReference(pRVar4), bVar6)) {
          if (pvVar14 != (void *)0x0) {
            if (*(ReferenceController **)((int)pvVar14 + 0x8c) != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar14 + 0x8c));
            }
            operator_delete(pvVar14,0x1b0);
          }
          pRVar9 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar9,pvVar14);
        }
        local_10 = (int *)((int)local_10 + 1);
      }
      else {
        local_14 = local_18;
        local_18 = piVar8;
        piVar7 = (int *)(**(code **)*param_2)(&local_14);
        pvVar14 = (void *)*piVar7;
        pRVar4 = (ReferenceController *)piVar7[1];
        *piVar7 = *local_18;
        pRVar5 = (ReferenceController *)local_18[1];
        piVar7[1] = (int)pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(pRVar5);
        }
        if ((pRVar4 != (ReferenceController *)0x0) &&
           (bVar6 = util__ReferenceController__ReleaseStrongReference(pRVar4), bVar6)) {
          if (pvVar14 != (void *)0x0) {
            if (*(ReferenceController **)((int)pvVar14 + 0x8c) != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar14 + 0x8c));
            }
            operator_delete(pvVar14,0x1b0);
          }
          pRVar9 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar9,pvVar14);
        }
        local_c = (int *)((int)local_c + 1);
      }
      iVar13 = *param_4;
    } while ((int)local_10 < iVar13);
    if ((int)local_10 < iVar13) {
      do {
        local_14 = (int *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar10 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar11 = (undefined4 *)(**(code **)*param_2)(&local_14);
        pvVar14 = (void *)*puVar11;
        pRVar4 = (ReferenceController *)puVar11[1];
        *puVar11 = *puVar10;
        pRVar5 = (ReferenceController *)puVar10[1];
        puVar11[1] = pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(pRVar5);
        }
        if ((pRVar4 != (ReferenceController *)0x0) &&
           (bVar6 = util__ReferenceController__ReleaseStrongReference(pRVar4), bVar6)) {
          if (pvVar14 != (void *)0x0) {
            if (*(ReferenceController **)((int)pvVar14 + 0x8c) != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar14 + 0x8c));
            }
            operator_delete(pvVar14,0x1b0);
          }
          pRVar9 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar9,pvVar14);
        }
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar10 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar11 = (undefined4 *)(**(code **)*param_2)(&local_14);
      pvVar14 = (void *)*puVar11;
      pRVar4 = (ReferenceController *)puVar11[1];
      *puVar11 = *puVar10;
      pRVar5 = (ReferenceController *)puVar10[1];
      puVar11[1] = pRVar5;
      if (pRVar5 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRVar5);
      }
      if ((pRVar4 != (ReferenceController *)0x0) &&
         (bVar6 = util__ReferenceController__ReleaseStrongReference(pRVar4), bVar6)) {
        if (pvVar14 != (void *)0x0) {
          if (*(ReferenceController **)((int)pvVar14 + 0x8c) != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar14 + 0x8c));
          }
          operator_delete(pvVar14,0x1b0);
        }
        pRVar9 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar9,pvVar14);
      }
    } while ((int)local_c < *param_6);
  }
  iVar13 = *param_7;
  iVar12 = (**(code **)(*param_2 + 0xc))();
  if ((iVar12 < iVar13) || (iVar13 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ddae0 007ddae0_FUN_007ddae0 ====
void FUN_007ddae0(int *param_1,int *param_2,char *param_3,Str_L_char_G_ *param_4);

// decompiled by BatchDecomp @ 007ddae0 name=FUN_007ddae0 conv=unknown body=991

void FUN_007ddae0(int *param_1,int *param_2,char *param_3,Str_L_char_G_ *param_4)

{
  int *piVar1;
  CraftBlueprint *this;
  bool bVar2;
  int iVar3;
  LocStr *pLVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  Str_L_char_G_ local_bc;
  Str_L_char_G_ local_b0;
  Str_L_char_G_ local_a4;
  void *local_98[3];
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  void *local_5c[3];
  void *local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  undefined4 *local_2c;
  undefined1 local_28[8];
  char local_20;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      local_2c = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         !bVar2)) {
        *param_2 = 0;
      }
      piVar1 = *(int **)(*param_2 + 0x38);
      this = (CraftBlueprint *)*local_2c;
      CraftBlueprint__GetCrossSection_m2_Memoize(this);
      if (*(char *)((this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data + 3) ==
          '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      puVar10 = local_28;
      (**(code **)(*piVar1 + 0xc4))
                (puVar10,(this->GetInverseMomentOfInertiaTensor_kg_m2_MemoizedValue).Data.Data[2]);
      if (local_20 != '\0') {
        if (*param_3 == '\0') {
          util__Str_char___Str_char__o5(&local_68,"\n");
          util__Str_char___operator__o10(param_4,&local_68);
          if (local_68.Data != (char *)0x0) {
            operator_delete__(local_68.Data);
            local_68.Data = (char *)0x0;
          }
        }
        util__Str_char___Str_char__o5(&local_80,"Colon");
        local_38.Data = (char *)0x0;
        local_38.Capacity = 0;
        local_38.Length = 0;
        pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_80,&local_38);
        pSVar5 = util__LocStr__operator__o3(pLVar4);
        pSVar6 = (Str_L_char_G_ *)(**(code **)(*(int *)*local_2c + 0x48))(local_98);
        local_18.Length = 0;
        local_18.Data = (char *)0x0;
        local_18.Capacity = 0;
        util__Str_char___Str_char(&local_18,pSVar6);
        util__Str_char___operator__o10(&local_18,pSVar5);
        util__Str_char___Str_char(&local_74,&local_18);
        if (local_18.Data != (char *)0x0) {
          operator_delete__(local_18.Data);
          ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
        }
        util__Str_char___operator__o10(param_4,&local_74);
        if (local_74.Data != (char *)0x0) {
          operator_delete__(local_74.Data);
          local_74.Data = (char *)0x0;
        }
        if (local_98[0] != (void *)0x0) {
          operator_delete__(local_98[0]);
          local_98[0] = (void *)0x0;
        }
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_50 = (void *)0x0;
        }
        if (local_5c[0] != (void *)0x0) {
          operator_delete__(local_5c[0]);
          local_5c[0] = (void *)0x0;
        }
        if (local_38.Data != (char *)0x0) {
          operator_delete__(local_38.Data);
          local_38.Data = (char *)0x0;
        }
        if (local_80.Data != (char *)0x0) {
          operator_delete__(local_80.Data);
          local_80.Data = (char *)0x0;
        }
        util__Str_char___Str_char__o5(&local_8c,"AwayRange");
        if (local_20 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pSVar5 = PrintDistance(&local_bc,(double)CONCAT44(puVar10,((slice_view *)&local_28)->_4_4_));
        if (pSVar5->Capacity < 1) {
          pcVar8 = "";
        }
        else {
          pcVar8 = pSVar5->Data;
        }
        pSVar5 = PrintDistance(&local_b0,
                               (double)CONCAT44(puVar10,(int)((ulonglong)
                                                              *(undefined8 *)(local_2c + 2) >> 0x20)
                                               ));
        if (pSVar5->Capacity < 1) {
          pcVar9 = "";
        }
        else {
          pcVar9 = pSVar5->Data;
        }
        local_44.Data = (char *)0x0;
        local_44.Capacity = 0;
        local_44.Length = 0;
        pLVar4 = (LocStr *)util__LocStr__LocStr((LocStr *)local_5c,&local_8c,&local_44);
        pSVar5 = util__LocStr__operator__o3(pLVar4);
        if (pSVar5->Capacity < 1) {
          pcVar7 = "";
        }
        else {
          pcVar7 = pSVar5->Data;
        }
        pSVar5 = util__Printf(&local_a4,pcVar7,pcVar9,pcVar8);
        util__Str_char___operator__o10(param_4,pSVar5);
        if (local_a4.Data != (char *)0x0) {
          operator_delete__(local_a4.Data);
          local_a4.Data = (char *)0x0;
        }
        if (local_50 != (void *)0x0) {
          operator_delete__(local_50);
          local_50 = (void *)0x0;
        }
        if (local_5c[0] != (void *)0x0) {
          operator_delete__(local_5c[0]);
          local_5c[0] = (void *)0x0;
        }
        if (local_44.Data != (char *)0x0) {
          operator_delete__(local_44.Data);
          local_44.Data = (char *)0x0;
        }
        if (local_b0.Data != (char *)0x0) {
          operator_delete__(local_b0.Data);
          local_b0.Data = (char *)0x0;
        }
        if (local_bc.Data != (char *)0x0) {
          operator_delete__(local_bc.Data);
          local_bc.Data = (char *)0x0;
        }
        if (local_8c.Data != (char *)0x0) {
          operator_delete__(local_8c.Data);
          local_8c.Data = (char *)0x0;
        }
        *param_3 = '\0';
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007eef10 007eef10_FUN_007eef10 ====
extern undefined4 FUN_007ed150(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007ed340(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007ed460(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007ed8c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_007eeba0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __thiscall FUN_007eef10(int *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 007eef10 name=FUN_007eef10 conv=unknown body=2816

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_007eef10(int *param_1,undefined4 *param_2)

{
  ReferenceController *pRVar1;
  uint uVar2;
  bool bVar3;
  SpacecraftTargeting *pSVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar8;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this;
  undefined4 *puVar9;
  Maybe_L_util__Darray_L_util__WeakPtr_L_EngineCompartment_G___G___G_ *pMVar10;
  Maybe_L_util__Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G___G_ *pMVar11;
  CraftInstance *pCVar12;
  code *pcVar13;
  int iVar14;
  undefined4 uVar15;
  ReferenceController *pRVar16;
  Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ local_16c[16];
  Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ local_15c[16];
  Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ local_14c[16];
  Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ local_13c[16];
  Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ local_12c[16];
  Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ local_11c[16];
  Darray_L_class_util__WeakPtr_L_struct_WeaponCompartment_G___G_ local_10c[16];
  undefined **local_fc;
  int local_f8;
  uint local_ec;
  undefined4 local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 *local_c8;
  uint local_c4;
  int local_c0;
  int *local_bc;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_b8[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_a8[16];
  undefined **local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined **local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined **local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined **local_28;
  undefined4 *puStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined8 local_18;
  int *local_10;
  char local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c8 = param_2;
  local_c4 = 0;
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar3
     )) {
    *param_2 = 0;
  }
  pSVar4 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*param_2);
  SpacecraftTargeting__UntargetAllCompartments(pSVar4);
  pcVar13 = DebugBreak_exref;
  iVar6 = *param_1;
  local_38 = (undefined **)0x0;
  puStack_34 = (undefined4 *)0x0;
  iStack_30 = 0;
  uStack_2c = 0;
  if (*(char *)(iVar6 + 0x38) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_38,(Darray_L_bool_P_G_ *)(iVar6 + 0x24));
  puVar7 = puStack_34 + iStack_30 + -1;
  puVar9 = puStack_34;
  if (puStack_34 < puVar7) {
    do {
      uVar15 = *puVar9;
      *puVar9 = *puVar7;
      puVar9 = puVar9 + 1;
      *puVar7 = uVar15;
      puVar7 = puVar7 + -1;
    } while (puVar9 < puVar7);
  }
  do {
    uVar2 = local_c4;
    if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
       !bVar3)) {
      *param_2 = 0;
    }
    pSVar4 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*param_2);
    piVar5 = (int *)SpacecraftTargeting__GetEnemyTargetedCompartments(pSVar4);
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    if ((iVar6 != 0) || (local_c[0] = '\x01', iStack_30 < 1)) {
      local_c[0] = '\0';
    }
    local_c4 = uVar2 & 0xfffffffe;
    local_fc = ((void *)(0x0091e0b8u));
    if (local_f8 != 0) {
      iVar6 = *(int *)(local_f8 + -4);
      local_10 = (int *)(local_f8 + -4);
      if (iVar6 != 0) {
        iVar14 = local_f8 + 4 + iVar6 * 8;
        do {
          puVar7 = (undefined4 *)(iVar14 + -8);
          iVar14 = iVar14 + -8;
          iVar6 = iVar6 + -1;
          if ((ReferenceController *)*puVar7 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar7);
          }
        } while (iVar6 != 0);
        iVar6 = *local_10;
        pcVar13 = DebugBreak_exref;
      }
      operator_delete__(local_10,iVar6 * 8 + 4);
    }
    local_f8 = 0;
    local_fc = ((void *)(0x00919488u));
    if (local_c[0] == '\0') {
      local_38 = ((void *)(0x009194a4u));
      if (puStack_34 != (undefined4 *)0x0) {
        operator_delete__(puStack_34);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_28 = ((void *)(0x0091e0b8u));
    puStack_24 = (undefined4 *)0x0;
    uStack_20 = 0;
    iStack_1c = 10;
    puVar7 = (undefined4 *)operator_new__(0x54);
    if (puVar7 == (undefined4 *)0x0) {
      puStack_24 = (undefined4 *)0x0;
    }
    else {
      puStack_24 = puVar7 + 1;
      *puVar7 = 10;
      iVar6 = 10;
      puVar7 = puStack_24;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        iVar6 = iVar6 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar6 != 0);
    }
    iVar6 = 0;
    if (0 < iStack_1c) {
      do {
        pRVar16 = (ReferenceController *)puStack_24[iVar6 * 2 + 1];
        puStack_24[iVar6 * 2] = 0;
        puStack_24[iVar6 * 2 + 1] = 0;
        if (pRVar16 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar16);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iStack_1c);
    }
    local_18 = 0;
    if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
       !bVar3)) {
      *param_2 = 0;
    }
    SpacecraftComponent__GetCraft((SpacecraftComponent *)*param_2);
    local_c[0] = '\0';
    local_58 = (undefined **)0x0;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    if (((slice_view *)&local_18)->_4_4_ == (ReferenceController *)0x0) {
      pCVar12 = (CraftInstance *)local_18;
    }
    else {
      bVar3 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_18)->_4_4_);
      pCVar12 = (CraftInstance *)local_18;
      if (!bVar3) {
        pCVar12 = (CraftInstance *)0x0;
      }
      local_18 = CONCAT44(((slice_view *)&local_18)->_4_4_,pCVar12);
    }
    CraftInstance__GetWeaponModules_Memoize(pCVar12);
    if ((pCVar12->GetWeaponModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar13)();
    }
    local_58 = (undefined **)0x0;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    iVar6 = (**(code **)((pCVar12->GetWeaponModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_58,iVar6);
    FUN_007ed460(&pCVar12->GetWeaponModules_MemoizedValue,local_c,&local_58);
    local_c[0] = '\0';
    local_48 = (undefined **)0x0;
    iStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    if (((slice_view *)&local_18)->_4_4_ == (ReferenceController *)0x0) {
      pCVar12 = (CraftInstance *)local_18;
    }
    else {
      bVar3 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_18)->_4_4_);
      pCVar12 = (CraftInstance *)local_18;
      if (!bVar3) {
        pCVar12 = (CraftInstance *)0x0;
      }
      local_18 = CONCAT44(((slice_view *)&local_18)->_4_4_,pCVar12);
    }
    CraftInstance__GetWeaponModules_Memoize(pCVar12);
    if ((pCVar12->GetWeaponModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar13)();
    }
    local_48 = (undefined **)0x0;
    iStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    iVar6 = (**(code **)((pCVar12->GetWeaponModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_48,iVar6);
    FUN_007ed8c0(&pCVar12->GetWeaponModules_MemoizedValue,local_c,&local_48);
    local_c[0] = '\0';
    local_98 = ((void *)(0x0091db14u));
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    local_88 = ((void *)(0x0091db14u));
    local_84 = 0;
    local_80 = 0;
    local_7c = 0;
    FUN_007ed340(&local_48,local_c,&local_98);
    local_ec = local_ec & 0xffffff00;
    if (((slice_view *)&local_18)->_4_4_ == (ReferenceController *)0x0) {
      pCVar12 = (CraftInstance *)local_18;
    }
    else {
      bVar3 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_18)->_4_4_);
      pCVar12 = (CraftInstance *)local_18;
      if (!bVar3) {
        pCVar12 = (CraftInstance *)0x0;
      }
      local_18 = CONCAT44(((slice_view *)&local_18)->_4_4_,pCVar12);
    }
    CraftInstance__GetWeaponModules_Memoize(pCVar12);
    if ((pCVar12->GetWeaponModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar13)();
    }
    FUN_007eeba0(local_b8,&pCVar12->GetWeaponModules_MemoizedValue,local_ec);
    local_c[0] = '\0';
    if (((slice_view *)&local_18)->_4_4_ == (ReferenceController *)0x0) {
      pCVar12 = (CraftInstance *)local_18;
    }
    else {
      bVar3 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_18)->_4_4_);
      pCVar12 = (CraftInstance *)local_18;
      if (!bVar3) {
        pCVar12 = (CraftInstance *)0x0;
      }
      local_18 = CONCAT44(((slice_view *)&local_18)->_4_4_,pCVar12);
    }
    CraftInstance__GetRadiatorModules_Memoize(pCVar12);
    if ((pCVar12->GetRadiatorModules_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar13)();
    }
    local_78 = ((void *)(0x0091e0b8u));
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    local_68 = ((void *)(0x0091e0b8u));
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    FUN_007ed150(&pCVar12->GetRadiatorModules_MemoizedValue,local_c,&local_78);
    if (iStack_30 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,
                      "Size > 0",(char *)0x0);
      (*pcVar13)();
    }
    switch(puStack_34[iStack_30 + -1]) {
    case 0:
      pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__FUN_007eef10(local_10c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,pDVar8);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_10c);
      break;
    case 1:
      pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__FUN_007eef10(local_11c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,pDVar8);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_11c);
      break;
    case 2:
      pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__FUN_007eef10(local_12c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,pDVar8);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_12c);
      break;
    case 3:
      pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__FUN_007eef10(local_13c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,pDVar8);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_13c);
      break;
    case 4:
      pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__FUN_007eef10(local_14c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,pDVar8);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_14c);
      break;
    case 5:
      pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__FUN_007eef10(local_15c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,pDVar8);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_15c);
      break;
    case 6:
      pDVar8 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
util__FUN_007eef10(local_16c);
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,pDVar8);
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_16c);
      break;
    case 7:
      pCVar12 = (CraftInstance *)local_18;
      if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_18)->_4_4_);
        pCVar12 = (CraftInstance *)local_18;
        if (!bVar3) {
          pCVar12 = (CraftInstance *)0x0;
        }
        local_18 = CONCAT44(((slice_view *)&local_18)->_4_4_,pCVar12);
      }
      CraftInstance__GetEngineModules_Memoize(pCVar12);
      pMVar10 = &pCVar12->GetEngineModules_MemoizedValue;
      if ((pCVar12->GetEngineModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar13)();
      }
      local_d8 = 0;
      iStack_d4 = 0;
      iStack_d0 = 0;
      uStack_cc = 0;
      iVar6 = (**(code **)(*(int *)&pMVar10->Data + 0xc))();
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_d8,iVar6);
      local_10 = (int *)0x0;
      iVar6 = (**(code **)(*(int *)&pMVar10->Data + 0xc))();
      if ((int)local_10 < iVar6) {
        do {
          puVar7 = (undefined4 *)(**(code **)*(int *)&pMVar10->Data)(&local_10);
          pRVar16 = (ReferenceController *)puVar7[1];
          local_bc = (int *)*puVar7;
          if (pRVar16 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar16);
            util__ReferenceController__AddWeakReference(pRVar16);
            util__ReferenceController__ReleaseWeakReference(pRVar16);
          }
          iVar6 = iStack_d0;
          local_c0 = iStack_d0 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_d8,&local_c0);
          bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_d8,iVar6);
          if (bVar3) {
            pRVar1 = *(ReferenceController **)(iStack_d4 + -4 + iStack_d0 * 8);
            *(int **)(iStack_d4 + -8 + iStack_d0 * 8) = local_bc;
            *(ReferenceController **)(iStack_d4 + -4 + iStack_d0 * 8) = pRVar16;
            if (pRVar16 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar16);
            }
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar1);
            }
          }
          if (pRVar16 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar16);
          }
          local_10 = (int *)((int)local_10 + 1);
          iVar6 = (**(code **)(*(int *)&pMVar10->Data + 0xc))();
        } while ((int)local_10 < iVar6);
      }
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,
                 (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_d8);
      this = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_d8;
      goto LAB_007ef79d;
    case 8:
      pCVar12 = (CraftInstance *)local_18;
      if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_18)->_4_4_);
        pCVar12 = (CraftInstance *)local_18;
        if (!bVar3) {
          pCVar12 = (CraftInstance *)0x0;
        }
        local_18 = CONCAT44(((slice_view *)&local_18)->_4_4_,pCVar12);
      }
      CraftInstance__GetReactionMassModules_Memoize(pCVar12);
      pMVar11 = &pCVar12->GetReactionMassModules_MemoizedValue;
      if ((pCVar12->GetReactionMassModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar13)();
      }
      local_e8 = 0;
      iStack_e4 = 0;
      iStack_e0 = 0;
      uStack_dc = 0;
      iVar6 = (**(code **)(*(int *)&pMVar11->Data + 0xc))();
      util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_e8,iVar6);
      local_10 = (int *)0x0;
      iVar6 = (**(code **)(*(int *)&pMVar11->Data + 0xc))();
      if ((int)local_10 < iVar6) {
        do {
          piVar5 = (int *)(**(code **)*(int *)&pMVar11->Data)(&local_10);
          pRVar16 = (ReferenceController *)piVar5[1];
          local_c0 = *piVar5;
          if (pRVar16 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar16);
            util__ReferenceController__AddWeakReference(pRVar16);
            util__ReferenceController__ReleaseWeakReference(pRVar16);
          }
          iVar6 = iStack_e0;
          local_bc = (int *)(iStack_e0 + 1);
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_e8,(int *)&local_bc);
          bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_e8,iVar6);
          if (bVar3) {
            pRVar1 = *(ReferenceController **)(iStack_e4 + -4 + iStack_e0 * 8);
            *(int *)(iStack_e4 + -8 + iStack_e0 * 8) = local_c0;
            *(ReferenceController **)(iStack_e4 + -4 + iStack_e0 * 8) = pRVar16;
            if (pRVar16 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar16);
            }
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar1);
            }
          }
          if (pRVar16 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar16);
          }
          local_10 = (int *)((int)local_10 + 1);
          iVar6 = (**(code **)(*(int *)&pMVar11->Data + 0xc))();
        } while ((int)local_10 < iVar6);
      }
      util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____operator__o2
                ((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_28,
                 (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_e8);
      this = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_e8;
LAB_007ef79d:
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(this);
      param_2 = local_c8;
    }
    local_10 = (int *)0x0;
    iVar6 = (*(code *)local_28[3])();
    if ((int)local_10 < iVar6) {
      do {
        puVar7 = (undefined4 *)(*(code *)*local_28)(&local_10);
        uVar15 = *puVar7;
        pRVar16 = (ReferenceController *)puVar7[1];
        if (pRVar16 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar16);
        }
        if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
           !bVar3)) {
          *param_2 = 0;
        }
        pSVar4 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*param_2);
        SpacecraftTargeting__TargetCompartment(pSVar4,uVar15,pRVar16);
        local_10 = (int *)((int)local_10 + 1);
        iVar6 = (*(code *)local_28[3])();
      } while ((int)local_10 < iVar6);
    }
    iVar14 = iStack_30 + -1;
    iVar6 = (**(code **)((int)local_38 + 0xc))();
    if (iVar6 != 0) {
      iVar6 = (**(code **)((int)local_38 + 0xc))();
      if (((iVar14 < 1) && (iVar6 + -1 <= iVar14)) || ((iVar14 <= iVar6 + -1 && (-1 < iVar14)))) {
        uVar15 = puStack_34[iVar14];
        puStack_34[iVar14] = puStack_34[iStack_30 + -1];
        puStack_34[iStack_30 + -1] = uVar15;
        local_bc = (int *)(iStack_30 + -1);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_38,(int *)&local_bc);
      }
    }
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_68);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_78);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_a8);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_b8);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_88);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_98);
    local_48 = ((void *)(0x0091db14u));
    if (iStack_44 != 0) {
      iVar6 = *(int *)(iStack_44 + -4);
      local_bc = (int *)(iStack_44 + -4);
      if (iVar6 != 0) {
        iVar14 = iStack_44 + 4 + iVar6 * 8;
        do {
          puVar7 = (undefined4 *)(iVar14 + -8);
          iVar14 = iVar14 + -8;
          iVar6 = iVar6 + -1;
          if ((ReferenceController *)*puVar7 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar7);
          }
        } while (iVar6 != 0);
        iVar6 = *local_bc;
      }
      operator_delete__(local_bc,iVar6 * 8 + 4);
    }
    iStack_44 = 0;
    local_48 = ((void *)(0x00919488u));
    local_58 = ((void *)(0x0091db14u));
    if (iStack_54 != 0) {
      iVar6 = *(int *)(iStack_54 + -4);
      local_bc = (int *)(iStack_54 + -4);
      if (iVar6 != 0) {
        iVar14 = iStack_54 + 4 + iVar6 * 8;
        do {
          puVar7 = (undefined4 *)(iVar14 + -8);
          iVar14 = iVar14 + -8;
          iVar6 = iVar6 + -1;
          if ((ReferenceController *)*puVar7 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar7);
          }
        } while (iVar6 != 0);
        iVar6 = *local_bc;
      }
      operator_delete__(local_bc,iVar6 * 8 + 4);
    }
    iStack_54 = 0;
    local_58 = ((void *)(0x00919488u));
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    local_28 = ((void *)(0x0091e0b8u));
    if (puStack_24 != (undefined4 *)0x0) {
      iVar6 = puStack_24[-1];
      local_bc = puStack_24 + -1;
      if (iVar6 != 0) {
        puVar7 = puStack_24 + iVar6 * 2 + 1;
        do {
          puVar9 = puVar7 + -2;
          puVar7 = puVar7 + -2;
          iVar6 = iVar6 + -1;
          if ((ReferenceController *)*puVar9 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar9);
          }
        } while (iVar6 != 0);
        iVar6 = *local_bc;
      }
      operator_delete__(local_bc,iVar6 * 8 + 4);
    }
    puStack_24 = (undefined4 *)0x0;
    local_28 = ((void *)(0x00919488u));
    pcVar13 = DebugBreak_exref;
  } while( true );
}


//==== 00007f1cd0 007f1cd0_SearchAndDestroy ====
extern undefined4 FUN_007efa40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007f1cd0 name=SearchAndDestroy conv=__thiscall body=719

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall TacticalAI__SearchAndDestroy(void)const  */

void __thiscall TacticalAI__SearchAndDestroy(TacticalAI *this)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  ReferenceController *this_00;
  ReferenceController *pRVar7;
  ReferenceController *this_01;
  CombatProtocol local_1b0;
  undefined1 *local_a8;
  TacticalAI *pTStack_a4;
  undefined ***pppuStack_a0;
  undefined ***pppuStack_9c;
  undefined **local_94;
  Str_L_char_G_ local_90;
  undefined8 local_84;
  undefined8 local_7c;
  undefined1 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined1 *local_54;
  TacticalAI *pTStack_50;
  undefined ***pppuStack_4c;
  undefined ***pppuStack_48;
  undefined8 *local_44;
  undefined **local_40;
  Str_L_char_G_ local_3c;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined1 local_d;
  ReferenceController *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = (ReferenceController *)0x0;
  local_d = DoesEnemyOnlyHaveMissiles(this);
  local_18 = 0;
  piVar3 = (int *)GetAlliedShotCrafts(this);
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (iVar4 < 1) {
    pRVar7 = (ReferenceController *)0x0;
    bVar2 = false;
    bVar1 = false;
    this_00 = (ReferenceController *)0x0;
    this_01 = local_c;
  }
  else {
    piVar3 = (int *)GetAlliedShotCrafts(this);
    puVar5 = (undefined4 *)(**(code **)(*piVar3 + 0x20))();
    this_00 = (ReferenceController *)puVar5[1];
    local_c = (ReferenceController *)*puVar5;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this_00);
    }
    bVar2 = true;
    bVar1 = true;
    pRVar7 = local_c;
    this_01 = this_00;
  }
  local_18 = CONCAT44(this_00,pRVar7);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if ((bVar1) && (this_01 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(this_01);
  }
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&pTStack_50);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&pTStack_a4);
  iVar4 = GetCombatDoctrine(this);
  if (*(char *)(iVar4 + 0x100) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_94 = ((void *)(0x00919980u));
  util__Str_char___Str_char(&local_90,(Str_L_char_G_ *)(iVar4 + 0x3c));
  local_94 = ((void *)(0x0093d7e4u));
  local_84 = *(undefined8 *)(iVar4 + 0x48);
  local_7c = *(undefined8 *)(iVar4 + 0x50);
  local_74 = *(undefined1 *)(iVar4 + 0x58);
  local_70 = *(undefined4 *)(iVar4 + 0x5c);
  local_6c = *(undefined4 *)(iVar4 + 0x60);
  local_68 = *(undefined4 *)(iVar4 + 100);
  local_64 = *(undefined4 *)(iVar4 + 0x68);
  local_5c = *(undefined1 *)(iVar4 + 0x70);
  CombatProtocol___CombatProtocol(&local_1b0);
  iVar4 = GetCombatDoctrine(this);
  if (*(char *)(iVar4 + 0x100) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_40 = ((void *)(0x00919980u));
  util__Str_char___Str_char(&local_3c,(Str_L_char_G_ *)(iVar4 + 0x7c));
  local_40 = ((void *)(0x0093d848u));
  local_30 = *(undefined8 *)(iVar4 + 0x88);
  local_28 = *(undefined4 *)(iVar4 + 0x90);
  local_24 = *(undefined4 *)(iVar4 + 0x94);
  local_20 = *(undefined1 *)(iVar4 + 0x98);
  CombatProtocol___CombatProtocol(&local_1b0);
  local_a8 = &local_d;
  pppuStack_a0 = &local_94;
  pppuStack_9c = &local_40;
  local_44 = &local_18;
  pTStack_a4 = this;
  local_54 = local_a8;
  pTStack_50 = this;
  pppuStack_4c = pppuStack_a0;
  pppuStack_48 = pppuStack_9c;
  piVar3 = (int *)GetAlliedShotCrafts(this);
  local_c = (ReferenceController *)0x0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      uVar6 = (**(code **)*piVar3)(&local_c);
      FUN_007efa40(uVar6);
      local_c = (ReferenceController *)((int)&local_c->StrongReferenceCount + 1);
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&pTStack_a4);
  local_40 = ((void *)(0x00919980u));
  if (local_3c.Data != (char *)0x0) {
    operator_delete__(local_3c.Data);
    local_3c.Data = (char *)0x0;
  }
  local_94 = ((void *)(0x00919980u));
  if (local_90.Data != (char *)0x0) {
    operator_delete__(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000847c70 00847c70_FUN_00847c70 ====
undefined4 FUN_00847c70(void);

// decompiled by BatchDecomp @ 00847c70 name=FUN_00847c70 conv=unknown body=2145

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847c70(void)

{
  bool bVar1;
  
  ____glewBindTextureUnit = wglGetProcAddress("glBindTextureUnit");
  bVar1 = ____glewBindTextureUnit == (PROC)0x0;
  ____glewBlitNamedFramebuffer = wglGetProcAddress("glBlitNamedFramebuffer");
  if ((____glewBlitNamedFramebuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCheckNamedFramebufferStatus = wglGetProcAddress("glCheckNamedFramebufferStatus");
  if ((____glewCheckNamedFramebufferStatus == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedBufferData = wglGetProcAddress("glClearNamedBufferData");
  if ((____glewClearNamedBufferData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedBufferSubData = wglGetProcAddress("glClearNamedBufferSubData");
  if ((____glewClearNamedBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedFramebufferfi = wglGetProcAddress("glClearNamedFramebufferfi");
  if ((____glewClearNamedFramebufferfi == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedFramebufferfv = wglGetProcAddress("glClearNamedFramebufferfv");
  if ((____glewClearNamedFramebufferfv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedFramebufferiv = wglGetProcAddress("glClearNamedFramebufferiv");
  if ((____glewClearNamedFramebufferiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedFramebufferuiv = wglGetProcAddress("glClearNamedFramebufferuiv");
  if ((____glewClearNamedFramebufferuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureSubImage1D = wglGetProcAddress("glCompressedTextureSubImage1D");
  if ((____glewCompressedTextureSubImage1D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureSubImage2D = wglGetProcAddress("glCompressedTextureSubImage2D");
  if ((____glewCompressedTextureSubImage2D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureSubImage3D = wglGetProcAddress("glCompressedTextureSubImage3D");
  if ((____glewCompressedTextureSubImage3D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyNamedBufferSubData = wglGetProcAddress("glCopyNamedBufferSubData");
  if ((____glewCopyNamedBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureSubImage1D = wglGetProcAddress("glCopyTextureSubImage1D");
  if ((____glewCopyTextureSubImage1D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureSubImage2D = wglGetProcAddress("glCopyTextureSubImage2D");
  if ((____glewCopyTextureSubImage2D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureSubImage3D = wglGetProcAddress("glCopyTextureSubImage3D");
  if ((____glewCopyTextureSubImage3D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateBuffers = wglGetProcAddress("glCreateBuffers");
  if ((____glewCreateBuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateFramebuffers = wglGetProcAddress("glCreateFramebuffers");
  if ((____glewCreateFramebuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateProgramPipelines = wglGetProcAddress("glCreateProgramPipelines");
  if ((____glewCreateProgramPipelines == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateQueries = wglGetProcAddress("glCreateQueries");
  if ((____glewCreateQueries == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateRenderbuffers = wglGetProcAddress("glCreateRenderbuffers");
  if ((____glewCreateRenderbuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateSamplers = wglGetProcAddress("glCreateSamplers");
  if ((____glewCreateSamplers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateTextures = wglGetProcAddress("glCreateTextures");
  if ((____glewCreateTextures == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateTransformFeedbacks = wglGetProcAddress("glCreateTransformFeedbacks");
  if ((____glewCreateTransformFeedbacks == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateVertexArrays = wglGetProcAddress("glCreateVertexArrays");
  if ((____glewCreateVertexArrays == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDisableVertexArrayAttrib = wglGetProcAddress("glDisableVertexArrayAttrib");
  if ((____glewDisableVertexArrayAttrib == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableVertexArrayAttrib = wglGetProcAddress("glEnableVertexArrayAttrib");
  if ((____glewEnableVertexArrayAttrib == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFlushMappedNamedBufferRange = wglGetProcAddress("glFlushMappedNamedBufferRange");
  if ((____glewFlushMappedNamedBufferRange == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenerateTextureMipmap = wglGetProcAddress("glGenerateTextureMipmap");
  if ((____glewGenerateTextureMipmap == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetCompressedTextureImage = wglGetProcAddress("glGetCompressedTextureImage");
  if ((____glewGetCompressedTextureImage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedBufferParameteri64v = wglGetProcAddress("glGetNamedBufferParameteri64v");
  if ((____glewGetNamedBufferParameteri64v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedBufferParameteriv = wglGetProcAddress("glGetNamedBufferParameteriv");
  if ((____glewGetNamedBufferParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedBufferPointerv = wglGetProcAddress("glGetNamedBufferPointerv");
  if ((____glewGetNamedBufferPointerv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedBufferSubData = wglGetProcAddress("glGetNamedBufferSubData");
  if ((____glewGetNamedBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedFramebufferAttachmentParameteriv =
       wglGetProcAddress("glGetNamedFramebufferAttachmentParameteriv");
  if ((____glewGetNamedFramebufferAttachmentParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedFramebufferParameteriv = wglGetProcAddress("glGetNamedFramebufferParameteriv");
  if ((____glewGetNamedFramebufferParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedRenderbufferParameteriv = wglGetProcAddress("glGetNamedRenderbufferParameteriv");
  if ((____glewGetNamedRenderbufferParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryBufferObjecti64v = wglGetProcAddress("glGetQueryBufferObjecti64v");
  if ((____glewGetQueryBufferObjecti64v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryBufferObjectiv = wglGetProcAddress("glGetQueryBufferObjectiv");
  if ((____glewGetQueryBufferObjectiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryBufferObjectui64v = wglGetProcAddress("glGetQueryBufferObjectui64v");
  if ((____glewGetQueryBufferObjectui64v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryBufferObjectuiv = wglGetProcAddress("glGetQueryBufferObjectuiv");
  if ((____glewGetQueryBufferObjectuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureImage = wglGetProcAddress("glGetTextureImage");
  if ((____glewGetTextureImage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureLevelParameterfv = wglGetProcAddress("glGetTextureLevelParameterfv");
  if ((____glewGetTextureLevelParameterfv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureLevelParameteriv = wglGetProcAddress("glGetTextureLevelParameteriv");
  if ((____glewGetTextureLevelParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameterIiv = wglGetProcAddress("glGetTextureParameterIiv");
  if ((____glewGetTextureParameterIiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameterIuiv = wglGetProcAddress("glGetTextureParameterIuiv");
  if ((____glewGetTextureParameterIuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameterfv = wglGetProcAddress("glGetTextureParameterfv");
  if ((____glewGetTextureParameterfv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameteriv = wglGetProcAddress("glGetTextureParameteriv");
  if ((____glewGetTextureParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTransformFeedbacki64_v = wglGetProcAddress("glGetTransformFeedbacki64_v");
  if ((____glewGetTransformFeedbacki64_v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTransformFeedbacki_v = wglGetProcAddress("glGetTransformFeedbacki_v");
  if ((____glewGetTransformFeedbacki_v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTransformFeedbackiv = wglGetProcAddress("glGetTransformFeedbackiv");
  if ((____glewGetTransformFeedbackiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexArrayIndexed64iv = wglGetProcAddress("glGetVertexArrayIndexed64iv");
  if ((____glewGetVertexArrayIndexed64iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexArrayIndexediv = wglGetProcAddress("glGetVertexArrayIndexediv");
  if ((____glewGetVertexArrayIndexediv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexArrayiv = wglGetProcAddress("glGetVertexArrayiv");
  if ((____glewGetVertexArrayiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewInvalidateNamedFramebufferData = wglGetProcAddress("glInvalidateNamedFramebufferData");
  if ((____glewInvalidateNamedFramebufferData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewInvalidateNamedFramebufferSubData =
       wglGetProcAddress("glInvalidateNamedFramebufferSubData");
  if ((____glewInvalidateNamedFramebufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapNamedBuffer = wglGetProcAddress("glMapNamedBuffer");
  if ((____glewMapNamedBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapNamedBufferRange = wglGetProcAddress("glMapNamedBufferRange");
  if ((____glewMapNamedBufferRange == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedBufferData = wglGetProcAddress("glNamedBufferData");
  if ((____glewNamedBufferData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedBufferStorage = wglGetProcAddress("glNamedBufferStorage");
  if ((____glewNamedBufferStorage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedBufferSubData = wglGetProcAddress("glNamedBufferSubData");
  if ((____glewNamedBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferDrawBuffer = wglGetProcAddress("glNamedFramebufferDrawBuffer");
  if ((____glewNamedFramebufferDrawBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferDrawBuffers = wglGetProcAddress("glNamedFramebufferDrawBuffers");
  if ((____glewNamedFramebufferDrawBuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferParameteri = wglGetProcAddress("glNamedFramebufferParameteri");
  if ((____glewNamedFramebufferParameteri == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferReadBuffer = wglGetProcAddress("glNamedFramebufferReadBuffer");
  if ((____glewNamedFramebufferReadBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferRenderbuffer = wglGetProcAddress("glNamedFramebufferRenderbuffer");
  if ((____glewNamedFramebufferRenderbuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTexture = wglGetProcAddress("glNamedFramebufferTexture");
  if ((____glewNamedFramebufferTexture == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTextureLayer = wglGetProcAddress("glNamedFramebufferTextureLayer");
  if ((____glewNamedFramebufferTextureLayer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedRenderbufferStorage = wglGetProcAddress("glNamedRenderbufferStorage");
  if ((____glewNamedRenderbufferStorage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedRenderbufferStorageMultisample =
       wglGetProcAddress("glNamedRenderbufferStorageMultisample");
  if ((____glewNamedRenderbufferStorageMultisample == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureBuffer = wglGetProcAddress("glTextureBuffer");
  if ((____glewTextureBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureBufferRange = wglGetProcAddress("glTextureBufferRange");
  if ((____glewTextureBufferRange == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterIiv = wglGetProcAddress("glTextureParameterIiv");
  if ((____glewTextureParameterIiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterIuiv = wglGetProcAddress("glTextureParameterIuiv");
  if ((____glewTextureParameterIuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterf = wglGetProcAddress("glTextureParameterf");
  if ((____glewTextureParameterf == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterfv = wglGetProcAddress("glTextureParameterfv");
  if ((____glewTextureParameterfv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameteri = wglGetProcAddress("glTextureParameteri");
  if ((____glewTextureParameteri == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameteriv = wglGetProcAddress("glTextureParameteriv");
  if ((____glewTextureParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage1D = wglGetProcAddress("glTextureStorage1D");
  if ((____glewTextureStorage1D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage2D = wglGetProcAddress("glTextureStorage2D");
  if ((____glewTextureStorage2D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage2DMultisample = wglGetProcAddress("glTextureStorage2DMultisample");
  if ((____glewTextureStorage2DMultisample == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage3D = wglGetProcAddress("glTextureStorage3D");
  if ((____glewTextureStorage3D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage3DMultisample = wglGetProcAddress("glTextureStorage3DMultisample");
  if ((____glewTextureStorage3DMultisample == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureSubImage1D = wglGetProcAddress("glTextureSubImage1D");
  if ((____glewTextureSubImage1D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureSubImage2D = wglGetProcAddress("glTextureSubImage2D");
  if ((____glewTextureSubImage2D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureSubImage3D = wglGetProcAddress("glTextureSubImage3D");
  if ((____glewTextureSubImage3D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTransformFeedbackBufferBase = wglGetProcAddress("glTransformFeedbackBufferBase");
  if ((____glewTransformFeedbackBufferBase == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTransformFeedbackBufferRange = wglGetProcAddress("glTransformFeedbackBufferRange");
  if ((____glewTransformFeedbackBufferRange == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUnmapNamedBuffer = wglGetProcAddress("glUnmapNamedBuffer");
  if ((____glewUnmapNamedBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayAttribBinding = wglGetProcAddress("glVertexArrayAttribBinding");
  if ((____glewVertexArrayAttribBinding == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayAttribFormat = wglGetProcAddress("glVertexArrayAttribFormat");
  if ((____glewVertexArrayAttribFormat == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayAttribIFormat = wglGetProcAddress("glVertexArrayAttribIFormat");
  if ((____glewVertexArrayAttribIFormat == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayAttribLFormat = wglGetProcAddress("glVertexArrayAttribLFormat");
  if ((____glewVertexArrayAttribLFormat == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayBindingDivisor = wglGetProcAddress("glVertexArrayBindingDivisor");
  if ((____glewVertexArrayBindingDivisor == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayElementBuffer = wglGetProcAddress("glVertexArrayElementBuffer");
  if ((____glewVertexArrayElementBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayVertexBuffer = wglGetProcAddress("glVertexArrayVertexBuffer");
  if ((____glewVertexArrayVertexBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayVertexBuffers = wglGetProcAddress("glVertexArrayVertexBuffers");
  if ((____glewVertexArrayVertexBuffers != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000848b20 00848b20_FUN_00848b20 ====
undefined4 FUN_00848b20(void);

// decompiled by BatchDecomp @ 00848b20 name=FUN_00848b20 conv=unknown body=803

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848b20(void)

{
  bool bVar1;
  
  ____glewGetUniformi64vARB = wglGetProcAddress("glGetUniformi64vARB");
  bVar1 = ____glewGetUniformi64vARB == (PROC)0x0;
  ____glewGetUniformui64vARB = wglGetProcAddress("glGetUniformui64vARB");
  if ((____glewGetUniformui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetnUniformi64vARB = wglGetProcAddress("glGetnUniformi64vARB");
  if ((____glewGetnUniformi64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetnUniformui64vARB = wglGetProcAddress("glGetnUniformui64vARB");
  if ((____glewGetnUniformui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1i64ARB = wglGetProcAddress("glProgramUniform1i64ARB");
  if ((____glewProgramUniform1i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1i64vARB = wglGetProcAddress("glProgramUniform1i64vARB");
  if ((____glewProgramUniform1i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1ui64ARB = wglGetProcAddress("glProgramUniform1ui64ARB");
  if ((____glewProgramUniform1ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1ui64vARB = wglGetProcAddress("glProgramUniform1ui64vARB");
  if ((____glewProgramUniform1ui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2i64ARB = wglGetProcAddress("glProgramUniform2i64ARB");
  if ((____glewProgramUniform2i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2i64vARB = wglGetProcAddress("glProgramUniform2i64vARB");
  if ((____glewProgramUniform2i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2ui64ARB = wglGetProcAddress("glProgramUniform2ui64ARB");
  if ((____glewProgramUniform2ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2ui64vARB = wglGetProcAddress("glProgramUniform2ui64vARB");
  if ((____glewProgramUniform2ui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3i64ARB = wglGetProcAddress("glProgramUniform3i64ARB");
  if ((____glewProgramUniform3i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3i64vARB = wglGetProcAddress("glProgramUniform3i64vARB");
  if ((____glewProgramUniform3i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3ui64ARB = wglGetProcAddress("glProgramUniform3ui64ARB");
  if ((____glewProgramUniform3ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3ui64vARB = wglGetProcAddress("glProgramUniform3ui64vARB");
  if ((____glewProgramUniform3ui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4i64ARB = wglGetProcAddress("glProgramUniform4i64ARB");
  if ((____glewProgramUniform4i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4i64vARB = wglGetProcAddress("glProgramUniform4i64vARB");
  if ((____glewProgramUniform4i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4ui64ARB = wglGetProcAddress("glProgramUniform4ui64ARB");
  if ((____glewProgramUniform4ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4ui64vARB = wglGetProcAddress("glProgramUniform4ui64vARB");
  if ((____glewProgramUniform4ui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1i64ARB = wglGetProcAddress("glUniform1i64ARB");
  if ((____glewUniform1i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1i64vARB = wglGetProcAddress("glUniform1i64vARB");
  if ((____glewUniform1i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1ui64ARB = wglGetProcAddress("glUniform1ui64ARB");
  if ((____glewUniform1ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1ui64vARB = wglGetProcAddress("glUniform1ui64vARB");
  if ((____glewUniform1ui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2i64ARB = wglGetProcAddress("glUniform2i64ARB");
  if ((____glewUniform2i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2i64vARB = wglGetProcAddress("glUniform2i64vARB");
  if ((____glewUniform2i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2ui64ARB = wglGetProcAddress("glUniform2ui64ARB");
  if ((____glewUniform2ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2ui64vARB = wglGetProcAddress("glUniform2ui64vARB");
  if ((____glewUniform2ui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3i64ARB = wglGetProcAddress("glUniform3i64ARB");
  if ((____glewUniform3i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3i64vARB = wglGetProcAddress("glUniform3i64vARB");
  if ((____glewUniform3i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3ui64ARB = wglGetProcAddress("glUniform3ui64ARB");
  if ((____glewUniform3ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3ui64vARB = wglGetProcAddress("glUniform3ui64vARB");
  if ((____glewUniform3ui64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4i64ARB = wglGetProcAddress("glUniform4i64ARB");
  if ((____glewUniform4i64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4i64vARB = wglGetProcAddress("glUniform4i64vARB");
  if ((____glewUniform4i64vARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4ui64ARB = wglGetProcAddress("glUniform4ui64ARB");
  if ((____glewUniform4ui64ARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4ui64vARB = wglGetProcAddress("glUniform4ui64vARB");
  if ((____glewUniform4ui64vARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849460 00849460_FUN_00849460 ====
undefined4 FUN_00849460(void);

// decompiled by BatchDecomp @ 00849460 name=FUN_00849460 conv=unknown body=759

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849460(void)

{
  bool bVar1;
  
  ____glewActiveTextureARB = wglGetProcAddress("glActiveTextureARB");
  bVar1 = ____glewActiveTextureARB == (PROC)0x0;
  ____glewClientActiveTextureARB = wglGetProcAddress("glClientActiveTextureARB");
  if ((____glewClientActiveTextureARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1dARB = wglGetProcAddress("glMultiTexCoord1dARB");
  if ((____glewMultiTexCoord1dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1dvARB = wglGetProcAddress("glMultiTexCoord1dvARB");
  if ((____glewMultiTexCoord1dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1fARB = wglGetProcAddress("glMultiTexCoord1fARB");
  if ((____glewMultiTexCoord1fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1fvARB = wglGetProcAddress("glMultiTexCoord1fvARB");
  if ((____glewMultiTexCoord1fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1iARB = wglGetProcAddress("glMultiTexCoord1iARB");
  if ((____glewMultiTexCoord1iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1ivARB = wglGetProcAddress("glMultiTexCoord1ivARB");
  if ((____glewMultiTexCoord1ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1sARB = wglGetProcAddress("glMultiTexCoord1sARB");
  if ((____glewMultiTexCoord1sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1svARB = wglGetProcAddress("glMultiTexCoord1svARB");
  if ((____glewMultiTexCoord1svARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2dARB = wglGetProcAddress("glMultiTexCoord2dARB");
  if ((____glewMultiTexCoord2dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2dvARB = wglGetProcAddress("glMultiTexCoord2dvARB");
  if ((____glewMultiTexCoord2dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2fARB = wglGetProcAddress("glMultiTexCoord2fARB");
  if ((____glewMultiTexCoord2fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2fvARB = wglGetProcAddress("glMultiTexCoord2fvARB");
  if ((____glewMultiTexCoord2fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2iARB = wglGetProcAddress("glMultiTexCoord2iARB");
  if ((____glewMultiTexCoord2iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2ivARB = wglGetProcAddress("glMultiTexCoord2ivARB");
  if ((____glewMultiTexCoord2ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2sARB = wglGetProcAddress("glMultiTexCoord2sARB");
  if ((____glewMultiTexCoord2sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2svARB = wglGetProcAddress("glMultiTexCoord2svARB");
  if ((____glewMultiTexCoord2svARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3dARB = wglGetProcAddress("glMultiTexCoord3dARB");
  if ((____glewMultiTexCoord3dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3dvARB = wglGetProcAddress("glMultiTexCoord3dvARB");
  if ((____glewMultiTexCoord3dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3fARB = wglGetProcAddress("glMultiTexCoord3fARB");
  if ((____glewMultiTexCoord3fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3fvARB = wglGetProcAddress("glMultiTexCoord3fvARB");
  if ((____glewMultiTexCoord3fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3iARB = wglGetProcAddress("glMultiTexCoord3iARB");
  if ((____glewMultiTexCoord3iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3ivARB = wglGetProcAddress("glMultiTexCoord3ivARB");
  if ((____glewMultiTexCoord3ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3sARB = wglGetProcAddress("glMultiTexCoord3sARB");
  if ((____glewMultiTexCoord3sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3svARB = wglGetProcAddress("glMultiTexCoord3svARB");
  if ((____glewMultiTexCoord3svARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4dARB = wglGetProcAddress("glMultiTexCoord4dARB");
  if ((____glewMultiTexCoord4dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4dvARB = wglGetProcAddress("glMultiTexCoord4dvARB");
  if ((____glewMultiTexCoord4dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4fARB = wglGetProcAddress("glMultiTexCoord4fARB");
  if ((____glewMultiTexCoord4fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4fvARB = wglGetProcAddress("glMultiTexCoord4fvARB");
  if ((____glewMultiTexCoord4fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4iARB = wglGetProcAddress("glMultiTexCoord4iARB");
  if ((____glewMultiTexCoord4iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4ivARB = wglGetProcAddress("glMultiTexCoord4ivARB");
  if ((____glewMultiTexCoord4ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4sARB = wglGetProcAddress("glMultiTexCoord4sARB");
  if ((____glewMultiTexCoord4sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4svARB = wglGetProcAddress("glMultiTexCoord4svARB");
  if ((____glewMultiTexCoord4svARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849cc0 00849cc0_FUN_00849cc0 ====
undefined4 FUN_00849cc0(void);

// decompiled by BatchDecomp @ 00849cc0 name=FUN_00849cc0 conv=unknown body=1331

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849cc0(void)

{
  bool bVar1;
  
  ____glewActiveShaderProgram = wglGetProcAddress("glActiveShaderProgram");
  bVar1 = ____glewActiveShaderProgram == (PROC)0x0;
  ____glewBindProgramPipeline = wglGetProcAddress("glBindProgramPipeline");
  if ((____glewBindProgramPipeline == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateShaderProgramv = wglGetProcAddress("glCreateShaderProgramv");
  if ((____glewCreateShaderProgramv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteProgramPipelines = wglGetProcAddress("glDeleteProgramPipelines");
  if ((____glewDeleteProgramPipelines == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenProgramPipelines = wglGetProcAddress("glGenProgramPipelines");
  if ((____glewGenProgramPipelines == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramPipelineInfoLog = wglGetProcAddress("glGetProgramPipelineInfoLog");
  if ((____glewGetProgramPipelineInfoLog == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramPipelineiv = wglGetProcAddress("glGetProgramPipelineiv");
  if ((____glewGetProgramPipelineiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsProgramPipeline = wglGetProcAddress("glIsProgramPipeline");
  if ((____glewIsProgramPipeline == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1d = wglGetProcAddress("glProgramUniform1d");
  if ((____glewProgramUniform1d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1dv = wglGetProcAddress("glProgramUniform1dv");
  if ((____glewProgramUniform1dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1f = wglGetProcAddress("glProgramUniform1f");
  if ((____glewProgramUniform1f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1fv = wglGetProcAddress("glProgramUniform1fv");
  if ((____glewProgramUniform1fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1i = wglGetProcAddress("glProgramUniform1i");
  if ((____glewProgramUniform1i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1iv = wglGetProcAddress("glProgramUniform1iv");
  if ((____glewProgramUniform1iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1ui = wglGetProcAddress("glProgramUniform1ui");
  if ((____glewProgramUniform1ui == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1uiv = wglGetProcAddress("glProgramUniform1uiv");
  if ((____glewProgramUniform1uiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2d = wglGetProcAddress("glProgramUniform2d");
  if ((____glewProgramUniform2d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2dv = wglGetProcAddress("glProgramUniform2dv");
  if ((____glewProgramUniform2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2f = wglGetProcAddress("glProgramUniform2f");
  if ((____glewProgramUniform2f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2fv = wglGetProcAddress("glProgramUniform2fv");
  if ((____glewProgramUniform2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2i = wglGetProcAddress("glProgramUniform2i");
  if ((____glewProgramUniform2i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2iv = wglGetProcAddress("glProgramUniform2iv");
  if ((____glewProgramUniform2iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2ui = wglGetProcAddress("glProgramUniform2ui");
  if ((____glewProgramUniform2ui == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2uiv = wglGetProcAddress("glProgramUniform2uiv");
  if ((____glewProgramUniform2uiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3d = wglGetProcAddress("glProgramUniform3d");
  if ((____glewProgramUniform3d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3dv = wglGetProcAddress("glProgramUniform3dv");
  if ((____glewProgramUniform3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3f = wglGetProcAddress("glProgramUniform3f");
  if ((____glewProgramUniform3f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3fv = wglGetProcAddress("glProgramUniform3fv");
  if ((____glewProgramUniform3fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3i = wglGetProcAddress("glProgramUniform3i");
  if ((____glewProgramUniform3i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3iv = wglGetProcAddress("glProgramUniform3iv");
  if ((____glewProgramUniform3iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3ui = wglGetProcAddress("glProgramUniform3ui");
  if ((____glewProgramUniform3ui == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3uiv = wglGetProcAddress("glProgramUniform3uiv");
  if ((____glewProgramUniform3uiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4d = wglGetProcAddress("glProgramUniform4d");
  if ((____glewProgramUniform4d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4dv = wglGetProcAddress("glProgramUniform4dv");
  if ((____glewProgramUniform4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4f = wglGetProcAddress("glProgramUniform4f");
  if ((____glewProgramUniform4f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4fv = wglGetProcAddress("glProgramUniform4fv");
  if ((____glewProgramUniform4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4i = wglGetProcAddress("glProgramUniform4i");
  if ((____glewProgramUniform4i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4iv = wglGetProcAddress("glProgramUniform4iv");
  if ((____glewProgramUniform4iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4ui = wglGetProcAddress("glProgramUniform4ui");
  if ((____glewProgramUniform4ui == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4uiv = wglGetProcAddress("glProgramUniform4uiv");
  if ((____glewProgramUniform4uiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2dv = wglGetProcAddress("glProgramUniformMatrix2dv");
  if ((____glewProgramUniformMatrix2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2fv = wglGetProcAddress("glProgramUniformMatrix2fv");
  if ((____glewProgramUniformMatrix2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2x3dv = wglGetProcAddress("glProgramUniformMatrix2x3dv");
  if ((____glewProgramUniformMatrix2x3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2x3fv = wglGetProcAddress("glProgramUniformMatrix2x3fv");
  if ((____glewProgramUniformMatrix2x3fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2x4dv = wglGetProcAddress("glProgramUniformMatrix2x4dv");
  if ((____glewProgramUniformMatrix2x4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2x4fv = wglGetProcAddress("glProgramUniformMatrix2x4fv");
  if ((____glewProgramUniformMatrix2x4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3dv = wglGetProcAddress("glProgramUniformMatrix3dv");
  if ((____glewProgramUniformMatrix3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3fv = wglGetProcAddress("glProgramUniformMatrix3fv");
  if ((____glewProgramUniformMatrix3fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3x2dv = wglGetProcAddress("glProgramUniformMatrix3x2dv");
  if ((____glewProgramUniformMatrix3x2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3x2fv = wglGetProcAddress("glProgramUniformMatrix3x2fv");
  if ((____glewProgramUniformMatrix3x2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3x4dv = wglGetProcAddress("glProgramUniformMatrix3x4dv");
  if ((____glewProgramUniformMatrix3x4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3x4fv = wglGetProcAddress("glProgramUniformMatrix3x4fv");
  if ((____glewProgramUniformMatrix3x4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4dv = wglGetProcAddress("glProgramUniformMatrix4dv");
  if ((____glewProgramUniformMatrix4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4fv = wglGetProcAddress("glProgramUniformMatrix4fv");
  if ((____glewProgramUniformMatrix4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4x2dv = wglGetProcAddress("glProgramUniformMatrix4x2dv");
  if ((____glewProgramUniformMatrix4x2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4x2fv = wglGetProcAddress("glProgramUniformMatrix4x2fv");
  if ((____glewProgramUniformMatrix4x2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4x3dv = wglGetProcAddress("glProgramUniformMatrix4x3dv");
  if ((____glewProgramUniformMatrix4x3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4x3fv = wglGetProcAddress("glProgramUniformMatrix4x3fv");
  if ((____glewProgramUniformMatrix4x3fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUseProgramStages = wglGetProcAddress("glUseProgramStages");
  if ((____glewUseProgramStages == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewValidateProgramPipeline = wglGetProcAddress("glValidateProgramPipeline");
  if ((____glewValidateProgramPipeline != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a260 0084a260_FUN_0084a260 ====
undefined4 FUN_0084a260(void);

// decompiled by BatchDecomp @ 0084a260 name=FUN_0084a260 conv=unknown body=869

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a260(void)

{
  bool bVar1;
  
  ____glewAttachObjectARB = wglGetProcAddress("glAttachObjectARB");
  bVar1 = ____glewAttachObjectARB == (PROC)0x0;
  ____glewCompileShaderARB = wglGetProcAddress("glCompileShaderARB");
  if ((____glewCompileShaderARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateProgramObjectARB = wglGetProcAddress("glCreateProgramObjectARB");
  if ((____glewCreateProgramObjectARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCreateShaderObjectARB = wglGetProcAddress("glCreateShaderObjectARB");
  if ((____glewCreateShaderObjectARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteObjectARB = wglGetProcAddress("glDeleteObjectARB");
  if ((____glewDeleteObjectARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDetachObjectARB = wglGetProcAddress("glDetachObjectARB");
  if ((____glewDetachObjectARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveUniformARB = wglGetProcAddress("glGetActiveUniformARB");
  if ((____glewGetActiveUniformARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetAttachedObjectsARB = wglGetProcAddress("glGetAttachedObjectsARB");
  if ((____glewGetAttachedObjectsARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetHandleARB = wglGetProcAddress("glGetHandleARB");
  if ((____glewGetHandleARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetInfoLogARB = wglGetProcAddress("glGetInfoLogARB");
  if ((____glewGetInfoLogARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetObjectParameterfvARB = wglGetProcAddress("glGetObjectParameterfvARB");
  if ((____glewGetObjectParameterfvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetObjectParameterivARB = wglGetProcAddress("glGetObjectParameterivARB");
  if ((____glewGetObjectParameterivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetShaderSourceARB = wglGetProcAddress("glGetShaderSourceARB");
  if ((____glewGetShaderSourceARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformLocationARB = wglGetProcAddress("glGetUniformLocationARB");
  if ((____glewGetUniformLocationARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformfvARB = wglGetProcAddress("glGetUniformfvARB");
  if ((____glewGetUniformfvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformivARB = wglGetProcAddress("glGetUniformivARB");
  if ((____glewGetUniformivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewLinkProgramARB = wglGetProcAddress("glLinkProgramARB");
  if ((____glewLinkProgramARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewShaderSourceARB = wglGetProcAddress("glShaderSourceARB");
  if ((____glewShaderSourceARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1fARB = wglGetProcAddress("glUniform1fARB");
  if ((____glewUniform1fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1fvARB = wglGetProcAddress("glUniform1fvARB");
  if ((____glewUniform1fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1iARB = wglGetProcAddress("glUniform1iARB");
  if ((____glewUniform1iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1ivARB = wglGetProcAddress("glUniform1ivARB");
  if ((____glewUniform1ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2fARB = wglGetProcAddress("glUniform2fARB");
  if ((____glewUniform2fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2fvARB = wglGetProcAddress("glUniform2fvARB");
  if ((____glewUniform2fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2iARB = wglGetProcAddress("glUniform2iARB");
  if ((____glewUniform2iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2ivARB = wglGetProcAddress("glUniform2ivARB");
  if ((____glewUniform2ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3fARB = wglGetProcAddress("glUniform3fARB");
  if ((____glewUniform3fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3fvARB = wglGetProcAddress("glUniform3fvARB");
  if ((____glewUniform3fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3iARB = wglGetProcAddress("glUniform3iARB");
  if ((____glewUniform3iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3ivARB = wglGetProcAddress("glUniform3ivARB");
  if ((____glewUniform3ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4fARB = wglGetProcAddress("glUniform4fARB");
  if ((____glewUniform4fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4fvARB = wglGetProcAddress("glUniform4fvARB");
  if ((____glewUniform4fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4iARB = wglGetProcAddress("glUniform4iARB");
  if ((____glewUniform4iARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4ivARB = wglGetProcAddress("glUniform4ivARB");
  if ((____glewUniform4ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix2fvARB = wglGetProcAddress("glUniformMatrix2fvARB");
  if ((____glewUniformMatrix2fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix3fvARB = wglGetProcAddress("glUniformMatrix3fvARB");
  if ((____glewUniformMatrix3fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix4fvARB = wglGetProcAddress("glUniformMatrix4fvARB");
  if ((____glewUniformMatrix4fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUseProgramObjectARB = wglGetProcAddress("glUseProgramObjectARB");
  if ((____glewUseProgramObjectARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewValidateProgramARB = wglGetProcAddress("glValidateProgramARB");
  if ((____glewValidateProgramARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084b2d0 0084b2d0_FUN_0084b2d0 ====
undefined4 FUN_0084b2d0(void);

// decompiled by BatchDecomp @ 0084b2d0 name=FUN_0084b2d0 conv=unknown body=1375

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084b2d0(void)

{
  bool bVar1;
  
  ____glewBindProgramARB = wglGetProcAddress("glBindProgramARB");
  bVar1 = ____glewBindProgramARB == (PROC)0x0;
  ____glewDeleteProgramsARB = wglGetProcAddress("glDeleteProgramsARB");
  if ((____glewDeleteProgramsARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDisableVertexAttribArrayARB = wglGetProcAddress("glDisableVertexAttribArrayARB");
  if ((____glewDisableVertexAttribArrayARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableVertexAttribArrayARB = wglGetProcAddress("glEnableVertexAttribArrayARB");
  if ((____glewEnableVertexAttribArrayARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenProgramsARB = wglGetProcAddress("glGenProgramsARB");
  if ((____glewGenProgramsARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramEnvParameterdvARB = wglGetProcAddress("glGetProgramEnvParameterdvARB");
  if ((____glewGetProgramEnvParameterdvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramEnvParameterfvARB = wglGetProcAddress("glGetProgramEnvParameterfvARB");
  if ((____glewGetProgramEnvParameterfvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramLocalParameterdvARB = wglGetProcAddress("glGetProgramLocalParameterdvARB");
  if ((____glewGetProgramLocalParameterdvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramLocalParameterfvARB = wglGetProcAddress("glGetProgramLocalParameterfvARB");
  if ((____glewGetProgramLocalParameterfvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramStringARB = wglGetProcAddress("glGetProgramStringARB");
  if ((____glewGetProgramStringARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramivARB = wglGetProcAddress("glGetProgramivARB");
  if ((____glewGetProgramivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribPointervARB = wglGetProcAddress("glGetVertexAttribPointervARB");
  if ((____glewGetVertexAttribPointervARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribdvARB = wglGetProcAddress("glGetVertexAttribdvARB");
  if ((____glewGetVertexAttribdvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribfvARB = wglGetProcAddress("glGetVertexAttribfvARB");
  if ((____glewGetVertexAttribfvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribivARB = wglGetProcAddress("glGetVertexAttribivARB");
  if ((____glewGetVertexAttribivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsProgramARB = wglGetProcAddress("glIsProgramARB");
  if ((____glewIsProgramARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramEnvParameter4dARB = wglGetProcAddress("glProgramEnvParameter4dARB");
  if ((____glewProgramEnvParameter4dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramEnvParameter4dvARB = wglGetProcAddress("glProgramEnvParameter4dvARB");
  if ((____glewProgramEnvParameter4dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramEnvParameter4fARB = wglGetProcAddress("glProgramEnvParameter4fARB");
  if ((____glewProgramEnvParameter4fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramEnvParameter4fvARB = wglGetProcAddress("glProgramEnvParameter4fvARB");
  if ((____glewProgramEnvParameter4fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramLocalParameter4dARB = wglGetProcAddress("glProgramLocalParameter4dARB");
  if ((____glewProgramLocalParameter4dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramLocalParameter4dvARB = wglGetProcAddress("glProgramLocalParameter4dvARB");
  if ((____glewProgramLocalParameter4dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramLocalParameter4fARB = wglGetProcAddress("glProgramLocalParameter4fARB");
  if ((____glewProgramLocalParameter4fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramLocalParameter4fvARB = wglGetProcAddress("glProgramLocalParameter4fvARB");
  if ((____glewProgramLocalParameter4fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramStringARB = wglGetProcAddress("glProgramStringARB");
  if ((____glewProgramStringARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1dARB = wglGetProcAddress("glVertexAttrib1dARB");
  if ((____glewVertexAttrib1dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1dvARB = wglGetProcAddress("glVertexAttrib1dvARB");
  if ((____glewVertexAttrib1dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1fARB = wglGetProcAddress("glVertexAttrib1fARB");
  if ((____glewVertexAttrib1fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1fvARB = wglGetProcAddress("glVertexAttrib1fvARB");
  if ((____glewVertexAttrib1fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1sARB = wglGetProcAddress("glVertexAttrib1sARB");
  if ((____glewVertexAttrib1sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1svARB = wglGetProcAddress("glVertexAttrib1svARB");
  if ((____glewVertexAttrib1svARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2dARB = wglGetProcAddress("glVertexAttrib2dARB");
  if ((____glewVertexAttrib2dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2dvARB = wglGetProcAddress("glVertexAttrib2dvARB");
  if ((____glewVertexAttrib2dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2fARB = wglGetProcAddress("glVertexAttrib2fARB");
  if ((____glewVertexAttrib2fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2fvARB = wglGetProcAddress("glVertexAttrib2fvARB");
  if ((____glewVertexAttrib2fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2sARB = wglGetProcAddress("glVertexAttrib2sARB");
  if ((____glewVertexAttrib2sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2svARB = wglGetProcAddress("glVertexAttrib2svARB");
  if ((____glewVertexAttrib2svARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3dARB = wglGetProcAddress("glVertexAttrib3dARB");
  if ((____glewVertexAttrib3dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3dvARB = wglGetProcAddress("glVertexAttrib3dvARB");
  if ((____glewVertexAttrib3dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3fARB = wglGetProcAddress("glVertexAttrib3fARB");
  if ((____glewVertexAttrib3fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3fvARB = wglGetProcAddress("glVertexAttrib3fvARB");
  if ((____glewVertexAttrib3fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3sARB = wglGetProcAddress("glVertexAttrib3sARB");
  if ((____glewVertexAttrib3sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3svARB = wglGetProcAddress("glVertexAttrib3svARB");
  if ((____glewVertexAttrib3svARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4NbvARB = wglGetProcAddress("glVertexAttrib4NbvARB");
  if ((____glewVertexAttrib4NbvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4NivARB = wglGetProcAddress("glVertexAttrib4NivARB");
  if ((____glewVertexAttrib4NivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4NsvARB = wglGetProcAddress("glVertexAttrib4NsvARB");
  if ((____glewVertexAttrib4NsvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4NubARB = wglGetProcAddress("glVertexAttrib4NubARB");
  if ((____glewVertexAttrib4NubARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4NubvARB = wglGetProcAddress("glVertexAttrib4NubvARB");
  if ((____glewVertexAttrib4NubvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4NuivARB = wglGetProcAddress("glVertexAttrib4NuivARB");
  if ((____glewVertexAttrib4NuivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4NusvARB = wglGetProcAddress("glVertexAttrib4NusvARB");
  if ((____glewVertexAttrib4NusvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4bvARB = wglGetProcAddress("glVertexAttrib4bvARB");
  if ((____glewVertexAttrib4bvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4dARB = wglGetProcAddress("glVertexAttrib4dARB");
  if ((____glewVertexAttrib4dARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4dvARB = wglGetProcAddress("glVertexAttrib4dvARB");
  if ((____glewVertexAttrib4dvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4fARB = wglGetProcAddress("glVertexAttrib4fARB");
  if ((____glewVertexAttrib4fARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4fvARB = wglGetProcAddress("glVertexAttrib4fvARB");
  if ((____glewVertexAttrib4fvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4ivARB = wglGetProcAddress("glVertexAttrib4ivARB");
  if ((____glewVertexAttrib4ivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4sARB = wglGetProcAddress("glVertexAttrib4sARB");
  if ((____glewVertexAttrib4sARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4svARB = wglGetProcAddress("glVertexAttrib4svARB");
  if ((____glewVertexAttrib4svARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4ubvARB = wglGetProcAddress("glVertexAttrib4ubvARB");
  if ((____glewVertexAttrib4ubvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4uivARB = wglGetProcAddress("glVertexAttrib4uivARB");
  if ((____glewVertexAttrib4uivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4usvARB = wglGetProcAddress("glVertexAttrib4usvARB");
  if ((____glewVertexAttrib4usvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribPointerARB = wglGetProcAddress("glVertexAttribPointerARB");
  if ((____glewVertexAttribPointerARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c280 0084c280_FUN_0084c280 ====
undefined4 FUN_0084c280(void);

// decompiled by BatchDecomp @ 0084c280 name=FUN_0084c280 conv=unknown body=1001

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c280(void)

{
  bool bVar1;
  
  ____glewClientActiveVertexStreamATI = wglGetProcAddress("glClientActiveVertexStreamATI");
  bVar1 = ____glewClientActiveVertexStreamATI == (PROC)0x0;
  ____glewNormalStream3bATI = wglGetProcAddress("glNormalStream3bATI");
  if ((____glewNormalStream3bATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3bvATI = wglGetProcAddress("glNormalStream3bvATI");
  if ((____glewNormalStream3bvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3dATI = wglGetProcAddress("glNormalStream3dATI");
  if ((____glewNormalStream3dATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3dvATI = wglGetProcAddress("glNormalStream3dvATI");
  if ((____glewNormalStream3dvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3fATI = wglGetProcAddress("glNormalStream3fATI");
  if ((____glewNormalStream3fATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3fvATI = wglGetProcAddress("glNormalStream3fvATI");
  if ((____glewNormalStream3fvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3iATI = wglGetProcAddress("glNormalStream3iATI");
  if ((____glewNormalStream3iATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3ivATI = wglGetProcAddress("glNormalStream3ivATI");
  if ((____glewNormalStream3ivATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3sATI = wglGetProcAddress("glNormalStream3sATI");
  if ((____glewNormalStream3sATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalStream3svATI = wglGetProcAddress("glNormalStream3svATI");
  if ((____glewNormalStream3svATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexBlendEnvfATI = wglGetProcAddress("glVertexBlendEnvfATI");
  if ((____glewVertexBlendEnvfATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexBlendEnviATI = wglGetProcAddress("glVertexBlendEnviATI");
  if ((____glewVertexBlendEnviATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1dATI = wglGetProcAddress("glVertexStream1dATI");
  if ((____glewVertexStream1dATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1dvATI = wglGetProcAddress("glVertexStream1dvATI");
  if ((____glewVertexStream1dvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1fATI = wglGetProcAddress("glVertexStream1fATI");
  if ((____glewVertexStream1fATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1fvATI = wglGetProcAddress("glVertexStream1fvATI");
  if ((____glewVertexStream1fvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1iATI = wglGetProcAddress("glVertexStream1iATI");
  if ((____glewVertexStream1iATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1ivATI = wglGetProcAddress("glVertexStream1ivATI");
  if ((____glewVertexStream1ivATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1sATI = wglGetProcAddress("glVertexStream1sATI");
  if ((____glewVertexStream1sATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream1svATI = wglGetProcAddress("glVertexStream1svATI");
  if ((____glewVertexStream1svATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2dATI = wglGetProcAddress("glVertexStream2dATI");
  if ((____glewVertexStream2dATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2dvATI = wglGetProcAddress("glVertexStream2dvATI");
  if ((____glewVertexStream2dvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2fATI = wglGetProcAddress("glVertexStream2fATI");
  if ((____glewVertexStream2fATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2fvATI = wglGetProcAddress("glVertexStream2fvATI");
  if ((____glewVertexStream2fvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2iATI = wglGetProcAddress("glVertexStream2iATI");
  if ((____glewVertexStream2iATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2ivATI = wglGetProcAddress("glVertexStream2ivATI");
  if ((____glewVertexStream2ivATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2sATI = wglGetProcAddress("glVertexStream2sATI");
  if ((____glewVertexStream2sATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream2svATI = wglGetProcAddress("glVertexStream2svATI");
  if ((____glewVertexStream2svATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3dATI = wglGetProcAddress("glVertexStream3dATI");
  if ((____glewVertexStream3dATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3dvATI = wglGetProcAddress("glVertexStream3dvATI");
  if ((____glewVertexStream3dvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3fATI = wglGetProcAddress("glVertexStream3fATI");
  if ((____glewVertexStream3fATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3fvATI = wglGetProcAddress("glVertexStream3fvATI");
  if ((____glewVertexStream3fvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3iATI = wglGetProcAddress("glVertexStream3iATI");
  if ((____glewVertexStream3iATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3ivATI = wglGetProcAddress("glVertexStream3ivATI");
  if ((____glewVertexStream3ivATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3sATI = wglGetProcAddress("glVertexStream3sATI");
  if ((____glewVertexStream3sATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream3svATI = wglGetProcAddress("glVertexStream3svATI");
  if ((____glewVertexStream3svATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4dATI = wglGetProcAddress("glVertexStream4dATI");
  if ((____glewVertexStream4dATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4dvATI = wglGetProcAddress("glVertexStream4dvATI");
  if ((____glewVertexStream4dvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4fATI = wglGetProcAddress("glVertexStream4fATI");
  if ((____glewVertexStream4fATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4fvATI = wglGetProcAddress("glVertexStream4fvATI");
  if ((____glewVertexStream4fvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4iATI = wglGetProcAddress("glVertexStream4iATI");
  if ((____glewVertexStream4iATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4ivATI = wglGetProcAddress("glVertexStream4ivATI");
  if ((____glewVertexStream4ivATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4sATI = wglGetProcAddress("glVertexStream4sATI");
  if ((____glewVertexStream4sATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexStream4svATI = wglGetProcAddress("glVertexStream4svATI");
  if ((____glewVertexStream4svATI != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084cab0 0084cab0_FUN_0084cab0 ====
undefined4 FUN_0084cab0(void);

// decompiled by BatchDecomp @ 0084cab0 name=FUN_0084cab0 conv=unknown body=4719

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084cab0(void)

{
  bool bVar1;
  
  ____glewBindMultiTextureEXT = wglGetProcAddress("glBindMultiTextureEXT");
  bVar1 = ____glewBindMultiTextureEXT == (PROC)0x0;
  ____glewCheckNamedFramebufferStatusEXT = wglGetProcAddress("glCheckNamedFramebufferStatusEXT");
  if ((____glewCheckNamedFramebufferStatusEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClientAttribDefaultEXT = wglGetProcAddress("glClientAttribDefaultEXT");
  if ((____glewClientAttribDefaultEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedMultiTexImage1DEXT = wglGetProcAddress("glCompressedMultiTexImage1DEXT");
  if ((____glewCompressedMultiTexImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedMultiTexImage2DEXT = wglGetProcAddress("glCompressedMultiTexImage2DEXT");
  if ((____glewCompressedMultiTexImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedMultiTexImage3DEXT = wglGetProcAddress("glCompressedMultiTexImage3DEXT");
  if ((____glewCompressedMultiTexImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedMultiTexSubImage1DEXT = wglGetProcAddress("glCompressedMultiTexSubImage1DEXT");
  if ((____glewCompressedMultiTexSubImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedMultiTexSubImage2DEXT = wglGetProcAddress("glCompressedMultiTexSubImage2DEXT");
  if ((____glewCompressedMultiTexSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedMultiTexSubImage3DEXT = wglGetProcAddress("glCompressedMultiTexSubImage3DEXT");
  if ((____glewCompressedMultiTexSubImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureImage1DEXT = wglGetProcAddress("glCompressedTextureImage1DEXT");
  if ((____glewCompressedTextureImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureImage2DEXT = wglGetProcAddress("glCompressedTextureImage2DEXT");
  if ((____glewCompressedTextureImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureImage3DEXT = wglGetProcAddress("glCompressedTextureImage3DEXT");
  if ((____glewCompressedTextureImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureSubImage1DEXT = wglGetProcAddress("glCompressedTextureSubImage1DEXT");
  if ((____glewCompressedTextureSubImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureSubImage2DEXT = wglGetProcAddress("glCompressedTextureSubImage2DEXT");
  if ((____glewCompressedTextureSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTextureSubImage3DEXT = wglGetProcAddress("glCompressedTextureSubImage3DEXT");
  if ((____glewCompressedTextureSubImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyMultiTexImage1DEXT = wglGetProcAddress("glCopyMultiTexImage1DEXT");
  if ((____glewCopyMultiTexImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyMultiTexImage2DEXT = wglGetProcAddress("glCopyMultiTexImage2DEXT");
  if ((____glewCopyMultiTexImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyMultiTexSubImage1DEXT = wglGetProcAddress("glCopyMultiTexSubImage1DEXT");
  if ((____glewCopyMultiTexSubImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyMultiTexSubImage2DEXT = wglGetProcAddress("glCopyMultiTexSubImage2DEXT");
  if ((____glewCopyMultiTexSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyMultiTexSubImage3DEXT = wglGetProcAddress("glCopyMultiTexSubImage3DEXT");
  if ((____glewCopyMultiTexSubImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureImage1DEXT = wglGetProcAddress("glCopyTextureImage1DEXT");
  if ((____glewCopyTextureImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureImage2DEXT = wglGetProcAddress("glCopyTextureImage2DEXT");
  if ((____glewCopyTextureImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureSubImage1DEXT = wglGetProcAddress("glCopyTextureSubImage1DEXT");
  if ((____glewCopyTextureSubImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureSubImage2DEXT = wglGetProcAddress("glCopyTextureSubImage2DEXT");
  if ((____glewCopyTextureSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTextureSubImage3DEXT = wglGetProcAddress("glCopyTextureSubImage3DEXT");
  if ((____glewCopyTextureSubImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDisableClientStateIndexedEXT = wglGetProcAddress("glDisableClientStateIndexedEXT");
  if ((____glewDisableClientStateIndexedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDisableClientStateiEXT = wglGetProcAddress("glDisableClientStateiEXT");
  if ((____glewDisableClientStateiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDisableVertexArrayAttribEXT = wglGetProcAddress("glDisableVertexArrayAttribEXT");
  if ((____glewDisableVertexArrayAttribEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDisableVertexArrayEXT = wglGetProcAddress("glDisableVertexArrayEXT");
  if ((____glewDisableVertexArrayEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableClientStateIndexedEXT = wglGetProcAddress("glEnableClientStateIndexedEXT");
  if ((____glewEnableClientStateIndexedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableClientStateiEXT = wglGetProcAddress("glEnableClientStateiEXT");
  if ((____glewEnableClientStateiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableVertexArrayAttribEXT = wglGetProcAddress("glEnableVertexArrayAttribEXT");
  if ((____glewEnableVertexArrayAttribEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableVertexArrayEXT = wglGetProcAddress("glEnableVertexArrayEXT");
  if ((____glewEnableVertexArrayEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFlushMappedNamedBufferRangeEXT = wglGetProcAddress("glFlushMappedNamedBufferRangeEXT");
  if ((____glewFlushMappedNamedBufferRangeEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferDrawBufferEXT = wglGetProcAddress("glFramebufferDrawBufferEXT");
  if ((____glewFramebufferDrawBufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferDrawBuffersEXT = wglGetProcAddress("glFramebufferDrawBuffersEXT");
  if ((____glewFramebufferDrawBuffersEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferReadBufferEXT = wglGetProcAddress("glFramebufferReadBufferEXT");
  if ((____glewFramebufferReadBufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenerateMultiTexMipmapEXT = wglGetProcAddress("glGenerateMultiTexMipmapEXT");
  if ((____glewGenerateMultiTexMipmapEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenerateTextureMipmapEXT = wglGetProcAddress("glGenerateTextureMipmapEXT");
  if ((____glewGenerateTextureMipmapEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetCompressedMultiTexImageEXT = wglGetProcAddress("glGetCompressedMultiTexImageEXT");
  if ((____glewGetCompressedMultiTexImageEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetCompressedTextureImageEXT = wglGetProcAddress("glGetCompressedTextureImageEXT");
  if ((____glewGetCompressedTextureImageEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetDoubleIndexedvEXT = wglGetProcAddress("glGetDoubleIndexedvEXT");
  if ((____glewGetDoubleIndexedvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetDoublei_vEXT = wglGetProcAddress("glGetDoublei_vEXT");
  if ((____glewGetDoublei_vEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetFloatIndexedvEXT = wglGetProcAddress("glGetFloatIndexedvEXT");
  if ((____glewGetFloatIndexedvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetFloati_vEXT = wglGetProcAddress("glGetFloati_vEXT");
  if ((____glewGetFloati_vEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetFramebufferParameterivEXT = wglGetProcAddress("glGetFramebufferParameterivEXT");
  if ((____glewGetFramebufferParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexEnvfvEXT = wglGetProcAddress("glGetMultiTexEnvfvEXT");
  if ((____glewGetMultiTexEnvfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexEnvivEXT = wglGetProcAddress("glGetMultiTexEnvivEXT");
  if ((____glewGetMultiTexEnvivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexGendvEXT = wglGetProcAddress("glGetMultiTexGendvEXT");
  if ((____glewGetMultiTexGendvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexGenfvEXT = wglGetProcAddress("glGetMultiTexGenfvEXT");
  if ((____glewGetMultiTexGenfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexGenivEXT = wglGetProcAddress("glGetMultiTexGenivEXT");
  if ((____glewGetMultiTexGenivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexImageEXT = wglGetProcAddress("glGetMultiTexImageEXT");
  if ((____glewGetMultiTexImageEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexLevelParameterfvEXT = wglGetProcAddress("glGetMultiTexLevelParameterfvEXT");
  if ((____glewGetMultiTexLevelParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexLevelParameterivEXT = wglGetProcAddress("glGetMultiTexLevelParameterivEXT");
  if ((____glewGetMultiTexLevelParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexParameterIivEXT = wglGetProcAddress("glGetMultiTexParameterIivEXT");
  if ((____glewGetMultiTexParameterIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexParameterIuivEXT = wglGetProcAddress("glGetMultiTexParameterIuivEXT");
  if ((____glewGetMultiTexParameterIuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexParameterfvEXT = wglGetProcAddress("glGetMultiTexParameterfvEXT");
  if ((____glewGetMultiTexParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMultiTexParameterivEXT = wglGetProcAddress("glGetMultiTexParameterivEXT");
  if ((____glewGetMultiTexParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedBufferParameterivEXT = wglGetProcAddress("glGetNamedBufferParameterivEXT");
  if ((____glewGetNamedBufferParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedBufferPointervEXT = wglGetProcAddress("glGetNamedBufferPointervEXT");
  if ((____glewGetNamedBufferPointervEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedBufferSubDataEXT = wglGetProcAddress("glGetNamedBufferSubDataEXT");
  if ((____glewGetNamedBufferSubDataEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedFramebufferAttachmentParameterivEXT =
       wglGetProcAddress("glGetNamedFramebufferAttachmentParameterivEXT");
  if ((____glewGetNamedFramebufferAttachmentParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedProgramLocalParameterIivEXT =
       wglGetProcAddress("glGetNamedProgramLocalParameterIivEXT");
  if ((____glewGetNamedProgramLocalParameterIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedProgramLocalParameterIuivEXT =
       wglGetProcAddress("glGetNamedProgramLocalParameterIuivEXT");
  if ((____glewGetNamedProgramLocalParameterIuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedProgramLocalParameterdvEXT =
       wglGetProcAddress("glGetNamedProgramLocalParameterdvEXT");
  if ((____glewGetNamedProgramLocalParameterdvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedProgramLocalParameterfvEXT =
       wglGetProcAddress("glGetNamedProgramLocalParameterfvEXT");
  if ((____glewGetNamedProgramLocalParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedProgramStringEXT = wglGetProcAddress("glGetNamedProgramStringEXT");
  if ((____glewGetNamedProgramStringEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedProgramivEXT = wglGetProcAddress("glGetNamedProgramivEXT");
  if ((____glewGetNamedProgramivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedRenderbufferParameterivEXT =
       wglGetProcAddress("glGetNamedRenderbufferParameterivEXT");
  if ((____glewGetNamedRenderbufferParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPointerIndexedvEXT = wglGetProcAddress("glGetPointerIndexedvEXT");
  if ((____glewGetPointerIndexedvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPointeri_vEXT = wglGetProcAddress("glGetPointeri_vEXT");
  if ((____glewGetPointeri_vEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureImageEXT = wglGetProcAddress("glGetTextureImageEXT");
  if ((____glewGetTextureImageEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureLevelParameterfvEXT = wglGetProcAddress("glGetTextureLevelParameterfvEXT");
  if ((____glewGetTextureLevelParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureLevelParameterivEXT = wglGetProcAddress("glGetTextureLevelParameterivEXT");
  if ((____glewGetTextureLevelParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameterIivEXT = wglGetProcAddress("glGetTextureParameterIivEXT");
  if ((____glewGetTextureParameterIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameterIuivEXT = wglGetProcAddress("glGetTextureParameterIuivEXT");
  if ((____glewGetTextureParameterIuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameterfvEXT = wglGetProcAddress("glGetTextureParameterfvEXT");
  if ((____glewGetTextureParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTextureParameterivEXT = wglGetProcAddress("glGetTextureParameterivEXT");
  if ((____glewGetTextureParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexArrayIntegeri_vEXT = wglGetProcAddress("glGetVertexArrayIntegeri_vEXT");
  if ((____glewGetVertexArrayIntegeri_vEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexArrayIntegervEXT = wglGetProcAddress("glGetVertexArrayIntegervEXT");
  if ((____glewGetVertexArrayIntegervEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexArrayPointeri_vEXT = wglGetProcAddress("glGetVertexArrayPointeri_vEXT");
  if ((____glewGetVertexArrayPointeri_vEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexArrayPointervEXT = wglGetProcAddress("glGetVertexArrayPointervEXT");
  if ((____glewGetVertexArrayPointervEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapNamedBufferEXT = wglGetProcAddress("glMapNamedBufferEXT");
  if ((____glewMapNamedBufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapNamedBufferRangeEXT = wglGetProcAddress("glMapNamedBufferRangeEXT");
  if ((____glewMapNamedBufferRangeEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixFrustumEXT = wglGetProcAddress("glMatrixFrustumEXT");
  if ((____glewMatrixFrustumEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixLoadIdentityEXT = wglGetProcAddress("glMatrixLoadIdentityEXT");
  if ((____glewMatrixLoadIdentityEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixLoadTransposedEXT = wglGetProcAddress("glMatrixLoadTransposedEXT");
  if ((____glewMatrixLoadTransposedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixLoadTransposefEXT = wglGetProcAddress("glMatrixLoadTransposefEXT");
  if ((____glewMatrixLoadTransposefEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixLoaddEXT = wglGetProcAddress("glMatrixLoaddEXT");
  if ((____glewMatrixLoaddEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixLoadfEXT = wglGetProcAddress("glMatrixLoadfEXT");
  if ((____glewMatrixLoadfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixMultTransposedEXT = wglGetProcAddress("glMatrixMultTransposedEXT");
  if ((____glewMatrixMultTransposedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixMultTransposefEXT = wglGetProcAddress("glMatrixMultTransposefEXT");
  if ((____glewMatrixMultTransposefEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixMultdEXT = wglGetProcAddress("glMatrixMultdEXT");
  if ((____glewMatrixMultdEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixMultfEXT = wglGetProcAddress("glMatrixMultfEXT");
  if ((____glewMatrixMultfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixOrthoEXT = wglGetProcAddress("glMatrixOrthoEXT");
  if ((____glewMatrixOrthoEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixPopEXT = wglGetProcAddress("glMatrixPopEXT");
  if ((____glewMatrixPopEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixPushEXT = wglGetProcAddress("glMatrixPushEXT");
  if ((____glewMatrixPushEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixRotatedEXT = wglGetProcAddress("glMatrixRotatedEXT");
  if ((____glewMatrixRotatedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixRotatefEXT = wglGetProcAddress("glMatrixRotatefEXT");
  if ((____glewMatrixRotatefEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixScaledEXT = wglGetProcAddress("glMatrixScaledEXT");
  if ((____glewMatrixScaledEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixScalefEXT = wglGetProcAddress("glMatrixScalefEXT");
  if ((____glewMatrixScalefEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixTranslatedEXT = wglGetProcAddress("glMatrixTranslatedEXT");
  if ((____glewMatrixTranslatedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixTranslatefEXT = wglGetProcAddress("glMatrixTranslatefEXT");
  if ((____glewMatrixTranslatefEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexBufferEXT = wglGetProcAddress("glMultiTexBufferEXT");
  if ((____glewMultiTexBufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoordPointerEXT = wglGetProcAddress("glMultiTexCoordPointerEXT");
  if ((____glewMultiTexCoordPointerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexEnvfEXT = wglGetProcAddress("glMultiTexEnvfEXT");
  if ((____glewMultiTexEnvfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexEnvfvEXT = wglGetProcAddress("glMultiTexEnvfvEXT");
  if ((____glewMultiTexEnvfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexEnviEXT = wglGetProcAddress("glMultiTexEnviEXT");
  if ((____glewMultiTexEnviEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexEnvivEXT = wglGetProcAddress("glMultiTexEnvivEXT");
  if ((____glewMultiTexEnvivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexGendEXT = wglGetProcAddress("glMultiTexGendEXT");
  if ((____glewMultiTexGendEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexGendvEXT = wglGetProcAddress("glMultiTexGendvEXT");
  if ((____glewMultiTexGendvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexGenfEXT = wglGetProcAddress("glMultiTexGenfEXT");
  if ((____glewMultiTexGenfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexGenfvEXT = wglGetProcAddress("glMultiTexGenfvEXT");
  if ((____glewMultiTexGenfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexGeniEXT = wglGetProcAddress("glMultiTexGeniEXT");
  if ((____glewMultiTexGeniEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexGenivEXT = wglGetProcAddress("glMultiTexGenivEXT");
  if ((____glewMultiTexGenivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexImage1DEXT = wglGetProcAddress("glMultiTexImage1DEXT");
  if ((____glewMultiTexImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexImage2DEXT = wglGetProcAddress("glMultiTexImage2DEXT");
  if ((____glewMultiTexImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexImage3DEXT = wglGetProcAddress("glMultiTexImage3DEXT");
  if ((____glewMultiTexImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexParameterIivEXT = wglGetProcAddress("glMultiTexParameterIivEXT");
  if ((____glewMultiTexParameterIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexParameterIuivEXT = wglGetProcAddress("glMultiTexParameterIuivEXT");
  if ((____glewMultiTexParameterIuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexParameterfEXT = wglGetProcAddress("glMultiTexParameterfEXT");
  if ((____glewMultiTexParameterfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexParameterfvEXT = wglGetProcAddress("glMultiTexParameterfvEXT");
  if ((____glewMultiTexParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexParameteriEXT = wglGetProcAddress("glMultiTexParameteriEXT");
  if ((____glewMultiTexParameteriEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexParameterivEXT = wglGetProcAddress("glMultiTexParameterivEXT");
  if ((____glewMultiTexParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexRenderbufferEXT = wglGetProcAddress("glMultiTexRenderbufferEXT");
  if ((____glewMultiTexRenderbufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexSubImage1DEXT = wglGetProcAddress("glMultiTexSubImage1DEXT");
  if ((____glewMultiTexSubImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexSubImage2DEXT = wglGetProcAddress("glMultiTexSubImage2DEXT");
  if ((____glewMultiTexSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexSubImage3DEXT = wglGetProcAddress("glMultiTexSubImage3DEXT");
  if ((____glewMultiTexSubImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedBufferDataEXT = wglGetProcAddress("glNamedBufferDataEXT");
  if ((____glewNamedBufferDataEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedBufferSubDataEXT = wglGetProcAddress("glNamedBufferSubDataEXT");
  if ((____glewNamedBufferSubDataEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedCopyBufferSubDataEXT = wglGetProcAddress("glNamedCopyBufferSubDataEXT");
  if ((____glewNamedCopyBufferSubDataEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferRenderbufferEXT = wglGetProcAddress("glNamedFramebufferRenderbufferEXT");
  if ((____glewNamedFramebufferRenderbufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTexture1DEXT = wglGetProcAddress("glNamedFramebufferTexture1DEXT");
  if ((____glewNamedFramebufferTexture1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTexture2DEXT = wglGetProcAddress("glNamedFramebufferTexture2DEXT");
  if ((____glewNamedFramebufferTexture2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTexture3DEXT = wglGetProcAddress("glNamedFramebufferTexture3DEXT");
  if ((____glewNamedFramebufferTexture3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTextureEXT = wglGetProcAddress("glNamedFramebufferTextureEXT");
  if ((____glewNamedFramebufferTextureEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTextureFaceEXT = wglGetProcAddress("glNamedFramebufferTextureFaceEXT");
  if ((____glewNamedFramebufferTextureFaceEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferTextureLayerEXT = wglGetProcAddress("glNamedFramebufferTextureLayerEXT");
  if ((____glewNamedFramebufferTextureLayerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameter4dEXT = wglGetProcAddress("glNamedProgramLocalParameter4dEXT");
  if ((____glewNamedProgramLocalParameter4dEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameter4dvEXT = wglGetProcAddress("glNamedProgramLocalParameter4dvEXT")
  ;
  if ((____glewNamedProgramLocalParameter4dvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameter4fEXT = wglGetProcAddress("glNamedProgramLocalParameter4fEXT");
  if ((____glewNamedProgramLocalParameter4fEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameter4fvEXT = wglGetProcAddress("glNamedProgramLocalParameter4fvEXT")
  ;
  if ((____glewNamedProgramLocalParameter4fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameterI4iEXT = wglGetProcAddress("glNamedProgramLocalParameterI4iEXT")
  ;
  if ((____glewNamedProgramLocalParameterI4iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameterI4ivEXT =
       wglGetProcAddress("glNamedProgramLocalParameterI4ivEXT");
  if ((____glewNamedProgramLocalParameterI4ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameterI4uiEXT =
       wglGetProcAddress("glNamedProgramLocalParameterI4uiEXT");
  if ((____glewNamedProgramLocalParameterI4uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameterI4uivEXT =
       wglGetProcAddress("glNamedProgramLocalParameterI4uivEXT");
  if ((____glewNamedProgramLocalParameterI4uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParameters4fvEXT =
       wglGetProcAddress("glNamedProgramLocalParameters4fvEXT");
  if ((____glewNamedProgramLocalParameters4fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParametersI4ivEXT =
       wglGetProcAddress("glNamedProgramLocalParametersI4ivEXT");
  if ((____glewNamedProgramLocalParametersI4ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramLocalParametersI4uivEXT =
       wglGetProcAddress("glNamedProgramLocalParametersI4uivEXT");
  if ((____glewNamedProgramLocalParametersI4uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedProgramStringEXT = wglGetProcAddress("glNamedProgramStringEXT");
  if ((____glewNamedProgramStringEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedRenderbufferStorageEXT = wglGetProcAddress("glNamedRenderbufferStorageEXT");
  if ((____glewNamedRenderbufferStorageEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedRenderbufferStorageMultisampleCoverageEXT =
       wglGetProcAddress("glNamedRenderbufferStorageMultisampleCoverageEXT");
  if ((____glewNamedRenderbufferStorageMultisampleCoverageEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedRenderbufferStorageMultisampleEXT =
       wglGetProcAddress("glNamedRenderbufferStorageMultisampleEXT");
  if ((____glewNamedRenderbufferStorageMultisampleEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1fEXT = wglGetProcAddress("glProgramUniform1fEXT");
  if ((____glewProgramUniform1fEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1fvEXT = wglGetProcAddress("glProgramUniform1fvEXT");
  if ((____glewProgramUniform1fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1iEXT = wglGetProcAddress("glProgramUniform1iEXT");
  if ((____glewProgramUniform1iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1ivEXT = wglGetProcAddress("glProgramUniform1ivEXT");
  if ((____glewProgramUniform1ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1uiEXT = wglGetProcAddress("glProgramUniform1uiEXT");
  if ((____glewProgramUniform1uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1uivEXT = wglGetProcAddress("glProgramUniform1uivEXT");
  if ((____glewProgramUniform1uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2fEXT = wglGetProcAddress("glProgramUniform2fEXT");
  if ((____glewProgramUniform2fEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2fvEXT = wglGetProcAddress("glProgramUniform2fvEXT");
  if ((____glewProgramUniform2fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2iEXT = wglGetProcAddress("glProgramUniform2iEXT");
  if ((____glewProgramUniform2iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2ivEXT = wglGetProcAddress("glProgramUniform2ivEXT");
  if ((____glewProgramUniform2ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2uiEXT = wglGetProcAddress("glProgramUniform2uiEXT");
  if ((____glewProgramUniform2uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2uivEXT = wglGetProcAddress("glProgramUniform2uivEXT");
  if ((____glewProgramUniform2uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3fEXT = wglGetProcAddress("glProgramUniform3fEXT");
  if ((____glewProgramUniform3fEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3fvEXT = wglGetProcAddress("glProgramUniform3fvEXT");
  if ((____glewProgramUniform3fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3iEXT = wglGetProcAddress("glProgramUniform3iEXT");
  if ((____glewProgramUniform3iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3ivEXT = wglGetProcAddress("glProgramUniform3ivEXT");
  if ((____glewProgramUniform3ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3uiEXT = wglGetProcAddress("glProgramUniform3uiEXT");
  if ((____glewProgramUniform3uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3uivEXT = wglGetProcAddress("glProgramUniform3uivEXT");
  if ((____glewProgramUniform3uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4fEXT = wglGetProcAddress("glProgramUniform4fEXT");
  if ((____glewProgramUniform4fEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4fvEXT = wglGetProcAddress("glProgramUniform4fvEXT");
  if ((____glewProgramUniform4fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4iEXT = wglGetProcAddress("glProgramUniform4iEXT");
  if ((____glewProgramUniform4iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4ivEXT = wglGetProcAddress("glProgramUniform4ivEXT");
  if ((____glewProgramUniform4ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4uiEXT = wglGetProcAddress("glProgramUniform4uiEXT");
  if ((____glewProgramUniform4uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4uivEXT = wglGetProcAddress("glProgramUniform4uivEXT");
  if ((____glewProgramUniform4uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2fvEXT = wglGetProcAddress("glProgramUniformMatrix2fvEXT");
  if ((____glewProgramUniformMatrix2fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2x3fvEXT = wglGetProcAddress("glProgramUniformMatrix2x3fvEXT");
  if ((____glewProgramUniformMatrix2x3fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix2x4fvEXT = wglGetProcAddress("glProgramUniformMatrix2x4fvEXT");
  if ((____glewProgramUniformMatrix2x4fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3fvEXT = wglGetProcAddress("glProgramUniformMatrix3fvEXT");
  if ((____glewProgramUniformMatrix3fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3x2fvEXT = wglGetProcAddress("glProgramUniformMatrix3x2fvEXT");
  if ((____glewProgramUniformMatrix3x2fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix3x4fvEXT = wglGetProcAddress("glProgramUniformMatrix3x4fvEXT");
  if ((____glewProgramUniformMatrix3x4fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4fvEXT = wglGetProcAddress("glProgramUniformMatrix4fvEXT");
  if ((____glewProgramUniformMatrix4fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4x2fvEXT = wglGetProcAddress("glProgramUniformMatrix4x2fvEXT");
  if ((____glewProgramUniformMatrix4x2fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniformMatrix4x3fvEXT = wglGetProcAddress("glProgramUniformMatrix4x3fvEXT");
  if ((____glewProgramUniformMatrix4x3fvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPushClientAttribDefaultEXT = wglGetProcAddress("glPushClientAttribDefaultEXT");
  if ((____glewPushClientAttribDefaultEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureBufferEXT = wglGetProcAddress("glTextureBufferEXT");
  if ((____glewTextureBufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureImage1DEXT = wglGetProcAddress("glTextureImage1DEXT");
  if ((____glewTextureImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureImage2DEXT = wglGetProcAddress("glTextureImage2DEXT");
  if ((____glewTextureImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureImage3DEXT = wglGetProcAddress("glTextureImage3DEXT");
  if ((____glewTextureImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterIivEXT = wglGetProcAddress("glTextureParameterIivEXT");
  if ((____glewTextureParameterIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterIuivEXT = wglGetProcAddress("glTextureParameterIuivEXT");
  if ((____glewTextureParameterIuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterfEXT = wglGetProcAddress("glTextureParameterfEXT");
  if ((____glewTextureParameterfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterfvEXT = wglGetProcAddress("glTextureParameterfvEXT");
  if ((____glewTextureParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameteriEXT = wglGetProcAddress("glTextureParameteriEXT");
  if ((____glewTextureParameteriEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureParameterivEXT = wglGetProcAddress("glTextureParameterivEXT");
  if ((____glewTextureParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureRenderbufferEXT = wglGetProcAddress("glTextureRenderbufferEXT");
  if ((____glewTextureRenderbufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureSubImage1DEXT = wglGetProcAddress("glTextureSubImage1DEXT");
  if ((____glewTextureSubImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureSubImage2DEXT = wglGetProcAddress("glTextureSubImage2DEXT");
  if ((____glewTextureSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureSubImage3DEXT = wglGetProcAddress("glTextureSubImage3DEXT");
  if ((____glewTextureSubImage3DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUnmapNamedBufferEXT = wglGetProcAddress("glUnmapNamedBufferEXT");
  if ((____glewUnmapNamedBufferEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayColorOffsetEXT = wglGetProcAddress("glVertexArrayColorOffsetEXT");
  if ((____glewVertexArrayColorOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayEdgeFlagOffsetEXT = wglGetProcAddress("glVertexArrayEdgeFlagOffsetEXT");
  if ((____glewVertexArrayEdgeFlagOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayFogCoordOffsetEXT = wglGetProcAddress("glVertexArrayFogCoordOffsetEXT");
  if ((____glewVertexArrayFogCoordOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayIndexOffsetEXT = wglGetProcAddress("glVertexArrayIndexOffsetEXT");
  if ((____glewVertexArrayIndexOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayMultiTexCoordOffsetEXT =
       wglGetProcAddress("glVertexArrayMultiTexCoordOffsetEXT");
  if ((____glewVertexArrayMultiTexCoordOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayNormalOffsetEXT = wglGetProcAddress("glVertexArrayNormalOffsetEXT");
  if ((____glewVertexArrayNormalOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArraySecondaryColorOffsetEXT =
       wglGetProcAddress("glVertexArraySecondaryColorOffsetEXT");
  if ((____glewVertexArraySecondaryColorOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayTexCoordOffsetEXT = wglGetProcAddress("glVertexArrayTexCoordOffsetEXT");
  if ((____glewVertexArrayTexCoordOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayVertexAttribDivisorEXT =
       wglGetProcAddress("glVertexArrayVertexAttribDivisorEXT");
  if ((____glewVertexArrayVertexAttribDivisorEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayVertexAttribIOffsetEXT =
       wglGetProcAddress("glVertexArrayVertexAttribIOffsetEXT");
  if ((____glewVertexArrayVertexAttribIOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayVertexAttribOffsetEXT = wglGetProcAddress("glVertexArrayVertexAttribOffsetEXT")
  ;
  if ((____glewVertexArrayVertexAttribOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexArrayVertexOffsetEXT = wglGetProcAddress("glVertexArrayVertexOffsetEXT");
  if ((____glewVertexArrayVertexOffsetEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e290 0084e290_FUN_0084e290 ====
undefined4 FUN_0084e290(void);

// decompiled by BatchDecomp @ 0084e290 name=FUN_0084e290 conv=unknown body=759

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e290(void)

{
  bool bVar1;
  
  ____glewBindFragDataLocationEXT = wglGetProcAddress("glBindFragDataLocationEXT");
  bVar1 = ____glewBindFragDataLocationEXT == (PROC)0x0;
  ____glewGetFragDataLocationEXT = wglGetProcAddress("glGetFragDataLocationEXT");
  if ((____glewGetFragDataLocationEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformuivEXT = wglGetProcAddress("glGetUniformuivEXT");
  if ((____glewGetUniformuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribIivEXT = wglGetProcAddress("glGetVertexAttribIivEXT");
  if ((____glewGetVertexAttribIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribIuivEXT = wglGetProcAddress("glGetVertexAttribIuivEXT");
  if ((____glewGetVertexAttribIuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1uiEXT = wglGetProcAddress("glUniform1uiEXT");
  if ((____glewUniform1uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1uivEXT = wglGetProcAddress("glUniform1uivEXT");
  if ((____glewUniform1uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2uiEXT = wglGetProcAddress("glUniform2uiEXT");
  if ((____glewUniform2uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2uivEXT = wglGetProcAddress("glUniform2uivEXT");
  if ((____glewUniform2uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3uiEXT = wglGetProcAddress("glUniform3uiEXT");
  if ((____glewUniform3uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3uivEXT = wglGetProcAddress("glUniform3uivEXT");
  if ((____glewUniform3uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4uiEXT = wglGetProcAddress("glUniform4uiEXT");
  if ((____glewUniform4uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4uivEXT = wglGetProcAddress("glUniform4uivEXT");
  if ((____glewUniform4uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI1iEXT = wglGetProcAddress("glVertexAttribI1iEXT");
  if ((____glewVertexAttribI1iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI1ivEXT = wglGetProcAddress("glVertexAttribI1ivEXT");
  if ((____glewVertexAttribI1ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI1uiEXT = wglGetProcAddress("glVertexAttribI1uiEXT");
  if ((____glewVertexAttribI1uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI1uivEXT = wglGetProcAddress("glVertexAttribI1uivEXT");
  if ((____glewVertexAttribI1uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI2iEXT = wglGetProcAddress("glVertexAttribI2iEXT");
  if ((____glewVertexAttribI2iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI2ivEXT = wglGetProcAddress("glVertexAttribI2ivEXT");
  if ((____glewVertexAttribI2ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI2uiEXT = wglGetProcAddress("glVertexAttribI2uiEXT");
  if ((____glewVertexAttribI2uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI2uivEXT = wglGetProcAddress("glVertexAttribI2uivEXT");
  if ((____glewVertexAttribI2uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI3iEXT = wglGetProcAddress("glVertexAttribI3iEXT");
  if ((____glewVertexAttribI3iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI3ivEXT = wglGetProcAddress("glVertexAttribI3ivEXT");
  if ((____glewVertexAttribI3ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI3uiEXT = wglGetProcAddress("glVertexAttribI3uiEXT");
  if ((____glewVertexAttribI3uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI3uivEXT = wglGetProcAddress("glVertexAttribI3uivEXT");
  if ((____glewVertexAttribI3uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4bvEXT = wglGetProcAddress("glVertexAttribI4bvEXT");
  if ((____glewVertexAttribI4bvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4iEXT = wglGetProcAddress("glVertexAttribI4iEXT");
  if ((____glewVertexAttribI4iEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4ivEXT = wglGetProcAddress("glVertexAttribI4ivEXT");
  if ((____glewVertexAttribI4ivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4svEXT = wglGetProcAddress("glVertexAttribI4svEXT");
  if ((____glewVertexAttribI4svEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4ubvEXT = wglGetProcAddress("glVertexAttribI4ubvEXT");
  if ((____glewVertexAttribI4ubvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4uiEXT = wglGetProcAddress("glVertexAttribI4uiEXT");
  if ((____glewVertexAttribI4uiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4uivEXT = wglGetProcAddress("glVertexAttribI4uivEXT");
  if ((____glewVertexAttribI4uivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribI4usvEXT = wglGetProcAddress("glVertexAttribI4usvEXT");
  if ((____glewVertexAttribI4usvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribIPointerEXT = wglGetProcAddress("glVertexAttribIPointerEXT");
  if ((____glewVertexAttribIPointerEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f0c0 0084f0c0_FUN_0084f0c0 ====
undefined4 FUN_0084f0c0(void);

// decompiled by BatchDecomp @ 0084f0c0 name=FUN_0084f0c0 conv=unknown body=935

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f0c0(void)

{
  bool bVar1;
  
  ____glewBeginVertexShaderEXT = wglGetProcAddress("glBeginVertexShaderEXT");
  bVar1 = ____glewBeginVertexShaderEXT == (PROC)0x0;
  ____glewBindLightParameterEXT = wglGetProcAddress("glBindLightParameterEXT");
  if ((____glewBindLightParameterEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindMaterialParameterEXT = wglGetProcAddress("glBindMaterialParameterEXT");
  if ((____glewBindMaterialParameterEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindParameterEXT = wglGetProcAddress("glBindParameterEXT");
  if ((____glewBindParameterEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindTexGenParameterEXT = wglGetProcAddress("glBindTexGenParameterEXT");
  if ((____glewBindTexGenParameterEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindTextureUnitParameterEXT = wglGetProcAddress("glBindTextureUnitParameterEXT");
  if ((____glewBindTextureUnitParameterEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindVertexShaderEXT = wglGetProcAddress("glBindVertexShaderEXT");
  if ((____glewBindVertexShaderEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteVertexShaderEXT = wglGetProcAddress("glDeleteVertexShaderEXT");
  if ((____glewDeleteVertexShaderEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDisableVariantClientStateEXT = wglGetProcAddress("glDisableVariantClientStateEXT");
  if ((____glewDisableVariantClientStateEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableVariantClientStateEXT = wglGetProcAddress("glEnableVariantClientStateEXT");
  if ((____glewEnableVariantClientStateEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndVertexShaderEXT = wglGetProcAddress("glEndVertexShaderEXT");
  if ((____glewEndVertexShaderEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewExtractComponentEXT = wglGetProcAddress("glExtractComponentEXT");
  if ((____glewExtractComponentEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenSymbolsEXT = wglGetProcAddress("glGenSymbolsEXT");
  if ((____glewGenSymbolsEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenVertexShadersEXT = wglGetProcAddress("glGenVertexShadersEXT");
  if ((____glewGenVertexShadersEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetInvariantBooleanvEXT = wglGetProcAddress("glGetInvariantBooleanvEXT");
  if ((____glewGetInvariantBooleanvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetInvariantFloatvEXT = wglGetProcAddress("glGetInvariantFloatvEXT");
  if ((____glewGetInvariantFloatvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetInvariantIntegervEXT = wglGetProcAddress("glGetInvariantIntegervEXT");
  if ((____glewGetInvariantIntegervEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetLocalConstantBooleanvEXT = wglGetProcAddress("glGetLocalConstantBooleanvEXT");
  if ((____glewGetLocalConstantBooleanvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetLocalConstantFloatvEXT = wglGetProcAddress("glGetLocalConstantFloatvEXT");
  if ((____glewGetLocalConstantFloatvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetLocalConstantIntegervEXT = wglGetProcAddress("glGetLocalConstantIntegervEXT");
  if ((____glewGetLocalConstantIntegervEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVariantBooleanvEXT = wglGetProcAddress("glGetVariantBooleanvEXT");
  if ((____glewGetVariantBooleanvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVariantFloatvEXT = wglGetProcAddress("glGetVariantFloatvEXT");
  if ((____glewGetVariantFloatvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVariantIntegervEXT = wglGetProcAddress("glGetVariantIntegervEXT");
  if ((____glewGetVariantIntegervEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVariantPointervEXT = wglGetProcAddress("glGetVariantPointervEXT");
  if ((____glewGetVariantPointervEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewInsertComponentEXT = wglGetProcAddress("glInsertComponentEXT");
  if ((____glewInsertComponentEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsVariantEnabledEXT = wglGetProcAddress("glIsVariantEnabledEXT");
  if ((____glewIsVariantEnabledEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSetInvariantEXT = wglGetProcAddress("glSetInvariantEXT");
  if ((____glewSetInvariantEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSetLocalConstantEXT = wglGetProcAddress("glSetLocalConstantEXT");
  if ((____glewSetLocalConstantEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewShaderOp1EXT = wglGetProcAddress("glShaderOp1EXT");
  if ((____glewShaderOp1EXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewShaderOp2EXT = wglGetProcAddress("glShaderOp2EXT");
  if ((____glewShaderOp2EXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewShaderOp3EXT = wglGetProcAddress("glShaderOp3EXT");
  if ((____glewShaderOp3EXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSwizzleEXT = wglGetProcAddress("glSwizzleEXT");
  if ((____glewSwizzleEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantPointerEXT = wglGetProcAddress("glVariantPointerEXT");
  if ((____glewVariantPointerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantbvEXT = wglGetProcAddress("glVariantbvEXT");
  if ((____glewVariantbvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantdvEXT = wglGetProcAddress("glVariantdvEXT");
  if ((____glewVariantdvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantfvEXT = wglGetProcAddress("glVariantfvEXT");
  if ((____glewVariantfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantivEXT = wglGetProcAddress("glVariantivEXT");
  if ((____glewVariantivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantsvEXT = wglGetProcAddress("glVariantsvEXT");
  if ((____glewVariantsvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantubvEXT = wglGetProcAddress("glVariantubvEXT");
  if ((____glewVariantubvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantuivEXT = wglGetProcAddress("glVariantuivEXT");
  if ((____glewVariantuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVariantusvEXT = wglGetProcAddress("glVariantusvEXT");
  if ((____glewVariantusvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWriteMaskEXT = wglGetProcAddress("glWriteMaskEXT");
  if ((____glewWriteMaskEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008507f0 008507f0_FUN_008507f0 ====
undefined4 FUN_008507f0(void);

// decompiled by BatchDecomp @ 008507f0 name=FUN_008507f0 conv=unknown body=759

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008507f0(void)

{
  bool bVar1;
  
  ____glewGetUniformi64vNV = wglGetProcAddress("glGetUniformi64vNV");
  bVar1 = ____glewGetUniformi64vNV == (PROC)0x0;
  ____glewGetUniformui64vNV = wglGetProcAddress("glGetUniformui64vNV");
  if ((____glewGetUniformui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1i64NV = wglGetProcAddress("glProgramUniform1i64NV");
  if ((____glewProgramUniform1i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1i64vNV = wglGetProcAddress("glProgramUniform1i64vNV");
  if ((____glewProgramUniform1i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1ui64NV = wglGetProcAddress("glProgramUniform1ui64NV");
  if ((____glewProgramUniform1ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform1ui64vNV = wglGetProcAddress("glProgramUniform1ui64vNV");
  if ((____glewProgramUniform1ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2i64NV = wglGetProcAddress("glProgramUniform2i64NV");
  if ((____glewProgramUniform2i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2i64vNV = wglGetProcAddress("glProgramUniform2i64vNV");
  if ((____glewProgramUniform2i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2ui64NV = wglGetProcAddress("glProgramUniform2ui64NV");
  if ((____glewProgramUniform2ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform2ui64vNV = wglGetProcAddress("glProgramUniform2ui64vNV");
  if ((____glewProgramUniform2ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3i64NV = wglGetProcAddress("glProgramUniform3i64NV");
  if ((____glewProgramUniform3i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3i64vNV = wglGetProcAddress("glProgramUniform3i64vNV");
  if ((____glewProgramUniform3i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3ui64NV = wglGetProcAddress("glProgramUniform3ui64NV");
  if ((____glewProgramUniform3ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform3ui64vNV = wglGetProcAddress("glProgramUniform3ui64vNV");
  if ((____glewProgramUniform3ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4i64NV = wglGetProcAddress("glProgramUniform4i64NV");
  if ((____glewProgramUniform4i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4i64vNV = wglGetProcAddress("glProgramUniform4i64vNV");
  if ((____glewProgramUniform4i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4ui64NV = wglGetProcAddress("glProgramUniform4ui64NV");
  if ((____glewProgramUniform4ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramUniform4ui64vNV = wglGetProcAddress("glProgramUniform4ui64vNV");
  if ((____glewProgramUniform4ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1i64NV = wglGetProcAddress("glUniform1i64NV");
  if ((____glewUniform1i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1i64vNV = wglGetProcAddress("glUniform1i64vNV");
  if ((____glewUniform1i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1ui64NV = wglGetProcAddress("glUniform1ui64NV");
  if ((____glewUniform1ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1ui64vNV = wglGetProcAddress("glUniform1ui64vNV");
  if ((____glewUniform1ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2i64NV = wglGetProcAddress("glUniform2i64NV");
  if ((____glewUniform2i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2i64vNV = wglGetProcAddress("glUniform2i64vNV");
  if ((____glewUniform2i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2ui64NV = wglGetProcAddress("glUniform2ui64NV");
  if ((____glewUniform2ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2ui64vNV = wglGetProcAddress("glUniform2ui64vNV");
  if ((____glewUniform2ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3i64NV = wglGetProcAddress("glUniform3i64NV");
  if ((____glewUniform3i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3i64vNV = wglGetProcAddress("glUniform3i64vNV");
  if ((____glewUniform3i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3ui64NV = wglGetProcAddress("glUniform3ui64NV");
  if ((____glewUniform3ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3ui64vNV = wglGetProcAddress("glUniform3ui64vNV");
  if ((____glewUniform3ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4i64NV = wglGetProcAddress("glUniform4i64NV");
  if ((____glewUniform4i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4i64vNV = wglGetProcAddress("glUniform4i64vNV");
  if ((____glewUniform4i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4ui64NV = wglGetProcAddress("glUniform4ui64NV");
  if ((____glewUniform4ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4ui64vNV = wglGetProcAddress("glUniform4ui64vNV");
  if ((____glewUniform4ui64vNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000850af0 00850af0_FUN_00850af0 ====
undefined4 FUN_00850af0(void);

// decompiled by BatchDecomp @ 00850af0 name=FUN_00850af0 conv=unknown body=1023

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00850af0(void)

{
  bool bVar1;
  
  ____glewColor3hNV = wglGetProcAddress("glColor3hNV");
  bVar1 = ____glewColor3hNV == (PROC)0x0;
  ____glewColor3hvNV = wglGetProcAddress("glColor3hvNV");
  if ((____glewColor3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4hNV = wglGetProcAddress("glColor4hNV");
  if ((____glewColor4hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4hvNV = wglGetProcAddress("glColor4hvNV");
  if ((____glewColor4hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFogCoordhNV = wglGetProcAddress("glFogCoordhNV");
  if ((____glewFogCoordhNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFogCoordhvNV = wglGetProcAddress("glFogCoordhvNV");
  if ((____glewFogCoordhvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1hNV = wglGetProcAddress("glMultiTexCoord1hNV");
  if ((____glewMultiTexCoord1hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord1hvNV = wglGetProcAddress("glMultiTexCoord1hvNV");
  if ((____glewMultiTexCoord1hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2hNV = wglGetProcAddress("glMultiTexCoord2hNV");
  if ((____glewMultiTexCoord2hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord2hvNV = wglGetProcAddress("glMultiTexCoord2hvNV");
  if ((____glewMultiTexCoord2hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3hNV = wglGetProcAddress("glMultiTexCoord3hNV");
  if ((____glewMultiTexCoord3hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord3hvNV = wglGetProcAddress("glMultiTexCoord3hvNV");
  if ((____glewMultiTexCoord3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4hNV = wglGetProcAddress("glMultiTexCoord4hNV");
  if ((____glewMultiTexCoord4hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiTexCoord4hvNV = wglGetProcAddress("glMultiTexCoord4hvNV");
  if ((____glewMultiTexCoord4hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormal3hNV = wglGetProcAddress("glNormal3hNV");
  if ((____glewNormal3hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormal3hvNV = wglGetProcAddress("glNormal3hvNV");
  if ((____glewNormal3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSecondaryColor3hNV = wglGetProcAddress("glSecondaryColor3hNV");
  if ((____glewSecondaryColor3hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSecondaryColor3hvNV = wglGetProcAddress("glSecondaryColor3hvNV");
  if ((____glewSecondaryColor3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord1hNV = wglGetProcAddress("glTexCoord1hNV");
  if ((____glewTexCoord1hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord1hvNV = wglGetProcAddress("glTexCoord1hvNV");
  if ((____glewTexCoord1hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2hNV = wglGetProcAddress("glTexCoord2hNV");
  if ((____glewTexCoord2hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2hvNV = wglGetProcAddress("glTexCoord2hvNV");
  if ((____glewTexCoord2hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord3hNV = wglGetProcAddress("glTexCoord3hNV");
  if ((____glewTexCoord3hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord3hvNV = wglGetProcAddress("glTexCoord3hvNV");
  if ((____glewTexCoord3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord4hNV = wglGetProcAddress("glTexCoord4hNV");
  if ((____glewTexCoord4hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord4hvNV = wglGetProcAddress("glTexCoord4hvNV");
  if ((____glewTexCoord4hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertex2hNV = wglGetProcAddress("glVertex2hNV");
  if ((____glewVertex2hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertex2hvNV = wglGetProcAddress("glVertex2hvNV");
  if ((____glewVertex2hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertex3hNV = wglGetProcAddress("glVertex3hNV");
  if ((____glewVertex3hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertex3hvNV = wglGetProcAddress("glVertex3hvNV");
  if ((____glewVertex3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertex4hNV = wglGetProcAddress("glVertex4hNV");
  if ((____glewVertex4hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertex4hvNV = wglGetProcAddress("glVertex4hvNV");
  if ((____glewVertex4hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1hNV = wglGetProcAddress("glVertexAttrib1hNV");
  if ((____glewVertexAttrib1hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1hvNV = wglGetProcAddress("glVertexAttrib1hvNV");
  if ((____glewVertexAttrib1hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2hNV = wglGetProcAddress("glVertexAttrib2hNV");
  if ((____glewVertexAttrib2hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2hvNV = wglGetProcAddress("glVertexAttrib2hvNV");
  if ((____glewVertexAttrib2hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3hNV = wglGetProcAddress("glVertexAttrib3hNV");
  if ((____glewVertexAttrib3hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3hvNV = wglGetProcAddress("glVertexAttrib3hvNV");
  if ((____glewVertexAttrib3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4hNV = wglGetProcAddress("glVertexAttrib4hNV");
  if ((____glewVertexAttrib4hNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4hvNV = wglGetProcAddress("glVertexAttrib4hvNV");
  if ((____glewVertexAttrib4hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs1hvNV = wglGetProcAddress("glVertexAttribs1hvNV");
  if ((____glewVertexAttribs1hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs2hvNV = wglGetProcAddress("glVertexAttribs2hvNV");
  if ((____glewVertexAttribs2hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs3hvNV = wglGetProcAddress("glVertexAttribs3hvNV");
  if ((____glewVertexAttribs3hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs4hvNV = wglGetProcAddress("glVertexAttribs4hvNV");
  if ((____glewVertexAttribs4hvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexWeighthNV = wglGetProcAddress("glVertexWeighthNV");
  if ((____glewVertexWeighthNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexWeighthvNV = wglGetProcAddress("glVertexWeighthvNV");
  if ((____glewVertexWeighthvNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852030 00852030_FUN_00852030 ====
undefined4 FUN_00852030(void);

// decompiled by BatchDecomp @ 00852030 name=FUN_00852030 conv=unknown body=1419

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852030(void)

{
  bool bVar1;
  
  ____glewAreProgramsResidentNV = wglGetProcAddress("glAreProgramsResidentNV");
  bVar1 = ____glewAreProgramsResidentNV == (PROC)0x0;
  ____glewBindProgramNV = wglGetProcAddress("glBindProgramNV");
  if ((____glewBindProgramNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteProgramsNV = wglGetProcAddress("glDeleteProgramsNV");
  if ((____glewDeleteProgramsNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewExecuteProgramNV = wglGetProcAddress("glExecuteProgramNV");
  if ((____glewExecuteProgramNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenProgramsNV = wglGetProcAddress("glGenProgramsNV");
  if ((____glewGenProgramsNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramParameterdvNV = wglGetProcAddress("glGetProgramParameterdvNV");
  if ((____glewGetProgramParameterdvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramParameterfvNV = wglGetProcAddress("glGetProgramParameterfvNV");
  if ((____glewGetProgramParameterfvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramStringNV = wglGetProcAddress("glGetProgramStringNV");
  if ((____glewGetProgramStringNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramivNV = wglGetProcAddress("glGetProgramivNV");
  if ((____glewGetProgramivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTrackMatrixivNV = wglGetProcAddress("glGetTrackMatrixivNV");
  if ((____glewGetTrackMatrixivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribPointervNV = wglGetProcAddress("glGetVertexAttribPointervNV");
  if ((____glewGetVertexAttribPointervNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribdvNV = wglGetProcAddress("glGetVertexAttribdvNV");
  if ((____glewGetVertexAttribdvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribfvNV = wglGetProcAddress("glGetVertexAttribfvNV");
  if ((____glewGetVertexAttribfvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribivNV = wglGetProcAddress("glGetVertexAttribivNV");
  if ((____glewGetVertexAttribivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsProgramNV = wglGetProcAddress("glIsProgramNV");
  if ((____glewIsProgramNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewLoadProgramNV = wglGetProcAddress("glLoadProgramNV");
  if ((____glewLoadProgramNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameter4dNV = wglGetProcAddress("glProgramParameter4dNV");
  if ((____glewProgramParameter4dNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameter4dvNV = wglGetProcAddress("glProgramParameter4dvNV");
  if ((____glewProgramParameter4dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameter4fNV = wglGetProcAddress("glProgramParameter4fNV");
  if ((____glewProgramParameter4fNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameter4fvNV = wglGetProcAddress("glProgramParameter4fvNV");
  if ((____glewProgramParameter4fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameters4dvNV = wglGetProcAddress("glProgramParameters4dvNV");
  if ((____glewProgramParameters4dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameters4fvNV = wglGetProcAddress("glProgramParameters4fvNV");
  if ((____glewProgramParameters4fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewRequestResidentProgramsNV = wglGetProcAddress("glRequestResidentProgramsNV");
  if ((____glewRequestResidentProgramsNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTrackMatrixNV = wglGetProcAddress("glTrackMatrixNV");
  if ((____glewTrackMatrixNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1dNV = wglGetProcAddress("glVertexAttrib1dNV");
  if ((____glewVertexAttrib1dNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1dvNV = wglGetProcAddress("glVertexAttrib1dvNV");
  if ((____glewVertexAttrib1dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1fNV = wglGetProcAddress("glVertexAttrib1fNV");
  if ((____glewVertexAttrib1fNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1fvNV = wglGetProcAddress("glVertexAttrib1fvNV");
  if ((____glewVertexAttrib1fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1sNV = wglGetProcAddress("glVertexAttrib1sNV");
  if ((____glewVertexAttrib1sNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1svNV = wglGetProcAddress("glVertexAttrib1svNV");
  if ((____glewVertexAttrib1svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2dNV = wglGetProcAddress("glVertexAttrib2dNV");
  if ((____glewVertexAttrib2dNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2dvNV = wglGetProcAddress("glVertexAttrib2dvNV");
  if ((____glewVertexAttrib2dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2fNV = wglGetProcAddress("glVertexAttrib2fNV");
  if ((____glewVertexAttrib2fNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2fvNV = wglGetProcAddress("glVertexAttrib2fvNV");
  if ((____glewVertexAttrib2fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2sNV = wglGetProcAddress("glVertexAttrib2sNV");
  if ((____glewVertexAttrib2sNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2svNV = wglGetProcAddress("glVertexAttrib2svNV");
  if ((____glewVertexAttrib2svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3dNV = wglGetProcAddress("glVertexAttrib3dNV");
  if ((____glewVertexAttrib3dNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3dvNV = wglGetProcAddress("glVertexAttrib3dvNV");
  if ((____glewVertexAttrib3dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3fNV = wglGetProcAddress("glVertexAttrib3fNV");
  if ((____glewVertexAttrib3fNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3fvNV = wglGetProcAddress("glVertexAttrib3fvNV");
  if ((____glewVertexAttrib3fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3sNV = wglGetProcAddress("glVertexAttrib3sNV");
  if ((____glewVertexAttrib3sNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3svNV = wglGetProcAddress("glVertexAttrib3svNV");
  if ((____glewVertexAttrib3svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4dNV = wglGetProcAddress("glVertexAttrib4dNV");
  if ((____glewVertexAttrib4dNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4dvNV = wglGetProcAddress("glVertexAttrib4dvNV");
  if ((____glewVertexAttrib4dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4fNV = wglGetProcAddress("glVertexAttrib4fNV");
  if ((____glewVertexAttrib4fNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4fvNV = wglGetProcAddress("glVertexAttrib4fvNV");
  if ((____glewVertexAttrib4fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4sNV = wglGetProcAddress("glVertexAttrib4sNV");
  if ((____glewVertexAttrib4sNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4svNV = wglGetProcAddress("glVertexAttrib4svNV");
  if ((____glewVertexAttrib4svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4ubNV = wglGetProcAddress("glVertexAttrib4ubNV");
  if ((____glewVertexAttrib4ubNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4ubvNV = wglGetProcAddress("glVertexAttrib4ubvNV");
  if ((____glewVertexAttrib4ubvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribPointerNV = wglGetProcAddress("glVertexAttribPointerNV");
  if ((____glewVertexAttribPointerNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs1dvNV = wglGetProcAddress("glVertexAttribs1dvNV");
  if ((____glewVertexAttribs1dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs1fvNV = wglGetProcAddress("glVertexAttribs1fvNV");
  if ((____glewVertexAttribs1fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs1svNV = wglGetProcAddress("glVertexAttribs1svNV");
  if ((____glewVertexAttribs1svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs2dvNV = wglGetProcAddress("glVertexAttribs2dvNV");
  if ((____glewVertexAttribs2dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs2fvNV = wglGetProcAddress("glVertexAttribs2fvNV");
  if ((____glewVertexAttribs2fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs2svNV = wglGetProcAddress("glVertexAttribs2svNV");
  if ((____glewVertexAttribs2svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs3dvNV = wglGetProcAddress("glVertexAttribs3dvNV");
  if ((____glewVertexAttribs3dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs3fvNV = wglGetProcAddress("glVertexAttribs3fvNV");
  if ((____glewVertexAttribs3fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs3svNV = wglGetProcAddress("glVertexAttribs3svNV");
  if ((____glewVertexAttribs3svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs4dvNV = wglGetProcAddress("glVertexAttribs4dvNV");
  if ((____glewVertexAttribs4dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs4fvNV = wglGetProcAddress("glVertexAttribs4fvNV");
  if ((____glewVertexAttribs4fvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs4svNV = wglGetProcAddress("glVertexAttribs4svNV");
  if ((____glewVertexAttribs4svNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribs4ubvNV = wglGetProcAddress("glVertexAttribs4ubvNV");
  if ((____glewVertexAttribs4ubvNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000853370 00853370_FUN_00853370 ====
undefined4 FUN_00853370(void);

// decompiled by BatchDecomp @ 00853370 name=FUN_00853370 conv=unknown body=891

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00853370(void)

{
  bool bVar1;
  
  ____glewColor3fVertex3fSUN = wglGetProcAddress("glColor3fVertex3fSUN");
  bVar1 = ____glewColor3fVertex3fSUN == (PROC)0x0;
  ____glewColor3fVertex3fvSUN = wglGetProcAddress("glColor3fVertex3fvSUN");
  if ((____glewColor3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4fNormal3fVertex3fSUN = wglGetProcAddress("glColor4fNormal3fVertex3fSUN");
  if ((____glewColor4fNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4fNormal3fVertex3fvSUN = wglGetProcAddress("glColor4fNormal3fVertex3fvSUN");
  if ((____glewColor4fNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4ubVertex2fSUN = wglGetProcAddress("glColor4ubVertex2fSUN");
  if ((____glewColor4ubVertex2fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4ubVertex2fvSUN = wglGetProcAddress("glColor4ubVertex2fvSUN");
  if ((____glewColor4ubVertex2fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4ubVertex3fSUN = wglGetProcAddress("glColor4ubVertex3fSUN");
  if ((____glewColor4ubVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColor4ubVertex3fvSUN = wglGetProcAddress("glColor4ubVertex3fvSUN");
  if ((____glewColor4ubVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormal3fVertex3fSUN = wglGetProcAddress("glNormal3fVertex3fSUN");
  if ((____glewNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormal3fVertex3fvSUN = wglGetProcAddress("glNormal3fVertex3fvSUN");
  if ((____glewNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiColor3fVertex3fSUN =
       wglGetProcAddress("glReplacementCodeuiColor3fVertex3fSUN");
  if ((____glewReplacementCodeuiColor3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiColor3fVertex3fvSUN =
       wglGetProcAddress("glReplacementCodeuiColor3fVertex3fvSUN");
  if ((____glewReplacementCodeuiColor3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiColor4fNormal3fVertex3fSUN =
       wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fSUN");
  if ((____glewReplacementCodeuiColor4fNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiColor4fNormal3fVertex3fvSUN =
       wglGetProcAddress("glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
  if ((____glewReplacementCodeuiColor4fNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiColor4ubVertex3fSUN =
       wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fSUN");
  if ((____glewReplacementCodeuiColor4ubVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiColor4ubVertex3fvSUN =
       wglGetProcAddress("glReplacementCodeuiColor4ubVertex3fvSUN");
  if ((____glewReplacementCodeuiColor4ubVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiNormal3fVertex3fSUN =
       wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fSUN");
  if ((____glewReplacementCodeuiNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiNormal3fVertex3fvSUN =
       wglGetProcAddress("glReplacementCodeuiNormal3fVertex3fvSUN");
  if ((____glewReplacementCodeuiNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN =
       wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
  if ((____glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN =
       wglGetProcAddress("glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
  if ((____glewReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiTexCoord2fNormal3fVertex3fSUN =
       wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
  if ((____glewReplacementCodeuiTexCoord2fNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN =
       wglGetProcAddress("glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
  if ((____glewReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiTexCoord2fVertex3fSUN =
       wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fSUN");
  if ((____glewReplacementCodeuiTexCoord2fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiTexCoord2fVertex3fvSUN =
       wglGetProcAddress("glReplacementCodeuiTexCoord2fVertex3fvSUN");
  if ((____glewReplacementCodeuiTexCoord2fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiVertex3fSUN = wglGetProcAddress("glReplacementCodeuiVertex3fSUN");
  if ((____glewReplacementCodeuiVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiVertex3fvSUN = wglGetProcAddress("glReplacementCodeuiVertex3fvSUN");
  if ((____glewReplacementCodeuiVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fColor3fVertex3fSUN = wglGetProcAddress("glTexCoord2fColor3fVertex3fSUN");
  if ((____glewTexCoord2fColor3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fColor3fVertex3fvSUN = wglGetProcAddress("glTexCoord2fColor3fVertex3fvSUN");
  if ((____glewTexCoord2fColor3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fColor4fNormal3fVertex3fSUN =
       wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fSUN");
  if ((____glewTexCoord2fColor4fNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fColor4fNormal3fVertex3fvSUN =
       wglGetProcAddress("glTexCoord2fColor4fNormal3fVertex3fvSUN");
  if ((____glewTexCoord2fColor4fNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fColor4ubVertex3fSUN = wglGetProcAddress("glTexCoord2fColor4ubVertex3fSUN");
  if ((____glewTexCoord2fColor4ubVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fColor4ubVertex3fvSUN = wglGetProcAddress("glTexCoord2fColor4ubVertex3fvSUN");
  if ((____glewTexCoord2fColor4ubVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fNormal3fVertex3fSUN = wglGetProcAddress("glTexCoord2fNormal3fVertex3fSUN");
  if ((____glewTexCoord2fNormal3fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fNormal3fVertex3fvSUN = wglGetProcAddress("glTexCoord2fNormal3fVertex3fvSUN");
  if ((____glewTexCoord2fNormal3fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fVertex3fSUN = wglGetProcAddress("glTexCoord2fVertex3fSUN");
  if ((____glewTexCoord2fVertex3fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord2fVertex3fvSUN = wglGetProcAddress("glTexCoord2fVertex3fvSUN");
  if ((____glewTexCoord2fVertex3fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord4fColor4fNormal3fVertex4fSUN =
       wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fSUN");
  if ((____glewTexCoord4fColor4fNormal3fVertex4fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord4fColor4fNormal3fVertex4fvSUN =
       wglGetProcAddress("glTexCoord4fColor4fNormal3fVertex4fvSUN");
  if ((____glewTexCoord4fColor4fNormal3fVertex4fvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord4fVertex4fSUN = wglGetProcAddress("glTexCoord4fVertex4fSUN");
  if ((____glewTexCoord4fVertex4fSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoord4fVertex4fvSUN = wglGetProcAddress("glTexCoord4fVertex4fvSUN");
  if ((____glewTexCoord4fVertex4fvSUN != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000854130 00854130_FUN_00854130 ====
undefined4 FUN_00854130(void);

// decompiled by BatchDecomp @ 00854130 name=FUN_00854130 conv=unknown body=2057

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00854130(void)

{
  bool bVar1;
  
  ___glewAttachShader = wglGetProcAddress("glAttachShader");
  bVar1 = ___glewAttachShader == (PROC)0x0;
  ____glewBindAttribLocation = wglGetProcAddress("glBindAttribLocation");
  if ((____glewBindAttribLocation == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewBlendEquationSeparate = wglGetProcAddress("glBlendEquationSeparate");
  if ((___glewBlendEquationSeparate == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewCompileShader = wglGetProcAddress("glCompileShader");
  if ((___glewCompileShader == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewCreateProgram = wglGetProcAddress("glCreateProgram");
  if ((___glewCreateProgram == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewCreateShader = wglGetProcAddress("glCreateShader");
  if ((___glewCreateShader == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewDeleteProgram = wglGetProcAddress("glDeleteProgram");
  if ((___glewDeleteProgram == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewDeleteShader = wglGetProcAddress("glDeleteShader");
  if ((___glewDeleteShader == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewDetachShader = wglGetProcAddress("glDetachShader");
  if ((___glewDetachShader == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewDisableVertexAttribArray = wglGetProcAddress("glDisableVertexAttribArray");
  if ((___glewDisableVertexAttribArray == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewDrawBuffers = wglGetProcAddress("glDrawBuffers");
  if ((___glewDrawBuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewEnableVertexAttribArray = wglGetProcAddress("glEnableVertexAttribArray");
  if ((___glewEnableVertexAttribArray == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveAttrib = wglGetProcAddress("glGetActiveAttrib");
  if ((____glewGetActiveAttrib == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveUniform = wglGetProcAddress("glGetActiveUniform");
  if ((____glewGetActiveUniform == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetAttachedShaders = wglGetProcAddress("glGetAttachedShaders");
  if ((____glewGetAttachedShaders == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGetAttribLocation = wglGetProcAddress("glGetAttribLocation");
  if ((___glewGetAttribLocation == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGetProgramInfoLog = wglGetProcAddress("glGetProgramInfoLog");
  if ((___glewGetProgramInfoLog == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGetProgramiv = wglGetProcAddress("glGetProgramiv");
  if ((___glewGetProgramiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGetShaderInfoLog = wglGetProcAddress("glGetShaderInfoLog");
  if ((___glewGetShaderInfoLog == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetShaderSource = wglGetProcAddress("glGetShaderSource");
  if ((____glewGetShaderSource == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGetShaderiv = wglGetProcAddress("glGetShaderiv");
  if ((___glewGetShaderiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGetUniformLocation = wglGetProcAddress("glGetUniformLocation");
  if ((___glewGetUniformLocation == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformfv = wglGetProcAddress("glGetUniformfv");
  if ((____glewGetUniformfv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformiv = wglGetProcAddress("glGetUniformiv");
  if ((____glewGetUniformiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribPointerv = wglGetProcAddress("glGetVertexAttribPointerv");
  if ((____glewGetVertexAttribPointerv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribdv = wglGetProcAddress("glGetVertexAttribdv");
  if ((____glewGetVertexAttribdv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribfv = wglGetProcAddress("glGetVertexAttribfv");
  if ((____glewGetVertexAttribfv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVertexAttribiv = wglGetProcAddress("glGetVertexAttribiv");
  if ((____glewGetVertexAttribiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsProgram = wglGetProcAddress("glIsProgram");
  if ((____glewIsProgram == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsShader = wglGetProcAddress("glIsShader");
  if ((____glewIsShader == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewLinkProgram = wglGetProcAddress("glLinkProgram");
  if ((___glewLinkProgram == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewShaderSource = wglGetProcAddress("glShaderSource");
  if ((___glewShaderSource == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewStencilFuncSeparate = wglGetProcAddress("glStencilFuncSeparate");
  if ((____glewStencilFuncSeparate == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewStencilMaskSeparate = wglGetProcAddress("glStencilMaskSeparate");
  if ((____glewStencilMaskSeparate == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewStencilOpSeparate = wglGetProcAddress("glStencilOpSeparate");
  if ((____glewStencilOpSeparate == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniform1f = wglGetProcAddress("glUniform1f");
  if ((___glewUniform1f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniform1fv = wglGetProcAddress("glUniform1fv");
  if ((___glewUniform1fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniform1i = wglGetProcAddress("glUniform1i");
  if ((___glewUniform1i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1iv = wglGetProcAddress("glUniform1iv");
  if ((____glewUniform1iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2f = wglGetProcAddress("glUniform2f");
  if ((____glewUniform2f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniform2fv = wglGetProcAddress("glUniform2fv");
  if ((___glewUniform2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2i = wglGetProcAddress("glUniform2i");
  if ((____glewUniform2i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniform2iv = wglGetProcAddress("glUniform2iv");
  if ((___glewUniform2iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3f = wglGetProcAddress("glUniform3f");
  if ((____glewUniform3f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniform3fv = wglGetProcAddress("glUniform3fv");
  if ((___glewUniform3fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3i = wglGetProcAddress("glUniform3i");
  if ((____glewUniform3i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3iv = wglGetProcAddress("glUniform3iv");
  if ((____glewUniform3iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4f = wglGetProcAddress("glUniform4f");
  if ((____glewUniform4f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4fv = wglGetProcAddress("glUniform4fv");
  if ((____glewUniform4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4i = wglGetProcAddress("glUniform4i");
  if ((____glewUniform4i == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4iv = wglGetProcAddress("glUniform4iv");
  if ((____glewUniform4iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix2fv = wglGetProcAddress("glUniformMatrix2fv");
  if ((____glewUniformMatrix2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniformMatrix3fv = wglGetProcAddress("glUniformMatrix3fv");
  if ((___glewUniformMatrix3fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUniformMatrix4fv = wglGetProcAddress("glUniformMatrix4fv");
  if ((___glewUniformMatrix4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewUseProgram = wglGetProcAddress("glUseProgram");
  if ((___glewUseProgram == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewValidateProgram = wglGetProcAddress("glValidateProgram");
  if ((____glewValidateProgram == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1d = wglGetProcAddress("glVertexAttrib1d");
  if ((____glewVertexAttrib1d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1dv = wglGetProcAddress("glVertexAttrib1dv");
  if ((____glewVertexAttrib1dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1f = wglGetProcAddress("glVertexAttrib1f");
  if ((____glewVertexAttrib1f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1fv = wglGetProcAddress("glVertexAttrib1fv");
  if ((____glewVertexAttrib1fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1s = wglGetProcAddress("glVertexAttrib1s");
  if ((____glewVertexAttrib1s == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib1sv = wglGetProcAddress("glVertexAttrib1sv");
  if ((____glewVertexAttrib1sv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2d = wglGetProcAddress("glVertexAttrib2d");
  if ((____glewVertexAttrib2d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2dv = wglGetProcAddress("glVertexAttrib2dv");
  if ((____glewVertexAttrib2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2f = wglGetProcAddress("glVertexAttrib2f");
  if ((____glewVertexAttrib2f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2fv = wglGetProcAddress("glVertexAttrib2fv");
  if ((____glewVertexAttrib2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2s = wglGetProcAddress("glVertexAttrib2s");
  if ((____glewVertexAttrib2s == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib2sv = wglGetProcAddress("glVertexAttrib2sv");
  if ((____glewVertexAttrib2sv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3d = wglGetProcAddress("glVertexAttrib3d");
  if ((____glewVertexAttrib3d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3dv = wglGetProcAddress("glVertexAttrib3dv");
  if ((____glewVertexAttrib3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3f = wglGetProcAddress("glVertexAttrib3f");
  if ((____glewVertexAttrib3f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3fv = wglGetProcAddress("glVertexAttrib3fv");
  if ((____glewVertexAttrib3fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3s = wglGetProcAddress("glVertexAttrib3s");
  if ((____glewVertexAttrib3s == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib3sv = wglGetProcAddress("glVertexAttrib3sv");
  if ((____glewVertexAttrib3sv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4Nbv = wglGetProcAddress("glVertexAttrib4Nbv");
  if ((____glewVertexAttrib4Nbv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4Niv = wglGetProcAddress("glVertexAttrib4Niv");
  if ((____glewVertexAttrib4Niv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4Nsv = wglGetProcAddress("glVertexAttrib4Nsv");
  if ((____glewVertexAttrib4Nsv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4Nub = wglGetProcAddress("glVertexAttrib4Nub");
  if ((____glewVertexAttrib4Nub == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4Nubv = wglGetProcAddress("glVertexAttrib4Nubv");
  if ((____glewVertexAttrib4Nubv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4Nuiv = wglGetProcAddress("glVertexAttrib4Nuiv");
  if ((____glewVertexAttrib4Nuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4Nusv = wglGetProcAddress("glVertexAttrib4Nusv");
  if ((____glewVertexAttrib4Nusv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4bv = wglGetProcAddress("glVertexAttrib4bv");
  if ((____glewVertexAttrib4bv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4d = wglGetProcAddress("glVertexAttrib4d");
  if ((____glewVertexAttrib4d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4dv = wglGetProcAddress("glVertexAttrib4dv");
  if ((____glewVertexAttrib4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4f = wglGetProcAddress("glVertexAttrib4f");
  if ((____glewVertexAttrib4f == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4fv = wglGetProcAddress("glVertexAttrib4fv");
  if ((____glewVertexAttrib4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4iv = wglGetProcAddress("glVertexAttrib4iv");
  if ((____glewVertexAttrib4iv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4s = wglGetProcAddress("glVertexAttrib4s");
  if ((____glewVertexAttrib4s == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4sv = wglGetProcAddress("glVertexAttrib4sv");
  if ((____glewVertexAttrib4sv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4ubv = wglGetProcAddress("glVertexAttrib4ubv");
  if ((____glewVertexAttrib4ubv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4uiv = wglGetProcAddress("glVertexAttrib4uiv");
  if ((____glewVertexAttrib4uiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttrib4usv = wglGetProcAddress("glVertexAttrib4usv");
  if ((____glewVertexAttrib4usv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewVertexAttribPointer = wglGetProcAddress("glVertexAttribPointer");
  if ((___glewVertexAttribPointer != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008549d0 008549d0_FUN_008549d0 ====
extern undefined4 FUN_00848690(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_008492b0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0084ad70(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0084ae60(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 FUN_008549d0(void);

// decompiled by BatchDecomp @ 008549d0 name=FUN_008549d0 conv=unknown body=1280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008549d0(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00848690();
  bVar2 = cVar1 != '\0';
  cVar1 = FUN_008492b0();
  if ((cVar1 != '\0') || (bVar2)) {
    bVar2 = true;
  }
  cVar1 = FUN_0084ad70();
  if ((cVar1 != '\0') || (bVar2)) {
    bVar2 = true;
  }
  cVar1 = FUN_0084ae60();
  if ((cVar1 != '\0') || (bVar2)) {
    bVar2 = true;
  }
  ____glewBeginConditionalRender = wglGetProcAddress("glBeginConditionalRender");
  if ((____glewBeginConditionalRender == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewBeginTransformFeedback = wglGetProcAddress("glBeginTransformFeedback");
  if ((____glewBeginTransformFeedback == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewBindFragDataLocation = wglGetProcAddress("glBindFragDataLocation");
  if ((____glewBindFragDataLocation == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewClampColor = wglGetProcAddress("glClampColor");
  if ((____glewClampColor == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewClearBufferfi = wglGetProcAddress("glClearBufferfi");
  if ((____glewClearBufferfi == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewClearBufferfv = wglGetProcAddress("glClearBufferfv");
  if ((____glewClearBufferfv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewClearBufferiv = wglGetProcAddress("glClearBufferiv");
  if ((____glewClearBufferiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewClearBufferuiv = wglGetProcAddress("glClearBufferuiv");
  if ((____glewClearBufferuiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewColorMaski = wglGetProcAddress("glColorMaski");
  if ((____glewColorMaski == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewDisablei = wglGetProcAddress("glDisablei");
  if ((____glewDisablei == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewEnablei = wglGetProcAddress("glEnablei");
  if ((____glewEnablei == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewEndConditionalRender = wglGetProcAddress("glEndConditionalRender");
  if ((____glewEndConditionalRender == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewEndTransformFeedback = wglGetProcAddress("glEndTransformFeedback");
  if ((____glewEndTransformFeedback == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetBooleani_v = wglGetProcAddress("glGetBooleani_v");
  if ((____glewGetBooleani_v == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetFragDataLocation = wglGetProcAddress("glGetFragDataLocation");
  if ((____glewGetFragDataLocation == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetStringi = wglGetProcAddress("glGetStringi");
  if ((____glewGetStringi == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetTexParameterIiv = wglGetProcAddress("glGetTexParameterIiv");
  if ((____glewGetTexParameterIiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetTexParameterIuiv = wglGetProcAddress("glGetTexParameterIuiv");
  if ((____glewGetTexParameterIuiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetTransformFeedbackVarying = wglGetProcAddress("glGetTransformFeedbackVarying");
  if ((____glewGetTransformFeedbackVarying == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetUniformuiv = wglGetProcAddress("glGetUniformuiv");
  if ((____glewGetUniformuiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetVertexAttribIiv = wglGetProcAddress("glGetVertexAttribIiv");
  if ((____glewGetVertexAttribIiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetVertexAttribIuiv = wglGetProcAddress("glGetVertexAttribIuiv");
  if ((____glewGetVertexAttribIuiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewIsEnabledi = wglGetProcAddress("glIsEnabledi");
  if ((____glewIsEnabledi == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewTexParameterIiv = wglGetProcAddress("glTexParameterIiv");
  if ((____glewTexParameterIiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewTexParameterIuiv = wglGetProcAddress("glTexParameterIuiv");
  if ((____glewTexParameterIuiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewTransformFeedbackVaryings = wglGetProcAddress("glTransformFeedbackVaryings");
  if ((____glewTransformFeedbackVaryings == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform1ui = wglGetProcAddress("glUniform1ui");
  if ((____glewUniform1ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform1uiv = wglGetProcAddress("glUniform1uiv");
  if ((____glewUniform1uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform2ui = wglGetProcAddress("glUniform2ui");
  if ((____glewUniform2ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform2uiv = wglGetProcAddress("glUniform2uiv");
  if ((____glewUniform2uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform3ui = wglGetProcAddress("glUniform3ui");
  if ((____glewUniform3ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform3uiv = wglGetProcAddress("glUniform3uiv");
  if ((____glewUniform3uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform4ui = wglGetProcAddress("glUniform4ui");
  if ((____glewUniform4ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewUniform4uiv = wglGetProcAddress("glUniform4uiv");
  if ((____glewUniform4uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI1i = wglGetProcAddress("glVertexAttribI1i");
  if ((____glewVertexAttribI1i == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI1iv = wglGetProcAddress("glVertexAttribI1iv");
  if ((____glewVertexAttribI1iv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI1ui = wglGetProcAddress("glVertexAttribI1ui");
  if ((____glewVertexAttribI1ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI1uiv = wglGetProcAddress("glVertexAttribI1uiv");
  if ((____glewVertexAttribI1uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI2i = wglGetProcAddress("glVertexAttribI2i");
  if ((____glewVertexAttribI2i == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI2iv = wglGetProcAddress("glVertexAttribI2iv");
  if ((____glewVertexAttribI2iv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI2ui = wglGetProcAddress("glVertexAttribI2ui");
  if ((____glewVertexAttribI2ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI2uiv = wglGetProcAddress("glVertexAttribI2uiv");
  if ((____glewVertexAttribI2uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI3i = wglGetProcAddress("glVertexAttribI3i");
  if ((____glewVertexAttribI3i == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI3iv = wglGetProcAddress("glVertexAttribI3iv");
  if ((____glewVertexAttribI3iv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI3ui = wglGetProcAddress("glVertexAttribI3ui");
  if ((____glewVertexAttribI3ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI3uiv = wglGetProcAddress("glVertexAttribI3uiv");
  if ((____glewVertexAttribI3uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4bv = wglGetProcAddress("glVertexAttribI4bv");
  if ((____glewVertexAttribI4bv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4i = wglGetProcAddress("glVertexAttribI4i");
  if ((____glewVertexAttribI4i == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4iv = wglGetProcAddress("glVertexAttribI4iv");
  if ((____glewVertexAttribI4iv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4sv = wglGetProcAddress("glVertexAttribI4sv");
  if ((____glewVertexAttribI4sv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4ubv = wglGetProcAddress("glVertexAttribI4ubv");
  if ((____glewVertexAttribI4ubv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4ui = wglGetProcAddress("glVertexAttribI4ui");
  if ((____glewVertexAttribI4ui == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4uiv = wglGetProcAddress("glVertexAttribI4uiv");
  if ((____glewVertexAttribI4uiv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribI4usv = wglGetProcAddress("glVertexAttribI4usv");
  if ((____glewVertexAttribI4usv == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewVertexAttribIPointer = wglGetProcAddress("glVertexAttribIPointer");
  if ((____glewVertexAttribIPointer != (PROC)0x0) && (!bVar2)) {
    return 0;
  }
  return 1;
}

