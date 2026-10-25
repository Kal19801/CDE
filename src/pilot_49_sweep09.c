// pilot_sweep_sweep09.c - assembled by scripts/sweep_assemble.py (r19)
// reuses fam8_assemble fix passes (zip oracle/in-batch protos/vft channel/data closure)
#include "port_prelude.h"
typedef union {
  struct {
    undefined8 _8_8_;
    undefined8 _12_8_;
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
    undefined4 _24_4_;
    undefined4 _28_4_;
  };
  struct {
    undefined1 _1_3_[3];
  };
  struct {
    undefined1 _4_1_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int ConventionalGunModule_GetPeakPressure_Pa_Memoize(); /* K&R stub; ret by call site */
extern int FixedOrbit_FixedOrbit__o2(); /* K&R stub; ret by call site */
extern int FixedOrbit_GetFullRotator_MemoizedFunction(); /* K&R stub; ret by call site */
extern int SpacecraftComponent_GetDesiredOrientation_Clear(); /* K&R stub; ret by call site */
extern int SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(); /* K&R stub; ret by call site */
/* ---- GL PFN typedefs: Khronos headers directly (extraction-free) ---- */
#include <glcorearb.h>
#include <glext.h>
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define ____glewActiveVaryingNV (*(PFNGLACTIVEVARYINGNVPROC *)(0x0098a8bcu))
#define ____glewAreTexturesResidentEXT (*(PFNGLARETEXTURESRESIDENTEXTPROC *)(0x0098c100u))
#define ____glewArrayElementEXT (*(PFNGLARRAYELEMENTEXTPROC *)(0x0098c190u))
#define ____glewAsyncMarkerSGIX (*(PFNGLASYNCMARKERSGIXPROC *)(0x0098b3d4u))
#define ____glewBeginOcclusionQueryNV (*(PFNGLBEGINOCCLUSIONQUERYNVPROC *)(0x0098a348u))
#define ____glewBeginPerfMonitorAMD (*(PFNGLBEGINPERFMONITORAMDPROC *)(0x0098b580u))
#define ____glewBeginPerfQueryINTEL (*(PFNGLBEGINPERFQUERYINTELPROC *)(0x0098c4c0u))
#define ____glewBeginQueryARB (*(PFNGLBEGINQUERYARBPROC *)(0x0098c490u))
#define ____glewBeginQueryIndexed (*(PFNGLBEGINQUERYINDEXEDPROC *)(0x0098a224u))
#define ____glewBeginTransformFeedbackEXT (*(PFNGLBEGINTRANSFORMFEEDBACKEXTPROC *)(0x0098c150u))
#define ____glewBeginTransformFeedbackNV (*(PFNGLBEGINTRANSFORMFEEDBACKNVPROC *)(0x0098a8c8u))
#define ____glewBindBufferARB (*(PFNGLBINDBUFFERARBPROC *)(0x0098a410u))
#define ____glewBindBufferBase (*(PFNGLBINDBUFFERBASEPROC *)(0x0098a280u))
#define ____glewBindBufferBaseEXT (*(PFNGLBINDBUFFERBASEEXTPROC *)(0x0098c154u))
#define ____glewBindBufferBaseNV (*(PFNGLBINDBUFFERBASENVPROC *)(0x0098a8d4u))
#define ____glewBindBufferOffsetEXT (*(PFNGLBINDBUFFEROFFSETEXTPROC *)(0x0098c164u))
#define ____glewBindBufferOffsetNV (*(PFNGLBINDBUFFEROFFSETNVPROC *)(0x0098a8e8u))
#define ____glewBindBufferRange (*(PFNGLBINDBUFFERRANGEPROC *)(0x0098a284u))
#define ____glewBindBufferRangeEXT (*(PFNGLBINDBUFFERRANGEEXTPROC *)(0x0098c16cu))
#define ____glewBindBufferRangeNV (*(PFNGLBINDBUFFERRANGENVPROC *)(0x0098a8f4u))
#define ____glewBindBuffersBase (*(PFNGLBINDBUFFERSBASEPROC *)(0x0098c314u))
#define ____glewBindBuffersRange (*(PFNGLBINDBUFFERSRANGEPROC *)(0x0098c318u))
#define ____glewBindImageTextures (*(PFNGLBINDIMAGETEXTURESPROC *)(0x0098c320u))
#define ____glewBindSamplers (*(PFNGLBINDSAMPLERSPROC *)(0x0098c32cu))
#define ____glewBindTextureEXT (*(PFNGLBINDTEXTUREEXTPROC *)(0x0098c104u))
#define ____glewBindTextures (*(PFNGLBINDTEXTURESPROC *)(0x0098c334u))
#define ____glewBindTransformFeedback (*(PFNGLBINDTRANSFORMFEEDBACKPROC *)(0x0098a1e8u))
#define ____glewBindTransformFeedbackNV (*(PFNGLBINDTRANSFORMFEEDBACKNVPROC *)(0x0098a968u))
#define ____glewBindVertexArray (*(PFNGLBINDVERTEXARRAYPROC *)(0x0098a2dcu))
#define ____glewBindVertexArrayAPPLE (*(PFNGLBINDVERTEXARRAYAPPLEPROC *)(0x0098b808u))
#define ____glewBindVertexBuffers (*(PFNGLBINDVERTEXBUFFERSPROC *)(0x0098c340u))
#define ____glewBlendEquationIndexedAMD (*(PFNGLBLENDEQUATIONINDEXEDAMDPROC *)(0x0098b500u))
#define ____glewBlendEquationSeparateIndexedAMD (*(PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC *)(0x0098b50cu))
#define ____glewBlendEquationSeparatei (*(PFNGLBLENDEQUATIONSEPARATEIPROC *)(0x0098b45cu))
#define ____glewBlendEquationSeparateiARB (*(PFNGLBLENDEQUATIONSEPARATEIARBPROC *)(0x0098bdccu))
#define ____glewBlendEquationi (*(PFNGLBLENDEQUATIONIPROC *)(0x0098b464u))
#define ____glewBlendEquationiARB (*(PFNGLBLENDEQUATIONIARBPROC *)(0x0098bdd8u))
#define ____glewBlendFuncIndexedAMD (*(PFNGLBLENDFUNCINDEXEDAMDPROC *)(0x0098b514u))
#define ____glewBlendFuncSeparateIndexedAMD (*(PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC *)(0x0098b524u))
#define ____glewBlendFuncSeparatei (*(PFNGLBLENDFUNCSEPARATEIPROC *)(0x0098b46cu))
#define ____glewBlendFuncSeparateiARB (*(PFNGLBLENDFUNCSEPARATEIARBPROC *)(0x0098bde0u))
#define ____glewBlendFunci (*(PFNGLBLENDFUNCIPROC *)(0x0098b47cu))
#define ____glewBlendFunciARB (*(PFNGLBLENDFUNCIARBPROC *)(0x0098bde8u))
#define ____glewBufferDataARB (*(PFNGLBUFFERDATAARBPROC *)(0x0098a414u))
#define ____glewBufferSubDataARB (*(PFNGLBUFFERSUBDATAARBPROC *)(0x0098a41cu))
#define ____glewClearBufferData (*(PFNGLCLEARBUFFERDATAPROC *)(0x0098b9bcu))
#define ____glewClearBufferSubData (*(PFNGLCLEARBUFFERSUBDATAPROC *)(0x0098b9ccu))
#define ____glewClearColorIiEXT (*(PFNGLCLEARCOLORIIEXTPROC *)(0x0098c0c4u))
#define ____glewClearColorIuiEXT (*(PFNGLCLEARCOLORIUIEXTPROC *)(0x0098c0d0u))
#define ____glewClearDepthf (*(PFNGLCLEARDEPTHFPROC *)(0x0098b8a4u))
#define ____glewClearDepthfOES (*(PFNGLCLEARDEPTHFOESPROC *)(0x0098b0a8u))
#define ____glewClearNamedBufferDataEXT (*(PFNGLCLEARNAMEDBUFFERDATAEXTPROC *)(0x0098b9d0u))
#define ____glewClearNamedBufferSubDataEXT (*(PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC *)(0x0098b9d8u))
#define ____glewClientWaitSync (*(PFNGLCLIENTWAITSYNCPROC *)(0x0098a090u))
#define ____glewClipPlanefOES (*(PFNGLCLIPPLANEFOESPROC *)(0x0098b0acu))
#define ____glewColorMaskIndexedEXT (*(PFNGLCOLORMASKINDEXEDEXTPROC *)(0x0098bb30u))
#define ____glewColorPointerEXT (*(PFNGLCOLORPOINTEREXTPROC *)(0x0098c194u))
#define ____glewColorPointerListIBM (*(PFNGLCOLORPOINTERLISTIBMPROC *)(0x0098c43cu))
#define ____glewColorPointervINTEL (*(PFNGLCOLORPOINTERVINTELPROC *)(0x0098c49cu))
#define ____glewColorTableEXT (*(PFNGLCOLORTABLEEXTPROC *)(0x0098bf04u))
#define ____glewColorTableParameterfvSGI (*(PFNGLCOLORTABLEPARAMETERFVSGIPROC *)(0x0098b564u))
#define ____glewColorTableParameterivSGI (*(PFNGLCOLORTABLEPARAMETERIVSGIPROC *)(0x0098b570u))
#define ____glewColorTableSGI (*(PFNGLCOLORTABLESGIPROC *)(0x0098b574u))
#define ____glewCompileShaderIncludeARB (*(PFNGLCOMPILESHADERINCLUDEARBPROC *)(0x0098a040u))
#define ____glewCompressedTexImage1DARB (*(PFNGLCOMPRESSEDTEXIMAGE1DARBPROC *)(0x0098a108u))
#define ____glewCompressedTexImage2DARB (*(PFNGLCOMPRESSEDTEXIMAGE2DARBPROC *)(0x0098a10cu))
#define ____glewCompressedTexImage3DARB (*(PFNGLCOMPRESSEDTEXIMAGE3DARBPROC *)(0x0098a118u))
#define ____glewCompressedTexSubImage1DARB (*(PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC *)(0x0098a11cu))
#define ____glewCompressedTexSubImage2DARB (*(PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC *)(0x0098a128u))
#define ____glewCompressedTexSubImage3DARB (*(PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC *)(0x0098a130u))
#define ____glewCopyColorTableSGI (*(PFNGLCOPYCOLORTABLESGIPROC *)(0x0098b588u))
#define ____glewCopyTexImage1DEXT (*(PFNGLCOPYTEXIMAGE1DEXTPROC *)(0x0098b170u))
#define ____glewCopyTexImage2DEXT (*(PFNGLCOPYTEXIMAGE2DEXTPROC *)(0x0098b178u))
#define ____glewCopyTexSubImage1DEXT (*(PFNGLCOPYTEXSUBIMAGE1DEXTPROC *)(0x0098b184u))
#define ____glewCopyTexSubImage2DEXT (*(PFNGLCOPYTEXSUBIMAGE2DEXTPROC *)(0x0098b194u))
#define ____glewCopyTexSubImage3D (*(PFNGLCOPYTEXSUBIMAGE3DPROC *)(0x0098a544u))
#define ____glewCopyTexSubImage3DEXT (*(PFNGLCOPYTEXSUBIMAGE3DEXTPROC *)(0x0098b19cu))
#define ____glewCoverageModulationNV (*(PFNGLCOVERAGEMODULATIONNVPROC *)(0x0098bf8cu))
#define ____glewCoverageModulationTableNV (*(PFNGLCOVERAGEMODULATIONTABLENVPROC *)(0x0098bf98u))
#define ____glewCreatePerfQueryINTEL (*(PFNGLCREATEPERFQUERYINTELPROC *)(0x0098c4c8u))
#define ____glewCurrentPaletteMatrixARB (*(PFNGLCURRENTPALETTEMATRIXARBPROC *)(0x0098c2e8u))
#define ____glewDebugMessageCallback (*(PFNGLDEBUGMESSAGECALLBACKPROC *)(0x0098c538u))
#define ____glewDebugMessageCallbackAMD (*(PFNGLDEBUGMESSAGECALLBACKAMDPROC *)(0x0098b4ccu))
#define ____glewDebugMessageCallbackARB (*(PFNGLDEBUGMESSAGECALLBACKARBPROC *)(0x0098ba38u))
#define ____glewDebugMessageControl (*(PFNGLDEBUGMESSAGECONTROLPROC *)(0x0098c540u))
#define ____glewDebugMessageControlARB (*(PFNGLDEBUGMESSAGECONTROLARBPROC *)(0x0098ba40u))
#define ____glewDebugMessageEnableAMD (*(PFNGLDEBUGMESSAGEENABLEAMDPROC *)(0x0098b4d8u))
#define ____glewDebugMessageInsert (*(PFNGLDEBUGMESSAGEINSERTPROC *)(0x0098c54cu))
#define ____glewDebugMessageInsertAMD (*(PFNGLDEBUGMESSAGEINSERTAMDPROC *)(0x0098b4ecu))
#define ____glewDebugMessageInsertARB (*(PFNGLDEBUGMESSAGEINSERTARBPROC *)(0x0098ba44u))
#define ____glewDeleteAsyncMarkersSGIX (*(PFNGLDELETEASYNCMARKERSSGIXPROC *)(0x0098b3dcu))
#define ____glewDeleteBuffersARB (*(PFNGLDELETEBUFFERSARBPROC *)(0x0098a428u))
#define ____glewDeleteFencesAPPLE (*(PFNGLDELETEFENCESAPPLEPROC *)(0x0098b754u))
#define ____glewDeleteFencesNV (*(PFNGLDELETEFENCESNVPROC *)(0x00989f00u))
#define ____glewDeleteNamedStringARB (*(PFNGLDELETENAMEDSTRINGARBPROC *)(0x0098a04cu))
#define ____glewDeleteOcclusionQueriesNV (*(PFNGLDELETEOCCLUSIONQUERIESNVPROC *)(0x0098a350u))
#define ____glewDeletePerfMonitorsAMD (*(PFNGLDELETEPERFMONITORSAMDPROC *)(0x0098b58cu))
#define ____glewDeletePerfQueryINTEL (*(PFNGLDELETEPERFQUERYINTELPROC *)(0x0098c4d4u))
#define ____glewDeleteQueriesARB (*(PFNGLDELETEQUERIESARBPROC *)(0x0098c4a0u))
#define ____glewDeleteSync (*(PFNGLDELETESYNCPROC *)(0x0098a09cu))
#define ____glewDeleteTexturesEXT (*(PFNGLDELETETEXTURESEXTPROC *)(0x0098c10cu))
#define ____glewDeleteTransformFeedbacks (*(PFNGLDELETETRANSFORMFEEDBACKSPROC *)(0x0098a1f0u))
#define ____glewDeleteTransformFeedbacksNV (*(PFNGLDELETETRANSFORMFEEDBACKSNVPROC *)(0x0098a970u))
#define ____glewDeleteVertexArrays (*(PFNGLDELETEVERTEXARRAYSPROC *)(0x0098a2e0u))
#define ____glewDeleteVertexArraysAPPLE (*(PFNGLDELETEVERTEXARRAYSAPPLEPROC *)(0x0098b814u))
#define ____glewDepthRangeArrayv (*(PFNGLDEPTHRANGEARRAYVPROC *)(0x0098a9a0u))
#define ____glewDepthRangeIndexed (*(PFNGLDEPTHRANGEINDEXEDPROC *)(0x0098a9b0u))
#define ____glewDepthRangef (*(PFNGLDEPTHRANGEFPROC *)(0x0098b8a8u))
#define ____glewDepthRangefOES (*(PFNGLDEPTHRANGEFOESPROC *)(0x0098b0c0u))
#define ____glewDisableIndexedEXT (*(PFNGLDISABLEINDEXEDEXTPROC *)(0x0098bb3cu))
#define ____glewDisableVertexAttribAPPLE (*(PFNGLDISABLEVERTEXATTRIBAPPLEPROC *)(0x0098b864u))
#define ____glewDrawArraysEXT (*(PFNGLDRAWARRAYSEXTPROC *)(0x0098c19cu))
#define ____glewDrawArraysInstanced (*(PFNGLDRAWARRAYSINSTANCEDPROC *)(0x0098b3fcu))
#define ____glewDrawElementArrayAPPLE (*(PFNGLDRAWELEMENTARRAYAPPLEPROC *)(0x0098b720u))
#define ____glewDrawElementsBaseVertex (*(PFNGLDRAWELEMENTSBASEVERTEXPROC *)(0x0098bdf0u))
#define ____glewDrawElementsInstanced (*(PFNGLDRAWELEMENTSINSTANCEDPROC *)(0x0098b408u))
#define ____glewDrawElementsInstancedBaseVertex (*(PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC *)(0x0098bdfcu))
#define ____glewDrawRangeElementArrayAPPLE (*(PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC *)(0x0098b728u))
#define ____glewDrawRangeElements (*(PFNGLDRAWRANGEELEMENTSPROC *)(0x0098a548u))
#define ____glewDrawRangeElementsBaseVertex (*(PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC *)(0x0098be00u))
#define ____glewDrawTransformFeedback (*(PFNGLDRAWTRANSFORMFEEDBACKPROC *)(0x0098a1fcu))
#define ____glewDrawTransformFeedbackNV (*(PFNGLDRAWTRANSFORMFEEDBACKNVPROC *)(0x0098a980u))
#define ____glewDrawTransformFeedbackStream (*(PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC *)(0x0098a22cu))
#define ____glewDrawVkImageNV (*(PFNGLDRAWVKIMAGENVPROC *)(0x00989e6cu))
#define ____glewEdgeFlagPointerEXT (*(PFNGLEDGEFLAGPOINTEREXTPROC *)(0x0098c1a8u))
#define ____glewEdgeFlagPointerListIBM (*(PFNGLEDGEFLAGPOINTERLISTIBMPROC *)(0x0098c440u))
#define ____glewElementPointerAPPLE (*(PFNGLELEMENTPOINTERAPPLEPROC *)(0x0098b734u))
#define ____glewEnableIndexedEXT (*(PFNGLENABLEINDEXEDEXTPROC *)(0x0098bb44u))
#define ____glewEnableVertexAttribAPPLE (*(PFNGLENABLEVERTEXATTRIBAPPLEPROC *)(0x0098b86cu))
#define ____glewEndOcclusionQueryNV (*(PFNGLENDOCCLUSIONQUERYNVPROC *)(0x0098a354u))
#define ____glewEndPerfMonitorAMD (*(PFNGLENDPERFMONITORAMDPROC *)(0x0098b59cu))
#define ____glewEndPerfQueryINTEL (*(PFNGLENDPERFQUERYINTELPROC *)(0x0098c4d8u))
#define ____glewEndQueryARB (*(PFNGLENDQUERYARBPROC *)(0x0098c4a8u))
#define ____glewEndQueryIndexed (*(PFNGLENDQUERYINDEXEDPROC *)(0x0098a238u))
#define ____glewEndTransformFeedbackEXT (*(PFNGLENDTRANSFORMFEEDBACKEXTPROC *)(0x0098c170u))
#define ____glewEndTransformFeedbackNV (*(PFNGLENDTRANSFORMFEEDBACKNVPROC *)(0x0098a908u))
#define ____glewEvalMapsNV (*(PFNGLEVALMAPSNVPROC *)(0x00989e94u))
#define ____glewFenceSync (*(PFNGLFENCESYNCPROC *)(0x0098a0a0u))
#define ____glewFinishAsyncSGIX (*(PFNGLFINISHASYNCSGIXPROC *)(0x0098b3f0u))
#define ____glewFinishFenceAPPLE (*(PFNGLFINISHFENCEAPPLEPROC *)(0x0098b760u))
#define ____glewFinishFenceNV (*(PFNGLFINISHFENCENVPROC *)(0x00989f10u))
#define ____glewFinishObjectAPPLE (*(PFNGLFINISHOBJECTAPPLEPROC *)(0x0098b774u))
#define ____glewFogCoordPointerEXT (*(PFNGLFOGCOORDPOINTEREXTPROC *)(0x0098bb84u))
#define ____glewFogCoordPointerListIBM (*(PFNGLFOGCOORDPOINTERLISTIBMPROC *)(0x0098c448u))
#define ____glewFogCoorddEXT (*(PFNGLFOGCOORDDEXTPROC *)(0x0098bb88u))
#define ____glewFogCoorddvEXT (*(PFNGLFOGCOORDDVEXTPROC *)(0x0098bb94u))
#define ____glewFogCoordfEXT (*(PFNGLFOGCOORDFEXTPROC *)(0x0098bb9cu))
#define ____glewFogCoordfvEXT (*(PFNGLFOGCOORDFVEXTPROC *)(0x0098bba4u))
#define ____glewFramebufferParameteri (*(PFNGLFRAMEBUFFERPARAMETERIPROC *)(0x0098be24u))
#define ____glewFramebufferTexture (*(PFNGLFRAMEBUFFERTEXTUREPROC *)(0x0098b428u))
#define ____glewFramebufferTextureARB (*(PFNGLFRAMEBUFFERTEXTUREARBPROC *)(0x0098bf00u))
#define ____glewFramebufferTextureFaceARB (*(PFNGLFRAMEBUFFERTEXTUREFACEARBPROC *)(0x0098bf08u))
#define ____glewFramebufferTextureLayerARB (*(PFNGLFRAMEBUFFERTEXTURELAYERARBPROC *)(0x0098bf0cu))
#define ____glewFrustumfOES (*(PFNGLFRUSTUMFOESPROC *)(0x0098b0ccu))
#define ____glewGenAsyncMarkersSGIX (*(PFNGLGENASYNCMARKERSSGIXPROC *)(0x0098b3f8u))
#define ____glewGenBuffersARB (*(PFNGLGENBUFFERSARBPROC *)(0x0098a430u))
#define ____glewGenFencesAPPLE (*(PFNGLGENFENCESAPPLEPROC *)(0x0098b77cu))
#define ____glewGenFencesNV (*(PFNGLGENFENCESNVPROC *)(0x00989f14u))
#define ____glewGenOcclusionQueriesNV (*(PFNGLGENOCCLUSIONQUERIESNVPROC *)(0x0098a364u))
#define ____glewGenPerfMonitorsAMD (*(PFNGLGENPERFMONITORSAMDPROC *)(0x0098b5a8u))
#define ____glewGenQueriesARB (*(PFNGLGENQUERIESARBPROC *)(0x0098c4acu))
#define ____glewGenTexturesEXT (*(PFNGLGENTEXTURESEXTPROC *)(0x0098c118u))
#define ____glewGenTransformFeedbacks (*(PFNGLGENTRANSFORMFEEDBACKSPROC *)(0x0098a200u))
#define ____glewGenTransformFeedbacksNV (*(PFNGLGENTRANSFORMFEEDBACKSNVPROC *)(0x0098a994u))
#define ____glewGenVertexArrays (*(PFNGLGENVERTEXARRAYSPROC *)(0x0098a2ecu))
#define ____glewGenVertexArraysAPPLE (*(PFNGLGENVERTEXARRAYSAPPLEPROC *)(0x0098b824u))
#define ____glewGetActiveSubroutineName (*(PFNGLGETACTIVESUBROUTINENAMEPROC *)(0x00989ff8u))
#define ____glewGetActiveSubroutineUniformName (*(PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC *)(0x0098a004u))
#define ____glewGetActiveSubroutineUniformiv (*(PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC *)(0x0098a008u))
#define ____glewGetActiveUniformBlockName (*(PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC *)(0x0098a294u))
#define ____glewGetActiveUniformBlockiv (*(PFNGLGETACTIVEUNIFORMBLOCKIVPROC *)(0x0098a29cu))
#define ____glewGetActiveUniformName (*(PFNGLGETACTIVEUNIFORMNAMEPROC *)(0x0098a2a4u))
#define ____glewGetActiveUniformsiv (*(PFNGLGETACTIVEUNIFORMSIVPROC *)(0x0098a2acu))
#define ____glewGetActiveVaryingNV (*(PFNGLGETACTIVEVARYINGNVPROC *)(0x0098a910u))
#define ____glewGetBooleanIndexedvEXT (*(PFNGLGETBOOLEANINDEXEDVEXTPROC *)(0x0098bb48u))
#define ____glewGetBufferParameteri64v (*(PFNGLGETBUFFERPARAMETERI64VPROC *)(0x0098b430u))
#define ____glewGetBufferParameterivARB (*(PFNGLGETBUFFERPARAMETERIVARBPROC *)(0x0098a434u))
#define ____glewGetBufferPointervARB (*(PFNGLGETBUFFERPOINTERVARBPROC *)(0x0098a43cu))
#define ____glewGetBufferSubDataARB (*(PFNGLGETBUFFERSUBDATAARBPROC *)(0x0098a448u))
#define ____glewGetClipPlanefOES (*(PFNGLGETCLIPPLANEFOESPROC *)(0x0098b0d0u))
#define ____glewGetColorTableEXT (*(PFNGLGETCOLORTABLEEXTPROC *)(0x0098bf10u))
#define ____glewGetColorTableParameterfvEXT (*(PFNGLGETCOLORTABLEPARAMETERFVEXTPROC *)(0x0098bf1cu))
#define ____glewGetColorTableParameterfvSGI (*(PFNGLGETCOLORTABLEPARAMETERFVSGIPROC *)(0x0098b594u))
#define ____glewGetColorTableParameterivEXT (*(PFNGLGETCOLORTABLEPARAMETERIVEXTPROC *)(0x0098bf20u))
#define ____glewGetColorTableParameterivSGI (*(PFNGLGETCOLORTABLEPARAMETERIVSGIPROC *)(0x0098b5a0u))
#define ____glewGetColorTableSGI (*(PFNGLGETCOLORTABLESGIPROC *)(0x0098b5a4u))
#define ____glewGetCompressedTexImageARB (*(PFNGLGETCOMPRESSEDTEXIMAGEARBPROC *)(0x0098a138u))
#define ____glewGetCoverageModulationTableNV (*(PFNGLGETCOVERAGEMODULATIONTABLENVPROC *)(0x0098bfa0u))
#define ____glewGetDebugMessageLog (*(PFNGLGETDEBUGMESSAGELOGPROC *)(0x0098c550u))
#define ____glewGetDebugMessageLogAMD (*(PFNGLGETDEBUGMESSAGELOGAMDPROC *)(0x0098b4f8u))
#define ____glewGetDebugMessageLogARB (*(PFNGLGETDEBUGMESSAGELOGARBPROC *)(0x0098ba4cu))
#define ____glewGetDoublei_v (*(PFNGLGETDOUBLEI_VPROC *)(0x0098a9c8u))
#define ____glewGetFenceivNV (*(PFNGLGETFENCEIVNVPROC *)(0x00989f20u))
#define ____glewGetFirstPerfQueryIdINTEL (*(PFNGLGETFIRSTPERFQUERYIDINTELPROC *)(0x0098c4e4u))
#define ____glewGetFloati_v (*(PFNGLGETFLOATI_VPROC *)(0x0098a9dcu))
#define ____glewGetFramebufferParameteriv (*(PFNGLGETFRAMEBUFFERPARAMETERIVPROC *)(0x0098be30u))
#define ____glewGetGraphicsResetStatus (*(PFNGLGETGRAPHICSRESETSTATUSPROC *)(0x0098b498u))
#define ____glewGetHistogramEXT (*(PFNGLGETHISTOGRAMEXTPROC *)(0x0098be5cu))
#define ____glewGetHistogramParameterfvEXT (*(PFNGLGETHISTOGRAMPARAMETERFVEXTPROC *)(0x0098be60u))
#define ____glewGetHistogramParameterivEXT (*(PFNGLGETHISTOGRAMPARAMETERIVEXTPROC *)(0x0098be70u))
#define ____glewGetImageTransformParameterfvHP (*(PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC *)(0x0098c3f4u))
#define ____glewGetImageTransformParameterivHP (*(PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC *)(0x0098c3fcu))
#define ____glewGetInteger64i_v (*(PFNGLGETINTEGER64I_VPROC *)(0x0098b444u))
#define ____glewGetInteger64v (*(PFNGLGETINTEGER64VPROC *)(0x0098a0acu))
#define ____glewGetIntegerIndexedvEXT (*(PFNGLGETINTEGERINDEXEDVEXTPROC *)(0x0098bb58u))
#define ____glewGetIntegeri_v (*(PFNGLGETINTEGERI_VPROC *)(0x0098a2b8u))
#define ____glewGetMapAttribParameterfvNV (*(PFNGLGETMAPATTRIBPARAMETERFVNVPROC *)(0x00989ea4u))
#define ____glewGetMapAttribParameterivNV (*(PFNGLGETMAPATTRIBPARAMETERIVNVPROC *)(0x00989eacu))
#define ____glewGetMapControlPointsNV (*(PFNGLGETMAPCONTROLPOINTSNVPROC *)(0x00989eb0u))
#define ____glewGetMapParameterfvNV (*(PFNGLGETMAPPARAMETERFVNVPROC *)(0x00989eb8u))
#define ____glewGetMapParameterivNV (*(PFNGLGETMAPPARAMETERIVNVPROC *)(0x00989ec8u))
#define ____glewGetMinmaxEXT (*(PFNGLGETMINMAXEXTPROC *)(0x0098be74u))
#define ____glewGetMinmaxParameterfvEXT (*(PFNGLGETMINMAXPARAMETERFVEXTPROC *)(0x0098be80u))
#define ____glewGetMinmaxParameterivEXT (*(PFNGLGETMINMAXPARAMETERIVEXTPROC *)(0x0098be84u))
#define ____glewGetMultisamplefv (*(PFNGLGETMULTISAMPLEFVPROC *)(0x0098a140u))
#define ____glewGetNamedFramebufferParameterivEXT (*(PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC *)(0x0098be38u))
#define ____glewGetNamedStringARB (*(PFNGLGETNAMEDSTRINGARBPROC *)(0x0098a050u))
#define ____glewGetNamedStringivARB (*(PFNGLGETNAMEDSTRINGIVARBPROC *)(0x0098a05cu))
#define ____glewGetNextPerfQueryIdINTEL (*(PFNGLGETNEXTPERFQUERYIDINTELPROC *)(0x0098c4f0u))
#define ____glewGetObjectLabel (*(PFNGLGETOBJECTLABELPROC *)(0x0098c55cu))
#define ____glewGetObjectPtrLabel (*(PFNGLGETOBJECTPTRLABELPROC *)(0x0098c564u))
#define ____glewGetOcclusionQueryivNV (*(PFNGLGETOCCLUSIONQUERYIVNVPROC *)(0x0098a36cu))
#define ____glewGetOcclusionQueryuivNV (*(PFNGLGETOCCLUSIONQUERYUIVNVPROC *)(0x0098a370u))
#define ____glewGetPerfCounterInfoINTEL (*(PFNGLGETPERFCOUNTERINFOINTELPROC *)(0x0098c4f8u))
#define ____glewGetPerfMonitorCounterDataAMD (*(PFNGLGETPERFMONITORCOUNTERDATAAMDPROC *)(0x0098b5b8u))
#define ____glewGetPerfMonitorCounterInfoAMD (*(PFNGLGETPERFMONITORCOUNTERINFOAMDPROC *)(0x0098b5c0u))
#define ____glewGetPerfMonitorCounterStringAMD (*(PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC *)(0x0098b5c8u))
#define ____glewGetPerfMonitorCountersAMD (*(PFNGLGETPERFMONITORCOUNTERSAMDPROC *)(0x0098b5d8u))
#define ____glewGetPerfMonitorGroupStringAMD (*(PFNGLGETPERFMONITORGROUPSTRINGAMDPROC *)(0x0098b5e0u))
#define ____glewGetPerfMonitorGroupsAMD (*(PFNGLGETPERFMONITORGROUPSAMDPROC *)(0x0098b5f0u))
#define ____glewGetPerfQueryDataINTEL (*(PFNGLGETPERFQUERYDATAINTELPROC *)(0x0098c504u))
#define ____glewGetPerfQueryIdByNameINTEL (*(PFNGLGETPERFQUERYIDBYNAMEINTELPROC *)(0x0098c508u))
#define ____glewGetPerfQueryInfoINTEL (*(PFNGLGETPERFQUERYINFOINTELPROC *)(0x0098c510u))
#define ____glewGetPixelTransformParameterfvEXT (*(PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC *)(0x0098bf2cu))
#define ____glewGetPixelTransformParameterivEXT (*(PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC *)(0x0098bf30u))
#define ____glewGetProgramInterfaceiv (*(PFNGLGETPROGRAMINTERFACEIVPROC *)(0x0098c4f4u))
#define ____glewGetProgramNamedParameterdvNV (*(PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC *)(0x00989f50u))
#define ____glewGetProgramNamedParameterfvNV (*(PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC *)(0x00989f54u))
#define ____glewGetProgramResourceIndex (*(PFNGLGETPROGRAMRESOURCEINDEXPROC *)(0x0098c4fcu))
#define ____glewGetProgramResourceLocation (*(PFNGLGETPROGRAMRESOURCELOCATIONPROC *)(0x0098c50cu))
#define ____glewGetProgramResourceLocationIndex (*(PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC *)(0x0098c514u))
#define ____glewGetProgramResourceName (*(PFNGLGETPROGRAMRESOURCENAMEPROC *)(0x0098c518u))
#define ____glewGetProgramResourceiv (*(PFNGLGETPROGRAMRESOURCEIVPROC *)(0x0098c524u))
#define ____glewGetProgramStageiv (*(PFNGLGETPROGRAMSTAGEIVPROC *)(0x0098a014u))
#define ____glewGetQueryIndexediv (*(PFNGLGETQUERYINDEXEDIVPROC *)(0x0098a23cu))
#define ____glewGetQueryObjectivARB (*(PFNGLGETQUERYOBJECTIVARBPROC *)(0x0098c4b8u))
#define ____glewGetQueryObjectuivARB (*(PFNGLGETQUERYOBJECTUIVARBPROC *)(0x0098c4c4u))
#define ____glewGetQueryivARB (*(PFNGLGETQUERYIVARBPROC *)(0x0098c4ccu))
#define ____glewGetShaderPrecisionFormat (*(PFNGLGETSHADERPRECISIONFORMATPROC *)(0x0098b8b4u))
#define ____glewGetSubroutineIndex (*(PFNGLGETSUBROUTINEINDEXPROC *)(0x0098a01cu))
#define ____glewGetSubroutineUniformLocation (*(PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC *)(0x0098a028u))
#define ____glewGetSynciv (*(PFNGLGETSYNCIVPROC *)(0x0098a0b4u))
#define ____glewGetTexBumpParameterfvATI (*(PFNGLGETTEXBUMPPARAMETERFVATIPROC *)(0x0098ab8cu))
#define ____glewGetTexBumpParameterivATI (*(PFNGLGETTEXBUMPPARAMETERIVATIPROC *)(0x0098ab90u))
#define ____glewGetTexParameterIivEXT (*(PFNGLGETTEXPARAMETERIIVEXTPROC *)(0x0098c0d8u))
#define ____glewGetTexParameterIuivEXT (*(PFNGLGETTEXPARAMETERIUIVEXTPROC *)(0x0098c0e4u))
#define ____glewGetTransformFeedbackVaryingEXT (*(PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC *)(0x0098c17cu))
#define ____glewGetTransformFeedbackVaryingNV (*(PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC *)(0x0098a928u))
#define ____glewGetUniformBlockIndex (*(PFNGLGETUNIFORMBLOCKINDEXPROC *)(0x0098a2bcu))
#define ____glewGetUniformIndices (*(PFNGLGETUNIFORMINDICESPROC *)(0x0098a2c8u))
#define ____glewGetUniformSubroutineuiv (*(PFNGLGETUNIFORMSUBROUTINEUIVPROC *)(0x0098a02cu))
#define ____glewGetVaryingLocationNV (*(PFNGLGETVARYINGLOCATIONNVPROC *)(0x0098a93cu))
#define ____glewGetVertexAttribLdv (*(PFNGLGETVERTEXATTRIBLDVPROC *)(0x0098a2fcu))
#define ____glewGetVertexAttribLdvEXT (*(PFNGLGETVERTEXATTRIBLDVEXTPROC *)(0x0098c1d8u))
#define ____glewGetVideoi64vNV (*(PFNGLGETVIDEOI64VNVPROC *)(0x0098a5fcu))
#define ____glewGetVideoivNV (*(PFNGLGETVIDEOIVNVPROC *)(0x0098a610u))
#define ____glewGetVideoui64vNV (*(PFNGLGETVIDEOUI64VNVPROC *)(0x0098a614u))
#define ____glewGetVideouivNV (*(PFNGLGETVIDEOUIVNVPROC *)(0x0098a620u))
#define ____glewGetVkProcAddrNV (*(PFNGLGETVKPROCADDRNVPROC *)(0x00989e70u))
#define ____glewGetnCompressedTexImage (*(PFNGLGETNCOMPRESSEDTEXIMAGEPROC *)(0x0098b4a0u))
#define ____glewGetnTexImage (*(PFNGLGETNTEXIMAGEPROC *)(0x0098b4acu))
#define ____glewGetnUniformdv (*(PFNGLGETNUNIFORMDVPROC *)(0x0098b4bcu))
#define ____glewGetnUniformfv (*(PFNGLGETNUNIFORMFVPROC *)(0x0098c58cu))
#define ____glewGetnUniformiv (*(PFNGLGETNUNIFORMIVPROC *)(0x0098c59cu))
#define ____glewGetnUniformuiv (*(PFNGLGETNUNIFORMUIVPROC *)(0x0098c5a4u))
#define ____glewGlobalAlphaFactorbSUN (*(PFNGLGLOBALALPHAFACTORBSUNPROC *)(0x0098b5bcu))
#define ____glewGlobalAlphaFactordSUN (*(PFNGLGLOBALALPHAFACTORDSUNPROC *)(0x0098b5d0u))
#define ____glewGlobalAlphaFactorfSUN (*(PFNGLGLOBALALPHAFACTORFSUNPROC *)(0x0098b5dcu))
#define ____glewGlobalAlphaFactoriSUN (*(PFNGLGLOBALALPHAFACTORISUNPROC *)(0x0098b5e8u))
#define ____glewGlobalAlphaFactorsSUN (*(PFNGLGLOBALALPHAFACTORSSUNPROC *)(0x0098b5f4u))
#define ____glewGlobalAlphaFactorubSUN (*(PFNGLGLOBALALPHAFACTORUBSUNPROC *)(0x0098b600u))
#define ____glewGlobalAlphaFactoruiSUN (*(PFNGLGLOBALALPHAFACTORUISUNPROC *)(0x0098b604u))
#define ____glewGlobalAlphaFactorusSUN (*(PFNGLGLOBALALPHAFACTORUSSUNPROC *)(0x0098b618u))
#define ____glewHistogramEXT (*(PFNGLHISTOGRAMEXTPROC *)(0x0098be94u))
#define ____glewImageTransformParameterfHP (*(PFNGLIMAGETRANSFORMPARAMETERFHPPROC *)(0x0098c404u))
#define ____glewImageTransformParameterfvHP (*(PFNGLIMAGETRANSFORMPARAMETERFVHPPROC *)(0x0098c410u))
#define ____glewImageTransformParameteriHP (*(PFNGLIMAGETRANSFORMPARAMETERIHPPROC *)(0x0098c418u))
#define ____glewImageTransformParameterivHP (*(PFNGLIMAGETRANSFORMPARAMETERIVHPPROC *)(0x0098c41cu))
#define ____glewIndexPointerEXT (*(PFNGLINDEXPOINTEREXTPROC *)(0x0098c1b4u))
#define ____glewIndexPointerListIBM (*(PFNGLINDEXPOINTERLISTIBMPROC *)(0x0098c454u))
#define ____glewInvalidateBufferData (*(PFNGLINVALIDATEBUFFERDATAPROC *)(0x0098c298u))
#define ____glewInvalidateBufferSubData (*(PFNGLINVALIDATEBUFFERSUBDATAPROC *)(0x0098c2a4u))
#define ____glewInvalidateFramebuffer (*(PFNGLINVALIDATEFRAMEBUFFERPROC *)(0x0098c2acu))
#define ____glewInvalidateSubFramebuffer (*(PFNGLINVALIDATESUBFRAMEBUFFERPROC *)(0x0098c2b4u))
#define ____glewInvalidateTexImage (*(PFNGLINVALIDATETEXIMAGEPROC *)(0x0098c2bcu))
#define ____glewInvalidateTexSubImage (*(PFNGLINVALIDATETEXSUBIMAGEPROC *)(0x0098c2c8u))
#define ____glewIsAsyncMarkerSGIX (*(PFNGLISASYNCMARKERSGIXPROC *)(0x0098b404u))
#define ____glewIsBufferARB (*(PFNGLISBUFFERARBPROC *)(0x0098a44cu))
#define ____glewIsEnabledIndexedEXT (*(PFNGLISENABLEDINDEXEDEXTPROC *)(0x0098bb5cu))
#define ____glewIsFenceAPPLE (*(PFNGLISFENCEAPPLEPROC *)(0x0098b788u))
#define ____glewIsFenceNV (*(PFNGLISFENCENVPROC *)(0x00989f24u))
#define ____glewIsNamedStringARB (*(PFNGLISNAMEDSTRINGARBPROC *)(0x0098a064u))
#define ____glewIsOcclusionQueryNV (*(PFNGLISOCCLUSIONQUERYNVPROC *)(0x0098a37cu))
#define ____glewIsQueryARB (*(PFNGLISQUERYARBPROC *)(0x0098c4d0u))
#define ____glewIsSync (*(PFNGLISSYNCPROC *)(0x0098a0bcu))
#define ____glewIsTextureEXT (*(PFNGLISTEXTUREEXTPROC *)(0x0098c120u))
#define ____glewIsTransformFeedback (*(PFNGLISTRANSFORMFEEDBACKPROC *)(0x0098a208u))
#define ____glewIsTransformFeedbackNV (*(PFNGLISTRANSFORMFEEDBACKNVPROC *)(0x0098a9a4u))
#define ____glewIsVertexArray (*(PFNGLISVERTEXARRAYPROC *)(0x0098a2f8u))
#define ____glewIsVertexArrayAPPLE (*(PFNGLISVERTEXARRAYAPPLEPROC *)(0x0098b834u))
#define ____glewIsVertexAttribEnabledAPPLE (*(PFNGLISVERTEXATTRIBENABLEDAPPLEPROC *)(0x0098b874u))
#define ____glewLoadTransposeMatrixdARB (*(PFNGLLOADTRANSPOSEMATRIXDARBPROC *)(0x0098a258u))
#define ____glewLoadTransposeMatrixfARB (*(PFNGLLOADTRANSPOSEMATRIXFARBPROC *)(0x0098a268u))
#define ____glewMapBufferARB (*(PFNGLMAPBUFFERARBPROC *)(0x0098a454u))
#define ____glewMapControlPointsNV (*(PFNGLMAPCONTROLPOINTSNVPROC *)(0x00989eccu))
#define ____glewMapParameterfvNV (*(PFNGLMAPPARAMETERFVNVPROC *)(0x00989ed8u))
#define ____glewMapParameterivNV (*(PFNGLMAPPARAMETERIVNVPROC *)(0x00989ee4u))
#define ____glewMapVertexAttrib1dAPPLE (*(PFNGLMAPVERTEXATTRIB1DAPPLEPROC *)(0x0098b87cu))
#define ____glewMapVertexAttrib1fAPPLE (*(PFNGLMAPVERTEXATTRIB1FAPPLEPROC *)(0x0098b884u))
#define ____glewMapVertexAttrib2dAPPLE (*(PFNGLMAPVERTEXATTRIB2DAPPLEPROC *)(0x0098b88cu))
#define ____glewMapVertexAttrib2fAPPLE (*(PFNGLMAPVERTEXATTRIB2FAPPLEPROC *)(0x0098b894u))
#define ____glewMatrixIndexPointerARB (*(PFNGLMATRIXINDEXPOINTERARBPROC *)(0x0098c2f0u))
#define ____glewMatrixIndexubvARB (*(PFNGLMATRIXINDEXUBVARBPROC *)(0x0098c2f8u))
#define ____glewMatrixIndexuivARB (*(PFNGLMATRIXINDEXUIVARBPROC *)(0x0098c300u))
#define ____glewMatrixIndexusvARB (*(PFNGLMATRIXINDEXUSVARBPROC *)(0x0098c304u))
#define ____glewMinSampleShading (*(PFNGLMINSAMPLESHADINGPROC *)(0x0098b488u))
#define ____glewMinmaxEXT (*(PFNGLMINMAXEXTPROC *)(0x0098be98u))
#define ____glewMultTransposeMatrixdARB (*(PFNGLMULTTRANSPOSEMATRIXDARBPROC *)(0x0098a270u))
#define ____glewMultTransposeMatrixfARB (*(PFNGLMULTTRANSPOSEMATRIXFARBPROC *)(0x0098a278u))
#define ____glewMultiDrawElementArrayAPPLE (*(PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC *)(0x0098b740u))
#define ____glewMultiDrawElementsBaseVertex (*(PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC *)(0x0098be08u))
#define ____glewMultiDrawRangeElementArrayAPPLE (*(PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC *)(0x0098b748u))
#define ____glewNamedFramebufferParameteriEXT (*(PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC *)(0x0098be3cu))
#define ____glewNamedStringARB (*(PFNGLNAMEDSTRINGARBPROC *)(0x0098a068u))
#define ____glewNormalPointerEXT (*(PFNGLNORMALPOINTEREXTPROC *)(0x0098c1b8u))
#define ____glewNormalPointerListIBM (*(PFNGLNORMALPOINTERLISTIBMPROC *)(0x0098c460u))
#define ____glewNormalPointervINTEL (*(PFNGLNORMALPOINTERVINTELPROC *)(0x0098c4a4u))
#define ____glewObjectLabel (*(PFNGLOBJECTLABELPROC *)(0x0098c570u))
#define ____glewObjectPtrLabel (*(PFNGLOBJECTPTRLABELPROC *)(0x0098c574u))
#define ____glewOrthofOES (*(PFNGLORTHOFOESPROC *)(0x0098b0e0u))
#define ____glewPauseTransformFeedback (*(PFNGLPAUSETRANSFORMFEEDBACKPROC *)(0x0098a214u))
#define ____glewPauseTransformFeedbackNV (*(PFNGLPAUSETRANSFORMFEEDBACKNVPROC *)(0x0098a9bcu))
#define ____glewPixelTransformParameterfEXT (*(PFNGLPIXELTRANSFORMPARAMETERFEXTPROC *)(0x0098bf40u))
#define ____glewPixelTransformParameterfvEXT (*(PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC *)(0x0098bf44u))
#define ____glewPixelTransformParameteriEXT (*(PFNGLPIXELTRANSFORMPARAMETERIEXTPROC *)(0x0098bf4cu))
#define ____glewPixelTransformParameterivEXT (*(PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC *)(0x0098bf54u))
#define ____glewPollAsyncSGIX (*(PFNGLPOLLASYNCSGIXPROC *)(0x0098b410u))
#define ____glewPopDebugGroup (*(PFNGLPOPDEBUGGROUPPROC *)(0x0098c580u))
#define ____glewPresentFrameDualFillNV (*(PFNGLPRESENTFRAMEDUALFILLNVPROC *)(0x0098a62cu))
#define ____glewPresentFrameKeyedNV (*(PFNGLPRESENTFRAMEKEYEDNVPROC *)(0x0098a638u))
#define ____glewPrimitiveRestartIndex (*(PFNGLPRIMITIVERESTARTINDEXPROC *)(0x0098b414u))
#define ____glewPrioritizeTexturesEXT (*(PFNGLPRIORITIZETEXTURESEXTPROC *)(0x0098c12cu))
#define ____glewProgramNamedParameter4dNV (*(PFNGLPROGRAMNAMEDPARAMETER4DNVPROC *)(0x00989f60u))
#define ____glewProgramNamedParameter4dvNV (*(PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC *)(0x00989f64u))
#define ____glewProgramNamedParameter4fNV (*(PFNGLPROGRAMNAMEDPARAMETER4FNVPROC *)(0x00989f74u))
#define ____glewProgramNamedParameter4fvNV (*(PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC *)(0x00989f78u))
#define ____glewProgramParameteriARB (*(PFNGLPROGRAMPARAMETERIARBPROC *)(0x0098bf18u))
#define ____glewPushDebugGroup (*(PFNGLPUSHDEBUGGROUPPROC *)(0x0098c584u))
#define ____glewRasterSamplesEXT (*(PFNGLRASTERSAMPLESEXTPROC *)(0x0098bfacu))
#define ____glewReadnPixels (*(PFNGLREADNPIXELSPROC *)(0x0098c5a8u))
#define ____glewReleaseShaderCompiler (*(PFNGLRELEASESHADERCOMPILERPROC *)(0x0098b8bcu))
#define ____glewReplacementCodePointerSUN (*(PFNGLREPLACEMENTCODEPOINTERSUNPROC *)(0x0098b630u))
#define ____glewReplacementCodeubSUN (*(PFNGLREPLACEMENTCODEUBSUNPROC *)(0x0098b63cu))
#define ____glewReplacementCodeubvSUN (*(PFNGLREPLACEMENTCODEUBVSUNPROC *)(0x0098b640u))
#define ____glewReplacementCodeuiSUN (*(PFNGLREPLACEMENTCODEUISUNPROC *)(0x0098b654u))
#define ____glewReplacementCodeuivSUN (*(PFNGLREPLACEMENTCODEUIVSUNPROC *)(0x0098b65cu))
#define ____glewReplacementCodeusSUN (*(PFNGLREPLACEMENTCODEUSSUNPROC *)(0x0098b664u))
#define ____glewReplacementCodeusvSUN (*(PFNGLREPLACEMENTCODEUSVSUNPROC *)(0x0098b674u))
#define ____glewResetHistogramEXT (*(PFNGLRESETHISTOGRAMEXTPROC *)(0x0098bea0u))
#define ____glewResetMinmaxEXT (*(PFNGLRESETMINMAXEXTPROC *)(0x0098bea8u))
#define ____glewResumeTransformFeedback (*(PFNGLRESUMETRANSFORMFEEDBACKPROC *)(0x0098a218u))
#define ____glewResumeTransformFeedbackNV (*(PFNGLRESUMETRANSFORMFEEDBACKNVPROC *)(0x0098a9c4u))
#define ____glewSampleMaski (*(PFNGLSAMPLEMASKIPROC *)(0x0098a150u))
#define ____glewScissorArrayv (*(PFNGLSCISSORARRAYVPROC *)(0x0098a9ecu))
#define ____glewScissorIndexed (*(PFNGLSCISSORINDEXEDPROC *)(0x0098a9fcu))
#define ____glewScissorIndexedv (*(PFNGLSCISSORINDEXEDVPROC *)(0x0098aa08u))
#define ____glewSecondaryColorPointerListIBM (*(PFNGLSECONDARYCOLORPOINTERLISTIBMPROC *)(0x0098c464u))
#define ____glewSelectPerfMonitorCountersAMD (*(PFNGLSELECTPERFMONITORCOUNTERSAMDPROC *)(0x0098b5fcu))
#define ____glewSetFenceAPPLE (*(PFNGLSETFENCEAPPLEPROC *)(0x0098b794u))
#define ____glewSetFenceNV (*(PFNGLSETFENCENVPROC *)(0x00989f30u))
#define ____glewShaderBinary (*(PFNGLSHADERBINARYPROC *)(0x0098b8c4u))
#define ____glewSignalVkFenceNV (*(PFNGLSIGNALVKFENCENVPROC *)(0x00989e7cu))
#define ____glewSignalVkSemaphoreNV (*(PFNGLSIGNALVKSEMAPHORENVPROC *)(0x00989e88u))
#define ____glewSpriteParameterfSGIX (*(PFNGLSPRITEPARAMETERFSGIXPROC *)(0x0098b520u))
#define ____glewSpriteParameterfvSGIX (*(PFNGLSPRITEPARAMETERFVSGIXPROC *)(0x0098b530u))
#define ____glewSpriteParameteriSGIX (*(PFNGLSPRITEPARAMETERISGIXPROC *)(0x0098b538u))
#define ____glewSpriteParameterivSGIX (*(PFNGLSPRITEPARAMETERIVSGIXPROC *)(0x0098b544u))
#define ____glewTestFenceAPPLE (*(PFNGLTESTFENCEAPPLEPROC *)(0x0098b7a0u))
#define ____glewTestFenceNV (*(PFNGLTESTFENCENVPROC *)(0x00989f38u))
#define ____glewTestObjectAPPLE (*(PFNGLTESTOBJECTAPPLEPROC *)(0x0098b7b0u))
#define ____glewTexBuffer (*(PFNGLTEXBUFFERPROC *)(0x0098b420u))
#define ____glewTexBumpParameterfvATI (*(PFNGLTEXBUMPPARAMETERFVATIPROC *)(0x0098abacu))
#define ____glewTexBumpParameterivATI (*(PFNGLTEXBUMPPARAMETERIVATIPROC *)(0x0098abbcu))
#define ____glewTexCoordPointerEXT (*(PFNGLTEXCOORDPOINTEREXTPROC *)(0x0098c1c0u))
#define ____glewTexCoordPointerListIBM (*(PFNGLTEXCOORDPOINTERLISTIBMPROC *)(0x0098c46cu))
#define ____glewTexCoordPointervINTEL (*(PFNGLTEXCOORDPOINTERVINTELPROC *)(0x0098c4b0u))
#define ____glewTexImage2DMultisample (*(PFNGLTEXIMAGE2DMULTISAMPLEPROC *)(0x0098a154u))
#define ____glewTexImage2DMultisampleCoverageNV (*(PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC *)(0x0098a858u))
#define ____glewTexImage3D (*(PFNGLTEXIMAGE3DPROC *)(0x0098a554u))
#define ____glewTexImage3DMultisample (*(PFNGLTEXIMAGE3DMULTISAMPLEPROC *)(0x0098a160u))
#define ____glewTexImage3DMultisampleCoverageNV (*(PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC *)(0x0098a868u))
#define ____glewTexParameterIivEXT (*(PFNGLTEXPARAMETERIIVEXTPROC *)(0x0098c0e8u))
#define ____glewTexParameterIuivEXT (*(PFNGLTEXPARAMETERIUIVEXTPROC *)(0x0098c0f8u))
#define ____glewTexStorage1D (*(PFNGLTEXSTORAGE1DPROC *)(0x0098a16cu))
#define ____glewTexStorage2D (*(PFNGLTEXSTORAGE2DPROC *)(0x0098a170u))
#define ____glewTexStorage2DMultisample (*(PFNGLTEXSTORAGE2DMULTISAMPLEPROC *)(0x0098a1a0u))
#define ____glewTexStorage3D (*(PFNGLTEXSTORAGE3DPROC *)(0x0098a17cu))
#define ____glewTexStorage3DMultisample (*(PFNGLTEXSTORAGE3DMULTISAMPLEPROC *)(0x0098a1a4u))
#define ____glewTexSubImage3D (*(PFNGLTEXSUBIMAGE3DPROC *)(0x0098a560u))
#define ____glewTextureImage2DMultisampleCoverageNV (*(PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC *)(0x0098a874u))
#define ____glewTextureImage2DMultisampleNV (*(PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC *)(0x0098a88cu))
#define ____glewTextureImage3DMultisampleCoverageNV (*(PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC *)(0x0098a89cu))
#define ____glewTextureImage3DMultisampleNV (*(PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC *)(0x0098a8a0u))
#define ____glewTextureStorage1DEXT (*(PFNGLTEXTURESTORAGE1DEXTPROC *)(0x0098a184u))
#define ____glewTextureStorage2DEXT (*(PFNGLTEXTURESTORAGE2DEXTPROC *)(0x0098a188u))
#define ____glewTextureStorage2DMultisampleEXT (*(PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC *)(0x0098a1acu))
#define ____glewTextureStorage3DEXT (*(PFNGLTEXTURESTORAGE3DEXTPROC *)(0x0098a198u))
#define ____glewTextureStorage3DMultisampleEXT (*(PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC *)(0x0098a1bcu))
#define ____glewTransformFeedbackAttribsNV (*(PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC *)(0x0098a944u))
#define ____glewTransformFeedbackVaryingsEXT (*(PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC *)(0x0098c184u))
#define ____glewTransformFeedbackVaryingsNV (*(PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC *)(0x0098a954u))
#define ____glewUniformBlockBinding (*(PFNGLUNIFORMBLOCKBINDINGPROC *)(0x0098a2d4u))
#define ____glewUniformMatrix2x3fv (*(PFNGLUNIFORMMATRIX2X3FVPROC *)(0x0098b120u))
#define ____glewUniformMatrix2x4fv (*(PFNGLUNIFORMMATRIX2X4FVPROC *)(0x0098b124u))
#define ____glewUniformMatrix3x2fv (*(PFNGLUNIFORMMATRIX3X2FVPROC *)(0x0098b138u))
#define ____glewUniformMatrix3x4fv (*(PFNGLUNIFORMMATRIX3X4FVPROC *)(0x0098b140u))
#define ____glewUniformMatrix4x2fv (*(PFNGLUNIFORMMATRIX4X2FVPROC *)(0x0098b148u))
#define ____glewUniformMatrix4x3fv (*(PFNGLUNIFORMMATRIX4X3FVPROC *)(0x0098b154u))
#define ____glewUniformSubroutinesuiv (*(PFNGLUNIFORMSUBROUTINESUIVPROC *)(0x0098a034u))
#define ____glewUnmapBufferARB (*(PFNGLUNMAPBUFFERARBPROC *)(0x0098a460u))
#define ____glewVDPAUFiniNV (*(PFNGLVDPAUFININVPROC *)(0x0098a9d4u))
#define ____glewVDPAUGetSurfaceivNV (*(PFNGLVDPAUGETSURFACEIVNVPROC *)(0x0098a9e0u))
#define ____glewVDPAUInitNV (*(PFNGLVDPAUINITNVPROC *)(0x0098a9f4u))
#define ____glewVDPAUIsSurfaceNV (*(PFNGLVDPAUISSURFACENVPROC *)(0x0098aa0cu))
#define ____glewVDPAUMapSurfacesNV (*(PFNGLVDPAUMAPSURFACESNVPROC *)(0x0098aa10u))
#define ____glewVDPAURegisterOutputSurfaceNV (*(PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC *)(0x0098aa2cu))
#define ____glewVDPAURegisterVideoSurfaceNV (*(PFNGLVDPAUREGISTERVIDEOSURFACENVPROC *)(0x0098aa3cu))
#define ____glewVDPAUSurfaceAccessNV (*(PFNGLVDPAUSURFACEACCESSNVPROC *)(0x0098aa44u))
#define ____glewVDPAUUnmapSurfacesNV (*(PFNGLVDPAUUNMAPSURFACESNVPROC *)(0x0098aa58u))
#define ____glewVDPAUUnregisterSurfaceNV (*(PFNGLVDPAUUNREGISTERSURFACENVPROC *)(0x0098aa68u))
#define ____glewVertexArrayVertexAttribLOffsetEXT (*(PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC *)(0x0098c1dcu))
#define ____glewVertexAttribL1d (*(PFNGLVERTEXATTRIBL1DPROC *)(0x0098a304u))
#define ____glewVertexAttribL1dEXT (*(PFNGLVERTEXATTRIBL1DEXTPROC *)(0x0098c1e4u))
#define ____glewVertexAttribL1dv (*(PFNGLVERTEXATTRIBL1DVPROC *)(0x0098a310u))
#define ____glewVertexAttribL1dvEXT (*(PFNGLVERTEXATTRIBL1DVEXTPROC *)(0x0098c1f0u))
#define ____glewVertexAttribL2d (*(PFNGLVERTEXATTRIBL2DPROC *)(0x0098a314u))
#define ____glewVertexAttribL2dEXT (*(PFNGLVERTEXATTRIBL2DEXTPROC *)(0x0098c1f8u))
#define ____glewVertexAttribL2dv (*(PFNGLVERTEXATTRIBL2DVPROC *)(0x0098a324u))
#define ____glewVertexAttribL2dvEXT (*(PFNGLVERTEXATTRIBL2DVEXTPROC *)(0x0098c204u))
#define ____glewVertexAttribL3d (*(PFNGLVERTEXATTRIBL3DPROC *)(0x0098a32cu))
#define ____glewVertexAttribL3dEXT (*(PFNGLVERTEXATTRIBL3DEXTPROC *)(0x0098c208u))
#define ____glewVertexAttribL3dv (*(PFNGLVERTEXATTRIBL3DVPROC *)(0x0098a334u))
#define ____glewVertexAttribL3dvEXT (*(PFNGLVERTEXATTRIBL3DVEXTPROC *)(0x0098c218u))
#define ____glewVertexAttribL4d (*(PFNGLVERTEXATTRIBL4DPROC *)(0x0098a33cu))
#define ____glewVertexAttribL4dEXT (*(PFNGLVERTEXATTRIBL4DEXTPROC *)(0x0098c220u))
#define ____glewVertexAttribL4dv (*(PFNGLVERTEXATTRIBL4DVPROC *)(0x0098a344u))
#define ____glewVertexAttribL4dvEXT (*(PFNGLVERTEXATTRIBL4DVEXTPROC *)(0x0098c224u))
#define ____glewVertexAttribLPointer (*(PFNGLVERTEXATTRIBLPOINTERPROC *)(0x0098a34cu))
#define ____glewVertexAttribLPointerEXT (*(PFNGLVERTEXATTRIBLPOINTEREXTPROC *)(0x0098c22cu))
#define ____glewVertexBlendARB (*(PFNGLVERTEXBLENDARBPROC *)(0x0098a3c0u))
#define ____glewVertexPointerEXT (*(PFNGLVERTEXPOINTEREXTPROC *)(0x0098c1d0u))
#define ____glewVertexPointerListIBM (*(PFNGLVERTEXPOINTERLISTIBMPROC *)(0x0098c47cu))
#define ____glewVertexPointervINTEL (*(PFNGLVERTEXPOINTERVINTELPROC *)(0x0098c4b4u))
#define ____glewViewportArrayv (*(PFNGLVIEWPORTARRAYVPROC *)(0x0098aa18u))
#define ____glewViewportIndexedf (*(PFNGLVIEWPORTINDEXEDFPROC *)(0x0098aa28u))
#define ____glewViewportIndexedfv (*(PFNGLVIEWPORTINDEXEDFVPROC *)(0x0098aa30u))
#define ____glewWaitSync (*(PFNGLWAITSYNCPROC *)(0x0098a0c4u))
#define ____glewWaitVkSemaphoreNV (*(PFNGLWAITVKSEMAPHORENVPROC *)(0x00989e8cu))
#define ____glewWeightPointerARB (*(PFNGLWEIGHTPOINTERARBPROC *)(0x0098a3c8u))
#define ____glewWeightbvARB (*(PFNGLWEIGHTBVARBPROC *)(0x0098a3d0u))
#define ____glewWeightdvARB (*(PFNGLWEIGHTDVARBPROC *)(0x0098a3d4u))
#define ____glewWeightfvARB (*(PFNGLWEIGHTFVARBPROC *)(0x0098a3dcu))
#define ____glewWeightivARB (*(PFNGLWEIGHTIVARBPROC *)(0x0098a3e8u))
#define ____glewWeightsvARB (*(PFNGLWEIGHTSVARBPROC *)(0x0098a3f0u))
#define ____glewWeightubvARB (*(PFNGLWEIGHTUBVARBPROC *)(0x0098a3f4u))
#define ____glewWeightuivARB (*(PFNGLWEIGHTUIVARBPROC *)(0x0098a400u))
#define ____glewWeightusvARB (*(PFNGLWEIGHTUSVARBPROC *)(0x0098a404u))
#define DAT_00937db0 (*(undefined1 *)(0x00937db0u))
#define DAT_00960e60 (*(undefined1 *)(0x00960e60u))
#define DAT_00960e80 (*(undefined1 *)(0x00960e80u))
#define DAT_00960e90 (*(undefined1 *)(0x00960e90u))
#define DAT_00960ea0 (*(undefined1 *)(0x00960ea0u))
#define DAT_00960eb0 (*(undefined1 *)(0x00960eb0u))
#define DAT_00960ed0 (*(undefined1 *)(0x00960ed0u))
#define DAT_00960ee0 (*(undefined1 *)(0x00960ee0u))
#define DAT_00960ef0 (*(undefined1 *)(0x00960ef0u))
#define _DAT_00960e60 (*(undefined1 *)(0x00960e60u))
#define _DAT_00960e80 (*(undefined1 *)(0x00960e80u))
#define _DAT_00960e90 (*(undefined1 *)(0x00960e90u))
#define _DAT_00960ea0 (*(undefined1 *)(0x00960ea0u))
#define _DAT_00960eb0 (*(undefined1 *)(0x00960eb0u))
#define _DAT_00960ed0 (*(undefined1 *)(0x00960ed0u))
#define _DAT_00960ee0 (*(undefined1 *)(0x00960ee0u))
#define _DAT_00960ef0 (*(undefined1 *)(0x00960ef0u))

//==== 0000401370 00401370_FUN_00401370 ====
void __fastcall FUN_00401370(uint param_1);
extern undefined4 FUN_008e47d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00401370 name=FUN_00401370 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00401370(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960da8;
  _DAT_00960ed0 = ((void *)(0x009194a4u));
  DAT_00960ed4 = (void *)0x0;
  DAT_00960ed8 = 0;
  DAT_00960edc = DAT_00960da8;
  local_8 = param_1;
  if (((int)DAT_00960da8 < 0) || (0x3fffffff < (int)DAT_00960da8)) {
    DAT_00960edc = 0;
  }
  else if (0 < (int)DAT_00960da8) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960da8 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960da8 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960ed4 = pvVar4;
    if (0 < (int)DAT_00960edc) {
      do {
        *(undefined4 *)((int)DAT_00960ed4 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960edc);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960ed8;
      local_8 = DAT_00960ed8 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960ed0,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960ed0,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960ed4 + DAT_00960ed8 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e47d0);
  return;
}


//==== 0000401490 00401490_FUN_00401490 ====
void __fastcall FUN_00401490(uint param_1);
extern undefined4 FUN_008e4810(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00401490 name=FUN_00401490 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00401490(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960de8;
  _DAT_00960e90 = ((void *)(0x009194a4u));
  DAT_00960e94 = (void *)0x0;
  DAT_00960e98 = 0;
  DAT_00960e9c = DAT_00960de8;
  local_8 = param_1;
  if (((int)DAT_00960de8 < 0) || (0x3fffffff < (int)DAT_00960de8)) {
    DAT_00960e9c = 0;
  }
  else if (0 < (int)DAT_00960de8) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960de8 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960de8 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960e94 = pvVar4;
    if (0 < (int)DAT_00960e9c) {
      do {
        *(undefined4 *)((int)DAT_00960e94 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960e9c);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960e98;
      local_8 = DAT_00960e98 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960e90,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960e90,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960e94 + DAT_00960e98 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e4810);
  return;
}


//==== 00004015b0 004015b0_FUN_004015b0 ====
void __fastcall FUN_004015b0(uint param_1);
extern undefined4 FUN_008e4850(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 004015b0 name=FUN_004015b0 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004015b0(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960e08;
  _DAT_00960eb0 = ((void *)(0x009194a4u));
  DAT_00960eb4 = (void *)0x0;
  DAT_00960eb8 = 0;
  DAT_00960ebc = DAT_00960e08;
  local_8 = param_1;
  if (((int)DAT_00960e08 < 0) || (0x3fffffff < (int)DAT_00960e08)) {
    DAT_00960ebc = 0;
  }
  else if (0 < (int)DAT_00960e08) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960e08 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960e08 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960eb4 = pvVar4;
    if (0 < (int)DAT_00960ebc) {
      do {
        *(undefined4 *)((int)DAT_00960eb4 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960ebc);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960eb8;
      local_8 = DAT_00960eb8 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960eb0,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960eb0,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960eb4 + DAT_00960eb8 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e4850);
  return;
}


//==== 00004016d0 004016d0_FUN_004016d0 ====
void __fastcall FUN_004016d0(uint param_1);
extern undefined4 FUN_008e4890(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 004016d0 name=FUN_004016d0 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004016d0(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960d68;
  _DAT_00960ea0 = ((void *)(0x009194a4u));
  DAT_00960ea4 = (void *)0x0;
  DAT_00960ea8 = 0;
  DAT_00960eac = DAT_00960d68;
  local_8 = param_1;
  if (((int)DAT_00960d68 < 0) || (0x3fffffff < (int)DAT_00960d68)) {
    DAT_00960eac = 0;
  }
  else if (0 < (int)DAT_00960d68) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960d68 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960d68 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960ea4 = pvVar4;
    if (0 < (int)DAT_00960eac) {
      do {
        *(undefined4 *)((int)DAT_00960ea4 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960eac);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960ea8;
      local_8 = DAT_00960ea8 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960ea0,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960ea0,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960ea4 + DAT_00960ea8 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e4890);
  return;
}


//==== 00004017f0 004017f0_FUN_004017f0 ====
void __fastcall FUN_004017f0(uint param_1);
extern undefined4 FUN_008e48d0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 004017f0 name=FUN_004017f0 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004017f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960dc8;
  _DAT_00960ef0 = ((void *)(0x009194a4u));
  DAT_00960ef4 = (void *)0x0;
  DAT_00960ef8 = 0;
  DAT_00960efc = DAT_00960dc8;
  local_8 = param_1;
  if (((int)DAT_00960dc8 < 0) || (0x3fffffff < (int)DAT_00960dc8)) {
    DAT_00960efc = 0;
  }
  else if (0 < (int)DAT_00960dc8) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960dc8 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960dc8 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960ef4 = pvVar4;
    if (0 < (int)DAT_00960efc) {
      do {
        *(undefined4 *)((int)DAT_00960ef4 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960efc);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960ef8;
      local_8 = DAT_00960ef8 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960ef0,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960ef0,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960ef4 + DAT_00960ef8 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e48d0);
  return;
}


//==== 0000401910 00401910_FUN_00401910 ====
void __fastcall FUN_00401910(uint param_1);
extern undefined4 FUN_008e4910(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00401910 name=FUN_00401910 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00401910(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960e28;
  _DAT_00960e60 = ((void *)(0x009194a4u));
  DAT_00960e64 = (void *)0x0;
  DAT_00960e68 = 0;
  DAT_00960e6c = DAT_00960e28;
  local_8 = param_1;
  if (((int)DAT_00960e28 < 0) || (0x3fffffff < (int)DAT_00960e28)) {
    DAT_00960e6c = 0;
  }
  else if (0 < (int)DAT_00960e28) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960e28 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960e28 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960e64 = pvVar4;
    if (0 < (int)DAT_00960e6c) {
      do {
        *(undefined4 *)((int)DAT_00960e64 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960e6c);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960e68;
      local_8 = DAT_00960e68 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960e60,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960e60,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960e64 + DAT_00960e68 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e4910);
  return;
}


//==== 0000401a30 00401a30_FUN_00401a30 ====
void __fastcall FUN_00401a30(uint param_1);
extern undefined4 FUN_008e4950(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00401a30 name=FUN_00401a30 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00401a30(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960d48;
  _DAT_00960ee0 = ((void *)(0x009194a4u));
  DAT_00960ee4 = (void *)0x0;
  DAT_00960ee8 = 0;
  DAT_00960eec = DAT_00960d48;
  local_8 = param_1;
  if (((int)DAT_00960d48 < 0) || (0x3fffffff < (int)DAT_00960d48)) {
    DAT_00960eec = 0;
  }
  else if (0 < (int)DAT_00960d48) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960d48 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960d48 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960ee4 = pvVar4;
    if (0 < (int)DAT_00960eec) {
      do {
        *(undefined4 *)((int)DAT_00960ee4 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960eec);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960ee8;
      local_8 = DAT_00960ee8 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960ee0,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960ee0,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960ee4 + DAT_00960ee8 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e4950);
  return;
}


//==== 0000401b50 00401b50_FUN_00401b50 ====
void __fastcall FUN_00401b50(uint param_1);
extern undefined4 FUN_008e4990(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00401b50 name=FUN_00401b50 conv=unknown body=273

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00401b50(uint param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  uint local_8;
  
  uVar1 = DAT_00960d18;
  _DAT_00960e80 = ((void *)(0x009194a4u));
  DAT_00960e84 = (void *)0x0;
  DAT_00960e88 = 0;
  DAT_00960e8c = DAT_00960d18;
  local_8 = param_1;
  if (((int)DAT_00960d18 < 0) || (0x3fffffff < (int)DAT_00960d18)) {
    DAT_00960e8c = 0;
  }
  else if (0 < (int)DAT_00960d18) {
    local_8 = -(uint)((int)((ulonglong)DAT_00960d18 * 4 >> 0x20) != 0) |
              (uint)((ulonglong)DAT_00960d18 * 4);
    pvVar4 = operator_new__(local_8);
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      memset(pvVar4,0,local_8);
    }
    iVar5 = 0;
    DAT_00960e84 = pvVar4;
    if (0 < (int)DAT_00960e8c) {
      do {
        *(undefined4 *)((int)DAT_00960e84 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)DAT_00960e8c);
    }
  }
  iVar5 = 0;
  if (0 < (int)uVar1) {
    do {
      iVar2 = DAT_00960e88;
      local_8 = DAT_00960e88 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&DAT_00960e80,(int *)&local_8);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&DAT_00960e80,iVar2);
      if (bVar3) {
        *(int *)((int)DAT_00960e84 + DAT_00960e88 * 4 + -4) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)uVar1);
  }
  atexit(FUN_008e4990);
  return;
}


//==== 0000406890 00406890_FUN_00406890 ====
void FUN_00406890(void);

// decompiled by BatchDecomp @ 00406890 name=FUN_00406890 conv=unknown body=167

void FUN_00406890(void)

{
  Darray_L_unsigned_int_G_ *pDVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar3;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  Darray_L_class_util__Str_L_char_G___G_ local_40[16];
  Darray_L_class_util__Str_L_char_G___G_ local_30[16];
  Darray_L_unsigned_int_G_ local_20;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"SpeakerMessage");
  pcVar8 = SpeakerMessage__CopyUntypedTuple;
  pcVar7 = SpeakerMessage__ClearUntypedTuple;
  pcVar6 = SpeakerMessage__DestroyArray;
  pcVar5 = SpeakerMessage__AllocateArray;
  pDVar1 = SpeakerMessage__GetReflectionOffsets(&local_20);
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)SpeakerMessage__GetReflectionNames();
  pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)SpeakerMessage__GetReflectionTypes();
  pSVar4 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple(this,pSVar4,pDVar3,pDVar2,pDVar1,pcVar5,pcVar6,pcVar7,pcVar8);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_30);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_40);
  local_20._pad_0x0_0 = (int)((void *)(0x009199e4u));
  if (local_20.Data != (uint *)0x0) {
    operator_delete__(local_20.Data);
  }
  local_20.Data = (uint *)0x0;
  local_20._pad_0x0_0 = (int)((void *)(0x00919488u));
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000040a6a0 0040a6a0_FUN_0040a6a0 ====
void FUN_0040a6a0(void);

// decompiled by BatchDecomp @ 0040a6a0 name=FUN_0040a6a0 conv=unknown body=167

void FUN_0040a6a0(void)

{
  Darray_L_unsigned_int_G_ *pDVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar3;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  Darray_L_class_util__Str_L_char_G___G_ local_40[16];
  Darray_L_class_util__Str_L_char_G___G_ local_30[16];
  Darray_L_unsigned_int_G_ local_20;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ArmorLayerBlueprint");
  pcVar8 = ArmorLayerBlueprint__CopyUntypedTuple;
  pcVar7 = ArmorLayerBlueprint__ClearUntypedTuple;
  pcVar6 = ChemicalMakeup__DestroyArray;
  pcVar5 = ArmorLayerBlueprint__AllocateArray;
  pDVar1 = ArmorLayerBlueprint__GetReflectionOffsets(&local_20);
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)ArmorLayerBlueprint__GetReflectionNames();
  pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)ArmorLayerBlueprint__GetReflectionTypes();
  pSVar4 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple(this,pSVar4,pDVar3,pDVar2,pDVar1,pcVar5,pcVar6,pcVar7,pcVar8);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_30);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_40);
  local_20._pad_0x0_0 = (int)((void *)(0x009199e4u));
  if (local_20.Data != (uint *)0x0) {
    operator_delete__(local_20.Data);
  }
  local_20.Data = (uint *)0x0;
  local_20._pad_0x0_0 = (int)((void *)(0x00919488u));
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000040e4b0 0040e4b0_FUN_0040e4b0 ====
void FUN_0040e4b0(void);

// decompiled by BatchDecomp @ 0040e4b0 name=FUN_0040e4b0 conv=unknown body=167

void FUN_0040e4b0(void)

{
  Darray_L_unsigned_int_G_ *pDVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar3;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  Darray_L_class_util__Str_L_char_G___G_ local_40[16];
  Darray_L_class_util__Str_L_char_G___G_ local_30[16];
  Darray_L_unsigned_int_G_ local_20;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"ModulePlacer");
  pcVar8 = ModulePlacer__CopyUntypedTuple;
  pcVar7 = ModulePlacer__ClearUntypedTuple;
  pcVar6 = ChemicalMakeup__DestroyArray;
  pcVar5 = ModulePlacer__AllocateArray;
  pDVar1 = ModulePlacer__GetReflectionOffsets(&local_20);
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)ModulePlacer__GetReflectionNames();
  pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)ModulePlacer__GetReflectionTypes();
  pSVar4 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple(this,pSVar4,pDVar3,pDVar2,pDVar1,pcVar5,pcVar6,pcVar7,pcVar8);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_30);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_40);
  local_20._pad_0x0_0 = (int)((void *)(0x009199e4u));
  if (local_20.Data != (uint *)0x0) {
    operator_delete__(local_20.Data);
  }
  local_20.Data = (uint *)0x0;
  local_20._pad_0x0_0 = (int)((void *)(0x00919488u));
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 000044e130 0044e130_FUN_0044e130 ====
void FUN_0044e130(void);

// decompiled by BatchDecomp @ 0044e130 name=FUN_0044e130 conv=unknown body=167

void FUN_0044e130(void)

{
  Darray_L_unsigned_int_G_ *pDVar1;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar2;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar3;
  ReflectionRegistry *this;
  Str_L_char_G_ *pSVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  Darray_L_class_util__Str_L_char_G___G_ local_40[16];
  Darray_L_class_util__Str_L_char_G___G_ local_30[16];
  Darray_L_unsigned_int_G_ local_20;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char__o5(&local_10,"StartingFleet");
  pcVar8 = StartingFleet__CopyUntypedTuple;
  pcVar7 = StartingFleet__ClearUntypedTuple;
  pcVar6 = ChemicalMakeup__DestroyArray;
  pcVar5 = StartingFleet__AllocateArray;
  pDVar1 = StartingFleet__GetReflectionOffsets(&local_20);
  pDVar2 = (Darray_L_class_util__Str_L_char_G___G_ *)StartingFleet__GetReflectionNames();
  pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)StartingFleet__GetReflectionTypes();
  pSVar4 = &local_10;
  this = util__ReflectionRegistry__Get();
  util__ReflectionRegistry__RegisterTuple(this,pSVar4,pDVar3,pDVar2,pDVar1,pcVar5,pcVar6,pcVar7,pcVar8);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_30);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(local_40);
  local_20._pad_0x0_0 = (int)((void *)(0x009199e4u));
  if (local_20.Data != (uint *)0x0) {
    operator_delete__(local_20.Data);
  }
  local_20.Data = (uint *)0x0;
  local_20._pad_0x0_0 = (int)((void *)(0x00919488u));
  if (local_10.Data != (char *)0x0) {
    operator_delete__(local_10.Data);
  }
  return;
}


//==== 0000488570 00488570_FUN_00488570 ====
int __fastcall FUN_00488570(int param_1);

// decompiled by BatchDecomp @ 00488570 name=FUN_00488570 conv=unknown body=120

int __fastcall FUN_00488570(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar3 == 0xffffffff) {
      uVar3 = 0;
    }
    if (*(FILE **)(param_1 + 0x10) != (FILE *)0x0) {
      iVar4 = fgetc(*(FILE **)(param_1 + 0x10));
      if (iVar4 == -1) {
        iVar4 = 0;
      }
      return iVar4 + uVar3 * 0x100;
    }
  }
  pbVar2 = *(byte **)(param_1 + 0x14);
  if (pbVar2 < *(byte **)(param_1 + 0x18)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x14) = pbVar2 + 1;
    return (uint)bVar1 + uVar3 * 0x100;
  }
  return uVar3 << 8;
}


//==== 0000488610 00488610_FUN_00488610 ====
uint __fastcall FUN_00488610(int param_1);

// decompiled by BatchDecomp @ 00488610 name=FUN_00488610 conv=unknown body=120

uint __fastcall FUN_00488610(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pbVar2 = *(byte **)(param_1 + 0x14);
    if (pbVar2 < *(byte **)(param_1 + 0x18)) {
      bVar1 = *pbVar2;
      *(byte **)(param_1 + 0x14) = pbVar2 + 1;
      uVar3 = (uint)bVar1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
    if (uVar3 == 0xffffffff) {
      uVar3 = 0;
    }
    if (*(FILE **)(param_1 + 0x10) != (FILE *)0x0) {
      iVar4 = fgetc(*(FILE **)(param_1 + 0x10));
      if (iVar4 == -1) {
        iVar4 = 0;
      }
      return iVar4 * 0x100 + uVar3;
    }
  }
  pbVar2 = *(byte **)(param_1 + 0x14);
  if (pbVar2 < *(byte **)(param_1 + 0x18)) {
    bVar1 = *pbVar2;
    *(byte **)(param_1 + 0x14) = pbVar2 + 1;
    return (uint)bVar1 * 0x100 + uVar3;
  }
  return uVar3;
}


//==== 0000488d70 00488d70_FUN_00488d70 ====
void __fastcall FUN_00488d70(int param_1);

// decompiled by BatchDecomp @ 00488d70 name=FUN_00488d70 conv=unknown body=184

void __fastcall FUN_00488d70(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  
  do {
    if (*(int *)(param_1 + 0x36a0) == 0) {
      if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
        pbVar2 = *(byte **)(param_1 + 0x14);
        if (*(byte **)(param_1 + 0x18) <= pbVar2) goto LAB_00488db5;
        bVar1 = *pbVar2;
        *(byte **)(param_1 + 0x14) = pbVar2 + 1;
        uVar3 = (uint)bVar1;
      }
      else {
        uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
        if (uVar3 == 0xffffffff) {
          uVar3 = 0;
        }
      }
    }
    else {
LAB_00488db5:
      uVar3 = 0;
    }
    if (uVar3 == 0xff) {
      if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
        pbVar2 = *(byte **)(param_1 + 0x14);
        if (*(byte **)(param_1 + 0x18) <= pbVar2) goto LAB_00488deb;
        bVar1 = *pbVar2;
        *(byte **)(param_1 + 0x14) = pbVar2 + 1;
        uVar4 = (uint)bVar1;
      }
      else {
        uVar4 = fgetc(*(FILE **)(param_1 + 0x10));
        if (uVar4 == 0xffffffff) {
          uVar4 = 0;
        }
      }
      if (uVar4 != 0) {
        *(char *)(param_1 + 0x369c) = (char)uVar4;
        *(undefined4 *)(param_1 + 0x36a0) = 1;
        return;
      }
    }
LAB_00488deb:
    *(int *)(param_1 + 0x3698) = *(int *)(param_1 + 0x3698) + 8;
    *(uint *)(param_1 + 0x3694) = *(int *)(param_1 + 0x3694) << 8 | uVar3;
    if (0x18 < *(int *)(param_1 + 0x3698)) {
      return;
    }
  } while( true );
}


//==== 00004896f0 004896f0_FUN_004896f0 ====
uint __fastcall FUN_004896f0(int param_1);

// decompiled by BatchDecomp @ 004896f0 name=FUN_004896f0 conv=unknown body=133

uint __fastcall FUN_004896f0(int param_1)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = *(byte *)(param_1 + 0x369c);
  if (bVar1 != 0xff) {
    *(undefined1 *)(param_1 + 0x369c) = 0xff;
    return (uint)bVar1;
  }
  if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
    pcVar2 = *(char **)(param_1 + 0x14);
    if (pcVar2 < *(char **)(param_1 + 0x18)) {
      cVar4 = *pcVar2;
      *(char **)(param_1 + 0x14) = pcVar2 + 1;
    }
    else {
      cVar4 = '\0';
    }
  }
  else {
    iVar5 = fgetc(*(FILE **)(param_1 + 0x10));
    if (iVar5 == -1) {
      iVar5 = 0;
    }
    cVar4 = (char)iVar5;
  }
  if (cVar4 == -1) {
    do {
      if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
        pbVar3 = *(byte **)(param_1 + 0x14);
        if (pbVar3 < *(byte **)(param_1 + 0x18)) {
          bVar1 = *pbVar3;
          *(byte **)(param_1 + 0x14) = pbVar3 + 1;
          uVar6 = (uint)bVar1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar6 = fgetc(*(FILE **)(param_1 + 0x10));
        if (uVar6 == 0xffffffff) {
          uVar6 = 0;
        }
      }
    } while ((char)uVar6 == -1);
    return uVar6;
  }
  return 0xff;
}


//==== 000048a8e0 0048a8e0_FUN_0048a8e0 ====
byte * FUN_0048a8e0(byte *param_1,byte *param_2,undefined4 param_3,int param_4);

// decompiled by BatchDecomp @ 0048a8e0 name=FUN_0048a8e0 conv=unknown body=149

byte * FUN_0048a8e0(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *param_2;
  *param_1 = bVar2;
  if (param_4 == 1) {
    param_1[1] = bVar2;
    return param_1;
  }
  iVar3 = 1;
  param_1[1] = (byte)(param_2[1] + 2 + (uint)*param_2 * 3 >> 2);
  if (1 < param_4 + -1) {
    do {
      iVar1 = (uint)param_2[iVar3] * 3 + 2;
      param_1[iVar3 * 2] = (byte)((uint)param_2[iVar3 + -1] + iVar1 >> 2);
      param_1[iVar3 * 2 + 1] = (byte)((uint)param_2[iVar3 + 1] + iVar1 >> 2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4 + -1);
  }
  param_1[iVar3 * 2] = (byte)(param_2[param_4 + -1] + 2 + (uint)param_2[param_4 + -2] * 3 >> 2);
  param_1[iVar3 * 2 + 1] = param_2[param_4 + -1];
  return param_1;
}


//==== 000048a980 0048a980_FUN_0048a980 ====
undefined1 * FUN_0048a980(undefined1 *param_1,byte *param_2,byte *param_3,int param_4);

// decompiled by BatchDecomp @ 0048a980 name=FUN_0048a980 conv=unknown body=166

undefined1 * FUN_0048a980(undefined1 *param_1,byte *param_2,byte *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte *pbVar4;
  int local_8;
  
  iVar1 = (uint)*param_2 * 3 + (uint)*param_3;
  uVar3 = (undefined1)(iVar1 + 2U >> 2);
  if (param_4 != 1) {
    local_8 = 1;
    *param_1 = uVar3;
    if (1 < param_4) {
      iVar2 = iVar1;
      pbVar4 = param_3 + 1;
      do {
        iVar1 = (uint)(pbVar4 + 1)[(int)(param_2 + (-1 - (int)param_3))] * 3 + (uint)*pbVar4;
        param_1[local_8 * 2 + -1] = (char)((uint)(iVar1 + (iVar2 + 4) * 2 + iVar2) >> 4);
        param_1[local_8 * 2] = (char)((uint)(iVar2 + 8 + iVar1 * 3) >> 4);
        local_8 = local_8 + 1;
        iVar2 = iVar1;
        pbVar4 = pbVar4 + 1;
      } while (local_8 < param_4);
    }
    param_1[param_4 * 2 + -1] = (char)(iVar1 + 2U >> 2);
    return param_1;
  }
  param_1[1] = uVar3;
  *param_1 = uVar3;
  return param_1;
}


//==== 000048aa70 0048aa70_FUN_0048aa70 ====
void __fastcall FUN_0048aa70(int param_1);

// decompiled by BatchDecomp @ 0048aa70 name=FUN_0048aa70 conv=unknown body=90

void __fastcall FUN_0048aa70(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    piVar1 = (int *)(param_1 + 0x35e0);
    do {
      if (*piVar1 != 0) {
        free((void *)piVar1[1]);
        *piVar1 = 0;
      }
      if ((void *)piVar1[2] != (void *)0x0) {
        free((void *)piVar1[2]);
        piVar1[2] = 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0xe;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}


//==== 000048b3e0 0048b3e0_FUN_0048b3e0 ====
undefined4 __fastcall FUN_0048b3e0(int param_1,int param_2);

// decompiled by BatchDecomp @ 0048b3e0 name=FUN_0048b3e0 conv=unknown body=109

undefined4 __fastcall FUN_0048b3e0(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  size_t _NewSize;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    DAT_009936c8 = "Corrupt PNG";
    return 0;
  }
  pvVar1 = *(void **)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x10) - (int)pvVar1;
  for (_NewSize = *(int *)(param_1 + 0x18) - (int)pvVar1; (int)_NewSize < iVar2 + param_2;
      _NewSize = _NewSize * 2) {
  }
  pvVar1 = realloc(pvVar1,_NewSize);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x14) = pvVar1;
    *(int *)(param_1 + 0x10) = (int)pvVar1 + iVar2;
    *(size_t *)(param_1 + 0x18) = (int)pvVar1 + _NewSize;
    return 1;
  }
  DAT_009936c8 = "Out of memory";
  return 0;
}


//==== 000048d460 0048d460_FUN_0048d460 ====
extern undefined4 FUN_004886f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0048cb30(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
int __fastcall FUN_0048d460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, uint param_5);

// decompiled by BatchDecomp @ 0048d460 name=FUN_0048d460 conv=unknown body=204

int __fastcall
FUN_0048d460(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            uint param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  if (4 < param_5) {
    DAT_009936c8 = "Internal error";
    return 0;
  }
  iVar1 = FUN_0048cb30(param_5);
  if (iVar1 != 0) {
    iVar2 = param_1[9];
    param_1[9] = 0;
    if ((param_5 != 0) && (param_5 != param_1[3])) {
      iVar2 = FUN_004886f0(param_5,*param_1,param_1[1]);
      param_1[3] = param_5;
      if (iVar2 == 0) {
        return 0;
      }
    }
    *param_2 = *param_1;
    *param_3 = param_1[1];
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = param_1[2];
    }
  }
  free((void *)param_1[9]);
  param_1[9] = 0;
  free((void *)param_1[8]);
  param_1[8] = 0;
  free((void *)param_1[7]);
  param_1[7] = 0;
  return iVar2;
}


//==== 000048d600 0048d600_FUN_0048d600 ====
int __fastcall FUN_0048d600(uint param_1);

// decompiled by BatchDecomp @ 0048d600 name=FUN_0048d600 conv=unknown body=92

int __fastcall FUN_0048d600(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 != 0) {
    uVar2 = param_1 >> 0x10;
    if (param_1 < 0x10000) {
      uVar2 = param_1;
    }
    uVar3 = -(uint)(param_1 < 0x10000) & 0xfffffff0;
    iVar4 = uVar3 + 0x10;
    if (0xff < uVar2) {
      iVar4 = uVar3 + 0x18;
      uVar2 = uVar2 >> 8;
    }
    uVar3 = uVar2 >> 4;
    iVar1 = iVar4 + 4;
    if (uVar2 < 0x10) {
      uVar3 = uVar2;
      iVar1 = iVar4;
    }
    iVar4 = iVar1 + 2;
    if (uVar3 < 4) {
      iVar4 = iVar1;
    }
    uVar2 = uVar3 >> 2;
    if (uVar3 < 4) {
      uVar2 = uVar3;
    }
    iVar1 = iVar4 + 1;
    if (uVar2 < 2) {
      iVar1 = iVar4;
    }
    return iVar1;
  }
  return -1;
}


//==== 000048edd0 0048edd0_FUN_0048edd0 ====
undefined4 __fastcall FUN_0048edd0(int param_1);

// decompiled by BatchDecomp @ 0048edd0 name=FUN_0048edd0 conv=unknown body=88

undefined4 __fastcall FUN_0048edd0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = "#?RADIANCE\n";
  while( true ) {
    if (*(FILE **)(param_1 + 0x10) == (FILE *)0x0) {
      pbVar2 = *(byte **)(param_1 + 0x14);
      if (pbVar2 < *(byte **)(param_1 + 0x18)) {
        bVar1 = *pbVar2;
        *(byte **)(param_1 + 0x14) = pbVar2 + 1;
        uVar3 = (uint)bVar1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = fgetc(*(FILE **)(param_1 + 0x10));
      if (uVar3 == 0xffffffff) {
        uVar3 = 0;
      }
    }
    if (uVar3 != (int)*pcVar4) break;
    pcVar4 = pcVar4 + 1;
    if (*pcVar4 == '\0') {
      return 1;
    }
  }
  return 0;
}


//==== 00004f4130 004f4130_FUN_004f4130 ====
Str_L_char_G_ * FUN_004f4130(Str_L_char_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 004f4130 name=FUN_004f4130 conv=unknown body=130

Str_L_char_G_ * FUN_004f4130(Str_L_char_G_ *param_1,int *param_2)

{
  char *pcVar1;
  Str_L_char_G_ *pSVar2;
  bool bVar3;
  void *local_20[3];
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar3 = param_2 != (int *)0x0;
  if (bVar3) {
    pSVar2 = (Str_L_char_G_ *)(**(code **)(*param_2 + 0x50))(local_20);
  }
  else {
    pSVar2 = &local_14;
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
  }
  pcVar1 = local_14.Data;
  util__Str_char___Str_char(param_1,pSVar2);
  if (bVar3) {
    if (local_20[0] != (void *)0x0) {
      operator_delete__(local_20[0]);
      local_20[0] = (void *)0x0;
    }
  }
  if ((pcVar1 != (char *)0x0) && (!bVar3)) {
    operator_delete__(pcVar1);
  }
  return param_1;
}


//==== 0000505060 00505060_FUN_00505060 ====
void FUN_00505060(int *param_1);

// decompiled by BatchDecomp @ 00505060 name=FUN_00505060 conv=unknown body=212

void FUN_00505060(int *param_1)

{
  int iVar1;
  double *pdVar2;
  Maybe_L_double_G_ *pMVar3;
  Maybe_L_double_G_ local_2c;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = 0.0;
  local_14 = 0.0;
  local_c = 0;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar1) {
    do {
      pdVar2 = (double *)(**(code **)*param_1)(&local_c);
      local_14 = (pdVar2[2] - *pdVar2) * (pdVar2[2] - *pdVar2) +
                 (pdVar2[3] - pdVar2[1]) * (pdVar2[3] - pdVar2[1]);
      pMVar3 = util__Sqrt(&local_2c,&local_14);
      if (pMVar3->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_1c = local_1c + pMVar3->Data;
      local_c = local_c + 1;
      local_14 = local_1c;
      iVar1 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000523630 00523630_GetSize_m ====
// decompiled by BatchDecomp @ 00523630 name=GetSize_m conv=__thiscall body=95

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct util__Vec2_L_double_G_ __thiscall ArmorTextureHandler__GetSize_m(void)const  */

Vec2_L_double_G_ * __thiscall
ArmorTextureHandler__GetSize_m(ArmorTextureHandler *this,Vec2_L_double_G_ *__return_storage_ptr__)

{
  Preferences *this_00;
  Vec2_L_int_G_ VVar1;
  double dVar2;
  
  this_00 = (Preferences *)CapitalShipComponent__GetID((CapitalShipComponent *)Game);
  dVar2 = Preferences__GetArmorTexturePixelsPerMeter(this_00);
  dVar2 = dVar2 * /*3fe0000000000000*/0.5;
  VVar1 = CustomTexture__GetSize((CustomTexture *)this);
  __return_storage_ptr__->X = (double)*(int *)VVar1.X / dVar2;
  __return_storage_ptr__->Y = (double)((int *)VVar1.X)[1] / dVar2;
  return __return_storage_ptr__;
}


//==== 0000530cc0 00530cc0_GetRadius_km_Memoize ====
// decompiled by BatchDecomp @ 00530cc0 name=GetRadius_km_Memoize conv=__thiscall body=200

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall CraftInstance__GetRadius_km_Memoize(void)const  */

void __thiscall CraftInstance__GetRadius_km_Memoize(CraftInstance *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  int local_1c[3];
  undefined8 uStack_10;
  undefined4 uStack_c;
  
  if ((this->GetBoundingCylinder_m_MemoizedValue).IsValidData == false) {
    iVar1 = (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size;
    local_1c[0] = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->CraftInstanceMemoizationHandlerInstance,
               local_1c);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->CraftInstanceMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Data
      [(this->CraftInstanceMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_57e8e8d5, GetRadius_km_Clear);
    }
    GetBoundingCylinder_m_Memoize(this);
    if (*(char *)&(this->GetBoundingCylinder_m_MemoizedValue).Data.Radius == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar4 = *(double *)&(this->GetTotalRadius_m_MemoizedValue).IsValidData * /*3fe0000000000000*/0.5
    ;
    dVar3 = (this->GetTotalRadius_m_MemoizedValue).Data;
    dVar3 = dVar3 * dVar3 + dVar4 * dVar4;
    dVar3 = libm_sse2_sqrt_precise(dVar3);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    (this->GetBoundingCylinder_m_MemoizedValue).Data.Height = dVar3 / /*408f400000000000*/1000.0;
    *(undefined4 *)&(this->GetBoundingCylinder_m_MemoizedValue).IsValidData = uStack_10;
    *(undefined4 *)((char *)&(this->GetBoundingCylinder_m_MemoizedValue) + 0x14) = uStack_c;
  }
  return;
}


//==== 0000538220 00538220_FUN_00538220 ====
void FUN_00538220(Darray_L_double_G_ *param_1,int *param_2,double *param_3);

// decompiled by BatchDecomp @ 00538220 name=FUN_00538220 conv=unknown body=208

void FUN_00538220(Darray_L_double_G_ *param_1,int *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  double *pdVar9;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (double *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  util__Darray_double___Darray_double(param_1,iVar8);
  local_c = 0;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar8) {
    do {
      pdVar9 = (double *)(**(code **)*param_2)(&local_c);
      dVar1 = *param_3;
      dVar2 = pdVar9[1];
      dVar3 = *pdVar9;
      dVar4 = param_3[1];
      dVar5 = pdVar9[2];
      dVar6 = param_3[2];
      iVar8 = param_1->Size;
      local_10 = iVar8 + 1;
      util__Darray_double___SetSize(param_1,&local_10);
      bVar7 = util__Darray_double___CheckSize(param_1,iVar8);
      if (bVar7) {
        param_1->Data[param_1->Size + -1] = dVar2 * dVar4 + dVar1 * dVar3 + dVar5 * dVar6;
      }
      local_c = local_c + 1;
      iVar8 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000053f910 0053f910_FUN_0053f910 ====
Darray_L_double_G_ * FUN_0053f910(Darray_L_double_G_ *param_1,int param_2);

// decompiled by BatchDecomp @ 0053f910 name=FUN_0053f910 conv=unknown body=156

Darray_L_double_G_ * FUN_0053f910(Darray_L_double_G_ *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  Darray_L_double_G_ *this;
  bool bVar3;
  int iVar4;
  int local_8;
  
  this = param_1;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (double *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  util__Darray_double___Darray_double(param_1,*(int *)(param_2 + 4));
  param_1 = *(Darray_L_double_G_ **)(param_2 + 4);
  iVar4 = 0;
  dVar1 = *(double *)(param_2 + 0x18);
  if (0 < (int)param_1) {
    do {
      iVar2 = this->Size;
      local_8 = iVar2 + 1;
      util__Darray_double___SetSize(this,&local_8);
      bVar3 = util__Darray_double___CheckSize(this,iVar2);
      if (bVar3) {
        this->Data[this->Size + -1] =
             ((double)iVar4 * /*401921fb54442d18*/6.283185307179586) / (double)(int)param_1 + dVar1;
      }
      iVar4 = iVar4 + 1;
      param_1 = *(Darray_L_double_G_ **)(param_2 + 4);
    } while (iVar4 < (int)param_1);
  }
  return this;
}


//==== 0000546d60 00546d60_GetAmbientHeatSignature_W ====
// decompiled by BatchDecomp @ 00546d60 name=GetAmbientHeatSignature_W conv=__thiscall body=200

/* public: double __thiscall CraftBlueprint__GetAmbientHeatSignature_W(void)const  */

double __thiscall CraftBlueprint__GetAmbientHeatSignature_W(CraftBlueprint *this)

{
  Module *pMVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 extraout_ST0;
  undefined **local_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = (undefined **)0x0;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 0;
  GetModules(this);
  util__Darray_class_WeaponModule____RemoveDuplicates((Darray_L_class_WeaponModule_P_G_ *)&local_1c);
  local_c = 0;
  iVar3 = (*(code *)local_1c[3])();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_1c)(&local_c);
      pMVar1 = (Module *)*puVar4;
      cVar2 = (**(code **)(*(int *)pMVar1 + 0xa0))();
      if (cVar2 != '\0') {
        GetHeatTransferRateForModule_W(this,pMVar1);
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_1c[3])();
    } while (local_c < iVar3);
  }
  local_1c = ((void *)(0x009199e4u));
  if (pvStack_18 != (void *)0x0) {
    operator_delete__(pvStack_18);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000056dff0 0056dff0_FUN_0056dff0 ====
Str_L_char_G_ * FUN_0056dff0(Str_L_char_G_ *param_1,Material *param_2);

// decompiled by BatchDecomp @ 0056dff0 name=FUN_0056dff0 conv=unknown body=89

Str_L_char_G_ * FUN_0056dff0(Str_L_char_G_ *param_1,Material *param_2)

{
  undefined8 uVar1;
  
  Material__GetCost_c__kg_Memoize(param_2);
  if ((char)param_2[1].Elements._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  ((slice_view *)&uVar1)->_0_4_ = param_2[1]._pad_0x0_0;
  ((slice_view *)&uVar1)->_4_4_ = param_2[1]._pad_0x0_0;
  util__Printf(param_1,",%.2f",uVar1);
  return param_1;
}


//==== 00005ab220 005ab220_FUN_005ab220 ====
void FUN_005ab220(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 005ab220 name=FUN_005ab220 conv=unknown body=206

void FUN_005ab220(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  double dVar6;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double(param_1,iVar4);
  local_c = 0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar4) {
    do {
      pdVar5 = (double *)(**(code **)*param_2)(&local_c);
      iVar4 = *(int *)(param_1 + 8);
      local_10 = iVar4 + 1;
      dVar2 = *pdVar5 / /*408f400000000000*/1000.0;
      dVar6 = pdVar5[1] / /*408f400000000000*/1000.0;
      util__Darray_struct_util__Vec2_double_____SetSize(param_1,&local_10);
      bVar3 = util__Darray_struct_util__Vec2_double_____CheckSize(param_1,iVar4);
      if (bVar3) {
        iVar4 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 4);
        *(double *)(iVar1 + -0x10 + iVar4 * 0x10) = dVar2;
        *(double *)(iVar1 + -8 + iVar4 * 0x10) = dVar6;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005c67b0 005c67b0_GetNozzleMachNumber ====
extern undefined4 FUN_005c2420(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005c67b0 name=GetNozzleMachNumber conv=__thiscall body=224

/* public: double __thiscall ThermalRocketSubModule__GetNozzleMachNumber(void)const  */

double __thiscall ThermalRocketSubModule__GetNozzleMachNumber(ThermalRocketSubModule *this)

{
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  double dVar1;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->NozzleExpansionRatio <= /*3ff0000000000000*/1.0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  dVar1 = Material__GetMixtureAdiabaticIndex((Darray_L_struct_MaterialConstituent_G_ *)&this->CachedProducts);
  local_10 = (dVar1 - /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  local_18 = (dVar1 + /*3ff0000000000000*/1.0) * /*3fe0000000000000*/0.5;
  local_20 = local_18 / (local_10 + local_10);
  FUN_005c2420(&local_10,&local_18,&local_20,this,/*3ff0000000000000*/1.0,/*4024000000000000*/10.0,
               0x14,/*3e45798ee2308c3a*/1e-08);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 00005cdc80 005cdc80_GetPackingRadius_m ====
// decompiled by BatchDecomp @ 005cdc80 name=GetPackingRadius_m conv=__thiscall body=233

/* public: double __thiscall Module__GetPackingRadius_m(void)const  */

double __thiscall Module__GetPackingRadius_m(Module *this)

{
  float10 fVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)this + 0xac))(&local_68);
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_28 = local_58;
  local_20 = local_50;
  uStack_1c = uStack_4c;
  uStack_18 = uStack_48;
  uStack_14 = uStack_44;
  local_10 = local_40;
  fVar1 = (float10)(**(code **)(*(int *)this + 0xa4))();
  if (/*0000000000000000*/0.0 < (double)fVar1) {
    (**(code **)(*(int *)this + 0xa4))();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  util__Abs((double *)&uStack_18);
  util__Abs((double *)&local_20);
  util__Abs((double *)&uStack_30);
  util__Abs((double *)&local_38);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 00005cea10 005cea10_GetStartingDryMass_kg ====
// decompiled by BatchDecomp @ 005cea10 name=GetStartingDryMass_kg conv=__thiscall body=150

/* public: virtual double __thiscall Module__GetStartingDryMass_kg(void)const  */

double __thiscall Module__GetStartingDryMass_kg(Module *this)

{
  int *piVar1;
  int iVar2;
  float10 extraout_ST0;
  undefined **local_2c;
  void *local_28;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)(**(code **)(*(int *)this + 0x84))(&local_2c);
  local_c = 0;
  local_1c = 0.0;
  local_14 = 0.0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      iVar2 = (**(code **)*piVar1)(&local_c);
      local_1c = *(double *)(iVar2 + 8) + local_1c;
      local_c = local_c + 1;
      local_14 = local_1c;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  local_2c = ((void *)(0x0091e0dcu));
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005cf240 005cf240_SortModuleFunction ====
// decompiled by BatchDecomp @ 005cf240 name=SortModuleFunction conv=__cdecl body=222

/* public: static bool __cdecl Module__SortModuleFunction(class Module const *,class Module const *)
    */

bool __cdecl Module__SortModuleFunction(Module *param_1,Module *param_2)

{
  Type TVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  char *pcVar6;
  char *pcVar7;
  char *local_1c;
  int local_18;
  char *local_10;
  int local_c;
  
  iVar3 = (**(code **)(*(int *)param_1 + 0x130))();
  iVar4 = (**(code **)(*(int *)param_2 + 0x130))();
  if (iVar3 != iVar4) {
    iVar3 = (**(code **)(*(int *)param_1 + 0x130))();
    iVar4 = (**(code **)(*(int *)param_2 + 0x130))();
    return iVar3 < iVar4;
  }
  puVar5 = (undefined4 *)(**(code **)*(int *)param_2)();
  (**(code **)*puVar5)(&local_1c);
  pcVar6 = "";
  if (0 < local_18) {
    pcVar6 = local_1c;
  }
  puVar5 = (undefined4 *)(**(code **)*(int *)param_1)();
  (**(code **)*puVar5)(&local_10);
  pcVar7 = "";
  if (0 < local_c) {
    pcVar7 = local_10;
  }
  TVar1 = util__InnerSortFunction(pcVar7,pcVar6);
  if (local_10 != (char *)0x0) {
    operator_delete__(local_10);
    local_10 = (char *)0x0;
  }
  if (local_1c != (char *)0x0) {
    operator_delete__(local_1c);
  }
  if (CONCAT31(extraout_var,TVar1) != 1) {
    return CONCAT31(extraout_var,TVar1) == 2;
  }
  uVar2 = (**(code **)(*(int *)param_1 + 0x148))(param_1,param_2);
  return (bool)uVar2;
}


//==== 00005d4060 005d4060_PassThroughCachedData ====
// decompiled by BatchDecomp @ 005d4060 name=PassThroughCachedData conv=__thiscall body=124

/* public: void __thiscall
   LinearInductionMotorSubModule__PassThroughCachedData(double,double,double,double,double,double)
    */

void __thiscall
LinearInductionMotorSubModule__PassThroughCachedData(LinearInductionMotorSubModule *this,double param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  Cylinder_L_double_G_ CVar1;
  undefined4 unaff_ESI;
  
  CVar1.Height = this->CachedTrackWidth_m;
  CVar1.Radius = this->ForcerRadius_m;
  CylindricalCoolerSubModule__PassThroughCachedData(&this->Cooler,CVar1,this->Coolant,
             (double)CONCAT44(unaff_ESI,(int)((ulonglong)param_6 >> 0x20)));
  this->CachedTrackWidth_m = param_1;
  this->CachedPayloadMass_kg = param_2;
  this->CachedPayloadFullWidth_m = param_3;
  this->CachedFluidSpeed_m__s = param_4;
  this->CachedCoolantInletTemperature_K = param_5;
  return;
}


//==== 00005da3a0 005da3a0_GetCoreCoolantVolume_m3 ====
// decompiled by BatchDecomp @ 005da3a0 name=GetCoreCoolantVolume_m3 conv=__thiscall body=248

/* public: double __thiscall NuclearReactorSubModule__GetCoreCoolantVolume_m3(bool)const  */

double __thiscall
NuclearReactorSubModule__GetCoreCoolantVolume_m3(NuclearReactorSubModule *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  Str_L_char_G_ *pSVar3;
  float10 extraout_ST0;
  double dVar4;
  Str_L_char_G_ local_4c[2];
  Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ local_34[16];
  double local_24;
  double local_1c;
  double local_14;
  undefined8 local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = CONCAT31(((slice_view *)&local_c)->_1_3_,param_1);
  local_1c = this->CachedInletTemperature_K * this->CachedInletTemperature_K *
             /*400921fb54442d18*/3.141592653589793 * this->CachedCoolantFlowRate_kg__s;
  piVar1 = (int *)GetCoreElements(this,(double)ZEXT48(local_34),false,param_1);
  local_c = 0;
  local_14 = 0.0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    do {
      pSVar3 = (Str_L_char_G_ *)(**(code **)*piVar1)(&local_c);
      util__Str_char___Str_char(local_4c,pSVar3);
      local_24 = *(double *)&pSVar3[1].Capacity / *(double *)(pSVar3[1].Data + 0x30);
      if (local_4c[0].Data != (char *)0x0) {
        operator_delete__(local_4c[0].Data);
      }
      local_14 = local_14 + local_24;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  util__Darray_struct_NuclearReactorSubModule__CoreElement____Darray_struct_NuclearReactorSubModule__CoreElement(local_34);
  dVar4 = local_1c - local_14;
  local_1c = 0.0;
  if (0.0 <= dVar4) {
    local_1c = dVar4;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005dc920 005dc920_GetThermalHeatGenerated_W ====
// decompiled by BatchDecomp @ 005dc920 name=GetThermalHeatGenerated_W conv=__thiscall body=109

/* public: double __thiscall NuclearReactorSubModule__GetThermalHeatGenerated_W(void)const  */

double __thiscall NuclearReactorSubModule__GetThermalHeatGenerated_W(NuclearReactorSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 unaff_ESI;
  double dVar4;
  double dVar5;
  
  dVar4 = Material__GetMacroscopicNeutronFissionCrossSection__m(*(Material **)&this->FuelEnrichment_Percent,Thermal,
                     (double)CONCAT44(unaff_ESI,(int)((ulonglong)this->ControlRodMass_kg >> 0x20)));
  dVar1 = *(double *)&this->ControlRodComposition;
  dVar3 = (this->CachedDimensions_m).Radius;
  dVar2 = (*(Material **)&this->FuelEnrichment_Percent)->Density_kg__m3;
  dVar5 = Material__GetFissionEnergy_MeV(*(Material **)&this->FuelEnrichment_Percent);
  dVar5 = eV_to_J(dVar5 * /*412e848000000000*/1000000.0);
  return dVar5 * (dVar1 / dVar2) * dVar4 * dVar3;
}


//==== 00005dc990 005dc990_GetThermalNeutronNonLeakageProbability ====
// decompiled by BatchDecomp @ 005dc990 name=GetThermalNeutronNonLeakageProbability conv=__thiscall body=204

/* public: double __thiscall
   NuclearReactorSubModule__GetThermalNeutronNonLeakageProbability(double,bool)const  */

double __thiscall
NuclearReactorSubModule__GetThermalNeutronNonLeakageProbability(NuclearReactorSubModule *this,double param_1,bool param_2)

{
  Maybe_L_double_G_ *pMVar1;
  undefined1 unaff_DI;
  double dVar2;
  double dVar3;
  undefined3 in_stack_0000000d;
  Maybe_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  local_c = GetDiffusionCoefficient_m(this,param_1,param_2);
  local_14 = GetTotalMacroscopicNeutronAbsorptionCrossSection__m
                       (this,Thermal,(double)CONCAT44(_param_2,(int)((ulonglong)param_1 >> 0x20)),
                        (bool)unaff_DI);
  local_14 = local_c / local_14;
  pMVar1 = util__Sqrt(&local_24,&local_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = /*400921fb54442d18*/3.141592653589793 / this->CachedCoolantFlowRate_kg__s;
  dVar3 = /*40033d70a3d70a3d*/2.405 / this->CachedInletTemperature_K;
  return /*3ff0000000000000*/1.0 /
         ((dVar3 * dVar3 + dVar2 * dVar2) * pMVar1->Data * pMVar1->Data + /*3ff0000000000000*/1.0);
}


//==== 00005e2700 005e2700_EndOfSessionResolution ====
// decompiled by BatchDecomp @ 005e2700 name=EndOfSessionResolution conv=__thiscall body=108

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall RadiatorCompartment__EndOfSessionResolution(void) */

bool __thiscall RadiatorCompartment__EndOfSessionResolution(RadiatorCompartment *this)

{
  int iVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  
  bVar2 = ModuleCompartment__EndOfSessionResolution((ModuleCompartment *)this);
  dVar3 = /*3ff0000000000000*/1.0;
  if (this->Extending == false) {
    dVar3 = 0.0;
  }
  this->ExtendedPercent = dVar3;
  dVar3 = GetSteadyStateTemperature_K(this);
  iVar1 = this->_pad_0x0_0;
  dVar4 = GetTotalMassRemaining_kg(this);
  dVar3 = Material__GetEnergyFromTemperatureIncrease_J(*(Material **)(iVar1 + 0xd4),dVar3,dVar4);
  *(double *)&this->_pad_0x0_0 = dVar3;
  return bVar2;
}


//==== 00005e56e8 005e56e8_FUN_005e56e8 ====
float10 FUN_005e56e8(void);

// decompiled by BatchDecomp @ 005e56e8 name=FUN_005e56e8 conv=unknown body=154

float10 FUN_005e56e8(void)

{
  int unaff_EBP;
  RadiatorModule *unaff_ESI;
  float10 fVar1;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)CONCAT44(in_XMM1_Dd,in_XMM1_Dc);
  dVar2 = RadiatorModule__GetEmissivity(unaff_ESI,(double)CONCAT44(in_XMM1_Db,in_XMM1_Da));
  dVar2 = Physics__GetBlackbodyRadiation_W(*(double *)(unaff_EBP + -8),dVar2,dVar3);
  *(double *)(unaff_EBP + -0x18) = dVar2;
  dVar2 = RadiatorModule__GetRadiatingEfficiency(unaff_ESI,*(double *)(unaff_EBP + 8));
  fVar1 = (float10)dVar2 * (float10)*(double *)(unaff_EBP + -0x18);
  *(double *)(unaff_EBP + -0x18) = (double)fVar1;
  *(double *)(unaff_EBP + 8) = (double)fVar1;
  dVar2 = *(double *)(unaff_EBP + 8);
  if ((NAN(dVar2)) ||
     (((NAN(dVar2) || NAN(/*0000000000000000*/0.0)) == (dVar2 == /*0000000000000000*/0.0) &&
      (NAN(dVar2 / dVar2))))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\othermodules\\radiatormodules.cpp"
                    ,0x140,"IsNumericallyValid(HeatDissipated_W)",(char *)0x0);
    DebugBreak();
    fVar1 = (float10)*(double *)(unaff_EBP + -0x18);
  }
  return fVar1;
}


//==== 00005e5790 005e5790_GetTotalMassRemaining_kg ====
// decompiled by BatchDecomp @ 005e5790 name=GetTotalMassRemaining_kg conv=__thiscall body=186

/* private: double __thiscall RadiatorCompartment__GetTotalMassRemaining_kg(void)const  */

double __thiscall RadiatorCompartment__GetTotalMassRemaining_kg(RadiatorCompartment *this)

{
  RadiatorModule *this_00;
  int iVar1;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->RadiatorArmor + 0xc))();
  if (local_c < iVar1) {
    do {
      this_00 = (RadiatorModule *)this->_pad_0x0_0;
      RadiatorModule__GetPanelAndFinishMasses_kg_Memoize(this_00);
      if ((char)(this_00->GetPanelSurfaceAreas_m2_MemoizedValue).Data._pad_0x0_0 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      (*(code *)**(undefined4 **)&(this_00->GetHeatPipeSpacing_m_MemoizedValue).Data)(&local_c);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->RadiatorArmor + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005eabd0 005eabd0_EndOfSessionResolution ====
extern undefined4 FUN_005ea680(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005eabd0 name=EndOfSessionResolution conv=__thiscall body=96

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall RefuelerCompartment__EndOfSessionResolution(void) */

bool __thiscall RefuelerCompartment__EndOfSessionResolution(RefuelerCompartment *this)

{
  bool bVar1;
  undefined4 uVar2;
  RefuelerCompartment *pRVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[16];
  
  if (this->AutoRefuelActive != false) {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar1) {
        this->_pad_0x0_0 = 0;
      }
    }
    pRVar3 = this;
    uVar2 = TacticalManager__GetPlayerSpacecraftComponents(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
    FUN_005ea680(uVar2,pRVar3);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
  }
  this->AutoRefuelActive = false;
  bVar1 = ModuleCompartment__EndOfSessionResolution((ModuleCompartment *)this);
  return bVar1;
}


//==== 00005eb540 005eb540_RunActions ====
extern undefined4 FUN_005ea8f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005eb540 name=RunActions conv=__thiscall body=122

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RefuelerCompartment__RunActions(double) */

void __thiscall RefuelerCompartment__RunActions(RefuelerCompartment *this,double param_1)

{
  bool bVar1;
  undefined4 uVar2;
  double *pdVar3;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_14[8];
  double local_c;
  
  if (this->AutoRefuelActive != false) {
    local_c = GetReactionMassLeft_kg(this);
    if ((/*0000000000000000*/0.0 < local_c) || (this->ReverseFueling != false)) {
      pdVar3 = &param_1;
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar1) {
          this->_pad_0x0_0 = 0;
        }
      }
      uVar2 = TacticalManager__GetPlayerSpacecraftComponents(*(TacticalManager **)(this->_pad_0x0_0 + 0x1dc));
      FUN_005ea8f0(uVar2,this,pdVar3);
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_14);
    }
  }
  return;
}


//==== 00006149e0 006149e0_GetHeatGenerated_W ====
// decompiled by BatchDecomp @ 006149e0 name=GetHeatGenerated_W conv=__thiscall body=103

/* public: virtual double __thiscall
   TurboelectricFissionReactorModule__GetHeatGenerated_W(void)const  */

double __thiscall
TurboelectricFissionReactorModule__GetHeatGenerated_W(TurboelectricFissionReactorModule *this)

{
  int iVar1;
  CompressibleFlowPoint *this_00;
  undefined4 unaff_EDI;
  double dVar2;
  CompressibleFlowPoint *__return_storage_ptr__;
  undefined4 uVar3;
  CompressibleFlowPoint local_7c;
  CompressibleFlowPoint local_44;
  double local_c;
  
  iVar1 = *(int *)&(this->NuclearReactor).ControlRodMass_kg;
  dVar2 = TurbopumpSubModule__GetTotalCrossSectionalArea_m2((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  __return_storage_ptr__ = &local_44;
  uVar3 = *(undefined4 *)((char *)&dVar2 + 4);
  this_00 = GetTurbineExitFlowPoint(this,&local_7c);
  CompressibleFlowPoint__GetAreaChangedExitFlow(this_00,__return_storage_ptr__,(double)CONCAT44(unaff_EDI,uVar3));
  local_c = local_44.Temperature_K - *(double *)&this[1]._pad_0x0_0;
  dVar2 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)&(this->Turbopump).CachedFluidDensity_kg__m3);
  return *(double *)(iVar1 + 0x90) * local_c * dVar2;
}


//==== 000061eb20 0061eb20_InnerSortFunction ====
// decompiled by BatchDecomp @ 0061eb20 name=InnerSortFunction conv=__thiscall body=245

/* public: virtual bool __thiscall BlastLauncherModule__InnerSortFunction(class Module const *,class
   Module const *)const  */

bool __thiscall
BlastLauncherModule__InnerSortFunction(BlastLauncherModule *this,Module *param_1,Module *param_2)

{
  CraftBlueprint *pCVar1;
  int iVar2;
  int iVar3;
  Type TVar4;
  bool bVar5;
  char *pcVar6;
  undefined3 extraout_var;
  char *pcVar7;
  
  pCVar1 = (CraftBlueprint *)param_1[4]._pad_0x0_0;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar2 = *(int *)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData;
  pCVar1 = (CraftBlueprint *)param_2[4]._pad_0x0_0;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar3 = *(int *)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData;
  if (iVar2 != iVar3) {
    return iVar3 < iVar2;
  }
  if (*(int *)(param_2[4]._pad_0x0_0 + 8) < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = *(char **)(param_2[4]._pad_0x0_0 + 4);
  }
  if (*(int *)(param_1[4]._pad_0x0_0 + 8) < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = *(char **)(param_1[4]._pad_0x0_0 + 4);
  }
  TVar4 = util__InnerSortFunction(pcVar6,pcVar7);
  if (CONCAT31(extraout_var,TVar4) != 1) {
    return CONCAT31(extraout_var,TVar4) == 2;
  }
  bVar5 = WeaponModule__InnerSortFunction((WeaponModule *)this,param_1,param_2);
  return bVar5;
}


//==== 0000620cd0 00620cd0_GetTubeThicknessNeeded_m ====
// decompiled by BatchDecomp @ 00620cd0 name=GetTubeThicknessNeeded_m conv=__thiscall body=166

/* public: class util__Maybe_L_double_G_ __thiscall
   BlastLauncherModule__GetTubeThicknessNeeded_m(void)const  */

Maybe_L_double_G_ * __thiscall
BlastLauncherModule__GetTubeThicknessNeeded_m(BlastLauncherModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  undefined4 unaff_EDI;
  double dVar1;
  double dVar2;
  Cylinder_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar1 = Material__GetSpecificGasConstant_J__kg_K(*(Material **)(this + 0x14c));
  dVar2 = Material__GetAdiabaticFlameTemperature_K(*(Material **)(this + 0x14c));
  dVar1 = *(double *)(*(int *)(this + 0x14c) + 0x30) * dVar2 * dVar1;
  CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&local_18);
  dVar2 = Material__GetYieldStrength_Pa(*(Material **)(this + 0x158));
  Mechanics__GetThicknessOfPressurizedTubeNeeded_m(__return_storage_ptr__,
             (double)CONCAT44(SUB84(dVar1,0),
                              (int)((ulonglong)(local_18.Radius * /*4000000000000000*/2.0) >> 0x20))
             ,(double)CONCAT44(SUB84(dVar2,0),(int)((ulonglong)dVar1 >> 0x20)),
             (double)CONCAT44(unaff_EDI,(int)((ulonglong)dVar2 >> 0x20)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00006232b0 006232b0_InnerSortFunction ====
// decompiled by BatchDecomp @ 006232b0 name=InnerSortFunction conv=__thiscall body=245

/* public: virtual bool __thiscall CarrierModule__InnerSortFunction(class Module const *,class
   Module const *)const  */

bool __thiscall
CarrierModule__InnerSortFunction(CarrierModule *this,Module *param_1,Module *param_2)

{
  CraftBlueprint *pCVar1;
  int iVar2;
  int iVar3;
  Type TVar4;
  bool bVar5;
  char *pcVar6;
  undefined3 extraout_var;
  char *pcVar7;
  
  pCVar1 = (CraftBlueprint *)param_1[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar2 = *(int *)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData;
  pCVar1 = (CraftBlueprint *)param_2[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
  CraftBlueprint__GetShipClass_Memoize(pCVar1);
  if ((char)(pCVar1->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar3 = *(int *)&(pCVar1->GetMainEngineModulePlacers_MemoizedValue).IsValidData;
  if (iVar2 != iVar3) {
    return iVar3 < iVar2;
  }
  iVar2 = param_2[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
  if (*(int *)(iVar2 + 8) < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = *(char **)(iVar2 + 4);
  }
  iVar2 = param_1[3].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
  if (*(int *)(iVar2 + 8) < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = *(char **)(iVar2 + 4);
  }
  TVar4 = util__InnerSortFunction(pcVar6,pcVar7);
  if (CONCAT31(extraout_var,TVar4) != 1) {
    return CONCAT31(extraout_var,TVar4) == 2;
  }
  bVar5 = WeaponModule__InnerSortFunction((WeaponModule *)this,param_1,param_2);
  return bVar5;
}


//==== 0000629340 00629340_GenerateTextures ====
// decompiled by BatchDecomp @ 00629340 name=GenerateTextures conv=__thiscall body=250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall CoilgunCompartment__GenerateTextures(void) */

void __thiscall CoilgunCompartment__GenerateTextures(CoilgunCompartment *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  undefined4 *puVar3;
  ReferenceControllerRegistry *pRVar4;
  ArmorTextureHandler *this_02;
  ArmorTextureHandler *local_10;
  ReferenceController *local_c;
  int local_8;
  
  iVar1 = this->_pad_0x0_0;
  if (*(char *)(iVar1 + 0x3b8) != '\0') {
    if (*(char *)(iVar1 + 0x3b8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar3 = (undefined4 *)TurretSubModule__GenerateNewTexture((TurretSubModule *)(iVar1 + 0x2b8));
    iVar1 = this->_pad_0x0_0;
    local_8 = iVar1 + 1;
    util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0,
               &local_8);
    bVar2 = util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0
                       ,iVar1);
    if (bVar2) {
      this_02 = *(ArmorTextureHandler **)(this->_pad_0x0_0 + -8 + this->_pad_0x0_0 * 8);
      iVar1 = this->_pad_0x0_0 + this->_pad_0x0_0 * 8;
      this_00 = *(ReferenceController **)(iVar1 + -4);
      *(undefined4 *)(iVar1 + -8) = *puVar3;
      this_01 = (ReferenceController *)puVar3[1];
      *(ReferenceController **)(iVar1 + -4) = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__ReleaseStrongReference(this_00);
        if (bVar2) {
          if (this_02 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor_(this_02,1);
          }
          pRVar4 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,this_02);
        }
      }
    }
    if (local_c != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__ReleaseStrongReference(local_c);
      if (bVar2) {
        if (local_10 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor_(local_10,1);
        }
        pRVar4 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,local_10);
      }
    }
  }
  return;
}


//==== 0000629560 00629560_GetAdditionalShotCreationOffset_m ====
// decompiled by BatchDecomp @ 00629560 name=GetAdditionalShotCreationOffset_m conv=__thiscall body=178

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct Vec3_L_double_G_ __thiscall
   CoilgunCompartment__GetAdditionalShotCreationOffset_m(void)const  */

Vec3_L_double_G_ * __thiscall
CoilgunCompartment__GetAdditionalShotCreationOffset_m(CoilgunCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  int iVar3;
  Vec2_L_double_G_ *pVVar4;
  int iVar5;
  Vec2_L_double_G_ local_1c;
  double local_c;
  
  if (*(char *)(this->_pad_0x0_0 + 0x3b8) == '\0') {
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(this->_pad_0x0_0 + 0x2e0);
  }
  iVar2 = WeaponCompartment__GetShotsFired((WeaponCompartment *)this);
  iVar3 = this->_pad_0x0_0;
  local_c = (*(double *)(iVar3 + 0x168) + *(double *)(iVar3 + 0x168)) *
            (double)*(int *)(iVar3 + 0x174) + *(double *)(iVar3 + 0x178) +
            *(double *)(iVar3 + 0x1b0);
  if (*(char *)(iVar3 + 0x3b8) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x2e0);
  }
  pVVar4 = util__GetAdditionalShotCreationOffset_m(&local_1c,iVar3,iVar2 % iVar5);
  dVar1 = pVVar4->X;
  __return_storage_ptr__->Y = pVVar4->Y * local_c;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->X = dVar1 * local_c;
  return __return_storage_ptr__;
}


//==== 00006336c0 006336c0_GenerateTextures ====
// decompiled by BatchDecomp @ 006336c0 name=GenerateTextures conv=__thiscall body=250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ConventionalGunCompartment__GenerateTextures(void) */

void __thiscall ConventionalGunCompartment__GenerateTextures(ConventionalGunCompartment *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  undefined4 *puVar3;
  ReferenceControllerRegistry *pRVar4;
  ArmorTextureHandler *this_02;
  ArmorTextureHandler *local_10;
  ReferenceController *local_c;
  int local_8;
  
  iVar1 = this->_pad_0x0_0;
  if (*(char *)(iVar1 + 0x3e0) != '\0') {
    if (*(char *)(iVar1 + 0x3e0) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar3 = (undefined4 *)TurretSubModule__GenerateNewTexture((TurretSubModule *)(iVar1 + 0x2e0));
    iVar1 = this->_pad_0x0_0;
    local_8 = iVar1 + 1;
    util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0,
               &local_8);
    bVar2 = util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0
                       ,iVar1);
    if (bVar2) {
      this_02 = *(ArmorTextureHandler **)(this->_pad_0x0_0 + -8 + this->_pad_0x0_0 * 8);
      iVar1 = this->_pad_0x0_0 + this->_pad_0x0_0 * 8;
      this_00 = *(ReferenceController **)(iVar1 + -4);
      *(undefined4 *)(iVar1 + -8) = *puVar3;
      this_01 = (ReferenceController *)puVar3[1];
      *(ReferenceController **)(iVar1 + -4) = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__ReleaseStrongReference(this_00);
        if (bVar2) {
          if (this_02 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor_(this_02,1);
          }
          pRVar4 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,this_02);
        }
      }
    }
    if (local_c != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__ReleaseStrongReference(local_c);
      if (bVar2) {
        if (local_10 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor_(local_10,1);
        }
        pRVar4 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,local_10);
      }
    }
  }
  return;
}


//==== 00006337c0 006337c0_GetAdditionalShotCreationOffset_m ====
// decompiled by BatchDecomp @ 006337c0 name=GetAdditionalShotCreationOffset_m conv=__thiscall body=145

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct Vec3_L_double_G_ __thiscall
   ConventionalGunCompartment__GetAdditionalShotCreationOffset_m(void)const  */

Vec3_L_double_G_ * __thiscall
ConventionalGunCompartment__GetAdditionalShotCreationOffset_m(ConventionalGunCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  Vec2_L_double_G_ *pVVar5;
  int iVar6;
  Vec2_L_double_G_ local_1c;
  double local_c;
  
  if (*(char *)(this->_pad_0x0_0 + 0x3e0) == '\0') {
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(this->_pad_0x0_0 + 0x308);
  }
  iVar3 = WeaponCompartment__GetShotsFired((WeaponCompartment *)this);
  iVar4 = this->_pad_0x0_0;
  local_c = BarrelArmorSubModule__GetArmorRadius_m((BarrelArmorSubModule *)(iVar4 + 0x198));
  if (*(char *)(iVar4 + 0x3e0) == '\0') {
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x308);
  }
  pVVar5 = util__GetAdditionalShotCreationOffset_m(&local_1c,iVar4,iVar3 % iVar6);
  dVar1 = pVVar5->X;
  dVar2 = pVVar5->Y;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->X = dVar1 * local_c;
  __return_storage_ptr__->Y = dVar2 * local_c;
  return __return_storage_ptr__;
}


//==== 0000635800 00635800_GetPeakGasExpansionStress_Pa ====
// decompiled by BatchDecomp @ 00635800 name=GetPeakGasExpansionStress_Pa conv=__thiscall body=206

/* public: double __thiscall ConventionalGunModule__GetPeakGasExpansionStress_Pa(void)const  */

double __thiscall ConventionalGunModule__GetPeakGasExpansionStress_Pa(ConventionalGunModule *this)

{
  ulonglong uVar1;
  Material *pMVar2;
  code *pcVar3;
  uint unaff_ESI;
  float10 fVar4;
  float10 extraout_ST0;
  double dVar5;
  CylindricalStress local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ConventionalGunModule_GetPeakPressure_Pa_Memoize(this);
  if (*(char *)&(this->GetGunFlashColor_MemoizedValue).Data.Z == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pMVar2 = (this->BarrelProperties).CachedComposition;
  if ((pMVar2 == (Material *)0x0) ||
     (pcVar3 = *(code **)(char *)&(this->BarrelProperties) + 0x14, pcVar3 == (code *)0x0)) {
    dVar5 = 0.0;
  }
  else {
    fVar4 = (float10)(*pcVar3)(pMVar2);
    dVar5 = (double)fVar4;
  }
  ((slice_view *)&uVar1)->_0_4_ = (this->GetGunFlashColor_MemoizedValue).Data.X;
  ((slice_view *)&uVar1)->_4_4_ = (this->GetGunFlashColor_MemoizedValue).Data.Y;
  dVar5 = *(double *)&(this->BarrelProperties)._pad_0x0_0 + dVar5;
  Mechanics__GetMaximumStressOnThickTube(&local_20,
             (double)CONCAT44(SUB84(dVar5,0),
                              (int)((ulonglong)(this->Projectile).CachedPeakPressure_Pa >> 0x20)),
             (double)CONCAT44((int)uVar1,(int)((ulonglong)dVar5 >> 0x20)),(double)(uVar1 >> 0x20),
             (double)((ulonglong)unaff_ESI << 0x20));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00006453c0 006453c0_GetCavityArea_m2 ====
// decompiled by BatchDecomp @ 006453c0 name=GetCavityArea_m2 conv=__thiscall body=171

/* public: double __thiscall ArcLampPumpSubModule__GetCavityArea_m2(void)const  */

double __thiscall ArcLampPumpSubModule__GetCavityArea_m2(ArcLampPumpSubModule *this)

{
  undefined4 unaff_ESI;
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  local_c = this->CavitySemimajorAxis_m * /*400921fb54442d18*/3.141592653589793 * this->CavitySemiminorAxis_m;
  dVar1 = Material__GetYieldStrength_Pa(this->EnvelopeComposition);
  uVar2 = *(undefined4 *)&dVar1;
  uVar3 = *(undefined4 *)((char *)&dVar1 + 4);
  dVar1 = GetGasHotPressure_Pa(this);
  Mechanics__GetThicknessOfPressurizedTubeNeeded_m(&local_1c,(double)CONCAT44(SUB84(dVar1,0),(int)((ulonglong)this->Radius_m >> 0x20)),
             (double)CONCAT44(uVar2,(int)((ulonglong)dVar1 >> 0x20)),
             (double)CONCAT44(unaff_ESI,uVar3));
  if (local_1c.IsValidData == false) {
    local_1c.Data = 0.0;
  }
  local_1c.Data = this->Radius_m + local_1c.Data;
  return (local_c - local_1c.Data * /*400921fb54442d18*/3.141592653589793 * local_1c.Data) -
         this->CachedLasingRodRadius_m * /*400921fb54442d18*/3.141592653589793 * this->CachedLasingRodRadius_m;
}


//==== 0000646310 00646310_GetLampOuterRadius_m ====
// decompiled by BatchDecomp @ 00646310 name=GetLampOuterRadius_m conv=__thiscall body=105

/* public: double __thiscall ArcLampPumpSubModule__GetLampOuterRadius_m(void)const  */

double __thiscall ArcLampPumpSubModule__GetLampOuterRadius_m(ArcLampPumpSubModule *this)

{
  undefined4 unaff_ESI;
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Maybe_L_double_G_ local_14;
  
  dVar1 = Material__GetYieldStrength_Pa(this->EnvelopeComposition);
  uVar2 = *(undefined4 *)&dVar1;
  uVar3 = *(undefined4 *)((char *)&dVar1 + 4);
  dVar1 = GetGasHotPressure_Pa(this);
  Mechanics__GetThicknessOfPressurizedTubeNeeded_m(&local_14,(double)CONCAT44(SUB84(dVar1,0),(int)((ulonglong)this->Radius_m >> 0x20)),
             (double)CONCAT44(uVar2,(int)((ulonglong)dVar1 >> 0x20)),
             (double)CONCAT44(unaff_ESI,uVar3));
  if (local_14.IsValidData != false) {
    return this->Radius_m + local_14.Data;
  }
  return this->Radius_m + 0.0;
}


//==== 000064d840 0064d840_Launch ====
// decompiled by BatchDecomp @ 0064d840 name=Launch conv=__thiscall body=98

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LauncherSubCompartment__Launch(int) */

void __thiscall LauncherSubCompartment__Launch(LauncherSubCompartment *this,int param_1)

{
  Maybe_L_int_G_ *pMVar1;
  WeaponCompartment *pWVar2;
  undefined8 local_8;
  
  pWVar2 = this->Parent;
  if ((pWVar2->PendingLaunchCount).IsValidData != false) {
    pMVar1 = &pWVar2->PendingLaunchCount;
    if ((pWVar2->PendingLaunchCount).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      pWVar2 = this->Parent;
    }
    (pWVar2->PendingLaunchCount).Data = pMVar1->Data + param_1;
    ((slice_view *)&local_8)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_8)->_1_3_[0] | (((slice_view *)&local_8)->_1_3_[1] << 8) | (((slice_view *)&local_8)->_1_3_[2] << 16)) << 8));
    *(undefined4 *)&(pWVar2->PendingLaunchCount).IsValidData = local_8;
  }
  return;
}


//==== 000064e9f0 0064e9f0_RunActions ====
// decompiled by BatchDecomp @ 0064e9f0 name=RunActions conv=__thiscall body=110

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall LauncherSubCompartment__RunActions(double) */

void __thiscall LauncherSubCompartment__RunActions(LauncherSubCompartment *this,double param_1)

{
  WeaponCompartment *pWVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = (**(code **)(*(int *)this->Parent->_pad_0x0_0 + 0x188))();
  if (iVar3 != 0) {
    bVar2 = WeaponCompartment__IsReloadedAndCharged(this->Parent);
    if (bVar2) {
      bVar2 = LaunchOnce(this,param_1,false,(Darray_L_class_util__SharedPtr_L_class_Body_G___G_ *)0x0);
      if (bVar2) {
        WeaponCompartment__SetReloadAndChargingTimeLeft(this->Parent);
        pWVar1 = this->Parent;
        fVar4 = (float10)(**(code **)(*(int *)pWVar1->_pad_0x0_0 + 0x194))(param_1);
        *(double *)&pWVar1->_pad_0x0_0 = (double)(fVar4 + (float10)*(double *)&pWVar1->_pad_0x0_0);
      }
    }
  }
  return;
}


//==== 0000652290 00652290_GenerateTextures ====
// decompiled by BatchDecomp @ 00652290 name=GenerateTextures conv=__thiscall body=250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall RailgunCompartment__GenerateTextures(void) */

void __thiscall RailgunCompartment__GenerateTextures(RailgunCompartment *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  undefined4 *puVar3;
  ReferenceControllerRegistry *pRVar4;
  ArmorTextureHandler *this_02;
  ArmorTextureHandler *local_10;
  ReferenceController *local_c;
  int local_8;
  
  iVar1 = this->_pad_0x0_0;
  if (*(char *)(iVar1 + 0x3c8) != '\0') {
    if (*(char *)(iVar1 + 0x3c8) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar3 = (undefined4 *)TurretSubModule__GenerateNewTexture((TurretSubModule *)(iVar1 + 0x2c8));
    iVar1 = this->_pad_0x0_0;
    local_8 = iVar1 + 1;
    util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0,
               &local_8);
    bVar2 = util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0
                       ,iVar1);
    if (bVar2) {
      this_02 = *(ArmorTextureHandler **)(this->_pad_0x0_0 + -8 + this->_pad_0x0_0 * 8);
      iVar1 = this->_pad_0x0_0 + this->_pad_0x0_0 * 8;
      this_00 = *(ReferenceController **)(iVar1 + -4);
      *(undefined4 *)(iVar1 + -8) = *puVar3;
      this_01 = (ReferenceController *)puVar3[1];
      *(ReferenceController **)(iVar1 + -4) = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__ReleaseStrongReference(this_00);
        if (bVar2) {
          if (this_02 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor_(this_02,1);
          }
          pRVar4 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,this_02);
        }
      }
    }
    if (local_c != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__ReleaseStrongReference(local_c);
      if (bVar2) {
        if (local_10 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor_(local_10,1);
        }
        pRVar4 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,local_10);
      }
    }
  }
  return;
}


//==== 0000652420 00652420_GetAdditionalShotCreationOffset_m ====
// decompiled by BatchDecomp @ 00652420 name=GetAdditionalShotCreationOffset_m conv=__thiscall body=158

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct Vec3_L_double_G_ __thiscall
   RailgunCompartment__GetAdditionalShotCreationOffset_m(void)const  */

Vec3_L_double_G_ * __thiscall
RailgunCompartment__GetAdditionalShotCreationOffset_m(RailgunCompartment *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  int iVar3;
  Vec2_L_double_G_ *pVVar4;
  int iVar5;
  Vec2_L_double_G_ local_1c;
  double local_c;
  
  if (*(char *)(this->_pad_0x0_0 + 0x3c8) == '\0') {
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(this->_pad_0x0_0 + 0x2f0);
  }
  iVar2 = WeaponCompartment__GetShotsFired((WeaponCompartment *)this);
  iVar3 = this->_pad_0x0_0;
  local_c = *(double *)(iVar3 + 0x140) + *(double *)(iVar3 + 0x130) + *(double *)(iVar3 + 0x160);
  if (*(char *)(iVar3 + 0x3c8) == '\0') {
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x2f0);
  }
  pVVar4 = util__GetAdditionalShotCreationOffset_m(&local_1c,iVar3,iVar2 % iVar5);
  dVar1 = pVVar4->X;
  __return_storage_ptr__->Y = pVVar4->Y * local_c;
  __return_storage_ptr__->Z = 0.0;
  __return_storage_ptr__->X = dVar1 * local_c;
  return __return_storage_ptr__;
}


//==== 000065c2f0 0065c2f0_GenerateTextures ====
// decompiled by BatchDecomp @ 0065c2f0 name=GenerateTextures conv=__thiscall body=250

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall StandaloneLaserMountCompartment__GenerateTextures(void) */

void __thiscall
StandaloneLaserMountCompartment__GenerateTextures(StandaloneLaserMountCompartment *this)

{
  int iVar1;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  undefined4 *puVar3;
  ReferenceControllerRegistry *pRVar4;
  ArmorTextureHandler *this_02;
  ArmorTextureHandler *local_10;
  ReferenceController *local_c;
  int local_8;
  
  iVar1 = this->_pad_0x0_0;
  if (*(char *)(iVar1 + 0x1c0) != '\0') {
    if (*(char *)(iVar1 + 0x1c0) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar3 = (undefined4 *)TurretSubModule__GenerateNewTexture((TurretSubModule *)(iVar1 + 0xc0));
    iVar1 = this->_pad_0x0_0;
    local_8 = iVar1 + 1;
    util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____SetSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0,
               &local_8);
    bVar2 = util__Darray_class_util__SharedPtr_class_ArmorTextureHandler_____CheckSize((Darray_L_class_util__SharedPtr_L_class_ArmorTextureHandler_G___G_ *)&this->_pad_0x0_0
                       ,iVar1);
    if (bVar2) {
      this_02 = *(ArmorTextureHandler **)(this->_pad_0x0_0 + -8 + this->_pad_0x0_0 * 8);
      iVar1 = this->_pad_0x0_0 + this->_pad_0x0_0 * 8;
      this_00 = *(ReferenceController **)(iVar1 + -4);
      *(undefined4 *)(iVar1 + -8) = *puVar3;
      this_01 = (ReferenceController *)puVar3[1];
      *(ReferenceController **)(iVar1 + -4) = this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__ReleaseStrongReference(this_00);
        if (bVar2) {
          if (this_02 != (ArmorTextureHandler *)0x0) {
            ArmorTextureHandler___scalar_deleting_destructor_(this_02,1);
          }
          pRVar4 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,this_02);
        }
      }
    }
    if (local_c != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__ReleaseStrongReference(local_c);
      if (bVar2) {
        if (local_10 != (ArmorTextureHandler *)0x0) {
          ArmorTextureHandler___scalar_deleting_destructor_(local_10,1);
        }
        pRVar4 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,local_10);
      }
    }
  }
  return;
}


//==== 0000663470 00663470_GetLaunchedFlareHeat_W ====
extern undefined4 FUN_0065d840(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00663470 name=GetLaunchedFlareHeat_W conv=__thiscall body=269

/* public: double __thiscall WeaponModule__GetLaunchedFlareHeat_W(void)const  */

double __thiscall WeaponModule__GetLaunchedFlareHeat_W(WeaponModule *this)

{
  int iVar1;
  CraftBlueprint *this_00;
  undefined4 uVar2;
  int *piVar3;
  double *pdVar4;
  bool bVar5;
  float10 extraout_ST0;
  undefined **local_38;
  void *local_34;
  undefined **local_28;
  void *local_24;
  undefined4 local_18;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  local_18 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x188))();
  if (iVar1 == 0) {
    local_14 = 0.0;
  }
  else {
    this_00 = (CraftBlueprint *)(**(code **)(*(int *)this + 0x188))(&local_38);
    uVar2 = CraftBlueprint__GetPayloadModules(this_00);
    piVar3 = (int *)FUN_0065d840(&local_28,uVar2,0);
    iVar1 = (**(code **)(*piVar3 + 0xc))();
    if (iVar1 == 0) {
      local_14 = 0.0;
    }
    else {
      local_18 = 0;
      pdVar4 = (double *)(**(code **)*piVar3)(&local_18);
      local_c = 0;
      local_14 = *pdVar4;
      iVar1 = (**(code **)(*piVar3 + 0xc))();
      if (local_c < iVar1) {
        do {
          pdVar4 = (double *)(**(code **)*piVar3)(&local_c);
          if (local_14 <= *pdVar4) {
            local_14 = *pdVar4;
          }
          local_c = local_c + 1;
          iVar1 = (**(code **)(*piVar3 + 0xc))();
        } while (local_c < iVar1);
      }
    }
    local_28 = ((void *)(0x0091da54u));
    if (local_24 != (void *)0x0) {
      operator_delete__(local_24);
    }
    bVar5 = true;
  }
  if (bVar5) {
    local_38 = ((void *)(0x009194a4u));
    if (local_34 != (void *)0x0) {
      operator_delete__(local_34);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000672a50 00672a50_GetReactantSpeedOfSound_m__s ====
// decompiled by BatchDecomp @ 00672a50 name=GetReactantSpeedOfSound_m__s conv=__thiscall body=241

/* public: double __thiscall ChemicalReaction__GetReactantSpeedOfSound_m__s(void)const  */

double __thiscall ChemicalReaction__GetReactantSpeedOfSound_m__s(ChemicalReaction *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  double dVar4;
  void *local_28;
  double local_1c;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)GetReactants(this);
  local_c = 0;
  local_14 = 0.0;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (local_c < iVar2) {
    local_1c = local_14;
    do {
      puVar3 = (undefined4 *)(**(code **)*piVar1)(&local_c);
      dVar4 = Material__GetSolidLiquidSpeedOfSound_m__s((Material *)*puVar3);
      local_c = local_c + 1;
      local_1c = dVar4 * *(double *)(puVar3 + 2) + local_1c;
      local_14 = local_1c;
      iVar2 = (**(code **)(*piVar1 + 0xc))();
    } while (local_c < iVar2);
  }
  local_14 = (double)((ulonglong)local_14 & 0xffffffff);
  iVar2 = (**(code **)(*(int *)&this->ReactantCounts + 0xc))();
  if (((slice_view *)&local_14)->_4_4_ < iVar2) {
    do {
      (**(code **)*(int *)&this->ReactantCounts)((int)&local_14 + 4);
      local_14 = (double)CONCAT44(((slice_view *)&local_14)->_4_4_ + 1,(undefined4)local_14);
      iVar2 = (**(code **)(*(int *)&this->ReactantCounts + 0xc))();
    } while (((slice_view *)&local_14)->_4_4_ < iVar2);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000067a290 0067a290_GetGasSpeedOfSound_m__s ====
// decompiled by BatchDecomp @ 0067a290 name=GetGasSpeedOfSound_m__s conv=__thiscall body=204

/* public: double __thiscall CompressibleFlowPoint__GetGasSpeedOfSound_m__s(double)const  */

double __thiscall
CompressibleFlowPoint__GetGasSpeedOfSound_m__s(CompressibleFlowPoint *this,double param_1)

{
  bool bVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  double local_20;
  Maybe_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (this->SpecificHeat_J__kg_K /
             (this->SpecificHeat_J__kg_K - this->SpecificGasConstant_J__kg_K)) * param_1 *
             this->SpecificGasConstant_J__kg_K;
  util__Sqrt(&local_18,&local_20);
  if (((((this->SpecificHeat_J__kg_K <= 0.0) || (this->SpecificGasConstant_J__kg_K <= 0.0)) ||
       (this->Temperature_K <= 0.0)) ||
      ((this->Pressure_Pa <= 0.0 || (this->MassFlowRate_kg__s <= 0.0)))) || (this->Area_m2 <= 0.0))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((local_18.IsValidData != false) && (bVar1)) {
    local_20 = local_18.Data;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  local_20 = 0.0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 000068c730 0068c730_GetFalseColorFromWavelength ====
// decompiled by BatchDecomp @ 0068c730 name=GetFalseColorFromWavelength conv=__cdecl body=272

/* struct util__Vec3_L_float_G_ __cdecl Physics__GetFalseColorFromWavelength(double) */

Vec3_L_float_G_ * __cdecl
Physics__GetFalseColorFromWavelength(Vec3_L_float_G_ *__return_storage_ptr__,double param_1)

{
  float fVar1;
  bool unaff_SI;
  double dVar2;
  double dVar3;
  undefined4 in_stack_00000008;
  
  fVar1 = /*3f800000*/1.0f;
  dVar2 = (double)CONCAT44(((slice_view *)&param_1)->_0_4_,in_stack_00000008);
  if (dVar2 < /*4014000000000000*/5.0) {
    __return_storage_ptr__->X = /*3f800000*/1.0f;
    __return_storage_ptr__->Y = fVar1;
    __return_storage_ptr__->Z = fVar1;
    return __return_storage_ptr__;
  }
  if (dVar2 < /*4034000000000000*/20.0) {
    dVar3 = (dVar2 - /*4014000000000000*/5.0) / /*402e000000000000*/15.0;
    dVar2 = /*3ff0000000000000*/1.0 - dVar3;
    __return_storage_ptr__->X = (float)(dVar3 * /*3fe5555555555555*/0.6666666666666666 + dVar2);
    __return_storage_ptr__->Y = (float)(dVar3 * /*0000000000000000*/0.0 + dVar2);
    __return_storage_ptr__->Z = (float)(dVar3 + dVar2);
    return __return_storage_ptr__;
  }
  if (dVar2 < /*4077c00000000000*/380.0) {
    __return_storage_ptr__->X = 0.6666667;
    __return_storage_ptr__->Z = 1.0;
    __return_storage_ptr__->Y = 0.0;
    return __return_storage_ptr__;
  }
  if (((/*4077c00000000000*/380.0 < dVar2) || (dVar2 < /*4088600000000000*/780.0)) &&
     ((/*4088600000000000*/780.0 < dVar2 || (dVar2 < /*4077c00000000000*/380.0)))) {
    __return_storage_ptr__->X = 1.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->Y = 0.0;
    return __return_storage_ptr__;
  }
  GetVisibleColorFromWavelength
            (__return_storage_ptr__,(double)((ulonglong)param_1 & 0xffffffff),unaff_SI);
  return __return_storage_ptr__;
}


//==== 000069a460 0069a460_DememoizeAll ====
// decompiled by BatchDecomp @ 0069a460 name=DememoizeAll conv=__thiscall body=103

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall CompartmentButton__DememoizeAll(void)const  */

void __thiscall CompartmentButton__DememoizeAll(CompartmentButton *this)

{
  CompartmentButtonMemoizationHandler *pCVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  pCVar1 = &this->CompartmentButtonMemoizationHandlerInstance;
  iVar2 = (**(code **)((this->CompartmentButtonMemoizationHandlerInstance).ResetFunctions._pad_0x0_0
                      + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*(int *)&pCVar1->ResetFunctions)(&local_c);
      (*(code *)*puVar3)();
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&pCVar1->ResetFunctions + 0xc))();
    } while (local_c < iVar2);
  }
  (**(code **)(*(int *)&pCVar1->ResetFunctions + 0x10))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006cf470 006cf470_WatchEnding ====
// decompiled by BatchDecomp @ 006cf470 name=WatchEnding conv=__thiscall body=139

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall BriefingsHandler__WatchEnding(void) */

void __thiscall BriefingsHandler__WatchEnding(BriefingsHandler *this)

{
  Delegate_L_void_G_ DVar1;
  Delegate_L_void_G_ DVar2;
  GameManager *pGVar3;
  DataParser *pDVar4;
  Campaign *pCVar5;
  Interface *this_00;
  StrategicManager *this_01;
  undefined4 *puVar6;
  HWND unaff_EDI;
  void *pvVar7;
  _func___cdecl_void_void_ptr *p_Var8;
  void *pvVar9;
  StrategicManager *pSVar10;
  bool bVar11;
  _func___cdecl_void_void_ptr *p_Var12;
  
  pGVar3 = (GameManager *)Manager__GetParent(unaff_EDI);
  pDVar4 = GameManager__GetDataManager(pGVar3);
  pCVar5 = GetCurrentCampaign(pDVar4);
  p_Var12 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar9 = (void *)0x0;
  p_Var8 = (_func___cdecl_void_void_ptr *)0x0;
  pvVar7 = (void *)0x0;
  this_00 = Manager__GetInterfacer((Manager *)this->Parent);
  DVar1.CallbackFunction = p_Var8;
  DVar1.Callee = pvVar7;
  DVar2.CallbackFunction = p_Var12;
  DVar2.Callee = pvVar9;
  Interface__NewScreen(this_00,DVar1,DVar2);
  pGVar3 = (GameManager *)Manager__GetParent(unaff_EDI);
  this_01 = GameManager__WatchEnding(pGVar3);
  bVar11 = true;
  pSVar10 = this_01;
  pGVar3 = (GameManager *)Manager__GetParent((HWND)this_01);
  GameManager__SwitchToSession(pGVar3,(Manager *)pSVar10,bVar11);
  puVar6 = (undefined4 *)(**(code **)(pCVar5[1]._pad_0x0_0 + 0x1c))();
  StrategicManager__StartLevel(this_01,(Level *)*puVar6);
  this->CanAffectCamera = false;
  this->SelectedSubject = ~LevelPresets;
  this->SelectedData = (Reflectable *)0x0;
  this->SelectedCraft = (CraftBlueprint *)0x0;
  this->SelectedLevel = (Level *)0x0;
  return;
}


//==== 00006ec7b0 006ec7b0_ItineraryNode ====
// decompiled by BatchDecomp @ 006ec7b0 name=ItineraryNode conv=__thiscall body=251

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ItineraryNode__ItineraryNode(void) */

ItineraryNode * __thiscall ItineraryNode__ItineraryNode(ItineraryNode *this)

{
  (this->Parent).Pointer = (Fleet *)0x0;
  *(undefined4 *)&(this->LastState).Position.X = 0;
  *(undefined4 *)((int)&(this->LastState).Position.X + 4) = 0;
  *(undefined4 *)&(this->LastState).Position.Y = 0;
  *(undefined4 *)((int)&(this->LastState).Position.Y + 4) = 0;
  (this->Parent).Controller = (ReferenceController *)0x0;
  *(undefined4 *)&(this->LastState).Position.Z = 0;
  *(undefined4 *)((int)&(this->LastState).Position.Z + 4) = 0;
  *(undefined4 *)&(this->LastState).Velocity.X = 0;
  *(undefined4 *)((int)&(this->LastState).Velocity.X + 4) = 0;
  *(undefined4 *)&(this->LastState).Velocity.Y = 0;
  *(undefined4 *)((int)&(this->LastState).Velocity.Y + 4) = 0;
  *(undefined4 *)&(this->LastState).Velocity.Z = 0;
  *(undefined4 *)((int)&(this->LastState).Velocity.Z + 4) = 0;
  *(undefined4 *)&this->LastTimeSinceJ2000_s = 0;
  *(undefined4 *)((int)&this->LastTimeSinceJ2000_s + 4) = 0;
  *(undefined4 *)&(this->State).Position.X = 0;
  *(undefined4 *)((int)&(this->State).Position.X + 4) = 0;
  *(undefined4 *)&(this->State).Position.Y = 0;
  *(undefined4 *)((int)&(this->State).Position.Y + 4) = 0;
  *(undefined4 *)&(this->State).Position.Z = 0;
  *(undefined4 *)((int)&(this->State).Position.Z + 4) = 0;
  *(undefined4 *)&(this->State).Velocity.X = 0;
  *(undefined4 *)((int)&(this->State).Velocity.X + 4) = 0;
  *(undefined4 *)&(this->State).Velocity.Y = 0;
  *(undefined4 *)((int)&(this->State).Velocity.Y + 4) = 0;
  *(undefined4 *)&(this->State).Velocity.Z = 0;
  *(undefined4 *)((int)&(this->State).Velocity.Z + 4) = 0;
  *(undefined4 *)&this->TimeSinceJ2000_s = 0;
  *(undefined4 *)((int)&this->TimeSinceJ2000_s + 4) = 0;
  *(undefined4 *)&(this->ThrusterBurn_km__s).X = 0;
  *(undefined4 *)((int)&(this->ThrusterBurn_km__s).X + 4) = 0;
  *(undefined4 *)&(this->ThrusterBurn_km__s).Y = 0;
  *(undefined4 *)((int)&(this->ThrusterBurn_km__s).Y + 4) = 0;
  *(undefined4 *)&(this->ThrusterBurn_km__s).Z = 0;
  *(undefined4 *)((int)&(this->ThrusterBurn_km__s).Z + 4) = 0;
  *(undefined4 *)&(this->ResidualThrusterBurn_km__s).X = 0;
  *(undefined4 *)((int)&(this->ResidualThrusterBurn_km__s).X + 4) = 0;
  *(undefined4 *)&(this->ResidualThrusterBurn_km__s).Y = 0;
  *(undefined4 *)((int)&(this->ResidualThrusterBurn_km__s).Y + 4) = 0;
  *(undefined4 *)&(this->ResidualThrusterBurn_km__s).Z = 0;
  *(undefined4 *)((int)&(this->ResidualThrusterBurn_km__s).Z + 4) = 0;
  this->NodeType = Default;
  *(undefined4 *)&(this->CachedReferenceShiftedPosition_km).X = 0;
  *(undefined4 *)((int)&(this->CachedReferenceShiftedPosition_km).X + 4) = 0;
  *(undefined4 *)&(this->CachedReferenceShiftedPosition_km).Y = 0;
  *(undefined4 *)((int)&(this->CachedReferenceShiftedPosition_km).Y + 4) = 0;
  *(undefined4 *)&(this->CachedReferenceShiftedPosition_km).Z = 0;
  *(undefined4 *)((int)&(this->CachedReferenceShiftedPosition_km).Z + 4) = 0;
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.X = 0;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.X + 4) = 0;
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Y = 0;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Y + 4) = 0;
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Z = 0;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Z + 4) = 0;
  (this->CachedGravityBodyReferenceShiftedPosition_km).IsValidData = false;
  this->CachedTotalSpentDeltaV_km__s = 0.0;
  (this->CachedGravityBody).Pointer = (CelestialObject *)0x0;
  (this->CachedGravityBody).Controller = (ReferenceController *)0x0;
  (this->CachedNearestBody).Pointer = (CelestialObject *)0x0;
  (this->CachedNearestBody).Controller = (ReferenceController *)0x0;
  (this->CachedNearestFleet).Pointer = (Fleet *)0x0;
  (this->CachedNearestFleet).Controller = (ReferenceController *)0x0;
  (this->CachedNearestFleetDistance_km).Data = 0.0;
  (this->CachedNearestFleetDistance_km).IsValidData = false;
  (this->CachedNearestFleetParametricCoord).Data = 0.0;
  (this->CachedNearestFleetParametricCoord).IsValidData = false;
  (this->CachedNearestOrbiter).Pointer = (OrbiterInterface *)0x0;
  (this->CachedNearestOrbiter).Controller = (ReferenceController *)0x0;
  (this->CachedNearestOrbitDistance_km).Data = 0.0;
  (this->CachedNearestOrbitDistance_km).IsValidData = false;
  (this->CachedNearestOrbitParametricCoord).Data = 0.0;
  (this->CachedNearestOrbitParametricCoord).IsValidData = false;
  return this;
}


//==== 00006f2ae0 006f2ae0_DememoizeAll ====
// decompiled by BatchDecomp @ 006f2ae0 name=DememoizeAll conv=__thiscall body=108

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall FixedOrbit__DememoizeAll(void)const  */

void __thiscall FixedOrbit__DememoizeAll(FixedOrbit *this)

{
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)
               (**(code **)(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size)
                         (&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size + 0xc))
                        ();
    } while (local_c < iVar1);
  }
  (**(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size + 0x10))();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006f6cd0 006f6cd0_GetReferenceIrradiance_W__m2 ====
// decompiled by BatchDecomp @ 006f6cd0 name=GetReferenceIrradiance_W__m2 conv=__thiscall body=198

/* public: double __thiscall ScenarioEditor__GetReferenceIrradiance_W__m2(void)const  */

double __thiscall ScenarioEditor__GetReferenceIrradiance_W__m2(ScenarioEditor *this)

{
  Level *this_00;
  Vec3_L_double_G_ VVar1;
  bool bVar2;
  CelestialBody *pCVar3;
  Vec3_L_double_G_ *pVVar4;
  WorldLight *pWVar5;
  Level *this_01;
  undefined4 unaff_EDI;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  WorldLight local_8c;
  Vec3_L_double_G_ local_24;
  double local_c;
  
  pCVar3 = GetBrightestBody(this);
  if (pCVar3 == (CelestialBody *)0x0) {
    return 0.0;
  }
  this_00 = *(Level **)(this + 100);
  if (this_00 == (Level *)0x0) {
    this_01 = (Level *)0x0;
  }
  else {
    bVar2 = Reflectable__GetReferenceIrradiance_W__m2((Reflectable *)this_00);
    this_01 = (Level *)0x0;
    if (bVar2) {
      this_01 = this_00;
    }
  }
  pCVar3 = Level__GetImportantBody(this_01);
  local_c = CelestialBody__GetAverageDistanceToIlluminator_km(pCVar3);
  local_c = local_c * /*408f400000000000*/1000.0;
  pCVar3 = GetBrightestBody(this);
  pVVar4 = GetBodyPosition_km(this,&local_24,pCVar3);
  uVar6 = *(undefined4 *)((int)&pVVar4->X + 4);
  uVar7 = *(undefined4 *)&pVVar4->Y;
  uVar8 = *(undefined4 *)((int)&pVVar4->Y + 4);
  pWVar5 = &local_8c;
  uVar9 = *(undefined4 *)&pVVar4->Z;
  uVar10 = (undefined4)((ulonglong)pVVar4->Z >> 0x20);
  pCVar3 = GetBrightestBody(this);
  ((slice_view *)&VVar1.X)->_4_4_ = uVar7;
  ((slice_view *)&VVar1.X)->_0_4_ = uVar6;
  ((slice_view *)&VVar1.Y)->_0_4_ = uVar8;
  ((slice_view *)&VVar1.Y)->_4_4_ = uVar9;
  ((slice_view *)&VVar1.Z)->_0_4_ = uVar10;
  ((slice_view *)&VVar1.Z)->_4_4_ = unaff_EDI;
  pWVar5 = CelestialBody__GetWorldLight(pCVar3,pWVar5,VVar1);
  return (pWVar5->Power_W / (local_c * local_c * /*402921fb54442d18*/12.566370614359172)) / /*4024000000000000*/10.0
  ;
}


//==== 000070f770 0070f770_GetAverageAngularVelocity__s ====
// decompiled by BatchDecomp @ 0070f770 name=GetAverageAngularVelocity__s conv=__thiscall body=142

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall FixedOrbit__GetAverageAngularVelocity__s(void)const  */

double __thiscall FixedOrbit__GetAverageAngularVelocity__s(FixedOrbit *this)

{
  double dVar1;
  ReferenceController *this_00;
  bool bVar2;
  Maybe_L_double_G_ *pMVar3;
  CelestialBody *this_01;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  this_01 = (CelestialBody *)(this->OrbitedBody).Pointer;
  if (this_01 == (CelestialBody *)0x0) {
    this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if (this_00 != (ReferenceController *)0x0) {
      bVar2 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar2) {
        (this->OrbitedBody).Controller = (ReferenceController *)0x0;
      }
    }
    this_01 = (CelestialBody *)(this->OrbitedBody).Controller[6].WeakReferenceCount;
  }
  local_c = CelestialBody__GetStandardGravitationalParameter_km3__s2(this_01);
  dVar1 = (this->Elements).Eccentricity;
  local_c = local_c / (dVar1 * dVar1 * dVar1);
  pMVar3 = util__Sqrt(&local_1c,&local_c);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar3->Data;
}


//==== 000070fa00 0070fa00_GetEccentricAnomalyFromTrueAnomaly_radians ====
// decompiled by BatchDecomp @ 0070fa00 name=GetEccentricAnomalyFromTrueAnomaly_radians conv=__thiscall body=113

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall FixedOrbit__GetEccentricAnomalyFromTrueAnomaly_radians(double)const
    */

double __thiscall
FixedOrbit__GetEccentricAnomalyFromTrueAnomaly_radians(FixedOrbit *this,double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = util__Cos(&param_1);
  dVar2 = (this->Elements).InclinationToRelativePlane_degrees;
  dVar2 = util__GetEccentricAnomalyFromTrueAnomaly_radians((dVar2 + dVar1) / (dVar2 * dVar1 + /*3ff0000000000000*/1.0));
  if (/*400921fb54442d18*/3.141592653589793 < param_1) {
    dVar2 = /*401921fb54442d18*/6.283185307179586 - dVar2;
  }
  return dVar2;
}


//==== 000070fbb0 0070fbb0_GetFullRotator_Memoize ====
// decompiled by BatchDecomp @ 0070fbb0 name=GetFullRotator_Memoize conv=__thiscall body=124

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall FixedOrbit__GetFullRotator_Memoize(void)const  */

void __thiscall FixedOrbit__GetFullRotator_Memoize(FixedOrbit *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  Quaternion_L_double_G_ *pQVar10;
  Quaternion_L_double_G_ local_28;
  int local_8;
  
  if (*(char *)&(this->GetVelocityStateConstant_km__s_MemoizedValue).Data == '\0') {
    iVar1 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,&local_8);
    bVar9 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar1);
    if (bVar9) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent_GetDesiredOrientation_Clear;
    }
    pQVar10 = FixedOrbit_GetFullRotator_MemoizedFunction(this,&local_28);
    uVar2 = *(undefined4 *)((int)&pQVar10->X + 4);
    uVar3 = *(undefined4 *)&pQVar10->Y;
    uVar4 = *(undefined4 *)((int)&pQVar10->Y + 4);
    uVar5 = *(undefined4 *)&pQVar10->Z;
    uVar6 = *(undefined4 *)((int)&pQVar10->Z + 4);
    uVar7 = *(undefined4 *)&pQVar10->W;
    uVar8 = *(undefined4 *)((int)&pQVar10->W + 4);
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Y = *(undefined4 *)&pQVar10->X;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Y + 4) = uVar2;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.Z = uVar3;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.Z + 4) = uVar4;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.W = uVar5;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.W + 4) = uVar6;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).IsValidData = uVar7;
    *(undefined4 *)((char *)&(this->GetFullRotator_MemoizedValue) + 0x24) = uVar8;
    (this->GetVelocityStateConstant_km__s_MemoizedValue).Data = (double)CONCAT71(((slice_view *)&local_28.W)->_1_7_,1)
    ;
  }
  return;
}


//==== 000070fff0 0070fff0_GetLocation_km ====
// decompiled by BatchDecomp @ 0070fff0 name=GetLocation_km conv=__thiscall body=213

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall LibrationOrbit__GetLocation_km(double,struct
   FixedOrbit const &)const  */

Vec3_L_double_G_ * __thiscall
LibrationOrbit__GetLocation_km(LibrationOrbit *this,Vec3_L_double_G_ *__return_storage_ptr__,double param_1,
          FixedOrbit *param_2)

{
  ReferenceController *pRVar1;
  bool bVar2;
  undefined4 in_stack_00000008;
  CelestialObject *pCVar3;
  ReferenceController *pRVar4;
  undefined4 uVar5;
  ItineraryNode local_308;
  ItineraryNode local_1b8;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_50 = 0x710014;
  FixedOrbit__GetAbsoluteOrbitalState(((slice_view *)&param_1)->_4_4_,(double)CONCAT44(in_stack_00000008,&local_34));
  pRVar1 = (this->MainBody).Controller;
  local_60 = local_34;
  uStack_5c = uStack_30;
  uStack_58 = uStack_2c;
  uStack_54 = uStack_28;
  pCVar3 = (this->MainBody).Pointer;
  pRVar4 = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  uVar5 = 0;
  ItineraryNode__ItineraryNode(&local_308);
  ItineraryNode__ItineraryNode(&local_1b8);
  local_68 = 0;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
  }
  pRVar1 = (this->MainBody).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->MainBody).Pointer = (CelestialObject *)0x0;
  }
  StrategicManager__GetObjectShiftedPosition_km(((this->MainBody).Pointer)->ParentStrategic,__return_storage_ptr__,pCVar3,pRVar4,uVar5)
  ;
  return __return_storage_ptr__;
}


//==== 0000710440 00710440_GetMaxDeltaVToChangeOrbitalPlanes_km__s ====
// decompiled by BatchDecomp @ 00710440 name=GetMaxDeltaVToChangeOrbitalPlanes_km__s conv=__thiscall body=269

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall FixedOrbit__GetMaxDeltaVToChangeOrbitalPlanes_km__s(struct FixedOrbit
   const &)const  */

double __thiscall
FixedOrbit__GetMaxDeltaVToChangeOrbitalPlanes_km__s(FixedOrbit *this,FixedOrbit *param_1)

{
  Vec3_L_double_G_ *pVVar1;
  Vec3_L_double_G_ *pVVar2;
  Maybe_L_double_G_ *pMVar3;
  double dVar4;
  Vec3_L_double_G_ local_64;
  Vec3_L_double_G_ local_4c;
  double local_34;
  undefined1 local_2c[16];
  double local_1c;
  double local_14;
  double local_c;
  
  if (((this->Elements)._pad_0x0_0 != (param_1->Elements)._pad_0x0_0) ||
     ((this->OrbitedBody).Controller != (param_1->OrbitedBody).Controller)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x357,
                    "IntoOtherOrbit.OrbitedBody == OrbitedBody",(char *)0x0);
    DebugBreak();
  }
  pVVar1 = GetUpVector(this,&local_4c);
  pVVar2 = GetUpVector(param_1,&local_64);
  local_1c = pVVar2->X - pVVar1->X;
  ((slice_view *)&local_2c)->_8_8_ = pVVar2->Y - pVVar1->Y;
  local_34 = pVVar2->Z - pVVar1->Z;
  local_14 = GetPeriapsisVelocity_km__s(this);
  local_c = GetPeriapsisVelocity_km__s(param_1);
  dVar4 = local_c;
  if (local_c <= local_14) {
    dVar4 = local_14;
  }
  local_34 = local_1c * local_1c + (double)((slice_view *)&local_2c)->_8_8_ * (double)((slice_view *)&local_2c)->_8_8_ +
             local_34 * local_34;
  local_14 = dVar4;
  pMVar3 = util__Sqrt((Maybe_L_double_G_ *)local_2c,&local_34);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar3->Data * local_14;
}


//==== 0000710790 00710790_GetOrbitalPeriod_s_Memoize ====
// decompiled by BatchDecomp @ 00710790 name=GetOrbitalPeriod_s_Memoize conv=__thiscall body=171

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall FixedOrbit__GetOrbitalPeriod_s_Memoize(void)const  */

void __thiscall FixedOrbit__GetOrbitalPeriod_s_Memoize(FixedOrbit *this)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  double dVar3;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if (*(char *)&(this->GetFullRotator_MemoizedValue).Data.X == '\0') {
    iVar1 = *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data;
    local_8 = iVar1 + 1;
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,&local_8);
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar1);
    if (bVar2) {
      *(code **)((this->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear;
    }
    if ((this->OrbitedBody).Pointer == (CelestialObject *)0x0) {
      this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
      if (this_00 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(this_00);
        if (!bVar2) {
          (this->OrbitedBody).Controller = (ReferenceController *)0x0;
        }
      }
      if ((this->OrbitedBody).Controller[6].WeakReferenceCount == 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x70,
                        "GetOrbitedBody()",(char *)0x0);
        DebugBreak();
      }
    }
    dVar3 = GetAverageAngularVelocity__s(this);
    ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
    *(double *)&(this->GetOrbitalPeriod_s_MemoizedValue).IsValidData =
         /*401921fb54442d18*/6.283185307179586 / dVar3;
    *(undefined4 *)&(this->GetFullRotator_MemoizedValue).Data.X = uStack_10;
    *(undefined4 *)((int)&(this->GetFullRotator_MemoizedValue).Data.X + 4) = uStack_c;
  }
  return;
}


//==== 0000710870 00710870_GetPeriapsisVelocity_km__s ====
// decompiled by BatchDecomp @ 00710870 name=GetPeriapsisVelocity_km__s conv=__thiscall body=153

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall FixedOrbit__GetPeriapsisVelocity_km__s(void)const  */

double __thiscall FixedOrbit__GetPeriapsisVelocity_km__s(FixedOrbit *this)

{
  ReferenceController *this_00;
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  CelestialBody *this_01;
  double dVar3;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  this_01 = (CelestialBody *)(this->OrbitedBody).Pointer;
  if (this_01 == (CelestialBody *)0x0) {
    this_00 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if (this_00 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar1) {
        (this->OrbitedBody).Controller = (ReferenceController *)0x0;
      }
    }
    this_01 = (CelestialBody *)(this->OrbitedBody).Controller[6].WeakReferenceCount;
  }
  dVar3 = CelestialBody__GetStandardGravitationalParameter_km3__s2(this_01);
  local_c = (((this->Elements).InclinationToRelativePlane_degrees + /*3ff0000000000000*/1.0) * dVar3
            ) / ((/*3ff0000000000000*/1.0 - (this->Elements).InclinationToRelativePlane_degrees) *
                (this->Elements).Eccentricity);
  pMVar2 = util__Sqrt(&local_1c,&local_c);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar2->Data;
}


//==== 0000713ad0 00713ad0_IsEquatorial ====
// decompiled by BatchDecomp @ 00713ad0 name=IsEquatorial conv=__thiscall body=117

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__IsEquatorial(void)const  */

bool __thiscall FixedOrbit__IsEquatorial(FixedOrbit *this)

{
  bool bVar1;
  double dVar2;
  double local_1c;
  double local_14;
  double local_c;
  
  local_c = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
  dVar2 = util__Abs(&local_c);
  if (/*3f1a36e2eb1c432d*/0.0001 < dVar2) {
    local_14 = /*3f1a36e2eb1c432d*/0.0001;
    local_1c = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__IsEquatorial(&local_1c,(double *)&DAT_00937db0,&local_14);
    if (!bVar1) {
      return bVar1;
    }
  }
  return true;
}


//==== 0000713b50 00713b50_IsNumericallyValid ====
// decompiled by BatchDecomp @ 00713b50 name=IsNumericallyValid conv=__thiscall body=145

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__IsNumericallyValid(void)const  */

bool __thiscall FixedOrbit__IsNumericallyValid(FixedOrbit *this)

{
  if ((((((this->OrbitedBody).Controller != (ReferenceController *)0x0) &&
        (!NAN((this->Elements).SemiMajorAxis_km))) && (!NAN((this->Elements).Eccentricity))) &&
      ((!NAN((this->Elements).InclinationToRelativePlane_degrees) &&
       (!NAN((this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295))))) &&
     ((!NAN((this->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295) &&
      ((!NAN((this->Elements).MeanAnomaly_degrees * /*3f91df46a2529d39*/0.017453292519943295) &&
       (!NAN(*(double *)&(this->FixedOrbitMemoizationHandlerInstance).ResetFunctions *
             /*3f91df46a2529d39*/0.017453292519943295))))))) {
    return true;
  }
  return false;
}


//==== 0000719300 00719300_GetAverageAtomicMass_amu ====
// decompiled by BatchDecomp @ 00719300 name=GetAverageAtomicMass_amu conv=__thiscall body=227

/* public: double __thiscall CelestialBody__GetAverageAtomicMass_amu(void)const  */

double __thiscall CelestialBody__GetAverageAtomicMass_amu(CelestialBody *this)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)&(this->Orbit).Data.Elements.SemiMajorAxis_km;
  if (iVar1 == 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astronomy.cpp",0xb4,
                    "SpectralType",(char *)0x0);
    DebugBreak();
    iVar1 = *(int *)&(this->Orbit).Data.Elements.SemiMajorAxis_km;
  }
  piVar3 = (int *)(iVar1 + 0x10);
  iVar1 = (**(code **)(*(int *)(iVar1 + 0x10) + 0xc))();
  if (iVar1 < 1) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0_00;
  }
  local_c = 0;
  iVar1 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      Material__GetAtomicMass_amu((Material *)*puVar2);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007446b0 007446b0_HasAnyThrust ====
// decompiled by BatchDecomp @ 007446b0 name=HasAnyThrust conv=__thiscall body=114

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall ItineraryNode__HasAnyThrust(void)const  */

bool __thiscall ItineraryNode__HasAnyThrust(ItineraryNode *this)

{
  double dVar1;
  
  dVar1 = (this->ThrusterBurn_km__s).X;
  if ((((NAN(dVar1) != (dVar1 == 0.0)) &&
       (dVar1 = (this->ThrusterBurn_km__s).Y, NAN(dVar1) != (dVar1 == 0.0))) &&
      (dVar1 = (this->ThrusterBurn_km__s).Z, NAN(dVar1) != (dVar1 == 0.0))) &&
     (((dVar1 = (this->ResidualThrusterBurn_km__s).X, NAN(dVar1) != (dVar1 == 0.0) &&
       (dVar1 = (this->ResidualThrusterBurn_km__s).Y, NAN(dVar1) != (dVar1 == 0.0))) &&
      (dVar1 = (this->ResidualThrusterBurn_km__s).Z, NAN(dVar1) != (dVar1 == 0.0))))) {
    return false;
  }
  return true;
}


//==== 0000744c70 00744c70_IsNearestFleetAFlyby ====
// decompiled by BatchDecomp @ 00744c70 name=IsNearestFleetAFlyby conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall ItineraryNode__IsNearestFleetAFlyby(void)const  */

bool __thiscall ItineraryNode__IsNearestFleetAFlyby(ItineraryNode *this)

{
  ReferenceController *this_00;
  bool bVar1;
  Itinerary *pIVar2;
  Fleet *pFVar3;
  ReferenceController *pRVar4;
  undefined4 uVar5;
  
  if (((this->CachedNearestFleet).Pointer != (Fleet *)0x0) &&
     (pRVar4 = (this->CachedNearestFleet).Controller, pRVar4 != (ReferenceController *)0x0)) {
    bVar1 = util__ReferenceController__IsDataStillValid(pRVar4);
    if ((bVar1) &&
       (((this->CachedNearestFleetParametricCoord).IsValidData != false &&
        ((this->CachedNearestFleetDistance_km).IsValidData != false)))) {
      pFVar3 = (this->CachedNearestFleet).Pointer;
      uVar5 = 0;
      pRVar4 = (this->CachedNearestFleet).Controller;
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar4);
      }
      this_00 = (this->Parent).Controller;
      if (this_00 != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid(this_00);
        if (!bVar1) {
          (this->Parent).Pointer = (Fleet *)0x0;
        }
      }
      pIVar2 = (Itinerary *)Fleet__GetMissionItinerary((this->Parent).Pointer);
      if (*(char *)&pIVar2[2].FinalOrbit.Data.Elements.SemiMajorAxis_km == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar1 = Itinerary__IsNodeAFlybyNode(pIVar2,this,pFVar3,pRVar4,uVar5);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}


//==== 000074cc00 0074cc00_FUN_0074cc00 ====
float10 __thiscall FUN_0074cc00(undefined4 *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 0074cc00 name=FUN_0074cc00 conv=unknown body=208

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float10 __thiscall FUN_0074cc00(undefined4 *param_1,undefined4 *param_2)

{
  double dVar1;
  double *pdVar2;
  bool bVar3;
  double *pdVar4;
  Maybe_L_double_G_ *pMVar5;
  double dVar6;
  double dVar7;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar3
     )) {
    *param_2 = 0;
  }
  pdVar4 = (double *)Fleet__GetCurrentState((Fleet *)*param_2);
  pdVar2 = (double *)param_1[1];
  local_c = (pdVar2[1] - pdVar4[1]) * (pdVar2[1] - pdVar4[1]) +
            (*pdVar2 - *pdVar4) * (*pdVar2 - *pdVar4) +
            (pdVar2[2] - pdVar4[2]) * (pdVar2[2] - pdVar4[2]);
  pMVar5 = util__Sqrt(&local_1c,&local_c);
  if (pMVar5->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar6 = pMVar5->Data;
  dVar1 = *(double *)*param_1;
  dVar7 = dVar6;
  if ((*(char *)((double *)*param_1 + 1) != '\0') && (dVar7 = dVar1, dVar6 <= dVar1)) {
    dVar7 = dVar6;
  }
  dVar6 = /*3ff0000000000000*/1.0;
  if (/*3ff0000000000000*/1.0 <= dVar7) {
    dVar6 = dVar7;
  }
  return (float10)dVar6;
}


//==== 0000750910 00750910_GetDistanceToTarget_km ====
// decompiled by BatchDecomp @ 00750910 name=GetDistanceToTarget_km conv=__thiscall body=219

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall OrbitalInterception__GetDistanceToTarget_km(void)const  */

double __thiscall OrbitalInterception__GetDistanceToTarget_km(OrbitalInterception *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  Maybe_L_double_G_ *pMVar3;
  double local_7c;
  double local_74;
  double local_6c;
  double local_4c;
  double local_44;
  double local_3c;
  Maybe_L_double_G_ local_1c;
  double local_c;
  
  pRVar1 = (this->TargetFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->TargetFleet).Pointer = (Fleet *)0x0;
    }
  }
  Fleet__GetStateAt((this->TargetFleet).Pointer,
                    (double)CONCAT44(SUB84(this->TimeSinceJ2000_s,0),&local_7c));
  pRVar1 = (this->OurFleet).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  Fleet__GetStateAt((this->OurFleet).Pointer,
                    (double)CONCAT44(SUB84(this->TimeSinceJ2000_s,0),&local_4c));
  local_c = (local_44 - local_74) * (local_44 - local_74) +
            (local_4c - local_7c) * (local_4c - local_7c) +
            (local_3c - local_6c) * (local_3c - local_6c);
  pMVar3 = util__Sqrt(&local_1c,&local_c);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar3->Data;
}


//==== 0000750e50 00750e50_GetOurApoapsis_km ====
// decompiled by BatchDecomp @ 00750e50 name=GetOurApoapsis_km conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall OrbitalInterception__GetOurApoapsis_km(void)const  */

double __thiscall OrbitalInterception__GetOurApoapsis_km(OrbitalInterception *this)

{
  ReferenceController *this_00;
  Maybe_L_double_G_ MVar1;
  bool bVar2;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  uint in_stack_ffffff00;
  uint uVar4;
  undefined4 in_stack_ffffff04;
  undefined1 local_f4[28];
  void *local_d8;
  undefined **local_94;
  void *local_90;
  double local_c;
  
  uVar3 = 0;
  uVar4 = in_stack_ffffff00 & 0xffffff00;
  this_00 = (this->OurFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&MVar1.Data)->_4_4_ = uVar4;
  ((slice_view *)&MVar1.Data)->_0_4_ = uVar3;
  ((slice_view *)&MVar1)->_8_4_ = in_stack_ffffff04;
  ((slice_view *)&MVar1)->_12_4_ = unaff_ESI;
  Fleet__GetEstimatedOrbit((this->OurFleet).Pointer,(FixedOrbit *)local_f4,MVar1);
  local_c = FixedOrbit__GetApoapsis_km((FixedOrbit *)local_f4);
  local_94 = ((void *)(0x009194a4u));
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  local_90 = (void *)0x0;
  local_94 = ((void *)(0x00919488u));
  ((slice_view *)&local_f4)->_24_4_ = ((void *)(0x00919980u));
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_d8 = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_f4)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_f4)->_16_4_);
  }
  return local_c;
}


//==== 0000750f10 00750f10_GetOurPeriapsis_km ====
// decompiled by BatchDecomp @ 00750f10 name=GetOurPeriapsis_km conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall OrbitalInterception__GetOurPeriapsis_km(void)const  */

double __thiscall OrbitalInterception__GetOurPeriapsis_km(OrbitalInterception *this)

{
  ReferenceController *this_00;
  Maybe_L_double_G_ MVar1;
  bool bVar2;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  uint in_stack_ffffff00;
  uint uVar4;
  undefined4 in_stack_ffffff04;
  undefined1 local_f4[28];
  void *local_d8;
  undefined **local_94;
  void *local_90;
  double local_c;
  
  uVar3 = 0;
  uVar4 = in_stack_ffffff00 & 0xffffff00;
  this_00 = (this->OurFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&MVar1.Data)->_4_4_ = uVar4;
  ((slice_view *)&MVar1.Data)->_0_4_ = uVar3;
  ((slice_view *)&MVar1)->_8_4_ = in_stack_ffffff04;
  ((slice_view *)&MVar1)->_12_4_ = unaff_ESI;
  Fleet__GetEstimatedOrbit((this->OurFleet).Pointer,(FixedOrbit *)local_f4,MVar1);
  local_c = FixedOrbit__GetPeriapsis_km((FixedOrbit *)local_f4);
  local_94 = ((void *)(0x009194a4u));
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  local_90 = (void *)0x0;
  local_94 = ((void *)(0x00919488u));
  ((slice_view *)&local_f4)->_24_4_ = ((void *)(0x00919980u));
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_d8 = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_f4)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_f4)->_16_4_);
  }
  return local_c;
}


//==== 0000751330 00751330_GetTargetPeriapsis_km ====
// decompiled by BatchDecomp @ 00751330 name=GetTargetPeriapsis_km conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall OrbitalInterception__GetTargetPeriapsis_km(void)const  */

double __thiscall OrbitalInterception__GetTargetPeriapsis_km(OrbitalInterception *this)

{
  ReferenceController *this_00;
  Maybe_L_double_G_ MVar1;
  bool bVar2;
  undefined4 unaff_ESI;
  undefined4 uVar3;
  uint in_stack_ffffff00;
  uint uVar4;
  undefined4 in_stack_ffffff04;
  undefined1 local_f4[28];
  void *local_d8;
  undefined **local_94;
  void *local_90;
  double local_c;
  
  uVar3 = 0;
  uVar4 = in_stack_ffffff00 & 0xffffff00;
  this_00 = (this->TargetFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      (this->TargetFleet).Pointer = (Fleet *)0x0;
    }
  }
  ((slice_view *)&MVar1.Data)->_4_4_ = uVar4;
  ((slice_view *)&MVar1.Data)->_0_4_ = uVar3;
  ((slice_view *)&MVar1)->_8_4_ = in_stack_ffffff04;
  ((slice_view *)&MVar1)->_12_4_ = unaff_ESI;
  Fleet__GetEstimatedOrbit((this->TargetFleet).Pointer,(FixedOrbit *)local_f4,MVar1);
  local_c = FixedOrbit__GetPeriapsis_km((FixedOrbit *)local_f4);
  local_94 = ((void *)(0x009194a4u));
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
  }
  local_90 = (void *)0x0;
  local_94 = ((void *)(0x00919488u));
  ((slice_view *)&local_f4)->_24_4_ = ((void *)(0x00919980u));
  if (local_d8 != (void *)0x0) {
    operator_delete__(local_d8);
    local_d8 = (void *)0x0;
  }
  if ((ReferenceController *)((slice_view *)&local_f4)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_f4)->_16_4_);
  }
  return local_c;
}


//==== 0000770d40 00770d40_ActorDropdownAction ====
#undef t /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00770d40 name=ActorDropdownAction conv=__thiscall body=89

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ActorDropdownAction__ActorDropdownAction(void) */

ActorDropdownAction * __thiscall ActorDropdownAction__ActorDropdownAction(ActorDropdownAction *this)

{
  (this->Data).Object.Pointer = (Actor *)0x0;
  (this->Data).Object.Controller = (ReferenceController *)0x0;
  (this->Data).LPointID = 0;
  ItineraryNode__ItineraryNode(&(this->Data).Node.LastNode);
  ItineraryNode__ItineraryNode(&(this->Data).Node.NextNode);
  (this->Data).Node.t = 0.0;
  this->ItineraryAction = None;
  (this->AdditionalFleet).Pointer = (Fleet *)0x0;
  (this->AdditionalFleet).Controller = (ReferenceController *)0x0;
  return this;
}


//==== 0000783fc0 00783fc0_HasMission ====
// decompiled by BatchDecomp @ 00783fc0 name=HasMission conv=__thiscall body=149

/* WARNING: Removing unreachable block (ram,0x00784038) */
/* WARNING: Removing unreachable block (ram,0x0078403c) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall HUDItineraryInfoPanel__HasMission(void)const  */

bool __thiscall HUDItineraryInfoPanel__HasMission(HUDItineraryInfoPanel *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  ReferenceController *local_10;
  
  piVar2 = (int *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
  if (((*piVar2 != 0) && ((ReferenceController *)piVar2[1] != (ReferenceController *)0x0)) &&
     (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar2[1]), bVar1))
  {
    puVar3 = (undefined4 *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
    if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
       !bVar1)) {
      *puVar3 = 0;
    }
    bVar1 = Fleet__HasMission((Fleet *)*puVar3);
    if (bVar1) {
      bVar1 = true;
      goto LAB_00784031;
    }
  }
  bVar1 = false;
LAB_00784031:
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return bVar1;
}


//==== 00007844b0 007844b0_IsMissionButtonVisible ====
// decompiled by BatchDecomp @ 007844b0 name=IsMissionButtonVisible conv=__thiscall body=163

/* WARNING: Removing unreachable block (ram,0x00784534) */
/* WARNING: Removing unreachable block (ram,0x00784539) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall HUDItineraryInfoPanel__IsMissionButtonVisible(void)const  */

bool __thiscall HUDItineraryInfoPanel__IsMissionButtonVisible(HUDItineraryInfoPanel *this)

{
  Fleet *this_00;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  Faction *pFVar4;
  Faction *pFVar5;
  ReferenceController *local_10;
  
  piVar2 = (int *)GetSelectedFleet(this);
  if (*piVar2 != 0) {
    puVar3 = (undefined4 *)GetSelectedFleet(this);
    if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
       !bVar1)) {
      *puVar3 = 0;
    }
    this_00 = (Fleet *)*puVar3;
    pFVar4 = StrategicManager__GetPlayerAlliance((StrategicManager *)this->_pad_0x0_0);
    pFVar5 = Fleet__GetAlliance(this_00);
    if ((pFVar5 == pFVar4) &&
       (bVar1 = StrategicManager__IsPlayerAIControlled((StrategicManager *)this->_pad_0x0_0), !bVar1)
       ) {
      bVar1 = true;
      goto LAB_0078452d;
    }
  }
  bVar1 = false;
LAB_0078452d:
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return bVar1;
}


//==== 0000794410 00794410_GetTime_s ====
// decompiled by BatchDecomp @ 00794410 name=GetTime_s conv=__thiscall body=129

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall ItineraryMarker__GetTime_s(void)const  */

double __thiscall ItineraryMarker__GetTime_s(ItineraryMarker *this)

{
  ReferenceController *this_00;
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = GetParametricCoord(this);
  this_00 = (this->ParentItineraryUI).Controller;
  dVar2 = (/*3ff0000000000000*/1.0 - dVar2) * (this->NodeToMark).LastTimeSinceJ2000_s +
          (this->NodeToMark).TimeSinceJ2000_s * dVar2;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->ParentItineraryUI).Pointer = (ItineraryNodeUI *)0x0;
    }
  }
  dVar3 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)((this->ParentItineraryUI).Pointer)->_pad_0x0_0);
  if (dVar3 <= dVar2) {
    dVar3 = dVar2;
  }
  return dVar3;
}


//==== 000079bf70 0079bf70_GetArrowSize_km ====
// decompiled by BatchDecomp @ 0079bf70 name=GetArrowSize_km conv=__thiscall body=253

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall OrbitUI__GetArrowSize_km(void)const  */

double __thiscall OrbitUI__GetArrowSize_km(OrbitUI *this)

{
  CameraManager *this_00;
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  undefined1 local_114[48];
  double local_e4;
  void *local_b0;
  Maybe_L_double_G_ local_2c;
  double local_1c;
  double local_14;
  double local_c;
  
  GetOrbit(this,(FixedOrbit *)local_114);
  this_00 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
  dVar2 = CameraManager__GetCameraHeight(this_00);
  local_c = dVar2 * /*3fb999999999999a*/0.1;
  dVar2 = dVar2 * /*3f947ae147ae147b*/0.02;
  local_14 = dVar2;
  if (local_c < dVar2) {
    local_14 = local_c;
    local_c = dVar2;
  }
  local_1c = /*4000000000000000*/2.0;
  pMVar1 = util__Sqrt(&local_2c,&local_1c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = (local_e4 * /*3fa999999999999a*/0.05) / pMVar1->Data;
  if (dVar2 <= local_14) {
    dVar2 = local_14;
  }
  if (local_c <= dVar2) {
    dVar2 = local_c;
  }
  local_c = dVar2;
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  if ((void *)((slice_view *)&local_114)->_28_4_ != (void *)0x0) {
    operator_delete__((void *)((slice_view *)&local_114)->_28_4_);
  }
  if ((ReferenceController *)((slice_view *)&local_114)->_16_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)((slice_view *)&local_114)->_16_4_);
  }
  return local_c;
}


//==== 000079cd20 0079cd20_GetOrbiteePosition_km ====
// decompiled by BatchDecomp @ 0079cd20 name=GetOrbiteePosition_km conv=__thiscall body=236

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall OrbitUI__GetOrbiteePosition_km(void)const  */

Vec3_L_double_G_ * __thiscall
OrbitUI__GetOrbiteePosition_km(OrbitUI *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  ReferenceController *this_00;
  MatterCloudComponent *this_01;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  ScenarioEditor *pSVar6;
  FixedOrbit *pFVar7;
  Vec3_L_double_G_ *pVVar8;
  CelestialBody *pCVar9;
  undefined4 unaff_EDI;
  FixedOrbit local_20c;
  FixedOrbit local_124;
  Vec3_L_double_G_ local_3c;
  Vec3_L_double_G_ local_24;
  double local_c;
  
  bVar5 = IsInStrategicGame(this);
  if (bVar5) {
    bVar5 = IsInStrategicGame(this);
    if (bVar5) {
      local_c = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
    }
    else {
      pSVar6 = (ScenarioEditor *)
               MatterCloudComponent__GetParticlesPerPacket((MatterCloudComponent *)this->_pad_0x0_0);
      local_c = ScenarioEditor__GetStartTime_s(pSVar6);
    }
    pFVar7 = GetOrbit(this,&local_20c);
    this_00 = (ReferenceController *)(pFVar7->Elements)._pad_0x0_0;
    if (this_00 != (ReferenceController *)0x0) {
      bVar5 = util__ReferenceController__IsDataStillValid(this_00);
      if (!bVar5) {
        (pFVar7->OrbitedBody).Controller = (ReferenceController *)0x0;
      }
    }
    pVVar8 = CelestialObject__GetPositionAt_km((CelestialObject *)(pFVar7->OrbitedBody).Controller,&local_24,
                        (double)CONCAT44(unaff_EDI,(int)((ulonglong)local_c >> 0x20)));
    bVar4 = true;
    bVar5 = false;
  }
  else {
    this_01 = (MatterCloudComponent *)this->_pad_0x0_0;
    pFVar7 = GetOrbit(this,&local_124);
    pCVar9 = FixedOrbit__GetOrbitedBody(pFVar7);
    pVVar8 = &local_3c;
    pSVar6 = (ScenarioEditor *)MatterCloudComponent__GetParticlesPerPacket(this_01);
    pVVar8 = ScenarioEditor__GetBodyPosition_km(pSVar6,pVVar8,pCVar9);
    bVar4 = false;
    bVar5 = true;
  }
  uVar1 = *(undefined4 *)((int)&pVVar8->X + 4);
  uVar2 = *(undefined4 *)&pVVar8->Y;
  uVar3 = *(undefined4 *)((int)&pVVar8->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&pVVar8->X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = pVVar8->Z;
  if (bVar5) {
    FixedOrbit_FixedOrbit__o2(&local_124);
  }
  if (bVar4) {
    FixedOrbit_FixedOrbit__o2(&local_20c);
  }
  return __return_storage_ptr__;
}


//==== 000079d030 0079d030_GetPositionShifter_km ====
// decompiled by BatchDecomp @ 0079d030 name=GetPositionShifter_km conv=__thiscall body=92

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct Vec3_L_double_G_ __thiscall OrbitUI__GetPositionShifter_km(struct
   Vec3_L_double_G_,double)const  */

Vec3_L_double_G_ * __thiscall
OrbitUI__GetPositionShifter_km(OrbitUI *this,Vec3_L_double_G_ *__return_storage_ptr__,Vec3_L_double_G_ param_1,double param_2)

{
  bool bVar1;
  undefined4 unaff_EDI;
  undefined4 in_stack_00000008;
  
  bVar1 = IsInStrategicGame(this);
  if (bVar1) {
    StrategicManager__GetReferenceShiftedPosition_km((StrategicManager *)this->_pad_0x0_0,__return_storage_ptr__,param_1,
               (double)CONCAT44(unaff_EDI,((slice_view *)&param_2)->_0_4_));
    return __return_storage_ptr__;
  }
  *(undefined4 *)&__return_storage_ptr__->X = in_stack_00000008;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = ((slice_view *)&param_1.X)->_0_4_;
  *(undefined4 *)&__return_storage_ptr__->Y = ((slice_view *)&param_1.X)->_4_4_;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = ((slice_view *)&param_1.Y)->_0_4_;
  __return_storage_ptr__->Z = (double)((slice_view *)&param_1)->_12_8_;
  return __return_storage_ptr__;
}


//==== 00007a8a50 007a8a50_Render3DTransparent ====
// decompiled by BatchDecomp @ 007a8a50 name=Render3DTransparent conv=__thiscall body=240

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall HUDStrategic__Render3DTransparent(void)const  */

void __thiscall HUDStrategic__Render3DTransparent(HUDStrategic *this)

{
  CameraManager *pCVar1;
  double dVar2;
  uint uVar3;
  Vec3_L_double_G_ *__return_storage_ptr__;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  char local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  Vec3_L_double_G_ local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  GetRulerPointsAndVelocity_km(this);
  if (local_60 != '\0') {
    uVar3 = 0x7a8a8b;
    glColor(LightBlue,1.0);
    __return_storage_ptr__ = &local_20;
    pCVar1 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
    CameraManager__GetCameraPos(pCVar1,__return_storage_ptr__);
    pCVar1 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
    dVar2 = CameraManager__GetCameraHeight(pCVar1);
    local_48 = (undefined4)local_88;
    uStack_44 = *(undefined4 *)((char *)&local_88 + 4);
    uStack_30 = (undefined4)local_70;
    uStack_2c = *(undefined4 *)((char *)&local_70 + 4);
    DrawAntialiasedLine(local_98,uStack_94,uStack_90,uStack_8c,local_48,uStack_44,local_80,uStack_7c
                        ,uStack_78,uStack_74,uStack_30,uStack_2c,dVar2 * /*3f60624dd2f1a9fc*/0.002,
                        ((slice_view *)&local_20.X)->_0_4_,((slice_view *)&local_20.X)->_4_4_,((slice_view *)&local_20.Y)->_0_4_,((slice_view *)&local_20.Y)->_4_4_,
                        local_20.Z,0,0,0,0,uVar3 & 0xffffff00);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007a9c60 007a9c60_GetLocationAt_km ====
// decompiled by BatchDecomp @ 007a9c60 name=GetLocationAt_km conv=__thiscall body=139

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: virtual struct Vec3_L_double_G_ __thiscall
   CelestialObjectUIButton__GetLocationAt_km(double)const  */

Vec3_L_double_G_ * __thiscall
CelestialObjectUIButton__GetLocationAt_km(CelestialObjectUIButton *this,Vec3_L_double_G_ *__return_storage_ptr__,double param_1)

{
  ReferenceController *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  Vec3_L_double_G_ *pVVar6;
  undefined4 unaff_ESI;
  Vec3_L_double_G_ local_34;
  Vec3_L_double_G_ local_1c;
  
  if (((this->Object).Pointer != (CelestialObject *)0x0) &&
     (pRVar1 = (this->Object).Controller, pRVar1 != (ReferenceController *)0x0)) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (bVar5) {
      pRVar1 = (this->Object).Controller;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar5) {
          (this->Object).Pointer = (CelestialObject *)0x0;
        }
      }
      pVVar6 = CelestialObject__GetPositionAt_km((this->Object).Pointer,&local_34,(double)CONCAT44(unaff_ESI,((slice_view *)&param_1)->_0_4_)
                         );
      goto LAB_007a9cd1;
    }
  }
  pVVar6 = &local_1c;
  ((slice_view *)&local_1c.X)->_0_4_ = 0;
  ((slice_view *)&local_1c.X)->_4_4_ = 0;
  ((slice_view *)&local_1c.Y)->_0_4_ = 0;
  ((slice_view *)&local_1c.Y)->_4_4_ = 0;
  local_1c.Z = 0.0;
LAB_007a9cd1:
  uVar2 = *(undefined4 *)((int)&pVVar6->X + 4);
  uVar3 = *(undefined4 *)&pVVar6->Y;
  uVar4 = *(undefined4 *)((int)&pVVar6->Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&pVVar6->X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar2;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar4;
  __return_storage_ptr__->Z = pVVar6->Z;
  return __return_storage_ptr__;
}


//==== 00007a9cf0 007a9cf0_GetLocationAt_km ====
// decompiled by BatchDecomp @ 007a9cf0 name=GetLocationAt_km conv=__thiscall body=94

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: virtual struct Vec3_L_double_G_ __thiscall
   FleetUIButton__GetLocationAt_km(double)const  */

Vec3_L_double_G_ * __thiscall
FleetUIButton__GetLocationAt_km(FleetUIButton *this,Vec3_L_double_G_ *__return_storage_ptr__,double param_1)

{
  ReferenceController *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  undefined4 in_stack_00000008;
  undefined1 local_34[48];
  
  this_00 = (this->TargetFleet).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar4) {
      (this->TargetFleet).Pointer = (Fleet *)0x0;
    }
  }
  puVar5 = (undefined4 *)
           Fleet__GetStateAt((this->TargetFleet).Pointer,
                             (double)CONCAT44(in_stack_00000008,local_34));
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined4 *)&__return_storage_ptr__->X = *puVar5;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  __return_storage_ptr__->Z = *(double *)(puVar5 + 4);
  return __return_storage_ptr__;
}


//==== 00007a9d50 007a9d50_GetLocationAt_km ====
// decompiled by BatchDecomp @ 007a9d50 name=GetLocationAt_km conv=__thiscall body=163

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: virtual struct Vec3_L_double_G_ __thiscall
   LagrangePointUIButton__GetLocationAt_km(double)const  */

Vec3_L_double_G_ * __thiscall
LagrangePointUIButton__GetLocationAt_km(LagrangePointUIButton *this,Vec3_L_double_G_ *__return_storage_ptr__,double param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  undefined4 in_stack_00000008;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = (this->LPoint).Object.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->LPoint).Object.Pointer = (CelestialObject *)0x0;
    }
  }
  CelestialObject__GetLagrangePoint((this->LPoint).Object.Pointer,(double)CONCAT44(in_stack_00000008,&local_40),
             ((slice_view *)&param_1)->_0_4_);
  if (local_10 == '\0') {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_48 = 0.0;
  }
  else {
    local_58 = local_40;
    uStack_54 = uStack_3c;
    uStack_50 = uStack_38;
    uStack_4c = uStack_34;
    local_48 = local_30;
  }
  *(undefined4 *)&__return_storage_ptr__->X = local_58;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uStack_54;
  *(undefined4 *)&__return_storage_ptr__->Y = uStack_50;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uStack_4c;
  __return_storage_ptr__->Z = local_48;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}


//==== 00007aa1c0 007aa1c0_GetObjectA ====
// decompiled by BatchDecomp @ 007aa1c0 name=GetObjectA conv=__stdcall body=107

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct WorldObject __thiscall CelestialObjectUIButton__GetObjectA(void)const  */

int CelestialObjectUIButton__GetObjectA(HANDLE h,int c,LPVOID pv)

{
  undefined4 uVar1;
  ReferenceController *this;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x1e0);
  this = *(ReferenceController **)(in_ECX + 0x1e4);
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
  }
  *(undefined4 *)h = uVar1;
  *(ReferenceController **)((int)h + 4) = this;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
  }
  *(undefined4 *)((int)h + 8) = 0;
  ItineraryNode__ItineraryNode((ItineraryNode *)((int)h + 0x10));
  ItineraryNode__ItineraryNode((ItineraryNode *)((int)h + 0x160));
  *(undefined8 *)((int)h + 0x2b0) = 0;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  return (int)h;
}


//==== 00007aa230 007aa230_GetObjectA ====
// decompiled by BatchDecomp @ 007aa230 name=GetObjectA conv=__stdcall body=120

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual struct WorldObject __thiscall LagrangePointUIButton__GetObjectA(void)const  */

int LagrangePointUIButton__GetObjectA(HANDLE h,int c,LPVOID pv)

{
  ReferenceController *this;
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  this = *(ReferenceController **)(in_ECX + 0x1e4);
  uVar1 = *(undefined4 *)(in_ECX + 0x1e0);
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x1e8);
  *(undefined4 *)h = uVar1;
  *(ReferenceController **)((int)h + 4) = this;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
  }
  *(undefined4 *)((int)h + 8) = uVar2;
  ItineraryNode__ItineraryNode((ItineraryNode *)((int)h + 0x10));
  ItineraryNode__ItineraryNode((ItineraryNode *)((int)h + 0x160));
  *(undefined8 *)((int)h + 0x2b0) = 0;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  return (int)h;
}


//==== 00007aaa30 007aaa30_GetUISize ====
// decompiled by BatchDecomp @ 007aaa30 name=GetUISize conv=__thiscall body=119

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall FleetUIButton__GetUISize(void)const  */

double __thiscall FleetUIButton__GetUISize(FleetUIButton *this)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = GetDepthCue_Percent(this);
  this_00 = (this->TargetFleet).Controller;
  dVar3 = dVar4 * /*3fe89d89d89d89d8*/0.7692307692307692;
  dVar4 = (/*3ff0000000000000*/1.0 - dVar4) * /*3ff4cccccccccccd*/1.3;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->TargetFleet).Pointer = (Fleet *)0x0;
    }
  }
  iVar2 = Fleet__GetUIIconSize();
  return (double)iVar2 * (dVar4 + dVar3);
}


//==== 00007c2260 007c2260_CanReceiveOrders ====
// decompiled by BatchDecomp @ 007c2260 name=CanReceiveOrders conv=__thiscall body=190

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall ControllableComponent__CanReceiveOrders(void)const  */

bool __thiscall ControllableComponent__CanReceiveOrders(ControllableComponent *this)

{
  Body *this_00;
  ReferenceController *this_01;
  SpacecraftComponent *this_02;
  bool bVar1;
  
  if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
    if (!bVar1) {
      this->_pad_0x0_0 = 0;
    }
  }
  if (*(int *)(this->_pad_0x0_0 + 0x1e0) != 0) {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar1) {
        this->_pad_0x0_0 = 0;
      }
    }
    this_00 = (Body *)this->_pad_0x0_0;
    Body__GetSpacecraftComponent_Memoize(this_00);
    if ((this_00->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    this_01 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Controller;
    if (this_01 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(this_01);
      if (!bVar1) {
        (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
      }
    }
    this_02 = (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
    SpacecraftComponent__HasFuelForTurningLeft_Memoize(this_02);
    if ((this_02->HasFuelForTurningLeft_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((this_02->HasFuelForTurningLeft_MemoizedValue).Data != false) {
      return true;
    }
  }
  return false;
}


//==== 00007c5910 007c5910_GetFadeoutPercent ====
// decompiled by BatchDecomp @ 007c5910 name=GetFadeoutPercent conv=__thiscall body=96

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall UntrackComponent__GetFadeoutPercent(void)const  */

double __thiscall UntrackComponent__GetFadeoutPercent(UntrackComponent *this)

{
  int iVar1;
  
  if ((this->Countdown_s).IsValidData != false) {
    iVar1 = rand();
    return (this->Countdown_s).Data /
           ((double)iVar1 * /*3f00000000000000*/3.0517578125e-05 * /*3fefae147ae147ae*/0.99 +
           /*3f847ae147ae147b*/0.01);
  }
  return /*3ff0000000000000*/1.0;
}


//==== 00007c5a90 007c5a90_GetGasEnergy_J ====
// decompiled by BatchDecomp @ 007c5a90 name=GetGasEnergy_J conv=__thiscall body=256

/* public: double __thiscall ExplosionComponent__GetGasEnergy_J(void)const  */

double __thiscall ExplosionComponent__GetGasEnergy_J(ExplosionComponent *this)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar1 = (**(code **)(*(int *)&this->GasComposition + 0xc))();
  if (((0 < iVar1) && (0.0 < this->GasMass_kg)) && (0.0 < this->GasTemperature_K)) {
    local_c = 0;
    iVar1 = (**(code **)(*(int *)&this->GasComposition + 0xc))();
    if (iVar1 <= local_c) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return (double)extraout_ST0_00;
    }
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->GasComposition)(&local_c);
      Material__GetTotalGasEnergy_J((Material *)*puVar2,this->GasTemperature_K,
                 *(double *)(puVar2 + 2) * this->GasMass_kg);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->GasComposition + 0xc))();
    } while (local_c < iVar1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (double)extraout_ST0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_01;
}


//==== 00007c5ba0 007c5ba0_GetGasVelocity_km__s ====
// decompiled by BatchDecomp @ 007c5ba0 name=GetGasVelocity_km__s conv=__thiscall body=136

/* public: double __thiscall ExplosionComponent__GetGasVelocity_km__s(void)const  */

double __thiscall ExplosionComponent__GetGasVelocity_km__s(ExplosionComponent *this)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar1 = (**(code **)(*(int *)&this->GasComposition + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)*(int *)&this->GasComposition)(&local_c);
      Material__GetGasExpansionVelocity_km__s((Material *)*puVar2,this->GasTemperature_K);
      local_c = local_c + 1;
      iVar1 = (**(code **)(*(int *)&this->GasComposition + 0xc))();
    } while (local_c < iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007df500 007df500_FUN_007df500 ====
void __fastcall FUN_007df500(undefined4 *param_1);

// decompiled by BatchDecomp @ 007df500 name=FUN_007df500 conv=unknown body=118

void __fastcall FUN_007df500(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  *param_1 = &PTR_operator___0093d26c;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 4 + iVar3 * 0x18;
      do {
        puVar2 = (undefined4 *)(iVar4 + -0x18);
        iVar4 = iVar4 + -0x18;
        iVar3 = iVar3 + -1;
        if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
        }
      } while (iVar3 != 0);
      iVar4 = *piVar1;
    }
    operator_delete__(piVar1,iVar4 * 0x18 + 4);
  }
  *param_1 = &PTR_purecall_0093d250;
  param_1[1] = 0;
  return;
}


//==== 00007e3c60 007e3c60_FUN_007e3c60 ====
void __thiscall FUN_007e3c60(int param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 007e3c60 name=FUN_007e3c60 conv=unknown body=130

void __thiscall FUN_007e3c60(int param_1,undefined4 *param_2)

{
  ReferenceController *this;
  ReferenceController *this_00;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 != puVar1 + *(int *)(param_1 + 8) * 6) {
    do {
      this = (ReferenceController *)puVar1[1];
      *puVar1 = *param_2;
      this_00 = (ReferenceController *)param_2[1];
      puVar1[1] = this_00;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this);
      }
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_2 + 4);
      *(undefined1 *)((int)puVar1 + 0x11) = *(undefined1 *)((int)param_2 + 0x11);
      *(undefined1 *)((int)puVar1 + 0x12) = *(undefined1 *)((int)param_2 + 0x12);
      puVar1 = puVar1 + 6;
    } while (puVar1 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
  }
  return;
}


//==== 00007e3cf0 007e3cf0_FUN_007e3cf0 ====
void __thiscall FUN_007e3cf0(int param_1,int *param_2);

// decompiled by BatchDecomp @ 007e3cf0 name=FUN_007e3cf0 conv=unknown body=200

void __thiscall FUN_007e3cf0(int param_1,int *param_2)

{
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_2;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
                    "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_2;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(param_1 + 8)) && (iVar2 = *(int *)(param_1 + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x18),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(param_1 + 8) * 0x18))) {
    do {
      this = (ReferenceController *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this);
      }
      *(undefined8 *)(puVar4 + 2) = 0;
      *(undefined2 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 0x12) = 0;
      puVar4 = puVar4 + 6;
    } while (puVar4 != (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
  }
  *(int *)(param_1 + 8) = iVar3;
  return;
}


//==== 00007eff40 007eff40_FUN_007eff40 ====
float10 __thiscall FUN_007eff40(undefined4 *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 007eff40 name=FUN_007eff40 conv=unknown body=181

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float10 __thiscall FUN_007eff40(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  Body *this;
  bool bVar2;
  double *pdVar3;
  undefined1 local_14[16];
  
  piVar1 = (int *)*param_1;
  if ((ReferenceController *)piVar1[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar1[1]);
    if (!bVar2) {
      *piVar1 = 0;
    }
  }
  piVar1 = *(int **)(*piVar1 + 0x38);
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  this = (Body *)*param_2;
  Body__GetCrossSection_m2_Memoize(this);
  if ((this->GetCrossSection_m2_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pdVar3 = (double *)
           (**(code **)(*piVar1 + 0xc4))(local_14,(this->GetCrossSection_m2_MemoizedValue).Data);
  if (*(char *)(pdVar3 + 1) != '\0') {
    return (float10)*pdVar3;
  }
  return (float10)0.0;
}


//==== 00007f0520 007f0520_DoesEnemyOnlyHaveMissiles ====
// decompiled by BatchDecomp @ 007f0520 name=DoesEnemyOnlyHaveMissiles conv=__thiscall body=195

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall TacticalAI__DoesEnemyOnlyHaveMissiles(void)const  */

bool __thiscall TacticalAI__DoesEnemyOnlyHaveMissiles(TacticalAI *this)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  CraftBlueprint *this_00;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)GetThreateningEnemyShips(this);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar1)) {
        *puVar5 = 0;
      }
      this_00 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar5);
      CraftBlueprint__IsAMissile_Memoize(this_00);
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 3) == '\0'
         ) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 2) == '\0'
         ) {
        uVar2 = 0;
        goto LAB_007f05c4;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 1;
LAB_007f05c4:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 00007f1530 007f1530_IsActive ====
// decompiled by BatchDecomp @ 007f1530 name=IsActive conv=__thiscall body=205

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall TacticalAI__IsActive(void)const  */

bool __thiscall TacticalAI__IsActive(TacticalAI *this)

{
  TacticalManager *this_00;
  MilitaryDoctrine *pMVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  CombatProtocol local_110;
  uint local_8;
  
  local_8 = 0;
  this_00 = this->Parent;
  if (this->ControlsAllies == false) {
    TacticalManager__GetStrategicGame_Memoize(this_00);
    if (*(char *)&(this_00->Effects).Controller == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pMVar1 = StrategicManager__GetAIDoctrine((StrategicManager *)(this_00->Effects).Pointer);
  }
  else {
    TacticalManager__GetStrategicGame_Memoize(this_00);
    if (*(char *)&(this_00->Effects).Controller == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pMVar1 = StrategicManager__GetAlliedAIDoctrine((StrategicManager *)(this_00->Effects).Pointer);
  }
  uVar4 = local_8;
  if (pMVar1 != (MilitaryDoctrine *)0x0) {
    iVar2 = GetCombatDoctrine(this);
    uVar4 = 1;
    if (*(char *)(iVar2 + 0x100) != '\0') {
      bVar3 = true;
      goto LAB_007f15e4;
    }
  }
  bVar3 = false;
LAB_007f15e4:
  if ((uVar4 & 1) != 0) {
    CombatProtocol___CombatProtocol(&local_110);
  }
  return bVar3;
}


//==== 00007f7710 007f7710_OptimizationStructures ====
// decompiled by BatchDecomp @ 007f7710 name=OptimizationStructures conv=__thiscall body=248

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall TacticalManager__OptimizationStructures__OptimizationStructures(void) */

OptimizationStructures * __thiscall
TacticalManager__OptimizationStructures__OptimizationStructures(OptimizationStructures *this)

{
  (this->DebrisComponents)._pad_0x0_0 =
       (int)((void *)(0x0091e0b8u));
  (this->DebrisComponents).Data = (WeakPtr_L_DebrisComponent_G_ *)0x0;
  (this->DebrisComponents).Size = 0;
  (this->DebrisComponents).Capacity = 0;
  (this->SpacecraftComponents)._pad_0x0_0 =
       (int)((void *)(0x0091db14u));
  (this->SpacecraftComponents).Data = (WeakPtr_L_SpacecraftComponent_G_ *)0x0;
  (this->SpacecraftComponents).Size = 0;
  (this->SpacecraftComponents).Capacity = 0;
  (this->EnemySpacecraftComponents)._pad_0x0_0 =
       (int)((void *)(0x0091db14u));
  (this->EnemySpacecraftComponents).Data = (WeakPtr_L_SpacecraftComponent_G_ *)0x0;
  (this->EnemySpacecraftComponents).Size = 0;
  (this->EnemySpacecraftComponents).Capacity = 0;
  (this->AlliedSpacecraftComponents)._pad_0x0_0 =
       (int)((void *)(0x0091db14u));
  (this->AlliedSpacecraftComponents).Data = (WeakPtr_L_SpacecraftComponent_G_ *)0x0;
  (this->AlliedSpacecraftComponents).Size = 0;
  (this->AlliedSpacecraftComponents).Capacity = 0;
  (this->NonEnemySpacecraftComponents)._pad_0x0_0 =
       (int)((void *)(0x0091db14u));
  (this->NonEnemySpacecraftComponents).Data = (WeakPtr_L_SpacecraftComponent_G_ *)0x0;
  (this->NonEnemySpacecraftComponents).Size = 0;
  (this->NonEnemySpacecraftComponents).Capacity = 0;
  (this->NonAlliedSpacecraftComponents)._pad_0x0_0 =
       (int)((void *)(0x0091db14u));
  (this->NonAlliedSpacecraftComponents).Data = (WeakPtr_L_SpacecraftComponent_G_ *)0x0;
  (this->NonAlliedSpacecraftComponents).Size = 0;
  (this->NonAlliedSpacecraftComponents).Capacity = 0;
  (this->CapitalShipComponents)._pad_0x0_0 =
       (int)((void *)(0x0091f328u));
  (this->CapitalShipComponents).Data = (WeakPtr_L_CapitalShipComponent_G_ *)0x0;
  (this->CapitalShipComponents).Size = 0;
  (this->CapitalShipComponents).Capacity = 0;
  *(undefined4 *)&(this->BattleCenter_km).X = 0;
  *(undefined4 *)((int)&(this->BattleCenter_km).X + 4) = 0;
  *(undefined4 *)&(this->BattleCenter_km).Y = 0;
  *(undefined4 *)((int)&(this->BattleCenter_km).Y + 4) = 0;
  *(undefined4 *)&(this->BattleCenter_km).Z = 0;
  *(undefined4 *)((int)&(this->BattleCenter_km).Z + 4) = 0;
  *(undefined4 *)&(this->BattleVelocity_km__s).X = 0;
  *(undefined4 *)((int)&(this->BattleVelocity_km__s).X + 4) = 0;
  *(undefined4 *)&(this->BattleVelocity_km__s).Y = 0;
  *(undefined4 *)((int)&(this->BattleVelocity_km__s).Y + 4) = 0;
  *(undefined4 *)&(this->BattleVelocity_km__s).Z = 0;
  *(undefined4 *)((int)&(this->BattleVelocity_km__s).Z + 4) = 0;
  *(undefined4 *)&this->BattleRadius_km = 0;
  *(undefined4 *)((int)&this->BattleRadius_km + 4) = 0;
  *(undefined4 *)&(this->CollisionBounds_km).Lower.X = 0;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Lower.X + 4) = 0;
  *(undefined4 *)&(this->CollisionBounds_km).Lower.Y = 0;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Lower.Y + 4) = 0;
  *(undefined4 *)&(this->CollisionBounds_km).Lower.Z = 0;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Lower.Z + 4) = 0;
  *(undefined4 *)&(this->CollisionBounds_km).Upper.X = 0;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Upper.X + 4) = 0;
  *(undefined4 *)&(this->CollisionBounds_km).Upper.Y = 0;
  *(undefined4 *)((int)&(this->CollisionBounds_km).Upper.Y + 4) = 0;
  (this->CollisionBounds_km).Upper.Z = 0.0;
  return this;
}


//==== 0000807a00 00807a00_GetIconDepth ====
// decompiled by BatchDecomp @ 00807a00 name=GetIconDepth conv=__thiscall body=123

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: double __thiscall SpacecraftButton__GetIconDepth(void)const  */

double __thiscall SpacecraftButton__GetIconDepth(SpacecraftButton *this)

{
  ReferenceController *this_00;
  SpacecraftComponent *pSVar1;
  Vec3_L_double_G_ VVar2;
  bool bVar3;
  CameraManager *this_01;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vec3_L_double_G_ local_1c;
  
  this_00 = (this->Spacecraft).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar3) {
      (this->Spacecraft).Pointer = (SpacecraftComponent *)0x0;
    }
  }
  pSVar1 = (this->Spacecraft).Pointer;
  if ((ReferenceController *)pSVar1->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar1->_pad_0x0_0);
    if (!bVar3) {
      pSVar1->_pad_0x0_0 = 0;
    }
  }
  Body__GetPosition_km((Body *)pSVar1->_pad_0x0_0,&local_1c);
  uVar5 = *(undefined4 *)&local_1c.Z;
  uVar6 = (undefined4)((ulonglong)local_1c.Z >> 0x20);
  this_01 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
  ((slice_view *)&VVar2.X)->_4_4_ = ((slice_view *)&local_1c.X)->_4_4_;
  ((slice_view *)&VVar2.X)->_0_4_ = ((slice_view *)&local_1c.X)->_0_4_;
  ((slice_view *)&VVar2.Y)->_0_4_ = ((slice_view *)&local_1c.Y)->_0_4_;
  ((slice_view *)&VVar2.Y)->_4_4_ = ((slice_view *)&local_1c.Y)->_4_4_;
  ((slice_view *)&VVar2.Z)->_0_4_ = uVar5;
  ((slice_view *)&VVar2.Z)->_4_4_ = uVar6;
  dVar4 = CameraManager__GetScreenDepth(this_01,VVar2);
  return dVar4;
}


//==== 0000807ed0 00807ed0_IsCraftOnScreen ====
// decompiled by BatchDecomp @ 00807ed0 name=IsCraftOnScreen conv=__thiscall body=132

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall SpacecraftButton__IsCraftOnScreen(void)const  */

bool __thiscall SpacecraftButton__IsCraftOnScreen(SpacecraftButton *this)

{
  ReferenceController *this_00;
  SpacecraftComponent *pSVar1;
  Vec3_L_double_G_ VVar2;
  bool bVar3;
  CameraManager *this_01;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 local_34[24];
  Vec3_L_double_G_ local_1c;
  
  this_00 = (this->Spacecraft).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar3) {
      (this->Spacecraft).Pointer = (SpacecraftComponent *)0x0;
    }
  }
  pSVar1 = (this->Spacecraft).Pointer;
  if ((ReferenceController *)pSVar1->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar1->_pad_0x0_0);
    if (!bVar3) {
      pSVar1->_pad_0x0_0 = 0;
    }
  }
  Body__GetPosition_km((Body *)pSVar1->_pad_0x0_0,&local_1c);
  uVar6 = *(undefined4 *)&local_1c.Z;
  uVar7 = (undefined1)((ulonglong)local_1c.Z >> 0x20);
  puVar5 = local_34;
  this_01 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
  ((slice_view *)&VVar2.X)->_4_4_ = ((slice_view *)&local_1c.X)->_0_4_;
  ((slice_view *)&VVar2.X)->_0_4_ = puVar5;
  ((slice_view *)&VVar2.Y)->_0_4_ = ((slice_view *)&local_1c.X)->_4_4_;
  ((slice_view *)&VVar2.Y)->_4_4_ = ((slice_view *)&local_1c.Y)->_0_4_;
  ((slice_view *)&VVar2.Z)->_0_4_ = ((slice_view *)&local_1c.Y)->_4_4_;
  ((slice_view *)&VVar2.Z)->_4_4_ = uVar6;
  iVar4 = CameraManager__GetScreenPosition(this_01,VVar2,(bool)uVar7);
  return (bool)*(undefined1 *)(iVar4 + 0x10);
}


//==== 0000807f60 00807f60_IsNotSolelySelected ====
// decompiled by BatchDecomp @ 00807f60 name=IsNotSolelySelected conv=__thiscall body=146

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall SpacecraftButton__IsNotSolelySelected(void)const  */

bool __thiscall SpacecraftButton__IsNotSolelySelected(SpacecraftButton *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  undefined4 local_c;
  undefined1 local_5;
  
  local_c = 0;
  iVar2 = TacticalManager__GetSelectedSpacecrafts((TacticalManager *)this->_pad_0x0_0);
  piVar4 = *(int **)(iVar2 + 4);
  piVar3 = piVar4 + *(int *)(iVar2 + 8) * 2;
  if (piVar4 != piVar3) {
    do {
      if (((this->Spacecraft).Controller == (ReferenceController *)piVar4[1]) &&
         ((this->Spacecraft).Pointer == (SpacecraftComponent *)*piVar4)) {
        piVar3 = (int *)TacticalManager__GetSelectedSpacecrafts((TacticalManager *)this->_pad_0x0_0);
        bVar1 = true;
        iVar2 = (**(code **)(*piVar3 + 0xc))();
        if (iVar2 != 1) goto LAB_00807fac;
        local_5 = 0;
        goto LAB_00807fb0;
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar3);
  }
  bVar1 = false;
LAB_00807fac:
  local_5 = 1;
LAB_00807fb0:
  if (bVar1) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  return (bool)local_5;
}


//==== 00008085d0 008085d0_SetInitialPlane ====
extern undefined4 FUN_004d6990(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_008066f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_00806ea0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 008085d0 name=SetInitialPlane conv=__thiscall body=171

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall OrderModeOverlay__SetInitialPlane(void) */

void __thiscall OrderModeOverlay__SetInitialPlane(OrderModeOverlay *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 *puVar5;
  Vec3_L_double_G_ *pVVar6;
  Vec3_L_double_G_ local_58;
  undefined1 local_40[4];
  ReferenceController *local_3c;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_20[16];
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  local_10 = local_10 & 0xffffff00;
  local_c = local_c & 0xffffff00;
  FUN_004d6990(local_20,&this->ShipsGetter,local_8);
  FUN_00806ea0(local_30,local_20,local_c);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_20);
  puVar5 = (undefined4 *)FUN_008066f0(local_40,local_30,local_10);
  if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
    if (!bVar4) {
      *puVar5 = 0;
    }
  }
  pVVar6 = Body__GetForwardVector((Body *)*puVar5,&local_58);
  uVar1 = *(undefined4 *)((int)&pVVar6->X + 4);
  uVar2 = *(undefined4 *)&pVVar6->Y;
  uVar3 = *(undefined4 *)((int)&pVVar6->Y + 4);
  *(undefined4 *)&(this->InitialPlane).X = *(undefined4 *)&pVVar6->X;
  *(undefined4 *)((int)&(this->InitialPlane).X + 4) = uVar1;
  *(undefined4 *)&(this->InitialPlane).Y = uVar2;
  *(undefined4 *)((int)&(this->InitialPlane).Y + 4) = uVar3;
  (this->InitialPlane).Z = pVVar6->Z;
  if (local_3c != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_3c);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
  return;
}


//==== 000080b630 0080b630_GetRange_km ====
// decompiled by BatchDecomp @ 0080b630 name=GetRange_km conv=__thiscall body=226

/* public: double __thiscall MinimapRangeWidget__GetRange_km(void)const  */

double __thiscall MinimapRangeWidget__GetRange_km(MinimapRangeWidget *this)

{
  bool bVar1;
  undefined8 *puVar2;
  int *piVar3;
  ReferenceController *this_00;
  float10 extraout_ST0;
  undefined1 local_30[16];
  undefined1 local_20[8];
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  GetAgainstCraft(this);
  if ((int *)local_10 == (int *)0x0) {
LAB_0080b6ec:
  }
  else if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_10)->_4_4_);
    if (!bVar1) goto LAB_0080b6ec;
    if (((slice_view *)&local_10)->_4_4_ == (ReferenceController *)0x0) {
      piVar3 = (int *)local_10;
    }
    else {
      bVar1 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_10)->_4_4_);
      piVar3 = (int *)local_10;
      if (!bVar1) {
        piVar3 = (int *)0x0;
      }
      local_10 = CONCAT44(((slice_view *)&local_10)->_4_4_,piVar3);
    }
    puVar2 = (undefined8 *)(**(code **)(*piVar3 + 0x68))(local_20);
    if (*(char *)(puVar2 + 1) == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar2 = (undefined8 *)(**(code **)(*(int *)this->WeaponType + 0xc4))(local_30,*puVar2);
    if (*(char *)(puVar2 + 1) != '\0') {
      local_18 = *puVar2;
      this_00 = ((slice_view *)&local_10)->_4_4_;
      goto LAB_0080b6f2;
    }
  }
  local_18 = 0;
  this_00 = ((slice_view *)&local_10)->_4_4_;
LAB_0080b6f2:
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00008141e0 008141e0_AreActionsEnabled ====
// decompiled by BatchDecomp @ 008141e0 name=AreActionsEnabled conv=__thiscall body=147

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__AreActionsEnabled(void)const  */

bool __thiscall ModuleUI__AreActionsEnabled(ModuleUI *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)GetCompartments(this);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
      if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
        if (!bVar1) {
          *puVar6 = 0;
        }
      }
      cVar2 = (**(code **)(*(int *)*puVar6 + 0x9c))();
      if (cVar2 != '\0') {
        uVar3 = 1;
        goto LAB_00814254;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  uVar3 = 0;
LAB_00814254:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 0000814280 00814280_AreAllCompartmentsDamaged ====
// decompiled by BatchDecomp @ 00814280 name=AreAllCompartmentsDamaged conv=__thiscall body=144

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__AreAllCompartmentsDamaged(void)const  */

bool __thiscall ModuleUI__AreAllCompartmentsDamaged(ModuleUI *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)GetCompartments(this);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
      if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
        if (!bVar1) {
          *puVar6 = 0;
        }
      }
      cVar2 = (**(code **)(*(int *)*puVar6 + 0x18))();
      if (cVar2 == '\0') {
        uVar3 = 0;
        goto LAB_008142f1;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  uVar3 = 1;
LAB_008142f1:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 0000814310 00814310_AreAllCompartmentsEnemyTargeted ====
// decompiled by BatchDecomp @ 00814310 name=AreAllCompartmentsEnemyTargeted conv=__thiscall body=237

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__AreAllCompartmentsEnemyTargeted(void)const  */

bool __thiscall ModuleUI__AreAllCompartmentsEnemyTargeted(ModuleUI *this)

{
  SpacecraftComponent *this_00;
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar6;
  SpacecraftTargeting *this_01;
  bool bVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_24[16];
  ModuleUI *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar7 = false;
  local_c = 0;
  local_14 = this;
  piVar3 = (int *)ShipGroupUI__GetShipsInGroup((ShipGroupUI *)this);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*piVar3)(&local_c);
      if ((*piVar5 == 0) || ((ReferenceController *)piVar5[1] == (ReferenceController *)0x0)) {
LAB_008143af:
        local_d = '\x01';
      }
      else {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (!bVar1) goto LAB_008143af;
        bVar7 = true;
        if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
          if (!bVar1) {
            *piVar5 = 0;
          }
        }
        this_00 = (SpacecraftComponent *)*piVar5;
        pDVar6 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)GetCompartments(local_14)
        ;
        this_01 = SpacecraftComponent__GetTargeting(this_00);
        bVar1 = SpacecraftTargeting__AreAllCompartmentsEnemyTargeted(this_01,pDVar6);
        local_d = '\0';
        if (bVar1) goto LAB_008143af;
      }
      if (bVar7) {
        bVar7 = false;
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_24);
      }
      if (local_d == '\0') {
        uVar2 = 0;
        goto LAB_008143de;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 1;
LAB_008143de:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_34);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000814400 00814400_AreAllCompartmentsOff ====
// decompiled by BatchDecomp @ 00814400 name=AreAllCompartmentsOff conv=__thiscall body=144

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__AreAllCompartmentsOff(void)const  */

bool __thiscall ModuleUI__AreAllCompartmentsOff(ModuleUI *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)GetCompartments(this);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
      if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
        if (!bVar1) {
          *puVar6 = 0;
        }
      }
      cVar2 = (**(code **)(*(int *)*puVar6 + 0x14))();
      if (cVar2 == '\0') {
        uVar3 = 0;
        goto LAB_00814471;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  uVar3 = 1;
LAB_00814471:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 0000814490 00814490_AreAllCompartmentsOn ====
// decompiled by BatchDecomp @ 00814490 name=AreAllCompartmentsOn conv=__thiscall body=144

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__AreAllCompartmentsOn(void)const  */

bool __thiscall ModuleUI__AreAllCompartmentsOn(ModuleUI *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)GetCompartments(this);
  local_c = 0;
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar4)(&local_c);
      if ((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]);
        if (!bVar1) {
          *puVar6 = 0;
        }
      }
      cVar2 = (**(code **)(*(int *)*puVar6 + 0x14))();
      if (cVar2 != '\0') {
        uVar3 = 0;
        goto LAB_00814501;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*piVar4 + 0xc))();
    } while (local_c < iVar5);
  }
  uVar3 = 1;
LAB_00814501:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 0000814520 00814520_AreAnyCompartmentsEnemyTargeted ====
// decompiled by BatchDecomp @ 00814520 name=AreAnyCompartmentsEnemyTargeted conv=__thiscall body=237

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__AreAnyCompartmentsEnemyTargeted(void)const  */

bool __thiscall ModuleUI__AreAnyCompartmentsEnemyTargeted(ModuleUI *this)

{
  SpacecraftComponent *this_00;
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar6;
  SpacecraftTargeting *this_01;
  bool bVar7;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_24[16];
  ModuleUI *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar7 = false;
  local_c = 0;
  local_14 = this;
  piVar3 = (int *)ShipGroupUI__GetShipsInGroup((ShipGroupUI *)this);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*piVar3)(&local_c);
      if ((*piVar5 == 0) || ((ReferenceController *)piVar5[1] == (ReferenceController *)0x0)) {
LAB_008145bf:
        local_d = '\x01';
      }
      else {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
        if (!bVar1) goto LAB_008145bf;
        bVar7 = true;
        if ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]);
          if (!bVar1) {
            *piVar5 = 0;
          }
        }
        this_00 = (SpacecraftComponent *)*piVar5;
        pDVar6 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)GetCompartments(local_14)
        ;
        this_01 = SpacecraftComponent__GetTargeting(this_00);
        bVar1 = SpacecraftTargeting__AreAnyCompartmentsEnemyTargeted(this_01,pDVar6);
        local_d = '\0';
        if (bVar1) goto LAB_008145bf;
      }
      if (bVar7) {
        bVar7 = false;
        util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_24);
      }
      if (local_d != '\0') {
        uVar2 = 1;
        goto LAB_008145ee;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 0;
LAB_008145ee:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_34);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 00008147a0 008147a0_Click ====
// decompiled by BatchDecomp @ 008147a0 name=Click conv=__thiscall body=267

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall ModuleActionButton__Click(void) */

void __thiscall ModuleActionButton__Click(ModuleActionButton *this)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  ReferenceController *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->Actions + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*(int *)&this->Actions)(&local_c);
      if ((*piVar3 != 0) && ((code *)piVar3[1] != (code *)0x0)) {
        (*(code *)piVar3[1])(*piVar3);
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->Actions + 0xc))();
    } while (local_c < iVar2);
  }
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->Ships + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*(int *)&this->Ships)(&local_c);
      if ((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
        if (bVar1) {
          if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
            if (!bVar1) {
              *piVar3 = 0;
            }
          }
          puVar4 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*piVar3);
          if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
            if (!bVar1) {
              *puVar4 = 0;
            }
          }
          (*(code *)**(undefined4 **)*puVar4)();
          if (local_10 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_10);
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->Ships + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008148b0 008148b0_Click ====
// decompiled by BatchDecomp @ 008148b0 name=Click conv=__thiscall body=252

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall ModuleRadioActionButton__Click(void) */

void __thiscall ModuleRadioActionButton__Click(ModuleRadioActionButton *this)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  ReferenceController *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->Toggles + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*(int *)&this->Toggles)(&local_c);
      *(int *)*puVar3 = this->ToggleID;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->Toggles + 0xc))();
    } while (local_c < iVar2);
  }
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->Ships + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar4 = (int *)(**(code **)*(int *)&this->Ships)(&local_c);
      if ((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (bVar1) {
          if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
            if (!bVar1) {
              *piVar4 = 0;
            }
          }
          puVar3 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*piVar4);
          if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
            if (!bVar1) {
              *puVar3 = 0;
            }
          }
          (*(code *)**(undefined4 **)*puVar3)();
          if (local_10 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_10);
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->Ships + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000815560 00815560_GetDepth ====
// decompiled by BatchDecomp @ 00815560 name=GetDepth conv=__thiscall body=103

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall CompartmentButton__GetDepth(struct util__Vec2_L_double_G_)const  */

double __thiscall CompartmentButton__GetDepth(CompartmentButton *this,Vec2_L_double_G_ param_1)

{
  Vec3_L_double_G_ VVar1;
  Vec2_L_double_G_ VVar2;
  CameraManager *this_00;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  char local_c;
  
  ((slice_view *)&VVar2.X)->_4_4_ = ((slice_view *)&param_1.X)->_0_4_;
  ((slice_view *)&VVar2.X)->_0_4_ = &local_24;
  ((slice_view *)&VVar2.Y)->_0_4_ = ((slice_view *)&param_1.X)->_4_4_;
  ((slice_view *)&VVar2.Y)->_4_4_ = ((slice_view *)&param_1.Y)->_0_4_;
  GetHitTestPoint_km(this,VVar2);
  if (local_c != '\0') {
    uVar4 = (undefined4)local_14;
    uVar5 = *(undefined4 *)((char *)&local_14 + 4);
    this_00 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
    ((slice_view *)&VVar1.X)->_4_4_ = uStack_20;
    ((slice_view *)&VVar1.X)->_0_4_ = local_24;
    ((slice_view *)&VVar1.Y)->_0_4_ = uStack_1c;
    ((slice_view *)&VVar1.Y)->_4_4_ = uStack_18;
    ((slice_view *)&VVar1.Z)->_0_4_ = uVar4;
    ((slice_view *)&VVar1.Z)->_4_4_ = uVar5;
    dVar3 = CameraManager__GetScreenDepth(this_00,VVar1);
    return dVar3;
  }
  return /*3ff0000000000000*/1.0;
}


//==== 00008155d0 008155d0_GetDepth ====
// decompiled by BatchDecomp @ 008155d0 name=GetDepth conv=__thiscall body=105

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall ShipArmorButton__GetDepth(struct util__Vec2_L_double_G_)const  */

double __thiscall ShipArmorButton__GetDepth(ShipArmorButton *this,Vec2_L_double_G_ param_1)

{
  Vec2_L_double_G_ VVar1;
  Vec3_L_double_G_ VVar2;
  CameraManager *this_00;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined8 local_14;
  char local_c;
  
  ((slice_view *)&VVar1.X)->_4_4_ = ((slice_view *)&param_1.X)->_0_4_;
  ((slice_view *)&VVar1.X)->_0_4_ = &local_24;
  ((slice_view *)&VVar1.Y)->_0_4_ = ((slice_view *)&param_1.X)->_4_4_;
  ((slice_view *)&VVar1.Y)->_4_4_ = ((slice_view *)&param_1.Y)->_0_4_;
  GetHitTestPoint_km(this,VVar1,((slice_view *)&param_1.Y)->_4_1_);
  if (local_c != '\0') {
    uVar4 = (undefined4)local_14;
    uVar5 = *(undefined4 *)((char *)&local_14 + 4);
    this_00 = Manager__GetCameras((Manager *)this->_pad_0x0_0);
    ((slice_view *)&VVar2.X)->_4_4_ = uStack_20;
    ((slice_view *)&VVar2.X)->_0_4_ = local_24;
    ((slice_view *)&VVar2.Y)->_0_4_ = uStack_1c;
    ((slice_view *)&VVar2.Y)->_4_4_ = uStack_18;
    ((slice_view *)&VVar2.Z)->_0_4_ = uVar4;
    ((slice_view *)&VVar2.Z)->_4_4_ = uVar5;
    dVar3 = CameraManager__GetScreenDepth(this_00,VVar2);
    return dVar3;
  }
  return /*3ff0000000000000*/1.0;
}


//==== 0000817480 00817480_GetHeatIndicatorVisible ====
// decompiled by BatchDecomp @ 00817480 name=GetHeatIndicatorVisible conv=__thiscall body=235

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__GetHeatIndicatorVisible(void)const  */

bool __thiscall ModuleUI__GetHeatIndicatorVisible(ModuleUI *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *pDVar5;
  Module *this_00;
  uint uVar6;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_28[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_18[16];
  uint local_8;
  
  local_8 = 0;
  if (this->ModuleType == (Module *)0x0) {
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
        if (*(int *)&((this->TargetCompartment).Pointer)->LostPower != 0) goto LAB_008174ec;
      }
    }
  }
  else {
LAB_008174ec:
    piVar3 = (int *)GetCompartments(this);
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_18);
    if (0 < iVar4) {
      bVar2 = IsAlliedModule(this);
      if (bVar2) {
        bVar2 = GetPowerIndicatorVisible(this);
        if (!bVar2) {
          local_8 = 1;
          pDVar5 = (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)GetCompartments(this);
          this_00 = GetModuleType(this);
          bVar2 = Module__AreCompartmentsOverheating(this_00,pDVar5);
          if (bVar2) {
            bVar2 = true;
            uVar6 = 1;
            goto LAB_00817557;
          }
        }
      }
    }
  }
  bVar2 = false;
  uVar6 = local_8;
LAB_00817557:
  if ((uVar6 & 1) != 0) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_28);
  }
  return bVar2;
}


//==== 0000819620 00819620_GetStatusBarPercentages ====
// decompiled by BatchDecomp @ 00819620 name=GetStatusBarPercentages conv=__thiscall body=176

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: struct Range_L_double_G_ __thiscall ModuleUI__GetStatusBarPercentages(void)const  */

Range_L_double_G_ * __thiscall
ModuleUI__GetStatusBarPercentages(ModuleUI *this,Range_L_double_G_ *__return_storage_ptr__)

{
  ReferenceController *pRVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  Module *pMVar8;
  undefined1 local_2c[24];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_14[16];
  
  pMVar8 = this->ModuleType;
  if (pMVar8 == (Module *)0x0) {
    if (((this->TargetCompartment).Pointer != (ModuleCompartment *)0x0) &&
       (pRVar1 = (this->TargetCompartment).Controller, pRVar1 != (ReferenceController *)0x0)) {
      bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (bVar5) {
        pRVar1 = (this->TargetCompartment).Controller;
        if (pRVar1 != (ReferenceController *)0x0) {
          bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
          if (!bVar5) {
            (this->TargetCompartment).Pointer = (ModuleCompartment *)0x0;
          }
        }
        pMVar8 = *(Module **)&((this->TargetCompartment).Pointer)->LostPower;
        goto LAB_00819676;
      }
    }
    pMVar8 = (Module *)0x0;
  }
LAB_00819676:
  iVar2 = pMVar8->_pad_0x0_0;
  uVar6 = GetCompartments(this);
  puVar7 = (undefined4 *)(**(code **)(iVar2 + 0x114))(local_2c,uVar6);
  if (*(char *)(puVar7 + 4) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar6 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)&__return_storage_ptr__->Lower = *puVar7;
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar6;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar4;
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_14);
  return __return_storage_ptr__;
}


//==== 000081ada0 0081ada0_IsEnabled ====
// decompiled by BatchDecomp @ 0081ada0 name=IsEnabled conv=__thiscall body=111

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ShipArmorButton__IsEnabled(void)const  */

bool __thiscall ShipArmorButton__IsEnabled(ShipArmorButton *this)

{
  SpacecraftComponent *pSVar1;
  bool bVar2;
  int iVar3;
  ReferenceController *pRVar4;
  
  if (((this->Ship).Pointer != (SpacecraftComponent *)0x0) &&
     (pRVar4 = (this->Ship).Controller, pRVar4 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
    if (bVar2) {
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
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}


//==== 000081af60 0081af60_IsEnemyShip ====
// decompiled by BatchDecomp @ 0081af60 name=IsEnemyShip conv=__thiscall body=89

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall CompartmentButton__IsEnemyShip(void)const  */

bool __thiscall CompartmentButton__IsEnemyShip(CompartmentButton *this)

{
  ReferenceController *this_00;
  TacticalManager *this_01;
  SpacecraftComponent *pSVar1;
  Faction *pFVar2;
  bool bVar3;
  Faction *pFVar4;
  
  this_00 = (this->Ship).Controller;
  this_01 = (TacticalManager *)this->_pad_0x0_0;
  if (this_00 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar3) {
      (this->Ship).Pointer = (SpacecraftComponent *)0x0;
    }
  }
  pSVar1 = (this->Ship).Pointer;
  if ((ReferenceController *)pSVar1->_pad_0x0_0 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar1->_pad_0x0_0);
    if (!bVar3) {
      pSVar1->_pad_0x0_0 = 0;
    }
  }
  pFVar2 = *(Faction **)(pSVar1->_pad_0x0_0 + 0x1e0);
  pFVar4 = TacticalManager__GetEnemyAlliance(this_01);
  return pFVar4== pFVar2;
}


//==== 000081b370 0081b370_IsToggled ====
// decompiled by BatchDecomp @ 0081b370 name=IsToggled conv=__thiscall body=114

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleToggleActionButton__IsToggled(void)const  */

bool __thiscall ModuleToggleActionButton__IsToggled(ModuleToggleActionButton *this)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*(int *)&this->Toggles + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*(int *)&this->Toggles)(&local_c);
      if (*(char *)*puVar3 != '\0') {
        uVar1 = 1;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar1;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*(int *)&this->Toggles + 0xc))();
    } while (local_c < iVar2);
  }
  uVar1 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


//==== 000081b5c0 0081b5c0_IsVisible ====
// decompiled by BatchDecomp @ 0081b5c0 name=IsVisible conv=__thiscall body=236

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall ShipArmorButton__IsVisible(void)const  */

bool __thiscall ShipArmorButton__IsVisible(ShipArmorButton *this)

{
  SpacecraftComponent *pSVar1;
  TacticalManager *this_00;
  bool bVar2;
  CraftBlueprint *this_01;
  int iVar3;
  ReferenceController *pRVar4;
  
  if (((this->Ship).Pointer != (SpacecraftComponent *)0x0) &&
     (pRVar4 = (this->Ship).Controller, pRVar4 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
    if (bVar2) {
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
      bVar2 = TacticalManager__IsBodySelected((TacticalManager *)this->_pad_0x0_0,iVar3,pRVar4);
      if (bVar2) {
        pRVar4 = (this->Ship).Controller;
        if (pRVar4 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
          if (!bVar2) {
            (this->Ship).Pointer = (SpacecraftComponent *)0x0;
          }
        }
        this_01 = SpacecraftComponent__GetCraftDesign((this->Ship).Pointer);
        bVar2 = CraftBlueprint__HasArmor(this_01);
        if (bVar2) {
          this_00 = (TacticalManager *)this->_pad_0x0_0;
          TacticalManager__GetStrategicGame_Memoize(this_00);
          if (*(char *)&(this_00->Effects).Controller == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          bVar2 = StrategicManager__IsNotInScreenshotMode((StrategicManager *)(this_00->Effects).Pointer);
          if (bVar2) {
            return true;
          }
        }
      }
    }
  }
  return false;
}


//==== 0000821470 00821470_Tick ====
// decompiled by BatchDecomp @ 00821470 name=Tick conv=__thiscall body=175

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ModuleProblemIndicator__Tick(double) */

void __thiscall ModuleProblemIndicator__Tick(ModuleProblemIndicator *this,double param_1)

{
  char cVar1;
  double dVar2;
  double dVar3;
  
  if ((this->_pad_0x0_0 == 0) || ((code *)this->_pad_0x0_0 == (code *)0x0)) {
    cVar1 = (char)this->_pad_0x0_0;
  }
  else {
    cVar1 = (*(code *)this->_pad_0x0_0)(this->_pad_0x0_0);
  }
  if (cVar1 == '\0') {
    if (this->VisibilityHysterisisCountdown_s <= 0.0) {
      return;
    }
    dVar2 = this->VisibilityHysterisisCountdown_s - param_1;
    dVar3 = 0.0;
    if (0.0 <= dVar2) {
      dVar3 = dVar2;
    }
    this->VisibilityHysterisisCountdown_s = dVar3;
    if (dVar3 <= 0.0) {
      return;
    }
  }
  else {
    this->VisibilityHysterisisCountdown_s = /*3ff0000000000000*/1.0;
  }
  dVar3 = /*4000000000000000*/2.0;
  dVar2 = this->OurTime_s + param_1;
  this->OurTime_s = dVar2;
  while (dVar3 <= dVar2) {
    dVar2 = this->OurTime_s - dVar3;
    this->OurTime_s = dVar2;
  }
  return;
}


//==== 0000822020 00822020_OnAction ====
// decompiled by BatchDecomp @ 00822020 name=OnAction conv=__thiscall body=149

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual bool __thiscall BalloonPopupCombatPayload__OnAction(void) */

bool __thiscall BalloonPopupCombatPayload__OnAction(BalloonPopupCombatPayload *this)

{
  SpacecraftComponent *pSVar1;
  bool bVar2;
  int iVar3;
  ReferenceController *pRVar4;
  ModuleCompartment *pMVar5;
  undefined4 uVar6;
  
  if (((this->Spacecraft).Pointer != (SpacecraftComponent *)0x0) &&
     (pRVar4 = (this->Spacecraft).Controller, pRVar4 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
    if (bVar2) {
      pRVar4 = (this->Spacecraft).Controller;
      if (pRVar4 != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
        if (!bVar2) {
          (this->Spacecraft).Pointer = (SpacecraftComponent *)0x0;
        }
      }
      pSVar1 = (this->Spacecraft).Pointer;
      uVar6 = 0;
      iVar3 = pSVar1->_pad_0x0_0;
      pRVar4 = (ReferenceController *)pSVar1->_pad_0x0_0;
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar4);
      }
      TacticalManager__SelectBody(this->Parent->Parent,iVar3,pRVar4,uVar6);
    }
  }
  if (((this->System).Pointer != (ModuleCompartment *)0x0) &&
     (pRVar4 = (this->System).Controller, pRVar4 != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar4);
    if (bVar2) {
      pMVar5 = (this->System).Pointer;
      pRVar4 = (this->System).Controller;
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar4);
      }
      TacticalManager__SelectCompartment(this->Parent->Parent,pMVar5,pRVar4);
    }
  }
  return false;
}


//==== 0000827640 00827640_FUN_00827640 ====
float10 FUN_00827640(int *param_1);

// decompiled by BatchDecomp @ 00827640 name=FUN_00827640 conv=unknown body=96

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float10 FUN_00827640(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  CraftBlueprint *this;
  double dVar4;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\tactical\\ui\\shipui.cpp",0x72,
                    "Ships.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x1c))();
  if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
    if (!bVar1) {
      *puVar3 = 0;
    }
  }
  this = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar3);
  dVar4 = CraftBlueprint__GetTotalMass_kg(this);
  return (float10)dVar4;
}


//==== 000082a3c0 0082a3c0_PostTick ====
// decompiled by BatchDecomp @ 0082a3c0 name=PostTick conv=__thiscall body=102

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ShipListUI__PostTick(double) */

void __thiscall ShipListUI__PostTick(ShipListUI *this,double param_1)

{
  bool bVar1;
  SharedPtr_L_struct_UIWidget_G_ *pSVar2;
  ReferenceControllerRegistry *this_00;
  int *local_c;
  ReferenceController *local_8;
  
  if (this->RebuildPending != false) {
    this->RebuildPending = false;
    pSVar2 = (SharedPtr_L_struct_UIWidget_G_ *)RegenerateChildren(this);
UIWidget__PostTick((UIWidget *)this,pSVar2);
    UIWidget__ProperlyParentChildWidgets((UIWidget *)this);
    if (local_8 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__ReleaseStrongReference(local_8);
      if (bVar1) {
        if (local_c != (int *)0x0) {
          (**(code **)(*local_c + 4))(1);
        }
        this_00 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(this_00,local_c);
      }
    }
  }
  return;
}


//==== 00008302d0 008302d0_HasAnyShips ====
// decompiled by BatchDecomp @ 008302d0 name=HasAnyShips conv=__thiscall body=121

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall HUDTactical__HasAnyShips(void)const  */

bool __thiscall HUDTactical__HasAnyShips(HUDTactical *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_28[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_18[16];
  uint local_8;
  
  local_8 = 0;
  piVar1 = (int *)TacticalManager__GetPlayerSpacecraftComponents((TacticalManager *)this->_pad_0x0_0)
  ;
  local_8 = 1;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  if (iVar2 < 1) {
    piVar1 = (int *)TacticalManager__GetAISpacecraftComponents((TacticalManager *)this->_pad_0x0_0);
    local_8 = 3;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    if (iVar2 < 1) {
      bVar4 = false;
      uVar3 = 3;
      goto LAB_0083032d;
    }
  }
  bVar4 = true;
  uVar3 = local_8;
LAB_0083032d:
  if ((uVar3 & 2) != 0) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_18);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_28);
  return bVar4;
}


//==== 0000830390 00830390_IsChangeAllOrdersButtonEnabled ====
// decompiled by BatchDecomp @ 00830390 name=IsChangeAllOrdersButtonEnabled conv=__thiscall body=191

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall HUDTactical__IsChangeAllOrdersButtonEnabled(void)const  */

bool __thiscall HUDTactical__IsChangeAllOrdersButtonEnabled(HUDTactical *this)

{
  SpacecraftComponent *this_00;
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_1c[16];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)TacticalManager__GetSpacecraftComponents((TacticalManager *)this->_pad_0x0_0);
  local_c = 0;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar3)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar1)) {
        *puVar5 = 0;
      }
      this_00 = (SpacecraftComponent *)*puVar5;
      SpacecraftComponent__HasDeltaVLeft_Memoize(this_00);
      if ((this_00->HasDeltaVLeft_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((this_00->HasDeltaVLeft_MemoizedValue).Data != false) {
        uVar2 = 1;
        goto LAB_00830430;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar3 + 0xc))();
    } while (local_c < iVar4);
  }
  uVar2 = 0;
LAB_00830430:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}


//==== 0000830450 00830450_IsMarqueeSelectVisible ====
// decompiled by BatchDecomp @ 00830450 name=IsMarqueeSelectVisible conv=__thiscall body=106

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall HUDTactical__IsMarqueeSelectVisible(void)const  */

bool __thiscall HUDTactical__IsMarqueeSelectVisible(HUDTactical *this)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  Preferences *this_00;
  ReferenceController *local_8;
  
  puVar3 = (undefined4 *)TacticalManager__GetOrderOverlay((TacticalManager *)this->_pad_0x0_0);
  if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
    if (!bVar1) {
      *puVar3 = 0;
    }
  }
  cVar2 = (**(code **)(*(int *)*puVar3 + 8))();
  if (cVar2 == '\0') {
    this_00 = (Preferences *)Manager__GetOptions((Manager *)this->_pad_0x0_0);
    bVar1 = Preferences__IsShipsMarqueeSelectEnabled(this_00);
    if (bVar1) {
      bVar1 = true;
      goto LAB_008304a5;
    }
  }
  bVar1 = false;
LAB_008304a5:
  if (local_8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_8);
  }
  return bVar1;
}


//==== 0000830940 00830940_RequestRebuildOfShips ====
// decompiled by BatchDecomp @ 00830940 name=RequestRebuildOfShips conv=__thiscall body=84

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: void __thiscall HUDTactical__RequestRebuildOfShips(void) */

void __thiscall HUDTactical__RequestRebuildOfShips(HUDTactical *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  
  pRVar1 = (this->AlliedShipList).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->AlliedShipList).Pointer = (ShipListUI *)0x0;
    }
  }
  ShipListUI__RequestRebuild((this->AlliedShipList).Pointer);
  pRVar1 = (this->EnemyShipList).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar2) {
      (this->EnemyShipList).Pointer = (ShipListUI *)0x0;
    }
  }
  ShipListUI__RequestRebuild((this->EnemyShipList).Pointer);
  return;
}


//==== 00008309a0 008309a0_SelectAllAllies ====
extern undefined4 FUN_0082ae70(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 008309a0 name=SelectAllAllies conv=__thiscall body=165

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall HUDTactical__SelectAllAllies(void) */

void __thiscall HUDTactical__SelectAllAllies(HUDTactical *this)

{
  int *piVar1;
  int iVar2;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c[4];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)TacticalManager__GetPlayerSpacecraftComponents((TacticalManager *)this->_pad_0x0_0)
  ;
  iVar2 = (**(code **)(*piVar1 + 0xc))();
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_1c);
  if (0 < iVar2) {
    local_c[0] = 0;
    local_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    piVar1 = (int *)TacticalManager__GetPlayerSpacecraftComponents((TacticalManager *)this->_pad_0x0_0);
    local_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    iVar2 = (**(code **)(*piVar1 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar2);
    FUN_0082ae70(piVar1,local_c,&local_1c);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
    TacticalManager__SelectBodies((TacticalManager *)this->_pad_0x0_0,
               (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,false);
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000846eb0 00846eb0_FUN_00846eb0 ====
undefined4 FUN_00846eb0(void);

// decompiled by BatchDecomp @ 00846eb0 name=FUN_00846eb0 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00846eb0(void)

{
  bool bVar1;
  
  ____glewDebugMessageCallbackAMD = wglGetProcAddress("glDebugMessageCallbackAMD");
  bVar1 = ____glewDebugMessageCallbackAMD == (PROC)0x0;
  ____glewDebugMessageEnableAMD = wglGetProcAddress("glDebugMessageEnableAMD");
  if ((____glewDebugMessageEnableAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDebugMessageInsertAMD = wglGetProcAddress("glDebugMessageInsertAMD");
  if ((____glewDebugMessageInsertAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetDebugMessageLogAMD = wglGetProcAddress("glGetDebugMessageLogAMD");
  if ((____glewGetDebugMessageLogAMD != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000846f20 00846f20_FUN_00846f20 ====
undefined4 FUN_00846f20(void);

// decompiled by BatchDecomp @ 00846f20 name=FUN_00846f20 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00846f20(void)

{
  bool bVar1;
  
  ____glewBlendEquationIndexedAMD = wglGetProcAddress("glBlendEquationIndexedAMD");
  bVar1 = ____glewBlendEquationIndexedAMD == (PROC)0x0;
  ____glewBlendEquationSeparateIndexedAMD = wglGetProcAddress("glBlendEquationSeparateIndexedAMD");
  if ((____glewBlendEquationSeparateIndexedAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBlendFuncIndexedAMD = wglGetProcAddress("glBlendFuncIndexedAMD");
  if ((____glewBlendFuncIndexedAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBlendFuncSeparateIndexedAMD = wglGetProcAddress("glBlendFuncSeparateIndexedAMD");
  if ((____glewBlendFuncSeparateIndexedAMD != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847060 00847060_FUN_00847060 ====
undefined4 FUN_00847060(void);

// decompiled by BatchDecomp @ 00847060 name=FUN_00847060 conv=unknown body=253

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847060(void)

{
  bool bVar1;
  
  ____glewBeginPerfMonitorAMD = wglGetProcAddress("glBeginPerfMonitorAMD");
  bVar1 = ____glewBeginPerfMonitorAMD == (PROC)0x0;
  ____glewDeletePerfMonitorsAMD = wglGetProcAddress("glDeletePerfMonitorsAMD");
  if ((____glewDeletePerfMonitorsAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndPerfMonitorAMD = wglGetProcAddress("glEndPerfMonitorAMD");
  if ((____glewEndPerfMonitorAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenPerfMonitorsAMD = wglGetProcAddress("glGenPerfMonitorsAMD");
  if ((____glewGenPerfMonitorsAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfMonitorCounterDataAMD = wglGetProcAddress("glGetPerfMonitorCounterDataAMD");
  if ((____glewGetPerfMonitorCounterDataAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfMonitorCounterInfoAMD = wglGetProcAddress("glGetPerfMonitorCounterInfoAMD");
  if ((____glewGetPerfMonitorCounterInfoAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfMonitorCounterStringAMD = wglGetProcAddress("glGetPerfMonitorCounterStringAMD");
  if ((____glewGetPerfMonitorCounterStringAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfMonitorCountersAMD = wglGetProcAddress("glGetPerfMonitorCountersAMD");
  if ((____glewGetPerfMonitorCountersAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfMonitorGroupStringAMD = wglGetProcAddress("glGetPerfMonitorGroupStringAMD");
  if ((____glewGetPerfMonitorGroupStringAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfMonitorGroupsAMD = wglGetProcAddress("glGetPerfMonitorGroupsAMD");
  if ((____glewGetPerfMonitorGroupsAMD == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSelectPerfMonitorCountersAMD = wglGetProcAddress("glSelectPerfMonitorCountersAMD");
  if ((____glewSelectPerfMonitorCountersAMD != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008473d0 008473d0_FUN_008473d0 ====
undefined4 FUN_008473d0(void);

// decompiled by BatchDecomp @ 008473d0 name=FUN_008473d0 conv=unknown body=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008473d0(void)

{
  bool bVar1;
  
  ____glewDrawElementArrayAPPLE = wglGetProcAddress("glDrawElementArrayAPPLE");
  bVar1 = ____glewDrawElementArrayAPPLE == (PROC)0x0;
  ____glewDrawRangeElementArrayAPPLE = wglGetProcAddress("glDrawRangeElementArrayAPPLE");
  if ((____glewDrawRangeElementArrayAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewElementPointerAPPLE = wglGetProcAddress("glElementPointerAPPLE");
  if ((____glewElementPointerAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiDrawElementArrayAPPLE = wglGetProcAddress("glMultiDrawElementArrayAPPLE");
  if ((____glewMultiDrawElementArrayAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiDrawRangeElementArrayAPPLE = wglGetProcAddress("glMultiDrawRangeElementArrayAPPLE");
  if ((____glewMultiDrawRangeElementArrayAPPLE != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847450 00847450_FUN_00847450 ====
undefined4 FUN_00847450(void);

// decompiled by BatchDecomp @ 00847450 name=FUN_00847450 conv=unknown body=187

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847450(void)

{
  bool bVar1;
  
  ____glewDeleteFencesAPPLE = wglGetProcAddress("glDeleteFencesAPPLE");
  bVar1 = ____glewDeleteFencesAPPLE == (PROC)0x0;
  ____glewFinishFenceAPPLE = wglGetProcAddress("glFinishFenceAPPLE");
  if ((____glewFinishFenceAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFinishObjectAPPLE = wglGetProcAddress("glFinishObjectAPPLE");
  if ((____glewFinishObjectAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenFencesAPPLE = wglGetProcAddress("glGenFencesAPPLE");
  if ((____glewGenFencesAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsFenceAPPLE = wglGetProcAddress("glIsFenceAPPLE");
  if ((____glewIsFenceAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSetFenceAPPLE = wglGetProcAddress("glSetFenceAPPLE");
  if ((____glewSetFenceAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTestFenceAPPLE = wglGetProcAddress("glTestFenceAPPLE");
  if ((____glewTestFenceAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTestObjectAPPLE = wglGetProcAddress("glTestObjectAPPLE");
  if ((____glewTestObjectAPPLE != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008475e0 008475e0_FUN_008475e0 ====
undefined4 FUN_008475e0(void);

// decompiled by BatchDecomp @ 008475e0 name=FUN_008475e0 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008475e0(void)

{
  bool bVar1;
  
  ____glewBindVertexArrayAPPLE = wglGetProcAddress("glBindVertexArrayAPPLE");
  bVar1 = ____glewBindVertexArrayAPPLE == (PROC)0x0;
  ____glewDeleteVertexArraysAPPLE = wglGetProcAddress("glDeleteVertexArraysAPPLE");
  if ((____glewDeleteVertexArraysAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenVertexArraysAPPLE = wglGetProcAddress("glGenVertexArraysAPPLE");
  if ((____glewGenVertexArraysAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsVertexArrayAPPLE = wglGetProcAddress("glIsVertexArrayAPPLE");
  if ((____glewIsVertexArrayAPPLE != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008476a0 008476a0_FUN_008476a0 ====
undefined4 FUN_008476a0(void);

// decompiled by BatchDecomp @ 008476a0 name=FUN_008476a0 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008476a0(void)

{
  bool bVar1;
  
  ____glewDisableVertexAttribAPPLE = wglGetProcAddress("glDisableVertexAttribAPPLE");
  bVar1 = ____glewDisableVertexAttribAPPLE == (PROC)0x0;
  ____glewEnableVertexAttribAPPLE = wglGetProcAddress("glEnableVertexAttribAPPLE");
  if ((____glewEnableVertexAttribAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsVertexAttribEnabledAPPLE = wglGetProcAddress("glIsVertexAttribEnabledAPPLE");
  if ((____glewIsVertexAttribEnabledAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapVertexAttrib1dAPPLE = wglGetProcAddress("glMapVertexAttrib1dAPPLE");
  if ((____glewMapVertexAttrib1dAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapVertexAttrib1fAPPLE = wglGetProcAddress("glMapVertexAttrib1fAPPLE");
  if ((____glewMapVertexAttrib1fAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapVertexAttrib2dAPPLE = wglGetProcAddress("glMapVertexAttrib2dAPPLE");
  if ((____glewMapVertexAttrib2dAPPLE == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapVertexAttrib2fAPPLE = wglGetProcAddress("glMapVertexAttrib2fAPPLE");
  if ((____glewMapVertexAttrib2fAPPLE != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847750 00847750_FUN_00847750 ====
undefined4 FUN_00847750(void);

// decompiled by BatchDecomp @ 00847750 name=FUN_00847750 conv=unknown body=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847750(void)

{
  bool bVar1;
  
  ____glewClearDepthf = wglGetProcAddress("glClearDepthf");
  bVar1 = ____glewClearDepthf == (PROC)0x0;
  ____glewDepthRangef = wglGetProcAddress("glDepthRangef");
  if ((____glewDepthRangef == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetShaderPrecisionFormat = wglGetProcAddress("glGetShaderPrecisionFormat");
  if ((____glewGetShaderPrecisionFormat == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReleaseShaderCompiler = wglGetProcAddress("glReleaseShaderCompiler");
  if ((____glewReleaseShaderCompiler == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewShaderBinary = wglGetProcAddress("glShaderBinary");
  if ((____glewShaderBinary != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847a70 00847a70_FUN_00847a70 ====
undefined4 FUN_00847a70(void);

// decompiled by BatchDecomp @ 00847a70 name=FUN_00847a70 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847a70(void)

{
  bool bVar1;
  
  ____glewClearBufferData = wglGetProcAddress("glClearBufferData");
  bVar1 = ____glewClearBufferData == (PROC)0x0;
  ____glewClearBufferSubData = wglGetProcAddress("glClearBufferSubData");
  if ((____glewClearBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedBufferDataEXT = wglGetProcAddress("glClearNamedBufferDataEXT");
  if ((____glewClearNamedBufferDataEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewClearNamedBufferSubDataEXT = wglGetProcAddress("glClearNamedBufferSubDataEXT");
  if ((____glewClearNamedBufferSubDataEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000847c00 00847c00_FUN_00847c00 ====
undefined4 FUN_00847c00(void);

// decompiled by BatchDecomp @ 00847c00 name=FUN_00847c00 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00847c00(void)

{
  bool bVar1;
  
  ____glewDebugMessageCallbackARB = wglGetProcAddress("glDebugMessageCallbackARB");
  bVar1 = ____glewDebugMessageCallbackARB == (PROC)0x0;
  ____glewDebugMessageControlARB = wglGetProcAddress("glDebugMessageControlARB");
  if ((____glewDebugMessageControlARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDebugMessageInsertARB = wglGetProcAddress("glDebugMessageInsertARB");
  if ((____glewDebugMessageInsertARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetDebugMessageLogARB = wglGetProcAddress("glGetDebugMessageLogARB");
  if ((____glewGetDebugMessageLogARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000848500 00848500_FUN_00848500 ====
undefined4 FUN_00848500(void);

// decompiled by BatchDecomp @ 00848500 name=FUN_00848500 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848500(void)

{
  bool bVar1;
  
  ____glewBlendEquationSeparateiARB = wglGetProcAddress("glBlendEquationSeparateiARB");
  bVar1 = ____glewBlendEquationSeparateiARB == (PROC)0x0;
  ____glewBlendEquationiARB = wglGetProcAddress("glBlendEquationiARB");
  if ((____glewBlendEquationiARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBlendFuncSeparateiARB = wglGetProcAddress("glBlendFuncSeparateiARB");
  if ((____glewBlendFuncSeparateiARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBlendFunciARB = wglGetProcAddress("glBlendFunciARB");
  if ((____glewBlendFunciARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000848570 00848570_FUN_00848570 ====
undefined4 FUN_00848570(void);

// decompiled by BatchDecomp @ 00848570 name=FUN_00848570 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848570(void)

{
  bool bVar1;
  
  ____glewDrawElementsBaseVertex = wglGetProcAddress("glDrawElementsBaseVertex");
  bVar1 = ____glewDrawElementsBaseVertex == (PROC)0x0;
  ____glewDrawElementsInstancedBaseVertex = wglGetProcAddress("glDrawElementsInstancedBaseVertex");
  if ((____glewDrawElementsInstancedBaseVertex == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDrawRangeElementsBaseVertex = wglGetProcAddress("glDrawRangeElementsBaseVertex");
  if ((____glewDrawRangeElementsBaseVertex == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultiDrawElementsBaseVertex = wglGetProcAddress("glMultiDrawElementsBaseVertex");
  if ((____glewMultiDrawElementsBaseVertex != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000848620 00848620_FUN_00848620 ====
undefined4 FUN_00848620(void);

// decompiled by BatchDecomp @ 00848620 name=FUN_00848620 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848620(void)

{
  bool bVar1;
  
  ____glewFramebufferParameteri = wglGetProcAddress("glFramebufferParameteri");
  bVar1 = ____glewFramebufferParameteri == (PROC)0x0;
  ____glewGetFramebufferParameteriv = wglGetProcAddress("glGetFramebufferParameteriv");
  if ((____glewGetFramebufferParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedFramebufferParameterivEXT =
       wglGetProcAddress("glGetNamedFramebufferParameterivEXT");
  if ((____glewGetNamedFramebufferParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedFramebufferParameteriEXT = wglGetProcAddress("glNamedFramebufferParameteriEXT");
  if ((____glewNamedFramebufferParameteriEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000848860 00848860_FUN_00848860 ====
undefined4 FUN_00848860(void);

// decompiled by BatchDecomp @ 00848860 name=FUN_00848860 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848860(void)

{
  bool bVar1;
  
  ____glewFramebufferTextureARB = wglGetProcAddress("glFramebufferTextureARB");
  bVar1 = ____glewFramebufferTextureARB == (PROC)0x0;
  ____glewFramebufferTextureFaceARB = wglGetProcAddress("glFramebufferTextureFaceARB");
  if ((____glewFramebufferTextureFaceARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferTextureLayerARB = wglGetProcAddress("glFramebufferTextureLayerARB");
  if ((____glewFramebufferTextureLayerARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramParameteriARB = wglGetProcAddress("glProgramParameteriARB");
  if ((____glewProgramParameteriARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849220 00849220_FUN_00849220 ====
undefined4 FUN_00849220(void);

// decompiled by BatchDecomp @ 00849220 name=FUN_00849220 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849220(void)

{
  bool bVar1;
  
  ____glewInvalidateBufferData = wglGetProcAddress("glInvalidateBufferData");
  bVar1 = ____glewInvalidateBufferData == (PROC)0x0;
  ____glewInvalidateBufferSubData = wglGetProcAddress("glInvalidateBufferSubData");
  if ((____glewInvalidateBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewInvalidateFramebuffer = wglGetProcAddress("glInvalidateFramebuffer");
  if ((____glewInvalidateFramebuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewInvalidateSubFramebuffer = wglGetProcAddress("glInvalidateSubFramebuffer");
  if ((____glewInvalidateSubFramebuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewInvalidateTexImage = wglGetProcAddress("glInvalidateTexImage");
  if ((____glewInvalidateTexImage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewInvalidateTexSubImage = wglGetProcAddress("glInvalidateTexSubImage");
  if ((____glewInvalidateTexSubImage != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008492f0 008492f0_FUN_008492f0 ====
undefined4 FUN_008492f0(void);

// decompiled by BatchDecomp @ 008492f0 name=FUN_008492f0 conv=unknown body=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008492f0(void)

{
  bool bVar1;
  
  ____glewCurrentPaletteMatrixARB = wglGetProcAddress("glCurrentPaletteMatrixARB");
  bVar1 = ____glewCurrentPaletteMatrixARB == (PROC)0x0;
  ____glewMatrixIndexPointerARB = wglGetProcAddress("glMatrixIndexPointerARB");
  if ((____glewMatrixIndexPointerARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixIndexubvARB = wglGetProcAddress("glMatrixIndexubvARB");
  if ((____glewMatrixIndexubvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixIndexuivARB = wglGetProcAddress("glMatrixIndexuivARB");
  if ((____glewMatrixIndexuivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMatrixIndexusvARB = wglGetProcAddress("glMatrixIndexusvARB");
  if ((____glewMatrixIndexusvARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849370 00849370_FUN_00849370 ====
undefined4 FUN_00849370(void);

// decompiled by BatchDecomp @ 00849370 name=FUN_00849370 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849370(void)

{
  bool bVar1;
  
  ____glewBindBuffersBase = wglGetProcAddress("glBindBuffersBase");
  bVar1 = ____glewBindBuffersBase == (PROC)0x0;
  ____glewBindBuffersRange = wglGetProcAddress("glBindBuffersRange");
  if ((____glewBindBuffersRange == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindImageTextures = wglGetProcAddress("glBindImageTextures");
  if ((____glewBindImageTextures == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindSamplers = wglGetProcAddress("glBindSamplers");
  if ((____glewBindSamplers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindTextures = wglGetProcAddress("glBindTextures");
  if ((____glewBindTextures == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindVertexBuffers = wglGetProcAddress("glBindVertexBuffers");
  if ((____glewBindVertexBuffers != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849760 00849760_FUN_00849760 ====
undefined4 FUN_00849760(void);

// decompiled by BatchDecomp @ 00849760 name=FUN_00849760 conv=unknown body=187

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849760(void)

{
  bool bVar1;
  
  ____glewBeginQueryARB = wglGetProcAddress("glBeginQueryARB");
  bVar1 = ____glewBeginQueryARB == (PROC)0x0;
  ____glewDeleteQueriesARB = wglGetProcAddress("glDeleteQueriesARB");
  if ((____glewDeleteQueriesARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndQueryARB = wglGetProcAddress("glEndQueryARB");
  if ((____glewEndQueryARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenQueriesARB = wglGetProcAddress("glGenQueriesARB");
  if ((____glewGenQueriesARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryObjectivARB = wglGetProcAddress("glGetQueryObjectivARB");
  if ((____glewGetQueryObjectivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryObjectuivARB = wglGetProcAddress("glGetQueryObjectuivARB");
  if ((____glewGetQueryObjectuivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryivARB = wglGetProcAddress("glGetQueryivARB");
  if ((____glewGetQueryivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsQueryARB = wglGetProcAddress("glIsQueryARB");
  if ((____glewIsQueryARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000849880 00849880_FUN_00849880 ====
undefined4 FUN_00849880(void);

// decompiled by BatchDecomp @ 00849880 name=FUN_00849880 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00849880(void)

{
  bool bVar1;
  
  ____glewGetProgramInterfaceiv = wglGetProcAddress("glGetProgramInterfaceiv");
  bVar1 = ____glewGetProgramInterfaceiv == (PROC)0x0;
  ____glewGetProgramResourceIndex = wglGetProcAddress("glGetProgramResourceIndex");
  if ((____glewGetProgramResourceIndex == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramResourceLocation = wglGetProcAddress("glGetProgramResourceLocation");
  if ((____glewGetProgramResourceLocation == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramResourceLocationIndex = wglGetProcAddress("glGetProgramResourceLocationIndex");
  if ((____glewGetProgramResourceLocationIndex == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramResourceName = wglGetProcAddress("glGetProgramResourceName");
  if ((____glewGetProgramResourceName == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramResourceiv = wglGetProcAddress("glGetProgramResourceiv");
  if ((____glewGetProgramResourceiv != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a5f0 0084a5f0_FUN_0084a5f0 ====
undefined4 FUN_0084a5f0(void);

// decompiled by BatchDecomp @ 0084a5f0 name=FUN_0084a5f0 conv=unknown body=187

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a5f0(void)

{
  bool bVar1;
  
  ____glewGetActiveSubroutineName = wglGetProcAddress("glGetActiveSubroutineName");
  bVar1 = ____glewGetActiveSubroutineName == (PROC)0x0;
  ____glewGetActiveSubroutineUniformName = wglGetProcAddress("glGetActiveSubroutineUniformName");
  if ((____glewGetActiveSubroutineUniformName == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveSubroutineUniformiv = wglGetProcAddress("glGetActiveSubroutineUniformiv");
  if ((____glewGetActiveSubroutineUniformiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetProgramStageiv = wglGetProcAddress("glGetProgramStageiv");
  if ((____glewGetProgramStageiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetSubroutineIndex = wglGetProcAddress("glGetSubroutineIndex");
  if ((____glewGetSubroutineIndex == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetSubroutineUniformLocation = wglGetProcAddress("glGetSubroutineUniformLocation");
  if ((____glewGetSubroutineUniformLocation == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformSubroutineuiv = wglGetProcAddress("glGetUniformSubroutineuiv");
  if ((____glewGetUniformSubroutineuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformSubroutinesuiv = wglGetProcAddress("glUniformSubroutinesuiv");
  if ((____glewUniformSubroutinesuiv != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a6b0 0084a6b0_FUN_0084a6b0 ====
undefined4 FUN_0084a6b0(void);

// decompiled by BatchDecomp @ 0084a6b0 name=FUN_0084a6b0 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a6b0(void)

{
  bool bVar1;
  
  ____glewCompileShaderIncludeARB = wglGetProcAddress("glCompileShaderIncludeARB");
  bVar1 = ____glewCompileShaderIncludeARB == (PROC)0x0;
  ____glewDeleteNamedStringARB = wglGetProcAddress("glDeleteNamedStringARB");
  if ((____glewDeleteNamedStringARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedStringARB = wglGetProcAddress("glGetNamedStringARB");
  if ((____glewGetNamedStringARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNamedStringivARB = wglGetProcAddress("glGetNamedStringivARB");
  if ((____glewGetNamedStringivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsNamedStringARB = wglGetProcAddress("glIsNamedStringARB");
  if ((____glewIsNamedStringARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNamedStringARB = wglGetProcAddress("glNamedStringARB");
  if ((____glewNamedStringARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a7a0 0084a7a0_FUN_0084a7a0 ====
undefined4 FUN_0084a7a0(void);

// decompiled by BatchDecomp @ 0084a7a0 name=FUN_0084a7a0 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a7a0(void)

{
  bool bVar1;
  
  ____glewClientWaitSync = wglGetProcAddress("glClientWaitSync");
  bVar1 = ____glewClientWaitSync == (PROC)0x0;
  ____glewDeleteSync = wglGetProcAddress("glDeleteSync");
  if ((____glewDeleteSync == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFenceSync = wglGetProcAddress("glFenceSync");
  if ((____glewFenceSync == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetInteger64v = wglGetProcAddress("glGetInteger64v");
  if ((____glewGetInteger64v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetSynciv = wglGetProcAddress("glGetSynciv");
  if ((____glewGetSynciv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsSync = wglGetProcAddress("glIsSync");
  if ((____glewIsSync == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWaitSync = wglGetProcAddress("glWaitSync");
  if ((____glewWaitSync != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a910 0084a910_FUN_0084a910 ====
undefined4 FUN_0084a910(void);

// decompiled by BatchDecomp @ 0084a910 name=FUN_0084a910 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a910(void)

{
  bool bVar1;
  
  ____glewCompressedTexImage1DARB = wglGetProcAddress("glCompressedTexImage1DARB");
  bVar1 = ____glewCompressedTexImage1DARB == (PROC)0x0;
  ____glewCompressedTexImage2DARB = wglGetProcAddress("glCompressedTexImage2DARB");
  if ((____glewCompressedTexImage2DARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTexImage3DARB = wglGetProcAddress("glCompressedTexImage3DARB");
  if ((____glewCompressedTexImage3DARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTexSubImage1DARB = wglGetProcAddress("glCompressedTexSubImage1DARB");
  if ((____glewCompressedTexSubImage1DARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTexSubImage2DARB = wglGetProcAddress("glCompressedTexSubImage2DARB");
  if ((____glewCompressedTexSubImage2DARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCompressedTexSubImage3DARB = wglGetProcAddress("glCompressedTexSubImage3DARB");
  if ((____glewCompressedTexSubImage3DARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetCompressedTexImageARB = wglGetProcAddress("glGetCompressedTexImageARB");
  if ((____glewGetCompressedTexImageARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084a9c0 0084a9c0_FUN_0084a9c0 ====
undefined4 FUN_0084a9c0(void);

// decompiled by BatchDecomp @ 0084a9c0 name=FUN_0084a9c0 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084a9c0(void)

{
  bool bVar1;
  
  ____glewGetMultisamplefv = wglGetProcAddress("glGetMultisamplefv");
  bVar1 = ____glewGetMultisamplefv == (PROC)0x0;
  ____glewSampleMaski = wglGetProcAddress("glSampleMaski");
  if ((____glewSampleMaski == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexImage2DMultisample = wglGetProcAddress("glTexImage2DMultisample");
  if ((____glewTexImage2DMultisample == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexImage3DMultisample = wglGetProcAddress("glTexImage3DMultisample");
  if ((____glewTexImage3DMultisample != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084aa30 0084aa30_FUN_0084aa30 ====
undefined4 FUN_0084aa30(void);

// decompiled by BatchDecomp @ 0084aa30 name=FUN_0084aa30 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084aa30(void)

{
  bool bVar1;
  
  ____glewTexStorage1D = wglGetProcAddress("glTexStorage1D");
  bVar1 = ____glewTexStorage1D == (PROC)0x0;
  ____glewTexStorage2D = wglGetProcAddress("glTexStorage2D");
  if ((____glewTexStorage2D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexStorage3D = wglGetProcAddress("glTexStorage3D");
  if ((____glewTexStorage3D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage1DEXT = wglGetProcAddress("glTextureStorage1DEXT");
  if ((____glewTextureStorage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage2DEXT = wglGetProcAddress("glTextureStorage2DEXT");
  if ((____glewTextureStorage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage3DEXT = wglGetProcAddress("glTextureStorage3DEXT");
  if ((____glewTextureStorage3DEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084aac0 0084aac0_FUN_0084aac0 ====
undefined4 FUN_0084aac0(void);

// decompiled by BatchDecomp @ 0084aac0 name=FUN_0084aac0 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084aac0(void)

{
  bool bVar1;
  
  ____glewTexStorage2DMultisample = wglGetProcAddress("glTexStorage2DMultisample");
  bVar1 = ____glewTexStorage2DMultisample == (PROC)0x0;
  ____glewTexStorage3DMultisample = wglGetProcAddress("glTexStorage3DMultisample");
  if ((____glewTexStorage3DMultisample == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage2DMultisampleEXT = wglGetProcAddress("glTextureStorage2DMultisampleEXT");
  if ((____glewTextureStorage2DMultisampleEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureStorage3DMultisampleEXT = wglGetProcAddress("glTextureStorage3DMultisampleEXT");
  if ((____glewTextureStorage3DMultisampleEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084aba0 0084aba0_FUN_0084aba0 ====
undefined4 FUN_0084aba0(void);

// decompiled by BatchDecomp @ 0084aba0 name=FUN_0084aba0 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084aba0(void)

{
  bool bVar1;
  
  ____glewBindTransformFeedback = wglGetProcAddress("glBindTransformFeedback");
  bVar1 = ____glewBindTransformFeedback == (PROC)0x0;
  ____glewDeleteTransformFeedbacks = wglGetProcAddress("glDeleteTransformFeedbacks");
  if ((____glewDeleteTransformFeedbacks == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDrawTransformFeedback = wglGetProcAddress("glDrawTransformFeedback");
  if ((____glewDrawTransformFeedback == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenTransformFeedbacks = wglGetProcAddress("glGenTransformFeedbacks");
  if ((____glewGenTransformFeedbacks == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsTransformFeedback = wglGetProcAddress("glIsTransformFeedback");
  if ((____glewIsTransformFeedback == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPauseTransformFeedback = wglGetProcAddress("glPauseTransformFeedback");
  if ((____glewPauseTransformFeedback == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewResumeTransformFeedback = wglGetProcAddress("glResumeTransformFeedback");
  if ((____glewResumeTransformFeedback != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ac50 0084ac50_FUN_0084ac50 ====
undefined4 FUN_0084ac50(void);

// decompiled by BatchDecomp @ 0084ac50 name=FUN_0084ac50 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ac50(void)

{
  bool bVar1;
  
  ____glewBeginQueryIndexed = wglGetProcAddress("glBeginQueryIndexed");
  bVar1 = ____glewBeginQueryIndexed == (PROC)0x0;
  ____glewDrawTransformFeedbackStream = wglGetProcAddress("glDrawTransformFeedbackStream");
  if ((____glewDrawTransformFeedbackStream == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndQueryIndexed = wglGetProcAddress("glEndQueryIndexed");
  if ((____glewEndQueryIndexed == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryIndexediv = wglGetProcAddress("glGetQueryIndexediv");
  if ((____glewGetQueryIndexediv != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ad00 0084ad00_FUN_0084ad00 ====
undefined4 FUN_0084ad00(void);

// decompiled by BatchDecomp @ 0084ad00 name=FUN_0084ad00 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ad00(void)

{
  bool bVar1;
  
  ____glewLoadTransposeMatrixdARB = wglGetProcAddress("glLoadTransposeMatrixdARB");
  bVar1 = ____glewLoadTransposeMatrixdARB == (PROC)0x0;
  ____glewLoadTransposeMatrixfARB = wglGetProcAddress("glLoadTransposeMatrixfARB");
  if ((____glewLoadTransposeMatrixfARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultTransposeMatrixdARB = wglGetProcAddress("glMultTransposeMatrixdARB");
  if ((____glewMultTransposeMatrixdARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMultTransposeMatrixfARB = wglGetProcAddress("glMultTransposeMatrixfARB");
  if ((____glewMultTransposeMatrixfARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ad70 0084ad70_FUN_0084ad70 ====
undefined4 FUN_0084ad70(void);

// decompiled by BatchDecomp @ 0084ad70 name=FUN_0084ad70 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ad70(void)

{
  bool bVar1;
  
  ____glewBindBufferBase = wglGetProcAddress("glBindBufferBase");
  bVar1 = ____glewBindBufferBase == (PROC)0x0;
  ____glewBindBufferRange = wglGetProcAddress("glBindBufferRange");
  if ((____glewBindBufferRange == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveUniformBlockName = wglGetProcAddress("glGetActiveUniformBlockName");
  if ((____glewGetActiveUniformBlockName == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveUniformBlockiv = wglGetProcAddress("glGetActiveUniformBlockiv");
  if ((____glewGetActiveUniformBlockiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveUniformName = wglGetProcAddress("glGetActiveUniformName");
  if ((____glewGetActiveUniformName == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveUniformsiv = wglGetProcAddress("glGetActiveUniformsiv");
  if ((____glewGetActiveUniformsiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetIntegeri_v = wglGetProcAddress("glGetIntegeri_v");
  if ((____glewGetIntegeri_v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformBlockIndex = wglGetProcAddress("glGetUniformBlockIndex");
  if ((____glewGetUniformBlockIndex == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetUniformIndices = wglGetProcAddress("glGetUniformIndices");
  if ((____glewGetUniformIndices == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformBlockBinding = wglGetProcAddress("glUniformBlockBinding");
  if ((____glewUniformBlockBinding != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ae60 0084ae60_FUN_0084ae60 ====
undefined4 FUN_0084ae60(void);

// decompiled by BatchDecomp @ 0084ae60 name=FUN_0084ae60 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ae60(void)

{
  bool bVar1;
  
  ____glewBindVertexArray = wglGetProcAddress("glBindVertexArray");
  bVar1 = ____glewBindVertexArray == (PROC)0x0;
  ____glewDeleteVertexArrays = wglGetProcAddress("glDeleteVertexArrays");
  if ((____glewDeleteVertexArrays == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenVertexArrays = wglGetProcAddress("glGenVertexArrays");
  if ((____glewGenVertexArrays == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsVertexArray = wglGetProcAddress("glIsVertexArray");
  if ((____glewIsVertexArray != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084aed0 0084aed0_FUN_0084aed0 ====
undefined4 FUN_0084aed0(void);

// decompiled by BatchDecomp @ 0084aed0 name=FUN_0084aed0 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084aed0(void)

{
  bool bVar1;
  
  ____glewGetVertexAttribLdv = wglGetProcAddress("glGetVertexAttribLdv");
  bVar1 = ____glewGetVertexAttribLdv == (PROC)0x0;
  ____glewVertexAttribL1d = wglGetProcAddress("glVertexAttribL1d");
  if ((____glewVertexAttribL1d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL1dv = wglGetProcAddress("glVertexAttribL1dv");
  if ((____glewVertexAttribL1dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2d = wglGetProcAddress("glVertexAttribL2d");
  if ((____glewVertexAttribL2d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2dv = wglGetProcAddress("glVertexAttribL2dv");
  if ((____glewVertexAttribL2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3d = wglGetProcAddress("glVertexAttribL3d");
  if ((____glewVertexAttribL3d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3dv = wglGetProcAddress("glVertexAttribL3dv");
  if ((____glewVertexAttribL3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4d = wglGetProcAddress("glVertexAttribL4d");
  if ((____glewVertexAttribL4d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4dv = wglGetProcAddress("glVertexAttribL4dv");
  if ((____glewVertexAttribL4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribLPointer = wglGetProcAddress("glVertexAttribLPointer");
  if ((____glewVertexAttribLPointer != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084b0e0 0084b0e0_FUN_0084b0e0 ====
undefined4 FUN_0084b0e0(void);

// decompiled by BatchDecomp @ 0084b0e0 name=FUN_0084b0e0 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084b0e0(void)

{
  bool bVar1;
  
  ____glewVertexBlendARB = wglGetProcAddress("glVertexBlendARB");
  bVar1 = ____glewVertexBlendARB == (PROC)0x0;
  ____glewWeightPointerARB = wglGetProcAddress("glWeightPointerARB");
  if ((____glewWeightPointerARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightbvARB = wglGetProcAddress("glWeightbvARB");
  if ((____glewWeightbvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightdvARB = wglGetProcAddress("glWeightdvARB");
  if ((____glewWeightdvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightfvARB = wglGetProcAddress("glWeightfvARB");
  if ((____glewWeightfvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightivARB = wglGetProcAddress("glWeightivARB");
  if ((____glewWeightivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightsvARB = wglGetProcAddress("glWeightsvARB");
  if ((____glewWeightsvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightubvARB = wglGetProcAddress("glWeightubvARB");
  if ((____glewWeightubvARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightuivARB = wglGetProcAddress("glWeightuivARB");
  if ((____glewWeightuivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWeightusvARB = wglGetProcAddress("glWeightusvARB");
  if ((____glewWeightusvARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084b1d0 0084b1d0_FUN_0084b1d0 ====
undefined4 FUN_0084b1d0(void);

// decompiled by BatchDecomp @ 0084b1d0 name=FUN_0084b1d0 conv=unknown body=253

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084b1d0(void)

{
  bool bVar1;
  
  ____glewBindBufferARB = wglGetProcAddress("glBindBufferARB");
  bVar1 = ____glewBindBufferARB == (PROC)0x0;
  ____glewBufferDataARB = wglGetProcAddress("glBufferDataARB");
  if ((____glewBufferDataARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBufferSubDataARB = wglGetProcAddress("glBufferSubDataARB");
  if ((____glewBufferSubDataARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteBuffersARB = wglGetProcAddress("glDeleteBuffersARB");
  if ((____glewDeleteBuffersARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenBuffersARB = wglGetProcAddress("glGenBuffersARB");
  if ((____glewGenBuffersARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetBufferParameterivARB = wglGetProcAddress("glGetBufferParameterivARB");
  if ((____glewGetBufferParameterivARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetBufferPointervARB = wglGetProcAddress("glGetBufferPointervARB");
  if ((____glewGetBufferPointervARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetBufferSubDataARB = wglGetProcAddress("glGetBufferSubDataARB");
  if ((____glewGetBufferSubDataARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsBufferARB = wglGetProcAddress("glIsBufferARB");
  if ((____glewIsBufferARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapBufferARB = wglGetProcAddress("glMapBufferARB");
  if ((____glewMapBufferARB == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUnmapBufferARB = wglGetProcAddress("glUnmapBufferARB");
  if ((____glewUnmapBufferARB != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084bbd0 0084bbd0_FUN_0084bbd0 ====
undefined4 FUN_0084bbd0(void);

// decompiled by BatchDecomp @ 0084bbd0 name=FUN_0084bbd0 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084bbd0(void)

{
  bool bVar1;
  
  ____glewDepthRangeArrayv = wglGetProcAddress("glDepthRangeArrayv");
  bVar1 = ____glewDepthRangeArrayv == (PROC)0x0;
  ____glewDepthRangeIndexed = wglGetProcAddress("glDepthRangeIndexed");
  if ((____glewDepthRangeIndexed == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetDoublei_v = wglGetProcAddress("glGetDoublei_v");
  if ((____glewGetDoublei_v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetFloati_v = wglGetProcAddress("glGetFloati_v");
  if ((____glewGetFloati_v == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewScissorArrayv = wglGetProcAddress("glScissorArrayv");
  if ((____glewScissorArrayv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewScissorIndexed = wglGetProcAddress("glScissorIndexed");
  if ((____glewScissorIndexed == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewScissorIndexedv = wglGetProcAddress("glScissorIndexedv");
  if ((____glewScissorIndexedv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewViewportArrayv = wglGetProcAddress("glViewportArrayv");
  if ((____glewViewportArrayv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewViewportIndexedf = wglGetProcAddress("glViewportIndexedf");
  if ((____glewViewportIndexedf == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewViewportIndexedfv = wglGetProcAddress("glViewportIndexedfv");
  if ((____glewViewportIndexedfv != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084bea0 0084bea0_FUN_0084bea0 ====
undefined4 FUN_0084bea0(void);

// decompiled by BatchDecomp @ 0084bea0 name=FUN_0084bea0 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084bea0(void)

{
  bool bVar1;
  
  ____glewGetTexBumpParameterfvATI = wglGetProcAddress("glGetTexBumpParameterfvATI");
  bVar1 = ____glewGetTexBumpParameterfvATI == (PROC)0x0;
  ____glewGetTexBumpParameterivATI = wglGetProcAddress("glGetTexBumpParameterivATI");
  if ((____glewGetTexBumpParameterivATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexBumpParameterfvATI = wglGetProcAddress("glTexBumpParameterfvATI");
  if ((____glewTexBumpParameterfvATI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexBumpParameterivATI = wglGetProcAddress("glTexBumpParameterivATI");
  if ((____glewTexBumpParameterivATI != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084c930 0084c930_FUN_0084c930 ====
undefined4 FUN_0084c930(void);

// decompiled by BatchDecomp @ 0084c930 name=FUN_0084c930 conv=unknown body=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084c930(void)

{
  bool bVar1;
  
  ____glewCopyTexImage1DEXT = wglGetProcAddress("glCopyTexImage1DEXT");
  bVar1 = ____glewCopyTexImage1DEXT == (PROC)0x0;
  ____glewCopyTexImage2DEXT = wglGetProcAddress("glCopyTexImage2DEXT");
  if ((____glewCopyTexImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTexSubImage1DEXT = wglGetProcAddress("glCopyTexSubImage1DEXT");
  if ((____glewCopyTexSubImage1DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTexSubImage2DEXT = wglGetProcAddress("glCopyTexSubImage2DEXT");
  if ((____glewCopyTexSubImage2DEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyTexSubImage3DEXT = wglGetProcAddress("glCopyTexSubImage3DEXT");
  if ((____glewCopyTexSubImage3DEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084dd20 0084dd20_FUN_0084dd20 ====
undefined4 FUN_0084dd20(void);

// decompiled by BatchDecomp @ 0084dd20 name=FUN_0084dd20 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084dd20(void)

{
  bool bVar1;
  
  ____glewColorMaskIndexedEXT = wglGetProcAddress("glColorMaskIndexedEXT");
  bVar1 = ____glewColorMaskIndexedEXT == (PROC)0x0;
  ____glewDisableIndexedEXT = wglGetProcAddress("glDisableIndexedEXT");
  if ((____glewDisableIndexedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEnableIndexedEXT = wglGetProcAddress("glEnableIndexedEXT");
  if ((____glewEnableIndexedEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetBooleanIndexedvEXT = wglGetProcAddress("glGetBooleanIndexedvEXT");
  if ((____glewGetBooleanIndexedvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetIntegerIndexedvEXT = wglGetProcAddress("glGetIntegerIndexedvEXT");
  if ((____glewGetIntegerIndexedvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsEnabledIndexedEXT = wglGetProcAddress("glIsEnabledIndexedEXT");
  if ((____glewIsEnabledIndexedEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084de10 0084de10_FUN_0084de10 ====
undefined4 FUN_0084de10(void);

// decompiled by BatchDecomp @ 0084de10 name=FUN_0084de10 conv=unknown body=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084de10(void)

{
  bool bVar1;
  
  ____glewFogCoordPointerEXT = wglGetProcAddress("glFogCoordPointerEXT");
  bVar1 = ____glewFogCoordPointerEXT == (PROC)0x0;
  ____glewFogCoorddEXT = wglGetProcAddress("glFogCoorddEXT");
  if ((____glewFogCoorddEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFogCoorddvEXT = wglGetProcAddress("glFogCoorddvEXT");
  if ((____glewFogCoorddvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFogCoordfEXT = wglGetProcAddress("glFogCoordfEXT");
  if ((____glewFogCoordfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFogCoordfvEXT = wglGetProcAddress("glFogCoordfvEXT");
  if ((____glewFogCoordfvEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e590 0084e590_FUN_0084e590 ====
undefined4 FUN_0084e590(void);

// decompiled by BatchDecomp @ 0084e590 name=FUN_0084e590 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e590(void)

{
  bool bVar1;
  
  ____glewGetHistogramEXT = wglGetProcAddress("glGetHistogramEXT");
  bVar1 = ____glewGetHistogramEXT == (PROC)0x0;
  ____glewGetHistogramParameterfvEXT = wglGetProcAddress("glGetHistogramParameterfvEXT");
  if ((____glewGetHistogramParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetHistogramParameterivEXT = wglGetProcAddress("glGetHistogramParameterivEXT");
  if ((____glewGetHistogramParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMinmaxEXT = wglGetProcAddress("glGetMinmaxEXT");
  if ((____glewGetMinmaxEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMinmaxParameterfvEXT = wglGetProcAddress("glGetMinmaxParameterfvEXT");
  if ((____glewGetMinmaxParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMinmaxParameterivEXT = wglGetProcAddress("glGetMinmaxParameterivEXT");
  if ((____glewGetMinmaxParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewHistogramEXT = wglGetProcAddress("glHistogramEXT");
  if ((____glewHistogramEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMinmaxEXT = wglGetProcAddress("glMinmaxEXT");
  if ((____glewMinmaxEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewResetHistogramEXT = wglGetProcAddress("glResetHistogramEXT");
  if ((____glewResetHistogramEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewResetMinmaxEXT = wglGetProcAddress("glResetMinmaxEXT");
  if ((____glewResetMinmaxEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e790 0084e790_FUN_0084e790 ====
undefined4 FUN_0084e790(void);

// decompiled by BatchDecomp @ 0084e790 name=FUN_0084e790 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e790(void)

{
  bool bVar1;
  
  ____glewColorTableEXT = wglGetProcAddress("glColorTableEXT");
  bVar1 = ____glewColorTableEXT == (PROC)0x0;
  ____glewGetColorTableEXT = wglGetProcAddress("glGetColorTableEXT");
  if ((____glewGetColorTableEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetColorTableParameterfvEXT = wglGetProcAddress("glGetColorTableParameterfvEXT");
  if ((____glewGetColorTableParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetColorTableParameterivEXT = wglGetProcAddress("glGetColorTableParameterivEXT");
  if ((____glewGetColorTableParameterivEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e800 0084e800_FUN_0084e800 ====
undefined4 FUN_0084e800(void);

// decompiled by BatchDecomp @ 0084e800 name=FUN_0084e800 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e800(void)

{
  bool bVar1;
  
  ____glewGetPixelTransformParameterfvEXT = wglGetProcAddress("glGetPixelTransformParameterfvEXT");
  bVar1 = ____glewGetPixelTransformParameterfvEXT == (PROC)0x0;
  ____glewGetPixelTransformParameterivEXT = wglGetProcAddress("glGetPixelTransformParameterivEXT");
  if ((____glewGetPixelTransformParameterivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPixelTransformParameterfEXT = wglGetProcAddress("glPixelTransformParameterfEXT");
  if ((____glewPixelTransformParameterfEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPixelTransformParameterfvEXT = wglGetProcAddress("glPixelTransformParameterfvEXT");
  if ((____glewPixelTransformParameterfvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPixelTransformParameteriEXT = wglGetProcAddress("glPixelTransformParameteriEXT");
  if ((____glewPixelTransformParameteriEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPixelTransformParameterivEXT = wglGetProcAddress("glPixelTransformParameterivEXT");
  if ((____glewPixelTransformParameterivEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084e930 0084e930_FUN_0084e930 ====
undefined4 FUN_0084e930(void);

// decompiled by BatchDecomp @ 0084e930 name=FUN_0084e930 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084e930(void)

{
  bool bVar1;
  
  ____glewCoverageModulationNV = wglGetProcAddress("glCoverageModulationNV");
  bVar1 = ____glewCoverageModulationNV == (PROC)0x0;
  ____glewCoverageModulationTableNV = wglGetProcAddress("glCoverageModulationTableNV");
  if ((____glewCoverageModulationTableNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetCoverageModulationTableNV = wglGetProcAddress("glGetCoverageModulationTableNV");
  if ((____glewGetCoverageModulationTableNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewRasterSamplesEXT = wglGetProcAddress("glRasterSamplesEXT");
  if ((____glewRasterSamplesEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ecd0 0084ecd0_FUN_0084ecd0 ====
undefined4 FUN_0084ecd0(void);

// decompiled by BatchDecomp @ 0084ecd0 name=FUN_0084ecd0 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ecd0(void)

{
  bool bVar1;
  
  ____glewClearColorIiEXT = wglGetProcAddress("glClearColorIiEXT");
  bVar1 = ____glewClearColorIiEXT == (PROC)0x0;
  ____glewClearColorIuiEXT = wglGetProcAddress("glClearColorIuiEXT");
  if ((____glewClearColorIuiEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTexParameterIivEXT = wglGetProcAddress("glGetTexParameterIivEXT");
  if ((____glewGetTexParameterIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTexParameterIuivEXT = wglGetProcAddress("glGetTexParameterIuivEXT");
  if ((____glewGetTexParameterIuivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexParameterIivEXT = wglGetProcAddress("glTexParameterIivEXT");
  if ((____glewTexParameterIivEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexParameterIuivEXT = wglGetProcAddress("glTexParameterIuivEXT");
  if ((____glewTexParameterIuivEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ed60 0084ed60_FUN_0084ed60 ====
undefined4 FUN_0084ed60(void);

// decompiled by BatchDecomp @ 0084ed60 name=FUN_0084ed60 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ed60(void)

{
  bool bVar1;
  
  ____glewAreTexturesResidentEXT = wglGetProcAddress("glAreTexturesResidentEXT");
  bVar1 = ____glewAreTexturesResidentEXT == (PROC)0x0;
  ____glewBindTextureEXT = wglGetProcAddress("glBindTextureEXT");
  if ((____glewBindTextureEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteTexturesEXT = wglGetProcAddress("glDeleteTexturesEXT");
  if ((____glewDeleteTexturesEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenTexturesEXT = wglGetProcAddress("glGenTexturesEXT");
  if ((____glewGenTexturesEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsTextureEXT = wglGetProcAddress("glIsTextureEXT");
  if ((____glewIsTextureEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPrioritizeTexturesEXT = wglGetProcAddress("glPrioritizeTexturesEXT");
  if ((____glewPrioritizeTexturesEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ee50 0084ee50_FUN_0084ee50 ====
undefined4 FUN_0084ee50(void);

// decompiled by BatchDecomp @ 0084ee50 name=FUN_0084ee50 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ee50(void)

{
  bool bVar1;
  
  ____glewBeginTransformFeedbackEXT = wglGetProcAddress("glBeginTransformFeedbackEXT");
  bVar1 = ____glewBeginTransformFeedbackEXT == (PROC)0x0;
  ____glewBindBufferBaseEXT = wglGetProcAddress("glBindBufferBaseEXT");
  if ((____glewBindBufferBaseEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindBufferOffsetEXT = wglGetProcAddress("glBindBufferOffsetEXT");
  if ((____glewBindBufferOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindBufferRangeEXT = wglGetProcAddress("glBindBufferRangeEXT");
  if ((____glewBindBufferRangeEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndTransformFeedbackEXT = wglGetProcAddress("glEndTransformFeedbackEXT");
  if ((____glewEndTransformFeedbackEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTransformFeedbackVaryingEXT = wglGetProcAddress("glGetTransformFeedbackVaryingEXT");
  if ((____glewGetTransformFeedbackVaryingEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTransformFeedbackVaryingsEXT = wglGetProcAddress("glTransformFeedbackVaryingsEXT");
  if ((____glewTransformFeedbackVaryingsEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084ef00 0084ef00_FUN_0084ef00 ====
undefined4 FUN_0084ef00(void);

// decompiled by BatchDecomp @ 0084ef00 name=FUN_0084ef00 conv=unknown body=187

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084ef00(void)

{
  bool bVar1;
  
  ____glewArrayElementEXT = wglGetProcAddress("glArrayElementEXT");
  bVar1 = ____glewArrayElementEXT == (PROC)0x0;
  ____glewColorPointerEXT = wglGetProcAddress("glColorPointerEXT");
  if ((____glewColorPointerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDrawArraysEXT = wglGetProcAddress("glDrawArraysEXT");
  if ((____glewDrawArraysEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEdgeFlagPointerEXT = wglGetProcAddress("glEdgeFlagPointerEXT");
  if ((____glewEdgeFlagPointerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIndexPointerEXT = wglGetProcAddress("glIndexPointerEXT");
  if ((____glewIndexPointerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalPointerEXT = wglGetProcAddress("glNormalPointerEXT");
  if ((____glewNormalPointerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoordPointerEXT = wglGetProcAddress("glTexCoordPointerEXT");
  if ((____glewTexCoordPointerEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexPointerEXT = wglGetProcAddress("glVertexPointerEXT");
  if ((____glewVertexPointerEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084efc0 0084efc0_FUN_0084efc0 ====
undefined4 FUN_0084efc0(void);

// decompiled by BatchDecomp @ 0084efc0 name=FUN_0084efc0 conv=unknown body=253

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084efc0(void)

{
  bool bVar1;
  
  ____glewGetVertexAttribLdvEXT = wglGetProcAddress("glGetVertexAttribLdvEXT");
  bVar1 = ____glewGetVertexAttribLdvEXT == (PROC)0x0;
  ____glewVertexArrayVertexAttribLOffsetEXT =
       wglGetProcAddress("glVertexArrayVertexAttribLOffsetEXT");
  if ((____glewVertexArrayVertexAttribLOffsetEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL1dEXT = wglGetProcAddress("glVertexAttribL1dEXT");
  if ((____glewVertexAttribL1dEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL1dvEXT = wglGetProcAddress("glVertexAttribL1dvEXT");
  if ((____glewVertexAttribL1dvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2dEXT = wglGetProcAddress("glVertexAttribL2dEXT");
  if ((____glewVertexAttribL2dEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2dvEXT = wglGetProcAddress("glVertexAttribL2dvEXT");
  if ((____glewVertexAttribL2dvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3dEXT = wglGetProcAddress("glVertexAttribL3dEXT");
  if ((____glewVertexAttribL3dEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3dvEXT = wglGetProcAddress("glVertexAttribL3dvEXT");
  if ((____glewVertexAttribL3dvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4dEXT = wglGetProcAddress("glVertexAttribL4dEXT");
  if ((____glewVertexAttribL4dEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4dvEXT = wglGetProcAddress("glVertexAttribL4dvEXT");
  if ((____glewVertexAttribL4dvEXT == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribLPointerEXT = wglGetProcAddress("glVertexAttribLPointerEXT");
  if ((____glewVertexAttribLPointerEXT != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f540 0084f540_FUN_0084f540 ====
undefined4 FUN_0084f540(void);

// decompiled by BatchDecomp @ 0084f540 name=FUN_0084f540 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f540(void)

{
  bool bVar1;
  
  ____glewGetImageTransformParameterfvHP = wglGetProcAddress("glGetImageTransformParameterfvHP");
  bVar1 = ____glewGetImageTransformParameterfvHP == (PROC)0x0;
  ____glewGetImageTransformParameterivHP = wglGetProcAddress("glGetImageTransformParameterivHP");
  if ((____glewGetImageTransformParameterivHP == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewImageTransformParameterfHP = wglGetProcAddress("glImageTransformParameterfHP");
  if ((____glewImageTransformParameterfHP == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewImageTransformParameterfvHP = wglGetProcAddress("glImageTransformParameterfvHP");
  if ((____glewImageTransformParameterfvHP == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewImageTransformParameteriHP = wglGetProcAddress("glImageTransformParameteriHP");
  if ((____glewImageTransformParameteriHP == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewImageTransformParameterivHP = wglGetProcAddress("glImageTransformParameterivHP");
  if ((____glewImageTransformParameterivHP != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f610 0084f610_FUN_0084f610 ====
undefined4 FUN_0084f610(void);

// decompiled by BatchDecomp @ 0084f610 name=FUN_0084f610 conv=unknown body=187

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f610(void)

{
  bool bVar1;
  
  ____glewColorPointerListIBM = wglGetProcAddress("glColorPointerListIBM");
  bVar1 = ____glewColorPointerListIBM == (PROC)0x0;
  ____glewEdgeFlagPointerListIBM = wglGetProcAddress("glEdgeFlagPointerListIBM");
  if ((____glewEdgeFlagPointerListIBM == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFogCoordPointerListIBM = wglGetProcAddress("glFogCoordPointerListIBM");
  if ((____glewFogCoordPointerListIBM == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIndexPointerListIBM = wglGetProcAddress("glIndexPointerListIBM");
  if ((____glewIndexPointerListIBM == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewNormalPointerListIBM = wglGetProcAddress("glNormalPointerListIBM");
  if ((____glewNormalPointerListIBM == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSecondaryColorPointerListIBM = wglGetProcAddress("glSecondaryColorPointerListIBM");
  if ((____glewSecondaryColorPointerListIBM == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoordPointerListIBM = wglGetProcAddress("glTexCoordPointerListIBM");
  if ((____glewTexCoordPointerListIBM == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexPointerListIBM = wglGetProcAddress("glVertexPointerListIBM");
  if ((____glewVertexPointerListIBM != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f720 0084f720_FUN_0084f720 ====
undefined4 FUN_0084f720(void);

// decompiled by BatchDecomp @ 0084f720 name=FUN_0084f720 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f720(void)

{
  bool bVar1;
  
  ____glewColorPointervINTEL = wglGetProcAddress("glColorPointervINTEL");
  bVar1 = ____glewColorPointervINTEL == (PROC)0x0;
  ____glewNormalPointervINTEL = wglGetProcAddress("glNormalPointervINTEL");
  if ((____glewNormalPointervINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexCoordPointervINTEL = wglGetProcAddress("glTexCoordPointervINTEL");
  if ((____glewTexCoordPointervINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexPointervINTEL = wglGetProcAddress("glVertexPointervINTEL");
  if ((____glewVertexPointervINTEL != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f790 0084f790_FUN_0084f790 ====
undefined4 FUN_0084f790(void);

// decompiled by BatchDecomp @ 0084f790 name=FUN_0084f790 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f790(void)

{
  bool bVar1;
  
  ____glewBeginPerfQueryINTEL = wglGetProcAddress("glBeginPerfQueryINTEL");
  bVar1 = ____glewBeginPerfQueryINTEL == (PROC)0x0;
  ____glewCreatePerfQueryINTEL = wglGetProcAddress("glCreatePerfQueryINTEL");
  if ((____glewCreatePerfQueryINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeletePerfQueryINTEL = wglGetProcAddress("glDeletePerfQueryINTEL");
  if ((____glewDeletePerfQueryINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndPerfQueryINTEL = wglGetProcAddress("glEndPerfQueryINTEL");
  if ((____glewEndPerfQueryINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetFirstPerfQueryIdINTEL = wglGetProcAddress("glGetFirstPerfQueryIdINTEL");
  if ((____glewGetFirstPerfQueryIdINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetNextPerfQueryIdINTEL = wglGetProcAddress("glGetNextPerfQueryIdINTEL");
  if ((____glewGetNextPerfQueryIdINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfCounterInfoINTEL = wglGetProcAddress("glGetPerfCounterInfoINTEL");
  if ((____glewGetPerfCounterInfoINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfQueryDataINTEL = wglGetProcAddress("glGetPerfQueryDataINTEL");
  if ((____glewGetPerfQueryDataINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfQueryIdByNameINTEL = wglGetProcAddress("glGetPerfQueryIdByNameINTEL");
  if ((____glewGetPerfQueryIdByNameINTEL == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetPerfQueryInfoINTEL = wglGetProcAddress("glGetPerfQueryInfoINTEL");
  if ((____glewGetPerfQueryInfoINTEL != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f8e0 0084f8e0_FUN_0084f8e0 ====
undefined4 FUN_0084f8e0(void);

// decompiled by BatchDecomp @ 0084f8e0 name=FUN_0084f8e0 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f8e0(void)

{
  bool bVar1;
  
  ____glewDebugMessageCallback = wglGetProcAddress("glDebugMessageCallback");
  bVar1 = ____glewDebugMessageCallback == (PROC)0x0;
  ____glewDebugMessageControl = wglGetProcAddress("glDebugMessageControl");
  if ((____glewDebugMessageControl == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDebugMessageInsert = wglGetProcAddress("glDebugMessageInsert");
  if ((____glewDebugMessageInsert == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetDebugMessageLog = wglGetProcAddress("glGetDebugMessageLog");
  if ((____glewGetDebugMessageLog == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetObjectLabel = wglGetProcAddress("glGetObjectLabel");
  if ((____glewGetObjectLabel == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetObjectPtrLabel = wglGetProcAddress("glGetObjectPtrLabel");
  if ((____glewGetObjectPtrLabel == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewObjectLabel = wglGetProcAddress("glObjectLabel");
  if ((____glewObjectLabel == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewObjectPtrLabel = wglGetProcAddress("glObjectPtrLabel");
  if ((____glewObjectPtrLabel == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPopDebugGroup = wglGetProcAddress("glPopDebugGroup");
  if ((____glewPopDebugGroup == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPushDebugGroup = wglGetProcAddress("glPushDebugGroup");
  if ((____glewPushDebugGroup != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084f9d0 0084f9d0_FUN_0084f9d0 ====
undefined4 FUN_0084f9d0(void);

// decompiled by BatchDecomp @ 0084f9d0 name=FUN_0084f9d0 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084f9d0(void)

{
  bool bVar1;
  
  ____glewGetnUniformfv = wglGetProcAddress("glGetnUniformfv");
  bVar1 = ____glewGetnUniformfv == (PROC)0x0;
  ____glewGetnUniformiv = wglGetProcAddress("glGetnUniformiv");
  if ((____glewGetnUniformiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetnUniformuiv = wglGetProcAddress("glGetnUniformuiv");
  if ((____glewGetnUniformuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReadnPixels = wglGetProcAddress("glReadnPixels");
  if ((____glewReadnPixels != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000850260 00850260_FUN_00850260 ====
undefined4 FUN_00850260(void);

// decompiled by BatchDecomp @ 00850260 name=FUN_00850260 conv=unknown body=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00850260(void)

{
  bool bVar1;
  
  ____glewDrawVkImageNV = wglGetProcAddress("glDrawVkImageNV");
  bVar1 = ____glewDrawVkImageNV == (PROC)0x0;
  ____glewGetVkProcAddrNV = wglGetProcAddress("glGetVkProcAddrNV");
  if ((____glewGetVkProcAddrNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSignalVkFenceNV = wglGetProcAddress("glSignalVkFenceNV");
  if ((____glewSignalVkFenceNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSignalVkSemaphoreNV = wglGetProcAddress("glSignalVkSemaphoreNV");
  if ((____glewSignalVkSemaphoreNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWaitVkSemaphoreNV = wglGetProcAddress("glWaitVkSemaphoreNV");
  if ((____glewWaitVkSemaphoreNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008502e0 008502e0_FUN_008502e0 ====
undefined4 FUN_008502e0(void);

// decompiled by BatchDecomp @ 008502e0 name=FUN_008502e0 conv=unknown body=209

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008502e0(void)

{
  bool bVar1;
  
  ____glewEvalMapsNV = wglGetProcAddress("glEvalMapsNV");
  bVar1 = ____glewEvalMapsNV == (PROC)0x0;
  ____glewGetMapAttribParameterfvNV = wglGetProcAddress("glGetMapAttribParameterfvNV");
  if ((____glewGetMapAttribParameterfvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMapAttribParameterivNV = wglGetProcAddress("glGetMapAttribParameterivNV");
  if ((____glewGetMapAttribParameterivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMapControlPointsNV = wglGetProcAddress("glGetMapControlPointsNV");
  if ((____glewGetMapControlPointsNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMapParameterfvNV = wglGetProcAddress("glGetMapParameterfvNV");
  if ((____glewGetMapParameterfvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetMapParameterivNV = wglGetProcAddress("glGetMapParameterivNV");
  if ((____glewGetMapParameterivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapControlPointsNV = wglGetProcAddress("glMapControlPointsNV");
  if ((____glewMapControlPointsNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapParameterfvNV = wglGetProcAddress("glMapParameterfvNV");
  if ((____glewMapParameterfvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapParameterivNV = wglGetProcAddress("glMapParameterivNV");
  if ((____glewMapParameterivNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000850410 00850410_FUN_00850410 ====
undefined4 FUN_00850410(void);

// decompiled by BatchDecomp @ 00850410 name=FUN_00850410 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00850410(void)

{
  bool bVar1;
  
  ____glewDeleteFencesNV = wglGetProcAddress("glDeleteFencesNV");
  bVar1 = ____glewDeleteFencesNV == (PROC)0x0;
  ____glewFinishFenceNV = wglGetProcAddress("glFinishFenceNV");
  if ((____glewFinishFenceNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenFencesNV = wglGetProcAddress("glGenFencesNV");
  if ((____glewGenFencesNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetFenceivNV = wglGetProcAddress("glGetFenceivNV");
  if ((____glewGetFenceivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsFenceNV = wglGetProcAddress("glIsFenceNV");
  if ((____glewIsFenceNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSetFenceNV = wglGetProcAddress("glSetFenceNV");
  if ((____glewSetFenceNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTestFenceNV = wglGetProcAddress("glTestFenceNV");
  if ((____glewTestFenceNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008504e0 008504e0_FUN_008504e0 ====
undefined4 FUN_008504e0(void);

// decompiled by BatchDecomp @ 008504e0 name=FUN_008504e0 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008504e0(void)

{
  bool bVar1;
  
  ____glewGetProgramNamedParameterdvNV = wglGetProcAddress("glGetProgramNamedParameterdvNV");
  bVar1 = ____glewGetProgramNamedParameterdvNV == (PROC)0x0;
  ____glewGetProgramNamedParameterfvNV = wglGetProcAddress("glGetProgramNamedParameterfvNV");
  if ((____glewGetProgramNamedParameterfvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramNamedParameter4dNV = wglGetProcAddress("glProgramNamedParameter4dNV");
  if ((____glewProgramNamedParameter4dNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramNamedParameter4dvNV = wglGetProcAddress("glProgramNamedParameter4dvNV");
  if ((____glewProgramNamedParameter4dvNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramNamedParameter4fNV = wglGetProcAddress("glProgramNamedParameter4fNV");
  if ((____glewProgramNamedParameter4fNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewProgramNamedParameter4fvNV = wglGetProcAddress("glProgramNamedParameter4fvNV");
  if ((____glewProgramNamedParameter4fvNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000850f10 00850f10_FUN_00850f10 ====
undefined4 FUN_00850f10(void);

// decompiled by BatchDecomp @ 00850f10 name=FUN_00850f10 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00850f10(void)

{
  bool bVar1;
  
  ____glewBeginOcclusionQueryNV = wglGetProcAddress("glBeginOcclusionQueryNV");
  bVar1 = ____glewBeginOcclusionQueryNV == (PROC)0x0;
  ____glewDeleteOcclusionQueriesNV = wglGetProcAddress("glDeleteOcclusionQueriesNV");
  if ((____glewDeleteOcclusionQueriesNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndOcclusionQueryNV = wglGetProcAddress("glEndOcclusionQueryNV");
  if ((____glewEndOcclusionQueryNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenOcclusionQueriesNV = wglGetProcAddress("glGenOcclusionQueriesNV");
  if ((____glewGenOcclusionQueriesNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetOcclusionQueryivNV = wglGetProcAddress("glGetOcclusionQueryivNV");
  if ((____glewGetOcclusionQueryivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetOcclusionQueryuivNV = wglGetProcAddress("glGetOcclusionQueryuivNV");
  if ((____glewGetOcclusionQueryuivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsOcclusionQueryNV = wglGetProcAddress("glIsOcclusionQueryNV");
  if ((____glewIsOcclusionQueryNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851620 00851620_FUN_00851620 ====
undefined4 FUN_00851620(void);

// decompiled by BatchDecomp @ 00851620 name=FUN_00851620 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851620(void)

{
  bool bVar1;
  
  ____glewGetVideoi64vNV = wglGetProcAddress("glGetVideoi64vNV");
  bVar1 = ____glewGetVideoi64vNV == (PROC)0x0;
  ____glewGetVideoivNV = wglGetProcAddress("glGetVideoivNV");
  if ((____glewGetVideoivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVideoui64vNV = wglGetProcAddress("glGetVideoui64vNV");
  if ((____glewGetVideoui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVideouivNV = wglGetProcAddress("glGetVideouivNV");
  if ((____glewGetVideouivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPresentFrameDualFillNV = wglGetProcAddress("glPresentFrameDualFillNV");
  if ((____glewPresentFrameDualFillNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPresentFrameKeyedNV = wglGetProcAddress("glPresentFrameKeyedNV");
  if ((____glewPresentFrameKeyedNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008519f0 008519f0_FUN_008519f0 ====
undefined4 FUN_008519f0(void);

// decompiled by BatchDecomp @ 008519f0 name=FUN_008519f0 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008519f0(void)

{
  bool bVar1;
  
  ____glewTexImage2DMultisampleCoverageNV = wglGetProcAddress("glTexImage2DMultisampleCoverageNV");
  bVar1 = ____glewTexImage2DMultisampleCoverageNV == (PROC)0x0;
  ____glewTexImage3DMultisampleCoverageNV = wglGetProcAddress("glTexImage3DMultisampleCoverageNV");
  if ((____glewTexImage3DMultisampleCoverageNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureImage2DMultisampleCoverageNV =
       wglGetProcAddress("glTextureImage2DMultisampleCoverageNV");
  if ((____glewTextureImage2DMultisampleCoverageNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureImage2DMultisampleNV = wglGetProcAddress("glTextureImage2DMultisampleNV");
  if ((____glewTextureImage2DMultisampleNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureImage3DMultisampleCoverageNV =
       wglGetProcAddress("glTextureImage3DMultisampleCoverageNV");
  if ((____glewTextureImage3DMultisampleCoverageNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTextureImage3DMultisampleNV = wglGetProcAddress("glTextureImage3DMultisampleNV");
  if ((____glewTextureImage3DMultisampleNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851a80 00851a80_FUN_00851a80 ====
undefined4 FUN_00851a80(void);

// decompiled by BatchDecomp @ 00851a80 name=FUN_00851a80 conv=unknown body=253

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851a80(void)

{
  bool bVar1;
  
  ____glewActiveVaryingNV = wglGetProcAddress("glActiveVaryingNV");
  bVar1 = ____glewActiveVaryingNV == (PROC)0x0;
  ____glewBeginTransformFeedbackNV = wglGetProcAddress("glBeginTransformFeedbackNV");
  if ((____glewBeginTransformFeedbackNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindBufferBaseNV = wglGetProcAddress("glBindBufferBaseNV");
  if ((____glewBindBufferBaseNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindBufferOffsetNV = wglGetProcAddress("glBindBufferOffsetNV");
  if ((____glewBindBufferOffsetNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBindBufferRangeNV = wglGetProcAddress("glBindBufferRangeNV");
  if ((____glewBindBufferRangeNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndTransformFeedbackNV = wglGetProcAddress("glEndTransformFeedbackNV");
  if ((____glewEndTransformFeedbackNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetActiveVaryingNV = wglGetProcAddress("glGetActiveVaryingNV");
  if ((____glewGetActiveVaryingNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetTransformFeedbackVaryingNV = wglGetProcAddress("glGetTransformFeedbackVaryingNV");
  if ((____glewGetTransformFeedbackVaryingNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetVaryingLocationNV = wglGetProcAddress("glGetVaryingLocationNV");
  if ((____glewGetVaryingLocationNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTransformFeedbackAttribsNV = wglGetProcAddress("glTransformFeedbackAttribsNV");
  if ((____glewTransformFeedbackAttribsNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTransformFeedbackVaryingsNV = wglGetProcAddress("glTransformFeedbackVaryingsNV");
  if ((____glewTransformFeedbackVaryingsNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851b80 00851b80_FUN_00851b80 ====
undefined4 FUN_00851b80(void);

// decompiled by BatchDecomp @ 00851b80 name=FUN_00851b80 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851b80(void)

{
  bool bVar1;
  
  ____glewBindTransformFeedbackNV = wglGetProcAddress("glBindTransformFeedbackNV");
  bVar1 = ____glewBindTransformFeedbackNV == (PROC)0x0;
  ____glewDeleteTransformFeedbacksNV = wglGetProcAddress("glDeleteTransformFeedbacksNV");
  if ((____glewDeleteTransformFeedbacksNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDrawTransformFeedbackNV = wglGetProcAddress("glDrawTransformFeedbackNV");
  if ((____glewDrawTransformFeedbackNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenTransformFeedbacksNV = wglGetProcAddress("glGenTransformFeedbacksNV");
  if ((____glewGenTransformFeedbacksNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsTransformFeedbackNV = wglGetProcAddress("glIsTransformFeedbackNV");
  if ((____glewIsTransformFeedbackNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPauseTransformFeedbackNV = wglGetProcAddress("glPauseTransformFeedbackNV");
  if ((____glewPauseTransformFeedbackNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewResumeTransformFeedbackNV = wglGetProcAddress("glResumeTransformFeedbackNV");
  if ((____glewResumeTransformFeedbackNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851c30 00851c30_FUN_00851c30 ====
undefined4 FUN_00851c30(void);

// decompiled by BatchDecomp @ 00851c30 name=FUN_00851c30 conv=unknown body=231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851c30(void)

{
  bool bVar1;
  
  ____glewVDPAUFiniNV = wglGetProcAddress("glVDPAUFiniNV");
  bVar1 = ____glewVDPAUFiniNV == (PROC)0x0;
  ____glewVDPAUGetSurfaceivNV = wglGetProcAddress("glVDPAUGetSurfaceivNV");
  if ((____glewVDPAUGetSurfaceivNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAUInitNV = wglGetProcAddress("glVDPAUInitNV");
  if ((____glewVDPAUInitNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAUIsSurfaceNV = wglGetProcAddress("glVDPAUIsSurfaceNV");
  if ((____glewVDPAUIsSurfaceNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAUMapSurfacesNV = wglGetProcAddress("glVDPAUMapSurfacesNV");
  if ((____glewVDPAUMapSurfacesNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAURegisterOutputSurfaceNV = wglGetProcAddress("glVDPAURegisterOutputSurfaceNV");
  if ((____glewVDPAURegisterOutputSurfaceNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAURegisterVideoSurfaceNV = wglGetProcAddress("glVDPAURegisterVideoSurfaceNV");
  if ((____glewVDPAURegisterVideoSurfaceNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAUSurfaceAccessNV = wglGetProcAddress("glVDPAUSurfaceAccessNV");
  if ((____glewVDPAUSurfaceAccessNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAUUnmapSurfacesNV = wglGetProcAddress("glVDPAUUnmapSurfacesNV");
  if ((____glewVDPAUUnmapSurfacesNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVDPAUUnregisterSurfaceNV = wglGetProcAddress("glVDPAUUnregisterSurfaceNV");
  if ((____glewVDPAUUnregisterSurfaceNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852700 00852700_FUN_00852700 ====
undefined4 FUN_00852700(void);

// decompiled by BatchDecomp @ 00852700 name=FUN_00852700 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852700(void)

{
  bool bVar1;
  
  ____glewClearDepthfOES = wglGetProcAddress("glClearDepthfOES");
  bVar1 = ____glewClearDepthfOES == (PROC)0x0;
  ____glewClipPlanefOES = wglGetProcAddress("glClipPlanefOES");
  if ((____glewClipPlanefOES == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDepthRangefOES = wglGetProcAddress("glDepthRangefOES");
  if ((____glewDepthRangefOES == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFrustumfOES = wglGetProcAddress("glFrustumfOES");
  if ((____glewFrustumfOES == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetClipPlanefOES = wglGetProcAddress("glGetClipPlanefOES");
  if ((____glewGetClipPlanefOES == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewOrthofOES = wglGetProcAddress("glOrthofOES");
  if ((____glewOrthofOES != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000852dc0 00852dc0_FUN_00852dc0 ====
undefined4 FUN_00852dc0(void);

// decompiled by BatchDecomp @ 00852dc0 name=FUN_00852dc0 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00852dc0(void)

{
  bool bVar1;
  
  ____glewAsyncMarkerSGIX = wglGetProcAddress("glAsyncMarkerSGIX");
  bVar1 = ____glewAsyncMarkerSGIX == (PROC)0x0;
  ____glewDeleteAsyncMarkersSGIX = wglGetProcAddress("glDeleteAsyncMarkersSGIX");
  if ((____glewDeleteAsyncMarkersSGIX == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFinishAsyncSGIX = wglGetProcAddress("glFinishAsyncSGIX");
  if ((____glewFinishAsyncSGIX == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenAsyncMarkersSGIX = wglGetProcAddress("glGenAsyncMarkersSGIX");
  if ((____glewGenAsyncMarkersSGIX == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsAsyncMarkerSGIX = wglGetProcAddress("glIsAsyncMarkerSGIX");
  if ((____glewIsAsyncMarkerSGIX == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewPollAsyncSGIX = wglGetProcAddress("glPollAsyncSGIX");
  if ((____glewPollAsyncSGIX != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000853080 00853080_FUN_00853080 ====
undefined4 FUN_00853080(void);

// decompiled by BatchDecomp @ 00853080 name=FUN_00853080 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00853080(void)

{
  bool bVar1;
  
  ____glewSpriteParameterfSGIX = wglGetProcAddress("glSpriteParameterfSGIX");
  bVar1 = ____glewSpriteParameterfSGIX == (PROC)0x0;
  ____glewSpriteParameterfvSGIX = wglGetProcAddress("glSpriteParameterfvSGIX");
  if ((____glewSpriteParameterfvSGIX == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSpriteParameteriSGIX = wglGetProcAddress("glSpriteParameteriSGIX");
  if ((____glewSpriteParameteriSGIX == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewSpriteParameterivSGIX = wglGetProcAddress("glSpriteParameterivSGIX");
  if ((____glewSpriteParameterivSGIX != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000853110 00853110_FUN_00853110 ====
undefined4 FUN_00853110(void);

// decompiled by BatchDecomp @ 00853110 name=FUN_00853110 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00853110(void)

{
  bool bVar1;
  
  ____glewColorTableParameterfvSGI = wglGetProcAddress("glColorTableParameterfvSGI");
  bVar1 = ____glewColorTableParameterfvSGI == (PROC)0x0;
  ____glewColorTableParameterivSGI = wglGetProcAddress("glColorTableParameterivSGI");
  if ((____glewColorTableParameterivSGI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewColorTableSGI = wglGetProcAddress("glColorTableSGI");
  if ((____glewColorTableSGI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewCopyColorTableSGI = wglGetProcAddress("glCopyColorTableSGI");
  if ((____glewCopyColorTableSGI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetColorTableParameterfvSGI = wglGetProcAddress("glGetColorTableParameterfvSGI");
  if ((____glewGetColorTableParameterfvSGI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetColorTableParameterivSGI = wglGetProcAddress("glGetColorTableParameterivSGI");
  if ((____glewGetColorTableParameterivSGI == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetColorTableSGI = wglGetProcAddress("glGetColorTableSGI");
  if ((____glewGetColorTableSGI != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008531e0 008531e0_FUN_008531e0 ====
undefined4 FUN_008531e0(void);

// decompiled by BatchDecomp @ 008531e0 name=FUN_008531e0 conv=unknown body=187

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008531e0(void)

{
  bool bVar1;
  
  ____glewGlobalAlphaFactorbSUN = wglGetProcAddress("glGlobalAlphaFactorbSUN");
  bVar1 = ____glewGlobalAlphaFactorbSUN == (PROC)0x0;
  ____glewGlobalAlphaFactordSUN = wglGetProcAddress("glGlobalAlphaFactordSUN");
  if ((____glewGlobalAlphaFactordSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGlobalAlphaFactorfSUN = wglGetProcAddress("glGlobalAlphaFactorfSUN");
  if ((____glewGlobalAlphaFactorfSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGlobalAlphaFactoriSUN = wglGetProcAddress("glGlobalAlphaFactoriSUN");
  if ((____glewGlobalAlphaFactoriSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGlobalAlphaFactorsSUN = wglGetProcAddress("glGlobalAlphaFactorsSUN");
  if ((____glewGlobalAlphaFactorsSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGlobalAlphaFactorubSUN = wglGetProcAddress("glGlobalAlphaFactorubSUN");
  if ((____glewGlobalAlphaFactorubSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGlobalAlphaFactoruiSUN = wglGetProcAddress("glGlobalAlphaFactoruiSUN");
  if ((____glewGlobalAlphaFactoruiSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGlobalAlphaFactorusSUN = wglGetProcAddress("glGlobalAlphaFactorusSUN");
  if ((____glewGlobalAlphaFactorusSUN != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008532c0 008532c0_FUN_008532c0 ====
undefined4 FUN_008532c0(void);

// decompiled by BatchDecomp @ 008532c0 name=FUN_008532c0 conv=unknown body=165

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008532c0(void)

{
  bool bVar1;
  
  ____glewReplacementCodePointerSUN = wglGetProcAddress("glReplacementCodePointerSUN");
  bVar1 = ____glewReplacementCodePointerSUN == (PROC)0x0;
  ____glewReplacementCodeubSUN = wglGetProcAddress("glReplacementCodeubSUN");
  if ((____glewReplacementCodeubSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeubvSUN = wglGetProcAddress("glReplacementCodeubvSUN");
  if ((____glewReplacementCodeubvSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuiSUN = wglGetProcAddress("glReplacementCodeuiSUN");
  if ((____glewReplacementCodeuiSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeuivSUN = wglGetProcAddress("glReplacementCodeuivSUN");
  if ((____glewReplacementCodeuivSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeusSUN = wglGetProcAddress("glReplacementCodeusSUN");
  if ((____glewReplacementCodeusSUN == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewReplacementCodeusvSUN = wglGetProcAddress("glReplacementCodeusvSUN");
  if ((____glewReplacementCodeusvSUN != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 00008536f0 008536f0_FUN_008536f0 ====
undefined4 FUN_008536f0(void);

// decompiled by BatchDecomp @ 008536f0 name=FUN_008536f0 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008536f0(void)

{
  bool bVar1;
  
  ____glewCopyTexSubImage3D = wglGetProcAddress("glCopyTexSubImage3D");
  bVar1 = ____glewCopyTexSubImage3D == (PROC)0x0;
  ____glewDrawRangeElements = wglGetProcAddress("glDrawRangeElements");
  if ((____glewDrawRangeElements == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexImage3D = wglGetProcAddress("glTexImage3D");
  if ((____glewTexImage3D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewTexSubImage3D = wglGetProcAddress("glTexSubImage3D");
  if ((____glewTexSubImage3D != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000854940 00854940_FUN_00854940 ====
undefined4 FUN_00854940(void);

// decompiled by BatchDecomp @ 00854940 name=FUN_00854940 conv=unknown body=143

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00854940(void)

{
  bool bVar1;
  
  ____glewUniformMatrix2x3fv = wglGetProcAddress("glUniformMatrix2x3fv");
  bVar1 = ____glewUniformMatrix2x3fv == (PROC)0x0;
  ____glewUniformMatrix2x4fv = wglGetProcAddress("glUniformMatrix2x4fv");
  if ((____glewUniformMatrix2x4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix3x2fv = wglGetProcAddress("glUniformMatrix3x2fv");
  if ((____glewUniformMatrix3x2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix3x4fv = wglGetProcAddress("glUniformMatrix3x4fv");
  if ((____glewUniformMatrix3x4fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix4x2fv = wglGetProcAddress("glUniformMatrix4x2fv");
  if ((____glewUniformMatrix4x2fv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix4x3fv = wglGetProcAddress("glUniformMatrix4x3fv");
  if ((____glewUniformMatrix4x3fv != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000854ed0 00854ed0_FUN_00854ed0 ====
extern undefined4 FUN_00847bc0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 FUN_00854ed0(void);

// decompiled by BatchDecomp @ 00854ed0 name=FUN_00854ed0 conv=unknown body=114

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00854ed0(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00847bc0();
  bVar2 = cVar1 != '\0';
  ____glewDrawArraysInstanced = wglGetProcAddress("glDrawArraysInstanced");
  if ((____glewDrawArraysInstanced == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewDrawElementsInstanced = wglGetProcAddress("glDrawElementsInstanced");
  if ((____glewDrawElementsInstanced == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewPrimitiveRestartIndex = wglGetProcAddress("glPrimitiveRestartIndex");
  if ((____glewPrimitiveRestartIndex == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewTexBuffer = wglGetProcAddress("glTexBuffer");
  if ((____glewTexBuffer != (PROC)0x0) && (!bVar2)) {
    return 0;
  }
  return 1;
}


//==== 0000854f50 00854f50_FUN_00854f50 ====
undefined4 FUN_00848570(void);
extern undefined4 FUN_00849910(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
undefined4 FUN_0084a7a0(void);
undefined4 FUN_0084a9c0(void);
undefined4 FUN_00854f50(void);

// decompiled by BatchDecomp @ 00854f50 name=FUN_00854f50 conv=unknown body=136

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00854f50(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_00848570();
  bVar2 = cVar1 != '\0';
  cVar1 = FUN_00849910();
  if ((cVar1 != '\0') || (bVar2)) {
    bVar2 = true;
  }
  cVar1 = FUN_0084a7a0();
  if ((cVar1 != '\0') || (bVar2)) {
    bVar2 = true;
  }
  cVar1 = FUN_0084a9c0();
  if ((cVar1 != '\0') || (bVar2)) {
    bVar2 = true;
  }
  ____glewFramebufferTexture = wglGetProcAddress("glFramebufferTexture");
  if ((____glewFramebufferTexture == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetBufferParameteri64v = wglGetProcAddress("glGetBufferParameteri64v");
  if ((____glewGetBufferParameteri64v == (PROC)0x0) || (bVar2)) {
    bVar2 = true;
  }
  ____glewGetInteger64i_v = wglGetProcAddress("glGetInteger64i_v");
  if ((____glewGetInteger64i_v != (PROC)0x0) && (!bVar2)) {
    return 0;
  }
  return 1;
}


//==== 0000855000 00855000_FUN_00855000 ====
undefined4 FUN_00855000(void);

// decompiled by BatchDecomp @ 00855000 name=FUN_00855000 conv=unknown body=121

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00855000(void)

{
  bool bVar1;
  
  ____glewBlendEquationSeparatei = wglGetProcAddress("glBlendEquationSeparatei");
  bVar1 = ____glewBlendEquationSeparatei == (PROC)0x0;
  ____glewBlendEquationi = wglGetProcAddress("glBlendEquationi");
  if ((____glewBlendEquationi == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBlendFuncSeparatei = wglGetProcAddress("glBlendFuncSeparatei");
  if ((____glewBlendFuncSeparatei == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBlendFunci = wglGetProcAddress("glBlendFunci");
  if ((____glewBlendFunci == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMinSampleShading = wglGetProcAddress("glMinSampleShading");
  if ((____glewMinSampleShading != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000855080 00855080_FUN_00855080 ====
undefined4 FUN_00855080(void);

// decompiled by BatchDecomp @ 00855080 name=FUN_00855080 conv=unknown body=99

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00855080(void)

{
  bool bVar1;
  
  ____glewGetGraphicsResetStatus = wglGetProcAddress("glGetGraphicsResetStatus");
  bVar1 = ____glewGetGraphicsResetStatus == (PROC)0x0;
  ____glewGetnCompressedTexImage = wglGetProcAddress("glGetnCompressedTexImage");
  if ((____glewGetnCompressedTexImage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetnTexImage = wglGetProcAddress("glGetnTexImage");
  if ((____glewGetnTexImage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetnUniformdv = wglGetProcAddress("glGetnUniformdv");
  if ((____glewGetnUniformdv != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000855ea0 00855ea0_FUN_00855ea0 ====
bool FUN_00855ea0(int param_1,char *param_2,uint param_3);

// decompiled by BatchDecomp @ 00855ea0 name=FUN_00855ea0 conv=unknown body=90

bool FUN_00855ea0(int param_1,char *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 == 0) {
    if ((param_2 == (char *)0x0) && (param_3 == 0)) {
      return true;
    }
  }
  else if (param_2 != (char *)0x0) {
    if (param_3 != 0) {
      param_1 = param_1 - (int)param_2;
      do {
        if (((param_2[param_1] == '\0') || (*param_2 == '\0')) || (param_2[param_1] != *param_2))
        break;
        uVar1 = uVar1 + 1;
        param_2 = param_2 + 1;
      } while (uVar1 < param_3);
    }
    return uVar1== param_3;
  }
  return false;
}


//==== 000085eb90 0085eb90_FUN_0085eb90 ====
Str_L_char_G_ * __thiscall FUN_0085eb90(int *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3);

// decompiled by BatchDecomp @ 0085eb90 name=FUN_0085eb90 conv=unknown body=128

Str_L_char_G_ * __thiscall FUN_0085eb90(int *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3)

{
  bool bVar1;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  bVar1 = util__DoesFileExist(param_3);
  if (bVar1) {
    util__SerializationManagerInterface__LoadDataFile(*(SerializationManagerInterface **)(*param_1 + 0x10),param_2);
    return param_2;
  }
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  util__Str_char___Str_char(&local_1c,&local_10);
  *(undefined1 *)&param_2->Data = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&param_2->Capacity,&local_1c);
  if (local_1c.Data != (char *)0x0) {
    operator_delete__(local_1c.Data);
  }
  return param_2;
}


//==== 00008bc800 008bc800_FUN_008bc800 ====
void __fastcall FUN_008bc800(undefined4 *param_1);

// decompiled by BatchDecomp @ 008bc800 name=FUN_008bc800 conv=unknown body=119

void __fastcall FUN_008bc800(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = param_1[1];
  *param_1 = &PTR_operator___009573b8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    puVar4 = (undefined4 *)(iVar3 * 0x10 + iVar2);
    if (iVar3 != 0) {
      do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -4;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          operator_delete__((void *)*puVar1);
          *puVar4 = 0;
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    operator_delete__((int *)(iVar2 + -4),iVar3 * 0x10 + 4);
  }
  *param_1 = &PTR_purecall_0093d250;
  param_1[1] = 0;
  return;
}


//==== 00008dba40 008dba40___glfwStringInExtensionString ====
// decompiled by BatchDecomp @ 008dba40 name=__glfwStringInExtensionString conv=unknown body=100

undefined4 __glfwStringInExtensionString(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = strstr(param_2,param_1);
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      return 0;
    }
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar2 + ((int)pcVar3 - (int)(param_1 + 1));
    if (((pcVar2 == param_2) || (pcVar2[-1] == ' ')) && ((*pcVar3 == ' ' || (*pcVar3 == '\0'))))
    break;
    pcVar2 = strstr(pcVar3,param_1);
    param_2 = pcVar3;
  }
  return 1;
}


//==== 00008dbd80 008dbd80_FUN_008dbd80 ====
char * FUN_008dbd80(undefined4 param_1);

// decompiled by BatchDecomp @ 008dbd80 name=FUN_008dbd80 conv=unknown body=87

char * FUN_008dbd80(undefined4 param_1)

{
  switch(param_1) {
  case 0x10001:
    return "The GLFW library is not initialized";
  case 0x10002:
    return "There is no current context";
  case 0x10003:
    return "Invalid argument for enum parameter";
  case 0x10004:
    return "Invalid value for parameter";
  case 0x10005:
    return "Out of memory";
  case 0x10006:
    return "The requested API is unavailable";
  case 0x10007:
    return "The requested API version is unavailable";
  case 0x10008:
    return "A platform-specific error occurred";
  case 0x10009:
    return "The requested format is unavailable";
  case 0x1000a:
    return "The specified window has no context";
  default:
    return "ERROR: UNKNOWN GLFW ERROR";
  }
}


//==== 00008dcd90 008dcd90___glfwInputCursorPos ====
// decompiled by BatchDecomp @ 008dcd90 name=__glfwInputCursorPos conv=unknown body=99

void __glfwInputCursorPos(int param_1,double param_2,double param_3)

{
  if (((NAN(*(double *)(param_1 + 0x1c8)) || NAN(param_2)) ==
       (*(double *)(param_1 + 0x1c8) == param_2)) ||
     ((NAN(*(double *)(param_1 + 0x1d0)) || NAN(param_3)) ==
      (*(double *)(param_1 + 0x1d0) == param_3))) {
    *(double *)(param_1 + 0x1c8) = param_2;
    *(double *)(param_1 + 0x1d0) = param_3;
    if (*(code **)(param_1 + 0x264) != (code *)0x0) {
      (**(code **)(param_1 + 0x264))(param_1,param_2,param_3);
    }
  }
  return;
}


//==== 00008dce30 008dce30___glfwInputKey ====
// decompiled by BatchDecomp @ 008dce30 name=__glfwInputKey conv=unknown body=102

void __glfwInputKey(int param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  bool bVar1;
  char cVar2;
  
  if (param_2 < 0x15d) {
    bVar1 = false;
    cVar2 = (char)param_4;
    if (param_4 == 0) {
      if (*(char *)(param_1 + 0x68 + param_2) == cVar2) {
        return;
      }
      if (*(int *)(param_1 + 0x54) != 0) {
        *(undefined1 *)(param_1 + 0x68 + param_2) = 3;
        goto LAB_008dce7a;
      }
    }
    else if ((param_4 == 1) && (*(char *)(param_1 + 0x68 + param_2) == cVar2)) {
      bVar1 = true;
    }
    *(char *)(param_1 + 0x68 + param_2) = cVar2;
    if (bVar1) {
      param_4 = 2;
    }
  }
LAB_008dce7a:
  if (*(code **)(param_1 + 0x270) != (code *)0x0) {
    (**(code **)(param_1 + 0x270))(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


//==== 00008dd820 008dd820___glfwCreateWideStringFromUTF8Win32 ====
// decompiled by BatchDecomp @ 008dd820 name=__glfwCreateWideStringFromUTF8Win32 conv=unknown body=92

LPWSTR __glfwCreateWideStringFromUTF8Win32(LPCSTR param_1)

{
  size_t _Count;
  LPWSTR lpWideCharStr;
  int iVar1;
  
  _Count = MultiByteToWideChar(0xfde9,0,param_1,-1,(LPWSTR)0x0,0);
  if (_Count == 0) {
    return (LPWSTR)0x0;
  }
  lpWideCharStr = (LPWSTR)calloc(_Count,2);
  iVar1 = MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,_Count);
  if (iVar1 == 0) {
    free(lpWideCharStr);
    return (LPWSTR)0x0;
  }
  return lpWideCharStr;
}


//==== 00008de4e0 008de4e0___glfwPlatformIsSameMonitor ====
// decompiled by BatchDecomp @ 008de4e0 name=__glfwPlatformIsSameMonitor conv=unknown body=162

bool __glfwPlatformIsSameMonitor(int param_1,int param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  bool bVar4;
  
  puVar3 = (ushort *)(param_1 + 0x90);
  puVar2 = puVar3;
  do {
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (uVar1 != 0);
  if ((int)puVar2 - (param_1 + 0x92) >> 1 == 0) {
    puVar3 = (ushort *)(param_1 + 0x50);
    puVar2 = (ushort *)(param_2 + 0x50);
    while( true ) {
      uVar1 = *puVar3;
      bVar4 = uVar1 < *puVar2;
      if (uVar1 != *puVar2) break;
      if (uVar1 == 0) {
        return true;
      }
      uVar1 = puVar3[1];
      bVar4 = uVar1 < puVar2[1];
      if (uVar1 != puVar2[1]) break;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 2;
      if (uVar1 == 0) {
        return true;
      }
    }
  }
  else {
    puVar2 = (ushort *)(param_2 + 0x90);
    while( true ) {
      uVar1 = *puVar3;
      bVar4 = uVar1 < *puVar2;
      if (uVar1 != *puVar2) break;
      if (uVar1 == 0) {
        return true;
      }
      uVar1 = puVar3[1];
      bVar4 = uVar1 < puVar2[1];
      if (uVar1 != puVar2[1]) break;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 2;
      if (uVar1 == 0) {
        return true;
      }
    }
  }
  return (-(uint)bVar4 | 1) == 0;
}


//==== 00008df460 008df460_FUN_008df460 ====
void FUN_008df460(int param_1);

// decompiled by BatchDecomp @ 008df460 name=FUN_008df460 conv=unknown body=134

void FUN_008df460(int param_1)

{
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_4;
  
  local_4 = __security_cookie ^ (uint)&local_24;
  __glfwSetVideoModeWin32(*(undefined4 *)(param_1 + 0x34),param_1 + 0x1c);
  __glfwPlatformGetVideoMode(*(undefined4 *)(param_1 + 0x34),&local_1c);
  __glfwPlatformGetMonitorPos(*(undefined4 *)(param_1 + 0x34),&local_24,&local_20);
  SetWindowPos(*(HWND *)(param_1 + 0x280),(HWND)0xffffffff,local_24,local_20,local_1c,local_18,0x110
              );
  __glfwInputMonitorWindowChange(*(undefined4 *)(param_1 + 0x34),param_1);
  __security_check_cookie(local_4 ^ (uint)&local_24);
  return;
}


//==== 00008dfd50 008dfd50_FUN_008dfd50 ====
int FUN_008dfd50(int param_1,uint param_2);

// decompiled by BatchDecomp @ 008dfd50 name=FUN_008dfd50 conv=unknown body=178

int FUN_008dfd50(int param_1,uint param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  tagMSG tStack_1c;
  
  if (param_1 != 0x11) {
    if (param_1 == 0xe5) {
      return -2;
    }
    return (int)(short)(&DAT_00994134)[param_2 >> 0x10 & 0x1ff];
  }
  if ((param_2 & 0x1000000) != 0) {
    return 0x159;
  }
  DVar1 = GetMessageTime();
  BVar2 = PeekMessageW(&tStack_1c,(HWND)0x0,0,0,0);
  if (((BVar2 != 0) &&
      ((((tStack_1c.message == 0x100 || (tStack_1c.message == 0x104)) ||
        (tStack_1c.message == 0x101)) || (tStack_1c.message == 0x105)))) &&
     (((tStack_1c.wParam == 0x12 && ((tStack_1c.lParam & 0x1000000U) != 0)) &&
      (tStack_1c.time == DVar1)))) {
    return -2;
  }
  return 0x155;
}


//==== 00008e0b40 008e0b40_FUN_008e0b40 ====
void FUN_008e0b40(int param_1);

// decompiled by BatchDecomp @ 008e0b40 name=FUN_008e0b40 conv=unknown body=110

void FUN_008e0b40(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
    (**(code **)(**(int **)(param_1 + 0x20) + 8))(*(int **)(param_1 + 0x20));
  }
  free(*(void **)(param_1 + 0x1c));
  free(*(void **)(param_1 + 4));
  free(*(void **)(param_1 + 0xc));
  free(*(void **)(param_1 + 0x14));
  memset(param_1,0,0x38);
  __glfwInputJoystickChange((param_1 + -0x9948b8) / 0x38,0x40002);
  return;
}


//==== 00008e2d50 008e2d50_FUN_008e2d50 ====
char * FUN_008e2d50(undefined4 param_1);

// decompiled by BatchDecomp @ 008e2d50 name=FUN_008e2d50 conv=unknown body=117

char * FUN_008e2d50(undefined4 param_1)

{
  switch(param_1) {
  case 0x3000:
    return "Success";
  case 0x3001:
    return "EGL is not or could not be initialized";
  case 0x3002:
    return "EGL cannot access a requested resource";
  case 0x3003:
    return "EGL failed to allocate resources for the requested operation";
  case 0x3004:
    return "An unrecognized attribute or attribute value was passed in the attribute list";
  case 0x3005:
    return "An EGLConfig argument does not name a valid EGL frame buffer configuration";
  case 0x3006:
    return "An EGLContext argument does not name a valid EGL rendering context";
  case 0x3007:
    return 
    "The current surface of the calling thread is a window, pixel buffer or pixmap that is no longer valid"
    ;
  case 0x3008:
    return "An EGLDisplay argument does not name a valid EGL display connection";
  case 0x3009:
    return "Arguments are inconsistent";
  case 0x300a:
    return "A NativePixmapType argument does not refer to a valid native pixmap";
  case 0x300b:
    return "A NativeWindowType argument does not refer to a valid native window";
  case 0x300c:
    return "One or more argument values are invalid";
  case 0x300d:
    return "An EGLSurface argument does not name a valid surface configured for GL rendering";
  case 0x300e:
    return "The application must destroy all contexts and reinitialise";
  default:
    return "ERROR: UNKNOWN EGL ERROR";
  }
}

