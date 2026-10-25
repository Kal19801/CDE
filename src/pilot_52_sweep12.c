// pilot_sweep_sweep12.c - assembled by scripts/sweep_assemble.py (r19)
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
  };
  struct {
    undefined1 _1_3_[3];
  };
  struct {
    undefined1 _0_1_;
    undefined1 _1_1_;
    undefined1 _4_1_;
  };
  undefined1 raw[32];
} slice_view;
/* ---- externs: stub-oracle names (K&R; ret types by call site) ---- */
extern int NodeMouseOver_NodeMouseOver(); /* K&R stub; ret by call site */
extern int SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent(); /* K&R stub; ret by call site */
extern int util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(); /* K&R stub; ret by call site */
extern int util__Darray_double___Darray_double__00505290(); /* K&R stub; ret by call site */
extern int util__Darray_struct_WorldLight___operator__o2(); /* K&R stub; ret by call site */
/* ---- GL PFN typedefs: Khronos headers directly (extraction-free) ---- */
#include <glcorearb.h>
#include <glext.h>
/* ---- data refs: xmm consts / UNK data (cde_data_map.h __real_ idiom) ---- */
#define ____glewBeginQuery (*(PFNGLBEGINQUERYPROC *)(0x0098aaf8u))
#define ____glewBindRenderbuffer (*(PFNGLBINDRENDERBUFFERPROC *)(0x0098be54u))
#define ____glewBlitFramebuffer (*(PFNGLBLITFRAMEBUFFERPROC *)(0x0098be58u))
#define ____glewBufferSubData (*(PFNGLBUFFERSUBDATAPROC *)(0x0098ab20u))
#define ____glewDeleteQueries (*(PFNGLDELETEQUERIESPROC *)(0x0098ab48u))
#define ____glewDeleteRenderbuffers (*(PFNGLDELETERENDERBUFFERSPROC *)(0x0098be78u))
#define ____glewEndQuery (*(PFNGLENDQUERYPROC *)(0x0098ab50u))
#define ____glewFramebufferRenderbuffer (*(PFNGLFRAMEBUFFERRENDERBUFFERPROC *)(0x0098be7cu))
#define ____glewFramebufferTexture1D (*(PFNGLFRAMEBUFFERTEXTURE1DPROC *)(0x0098be8cu))
#define ____glewFramebufferTexture3D (*(PFNGLFRAMEBUFFERTEXTURE3DPROC *)(0x0098be9cu))
#define ____glewFramebufferTextureLayer (*(PFNGLFRAMEBUFFERTEXTURELAYERPROC *)(0x0098bea4u))
#define ____glewGenQueries (*(PFNGLGENQUERIESPROC *)(0x0098ab74u))
#define ____glewGenRenderbuffers (*(PFNGLGENRENDERBUFFERSPROC *)(0x0098beb8u))
#define ____glewGetBufferParameteriv (*(PFNGLGETBUFFERPARAMETERIVPROC *)(0x0098ab88u))
#define ____glewGetBufferPointerv (*(PFNGLGETBUFFERPOINTERVPROC *)(0x0098ab94u))
#define ____glewGetBufferSubData (*(PFNGLGETBUFFERSUBDATAPROC *)(0x0098aba4u))
#define ____glewGetFramebufferAttachmentParameteriv (*(PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC *)(0x0098bec4u))
#define ____glewGetQueryObjectiv (*(PFNGLGETQUERYOBJECTIVPROC *)(0x0098abb4u))
#define ____glewGetQueryObjectuiv (*(PFNGLGETQUERYOBJECTUIVPROC *)(0x0098abccu))
#define ____glewGetQueryiv (*(PFNGLGETQUERYIVPROC *)(0x0098abdcu))
#define ____glewGetRenderbufferParameteriv (*(PFNGLGETRENDERBUFFERPARAMETERIVPROC *)(0x0098bed0u))
#define ____glewGetUniformdv (*(PFNGLGETUNIFORMDVPROC *)(0x0098bf58u))
#define ____glewGetVertexAttribLi64vNV (*(PFNGLGETVERTEXATTRIBLI64VNVPROC *)(0x0098aa9cu))
#define ____glewGetVertexAttribLui64vNV (*(PFNGLGETVERTEXATTRIBLUI64VNVPROC *)(0x0098aaa0u))
#define ____glewIsBuffer (*(PFNGLISBUFFERPROC *)(0x0098abecu))
#define ____glewIsFramebuffer (*(PFNGLISFRAMEBUFFERPROC *)(0x0098bedcu))
#define ____glewIsQuery (*(PFNGLISQUERYPROC *)(0x0098abf4u))
#define ____glewIsRenderbuffer (*(PFNGLISRENDERBUFFERPROC *)(0x0098bee0u))
#define ____glewMapBuffer (*(PFNGLMAPBUFFERPROC *)(0x0098ac04u))
#define ____glewRenderbufferStorage (*(PFNGLRENDERBUFFERSTORAGEPROC *)(0x0098beecu))
#define ____glewRenderbufferStorageMultisample (*(PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC *)(0x0098bef0u))
#define ____glewUniform1d (*(PFNGLUNIFORM1DPROC *)(0x0098bf5cu))
#define ____glewUniform1dv (*(PFNGLUNIFORM1DVPROC *)(0x0098bf68u))
#define ____glewUniform2d (*(PFNGLUNIFORM2DPROC *)(0x0098bf70u))
#define ____glewUniform2dv (*(PFNGLUNIFORM2DVPROC *)(0x0098bf78u))
#define ____glewUniform3d (*(PFNGLUNIFORM3DPROC *)(0x0098bf80u))
#define ____glewUniform3dv (*(PFNGLUNIFORM3DVPROC *)(0x0098bf90u))
#define ____glewUniform4d (*(PFNGLUNIFORM4DPROC *)(0x0098bf94u))
#define ____glewUniform4dv (*(PFNGLUNIFORM4DVPROC *)(0x0098bf9cu))
#define ____glewUniformMatrix2dv (*(PFNGLUNIFORMMATRIX2DVPROC *)(0x0098bfa4u))
#define ____glewUniformMatrix2x3dv (*(PFNGLUNIFORMMATRIX2X3DVPROC *)(0x0098bfb0u))
#define ____glewUniformMatrix2x4dv (*(PFNGLUNIFORMMATRIX2X4DVPROC *)(0x0098bfbcu))
#define ____glewUniformMatrix3dv (*(PFNGLUNIFORMMATRIX3DVPROC *)(0x0098bfc4u))
#define ____glewUniformMatrix3x2dv (*(PFNGLUNIFORMMATRIX3X2DVPROC *)(0x0098bfc8u))
#define ____glewUniformMatrix3x4dv (*(PFNGLUNIFORMMATRIX3X4DVPROC *)(0x0098bfd4u))
#define ____glewUniformMatrix4dv (*(PFNGLUNIFORMMATRIX4DVPROC *)(0x0098bfe0u))
#define ____glewUniformMatrix4x2dv (*(PFNGLUNIFORMMATRIX4X2DVPROC *)(0x0098bfe8u))
#define ____glewUniformMatrix4x3dv (*(PFNGLUNIFORMMATRIX4X3DVPROC *)(0x0098bff4u))
#define ____glewUnmapBuffer (*(PFNGLUNMAPBUFFERPROC *)(0x0098ac18u))
#define ____glewVertexAttribL1i64NV (*(PFNGLVERTEXATTRIBL1I64NVPROC *)(0x0098aab8u))
#define ____glewVertexAttribL1i64vNV (*(PFNGLVERTEXATTRIBL1I64VNVPROC *)(0x0098aaccu))
#define ____glewVertexAttribL1ui64NV (*(PFNGLVERTEXATTRIBL1UI64NVPROC *)(0x0098aad8u))
#define ____glewVertexAttribL1ui64vNV (*(PFNGLVERTEXATTRIBL1UI64VNVPROC *)(0x0098aae4u))
#define ____glewVertexAttribL2i64NV (*(PFNGLVERTEXATTRIBL2I64NVPROC *)(0x0098aafcu))
#define ____glewVertexAttribL2i64vNV (*(PFNGLVERTEXATTRIBL2I64VNVPROC *)(0x0098ab08u))
#define ____glewVertexAttribL2ui64NV (*(PFNGLVERTEXATTRIBL2UI64NVPROC *)(0x0098ab10u))
#define ____glewVertexAttribL2ui64vNV (*(PFNGLVERTEXATTRIBL2UI64VNVPROC *)(0x0098ab2cu))
#define ____glewVertexAttribL3i64NV (*(PFNGLVERTEXATTRIBL3I64NVPROC *)(0x0098ab30u))
#define ____glewVertexAttribL3i64vNV (*(PFNGLVERTEXATTRIBL3I64VNVPROC *)(0x0098ab44u))
#define ____glewVertexAttribL3ui64NV (*(PFNGLVERTEXATTRIBL3UI64NVPROC *)(0x0098ab54u))
#define ____glewVertexAttribL3ui64vNV (*(PFNGLVERTEXATTRIBL3UI64VNVPROC *)(0x0098ab60u))
#define ____glewVertexAttribL4i64NV (*(PFNGLVERTEXATTRIBL4I64NVPROC *)(0x0098ab7cu))
#define ____glewVertexAttribL4i64vNV (*(PFNGLVERTEXATTRIBL4I64VNVPROC *)(0x0098ab80u))
#define ____glewVertexAttribL4ui64NV (*(PFNGLVERTEXATTRIBL4UI64NVPROC *)(0x0098ab98u))
#define ____glewVertexAttribL4ui64vNV (*(PFNGLVERTEXATTRIBL4UI64VNVPROC *)(0x0098aba8u))
#define ____glewVertexAttribLFormatNV (*(PFNGLVERTEXATTRIBLFORMATNVPROC *)(0x0098abb0u))
#define ____glewWindowPos2dMESA (*(PFNGLWINDOWPOS2DMESAPROC *)(0x0098c5ecu))
#define ____glewWindowPos2dvMESA (*(PFNGLWINDOWPOS2DVMESAPROC *)(0x0098c5f4u))
#define ____glewWindowPos2fMESA (*(PFNGLWINDOWPOS2FMESAPROC *)(0x0098c600u))
#define ____glewWindowPos2fvMESA (*(PFNGLWINDOWPOS2FVMESAPROC *)(0x0098c604u))
#define ____glewWindowPos2iMESA (*(PFNGLWINDOWPOS2IMESAPROC *)(0x0098c60cu))
#define ____glewWindowPos2ivMESA (*(PFNGLWINDOWPOS2IVMESAPROC *)(0x0098c614u))
#define ____glewWindowPos2sMESA (*(PFNGLWINDOWPOS2SMESAPROC *)(0x0098c620u))
#define ____glewWindowPos2svMESA (*(PFNGLWINDOWPOS2SVMESAPROC *)(0x0098c62cu))
#define ____glewWindowPos3dMESA (*(PFNGLWINDOWPOS3DMESAPROC *)(0x0098c630u))
#define ____glewWindowPos3dvMESA (*(PFNGLWINDOWPOS3DVMESAPROC *)(0x0098c638u))
#define ____glewWindowPos3fMESA (*(PFNGLWINDOWPOS3FMESAPROC *)(0x0098c640u))
#define ____glewWindowPos3fvMESA (*(PFNGLWINDOWPOS3FVMESAPROC *)(0x0098c64cu))
#define ____glewWindowPos3iMESA (*(PFNGLWINDOWPOS3IMESAPROC *)(0x0098c658u))
#define ____glewWindowPos3ivMESA (*(PFNGLWINDOWPOS3IVMESAPROC *)(0x0098c65cu))
#define ____glewWindowPos3sMESA (*(PFNGLWINDOWPOS3SMESAPROC *)(0x0098c664u))
#define ____glewWindowPos3svMESA (*(PFNGLWINDOWPOS3SVMESAPROC *)(0x0098c670u))
#define ____glewWindowPos4dMESA (*(PFNGLWINDOWPOS4DMESAPROC *)(0x0098c67cu))
#define ____glewWindowPos4dvMESA (*(PFNGLWINDOWPOS4DVMESAPROC *)(0x0098c684u))
#define ____glewWindowPos4fMESA (*(PFNGLWINDOWPOS4FMESAPROC *)(0x0098c688u))
#define ____glewWindowPos4fvMESA (*(PFNGLWINDOWPOS4FVMESAPROC *)(0x0098c698u))
#define ____glewWindowPos4iMESA (*(PFNGLWINDOWPOS4IMESAPROC *)(0x0098c6a0u))
#define ____glewWindowPos4ivMESA (*(PFNGLWINDOWPOS4IVMESAPROC *)(0x0098c6a8u))
#define ____glewWindowPos4sMESA (*(PFNGLWINDOWPOS4SMESAPROC *)(0x0098c6acu))
#define ____glewWindowPos4svMESA (*(PFNGLWINDOWPOS4SVMESAPROC *)(0x0098c6bcu))
#define DAT_00937db0 (*(undefined1 *)(0x00937db0u))

//==== 0000488bc0 00488bc0_FUN_00488bc0 ====
undefined4 __fastcall FUN_00488bc0(int param_1,int param_2);

// decompiled by BatchDecomp @ 00488bc0 name=FUN_00488bc0 conv=unknown body=420

undefined4 __fastcall FUN_00488bc0(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  int iVar9;
  byte *pbVar10;
  uint local_10;
  
  iVar3 = 0;
  iVar9 = 0;
  local_10 = 0;
  do {
    uVar5 = *(uint *)(param_2 + iVar9 * 4);
    if (0 < (int)uVar5) {
      iVar1 = (iVar9 + 1U & 0xff) * 0x1010101;
      piVar6 = (int *)(param_1 + 0x500 + iVar3);
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar6 = iVar1;
        piVar6 = piVar6 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar6 = (char)iVar1;
        piVar6 = (int *)((int)piVar6 + 1);
      }
      iVar3 = local_10 + *(int *)(param_2 + iVar9 * 4);
      local_10 = iVar3;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x10);
  iVar9 = 0;
  *(undefined1 *)(iVar3 + 0x500 + param_1) = 0;
  iVar3 = 0;
  local_10 = 0xf;
  pbVar10 = (byte *)(param_1 + 0x500);
  piVar6 = (int *)(param_1 + 0x608);
  uVar5 = 1;
  do {
    piVar6[0x12] = iVar3 - iVar9;
    if (*pbVar10 == uVar5) {
      puVar7 = (undefined2 *)(param_1 + 0x200 + iVar3 * 2);
      do {
        iVar1 = iVar9;
        *puVar7 = (short)iVar1;
        iVar3 = iVar3 + 1;
        puVar7 = puVar7 + 1;
        pbVar10 = (byte *)(param_1 + 0x500 + iVar3);
        iVar9 = iVar1 + 1;
      } while (*pbVar10 == uVar5);
      if (1 << ((byte)uVar5 & 0x1f) <= iVar1) {
        DAT_009936c8 = "Corrupt JPEG";
        return 0;
      }
    }
    iVar1 = iVar9 << ((byte)local_10 & 0x1f);
    iVar9 = iVar9 * 2;
    uVar5 = uVar5 + 1;
    *piVar6 = iVar1;
    piVar6 = piVar6 + 1;
    local_10 = local_10 + -1;
    if ((int)local_10 < 0) {
      *(undefined4 *)(param_1 + 0x604 + uVar5 * 4) = 0xffffffff;
      memset(param_1,0xff,0x200);
      local_10 = 0;
      if (0 < iVar3) {
        puVar8 = (ushort *)(param_1 + 0x200);
        do {
          bVar2 = *(byte *)(param_1 + 0x500 + local_10);
          if (bVar2 < 10) {
            bVar2 = 9 - bVar2;
            uVar5 = 1 << (bVar2 & 0x1f);
            if (0 < (int)uVar5) {
              iVar9 = (local_10 & 0xff) * 0x1010101;
              piVar6 = (int *)(((uint)*puVar8 << (bVar2 & 0x1f)) + param_1);
              for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
                *piVar6 = iVar9;
                piVar6 = piVar6 + 1;
              }
              for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                *(char *)piVar6 = (char)iVar9;
                piVar6 = (int *)((int)piVar6 + 1);
              }
            }
          }
          local_10 = local_10 + 1;
          puVar8 = puVar8 + 1;
        } while ((int)local_10 < iVar3);
      }
      return 1;
    }
  } while( true );
}


//==== 000048b150 0048b150_FUN_0048b150 ====
void __fastcall FUN_0048b150(int param_1,int param_2,int param_3);

// decompiled by BatchDecomp @ 0048b150 name=FUN_0048b150 conv=unknown body=589

void __fastcall FUN_0048b150(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int *local_9c;
  int local_94;
  int local_90;
  uint auStack_8c[16];
  int local_4c[17];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_90 = 0;
  memset(local_4c,0,0x44);
  memset(param_1,0xff,0x400);
  iVar5 = 0;
  if (0 < param_3) {
    do {
      pbVar1 = (byte *)(param_2 + iVar5);
      iVar5 = iVar5 + 1;
      local_4c[*pbVar1] = local_4c[*pbVar1] + 1;
    } while (iVar5 < param_3);
  }
  local_9c = (int *)(param_1 + 0x424);
  local_4c[0] = 0;
  uVar8 = 0;
  puVar4 = (undefined2 *)(param_1 + 0x466);
  bVar7 = 0xf;
  iVar5 = 1;
  while( true ) {
    puVar4[-0x32] = (short)uVar8;
    *puVar4 = (short)local_90;
    auStack_8c[iVar5] = uVar8;
    iVar9 = uVar8 + local_4c[iVar5];
    if ((local_4c[iVar5] != 0) && (1 << ((byte)iVar5 & 0x1f) <= iVar9 + -1)) break;
    bVar3 = bVar7 & 0x1f;
    bVar7 = bVar7 - 1;
    uVar8 = iVar9 * 2;
    *local_9c = iVar9 << bVar3;
    local_9c = local_9c + 1;
    local_90 = local_90 + local_4c[iVar5];
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 1;
    if (0xf < iVar5) {
      *(undefined4 *)(param_1 + 0x460) = 0x10000;
      local_94 = 0;
      if (0 < param_3) {
        do {
          bVar7 = *(byte *)(param_2 + local_94);
          uVar8 = (uint)bVar7;
          if (bVar7 != 0) {
            uVar2 = auStack_8c[uVar8];
            iVar5 = ((uint)*(ushort *)(param_1 + 0x464 + uVar8 * 2) -
                    (uint)*(ushort *)(param_1 + 0x400 + uVar8 * 2)) + uVar2;
            *(byte *)(param_1 + 0x484 + iVar5) = bVar7;
            *(short *)(param_1 + 0x5a4 + iVar5 * 2) = (short)local_94;
            if ((uVar8 < 10) &&
               (uVar6 = (int)uVar2 >> 1 & 0x5555U | (uVar2 & 0x5555) * 2,
               uVar6 = uVar6 >> 2 & 0x3333 | (uVar6 & 0x3333) << 2,
               uVar6 = uVar6 >> 4 & 0xf0f | (uVar6 & 0xf0f) << 4,
               iVar9 = (int)((int)uVar6 >> 8 | (uVar6 & 0xff) << 8) >> (0x10 - bVar7 & 0x1f),
               iVar9 < 0x200)) {
              do {
                *(short *)(param_1 + iVar9 * 2) = (short)iVar5;
                iVar9 = iVar9 + (1 << (bVar7 & 0x1f));
              } while (iVar9 < 0x200);
            }
            auStack_8c[uVar8] = uVar2 + 1;
          }
          local_94 = local_94 + 1;
        } while (local_94 < param_3);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  DAT_009936c8 = "Corrupt JPEG";
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000048f8e0 0048f8e0_FUN_0048f8e0 ====
extern undefined4 FUN_0048f8c0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void __fastcall FUN_0048f8e0(FILE *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7, int param_8,size_t param_9);

// decompiled by BatchDecomp @ 0048f8e0 name=FUN_0048f8e0 conv=unknown body=507

void __fastcall
FUN_0048f8e0(FILE *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,size_t param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  FILE *_File;
  FILE *_File_00;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  FILE *local_14;
  byte *local_10;
  int local_c;
  char local_8;
  char local_7[3];
  
  local_20 = param_5 + -1;
  local_28 = 0;
  if (-1 < param_3) {
    local_20 = 0;
  }
  iVar2 = -1;
  if (-1 < param_3) {
    iVar2 = param_5;
  }
  if (local_20 != iVar2) {
    pbVar4 = (byte *)(param_7 + 3 + local_20 * param_4 * param_6);
    local_14 = param_1;
    local_c = param_2;
    do {
      _File_00 = local_14;
      local_10 = pbVar4;
      if (0 < param_4) {
        iVar3 = param_6 + -1;
        local_1c = -2 - local_c;
        local_18 = param_4;
        _File = local_14;
        local_24 = iVar3;
        do {
          if (param_8 < 0) {
            fwrite(pbVar4 + iVar3 + -3,1,1,_File);
          }
          _File_00 = local_14;
          switch(iVar3) {
          case 0:
          case 1:
            bVar1 = pbVar4[-3];
            bVar6 = bVar1;
            bVar7 = bVar1;
            break;
          case 2:
switchD_0048f9a3_caseD_2:
            bVar1 = pbVar4[local_1c];
            bVar6 = pbVar4[-2];
            bVar7 = pbVar4[local_c + -2];
            break;
          case 3:
            if (param_8 != 0) goto switchD_0048f9a3_caseD_2;
            uVar5 = (uint)*pbVar4;
            iVar3 = (pbVar4[-3] - 0xff) * uVar5;
            local_8 = (((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
                      (char)((longlong)iVar3 * 0x80808081 >> 0x3f)) + -1;
            iVar3 = (pbVar4[-1] - 0xff) * uVar5;
            uVar5 = (pbVar4[-2] * uVar5) / 0xff;
            local_7[0] = (char)uVar5;
            local_7[1] = (((char)(iVar3 / 0xff) + (char)(iVar3 >> 0x1f)) -
                         (char)((longlong)iVar3 * 0x80808081 >> 0x3f)) + -1;
            FUN_0048f8c0(local_14,"111",local_7[-local_c],uVar5 & 0xff,local_7[local_c]);
            iVar3 = local_24;
            goto LAB_0048fa8b;
          default:
            goto switchD_0048f9a3_default;
          }
          FUN_0048f8c0(_File,"111",bVar1,bVar6,bVar7);
switchD_0048f9a3_default:
          _File_00 = _File;
          if (0 < param_8) {
            fwrite(pbVar4 + iVar3 + -3,1,1,_File);
          }
LAB_0048fa8b:
          pbVar4 = pbVar4 + param_6;
          local_18 = local_18 + -1;
          _File = _File_00;
        } while (local_18 != 0);
        local_18 = 0;
      }
      pbVar4 = local_10;
      iVar3 = local_20;
      fwrite(&local_28,param_9,1,_File_00);
      local_20 = iVar3 + param_3;
      pbVar4 = pbVar4 + param_3 * param_4 * param_6;
    } while (local_20 != iVar2);
  }
  return;
}


//==== 000048fc50 0048fc50_stbi_decode_DXT1_block ====
// decompiled by BatchDecomp @ 0048fc50 name=stbi_decode_DXT1_block conv=__cdecl body=592

/* stbi_decode_DXT1_block */

void __cdecl stbi_decode_DXT1_block(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 *puVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *in_EDX;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 local_18[7];
  undefined1 local_11;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined4 local_d;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar1 = *in_EDX;
  uVar2 = in_EDX[1];
  local_18[3] = 0xff;
  uVar4 = (uint)(*(byte *)((int)in_EDX + 1) >> 3) * 0xff + 0x10;
  uVar8 = (uVar1 >> 5 & 0x3f) * 0xff + 0x20;
  uVar5 = (uVar4 >> 5) + uVar4 >> 5;
  uVar4 = (uVar1 & 0x1f) * 0xff + 0x10;
  local_18[0] = (char)uVar5;
  uVar8 = (uVar8 >> 6) + uVar8 >> 6;
  local_18[1] = (char)uVar8;
  uVar6 = (uVar4 >> 5) + uVar4 >> 5;
  local_18[2] = (char)uVar6;
  uVar7 = (uint)(*(byte *)((int)in_EDX + 3) >> 3) * 0xff + 0x10;
  uVar9 = (uVar2 >> 5 & 0x3f) * 0xff + 0x20;
  uVar4 = (uVar2 & 0x1f) * 0xff + 0x10;
  uVar7 = (uVar7 >> 5) + uVar7 >> 5;
  uVar9 = (uVar9 >> 6) + uVar9 >> 6;
  uVar4 = (uVar4 >> 5) + uVar4 >> 5;
  local_18[4] = (char)uVar7;
  local_18[5] = (char)uVar9;
  local_18[6] = (char)uVar4;
  local_11 = 0xff;
  if ((uint)uVar2 < (uint)uVar1) {
    local_9 = 0xff;
    local_10 = (char)(((uVar7 & 0xff) + (uVar5 & 0xff) * 2) / 3);
    local_f = (char)(((uVar9 & 0xff) + (uVar8 & 0xff) * 2) / 3);
    local_e = (char)(((uVar4 & 0xff) + (uVar6 & 0xff) * 2) / 3);
    local_d = CONCAT13((char)(((uVar6 & 0xff) + (uVar4 & 0xff) * 2) / 3),
                       CONCAT12((char)(((uVar8 & 0xff) + (uVar9 & 0xff) * 2) / 3),
                                CONCAT11((char)(((uVar5 & 0xff) + (uVar7 & 0xff) * 2) / 3),0xff)));
  }
  else {
    local_d = 0xff;
    local_10 = (char)((uVar7 & 0xff) + (uVar5 & 0xff) >> 1);
    local_9 = 0;
    local_f = (char)((uVar9 & 0xff) + (uVar8 & 0xff) >> 1);
    local_e = (char)((uVar4 & 0xff) + (uVar6 & 0xff) >> 1);
  }
  iVar11 = 0x10;
  puVar3 = (undefined1 *)(in_ECX + 1);
  iVar10 = 0x20;
  do {
    uVar4 = *(byte *)((iVar10 >> 3) + (int)in_EDX) >> ((byte)iVar10 & 7) & 3;
    puVar3[-1] = local_18[uVar4 * 4];
    *puVar3 = local_18[uVar4 * 4 + 1];
    puVar3[1] = local_18[uVar4 * 4 + 2];
    puVar3[2] = local_18[uVar4 * 4 + 3];
    iVar11 = iVar11 + -1;
    puVar3 = puVar3 + 4;
    iVar10 = iVar10 + 2;
  } while (iVar11 != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000048fea0 0048fea0_stbi_decode_DXT45_alpha_block ====
// decompiled by BatchDecomp @ 0048fea0 name=stbi_decode_DXT45_alpha_block conv=__cdecl body=432

/* stbi_decode_DXT45_alpha_block */

void __cdecl stbi_decode_DXT45_alpha_block(void)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  byte *in_EDX;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte local_10[4];
  undefined1 local_c;
  undefined1 local_b;
  undefined2 local_a;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar6 = 0x10;
  local_10[1] = in_EDX[1];
  local_10[0] = *in_EDX;
  uVar4 = CONCAT11(local_10[0],local_10[1]) & 0xff;
  uVar9 = (uint)local_10[0];
  if (local_10[1] < local_10[0]) {
    uVar1 = uVar4 + uVar9 * 6;
    uVar5 = uVar1 / 7;
    local_10[2] = (char)((uVar1 - uVar5 >> 1) + uVar5 >> 2);
    local_10[3] = (char)((uVar4 * 2 + uVar9 * 5) / 7);
    local_c = (char)((uVar4 * 3 + uVar9 * 4) / 7);
    local_b = (char)((uVar4 * 4 + uVar9 * 3) / 7);
    local_a = CONCAT11((char)((uVar9 + uVar4 * 6) / 7),(char)((uVar9 * 2 + uVar4 * 5) / 7));
  }
  else {
    local_a = 0xff00;
    local_10[2] = (char)((uVar4 + uVar9 * 4) / 5);
    local_10[3] = (char)((uVar4 * 2 + uVar9 * 3) / 5);
    local_c = (char)((uVar9 * 2 + uVar4 * 3) / 5);
    local_b = (char)((uVar4 * 4 + uVar9) / 5);
  }
  iVar10 = 3;
  do {
    iVar3 = iVar6 >> 3;
    iVar7 = iVar6 + 1;
    bVar2 = (byte)iVar6;
    iVar8 = iVar6 + 2;
    iVar6 = iVar6 + 3;
    *(byte *)(in_ECX + iVar10) =
         local_10[(in_EDX[iVar3] >> (bVar2 & 7) & 1) +
                  (in_EDX[iVar7 >> 3] >> ((byte)iVar7 & 7) & 1) * 2 +
                  (in_EDX[iVar8 >> 3] >> ((byte)iVar8 & 7) & 1) * 4];
    iVar10 = iVar10 + 4;
  } while (iVar10 < 0x40);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000490050 00490050_stbi_decode_DXT_color_block ====
// decompiled by BatchDecomp @ 00490050 name=stbi_decode_DXT_color_block conv=__cdecl body=462

/* stbi_decode_DXT_color_block */

void __cdecl stbi_decode_DXT_color_block(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  ushort *in_EDX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined1 local_14[6];
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar1 = in_EDX[1];
  uVar5 = (uint)(*(byte *)((int)in_EDX + 1) >> 3) * 0xff + 0x10;
  uVar7 = (*in_EDX >> 5 & 0x3f) * 0xff + 0x20;
  uVar3 = (*in_EDX & 0x1f) * 0xff + 0x10;
  uVar9 = (uVar5 >> 5) + uVar5 >> 5;
  local_14[0] = (char)uVar9;
  uVar6 = (uVar7 >> 6) + uVar7 >> 6;
  local_14[1] = (char)uVar6;
  uVar7 = (uVar3 >> 5) + uVar3 >> 5;
  local_14[2] = (char)uVar7;
  uVar3 = (uint)(uVar1 >> 0xb) * 0xff + 0x10;
  uVar8 = (uVar1 >> 5 & 0x3f) * 0xff + 0x20;
  uVar5 = (uVar3 >> 5) + uVar3 >> 5;
  uVar3 = (uVar1 & 0x1f) * 0xff + 0x10;
  local_14[3] = (char)uVar5;
  uVar8 = (uVar8 >> 6) + uVar8 >> 6;
  local_14[4] = (char)uVar8;
  uVar3 = (uVar3 >> 5) + uVar3 >> 5;
  local_14[5] = (char)uVar3;
  uVar9 = uVar9 & 0xff;
  uVar5 = uVar5 & 0xff;
  uVar6 = uVar6 & 0xff;
  uVar8 = uVar8 & 0xff;
  local_e = (char)((uVar5 + uVar9 * 2) / 3);
  uVar7 = uVar7 & 0xff;
  uVar3 = uVar3 & 0xff;
  local_d = (char)((uVar8 + uVar6 * 2) / 3);
  local_c = (char)((uVar3 + uVar7 * 2) / 3);
  local_b = (char)((uVar9 + uVar5 * 2) / 3);
  iVar11 = 0x10;
  local_a = (char)((uVar6 + uVar8 * 2) / 3);
  local_9 = (char)((uVar7 + uVar3 * 2) / 3);
  puVar4 = (undefined1 *)(in_ECX + 1);
  iVar10 = 0x20;
  do {
    iVar2 = (*(byte *)((iVar10 >> 3) + (int)in_EDX) >> ((byte)iVar10 & 7) & 3) * 3;
    puVar4[-1] = local_14[iVar2];
    *puVar4 = local_14[iVar2 + 1];
    puVar4[1] = local_14[iVar2 + 2];
    iVar11 = iVar11 + -1;
    puVar4 = puVar4 + 4;
    iVar10 = iVar10 + 2;
  } while (iVar11 != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000490920 00490920_up_scale_image ====
// decompiled by BatchDecomp @ 00490920 name=up_scale_image conv=__cdecl body=547

/* up_scale_image */

undefined4 __cdecl up_scale_image(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  byte *pbVar10;
  int in_EDX;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_14;
  int local_c;
  
  fVar6 = /*3f800000*/1.0f;
  fVar5 = /*3f000000*/0.5f;
  if ((((0 < in_EDX) && (0 < param_1)) && (1 < param_4)) &&
     (((1 < param_5 && (0 < param_2)) && ((in_ECX != 0 && (param_3 != 0)))))) {
    local_14 = 0;
    fVar14 = (float)param_4 - /*3f800000*/1.0f;
    fVar16 = (float)in_EDX - /*3f800000*/1.0f;
    fVar17 = (float)param_1 - /*3f800000*/1.0f;
    fVar15 = (float)param_5 - /*3f800000*/1.0f;
    if (0 < param_5) {
      do {
        fVar21 = (float)local_14 * (fVar17 / fVar15);
        iVar7 = (int)fVar21;
        iVar11 = param_1 + -2;
        if (iVar7 <= param_1 + -2) {
          iVar11 = iVar7;
        }
        local_c = 0;
        fVar21 = fVar21 - (float)iVar11;
        if (0 < param_4) {
          iVar7 = param_3;
          do {
            fVar18 = (float)local_c * (fVar16 / fVar14);
            iVar8 = (int)fVar18;
            iVar9 = in_EDX + -2;
            if (iVar8 <= in_EDX + -2) {
              iVar9 = iVar8;
            }
            iVar12 = 0;
            iVar8 = (iVar9 + iVar11 * in_EDX) * param_2;
            fVar18 = fVar18 - (float)iVar9;
            if (0 < param_2) {
              fVar19 = fVar6 - fVar18;
              pbVar10 = (byte *)(in_EDX * param_2 + iVar8 + in_ECX);
              fVar20 = fVar6 - fVar21;
              pbVar13 = (byte *)(in_ECX + iVar8);
              do {
                pbVar1 = pbVar10 + (param_2 - in_EDX * param_2);
                bVar3 = *pbVar13;
                pbVar13 = pbVar13 + 1;
                bVar4 = *pbVar10;
                pbVar2 = pbVar10 + param_2;
                pbVar10 = pbVar10 + 1;
                *(char *)(iVar7 + iVar12) =
                     (char)(int)((float)*pbVar1 * fVar18 * fVar20 +
                                 (float)bVar3 * fVar19 * fVar20 + fVar5 +
                                 (float)bVar4 * fVar19 * fVar21 + (float)*pbVar2 * fVar18 * fVar21);
                iVar12 = iVar12 + 1;
              } while (iVar12 < param_2);
            }
            iVar7 = iVar7 + param_2;
            local_c = local_c + 1;
          } while (local_c < param_4);
        }
        local_14 = local_14 + 1;
        param_3 = param_3 + param_2 * param_4;
      } while (local_14 < param_5);
    }
    return 1;
  }
  return 0;
}


//==== 0000490b50 00490b50_mipmap_image ====
// decompiled by BatchDecomp @ 00490b50 name=mipmap_image conv=__cdecl body=581

/* mipmap_image */

undefined4 __cdecl mipmap_image(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int in_ECX;
  int iVar6;
  int in_EDX;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_3c;
  int local_2c;
  int local_24;
  byte *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((((0 < in_EDX) && (0 < param_1)) && (0 < param_2)) &&
     (((in_ECX != 0 && (param_3 != 0)) && ((0 < param_4 && (0 < param_5)))))) {
    iVar1 = in_EDX / param_4;
    iVar2 = param_1 / param_5;
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    local_18 = 0;
    if (0 < iVar2) {
      do {
        local_14 = 0;
        if (0 < iVar1) {
          local_10 = 0;
          local_2c = in_EDX;
          do {
            local_3c = 0;
            if (0 < param_2) {
              iVar11 = (local_18 * in_EDX * param_5 + local_10) * param_2;
              do {
                local_24 = param_5;
                iVar6 = param_4;
                if (in_EDX < local_10 + param_4) {
                  iVar6 = local_2c;
                }
                if (param_1 < (local_18 + 1) * param_5) {
                  local_24 = param_1 - local_18 * param_5;
                }
                iVar3 = local_24 * iVar6;
                iVar7 = iVar3 >> 1;
                if (0 < local_24) {
                  local_1c = 0;
                  local_20 = (byte *)(in_ECX + iVar11);
                  do {
                    iVar12 = 0;
                    iVar9 = 0;
                    iVar4 = 0;
                    if (1 < iVar6) {
                      pbVar8 = local_20 + param_2;
                      iVar10 = (iVar6 - 2U >> 1) + 1;
                      iVar4 = iVar10 * 2;
                      pbVar5 = local_20;
                      do {
                        iVar12 = iVar12 + (uint)*pbVar5;
                        iVar9 = iVar9 + (uint)*pbVar8;
                        pbVar5 = pbVar5 + param_2 * 2;
                        pbVar8 = pbVar8 + param_2 * 2;
                        iVar10 = iVar10 + -1;
                      } while (iVar10 != 0);
                    }
                    if (iVar4 < iVar6) {
                      iVar7 = iVar7 + (uint)*(byte *)((iVar4 + local_1c) * param_2 + iVar11 + in_ECX
                                                     );
                    }
                    local_1c = local_1c + in_EDX;
                    iVar7 = iVar7 + iVar9 + iVar12;
                    local_20 = local_20 + in_EDX * param_2;
                    local_24 = local_24 + -1;
                  } while (local_24 != 0);
                }
                iVar11 = iVar11 + 1;
                *(char *)((local_18 * iVar1 + local_14) * param_2 + param_3 + local_3c) =
                     (char)(iVar7 / iVar3);
                local_3c = local_3c + 1;
              } while (local_3c < param_2);
            }
            local_14 = local_14 + 1;
            local_2c = local_2c - param_5;
            local_10 = local_10 + param_4;
          } while (local_14 < iVar1);
        }
        local_18 = local_18 + 1;
      } while (local_18 < iVar2);
    }
    return 1;
  }
  return 0;
}


//==== 00004d6990 004d6990_FUN_004d6990 ====
void FUN_004d6990(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 004d6990 name=FUN_004d6990 conv=unknown body=419

void FUN_004d6990(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 =
       ((void *)(0x0091db14u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar8 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar3 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar9 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar9 * 8);
        *(undefined4 *)(iVar1 + iVar9 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar9 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      piVar7 = (int *)(**(code **)*param_2)(&local_c);
      if (((*piVar7 != 0) && ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0)) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         bVar4)) {
        iVar9 = *(int *)(param_1 + 8);
        local_10 = iVar9 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar9);
        if (bVar4) {
          pRVar2 = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8)
          ;
          iVar9 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          *(int *)(iVar9 + -8) = *piVar7;
          this = (ReferenceController *)piVar7[1];
          *(ReferenceController **)(iVar9 + -4) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
          }
        }
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00004d6d60 004d6d60_FUN_004d6d60 ====
extern undefined4 FUN_004d6b40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_004d6d60(int *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6);

// decompiled by BatchDecomp @ 004d6d60 name=FUN_004d6d60 conv=unknown body=449

void FUN_004d6d60(int *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  int local_2c;
  char local_25;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_2c = 0;
  local_c = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar5) {
    do {
      local_2c = (**(code **)*param_1)(&local_c);
      if (*(int *)(local_2c + 8) == 0) {
LAB_004d6e61:
        local_25 = '\0';
      }
      else {
        util__Str_char___Str_char__o5(&local_50,"/");
        local_18.Length = 0;
        local_18.Data = (char *)0x0;
        local_18.Capacity = 0;
        bVar3 = true;
        bVar2 = true;
        bVar1 = true;
        util__Str_char___Str_char(&local_18,param_2);
        util__Str_char___operator__o10(&local_18,param_3);
        util__Str_char___Str_char(&local_44,&local_18);
        if (local_18.Data != (char *)0x0) {
          operator_delete__(local_18.Data);
          ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
        }
        local_24.Length = 0;
        local_24.Data = (char *)0x0;
        local_24.Capacity = 0;
        util__Str_char___Str_char(&local_24,&local_44);
        util__Str_char___operator__o10(&local_24,&local_50);
        util__Str_char___Str_char(&local_38,&local_24);
        if (local_24.Data != (char *)0x0) {
          operator_delete__(local_24.Data);
          ((slice_view *)&local_24)->_0_8_ = ((slice_view *)&local_24)->_0_8_ & 0xffffffff00000000;
        }
        bVar4 = util__EnsureDirectoryExists(&local_38);
        local_25 = '\x01';
        if (!bVar4) goto LAB_004d6e61;
      }
      if (bVar1) {
        bVar1 = false;
        if (local_38.Data != (char *)0x0) {
          operator_delete__(local_38.Data);
          local_38.Data = (char *)0x0;
        }
      }
      if (bVar2) {
        bVar2 = false;
        if (local_44.Data != (char *)0x0) {
          operator_delete__(local_44.Data);
          local_44.Data = (char *)0x0;
        }
      }
      if (bVar3) {
        bVar3 = false;
        if (local_50.Data != (char *)0x0) {
          operator_delete__(local_50.Data);
          local_50.Data = (char *)0x0;
        }
      }
      if (local_25 != '\0') {
        FUN_004d6b40(param_4,param_3,local_2c,param_2,param_5,param_6);
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00004f1050 004f1050_FUN_004f1050 ====
void FUN_004f1050(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);
extern undefined4 FUN_004f4130(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 004f1050 name=FUN_004f1050 conv=unknown body=501

void FUN_004f1050(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  Type TVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined3 extraout_var;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  void *local_38[3];
  void *local_2c[3];
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar6 = *param_4;
  local_1c = param_1;
  if ((int)local_10 < iVar6) {
    do {
      puVar2 = local_1c;
      if (*param_6 <= (int)local_c) break;
      local_20 = (undefined4 *)(**(code **)*local_1c)(&local_10);
      local_18 = (undefined4 *)(**(code **)*puVar2)(&local_c);
      local_14 = (undefined4 *)*local_18;
      puVar2 = (undefined4 *)FUN_004f4130(local_38,*local_20);
      if ((int)puVar2[1] < 1) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (char *)*puVar2;
      }
      puVar2 = (undefined4 *)FUN_004f4130(local_2c,local_14);
      if ((int)puVar2[1] < 1) {
        pcVar3 = "";
      }
      else {
        pcVar3 = (char *)*puVar2;
      }
      TVar1 = util__FUN_00896640(pcVar3,pcVar7);
      if (local_2c[0] != (void *)0x0) {
        operator_delete__(local_2c[0]);
        local_2c[0] = (void *)0x0;
      }
      if (local_38[0] != (void *)0x0) {
        operator_delete__(local_38[0]);
        local_38[0] = (void *)0x0;
      }
      puVar2 = (undefined4 *)*param_7;
      *param_7 = (int)puVar2 + 1;
      if (CONCAT31(extraout_var,TVar1) == 2) {
        local_14 = puVar2;
        puVar2 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar2 = *local_18;
        local_c = (undefined4 *)((int)local_c + 1);
      }
      else {
        local_18 = puVar2;
        puVar2 = (undefined4 *)(**(code **)*param_2)(&local_18);
        *puVar2 = *local_20;
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      iVar6 = *param_4;
    } while ((int)local_10 < iVar6);
    if ((int)local_10 < iVar6) {
      do {
        local_14 = (undefined4 *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar2 = (undefined4 *)(**(code **)*local_1c)(&local_18);
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar4 = *puVar2;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (undefined4 *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar2 = (undefined4 *)(**(code **)*local_1c)(&local_18);
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar4 = *puVar2;
    } while ((int)local_c < *param_6);
  }
  iVar6 = *param_7;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if ((iVar5 < iVar6) || (iVar6 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000501b00 00501b00_FUN_00501b00 ====
void FUN_00501b00(int *param_1,double *param_2,Darray_L_struct_util__Line2_L_double_G___G_ *param_3);

// decompiled by BatchDecomp @ 00501b00 name=FUN_00501b00 conv=unknown body=613

void FUN_00501b00(int *param_1,double *param_2,Darray_L_struct_util__Line2_L_double_G___G_ *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  double *pdVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  Line2_L_double_G_ local_50;
  double local_30;
  int *local_28;
  undefined8 local_24;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_c = 0;
  iVar7 = (**(code **)(*param_1 + 0xc))();
  pcVar9 = DebugBreak_exref;
  if (local_c < iVar7) {
    do {
      pdVar8 = (double *)(**(code **)*param_1)(&local_c);
      dVar10 = pdVar8[3];
      if (dVar10 < pdVar8[1]) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armor.cpp",0x276,
                        "Segment_m.B.Y >= Segment_m.A.Y",(char *)0x0);
        (*pcVar9)();
        dVar10 = pdVar8[3];
      }
      if (*param_2 <= dVar10) {
        dVar10 = pdVar8[1];
        if (dVar10 <= param_2[1]) {
          dVar11 = pdVar8[3];
          dVar12 = dVar11 - dVar10;
          if (NAN(dVar12) == (dVar12 == 0.0)) {
            if (NAN(dVar12) == (dVar12 == 0.0)) {
              local_24 = (param_2[1] - dVar10) / dVar12;
            }
            else {
              local_24 = 0.0;
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              (*pcVar9)();
              dVar11 = pdVar8[3];
              dVar10 = pdVar8[1];
            }
            dVar11 = dVar11 - dVar10;
            if (local_24 <= 0.0) {
              local_24 = 0.0;
            }
            if (/*3ff0000000000000*/1.0 <= local_24) {
              local_24 = /*3ff0000000000000*/1.0;
            }
            if (NAN(dVar11) == (dVar11 == 0.0)) {
              local_30 = (*param_2 - dVar10) / dVar11;
            }
            else {
              local_30 = 0.0;
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              (*pcVar9)();
            }
            if (local_30 <= /*0000000000000000*/0.0) {
              local_30 = /*0000000000000000*/0.0;
            }
            if (/*3ff0000000000000*/1.0 <= local_30) {
              local_30 = /*3ff0000000000000*/1.0;
            }
            local_1c = local_30;
            local_14 = local_24;
            if (local_24 < local_30) {
              local_1c = local_24;
              local_14 = local_30;
            }
            local_30 = /*3e45798ee2308c3a*/1e-08;
            bVar6 = util__IsACoplanarOrbit(&local_1c,&local_14,&local_30);
            if (!bVar6) {
              local_50.B.X = *pdVar8;
              local_50.A.Y = pdVar8[1];
              local_50.A.X = (pdVar8[2] - local_50.B.X) * local_1c + local_50.B.X;
              local_50.B.X = (pdVar8[2] - local_50.B.X) * local_14 + local_50.B.X;
              local_50.B.Y = local_14 * (pdVar8[3] - local_50.A.Y) + local_50.A.Y;
              local_50.A.Y = (pdVar8[3] - local_50.A.Y) * local_1c + local_50.A.Y;
              util__Darray_struct_util__Line2_double_____Add(param_3,&local_50);
            }
          }
          else {
            iVar7 = *(int *)(param_3 + 8);
            local_24 = (double)CONCAT44(iVar7 + 1,(undefined4)local_24);
            util__Darray_struct_util__Line2_double_____SetSize(param_3,(int *)((int)&local_24 + 4));
            bVar6 = util__Darray_struct_util__Line2_double_____CheckSize(param_3,iVar7);
            pcVar9 = DebugBreak_exref;
            if (bVar6) {
              iVar7 = *(int *)(param_3 + 8);
              iVar2 = *(int *)(param_3 + 4);
              uVar3 = *(undefined4 *)((int)pdVar8 + 4);
              uVar4 = *(undefined4 *)(pdVar8 + 1);
              uVar5 = *(undefined4 *)((int)pdVar8 + 0xc);
              puVar1 = (undefined4 *)(iVar7 * 0x20 + -0x20 + iVar2);
              *puVar1 = *(undefined4 *)pdVar8;
              puVar1[1] = uVar3;
              puVar1[2] = uVar4;
              puVar1[3] = uVar5;
              uVar3 = *(undefined4 *)((int)pdVar8 + 0x14);
              uVar4 = *(undefined4 *)(pdVar8 + 3);
              uVar5 = *(undefined4 *)((int)pdVar8 + 0x1c);
              puVar1 = (undefined4 *)(iVar7 * 0x20 + -0x10 + iVar2);
              *puVar1 = *(undefined4 *)(pdVar8 + 2);
              puVar1[1] = uVar3;
              puVar1[2] = uVar4;
              puVar1[3] = uVar5;
              pcVar9 = DebugBreak_exref;
            }
          }
        }
      }
      param_1 = local_28;
      local_c = local_c + 1;
      iVar7 = (**(code **)(*local_28 + 0xc))();
    } while (local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000501fc0 00501fc0_FUN_00501fc0 ====
void FUN_00501fc0(int *param_1,double *param_2,double *param_3);

// decompiled by BatchDecomp @ 00501fc0 name=FUN_00501fc0 conv=unknown body=452

void FUN_00501fc0(int *param_1,double *param_2,double *param_3)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  Maybe_L_double_G_ *pMVar5;
  double dVar6;
  double dVar7;
  Maybe_L_double_G_ local_34;
  Maybe_L_double_G_ local_24;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pdVar4 = (double *)(**(code **)*param_1)(&local_c);
      dVar6 = pdVar4[3];
      dVar1 = *param_2;
      if (dVar1 < dVar6) {
        dVar7 = pdVar4[1];
        if (((dVar1 <= dVar7) && (dVar6 <= dVar1)) || ((dVar1 <= dVar6 && (dVar7 <= dVar1)))) {
          local_14 = (dVar1 - dVar7) / (dVar6 - dVar7);
          if (((local_14 <= 0.0) && (/*3ff0000000000000*/1.0 <= local_14)) ||
             ((local_14 <= /*3ff0000000000000*/1.0 && (0.0 <= local_14)))) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (!bVar2) {
            util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\crafts\\armor.cpp",
                            0x4e0,"Between(u, 0., 1.)",(char *)0x0);
            DebugBreak();
            dVar7 = pdVar4[1];
          }
          dVar6 = *pdVar4;
          if (local_14 <= 0.0) {
            local_14 = 0.0;
          }
          pMVar5 = &local_34;
          if (/*3ff0000000000000*/1.0 <= local_14) {
            local_14 = /*3ff0000000000000*/1.0;
          }
          dVar7 = (local_14 * (pdVar4[3] - dVar7) + dVar7) - dVar7;
          dVar6 = (local_14 * (pdVar4[2] - dVar6) + dVar6) - dVar6;
          local_14 = dVar7 * dVar7 + dVar6 * dVar6;
          goto LAB_00502128;
        }
      }
      else {
        pMVar5 = &local_24;
        local_14 = (pdVar4[3] - pdVar4[1]) * (pdVar4[3] - pdVar4[1]) +
                   (pdVar4[2] - *pdVar4) * (pdVar4[2] - *pdVar4);
LAB_00502128:
        pMVar5 = util__Sqrt(pMVar5,&local_14);
        if (pMVar5->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        *param_3 = pMVar5->Data + *param_3;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000502340 00502340_FUN_00502340 ====
void FUN_00502340(int *param_1,int *param_2,char *param_3,double *param_4,undefined4 param_5, char *param_6);

// decompiled by BatchDecomp @ 00502340 name=FUN_00502340 conv=unknown body=602

void FUN_00502340(int *param_1,int *param_2,char *param_3,double *param_4,undefined4 param_5,
                 char *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  Maybe_L_double_G_ *pMVar9;
  double *pdVar10;
  Maybe_L_double_G_ local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  double local_30;
  double local_28;
  int *local_20;
  char local_1a;
  char local_19;
  double local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_10 = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar4) {
    do {
      iVar4 = local_10;
      piVar5 = (int *)(**(code **)*param_1)(&local_10);
      iVar6 = (**(code **)(*param_2 + 0xc))();
      iVar7 = (**(code **)(*param_2 + 0xc))();
      if ((iVar4 != iVar7 + -2) || (local_1a = '\x01', iVar4 < 1)) {
        local_1a = '\0';
      }
      if (iVar4 == 1) {
        iVar7 = (**(code **)(*param_2 + 0xc))();
        local_19 = '\x01';
        if (iVar7 + -1 < 2) goto LAB_005023ba;
      }
      else {
LAB_005023ba:
        local_19 = '\0';
      }
      if ((iVar4 == iVar6 + -1) && (*param_3 != '\0')) {
        dVar3 = *param_4 + /*3f50624dd2f1a9fc*/0.001 + *(double *)(piVar5 + 4);
LAB_0050256c:
        *(double *)(piVar5 + 4) = dVar3;
      }
      else {
        if ((iVar4 == 0) && (*param_6 != '\0')) {
          dVar3 = *(double *)(piVar5 + 4) - (*param_4 + /*3f50624dd2f1a9fc*/0.001);
          goto LAB_0050256c;
        }
        local_c = 0;
        local_18 = *param_4;
        iVar4 = (**(code **)(*piVar5 + 0xc))();
        if (local_c < iVar4) {
          do {
            pdVar8 = (double *)(**(code **)*piVar5)(&local_c);
            local_28 = *pdVar8 * *pdVar8 + pdVar8[1] * pdVar8[1];
            pMVar9 = util__Sqrt(&local_58,&local_28);
            if (pMVar9->IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            dVar3 = *pdVar8;
            dVar1 = pMVar9->Data;
            dVar2 = pdVar8[1];
            if (((NAN(dVar3) == (dVar3 == 0.0)) || (NAN(dVar2) == (dVar2 == 0.0))) &&
               (NAN(dVar1) == (dVar1 == 0.0))) {
              pdVar10 = &local_38;
              local_38 = dVar3 * (/*3ff0000000000000*/1.0 / dVar1);
              local_30 = dVar2 * (/*3ff0000000000000*/1.0 / dVar1);
            }
            else {
              pdVar10 = (double *)&local_48;
              local_48 = 0;
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
            }
            dVar1 = *pdVar10;
            iVar4 = *piVar5;
            pdVar8[1] = dVar2 + pdVar10[1] * local_18;
            *pdVar8 = dVar1 * local_18 + dVar3;
            local_c = local_c + 1;
            iVar4 = (**(code **)(iVar4 + 0xc))();
          } while (local_c < iVar4);
        }
        if (((local_1a != '\0') && ((local_19 == '\0' || (*param_6 == '\0')))) && (*param_3 != '\0')
           ) {
          dVar3 = *(double *)(piVar5 + 4) + *param_4;
          goto LAB_0050256c;
        }
        if (((local_19 != '\0') && ((local_1a == '\0' || (*param_3 == '\0')))) && (*param_6 != '\0')
           ) {
          dVar3 = *(double *)(piVar5 + 4) - *param_4;
          goto LAB_0050256c;
        }
      }
      param_1 = local_20;
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*local_20 + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000504200 00504200_FUN_00504200 ====
void FUN_00504200(Darray_L_struct_CraftSplinePoint_G_ *param_1,int *param_2,int param_3);

// decompiled by BatchDecomp @ 00504200 name=FUN_00504200 conv=unknown body=620

void FUN_00504200(Darray_L_struct_CraftSplinePoint_G_ *param_1,int *param_2,int param_3)

{
  int iVar1;
  Darray_L_struct_CraftSplinePoint_G_ *this;
  bool bVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  double dVar6;
  double local_84;
  double local_7c;
  double local_74;
  double local_6c;
  double local_64;
  double local_5c;
  double local_54;
  undefined **local_4c;
  void *local_48;
  int local_44;
  double local_3c;
  double local_34;
  int local_2c;
  int *local_28;
  Darray_L_struct_CraftSplinePoint_G_ *local_24;
  double *local_20;
  undefined8 local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_28 = param_2;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  util__Darray_struct_CraftSplinePoint___Darray_struct_CraftSplinePoint__o2(param_1,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    local_2c = param_3;
    do {
      iVar3 = local_2c;
      pdVar4 = (double *)(**(code **)*param_2)(&local_c);
      iVar3 = *(int *)(iVar3 + 0x10);
      if (iVar3 == 1) {
        iVar5 = 3;
      }
      else if (iVar3 == 2) {
        iVar5 = 4;
      }
      else if (iVar3 == 3) {
        iVar5 = 5;
      }
      else if (iVar3 == 4) {
        iVar5 = 6;
      }
      else if (iVar3 == 5) {
        iVar5 = 8;
      }
      else {
        iVar5 = 0x20;
        if (iVar3 == 6) {
          iVar5 = 0xc;
        }
      }
      local_1c = /*3ff0000000000000*/1.0;
      if (*(char *)(param_3 + 0x20) != '\0') {
        local_1c = *(double *)(param_3 + 0x18);
      }
      local_54 = *pdVar4;
      local_14 = pdVar4[1];
      util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_4c,iVar5);
      local_3c = local_14;
      if (local_1c < /*3ff0000000000000*/1.0) {
        local_84 = local_1c;
        local_20 = &local_84;
        local_7c = /*3ff0000000000000*/1.0;
      }
      else {
        local_74 = /*3ff0000000000000*/1.0;
        local_20 = &local_74;
        local_6c = /*3ff0000000000000*/1.0 / local_1c;
      }
      iVar3 = 0;
      local_64 = (double)iVar5;
      do {
        pdVar4 = local_20;
        local_14 = ((double)iVar3 * /*401921fb54442d18*/6.283185307179586) / local_64;
        local_1c = util__Cos(&local_14);
        dVar6 = util__Sin(&local_14);
        iVar1 = local_44;
        local_34 = local_54 * *pdVar4 * local_1c;
        local_1c = (double)CONCAT44(local_44 + 1,(undefined4)local_1c);
        local_5c = local_54 * pdVar4[1] * dVar6;
        util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_4c,(int *)((int)&local_1c + 4));
        bVar2 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_4c,iVar1);
        this = local_24;
        if (bVar2) {
          *(double *)((int)local_48 + local_44 * 0x10 + -0x10) = local_34;
          *(double *)((int)local_48 + local_44 * 0x10 + -8) = local_5c;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
      iVar3 = *(int *)(local_24 + 8);
      local_1c = (double)CONCAT44(iVar3 + 1,(undefined4)local_1c);
      util__Darray_struct_CraftSplinePoint___SetSize(local_24,(int *)((int)&local_1c + 4));
      bVar2 = util__Darray_struct_CraftSplinePoint___CheckSize(this,iVar3);
      if (bVar2) {
        iVar3 = *(int *)(this + 4) + *(int *)(this + 8) * 0x18;
        util__Darray_struct_util__Vec2_double_____operator
                  ((Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar3 + -0x18),
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_4c);
        *(double *)(iVar3 + -8) = local_3c;
      }
      local_4c = ((void *)(0x00919ac4u));
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      param_2 = local_28;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_28 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000504640 00504640_FUN_00504640 ====
void FUN_00504640(int *param_1,CraftBlueprintArmor *param_2);

// decompiled by BatchDecomp @ 00504640 name=FUN_00504640 conv=unknown body=462

void FUN_00504640(int *param_1,CraftBlueprintArmor *param_2)

{
  bool bVar1;
  int iVar2;
  double *pdVar3;
  Maybe_L_double_G_ *pMVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  Maybe_L_double_G_ local_74;
  Maybe_L_double_G_ local_64;
  Vec2_L_double_G_ local_54;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  Darray_L_double_G_ local_24;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24._pad_0x0_0 = 0;
  local_24.Data = (double *)0x0;
  local_24.Size = 0;
  local_24.Capacity = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  util__Darray_double___Darray_double(&local_24,iVar2);
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar8 = &local_c;
      pdVar3 = (double *)(**(code **)*param_1)();
      if ((param_2->ArmorLayers)._pad_0x0_0 == 0) {
        uVar6 = 0x00000000u;
        uVar7 = (undefined4)((ulonglong)/*3ff0000000000000*/1.0 >> 0x20);
      }
      else {
        fVar5 = (float10)__CIatan2();
        local_14 = (double)fVar5;
        CraftBlueprintArmor__GetSurfacePointFromAngle(param_2,&local_54,(double)CONCAT44(piVar8,(int)((ulonglong)local_14 >> 0x20)));
        local_34 = local_54.X * local_54.X + local_54.Y * local_54.Y;
        pMVar4 = util__Sqrt(&local_64,&local_34);
        local_14 = (double)CONCAT44(pMVar4,(undefined4)local_14);
        if (pMVar4->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          pMVar4 = ((slice_view *)&local_14)->_4_4_;
        }
        uVar6 = *(undefined4 *)&pMVar4->Data;
        uVar7 = (undefined4)((ulonglong)pMVar4->Data >> 0x20);
      }
      local_2c = /*3ff0000000000000*/1.0 / (double)CONCAT44(uVar7,uVar6);
      local_3c = *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1];
      pMVar4 = util__Sqrt(&local_74,&local_3c);
      if (pMVar4->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      iVar2 = local_24.Size;
      local_44 = pMVar4->Data;
      local_14 = (double)CONCAT44(local_24.Size + 1,(undefined4)local_14);
      util__Darray_double___SetSize(&local_24,(int *)((int)&local_14 + 4));
      bVar1 = util__Darray_double___CheckSize(&local_24,iVar2);
      if (bVar1) {
        local_24.Data[local_24.Size + -1] = local_44 * local_2c;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  local_2c = util__FUN_00504640(&local_24);
  local_24._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_24.Data != (double *)0x0) {
    operator_delete__(local_24.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000504810 00504810_FUN_00504810 ====
void FUN_00504810(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4, undefined4 *param_5,int *param_6,int *param_7,double *param_8);

// decompiled by BatchDecomp @ 00504810 name=FUN_00504810 conv=unknown body=521

void FUN_00504810(undefined4 *param_1,int *param_2,undefined4 *param_3,int *param_4,
                 undefined4 *param_5,int *param_6,int *param_7,double *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double *pdVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double *local_1c;
  double *local_18;
  double *local_14;
  double *local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (double *)*param_3;
  local_c = (double *)*param_5;
  iVar8 = *param_4;
  if ((int)local_10 < iVar8) {
    local_18 = param_8;
    do {
      if (*param_6 <= (int)local_c) break;
      local_1c = (double *)(**(code **)*param_1)(&local_10);
      pdVar5 = (double *)(**(code **)*param_1)(&local_c);
      dVar15 = *pdVar5 - *local_18;
      dVar12 = pdVar5[1] - local_18[1];
      dVar16 = *local_1c - *local_18;
      dVar14 = local_1c[1] - local_18[1];
      dVar13 = dVar15 / dVar12;
      dVar11 = dVar16 / dVar14;
      if ((NAN(dVar13) || NAN(dVar11)) == (dVar13 == dVar11)) {
        bVar10 = dVar13 == dVar11;
        bVar9 = dVar13 < dVar11;
      }
      else {
        dVar13 = dVar12 * dVar12 + dVar15 * dVar15;
        dVar11 = dVar14 * dVar14 + dVar16 * dVar16;
        bVar10 = dVar11 == dVar13;
        bVar9 = dVar11 < dVar13;
      }
      local_14 = (double *)*param_7;
      *param_7 = (int)local_14 + 1;
      if (bVar9 || bVar10) {
        uVar1 = *(undefined4 *)local_1c;
        uVar2 = *(undefined4 *)((int)local_1c + 4);
        uVar3 = *(undefined4 *)(local_1c + 1);
        uVar4 = *(undefined4 *)((int)local_1c + 0xc);
        puVar6 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar6 = uVar1;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        local_10 = (double *)((int)local_10 + 1);
      }
      else {
        uVar1 = *(undefined4 *)pdVar5;
        uVar2 = *(undefined4 *)((int)pdVar5 + 4);
        uVar3 = *(undefined4 *)(pdVar5 + 1);
        uVar4 = *(undefined4 *)((int)pdVar5 + 0xc);
        local_1c = local_14;
        local_14 = pdVar5;
        puVar6 = (undefined4 *)(**(code **)*param_2)(&local_1c);
        *puVar6 = uVar1;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        local_c = (double *)((int)local_c + 1);
      }
      iVar8 = *param_4;
    } while ((int)local_10 < iVar8);
    if ((int)local_10 < iVar8) {
      do {
        local_18 = (double *)*param_7;
        *param_7 = (int)local_18 + 1;
        local_14 = local_10;
        local_10 = (double *)((int)local_10 + 1);
        puVar6 = (undefined4 *)(**(code **)*param_1)(&local_14);
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar6 = (undefined4 *)(**(code **)*param_2)(&local_18);
        *puVar6 = uVar1;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_18 = (double *)*param_7;
      *param_7 = (int)local_18 + 1;
      local_14 = local_c;
      local_c = (double *)((int)local_c + 1);
      puVar6 = (undefined4 *)(**(code **)*param_1)(&local_14);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar6 = (undefined4 *)(**(code **)*param_2)(&local_18);
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
    } while ((int)local_c < *param_6);
  }
  iVar8 = *param_7;
  iVar7 = (**(code **)(*param_2 + 0xc))();
  if ((iVar7 < iVar8) || (iVar8 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000524530 00524530_FUN_00524530 ====
void FUN_00524530(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 00524530 name=FUN_00524530 conv=unknown body=574

void FUN_00524530(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  ReferenceController *this;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  ReferenceController *pRVar7;
  ReferenceController *local_44;
  double local_40;
  undefined1 local_38[16];
  undefined4 *local_28;
  undefined1 *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_24 = (undefined1 *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar3) {
          *puVar5 = 0;
        }
      }
      ((slice_view *)&local_38)->_8_8_ = EngineCompartment__GetMaxThrust_N((EngineCompartment *)*puVar5);
      if (((char)local_10 == '\0') || (local_20 < (double)((slice_view *)&local_38)->_8_8_)) {
        local_24 = (undefined1 *)*puVar5;
        pRVar7 = (ReferenceController *)puVar5[1];
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        this = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar7,local_24);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
        local_20 = (double)((slice_view *)&local_38)->_8_8_;
      }
      local_c = (double *)((int)local_c + 1);
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  if ((char)local_10 == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0.0;
    pdVar6 = (double *)0x0;
    pRVar7 = (ReferenceController *)local_38;
    local_38[0] = 0;
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
  }
  else {
    pRVar7 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    ((slice_view *)&local_38)->_8_8_ = local_20;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
      if (pRVar7 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar7);
        util__ReferenceController__ReleaseWeakReference(pRVar7);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
      }
    }
    local_44 = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    bVar2 = true;
    bVar1 = true;
    bVar3 = false;
    local_38[0] = 1;
    pdVar6 = local_c;
    local_40 = (double)((slice_view *)&local_38)->_8_8_;
  }
  local_c = &local_40;
  local_24 = local_38;
  *local_28 = pdVar6;
  local_28[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(double *)(local_28 + 2) = *local_c;
  *(undefined1 *)(local_28 + 4) = *local_24;
  if (bVar3) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar1) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005250c0 005250c0_FUN_005250c0 ====
void FUN_005250c0(int *param_1,undefined4 *param_2,Vec3_L_double_G_ *param_3);

// decompiled by BatchDecomp @ 005250c0 name=FUN_005250c0 conv=unknown body=399

void FUN_005250c0(int *param_1,undefined4 *param_2,Vec3_L_double_G_ *param_3)

{
  undefined4 *puVar1;
  EngineCompartment *this;
  int iVar2;
  ReferenceController *this_00;
  Vec3_L_double_G_ *pVVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  Vec3_L_double_G_ local_4c;
  Vec3_L_double_G_ local_34;
  double local_1c;
  Vec3_L_double_G_ *local_14;
  EngineCompartment *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar5) {
    local_1c = /*3e45798ee2308c3a*/1e-08;
    do {
      puVar6 = (undefined4 *)(**(code **)*param_1)(&local_c);
      puVar1 = (undefined4 *)*param_2;
      if (*(char *)(puVar1 + 4) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (((ReferenceController *)puVar1[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar1[1]),
         !bVar4)) {
        *puVar1 = 0;
      }
      local_10 = (EngineCompartment *)*puVar1;
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar4)) {
        *puVar6 = 0;
      }
      this = (EngineCompartment *)*puVar6;
      local_14 = EngineCompartment__GetUngimballedThrustDirection(local_10,&local_34);
      local_10 = (EngineCompartment *)
                 EngineCompartment__GetUngimballedThrustDirection(this,&local_4c);
      pVVar3 = local_14;
      bVar4 = util__IsACoplanarOrbit((double *)local_10,&local_14->X,&local_1c);
      if (((bVar4) &&
          (bVar4 = util__IsACoplanarOrbit((double *)&local_10->_pad_0x0_0,&pVVar3->Y,&local_1c), bVar4)
          ) && (bVar4 = util__IsACoplanarOrbit((double *)&local_10->_pad_0x0_0,&pVVar3->Z,&local_1c),
               bVar4)) {
        local_10 = (EngineCompartment *)param_3;
        iVar5 = *(int *)&param_3->Y;
        local_14 = (Vec3_L_double_G_ *)(iVar5 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_3,(int *)&local_14);
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_10,iVar5);
        if (bVar4) {
          iVar5 = local_10->_pad_0x0_0;
          iVar2 = *(int *)((int)&local_10->_pad_0x0_0 + 4);
          local_14 = *(Vec3_L_double_G_ **)(iVar2 + -4 + iVar5 * 8);
          *(undefined4 *)(iVar2 + -8 + iVar5 * 8) = *puVar6;
          this_00 = (ReferenceController *)puVar6[1];
          *(ReferenceController **)(iVar2 + -4 + iVar5 * 8) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (local_14 != (Vec3_L_double_G_ *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)local_14);
          }
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000526d40 00526d40_FUN_00526d40 ====
void FUN_00526d40(int *param_1);

// decompiled by BatchDecomp @ 00526d40 name=FUN_00526d40 conv=unknown body=398

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00526d40(int *param_1)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 local_24;
  undefined **local_20;
  void *pvStack_1c;
  int iStack_18;
  uint uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_14 = (**(code **)(*param_1 + 0xc))();
  local_20 = ((void *)(0x00919aa0u));
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  if (((int)uStack_14 < 0) || (0x3fffffff < (int)uStack_14)) {
    uStack_14 = 0;
  }
  else if (0 < (int)uStack_14) {
    uVar7 = -(uint)((int)((ulonglong)uStack_14 * 4 >> 0x20) != 0) | (uint)((ulonglong)uStack_14 * 4)
    ;
    pvVar2 = operator_new__(uVar7);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      memset(pvVar2,0,uVar7);
    }
    iVar3 = 0;
    pvStack_1c = pvVar2;
    if (0 < (int)uStack_14) {
      do {
        *(undefined4 *)((int)pvVar2 + iVar3 * 4) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uStack_14);
    }
  }
  local_10 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_10);
      iVar5 = ModuleCompartment__GetLengthIndex((ModuleCompartment *)*puVar4);
      iVar3 = iStack_18;
      local_c = iStack_18 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_c);
      bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar3);
      if (bVar1) {
        *(int *)((int)pvStack_1c + iStack_18 * 4 + -4) = iVar5;
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  iVar3 = (*(code *)local_20[3])();
  if (iVar3 != 0) {
    local_24 = 0;
    piVar6 = (int *)(*(code *)*local_20)(&local_24);
    local_c = 0;
    iVar3 = *piVar6;
    iVar5 = (*(code *)local_20[3])();
    if (local_c < iVar5) {
      do {
        piVar6 = (int *)(*(code *)*local_20)(&local_c);
        if (iVar3 <= *piVar6) {
          iVar3 = *piVar6;
        }
        local_c = local_c + 1;
        iVar5 = (*(code *)local_20[3])();
      } while (local_c < iVar5);
    }
  }
  local_20 = ((void *)(0x00919aa0u));
  if (pvStack_1c != (void *)0x0) {
    operator_delete__(pvStack_1c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000526ed0 00526ed0_FUN_00526ed0 ====
void FUN_00526ed0(int *param_1);

// decompiled by BatchDecomp @ 00526ed0 name=FUN_00526ed0 conv=unknown body=477

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00526ed0(int *param_1)

{
  double dVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  Vec3_L_double_G_ *pVVar7;
  Maybe_L_double_G_ *pMVar8;
  double *pdVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  Vec3_L_double_G_ local_5c;
  Maybe_L_double_G_ local_44;
  double local_34;
  undefined4 local_2c;
  Darray_L_double_G_ local_28;
  double local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28._pad_0x0_0 = 0;
  local_28.Data = (double *)0x0;
  local_28.Size = 0;
  local_28.Capacity = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  util__Darray_double___Darray_double(&local_28,iVar5);
  local_10 = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*param_1)(&local_10);
      cVar3 = (**(code **)(**(int **)(*piVar6 + 0x38) + 0x78))();
      if (cVar3 == '\0') {
        piVar2 = *(int **)&((ModuleCompartment *)*piVar6)->LostPower;
        pVVar7 = ModuleCompartment__GetOffset_m((ModuleCompartment *)*piVar6,&local_5c);
        local_34 = pVVar7->Y * pVVar7->Y + pVVar7->X * pVVar7->X;
        pMVar8 = util__Sqrt(&local_44,&local_34);
        if (pMVar8->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_18 = pMVar8->Data;
        fVar10 = (float10)(**(code **)(*piVar2 + 0xa4))();
        local_18 = (double)(fVar10 + (float10)local_18);
      }
      else {
        local_18 = 0.0;
      }
      iVar5 = local_28.Size;
      local_c = local_28.Size + 1;
      util__Darray_double___SetSize(&local_28,&local_c);
      bVar4 = util__Darray_double___CheckSize(&local_28,iVar5);
      if (bVar4) {
        local_28.Data[local_28.Size + -1] = local_18;
      }
      local_10 = local_10 + 1;
      iVar5 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar5);
  }
  iVar5 = (**(code **)(local_28._pad_0x0_0 + 0xc))();
  if (iVar5 == 0) {
    uVar11 = 0;
    uVar12 = 0;
  }
  else {
    local_2c = 0;
    pdVar9 = (double *)(**(code **)local_28._pad_0x0_0)(&local_2c);
    local_c = 0;
    local_18 = *pdVar9;
    iVar5 = (**(code **)(local_28._pad_0x0_0 + 0xc))();
    if (local_c < iVar5) {
      do {
        pdVar9 = (double *)(**(code **)local_28._pad_0x0_0)(&local_c);
        uVar11 = *(undefined4 *)&local_18;
        uVar12 = *(undefined4 *)((char *)&local_18 + 4);
        dVar1 = *pdVar9;
        if (local_18 <= dVar1) {
          uVar11 = *(undefined4 *)&dVar1;
          uVar12 = *(undefined4 *)((char *)&dVar1 + 4);
        }
        local_c = local_c + 1;
        local_18 = (double)CONCAT44(uVar12,uVar11);
        iVar5 = (**(code **)(local_28._pad_0x0_0 + 0xc))();
      } while (local_c < iVar5);
    }
    uVar11 = *(undefined4 *)&local_18;
    uVar12 = *(undefined4 *)((char *)&local_18 + 4);
  }
  local_18 = (double)CONCAT44(uVar12,uVar11);
  local_28._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_28.Data != (double *)0x0) {
    operator_delete__(local_28.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005337a0 005337a0_FUN_005337a0 ====
void FUN_005337a0(int *param_1,undefined4 param_2,undefined4 param_3,double *param_4);
extern undefined4 FUN_0053f910(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 005337a0 name=FUN_005337a0 conv=unknown body=663

void FUN_005337a0(int *param_1,undefined4 param_2,undefined4 param_3,double *param_4)

{
  bool bVar1;
  int iVar2;
  double *pdVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  double local_5c;
  double local_54;
  undefined **local_4c;
  void *local_48;
  int *local_3c;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_3c = param_1;
  local_10 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar2) {
    do {
      pdVar3 = (double *)(**(code **)*param_1)(&local_10);
      local_20 = *pdVar3;
      piVar4 = (int *)FUN_0053f910(&local_4c,param_3);
      local_c = 0;
      iVar2 = (**(code **)(*piVar4 + 0xc))();
      if (local_c < iVar2) {
        do {
          pdVar3 = (double *)(**(code **)*piVar4)(&local_c);
          local_38 = *pdVar3;
          local_28 = local_20;
          local_18 = local_20;
          local_30 = local_38;
          if (NAN(local_20)) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl"
                            ,0x82,"!IsNan(Angle_radians)",(char *)0x0);
            DebugBreak();
          }
          local_54 = local_28 / /*401921fb54442d18*/6.283185307179586;
          dVar6 = util__Floor(&local_54);
          local_18 = local_18 - dVar6 * /*401921fb54442d18*/6.283185307179586;
          if (local_18 < /*401921fb54442d18*/6.283185307179586) {
            local_28 = local_18;
            if ((local_18 < 0.0) &&
               (local_28 = local_18 + /*401921fb54442d18*/6.283185307179586,
               (NAN(local_28) || NAN(/*401921fb54442d18*/6.283185307179586)) !=
               (local_28 == /*401921fb54442d18*/6.283185307179586))) {
              local_28 = 0.0;
            }
          }
          else {
            local_28 = 0.0;
          }
          if (NAN(local_38)) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl"
                            ,0x82,"!IsNan(Angle_radians)",(char *)0x0);
            DebugBreak();
          }
          local_18 = local_38 / /*401921fb54442d18*/6.283185307179586;
          dVar6 = util__Floor(&local_18);
          local_30 = local_30 - dVar6 * /*401921fb54442d18*/6.283185307179586;
          if ((/*401921fb54442d18*/6.283185307179586 <= local_30) ||
             ((local_30 < 0.0 &&
              (local_30 = local_30 + /*401921fb54442d18*/6.283185307179586,
              (NAN(local_30) || NAN(/*401921fb54442d18*/6.283185307179586)) !=
              (local_30 == /*401921fb54442d18*/6.283185307179586))))) {
            local_30 = 0.0;
          }
          local_30 = local_28 - local_30;
          local_28 = local_30;
          dVar6 = util__Abs(&local_30);
          dVar6 = /*401921fb54442d18*/6.283185307179586 - dVar6;
          local_5c = local_28;
          local_38 = util__Abs(&local_5c);
          dVar5 = local_38;
          if (dVar6 <= local_38) {
            dVar5 = dVar6;
          }
          if (dVar5 <= *param_4) {
            bVar1 = true;
            goto LAB_005339ce;
          }
          local_c = local_c + 1;
          iVar2 = (**(code **)(*piVar4 + 0xc))();
        } while (local_c < iVar2);
      }
      bVar1 = false;
LAB_005339ce:
      local_4c = ((void *)(0x0091da54u));
      if (local_48 != (void *)0x0) {
        operator_delete__(local_48);
      }
      param_1 = local_3c;
      local_48 = (void *)0x0;
      local_4c = ((void *)(0x00919488u));
      if (bVar1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_10 = local_10 + 1;
      iVar2 = (**(code **)(*local_3c + 0xc))();
    } while (local_10 < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000533e80 00533e80_FUN_00533e80 ====
void FUN_00533e80(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int *param_2,double *param_3);

// decompiled by BatchDecomp @ 00533e80 name=FUN_00533e80 conv=unknown body=540

void FUN_00533e80(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int *param_2,double *param_3)

{
  int iVar1;
  CraftSplinePoint *this;
  Vec2_L_double_G_ *pVVar2;
  code *pcVar3;
  float10 fVar4;
  undefined **local_80;
  void *local_7c;
  double local_70;
  char local_68;
  undefined **local_60;
  void *local_5c;
  Vec2_L_double_G_ local_58;
  double local_48;
  Darray_L_struct_util__Vec2_L_double_G___G_ *local_40;
  double local_3c;
  double local_34;
  undefined **local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  double local_1c;
  char local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  iVar1 = (**(code **)(*param_2 + 0xc))();
  pcVar3 = DebugBreak_exref;
  if (iVar1 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_2c = ((void *)(0x00919ac4u));
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0.0;
  local_14 = '\0';
  local_34 = 0.0;
  local_c = 0;
  iVar1 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar1) {
    do {
      this = (CraftSplinePoint *)(**(code **)*param_2)(&local_c);
      pVVar2 = CraftSplinePoint__GetBulkPoint_m(this,&local_58);
      local_48 = pVVar2->Y - param_3[1];
      local_3c = pVVar2->X - *param_3;
      fVar4 = (float10)__CIatan2();
      local_3c = (double)fVar4;
      if ((local_14 == '\0') || (local_34 < local_3c)) {
        util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_80,
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)this);
        local_70 = *(double *)(this + 0x10);
        local_68 = '\x01';
        util__Darray_struct_util__Vec2_double_____operator
                  ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_2c,
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_80);
        local_14 = local_68;
        local_1c = local_70;
        local_80 = ((void *)(0x00919ac4u));
        if (local_7c != (void *)0x0) {
          operator_delete__(local_7c);
        }
        local_34 = local_3c;
      }
      local_c = local_c + 1;
      iVar1 = (**(code **)(*param_2 + 0xc))();
      param_1 = local_40;
      pcVar3 = DebugBreak_exref;
    } while (local_c < iVar1);
  }
  if (local_14 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar3)();
    if (local_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar3)();
    }
  }
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_60,
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_2c);
  local_58.Y = local_1c;
  local_48 = local_34;
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double(param_1,(Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_60);
  *(double *)(param_1 + 0x10) = local_58.Y;
  *(double *)(param_1 + 0x18) = local_48;
  local_60 = ((void *)(0x00919ac4u));
  if (local_5c != (void *)0x0) {
    operator_delete__(local_5c);
  }
  local_2c = ((void *)(0x00919ac4u));
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005340a0 005340a0_FUN_005340a0 ====
void FUN_005340a0(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int *param_2,double *param_3);

// decompiled by BatchDecomp @ 005340a0 name=FUN_005340a0 conv=unknown body=540

void FUN_005340a0(Darray_L_struct_util__Vec2_L_double_G___G_ *param_1,int *param_2,double *param_3)

{
  int iVar1;
  CraftSplinePoint *this;
  Vec2_L_double_G_ *pVVar2;
  code *pcVar3;
  float10 fVar4;
  undefined **local_80;
  void *local_7c;
  double local_70;
  char local_68;
  undefined **local_60;
  void *local_5c;
  Vec2_L_double_G_ local_58;
  double local_48;
  Darray_L_struct_util__Vec2_L_double_G___G_ *local_40;
  double local_3c;
  double local_34;
  undefined **local_2c;
  void *local_28;
  undefined4 local_24;
  undefined4 local_20;
  double local_1c;
  char local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  iVar1 = (**(code **)(*param_2 + 0xc))();
  pcVar3 = DebugBreak_exref;
  if (iVar1 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_2c = ((void *)(0x00919ac4u));
  local_28 = (void *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0.0;
  local_14 = '\0';
  local_34 = 0.0;
  local_c = 0;
  iVar1 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar1) {
    do {
      this = (CraftSplinePoint *)(**(code **)*param_2)(&local_c);
      pVVar2 = CraftSplinePoint__GetBulkPoint_m(this,&local_58);
      local_48 = pVVar2->Y - param_3[1];
      local_3c = pVVar2->X - *param_3;
      fVar4 = (float10)__CIatan2();
      local_3c = (double)fVar4;
      if ((local_14 == '\0') || (local_3c < local_34)) {
        util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_80,
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)this);
        local_70 = *(double *)(this + 0x10);
        local_68 = '\x01';
        util__Darray_struct_util__Vec2_double_____operator
                  ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_2c,
                   (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_80);
        local_14 = local_68;
        local_1c = local_70;
        local_80 = ((void *)(0x00919ac4u));
        if (local_7c != (void *)0x0) {
          operator_delete__(local_7c);
        }
        local_34 = local_3c;
      }
      local_c = local_c + 1;
      iVar1 = (**(code **)(*param_2 + 0xc))();
      param_1 = local_40;
      pcVar3 = DebugBreak_exref;
    } while (local_c < iVar1);
  }
  if (local_14 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar3)();
    if (local_14 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar3)();
    }
  }
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_60,
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_2c);
  local_58.Y = local_1c;
  local_48 = local_34;
  util__Darray_struct_util__Vec2_double_____Darray_struct_util__Vec2_double(param_1,(Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_60);
  *(double *)(param_1 + 0x10) = local_58.Y;
  *(double *)(param_1 + 0x18) = local_48;
  local_60 = ((void *)(0x00919ac4u));
  if (local_5c != (void *)0x0) {
    operator_delete__(local_5c);
  }
  local_2c = ((void *)(0x00919ac4u));
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000534450 00534450_FUN_00534450 ====
void FUN_00534450(Darray_L_struct_ModulePlacer_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 00534450 name=FUN_00534450 conv=unknown body=437

void FUN_00534450(Darray_L_struct_ModulePlacer_G_ *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uStack_28;
  undefined4 uStack_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar8 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x00920b98u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar8;
  if (((int)uVar8 < 0) || (0x3fffffff < (int)uVar8)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar8) {
    pvVar9 = operator_new__(-(uint)((int)((ulonglong)uVar8 * 0x28 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar8 * 0x28));
    if (pvVar9 == (void *)0x0) {
      pvVar9 = (void *)0x0;
    }
    else if (uVar8 != 0) {
      puVar10 = (undefined8 *)((int)pvVar9 + 8);
      do {
        *(undefined4 *)(puVar10 + -1) = 0;
        *(undefined4 *)((int)puVar10 + -4) = 0;
        *puVar10 = 0;
        *(undefined4 *)(puVar10 + 1) = 0;
        puVar10[2] = 0;
        *(undefined4 *)(puVar10 + 3) = 0;
        uVar8 = uVar8 - 1;
        puVar10 = puVar10 + 5;
      } while (uVar8 != 0);
    }
    iVar13 = 0;
    *(void **)(param_1 + 4) = pvVar9;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar12 = 0;
      do {
        iVar2 = *(int *)(param_1 + 4);
        iVar12 = iVar12 + 0x28;
        iVar13 = iVar13 + 1;
        puVar11 = (undefined4 *)(iVar2 + -0x28 + iVar12);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11 = (undefined4 *)(iVar2 + -0x18 + iVar12);
        *puVar11 = 0;
        puVar11[1] = uStack_28;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11 = (undefined4 *)(iVar2 + -8 + iVar12);
        *puVar11 = 0;
        puVar11[1] = uStack_18;
      } while (iVar13 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar13 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar13) {
    do {
      puVar11 = (undefined4 *)(**(code **)*param_2)(&local_c);
      cVar6 = (**(code **)(*(int *)*puVar11 + 0x74))();
      if (cVar6 != '\0') {
        iVar13 = *(int *)(param_1 + 8);
        local_10 = iVar13 + 1;
        util__Darray_struct_ModulePlacer___SetSize(param_1,&local_10);
        bVar7 = util__Darray_struct_ModulePlacer___CheckSize(param_1,iVar13);
        if (bVar7) {
          iVar13 = *(int *)(param_1 + 8);
          iVar12 = *(int *)(param_1 + 4);
          uVar3 = puVar11[1];
          uVar4 = puVar11[2];
          uVar5 = puVar11[3];
          puVar1 = (undefined4 *)(iVar12 + -0x28 + iVar13 * 0x28);
          *puVar1 = *puVar11;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          uVar3 = puVar11[5];
          uVar4 = puVar11[6];
          uVar5 = puVar11[7];
          puVar1 = (undefined4 *)(iVar12 + -0x18 + iVar13 * 0x28);
          *puVar1 = puVar11[4];
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          uVar3 = puVar11[9];
          puVar1 = (undefined4 *)(iVar12 + -8 + iVar13 * 0x28);
          *puVar1 = puVar11[8];
          puVar1[1] = uVar3;
        }
      }
      local_c = local_c + 1;
      iVar13 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar13);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005382f0 005382f0_FUN_005382f0 ====
void FUN_005382f0(Darray_L_class_util__Darray_L_struct_MaterialConstituent_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 005382f0 name=FUN_005382f0 conv=unknown body=490

void FUN_005382f0(Darray_L_class_util__Darray_L_struct_MaterialConstituent_G___G_ *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_20;
  undefined **local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 =
       ((void *)(0x00920fc0u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uVar6 = -(uint)((int)((ulonglong)uVar3 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x10);
    puVar4 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      puVar1 = puVar4;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = (uint)((void *)(0x00919b30u));
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 4;
      }
    }
    iVar8 = 0;
    *(uint **)(param_1 + 4) = puVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar7 = 0;
      do {
        local_1c = ((void *)(0x00919b30u));
        local_18 = (void *)0x0;
        local_14 = 0;
        local_10 = 0;
        util__Darray_struct_MaterialConstituent___operator
                  ((Darray_L_struct_MaterialConstituent_G_ *)(*(int *)(param_1 + 4) + iVar7),
                   (Darray_L_struct_MaterialConstituent_G_ *)&local_1c);
        local_1c = ((void *)(0x00919b30u));
        if (local_18 != (void *)0x0) {
          operator_delete__(local_18);
        }
        iVar8 = iVar8 + 1;
        local_18 = (void *)0x0;
        iVar7 = iVar7 + 0x10;
        local_1c = ((void *)(0x00919488u));
        param_2 = local_c;
      } while (iVar8 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = (int *)0x0;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar8) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      (**(code **)(*(int *)*puVar5 + 0x170))(&local_1c);
      iVar8 = *(int *)(param_1 + 8);
      local_20 = iVar8 + 1;
      util__Darray_class_util__Darray_struct_MaterialConstituent_____SetSize(param_1,&local_20);
      bVar2 = util__Darray_class_util__Darray_struct_MaterialConstituent_____CheckSize(param_1,iVar8);
      if (bVar2) {
        util__Darray_struct_MaterialConstituent___operator
                  ((Darray_L_struct_MaterialConstituent_G_ *)
                   (*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4) + -0x10),
                   (Darray_L_struct_MaterialConstituent_G_ *)&local_1c);
      }
      local_1c = ((void *)(0x00919b30u));
      if (local_18 != (void *)0x0) {
        operator_delete__(local_18);
      }
      local_c = (int *)((int)local_c + 1);
      local_18 = (void *)0x0;
      local_1c = ((void *)(0x00919488u));
      iVar8 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000538890 00538890_FUN_00538890 ====
void FUN_00538890(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 00538890 name=FUN_00538890 conv=unknown body=422

void FUN_00538890(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  double dVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar7 = *param_4;
  if ((int)local_10 < iVar7) {
    do {
      if (*param_6 <= (int)local_c) break;
      local_18 = (int *)(**(code **)*param_1)(&local_10);
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      iVar7 = *(int *)(*local_18 + 0x20);
      if (*(int *)(*piVar3 + 0x20) == iVar7) {
        dVar1 = *(double *)(*local_18 + 8);
        bVar2 = *(double *)(*piVar3 + 8) <= dVar1 && dVar1 != *(double *)(*piVar3 + 8);
      }
      else {
        bVar2 = *(int *)(*piVar3 + 0x20) < iVar7;
      }
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      if (bVar2) {
        local_18 = local_14;
        local_14 = piVar3;
        piVar3 = (int *)(**(code **)*param_2)(&local_18);
        *piVar3 = *local_14;
        local_c = (int *)((int)local_c + 1);
      }
      else {
        piVar3 = (int *)(**(code **)*param_2)(&local_14);
        *piVar3 = *local_18;
        local_10 = (int *)((int)local_10 + 1);
      }
      iVar7 = *param_4;
    } while ((int)local_10 < iVar7);
    if ((int)local_10 < iVar7) {
      do {
        local_14 = (int *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar4 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar5 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar5 = *puVar4;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar5 = *puVar4;
    } while ((int)local_c < *param_6);
  }
  iVar7 = *param_7;
  iVar6 = (**(code **)(*param_2 + 0xc))();
  if ((iVar6 < iVar7) || (iVar7 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000538a40 00538a40_FUN_00538a40 ====
void FUN_00538a40(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 00538a40 name=FUN_00538a40 conv=unknown body=407

void FUN_00538a40(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar1 = *param_4;
  if ((int)local_10 < iVar1) {
    do {
      if (*param_6 <= (int)local_c) break;
      local_14 = (int *)(**(code **)*param_1)(&local_10);
      piVar2 = (int *)(**(code **)*param_1)(&local_c);
      iVar1 = *(int *)(*piVar2 + 0x20);
      iVar5 = *(int *)(*local_14 + 0x20);
      local_18 = (int *)*param_7;
      *param_7 = (int)local_18 + 1;
      if (iVar1 < iVar5) {
        local_14 = local_18;
        local_18 = piVar2;
        piVar2 = (int *)(**(code **)*param_2)(&local_14);
        *piVar2 = *local_18;
        local_c = (int *)((int)local_c + 1);
      }
      else {
        piVar2 = (int *)(**(code **)*param_2)(&local_18);
        *piVar2 = *local_14;
        local_10 = (int *)((int)local_10 + 1);
      }
      iVar1 = *param_4;
    } while ((int)local_10 < iVar1);
    if ((int)local_10 < iVar1) {
      do {
        local_14 = (int *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar3 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar4 = *puVar3;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar4 = *puVar3;
    } while ((int)local_c < *param_6);
  }
  iVar1 = *param_7;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if ((iVar5 < iVar1) || (iVar1 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000538be0 00538be0_FUN_00538be0 ====
void FUN_00538be0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7,undefined4 *param_8);

// decompiled by BatchDecomp @ 00538be0 name=FUN_00538be0 conv=unknown body=451

void FUN_00538be0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,undefined4 *param_8)

{
  ModulePlacer *pMVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar5 = *param_4;
  if ((int)local_10 < iVar5) {
    do {
      if (*param_6 <= (int)local_c) break;
      local_14 = (undefined4 *)(**(code **)*param_1)(&local_10);
      local_18 = (undefined4 *)(**(code **)*param_1)(&local_c);
      pMVar1 = (ModulePlacer *)*local_18;
      dVar6 = CraftBlueprint__GetMaxNonSpinalModulesRadiusForPlacer((CraftBlueprint *)*param_8,pMVar1);
      dVar7 = Module__GetPackingRadius_m(pMVar1->ModuleType);
      pMVar1 = (ModulePlacer *)*local_14;
      dVar8 = CraftBlueprint__GetMaxNonSpinalModulesRadiusForPlacer((CraftBlueprint *)*param_8,pMVar1);
      dVar9 = Module__GetPackingRadius_m(pMVar1->ModuleType);
      puVar2 = (undefined4 *)*param_7;
      *param_7 = (int)puVar2 + 1;
      if (dVar9 + dVar8 <= dVar7 + dVar6) {
        local_18 = puVar2;
        puVar2 = (undefined4 *)(**(code **)*param_2)(&local_18);
        *puVar2 = *local_14;
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      else {
        local_14 = puVar2;
        puVar2 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar2 = *local_18;
        local_c = (undefined4 *)((int)local_c + 1);
      }
      iVar5 = *param_4;
    } while ((int)local_10 < iVar5);
    if ((int)local_10 < iVar5) {
      do {
        local_14 = (undefined4 *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar2 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar3 = *puVar2;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (undefined4 *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar2 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar3 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar3 = *puVar2;
    } while ((int)local_c < *param_6);
  }
  iVar5 = *param_7;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((iVar4 < iVar5) || (iVar5 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000538db0 00538db0_FUN_00538db0 ====
void FUN_00538db0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 00538db0 name=FUN_00538db0 conv=unknown body=407

void FUN_00538db0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  double dVar3;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar8 = *param_4;
  if ((int)local_10 < iVar8) {
    do {
      if (*param_6 <= (int)local_c) break;
      local_14 = (int *)(**(code **)*param_1)(&local_10);
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      local_18 = (int *)*param_7;
      dVar1 = *(double *)(*local_14 + 8);
      dVar2 = *(double *)(*piVar4 + 8);
      dVar3 = *(double *)(*piVar4 + 8);
      *param_7 = (int)local_18 + 1;
      if (dVar1 < dVar3 || dVar1 == dVar2) {
        piVar4 = (int *)(**(code **)*param_2)(&local_18);
        *piVar4 = *local_14;
        local_10 = (int *)((int)local_10 + 1);
      }
      else {
        local_14 = local_18;
        local_18 = piVar4;
        piVar4 = (int *)(**(code **)*param_2)(&local_14);
        *piVar4 = *local_18;
        local_c = (int *)((int)local_c + 1);
      }
      iVar8 = *param_4;
    } while ((int)local_10 < iVar8);
    if ((int)local_10 < iVar8) {
      do {
        local_14 = (int *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar5 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar6 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar6 = *puVar5;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar6 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar6 = *puVar5;
    } while ((int)local_c < *param_6);
  }
  iVar8 = *param_7;
  iVar7 = (**(code **)(*param_2 + 0xc))();
  if ((iVar7 < iVar8) || (iVar8 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000538f50 00538f50_FUN_00538f50 ====
void FUN_00538f50(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 00538f50 name=FUN_00538f50 conv=unknown body=474

void FUN_00538f50(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  int *piVar4;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar5;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar6;
  int iVar7;
  int iVar8;
  Darray_L_struct_util__Vec2_L_double_G___G_ *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  double dVar3;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = *param_3;
  local_c = *param_5;
  iVar8 = *param_4;
  local_18 = param_7;
  if (local_10 < iVar8) {
    do {
      piVar4 = local_18;
      if (*param_6 <= local_c) break;
      pDVar5 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_1)(&local_10);
      local_1c = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_1)(&local_c);
      dVar1 = *(double *)(pDVar5 + 0x10);
      local_14 = *piVar4;
      dVar2 = *(double *)(local_1c + 0x10);
      dVar3 = *(double *)(local_1c + 0x10);
      *piVar4 = local_14 + 1;
      if (dVar1 < dVar3 || dVar1 == dVar2) {
        pDVar6 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_2)(&local_14);
        util__Darray_struct_util__Vec2_double_____operator(pDVar6,pDVar5);
        *(undefined8 *)(pDVar6 + 0x10) = *(undefined8 *)(pDVar5 + 0x10);
        local_10 = local_10 + 1;
      }
      else {
        pDVar5 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_2)(&local_14);
        util__Darray_struct_util__Vec2_double_____operator(pDVar5,local_1c);
        *(undefined8 *)(pDVar5 + 0x10) = *(undefined8 *)(local_1c + 0x10);
        local_c = local_c + 1;
      }
      iVar8 = *param_4;
    } while (local_10 < iVar8);
    if (local_10 < iVar8) {
      do {
        local_1c = (Darray_L_struct_util__Vec2_L_double_G___G_ *)*local_18;
        *local_18 = (int)(local_1c + 1);
        local_14 = local_10;
        local_10 = local_10 + 1;
        pDVar5 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_1)(&local_14);
        pDVar6 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_2)(&local_1c);
        util__Darray_struct_util__Vec2_double_____operator(pDVar6,pDVar5);
        *(undefined8 *)(pDVar6 + 0x10) = *(undefined8 *)(pDVar5 + 0x10);
      } while (local_10 < *param_4);
    }
  }
  if (local_c < *param_6) {
    do {
      local_1c = (Darray_L_struct_util__Vec2_L_double_G___G_ *)*local_18;
      *local_18 = (int)(local_1c + 1);
      local_14 = local_c;
      local_c = local_c + 1;
      pDVar5 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_1)(&local_14);
      pDVar6 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)*param_2)(&local_1c);
      util__Darray_struct_util__Vec2_double_____operator(pDVar6,pDVar5);
      *(undefined8 *)(pDVar6 + 0x10) = *(undefined8 *)(pDVar5 + 0x10);
    } while (local_c < *param_6);
  }
  iVar8 = *local_18;
  iVar7 = (**(code **)(*param_2 + 0xc))();
  if ((iVar7 < iVar8) || (iVar8 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000053f750 0053f750_FUN_0053f750 ====
void __thiscall FUN_0053f750(int *param_1,double *param_2,undefined4 *param_3);

// decompiled by BatchDecomp @ 0053f750 name=FUN_0053f750 conv=unknown body=446

void __thiscall FUN_0053f750(int *param_1,double *param_2,undefined4 *param_3)

{
  double dVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  uint local_18;
  
  uVar6 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined4 *)((int)param_2 + 0xc) = 0;
  param_2[2] = 0.0;
  if (0 < (int)param_3[1]) {
    local_18 = 0;
    do {
      fVar11 = (float10)(**(code **)(*(int *)*param_3 + 0x90))();
      piVar3 = (int *)*param_1;
      dVar1 = (double)fVar11;
      uVar4 = piVar3[2];
      if (uVar4 != 0) {
        uVar7 = (local_18 & 0xff) * 0x401;
        uVar7 = ((uVar7 >> 6 ^ uVar7) + (local_18 >> 8 & 0xff)) * 0x401;
        uVar7 = ((uVar7 >> 6 ^ uVar7) + (local_18 >> 0x10 & 0xff)) * 0x401;
        uVar7 = ((uVar7 >> 6 ^ uVar7) + (local_18 >> 0x18)) * 0x401;
        uVar7 = (uVar7 ^ uVar7 >> 6) * 9;
        for (uVar7 = ((uVar7 >> 0xb ^ uVar7) * 0x8001 + (int)param_3 * -0x61c8864f) % uVar4;
            (int)uVar7 < 0; uVar7 = uVar7 + uVar4) {
        }
        if ((int)uVar4 <= (int)uVar7) {
          uVar7 = (int)uVar7 % (int)uVar4;
        }
        cVar2 = *(char *)(piVar3[1] + uVar7);
        for (iVar10 = 0; (cVar2 != '\0' && (iVar10 < (int)uVar4)); iVar10 = iVar10 + 1) {
          iVar5 = *piVar3;
          iVar8 = uVar7 * 0x20;
          if ((*(undefined4 **)(iVar8 + iVar5) == param_3) &&
             (*(uint *)(iVar8 + 4 + iVar5) == local_18)) {
            pdVar9 = (double *)(iVar8 + 8 + iVar5);
            goto LAB_0053f887;
          }
          for (uVar7 = uVar7 + 1; (int)uVar7 < 0; uVar7 = uVar7 + uVar4) {
          }
          if ((int)uVar4 <= (int)uVar7) {
            uVar7 = (int)uVar7 % (int)uVar4;
          }
          cVar2 = *(char *)(piVar3[1] + uVar7);
        }
      }
      pdVar9 = (double *)0x0;
LAB_0053f887:
      local_18 = local_18 + 1;
      dVar12 = pdVar9[1] / /*408f400000000000*/1000.0;
      dVar13 = pdVar9[2] / /*408f400000000000*/1000.0;
      *param_2 = (*pdVar9 / /*408f400000000000*/1000.0) * dVar1 + *param_2;
      param_2[1] = dVar12 * dVar1 + param_2[1];
      param_2[2] = dVar13 * dVar1 + param_2[2];
    } while ((int)local_18 < (int)param_3[1]);
  }
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000055c1b0 0055c1b0_GetTotalPowerGeneration_W_MemoizedFunction ====
// decompiled by BatchDecomp @ 0055c1b0 name=GetTotalPowerGeneration_W_MemoizedFunction conv=__thiscall body=438

/* private: double __thiscall CraftBlueprint__GetTotalPowerGeneration_W_MemoizedFunction(void)const
    */

double __thiscall CraftBlueprint__GetTotalPowerGeneration_W_MemoizedFunction(CraftBlueprint *this)

{
  undefined4 uVar1;
  double dVar2;
  bool bVar3;
  int *piVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  float10 fVar9;
  float10 extraout_ST0;
  undefined **local_38;
  void *local_34;
  double local_28;
  undefined **local_20;
  void *pvStack_1c;
  int iStack_18;
  uint uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar4 = (int *)GetModulesOfType(this,(Type)&local_38);
  local_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  uStack_14 = (**(code **)(*piVar4 + 0xc))();
  local_20 = ((void *)(0x009194a4u));
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  if (((int)uStack_14 < 0) || (0x3fffffff < (int)uStack_14)) {
    uStack_14 = 0;
  }
  else if (0 < (int)uStack_14) {
    uVar8 = -(uint)((int)((ulonglong)uStack_14 * 4 >> 0x20) != 0) | (uint)((ulonglong)uStack_14 * 4)
    ;
    pvVar5 = operator_new__(uVar8);
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      memset(pvVar5,0,uVar8);
    }
    iVar6 = 0;
    pvStack_1c = pvVar5;
    if (0 < (int)uStack_14) {
      do {
        *(undefined4 *)((int)pvVar5 + iVar6 * 4) = 0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uStack_14);
    }
  }
  local_10 = 0;
  iVar6 = (**(code **)(*piVar4 + 0xc))();
  if (local_10 < iVar6) {
    do {
      puVar7 = (undefined4 *)(**(code **)*piVar4)(&local_10);
      iVar6 = iStack_18;
      uVar1 = *puVar7;
      local_c = iStack_18 + 1;
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_c);
      bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar6);
      if (bVar3) {
        *(undefined4 *)((int)pvStack_1c + iStack_18 * 4 + -4) = uVar1;
      }
      local_10 = local_10 + 1;
      iVar6 = (**(code **)(*piVar4 + 0xc))();
    } while (local_10 < iVar6);
  }
  local_38 = ((void *)(0x009199e4u));
  if (local_34 != (void *)0x0) {
    operator_delete__(local_34);
  }
  local_34 = (void *)0x0;
  local_38 = ((void *)(0x00919488u));
  local_28 = 0.0;
  local_c = 0;
  iVar6 = (*(code *)local_20[3])();
  if (local_c < iVar6) {
    do {
      puVar7 = (undefined4 *)(*(code *)*local_20)(&local_c);
      fVar9 = (float10)(**(code **)(*(int *)*puVar7 + 0x154))();
      local_c = local_c + 1;
      dVar2 = 0.0;
      if (0.0 <= (double)fVar9) {
        dVar2 = (double)fVar9;
      }
      local_28 = dVar2 + local_28;
      iVar6 = (*(code *)local_20[3])();
    } while (local_c < iVar6);
  }
  local_20 = ((void *)(0x009194a4u));
  if (pvStack_1c != (void *)0x0) {
    operator_delete__(pvStack_1c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 000056c520 0056c520_FUN_0056c520 ====
void FUN_0056c520(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7,int *param_8);

// decompiled by BatchDecomp @ 0056c520 name=FUN_0056c520 conv=unknown body=527

void FUN_0056c520(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,int *param_8)

{
  double *pdVar1;
  double dVar2;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 local_20;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  double dVar3;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  local_18 = param_1;
  iVar9 = *param_4;
  if ((int)local_10 < iVar9) {
    do {
      puVar6 = local_18;
      if (*param_6 <= (int)local_c) break;
      piVar4 = (int *)(**(code **)*local_18)(&local_10);
      local_14 = (int *)(**(code **)*puVar6)(&local_c);
      iVar9 = *param_8;
      ((slice_view *)&local_20)->_4_4_ = *local_14;
      if ((*(char *)(iVar9 + 0x24) != '\0') || (iVar8 = iVar9, *(int *)(iVar9 + 0xc) == 0xb)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.h"
                        ,0x36,"!IsArray && !IsTuple()",(char *)0x0);
        DebugBreak();
        iVar8 = *param_8;
      }
      local_20 = *(double *)(((slice_view *)&local_20)->_4_4_ + *(int *)(iVar9 + 0x10));
      iVar9 = *piVar4;
      if ((*(char *)(iVar8 + 0x24) != '\0') || (*(int *)(iVar8 + 0xc) == 0xb)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.h"
                        ,0x36,"!IsArray && !IsTuple()",(char *)0x0);
        DebugBreak();
      }
      pdVar1 = (double *)(iVar9 + *(int *)(iVar8 + 0x10));
      dVar2 = *pdVar1;
      dVar3 = *pdVar1;
      piVar5 = (int *)*param_7;
      *param_7 = (int)piVar5 + 1;
      if (local_20 < dVar3 || local_20 == dVar2) {
        local_14 = piVar5;
        piVar5 = (int *)(**(code **)*param_2)(&local_14);
        *piVar5 = *piVar4;
        local_10 = (int *)((int)local_10 + 1);
      }
      else {
        local_20 = (double)CONCAT44(piVar5,(undefined4)local_20);
        piVar4 = (int *)(**(code **)*param_2)((int)&local_20 + 4);
        *piVar4 = *local_14;
        local_c = (int *)((int)local_c + 1);
      }
      iVar9 = *param_4;
    } while ((int)local_10 < iVar9);
    if ((int)local_10 < iVar9) {
      do {
        local_20 = (double)CONCAT44(*param_7,(undefined4)local_20);
        *param_7 = *param_7 + 1;
        local_14 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar6 = (undefined4 *)(**(code **)*local_18)(&local_14);
        puVar7 = (undefined4 *)(**(code **)*param_2)((int)&local_20 + 4);
        *puVar7 = *puVar6;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_20 = (double)CONCAT44(*param_7,(undefined4)local_20);
      *param_7 = *param_7 + 1;
      local_14 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar6 = (undefined4 *)(**(code **)*local_18)(&local_14);
      puVar7 = (undefined4 *)(**(code **)*param_2)((int)&local_20 + 4);
      *puVar7 = *puVar6;
    } while ((int)local_c < *param_6);
  }
  iVar9 = *param_7;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  if ((iVar8 < iVar9) || (iVar9 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000059dbc0 0059dbc0_FUN_0059dbc0 ====
void FUN_0059dbc0(int *param_1,undefined4 param_2,Darray_L_struct_util__Vec3_L_double_G___G_ *param_3);
extern undefined4 FUN_0059f0e0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0059dbc0 name=FUN_0059dbc0 conv=unknown body=440

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0059dbc0(int *param_1,undefined4 param_2,Darray_L_struct_util__Vec3_L_double_G___G_ *param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  CompartmentCollisionShell local_158;
  undefined1 local_40[24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      iVar3 = *piVar4;
      bVar2 = ArmorPlate__IsDestroyed((ArmorPlate *)(iVar3 + 0x150));
      if (!bVar2) {
        CompartmentCollisionShell__CompartmentCollisionShell(&local_158,(CompartmentCollisionShell *)(iVar3 + 0x30));
        if (local_158.Pillar.IsValidData == false) {
          if (local_158.Sphere.IsValidData == false) {
            if (local_158.Plane.IsValidData == false) {
              if (local_158.Compartment.Controller != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(local_158.Compartment.Controller);
              }
              goto LAB_0059dd54;
            }
            dVar7 = (double)CONCAT44(((slice_view *)&local_158.Plane.Data.Location_km.X)->_4_4_,
                                     ((slice_view *)&local_158.Plane.Data.Location_km.X)->_0_4_);
            dVar6 = (double)CONCAT44(((slice_view *)&local_158.Plane.Data.Location_km.Y)->_4_4_,
                                     ((slice_view *)&local_158.Plane.Data.Location_km.Y)->_0_4_);
            dVar8 = local_158.Plane.Data.Location_km.Z;
          }
          else {
            dVar7 = (double)CONCAT44(((slice_view *)&local_158.Sphere.Data.Center_km.X)->_4_4_,
                                     ((slice_view *)&local_158.Sphere.Data.Center_km.X)->_0_4_);
            dVar6 = (double)CONCAT44(((slice_view *)&local_158.Sphere.Data.Center_km.Y)->_4_4_,
                                     ((slice_view *)&local_158.Sphere.Data.Center_km.Y)->_0_4_);
            dVar8 = local_158.Sphere.Data.Center_km.Z;
          }
        }
        else {
          dVar7 = (local_158.Pillar.Data.Tube_km.B.X - local_158.Pillar.Data.Tube_km.A.X) *
                  /*3fe0000000000000*/0.5 + local_158.Pillar.Data.Tube_km.A.X;
          dVar6 = (local_158.Pillar.Data.Tube_km.B.Y - local_158.Pillar.Data.Tube_km.A.Y) *
                  /*3fe0000000000000*/0.5 + local_158.Pillar.Data.Tube_km.A.Y;
          dVar8 = (local_158.Pillar.Data.Tube_km.B.Z - local_158.Pillar.Data.Tube_km.A.Z) *
                  /*3fe0000000000000*/0.5 + local_158.Pillar.Data.Tube_km.A.Z;
        }
        puVar5 = (undefined4 *)FUN_0059f0e0(local_40,dVar7,dVar6,dVar8);
        local_28 = *puVar5;
        uStack_24 = puVar5[1];
        uStack_20 = puVar5[2];
        uStack_1c = puVar5[3];
        local_18 = puVar5[4];
        uStack_14 = puVar5[5];
        if (local_158.Compartment.Controller != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_158.Compartment.Controller);
        }
        iVar3 = *(int *)(param_3 + 8);
        local_10 = iVar3 + 1;
        util__Darray_struct_util__Vec3_double_____SetSize(param_3,&local_10);
        bVar2 = util__Darray_struct_util__Vec3_double_____CheckSize(param_3,iVar3);
        if (bVar2) {
          iVar3 = *(int *)(param_3 + 8);
          iVar1 = *(int *)(param_3 + 4);
          puVar5 = (undefined4 *)(iVar1 + -0x18 + iVar3 * 0x18);
          *puVar5 = local_28;
          puVar5[1] = uStack_24;
          puVar5[2] = uStack_20;
          puVar5[3] = uStack_1c;
          puVar5 = (undefined4 *)(iVar1 + -8 + iVar3 * 0x18);
          *puVar5 = local_18;
          puVar5[1] = uStack_14;
        }
      }
LAB_0059dd54:
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000059e5f0 0059e5f0_FUN_0059e5f0 ====
void FUN_0059e5f0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);
extern undefined4 FUN_0059ef60(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0059e5f0 name=FUN_0059e5f0 conv=unknown body=437

void FUN_0059e5f0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int local_1c;
  undefined4 local_18;
  ReferenceController *local_14;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar8 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar3 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar9 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar9 * 8);
        *(undefined4 *)(iVar1 + iVar9 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar9 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      uVar7 = (**(code **)*param_2)(&local_c);
      FUN_0059ef60(&local_18,uVar7);
      pRVar2 = local_14;
      if (local_10 != '\0') {
        iVar9 = *(int *)(param_1 + 8);
        local_1c = iVar9 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_1c);
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar9);
        if (bVar4) {
          this = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
          iVar9 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          *(undefined4 *)(iVar9 + -8) = local_18;
          *(ReferenceController **)(iVar9 + -4) = pRVar2;
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar2);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
        }
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005ab070 005ab070_FUN_005ab070 ====
int * __thiscall FUN_005ab070(int param_1,int *param_2);

// decompiled by BatchDecomp @ 005ab070 name=FUN_005ab070 conv=unknown body=431

int * __thiscall FUN_005ab070(int param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  LocStr *this;
  Str_L_char_G_ *pSVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  void *local_44[3];
  void *local_38;
  Str_L_char_G_ local_2c;
  int local_20;
  Str_L_char_G_ local_1c;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar8 = *(undefined4 **)(param_1 + 4);
  local_10 = param_2;
  local_8 = 0;
  local_20 = param_1;
  if (puVar8 != puVar8 + *(int *)(param_1 + 8) * 6) {
    do {
      local_1c.Data = (char *)0x0;
      local_1c.Length = 0;
      do {
        iVar7 = local_1c.Length;
        local_1c.Length = iVar7 + 1;
      } while ("PowerUse Turbopump"[iVar7 + 1] != '\0');
      uVar1 = iVar7 + 2;
      local_1c.Capacity = uVar1;
      local_c = puVar8;
      pcVar3 = (char *)operator_new__(uVar1);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x0;
      }
      else {
        memset(pcVar3,0,uVar1);
      }
      pcVar4 = "PowerUse Turbopump";
      cVar6 = 'P';
      pcVar9 = pcVar3;
      do {
        *pcVar9 = cVar6;
        pcVar4 = pcVar4 + 1;
        cVar6 = *pcVar4;
        pcVar9 = pcVar9 + 1;
      } while (cVar6 != '\0');
      *pcVar9 = '\0';
      local_2c.Data = (char *)0x0;
      local_2c.Capacity = 0;
      local_2c.Length = 0;
      local_1c.Data = pcVar3;
      this = (LocStr *)util__LocStr__LocStr((LocStr *)local_44,&local_1c,&local_2c);
      pSVar5 = util__LocStr__operator__o3(this);
      if (puVar8[2] == pSVar5->Length) {
        if ((int)puVar8[1] < 1) {
          pcVar3 = "";
        }
        else {
          pcVar3 = (char *)*puVar8;
        }
        if (pSVar5->Capacity < 1) {
          pcVar4 = "";
        }
        else {
          pcVar4 = pSVar5->Data;
        }
        cVar6 = *pcVar3;
        if (cVar6 != '\0') {
          iVar7 = (int)pcVar4 - (int)pcVar3;
          do {
            if (cVar6 != pcVar3[iVar7]) goto LAB_005ab136;
            cVar6 = pcVar3[1];
            pcVar3 = pcVar3 + 1;
          } while (cVar6 != '\0');
        }
        bVar2 = true;
      }
      else {
LAB_005ab136:
        bVar2 = false;
      }
      if (local_38 != (void *)0x0) {
        operator_delete__(local_38);
        local_38 = (void *)0x0;
      }
      if (local_44[0] != (void *)0x0) {
        operator_delete__(local_44[0]);
        local_44[0] = (void *)0x0;
      }
      if (local_2c.Data != (char *)0x0) {
        operator_delete__(local_2c.Data);
        local_2c.Data = (char *)0x0;
      }
      if (local_1c.Data != (char *)0x0) {
        operator_delete__(local_1c.Data);
      }
      if (bVar2) {
        *local_10 = local_8;
        *(undefined1 *)(local_10 + 1) = 1;
        return local_10;
      }
      local_8 = local_8 + 1;
      puVar8 = local_c + 6;
      param_2 = local_10;
    } while (puVar8 != (undefined4 *)(*(int *)(local_20 + 4) + *(int *)(local_20 + 8) * 0x18));
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}


//==== 00005b0fa0 005b0fa0_FUN_005b0fa0 ====
void FUN_005b0fa0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 005b0fa0 name=FUN_005b0fa0 conv=unknown body=457

void FUN_005b0fa0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 =
       ((void *)(0x0091db14u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar8 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar3 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar9 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar9 * 8);
        *(undefined4 *)(iVar1 + iVar9 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar9 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      piVar7 = (int *)(**(code **)*param_2)(&local_c);
      if (((*piVar7 != 0) && ((ReferenceController *)piVar7[1] != (ReferenceController *)0x0)) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         bVar4)) {
        if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
           !bVar4)) {
          *piVar7 = 0;
        }
        if (*(char *)(*piVar7 + 0x5c) == '\0') {
          iVar9 = *(int *)(param_1 + 8);
          local_10 = iVar9 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
          bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar9);
          if (bVar4) {
            pRVar2 = *(ReferenceController **)
                      (*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
            iVar9 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
            *(int *)(iVar9 + -8) = *piVar7;
            this = (ReferenceController *)piVar7[1];
            *(ReferenceController **)(iVar9 + -4) = this;
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this);
            }
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar2);
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005bb2a0 005bb2a0_FUN_005bb2a0 ====
void FUN_005bb2a0(int *param_1,double param_2);

// decompiled by BatchDecomp @ 005bb2a0 name=FUN_005bb2a0 conv=unknown body=490

void FUN_005bb2a0(int *param_1,double param_2)

{
  PropellantTankCompartment *this;
  bool bVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_2 <= 0.0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_1c = 0.0;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      if (((*piVar3 == 0) || ((ReferenceController *)piVar3[1] == (ReferenceController *)0x0)) ||
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         !bVar1)) {
        dVar4 = 0.0;
      }
      else {
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        dVar4 = *(double *)(*piVar3 + 0x108);
      }
      local_1c = dVar4 + local_1c;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  if (0.0 < local_1c) {
    local_c = 0;
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (local_c < iVar2) {
      do {
        piVar3 = (int *)(**(code **)*param_1)(&local_c);
        if (((*piVar3 != 0) && ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0)) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           bVar1)) {
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          dVar4 = *(double *)(*piVar3 + 0x108);
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          this = (PropellantTankCompartment *)*piVar3;
          dVar5 = this->ReactionMass_kg - (dVar4 / local_1c) * param_2;
          dVar4 = 0.0;
          if (0.0 <= dVar5) {
            dVar4 = dVar5;
          }
          this->ReactionMass_kg = dVar4;
          if ((((NAN(dVar4) != (dVar4 == 0.0)) && (this->DiscardWhenEmpty != false)) &&
              (*(char *)(this->_pad_0x0_0 + 0xb0) != '\0')) &&
             (0.0 < *(double *)(this->_pad_0x0_0 + 0xa0))) {
            PropellantTankCompartment__Detach(this);
          }
        }
        local_c = local_c + 1;
        iVar2 = (**(code **)(*param_1 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005caeb0 005caeb0_FUN_005caeb0 ====
void FUN_005caeb0(int *param_1);

// decompiled by BatchDecomp @ 005caeb0 name=FUN_005caeb0 conv=unknown body=445

void FUN_005caeb0(int *param_1)

{
  double dVar1;
  bool bVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_2c;
  double local_28;
  Darray_L_double_G_ local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20._pad_0x0_0 = 0;
  local_20.Data = (double *)0x0;
  local_20.Size = 0;
  local_20.Capacity = 0;
  local_20.Capacity = (**(code **)(*param_1 + 0xc))();
  local_20._pad_0x0_0 = (int)((void *)(0x0091da54u));
  local_20.Data = (double *)0x0;
  local_20.Size = 0;
  if ((local_20.Capacity < 0) || (0x3fffffff < local_20.Capacity)) {
    local_20.Capacity = 0;
  }
  else if (0 < local_20.Capacity) {
    uVar6 = -(uint)((int)((ulonglong)(uint)local_20.Capacity * 8 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)local_20.Capacity * 8);
    pdVar3 = (double *)operator_new__(uVar6);
    if (pdVar3 == (double *)0x0) {
      pdVar3 = (double *)0x0;
    }
    else {
      memset(pdVar3,0,uVar6);
    }
    iVar4 = 0;
    local_20.Data = pdVar3;
    if (0 < local_20.Capacity) {
      do {
        pdVar3[iVar4] = 0.0;
        iVar4 = iVar4 + 1;
      } while (iVar4 < local_20.Capacity);
    }
  }
  local_10 = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar4) {
    do {
      iVar5 = (**(code **)*param_1)(&local_10);
      iVar4 = local_20.Size;
      local_28 = *(double *)(iVar5 + 0x10);
      local_c = local_20.Size + 1;
      util__Darray_double___SetSize(&local_20,&local_c);
      bVar2 = util__Darray_double___CheckSize(&local_20,iVar4);
      if (bVar2) {
        local_20.Data[local_20.Size + -1] = local_28;
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar4);
  }
  iVar4 = (**(code **)(local_20._pad_0x0_0 + 0xc))();
  if (iVar4 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    local_2c = 0;
    pdVar3 = (double *)(**(code **)local_20._pad_0x0_0)(&local_2c);
    local_c = 0;
    local_28 = *pdVar3;
    iVar4 = (**(code **)(local_20._pad_0x0_0 + 0xc))();
    if (local_c < iVar4) {
      do {
        pdVar3 = (double *)(**(code **)local_20._pad_0x0_0)(&local_c);
        uVar7 = *(undefined4 *)&local_28;
        uVar8 = *(undefined4 *)((char *)&local_28 + 4);
        dVar1 = *pdVar3;
        if (local_28 <= dVar1) {
          uVar7 = *(undefined4 *)&dVar1;
          uVar8 = *(undefined4 *)((char *)&dVar1 + 4);
        }
        local_c = local_c + 1;
        local_28 = (double)CONCAT44(uVar8,uVar7);
        iVar4 = (**(code **)(local_20._pad_0x0_0 + 0xc))();
      } while (local_c < iVar4);
    }
    uVar7 = *(undefined4 *)&local_28;
    uVar8 = *(undefined4 *)((char *)&local_28 + 4);
  }
  local_28 = (double)CONCAT44(uVar8,uVar7);
  local_20._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_20.Data != (double *)0x0) {
    operator_delete__(local_20.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005cb070 005cb070_FUN_005cb070 ====
void FUN_005cb070(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 005cb070 name=FUN_005cb070 conv=unknown body=597

void FUN_005cb070(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  Type TVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined3 extraout_var;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char cVar9;
  char *local_3c;
  int local_38;
  char *local_30;
  int local_2c;
  int *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  int *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar3 = *param_4;
  local_20 = param_1;
  local_24 = param_7;
  if ((int)local_10 < iVar3) {
    do {
      puVar7 = local_20;
      param_7 = local_24;
      if (*param_6 <= (int)local_c) break;
      puVar2 = (undefined4 *)(**(code **)*local_20)(&local_10);
      local_1c = puVar2;
      local_14 = (int *)(**(code **)*puVar7)(&local_c);
      local_18 = (int *)*puVar2;
      piVar6 = (int *)*local_14;
      iVar3 = (**(code **)(*piVar6 + 0x130))();
      iVar4 = (**(code **)(*local_18 + 0x130))();
      if (iVar3 == iVar4) {
        puVar7 = (undefined4 *)(**(code **)*local_18)();
        (**(code **)*puVar7)(&local_3c);
        pcVar8 = "";
        if (0 < local_38) {
          pcVar8 = local_3c;
        }
        puVar7 = (undefined4 *)(**(code **)*piVar6)();
        (**(code **)*puVar7)(&local_30);
        pcVar5 = "";
        if (0 < local_2c) {
          pcVar5 = local_30;
        }
        TVar1 = util__FUN_00896640(pcVar5,pcVar8);
        if (local_30 != (char *)0x0) {
          operator_delete__(local_30);
          local_30 = (char *)0x0;
        }
        if (local_3c != (char *)0x0) {
          operator_delete__(local_3c);
          local_3c = (char *)0x0;
        }
        if (CONCAT31(extraout_var,TVar1) == 1) {
          cVar9 = (**(code **)(*piVar6 + 0x148))(piVar6,local_18);
        }
        else {
          cVar9 = CONCAT31(extraout_var,TVar1) == 2;
        }
      }
      else {
        iVar3 = (**(code **)(*piVar6 + 0x130))();
        iVar4 = (**(code **)(*local_18 + 0x130))();
        cVar9 = iVar3 < iVar4;
      }
      param_7 = local_24;
      piVar6 = (int *)*local_24;
      *local_24 = (int)piVar6 + 1;
      if (cVar9 == '\0') {
        local_14 = piVar6;
        puVar7 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar7 = *local_1c;
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      else {
        local_18 = piVar6;
        piVar6 = (int *)(**(code **)*param_2)(&local_18);
        *piVar6 = *local_14;
        local_c = (undefined4 *)((int)local_c + 1);
      }
      iVar3 = *param_4;
    } while ((int)local_10 < iVar3);
    if ((int)local_10 < iVar3) {
      do {
        local_14 = (int *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_1c = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar7 = (undefined4 *)(**(code **)*local_20)(&local_1c);
        puVar2 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar2 = *puVar7;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_1c = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar7 = (undefined4 *)(**(code **)*local_20)(&local_1c);
      puVar2 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar2 = *puVar7;
    } while ((int)local_c < *param_6);
  }
  iVar3 = *param_7;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((iVar4 < iVar3) || (iVar3 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005db0b0 005db0b0_GetDiffusionCoefficient_m ====
// decompiled by BatchDecomp @ 005db0b0 name=GetDiffusionCoefficient_m conv=__thiscall body=493

/* public: double __thiscall NuclearReactorSubModule__GetDiffusionCoefficient_m(double,bool)const
    */

double __thiscall
NuclearReactorSubModule__GetDiffusionCoefficient_m(NuclearReactorSubModule *this,double param_1,bool param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  undefined4 unaff_EDI;
  float10 extraout_ST0;
  double dVar5;
  undefined3 in_stack_0000000d;
  undefined4 uVar6;
  int *piVar7;
  undefined1 uVar8;
  Str_L_char_G_ local_78[2];
  Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ local_60[16];
  Str_L_char_G_ local_50;
  char *local_44;
  double local_40;
  double local_38;
  double local_30;
  int *local_28;
  double local_24;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_1;
  uVar6 = *(undefined4 *)((char *)&param_1 + 4);
  piVar2 = (int *)GetCoreElements(this,(double)CONCAT44(SUB84(param_1,0),local_60),
                                  SUB81((ulonglong)param_1 >> 0x20,0),param_2);
  local_c = 0;
  local_38 = 0.0;
  local_1c = 0.0;
  local_28 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 0xc))();
  uVar8 = (undefined1)unaff_EDI;
  if (local_c < iVar3) {
    do {
      piVar7 = &local_c;
      pSVar4 = (Str_L_char_G_ *)(**(code **)*piVar2)();
      util__Str_char___Str_char(&local_50,pSVar4);
      local_40 = *(double *)&pSVar4[1].Capacity;
      pcVar1 = pSVar4[1].Data;
      local_44 = pcVar1;
      local_1c = local_40;
      util__Str_char___Str_char(local_78,&local_50);
      local_1c = local_1c / *(double *)(pcVar1 + 0x30);
      if (local_78[0].Data != (char *)0x0) {
        operator_delete__(local_78[0].Data);
      }
      local_1c = local_1c /
                 (this->CachedInletTemperature_K * this->CachedInletTemperature_K *
                  /*400921fb54442d18*/3.141592653589793 * this->CachedCoolantFlowRate_kg__s);
      if (local_50.Data != (char *)0x0) {
        operator_delete__(local_50.Data);
      }
      dVar5 = GetCorrectedEnrichmentPercent(this,local_14);
      local_30 = Material__GetMacroscopicNeutronScatteringCrossSection__m((Material *)pSVar4[1].Data,Thermal,
                            (double)CONCAT44(piVar7,(int)((ulonglong)dVar5 >> 0x20)));
      local_24 = Material__GetAverageScatteringCosineComplement((Material *)pSVar4[1].Data);
      piVar2 = local_28;
      local_c = local_c + 1;
      local_38 = local_30 * local_24 * local_1c + local_38;
      local_1c = local_38;
      iVar3 = (**(code **)(*local_28 + 0xc))();
      uVar8 = (undefined1)unaff_EDI;
    } while (local_c < iVar3);
  }
  local_24 = GetTotalMacroscopicNeutronScatteringCrossSection__m
                       (this,Thermal,(double)CONCAT44(_param_2,(int)((ulonglong)local_14 >> 0x20)),
                        (bool)uVar8);
  local_24 = local_1c / local_24;
  util__Darray_struct_NuclearReactorSubModule__CoreElement____Darray_struct_NuclearReactorSubModule__CoreElement(local_60);
  local_30 = GetTotalMacroscopicNeutronScatteringCrossSection__m
                       (this,Thermal,(double)CONCAT44(_param_2,uVar6),(bool)uVar8);
  local_30 = local_30 * local_24;
  dVar5 = GetTotalMacroscopicNeutronAbsorptionCrossSection__m
                    (this,Thermal,(double)CONCAT44(_param_2,uVar6),(bool)uVar8);
  local_24 = /*3ff0000000000000*/1.0 / ((dVar5 + local_30) * /*4008000000000000*/3.0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005e5850 005e5850_GetTotalSurfaceAreaRemaining_m2 ====
// decompiled by BatchDecomp @ 005e5850 name=GetTotalSurfaceAreaRemaining_m2 conv=__thiscall body=616

/* private: double __thiscall RadiatorCompartment__GetTotalSurfaceAreaRemaining_m2(void)const  */

double __thiscall RadiatorCompartment__GetTotalSurfaceAreaRemaining_m2(RadiatorCompartment *this)

{
  double dVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  Darray_L_ArmorPlate_G_ *pDVar7;
  float10 extraout_ST0;
  double dVar8;
  double dVar9;
  double local_50;
  Darray_L_double_G_ local_48;
  undefined1 local_38;
  double local_34;
  RadiatorCompartment *local_2c;
  Darray_L_ArmorPlate_G_ *local_28;
  Darray_L_double_G_ local_24;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  pDVar7 = &this->RadiatorArmor;
  local_50 = 0.0;
  local_14 = 0.0;
  local_2c = this;
  local_28 = pDVar7;
  iVar4 = (**(code **)(*(int *)&this->RadiatorArmor + 0xc))();
  if (local_c < iVar4) {
    do {
      iVar4 = this->_pad_0x0_0;
      if (*(char *)(iVar4 + 0xd0) == '\0') {
        iVar6 = *(int *)(iVar4 + 0x78);
        local_14 = (double)CONCAT44(iVar6 + 1,(undefined4)local_14);
        util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(iVar4 + 0x70),
                   (int *)((int)&local_14 + 4));
        bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(iVar4 + 0x70),iVar6);
        if (bVar3) {
          iVar6 = *(int *)(iVar4 + 0x74);
          iVar2 = *(int *)(iVar4 + 0x78);
          *(code **)(iVar6 + -8 + iVar2 * 8) = RadiatorModule__GetPanelSurfaceAreas_m2_Clear;
          *(undefined4 *)(iVar6 + -4 + iVar2 * 8) = 0;
        }
        local_24._pad_0x0_0 = 0;
        local_24.Data = (double *)0x0;
        local_24.Size = 0;
        local_24.Capacity = 0;
        util__Darray_double___Darray_double(&local_24,*(int *)(iVar4 + 0xf8));
        iVar6 = 0;
        if (0 < *(int *)(iVar4 + 0xf8)) {
          do {
            dVar8 = util__Tan((double *)(iVar4 + 0x100));
            dVar1 = *(double *)(iVar4 + 0xd8);
            local_34 = *(double *)(iVar4 + 0xd8);
            local_14 = local_34;
            dVar9 = util__Tan((double *)(iVar4 + 0x108));
            iVar2 = local_24.Size;
            dVar9 = dVar9 * local_14;
            ((slice_view *)&local_14)->_0_4_ = *(undefined4 *)&dVar9;
            local_14 = (double)CONCAT44(local_24.Size + 1,(undefined4)local_14);
            local_34 = (((double)(*(int *)(iVar4 + 0xf8) - iVar6) - /*3fe0000000000000*/0.5) *
                        (dVar9 + dVar8 * dVar1) + *(double *)(iVar4 + 0xe0)) * local_34;
            util__Darray_double___SetSize(&local_24,(int *)((int)&local_14 + 4));
            bVar3 = util__Darray_double___CheckSize(&local_24,iVar2);
            if (bVar3) {
              local_24.Data[local_24.Size + -1] = local_34 + local_34;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar4 + 0xf8));
        }
        util__Darray_double___Darray_double__00505290(&local_48,&local_24);
        local_38 = 1;
        util__Darray_double___operator((Darray_L_double_G_ *)(iVar4 + 0xc0),&local_48);
        *(undefined1 *)(iVar4 + 0xd0) = local_38;
        local_48._pad_0x0_0 = (int)((void *)(0x0091da54u));
        if (local_48.Data != (double *)0x0) {
          operator_delete__(local_48.Data);
        }
        local_48.Data = (double *)0x0;
        local_48._pad_0x0_0 = (int)((void *)(0x00919488u));
        local_24._pad_0x0_0 = (int)((void *)(0x0091da54u));
        if (local_24.Data != (double *)0x0) {
          operator_delete__(local_24.Data);
        }
        pDVar7 = local_28;
        this = local_2c;
        local_24.Data = (double *)0x0;
        local_24._pad_0x0_0 = (int)((void *)(0x00919488u));
        if (*(char *)(iVar4 + 0xd0) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      pdVar5 = (double *)(*(code *)**(undefined4 **)(iVar4 + 0xc0))(&local_c);
      local_50 = local_50 + *pdVar5;
      local_c = local_c + 1;
      local_14 = local_50;
      iVar4 = (**(code **)(*(int *)pDVar7 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00005ea680 005ea680_FUN_005ea680 ====
void FUN_005ea680(int *param_1,RefuelerCompartment *param_2);

// decompiled by BatchDecomp @ 005ea680 name=FUN_005ea680 conv=unknown body=610

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_005ea680(int *param_1,RefuelerCompartment *param_2)

{
  Body *this;
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  Darray_L_util__WeakPtr_L_PropellantTankCompartment_G___G_ *pDVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ReferenceController *pRVar10;
  ReferenceController *local_38;
  double local_2c;
  Darray_L_class_util__WeakPtr_L_struct_PropellantTankCompartment_G___G_ local_24[16];
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      dVar8 = RefuelerCompartment__GetReactionMassLeft_kg(param_2);
      if (/*0000000000000000*/0.0 < dVar8) {
        if (((ReferenceController *)param_2->_pad_0x0_0 != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2->_pad_0x0_0), !bVar1)) {
          param_2->_pad_0x0_0 = 0;
        }
        this = (Body *)param_2->_pad_0x0_0;
        Body__GetSpacecraftComponent_Memoize(this);
        if ((this->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar10 = (ReferenceController *)piVar3[1];
        if (((this->GetSpacecraftComponent_MemoizedValue).Data.Controller != pRVar10) ||
           ((this->GetSpacecraftComponent_MemoizedValue).Data.Pointer !=
            (SpacecraftComponent *)*piVar3)) {
          if ((pRVar10 != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid(pRVar10), !bVar1)) {
            *piVar3 = 0;
          }
          puVar4 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*piVar3);
          if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
             !bVar1)) {
            *puVar4 = 0;
          }
          CraftInstance__GetReactionMassSuppliers((CraftInstance *)*puVar4,(Material *)local_24);
          if (local_38 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_38);
          }
          local_14 = PropellantTankCompartment__GetPropellantTanksMassLessThanFull_kg(local_24);
          dVar8 = RefuelerCompartment__GetReactionMassLeft_kg(param_2);
          if (local_14 <= dVar8) {
            dVar8 = local_14;
          }
          dVar9 = PropellantTankCompartment__GetPropellantTanksMass_kg(local_24);
          pDVar6 = &param_2->CachedReactionMassCompartments;
          local_14 = (double)((ulonglong)local_14 & 0xffffffff);
          local_2c = 0.0;
          iVar2 = (**(code **)(*(int *)pDVar6 + 0xc))();
          if ((int)((slice_view *)&local_14)->_4_4_ < iVar2) {
            do {
              piVar5 = (int *)(**(code **)*(int *)pDVar6)();
              if (((*piVar5 == 0) ||
                  ((ReferenceController *)piVar5[1] == (ReferenceController *)0x0)) ||
                 (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                dVar7 = 0.0;
              }
              else {
                if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                  *piVar5 = 0;
                }
                iVar2 = *(int *)(*piVar5 + 0x38);
                if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                   (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar1)) {
                  *piVar5 = 0;
                }
                dVar7 = *(double *)(iVar2 + 0x78) - *(double *)(*piVar5 + 0x108);
              }
              local_2c = dVar7 + local_2c;
              local_14 = (double)CONCAT44((int)((slice_view *)&local_14)->_4_4_ + 1,(int)local_14);
              iVar2 = (**(code **)(*(int *)pDVar6 + 0xc))();
            } while ((int)((slice_view *)&local_14)->_4_4_ < iVar2);
          }
          if (dVar9 <= local_2c) {
            local_2c = dVar9;
          }
          if (param_2->ReverseFueling == false) {
            local_2c = dVar8;
          }
          iVar2 = *piVar3;
          pRVar10 = (ReferenceController *)piVar3[1];
          if (pRVar10 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar10);
          }
          RefuelerCompartment__FuelUp(param_2,iVar2,pRVar10,local_2c);
          util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
        }
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005ea8f0 005ea8f0_FUN_005ea8f0 ====
void FUN_005ea8f0(int *param_1,RefuelerCompartment *param_2,double *param_3);

// decompiled by BatchDecomp @ 005ea8f0 name=FUN_005ea8f0 conv=unknown body=584

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_005ea8f0(int *param_1,RefuelerCompartment *param_2,double *param_3)

{
  Body *pBVar1;
  Body *this;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Vec3_L_double_G_ *pVVar5;
  Vec3_L_double_G_ *pVVar6;
  Maybe_L_double_G_ *pMVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ReferenceController *pRVar11;
  Vec3_L_double_G_ local_58;
  Vec3_L_double_G_ local_40;
  Maybe_L_double_G_ local_28;
  double local_18;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      pRVar11 = (ReferenceController *)param_2->_pad_0x0_0;
      if ((pRVar11 == *(ReferenceController **)(*piVar4 + 8)) &&
         (param_2->_pad_0x0_0 == *(int *)(*piVar4 + 4))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (pRVar11 != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(pRVar11);
          if (!bVar2) {
            param_2->_pad_0x0_0 = 0;
          }
        }
        pBVar1 = (Body *)param_2->_pad_0x0_0;
        if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
          if (!bVar2) {
            *piVar4 = 0;
          }
        }
        iVar3 = *piVar4;
        if (*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) {
          bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8));
          if (!bVar2) {
            *(undefined4 *)(iVar3 + 4) = 0;
          }
        }
        this = *(Body **)(iVar3 + 4);
        pVVar5 = Body__GetPosition_km(pBVar1,&local_40);
        pVVar6 = Body__GetPosition_km(this,&local_58);
        dVar9 = pVVar6->X - pVVar5->X;
        dVar8 = pVVar6->Y - pVVar5->Y;
        dVar10 = pVVar6->Z - pVVar5->Z;
        local_18 = dVar9 * dVar9 + dVar8 * dVar8 + dVar10 * dVar10;
        pMVar7 = util__Sqrt(&local_28,&local_18);
        if (pMVar7->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (pMVar7->Data <= *(double *)(param_2->_pad_0x0_0 + 0xc0) / /*408f400000000000*/1000.0) {
          if ((ReferenceController *)param_2->_pad_0x0_0 != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2->_pad_0x0_0);
            if (!bVar2) {
              param_2->_pad_0x0_0 = 0;
            }
          }
          pBVar1 = (Body *)param_2->_pad_0x0_0;
          Body__GetSpacecraftComponent_Memoize(pBVar1);
          if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          pRVar11 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
          if (pRVar11 != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid(pRVar11);
            if (!bVar2) {
              (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer =
                   (SpacecraftComponent *)0x0;
            }
          }
          SpacecraftComponent__RequestPartialDememoize((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
          if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
            bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
            if (!bVar2) {
              *piVar4 = 0;
            }
          }
          SpacecraftComponent__RequestPartialDememoize((SpacecraftComponent *)*piVar4);
          local_18 = TurbopumpSubModule__GetMassFlowRate_kg__s((TurbopumpSubModule *)(param_2->_pad_0x0_0 + 0x70));
          dVar8 = local_18 * *param_3;
          iVar3 = *piVar4;
          pRVar11 = (ReferenceController *)piVar4[1];
          if (pRVar11 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar11);
          }
          RefuelerCompartment__FuelUp(param_2,iVar3,pRVar11,dVar8);
        }
      }
      param_1 = local_10;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_10 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005f8b30 005f8b30_PostTick ====
// decompiled by BatchDecomp @ 005f8b30 name=PostTick conv=__thiscall body=470

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ExplosiveCompartment__PostTick(double) */

void __thiscall ExplosiveCompartment__PostTick(ExplosiveCompartment *this,double param_1)

{
  int *piVar1;
  Body *pBVar2;
  Vec3_L_double_G_ VVar3;
  bool bVar4;
  Quaternion_L_double_G_ *pQVar5;
  double dVar6;
  Quaternion_L_double_G_ local_64;
  ExplosiveCompartment *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar6 = param_1 + this->CountupTimer_s;
  piVar1 = &this->_pad_0x0_0;
  this->CountupTimer_s = dVar6;
  local_44 = this;
  ProximityDetonator__CheckTimer((ProximityDetonator *)(this->_pad_0x0_0 + 0xa0),(WeakPtr_L_class_Body_G_ *)&local_40,dVar6);
  if (local_10 != '\0') {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar4) {
        *piVar1 = 0;
      }
    }
    pBVar2 = (Body *)*piVar1;
    Body__IsAlive_Memoize(pBVar2);
    if ((pBVar2->IsAlive_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((pBVar2->IsAlive_MemoizedValue).Data != false) {
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar4) {
          *piVar1 = 0;
        }
      }
      pBVar2 = (Body *)*piVar1;
      Body__GetCapitalShipComponent_Memoize(pBVar2);
      if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer ==
          (CapitalShipComponent *)0x0) {
        if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        pBVar2 = (Body *)*piVar1;
        if (local_10 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pQVar5 = Body__GetSafePendingOrientation(pBVar2,&local_64);
        Detonate(local_44,local_40,uStack_3c,uStack_38,uStack_34,local_30,uStack_2c,uStack_28,
                 uStack_24,local_20,uStack_1c,uStack_18,uStack_14,*(undefined4 *)&pQVar5->X,
                 *(undefined4 *)((int)&pQVar5->X + 4),*(undefined4 *)&pQVar5->Y,
                 *(undefined4 *)((int)&pQVar5->Y + 4),*(undefined4 *)&pQVar5->Z,
                 *(undefined4 *)((int)&pQVar5->Z + 4),*(undefined4 *)&pQVar5->W,
                 *(undefined4 *)((int)&pQVar5->W + 4),param_1);
        if (local_10 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
          if (!bVar4) {
            *piVar1 = 0;
          }
        }
        ((slice_view *)&VVar3.X)->_4_4_ = uStack_3c;
        ((slice_view *)&VVar3.X)->_0_4_ = local_40;
        ((slice_view *)&VVar3.Y)->_0_4_ = uStack_38;
        ((slice_view *)&VVar3.Y)->_4_4_ = uStack_34;
        ((slice_view *)&VVar3.Z)->_0_4_ = local_30;
        ((slice_view *)&VVar3.Z)->_4_4_ = uStack_2c;
        Body__DestroyAtPoint((Body *)*piVar1,VVar3);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00005fbbe0 005fbbe0_FUN_005fbbe0 ====
void FUN_005fbbe0(Darray_L_double_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 005fbbe0 name=FUN_005fbbe0 conv=unknown body=441

void FUN_005fbbe0(Darray_L_double_G_ *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  FlareCompartment *this;
  undefined8 uStack_24;
  undefined4 uStack_20;
  FlareCompartment *local_18;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (double *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  util__Darray_double___Darray_double(param_1,iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
         !bVar4)) {
        *piVar6 = 0;
      }
      this = (FlareCompartment *)*piVar6;
      iVar5 = this->_pad_0x0_0;
      local_18 = this;
      if (*(char *)(iVar5 + 0xa0) == '\0') {
        iVar1 = *(int *)(iVar5 + 0x80);
        local_14 = (double)CONCAT44(iVar1 + 1,(undefined4)local_14);
        util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(iVar5 + 0x78),
                   (int *)((int)&local_14 + 4));
        bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)(iVar5 + 0x78),iVar1);
        if (bVar4) {
          iVar1 = *(int *)(iVar5 + 0x7c);
          iVar2 = *(int *)(iVar5 + 0x80);
          *(code **)(iVar1 + -8 + iVar2 * 8) =
               ChemicalReaction__GetAdiabaticFlameTemperature_K_Clear;
          *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
        }
        local_14 = CombustionMixtureSubModule__GetFlameTemperature_K((CombustionMixtureSubModule *)(iVar5 + 0x108));
        if ((local_14 <= 0.0) ||
           (local_14 = CombustionMixtureSubModule__GetFlameSpeed_m__s((CombustionMixtureSubModule *)(iVar5 + 0x108)), local_14 <= 0.0))
        {
          dVar3 = 0.0;
        }
        else {
          local_14 = CombustionMixtureSubModule__GetFlameSpeed_m__s((CombustionMixtureSubModule *)(iVar5 + 0x108));
          local_14 = *(double *)(iVar5 + 0x100) / local_14;
          dVar3 = local_14;
        }
        this = local_18;
        ((slice_view *)&uStack_24)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_24)->_1_3_[0] | (((slice_view *)&uStack_24)->_1_3_[1] << 8) | (((slice_view *)&uStack_24)->_1_3_[2] << 16)) << 8));
        *(double *)(iVar5 + 0x98) = dVar3;
        *(undefined4 *)(iVar5 + 0xa0) = uStack_24;
        *(undefined4 *)(iVar5 + 0xa4) = uStack_20;
        if (*(char *)(iVar5 + 0xa0) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      local_14 = FlareCompartment__GetLifeTimeRemaining_s(this);
      local_14 = local_14 / *(double *)(iVar5 + 0x98);
      iVar5 = param_1->Size;
      local_18 = (FlareCompartment *)(iVar5 + 1);
      util__Darray_double___SetSize(param_1,(int *)&local_18);
      bVar4 = util__Darray_double___CheckSize(param_1,iVar5);
      if (bVar4) {
        param_1->Data[param_1->Size + -1] = local_14;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000605c90 00605c90_PostTick ====
// decompiled by BatchDecomp @ 00605c90 name=PostTick conv=__thiscall body=390

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall NuclearPayloadCompartment__PostTick(double) */

void __thiscall NuclearPayloadCompartment__PostTick(NuclearPayloadCompartment *this,double param_1)

{
  int *piVar1;
  Body *pBVar2;
  Body *this_00;
  Vec3_L_double_G_ VVar3;
  bool bVar4;
  Quaternion_L_double_G_ *pQVar5;
  undefined4 *puVar6;
  double dVar7;
  Quaternion_L_double_G_ local_64;
  NuclearPayloadCompartment *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  char local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar7 = param_1 + this->CountupTimer_s;
  piVar1 = &this->_pad_0x0_0;
  this->CountupTimer_s = dVar7;
  local_44 = this;
  ProximityDetonator__CheckTimer((ProximityDetonator *)(this->_pad_0x0_0 + 0x110),(WeakPtr_L_class_Body_G_ *)&local_40,dVar7)
  ;
  if (local_10 != '\0') {
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar4) {
        *piVar1 = 0;
      }
    }
    pBVar2 = (Body *)*piVar1;
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar4) {
        *piVar1 = 0;
      }
    }
    this_00 = (Body *)*piVar1;
    pQVar5 = Body__GetOrientation(pBVar2,&local_64);
    puVar6 = (undefined4 *)Body__GetState(this_00);
    NuclearDetonation(local_44,*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4],puVar6[5],puVar6[6],
                      puVar6[7],puVar6[8],puVar6[9],puVar6[10],puVar6[0xb],*(undefined4 *)&pQVar5->X
                      ,*(undefined4 *)((int)&pQVar5->X + 4),*(undefined4 *)&pQVar5->Y,
                      *(undefined4 *)((int)&pQVar5->Y + 4),*(undefined4 *)&pQVar5->Z,
                      *(undefined4 *)((int)&pQVar5->Z + 4),*(undefined4 *)&pQVar5->W,
                      *(undefined4 *)((int)&pQVar5->W + 4));
    if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
      if (!bVar4) {
        *piVar1 = 0;
      }
    }
    pBVar2 = (Body *)*piVar1;
    Body__GetCapitalShipComponent_Memoize(pBVar2);
    if ((pBVar2->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((pBVar2->GetCapitalShipComponent_MemoizedValue).Data.Pointer == (CapitalShipComponent *)0x0)
    {
      if (local_10 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
        bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
        if (!bVar4) {
          *piVar1 = 0;
        }
      }
      ((slice_view *)&VVar3.X)->_4_4_ = uStack_3c;
      ((slice_view *)&VVar3.X)->_0_4_ = local_40;
      ((slice_view *)&VVar3.Y)->_0_4_ = uStack_38;
      ((slice_view *)&VVar3.Y)->_4_4_ = uStack_34;
      ((slice_view *)&VVar3.Z)->_0_4_ = (int)local_30;
      ((slice_view *)&VVar3.Z)->_4_4_ = (int)((ulonglong)local_30 >> 0x20);
      Body__DestroyAtPoint((Body *)*piVar1,VVar3);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006085e0 006085e0_FUN_006085e0 ====
void FUN_006085e0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);
extern undefined4 FUN_006093f0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 006085e0 name=FUN_006085e0 conv=unknown body=437

void FUN_006085e0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int local_1c;
  undefined4 local_18;
  ReferenceController *local_14;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar8 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar8) | uVar8 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar3 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar9 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar9 * 8);
        *(undefined4 *)(iVar1 + iVar9 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar9 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar9 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar9) {
    do {
      uVar7 = (**(code **)*param_2)(&local_c);
      FUN_006093f0(&local_18,uVar7);
      pRVar2 = local_14;
      if (local_10 != '\0') {
        iVar9 = *(int *)(param_1 + 8);
        local_1c = iVar9 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_1c);
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar9);
        if (bVar4) {
          this = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
          iVar9 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          *(undefined4 *)(iVar9 + -8) = local_18;
          *(ReferenceController **)(iVar9 + -4) = pRVar2;
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar2);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
        }
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      local_c = local_c + 1;
      iVar9 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000060d4c0 0060d4c0_PreTick ====
// decompiled by BatchDecomp @ 0060d4c0 name=PreTick conv=__thiscall body=490

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall PowerCompartment__PreTick(double) */

void __thiscall PowerCompartment__PreTick(PowerCompartment *this,double param_1)

{
  int iVar1;
  Body *this_00;
  ReferenceController *this_01;
  char cVar2;
  bool bVar3;
  float10 fVar4;
  undefined8 uStack_10;
  undefined4 uStack_c;
  int local_8;
  
  if ((NAN(*(double *)&this->_pad_0x0_0) || NAN(/*0000000000000000*/0.0)) !=
      (*(double *)&this->_pad_0x0_0 == /*0000000000000000*/0.0)) {
    cVar2 = (**(code **)(*(int *)this + 0x14))();
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(int *)this + 0x18))();
      if (cVar2 == '\0') {
        bVar3 = (this->GetPower_W_MemoizedValue).IsValidData == false;
        if (bVar3) {
          iVar1 = (this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Size;
          local_8 = iVar1 + 1;
          util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                     &this->PowerCompartmentMemoizationHandlerInstance,&local_8);
          bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                             &this->PowerCompartmentMemoizationHandlerInstance,iVar1);
          if (bVar3) {
            (this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Data
            [(this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
                 CDE_PMF(pmf_4f4b95a1, LaserModule__GetMirrorFocalLengthLimit_m_Clear);
          }
          fVar4 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x154))();
          ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
          (this->GetPower_W_MemoizedValue).Data = (double)fVar4;
          *(undefined4 *)&(this->GetPower_W_MemoizedValue).IsValidData = uStack_10;
          *(undefined4 *)((char *)&(this->GetPower_W_MemoizedValue) + 0xc) = uStack_c;
          bVar3 = (this->GetPower_W_MemoizedValue).IsValidData == false;
        }
        if (bVar3) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) {
          bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0);
          if (!bVar3) {
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
          bVar3 = util__ReferenceController__IsDataStillValid(this_01);
          if (!bVar3) {
            (this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer =
                 (SpacecraftComponent *)0x0;
          }
        }
        SpacecraftComponent__AddPower((this_00->GetSpacecraftComponent_MemoizedValue).Data.Pointer,
                   (this->GetPower_W_MemoizedValue).Data * param_1);
        if ((this->GetHeat_W_MemoizedValue).IsValidData == false) {
          iVar1 = (this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Size;
          local_8 = iVar1 + 1;
          util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                     &this->PowerCompartmentMemoizationHandlerInstance,&local_8);
          bVar3 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                             &this->PowerCompartmentMemoizationHandlerInstance,iVar1);
          if (bVar3) {
            (this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Data
            [(this->PowerCompartmentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
                 CDE_PMF(pmf_4f4b95a1, PowerCompartment__GetHeat_W_Clear);
          }
          fVar4 = (float10)(**(code **)(*(int *)this->_pad_0x0_0 + 0x158))();
          ((slice_view *)&uStack_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_10)->_1_3_[0] | (((slice_view *)&uStack_10)->_1_3_[1] << 8) | (((slice_view *)&uStack_10)->_1_3_[2] << 16)) << 8));
          (this->GetHeat_W_MemoizedValue).Data = (double)fVar4;
          *(undefined4 *)&(this->GetHeat_W_MemoizedValue).IsValidData = uStack_10;
          *(undefined4 *)((char *)&(this->GetHeat_W_MemoizedValue) + 0xc) = uStack_c;
          if ((this->GetHeat_W_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
        }
        *(double *)&this->_pad_0x0_0 =
             (this->GetHeat_W_MemoizedValue).Data * param_1 + *(double *)&this->_pad_0x0_0;
      }
    }
  }
  return;
}


//==== 0000620ae0 00620ae0_GetStructureMass_kg ====
// decompiled by BatchDecomp @ 00620ae0 name=GetStructureMass_kg conv=__thiscall body=485

/* public: double __thiscall BlastLauncherModule__GetStructureMass_kg(void)const  */

double __thiscall BlastLauncherModule__GetStructureMass_kg(BlastLauncherModule *this)

{
  Vec3_L_double_G_ *pVVar1;
  Vec3_L_double_G_ *pVVar2;
  Maybe_L_double_G_ *pMVar3;
  Cylinder_L_double_G_ *pCVar4;
  float10 extraout_ST0;
  double dVar5;
  Maybe_L_double_G_ local_a8;
  Maybe_L_double_G_ local_98;
  undefined1 local_88[24];
  undefined1 local_70[24];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  Cylinder_L_double_G_ local_28;
  Maybe_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pVVar1 = GetDimensions_m(this,(Vec3_L_double_G_ *)local_88);
  pVVar2 = GetDimensions_m(this,(Vec3_L_double_G_ *)local_70);
  local_40 = pVVar1->Z * pVVar2->Y * *(double *)(this + 0x160);
  pMVar3 = GetTubeThicknessNeeded_m(this,&local_18);
  if (pMVar3->IsValidData == false) {
    local_30 = 0.0;
  }
  else {
    local_30 = pMVar3->Data;
  }
  pVVar1 = GetDimensions_m(this,(Vec3_L_double_G_ *)local_88);
  pVVar2 = GetDimensions_m(this,(Vec3_L_double_G_ *)local_70);
  local_58 = pVVar1->Z * pVVar2->Y * local_30;
  CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),&local_28);
  local_50 = local_28.Radius * /*4000000000000000*/2.0;
  pMVar3 = GetTubeThicknessNeeded_m(this,&local_98);
  if (pMVar3->IsValidData == false) {
    local_30 = 0.0;
  }
  else {
    local_30 = pMVar3->Data;
  }
  pMVar3 = GetTubeThicknessNeeded_m(this,&local_a8);
  if (pMVar3->IsValidData == false) {
    local_48 = 0.0;
  }
  else {
    local_48 = pMVar3->Data;
  }
  CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),(Cylinder_L_double_G_ *)&local_18);
  local_38 = (*(double *)(this + 0x150) / *(double *)(*(int *)(this + 0x14c) + 0x30)) /
             (local_18.Data * /*4000000000000000*/2.0 * local_18.Data * /*4000000000000000*/2.0);
  pCVar4 = CraftBlueprint__GetStorageCylinder_m(*(CraftBlueprint **)(this + 0x140),(Cylinder_L_double_G_ *)(local_70 + 8));
  local_38 = pCVar4->Height + local_38;
  pMVar3 = GetTubeThicknessNeeded_m(this,(Maybe_L_double_G_ *)(local_88 + 8));
  if (pMVar3->IsValidData == false) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = pMVar3->Data;
  }
  local_40 = ((dVar5 + local_38 + *(double *)(this + 0x160)) * (local_30 + local_50) * local_48 *
              (double)(*(int *)(this + 0x144) + 1) * (double)(*(int *)(this + 0x148) + 1) +
             local_58 + local_40) * *(double *)(*(int *)(this + 0x158) + 0x30);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 0000627100 00627100_FUN_00627100 ====
float10 __thiscall FUN_00627100(undefined4 *param_1,double param_2);

// decompiled by BatchDecomp @ 00627100 name=FUN_00627100 conv=unknown body=405

float10 __thiscall FUN_00627100(undefined4 *param_1,double param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  double local_1c;
  
  if (param_2 < *(double *)*param_1 || param_2 == *(double *)*param_1) {
    piVar4 = (int *)param_1[1];
    dVar8 = CoilgunModule__GetForceAt_N((CoilgunModule *)*piVar4,param_2,*(double *)piVar4[1]);
    dVar7 = MassProjectileSubModule__GetExitMass_kg((MassProjectileSubModule *)(*piVar4 + 0x228));
    fVar6 = (float10)dVar8 / (float10)dVar7;
    local_1c = (double)fVar6;
    dVar8 = (double)fVar6;
  }
  else {
    dVar8 = 0.0;
    fVar6 = (float10)0.0;
    local_1c = 0.0;
  }
  if (*(int *)param_1[3] != 0) {
    piVar4 = (int *)param_1[4];
    iVar2 = *piVar4;
    dVar7 = (double)iVar2 * *(double *)param_1[5];
    while ((dVar7 < param_2 && (iVar2 < 500))) {
      iVar1 = *(int *)param_1[3];
      if (iVar2 < 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
        iVar2 = *piVar4;
        piVar4 = (int *)param_1[4];
      }
      *(double *)(iVar1 + 8 + iVar2 * 8) = dVar8;
      *piVar4 = *piVar4 + 1;
      piVar4 = (int *)param_1[4];
      iVar2 = *piVar4;
      dVar7 = (double)iVar2 * *(double *)param_1[5];
    }
    if (iVar2 < 500) {
      iVar1 = *(int *)param_1[3];
      iVar3 = iVar2;
      iVar5 = iVar1;
      if (iVar2 < 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
        iVar3 = *piVar4;
        piVar4 = (int *)param_1[4];
        iVar2 = *piVar4;
        iVar5 = *(int *)param_1[3];
      }
      dVar7 = *(double *)(iVar1 + 8 + iVar3 * 8);
      if (dVar8 <= dVar7) {
        dVar8 = dVar7;
      }
      if ((iVar2 < 0) || (499 < iVar2)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
        iVar2 = *piVar4;
      }
      *(double *)(iVar5 + 8 + iVar2 * 8) = dVar8;
    }
    fVar6 = (float10)local_1c;
  }
  return fVar6;
}


//==== 0000648650 00648650_IsCavityShapeValid ====
// decompiled by BatchDecomp @ 00648650 name=IsCavityShapeValid conv=__thiscall body=610

/* public: bool __thiscall ArcLampPumpSubModule__IsCavityShapeValid(void)const  */

bool __thiscall ArcLampPumpSubModule__IsCavityShapeValid(ArcLampPumpSubModule *this)

{
  bool bVar1;
  Maybe_L_double_G_ *pMVar2;
  undefined4 unaff_EDI;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Maybe_L_double_G_ local_34;
  Maybe_L_double_G_ local_24;
  double local_14;
  double local_c;
  
  dVar6 = GetCavityArea_m2(this);
  if (/*0000000000000000*/0.0 < dVar6) {
    local_c = this->CavitySemimajorAxis_m * this->CavitySemimajorAxis_m -
              this->CavitySemiminorAxis_m * this->CavitySemiminorAxis_m;
    pMVar2 = util__Sqrt(&local_24,&local_c);
    if (pMVar2->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar6 = this->CavitySemimajorAxis_m;
    if (/*0000000000000000*/0.0 < pMVar2->Data / dVar6) {
      local_c = dVar6 * dVar6 - this->CavitySemiminorAxis_m * this->CavitySemiminorAxis_m;
      pMVar2 = util__Sqrt(&local_24,&local_c);
      if (pMVar2->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_14 = pMVar2->Data;
      local_c = GetLampOuterRadius_m(this);
      local_c = local_c + this->CachedLasingRodRadius_m;
      if (local_c < local_14) {
        dVar6 = Material__GetYieldStrength_Pa(this->EnvelopeComposition);
        uVar7 = *(undefined4 *)&dVar6;
        uVar8 = *(undefined4 *)((char *)&dVar6 + 4);
        dVar6 = GetGasHotPressure_Pa(this);
        Mechanics__GetThicknessOfPressurizedTubeNeeded_m(&local_24,
                   (double)CONCAT44(SUB84(dVar6,0),(int)((ulonglong)this->Radius_m >> 0x20)),
                   (double)CONCAT44(uVar7,(int)((ulonglong)dVar6 >> 0x20)),
                   (double)CONCAT44(unaff_EDI,uVar8));
        if (local_24.IsValidData == false) {
          local_24.Data = 0.0;
        }
        local_c = this->Radius_m + local_24.Data;
        if (local_c <= this->CachedLasingRodRadius_m) {
          local_c = this->CachedLasingRodRadius_m;
        }
        local_14 = this->CavitySemimajorAxis_m * this->CavitySemimajorAxis_m -
                   this->CavitySemiminorAxis_m * this->CavitySemiminorAxis_m;
        pMVar2 = util__Sqrt(&local_34,&local_14);
        if (pMVar2->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar4 = pMVar2->Data * /*3fe0000000000000*/0.5;
        dVar6 = this->CavitySemiminorAxis_m;
        dVar3 = dVar6 / this->CavitySemimajorAxis_m;
        dVar5 = /*3ff0000000000000*/1.0 - dVar3 * dVar3;
        dVar3 = dVar4 * /*c000000000000000*/-2.0;
        if (NAN(dVar5) == (dVar5 == 0.0)) {
          bVar1 = 0.0 <= dVar3 * dVar3 -
                         ((dVar6 * dVar6 - local_c * local_c) + dVar4 * dVar4) *
                         dVar5 * /*4010000000000000*/4.0;
        }
        else if (NAN(dVar3) == (dVar3 == 0.0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (((dVar4 + local_c <= this->CavitySemimajorAxis_m) && (local_c <= dVar6)) && (!bVar1)) {
          return true;
        }
      }
    }
  }
  return false;
}


//==== 000064ff60 0064ff60_FUN_0064ff60 ====
float10 __thiscall FUN_0064ff60(undefined4 *param_1,double param_2);

// decompiled by BatchDecomp @ 0064ff60 name=FUN_0064ff60 conv=unknown body=399

float10 __thiscall FUN_0064ff60(undefined4 *param_1,double param_2)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  double dVar8;
  double local_10;
  
  if (param_2 < *(double *)*param_1 || param_2 == *(double *)*param_1) {
    puVar2 = (undefined4 *)param_1[1];
    local_10 = (*(double *)(puVar2[3] + 0x110) * *(double *)puVar2[2]) /
               (*(double *)puVar2[1] * param_2 + *(double *)*puVar2);
  }
  else {
    local_10 = 0.0;
  }
  if (*(int *)param_1[3] != 0) {
    piVar6 = (int *)param_1[4];
    iVar4 = *piVar6;
    dVar8 = (double)iVar4 * *(double *)param_1[5];
    while ((dVar8 < param_2 && (iVar4 < 500))) {
      iVar3 = *(int *)param_1[3];
      if (iVar4 < 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
        iVar4 = *piVar6;
        piVar6 = (int *)param_1[4];
      }
      *(double *)(iVar3 + 8 + iVar4 * 8) = local_10;
      *piVar6 = *piVar6 + 1;
      piVar6 = (int *)param_1[4];
      iVar4 = *piVar6;
      dVar8 = (double)iVar4 * *(double *)param_1[5];
    }
    if (iVar4 < 500) {
      iVar3 = *(int *)param_1[3];
      iVar5 = iVar4;
      iVar7 = iVar3;
      if (iVar4 < 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
        iVar5 = *piVar6;
        piVar6 = (int *)param_1[4];
        iVar4 = *piVar6;
        iVar7 = *(int *)param_1[3];
      }
      dVar8 = *(double *)(iVar3 + 8 + iVar5 * 8);
      dVar1 = local_10;
      if (local_10 <= dVar8) {
        dVar1 = dVar8;
      }
      if ((iVar4 < 0) || (499 < iVar4)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\sarray.inl",0x35,
                        "Index >= 0 && Index < Size",(char *)0x0);
        DebugBreak();
        iVar4 = *piVar6;
      }
      *(double *)(iVar7 + 8 + iVar4 * 8) = dVar1;
    }
    return (float10)local_10;
  }
  return (float10)local_10;
}


//==== 000065da20 0065da20_FUN_0065da20 ====
void FUN_0065da20(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 0065da20 name=FUN_0065da20 conv=unknown body=447

void FUN_0065da20(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  ReferenceController *this;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 =
       ((void *)(0x0091db14u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar9 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar7 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      puVar4 = puVar7;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    iVar10 = 0;
    *(uint **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      puVar8 = (undefined4 *)(**(code **)*param_2)(&local_c);
      pRVar2 = (ReferenceController *)puVar8[1];
      uVar3 = *puVar8;
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar2);
        util__ReferenceController__AddWeakReference(pRVar2);
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      iVar10 = *(int *)(param_1 + 8);
      local_10 = iVar10 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
      bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar10);
      if (bVar5) {
        iVar10 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 4);
        this = *(ReferenceController **)(iVar1 + -4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + -8 + iVar10 * 8) = uVar3;
        *(ReferenceController **)(iVar1 + -4 + iVar10 * 8) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000066f8c0 0066f8c0_FUN_0066f8c0 ====
void FUN_0066f8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, double param_5,double param_6,int param_7,double param_8);
extern undefined4 FUN_0066fe00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0066f8c0 name=FUN_0066f8c0 conv=unknown body=408

void FUN_0066f8c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 double param_5,double param_6,int param_7,double param_8)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar3 = (param_5 + param_6) * /*3fe0000000000000*/0.5;
  fVar1 = (float10)FUN_0066fe00(dVar3);
  local_18 = (double)fVar1;
  if ((param_7 < 1) || (dVar2 = util__Abs(&local_18), dVar2 <= param_8)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  fVar1 = (float10)FUN_0066fe00(param_5);
  local_20 = (double)fVar1;
  fVar1 = (float10)FUN_0066fe00(param_6);
  local_10 = (double)fVar1;
  if (0.0 < local_20 != 0.0 < local_10) {
    dVar2 = dVar3;
    if (0.0 < local_18 == 0.0 < local_10) {
      dVar2 = param_5;
      param_6 = dVar3;
    }
    param_5 = dVar2;
    FUN_0066f8c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + -1,
                 /*3e45798ee2308c3a*/1e-08);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  dVar3 = util__Abs(&local_20);
  dVar2 = util__Abs(&local_10);
  if (dVar2 <= dVar3) {
    local_10 = param_6;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_10 = param_5;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000693820 00693820_FUN_00693820 ====
void FUN_00693820(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 00693820 name=FUN_00693820 conv=unknown body=407

void FUN_00693820(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar2 = *param_4;
  if ((int)local_10 < iVar2) {
    do {
      if (*param_6 <= (int)local_c) break;
      local_14 = (undefined4 *)(**(code **)*param_1)(&local_10);
      local_18 = (undefined4 *)(**(code **)*param_1)(&local_c);
      bVar1 = Module__SortModuleFunction(*(Module **)*local_18,*(Module **)*local_14);
      puVar3 = (undefined4 *)*param_7;
      *param_7 = (int)puVar3 + 1;
      if (bVar1) {
        local_14 = puVar3;
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar3 = *local_18;
        local_c = (undefined4 *)((int)local_c + 1);
      }
      else {
        local_18 = puVar3;
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_18);
        *puVar3 = *local_14;
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      iVar2 = *param_4;
    } while ((int)local_10 < iVar2);
    if ((int)local_10 < iVar2) {
      do {
        local_14 = (undefined4 *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar3 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar4 = *puVar3;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (undefined4 *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar4 = *puVar3;
    } while ((int)local_c < *param_6);
  }
  iVar2 = *param_7;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if ((iVar5 < iVar2) || (iVar2 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006bd5d0 006bd5d0_FUN_006bd5d0 ====
void FUN_006bd5d0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7,undefined4 *param_8);

// decompiled by BatchDecomp @ 006bd5d0 name=FUN_006bd5d0 conv=unknown body=418

void FUN_006bd5d0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,undefined4 *param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar3 = *param_4;
  local_1c = param_1;
  local_18 = param_7;
  if ((int)local_10 < iVar3) {
    do {
      puVar4 = local_1c;
      if (*param_6 <= (int)local_c) break;
      local_20 = (undefined4 *)(**(code **)*local_1c)(&local_10);
      local_14 = (undefined4 *)(**(code **)*puVar4)(&local_c);
      bVar1 = MilitaryDoctrine__IsUnlocked((MilitaryDoctrine *)*local_14,*(DataParser **)*param_8);
      bVar2 = MilitaryDoctrine__IsUnlocked((MilitaryDoctrine *)*local_20,*(DataParser **)*param_8);
      puVar4 = (undefined4 *)*local_18;
      *local_18 = (int)puVar4 + 1;
      if (bVar2 < bVar1) {
        local_20 = puVar4;
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_20);
        *puVar4 = *local_14;
        local_c = (undefined4 *)((int)local_c + 1);
      }
      else {
        local_14 = puVar4;
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar4 = *local_20;
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      iVar3 = *param_4;
    } while ((int)local_10 < iVar3);
    param_7 = local_18;
    if ((int)local_10 < iVar3) {
      do {
        local_18 = (int *)*param_7;
        *param_7 = (int)local_18 + 1;
        local_14 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar4 = (undefined4 *)(**(code **)*local_1c)(&local_14);
        puVar5 = (undefined4 *)(**(code **)*param_2)(&local_18);
        *puVar5 = *puVar4;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_18 = (int *)*param_7;
      *param_7 = (int)local_18 + 1;
      local_14 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar4 = (undefined4 *)(**(code **)*local_1c)(&local_14);
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_18);
      *puVar5 = *puVar4;
    } while ((int)local_c < *param_6);
  }
  iVar3 = *param_7;
  iVar6 = (**(code **)(*param_2 + 0xc))();
  if ((iVar6 < iVar3) || (iVar3 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006d9a30 006d9a30_FUN_006d9a30 ====
void FUN_006d9a30(int *param_1,int *param_2,Str_L_char_G_ *param_3,int *param_4);

// decompiled by BatchDecomp @ 006d9a30 name=FUN_006d9a30 conv=unknown body=420

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_006d9a30(int *param_1,int *param_2,Str_L_char_G_ *param_3,int *param_4)

{
  ReferenceController *this;
  bool bVar1;
  char cVar2;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  ReferenceController *pRVar6;
  Str_L_char_G_ local_34;
  char *local_28;
  ReferenceController *local_24;
  undefined1 local_20;
  int *local_1c;
  char *local_18;
  int local_14;
  char local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pSVar4 = (Str_L_char_G_ *)(**(code **)*param_1)(&local_c);
      if ((ReferenceController *)pSVar4[1].Capacity != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)pSVar4[1].Capacity);
        if (!bVar1) {
          pSVar4[1].Data = (char *)0x0;
        }
      }
      cVar2 = (**(code **)(*(int *)pSVar4[1].Data + 8))();
      if (cVar2 == '\0') {
        local_14 = 0;
        local_10 = '\0';
      }
      else {
        pcVar5 = pSVar4[1].Data;
        pRVar6 = (ReferenceController *)pSVar4[1].Capacity;
        if (pRVar6 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar6);
        }
        iVar3 = *param_2;
        if (*(ReferenceController **)(iVar3 + 0x200) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 0x200));
          if (!bVar1) {
            *(undefined4 *)(iVar3 + 0x1fc) = 0;
          }
        }
        UILayout__FindChildIndex(*(UILayout **)(iVar3 + 0x1fc),&local_14,pcVar5,pRVar6);
        if ((local_10 != '\0') && (((char)param_3[1].Length == '\0' || (local_14 < *param_4)))) {
          util__Str_char___Str_char(&local_34,pSVar4);
          local_28 = pSVar4[1].Data;
          pRVar6 = (ReferenceController *)pSVar4[1].Capacity;
          local_24 = pRVar6;
          local_18 = local_28;
          if (pRVar6 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar6);
          }
          local_20 = 1;
          util__Str_char___operator__o8(param_3,&local_34);
          this = (ReferenceController *)param_3[1].Capacity;
          param_3[1].Data = local_18;
          param_3[1].Capacity = (int)pRVar6;
          if (pRVar6 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar6);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
          *(undefined1 *)&param_3[1].Length = 1;
          if (pRVar6 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar6);
          }
          if (local_34.Data != (char *)0x0) {
            operator_delete__(local_34.Data);
          }
          if (local_10 == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          *param_4 = local_14;
          param_1 = local_1c;
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00006ec5b0 006ec5b0_ItineraryNode ====
// decompiled by BatchDecomp @ 006ec5b0 name=ItineraryNode conv=__thiscall body=507

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: __thiscall ItineraryNode__ItineraryNode(struct ItineraryNode const &) */

ItineraryNode * __thiscall ItineraryNode__ItineraryNode(ItineraryNode *this,ItineraryNode *param_1)

{
  ReferenceController *pRVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (this->Parent).Pointer = (param_1->Parent).Pointer;
  pRVar1 = (param_1->Parent).Controller;
  (this->Parent).Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  uVar2 = *(undefined4 *)((int)&(param_1->LastState).Position.X + 4);
  uVar3 = *(undefined4 *)&(param_1->LastState).Position.Y;
  uVar4 = *(undefined4 *)((int)&(param_1->LastState).Position.Y + 4);
  *(undefined4 *)&(this->LastState).Position.X = *(undefined4 *)&(param_1->LastState).Position.X;
  *(undefined4 *)((int)&(this->LastState).Position.X + 4) = uVar2;
  *(undefined4 *)&(this->LastState).Position.Y = uVar3;
  *(undefined4 *)((int)&(this->LastState).Position.Y + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->LastState).Position.Z + 4);
  uVar3 = *(undefined4 *)&(param_1->LastState).Velocity.X;
  uVar4 = *(undefined4 *)((int)&(param_1->LastState).Velocity.X + 4);
  *(undefined4 *)&(this->LastState).Position.Z = *(undefined4 *)&(param_1->LastState).Position.Z;
  *(undefined4 *)((int)&(this->LastState).Position.Z + 4) = uVar2;
  *(undefined4 *)&(this->LastState).Velocity.X = uVar3;
  *(undefined4 *)((int)&(this->LastState).Velocity.X + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->LastState).Velocity.Y + 4);
  uVar3 = *(undefined4 *)&(param_1->LastState).Velocity.Z;
  uVar4 = *(undefined4 *)((int)&(param_1->LastState).Velocity.Z + 4);
  *(undefined4 *)&(this->LastState).Velocity.Y = *(undefined4 *)&(param_1->LastState).Velocity.Y;
  *(undefined4 *)((int)&(this->LastState).Velocity.Y + 4) = uVar2;
  *(undefined4 *)&(this->LastState).Velocity.Z = uVar3;
  *(undefined4 *)((int)&(this->LastState).Velocity.Z + 4) = uVar4;
  this->LastTimeSinceJ2000_s = param_1->LastTimeSinceJ2000_s;
  uVar2 = *(undefined4 *)((int)&(param_1->State).Position.X + 4);
  uVar3 = *(undefined4 *)&(param_1->State).Position.Y;
  uVar4 = *(undefined4 *)((int)&(param_1->State).Position.Y + 4);
  *(undefined4 *)&(this->State).Position.X = *(undefined4 *)&(param_1->State).Position.X;
  *(undefined4 *)((int)&(this->State).Position.X + 4) = uVar2;
  *(undefined4 *)&(this->State).Position.Y = uVar3;
  *(undefined4 *)((int)&(this->State).Position.Y + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->State).Position.Z + 4);
  uVar3 = *(undefined4 *)&(param_1->State).Velocity.X;
  uVar4 = *(undefined4 *)((int)&(param_1->State).Velocity.X + 4);
  *(undefined4 *)&(this->State).Position.Z = *(undefined4 *)&(param_1->State).Position.Z;
  *(undefined4 *)((int)&(this->State).Position.Z + 4) = uVar2;
  *(undefined4 *)&(this->State).Velocity.X = uVar3;
  *(undefined4 *)((int)&(this->State).Velocity.X + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->State).Velocity.Y + 4);
  uVar3 = *(undefined4 *)&(param_1->State).Velocity.Z;
  uVar4 = *(undefined4 *)((int)&(param_1->State).Velocity.Z + 4);
  *(undefined4 *)&(this->State).Velocity.Y = *(undefined4 *)&(param_1->State).Velocity.Y;
  *(undefined4 *)((int)&(this->State).Velocity.Y + 4) = uVar2;
  *(undefined4 *)&(this->State).Velocity.Z = uVar3;
  *(undefined4 *)((int)&(this->State).Velocity.Z + 4) = uVar4;
  this->TimeSinceJ2000_s = param_1->TimeSinceJ2000_s;
  uVar2 = *(undefined4 *)((int)&(param_1->ThrusterBurn_km__s).X + 4);
  uVar3 = *(undefined4 *)&(param_1->ThrusterBurn_km__s).Y;
  uVar4 = *(undefined4 *)((int)&(param_1->ThrusterBurn_km__s).Y + 4);
  *(undefined4 *)&(this->ThrusterBurn_km__s).X = *(undefined4 *)&(param_1->ThrusterBurn_km__s).X;
  *(undefined4 *)((int)&(this->ThrusterBurn_km__s).X + 4) = uVar2;
  *(undefined4 *)&(this->ThrusterBurn_km__s).Y = uVar3;
  *(undefined4 *)((int)&(this->ThrusterBurn_km__s).Y + 4) = uVar4;
  (this->ThrusterBurn_km__s).Z = (param_1->ThrusterBurn_km__s).Z;
  uVar2 = *(undefined4 *)((int)&(param_1->ResidualThrusterBurn_km__s).X + 4);
  uVar3 = *(undefined4 *)&(param_1->ResidualThrusterBurn_km__s).Y;
  uVar4 = *(undefined4 *)((int)&(param_1->ResidualThrusterBurn_km__s).Y + 4);
  *(undefined4 *)&(this->ResidualThrusterBurn_km__s).X =
       *(undefined4 *)&(param_1->ResidualThrusterBurn_km__s).X;
  *(undefined4 *)((int)&(this->ResidualThrusterBurn_km__s).X + 4) = uVar2;
  *(undefined4 *)&(this->ResidualThrusterBurn_km__s).Y = uVar3;
  *(undefined4 *)((int)&(this->ResidualThrusterBurn_km__s).Y + 4) = uVar4;
  (this->ResidualThrusterBurn_km__s).Z = (param_1->ResidualThrusterBurn_km__s).Z;
  this->NodeType = param_1->NodeType;
  uVar2 = *(undefined4 *)((int)&(param_1->CachedReferenceShiftedPosition_km).X + 4);
  uVar3 = *(undefined4 *)&(param_1->CachedReferenceShiftedPosition_km).Y;
  uVar4 = *(undefined4 *)((int)&(param_1->CachedReferenceShiftedPosition_km).Y + 4);
  *(undefined4 *)&(this->CachedReferenceShiftedPosition_km).X =
       *(undefined4 *)&(param_1->CachedReferenceShiftedPosition_km).X;
  *(undefined4 *)((int)&(this->CachedReferenceShiftedPosition_km).X + 4) = uVar2;
  *(undefined4 *)&(this->CachedReferenceShiftedPosition_km).Y = uVar3;
  *(undefined4 *)((int)&(this->CachedReferenceShiftedPosition_km).Y + 4) = uVar4;
  (this->CachedReferenceShiftedPosition_km).Z = (param_1->CachedReferenceShiftedPosition_km).Z;
  uVar2 = *(undefined4 *)((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.X + 4);
  uVar3 = *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Y;
  uVar4 = *(undefined4 *)((int)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Y + 4);
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.X =
       *(undefined4 *)&(param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.X;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.X + 4) = uVar2;
  *(undefined4 *)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Y = uVar3;
  *(undefined4 *)((int)&(this->CachedGravityBodyReferenceShiftedPosition_km).Data.Y + 4) = uVar4;
  (this->CachedGravityBodyReferenceShiftedPosition_km).Data.Z =
       (param_1->CachedGravityBodyReferenceShiftedPosition_km).Data.Z;
  (this->CachedGravityBodyReferenceShiftedPosition_km).IsValidData =
       (param_1->CachedGravityBodyReferenceShiftedPosition_km).IsValidData;
  this->CachedTotalSpentDeltaV_km__s = param_1->CachedTotalSpentDeltaV_km__s;
  (this->CachedGravityBody).Pointer = (param_1->CachedGravityBody).Pointer;
  pRVar1 = (param_1->CachedGravityBody).Controller;
  (this->CachedGravityBody).Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  (this->CachedNearestBody).Pointer = (param_1->CachedNearestBody).Pointer;
  pRVar1 = (param_1->CachedNearestBody).Controller;
  (this->CachedNearestBody).Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  (this->CachedNearestFleet).Pointer = (param_1->CachedNearestFleet).Pointer;
  pRVar1 = (param_1->CachedNearestFleet).Controller;
  (this->CachedNearestFleet).Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  (this->CachedNearestFleetDistance_km).Data = (param_1->CachedNearestFleetDistance_km).Data;
  (this->CachedNearestFleetDistance_km).IsValidData =
       (param_1->CachedNearestFleetDistance_km).IsValidData;
  (this->CachedNearestFleetParametricCoord).Data = (param_1->CachedNearestFleetParametricCoord).Data
  ;
  (this->CachedNearestFleetParametricCoord).IsValidData =
       (param_1->CachedNearestFleetParametricCoord).IsValidData;
  (this->CachedNearestOrbiter).Pointer = (param_1->CachedNearestOrbiter).Pointer;
  pRVar1 = (param_1->CachedNearestOrbiter).Controller;
  (this->CachedNearestOrbiter).Controller = pRVar1;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
  }
  (this->CachedNearestOrbitDistance_km).Data = (param_1->CachedNearestOrbitDistance_km).Data;
  (this->CachedNearestOrbitDistance_km).IsValidData =
       (param_1->CachedNearestOrbitDistance_km).IsValidData;
  (this->CachedNearestOrbitParametricCoord).Data = (param_1->CachedNearestOrbitParametricCoord).Data
  ;
  (this->CachedNearestOrbitParametricCoord).IsValidData =
       (param_1->CachedNearestOrbitParametricCoord).IsValidData;
  return this;
}


//==== 00006fd3b0 006fd3b0_FUN_006fd3b0 ====
void FUN_006fd3b0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 006fd3b0 name=FUN_006fd3b0 conv=unknown body=407

void FUN_006fd3b0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar1 = *param_4;
  if ((int)local_10 < iVar1) {
    do {
      if (*param_6 <= (int)local_c) break;
      local_14 = (undefined4 *)(**(code **)*param_1)(&local_10);
      local_18 = (undefined4 *)(**(code **)*param_1)(&local_c);
      uVar2 = NewsItem__GetHash((NewsItem *)*local_18);
      uVar3 = NewsItem__GetHash((NewsItem *)*local_14);
      puVar4 = (undefined4 *)*param_7;
      *param_7 = (int)puVar4 + 1;
      if (uVar2 < uVar3) {
        local_14 = puVar4;
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar4 = *local_18;
        local_c = (undefined4 *)((int)local_c + 1);
      }
      else {
        local_18 = puVar4;
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_18);
        *puVar4 = *local_14;
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      iVar1 = *param_4;
    } while ((int)local_10 < iVar1);
    if ((int)local_10 < iVar1) {
      do {
        local_14 = (undefined4 *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar4 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar5 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar5 = *puVar4;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (undefined4 *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar5 = *puVar4;
    } while ((int)local_c < *param_6);
  }
  iVar1 = *param_7;
  iVar6 = (**(code **)(*param_2 + 0xc))();
  if ((iVar6 < iVar1) || (iVar1 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000710920 00710920_GetPeriod_s ====
// decompiled by BatchDecomp @ 00710920 name=GetPeriod_s conv=__thiscall body=397

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall LibrationOrbit__GetPeriod_s(void)const  */

double __thiscall LibrationOrbit__GetPeriod_s(LibrationOrbit *this)

{
  ReferenceController *pRVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  FixedOrbit *this_00;
  undefined1 local_104[16];
  ReferenceController *local_f4;
  undefined **local_ec;
  void *local_e8;
  undefined **local_a4;
  void *local_a0;
  double local_14;
  undefined8 uStack_c;
  
  pRVar1 = (this->MainBody).Controller;
  if (pRVar1 != (ReferenceController *)0x0) {
    bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
    if (!bVar5) {
      (this->MainBody).Pointer = (CelestialObject *)0x0;
    }
  }
  this_00 = (FixedOrbit *)(**(code **)((this->MainBody).Pointer)->_pad_0x0_0)(local_104);
  if (*(char *)&this_00[1].OrbitedBody.Pointer == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if (*(char *)&(this_00->GetFullRotator_MemoizedValue).Data.X == '\0') {
    iVar2 = *(int *)&(this_00->GetOrbitalPeriod_s_MemoizedValue).Data;
    uStack_c = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_c);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
               &(this_00->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,
               (int *)((int)&uStack_c + 4));
    bVar5 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &(this_00->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Size,iVar2);
    if (bVar5) {
      *(code **)((this_00->FixedOrbitMemoizationHandlerInstance).ResetFunctions.Capacity + -4 +
                *(int *)&(this_00->GetOrbitalPeriod_s_MemoizedValue).Data * 4) =
           SpacecraftComponent__GetEstimatedMaxAngularAcceleration_radians__s2_Clear;
    }
    if ((this_00->OrbitedBody).Pointer == (CelestialObject *)0x0) {
      pRVar1 = (ReferenceController *)(this_00->Elements)._pad_0x0_0;
      if (pRVar1 != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
        if (!bVar5) {
          (this_00->OrbitedBody).Controller = (ReferenceController *)0x0;
        }
      }
      if ((this_00->OrbitedBody).Controller[6].WeakReferenceCount == 0) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\astrodynamics.cpp",0x70,
                        "GetOrbitedBody()",(char *)0x0);
        DebugBreak();
      }
    }
    local_14 = FixedOrbit__GetAverageAngularVelocity__s(this_00);
    uVar3 = uStack_c;
    local_14 = /*401921fb54442d18*/6.283185307179586 / local_14;
    uStack_c = (double)CONCAT71(((slice_view *)&uStack_c)->_1_7_,1);
    uVar4 = uStack_c;
    ((slice_view *)&uStack_c)->_4_4_ = SUB84(uVar3,4);
    *(double *)&(this_00->GetOrbitalPeriod_s_MemoizedValue).IsValidData = local_14;
    *(undefined4 *)&(this_00->GetFullRotator_MemoizedValue).Data.X = (undefined4)uStack_c;
    *(undefined4 *)((int)&(this_00->GetFullRotator_MemoizedValue).Data.X + 4) = ((slice_view *)&uStack_c)->_4_4_;
    if (*(char *)&(this_00->GetFullRotator_MemoizedValue).Data.X == '\0') {
      uStack_c = (double)uVar4;
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  uStack_c = *(double *)&(this_00->GetOrbitalPeriod_s_MemoizedValue).IsValidData;
  local_a4 = ((void *)(0x009194a4u));
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
  }
  local_a0 = (void *)0x0;
  local_a4 = ((void *)(0x00919488u));
  local_ec = ((void *)(0x00919980u));
  if (local_e8 != (void *)0x0) {
    operator_delete__(local_e8);
    local_e8 = (void *)0x0;
  }
  if (local_f4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_f4);
  }
  return uStack_c;
}


//==== 0000713250 00713250_IsACoOrbit ====
// decompiled by BatchDecomp @ 00713250 name=IsACoOrbit conv=__thiscall body=388

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__IsACoOrbit(struct FixedOrbit const &)const  */

bool __thiscall FixedOrbit__IsACoOrbit(FixedOrbit *this,FixedOrbit *param_1)

{
  bool bVar1;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  if (((param_1->Elements)._pad_0x0_0 == (this->Elements)._pad_0x0_0) &&
     ((param_1->OrbitedBody).Controller == (this->OrbitedBody).Controller)) {
    local_c = /*3f1a36e2eb1c432d*/0.0001;
    bVar1 = util__IsACoplanarOrbit(&(this->Elements).Eccentricity,&(param_1->Elements).Eccentricity,&local_c);
    if (!bVar1) {
      return false;
    }
    local_c = /*3f1a36e2eb1c432d*/0.0001;
    bVar1 = util__IsACoplanarOrbit(&(this->Elements).InclinationToRelativePlane_degrees,
                       &(param_1->Elements).InclinationToRelativePlane_degrees,&local_c);
    if (!bVar1) {
      return false;
    }
    local_c = /*3f1a36e2eb1c432d*/0.0001;
    local_14 = (param_1->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    local_1c = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__IsACoplanarOrbit(&local_1c,&local_14,&local_c);
    if (!bVar1) {
      return false;
    }
    bVar1 = IsEquatorial(this);
    if ((bVar1) && (bVar1 = IsEquatorial(param_1), bVar1)) {
      return true;
    }
    local_c = /*3f1a36e2eb1c432d*/0.0001;
    local_24 = (param_1->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    local_2c = (this->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__IsACoplanarOrbit(&local_2c,&local_24,&local_c);
    if (bVar1) {
      local_c = /*3f1a36e2eb1c432d*/0.0001;
      local_34 = (param_1->Elements).MeanAnomaly_degrees * /*3f91df46a2529d39*/0.017453292519943295;
      local_3c = (this->Elements).MeanAnomaly_degrees * /*3f91df46a2529d39*/0.017453292519943295;
      bVar1 = util__IsACoplanarOrbit(&local_3c,&local_34,&local_c);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}


//==== 00007133e0 007133e0_IsACoplanarOrbit ====
// decompiled by BatchDecomp @ 007133e0 name=IsACoplanarOrbit conv=__thiscall body=501

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__IsACoplanarOrbit(struct FixedOrbit const &)const  */

bool __thiscall FixedOrbit__IsACoplanarOrbit(FixedOrbit *this,FixedOrbit *param_1)

{
  bool bVar1;
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  if ((param_1->Elements)._pad_0x0_0 != (this->Elements)._pad_0x0_0) {
    return false;
  }
  if ((param_1->OrbitedBody).Controller != (this->OrbitedBody).Controller) {
    return false;
  }
  local_c = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
  local_14 = util__Abs(&local_c);
  if (/*3f1a36e2eb1c432d*/0.0001 < local_14) {
    local_14 = /*3f1a36e2eb1c432d*/0.0001;
    local_1c = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__IsACoplanarOrbit(&local_1c,(double *)&DAT_00937db0,&local_14);
    if (!bVar1) goto LAB_00713474;
  }
  bVar1 = IsEquatorial(param_1);
  if (bVar1) {
    return true;
  }
LAB_00713474:
  local_1c = /*3f1a36e2eb1c432d*/0.0001;
  local_24 = (param_1->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
  local_2c = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
  bVar1 = util__IsACoplanarOrbit(&local_2c,&local_24,&local_1c);
  if (bVar1) {
    local_1c = /*3f1a36e2eb1c432d*/0.0001;
    local_34 = (param_1->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    local_3c = (this->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    bVar1 = util__IsACoplanarOrbit(&local_3c,&local_34,&local_1c);
    if (bVar1) {
      return true;
    }
  }
  local_1c = /*3f1a36e2eb1c432d*/0.0001;
  local_44 = /*400921fb54442d18*/3.141592653589793 -
             (param_1->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
  local_4c = (this->Elements).LongitudeOfAscendingNode_degrees * /*3f91df46a2529d39*/0.017453292519943295;
  bVar1 = util__IsACoplanarOrbit(&local_4c,&local_44,&local_1c);
  if (bVar1) {
    local_1c = /*3f1a36e2eb1c432d*/0.0001;
    local_54 = util__FUN_0074c890((param_1->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295
                          + /*400921fb54442d18*/3.141592653589793);
    local_5c = (this->Elements).ArgumentOfPeriapsis_degrees * /*3f91df46a2529d39*/0.017453292519943295;
    local_54 = local_54 * /*404ca5dc1a63c1f8*/57.29577951308232;
    bVar1 = util__IsACoplanarOrbit(&local_5c,&local_54,&local_1c);
    if (bVar1) {
      return true;
    }
  }
  return false;
}


//==== 00007136b0 007136b0_IsCollisionImminent ====
// decompiled by BatchDecomp @ 007136b0 name=IsCollisionImminent conv=__thiscall body=473

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall FixedOrbit__IsCollisionImminent(struct Range_L_double_G_)const  */

bool __thiscall FixedOrbit__IsCollisionImminent(FixedOrbit *this,Range_L_double_G_ param_1)

{
  ReferenceController *pRVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double *pdVar5;
  Maybe_L_double_G_ *pMVar6;
  undefined4 *puVar7;
  CelestialBody *pCVar8;
  double dVar9;
  double dVar10;
  undefined1 local_5c[48];
  undefined1 local_2c[12];
  undefined4 uStack_20;
  double local_1c;
  double local_14;
  double local_c;
  
  pCVar8 = (CelestialBody *)(this->OrbitedBody).Pointer;
  local_c = (/*3ff0000000000000*/1.0 - (this->Elements).InclinationToRelativePlane_degrees) *
            (this->Elements).Eccentricity;
  if (pCVar8 == (CelestialBody *)0x0) {
    pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar3 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar3) {
        (this->OrbitedBody).Controller = (ReferenceController *)0x0;
      }
    }
    pCVar8 = (CelestialBody *)(this->OrbitedBody).Controller[6].WeakReferenceCount;
  }
  local_14 = CelestialBody__GetRadius_km(pCVar8);
  if (local_14 < local_c) {
    return false;
  }
  local_c = param_1.Upper - param_1.Lower;
  dVar9 = GetAverageAngularVelocity__s(this);
  local_c = dVar9 * local_c;
  bVar3 = local_c < /*401921fb54442d18*/6.283185307179586;
  local_c = GetMeanAnomaly_radians(this,param_1.Lower);
  dVar10 = GetMeanAnomaly_radians(this,param_1.Upper);
  dVar9 = local_c;
  pCVar8 = (CelestialBody *)(this->OrbitedBody).Pointer;
  bVar2 = dVar10 < local_c;
  local_14 = dVar10;
  if (pCVar8 == (CelestialBody *)0x0) {
    pRVar1 = (ReferenceController *)(this->Elements)._pad_0x0_0;
    if (pRVar1 != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar4) {
        (this->OrbitedBody).Controller = (ReferenceController *)0x0;
      }
    }
    pCVar8 = (CelestialBody *)(this->OrbitedBody).Controller[6].WeakReferenceCount;
  }
  local_14 = CelestialBody__GetRadius_km(pCVar8);
  if ((bVar3) && (dVar9 <= dVar10)) {
    pdVar5 = (double *)GetRelativeOrbitalState(this,(double)CONCAT44(param_1.Lower,local_5c));
    local_c = *pdVar5 * *pdVar5 + pdVar5[1] * pdVar5[1] + pdVar5[2] * pdVar5[2];
    pMVar6 = util__Sqrt((Maybe_L_double_G_ *)(local_2c + 8),&local_c);
    if (pMVar6->IsValidData == bVar2) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (local_14 < pMVar6->Data) {
      puVar7 = (undefined4 *)GetRelativeOrbitalState(this,(double)CONCAT44(param_1.Upper,local_5c));
      ((slice_view *)&local_2c)->_0_4_ = *puVar7;
      ((slice_view *)&local_2c)->_4_4_ = puVar7[1];
      ((slice_view *)&local_2c)->_8_4_ = puVar7[2];
      uStack_20 = puVar7[3];
      local_1c = *(double *)(puVar7 + 4);
      dVar9 = util__Vec3_double___Length((Vec3_L_double_G_ *)local_2c);
      if (local_14 < dVar9) {
        return false;
      }
    }
  }
  return true;
}


//==== 0000716d90 00716d90_FUN_00716d90 ====
void FUN_00716d90(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 00716d90 name=FUN_00716d90 conv=unknown body=439

void FUN_00716d90(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double local_24;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar5 = *param_4;
  if ((int)local_10 < iVar5) {
    local_24 = 0.0;
    do {
      if (*param_6 <= (int)local_c) break;
      local_14 = (int *)(**(code **)*param_1)(&local_10);
      piVar1 = (int *)(**(code **)*param_1)(&local_c);
      dVar7 = local_24;
      if (*(char *)(*piVar1 + 0xf8) != '\0') {
        dVar7 = *(double *)(*piVar1 + 200);
      }
      dVar6 = local_24;
      if (*(char *)(*local_14 + 0xf8) != '\0') {
        dVar6 = *(double *)(*local_14 + 200);
      }
      local_18 = (int *)*param_7;
      *param_7 = (int)local_18 + 1;
      if (dVar6 <= dVar7) {
        piVar1 = (int *)(**(code **)*param_2)(&local_18);
        *piVar1 = *local_14;
        local_10 = (int *)((int)local_10 + 1);
      }
      else {
        local_14 = local_18;
        local_18 = piVar1;
        piVar1 = (int *)(**(code **)*param_2)(&local_14);
        *piVar1 = *local_18;
        local_c = (int *)((int)local_c + 1);
      }
      iVar5 = *param_4;
    } while ((int)local_10 < iVar5);
    if ((int)local_10 < iVar5) {
      do {
        local_14 = (int *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar2 = (undefined4 *)(**(code **)*param_1)(&local_18);
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar3 = *puVar2;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar2 = (undefined4 *)(**(code **)*param_1)(&local_18);
      puVar3 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar3 = *puVar2;
    } while ((int)local_c < *param_6);
  }
  iVar5 = *param_7;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((iVar4 < iVar5) || (iVar5 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000722c60 00722c60_FUN_00722c60 ====
void FUN_00722c60(int *param_1,int param_2,int param_3);

// decompiled by BatchDecomp @ 00722c60 name=FUN_00722c60 conv=unknown body=678

void FUN_00722c60(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double local_108;
  int *local_100;
  undefined1 local_fc[12];
  int local_f0;
  ReferenceController *local_ec;
  undefined **local_e4;
  void *local_e0;
  double local_cc;
  undefined **local_9c;
  void *local_98;
  char local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_100 = param_1;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         !bVar1)) {
        *piVar3 = 0;
      }
      (*(code *)**(undefined4 **)(*piVar3 + 8))(local_fc);
      if ((param_2 == *piVar3) || (local_14 == '\0')) {
LAB_00722e5a:
        bVar1 = false;
      }
      else {
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        bVar1 = CelestialBody__IsMajorObject(*(CelestialBody **)(*piVar3 + 0x4c));
        if (!bVar1) goto LAB_00722e5a;
        if (*(char *)(param_3 + 0xe8) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (local_14 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((*(ReferenceController **)(param_3 + 0x10) != local_ec) ||
           (*(int *)(param_3 + 0xc) != local_f0)) goto LAB_00722e5a;
        if (local_14 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (*(char *)(param_3 + 0xe8) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_108 = local_cc - *(double *)(param_3 + 0x30);
        if (*(char *)(param_3 + 0xe8) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (local_14 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar4 = local_cc;
        if (*(double *)(param_3 + 0x30) <= local_cc) {
          dVar4 = *(double *)(param_3 + 0x30);
        }
        dVar5 = util__Abs(&local_108);
        if (dVar4 * /*3fb999999999999a*/0.1 <= dVar5) goto LAB_00722e5a;
        bVar1 = true;
      }
      local_9c = ((void *)(0x009194a4u));
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
      }
      local_98 = (void *)0x0;
      local_9c = ((void *)(0x00919488u));
      local_e4 = ((void *)(0x00919980u));
      if (local_e0 != (void *)0x0) {
        operator_delete__(local_e0);
        local_e0 = (void *)0x0;
      }
      if (local_ec != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_ec);
      }
      param_1 = local_100;
      if (bVar1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_100 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000722f10 00722f10_FUN_00722f10 ====
void FUN_00722f10(undefined4 *param_1,int *param_2,CelestialObject *param_3);

// decompiled by BatchDecomp @ 00722f10 name=FUN_00722f10 conv=unknown body=641

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00722f10(undefined4 *param_1,int *param_2,CelestialObject *param_3)

{
  ReferenceController *pRVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Vec3_L_double_G_ *pVVar5;
  Maybe_L_double_G_ *pMVar6;
  undefined4 uVar7;
  ReferenceController *pRVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  Vec3_L_double_G_ local_a4;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  double local_7c;
  Maybe_L_double_G_ local_5c;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  double local_34;
  undefined4 *local_2c;
  undefined8 local_28;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  pcVar9 = DebugBreak_exref;
  if (iVar3 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_c);
      dVar11 = StrategicManager__GetTimeSinceJ2000_s(param_3->ParentStrategic);
      CelestialObject__GetStateAt(param_3,(double)CONCAT44(SUB84(dVar11,0),&local_8c));
      local_4c = local_8c;
      uStack_48 = uStack_88;
      uStack_44 = uStack_84;
      uStack_40 = uStack_80;
      local_28 = local_7c;
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pVVar5 = Fleet__GetPosition_km((Fleet *)*puVar4,&local_a4);
      dVar10 = pVVar5->Y - (double)CONCAT44(uStack_40,uStack_44);
      dVar11 = pVVar5->X - (double)CONCAT44(uStack_48,local_4c);
      local_28 = pVVar5->Z - local_28;
      local_28 = dVar10 * dVar10 + dVar11 * dVar11 + local_28 * local_28;
      pMVar6 = util__Sqrt(&local_5c,(double *)&local_28);
      if (pMVar6->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_34 = pMVar6->Data;
      if (((char)local_10 == '\0') || (local_20 < local_34)) {
        pRVar1 = (ReferenceController *)puVar4[1];
        local_28 = (double)CONCAT44(*puVar4,(undefined4)local_28);
        uVar7 = *puVar4;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
          uVar7 = ((slice_view *)&local_28)->_4_4_;
        }
        pRVar8 = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar1,uVar7);
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar8 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar8);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
        local_20 = local_34;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
      pcVar9 = DebugBreak_exref;
      param_1 = local_2c;
    } while (local_c < iVar3);
  }
  if ((char)local_10 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar9)();
    if ((char)local_10 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar9)();
    }
  }
  pRVar1 = ((slice_view *)&local_18)->_4_4_;
  uVar7 = (undefined4)local_18;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  local_34 = local_20;
  *param_1 = uVar7;
  param_1[1] = pRVar1;
  pRVar8 = ((slice_view *)&local_18)->_4_4_;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
    pRVar8 = ((slice_view *)&local_18)->_4_4_;
  }
  *(double *)(param_1 + 2) = local_34;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
    pRVar8 = ((slice_view *)&local_18)->_4_4_;
  }
  if (pRVar8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000072b230 0072b230_FUN_0072b230 ====
void FUN_0072b230(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 0072b230 name=FUN_0072b230 conv=unknown body=479

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0072b230(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  Body *pBVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar5;
  bool bVar6;
  int iVar7;
  undefined4 *puVar8;
  ReferenceController *pRVar9;
  ReferenceController *pRVar10;
  ReferenceController *local_34;
  char local_30[4];
  SpacecraftComponent *local_2c;
  ReferenceController *local_28;
  char local_24[4];
  int *local_20;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_1c;
  SpacecraftComponent *local_18;
  char *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar4 = false;
  bVar3 = false;
  local_20 = param_1;
  local_1c = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)0x0;
  local_c = 0;
  iVar7 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar7) {
    do {
      puVar8 = (undefined4 *)(**(code **)*param_1)(&local_c);
      pBVar1 = (Body *)*puVar8;
      Body__GetSpacecraftComponent_Memoize(pBVar1);
      if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer ==
            (SpacecraftComponent *)0x0) ||
          (pRVar10 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller,
          pRVar10 == (ReferenceController *)0x0)) ||
         (bVar6 = util__ReferenceController__IsDataStillValid(pRVar10), !bVar6)) {
        util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\strategic\\fleet.cpp",0x206,
                        "b->GetSpacecraftComponent()",(char *)0x0);
        DebugBreak();
      }
      pBVar1 = (Body *)*puVar8;
      if (pBVar1->Alliance == (Faction *)0x0) {
        local_14 = local_30;
        bVar3 = true;
        local_34 = (ReferenceController *)0x0;
        pRVar10 = (ReferenceController *)0x0;
        local_30[0] = '\0';
        local_18 = (SpacecraftComponent *)0x0;
        pRVar9 = local_28;
      }
      else {
        bVar4 = true;
        Body__GetSpacecraftComponent_Memoize(pBVar1);
        if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_2c = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer;
        pRVar10 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
        local_28 = pRVar10;
        local_18 = local_2c;
        if (pRVar10 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar10);
        }
        local_24[0] = '\x01';
        local_14 = local_24;
        pRVar9 = pRVar10;
      }
      if (pRVar10 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar10);
      }
      local_d = *local_14;
      if ((bVar3) && (bVar3 = false, local_34 != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(local_34);
      }
      if ((bVar4) && (bVar4 = false, pRVar9 != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(pRVar9);
      }
      if (local_d != '\0') {
        local_1c = param_3;
        iVar7 = *(int *)(param_3 + 8);
        local_14 = (char *)(iVar7 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,(int *)&local_14);
        pDVar5 = local_1c;
        bVar6 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_1c,iVar7);
        if (bVar6) {
          iVar7 = *(int *)(pDVar5 + 8);
          iVar2 = *(int *)(pDVar5 + 4);
          pRVar9 = *(ReferenceController **)(iVar2 + -4 + iVar7 * 8);
          *(SpacecraftComponent **)(iVar2 + -8 + iVar7 * 8) = local_18;
          *(ReferenceController **)(iVar2 + -4 + iVar7 * 8) = pRVar10;
          if (pRVar10 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar10);
          }
          if (pRVar9 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar9);
          }
        }
      }
      if (pRVar10 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar10);
      }
      param_1 = local_20;
      local_c = local_c + 1;
      iVar7 = (**(code **)(*local_20 + 0xc))();
    } while (local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000072b6d0 0072b6d0_FUN_0072b6d0 ====
void FUN_0072b6d0(Darray_L_double_G_ *param_1,int *param_2,double *param_3,double *param_4);

// decompiled by BatchDecomp @ 0072b6d0 name=FUN_0072b6d0 conv=unknown body=434

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0072b6d0(Darray_L_double_G_ *param_1,int *param_2,double *param_3,double *param_4)

{
  Body *pBVar1;
  ReferenceController *pRVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  CraftBlueprint *this;
  double dVar6;
  double local_18;
  undefined4 *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (double *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  util__Darray_double___Darray_double(param_1,iVar5);
  local_c = 0;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar5) {
    do {
      local_10 = (undefined4 *)(**(code **)*param_2)(&local_c);
      pBVar1 = (Body *)*local_10;
      Body__GetBoundingCylinder_km_Memoize(pBVar1);
      if ((pBVar1->GetBoundingCylinder_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar3 = (pBVar1->GetBoundingCylinder_km_MemoizedValue).Data.Height * *param_3;
      pBVar1 = (Body *)*local_10;
      Body__GetSpacecraftComponent_Memoize(pBVar1);
      if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer ==
            (SpacecraftComponent *)0x0) ||
          (pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller,
          pRVar2 == (ReferenceController *)0x0)) ||
         (bVar4 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar4)) {
        local_18 = 0.0;
      }
      else {
        pBVar1 = (Body *)*local_10;
        Body__GetSpacecraftComponent_Memoize(pBVar1);
        if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
        if ((pRVar2 != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar4)) {
          (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
        }
        this = SpacecraftComponent__GetCraftDesign((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
        dVar6 = CraftBlueprint__GetAreaOfEffectRadius_m(this);
        local_18 = (dVar6 / /*408f400000000000*/1000.0) * *param_4;
      }
      iVar5 = param_1->Size;
      local_10 = (undefined4 *)(iVar5 + 1);
      util__Darray_double___SetSize(param_1,(int *)&local_10);
      bVar4 = util__Darray_double___CheckSize(param_1,iVar5);
      if (bVar4) {
        if (dVar3 <= local_18) {
          dVar3 = local_18;
        }
        param_1->Data[param_1->Size + -1] = dVar3;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074a030 0074a030_FUN_0074a030 ====
void FUN_0074a030(undefined4 *param_1,int *param_2);
extern undefined4 FUN_0074ba40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0074a030 name=FUN_0074a030 conv=unknown body=452

void FUN_0074a030(undefined4 *param_1,int *param_2)

{
  double dVar1;
  ReferenceController *this;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  float10 fVar7;
  double local_20;
  undefined8 local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  pcVar6 = DebugBreak_exref;
  if (iVar4 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  bVar3 = false;
  local_20 = 0.0;
  local_c = 0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined8 *)(**(code **)*param_2)(&local_c);
      fVar7 = (float10)FUN_0074ba40(puVar5);
      dVar1 = (double)fVar7;
      if ((!bVar3) || (local_20 < dVar1)) {
        this = *(ReferenceController **)((int)puVar5 + 4);
        uVar2 = *puVar5;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
        }
        bVar3 = true;
        local_20 = dVar1;
        local_18 = uVar2;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_2 + 0xc))();
      pcVar6 = DebugBreak_exref;
    } while (local_c < iVar4);
  }
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar6)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar6)();
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *param_1 = (undefined4)local_18;
  param_1[1] = ((slice_view *)&local_18)->_4_4_;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *(double *)(param_1 + 2) = local_20;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074a200 0074a200_FUN_0074a200 ====
void FUN_0074a200(undefined4 *param_1,int *param_2);
extern undefined4 FUN_0074cc00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0074a200 name=FUN_0074a200 conv=unknown body=452

void FUN_0074a200(undefined4 *param_1,int *param_2)

{
  double dVar1;
  ReferenceController *this;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  float10 fVar7;
  double local_20;
  undefined8 local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  pcVar6 = DebugBreak_exref;
  if (iVar4 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  bVar3 = false;
  local_20 = 0.0;
  local_c = 0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined8 *)(**(code **)*param_2)(&local_c);
      fVar7 = (float10)FUN_0074cc00(puVar5);
      dVar1 = (double)fVar7;
      if ((!bVar3) || (local_20 < dVar1)) {
        this = *(ReferenceController **)((int)puVar5 + 4);
        uVar2 = *puVar5;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
        }
        bVar3 = true;
        local_20 = dVar1;
        local_18 = uVar2;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_2 + 0xc))();
      pcVar6 = DebugBreak_exref;
    } while (local_c < iVar4);
  }
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar6)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar6)();
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *param_1 = (undefined4)local_18;
  param_1[1] = ((slice_view *)&local_18)->_4_4_;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *(double *)(param_1 + 2) = local_20;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074a3d0 0074a3d0_FUN_0074a3d0 ====
void FUN_0074a3d0(undefined4 *param_1,int *param_2,undefined4 param_3,double *param_4,int param_5, undefined4 param_6,double *param_7);
extern undefined4 FUN_0074ba40(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
extern undefined4 FUN_0074cc00(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0074a3d0 name=FUN_0074a3d0 conv=unknown body=514

void FUN_0074a3d0(undefined4 *param_1,int *param_2,undefined4 param_3,double *param_4,int param_5,
                 undefined4 param_6,double *param_7)

{
  double dVar1;
  ReferenceController *this;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  code *pcVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  double local_20;
  undefined8 local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  pcVar6 = DebugBreak_exref;
  if (iVar4 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  bVar3 = false;
  local_20 = 0.0;
  local_c = 0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined8 *)(**(code **)*param_2)(&local_c);
      fVar7 = (float10)FUN_0074cc00(puVar5);
      dVar1 = *param_7;
      dVar9 = *(double *)(param_5 + 0x38);
      fVar8 = (float10)FUN_0074ba40(puVar5);
      dVar9 = *(double *)(param_5 + 0x30) * (double)(fVar8 / (float10)*param_4) +
              dVar9 * (double)((float10)1 - fVar7 / (float10)dVar1);
      if ((!bVar3) || (local_20 < dVar9)) {
        this = *(ReferenceController **)((int)puVar5 + 4);
        uVar2 = *puVar5;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
        }
        bVar3 = true;
        local_20 = dVar9;
        local_18 = uVar2;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_2 + 0xc))();
      pcVar6 = DebugBreak_exref;
    } while (local_c < iVar4);
  }
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar6)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar6)();
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *param_1 = (undefined4)local_18;
  param_1[1] = ((slice_view *)&local_18)->_4_4_;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *(double *)(param_1 + 2) = local_20;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074a770 0074a770_FUN_0074a770 ====
void FUN_0074a770(int *param_1, Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *param_2);

// decompiled by BatchDecomp @ 0074a770 name=FUN_0074a770 conv=unknown body=531

void FUN_0074a770(int *param_1,
                 Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_
                 *param_2)

{
  int *piVar1;
  ReferenceController *pRVar2;
  ReferenceController *pRVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *this;
  Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this_00;
  int *piVar8;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar5) {
    local_20 = param_2;
    this_00 = param_2;
    do {
      local_18 = (int *)(**(code **)*param_1)(&local_c);
      piVar8 = *(int **)(this_00 + 4);
      local_1c = 0;
      if (piVar8 != piVar8 + *(int *)(this_00 + 8) * 4) {
        do {
          piVar6 = (int *)(**(code **)(*piVar8 + 0x20))();
          if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]),
             !bVar4)) {
            *piVar6 = 0;
          }
          piVar1 = local_18;
          piVar6 = *(int **)(*piVar6 + 0x38);
          if (((ReferenceController *)local_18[1] != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_18[1]), !bVar4)) {
            *piVar1 = 0;
          }
          piVar1 = *(int **)(*piVar1 + 0x38);
          iVar5 = (**(code **)(*piVar6 + 0x188))();
          iVar7 = (**(code **)(*piVar1 + 0x188))();
          if (iVar5 == iVar7) {
            local_14 = local_1c;
            local_10 = 1;
            this = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)
                   (*(code *)**(undefined4 **)param_2)(&local_14);
            iVar5 = *(int *)(this + 8);
            local_1c = iVar5 + 1;
            util__Darray_class_util__WeakPtr_class_Body_____SetSize(this,&local_1c);
            bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(this,iVar5);
            this_00 = local_20;
            if (bVar4) {
              iVar5 = *(int *)(this + 4) + *(int *)(this + 8) * 8;
              pRVar2 = *(ReferenceController **)(iVar5 + -4);
              *(int *)(iVar5 + -8) = *local_18;
              pRVar3 = (ReferenceController *)local_18[1];
              *(ReferenceController **)(iVar5 + -4) = pRVar3;
              if (pRVar3 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(pRVar3);
              }
              this_00 = local_20;
              if (pRVar2 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(pRVar2);
                this_00 = local_20;
              }
            }
            goto LAB_0074a95c;
          }
          piVar8 = piVar8 + 4;
          local_1c = local_1c + 1;
          this_00 = local_20;
        } while (piVar8 != (int *)(*(int *)(local_20 + 8) * 0x10 + *(int *)(local_20 + 4)));
      }
      piVar8 = local_18;
      local_14 = 0;
      local_10 = 0;
      local_30 = 0;
      iStack_2c = 0;
      iStack_28 = 0;
      uStack_24 = 0;
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_30,1);
      iVar5 = iStack_28;
      local_18 = (int *)(iStack_28 + 1);
      util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,(int *)&local_18);
      bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,iVar5);
      if (bVar4) {
        pRVar2 = *(ReferenceController **)(iStack_2c + -4 + iStack_28 * 8);
        iVar5 = iStack_2c + iStack_28 * 8;
        *(int *)(iVar5 + -8) = *piVar8;
        pRVar3 = (ReferenceController *)piVar8[1];
        *(ReferenceController **)(iVar5 + -4) = pRVar3;
        if (pRVar3 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar3);
        }
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
      }
      iVar5 = *(int *)(this_00 + 8);
      local_18 = (int *)(iVar5 + 1);
      util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______SetSize(this_00,(int *)&local_18);
      bVar4 = util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______CheckSize(this_00,iVar5);
      if (bVar4) {
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                  ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                   (*(int *)(this_00 + 8) * 0x10 + *(int *)(this_00 + 4) + -0x10),
                   (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_30);
      }
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_30);
LAB_0074a95c:
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074ac80 0074ac80_FUN_0074ac80 ====
void FUN_0074ac80(int *param_1);

// decompiled by BatchDecomp @ 0074ac80 name=FUN_0074ac80 conv=unknown body=390

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0074ac80(int *param_1)

{
  CraftInstance *this;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_30[20];
  ReferenceController *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_14 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_14 < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_14);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      piVar4 = (int *)Fleet__GetSpacecrafts((Fleet *)*puVar3);
      local_10 = 0;
      iVar2 = (**(code **)(*piVar4 + 0xc))();
      if (local_10 < iVar2) {
        do {
          puVar3 = (undefined4 *)(**(code **)*piVar4)(&local_10);
          if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
             !bVar1)) {
            *puVar3 = 0;
          }
          puVar3 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar3);
          if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
             !bVar1)) {
            *puVar3 = 0;
          }
          this = (CraftInstance *)*puVar3;
          CraftInstance__GetWeaponModules_Memoize(this);
          pMVar5 = &this->GetWeaponModules_MemoizedValue;
          if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          local_c = 0;
          iVar2 = (**(code **)(*(int *)&pMVar5->Data + 0xc))();
          if (local_c < iVar2) {
            do {
              puVar3 = (undefined4 *)(**(code **)*(int *)&pMVar5->Data)(&local_c);
              if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
                 (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]), !bVar1)) {
                *puVar3 = 0;
              }
              (**(code **)(*(int *)*puVar3 + 0x6c))();
              local_c = local_c + 1;
              iVar2 = (**(code **)(*(int *)&pMVar5->Data + 0xc))();
            } while (local_c < iVar2);
          }
          if (local_1c != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(local_1c);
          }
          local_10 = local_10 + 1;
          iVar2 = (**(code **)(*piVar4 + 0xc))();
        } while (local_10 < iVar2);
      }
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_30);
      param_1 = local_18;
      local_14 = local_14 + 1;
      iVar2 = (**(code **)(*local_18 + 0xc))();
    } while (local_14 < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074ae10 0074ae10_FUN_0074ae10 ====
void FUN_0074ae10(int *param_1,undefined4 *param_2,undefined4 *param_3,double *param_4);

// decompiled by BatchDecomp @ 0074ae10 name=FUN_0074ae10 conv=unknown body=401

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0074ae10(int *param_1,undefined4 *param_2,undefined4 *param_3,double *param_4)

{
  undefined4 *puVar1;
  Fleet *this;
  Fleet *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Vec3_L_double_G_ *pVVar5;
  Vec3_L_double_G_ *pVVar6;
  Maybe_L_double_G_ *pMVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec3_L_double_G_ local_60;
  Vec3_L_double_G_ local_48;
  Maybe_L_double_G_ local_30;
  double local_20;
  int *local_18;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      puVar1 = (undefined4 *)*param_2;
      this = (Fleet *)*puVar4;
      if (((ReferenceController *)puVar1[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar1[1]),
         !bVar2)) {
        *puVar1 = 0;
      }
      this_00 = (Fleet *)*puVar1;
      pVVar5 = Fleet__GetPosition_km(this,&local_48);
      pVVar6 = Fleet__GetPosition_km(this_00,&local_60);
      dVar11 = pVVar6->Y - pVVar5->Y;
      dVar10 = pVVar6->X - pVVar5->X;
      dVar9 = pVVar6->Z - pVVar5->Z;
      local_14 = dVar11 * dVar11 + dVar10 * dVar10 + dVar9 * dVar9;
      pMVar7 = util__Sqrt(&local_30,(double *)&local_14);
      if (pMVar7->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_20 = pMVar7->Data;
      if ((*(char *)(param_3 + 2) == '\0') || (local_20 < *param_4)) {
        this_01 = (ReferenceController *)puVar4[1];
        local_14 = (double)CONCAT44(*puVar4,(undefined4)local_14);
        uVar8 = *puVar4;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_01);
          uVar8 = ((slice_view *)&local_14)->_4_4_;
        }
        this_02 = (ReferenceController *)param_3[1];
        *param_3 = uVar8;
        param_3[1] = this_01;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_01);
        }
        if (this_02 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_02);
        }
        *(undefined1 *)(param_3 + 2) = 1;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_01);
        }
        *param_4 = local_20;
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074afb0 0074afb0_FUN_0074afb0 ====
extern undefined4 FUN_0074a990(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */
void FUN_0074afb0(int *param_1,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_2, undefined4 param_3);

// decompiled by BatchDecomp @ 0074afb0 name=FUN_0074afb0 conv=unknown body=420

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0074afb0(int *param_1,Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_2,
                 undefined4 param_3)

{
  CraftInstance *this;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ReferenceController *local_30;
  int local_24;
  int local_20;
  undefined4 *puStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      puVar3 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar3);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      this = (CraftInstance *)*puVar3;
      CraftInstance__GetWeaponModules_Memoize(this);
      if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_10 = param_3;
      local_20 = 0;
      puStack_1c = (undefined4 *)0x0;
      uStack_18 = 0;
      uStack_14 = 0;
      iVar2 = (**(code **)((this->GetWeaponModules_MemoizedValue).Data._pad_0x0_0 + 0xc))();
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20,iVar2);
      FUN_0074a990(&this->GetWeaponModules_MemoizedValue,&local_10,&local_20);
      if (*(int *)(param_2 + 8) == 0) {
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                  (param_2,(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
      }
      else {
        iVar2 = (**(code **)(local_20 + 0xc))();
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_2 + 8);
          local_24 = (**(code **)(local_20 + 0xc))();
          local_24 = local_24 + *(int *)(param_2 + 8);
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_2,&local_24);
          util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_2,iVar2);
          puVar3 = (undefined4 *)(*(int *)(param_2 + 4) + iVar2 * 8);
          puVar4 = puStack_1c;
          if (puVar3 != (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 8)) {
            do {
              this_00 = (ReferenceController *)puVar3[1];
              *puVar3 = *puVar4;
              this_01 = (ReferenceController *)puVar4[1];
              puVar3[1] = this_01;
              if (this_01 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this_01);
              }
              if (this_00 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(this_00);
              }
              puVar3 = puVar3 + 2;
              puVar4 = puVar4 + 2;
            } while (puVar3 != (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 8) * 8));
          }
        }
      }
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20);
      if (local_30 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_30);
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000074c890 0074c890_FUN_0074c890 ====
undefined4 __thiscall FUN_0074c890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined8 param_6);

// decompiled by BatchDecomp @ 0074c890 name=FUN_0074c890 conv=unknown body=511

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

undefined4 __thiscall
FUN_0074c890(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6)

{
  FixedOrbit *pFVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 local_54;
  undefined4 uStack_50;
  
  pFVar1 = (FixedOrbit *)*param_1;
  if (*(char *)&pFVar1[1].OrbitedBody.Pointer == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_54 = (undefined4)param_6;
  uStack_50 = *(undefined4 *)((char *)&param_6 + 4);
  dVar3 = FixedOrbit__GetMeanAnomalyFromProjectingStateOnToOrbit_radians(pFVar1,param_2,param_3,param_4,param_5,local_54,uStack_50,0,0,0,0,0,0);
  dVar7 = *(double *)param_1[1];
  dVar4 = util__FUN_0074c890(*(double *)param_1[2]);
  dVar5 = util__FUN_0074c890(dVar3 - dVar7);
  dVar6 = util__FUN_0074c890(dVar3);
  if (dVar6 < dVar5) {
    if (dVar4 < dVar5) {
      if ((dVar4 <= dVar5 - /*401921fb54442d18*/6.283185307179586) && (dVar6 <= dVar4)) {
        return 1;
      }
      if ((dVar4 <= dVar6) && (dVar5 - /*401921fb54442d18*/6.283185307179586 <= dVar4)) {
        return 1;
      }
    }
    else {
      if ((dVar4 <= dVar5) && (dVar6 + /*401921fb54442d18*/6.283185307179586 <= dVar4)) {
        return 1;
      }
      if (dVar4 <= dVar6 + /*401921fb54442d18*/6.283185307179586) {
        return 1;
      }
    }
  }
  else {
    if ((dVar4 <= dVar5) && (dVar6 <= dVar4)) {
      return 1;
    }
    if ((dVar4 <= dVar6) && (dVar5 <= dVar4)) {
      return 1;
    }
  }
  dVar4 = util__FUN_0074c890(*(double *)param_1[3]);
  dVar7 = util__FUN_0074c890(dVar3 - dVar7);
  dVar3 = util__FUN_0074c890(dVar3);
  if (dVar3 < dVar7) {
    if (dVar7 <= dVar4) {
      if ((dVar4 <= dVar7) && (dVar3 + /*401921fb54442d18*/6.283185307179586 <= dVar4)) {
        return 1;
      }
      bVar2 = dVar3 + /*401921fb54442d18*/6.283185307179586 < dVar4;
      goto LAB_0074ca79;
    }
    dVar7 = dVar7 - /*401921fb54442d18*/6.283185307179586;
  }
  if ((dVar4 <= dVar7) && (dVar3 <= dVar4)) {
    return 1;
  }
  if (dVar3 < dVar4) {
    return 0;
  }
  bVar2 = dVar4 < dVar7;
LAB_0074ca79:
  if (!bVar2) {
    return 1;
  }
  return 0;
}


//==== 0000750600 00750600_GetDeltaVBudget_km__s ====
#undef DeltaVBudget_Percent /* auto(v2): compat 僵尸宏撞成员名 */

// decompiled by BatchDecomp @ 00750600 name=GetDeltaVBudget_km__s conv=__thiscall body=403

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall OrbitalInterception__GetDeltaVBudget_km__s(void)const  */

double __thiscall OrbitalInterception__GetDeltaVBudget_km__s(OrbitalInterception *this)

{
  bool bVar1;
  InterceptionProtocol *pIVar2;
  double dVar3;
  double dVar4;
  Fleet *pFVar5;
  ReferenceController *pRVar6;
  undefined **local_5c;
  void *local_58;
  double local_1c;
  double local_14;
  double local_c;
  
  pRVar6 = (this->OurFleet).Controller;
  if (pRVar6 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(pRVar6);
    if (!bVar1) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  pFVar5 = (this->OurFleet).Pointer;
  Fleet__GetOriginalDeltaV_km__s_Memoize(pFVar5);
  if ((pFVar5->GetOriginalDeltaV_km__s_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = (pFVar5->GetOriginalDeltaV_km__s_MemoizedValue).Data;
  pRVar6 = (this->OurFleet).Controller;
  if (pRVar6 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(pRVar6);
    if (!bVar1) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  pFVar5 = (this->OurFleet).Pointer;
  Fleet__GetRemainingDeltaV_km__s_Memoize(pFVar5);
  if ((pFVar5->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_1c = (pFVar5->GetRemainingDeltaV_km__s_MemoizedValue).Data;
  pFVar5 = (this->OurFleet).Pointer;
  pRVar6 = (this->OurFleet).Controller;
  local_c = local_1c;
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar6);
  }
  pIVar2 = StrategicAI__GetInterceptProtocol(this->Parent,&local_5c,pFVar5,pRVar6);
  local_5c = ((void *)(0x00919980u));
  local_14 = (/*3ff0000000000000*/1.0 - pIVar2->DeltaVBudget_Percent) * local_14;
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  dVar3 = local_c - local_14;
  pFVar5 = (this->OurFleet).Pointer;
  local_14 = 0.0;
  if (0.0 <= dVar3) {
    local_14 = dVar3;
  }
  pRVar6 = (this->OurFleet).Controller;
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar6);
  }
  pIVar2 = StrategicAI__GetInterceptProtocol(this->Parent,&local_5c,pFVar5,pRVar6);
  dVar3 = pIVar2->InstantaneousDeltaVBudget_Percent * local_c;
  local_5c = ((void *)(0x00919980u));
  local_c = 0.0;
  if (0.0 <= dVar3) {
    local_c = dVar3;
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  dVar4 = GetRecircularizeDeltaVToSave_km__s(this);
  dVar3 = 0.0;
  if (0.0 <= local_1c - dVar4) {
    dVar3 = local_1c - dVar4;
  }
  if (dVar3 <= local_14) {
    local_14 = dVar3;
  }
  if (local_c <= local_14) {
    local_14 = local_c;
  }
  return local_14;
}


//==== 00007510d0 007510d0_GetRecircularizeDeltaVToSave_km__s ====
// decompiled by BatchDecomp @ 007510d0 name=GetRecircularizeDeltaVToSave_km__s conv=__thiscall body=486

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: double __thiscall OrbitalInterception__GetRecircularizeDeltaVToSave_km__s(void)const  */

double __thiscall OrbitalInterception__GetRecircularizeDeltaVToSave_km__s(OrbitalInterception *this)

{
  Fleet *this_00;
  ReferenceController *this_01;
  bool bVar1;
  Vec3_L_double_G_ *pVVar2;
  Maybe_L_double_G_ *pMVar3;
  CelestialObject *this_02;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 uVar4;
  ReferenceController *pRVar5;
  undefined1 local_80[24];
  Maybe_L_double_G_ local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  Maybe_L_double_G_ local_20;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pRVar5 = (this->OurFleet).Controller;
  if (pRVar5 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(pRVar5);
    if (!bVar1) {
      (this->OurFleet).Pointer = (Fleet *)0x0;
    }
  }
  this_00 = (this->OurFleet).Pointer;
  Fleet__IsCapitalShipFleet_Memoize(this_00);
  if ((this_00->IsCapitalShipFleet_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((this_00->IsCapitalShipFleet_MemoizedValue).Data != false) {
    pRVar5 = (this->OurFleet).Controller;
    local_10 = 0;
    if (pRVar5 != (ReferenceController *)0x0) {
      bVar1 = util__ReferenceController__IsDataStillValid(pRVar5);
      if (!bVar1) {
        (this->OurFleet).Pointer = (Fleet *)0x0;
      }
    }
    Fleet__GetBodyWeAreInHillSphereOf((this->OurFleet).Pointer);
    if (((slice_view *)&local_10)->_4_4_ == (ReferenceController *)0x0) {
      this_02 = (CelestialObject *)local_10;
    }
    else {
      bVar1 = util__ReferenceController__IsDataStillValid(((slice_view *)&local_10)->_4_4_);
      this_02 = (CelestialObject *)local_10;
      if (!bVar1) {
        this_02 = (CelestialObject *)0x0;
      }
      local_10 = CONCAT44(((slice_view *)&local_10)->_4_4_,this_02);
    }
    CelestialObject__GetStabilityRegionRadius_km(this_02,&local_20);
    if (local_20.IsValidData != false) {
      uVar4 = (CelestialObject *)local_10;
      pRVar5 = ((slice_view *)&local_10)->_4_4_;
      if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(((slice_view *)&local_10)->_4_4_);
      }
      this_01 = (this->OurFleet).Controller;
      if (this_01 != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid(this_01);
        if (!bVar1) {
          (this->OurFleet).Pointer = (Fleet *)0x0;
        }
      }
      Fleet__GetStateAt((this->OurFleet).Pointer,
                        (double)CONCAT44(SUB84(this->TimeSinceJ2000_s,0),&local_58));
      pVVar2 = Astrogation__OrbitalCircularInjection_km__s(local_80,this->Parent->Parent,this->TimeSinceJ2000_s,local_58,uStack_54,
                          uStack_50,uStack_4c,local_48,uStack_44,uStack_40,uStack_3c,local_38,
                          uStack_34,uStack_30,uStack_2c,uVar4,pRVar5);
      local_28 = pVVar2->Y * pVVar2->Y + pVVar2->X * pVVar2->X + pVVar2->Z * pVVar2->Z;
      pMVar3 = util__Sqrt(&local_68,&local_28);
      if (pMVar3->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_28 = pMVar3->Data * /*3ff199999999999a*/1.1;
      if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return (double)extraout_ST0;
    }
    if (((slice_view *)&local_10)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_10)->_4_4_);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0_00;
}


//==== 0000754fe0 00754fe0_FUN_00754fe0 ====
void FUN_00754fe0(int *param_1,int param_2);

// decompiled by BatchDecomp @ 00754fe0 name=FUN_00754fe0 conv=unknown body=469

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00754fe0(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_44[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_34[16];
  int *local_24;
  int *local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  local_18 = 0;
  local_14 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  uVar8 = 0;
  if (iVar3 <= local_14) {
LAB_007550f1:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00755011:
  piVar4 = (int *)(**(code **)*param_1)(&local_14);
  local_18 = uVar8 | 1;
  local_1c = piVar4;
  if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]), !bVar2)
     ) {
    *piVar4 = 0;
  }
  piVar4 = (int *)Fleet__GetSpacecrafts((Fleet *)*piVar4);
  local_c = 0;
  local_20 = piVar4;
  iVar3 = (**(code **)(*piVar4 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar5 = (int *)(**(code **)*piVar4)(&local_c);
      piVar6 = local_1c;
      piVar4 = local_20;
      piVar7 = *(int **)(param_2 + 0x1cc);
      piVar1 = piVar7 + *(int *)(param_2 + 0x1d0) * 2;
      if (piVar7 != piVar1) {
        do {
          if ((piVar5[1] == piVar7[1]) && (*piVar5 == *piVar7)) {
            local_18 = local_18 | 2;
            if (((ReferenceController *)local_1c[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_1c[1]), !bVar2)) {
              *piVar6 = 0;
            }
            piVar4 = (int *)Fleet__GetSpacecrafts((Fleet *)*piVar6);
            local_10 = 0;
            local_1c = piVar4;
            iVar3 = (**(code **)(*piVar4 + 0xc))();
            if (local_10 < iVar3) goto LAB_00755150;
            goto LAB_007550a8;
          }
          piVar7 = piVar7 + 2;
        } while (piVar7 != piVar1);
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_20 + 0xc))();
    } while (local_c < iVar3);
  }
  goto LAB_007550a8;
LAB_00755150:
  do {
    piVar6 = (int *)(**(code **)*piVar4)(&local_10);
    piVar4 = local_1c;
    piVar7 = *(int **)(param_2 + 0x1dc);
    piVar1 = piVar7 + *(int *)(param_2 + 0x1e0) * 2;
    if (piVar7 != piVar1) {
      do {
        if ((piVar6[1] == piVar7[1]) && (*piVar6 == *piVar7)) {
          bVar2 = true;
          goto LAB_007550aa;
        }
        piVar7 = piVar7 + 2;
      } while (piVar7 != piVar1);
    }
    local_10 = local_10 + 1;
    iVar3 = (**(code **)(*local_1c + 0xc))();
  } while (local_10 < iVar3);
LAB_007550a8:
  bVar2 = false;
LAB_007550aa:
  if ((local_18 & 2) != 0) {
    local_18 = local_18 & 0xfffffffd;
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_34);
  }
  local_18 = local_18 & 0xfffffffe;
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_44);
  param_1 = local_24;
  if (bVar2) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_14 = local_14 + 1;
  iVar3 = (**(code **)(*local_24 + 0xc))();
  uVar8 = local_18;
  if (iVar3 <= local_14) goto LAB_007550f1;
  goto LAB_00755011;
}


//==== 00007551c0 007551c0_FUN_007551c0 ====
void FUN_007551c0(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 007551c0 name=FUN_007551c0 conv=unknown body=510

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007551c0(undefined4 *param_1,int *param_2)

{
  double dVar1;
  Fleet *this;
  ReferenceController *this_00;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  double local_20;
  undefined8 local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  pcVar7 = DebugBreak_exref;
  if (iVar5 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  bVar3 = false;
  local_20 = 0.0;
  local_c = 0;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined8 *)(**(code **)*param_2)(&local_c);
      if ((*(ReferenceController **)((int)puVar6 + 4) != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)((int)puVar6 + 4)), !bVar4)) {
        *(undefined4 *)puVar6 = 0;
      }
      this = *(Fleet **)puVar6;
      Fleet__GetTotalTonnage_kg_Memoize(this);
      if ((this->GetTotalTonnage_kg_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar1 = (this->GetTotalTonnage_kg_MemoizedValue).Data;
      if ((!bVar3) || (local_20 < dVar1)) {
        this_00 = *(ReferenceController **)((int)puVar6 + 4);
        uVar2 = *puVar6;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
        }
        bVar3 = true;
        local_20 = dVar1;
        local_18 = uVar2;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_2 + 0xc))();
      pcVar7 = DebugBreak_exref;
    } while (local_c < iVar5);
  }
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar7)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *param_1 = (undefined4)local_18;
  param_1[1] = ((slice_view *)&local_18)->_4_4_;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *(double *)(param_1 + 2) = local_20;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007553c0 007553c0_FUN_007553c0 ====
void FUN_007553c0(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 007553c0 name=FUN_007553c0 conv=unknown body=610

void FUN_007553c0(undefined4 *param_1,int *param_2)

{
  double dVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  double local_34;
  undefined4 local_2c;
  ReferenceController *pRStack_28;
  undefined4 uStack_24;
  ReferenceController *pRStack_20;
  undefined8 local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  pcVar5 = DebugBreak_exref;
  if (iVar3 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_1c = 0;
  local_2c = 0;
  pRStack_28 = (ReferenceController *)0x0;
  uStack_24 = 0;
  pRStack_20 = (ReferenceController *)0x0;
  bVar2 = false;
  local_34 = 0.0;
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_c);
      dVar1 = *(double *)(puVar4 + 4);
      if ((!bVar2) || (dVar1 < local_34)) {
        this = (ReferenceController *)puVar4[1];
        local_2c = *puVar4;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        this_00 = (ReferenceController *)puVar4[3];
        uStack_24 = puVar4[2];
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        local_1c = *(undefined8 *)(puVar4 + 4);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (pRStack_28 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRStack_28);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (pRStack_20 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRStack_20);
        }
        bVar2 = true;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        local_34 = dVar1;
        pRStack_28 = this;
        pRStack_20 = this_00;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
      pcVar5 = DebugBreak_exref;
    } while (local_c < iVar3);
  }
  if (!bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar5)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar5)();
  }
  if (pRStack_28 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRStack_28);
  }
  if (pRStack_20 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRStack_20);
  }
  *param_1 = local_2c;
  param_1[1] = pRStack_28;
  if (pRStack_28 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRStack_28);
  }
  param_1[2] = uStack_24;
  param_1[3] = pRStack_20;
  if (pRStack_20 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRStack_20);
  }
  *(undefined8 *)(param_1 + 4) = local_1c;
  *(double *)(param_1 + 6) = local_34;
  if (pRStack_20 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_20);
  }
  if (pRStack_28 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_28);
  }
  if (pRStack_20 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_20);
  }
  if (pRStack_28 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRStack_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000755630 00755630_FUN_00755630 ====
void FUN_00755630(undefined4 *param_1,int *param_2,undefined8 *param_3,double *param_4);

// decompiled by BatchDecomp @ 00755630 name=FUN_00755630 conv=unknown body=604

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00755630(undefined4 *param_1,int *param_2,undefined8 *param_3,double *param_4)

{
  ReferenceController *pRVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Vec3_L_double_G_ *pVVar5;
  Maybe_L_double_G_ *pMVar6;
  undefined4 uVar7;
  ReferenceController *pRVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int *piVar13;
  Vec3_L_double_G_ local_5c;
  Maybe_L_double_G_ local_44;
  double local_34;
  undefined4 *local_2c;
  undefined8 local_28;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = param_1;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  pcVar9 = DebugBreak_exref;
  if (iVar3 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar13 = &local_c;
      puVar4 = (undefined4 *)(**(code **)*param_2)();
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pVVar5 = CelestialObject__GetPositionAt_km((CelestialObject *)*puVar4,&local_5c,
                          (double)CONCAT44(piVar13,(int)((ulonglong)*param_3 >> 0x20)));
      dVar12 = pVVar5->Y - param_4[1];
      dVar11 = pVVar5->X - *param_4;
      dVar10 = pVVar5->Z - param_4[2];
      local_28 = dVar12 * dVar12 + dVar11 * dVar11 + dVar10 * dVar10;
      pMVar6 = util__Sqrt(&local_44,(double *)&local_28);
      if (pMVar6->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_34 = pMVar6->Data;
      if (((char)local_10 == '\0') || (local_34 < local_20)) {
        pRVar1 = (ReferenceController *)puVar4[1];
        local_28 = (double)CONCAT44(*puVar4,(undefined4)local_28);
        uVar7 = *puVar4;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
          uVar7 = ((slice_view *)&local_28)->_4_4_;
        }
        pRVar8 = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar1,uVar7);
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar8 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar8);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
        local_20 = local_34;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
      pcVar9 = DebugBreak_exref;
      param_1 = local_2c;
    } while (local_c < iVar3);
  }
  if ((char)local_10 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar9)();
    if ((char)local_10 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar9)();
    }
  }
  pRVar1 = ((slice_view *)&local_18)->_4_4_;
  uVar7 = (undefined4)local_18;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  local_34 = local_20;
  *param_1 = uVar7;
  param_1[1] = pRVar1;
  pRVar8 = ((slice_view *)&local_18)->_4_4_;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar1);
    pRVar8 = ((slice_view *)&local_18)->_4_4_;
  }
  *(double *)(param_1 + 2) = local_34;
  if (pRVar1 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar1);
    pRVar8 = ((slice_view *)&local_18)->_4_4_;
  }
  if (pRVar8 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000755890 00755890_FUN_00755890 ====
void FUN_00755890(undefined4 *param_1,int *param_2,double *param_3);

// decompiled by BatchDecomp @ 00755890 name=FUN_00755890 conv=unknown body=530

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00755890(undefined4 *param_1,int *param_2,double *param_3)

{
  ReferenceController *this;
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  double *pdVar6;
  code *pcVar7;
  double dVar8;
  double local_20;
  undefined8 local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  pcVar7 = DebugBreak_exref;
  if (iVar4 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  bVar2 = false;
  local_20 = 0.0;
  local_c = 0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined8 *)(**(code **)*param_2)(&local_c);
      if ((*(ReferenceController **)((int)puVar5 + 4) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)((int)puVar5 + 4)), !bVar3)) {
        *(undefined4 *)puVar5 = 0;
      }
      pdVar6 = (double *)Fleet__GetCurrentState(*(Fleet **)puVar5);
      dVar8 = (param_3[1] - pdVar6[1]) * (param_3[1] - pdVar6[1]) +
              (*param_3 - *pdVar6) * (*param_3 - *pdVar6) +
              (param_3[2] - pdVar6[2]) * (param_3[2] - pdVar6[2]);
      if ((!bVar2) || (dVar8 < local_20)) {
        this = *(ReferenceController **)((int)puVar5 + 4);
        uVar1 = *puVar5;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
        }
        bVar2 = true;
        local_20 = dVar8;
        local_18 = uVar1;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_2 + 0xc))();
      pcVar7 = DebugBreak_exref;
    } while (local_c < iVar4);
  }
  if (!bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar7)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *param_1 = (undefined4)local_18;
  param_1[1] = ((slice_view *)&local_18)->_4_4_;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *(double *)(param_1 + 2) = local_20;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000755c40 00755c40_FUN_00755c40 ====
void FUN_00755c40(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 00755c40 name=FUN_00755c40 conv=unknown body=611

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00755c40(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  ReferenceController *this;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  double *pdVar6;
  ReferenceController *pRVar7;
  ReferenceController *local_44;
  double local_40;
  undefined1 local_38[16];
  undefined4 *local_28;
  undefined1 *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_24 = (undefined1 *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar3) {
          *puVar5 = 0;
        }
      }
      bVar3 = CelestialObject__IsLuminousBody((CelestialObject *)*puVar5);
      if (bVar3) {
        if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
          bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
          if (!bVar3) {
            *puVar5 = 0;
          }
        }
        ((slice_view *)&local_38)->_8_8_ = CelestialObject__GetLuminosity_W((CelestialObject *)*puVar5);
        if (((char)local_10 == '\0') || (local_20 < (double)((slice_view *)&local_38)->_8_8_)) {
          local_24 = (undefined1 *)*puVar5;
          pRVar7 = (ReferenceController *)puVar5[1];
          if (pRVar7 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar7);
          }
          this = ((slice_view *)&local_18)->_4_4_;
          local_18 = CONCAT44(pRVar7,local_24);
          if (pRVar7 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar7);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
          ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
          if (pRVar7 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar7);
          }
          local_20 = (double)((slice_view *)&local_38)->_8_8_;
        }
      }
      local_c = (double *)((int)local_c + 1);
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  if ((char)local_10 == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0.0;
    pdVar6 = (double *)0x0;
    pRVar7 = (ReferenceController *)local_38;
    local_38[0] = 0;
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
  }
  else {
    pRVar7 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    ((slice_view *)&local_38)->_8_8_ = local_20;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
      if (pRVar7 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar7);
        util__ReferenceController__ReleaseWeakReference(pRVar7);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
      }
    }
    local_44 = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    bVar2 = true;
    bVar1 = true;
    bVar3 = false;
    local_38[0] = 1;
    pdVar6 = local_c;
    local_40 = (double)((slice_view *)&local_38)->_8_8_;
  }
  local_c = &local_40;
  local_24 = local_38;
  *local_28 = pdVar6;
  local_28[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(double *)(local_28 + 2) = *local_c;
  *(undefined1 *)(local_28 + 4) = *local_24;
  if (bVar3) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar1) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000756810 00756810_FUN_00756810 ====
void FUN_00756810(int *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,char *param_6,Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_7);

// decompiled by BatchDecomp @ 00756810 name=FUN_00756810 conv=unknown body=655

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00756810(int *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,char *param_6,Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *param_7)

{
  Body *pBVar1;
  bool bVar2;
  int iVar3;
  SharedPtr_L_struct_UIWidget_G_ *pSVar4;
  Maybe_L_double_G_ *pMVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  ReferenceController *pRVar10;
  Maybe_L_double_G_ local_2c;
  double local_1c;
  int *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pSVar4 = (SharedPtr_L_struct_UIWidget_G_ *)(**(code **)*param_1)(&local_c);
      if (((*param_2 != 0) && ((ReferenceController *)param_2[1] != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         bVar2)) {
        if ((*(Body **)pSVar4 == (Body *)0x0) || (*(int *)(pSVar4 + 4) == 0)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          iVar3 = Body__GetState(*(Body **)pSVar4);
          dVar8 = (*(double *)(iVar3 + 0x18) + *(double *)(param_3 + 0x18)) -
                  *(double *)(param_4 + 0x18);
          dVar7 = (*(double *)(param_3 + 0x20) + *(double *)(iVar3 + 0x20)) -
                  *(double *)(param_4 + 0x20);
          dVar6 = (*(double *)(param_3 + 0x28) + *(double *)(iVar3 + 0x28)) -
                  *(double *)(param_4 + 0x28);
          local_1c = dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6;
          pMVar5 = util__Sqrt(&local_2c,&local_1c);
          if (pMVar5->IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          pBVar1 = *(Body **)pSVar4;
          local_d = /*3fc999999999999a*/0.2 < pMVar5->Data;
          Body__GetSpacecraftComponent_Memoize(pBVar1);
          if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          pRVar10 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
          if ((pRVar10 != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__IsDataStillValid(pRVar10), !bVar2)) {
            (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0
            ;
          }
          bVar2 = SpacecraftComponent__HasNoDeltaVButUsedTo((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
          if ((!bVar2) || (bVar2 = local_d == '\0', local_d = '\x01', bVar2)) {
            local_d = '\0';
          }
          if (*param_6 == '\0') {
            pBVar1 = *(Body **)pSVar4;
            Body__GetControllableComponent_Memoize(pBVar1);
            if ((pBVar1->GetControllableComponent_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            pRVar10 = (pBVar1->GetControllableComponent_MemoizedValue).Data.Controller;
            if ((pRVar10 != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid(pRVar10), !bVar2)) {
              (pBVar1->GetControllableComponent_MemoizedValue).Data.Pointer =
                   (ControllableComponent *)0x0;
            }
            bVar2 = ControllableComponent__IsMarkedAsSeparatingFromFleet((pBVar1->GetControllableComponent_MemoizedValue).Data.Pointer);
            if (!bVar2) goto LAB_007569cf;
          }
          else {
LAB_007569cf:
            if (local_d == '\0') {
              util__Darray_class_util__SharedPtr_struct_UIWidget_____Add(param_7,pSVar4);
              pBVar1 = *(Body **)pSVar4;
              Body__GetControllableComponent_Memoize(pBVar1);
              if ((pBVar1->GetControllableComponent_MemoizedValue).IsValidData == false) {
                util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                                0x13,"IsValid()",(char *)0x0);
                DebugBreak();
              }
              pRVar10 = (pBVar1->GetControllableComponent_MemoizedValue).Data.Controller;
              if ((pRVar10 != (ReferenceController *)0x0) &&
                 (bVar2 = util__ReferenceController__IsDataStillValid(pRVar10), !bVar2)) {
                (pBVar1->GetControllableComponent_MemoizedValue).Data.Pointer =
                     (ControllableComponent *)0x0;
              }
              ControllableComponent__MarkAsShouldSplitFromMainFleet((pBVar1->GetControllableComponent_MemoizedValue).Data.Pointer,false);
              goto LAB_00756a78;
            }
          }
          if (((*param_2 != 0) && ((ReferenceController *)param_2[1] != (ReferenceController *)0x0))
             && (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), bVar2)) {
            uVar9 = *(undefined4 *)pSVar4;
            pRVar10 = *(ReferenceController **)(pSVar4 + 4);
            if (pRVar10 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar10);
            }
            if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar2)) {
              *param_2 = 0;
            }
            Fleet__KillBody((Fleet *)*param_2,uVar9,pRVar10);
          }
        }
      }
LAB_00756a78:
      param_1 = local_14;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_14 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000756dc0 00756dc0_FUN_00756dc0 ====
void FUN_00756dc0(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 00756dc0 name=FUN_00756dc0 conv=unknown body=468

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00756dc0(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  CelestialObject *this;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined1 local_108[16];
  ReferenceController *local_f8;
  undefined **local_f0;
  void *local_ec;
  undefined **local_a8;
  void *local_a4;
  int *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  local_18 = param_1;
  local_10 = 0;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
         !bVar1)) {
        *piVar3 = 0;
      }
      this = (CelestialObject *)*piVar3;
      CelestialObject__IsGameplayRelevant_Memoize(this);
      if ((this->IsGameplayRelevant_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((this->IsGameplayRelevant_MemoizedValue).Data == false) {
LAB_00756ea1:
        bVar1 = false;
      }
      else {
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        bVar1 = CelestialObject__HasVisibleOrbit((CelestialObject *)*piVar3);
        if (!bVar1) goto LAB_00756ea1;
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        local_10 = uVar4 | 1;
        iVar2 = (*(code *)**(undefined4 **)(*piVar3 + 8))(local_108);
        if (*(char *)(iVar2 + 0xe8) == '\0') goto LAB_00756ea1;
        bVar1 = true;
      }
      if ((local_10 & 1) != 0) {
        local_10 = local_10 & 0xfffffffe;
        local_a8 = ((void *)(0x009194a4u));
        if (local_a4 != (void *)0x0) {
          operator_delete__(local_a4);
        }
        local_a4 = (void *)0x0;
        local_a8 = ((void *)(0x00919488u));
        local_f0 = ((void *)(0x00919980u));
        if (local_ec != (void *)0x0) {
          operator_delete__(local_ec);
          local_ec = (void *)0x0;
        }
        if (local_f8 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_f8);
        }
      }
      if (bVar1) {
        iVar2 = *(int *)(param_3 + 8);
        local_14 = iVar2 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_14);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar2);
        if (bVar1) {
          this_00 = *(ReferenceController **)
                     (*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 8);
          iVar2 = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8;
          *(int *)(iVar2 + -8) = *piVar3;
          this_01 = (ReferenceController *)piVar3[1];
          *(ReferenceController **)(iVar2 + -4) = this_01;
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_01);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
        }
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_18 + 0xc))();
      uVar4 = local_10;
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000757340 00757340_FUN_00757340 ====
void FUN_00757340(int *param_1,undefined4 *param_2,undefined4 *param_3,double *param_4);

// decompiled by BatchDecomp @ 00757340 name=FUN_00757340 conv=unknown body=418

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00757340(int *param_1,undefined4 *param_2,undefined4 *param_3,double *param_4)

{
  double *pdVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Vec3_L_double_G_ *pVVar5;
  Maybe_L_double_G_ *pMVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int *piVar11;
  Vec3_L_double_G_ local_50;
  Maybe_L_double_G_ local_38;
  int *local_28;
  undefined8 local_24;
  Maybe_L_double_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar11 = &local_c;
      puVar4 = (undefined4 *)(**(code **)*param_1)();
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      CelestialObject__GetStabilityRegionRadius_km((CelestialObject *)*puVar4,&local_1c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pdVar1 = (double *)param_2[1];
      pVVar5 = CelestialObject__GetPositionAt_km((CelestialObject *)*puVar4,&local_50,
                          (double)CONCAT44(piVar11,(int)((ulonglong)*(undefined8 *)*param_2 >> 0x20)
                                          ));
      dVar10 = pVVar5->Y - pdVar1[1];
      dVar9 = pVVar5->X - *pdVar1;
      dVar8 = pVVar5->Z - pdVar1[2];
      local_24 = dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8;
      pMVar6 = util__Sqrt(&local_38,(double *)&local_24);
      if (pMVar6->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (((local_1c.IsValidData != false) &&
          (pMVar6->Data <= local_1c.Data && local_1c.Data != pMVar6->Data)) &&
         ((*(char *)(param_3 + 2) == '\0' || (local_1c.Data < *param_4)))) {
        this = (ReferenceController *)puVar4[1];
        local_24 = (double)CONCAT44(*puVar4,(undefined4)local_24);
        uVar7 = *puVar4;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
          uVar7 = ((slice_view *)&local_24)->_4_4_;
        }
        this_00 = (ReferenceController *)param_3[1];
        *param_3 = uVar7;
        param_3[1] = this;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        *(undefined1 *)(param_3 + 2) = 1;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        *param_4 = local_1c.Data;
      }
      param_1 = local_28;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_28 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000757920 00757920_FUN_00757920 ====
void FUN_00757920(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 00757920 name=FUN_00757920 conv=unknown body=410

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00757920(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  ReferenceController *pRVar1;
  int iVar2;
  ReferenceController *this;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  Faction *pFVar8;
  undefined1 local_10c[16];
  ReferenceController *local_fc;
  undefined **local_f4;
  void *local_f0;
  undefined **local_ac;
  void *local_a8;
  int *local_1c;
  int local_18;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  local_1c = param_1;
  local_14 = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)0x0;
  local_c = 0;
  iVar6 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar6) {
    do {
      piVar7 = (int *)(**(code **)*param_1)(&local_c);
      pRVar1 = (ReferenceController *)piVar7[1];
      if (((ReferenceController *)((int *)*param_2)[1] == pRVar1) && (*(int *)*param_2 == *piVar7))
      {
LAB_007579c7:
        local_d = '\0';
      }
      else {
        if ((pRVar1 != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar4)) {
          *piVar7 = 0;
        }
        pFVar8 = Fleet__GetAlliance((Fleet *)*piVar7);
        if (pFVar8 == (Faction *)0x0) goto LAB_007579c7;
        if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
           !bVar5)) {
          *piVar7 = 0;
        }
        bVar5 = true;
        iVar6 = (*(code *)**(undefined4 **)(*piVar7 + 8))(local_10c);
        local_d = '\x01';
        if (*(char *)(iVar6 + 0xe8) == '\0') goto LAB_007579c7;
      }
      if (bVar5) {
        bVar5 = false;
        local_ac = ((void *)(0x009194a4u));
        if (local_a8 != (void *)0x0) {
          operator_delete__(local_a8);
        }
        local_a8 = (void *)0x0;
        local_ac = ((void *)(0x00919488u));
        local_f4 = ((void *)(0x00919980u));
        if (local_f0 != (void *)0x0) {
          operator_delete__(local_f0);
          local_f0 = (void *)0x0;
        }
        if (local_fc != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_fc);
        }
      }
      if (local_d != '\0') {
        local_14 = param_3;
        iVar6 = *(int *)(param_3 + 8);
        local_18 = iVar6 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_18);
        pDVar3 = local_14;
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_14,iVar6);
        if (bVar4) {
          iVar2 = *(int *)(pDVar3 + 8);
          iVar6 = *(int *)(pDVar3 + 4);
          pRVar1 = *(ReferenceController **)(iVar6 + -4 + iVar2 * 8);
          iVar6 = iVar6 + iVar2 * 8;
          *(int *)(iVar6 + -8) = *piVar7;
          this = (ReferenceController *)piVar7[1];
          *(ReferenceController **)(iVar6 + -4) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (pRVar1 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar1);
          }
        }
      }
      param_1 = local_1c;
      local_c = local_c + 1;
      iVar6 = (**(code **)(*local_1c + 0xc))();
    } while (local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000757ac0 00757ac0_FUN_00757ac0 ====
void FUN_00757ac0(int *param_1,undefined4 *param_2,undefined4 *param_3,double *param_4);

// decompiled by BatchDecomp @ 00757ac0 name=FUN_00757ac0 conv=unknown body=553

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00757ac0(int *param_1,undefined4 *param_2,undefined4 *param_3,double *param_4)

{
  Fleet *this;
  Fleet *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_64[48];
  undefined8 local_34;
  undefined8 local_2c;
  int *local_24;
  undefined4 *local_20;
  double local_1c;
  char local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_20 = puVar3;
      if (*(ReferenceController **)(param_2[4] + 4) != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(*(ReferenceController **)(param_2[4] + 4));
      }
      if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference((ReferenceController *)puVar3[1]);
      }
      if (*(ReferenceController **)(param_2[1] + 4) != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(*(ReferenceController **)(param_2[1] + 4));
      }
      puVar3 = (undefined4 *)param_2[1];
      if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
        if (!bVar1) {
          *puVar3 = 0;
        }
      }
      this = (Fleet *)*puVar3;
      puVar3 = (undefined4 *)param_2[1];
      if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
        if (!bVar1) {
          *puVar3 = 0;
        }
      }
      this_00 = (Fleet *)*puVar3;
      local_2c = *(undefined8 *)param_2[2];
      local_34 = *(undefined8 *)param_2[3];
      puVar3 = (undefined4 *)Fleet__GetStateAt(this,(double)CONCAT44((int)local_2c,local_64));
      puVar4 = (undefined4 *)Fleet__GetCurrentState(this_00);
      Astrogation__GetTimeOfBattle_s(&local_1c,*param_2,*puVar4,puVar4[1],puVar4[2],puVar4[3],puVar4[4],puVar4[5],
                 puVar4[6],puVar4[7],puVar4[8],puVar4[9],puVar4[10],puVar4[0xb],*puVar3,puVar3[1],
                 puVar3[2],puVar3[3],puVar3[4],puVar3[5],puVar3[6],puVar3[7],puVar3[8],puVar3[9],
                 puVar3[10],puVar3[0xb],(int)local_34,(int)((ulonglong)local_34 >> 0x20),
                 (int)local_2c,(int)((ulonglong)local_2c >> 0x20));
      if ((local_14 != '\0') && ((*(char *)(param_3 + 2) == '\0' || (local_1c < *param_4)))) {
        puVar3 = (undefined4 *)*local_20;
        this_01 = (ReferenceController *)local_20[1];
        local_20 = puVar3;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_01);
        }
        this_02 = (ReferenceController *)param_3[1];
        *param_3 = local_20;
        param_3[1] = this_01;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_01);
        }
        if (this_02 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_02);
        }
        *(undefined1 *)(param_3 + 2) = 1;
        if (this_01 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_01);
        }
        if (local_14 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        *param_4 = local_1c;
      }
      param_1 = local_24;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_24 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000758480 00758480_FUN_00758480 ====
void FUN_00758480(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 00758480 name=FUN_00758480 conv=unknown body=430

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00758480(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  Body *pBVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar3)) {
        *piVar5 = 0;
      }
      iVar4 = *piVar5;
      if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)),
         !bVar3)) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      pBVar1 = *(Body **)(iVar4 + 4);
      Body__GetCapitalShipComponent_Memoize(pBVar1);
      if ((pBVar1->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer !=
            (CapitalShipComponent *)0x0) &&
          (pRVar2 = (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Controller,
          pRVar2 != (ReferenceController *)0x0)) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), bVar3)) {
        if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
           !bVar3)) {
          *piVar5 = 0;
        }
        iVar4 = *piVar5;
        if ((*(ReferenceController **)(iVar4 + 8) != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar4 + 8)), !bVar3)) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        pBVar1 = *(Body **)(iVar4 + 4);
        Body__GetCapitalShipComponent_Memoize(pBVar1);
        if ((pBVar1->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar2 = (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Controller;
        if ((pRVar2 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar3)) {
          (pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer = (CapitalShipComponent *)0x0
          ;
        }
        bVar3 = CapitalShipComponent__HasBeenDamaged((pBVar1->GetCapitalShipComponent_MemoizedValue).Data.Pointer);
        if (bVar3) {
          iVar4 = *(int *)(param_3 + 8);
          local_10 = iVar4 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_10);
          bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar4);
          if (bVar3) {
            pRVar2 = *(ReferenceController **)
                      (*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 8);
            iVar4 = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8;
            *(int *)(iVar4 + -8) = *piVar5;
            this = (ReferenceController *)piVar5[1];
            *(ReferenceController **)(iVar4 + -4) = this;
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this);
            }
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar2);
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000759770 00759770_FUN_00759770 ====
void FUN_00759770(undefined4 *param_1,int *param_2,undefined4 *param_3);

// decompiled by BatchDecomp @ 00759770 name=FUN_00759770 conv=unknown body=389

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00759770(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  ReferenceController *pRVar4;
  ReferenceController *pRVar5;
  undefined4 uVar6;
  ReferenceController *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = (ReferenceController *)0x0;
  local_20 = param_3;
  local_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar2 = (**(code **)(*param_2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar2);
  local_c = 0;
  iVar2 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar2) {
    do {
      puVar3 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]),
         !bVar1)) {
        *puVar3 = 0;
      }
      bVar1 = CelestialObject__UsesBodyTemplate((CelestialObject *)*puVar3,(CelestialBody *)*local_20);
      iVar2 = iStack_14;
      if (bVar1) {
        local_24 = (ReferenceController *)(iStack_14 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,(int *)&local_24);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar2);
        if (bVar1) {
          pRVar4 = (ReferenceController *)puStack_18[iStack_14 * 2 + -1];
          puStack_18[iStack_14 * 2 + -2] = *puVar3;
          pRVar5 = (ReferenceController *)puVar3[1];
          puStack_18[iStack_14 * 2 + -1] = pRVar5;
          if (pRVar5 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar5);
          }
          if (pRVar4 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar4);
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar2);
  }
  if (1 < iStack_14) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0x10e,"FilteredArray.Num() <= 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_14 < 1) {
    uVar6 = 0;
    bVar1 = false;
    pRVar4 = (ReferenceController *)0x0;
    pRVar5 = local_24;
  }
  else {
    pRVar4 = (ReferenceController *)puStack_18[1];
    uVar6 = *puStack_18;
    if (pRVar4 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar4);
    }
    bVar1 = true;
    pRVar5 = pRVar4;
  }
  *param_1 = uVar6;
  param_1[1] = pRVar4;
  if (pRVar4 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar4);
  }
  if ((pRVar5 != (ReferenceController *)0x0) && (bVar1)) {
    util__ReferenceController__ReleaseWeakReference(pRVar5);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000759a80 00759a80_FUN_00759a80 ====
void FUN_00759a80(undefined4 *param_1,int *param_2,int *param_3);

// decompiled by BatchDecomp @ 00759a80 name=FUN_00759a80 conv=unknown body=424

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00759a80(undefined4 *param_1,int *param_2,int *param_3)

{
  Faction *pFVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  Faction *pFVar5;
  ReferenceController *pRVar6;
  ReferenceController *pRVar7;
  undefined4 uVar8;
  ReferenceController *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = (ReferenceController *)0x0;
  local_20 = param_3;
  local_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_2)(&local_c);
      if (((*piVar4 != 0) && ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0)) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         bVar2)) {
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar2)) {
          *piVar4 = 0;
        }
        pFVar1 = *(Faction **)(*local_20 + 0x1e0);
        pFVar5 = Fleet__GetAlliance((Fleet *)*piVar4);
        iVar3 = iStack_14;
        if (pFVar5 == pFVar1) {
          local_24 = (ReferenceController *)(iStack_14 + 1);
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,(int *)&local_24);
          bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
          if (bVar2) {
            pRVar6 = (ReferenceController *)puStack_18[iStack_14 * 2 + -1];
            puStack_18[iStack_14 * 2 + -2] = *piVar4;
            pRVar7 = (ReferenceController *)piVar4[1];
            puStack_18[iStack_14 * 2 + -1] = pRVar7;
            if (pRVar7 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar7);
            }
            if (pRVar6 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar6);
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (1 < iStack_14) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0x10e,"FilteredArray.Num() <= 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_14 < 1) {
    uVar8 = 0;
    bVar2 = false;
    pRVar6 = (ReferenceController *)0x0;
    pRVar7 = local_24;
  }
  else {
    pRVar6 = (ReferenceController *)puStack_18[1];
    uVar8 = *puStack_18;
    if (pRVar6 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar6);
    }
    bVar2 = true;
    pRVar7 = pRVar6;
  }
  *param_1 = uVar8;
  param_1[1] = pRVar6;
  if (pRVar6 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(pRVar6);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000759c30 00759c30_FUN_00759c30 ====
void FUN_00759c30(int *param_1,undefined1 param_2);

// decompiled by BatchDecomp @ 00759c30 name=FUN_00759c30 conv=unknown body=422

void FUN_00759c30(int *param_1,undefined1 param_2)

{
  bool bVar1;
  int iVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  int *local_2c;
  int *local_28;
  int local_24;
  undefined **local_20;
  void *pvStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  local_2c = param_1;
  local_20 = (undefined **)0x0;
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  util__Darray_class_Manager____Darray_class_Manager((Darray_L_class_Manager_P_G_ *)&local_20,iVar2);
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      local_28 = (int *)(**(code **)*param_1)(&local_c);
      iVar2 = *local_28;
      pSVar3 = util__FUN_00759c30(&local_44,&GlobalLevel);
      pSVar4 = util__FUN_00759c30(&local_38,(Str_L_char_G_ *)(iVar2 + 4));
      if (pSVar4->Length == pSVar3->Length) {
        if (pSVar4->Capacity < 1) {
          pcVar5 = "";
        }
        else {
          pcVar5 = pSVar4->Data;
        }
        if (pSVar3->Capacity < 1) {
          pcVar7 = "";
        }
        else {
          pcVar7 = pSVar3->Data;
        }
        cVar6 = *pcVar5;
        if (cVar6 != '\0') {
          iVar2 = (int)pcVar7 - (int)pcVar5;
          do {
            if (cVar6 != pcVar5[iVar2]) goto LAB_00759cb7;
            cVar6 = pcVar5[1];
            pcVar5 = pcVar5 + 1;
          } while (cVar6 != '\0');
        }
        bVar1 = true;
      }
      else {
LAB_00759cb7:
        bVar1 = false;
      }
      if (local_38.Data != (char *)0x0) {
        operator_delete__(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      if (local_44.Data != (char *)0x0) {
        operator_delete__(local_44.Data);
        local_44.Data = (char *)0x0;
      }
      iVar2 = iStack_18;
      if (bVar1) {
        local_24 = iStack_18 + 1;
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_20,&local_24);
        bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_20,iVar2);
        if (bVar1) {
          *(int *)((int)pvStack_1c + iStack_18 * 4 + -4) = *local_28;
        }
      }
      param_1 = local_2c;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_2c + 0xc))();
    } while (local_c < iVar2);
  }
  if (iStack_18 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x38,
                    "FilteredArray.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_18 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  local_20 = ((void *)(0x009194a4u));
  operator_delete__(pvStack_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000075c8f0 0075c8f0_FUN_0075c8f0 ====
void __thiscall FUN_0075c8f0(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 0075c8f0 name=FUN_0075c8f0 conv=unknown body=618

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_0075c8f0(undefined4 *param_1,int *param_2)

{
  Faction *pFVar1;
  Fleet *this;
  Body *this_00;
  ReferenceController *this_01;
  double *pdVar2;
  bool bVar3;
  bool bVar4;
  Faction *pFVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  Maybe_L_double_G_ *pMVar9;
  code *pcVar10;
  Maybe_L_double_G_ local_68;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_58[16];
  undefined8 local_48;
  undefined1 local_3d;
  double local_24;
  double local_1c;
  double local_14;
  Fleet *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar4 = false;
  local_c = (Fleet *)0x0;
  local_48 = (double)CONCAT44(param_1,(undefined4)local_48);
  if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), !bVar3
     )) {
    *param_2 = 0;
  }
  Fleet__GetCurrentState((Fleet *)*param_2);
  if (((*param_2 != 0) && ((ReferenceController *)param_2[1] != (ReferenceController *)0x0)) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]), bVar3)
     ) {
    if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
       !bVar3)) {
      *param_2 = 0;
    }
    pFVar1 = *(Faction **)(*(int *)*param_1 + 0x1e0);
    pFVar5 = Fleet__GetAlliance((Fleet *)*param_2);
    if (pFVar5 == pFVar1) {
      if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
         !bVar3)) {
        *param_2 = 0;
      }
      this = (Fleet *)*param_2;
      local_c = this;
      Fleet__GetRemainingDeltaV_km__s_Memoize(this);
      pcVar10 = DebugBreak_exref;
      if ((this->GetRemainingDeltaV_km__s_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (/*0000000000000000*/0.0 < (local_c->GetRemainingDeltaV_km__s_MemoizedValue).Data) {
        if (((ReferenceController *)param_2[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]),
           !bVar4)) {
          *param_2 = 0;
        }
        piVar6 = (int *)Fleet__GetSpacecrafts((Fleet *)*param_2);
        local_c = (Fleet *)0x0;
        iVar7 = (**(code **)(*piVar6 + 0xc))();
        if ((int)local_c < iVar7) {
          do {
            piVar8 = (int *)(**(code **)*piVar6)(&local_c);
            if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
               (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]), !bVar4)) {
              *piVar8 = 0;
            }
            iVar7 = *piVar8;
            if ((*(ReferenceController **)(iVar7 + 8) != (ReferenceController *)0x0) &&
               (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar7 + 8)), !bVar4)) {
              *(undefined4 *)(iVar7 + 4) = 0;
            }
            this_00 = *(Body **)(iVar7 + 4);
            Body__GetControllableComponent_Memoize(this_00);
            if ((this_00->GetControllableComponent_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            this_01 = (this_00->GetControllableComponent_MemoizedValue).Data.Controller;
            if ((this_01 != (ReferenceController *)0x0) &&
               (bVar4 = util__ReferenceController__IsDataStillValid(this_01), !bVar4)) {
              (this_00->GetControllableComponent_MemoizedValue).Data.Pointer =
                   (ControllableComponent *)0x0;
            }
            bVar4 = ControllableComponent__IsMarkedAsSeparatingFromFleet((this_00->GetControllableComponent_MemoizedValue).Data.Pointer);
            if (!bVar4) {
              bVar4 = true;
              goto LAB_0075cb32;
            }
            local_c = (Fleet *)((int)&local_c->_pad_0x0_0 + 1);
            iVar7 = (**(code **)(*piVar6 + 0xc))();
            pcVar10 = DebugBreak_exref;
          } while ((int)local_c < iVar7);
        }
        pdVar2 = *(double **)(((slice_view *)&local_48)->_4_4_ + 4);
        local_48 = (pdVar2[1] - local_1c) * (pdVar2[1] - local_1c) +
                   (*pdVar2 - local_24) * (*pdVar2 - local_24) +
                   (pdVar2[2] - local_14) * (pdVar2[2] - local_14);
        pMVar9 = util__Sqrt(&local_68,(double *)&local_48);
        if (pMVar9->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar10)();
        }
        bVar4 = true;
        if (pMVar9->Data <= /*3fc999999999999a*/0.2) {
          local_3d = 1;
          goto LAB_0075cb34;
        }
      }
    }
  }
LAB_0075cb32:
  local_3d = 0;
LAB_0075cb34:
  if (bVar4) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000075d6b0 0075d6b0_FUN_0075d6b0 ====
void __thiscall FUN_0075d6b0(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 0075d6b0 name=FUN_0075d6b0 conv=unknown body=421

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FUN_0075d6b0(undefined4 *param_1,int *param_2)

{
  Faction *pFVar1;
  double *pdVar2;
  bool bVar3;
  bool bVar4;
  Faction *pFVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  Maybe_L_double_G_ *pMVar9;
  Maybe_L_double_G_ local_68;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_58[16];
  undefined8 local_48;
  undefined1 local_3d;
  double local_24;
  double local_1c;
  double local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar4 = false;
  local_c = 0;
  local_48 = (double)CONCAT44(param_1,(undefined4)local_48);
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar3) {
      *param_2 = 0;
    }
  }
  Fleet__GetCurrentState((Fleet *)*param_2);
  if ((*param_2 != 0) && ((ReferenceController *)param_2[1] != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (bVar3) {
      if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
        if (!bVar3) {
          *param_2 = 0;
        }
      }
      pFVar1 = *(Faction **)(*(int *)*param_1 + 0x1e0);
      pFVar5 = Fleet__GetAlliance((Fleet *)*param_2);
      if (pFVar5 == pFVar1) {
        if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
          bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
          if (!bVar4) {
            *param_2 = 0;
          }
        }
        piVar6 = (int *)Fleet__GetSpacecrafts((Fleet *)*param_2);
        local_c = 0;
        iVar7 = (**(code **)(*piVar6 + 0xc))();
        if (local_c < iVar7) {
          do {
            puVar8 = (undefined4 *)(**(code **)*piVar6)(&local_c);
            if ((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) {
              bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]);
              if (!bVar4) {
                *puVar8 = 0;
              }
            }
            bVar4 = SpacecraftComponent__HasNoDeltaVButUsedTo((SpacecraftComponent *)*puVar8);
            if (!bVar4) {
              bVar4 = true;
              goto LAB_0075d82d;
            }
            local_c = local_c + 1;
            iVar7 = (**(code **)(*piVar6 + 0xc))();
          } while (local_c < iVar7);
        }
        pdVar2 = *(double **)(((slice_view *)&local_48)->_4_4_ + 4);
        local_48 = (*pdVar2 - local_24) * (*pdVar2 - local_24) +
                   (pdVar2[1] - local_1c) * (pdVar2[1] - local_1c) +
                   (pdVar2[2] - local_14) * (pdVar2[2] - local_14);
        pMVar9 = util__Sqrt(&local_68,(double *)&local_48);
        if (pMVar9->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        bVar4 = true;
        if (pMVar9->Data <= /*3fc999999999999a*/0.2) {
          local_3d = 1;
          goto LAB_0075d82f;
        }
      }
    }
  }
LAB_0075d82d:
  local_3d = 0;
LAB_0075d82f:
  if (bVar4) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_58);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007765f0 007765f0_GetDropdownSelected ====
// decompiled by BatchDecomp @ 007765f0 name=GetDropdownSelected conv=__thiscall body=604

/* WARNING: Function: _chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x007766ec) */
/* WARNING: Removing unreachable block (ram,0x007766fc) */
/* WARNING: Removing unreachable block (ram,0x00776701) */
/* WARNING: Removing unreachable block (ram,0x00776716) */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: struct ActorDropdownAction __thiscall ActorDropdown__GetDropdownSelected(void)const  */

ActorDropdownAction * __thiscall
ActorDropdown__GetDropdownSelected(ActorDropdown *this,ActorDropdownAction *__return_storage_ptr__)

{
  MarkedAsSelected MVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  WorldObject *pWVar9;
  ActorDropdownAction *pAVar10;
  bool bVar11;
  WorldObject local_18e0;
  WorldObject local_1628;
  WorldObject local_1370;
  ActorDropdownAction local_10b8;
  ActorDropdownAction local_df0;
  ActorDropdownAction local_b28;
  ActorDropdownAction local_860;
  ActorDropdownAction local_598;
  ActorDropdownAction local_2d0;
  undefined4 local_8;
  
  MVar1 = this->Marking;
  local_8 = 0;
  if (MVar1 == Selection) {
    pWVar9 = StrategicManager__GetSelectedObject(this->ParentManager,&local_18e0);
    pAVar10 = (ActorDropdownAction *)ActorDropdownAction__ActorDropdownAction(&local_10b8,pWVar9);
    bVar8 = false;
    bVar7 = true;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = false;
    bVar11 = false;
    bVar2 = true;
  }
  else {
    if (MVar1 == CameraCenter) {
      pWVar9 = StrategicManager__GetCameraFocusedObject(this->ParentManager,&local_1628);
      pAVar10 = (ActorDropdownAction *)ActorDropdownAction__ActorDropdownAction(&local_df0,pWVar9);
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      bVar3 = false;
      bVar11 = false;
    }
    else {
      bVar11 = MVar1 != FrameOfReference;
      if (bVar11) {
        pAVar10 = (ActorDropdownAction *)ActorDropdownAction__ActorDropdownAction(&local_860);
      }
      else {
        pWVar9 = StrategicManager__GetReferenceObject(this->ParentManager,&local_1370);
        pAVar10 = (ActorDropdownAction *)ActorDropdownAction__ActorDropdownAction(&local_b28,pWVar9)
        ;
      }
      bVar6 = false;
      bVar5 = false;
      bVar4 = !bVar11;
      bVar3 = !bVar11;
      pAVar10 = (ActorDropdownAction *)ActorDropdownAction__ActorDropdownAction(&local_598,pAVar10);
    }
    bVar8 = true;
    bVar7 = false;
    bVar2 = false;
    pAVar10 = (ActorDropdownAction *)ActorDropdownAction__ActorDropdownAction(&local_2d0,pAVar10);
  }
  ActorDropdownAction__ActorDropdownAction(__return_storage_ptr__,pAVar10);
  if (bVar8) {
    if (local_2d0.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d0.AdditionalFleet.Controller);
    }
    NodeMouseOver_NodeMouseOver(&local_2d0.Data.Node);
    if (local_2d0.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_2d0.Data.Object.Controller);
    }
  }
  if (bVar11) {
    if (local_860.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_860.AdditionalFleet.Controller);
    }
    NodeMouseOver_NodeMouseOver(&local_860.Data.Node);
    if (local_860.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_860.Data.Object.Controller);
    }
  }
  if (bVar3) {
    if (local_b28.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_b28.AdditionalFleet.Controller);
    }
    NodeMouseOver_NodeMouseOver(&local_b28.Data.Node);
    if (local_b28.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_b28.Data.Object.Controller);
    }
  }
  if ((bVar4) &&
     (NodeMouseOver_NodeMouseOver(&local_1370.Node),
     local_1370.Object.Controller != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_1370.Object.Controller);
  }
  if (bVar5) {
    if (local_df0.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_df0.AdditionalFleet.Controller);
    }
    NodeMouseOver_NodeMouseOver(&local_df0.Data.Node);
    if (local_df0.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_df0.Data.Object.Controller);
    }
  }
  if ((bVar6) &&
     (NodeMouseOver_NodeMouseOver(&local_1628.Node),
     local_1628.Object.Controller != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_1628.Object.Controller);
  }
  if (bVar7) {
    if (local_10b8.AdditionalFleet.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_10b8.AdditionalFleet.Controller);
    }
    NodeMouseOver_NodeMouseOver(&local_10b8.Data.Node);
    if (local_10b8.Data.Object.Controller != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_10b8.Data.Object.Controller);
    }
  }
  if ((bVar2) &&
     (NodeMouseOver_NodeMouseOver(&local_18e0.Node),
     local_18e0.Object.Controller != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_18e0.Object.Controller);
  }
  return __return_storage_ptr__;
}


//==== 0000785650 00785650_FUN_00785650 ====
void FUN_00785650(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int param_3);

// decompiled by BatchDecomp @ 00785650 name=FUN_00785650 conv=unknown body=445

void FUN_00785650(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ReferenceController *pRVar3;
  ReferenceController *this;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar9 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar7 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      puVar4 = puVar7;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    iVar11 = 0;
    *(uint **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar2 = *(int *)(param_1 + 4);
        pRVar3 = *(ReferenceController **)(iVar2 + 4 + iVar11 * 8);
        *(undefined4 *)(iVar2 + iVar11 * 8) = 0;
        *(undefined4 *)(iVar2 + 4 + iVar11 * 8) = 0;
        if (pRVar3 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar3);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar11 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar11) {
    do {
      piVar8 = (int *)(**(code **)*param_2)(&local_c);
      piVar10 = *(int **)(param_3 + 4);
      piVar1 = piVar10 + *(int *)(param_3 + 8) * 2;
      if (piVar10 != piVar1) {
        do {
          if ((piVar8[1] == piVar10[1]) && (*piVar8 == *piVar10)) {
            iVar11 = *(int *)(param_1 + 8);
            local_10 = iVar11 + 1;
            util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
            bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar11);
            if (bVar5) {
              pRVar3 = *(ReferenceController **)
                        (*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
              iVar11 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
              *(int *)(iVar11 + -8) = *piVar8;
              this = (ReferenceController *)piVar8[1];
              *(ReferenceController **)(iVar11 + -4) = this;
              if (this != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this);
              }
              if (pRVar3 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(pRVar3);
              }
            }
            break;
          }
          piVar10 = piVar10 + 2;
        } while (piVar10 != piVar1);
      }
      local_c = local_c + 1;
      iVar11 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000078ae00 0078ae00_FUN_0078ae00 ====
void FUN_0078ae00(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int param_3);

// decompiled by BatchDecomp @ 0078ae00 name=FUN_0078ae00 conv=unknown body=490

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0078ae00(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2,int param_3)

{
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  Faction *pFVar8;
  Faction *pFVar9;
  uint uVar10;
  int iVar11;
  Fleet *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar5 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  if (((int)uVar5 < 0) || (0x3fffffff < (int)uVar5)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar5) {
    uVar10 = -(uint)((int)((ulonglong)uVar5 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 8);
    puVar6 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar10) | uVar10 + 4);
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)0x0;
    }
    else {
      *puVar6 = uVar5;
      puVar6 = puVar6 + 1;
      puVar3 = puVar6;
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar11 = 0;
    *(uint **)(param_1 + 4) = puVar6;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar11 * 8);
        *(undefined4 *)(iVar1 + iVar11 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar11 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar11 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar11) {
    do {
      puVar7 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]),
         !bVar4)) {
        *puVar7 = 0;
      }
      local_10 = (Fleet *)*puVar7;
      if ((*(ReferenceController **)(param_3 + 0x49c) != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_3 + 0x49c)), !bVar4)) {
        *(undefined4 *)(param_3 + 0x498) = 0;
      }
      pFVar8 = Fleet__GetAlliance(*(Fleet **)(param_3 + 0x498));
      pFVar9 = Fleet__GetAlliance(local_10);
      if (pFVar9 != pFVar8) {
        iVar11 = *(int *)(param_1 + 8);
        local_10 = (Fleet *)(iVar11 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,(int *)&local_10);
        bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar11);
        if (bVar4) {
          pRVar2 = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8)
          ;
          iVar11 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          *(undefined4 *)(iVar11 + -8) = *puVar7;
          this = (ReferenceController *)puVar7[1];
          *(ReferenceController **)(iVar11 + -4) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
          }
        }
      }
      local_c = local_c + 1;
      iVar11 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000078aff0 0078aff0_FUN_0078aff0 ====
void FUN_0078aff0(undefined4 *param_1,int *param_2,int param_3);

// decompiled by BatchDecomp @ 0078aff0 name=FUN_0078aff0 conv=unknown body=637

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0078aff0(undefined4 *param_1,int *param_2,int param_3)

{
  double dVar1;
  Fleet *this;
  bool bVar2;
  bool bVar3;
  ReferenceController *this_00;
  bool bVar4;
  int iVar5;
  int *piVar6;
  double *pdVar7;
  ReferenceController *pRVar8;
  double dVar9;
  ReferenceController *local_3c;
  double local_38;
  ReferenceController local_30;
  ReferenceController *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30.Pointer = param_1;
  local_24 = (ReferenceController *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar5) {
    do {
      piVar6 = (int *)(**(code **)*param_2)(&local_c);
      pRVar8 = (ReferenceController *)piVar6[1];
      if ((*(ReferenceController **)(param_3 + 0x49c) != pRVar8) ||
         (dVar9 = local_20, *(int *)(param_3 + 0x498) != *piVar6)) {
        if ((pRVar8 != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid(pRVar8), !bVar4)) {
          *piVar6 = 0;
        }
        this = (Fleet *)*piVar6;
        Fleet__GetTotalTonnage_kg_Memoize(this);
        if ((this->GetTotalTonnage_kg_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        dVar1 = (this->GetTotalTonnage_kg_MemoizedValue).Data;
        if (((char)local_10 == '\0') || (dVar9 = local_20, local_20 < dVar1)) {
          local_24 = (ReferenceController *)*piVar6;
          pRVar8 = (ReferenceController *)piVar6[1];
          if (pRVar8 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar8);
          }
          this_00 = ((slice_view *)&local_18)->_4_4_;
          local_18 = CONCAT44(pRVar8,local_24);
          if (pRVar8 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar8);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
          ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
          dVar9 = dVar1;
          if (pRVar8 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar8);
          }
        }
      }
      local_20 = dVar9;
      local_c = (double *)((int)local_c + 1);
      iVar5 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar5);
  }
  if ((char)local_10 == '\0') {
    local_3c = (ReferenceController *)0x0;
    dVar9 = 0.0;
    pdVar7 = (double *)0x0;
    pRVar8 = &local_30;
    ((slice_view *)&local_30.StrongReferenceCount)->_0_1_ = 0;
    bVar3 = false;
    bVar2 = false;
    bVar4 = true;
  }
  else {
    pRVar8 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    dVar9 = local_20;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
      dVar9 = local_20;
      util__ReferenceController__AddWeakReference(pRVar8);
      if (pRVar8 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar8);
        util__ReferenceController__ReleaseWeakReference(pRVar8);
        if (pRVar8 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar8);
        }
      }
    }
    local_3c = pRVar8;
    if (pRVar8 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar8);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = false;
    ((slice_view *)&local_30.StrongReferenceCount)->_0_1_ = 1;
    pdVar7 = local_c;
  }
  local_c = &local_38;
  local_24 = &local_30;
  *(double **)local_30.Pointer = pdVar7;
  *(ReferenceController **)((int)local_30.Pointer + 4) = local_3c;
  local_38 = dVar9;
  if (local_3c != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_3c);
  }
  *(double *)((int)local_30.Pointer + 8) = *local_c;
  *(char *)((int)local_30.Pointer + 0x10) = (char)local_24->StrongReferenceCount;
  if ((bVar4) && (local_3c != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_3c);
  }
  if ((bVar2) && (local_3c != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_3c);
  }
  if ((pRVar8 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(pRVar8);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000078bdc0 0078bdc0_FUN_0078bdc0 ====
void FUN_0078bdc0(int *param_1,undefined4 *param_2,int *param_3,double *param_4);

// decompiled by BatchDecomp @ 0078bdc0 name=FUN_0078bdc0 conv=unknown body=460

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0078bdc0(int *param_1,undefined4 *param_2,int *param_3,double *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Vec3_L_double_G_ VVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  CameraManager *this;
  double dVar10;
  double dVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined7 uStack_4b;
  double local_3c;
  double dStack_34;
  undefined1 local_29;
  double local_28;
  double local_20;
  char local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar7 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar7) {
    do {
      piVar8 = (int *)(**(code **)*param_1)(&local_c);
      iVar7 = (**(code **)(*(int *)*param_2 + 0xc))();
      local_10 = *piVar8;
      if (local_10 < 1) {
        local_10 = 0;
      }
      if (iVar7 + -1 <= local_10) {
        local_10 = iVar7 + -1;
      }
      piVar9 = (int *)(*(code *)**(undefined4 **)*param_2)(&local_10);
      local_29 = *(double *)param_2[1] <= *(double *)(piVar8 + 10);
      piVar1 = (int *)param_2[2];
      if (((((piVar9[1] != piVar1[1]) || (*piVar9 != *piVar1)) ||
           ((NAN(*(double *)(piVar1 + 0x1c)) || NAN(*(double *)(piVar9 + 0x1c))) ==
            (*(double *)(piVar1 + 0x1c) == *(double *)(piVar9 + 0x1c)))) ||
          ((NAN(*(double *)(piVar8 + 2)) || NAN(/*3ff0000000000000*/1.0)) ==
           (*(double *)(piVar8 + 2) == /*3ff0000000000000*/1.0))) && ((bool)local_29)) {
        iVar7 = piVar8[4];
        iVar13 = piVar8[5];
        iVar14 = piVar8[6];
        iVar15 = piVar8[7];
        uVar16 = (undefined4)*(undefined8 *)(piVar8 + 8);
        uVar17 = (undefined1)((ulonglong)*(undefined8 *)(piVar8 + 8) >> 0x20);
        pdVar12 = &local_28;
        this = Manager__GetCameras(*(Manager **)(param_2[3] + 8));
        ((slice_view *)&VVar6.X)->_4_4_ = iVar7;
        ((slice_view *)&VVar6.X)->_0_4_ = pdVar12;
        ((slice_view *)&VVar6.Y)->_0_4_ = iVar13;
        ((slice_view *)&VVar6.Y)->_4_4_ = iVar14;
        ((slice_view *)&VVar6.Z)->_0_4_ = iVar15;
        ((slice_view *)&VVar6.Z)->_4_4_ = uVar16;
        CameraManager__GetScreenPosition(this,VVar6,(bool)uVar17);
        if (local_18 != '\0') {
          local_3c = local_28 - *(double *)(param_2[3] + 0x4b0);
          dStack_34 = local_20 - *(double *)(param_2[3] + 0x4b8);
          dVar11 = util__Abs(&dStack_34);
          dStack_34 = util__Abs(&local_3c);
          dVar10 = dStack_34;
          if (dStack_34 <= dVar11) {
            dVar10 = dVar11;
          }
          if ((dVar10 <= /*4034000000000000*/20.0) &&
             (((char)param_3[0xc] == '\0' || (dVar10 < *param_4)))) {
            iVar7 = piVar8[4];
            iVar13 = piVar8[5];
            iVar14 = piVar8[6];
            iVar15 = piVar8[7];
            iVar2 = piVar8[8];
            iVar3 = piVar8[9];
            iVar4 = piVar8[10];
            iVar5 = piVar8[0xb];
            iStack_74 = (int)*(undefined8 *)(piVar8 + 2);
            iStack_70 = (int)((ulonglong)*(undefined8 *)(piVar8 + 2) >> 0x20);
            *param_3 = *piVar8;
            param_3[1] = iStack_78;
            param_3[2] = iStack_74;
            param_3[3] = iStack_70;
            param_3[4] = iVar7;
            param_3[5] = iVar13;
            param_3[6] = iVar14;
            param_3[7] = iVar15;
            param_3[8] = iVar2;
            param_3[9] = iVar3;
            param_3[10] = iVar4;
            param_3[0xb] = iVar5;
            *(ulonglong *)(param_3 + 0xc) = CONCAT71(uStack_4b,1);
            *param_4 = dVar10;
          }
        }
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000078bf90 0078bf90_FUN_0078bf90 ====
void FUN_0078bf90(int *param_1,UIWidget *param_2);

// decompiled by BatchDecomp @ 0078bf90 name=FUN_0078bf90 conv=unknown body=423

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0078bf90(int *param_1,UIWidget *param_2)

{
  ReferenceController *pRVar1;
  Type TVar2;
  _func___cdecl_Type_void_ptr *p_Var3;
  ReferenceController *this;
  SharedPtr_L_UIWidget_G_ *pSVar4;
  bool bVar5;
  int iVar6;
  ReferenceController *pRVar7;
  ReferenceControllerRegistry *pRVar8;
  Attribute_L_WidgetShape__Type_G_ *this_00;
  UIWidget *pUVar9;
  UIWidget *pUVar10;
  UIWidget *local_14;
  ReferenceController *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar6 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar6) {
    do {
      pRVar7 = (ReferenceController *)(**(code **)*param_1)(&local_c);
      pRVar1 = (ReferenceController *)pRVar7->WeakReferenceCount;
      iVar6 = pRVar7->StrongReferenceCount;
      local_10 = pRVar7;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
      }
      this_00 = &param_2[3].Attributes.HitTestShape;
      TVar2 = param_2[3].Attributes.HitTestShape.Value;
      local_14 = (UIWidget *)(TVar2 + Square);
      util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_00,(int *)&local_14);
      bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)this_00,TVar2);
      if (bVar5) {
        TVar2 = param_2[3].Attributes.HitTestShape.Value;
        p_Var3 = param_2[3].Attributes.HitTestShape.Getter.CallbackFunction;
        this = *(ReferenceController **)(p_Var3 + TVar2 * 8 + -4);
        *(int *)(p_Var3 + TVar2 * 8 + -8) = iVar6;
        *(ReferenceController **)(p_Var3 + TVar2 * 8 + -4) = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
      pUVar10 = (UIWidget *)pRVar7->StrongReferenceCount;
      local_14 = param_2;
      pRVar1 = (ReferenceController *)local_10->WeakReferenceCount;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRVar1);
      }
      iVar6 = (param_2->ChildWidgets).Size;
      local_10 = (ReferenceController *)(iVar6 + 1);
      util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&param_2->ChildWidgets,
                 (int *)&local_10);
      pUVar9 = local_14;
      bVar5 = util__Darray_class_util__SharedPtr_struct_UIWidget_____CheckSize((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)&local_14->ChildWidgets,
                         iVar6);
      if (bVar5) {
        iVar6 = (pUVar9->ChildWidgets).Size;
        pSVar4 = (pUVar9->ChildWidgets).Data;
        local_10 = pSVar4[iVar6 + -1].Controller;
        pUVar9 = pSVar4[iVar6 + -1].Pointer;
        pSVar4[iVar6 + -1].Pointer = pUVar10;
        pSVar4[iVar6 + -1].Controller = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(pRVar1);
        }
        if ((local_10 != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__ReleaseStrongReference(local_10), bVar5)) {
          if (pUVar9 != (UIWidget *)0x0) {
            (**(code **)(pUVar9->_pad_0x0_0 + 4))(1);
          }
          pRVar8 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,pUVar9);
        }
      }
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__ReleaseStrongReference(pRVar1), bVar5)) {
        if (pUVar10 != (UIWidget *)0x0) {
          (**(code **)(pUVar10->_pad_0x0_0 + 4))(1);
        }
        pRVar8 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar8,pUVar10);
      }
      UIWidget__ProperlyParentChildWidgets(local_14);
      local_c = local_c + 1;
      iVar6 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007a9e20 007a9e20_GetLookaheadTime_s ====
// decompiled by BatchDecomp @ 007a9e20 name=GetLookaheadTime_s conv=__thiscall body=506

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: virtual double __thiscall FleetUIButton__GetLookaheadTime_s(void)const  */

double __thiscall FleetUIButton__GetLookaheadTime_s(FleetUIButton *this)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  float10 extraout_ST0;
  double dVar4;
  ReferenceController *local_2c4;
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
  piVar3 = (int *)StrategicManager__GetSelectedFleet((StrategicManager *)this->_pad_0x0_0);
  if (((this->TargetFleet).Controller == (ReferenceController *)piVar3[1]) &&
     ((this->TargetFleet).Pointer == (Fleet *)*piVar3)) {
    uStack_2b8 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
  }
  else {
    if ((char)this->_pad_0x0_0 == '\0') {
      iVar1 = this->_pad_0x0_0;
      uStack_2b8 = (double)CONCAT44(iVar1 + 1,(int)uStack_2b8);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->_pad_0x0_0,(int *)((int)&uStack_2b8 + 4))
      ;
      bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->_pad_0x0_0,iVar1);
      if (bVar2) {
        *(code **)(this->_pad_0x0_0 + -4 + this->_pad_0x0_0 * 4) =
             GhostedUIButton__GetTimeSinceJ2000_s_Clear;
      }
      StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
      StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x0_0);
      if ((local_158.Parent.Pointer == (Fleet *)0x0) && (local_2b0 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
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
      if (bVar2) {
        dVar4 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
      }
      else {
        dVar4 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
      }
      uStack_2b8 = (double)CONCAT71((int7)((ulonglong)dVar4 >> 8),1);
      local_2c0 = *(undefined4 *)&dVar4;
      iStack_2bc = (int)((ulonglong)dVar4 >> 0x20);
      this->_pad_0x0_0 = local_2c0;
      this->_pad_0x0_0 = iStack_2bc;
      this->_pad_0x0_0 = (int)uStack_2b8;
      this->_pad_0x0_0 = iStack_2bc;
      if ((char)this->_pad_0x0_0 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
    }
    uStack_2b8 = *(double *)&this->_pad_0x0_0;
  }
  if (local_2c4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_2c4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007aa020 007aa020_GetLookaheadTime_s ====
// decompiled by BatchDecomp @ 007aa020 name=GetLookaheadTime_s conv=__thiscall body=412

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* protected: virtual double __thiscall GhostedUIButton__GetLookaheadTime_s(void)const  */

double __thiscall GhostedUIButton__GetLookaheadTime_s(GhostedUIButton *this)

{
  int iVar1;
  bool bVar2;
  float10 extraout_ST0;
  double dVar3;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
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
  if ((this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData == false) {
    iVar1 = (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size;
    uStack_2b8 = CONCAT44(iVar1 + 1,(undefined4)uStack_2b8);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->GhostedUIButtonMemoizationHandlerInstance,
               (int *)((int)&uStack_2b8 + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                       &this->GhostedUIButtonMemoizationHandlerInstance,iVar1);
    if (bVar2) {
      (this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Data
      [(this->GhostedUIButtonMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_55606f16, GhostedUIButton__GetTimeSinceJ2000_s_Clear);
    }
    StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
    StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x0_0);
    if ((local_158.Parent.Pointer == (Fleet *)0x0) && (local_2b0 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
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
    if (bVar2) {
      dVar3 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
    }
    else {
      dVar3 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
    }
    uStack_2b8 = CONCAT71((int7)((ulonglong)dVar3 >> 8),1);
    local_2c0 = *(undefined4 *)&dVar3;
    uStack_2bc = *(undefined4 *)((char *)&dVar3 + 4);
    *(undefined4 *)&(this->GetTimeSinceJ2000_s_MemoizedValue).Data = local_2c0;
    *(undefined4 *)((int)&(this->GetTimeSinceJ2000_s_MemoizedValue).Data + 4) = uStack_2bc;
    *(undefined4 *)&(this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData = (undefined4)uStack_2b8;
    *(undefined4 *)((char *)&(this->GetTimeSinceJ2000_s_MemoizedValue) + 0xc) = uStack_2bc;
    if ((this->GetTimeSinceJ2000_s_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007aa2b0 007aa2b0_GetRadius ====
// decompiled by BatchDecomp @ 007aa2b0 name=GetRadius conv=__thiscall body=479

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual int __thiscall CelestialObjectUIButton__GetRadius(void)const  */

int __thiscall CelestialObjectUIButton__GetRadius(CelestialObjectUIButton *this)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  double dVar3;
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
  if ((char)this->_pad_0x0_0 == '\0') {
    iVar2 = this->_pad_0x0_0;
    uStack_2b8 = (double)CONCAT44(iVar2 + 1,(int)uStack_2b8);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->_pad_0x0_0,(int *)((int)&uStack_2b8 + 4));
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->_pad_0x0_0,iVar2);
    if (bVar1) {
      *(code **)(this->_pad_0x0_0 + -4 + this->_pad_0x0_0 * 4) =
           GhostedUIButton__GetTimeSinceJ2000_s_Clear;
    }
    StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
    StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x0_0);
    if ((local_158.Parent.Pointer == (Fleet *)0x0) && (local_2b0 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
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
    if (bVar1) {
      dVar3 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
    }
    else {
      dVar3 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
    }
    uStack_2b8 = (double)CONCAT71((int7)((ulonglong)dVar3 >> 8),1);
    local_2c0 = *(undefined4 *)&dVar3;
    iStack_2bc = (int)((ulonglong)dVar3 >> 0x20);
    this->_pad_0x0_0 = local_2c0;
    this->_pad_0x0_0 = iStack_2bc;
    this->_pad_0x0_0 = (int)uStack_2b8;
    this->_pad_0x0_0 = iStack_2bc;
    if ((char)this->_pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  this_00 = (this->Object).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar1) {
      (this->Object).Pointer = (CelestialObject *)0x0;
    }
  }
  uStack_2b8 = CelestialObject__GetScreenRadius((this->Object).Pointer,*(double *)&this->_pad_0x0_0);
  iVar2 = (int)uStack_2b8 + 4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}


//==== 00007aa860 007aa860_GetUISize ====
// decompiled by BatchDecomp @ 007aa860 name=GetUISize conv=__thiscall body=462

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual double __thiscall CelestialObjectUIButton__GetUISize(void)const  */

double __thiscall CelestialObjectUIButton__GetUISize(CelestialObjectUIButton *this)

{
  int iVar1;
  ReferenceController *this_00;
  bool bVar2;
  float10 extraout_ST0;
  double dVar3;
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
  if ((char)this->_pad_0x0_0 == '\0') {
    iVar1 = this->_pad_0x0_0;
    uStack_2b8 = CONCAT44(iVar1 + 1,(int)uStack_2b8);
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->_pad_0x0_0,(int *)((int)&uStack_2b8 + 4));
    bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&this->_pad_0x0_0,iVar1);
    if (bVar2) {
      *(code **)(this->_pad_0x0_0 + -4 + this->_pad_0x0_0 * 4) =
           GhostedUIButton__GetTimeSinceJ2000_s_Clear;
    }
    StrategicManager__GetSelectedItineraryNode((StrategicManager *)this->_pad_0x0_0,&local_158);
    StrategicManager__GetHoveredItineraryNode((StrategicManager *)this->_pad_0x0_0);
    if ((local_158.Parent.Pointer == (Fleet *)0x0) && (local_2b0 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
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
    if (bVar2) {
      dVar3 = StrategicManager__GetLookaheadTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
    }
    else {
      dVar3 = StrategicManager__GetTimeSinceJ2000_s((StrategicManager *)this->_pad_0x0_0);
    }
    uStack_2b8 = CONCAT71((int7)((ulonglong)dVar3 >> 8),1);
    local_2c0 = *(undefined4 *)&dVar3;
    iStack_2bc = (int)((ulonglong)dVar3 >> 0x20);
    this->_pad_0x0_0 = local_2c0;
    this->_pad_0x0_0 = iStack_2bc;
    this->_pad_0x0_0 = (int)uStack_2b8;
    this->_pad_0x0_0 = iStack_2bc;
    if ((char)this->_pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  this_00 = (this->Object).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar2) {
      (this->Object).Pointer = (CelestialObject *)0x0;
    }
  }
  CelestialObject__GetScreenRadius((this->Object).Pointer,*(double *)&this->_pad_0x0_0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00007ad840 007ad840_FUN_007ad840 ====
void FUN_007ad840(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 007ad840 name=FUN_007ad840 conv=unknown body=447

void FUN_007ad840(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  ReferenceController *this;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091f328u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar9 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar7 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      puVar4 = puVar7;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    iVar10 = 0;
    *(uint **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      puVar8 = (undefined4 *)(**(code **)*param_2)(&local_c);
      pRVar2 = (ReferenceController *)puVar8[1];
      uVar3 = *puVar8;
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar2);
        util__ReferenceController__AddWeakReference(pRVar2);
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      iVar10 = *(int *)(param_1 + 8);
      local_10 = iVar10 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
      bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar10);
      if (bVar5) {
        iVar10 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 4);
        this = *(ReferenceController **)(iVar1 + -4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + -8 + iVar10 * 8) = uVar3;
        *(ReferenceController **)(iVar1 + -4 + iVar10 * 8) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007bb110 007bb110_FUN_007bb110 ====
void FUN_007bb110(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 007bb110 name=FUN_007bb110 conv=unknown body=623

void FUN_007bb110(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  ReferenceController *pRVar4;
  ReferenceController *pRVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  code *local_1c;
  int *local_18;
  int local_14;
  code *local_10;
  code *local_c;
  uint local_8;
  double dVar3;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (code *)*param_3;
  local_c = (code *)*param_5;
  iVar9 = *param_4;
  local_18 = param_7;
  if ((int)local_10 < iVar9) {
    do {
      if (*param_6 <= (int)local_c) break;
      puVar6 = (undefined4 *)(**(code **)*param_1)(&local_10);
      puVar7 = (undefined4 *)(**(code **)*param_1)(&local_c);
      dVar1 = *(double *)(puVar6 + 4);
      dVar2 = *(double *)(puVar7 + 4);
      dVar3 = *(double *)(puVar7 + 4);
      local_14 = *local_18;
      *local_18 = local_14 + 1;
      local_1c = *(code **)*param_2;
      if (dVar1 < dVar3 || dVar1 == dVar2) {
        puVar7 = (undefined4 *)(*local_1c)(&local_14);
        pRVar4 = (ReferenceController *)puVar7[1];
        *puVar7 = *puVar6;
        pRVar5 = (ReferenceController *)puVar6[1];
        puVar7[1] = pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar5);
        }
        if (pRVar4 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar4);
        }
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar6 + 2);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar6 + 4);
        local_10 = local_10 + 1;
      }
      else {
        puVar6 = (undefined4 *)(*local_1c)();
        pRVar4 = (ReferenceController *)puVar6[1];
        *puVar6 = *puVar7;
        pRVar5 = (ReferenceController *)puVar7[1];
        puVar6[1] = pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar5);
        }
        if (pRVar4 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar4);
        }
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + 2);
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
        local_c = local_c + 1;
      }
      iVar9 = *param_4;
    } while ((int)local_10 < iVar9);
    if ((int)local_10 < iVar9) {
      do {
        local_14 = *local_18;
        *local_18 = local_14 + 1;
        local_1c = local_10;
        local_10 = local_10 + 1;
        puVar6 = (undefined4 *)(**(code **)*param_1)(&local_1c);
        puVar7 = (undefined4 *)(**(code **)*param_2)(&local_14);
        pRVar4 = (ReferenceController *)puVar7[1];
        *puVar7 = *puVar6;
        pRVar5 = (ReferenceController *)puVar6[1];
        puVar7[1] = pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar5);
        }
        if (pRVar4 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar4);
        }
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar6 + 2);
        *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar6 + 4);
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = *local_18;
      *local_18 = local_14 + 1;
      local_1c = local_c;
      local_c = local_c + 1;
      puVar6 = (undefined4 *)(**(code **)*param_1)(&local_1c);
      puVar7 = (undefined4 *)(**(code **)*param_2)(&local_14);
      pRVar4 = (ReferenceController *)puVar7[1];
      *puVar7 = *puVar6;
      pRVar5 = (ReferenceController *)puVar6[1];
      puVar7[1] = pRVar5;
      if (pRVar5 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar5);
      }
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar4);
      }
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar6 + 2);
      *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(puVar6 + 4);
    } while ((int)local_c < *param_6);
  }
  iVar9 = *local_18;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  if ((iVar8 < iVar9) || (iVar9 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c6b10 007c6b10_Tick ====
// decompiled by BatchDecomp @ 007c6b10 name=Tick conv=__thiscall body=625

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall ExplosionComponent__Tick(double) */

void __thiscall ExplosionComponent__Tick(ExplosionComponent *this,double param_1)

{
  double dVar1;
  Body *pBVar2;
  ReferenceController *pRVar3;
  bool bVar4;
  TacticalManager *pTVar5;
  undefined4 *puVar6;
  int iVar7;
  EffectManager *pEVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong in_stack_ffffff78;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  Darray_L_MaterialConstituent_G_ *pDVar19;
  double local_10;
  EffectManager *local_8;
  
  if ((0.0 < this->PhotonEnergy_J) && (0.0 < this->PhotonWavelength_nm)) {
    uVar13 = 1;
    uVar14 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = in_stack_ffffff78 & 0xffffff0000000000;
    local_10 = this->PhotonEnergy_J;
    if ((local_10 <= 0.0) || (this->PhotonWavelength_nm <= 0.0)) {
      local_10 = 0.0;
    }
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar4)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar2 = (Body *)this->_pad_0x0_0;
    pTVar5 = Component__GetManager((Component *)this);
    pRVar3 = (pTVar5->EnemyController).Controller;
    pEVar8 = (EffectManager *)(pTVar5->EnemyController).Pointer;
    if (((pRVar3 != (ReferenceController *)0x0) &&
        (util__ReferenceController__AddWeakReference(pRVar3), pRVar3 != (ReferenceController *)0x0))
       && (bVar4 = util__ReferenceController__IsDataStillValid(pRVar3), !bVar4)) {
      pEVar8 = (EffectManager *)0x0;
    }
    dVar9 = this->PhotonWavelength_nm;
    puVar6 = (undefined4 *)Body__GetState(pBVar2);
    EffectManager__NewFlash(pEVar8,*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4],puVar6[5],puVar6[6],puVar6[7],
               puVar6[8],puVar6[9],puVar6[10],puVar6[0xb],/*3ff0000000000000*/1.0,local_10,dVar9,0,1
               ,uVar10,uVar11,uVar12,uVar13,uVar14,uVar16,uVar17,uVar18);
    if (pRVar3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar3);
    }
  }
  iVar7 = (**(code **)(*(int *)&this->GasComposition + 0xc))();
  if (((0 < iVar7) && (0.0 < this->GasMass_kg)) && (0.0 < this->GasTemperature_K)) {
    if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
       !bVar4)) {
      this->_pad_0x0_0 = 0;
    }
    pBVar2 = (Body *)this->_pad_0x0_0;
    pTVar5 = Component__GetManager((Component *)this);
    pRVar3 = (pTVar5->EnemyController).Controller;
    local_8 = (EffectManager *)(pTVar5->EnemyController).Pointer;
    if (pRVar3 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar3);
      bVar4 = util__ReferenceController__IsDataStillValid(pRVar3);
      if (!bVar4) {
        local_8 = (EffectManager *)0x0;
      }
    }
    dVar9 = this->GasMass_kg;
    dVar15 = this->GasTemperature_K;
    dVar1 = this->Radius_m;
    puVar6 = (undefined4 *)Body__GetState(pBVar2);
    pDVar19 = &this->GasComposition;
    uVar10 = *(undefined4 *)&dVar9;
    uVar11 = *(undefined4 *)((char *)&dVar9 + 4);
    dVar9 = GetGasEnergy_J(this);
    EffectManager__NewExplosion(local_8,*puVar6,puVar6[1],puVar6[2],puVar6[3],puVar6[4],puVar6[5],puVar6[6],puVar6[7]
               ,puVar6[8],puVar6[9],puVar6[10],puVar6[0xb],dVar1,dVar9,dVar15,uVar10,uVar11,pDVar19)
    ;
    if (pRVar3 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar3);
    }
  }
  if (((ReferenceController *)this->_pad_0x0_0 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)this->_pad_0x0_0),
     !bVar4)) {
    this->_pad_0x0_0 = 0;
  }
  Body__Destroy((Body *)this->_pad_0x0_0);
  return;
}


//==== 00007c7be0 007c7be0_FUN_007c7be0 ====
void FUN_007c7be0(int *param_1,undefined4 *param_2,int param_3);

// decompiled by BatchDecomp @ 007c7be0 name=FUN_007c7be0 conv=unknown body=507

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007c7be0(int *param_1,undefined4 *param_2,int param_3)

{
  Body *this;
  Body *this_00;
  Body *this_01;
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  Quaternion_L_double_G_ *pQVar4;
  undefined4 *puVar5;
  undefined1 local_118[224];
  Quaternion_L_double_G_ local_38;
  int *local_18;
  int local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      (**(code **)*param_1)(&local_c);
      local_10 = (int *)*param_2;
      if (*(ReferenceController **)(param_3 + 8) != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_3 + 8));
        if (!bVar1) {
          *(undefined4 *)(param_3 + 4) = 0;
        }
      }
      this = *(Body **)(param_3 + 4);
      if (*(ReferenceController **)(param_3 + 8) != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_3 + 8));
        if (!bVar1) {
          *(undefined4 *)(param_3 + 4) = 0;
        }
      }
      this_00 = *(Body **)(param_3 + 4);
      if (*(ReferenceController **)(param_3 + 8) != (ReferenceController *)0x0) {
        bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(param_3 + 8));
        if (!bVar1) {
          *(undefined4 *)(param_3 + 4) = 0;
        }
      }
      this_01 = *(Body **)(param_3 + 4);
      local_14 = *local_10;
      puVar3 = (undefined4 *)Body__GetState(this);
      pQVar4 = Body__GetOrientation(this_00,&local_38);
      puVar5 = (undefined4 *)Body__GetState(this_01);
      (**(code **)(local_14 + 0x4c))
                (local_118,*puVar5,puVar5[1],puVar5[2],puVar5[3],puVar5[4],puVar5[5],puVar5[6],
                 puVar5[7],puVar5[8],puVar5[9],puVar5[10],puVar5[0xb],*(undefined4 *)&pQVar4->X,
                 *(undefined4 *)((int)&pQVar4->X + 4),*(undefined4 *)&pQVar4->Y,
                 *(undefined4 *)((int)&pQVar4->Y + 4),*(undefined4 *)&pQVar4->Z,
                 *(undefined4 *)((int)&pQVar4->Z + 4),*(undefined4 *)&pQVar4->W,
                 *(undefined4 *)((int)&pQVar4->W + 4),*puVar3,puVar3[1],puVar3[2],puVar3[3],
                 puVar3[4],puVar3[5],puVar3[6],puVar3[7],puVar3[8],puVar3[9],puVar3[10],puVar3[0xb])
      ;
      param_1 = local_18;
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c80d0 007c80d0_FUN_007c80d0 ====
void FUN_007c80d0(int *param_1,undefined4 param_2,undefined4 *param_3,double *param_4, double *param_5,double *param_6,char *param_7,char *param_8);
extern undefined4 FUN_007caeb0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007c80d0 name=FUN_007c80d0 conv=unknown body=645

void FUN_007c80d0(int *param_1,undefined4 param_2,undefined4 *param_3,double *param_4,
                 double *param_5,double *param_6,char *param_7,char *param_8)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  float10 fVar9;
  Vec3_L_double_G_ local_6c;
  double local_54;
  double local_4c;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  int *local_24;
  double local_20;
  double local_18;
  char local_e;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = param_1;
  local_c = 0;
  iVar6 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar6) {
    local_2c = /*3fb999999999999a*/0.1;
    do {
      pdVar7 = (double *)(**(code **)*param_1)(&local_c);
      fVar9 = (float10)FUN_007caeb0(*(undefined4 *)pdVar7,*(undefined4 *)((int)pdVar7 + 4),
                                    *(undefined4 *)(pdVar7 + 1),*(undefined4 *)((int)pdVar7 + 0xc),
                                    pdVar7[2]);
      pdVar8 = (double *)*param_3;
      local_20 = (double)fVar9;
      local_6c.X = *pdVar7 - *pdVar8;
      local_6c.Y = pdVar7[1] - pdVar8[1];
      local_6c.Z = pdVar7[2] - pdVar8[2];
      local_34 = util__FUN_007c80d0(&local_6c,(Vec3_L_double_G_ *)param_3[1]);
      local_4c = param_4[6] + pdVar7[6];
      local_18 = util__FUN_0074c890(*param_5);
      local_20 = util__FUN_0074c890(local_20);
      local_20 = local_18 - local_20;
      local_18 = local_20;
      local_54 = util__Abs(&local_18);
      local_54 = /*401921fb54442d18*/6.283185307179586 - local_54;
      local_3c = local_20;
      local_18 = util__Abs(&local_3c);
      local_44 = *param_6 - local_34;
      local_34 = util__Abs(&local_44);
      if (local_4c * /*4014000000000000*/5.0 <= local_34) {
LAB_007c8235:
        local_e = '\0';
        if (*param_7 == '\0') goto LAB_007c8241;
      }
      else {
        dVar1 = local_18;
        if (local_54 <= local_18) {
          dVar1 = local_54;
        }
        if (/*3ff247426bd47de3*/1.1423973285781066 <= dVar1) goto LAB_007c8235;
LAB_007c8241:
        local_e = '\x01';
      }
      if ((((NAN(pdVar7[8]) == (pdVar7[8] == 0.0)) || (NAN(pdVar7[9]) == (pdVar7[9] == 0.0))) ||
          (NAN(pdVar7[10]) == (pdVar7[10] == 0.0))) ||
         (local_d = '\0', NAN(pdVar7[0xb]) == (pdVar7[0xb] == 0.0))) {
        local_d = '\x01';
      }
      bVar5 = util__IsACoplanarOrbit(param_4 + 3,pdVar7 + 3,&local_2c);
      if (bVar5) {
        bVar5 = util__IsACoplanarOrbit(param_4 + 4,pdVar7 + 4,&local_2c);
        if (!bVar5) goto LAB_007c82db;
        bVar5 = util__IsACoplanarOrbit(param_4 + 5,pdVar7 + 5,&local_2c);
        if (!bVar5) goto LAB_007c82db;
        bVar5 = true;
      }
      else {
LAB_007c82db:
        bVar5 = false;
      }
      param_1 = local_24;
      if (((local_d == '\0') && (bVar5)) &&
         ((local_e != '\0' && ((*param_8 != '\0' && (*(char *)(pdVar7 + 0xc) == '\0')))))) {
        dVar1 = param_4[7];
        pdVar8 = param_4;
        if (param_4[7] <= pdVar7[7]) {
          pdVar8 = pdVar7;
        }
        uVar2 = *(undefined4 *)((int)pdVar8 + 4);
        uVar3 = *(undefined4 *)(pdVar8 + 1);
        uVar4 = *(undefined4 *)((int)pdVar8 + 0xc);
        *(undefined4 *)pdVar7 = *(undefined4 *)pdVar8;
        *(undefined4 *)((int)pdVar7 + 4) = uVar2;
        *(undefined4 *)(pdVar7 + 1) = uVar3;
        *(undefined4 *)((int)pdVar7 + 0xc) = uVar4;
        pdVar7[2] = pdVar8[2];
        pdVar7[7] = pdVar7[7] + dVar1;
        *param_8 = '\0';
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*local_24 + 0xc))();
    } while (local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c8b40 007c8b40_FUN_007c8b40 ====
void FUN_007c8b40(int *param_1,int *param_2,undefined4 *param_3,double *param_4);

// decompiled by BatchDecomp @ 007c8b40 name=FUN_007c8b40 conv=unknown body=482

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007c8b40(int *param_1,int *param_2,undefined4 *param_3,double *param_4)

{
  CelestialObject *pCVar1;
  undefined4 *puVar2;
  ReferenceController *this;
  ReferenceController *this_00;
  Line3_L_double_G_ LVar3;
  Line3_L_double_G_ LVar4;
  bool bVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  Line3_L_double_G_ *pLVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  int *piVar37;
  undefined1 local_94[96];
  Maybe_L_double_G_ local_34;
  undefined8 local_24;
  int *local_1c;
  TacticalManager *local_18;
  int *local_14;
  int *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  local_c = 0;
  iVar6 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar6) {
    do {
      piVar37 = &local_c;
      puVar7 = (undefined4 *)(**(code **)*param_1)();
      local_14 = param_2;
      if ((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]);
        if (!bVar5) {
          *puVar7 = 0;
        }
      }
      iVar6 = *param_2;
      local_10 = (int *)*puVar7;
      if (*(ReferenceController **)(iVar6 + 8) != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar6 + 8));
        if (!bVar5) {
          *(undefined4 *)(iVar6 + 4) = 0;
        }
      }
      local_18 = *(TacticalManager **)(*(int *)(iVar6 + 4) + 0x1dc);
      if ((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) {
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]);
        if (!bVar5) {
          *puVar7 = 0;
        }
      }
      pCVar1 = (CelestialObject *)*puVar7;
      puVar2 = (undefined4 *)param_2[2];
      local_24 = *(undefined8 *)local_14[1];
      puVar8 = (undefined4 *)TacticalManager__GetParentManagerDelta(local_18);
      pLVar9 = CelestialObject__GetCombatLineSweep_km(pCVar1,local_94,*puVar8,puVar8[1],puVar8[2],puVar8[3],puVar8[4],puVar8[5],
                          puVar8[6],puVar8[7],puVar8[8],puVar8[9],puVar8[10],puVar8[0xb]);
      uVar25 = *puVar2;
      uVar26 = puVar2[1];
      uVar27 = puVar2[2];
      uVar28 = puVar2[3];
      uVar29 = puVar2[4];
      uVar30 = puVar2[5];
      uVar31 = puVar2[6];
      uVar32 = puVar2[7];
      uVar33 = puVar2[8];
      uVar34 = puVar2[9];
      uVar35 = puVar2[10];
      uVar36 = puVar2[0xb];
      uVar23 = (undefined4)local_24;
      uVar24 = *(undefined4 *)((char *)&local_24 + 4);
      uVar11 = *(undefined4 *)&(pLVar9->A).X;
      uVar12 = *(undefined4 *)((int)&(pLVar9->A).X + 4);
      uVar13 = *(undefined4 *)&(pLVar9->A).Y;
      uVar14 = *(undefined4 *)((int)&(pLVar9->A).Y + 4);
      uVar15 = *(undefined4 *)&(pLVar9->A).Z;
      uVar16 = *(undefined4 *)((int)&(pLVar9->A).Z + 4);
      uVar17 = *(undefined4 *)&(pLVar9->B).X;
      uVar18 = *(undefined4 *)((int)&(pLVar9->B).X + 4);
      uVar19 = *(undefined4 *)&(pLVar9->B).Y;
      uVar20 = *(undefined4 *)((int)&(pLVar9->B).Y + 4);
      uVar21 = *(undefined4 *)&(pLVar9->B).Z;
      uVar22 = *(undefined4 *)((int)&(pLVar9->B).Z + 4);
      fVar10 = (float10)(**(code **)(*local_10 + 0x44))();
      ((slice_view *)&LVar3.A.X)->_4_4_ = uVar13;
      ((slice_view *)&LVar3.A.X)->_0_4_ = uVar12;
      ((slice_view *)&LVar3.A.Y)->_0_4_ = uVar14;
      ((slice_view *)&LVar3.A.Y)->_4_4_ = uVar15;
      ((slice_view *)&LVar3.A.Z)->_0_4_ = uVar16;
      ((slice_view *)&LVar3.A.Z)->_4_4_ = uVar17;
      ((slice_view *)&LVar3.B.X)->_0_4_ = uVar18;
      ((slice_view *)&LVar3.B.X)->_4_4_ = uVar19;
      ((slice_view *)&LVar3.B.Y)->_0_4_ = uVar20;
      ((slice_view *)&LVar3.B.Y)->_4_4_ = uVar21;
      ((slice_view *)&LVar3.B.Z)->_0_4_ = uVar22;
      ((slice_view *)&LVar3.B.Z)->_4_4_ = uVar23;
      ((slice_view *)&LVar4.A.X)->_4_4_ = uVar27;
      ((slice_view *)&LVar4.A.X)->_0_4_ = uVar26;
      ((slice_view *)&LVar4.A.Y)->_0_4_ = uVar28;
      ((slice_view *)&LVar4.A.Y)->_4_4_ = uVar29;
      ((slice_view *)&LVar4.A.Z)->_0_4_ = uVar30;
      ((slice_view *)&LVar4.A.Z)->_4_4_ = uVar31;
      ((slice_view *)&LVar4.B.X)->_0_4_ = uVar32;
      ((slice_view *)&LVar4.B.X)->_4_4_ = uVar33;
      ((slice_view *)&LVar4.B.Y)->_0_4_ = uVar34;
      ((slice_view *)&LVar4.B.Y)->_4_4_ = uVar35;
      ((slice_view *)&LVar4.B.Z)->_0_4_ = uVar36;
      ((slice_view *)&LVar4.B.Z)->_4_4_ = piVar37;
      SpacecraftComponent__GetClosestApproachCollisionTime_s((SpacecraftComponent *)*local_14,&local_34,
                 (double)CONCAT44(uVar11,(int)((ulonglong)(double)fVar10 >> 0x20)),LVar3,
                 (double)CONCAT44(uVar25,uVar24),LVar4);
      if ((local_34.IsValidData != false) &&
         ((*(char *)(param_3 + 2) == '\0' || (local_34.Data < *param_4)))) {
        this = (ReferenceController *)puVar7[1];
        local_10 = (int *)*puVar7;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        this_00 = (ReferenceController *)param_3[1];
        *param_3 = local_10;
        param_3[1] = this;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        *(undefined1 *)(param_3 + 2) = 1;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        *param_4 = local_34.Data;
      }
      param_1 = local_1c;
      local_c = local_c + 1;
      iVar6 = (**(code **)(*local_1c + 0xc))();
    } while (local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007c8f30 007c8f30_FUN_007c8f30 ====
void FUN_007c8f30(Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 007c8f30 name=FUN_007c8f30 conv=unknown body=483

void FUN_007c8f30(Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_20;
  undefined **local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0093cfb4u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uVar6 = -(uint)((int)((ulonglong)uVar3 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x10);
    puVar4 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      puVar1 = puVar4;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = (uint)((void *)(0x00924d68u));
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 4;
      }
    }
    iVar8 = 0;
    *(uint **)(param_1 + 4) = puVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar7 = 0;
      do {
        local_1c = ((void *)(0x00924d68u));
        local_18 = (void *)0x0;
        local_14 = 0;
        local_10 = 0;
        util__Darray_struct_WorldLight___operator__o2
                  ((Darray_L_struct_WorldLight_G_ *)(*(int *)(param_1 + 4) + iVar7),
                   (Darray_L_struct_WorldLight_G_ *)&local_1c);
        local_1c = ((void *)(0x00924d68u));
        if (local_18 != (void *)0x0) {
          operator_delete__(local_18);
        }
        iVar8 = iVar8 + 1;
        local_18 = (void *)0x0;
        iVar7 = iVar7 + 0x10;
        local_1c = ((void *)(0x00919488u));
        param_2 = local_c;
      } while (iVar8 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = (int *)0x0;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar8) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      (**(code **)(*(int *)*puVar5 + 0x60))(&local_1c);
      iVar8 = *(int *)(param_1 + 8);
      local_20 = iVar8 + 1;
      util__Darray_class_util__Darray_struct_WorldLight_____SetSize(param_1,&local_20);
      bVar2 = util__Darray_class_util__Darray_struct_WorldLight_____CheckSize(param_1,iVar8);
      if (bVar2) {
        util__Darray_struct_WorldLight___operator__o2
                  ((Darray_L_struct_WorldLight_G_ *)
                   (*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4) + -0x10),
                   (Darray_L_struct_WorldLight_G_ *)&local_1c);
      }
      local_1c = ((void *)(0x00924d68u));
      if (local_18 != (void *)0x0) {
        operator_delete__(local_18);
      }
      local_c = (int *)((int)local_c + 1);
      local_18 = (void *)0x0;
      local_1c = ((void *)(0x00919488u));
      iVar8 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007cad00 007cad00_FUN_007cad00 ====
undefined4 * __thiscall FUN_007cad00(int *param_1,undefined4 *param_2,int *param_3);

// decompiled by BatchDecomp @ 007cad00 name=FUN_007cad00 conv=unknown body=422

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

undefined4 * __thiscall FUN_007cad00(int *param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  Body *this;
  ReferenceController *this_00;
  bool bVar3;
  bool bVar4;
  undefined4 local_14;
  ReferenceController *local_10;
  undefined1 local_c;
  
  if ((ReferenceController *)param_3[1] != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_3[1]);
    if (!bVar4) {
      *param_3 = 0;
    }
  }
  iVar1 = *param_3;
  if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
    if (!bVar4) {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  iVar2 = *param_1;
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x1e0);
  if (*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8));
    if (!bVar4) {
      *(undefined4 *)(iVar2 + 4) = 0;
    }
  }
  if (iVar1 == *(int *)(*(int *)(iVar2 + 4) + 0x1e0)) {
    if ((ReferenceController *)param_3[1] != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_3[1]);
      if (!bVar4) {
        *param_3 = 0;
      }
    }
    iVar1 = *param_3;
    if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
      if (!bVar4) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
    }
    this = *(Body **)(iVar1 + 4);
    Body__GetCapitalShipComponent_Memoize(this);
    if ((this->GetCapitalShipComponent_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (((this->GetCapitalShipComponent_MemoizedValue).Data.Pointer != (CapitalShipComponent *)0x0)
       && (this_00 = (this->GetCapitalShipComponent_MemoizedValue).Data.Controller,
          this_00 != (ReferenceController *)0x0)) {
      bVar4 = util__ReferenceController__IsDataStillValid(this_00);
      if (bVar4) {
        bVar4 = true;
        goto LAB_007cadee;
      }
    }
  }
  bVar4 = false;
LAB_007cadee:
  if ((*param_1 == *param_3) || ((*(char *)param_1[1] != '\0' && (!bVar4)))) {
    local_14 = 0;
    local_10 = (ReferenceController *)0x0;
    local_c = 0;
    bVar3 = false;
    bVar4 = true;
  }
  else {
    if ((ReferenceController *)param_3[1] != (ReferenceController *)0x0) {
      bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_3[1]);
      if (!bVar4) {
        *param_3 = 0;
      }
    }
    local_10 = *(ReferenceController **)(*param_3 + 8);
    local_14 = *(undefined4 *)(*param_3 + 4);
    if (local_10 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(local_10);
    }
    local_c = 1;
    bVar3 = true;
    bVar4 = false;
  }
  *param_2 = local_14;
  param_2[1] = local_10;
  if (local_10 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_10);
  }
  *(undefined1 *)(param_2 + 2) = local_c;
  if (bVar4) {
    if (local_10 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_10);
    }
  }
  if ((local_10 != (ReferenceController *)0x0) && (bVar3)) {
    util__ReferenceController__ReleaseWeakReference(local_10);
  }
  return param_2;
}


//==== 00007d5f10 007d5f10_OnSessionBoundary ====
// decompiled by BatchDecomp @ 007d5f10 name=OnSessionBoundary conv=__thiscall body=513

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftComponent__OnSessionBoundary(void) */

void __thiscall SpacecraftComponent__OnSessionBoundary(SpacecraftComponent *this)

{
  int *piVar1;
  CraftInstance *this_00;
  ReferenceController *this_01;
  ReferenceController *this_02;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_34;
  undefined **local_30;
  int iStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 *local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = (undefined4 *)0x0;
  uStack_1c = 0;
  iStack_18 = 0;
  uStack_14 = 0;
  this_00 = (CraftInstance *)(this->GetArmorCollisionShells_MemoizedValue).Data.Size;
  *(undefined8 *)&(this->GetCompartmentCollisionShells_MemoizedValue).Data.Capacity = 0;
  *(undefined1 *)&(this->Craft).Pointer = 1;
  (this->Craft).Controller = (ReferenceController *)0x0;
  CraftInstance__GetWorkingCompartments_Memoize(this_00);
  if ((this_00->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  util__Darray_class_util__WeakPtr_struct_ModuleCompartment_____Darray_class_util__WeakPtr_struct_ModuleCompartment((Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)&local_20,
             (Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *)
             &this_00->GetWorkingCompartments_MemoizedValue);
  while (0 < iStack_18) {
    local_10 = 0;
    local_30 = (undefined **)0x0;
    iStack_2c = 0;
    iStack_28 = 0;
    uStack_24 = 0;
    iVar4 = (*(code *)local_20[3])();
    util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,iVar4);
    local_c = 0;
    iVar4 = (*(code *)local_20[3])();
    if (local_c < iVar4) {
      do {
        puVar5 = (undefined4 *)(*(code *)*local_20)();
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar2)) {
          *puVar5 = 0;
        }
        cVar3 = (**(code **)(*(int *)*puVar5 + 0x70))();
        iVar4 = iStack_28;
        if (cVar3 == '\0') {
          local_34 = iStack_28 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,&local_34);
          bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_30,iVar4);
          if (bVar2) {
            this_01 = *(ReferenceController **)(iStack_2c + -4 + iStack_28 * 8);
            *(undefined4 *)(iStack_2c + -8 + iStack_28 * 8) = *puVar5;
            this_02 = (ReferenceController *)puVar5[1];
            *(ReferenceController **)(iStack_2c + -4 + iStack_28 * 8) = this_02;
            if (this_02 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this_02);
            }
            if (this_01 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(this_01);
            }
          }
        }
        local_c = local_c + 1;
        iVar4 = (*(code *)local_20[3])();
      } while (local_c < iVar4);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
              ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_20,
               (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_30);
    local_30 = ((void *)(0x0091e0b8u));
    if (iStack_2c != 0) {
      iVar4 = *(int *)(iStack_2c + -4);
      piVar1 = (int *)(iStack_2c + -4);
      if (iVar4 != 0) {
        iVar6 = iStack_2c + 4 + iVar4 * 8;
        do {
          puVar5 = (undefined4 *)(iVar6 + -8);
          iVar6 = iVar6 + -8;
          iVar4 = iVar4 + -1;
          if ((ReferenceController *)*puVar5 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar5);
          }
        } while (iVar4 != 0);
        iVar4 = *piVar1;
      }
      operator_delete__(piVar1,iVar4 * 8 + 4);
    }
    iStack_2c = 0;
    local_30 = ((void *)(0x00919488u));
  }
  ResetArmorTextureCooling(this);
  TickArmor(this,0.0,true);
  (*(code *)**(undefined4 **)(this->GetArmorCollisionShells_MemoizedValue).Data.Size)();
  (**(code **)(*(int *)this + 0x74))();
  *(undefined1 *)((int)&(this->Targeting).EnemyTargetedCompartments.Size + 1) = 0;
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_20);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007dc6a0 007dc6a0_FUN_007dc6a0 ====
void FUN_007dc6a0(int *param_1,undefined4 *param_2,int param_3);

// decompiled by BatchDecomp @ 007dc6a0 name=FUN_007dc6a0 conv=unknown body=484

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007dc6a0(int *param_1,undefined4 *param_2,int param_3)

{
  Body *pBVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  double *pdVar5;
  double *pdVar6;
  Maybe_L_double_G_ *pMVar7;
  code *pcVar8;
  Maybe_L_double_G_ local_3c;
  double local_2c;
  undefined8 local_24;
  double local_1c;
  char local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pBVar1 = (Body *)*puVar4;
      Body__GetCrossSection_m2_Memoize(pBVar1);
      if ((pBVar1->GetCrossSection_m2_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      (**(code **)(*(int *)*param_2 + 0xc4))
                (&local_1c,(pBVar1->GetCrossSection_m2_MemoizedValue).Data);
      if (local_14 == '\0') {
LAB_007dc871:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar3 = *(int *)(param_3 + 0x88);
      if ((*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8)),
         !bVar2)) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      ((slice_view *)&local_24)->_4_4_ = *(Body **)(iVar3 + 4);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pBVar1 = (Body *)*puVar4;
      pdVar5 = (double *)Body__GetState(((slice_view *)&local_24)->_4_4_);
      pdVar6 = (double *)Body__GetState(pBVar1);
      local_24 = (*pdVar6 - *pdVar5) * (*pdVar6 - *pdVar5) +
                 (pdVar6[1] - pdVar5[1]) * (pdVar6[1] - pdVar5[1]) +
                 (pdVar6[2] - pdVar5[2]) * (pdVar6[2] - pdVar5[2]);
      pMVar7 = util__Sqrt(&local_3c,(double *)&local_24);
      pcVar8 = DebugBreak_exref;
      if (pMVar7->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        pcVar8 = DebugBreak_exref;
        DebugBreak();
      }
      local_2c = pMVar7->Data;
      if (local_14 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar8)();
      }
      if (local_2c <= local_1c) goto LAB_007dc871;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007dc890 007dc890_FUN_007dc890 ====
void FUN_007dc890(int *param_1,undefined4 param_2,undefined4 *param_3);

// decompiled by BatchDecomp @ 007dc890 name=FUN_007dc890 conv=unknown body=517

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007dc890(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  ReferenceController *this;
  ReferenceController *this_00;
  Body *this_01;
  bool bVar1;
  int iVar2;
  int *piVar3;
  Vec3_L_double_G_ *pVVar4;
  Vec3_L_double_G_ *pVVar5;
  Body *this_02;
  double dVar6;
  double dVar7;
  double dVar8;
  Vec3_L_double_G_ local_64;
  Vec3_L_double_G_ local_4c;
  int *local_34;
  ReferenceController *local_30;
  undefined8 local_2c;
  int local_24;
  char local_1d;
  double local_1c;
  char local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      this = (ReferenceController *)piVar3[1];
      local_24 = *piVar3;
      local_30 = this;
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
      }
      this_00 = (ReferenceController *)param_3[1];
      this_02 = (Body *)*param_3;
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      local_2c = (double)CONCAT44(param_2,(undefined4)local_2c);
      iVar2 = local_24;
      if ((this != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(this), iVar2 = local_24, !bVar1)) {
        iVar2 = 0;
      }
      piVar3 = *(int **)(iVar2 + 0x38);
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(this_00), !bVar1)) {
        this_02 = (Body *)0x0;
      }
      Body__GetCrossSection_m2_Memoize(this_02);
      if ((this_02->GetCrossSection_m2_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      (**(code **)(*piVar3 + 0xc4))(&local_1c,(this_02->GetCrossSection_m2_MemoizedValue).Data);
      if (local_14 == '\0') {
LAB_007dca38:
        local_1d = '\0';
      }
      else {
        iVar2 = *(int *)(((slice_view *)&local_2c)->_4_4_ + 0x88);
        if ((*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8)), !bVar1)) {
          *(undefined4 *)(iVar2 + 4) = 0;
        }
        this_01 = *(Body **)(iVar2 + 4);
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid(this_00), !bVar1)) {
          this_02 = (Body *)0x0;
        }
        pVVar4 = Body__GetPosition_km(this_01,&local_4c);
        pVVar5 = Body__GetPosition_km(this_02,&local_64);
        dVar8 = pVVar5->Y - pVVar4->Y;
        dVar7 = pVVar5->X - pVVar4->X;
        dVar6 = pVVar5->Z - pVVar4->Z;
        local_2c = dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6;
        if (local_14 == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_1d = '\x01';
        if (local_1c * local_1c < local_2c) goto LAB_007dca38;
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      if (local_30 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_30);
      }
      param_1 = local_34;
      if (local_1d != '\0') {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*local_34 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007dd020 007dd020_FUN_007dd020 ====
void FUN_007dd020(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 007dd020 name=FUN_007dd020 conv=unknown body=569

void FUN_007dd020(undefined4 *param_1,int *param_2)

{
  double dVar1;
  ReferenceController *this;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  double local_40;
  double local_34;
  undefined4 local_2c;
  ReferenceController *local_28;
  double local_24;
  undefined8 local_1c;
  undefined1 local_1a;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  pcVar5 = DebugBreak_exref;
  if (iVar3 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_2c = 0;
  local_28 = (ReferenceController *)0x0;
  local_24 = 0.0;
  local_1c = 0;
  local_1a = 0;
  bVar2 = false;
  local_34 = 0.0;
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_c);
      dVar1 = *(double *)(puVar4 + 2);
      if ((!bVar2) || (local_34 < dVar1)) {
        this = (ReferenceController *)puVar4[1];
        local_2c = *puVar4;
        local_40 = dVar1;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
          local_40 = *(double *)(puVar4 + 2);
        }
        local_1c = *(undefined2 *)(puVar4 + 4);
        local_1a = *(undefined1 *)((int)puVar4 + 0x12);
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (local_28 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_28);
        }
        local_24 = local_40;
        bVar2 = true;
        local_34 = dVar1;
        local_28 = this;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
      pcVar5 = DebugBreak_exref;
    } while (local_c < iVar3);
  }
  if (!bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar5)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar5)();
  }
  if (local_28 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_28);
  }
  *param_1 = local_2c;
  param_1[1] = local_28;
  if (local_28 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_28);
  }
  *(double *)(param_1 + 2) = local_24;
  *(undefined1 *)(param_1 + 4) = (undefined1)local_1c;
  *(undefined1 *)((int)param_1 + 0x11) = ((slice_view *)&local_1c)->_1_1_;
  *(undefined1 *)((int)param_1 + 0x12) = local_1a;
  *(double *)(param_1 + 6) = local_34;
  if (local_28 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(local_28);
    util__ReferenceController__ReleaseWeakReference(local_28);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007de070 007de070_FUN_007de070 ====
void FUN_007de070(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 007de070 name=FUN_007de070 conv=unknown body=393

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007de070(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  WeakPtr_L_ModuleCompartment_G_ *pWVar1;
  CraftInstance *this;
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  WeakPtr_L_ModuleCompartment_G_ *pWVar7;
  uint uVar8;
  ReferenceController *local_1c;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar8 = 0;
  local_10 = 0;
  local_c = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar2)) {
        *piVar5 = 0;
      }
      cVar3 = (**(code **)(**(int **)(*piVar5 + 0x38) + 0x78))();
      if (cVar3 != '\0') {
        local_10 = uVar8 | 1;
        puVar6 = (undefined4 *)
                 SpacecraftComponent__GetCraft(*(SpacecraftComponent **)(*param_2 + 0x88));
        if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
           !bVar2)) {
          *puVar6 = 0;
        }
        this = (CraftInstance *)*puVar6;
        CraftInstance__GetWorkingCompartments_Memoize(this);
        if ((this->GetWorkingCompartments_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pWVar7 = (this->GetWorkingCompartments_MemoizedValue).Data.Data;
        pWVar1 = pWVar7 + (this->GetWorkingCompartments_MemoizedValue).Data.Size;
        if (pWVar7 != pWVar1) {
          do {
            if (((ReferenceController *)piVar5[1] == pWVar7->Controller) &&
               ((ModuleCompartment *)*piVar5 == pWVar7->Pointer)) {
              bVar2 = true;
              goto LAB_007de15c;
            }
            pWVar7 = pWVar7 + 1;
          } while (pWVar7 != pWVar1);
        }
      }
      bVar2 = false;
LAB_007de15c:
      if (((local_10 & 1) != 0) &&
         (local_10 = local_10 & 0xfffffffe, local_1c != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(local_1c);
      }
      if (bVar2) {
        iVar4 = *(int *)(param_3 + 8);
        local_14 = iVar4 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_14);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar4);
        if (bVar2) {
          this_00 = *(ReferenceController **)
                     (*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 8);
          iVar4 = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8;
          *(int *)(iVar4 + -8) = *piVar5;
          this_01 = (ReferenceController *)piVar5[1];
          *(ReferenceController **)(iVar4 + -4) = this_01;
          if (this_01 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_01);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_1 + 0xc))();
      uVar8 = local_10;
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007de750 007de750_FUN_007de750 ====
void FUN_007de750(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 007de750 name=FUN_007de750 conv=unknown body=666

void FUN_007de750(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  ReferenceController *pRVar4;
  ReferenceController *pRVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  code *local_1c;
  int *local_18;
  int local_14;
  code *local_10;
  code *local_c;
  uint local_8;
  double dVar3;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (code *)*param_3;
  local_c = (code *)*param_5;
  iVar9 = *param_4;
  local_18 = param_7;
  if ((int)local_10 < iVar9) {
    do {
      if (*param_6 <= (int)local_c) break;
      puVar6 = (undefined4 *)(**(code **)*param_1)(&local_10);
      puVar7 = (undefined4 *)(**(code **)*param_1)(&local_c);
      local_14 = *local_18;
      dVar1 = *(double *)(puVar7 + 2);
      dVar2 = *(double *)(puVar6 + 2);
      dVar3 = *(double *)(puVar6 + 2);
      *local_18 = local_14 + 1;
      local_1c = *(code **)*param_2;
      if (dVar1 < dVar3 || dVar1 == dVar2) {
        puVar7 = (undefined4 *)(*local_1c)(&local_14);
        pRVar4 = (ReferenceController *)puVar7[1];
        *puVar7 = *puVar6;
        pRVar5 = (ReferenceController *)puVar6[1];
        puVar7[1] = pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar5);
        }
        if (pRVar4 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar4);
        }
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar6 + 2);
        *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(puVar6 + 4);
        *(undefined1 *)((int)puVar7 + 0x11) = *(undefined1 *)((int)puVar6 + 0x11);
        *(undefined1 *)((int)puVar7 + 0x12) = *(undefined1 *)((int)puVar6 + 0x12);
        local_10 = local_10 + 1;
      }
      else {
        puVar6 = (undefined4 *)(*local_1c)();
        pRVar4 = (ReferenceController *)puVar6[1];
        *puVar6 = *puVar7;
        pRVar5 = (ReferenceController *)puVar7[1];
        puVar6[1] = pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar5);
        }
        if (pRVar4 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar4);
        }
        *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(puVar7 + 2);
        *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(puVar7 + 4);
        *(undefined1 *)((int)puVar6 + 0x11) = *(undefined1 *)((int)puVar7 + 0x11);
        *(undefined1 *)((int)puVar6 + 0x12) = *(undefined1 *)((int)puVar7 + 0x12);
        local_c = local_c + 1;
      }
      iVar9 = *param_4;
    } while ((int)local_10 < iVar9);
    if ((int)local_10 < iVar9) {
      do {
        local_14 = *local_18;
        *local_18 = local_14 + 1;
        local_1c = local_10;
        local_10 = local_10 + 1;
        puVar6 = (undefined4 *)(**(code **)*param_1)(&local_1c);
        puVar7 = (undefined4 *)(**(code **)*param_2)(&local_14);
        pRVar4 = (ReferenceController *)puVar7[1];
        *puVar7 = *puVar6;
        pRVar5 = (ReferenceController *)puVar6[1];
        puVar7[1] = pRVar5;
        if (pRVar5 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar5);
        }
        if (pRVar4 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar4);
        }
        *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar6 + 2);
        *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(puVar6 + 4);
        *(undefined1 *)((int)puVar7 + 0x11) = *(undefined1 *)((int)puVar6 + 0x11);
        *(undefined1 *)((int)puVar7 + 0x12) = *(undefined1 *)((int)puVar6 + 0x12);
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = *local_18;
      *local_18 = local_14 + 1;
      local_1c = local_c;
      local_c = local_c + 1;
      puVar6 = (undefined4 *)(**(code **)*param_1)(&local_1c);
      puVar7 = (undefined4 *)(**(code **)*param_2)(&local_14);
      pRVar4 = (ReferenceController *)puVar7[1];
      *puVar7 = *puVar6;
      pRVar5 = (ReferenceController *)puVar6[1];
      puVar7[1] = pRVar5;
      if (pRVar5 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar5);
      }
      if (pRVar4 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar4);
      }
      *(undefined8 *)(puVar7 + 2) = *(undefined8 *)(puVar6 + 2);
      *(undefined1 *)(puVar7 + 4) = *(undefined1 *)(puVar6 + 4);
      *(undefined1 *)((int)puVar7 + 0x11) = *(undefined1 *)((int)puVar6 + 0x11);
      *(undefined1 *)((int)puVar7 + 0x12) = *(undefined1 *)((int)puVar6 + 0x12);
    } while ((int)local_c < *param_6);
  }
  iVar9 = *local_18;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  if ((iVar8 < iVar9) || (iVar9 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007e0420 007e0420_FUN_007e0420 ====
float10 __thiscall FUN_007e0420(int *param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 007e0420 name=FUN_007e0420 conv=unknown body=474

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

float10 __thiscall FUN_007e0420(int *param_1,undefined4 *param_2)

{
  int iVar1;
  Body *pBVar2;
  Body *this;
  ReferenceController *this_00;
  CraftInstance *this_01;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  Maybe_L_double_G_ *pMVar6;
  undefined4 *puVar7;
  undefined1 local_24[16];
  double local_14;
  undefined8 local_c;
  
  iVar1 = *(int *)(*param_1 + 0x88);
  if (*(ReferenceController **)(iVar1 + 8) != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar1 + 8));
    if (!bVar3) {
      *(undefined4 *)(iVar1 + 4) = 0;
    }
  }
  pBVar2 = *(Body **)(iVar1 + 4);
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar3) {
      *param_2 = 0;
    }
  }
  this = (Body *)*param_2;
  pdVar4 = (double *)Body__GetState(pBVar2);
  pdVar5 = (double *)Body__GetState(this);
  local_c = (pdVar5[1] - pdVar4[1]) * (pdVar5[1] - pdVar4[1]) +
            (*pdVar5 - *pdVar4) * (*pdVar5 - *pdVar4) +
            (pdVar5[2] - pdVar4[2]) * (pdVar5[2] - pdVar4[2]);
  pMVar6 = util__Sqrt((Maybe_L_double_G_ *)local_24,(double *)&local_c);
  if (pMVar6->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  ((slice_view *)&local_24)->_8_8_ = pMVar6->Data * /*408f400000000000*/1000.0;
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar3) {
      *param_2 = 0;
    }
  }
  pBVar2 = (Body *)*param_2;
  Body__GetSpacecraftComponent_Memoize(pBVar2);
  if ((pBVar2->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  this_00 = (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Controller;
  if (this_00 != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid(this_00);
    if (!bVar3) {
      (pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
    }
  }
  puVar7 = (undefined4 *)
           SpacecraftComponent__GetCraft((pBVar2->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
  if ((ReferenceController *)puVar7[1] != (ReferenceController *)0x0) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar7[1]);
    if (!bVar3) {
      *puVar7 = 0;
    }
  }
  this_01 = (CraftInstance *)*puVar7;
  CraftInstance__GetHeatSignature_W_Memoize(this_01);
  if ((this_01->GetTightenedRadius_km_MemoizedValue).IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_14 = (this_01->GetTightenedRadius_km_MemoizedValue).Data;
  if (((slice_view *)&local_c)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_c)->_4_4_);
  }
  if (0.0 < (double)((slice_view *)&local_24)->_8_8_) {
    return (float10)(local_14 /
                    ((double)((slice_view *)&local_24)->_8_8_ * (double)((slice_view *)&local_24)->_8_8_ * /*402921fb54442d18*/12.566370614359172));
  }
  return (float10)0.0;
}


//==== 00007e0b00 007e0b00_FUN_007e0b00 ====
undefined4 * __thiscall FUN_007e0b00(int *param_1,undefined4 *param_2,int *param_3);

// decompiled by BatchDecomp @ 007e0b00 name=FUN_007e0b00 conv=unknown body=391

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

undefined4 * __thiscall FUN_007e0b00(int *param_1,undefined4 *param_2,int *param_3)

{
  ReferenceController *this;
  ShotComponent *pSVar1;
  bool bVar2;
  bool bVar3;
  Body *this_00;
  ReferenceController *local_10;
  undefined1 local_c[4];
  undefined1 *local_8;
  
  local_8 = (undefined1 *)0x0;
  if (((*(int *)(*param_1 + 0x88) != *param_3) && (*param_3 != 0)) &&
     ((ReferenceController *)param_3[1] != (ReferenceController *)0x0)) {
    bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_3[1]);
    if (bVar3) {
      if ((ReferenceController *)param_3[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_3[1]);
        if (!bVar3) {
          *param_3 = 0;
        }
      }
      this = *(ReferenceController **)(*param_3 + 8);
      this_00 = *(Body **)(*param_3 + 4);
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this);
        if (this != (ReferenceController *)0x0) {
          bVar3 = util__ReferenceController__IsDataStillValid(this);
          if (!bVar3) {
            this_00 = (Body *)0x0;
          }
        }
      }
      Body__GetShotComponent_Memoize(this_00);
      if ((this_00->GetShotComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pSVar1 = (this_00->GetShotComponent_MemoizedValue).Data.Pointer;
      if (this != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(this);
        if (!bVar3) {
          this_00 = (Body *)0x0;
        }
      }
      if ((this_00->Alliance == (Faction *)0x0) && (pSVar1 == (ShotComponent *)0x0)) {
        local_10 = (ReferenceController *)0x0;
        local_c[0] = 0;
        this_00 = (Body *)0x0;
        bVar2 = true;
        bVar3 = false;
      }
      else {
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        local_c[0] = 1;
        bVar2 = false;
        bVar3 = true;
        local_10 = this;
      }
      local_8 = local_c;
      *param_2 = this_00;
      param_2[1] = local_10;
      if (local_10 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(local_10);
      }
      *(undefined1 *)(param_2 + 2) = *local_8;
      if (bVar3) {
        if (local_10 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_10);
        }
      }
      if ((local_10 != (ReferenceController *)0x0) && (bVar2)) {
        util__ReferenceController__ReleaseWeakReference(local_10);
      }
      if (this != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this);
      }
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}


//==== 00007e0c90 007e0c90_FUN_007e0c90 ====
void FUN_007e0c90(double *param_1,int *param_2);

// decompiled by BatchDecomp @ 007e0c90 name=FUN_007e0c90 conv=unknown body=519

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007e0c90(double *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  double *pdVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  undefined1 local_14[8];
  double local_c;
  
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  cVar3 = (**(code **)(*(int *)*param_2 + 0x14))();
  if (cVar3 != '\0') {
LAB_007e0e82:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0.0;
    return;
  }
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  bVar2 = WeaponCompartment__HasAmmo((WeaponCompartment *)*param_2);
  if (!bVar2) goto LAB_007e0e82;
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  cVar3 = (**(code **)(**(int **)(*param_2 + 0x38) + 0x1a4))();
  if (cVar3 == '\0') goto LAB_007e0e82;
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  bVar2 = WeaponCompartment__CanLaunchAndRespectLaunchCap((WeaponCompartment *)*param_2);
  if (!bVar2) goto LAB_007e0e82;
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  cVar3 = (**(code **)(**(int **)(*param_2 + 0x38) + 0x1d8))();
  if (cVar3 == '\0') goto LAB_007e0e82;
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  cVar3 = (**(code **)(*(int *)*param_2 + 0xa8))();
  if (cVar3 == '\0') goto LAB_007e0e82;
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  cVar3 = (**(code **)(*(int *)*param_2 + 0x74))();
  if (cVar3 != '\0') goto LAB_007e0e82;
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar2) {
      *param_2 = 0;
    }
  }
  piVar1 = *(int **)(*param_2 + 0x38);
  fVar6 = (float10)(**(code **)(*piVar1 + 0x198))();
  local_c = (double)fVar6;
  if (/*0000000000000000*/0.0 < local_c) {
    fVar6 = (float10)(**(code **)(*piVar1 + 0x19c))();
    local_c = (double)fVar6;
    if (/*0000000000000000*/0.0 < local_c) {
      bVar2 = true;
      goto LAB_007e0e15;
    }
  }
  bVar2 = false;
LAB_007e0e15:
  if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
    bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
    if (!bVar4) {
      *param_2 = 0;
    }
  }
  pdVar5 = (double *)
           (**(code **)(**(int **)(*param_2 + 0x38) + 0xc4))(local_14,/*406f400000000000*/250.0);
  if (*(char *)(pdVar5 + 1) == '\0') {
    dVar8 = 0.0;
  }
  else {
    dVar8 = *pdVar5;
  }
  dVar7 = 0.0;
  if (!bVar2) {
    dVar7 = /*408f400000000000*/1000.0;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = dVar7 + dVar8;
  return;
}


//==== 00007e1280 007e1280_FUN_007e1280 ====
undefined1 __thiscall FUN_007e1280(int param_1,int param_2);
extern undefined4 FUN_007e3cf0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 007e1280 name=FUN_007e1280 conv=unknown body=517

undefined1 __thiscall FUN_007e1280(int param_1,int param_2)

{
  undefined1 *puVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  bool bVar9;
  uint *local_c;
  bool local_5;
  
  local_5 = true;
  uVar3 = *(uint *)(param_1 + 8);
  bVar9 = -1 < (int)uVar3;
  bVar2 = !bVar9;
  if (bVar2) {
    local_c = (uint *)0x0;
    FUN_007e3cf0(&local_c);
    uVar3 = *(uint *)(param_1 + 8);
  }
  local_5 = !bVar2;
  bVar2 = (int)uVar3 < 0x40000000;
  if (!bVar2) {
    local_c = (uint *)0x3fffffff;
    FUN_007e3cf0(&local_c);
    uVar3 = *(uint *)(param_1 + 8);
    local_5 = false;
  }
  uVar5 = *(uint *)(param_1 + 0xc);
  if ((int)uVar3 <= (int)uVar5) {
    return bVar2 && bVar9;
  }
  if (uVar5 == 0) {
    *(uint *)(param_1 + 0xc) = uVar3;
    uVar5 = uVar3;
  }
  if ((int)uVar5 < (int)uVar3) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)uVar3);
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  if (0x3fffffff < (int)uVar5) {
    *(undefined4 *)(param_1 + 0xc) = 0x3fffffff;
    uVar5 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x18);
  local_c = (uint *)operator_new__(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (local_c == (uint *)0x0) {
    local_c = (uint *)0x0;
  }
  else {
    *local_c = uVar5;
    local_c = local_c + 1;
    puVar4 = local_c;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined2 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 0x12) = 0;
      puVar4 = puVar4 + 6;
    }
  }
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 != (uint *)0x0) {
    puVar8 = local_c + *(int *)(param_1 + 8) * 6;
    if (puVar4 != puVar4 + param_2 * 6) {
      puVar6 = local_c + 1;
      puVar7 = puVar4;
      do {
        if (puVar6 + -1 == puVar8) break;
        this = (ReferenceController *)*puVar6;
        puVar6[-1] = *puVar7;
        this_00 = (ReferenceController *)puVar7[1];
        *puVar6 = (uint)this_00;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        *(undefined8 *)(puVar6 + 1) = *(undefined8 *)(puVar7 + 2);
        *(char *)(puVar6 + 3) = (char)puVar7[4];
        *(undefined1 *)((int)puVar6 + 0xd) = *(undefined1 *)((int)puVar7 + 0x11);
        puVar1 = (undefined1 *)((int)puVar7 + 0x12);
        puVar7 = puVar7 + 6;
        *(undefined1 *)((int)puVar6 + 0xe) = *puVar1;
        puVar6 = puVar6 + 6;
        puVar4 = *(uint **)(param_1 + 4);
      } while (puVar7 != puVar4 + param_2 * 6);
    }
    if (puVar4 != (uint *)0x0) {
      uVar3 = puVar4[-1];
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        puVar8 = puVar4 + uVar3 * 6 + 1;
        do {
          puVar7 = puVar8 + -6;
          puVar8 = puVar8 + -6;
          uVar3 = uVar3 - 1;
          if ((ReferenceController *)*puVar7 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar7);
          }
        } while (uVar3 != 0);
        uVar3 = puVar4[-1];
      }
      operator_delete__(puVar4 + -1,uVar3 * 0x18 + 4);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(uint **)(param_1 + 4) = local_c;
  return local_5;
}


//==== 00007ed6a0 007ed6a0_FUN_007ed6a0 ====
void FUN_007ed6a0(int *param_1,int *param_2,int param_3,double *param_4,char *param_5, undefined1 *param_6);

// decompiled by BatchDecomp @ 007ed6a0 name=FUN_007ed6a0 conv=unknown body=529

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007ed6a0(int *param_1,int *param_2,int param_3,double *param_4,char *param_5,
                 undefined1 *param_6)

{
  ReferenceController *this;
  bool bVar1;
  int iVar2;
  int *piVar3;
  LauncherSubCompartment *pLVar4;
  double dVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      if (*(char *)(param_3 + 0x1c) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*param_2 < *(int *)(param_3 + 0x14)) {
        if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
           !bVar1)) {
          *piVar3 = 0;
        }
        iVar2 = (**(code **)(**(int **)(*piVar3 + 0x38) + 0x188))();
        if (iVar2 != 0) {
          if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]),
             !bVar1)) {
            *piVar3 = 0;
          }
          bVar1 = WeaponCompartment__HasAmmo((WeaponCompartment *)*piVar3);
          if (bVar1) {
            if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
               (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]), !bVar1)) {
              *piVar3 = 0;
            }
            iVar2 = (**(code **)(*(int *)*piVar3 + 0xb0))();
            if (iVar2 != 0) {
              if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
                 (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]), !bVar1)) {
                *piVar3 = 0;
              }
              dVar5 = WeaponModule__GetLaunchedFlareHeat_W(*(WeaponModule **)(*piVar3 + 0x38));
              if (*param_4 <= dVar5 && dVar5 != *param_4) {
                this = (ReferenceController *)piVar3[1];
                if (*param_5 == '\0') {
                  if ((this != (ReferenceController *)0x0) &&
                     (bVar1 = util__ReferenceController__IsDataStillValid(this), !bVar1)) {
                    *piVar3 = 0;
                  }
                  pLVar4 = (LauncherSubCompartment *)(**(code **)(*(int *)*piVar3 + 0xb0))();
                  LauncherSubCompartment__CancelLaunches(pLVar4);
                }
                else {
                  if ((this != (ReferenceController *)0x0) &&
                     (bVar1 = util__ReferenceController__IsDataStillValid(this), !bVar1)) {
                    *piVar3 = 0;
                  }
                  if (*(char *)(*piVar3 + 0x10c) != '\0') {
                    if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
                       (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]), !bVar1)) {
                      *piVar3 = 0;
                    }
                    iVar2 = *piVar3;
                    if (*(char *)(iVar2 + 0x10c) == '\0') {
                      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h"
                                      ,0x13,"IsValid()",(char *)0x0);
                      DebugBreak();
                    }
                    if (*(int *)(iVar2 + 0x108) == 0) {
                      if (((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) &&
                         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]), !bVar1)) {
                        *piVar3 = 0;
                      }
                      iVar2 = 1;
                      pLVar4 = (LauncherSubCompartment *)(**(code **)(*(int *)*piVar3 + 0xb0))();
                      LauncherSubCompartment__Launch(pLVar4,iVar2);
                      *param_6 = 1;
                      *param_2 = *param_2 + -1;
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007edc90 007edc90_FUN_007edc90 ====
void FUN_007edc90(int *param_1,TacticalAI *param_2,int param_3,char *param_4);

// decompiled by BatchDecomp @ 007edc90 name=FUN_007edc90 conv=unknown body=411

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007edc90(int *param_1,TacticalAI *param_2,int param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  WeakPtr_L_class_SpacecraftComponent_G_ *pWVar4;
  CraftBlueprint *this;
  SpacecraftTargeting *this_00;
  Type TVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      pWVar4 = (WeakPtr_L_class_SpacecraftComponent_G_ *)(**(code **)*param_1)(&local_c);
      if ((*(ReferenceController **)(pWVar4 + 4) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar4 + 4))
         , !bVar2)) {
        *(undefined4 *)pWVar4 = 0;
      }
      this = SpacecraftComponent__GetCraftDesign(*(SpacecraftComponent **)pWVar4);
      CraftBlueprint__IsAWarship_Memoize(this);
      if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 3) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      cVar1 = *(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 2);
      if ((*(ReferenceController **)(pWVar4 + 4) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar4 + 4))
         , !bVar2)) {
        *(undefined4 *)pWVar4 = 0;
      }
      this_00 = SpacecraftComponent__GetTargeting(*(SpacecraftComponent **)pWVar4);
      SpacecraftTargeting__FindAllViableTargetsInRange_Memoize(this_00);
      if ((this_00->FindAllViableTargetsInRange_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      iVar3 = (**(code **)((this_00->FindAllViableTargetsInRange_MemoizedValue).Data._pad_0x0_0 + 0xc
                          ))();
      if (cVar1 == '\0') {
        if (*(char *)(param_3 + 0x20) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        TVar5 = *(Type *)(param_3 + 0x1c);
      }
      else if (iVar3 < 1) {
        if (*param_4 == '\0') {
          TVar5 = 0;
        }
        else {
          if (*(char *)(param_3 + 0x20) == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          TVar5 = *(Type *)(param_3 + 0x18);
        }
      }
      else {
        if (*(char *)(param_3 + 0x20) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        TVar5 = *(Type *)(param_3 + 0x14);
      }
      TacticalAI__SetOrder(param_2,TVar5,pWVar4);
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ede30 007ede30_FUN_007ede30 ====
void FUN_007ede30(int *param_1,TacticalAI *param_2);

// decompiled by BatchDecomp @ 007ede30 name=FUN_007ede30 conv=unknown body=622

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007ede30(int *param_1,TacticalAI *param_2)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar1;
  CraftInstance *this;
  bool bVar2;
  char cVar3;
  int iVar4;
  WeakPtr_L_class_SpacecraftComponent_G_ *pWVar5;
  CraftBlueprint *this_00;
  undefined4 *puVar6;
  code *pcVar7;
  CombatProtocol local_124;
  ReferenceController *local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_1;
  local_10 = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  pcVar7 = DebugBreak_exref;
  if (local_10 < iVar4) {
    do {
      pWVar5 = (WeakPtr_L_class_SpacecraftComponent_G_ *)(**(code **)*param_1)(&local_10);
      if ((*(ReferenceController **)(pWVar5 + 4) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar5 + 4))
         , !bVar2)) {
        *(undefined4 *)pWVar5 = 0;
      }
      this_00 = SpacecraftComponent__GetCraftDesign(*(SpacecraftComponent **)pWVar5);
      CraftBlueprint__IsAWarship_Memoize(this_00);
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 3) == '\0'
         ) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar7)();
      }
      if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 2) != '\0'
         ) {
        iVar4 = TacticalAI__GetCombatDoctrine(param_2);
        if (*(char *)(iVar4 + 0x100) == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                          "IsValid()",(char *)0x0);
          (*pcVar7)();
        }
        cVar3 = *(char *)(iVar4 + 0x30);
        CombatProtocol___CombatProtocol(&local_124);
        pcVar7 = DebugBreak_exref;
        if (cVar3 != '\0') {
          iVar4 = TacticalAI__GetCombatDoctrine(param_2);
          pcVar7 = DebugBreak_exref;
          if (*(char *)(iVar4 + 0x100) == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17
                            ,"IsValid()",(char *)0x0);
            pcVar7 = DebugBreak_exref;
            DebugBreak();
          }
          if (*(char *)(iVar4 + 0x30) == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17
                            ,"IsValid()",(char *)0x0);
            (*pcVar7)();
          }
          TacticalAI__SetOrder(param_2,*(Type *)(iVar4 + 0x20),pWVar5);
          CombatProtocol___CombatProtocol(&local_124);
        }
      }
      if ((*(ReferenceController **)(pWVar5 + 4) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar5 + 4))
         , !bVar2)) {
        *(undefined4 *)pWVar5 = 0;
      }
      puVar6 = (undefined4 *)SpacecraftComponent__GetCraft(*(SpacecraftComponent **)pWVar5);
      if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
         !bVar2)) {
        *puVar6 = 0;
      }
      this = (CraftInstance *)*puVar6;
      CraftInstance__GetWeaponModules_Memoize(this);
      pMVar1 = &this->GetWeaponModules_MemoizedValue;
      if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar7)();
      }
      local_c = 0;
      iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
      if (local_c < iVar4) {
        do {
          puVar6 = (undefined4 *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
          if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]),
             !bVar2)) {
            *puVar6 = 0;
          }
          cVar3 = (**(code **)(*(int *)*puVar6 + 0x14))();
          if (cVar3 != '\0') {
            if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]), !bVar2)) {
              *puVar6 = 0;
            }
            (**(code **)(*(int *)*puVar6 + 0x68))();
          }
          local_c = local_c + 1;
          iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
        } while (local_c < iVar4);
      }
      if (local_18 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_18);
      }
      param_1 = local_14;
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*local_14 + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ee1f0 007ee1f0_FUN_007ee1f0 ====
void FUN_007ee1f0(int *param_1,double *param_2,int param_3);

// decompiled by BatchDecomp @ 007ee1f0 name=FUN_007ee1f0 conv=unknown body=578

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007ee1f0(int *param_1,double *param_2,int param_3)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar1;
  SpacecraftComponent *this;
  CraftInstance *this_00;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  code *pcVar7;
  double dVar8;
  ReferenceController *local_2c;
  bool local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  pcVar7 = DebugBreak_exref;
  if (local_10 < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_10);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      this = (SpacecraftComponent *)*puVar5;
      SpacecraftComponent__HasWeaponsLeft_Memoize(this);
      if ((this->HasWeaponsLeft_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        (*pcVar7)();
      }
      if ((this->HasWeaponsLeft_MemoizedValue).Data != false) {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar2)) {
          *puVar5 = 0;
        }
        puVar5 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar5);
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar2)) {
          *puVar5 = 0;
        }
        this_00 = (CraftInstance *)*puVar5;
        CraftInstance__GetWeaponModules_Memoize(this_00);
        pMVar1 = &this_00->GetWeaponModules_MemoizedValue;
        if ((this_00->GetWeaponModules_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar7)();
        }
        local_c = 0;
        iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
        if (local_c < iVar4) {
          do {
            piVar6 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
            if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]), !bVar2)) {
              *piVar6 = 0;
            }
            iVar4 = (**(code **)(**(int **)(*piVar6 + 0x38) + 0x188))();
            if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]), !bVar2)) {
              *piVar6 = 0;
            }
            cVar3 = (**(code **)(**(int **)(*piVar6 + 0x38) + 0x180))();
            if (cVar3 == '\0') {
LAB_007ee38d:
              if (iVar4 != 0) {
                if (*(char *)(param_3 + 0x38) == '\0') {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h"
                                  ,0x17,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                if (*(char *)(param_3 + 0x21) == '\0') goto LAB_007ee3bc;
              }
              local_14 = true;
            }
            else {
              if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
                 (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]), !bVar2)) {
                *piVar6 = 0;
              }
              dVar8 = WeaponCompartment__GetAmmoLeft_Percent((WeaponCompartment *)*piVar6);
              if (*param_2 <= dVar8 && dVar8 != *param_2) goto LAB_007ee38d;
LAB_007ee3bc:
              local_14 = false;
            }
            if (((ReferenceController *)piVar6[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar6[1]), !bVar2)) {
              *piVar6 = 0;
            }
            WeaponCompartment__ToggleIgnoreRange((WeaponCompartment *)*piVar6,local_14);
            local_c = local_c + 1;
            iVar4 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
            pcVar7 = DebugBreak_exref;
          } while (local_c < iVar4);
        }
        if (local_2c != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_2c);
        }
      }
      local_10 = local_10 + 1;
      iVar4 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ee440 007ee440_FUN_007ee440 ====
void FUN_007ee440(int *param_1);

// decompiled by BatchDecomp @ 007ee440 name=FUN_007ee440 conv=unknown body=486

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007ee440(int *param_1)

{
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar1;
  CraftInstance *this;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  CraftBlueprint *this_00;
  LauncherSubCompartment *this_01;
  ReferenceController *local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_10);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      puVar4 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar4);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      this = (CraftInstance *)*puVar4;
      CraftInstance__GetWeaponModules_Memoize(this);
      pMVar1 = &this->GetWeaponModules_MemoizedValue;
      if ((this->GetWeaponModules_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_c = 0;
      iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
      if (local_c < iVar3) {
        do {
          piVar5 = (int *)(**(code **)*(int *)&pMVar1->Data)(&local_c);
          if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
             !bVar2)) {
            *piVar5 = 0;
          }
          this_00 = (CraftBlueprint *)(**(code **)(**(int **)(*piVar5 + 0x38) + 0x188))();
          if (this_00 != (CraftBlueprint *)0x0) {
            if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
               (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar2)) {
              *piVar5 = 0;
            }
            iVar3 = (**(code **)(*(int *)*piVar5 + 0xb0))();
            if (iVar3 != 0) {
              if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                 (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar2)) {
                *piVar5 = 0;
              }
              bVar2 = WeaponCompartment__HasAmmo((WeaponCompartment *)*piVar5);
              if (bVar2) {
                CraftBlueprint__IsADrone_Memoize(this_00);
                if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.
                                    Capacity + 1) == '\0') {
                  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h"
                                  ,0x13,"IsValid()",(char *)0x0);
                  DebugBreak();
                }
                if ((char)(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity != '\0')
                {
                  if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
                     (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar2)) {
                    *piVar5 = 0;
                  }
                  iVar3 = 1;
                  this_01 = (LauncherSubCompartment *)(**(code **)(*(int *)*piVar5 + 0xb0))();
                  LauncherSubCompartment__Launch(this_01,iVar3);
                }
              }
            }
          }
          local_c = local_c + 1;
          iVar3 = (**(code **)(*(int *)&pMVar1->Data + 0xc))();
        } while (local_c < iVar3);
      }
      if (local_18 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_18);
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007ee8f0 007ee8f0_FUN_007ee8f0 ====
void FUN_007ee8f0(Darray_L_double_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 007ee8f0 name=FUN_007ee8f0 conv=unknown body=419

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007ee8f0(Darray_L_double_G_ *param_1,int *param_2)

{
  double dVar1;
  CraftInstance *this;
  bool bVar2;
  uint uVar3;
  double *pdVar4;
  undefined4 *puVar5;
  int iVar6;
  ReferenceController *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (double *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  uVar3 = (**(code **)(*param_2 + 0xc))();
  param_1->_pad_0x0_0 = (int)((void *)(0x0091da54u));
  param_1->Data = (double *)0x0;
  param_1->Size = 0;
  param_1->Capacity = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    param_1->Capacity = 0;
  }
  else if (0 < (int)uVar3) {
    local_c = -(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 8);
    pdVar4 = (double *)operator_new__(local_c);
    if (pdVar4 == (double *)0x0) {
      pdVar4 = (double *)0x0;
    }
    else {
      memset(pdVar4,0,local_c);
    }
    iVar6 = 0;
    param_1->Data = pdVar4;
    if (0 < param_1->Capacity) {
      do {
        param_1->Data[iVar6] = 0.0;
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_1->Capacity);
    }
  }
  local_c = 0;
  iVar6 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar6) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      puVar5 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar5);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      this = (CraftInstance *)*puVar5;
      CraftInstance__GetHeatSignature_W_Memoize(this);
      if ((this->GetTightenedRadius_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar1 = (this->GetTightenedRadius_km_MemoizedValue).Data;
      if (local_14 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_14);
      }
      iVar6 = param_1->Size;
      local_10 = iVar6 + 1;
      util__Darray_double___SetSize(param_1,&local_10);
      bVar2 = util__Darray_double___CheckSize(param_1,iVar6);
      if (bVar2) {
        param_1->Data[param_1->Size + -1] = dVar1;
      }
      local_c = local_c + 1;
      iVar6 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f0320 007f0320_BurnMissilesIfNotFastEnough ====
// decompiled by BatchDecomp @ 007f0320 name=BurnMissilesIfNotFastEnough conv=__thiscall body=502

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall TacticalAI__BurnMissilesIfNotFastEnough(void)const  */

void __thiscall TacticalAI__BurnMissilesIfNotFastEnough(TacticalAI *this)

{
  char cVar1;
  TacticalAI *this_00;
  bool bVar2;
  int iVar3;
  int *piVar4;
  WeakPtr_L_class_SpacecraftComponent_G_ *pWVar5;
  CraftBlueprint *this_01;
  code *pcVar6;
  CombatProtocol local_184;
  undefined **local_7c;
  Str_L_char_G_ local_78[3];
  undefined **local_54;
  Str_L_char_G_ local_50[3];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_2c[16];
  int *local_1c;
  Type local_18;
  TacticalAI *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = this;
  iVar3 = GetCombatDoctrine(this);
  if (*(char *)(iVar3 + 0x100) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_7c = ((void *)(0x00919980u));
  util__Str_char___Str_char(local_78,(Str_L_char_G_ *)(iVar3 + 0x7c));
  cVar1 = *(char *)(iVar3 + 0x98);
  CombatProtocol___CombatProtocol(&local_184);
  if (cVar1 != '\0') {
    piVar4 = (int *)GetAlliedShotCrafts(this);
    local_c = 0;
    local_1c = piVar4;
    iVar3 = (**(code **)(*piVar4 + 0xc))();
    if (local_c < iVar3) {
      do {
        pWVar5 = (WeakPtr_L_class_SpacecraftComponent_G_ *)(**(code **)*piVar4)(&local_c);
        if ((*(ReferenceController **)(pWVar5 + 4) != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar5 + 4)), !bVar2)) {
          *(undefined4 *)pWVar5 = 0;
        }
        this_01 = SpacecraftComponent__GetCraftDesign(*(SpacecraftComponent **)pWVar5);
        CraftBlueprint__IsAMissile_Memoize(this_01);
        pcVar6 = DebugBreak_exref;
        if (*(char *)((int)&(this_01->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 3) ==
            '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          pcVar6 = DebugBreak_exref;
          DebugBreak();
        }
        if (*(char *)((int)&(this_01->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 2) !=
            '\0') {
          iVar3 = GetCombatDoctrine(local_14);
          if (*(char *)(iVar3 + 0x100) == '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17
                            ,"IsValid()",(char *)0x0);
            (*pcVar6)();
          }
          local_54 = ((void *)(0x00919980u));
          util__Str_char___Str_char(local_50,(Str_L_char_G_ *)(iVar3 + 0x7c));
          local_18 = *(Type *)(iVar3 + 0x90);
          local_d = *(char *)(iVar3 + 0x98);
          CombatProtocol___CombatProtocol(&local_184);
          this_00 = local_14;
          bVar2 = DoesEnemyOnlyHaveMissiles(local_14);
          if (!bVar2) {
            if ((bool)local_d == bVar2) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x17,"IsValid()",(char *)0x0);
              (*pcVar6)();
            }
            SetOrder(this_00,local_18,pWVar5);
          }
          if (local_50[0].Data != (char *)0x0) {
            operator_delete__(local_50[0].Data);
          }
        }
        piVar4 = local_1c;
        local_c = local_c + 1;
        iVar3 = (**(code **)(*local_1c + 0xc))();
      } while (local_c < iVar3);
    }
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_2c);
  }
  if (local_78[0].Data != (char *)0x0) {
    operator_delete__(local_78[0].Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f0bc0 007f0bc0_EnableIgnoreRange ====
void FUN_007ee1f0(int *param_1,double *param_2,int param_3);

// decompiled by BatchDecomp @ 007f0bc0 name=EnableIgnoreRange conv=__thiscall body=681

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: void __thiscall TacticalAI__EnableIgnoreRange(void)const  */

void __thiscall TacticalAI__EnableIgnoreRange(TacticalAI *this)

{
  CraftInstance *this_00;
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  Maybe_L_util__Darray_L_util__WeakPtr_L_WeaponCompartment_G___G___G_ *pMVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined ***pppuVar9;
  CombatProtocol local_180;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_78[20];
  ReferenceController *local_64;
  TacticalAI *local_60;
  int *local_5c;
  undefined8 local_58;
  undefined **local_50;
  Str_L_char_G_ local_4c;
  char local_40;
  undefined8 local_38;
  char local_30;
  undefined1 local_2f;
  undefined **local_2c;
  void *local_28;
  char local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_60 = this;
  iVar2 = GetCombatDoctrine(this);
  pcVar7 = DebugBreak_exref;
  if (*(char *)(iVar2 + 0x100) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_50 = ((void *)(0x00919980u));
  util__Str_char___Str_char(&local_4c,(Str_L_char_G_ *)(iVar2 + 0xa4));
  local_50 = ((void *)(0x0093d910u));
  local_40 = *(char *)(iVar2 + 0xb0);
  local_38 = *(undefined8 *)(iVar2 + 0xb8);
  local_30 = *(char *)(iVar2 + 0xc0);
  local_2f = *(undefined1 *)(iVar2 + 0xc1);
  util__Darray_bool____Darray_bool((Darray_L_bool_P_G_ *)&local_2c,(Darray_L_bool_P_G_ *)(iVar2 + 0xc4));
  local_18 = *(char *)(iVar2 + 0xd8);
  CombatProtocol___CombatProtocol(&local_180);
  if ((local_18 != '\0') && (local_40 == '\0')) {
    local_58 = local_38;
    piVar3 = (int *)GetThreateningEnemyShips(this);
    local_10 = 0;
    local_5c = piVar3;
    iVar2 = (**(code **)(*piVar3 + 0xc))();
    if (local_10 < iVar2) {
      do {
        puVar4 = (undefined4 *)(**(code **)*piVar3)(&local_10);
        if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
          if (!bVar1) {
            *puVar4 = 0;
          }
        }
        puVar4 = (undefined4 *)SpacecraftComponent__GetCraft((SpacecraftComponent *)*puVar4);
        if ((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]);
          if (!bVar1) {
            *puVar4 = 0;
          }
        }
        this_00 = (CraftInstance *)*puVar4;
        CraftInstance__GetWeaponModules_Memoize(this_00);
        pMVar6 = &this_00->GetWeaponModules_MemoizedValue;
        if ((this_00->GetWeaponModules_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          (*pcVar7)();
        }
        local_c = 0;
        iVar2 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
        if (local_c < iVar2) {
          do {
            piVar3 = (int *)(**(code **)*(int *)&pMVar6->Data)(&local_c);
            if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
              bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
              if (!bVar1) {
                *piVar3 = 0;
              }
            }
            if (*(char *)(*piVar3 + 0x110) != '\0') {
              bVar1 = true;
              goto LAB_007f0d84;
            }
            local_c = local_c + 1;
            iVar2 = (**(code **)(*(int *)&pMVar6->Data + 0xc))();
          } while (local_c < iVar2);
        }
        bVar1 = false;
LAB_007f0d84:
        if (local_64 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(local_64);
        }
        piVar3 = local_5c;
        if (bVar1) {
          bVar1 = true;
          goto LAB_007f0db6;
        }
        local_10 = local_10 + 1;
        iVar2 = (**(code **)(*local_5c + 0xc))();
        pcVar7 = DebugBreak_exref;
      } while (local_10 < iVar2);
    }
    bVar1 = false;
LAB_007f0db6:
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_78);
    if (!bVar1) {
      if (local_18 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (local_30 != '\0') goto LAB_007f0e0e;
    }
    pppuVar9 = &local_50;
    puVar8 = &local_58;
    uVar5 = GetAlliedShips(local_60);
    FUN_007ee1f0(uVar5,puVar8,pppuVar9);
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_78);
  }
LAB_007f0e0e:
  local_2c = ((void *)(0x009194a4u));
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  local_28 = (void *)0x0;
  local_2c = ((void *)(0x00919488u));
  local_50 = ((void *)(0x00919980u));
  if (local_4c.Data != (char *)0x0) {
    operator_delete__(local_4c.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f4330 007f4330_FUN_007f4330 ====
void FUN_007f4330(int *param_1,int *param_2,double *param_3);

// decompiled by BatchDecomp @ 007f4330 name=FUN_007f4330 conv=unknown body=603

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f4330(int *param_1,int *param_2,double *param_3)

{
  Body *this;
  Body *this_00;
  bool bVar1;
  int iVar2;
  int *piVar3;
  SpacecraftTargeting *pSVar4;
  Vec3_L_double_G_ *pVVar5;
  Vec3_L_double_G_ *pVVar6;
  Maybe_L_double_G_ *pMVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  ReferenceController *pRVar12;
  Vec3_L_double_G_ local_5c;
  Vec3_L_double_G_ local_44;
  Maybe_L_double_G_ local_2c;
  double local_1c;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar2) {
    do {
      piVar3 = (int *)(**(code **)*param_1)(&local_c);
      pRVar12 = (ReferenceController *)param_2[1];
      if (((ReferenceController *)piVar3[1] != pRVar12) || (*piVar3 != *param_2)) {
        if (pRVar12 != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid(pRVar12);
          if (!bVar1) {
            *param_2 = 0;
          }
        }
        iVar2 = *param_2;
        if (*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8));
          if (!bVar1) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
        }
        local_14 = (double)CONCAT44(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x1e0),
                                    (undefined4)local_14);
        if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
          if (!bVar1) {
            *piVar3 = 0;
          }
        }
        iVar2 = *piVar3;
        if (*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) {
          bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8));
          if (!bVar1) {
            *(undefined4 *)(iVar2 + 4) = 0;
          }
        }
        if (((slice_view *)&local_14)->_4_4_ != *(int *)(*(int *)(iVar2 + 4) + 0x1e0)) {
          if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
            if (!bVar1) {
              *param_2 = 0;
            }
          }
          uVar11 = *(undefined4 *)(*param_2 + 4);
          pRVar12 = *(ReferenceController **)(*param_2 + 8);
          if (pRVar12 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(pRVar12);
          }
          if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
            if (!bVar1) {
              *piVar3 = 0;
            }
          }
          pSVar4 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*piVar3);
          local_1c = SpacecraftTargeting__GetMaxRangeAgainstThis_km(pSVar4,uVar11,pRVar12);
          if ((ReferenceController *)piVar3[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar3[1]);
            if (!bVar1) {
              *piVar3 = 0;
            }
          }
          iVar2 = *piVar3;
          if (*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8));
            if (!bVar1) {
              *(undefined4 *)(iVar2 + 4) = 0;
            }
          }
          this = *(Body **)(iVar2 + 4);
          if ((ReferenceController *)param_2[1] != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)param_2[1]);
            if (!bVar1) {
              *param_2 = 0;
            }
          }
          iVar2 = *param_2;
          if (*(ReferenceController **)(iVar2 + 8) != (ReferenceController *)0x0) {
            bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 8));
            if (!bVar1) {
              *(undefined4 *)(iVar2 + 4) = 0;
            }
          }
          this_00 = *(Body **)(iVar2 + 4);
          pVVar5 = Body__GetPosition_km(this,&local_44);
          pVVar6 = Body__GetPosition_km(this_00,&local_5c);
          dVar10 = pVVar6->Y - pVVar5->Y;
          dVar9 = pVVar6->X - pVVar5->X;
          dVar8 = pVVar6->Z - pVVar5->Z;
          local_14 = dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8;
          pMVar7 = util__Sqrt(&local_2c,(double *)&local_14);
          if (pMVar7->IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          if (pMVar7->Data <= local_1c + *param_3) {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
      local_c = local_c + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f4c10 007f4c10_FUN_007f4c10 ====
void FUN_007f4c10(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 007f4c10 name=FUN_007f4c10 conv=unknown body=658

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f4c10(undefined4 *param_1,int *param_2)

{
  Body *this;
  bool bVar1;
  bool bVar2;
  ReferenceController *this_00;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  CraftBlueprint *this_01;
  double *pdVar6;
  ReferenceController *pRVar7;
  ReferenceController *local_44;
  double local_40;
  undefined1 local_38[16];
  undefined4 *local_28;
  undefined1 *local_24;
  double local_20;
  undefined8 local_18;
  undefined8 local_10;
  double *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  local_24 = (undefined1 *)0x0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0.0;
  local_c = (double *)0x0;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if ((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]);
        if (!bVar3) {
          *puVar5 = 0;
        }
      }
      this = (Body *)*puVar5;
      Body__GetSpacecraftComponent_Memoize(this);
      if ((this->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pRVar7 = (this->GetSpacecraftComponent_MemoizedValue).Data.Controller;
      if (pRVar7 != (ReferenceController *)0x0) {
        bVar3 = util__ReferenceController__IsDataStillValid(pRVar7);
        if (!bVar3) {
          (this->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
        }
      }
      this_01 = SpacecraftComponent__GetCraftDesign((this->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
      ((slice_view *)&local_38)->_8_8_ = CraftBlueprint__GetGreatestDecoyPower_W(this_01);
      if ((/*0000000000000000*/0.0 < (double)((slice_view *)&local_38)->_8_8_) &&
         (((char)local_10 == '\0' || (local_20 < (double)((slice_view *)&local_38)->_8_8_)))) {
        pRVar7 = (ReferenceController *)puVar5[1];
        local_24 = (undefined1 *)*puVar5;
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        this_00 = ((slice_view *)&local_18)->_4_4_;
        local_18 = CONCAT44(pRVar7,local_24);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar7);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        ((slice_view *)&local_10)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&local_10)->_1_3_[0] | (((slice_view *)&local_10)->_1_3_[1] << 8) | (((slice_view *)&local_10)->_1_3_[2] << 16)) << 8));
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
        local_20 = (double)((slice_view *)&local_38)->_8_8_;
      }
      local_c = (double *)((int)local_c + 1);
      iVar4 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar4);
  }
  if ((char)local_10 == '\0') {
    local_44 = (ReferenceController *)0x0;
    local_40 = 0.0;
    pdVar6 = (double *)0x0;
    pRVar7 = (ReferenceController *)local_38;
    local_38[0] = 0;
    bVar2 = false;
    bVar1 = false;
    bVar3 = true;
  }
  else {
    pRVar7 = ((slice_view *)&local_18)->_4_4_;
    local_c = (double *)local_18;
    if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
    }
    ((slice_view *)&local_38)->_8_8_ = local_20;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
      if (pRVar7 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar7);
        util__ReferenceController__ReleaseWeakReference(pRVar7);
        if (pRVar7 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar7);
        }
      }
    }
    local_44 = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar7);
    }
    bVar2 = true;
    bVar1 = true;
    bVar3 = false;
    local_38[0] = 1;
    pdVar6 = local_c;
    local_40 = (double)((slice_view *)&local_38)->_8_8_;
  }
  local_c = &local_40;
  local_24 = local_38;
  *local_28 = pdVar6;
  local_28[1] = local_44;
  if (local_44 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(local_44);
  }
  *(double *)(local_28 + 2) = *local_c;
  *(undefined1 *)(local_28 + 4) = *local_24;
  if (bVar3) {
    if (local_44 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(local_44);
    }
  }
  if ((bVar1) && (local_44 != (ReferenceController *)0x0)) {
    util__ReferenceController__ReleaseWeakReference(local_44);
  }
  if ((pRVar7 != (ReferenceController *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f5260 007f5260_FUN_007f5260 ====
void FUN_007f5260(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 007f5260 name=FUN_007f5260 conv=unknown body=441

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f5260(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  Body *pBVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      pBVar1 = (Body *)*puVar5;
      Body__GetColliderComponent_Memoize(pBVar1);
      if ((pBVar1->GetColliderComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((pBVar1->GetColliderComponent_MemoizedValue).Data.Pointer != (Component *)0x0) {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar3)) {
          *puVar5 = 0;
        }
        pBVar1 = (Body *)*puVar5;
        Body__GetUntrackComponent_Memoize(pBVar1);
        if ((pBVar1->GetUntrackComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((((pBVar1->GetUntrackComponent_MemoizedValue).Data.Pointer != (UntrackComponent *)0x0)
            && (pRVar2 = (pBVar1->GetUntrackComponent_MemoizedValue).Data.Controller,
               pRVar2 != (ReferenceController *)0x0)) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), bVar3)) {
          if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
             (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
             !bVar3)) {
            *puVar5 = 0;
          }
          pBVar1 = (Body *)*puVar5;
          Body__GetUntrackComponent_Memoize(pBVar1);
          if ((pBVar1->GetUntrackComponent_MemoizedValue).IsValidData == false) {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          pRVar2 = (pBVar1->GetUntrackComponent_MemoizedValue).Data.Controller;
          if ((pRVar2 != (ReferenceController *)0x0) &&
             (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar3)) {
            (pBVar1->GetUntrackComponent_MemoizedValue).Data.Pointer = (UntrackComponent *)0x0;
          }
          bVar3 = UntrackComponent__IsDoomed((pBVar1->GetUntrackComponent_MemoizedValue).Data.Pointer);
          if (bVar3) goto LAB_007f53f5;
        }
        iVar4 = *(int *)(param_3 + 8);
        local_10 = iVar4 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_10);
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar4);
        if (bVar3) {
          pRVar2 = *(ReferenceController **)(*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 8)
          ;
          iVar4 = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8;
          *(undefined4 *)(iVar4 + -8) = *puVar5;
          this = (ReferenceController *)puVar5[1];
          *(ReferenceController **)(iVar4 + -4) = this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (pRVar2 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar2);
          }
        }
      }
LAB_007f53f5:
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f5420 007f5420_FUN_007f5420 ====
void FUN_007f5420(int *param_1,int *param_2,undefined4 *param_3,double *param_4);

// decompiled by BatchDecomp @ 007f5420 name=FUN_007f5420 conv=unknown body=395

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f5420(int *param_1,int *param_2,undefined4 *param_3,double *param_4)

{
  double *pdVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  Vec3_L_double_G_ local_50;
  Vec3_L_double_G_ local_38;
  double local_20;
  int *local_18;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pdVar1 = (double *)*param_2;
      pVVar5 = Body__GetPosition_km((Body *)*puVar4,&local_38);
      dVar9 = pVVar5->X - *pdVar1;
      dVar7 = pVVar5->Y - pdVar1[1];
      dVar8 = pVVar5->Z - pdVar1[2];
      local_14 = dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8;
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      iVar3 = *param_2;
      pVVar5 = Body__GetVelocity_km__s((Body *)*puVar4,&local_50);
      dVar9 = pVVar5->Y - *(double *)(iVar3 + 0x20);
      dVar8 = pVVar5->X - *(double *)(iVar3 + 0x18);
      dVar7 = pVVar5->Z - *(double *)(iVar3 + 0x28);
      local_20 = dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7 + local_14;
      if ((*(char *)(param_3 + 2) == '\0') || (local_20 < *param_4)) {
        this = (ReferenceController *)puVar4[1];
        local_14 = (double)CONCAT44(*puVar4,(undefined4)local_14);
        uVar6 = *puVar4;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
          uVar6 = ((slice_view *)&local_14)->_4_4_;
        }
        this_00 = (ReferenceController *)param_3[1];
        *param_3 = uVar6;
        param_3[1] = this;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
        *(undefined1 *)(param_3 + 2) = 1;
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
        *param_4 = local_20;
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f55b0 007f55b0_FUN_007f55b0 ====
void FUN_007f55b0(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 007f55b0 name=FUN_007f55b0 conv=unknown body=429

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f55b0(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  Body *pBVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  CraftBlueprint *this_00;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      pBVar1 = (Body *)*puVar5;
      Body__GetSpacecraftComponent_Memoize(pBVar1);
      if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer !=
            (SpacecraftComponent *)0x0) &&
          (pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller,
          pRVar2 != (ReferenceController *)0x0)) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), bVar3)) {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar3)) {
          *puVar5 = 0;
        }
        pBVar1 = (Body *)*puVar5;
        Body__GetSpacecraftComponent_Memoize(pBVar1);
        if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
        if ((pRVar2 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar3)) {
          (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
        }
        this_00 = SpacecraftComponent__GetCraftDesign((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
        CraftBlueprint__IsAMissile_Memoize(this_00);
        if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 3) ==
            '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Size + 2) !=
            '\0') {
          iVar4 = *(int *)(param_3 + 8);
          local_10 = iVar4 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_10);
          bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar4);
          if (bVar3) {
            pRVar2 = *(ReferenceController **)
                      (*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 8);
            iVar4 = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8;
            *(undefined4 *)(iVar4 + -8) = *puVar5;
            this = (ReferenceController *)puVar5[1];
            *(ReferenceController **)(iVar4 + -4) = this;
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this);
            }
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar2);
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f5760 007f5760_FUN_007f5760 ====
void FUN_007f5760(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 007f5760 name=FUN_007f5760 conv=unknown body=429

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f5760(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  Body *pBVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  CraftBlueprint *this_00;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      pBVar1 = (Body *)*puVar5;
      Body__GetSpacecraftComponent_Memoize(pBVar1);
      if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer !=
            (SpacecraftComponent *)0x0) &&
          (pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller,
          pRVar2 != (ReferenceController *)0x0)) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), bVar3)) {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar3)) {
          *puVar5 = 0;
        }
        pBVar1 = (Body *)*puVar5;
        Body__GetSpacecraftComponent_Memoize(pBVar1);
        if ((pBVar1->GetSpacecraftComponent_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        pRVar2 = (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Controller;
        if ((pRVar2 != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid(pRVar2), !bVar3)) {
          (pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer = (SpacecraftComponent *)0x0;
        }
        this_00 = SpacecraftComponent__GetCraftDesign((pBVar1->GetSpacecraftComponent_MemoizedValue).Data.Pointer);
        CraftBlueprint__IsADrone_Memoize(this_00);
        if (*(char *)((int)&(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 1)
            == '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if ((char)(this_00->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity != '\0') {
          iVar4 = *(int *)(param_3 + 8);
          local_10 = iVar4 + 1;
          util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,&local_10);
          bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar4);
          if (bVar3) {
            pRVar2 = *(ReferenceController **)
                      (*(int *)(param_3 + 4) + -4 + *(int *)(param_3 + 8) * 8);
            iVar4 = *(int *)(param_3 + 4) + *(int *)(param_3 + 8) * 8;
            *(undefined4 *)(iVar4 + -8) = *puVar5;
            this = (ReferenceController *)puVar5[1];
            *(ReferenceController **)(iVar4 + -4) = this;
            if (this != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(this);
            }
            if (pRVar2 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar2);
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f5910 007f5910_FUN_007f5910 ====
void FUN_007f5910(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 007f5910 name=FUN_007f5910 conv=unknown body=396

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f5910(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  int iVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Vec3_L_double_G_ *pVVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  Vec3_L_double_G_ local_48;
  double local_30;
  double local_28;
  double local_20;
  int *local_18;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      local_14 = *(double *)(*param_2 + 0x220);
      fVar6 = (float10)(**(code **)(*(int *)*puVar4 + 0x44))();
      iVar3 = *param_2;
      local_30 = (double)(fVar6 + (float10)local_14);
      local_14 = *(double *)(iVar3 + 0x1f0) + *(double *)(iVar3 + 0x128);
      local_20 = *(double *)(iVar3 + 0x130) + *(double *)(iVar3 + 0x1f8);
      local_28 = *(double *)(iVar3 + 0x138) + *(double *)(iVar3 + 0x200);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pVVar5 = CelestialObject__GetPosition_km((CelestialObject *)*puVar4,&local_48);
      dVar9 = pVVar5->Y - local_20;
      dVar8 = pVVar5->X - local_14;
      dVar7 = pVVar5->Z - local_28;
      if (dVar9 * dVar9 + dVar8 * dVar8 + dVar7 * dVar7 <= local_30 * local_30) {
        iVar3 = *(int *)(param_3 + 8);
        local_14 = (double)CONCAT44(iVar3 + 1,(undefined4)local_14);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,(int *)((int)&local_14 + 4))
        ;
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar3);
        if (bVar2) {
          iVar3 = *(int *)(param_3 + 8);
          iVar1 = *(int *)(param_3 + 4);
          this = *(ReferenceController **)(iVar1 + -4 + iVar3 * 8);
          *(undefined4 *)(iVar1 + -8 + iVar3 * 8) = *puVar4;
          this_00 = (ReferenceController *)puVar4[1];
          *(ReferenceController **)(iVar1 + -4 + iVar3 * 8) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
        }
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f5aa0 007f5aa0_FUN_007f5aa0 ====
void FUN_007f5aa0(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 007f5aa0 name=FUN_007f5aa0 conv=unknown body=402

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f5aa0(int *param_1,int *param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  int iVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  float10 fVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  Vec3_L_double_G_ *pVVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  Vec3_L_double_G_ local_48;
  double local_30;
  double local_28;
  double local_20;
  int *local_18;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar4 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      local_14 = *(double *)(*param_2 + 0x220);
      fVar7 = (float10)(**(code **)(*(int *)*puVar5 + 0x44))();
      iVar4 = *param_2;
      fVar2 = (float10)local_14;
      local_14 = *(double *)(iVar4 + 0x1f0) + *(double *)(iVar4 + 0x128);
      local_30 = (double)(fVar7 * (float10)/*4000000000000000*/2.0 + fVar2);
      local_20 = *(double *)(iVar4 + 0x130) + *(double *)(iVar4 + 0x1f8);
      local_28 = *(double *)(iVar4 + 0x138) + *(double *)(iVar4 + 0x200);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      pVVar6 = CelestialObject__GetPosition_km((CelestialObject *)*puVar5,&local_48);
      dVar10 = pVVar6->Y - local_20;
      dVar9 = pVVar6->X - local_14;
      dVar8 = pVVar6->Z - local_28;
      if (dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8 <= local_30 * local_30) {
        iVar4 = *(int *)(param_3 + 8);
        local_14 = (double)CONCAT44(iVar4 + 1,(undefined4)local_14);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,(int *)((int)&local_14 + 4))
        ;
        bVar3 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_3,iVar4);
        if (bVar3) {
          iVar4 = *(int *)(param_3 + 8);
          iVar1 = *(int *)(param_3 + 4);
          this = *(ReferenceController **)(iVar1 + -4 + iVar4 * 8);
          *(undefined4 *)(iVar1 + -8 + iVar4 * 8) = *puVar5;
          this_00 = (ReferenceController *)puVar5[1];
          *(ReferenceController **)(iVar1 + -4 + iVar4 * 8) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
        }
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar4 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar4);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f6080 007f6080_FUN_007f6080 ====
void FUN_007f6080(int *param_1,undefined4 *param_2,int *param_3,double *param_4);

// decompiled by BatchDecomp @ 007f6080 name=FUN_007f6080 conv=unknown body=428

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f6080(int *param_1,undefined4 *param_2,int *param_3,double *param_4)

{
  double *pdVar1;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar2;
  int iVar3;
  int *piVar4;
  CraftBlueprint *pCVar5;
  Vec3_L_double_G_ *pVVar6;
  Maybe_L_double_G_ *pMVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  Vec3_L_double_G_ local_48;
  Maybe_L_double_G_ local_30;
  double local_20;
  int *local_18;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_c = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar2)) {
        *piVar4 = 0;
      }
      pCVar5 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*piVar4);
      if (pCVar5 == *(CraftBlueprint **)*param_2) {
        if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
           !bVar2)) {
          *piVar4 = 0;
        }
        iVar3 = *piVar4;
        if ((*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8)), !bVar2)) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
        pdVar1 = (double *)param_2[1];
        pVVar6 = Body__GetPosition_km(*(Body **)(iVar3 + 4),&local_48);
        dVar10 = pVVar6->Y - pdVar1[1];
        dVar9 = pVVar6->X - *pdVar1;
        dVar8 = pVVar6->Z - pdVar1[2];
        local_14 = dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8;
        pMVar7 = util__Sqrt(&local_30,(double *)&local_14);
        if (pMVar7->IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        local_20 = pMVar7->Data;
        if (((char)param_3[2] == '\0') || (local_20 < *param_4)) {
          this = (ReferenceController *)piVar4[1];
          local_14 = (double)CONCAT44(*piVar4,(undefined4)local_14);
          iVar3 = *piVar4;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
            iVar3 = ((slice_view *)&local_14)->_4_4_;
          }
          this_00 = (ReferenceController *)param_3[1];
          *param_3 = iVar3;
          param_3[1] = (int)this;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this);
          }
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this_00);
          }
          *(undefined1 *)(param_3 + 2) = 1;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
          *param_4 = local_20;
        }
      }
      param_1 = local_18;
      local_c = local_c + 1;
      iVar3 = (**(code **)(*local_18 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f6630 007f6630_FUN_007f6630 ====
void FUN_007f6630(Darray_L_double_G_ *param_1,int *param_2,Line3_L_double_G_ *param_3);

// decompiled by BatchDecomp @ 007f6630 name=FUN_007f6630 conv=unknown body=406

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f6630(Darray_L_double_G_ *param_1,int *param_2,Line3_L_double_G_ *param_3)

{
  Body *this;
  Vec3_L_double_G_ VVar1;
  Darray_L_double_G_ *this_00;
  bool bVar2;
  int iVar3;
  int *piVar4;
  double dVar5;
  undefined8 local_30;
  Darray_L_double_G_ *local_28;
  Vec3_L_double_G_ local_24;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28 = param_1;
  param_1->_pad_0x0_0 = 0;
  param_1->Data = (double *)0x0;
  param_1->Size = 0;
  param_1->Capacity = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  util__Darray_double___Darray_double(param_1,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_2)(&local_c);
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      iVar3 = *piVar4;
      if (*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8));
        if (!bVar2) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
      }
      Body__GetPosition_km(*(Body **)(iVar3 + 4),&local_24);
      if ((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]);
        if (!bVar2) {
          *piVar4 = 0;
        }
      }
      iVar3 = *piVar4;
      if (*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8));
        if (!bVar2) {
          *(undefined4 *)(iVar3 + 4) = 0;
        }
      }
      this = *(Body **)(iVar3 + 4);
      Body__GetRadius_km_Memoize(this);
      if ((this->GetRadius_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_30 = (this->GetRadius_km_MemoizedValue).Data;
      ((slice_view *)&VVar1.X)->_4_4_ = ((slice_view *)&local_24.X)->_4_4_;
      ((slice_view *)&VVar1.X)->_0_4_ = ((slice_view *)&local_24.X)->_0_4_;
      ((slice_view *)&VVar1.Y)->_0_4_ = ((slice_view *)&local_24.Y)->_0_4_;
      ((slice_view *)&VVar1.Y)->_4_4_ = ((slice_view *)&local_24.Y)->_4_4_;
      ((slice_view *)&VVar1.Z)->_0_4_ = *(undefined4 *)&local_24.Z;
      ((slice_view *)&VVar1.Z)->_4_4_ = (int)((ulonglong)local_24.Z >> 0x20);
      dVar5 = util__FUN_007f6630(*param_3,VVar1);
      this_00 = local_28;
      dVar5 = dVar5 + local_30;
      iVar3 = local_28->Size;
      local_30 = (double)CONCAT44(iVar3 + 1,(undefined4)local_30);
      util__Darray_double___SetSize(local_28,(int *)((int)&local_30 + 4));
      bVar2 = util__Darray_double___CheckSize(this_00,iVar3);
      if (bVar2) {
        this_00->Data[this_00->Size + -1] = dVar5;
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar3);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f69b0 007f69b0_FUN_007f69b0 ====
void FUN_007f69b0(Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 007f69b0 name=FUN_007f69b0 conv=unknown body=511

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f69b0(Darray_L_class_util__Darray_L_struct_WorldLight_G___G_ *param_1,int *param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_20;
  undefined **local_1c;
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar3 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0093cfb4u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar3;
  if (((int)uVar3 < 0) || (0x3fffffff < (int)uVar3)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar3) {
    uVar6 = -(uint)((int)((ulonglong)uVar3 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x10);
    puVar4 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar3;
      puVar4 = puVar4 + 1;
      puVar1 = puVar4;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar1 = (uint)((void *)(0x00924d68u));
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1 = puVar1 + 4;
      }
    }
    iVar8 = 0;
    *(uint **)(param_1 + 4) = puVar4;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar7 = 0;
      do {
        local_1c = ((void *)(0x00924d68u));
        local_18 = (void *)0x0;
        local_14 = 0;
        local_10 = 0;
        util__Darray_struct_WorldLight___operator__o2
                  ((Darray_L_struct_WorldLight_G_ *)(*(int *)(param_1 + 4) + iVar7),
                   (Darray_L_struct_WorldLight_G_ *)&local_1c);
        local_1c = ((void *)(0x00924d68u));
        if (local_18 != (void *)0x0) {
          operator_delete__(local_18);
        }
        iVar8 = iVar8 + 1;
        local_18 = (void *)0x0;
        iVar7 = iVar7 + 0x10;
        local_1c = ((void *)(0x00919488u));
        param_2 = local_c;
      } while (iVar8 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = (int *)0x0;
  iVar8 = (**(code **)(*param_2 + 0xc))();
  if ((int)local_c < iVar8) {
    do {
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      SpacecraftComponent__GetWorldLights((SpacecraftComponent *)*puVar5);
      iVar8 = *(int *)(param_1 + 8);
      local_20 = iVar8 + 1;
      util__Darray_class_util__Darray_struct_WorldLight_____SetSize(param_1,&local_20);
      bVar2 = util__Darray_class_util__Darray_struct_WorldLight_____CheckSize(param_1,iVar8);
      if (bVar2) {
        util__Darray_struct_WorldLight___operator__o2
                  ((Darray_L_struct_WorldLight_G_ *)
                   (*(int *)(param_1 + 8) * 0x10 + *(int *)(param_1 + 4) + -0x10),
                   (Darray_L_struct_WorldLight_G_ *)&local_1c);
      }
      local_1c = ((void *)(0x00924d68u));
      if (local_18 != (void *)0x0) {
        operator_delete__(local_18);
      }
      local_c = (int *)((int)local_c + 1);
      local_18 = (void *)0x0;
      local_1c = ((void *)(0x00919488u));
      iVar8 = (**(code **)(*param_2 + 0xc))();
    } while ((int)local_c < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f6ce0 007f6ce0_FUN_007f6ce0 ====
void FUN_007f6ce0(int *param_1,double *param_2);

// decompiled by BatchDecomp @ 007f6ce0 name=FUN_007f6ce0 conv=unknown body=493

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f6ce0(int *param_1,double *param_2)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  double *pdVar5;
  Maybe_L_double_G_ *pMVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Maybe_L_double_G_ local_44;
  double local_34;
  undefined4 local_2c;
  Darray_L_double_G_ local_28;
  double local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_28._pad_0x0_0 = 0;
  local_28.Data = (double *)0x0;
  local_28.Size = 0;
  local_28.Capacity = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  util__Darray_double___Darray_double(&local_28,iVar3);
  local_10 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar3) {
    do {
      piVar4 = (int *)(**(code **)*param_1)(&local_10);
      if (((ReferenceController *)piVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar4[1]),
         !bVar2)) {
        *piVar4 = 0;
      }
      iVar3 = *piVar4;
      if ((*(ReferenceController **)(iVar3 + 8) != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar3 + 8)),
         !bVar2)) {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      pdVar5 = (double *)Body__GetState(*(Body **)(iVar3 + 4));
      local_34 = (param_2[1] - pdVar5[1]) * (param_2[1] - pdVar5[1]) +
                 (*param_2 - *pdVar5) * (*param_2 - *pdVar5) +
                 (param_2[2] - pdVar5[2]) * (param_2[2] - pdVar5[2]);
      pMVar6 = util__Sqrt(&local_44,&local_34);
      if (pMVar6->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      iVar3 = local_28.Size;
      local_18 = pMVar6->Data;
      local_c = local_28.Size + 1;
      util__Darray_double___SetSize(&local_28,&local_c);
      bVar2 = util__Darray_double___CheckSize(&local_28,iVar3);
      if (bVar2) {
        local_28.Data[local_28.Size + -1] = local_18;
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  iVar3 = (**(code **)(local_28._pad_0x0_0 + 0xc))();
  if (iVar3 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    local_2c = 0;
    pdVar5 = (double *)(**(code **)local_28._pad_0x0_0)(&local_2c);
    local_c = 0;
    local_18 = *pdVar5;
    iVar3 = (**(code **)(local_28._pad_0x0_0 + 0xc))();
    if (local_c < iVar3) {
      do {
        pdVar5 = (double *)(**(code **)local_28._pad_0x0_0)(&local_c);
        uVar7 = *(undefined4 *)&local_18;
        uVar8 = *(undefined4 *)((char *)&local_18 + 4);
        dVar1 = *pdVar5;
        if (dVar1 <= local_18) {
          uVar7 = *(undefined4 *)&dVar1;
          uVar8 = *(undefined4 *)((char *)&dVar1 + 4);
        }
        local_c = local_c + 1;
        local_18 = (double)CONCAT44(uVar8,uVar7);
        iVar3 = (**(code **)(local_28._pad_0x0_0 + 0xc))();
      } while (local_c < iVar3);
    }
    uVar7 = *(undefined4 *)&local_18;
    uVar8 = *(undefined4 *)((char *)&local_18 + 4);
  }
  local_18 = (double)CONCAT44(uVar8,uVar7);
  local_28._pad_0x0_0 = (int)((void *)(0x0091da54u));
  if (local_28.Data != (double *)0x0) {
    operator_delete__(local_28.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f70c0 007f70c0_FUN_007f70c0 ====
void FUN_007f70c0(undefined4 *param_1,int *param_2,TacticalManager *param_3);

// decompiled by BatchDecomp @ 007f70c0 name=FUN_007f70c0 conv=unknown body=450

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f70c0(undefined4 *param_1,int *param_2,TacticalManager *param_3)

{
  ReferenceController *this;
  ReferenceController *this_00;
  TacticalManager *pTVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Faction *pFVar5;
  Faction *pFVar6;
  Fleet *this_01;
  Fleet *this_02;
  undefined4 uVar7;
  Fleet *local_24;
  TacticalManager *local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = (Fleet *)0x0;
  local_20 = param_3;
  local_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pTVar1 = local_20;
      local_24 = (Fleet *)*puVar4;
      TacticalManager__GetStrategicGame_Memoize(local_20);
      if (*(char *)&(pTVar1->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pFVar5 = StrategicManager__GetPlayerAlliance((StrategicManager *)(pTVar1->Effects).Pointer);
      pFVar6 = Fleet__GetAlliance(local_24);
      iVar3 = iStack_14;
      if (pFVar6 == pFVar5) {
        local_24 = (Fleet *)(iStack_14 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,(int *)&local_24);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
        if (bVar2) {
          this = (ReferenceController *)puStack_18[iStack_14 * 2 + -1];
          puStack_18[iStack_14 * 2 + -2] = *puVar4;
          this_00 = (ReferenceController *)puVar4[1];
          puStack_18[iStack_14 * 2 + -1] = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (1 < iStack_14) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0x10e,"FilteredArray.Num() <= 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_14 < 1) {
    uVar7 = 0;
    bVar2 = false;
    this_01 = (Fleet *)0x0;
    this_02 = local_24;
  }
  else {
    this_01 = (Fleet *)puStack_18[1];
    uVar7 = *puStack_18;
    if (this_01 != (Fleet *)0x0) {
      util__ReferenceController__AddWeakReference((ReferenceController *)this_01);
    }
    bVar2 = true;
    this_02 = this_01;
  }
  *param_1 = uVar7;
  param_1[1] = this_01;
  if (this_01 != (Fleet *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController *)this_01);
  }
  if ((this_02 != (Fleet *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this_02);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00007f7290 007f7290_FUN_007f7290 ====
void FUN_007f7290(undefined4 *param_1,int *param_2,TacticalManager *param_3);

// decompiled by BatchDecomp @ 007f7290 name=FUN_007f7290 conv=unknown body=450

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_007f7290(undefined4 *param_1,int *param_2,TacticalManager *param_3)

{
  ReferenceController *this;
  ReferenceController *this_00;
  TacticalManager *pTVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Faction *pFVar5;
  Faction *pFVar6;
  Fleet *this_01;
  Fleet *this_02;
  undefined4 uVar7;
  Fleet *local_24;
  TacticalManager *local_20;
  undefined4 local_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24 = (Fleet *)0x0;
  local_20 = param_3;
  local_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
  local_c = 0;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar2)) {
        *puVar4 = 0;
      }
      pTVar1 = local_20;
      local_24 = (Fleet *)*puVar4;
      TacticalManager__GetStrategicGame_Memoize(local_20);
      if (*(char *)&(pTVar1->Effects).Controller == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pFVar5 = StrategicManager__GetEnemyAlliance((StrategicManager *)(pTVar1->Effects).Pointer);
      pFVar6 = Fleet__GetAlliance(local_24);
      iVar3 = iStack_14;
      if (pFVar6 == pFVar5) {
        local_24 = (Fleet *)(iStack_14 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,(int *)&local_24);
        bVar2 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,iVar3);
        if (bVar2) {
          this = (ReferenceController *)puStack_18[iStack_14 * 2 + -1];
          puStack_18[iStack_14 * 2 + -2] = *puVar4;
          this_00 = (ReferenceController *)puVar4[1];
          puStack_18[iStack_14 * 2 + -1] = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
          }
        }
      }
      local_c = local_c + 1;
      iVar3 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar3);
  }
  if (1 < iStack_14) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                    ,0x10e,"FilteredArray.Num() <= 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_14 < 1) {
    uVar7 = 0;
    bVar2 = false;
    this_01 = (Fleet *)0x0;
    this_02 = local_24;
  }
  else {
    this_01 = (Fleet *)puStack_18[1];
    uVar7 = *puStack_18;
    if (this_01 != (Fleet *)0x0) {
      util__ReferenceController__AddWeakReference((ReferenceController *)this_01);
    }
    bVar2 = true;
    this_02 = this_01;
  }
  *param_1 = uVar7;
  param_1[1] = this_01;
  if (this_01 != (Fleet *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController *)this_01);
  }
  if ((this_02 != (Fleet *)0x0) && (bVar2)) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this_02);
  }
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008066f0 008066f0_FUN_008066f0 ====
void FUN_008066f0(undefined4 *param_1,int *param_2);

// decompiled by BatchDecomp @ 008066f0 name=FUN_008066f0 conv=unknown body=516

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008066f0(undefined4 *param_1,int *param_2)

{
  double dVar1;
  Body *this;
  ReferenceController *this_00;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  double local_20;
  undefined8 local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  pcVar7 = DebugBreak_exref;
  if (iVar5 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179,
                    "ArrayToCheck.Num() > 0",(char *)0x0);
    DebugBreak();
  }
  local_18 = 0;
  bVar3 = false;
  local_20 = 0.0;
  local_c = 0;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined8 *)(**(code **)*param_2)(&local_c);
      if ((*(ReferenceController **)((int)puVar6 + 4) != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)((int)puVar6 + 4)), !bVar4)) {
        *(undefined4 *)puVar6 = 0;
      }
      this = *(Body **)puVar6;
      Body__GetMass_kg_Memoize(this);
      if ((this->GetMass_kg_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar1 = (this->GetMass_kg_MemoizedValue).Data;
      if ((!bVar3) || (local_20 < dVar1)) {
        this_00 = *(ReferenceController **)((int)puVar6 + 4);
        uVar2 = *puVar6;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
        }
        bVar3 = true;
        local_20 = dVar1;
        local_18 = uVar2;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_2 + 0xc))();
      pcVar7 = DebugBreak_exref;
    } while (local_c < iVar5);
  }
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186,
                    "BestType.IsValid()",(char *)0x0);
    (*pcVar7)();
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    (*pcVar7)();
  }
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *param_1 = (undefined4)local_18;
  param_1[1] = ((slice_view *)&local_18)->_4_4_;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  *(double *)(param_1 + 2) = local_20;
  if (((slice_view *)&local_18)->_4_4_ != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
    util__ReferenceController__ReleaseWeakReference(((slice_view *)&local_18)->_4_4_);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000806ea0 00806ea0_FUN_00806ea0 ====
void FUN_00806ea0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 00806ea0 name=FUN_00806ea0 conv=unknown body=460

void FUN_00806ea0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  undefined4 uVar3;
  ReferenceController *this;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar9 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar7 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      puVar4 = puVar7;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    iVar10 = 0;
    *(uint **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar8 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
         !bVar5)) {
        *piVar8 = 0;
      }
      pRVar2 = *(ReferenceController **)(*piVar8 + 8);
      uVar3 = *(undefined4 *)(*piVar8 + 4);
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar2);
      }
      iVar10 = *(int *)(param_1 + 8);
      local_10 = iVar10 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
      bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar10);
      if (bVar5) {
        iVar10 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 4);
        this = *(ReferenceController **)(iVar1 + -4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + -8 + iVar10 * 8) = uVar3;
        *(ReferenceController **)(iVar1 + -4 + iVar10 * 8) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (this != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this);
        }
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000808680 00808680_Tick ====
// decompiled by BatchDecomp @ 00808680 name=Tick conv=__thiscall body=440

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: virtual void __thiscall SpacecraftButton__Tick(double) */

void __thiscall SpacecraftButton__Tick(SpacecraftButton *this,double param_1)

{
  ReferenceController *pRVar1;
  bool bVar2;
  CraftBlueprint *pCVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = param_1 * /*4010000000000000*/4.0;
  pRVar1 = (this->Spacecraft).Controller;
  if ((pRVar1 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
    (this->Spacecraft).Pointer = (SpacecraftComponent *)0x0;
  }
  pCVar3 = SpacecraftComponent__GetCraftDesign((this->Spacecraft).Pointer);
  CraftBlueprint__GetShipClass_Memoize(pCVar3);
  if ((char)(pCVar3->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar7 = CraftBlueprint__GetIconSizeFromClass(*(Type *)&(pCVar3->GetMainEngineModulePlacers_MemoizedValue).IsValidData);
  dVar6 = /*4034000000000000*/20.0;
  if (/*4034000000000000*/20.0 <= dVar7) {
    dVar6 = dVar7;
  }
  dVar8 = GetRadius(this);
  dVar7 = /*3ff0000000000000*/1.0;
  if (dVar6 <= dVar8) {
    dVar7 = 0.0;
  }
  dVar6 = this->CurrentAlpha;
  if (dVar7 <= dVar6) {
    pRVar1 = (this->Spacecraft).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar2 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar2)) {
      (this->Spacecraft).Pointer = (SpacecraftComponent *)0x0;
    }
    pCVar3 = SpacecraftComponent__GetCraftDesign((this->Spacecraft).Pointer);
    CraftBlueprint__GetShipClass_Memoize(pCVar3);
    if ((char)(pCVar3->GetMainEngineModules_MemoizedValue).Data._pad_0x0_0 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar7 = CraftBlueprint__GetIconSizeFromClass(*(Type *)&(pCVar3->GetMainEngineModulePlacers_MemoizedValue).IsValidData);
    dVar6 = /*4034000000000000*/20.0;
    if (/*4034000000000000*/20.0 <= dVar7) {
      dVar6 = dVar7;
    }
    dVar8 = GetRadius(this);
    dVar7 = /*3ff0000000000000*/1.0;
    if (dVar6 <= dVar8) {
      dVar7 = 0.0;
    }
    dVar6 = this->CurrentAlpha;
    iVar4 = (dVar6 <= dVar7) - 1;
  }
  else {
    iVar4 = 1;
  }
  dVar6 = (double)iVar4 * dVar5 + dVar6;
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (/*3ff0000000000000*/1.0 <= dVar6) {
    dVar6 = /*3ff0000000000000*/1.0;
  }
  this->CurrentAlpha = dVar6;
  return;
}


//==== 0000808840 00808840_FUN_00808840 ====
void FUN_00808840(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 00808840 name=FUN_00808840 conv=unknown body=513

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00808840(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  ReferenceController *this;
  uint *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 =
       ((void *)(0x0091db14u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar9 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar7 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      puVar3 = puVar7;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
    }
    iVar10 = 0;
    *(uint **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      puVar8 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
         (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
         !bVar4)) {
        *puVar8 = 0;
      }
      bVar4 = WeaponCompartment__HasAmmo((WeaponCompartment *)*puVar8);
      if (bVar4) {
        if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
           (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
           !bVar4)) {
          *puVar8 = 0;
        }
        cVar5 = (**(code **)(*(int *)*puVar8 + 0x14))();
        if (cVar5 == '\0') {
          if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
             (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]),
             !bVar4)) {
            *puVar8 = 0;
          }
          cVar5 = (**(code **)(*(int *)*puVar8 + 0x18))();
          if (cVar5 == '\0') {
            iVar10 = *(int *)(param_1 + 8);
            local_10 = iVar10 + 1;
            util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
            bVar4 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar10);
            if (bVar4) {
              pRVar2 = *(ReferenceController **)
                        (*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
              iVar10 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
              *(undefined4 *)(iVar10 + -8) = *puVar8;
              this = (ReferenceController *)puVar8[1];
              *(ReferenceController **)(iVar10 + -4) = this;
              if (this != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(this);
              }
              if (pRVar2 != (ReferenceController *)0x0) {
                util__ReferenceController__ReleaseWeakReference(pRVar2);
              }
            }
          }
        }
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000808a50 00808a50_FUN_00808a50 ====
int * __thiscall FUN_00808a50(int param_1,int *param_2,int *param_3);

// decompiled by BatchDecomp @ 00808a50 name=FUN_00808a50 conv=unknown body=415

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int * __thiscall FUN_00808a50(int param_1,int *param_2,int *param_3)

{
  double dVar1;
  int iVar2;
  TacticalManager *pTVar3;
  Vec3_L_double_G_ VVar4;
  Vec3_L_double_G_ VVar5;
  int *piVar6;
  bool bVar7;
  int *piVar8;
  int local_24;
  ReferenceController *local_20;
  int local_1c;
  ReferenceController *local_18;
  int *local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  piVar8 = *(int **)(param_1 + 4);
  local_8 = 0;
  local_c = param_2;
  if (piVar8 != piVar8 + *(int *)(param_1 + 8) * 2) {
    local_14 = param_3;
    local_10 = param_1;
    do {
      piVar6 = local_14;
      if (((ReferenceController *)local_14[1] != (ReferenceController *)0x0) &&
         (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)local_14[1]),
         !bVar7)) {
        *piVar6 = 0;
      }
      iVar2 = *piVar6;
      pTVar3 = *(TacticalManager **)(iVar2 + 8);
      TacticalManager__GetSelectedBodiesCenter_km_Memoize(pTVar3);
      if ((pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar1 = (pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.Z;
      ((slice_view *)&VVar4.X)->_4_4_ = *(undefined4 *)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.X;
      ((slice_view *)&VVar4.X)->_0_4_ = &local_1c;
      ((slice_view *)&VVar4.Y)->_0_4_ =
           *(undefined4 *)((int)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.X + 4);
      ((slice_view *)&VVar4.Y)->_4_4_ = *(undefined4 *)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y;
      ((slice_view *)&VVar4.Z)->_0_4_ =
           *(undefined4 *)((int)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y + 4);
      ((slice_view *)&VVar4.Z)->_4_4_ = *(undefined4 *)&dVar1;
      TacticalManager__GetNearestOppositionCraftOfType(*(TacticalManager **)(iVar2 + 8),VVar4,(Faction *)((ulonglong)dVar1 >> 0x20),
                 *(CraftBlueprint **)(iVar2 + 0x178));
      if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
         (bVar7 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
         !bVar7)) {
        *piVar8 = 0;
      }
      iVar2 = *piVar8;
      pTVar3 = *(TacticalManager **)(iVar2 + 8);
      TacticalManager__GetSelectedBodiesCenter_km_Memoize(pTVar3);
      if ((pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar1 = (pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.Z;
      ((slice_view *)&VVar5.X)->_4_4_ = *(undefined4 *)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.X;
      ((slice_view *)&VVar5.X)->_0_4_ = &local_24;
      ((slice_view *)&VVar5.Y)->_0_4_ =
           *(undefined4 *)((int)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.X + 4);
      ((slice_view *)&VVar5.Y)->_4_4_ = *(undefined4 *)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y;
      ((slice_view *)&VVar5.Z)->_0_4_ =
           *(undefined4 *)((int)&(pTVar3->GetSelectedBodiesCenter_km_MemoizedValue).Data.Y + 4);
      ((slice_view *)&VVar5.Z)->_4_4_ = *(undefined4 *)&dVar1;
      TacticalManager__GetNearestOppositionCraftOfType(*(TacticalManager **)(iVar2 + 8),VVar5,(Faction *)((ulonglong)dVar1 >> 0x20),
                 *(CraftBlueprint **)(iVar2 + 0x178));
      if ((local_18 == local_20) && (local_1c == local_24)) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (local_20 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_20);
      }
      if (local_18 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(local_18);
      }
      if (bVar7) {
        *local_c = local_8;
        *(undefined1 *)(local_c + 1) = 1;
        return local_c;
      }
      piVar8 = piVar8 + 2;
      local_8 = local_8 + 1;
      param_2 = local_c;
    } while (piVar8 != (int *)(*(int *)(local_10 + 4) + *(int *)(local_10 + 8) * 8));
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}


//==== 000080a220 0080a220_AreAllSelectedCraftsTheSameType ====
extern undefined4 FUN_00809330(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 0080a220 name=AreAllSelectedCraftsTheSameType conv=__thiscall body=579

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* public: bool __thiscall Minimap__AreAllSelectedCraftsTheSameType(void)const  */

bool __thiscall Minimap__AreAllSelectedCraftsTheSameType(Minimap *this)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  CraftBlueprint *pCVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  int *local_40;
  undefined4 local_3c;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined **local_1c;
  int *piStack_18;
  int iStack_14;
  uint uStack_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (undefined4 *)0x0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  TacticalManager__GetSelectedSpacecrafts((TacticalManager *)this->_pad_0x0_0);
  local_c = local_c & 0xffffff00;
  local_3c = 0;
  piStack_38 = (int *)0x0;
  iStack_34 = 0;
  uStack_30 = 0;
  FUN_00809330(&local_3c,&local_2c,local_c);
  if (1 < iStack_34) {
    local_c = 0;
    piVar8 = piStack_38;
    for (piVar9 = piStack_38; piVar9 != piStack_38 + iStack_34; piVar9 = piVar9 + 1) {
      bVar11 = false;
      piVar10 = piStack_38;
      while ((piVar10 != piVar9 && (!bVar11))) {
        iVar7 = *piVar10;
        piVar10 = piVar10 + 1;
        bVar11 = *piVar9 == iVar7;
      }
      *piVar8 = *piVar9;
      if (!bVar11) {
        piVar8 = piVar8 + 1;
        local_c = local_c + 1;
      }
    }
    util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_3c,(int *)&local_c);
  }
  piVar9 = (int *)0x0;
  uStack_10 = 0;
  iVar7 = 0;
  local_1c = ((void *)(0x009194a4u));
  piStack_18 = (int *)0x0;
  iStack_14 = 0;
  uVar2 = (*(code *)local_2c[3])();
  if (((int)uVar2 < 0) || (0x3fffffff < (int)uVar2)) {
    uStack_10 = 0;
  }
  else {
    uStack_10 = uVar2;
    if (0 < (int)uVar2) {
      local_c = -(uint)((int)((ulonglong)uVar2 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 4);
      piVar9 = (int *)operator_new__(local_c);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        memset(piVar9,0,local_c);
      }
      piVar8 = piVar9;
      piStack_18 = piVar9;
      if (0 < (int)uVar2) {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
      }
    }
  }
  local_c = 0;
  iVar3 = (*(code *)local_2c[3])();
  if ((int)local_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)*local_2c)(&local_c);
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar11 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar11)) {
        *puVar4 = 0;
      }
      pCVar5 = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*puVar4);
      local_40 = (int *)(iVar7 + 1);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_40);
      bVar11 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar7);
      iVar7 = iStack_14;
      piVar9 = piStack_18;
      if (bVar11) {
        piStack_18[iStack_14 + -1] = (int)pCVar5;
      }
      local_c = local_c + 1;
      iVar3 = (*(code *)local_2c[3])();
    } while ((int)local_c < iVar3);
    if (1 < iVar7) {
      local_c = 0;
      local_40 = piVar9 + iVar7;
      piVar10 = piVar9;
      for (piVar8 = piVar9; piVar8 != local_40; piVar8 = piVar8 + 1) {
        bVar11 = false;
        piVar6 = piVar9;
        while ((piVar6 != piVar8 && (!bVar11))) {
          iVar7 = *piVar6;
          piVar6 = piVar6 + 1;
          bVar11 = *piVar8 == iVar7;
        }
        *piVar10 = *piVar8;
        if (!bVar11) {
          piVar10 = piVar10 + 1;
          local_c = local_c + 1;
        }
      }
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_c);
      iVar7 = iStack_14;
      piVar9 = piStack_18;
    }
  }
  if ((iStack_34 == 1) && (iVar7 == 1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if (piVar9 != (int *)0x0) {
    operator_delete__(piVar9);
  }
  if (piStack_38 != (int *)0x0) {
    operator_delete__(piStack_38);
  }
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_2c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}


//==== 0000814bd0 00814bd0_GetAttackAngleIndicatorVisible ====
// decompiled by BatchDecomp @ 00814bd0 name=GetAttackAngleIndicatorVisible conv=__thiscall body=555

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__GetAttackAngleIndicatorVisible(void)const  */

bool __thiscall ModuleUI__GetAttackAngleIndicatorVisible(ModuleUI *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  Module *pMVar7;
  undefined4 *puVar8;
  SpacecraftTargeting *this_00;
  WeaponCompartment *this_01;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_44[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_34[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_24[16];
  ModuleUI *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = false;
  bVar4 = false;
  local_c = 0;
  local_14 = this;
  if (this->ModuleType == (Module *)0x0) {
    if ((((this->TargetCompartment).Pointer != (ModuleCompartment *)0x0) &&
        (pRVar1 = (this->TargetCompartment).Controller, pRVar1 != (ReferenceController *)0x0)) &&
       (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), bVar3)) {
      pRVar1 = (this->TargetCompartment).Controller;
      if ((pRVar1 != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar3)) {
        (this->TargetCompartment).Pointer = (ModuleCompartment *)0x0;
      }
      if (*(int *)&((this->TargetCompartment).Pointer)->LostPower != 0) goto LAB_00814c48;
    }
  }
  else {
LAB_00814c48:
    piVar5 = (int *)GetCompartments(this);
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_24);
    if ((0 < iVar6) && (bVar3 = IsAlliedModule(this), bVar3)) {
      pMVar7 = GetModuleType(this);
      iVar6 = (**(code **)(*(int *)pMVar7 + 0x130))();
      if ((iVar6 == 0) && (bVar3 = AreAllCompartmentsOff(this), !bVar3)) {
        piVar5 = (int *)ShipGroupUI__GetShipsInGroup((ShipGroupUI *)this);
        local_c = 0;
        iVar6 = (**(code **)(*piVar5 + 0xc))();
        if (local_c < iVar6) {
          do {
            puVar8 = (undefined4 *)(**(code **)*piVar5)(&local_c);
            if (((ReferenceController *)puVar8[1] != (ReferenceController *)0x0) &&
               (bVar4 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar8[1]), !bVar4)) {
              *puVar8 = 0;
            }
            this_00 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*puVar8);
            SpacecraftTargeting__FindAllViableTargetsInRange_Memoize(this_00);
            if ((this_00->FindAllViableTargetsInRange_MemoizedValue).IsValidData == false) {
              util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",
                              0x13,"IsValid()",(char *)0x0);
              DebugBreak();
            }
            iVar6 = (**(code **)((this_00->FindAllViableTargetsInRange_MemoizedValue).Data._pad_0x0_0
                                + 0xc))();
            if (0 < iVar6) {
              piVar5 = (int *)GetCompartments(local_14);
              local_c = 0;
              iVar6 = (**(code **)(*piVar5 + 0xc))();
              if (iVar6 <= local_c) goto LAB_00814de3;
              goto LAB_00814d90;
            }
            local_c = local_c + 1;
            iVar6 = (**(code **)(*piVar5 + 0xc))();
          } while (local_c < iVar6);
        }
        bVar2 = true;
        bVar4 = false;
      }
    }
  }
LAB_00814d36:
  local_d = 0;
LAB_00814d3a:
  if (bVar4) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_34);
  }
  if (bVar2) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_44);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_d;
  while( true ) {
    local_c = local_c + 1;
    iVar6 = (**(code **)(*piVar5 + 0xc))();
    if (iVar6 <= local_c) break;
LAB_00814d90:
    puVar8 = (undefined4 *)(**(code **)*piVar5)(&local_c);
    pRVar1 = (ReferenceController *)puVar8[1];
    this_01 = (WeaponCompartment *)*puVar8;
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(pRVar1);
      bVar4 = util__ReferenceController__IsDataStillValid(pRVar1);
      if (!bVar4) {
        this_01 = (WeaponCompartment *)0x0;
      }
    }
    local_d = WeaponCompartment__IsCurrentFrameTargetOutOfDeviationAngle(this_01);
    if (pRVar1 != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(pRVar1);
    }
    if (local_d == '\0') {
      bVar2 = true;
      bVar4 = true;
      goto LAB_00814d36;
    }
  }
LAB_00814de3:
  local_d = 1;
  bVar2 = true;
  bVar4 = true;
  goto LAB_00814d3a;
}


//==== 0000814e00 00814e00_GetAttackRangeIndicatorVisible ====
// decompiled by BatchDecomp @ 00814e00 name=GetAttackRangeIndicatorVisible conv=__thiscall body=576

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__GetAttackRangeIndicatorVisible(void)const  */

bool __thiscall ModuleUI__GetAttackRangeIndicatorVisible(ModuleUI *this)

{
  ReferenceController *pRVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  Module *pMVar9;
  undefined4 *puVar10;
  SpacecraftTargeting *this_00;
  ModuleUI *pMVar11;
  WeaponModule *pWVar12;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_4c[16];
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_3c[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_2c[16];
  ModuleUI *local_1c;
  int *local_18;
  ModuleUI *local_14;
  undefined1 local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  bVar2 = false;
  bVar5 = false;
  local_18 = (int *)0x0;
  local_1c = this;
  if (this->ModuleType == (Module *)0x0) {
    pMVar11 = this;
    if ((((this->TargetCompartment).Pointer == (ModuleCompartment *)0x0) ||
        (pRVar1 = (this->TargetCompartment).Controller, pRVar1 == (ReferenceController *)0x0)) ||
       (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), pMVar11 = local_1c, !bVar4))
    goto LAB_00814fe5;
    pRVar1 = (this->TargetCompartment).Controller;
    if ((pRVar1 != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__IsDataStillValid(pRVar1), !bVar4)) {
      (this->TargetCompartment).Pointer = (ModuleCompartment *)0x0;
    }
    pMVar11 = local_1c;
    if (*(int *)&((this->TargetCompartment).Pointer)->LostPower == 0) goto LAB_00814fe5;
  }
  piVar7 = (int *)GetCompartments(this);
  iVar8 = (**(code **)(*piVar7 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_2c);
  pMVar11 = local_1c;
  if ((0 < iVar8) && (bVar4 = IsAlliedModule(this), pMVar11 = local_1c, bVar4)) {
    pMVar9 = GetModuleType(this);
    iVar8 = (**(code **)(*(int *)pMVar9 + 0x130))();
    pMVar11 = local_1c;
    if ((iVar8 == 0) && (bVar4 = AreAllCompartmentsOff(this), pMVar11 = local_1c, !bVar4)) {
      piVar7 = (int *)GetCompartments(this);
      piVar7 = (int *)(**(code **)(*piVar7 + 0x20))();
      pMVar11 = (ModuleUI *)piVar7[1];
      iVar8 = *piVar7;
      local_14 = pMVar11;
      if (pMVar11 != (ModuleUI *)0x0) {
        util__ReferenceController__AddWeakReference((ReferenceController *)pMVar11);
        bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)pMVar11);
        if (!bVar5) {
          iVar8 = 0;
        }
      }
      bVar5 = false;
      cVar6 = (**(code **)(**(int **)(iVar8 + 0x38) + 0x16c))();
      if (cVar6 != '\0') {
        piVar7 = (int *)ShipGroupUI__GetShipsInGroup((ShipGroupUI *)this);
        local_c = 0;
        local_18 = piVar7;
        iVar8 = (**(code **)(*piVar7 + 0xc))();
        if (local_c < iVar8) {
          do {
            puVar10 = (undefined4 *)(**(code **)*piVar7)(&local_c);
            piVar7 = (int *)GetCompartments(this);
            piVar7 = (int *)(**(code **)(*piVar7 + 0x20))();
            pRVar1 = (ReferenceController *)piVar7[1];
            iVar8 = *piVar7;
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar1);
              bVar5 = util__ReferenceController__IsDataStillValid(pRVar1);
              if (!bVar5) {
                iVar8 = 0;
              }
            }
            pWVar12 = *(WeaponModule **)(iVar8 + 0x38);
            if (((ReferenceController *)puVar10[1] != (ReferenceController *)0x0) &&
               (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar10[1]), !bVar5)) {
              *puVar10 = 0;
            }
            this_00 = SpacecraftComponent__GetTargeting((SpacecraftComponent *)*puVar10);
            bVar5 = SpacecraftTargeting__IsWeaponModuleOutOfRange(this_00,pWVar12);
            if (pRVar1 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(pRVar1);
            }
            util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_2c);
            piVar7 = local_18;
            if (bVar5) {
              bVar3 = true;
              bVar2 = true;
              bVar5 = true;
              local_d = 1;
              pMVar11 = local_14;
              goto LAB_00814fe9;
            }
            local_c = local_c + 1;
            iVar8 = (**(code **)(*local_18 + 0xc))();
            this = local_1c;
          } while (local_c < iVar8);
        }
        bVar5 = true;
      }
      bVar3 = true;
      bVar2 = true;
      pMVar11 = local_14;
    }
  }
LAB_00814fe5:
  local_d = 0;
LAB_00814fe9:
  if (bVar5) {
    util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_3c);
  }
  if ((bVar2) && (pMVar11 != (ModuleUI *)0x0)) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)pMVar11);
  }
  if (bVar3) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_4c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_d;
}


//==== 0000818530 00818530_GetOutOfAmmoIndicatorVisible ====
// decompiled by BatchDecomp @ 00818530 name=GetOutOfAmmoIndicatorVisible conv=__thiscall body=487

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall ModuleUI__GetOutOfAmmoIndicatorVisible(void)const  */

bool __thiscall ModuleUI__GetOutOfAmmoIndicatorVisible(ModuleUI *this)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  Module *pMVar6;
  ReferenceController *pRVar7;
  bool bVar8;
  ReferenceController *pRVar9;
  WeaponCompartment *this_00;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_40[16];
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ local_30[16];
  ReferenceController *local_20;
  int *local_1c;
  int local_18;
  ReferenceController *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar8 = false;
  local_14 = (ReferenceController *)0x0;
  if (this->ModuleType == (Module *)0x0) {
    if ((((this->TargetCompartment).Pointer != (ModuleCompartment *)0x0) &&
        (pRVar9 = (this->TargetCompartment).Controller, pRVar9 != (ReferenceController *)0x0)) &&
       (bVar1 = util__ReferenceController__IsDataStillValid(pRVar9), bVar1)) {
      pRVar9 = (this->TargetCompartment).Controller;
      if ((pRVar9 != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(pRVar9), !bVar1)) {
        (this->TargetCompartment).Pointer = (ModuleCompartment *)0x0;
      }
      if (*(int *)&((this->TargetCompartment).Pointer)->LostPower != 0) goto LAB_008185a5;
    }
  }
  else {
LAB_008185a5:
    piVar4 = (int *)GetCompartments(this);
    iVar5 = (**(code **)(*piVar4 + 0xc))();
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_30);
    if ((0 < iVar5) && (bVar1 = IsAlliedModule(this), bVar1)) {
      pMVar6 = GetModuleType(this);
      iVar5 = (**(code **)(*(int *)pMVar6 + 0x130))();
      if ((iVar5 == 0) && (bVar1 = AreAllCompartmentsOff(this), !bVar1)) {
        pRVar7 = (ReferenceController *)GetCompartments(this);
        local_c = 0;
        bVar8 = true;
        bVar1 = false;
        local_14 = pRVar7;
        iVar5 = (**(code **)(pRVar7->StrongReferenceCount + 0xc))();
        pRVar9 = local_14;
        if (local_c < iVar5) {
          do {
            local_1c = (int *)(**(code **)pRVar7->StrongReferenceCount)(&local_c);
            pRVar7 = (ReferenceController *)local_1c[1];
            local_18 = *local_1c;
            iVar5 = local_18;
            local_20 = pRVar7;
            if (pRVar7 != (ReferenceController *)0x0) {
              util__ReferenceController__AddWeakReference(pRVar7);
              bVar2 = util__ReferenceController__IsDataStillValid(pRVar7);
              iVar5 = local_18;
              if (!bVar2) {
                iVar5 = 0;
              }
            }
            cVar3 = (**(code **)(**(int **)(iVar5 + 0x38) + 0x180))();
            if (cVar3 == '\0') {
LAB_008186ab:
              local_d = '\0';
            }
            else {
              bVar1 = true;
              this_00 = (WeaponCompartment *)*local_1c;
              pRVar9 = (ReferenceController *)local_1c[1];
              if (pRVar9 != (ReferenceController *)0x0) {
                util__ReferenceController__AddWeakReference(pRVar9);
                bVar2 = util__ReferenceController__IsDataStillValid(pRVar9);
                if (!bVar2) {
                  this_00 = (WeaponCompartment *)0x0;
                }
              }
              iVar5 = WeaponCompartment__GetTotalAmmoLeft(this_00);
              local_d = '\x01';
              if (iVar5 != 0) goto LAB_008186ab;
            }
            if ((bVar1) && (bVar1 = false, pRVar9 != (ReferenceController *)0x0)) {
              util__ReferenceController__ReleaseWeakReference(pRVar9);
            }
            if (local_20 != (ReferenceController *)0x0) {
              util__ReferenceController__ReleaseWeakReference(local_20);
            }
            pRVar7 = local_14;
            if (local_d == '\0') goto LAB_008186f1;
            local_c = local_c + 1;
            iVar5 = (**(code **)(local_14->StrongReferenceCount + 0xc))();
          } while (local_c < iVar5);
        }
        local_d = 1;
        goto LAB_008186f3;
      }
    }
  }
LAB_008186f1:
  local_d = 0;
LAB_008186f3:
  if (bVar8) {
    util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body(local_40);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)local_d;
}


//==== 0000821520 00821520_FUN_00821520 ====
void FUN_00821520(Darray_L_struct_CombatNotification_G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 00821520 name=FUN_00821520 conv=unknown body=395

void FUN_00821520(Darray_L_struct_CombatNotification_G_ *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar7 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0093f088u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar7;
  if (((int)uVar7 < 0) || (0x3fffffff < (int)uVar7)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar7) {
    pvVar8 = operator_new__(-(uint)((int)((ulonglong)uVar7 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar7 * 0x20));
    if (pvVar8 == (void *)0x0) {
      pvVar8 = (void *)0x0;
    }
    else if (uVar7 != 0) {
      puVar9 = (undefined4 *)((int)pvVar8 + 8);
      do {
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined8 *)(puVar9 + 2) = 0;
        puVar9[4] = 0;
        uVar7 = uVar7 - 1;
        puVar9 = puVar9 + 8;
      } while (uVar7 != 0);
    }
    iVar11 = 0;
    *(void **)(param_1 + 4) = pvVar8;
    if (0 < *(int *)(param_1 + 0xc)) {
      iVar10 = 0;
      do {
        iVar2 = *(int *)(param_1 + 4);
        iVar10 = iVar10 + 0x20;
        iVar11 = iVar11 + 1;
        puVar9 = (undefined4 *)(iVar2 + -0x20 + iVar10);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9 = (undefined4 *)(iVar2 + -0x10 + iVar10);
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = uStack_18;
      } while (iVar11 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar11 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar11) {
    do {
      puVar9 = (undefined4 *)(**(code **)*param_2)(&local_c);
      if (/*0000000000000000*/0.0 < *(double *)(puVar9 + 4)) {
        iVar11 = *(int *)(param_1 + 8);
        local_10 = iVar11 + 1;
        util__Darray_struct_CombatNotification___SetSize(param_1,&local_10);
        bVar6 = util__Darray_struct_CombatNotification___CheckSize(param_1,iVar11);
        if (bVar6) {
          iVar11 = *(int *)(param_1 + 8);
          iVar10 = *(int *)(param_1 + 4);
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          puVar1 = (undefined4 *)(iVar11 * 0x20 + -0x20 + iVar10);
          *puVar1 = *puVar9;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          uVar3 = puVar9[5];
          uVar4 = puVar9[6];
          uVar5 = puVar9[7];
          puVar1 = (undefined4 *)(iVar11 * 0x20 + -0x10 + iVar10);
          *puVar1 = puVar9[4];
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        }
      }
      local_c = local_c + 1;
      iVar11 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008231a0 008231a0_CanUse ====
// decompiled by BatchDecomp @ 008231a0 name=CanUse conv=__thiscall body=427

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* private: bool __thiscall OrderButton__CanUse(void)const  */

bool __thiscall OrderButton__CanUse(OrderButton *this)

{
  Type TVar1;
  SpacecraftComponent *this_00;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ local_34[16];
  undefined4 *local_24[4];
  OrderButton *local_14;
  char local_e;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  TVar1 = this->OrderButtonType;
  if ((((TVar1 == Move) || (TVar1 == Roll)) || (TVar1 == Orient)) ||
     (((TVar1 == Homing || (TVar1 == Scatter)) ||
      ((TVar1 == Broadside || (local_e = '\0', TVar1 == NoseForward)))))) {
    local_e = '\x01';
  }
  local_14 = this;
  GetShips(this);
  GetControllersOfShips((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)local_24);
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_34);
  local_c = 0;
  iVar4 = (*(code *)local_24[0][3])();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(*(code *)*local_24[0])(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
        *puVar5 = 0;
      }
      bVar2 = ControllableComponent__CanReceiveOrders((ControllableComponent *)*puVar5);
      if (bVar2) {
        local_d = '\x01';
        goto LAB_00823268;
      }
      local_c = local_c + 1;
      iVar4 = (*(code *)local_24[0][3])();
    } while (local_c < iVar4);
  }
  local_d = '\0';
LAB_00823268:
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)local_24);
  piVar6 = (int *)GetShips(this);
  local_c = 0;
  iVar4 = (**(code **)(*piVar6 + 0xc))();
  if (local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(**(code **)*piVar6)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar2)) {
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
        bVar2 = true;
        goto LAB_008232f6;
      }
      local_c = local_c + 1;
      iVar4 = (**(code **)(*piVar6 + 0xc))();
    } while (local_c < iVar4);
  }
  bVar2 = false;
LAB_008232f6:
  util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent(local_34);
  if ((local_d != '\0') &&
     (((local_e == '\0' || (bVar2)) && (bVar2 = AnyShipsCanExecuteOrder(local_14), bVar2)))) {
    uVar3 = 1;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar3;
  }
  uVar3 = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}


//==== 0000824af0 00824af0_FUN_00824af0 ====
void FUN_00824af0(int *param_1,Str_L_char_G_ *param_2);

// decompiled by BatchDecomp @ 00824af0 name=FUN_00824af0 conv=unknown body=504

void FUN_00824af0(int *param_1,Str_L_char_G_ *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  Type *pTVar8;
  BasicInfo *pBVar9;
  LocStr *this;
  Str_L_char_G_ *pSVar10;
  char *pcVar11;
  undefined1 local_7c[12];
  void *local_70;
  char *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Type *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_10 = (Type *)0x0;
  local_c = 0;
  iVar7 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar7) {
    do {
      pTVar8 = (Type *)(**(code **)*param_1)(&local_c);
      local_10 = pTVar8;
      pBVar9 = OrderInfo__GetOrderButtonInfo((BasicInfo *)local_7c,*pTVar8);
      local_28.Length = 0;
      local_28.Data = (char *)0x0;
      local_28.Capacity = 0;
      if (*pTVar8 == None) {
        util__Str_char___Str_char__o5(&local_34,"HasNoOrders Tooltip");
        local_1c.Data = (char *)0x0;
        local_1c.Capacity = 0;
        local_1c.Length = 0;
        this = (LocStr *)util__LocStr__LocStr((LocStr *)&local_70,&local_34,&local_1c);
        pSVar10 = util__LocStr__operator__o3(this);
        pSVar10 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_4c,pSVar10);
        bVar5 = true;
        bVar4 = true;
        bVar3 = true;
        bVar2 = true;
      }
      else {
        bVar1 = true;
        pSVar10 = OrderInfo__GetOrderInUseString(&local_40,pBVar9->ButtonType);
      }
      util__Str_char___Str_char(&local_28,pSVar10);
      if ((bVar1) && (bVar1 = false, local_40.Data != (char *)0x0)) {
        operator_delete__(local_40.Data);
        local_40.Data = (char *)0x0;
      }
      if ((bVar2) && (bVar2 = false, local_4c.Data != (char *)0x0)) {
        operator_delete__(local_4c.Data);
        local_4c.Data = (char *)0x0;
      }
      if (bVar3) {
        bVar3 = false;
        if (local_64 != (char *)0x0) {
          operator_delete__(local_64);
          local_64 = (char *)0x0;
        }
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
          local_70 = (void *)0x0;
        }
      }
      if ((bVar4) && (bVar4 = false, local_1c.Data != (char *)0x0)) {
        operator_delete__(local_1c.Data);
        local_1c.Data = (char *)0x0;
      }
      if ((bVar5) && (bVar5 = false, local_34.Data != (char *)0x0)) {
        operator_delete__(local_34.Data);
        local_34.Data = (char *)0x0;
      }
      pcVar6 = local_28.Data;
      pcVar11 = "";
      if (0 < local_28.Capacity) {
        pcVar11 = local_28.Data;
      }
      pSVar10 = util__Printf(&local_58,"\n- %ix %s",local_10[1],pcVar11);
      util__Str_char___operator__o10(param_2,pSVar10);
      if (local_58.Data != (char *)0x0) {
        operator_delete__(local_58.Data);
        local_58.Data = (char *)0x0;
      }
      if (pcVar6 != (char *)0x0) {
        operator_delete__(pcVar6);
        ((slice_view *)&local_28)->_0_8_ = ((slice_view *)&local_28)->_0_8_ & 0xffffffff00000000;
      }
      local_c = local_c + 1;
      iVar7 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000824ef0 00824ef0_FUN_00824ef0 ====
void FUN_00824ef0(int *param_1,int *param_2, Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *param_3,undefined4 param_4);
extern undefined4 FUN_00827230(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00824ef0 name=FUN_00824ef0 conv=unknown body=504

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_00824ef0(int *param_1,int *param_2,
                 Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_
                 *param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  WeakPtr_L_class_Body_G_ *pWVar3;
  CraftBlueprint *pCVar4;
  undefined4 uVar5;
  char *local_24;
  WeakPtr_L_class_Body_G_ *pWStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  int local_14;
  int local_10;
  char local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = 0;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (local_14 < iVar2) {
    do {
      pWVar3 = (WeakPtr_L_class_Body_G_ *)(**(code **)*param_1)(&local_14);
      if ((*(ReferenceController **)(pWVar3 + 4) != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar3 + 4))
         , !bVar1)) {
        *(undefined4 *)pWVar3 = 0;
      }
      pCVar4 = SpacecraftComponent__GetCraftDesign(*(SpacecraftComponent **)pWVar3);
      if (pCVar4 != (CraftBlueprint *)0x0) {
        if ((*(ReferenceController **)(pWVar3 + 4) != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar3 + 4)), !bVar1)) {
          *(undefined4 *)pWVar3 = 0;
        }
        pCVar4 = SpacecraftComponent__GetCraftDesign(*(SpacecraftComponent **)pWVar3);
        CraftBlueprint__IsAPayload_Memoize(pCVar4);
        if (*(char *)((int)&(pCVar4->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 3) ==
            '\0') {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
        if (*(char *)((int)&(pCVar4->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 2) ==
            '\0') {
          local_9 = '\0';
          if ((*(ReferenceController **)(pWVar3 + 4) != (ReferenceController *)0x0) &&
             (bVar1 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(pWVar3 + 4)), !bVar1)) {
            *(undefined4 *)pWVar3 = 0;
          }
          pCVar4 = SpacecraftComponent__GetCraftDesign(*(SpacecraftComponent **)pWVar3);
          CraftBlueprint__IsACapitalShip_Memoize(pCVar4);
          if (*(char *)((int)&(pCVar4->GetMainEngineModulePlacers_MemoizedValue).Data.Data + 1) ==
              '\0') {
            util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13
                            ,"IsValid()",(char *)0x0);
            DebugBreak();
          }
          if ((*(char *)&(pCVar4->GetMainEngineModulePlacers_MemoizedValue).Data.Data == '\0') &&
             (*param_2 != 0)) {
            local_24 = &local_9;
            local_10 = 0;
            uStack_1c = param_4;
            piStack_18 = param_2;
            pWStack_20 = pWVar3;
            iVar2 = (**(code **)(*(int *)param_3 + 0xc))();
            if (local_10 < iVar2) {
              do {
                uVar5 = (*(code *)**(undefined4 **)param_3)(&local_10);
                FUN_00827230(uVar5);
                local_10 = local_10 + 1;
                iVar2 = (**(code **)(*(int *)param_3 + 0xc))();
              } while (local_10 < iVar2);
            }
          }
          if (local_9 == '\0') {
            local_24 = (char *)0x0;
            pWStack_20 = (WeakPtr_L_class_Body_G_ *)0x0;
            uStack_1c = 0;
            piStack_18 = (int *)0x0;
            util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_24,1);
            util__Darray_class_util__WeakPtr_class_Body_____Add((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_24,pWVar3);
            iVar2 = *(int *)(param_3 + 8);
            local_10 = iVar2 + 1;
            util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______SetSize(param_3,&local_10);
            bVar1 = util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______CheckSize(param_3,iVar2);
            if (bVar1) {
              util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2
                        ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                         (*(int *)(param_3 + 8) * 0x10 + *(int *)(param_3 + 4) + -0x10),
                         (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_24);
            }
            util__Darray_class_util__WeakPtr_class_SpacecraftComponent______Darray_class_util__WeakPtr_class_SpacecraftComponent((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_24);
          }
        }
      }
      local_14 = local_14 + 1;
      iVar2 = (**(code **)(*param_1 + 0xc))();
    } while (local_14 < iVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008250f0 008250f0_FUN_008250f0 ====
void FUN_008250f0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2);

// decompiled by BatchDecomp @ 008250f0 name=FUN_008250f0 conv=unknown body=527

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008250f0(Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_1,int *param_2)

{
  int iVar1;
  ReferenceController *pRVar2;
  Body *this;
  ControllableComponent *pCVar3;
  ReferenceController *this_00;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uVar6 = (**(code **)(*param_2 + 0xc))();
  *(undefined ***)param_1 = ((void *)(0x0091e0b8u));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = uVar6;
  if (((int)uVar6 < 0) || (0x3fffffff < (int)uVar6)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else if (0 < (int)uVar6) {
    uVar9 = -(uint)((int)((ulonglong)uVar6 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 8);
    puVar7 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar9) | uVar9 + 4);
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)0x0;
    }
    else {
      *puVar7 = uVar6;
      puVar7 = puVar7 + 1;
      puVar4 = puVar7;
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      }
    }
    iVar10 = 0;
    *(uint **)(param_1 + 4) = puVar7;
    if (0 < *(int *)(param_1 + 0xc)) {
      do {
        iVar1 = *(int *)(param_1 + 4);
        pRVar2 = *(ReferenceController **)(iVar1 + 4 + iVar10 * 8);
        *(undefined4 *)(iVar1 + iVar10 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar10 * 8) = 0;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar2);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < *(int *)(param_1 + 0xc));
    }
  }
  local_c = 0;
  iVar10 = (**(code **)(*param_2 + 0xc))();
  if (local_c < iVar10) {
    do {
      piVar8 = (int *)(**(code **)*param_2)(&local_c);
      if (((ReferenceController *)piVar8[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar8[1]),
         !bVar5)) {
        *piVar8 = 0;
      }
      iVar10 = *piVar8;
      if ((*(ReferenceController **)(iVar10 + 8) != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar10 + 8))
         , !bVar5)) {
        *(undefined4 *)(iVar10 + 4) = 0;
      }
      this = *(Body **)(iVar10 + 4);
      Body__GetControllableComponent_Memoize(this);
      if ((this->GetControllableComponent_MemoizedValue).IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      pCVar3 = (this->GetControllableComponent_MemoizedValue).Data.Pointer;
      pRVar2 = (this->GetControllableComponent_MemoizedValue).Data.Controller;
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar2);
      }
      iVar10 = *(int *)(param_1 + 8);
      local_10 = iVar10 + 1;
      util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_1,&local_10);
      bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(param_1,iVar10);
      if (bVar5) {
        iVar10 = *(int *)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 4);
        this_00 = *(ReferenceController **)(iVar1 + -4 + iVar10 * 8);
        *(ControllableComponent **)(iVar1 + -8 + iVar10 * 8) = pCVar3;
        *(ReferenceController **)(iVar1 + -4 + iVar10 * 8) = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(this_00);
        }
      }
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar2);
      }
      local_c = local_c + 1;
      iVar10 = (**(code **)(*param_2 + 0xc))();
    } while (local_c < iVar10);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000825300 00825300_FUN_00825300 ====
void FUN_00825300(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5, int *param_6,int *param_7);
extern undefined4 FUN_00827640(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 00825300 name=FUN_00825300 conv=unknown body=419

void FUN_00825300(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 int *param_6,int *param_7)

{
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar7;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = *param_3;
  local_c = *param_5;
  iVar4 = *param_4;
  if (local_10 < iVar4) {
    do {
      if (*param_6 <= local_c) break;
      pDVar7 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_10;
      local_14 = (**(code **)*param_1)();
      local_18 = (**(code **)*param_1)(&local_c);
      fVar5 = (float10)FUN_00827640(local_18);
      fVar6 = (float10)FUN_00827640(local_14);
      iVar4 = *param_7;
      *param_7 = iVar4 + 1;
      if ((double)fVar5 <= (double)fVar6) {
        local_18 = iVar4;
        pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 (**(code **)*param_2)(&local_18,local_14);
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(pDVar1,pDVar7);
        local_10 = local_10 + 1;
      }
      else {
        local_14 = iVar4;
        pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 (**(code **)*param_2)(&local_14,local_18);
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(pDVar1,pDVar7);
        local_c = local_c + 1;
      }
      iVar4 = *param_4;
    } while (local_10 < iVar4);
    if (local_10 < iVar4) {
      do {
        local_14 = *param_7;
        pDVar7 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18;
        *param_7 = local_14 + 1;
        local_18 = local_10;
        local_10 = local_10 + 1;
        uVar2 = (**(code **)*param_1)();
        pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                 (**(code **)*param_2)(&local_14,uVar2);
        util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(pDVar1,pDVar7);
      } while (local_10 < *param_4);
    }
  }
  if (local_c < *param_6) {
    do {
      pDVar7 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&local_18;
      local_14 = *param_7;
      *param_7 = local_14 + 1;
      local_18 = local_c;
      local_c = local_c + 1;
      uVar2 = (**(code **)*param_1)();
      pDVar1 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
               (**(code **)*param_2)(&local_14,uVar2);
      util__Darray_class_util__WeakPtr_class_SpacecraftComponent_____operator__o2(pDVar1,pDVar7);
    } while (local_c < *param_6);
  }
  iVar4 = *param_7;
  iVar3 = (**(code **)(*param_2 + 0xc))();
  if ((iVar3 < iVar4) || (iVar4 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 000082ae70 0082ae70_FUN_0082ae70 ====
void FUN_0082ae70(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3);

// decompiled by BatchDecomp @ 0082ae70 name=FUN_0082ae70 conv=unknown body=439

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_0082ae70(int *param_1,undefined4 param_2,Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *pDVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  CraftBlueprint *this;
  ReferenceController *pRVar8;
  ReferenceController *this_00;
  ReferenceController *local_34;
  char local_30[4];
  undefined4 local_2c;
  ReferenceController *local_28;
  char local_24[4];
  int *local_20;
  Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *local_1c;
  undefined4 local_18;
  char *local_14;
  char local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  bVar2 = false;
  local_20 = param_1;
  local_1c = (Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)0x0;
  local_c = 0;
  iVar6 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar6) {
    do {
      piVar7 = (int *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
         (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
         !bVar5)) {
        *piVar7 = 0;
      }
      this = SpacecraftComponent__GetCraftDesign((SpacecraftComponent *)*piVar7);
      CraftBlueprint__IsAPayload_Memoize(this);
      if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 3) ==
          '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      if (*(char *)((int)&(this->GetMainEngineModulePlacers_MemoizedValue).Data.Capacity + 2) ==
          '\0') {
        bVar3 = true;
        if (((ReferenceController *)piVar7[1] != (ReferenceController *)0x0) &&
           (bVar5 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar7[1]),
           !bVar5)) {
          *piVar7 = 0;
        }
        this_00 = *(ReferenceController **)(*piVar7 + 8);
        local_2c = *(undefined4 *)(*piVar7 + 4);
        local_28 = this_00;
        local_18 = local_2c;
        if (this_00 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(this_00);
        }
        local_24[0] = '\x01';
        local_14 = local_24;
        pRVar8 = this_00;
      }
      else {
        local_14 = local_30;
        bVar2 = true;
        local_34 = (ReferenceController *)0x0;
        this_00 = (ReferenceController *)0x0;
        local_30[0] = '\0';
        local_18 = 0;
        pRVar8 = local_28;
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
      }
      local_d = *local_14;
      if ((bVar2) && (bVar2 = false, local_34 != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(local_34);
      }
      if ((bVar3) && (bVar3 = false, pRVar8 != (ReferenceController *)0x0)) {
        util__ReferenceController__ReleaseWeakReference(pRVar8);
      }
      if (local_d != '\0') {
        local_1c = param_3;
        iVar6 = *(int *)(param_3 + 8);
        local_14 = (char *)(iVar6 + 1);
        util__Darray_class_util__WeakPtr_class_Body_____SetSize(param_3,(int *)&local_14);
        pDVar4 = local_1c;
        bVar5 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize(local_1c,iVar6);
        if (bVar5) {
          iVar6 = *(int *)(pDVar4 + 8);
          iVar1 = *(int *)(pDVar4 + 4);
          pRVar8 = *(ReferenceController **)(iVar1 + -4 + iVar6 * 8);
          *(undefined4 *)(iVar1 + -8 + iVar6 * 8) = local_18;
          *(ReferenceController **)(iVar1 + -4 + iVar6 * 8) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          if (pRVar8 != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(pRVar8);
          }
        }
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      param_1 = local_20;
      local_c = local_c + 1;
      iVar6 = (**(code **)(*local_20 + 0xc))();
    } while (local_c < iVar6);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000848690 00848690_FUN_00848690 ====
undefined4 FUN_00848690(void);

// decompiled by BatchDecomp @ 00848690 name=FUN_00848690 conv=unknown body=451

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848690(void)

{
  bool bVar1;
  
  ___glewBindFramebuffer = wglGetProcAddress("glBindFramebuffer");
  bVar1 = ___glewBindFramebuffer == (PROC)0x0;
  ____glewBindRenderbuffer = wglGetProcAddress("glBindRenderbuffer");
  if ((____glewBindRenderbuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBlitFramebuffer = wglGetProcAddress("glBlitFramebuffer");
  if ((____glewBlitFramebuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewCheckFramebufferStatus = wglGetProcAddress("glCheckFramebufferStatus");
  if ((___glewCheckFramebufferStatus == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewDeleteFramebuffers = wglGetProcAddress("glDeleteFramebuffers");
  if ((___glewDeleteFramebuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteRenderbuffers = wglGetProcAddress("glDeleteRenderbuffers");
  if ((____glewDeleteRenderbuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferRenderbuffer = wglGetProcAddress("glFramebufferRenderbuffer");
  if ((____glewFramebufferRenderbuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferTexture1D = wglGetProcAddress("glFramebufferTexture1D");
  if ((____glewFramebufferTexture1D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewFramebufferTexture2D = wglGetProcAddress("glFramebufferTexture2D");
  if ((___glewFramebufferTexture2D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferTexture3D = wglGetProcAddress("glFramebufferTexture3D");
  if ((____glewFramebufferTexture3D == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewFramebufferTextureLayer = wglGetProcAddress("glFramebufferTextureLayer");
  if ((____glewFramebufferTextureLayer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGenFramebuffers = wglGetProcAddress("glGenFramebuffers");
  if ((___glewGenFramebuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenRenderbuffers = wglGetProcAddress("glGenRenderbuffers");
  if ((____glewGenRenderbuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGenerateMipmap = wglGetProcAddress("glGenerateMipmap");
  if ((___glewGenerateMipmap == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetFramebufferAttachmentParameteriv =
       wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
  if ((____glewGetFramebufferAttachmentParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetRenderbufferParameteriv = wglGetProcAddress("glGetRenderbufferParameteriv");
  if ((____glewGetRenderbufferParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsFramebuffer = wglGetProcAddress("glIsFramebuffer");
  if ((____glewIsFramebuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsRenderbuffer = wglGetProcAddress("glIsRenderbuffer");
  if ((____glewIsRenderbuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewRenderbufferStorage = wglGetProcAddress("glRenderbufferStorage");
  if ((____glewRenderbufferStorage == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewRenderbufferStorageMultisample = wglGetProcAddress("glRenderbufferStorageMultisample");
  if ((____glewRenderbufferStorageMultisample != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000848980 00848980_FUN_00848980 ====
undefined4 FUN_00848980(void);

// decompiled by BatchDecomp @ 00848980 name=FUN_00848980 conv=unknown body=407

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00848980(void)

{
  bool bVar1;
  
  ____glewGetUniformdv = wglGetProcAddress("glGetUniformdv");
  bVar1 = ____glewGetUniformdv == (PROC)0x0;
  ____glewUniform1d = wglGetProcAddress("glUniform1d");
  if ((____glewUniform1d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform1dv = wglGetProcAddress("glUniform1dv");
  if ((____glewUniform1dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2d = wglGetProcAddress("glUniform2d");
  if ((____glewUniform2d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform2dv = wglGetProcAddress("glUniform2dv");
  if ((____glewUniform2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3d = wglGetProcAddress("glUniform3d");
  if ((____glewUniform3d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform3dv = wglGetProcAddress("glUniform3dv");
  if ((____glewUniform3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4d = wglGetProcAddress("glUniform4d");
  if ((____glewUniform4d == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniform4dv = wglGetProcAddress("glUniform4dv");
  if ((____glewUniform4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix2dv = wglGetProcAddress("glUniformMatrix2dv");
  if ((____glewUniformMatrix2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix2x3dv = wglGetProcAddress("glUniformMatrix2x3dv");
  if ((____glewUniformMatrix2x3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix2x4dv = wglGetProcAddress("glUniformMatrix2x4dv");
  if ((____glewUniformMatrix2x4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix3dv = wglGetProcAddress("glUniformMatrix3dv");
  if ((____glewUniformMatrix3dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix3x2dv = wglGetProcAddress("glUniformMatrix3x2dv");
  if ((____glewUniformMatrix3x2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix3x4dv = wglGetProcAddress("glUniformMatrix3x4dv");
  if ((____glewUniformMatrix3x4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix4dv = wglGetProcAddress("glUniformMatrix4dv");
  if ((____glewUniformMatrix4dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix4x2dv = wglGetProcAddress("glUniformMatrix4x2dv");
  if ((____glewUniformMatrix4x2dv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUniformMatrix4x3dv = wglGetProcAddress("glUniformMatrix4x3dv");
  if ((____glewUniformMatrix4x3dv != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000084fae0 0084fae0_FUN_0084fae0 ====
undefined4 FUN_0084fae0(void);

// decompiled by BatchDecomp @ 0084fae0 name=FUN_0084fae0 conv=unknown body=539

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0084fae0(void)

{
  bool bVar1;
  
  ____glewWindowPos2dMESA = wglGetProcAddress("glWindowPos2dMESA");
  bVar1 = ____glewWindowPos2dMESA == (PROC)0x0;
  ____glewWindowPos2dvMESA = wglGetProcAddress("glWindowPos2dvMESA");
  if ((____glewWindowPos2dvMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos2fMESA = wglGetProcAddress("glWindowPos2fMESA");
  if ((____glewWindowPos2fMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos2fvMESA = wglGetProcAddress("glWindowPos2fvMESA");
  if ((____glewWindowPos2fvMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos2iMESA = wglGetProcAddress("glWindowPos2iMESA");
  if ((____glewWindowPos2iMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos2ivMESA = wglGetProcAddress("glWindowPos2ivMESA");
  if ((____glewWindowPos2ivMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos2sMESA = wglGetProcAddress("glWindowPos2sMESA");
  if ((____glewWindowPos2sMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos2svMESA = wglGetProcAddress("glWindowPos2svMESA");
  if ((____glewWindowPos2svMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3dMESA = wglGetProcAddress("glWindowPos3dMESA");
  if ((____glewWindowPos3dMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3dvMESA = wglGetProcAddress("glWindowPos3dvMESA");
  if ((____glewWindowPos3dvMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3fMESA = wglGetProcAddress("glWindowPos3fMESA");
  if ((____glewWindowPos3fMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3fvMESA = wglGetProcAddress("glWindowPos3fvMESA");
  if ((____glewWindowPos3fvMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3iMESA = wglGetProcAddress("glWindowPos3iMESA");
  if ((____glewWindowPos3iMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3ivMESA = wglGetProcAddress("glWindowPos3ivMESA");
  if ((____glewWindowPos3ivMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3sMESA = wglGetProcAddress("glWindowPos3sMESA");
  if ((____glewWindowPos3sMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos3svMESA = wglGetProcAddress("glWindowPos3svMESA");
  if ((____glewWindowPos3svMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4dMESA = wglGetProcAddress("glWindowPos4dMESA");
  if ((____glewWindowPos4dMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4dvMESA = wglGetProcAddress("glWindowPos4dvMESA");
  if ((____glewWindowPos4dvMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4fMESA = wglGetProcAddress("glWindowPos4fMESA");
  if ((____glewWindowPos4fMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4fvMESA = wglGetProcAddress("glWindowPos4fvMESA");
  if ((____glewWindowPos4fvMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4iMESA = wglGetProcAddress("glWindowPos4iMESA");
  if ((____glewWindowPos4iMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4ivMESA = wglGetProcAddress("glWindowPos4ivMESA");
  if ((____glewWindowPos4ivMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4sMESA = wglGetProcAddress("glWindowPos4sMESA");
  if ((____glewWindowPos4sMESA == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewWindowPos4svMESA = wglGetProcAddress("glWindowPos4svMESA");
  if ((____glewWindowPos4svMESA != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000851d60 00851d60_FUN_00851d60 ====
undefined4 FUN_00851d60(void);

// decompiled by BatchDecomp @ 00851d60 name=FUN_00851d60 conv=unknown body=429

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00851d60(void)

{
  bool bVar1;
  
  ____glewGetVertexAttribLi64vNV = wglGetProcAddress("glGetVertexAttribLi64vNV");
  bVar1 = ____glewGetVertexAttribLi64vNV == (PROC)0x0;
  ____glewGetVertexAttribLui64vNV = wglGetProcAddress("glGetVertexAttribLui64vNV");
  if ((____glewGetVertexAttribLui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL1i64NV = wglGetProcAddress("glVertexAttribL1i64NV");
  if ((____glewVertexAttribL1i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL1i64vNV = wglGetProcAddress("glVertexAttribL1i64vNV");
  if ((____glewVertexAttribL1i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL1ui64NV = wglGetProcAddress("glVertexAttribL1ui64NV");
  if ((____glewVertexAttribL1ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL1ui64vNV = wglGetProcAddress("glVertexAttribL1ui64vNV");
  if ((____glewVertexAttribL1ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2i64NV = wglGetProcAddress("glVertexAttribL2i64NV");
  if ((____glewVertexAttribL2i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2i64vNV = wglGetProcAddress("glVertexAttribL2i64vNV");
  if ((____glewVertexAttribL2i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2ui64NV = wglGetProcAddress("glVertexAttribL2ui64NV");
  if ((____glewVertexAttribL2ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL2ui64vNV = wglGetProcAddress("glVertexAttribL2ui64vNV");
  if ((____glewVertexAttribL2ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3i64NV = wglGetProcAddress("glVertexAttribL3i64NV");
  if ((____glewVertexAttribL3i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3i64vNV = wglGetProcAddress("glVertexAttribL3i64vNV");
  if ((____glewVertexAttribL3i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3ui64NV = wglGetProcAddress("glVertexAttribL3ui64NV");
  if ((____glewVertexAttribL3ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL3ui64vNV = wglGetProcAddress("glVertexAttribL3ui64vNV");
  if ((____glewVertexAttribL3ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4i64NV = wglGetProcAddress("glVertexAttribL4i64NV");
  if ((____glewVertexAttribL4i64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4i64vNV = wglGetProcAddress("glVertexAttribL4i64vNV");
  if ((____glewVertexAttribL4i64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4ui64NV = wglGetProcAddress("glVertexAttribL4ui64NV");
  if ((____glewVertexAttribL4ui64NV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribL4ui64vNV = wglGetProcAddress("glVertexAttribL4ui64vNV");
  if ((____glewVertexAttribL4ui64vNV == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewVertexAttribLFormatNV = wglGetProcAddress("glVertexAttribLFormatNV");
  if ((____glewVertexAttribLFormatNV != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 0000853f80 00853f80_FUN_00853f80 ====
undefined4 FUN_00853f80(void);

// decompiled by BatchDecomp @ 00853f80 name=FUN_00853f80 conv=unknown body=429

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00853f80(void)

{
  bool bVar1;
  
  ____glewBeginQuery = wglGetProcAddress("glBeginQuery");
  bVar1 = ____glewBeginQuery == (PROC)0x0;
  ___glewBindBuffer = wglGetProcAddress("glBindBuffer");
  if ((___glewBindBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewBufferData = wglGetProcAddress("glBufferData");
  if ((___glewBufferData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewBufferSubData = wglGetProcAddress("glBufferSubData");
  if ((____glewBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewDeleteBuffers = wglGetProcAddress("glDeleteBuffers");
  if ((___glewDeleteBuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewDeleteQueries = wglGetProcAddress("glDeleteQueries");
  if ((____glewDeleteQueries == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewEndQuery = wglGetProcAddress("glEndQuery");
  if ((____glewEndQuery == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ___glewGenBuffers = wglGetProcAddress("glGenBuffers");
  if ((___glewGenBuffers == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGenQueries = wglGetProcAddress("glGenQueries");
  if ((____glewGenQueries == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetBufferParameteriv = wglGetProcAddress("glGetBufferParameteriv");
  if ((____glewGetBufferParameteriv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetBufferPointerv = wglGetProcAddress("glGetBufferPointerv");
  if ((____glewGetBufferPointerv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetBufferSubData = wglGetProcAddress("glGetBufferSubData");
  if ((____glewGetBufferSubData == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryObjectiv = wglGetProcAddress("glGetQueryObjectiv");
  if ((____glewGetQueryObjectiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryObjectuiv = wglGetProcAddress("glGetQueryObjectuiv");
  if ((____glewGetQueryObjectuiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewGetQueryiv = wglGetProcAddress("glGetQueryiv");
  if ((____glewGetQueryiv == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsBuffer = wglGetProcAddress("glIsBuffer");
  if ((____glewIsBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewIsQuery = wglGetProcAddress("glIsQuery");
  if ((____glewIsQuery == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewMapBuffer = wglGetProcAddress("glMapBuffer");
  if ((____glewMapBuffer == (PROC)0x0) || (bVar1)) {
    bVar1 = true;
  }
  ____glewUnmapBuffer = wglGetProcAddress("glUnmapBuffer");
  if ((____glewUnmapBuffer != (PROC)0x0) && (!bVar1)) {
    return 0;
  }
  return 1;
}


//==== 000087f020 0087f020_DrawAntialiasedCircularSegment ====
// decompiled by BatchDecomp @ 0087f020 name=DrawAntialiasedCircularSegment conv=__cdecl body=404

/* void __cdecl DrawAntialiasedCircularSegment(double,int,double,double,bool,double) */

void __cdecl
DrawAntialiasedCircularSegment
          (double param_1,int param_2,double param_3,double param_4,bool param_5,double param_6)

{
  int iVar1;
  bool bVar2;
  undefined4 unaff_EDI;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000010;
  undefined7 in_stack_00000025;
  undefined **local_20;
  void *pvStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar5 = (double)CONCAT44(((slice_view *)&param_3)->_0_4_,in_stack_00000010);
  dVar4 = (double)CONCAT44(((slice_view *)&param_4)->_0_4_,((slice_view *)&param_3)->_4_4_) - dVar5;
  iVar3 = 0;
  local_20 = ((void *)(0x00919ac4u));
  pvStack_1c = (void *)0x0;
  iStack_18 = 0;
  uStack_14 = 0;
  if (0 < param_2 + 1) {
    do {
      local_10 = ((double)iVar3 / (double)param_2) * dVar4 + dVar5;
      dVar5 = util__Cos((double *)&local_10);
      dVar6 = util__Sin((double *)&local_10);
      iVar1 = iStack_18;
      local_10 = (double)CONCAT44(iStack_18 + 1,SUB84(dVar6,0));
      util__Darray_struct_util__Vec2_double_____SetSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_20,(int *)((int)&local_10 + 4));
      bVar2 = util__Darray_struct_util__Vec2_double_____CheckSize((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_20,iVar1);
      if (bVar2) {
        *(double *)((int)pvStack_1c + iStack_18 * 0x10 + -0x10) = dVar5 * param_1;
        *(double *)((int)pvStack_1c + iStack_18 * 0x10 + -8) = dVar6 * param_1;
      }
      iVar3 = iVar3 + 1;
      dVar5 = (double)CONCAT44(((slice_view *)&param_3)->_0_4_,in_stack_00000010);
    } while (iVar3 < param_2 + 1);
  }
  DrawAntialiasedLineStrip
            ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&local_20,false,
             (double)CONCAT44((int)((uint7)in_stack_00000025 >> 0x18),
                              (int)CONCAT71(in_stack_00000025,param_5)));
  if (((slice_view *)&param_4)->_4_1_ != '\0') {
    FillCircularSegment(param_1,param_2,param_3,(double)CONCAT44(unaff_EDI,((slice_view *)&param_4)->_0_4_));
  }
  local_20 = ((void *)(0x00919ac4u));
  if (pvStack_1c != (void *)0x0) {
    operator_delete__(pvStack_1c);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 0000881e10 00881e10_FillAntialiasedArc ====
// decompiled by BatchDecomp @ 00881e10 name=FillAntialiasedArc conv=__cdecl body=531

/* void __cdecl FillAntialiasedArc(double,double,int,double,double,double) */

void __cdecl
FillAntialiasedArc(double param_1,double param_2,int param_3,double param_4,double param_5,
                  double param_6)

{
  Line2_L_double_G_ LVar1;
  Line2_L_double_G_ LVar2;
  undefined4 unaff_ESI;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000018;
  undefined1 uVar7;
  undefined4 local_4c;
  undefined4 uStack_48;
  double local_14;
  double local_c;
  
  DrawAntialiasedArc(param_1,param_3,param_4,param_5,(double)CONCAT44(unaff_ESI,((slice_view *)&param_6)->_0_4_));
  DrawAntialiasedArc(param_2,param_3,param_4,param_5,(double)CONCAT44(unaff_ESI,((slice_view *)&param_6)->_0_4_));
  uVar7 = (undefined1)unaff_ESI;
  local_14 = (double)CONCAT44(((slice_view *)&param_4)->_0_4_,in_stack_00000018);
  local_c = util__Cos(&local_14);
  dVar4 = util__Sin(&local_14);
  dVar3 = local_c * param_2;
  local_c = (double)CONCAT44(((slice_view *)&param_4)->_0_4_,in_stack_00000018);
  dVar5 = util__Cos(&local_c);
  dVar6 = util__Sin(&local_c);
  local_4c = *(undefined4 *)&dVar3;
  uStack_48 = *(undefined4 *)((char *)&dVar3 + 4);
  ((slice_view *)&LVar1.A.Y)->_0_4_ = *(undefined4 *)&dVar6 * param_1;
  LVar1.A.X = dVar5 * param_1;
  ((slice_view *)&LVar1.A.Y)->_4_4_ = (int)((ulonglong)(dVar6 * param_1) >> 0x20);
  ((slice_view *)&LVar1.B.X)->_0_4_ = local_4c;
  ((slice_view *)&LVar1.B.X)->_4_4_ = uStack_48;
  ((slice_view *)&LVar1.B.Y)->_0_4_ = *(undefined4 *)&dVar4 * param_2;
  ((slice_view *)&LVar1.B.Y)->_4_4_ = (int)((ulonglong)(dVar4 * param_2) >> 0x20);
  DrawAntialiasedLine(LVar1,(double)CONCAT44(((slice_view *)&param_6)->_0_4_,((slice_view *)&param_5)->_4_4_));
  local_c = (double)CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4)->_4_4_);
  dVar3 = util__Cos(&local_c);
  dVar4 = util__Sin(&local_c);
  local_14 = (double)CONCAT44(((slice_view *)&param_5)->_0_4_,((slice_view *)&param_4)->_4_4_);
  dVar5 = util__Cos(&local_14);
  dVar6 = util__Sin(&local_14);
  local_4c = *(undefined4 *)&dVar3 * param_2;
  uStack_48 = (undefined4)((ulonglong)(dVar3 * param_2) >> 0x20);
  ((slice_view *)&LVar2.A.Y)->_0_4_ = *(undefined4 *)&dVar6 * param_1;
  LVar2.A.X = dVar5 * param_1;
  ((slice_view *)&LVar2.A.Y)->_4_4_ = (int)((ulonglong)(dVar6 * param_1) >> 0x20);
  ((slice_view *)&LVar2.B.X)->_0_4_ = local_4c;
  ((slice_view *)&LVar2.B.X)->_4_4_ = uStack_48;
  ((slice_view *)&LVar2.B.Y)->_0_4_ = *(undefined4 *)&dVar4 * param_2;
  ((slice_view *)&LVar2.B.Y)->_4_4_ = (int)((ulonglong)(dVar4 * param_2) >> 0x20);
  DrawAntialiasedLine(LVar2,(double)CONCAT44(((slice_view *)&param_6)->_0_4_,((slice_view *)&param_5)->_4_4_));
  FillEllipticalArc(param_1,param_2,param_1,param_2,param_3,param_4,
                    (double)((ulonglong)param_5 & 0xffffffff),(bool)uVar7);
  return;
}


//==== 0000896640 00896640_FUN_00896640 ====
void FUN_00896640(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 00896640 name=FUN_00896640 conv=unknown body=498

void FUN_00896640(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7)

{
  char *pcVar1;
  Type TVar2;
  int *piVar3;
  char *pcVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  int *local_24;
  int *local_20;
  undefined4 *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar8 = *param_4;
  local_1c = param_1;
  local_24 = param_7;
  if ((int)local_10 < iVar8) {
    do {
      puVar5 = local_1c;
      param_7 = local_24;
      if (*param_6 <= (int)local_c) break;
      piVar3 = (int *)(**(code **)*local_1c)(&local_10);
      local_18 = piVar3;
      local_14 = (int *)(**(code **)*puVar5)(&local_c);
      iVar8 = *local_14;
      util__Str_char___Str_char(&local_30,(Str_L_char_G_ *)(*piVar3 + 4));
      pcVar9 = "";
      if (0 < local_30.Capacity) {
        pcVar9 = local_30.Data;
      }
      util__Str_char___Str_char(&local_3c,(Str_L_char_G_ *)(iVar8 + 4));
      pcVar1 = local_3c.Data;
      pcVar4 = "";
      if (0 < local_3c.Capacity) {
        pcVar4 = local_3c.Data;
      }
      TVar2 = util__FUN_00896640(pcVar4,pcVar9);
      local_20 = (int *)CONCAT31(extraout_var,TVar2);
      if (pcVar1 != (char *)0x0) {
        operator_delete__(pcVar1);
        local_3c.Data = (char *)0x0;
      }
      if (local_30.Data != (char *)0x0) {
        operator_delete__(local_30.Data);
        local_30.Data = (char *)0x0;
      }
      param_7 = local_24;
      piVar3 = (int *)*local_24;
      *local_24 = (int)piVar3 + 1;
      if (local_20 == (int *)0x2) {
        local_20 = piVar3;
        piVar3 = (int *)(**(code **)*param_2)(&local_20);
        *piVar3 = *local_14;
        local_c = (int *)((int)local_c + 1);
      }
      else {
        local_14 = piVar3;
        piVar3 = (int *)(**(code **)*param_2)(&local_14);
        *piVar3 = *local_18;
        local_10 = (int *)((int)local_10 + 1);
      }
      iVar8 = *param_4;
    } while ((int)local_10 < iVar8);
    if ((int)local_10 < iVar8) {
      do {
        local_14 = (int *)*param_7;
        *param_7 = (int)local_14 + 1;
        local_18 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar5 = (undefined4 *)(**(code **)*local_1c)(&local_18);
        puVar6 = (undefined4 *)(**(code **)*param_2)(&local_14);
        *puVar6 = *puVar5;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_14 = (int *)*param_7;
      *param_7 = (int)local_14 + 1;
      local_18 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar5 = (undefined4 *)(**(code **)*local_1c)(&local_18);
      puVar6 = (undefined4 *)(**(code **)*param_2)(&local_14);
      *puVar6 = *puVar5;
    } while ((int)local_c < *param_6);
  }
  iVar8 = *param_7;
  iVar7 = (**(code **)(*param_2 + 0xc))();
  if ((iVar7 < iVar8) || (iVar8 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008a5570 008a5570_GetSummedProportionConstants ====
// decompiled by BatchDecomp @ 008a5570 name=GetSummedProportionConstants conv=__thiscall body=504

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* protected: double __thiscall UILayout__GetSummedProportionConstants(void)const  */

double __thiscall UILayout__GetSummedProportionConstants(UILayout *this)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  Vec2_L_double_G_ *pVVar6;
  uint uVar7;
  UILayout *pUVar8;
  uint uVar9;
  WeakPtr_L_UIWidget_G_ *pWVar10;
  uint *puVar11;
  float10 extraout_ST0;
  double dVar12;
  Vec2_L_double_G_ local_40;
  undefined1 local_30[12];
  undefined8 local_24;
  undefined **local_1c;
  uint *local_18;
  undefined4 local_14;
  uint local_10;
  UILayout *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (this->TrueChildren).Capacity;
  local_1c = ((void *)(0x0091f328u));
  local_18 = (uint *)0x0;
  local_14 = 0;
  local_c = this;
  uVar3 = (**(code **)(*(int *)&this->TrueChildren + 0xc))();
  local_24 = (double)CONCAT44(uVar3,(undefined4)local_24);
  util__Darray_class_util__WeakPtr_class_Body_____SetSize((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_1c,(int *)((int)&local_24 + 4));
  uVar9 = local_10;
  uVar7 = -(uint)((int)((ulonglong)local_10 * 8 >> 0x20) != 0) | (uint)((ulonglong)local_10 * 8);
  local_18 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar7) | uVar7 + 4);
  if (local_18 == (uint *)0x0) {
    local_18 = (uint *)0x0;
  }
  else {
    *local_18 = uVar9;
    local_18 = local_18 + 1;
    puVar11 = local_18;
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = puVar11 + 2;
    }
  }
  pWVar10 = (this->TrueChildren).Data;
  pUVar8 = local_c;
  if (pWVar10 != pWVar10 + (this->TrueChildren).Size) {
    puVar11 = local_18 + 1;
    do {
      this_00 = (ReferenceController *)*puVar11;
      puVar11[-1] = (uint)pWVar10->Pointer;
      this_01 = pWVar10->Controller;
      *puVar11 = (uint)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      pWVar10 = pWVar10 + 1;
      puVar11 = puVar11 + 2;
      pUVar8 = local_c;
    } while (pWVar10 != (local_c->TrueChildren).Data + (local_c->TrueChildren).Size);
  }
  local_c = (UILayout *)0x0;
  local_24 = 0.0;
  iVar4 = (*(code *)local_1c[3])();
  if ((int)local_c < iVar4) {
    do {
      puVar5 = (undefined4 *)(*(code *)*local_1c)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar1)) {
        *puVar5 = 0;
      }
      cVar2 = (**(code **)(*(int *)*puVar5 + 8))();
      if (cVar2 == '\0') {
LAB_008a572a:
        dVar12 = 0.0;
      }
      else {
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar1)) {
          *puVar5 = 0;
        }
        iVar4 = (**(code **)(*(int *)*puVar5 + 0x10))(local_30);
        if (*(char *)(iVar4 + 8) == '\0') goto LAB_008a572a;
        iVar4 = (**(code **)(pUVar8->_pad_0x0_0 + 200))();
        if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
           (bVar1 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
           !bVar1)) {
          *puVar5 = 0;
        }
        pVVar6 = UIWidget__GetFillProportion((UIWidget *)*puVar5,&local_40);
        if ((iVar4 != 0) && (iVar4 == 1)) {
          pVVar6 = (Vec2_L_double_G_ *)&pVVar6->Y;
        }
        dVar12 = pVVar6->X;
      }
      local_24 = dVar12 + local_24;
      local_c = (UILayout *)((int)&local_c->_pad_0x0_0 + 1);
      iVar4 = (*(code *)local_1c[3])();
    } while ((int)local_c < iVar4);
  }
  util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)&local_1c);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (double)extraout_ST0;
}


//==== 00008ab060 008ab060_FUN_008ab060 ====
void FUN_008ab060(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7,undefined4 *param_8);

// decompiled by BatchDecomp @ 008ab060 name=FUN_008ab060 conv=unknown body=633

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008ab060(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,undefined4 *param_8)

{
  ReferenceController *pRVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined4 uVar8;
  ReferenceController *pRVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar6 = *param_4;
  local_1c = param_1;
  local_18 = param_7;
  if ((int)local_10 < iVar6) {
    local_20 = param_8;
    do {
      piVar2 = local_18;
      if (*param_6 <= (int)local_c) break;
      puVar3 = (undefined4 *)(**(code **)*local_1c)(&local_10);
      local_14 = (undefined4 *)(**(code **)*local_1c)(&local_c);
      puVar4 = (undefined4 *)local_20[1];
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      uVar8 = *local_14;
      pRVar9 = (ReferenceController *)local_14[1];
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar9);
      }
      local_28 = Interface__GetWidgetDepthValue((Interface *)*local_20,uVar8,pRVar9,uVar10,uVar11,uVar12,uVar13);
      puVar4 = (undefined4 *)local_20[1];
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      uVar8 = *puVar3;
      pRVar9 = (ReferenceController *)puVar3[1];
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar9);
      }
      dVar7 = Interface__GetWidgetDepthValue((Interface *)*local_20,uVar8,pRVar9,uVar10,uVar11,uVar12,uVar13);
      puVar4 = (undefined4 *)*piVar2;
      *piVar2 = (int)puVar4 + 1;
      if (local_28 <= dVar7) {
        local_14 = puVar4;
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        pRVar9 = (ReferenceController *)puVar4[1];
        *puVar4 = *puVar3;
        pRVar1 = (ReferenceController *)puVar3[1];
        puVar4[1] = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar9 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar9);
        }
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      else {
        local_28 = (double)CONCAT44(puVar4,(undefined4)local_28);
        puVar4 = (undefined4 *)(**(code **)*param_2)((int)&local_28 + 4);
        pRVar9 = (ReferenceController *)puVar4[1];
        *puVar4 = *local_14;
        pRVar1 = (ReferenceController *)local_14[1];
        puVar4[1] = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar9 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar9);
        }
        local_c = (undefined4 *)((int)local_c + 1);
      }
      iVar6 = *param_4;
    } while ((int)local_10 < iVar6);
    if ((int)local_10 < iVar6) {
      do {
        local_28 = (double)CONCAT44(*local_18,(undefined4)local_28);
        *local_18 = *local_18 + 1;
        local_14 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar4 = (undefined4 *)(**(code **)*local_1c)(&local_14);
        puVar3 = (undefined4 *)(**(code **)*param_2)((int)&local_28 + 4);
        pRVar9 = (ReferenceController *)puVar3[1];
        *puVar3 = *puVar4;
        pRVar1 = (ReferenceController *)puVar4[1];
        puVar3[1] = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar9 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar9);
        }
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_28 = (double)CONCAT44(*local_18,(undefined4)local_28);
      *local_18 = *local_18 + 1;
      local_14 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar4 = (undefined4 *)(**(code **)*local_1c)(&local_14);
      puVar3 = (undefined4 *)(**(code **)*param_2)((int)&local_28 + 4);
      pRVar9 = (ReferenceController *)puVar3[1];
      *puVar3 = *puVar4;
      pRVar1 = (ReferenceController *)puVar4[1];
      puVar3[1] = pRVar1;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
      }
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar9);
      }
    } while ((int)local_c < *param_6);
  }
  iVar6 = *local_18;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if ((iVar5 < iVar6) || (iVar6 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008ab2e0 008ab2e0_FUN_008ab2e0 ====
void FUN_008ab2e0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 008ab2e0 name=FUN_008ab2e0 conv=unknown body=565

void FUN_008ab2e0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 int *param_6,int *param_7)

{
  ReferenceController *pRVar1;
  ReferenceController *pRVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18 = param_7;
  local_10 = *param_3;
  local_c = *param_5;
  iVar7 = *param_4;
  local_1c = param_2;
  if (local_10 < iVar7) {
    do {
      if (*param_6 <= local_c) break;
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_10);
      puVar5 = (undefined4 *)(**(code **)*param_1)(&local_c);
      if (((ReferenceController *)puVar5[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar5[1]),
         !bVar3)) {
        *puVar5 = 0;
      }
      local_14 = (**(code **)(*(int *)*puVar5 + 0x18))();
      if (((ReferenceController *)puVar4[1] != (ReferenceController *)0x0) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar4[1]),
         !bVar3)) {
        *puVar4 = 0;
      }
      iVar6 = (**(code **)(*(int *)*puVar4 + 0x18))();
      param_2 = local_1c;
      iVar7 = *local_18;
      *local_18 = iVar7 + 1;
      if (local_14 < iVar6) {
        local_14 = iVar7;
        puVar4 = (undefined4 *)(**(code **)*local_1c)();
        pRVar1 = (ReferenceController *)puVar4[1];
        *puVar4 = *puVar5;
        pRVar2 = (ReferenceController *)puVar5[1];
        puVar4[1] = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
        local_c = local_c + 1;
      }
      else {
        local_14 = iVar7;
        puVar5 = (undefined4 *)(**(code **)*local_1c)(&local_14);
        pRVar1 = (ReferenceController *)puVar5[1];
        *puVar5 = *puVar4;
        pRVar2 = (ReferenceController *)puVar4[1];
        puVar5[1] = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
        local_10 = local_10 + 1;
      }
      iVar7 = *param_4;
    } while (local_10 < iVar7);
    if (local_10 < iVar7) {
      do {
        local_1c = (int *)*local_18;
        *local_18 = (int)local_1c + 1;
        local_14 = local_10;
        local_10 = local_10 + 1;
        puVar4 = (undefined4 *)(**(code **)*param_1)(&local_14);
        puVar5 = (undefined4 *)(**(code **)*param_2)(&local_1c);
        pRVar1 = (ReferenceController *)puVar5[1];
        *puVar5 = *puVar4;
        pRVar2 = (ReferenceController *)puVar4[1];
        puVar5[1] = pRVar2;
        if (pRVar2 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar2);
        }
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar1);
        }
      } while (local_10 < *param_4);
    }
  }
  if (local_c < *param_6) {
    do {
      local_1c = (int *)*local_18;
      *local_18 = (int)local_1c + 1;
      local_14 = local_c;
      local_c = local_c + 1;
      puVar4 = (undefined4 *)(**(code **)*param_1)(&local_14);
      puVar5 = (undefined4 *)(**(code **)*param_2)(&local_1c);
      pRVar1 = (ReferenceController *)puVar5[1];
      *puVar5 = *puVar4;
      pRVar2 = (ReferenceController *)puVar4[1];
      puVar5[1] = pRVar2;
      if (pRVar2 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar2);
      }
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar1);
      }
    } while (local_c < *param_6);
  }
  iVar7 = *local_18;
  iVar6 = (**(code **)(*param_2 + 0xc))();
  if ((iVar6 < iVar7) || (iVar7 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008ab520 008ab520_FUN_008ab520 ====
void FUN_008ab520(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7,undefined4 *param_8);

// decompiled by BatchDecomp @ 008ab520 name=FUN_008ab520 conv=unknown body=633

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void FUN_008ab520(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,undefined4 *param_8)

{
  ReferenceController *pRVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  undefined4 uVar8;
  ReferenceController *pRVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 local_28;
  undefined4 *local_20;
  undefined4 *local_1c;
  int *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (undefined4 *)*param_3;
  local_c = (undefined4 *)*param_5;
  iVar6 = *param_4;
  local_1c = param_1;
  local_18 = param_7;
  if ((int)local_10 < iVar6) {
    local_20 = param_8;
    do {
      piVar2 = local_18;
      if (*param_6 <= (int)local_c) break;
      puVar3 = (undefined4 *)(**(code **)*local_1c)(&local_10);
      local_14 = (undefined4 *)(**(code **)*local_1c)(&local_c);
      puVar4 = (undefined4 *)local_20[1];
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      uVar8 = *local_14;
      pRVar9 = (ReferenceController *)local_14[1];
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar9);
      }
      dVar7 = Interface__GetWidgetDepthValue((Interface *)*local_20,uVar8,pRVar9,uVar10,uVar11,uVar12,uVar13);
      puVar4 = (undefined4 *)local_20[1];
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      uVar8 = *puVar3;
      pRVar9 = (ReferenceController *)puVar3[1];
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar9);
      }
      local_28 = Interface__GetWidgetDepthValue((Interface *)*local_20,uVar8,pRVar9,uVar10,uVar11,uVar12,uVar13);
      puVar4 = (undefined4 *)*piVar2;
      *piVar2 = (int)puVar4 + 1;
      if (local_28 <= dVar7) {
        local_14 = puVar4;
        puVar4 = (undefined4 *)(**(code **)*param_2)(&local_14);
        pRVar9 = (ReferenceController *)puVar4[1];
        *puVar4 = *puVar3;
        pRVar1 = (ReferenceController *)puVar3[1];
        puVar4[1] = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar9 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar9);
        }
        local_10 = (undefined4 *)((int)local_10 + 1);
      }
      else {
        local_28 = (double)CONCAT44(puVar4,(undefined4)local_28);
        puVar4 = (undefined4 *)(**(code **)*param_2)((int)&local_28 + 4);
        pRVar9 = (ReferenceController *)puVar4[1];
        *puVar4 = *local_14;
        pRVar1 = (ReferenceController *)local_14[1];
        puVar4[1] = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar9 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar9);
        }
        local_c = (undefined4 *)((int)local_c + 1);
      }
      iVar6 = *param_4;
    } while ((int)local_10 < iVar6);
    if ((int)local_10 < iVar6) {
      do {
        local_28 = (double)CONCAT44(*local_18,(undefined4)local_28);
        *local_18 = *local_18 + 1;
        local_14 = local_10;
        local_10 = (undefined4 *)((int)local_10 + 1);
        puVar4 = (undefined4 *)(**(code **)*local_1c)(&local_14);
        puVar3 = (undefined4 *)(**(code **)*param_2)((int)&local_28 + 4);
        pRVar9 = (ReferenceController *)puVar3[1];
        *puVar3 = *puVar4;
        pRVar1 = (ReferenceController *)puVar4[1];
        puVar3[1] = pRVar1;
        if (pRVar1 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar1);
        }
        if (pRVar9 != (ReferenceController *)0x0) {
          util__ReferenceController__ReleaseWeakReference(pRVar9);
        }
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_28 = (double)CONCAT44(*local_18,(undefined4)local_28);
      *local_18 = *local_18 + 1;
      local_14 = local_c;
      local_c = (undefined4 *)((int)local_c + 1);
      puVar4 = (undefined4 *)(**(code **)*local_1c)(&local_14);
      puVar3 = (undefined4 *)(**(code **)*param_2)((int)&local_28 + 4);
      pRVar9 = (ReferenceController *)puVar3[1];
      *puVar3 = *puVar4;
      pRVar1 = (ReferenceController *)puVar4[1];
      puVar3[1] = pRVar1;
      if (pRVar1 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar1);
      }
      if (pRVar9 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(pRVar9);
      }
    } while ((int)local_c < *param_6);
  }
  iVar6 = *local_18;
  iVar5 = (**(code **)(*param_2 + 0xc))();
  if ((iVar5 < iVar6) || (iVar6 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008b0d40 008b0d40_FUN_008b0d40 ====
void FUN_008b0d40(int *param_1);

// decompiled by BatchDecomp @ 008b0d40 name=FUN_008b0d40 conv=unknown body=429

void FUN_008b0d40(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_28;
  Darray_L_float_G_ local_24;
  float local_14;
  int local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_24._pad_0x0_0 = 0;
  local_24.Data = (float *)0x0;
  local_24.Size = 0;
  local_24.Capacity = 0;
  local_24.Capacity = (**(code **)(*param_1 + 0xc))();
  local_24._pad_0x0_0 = (int)((void *)(0x00954c88u));
  local_24.Data = (float *)0x0;
  local_24.Size = 0;
  if ((local_24.Capacity < 0) || (0x3fffffff < local_24.Capacity)) {
    local_24.Capacity = 0;
  }
  else if (0 < local_24.Capacity) {
    uVar5 = -(uint)((int)((ulonglong)(uint)local_24.Capacity * 4 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)local_24.Capacity * 4);
    pfVar2 = (float *)operator_new__(uVar5);
    if (pfVar2 == (float *)0x0) {
      pfVar2 = (float *)0x0;
    }
    else {
      memset(pfVar2,0,uVar5);
    }
    iVar3 = 0;
    local_24.Data = pfVar2;
    if (0 < local_24.Capacity) {
      do {
        pfVar2[iVar3] = 0.0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_24.Capacity);
    }
  }
  local_10 = 0;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (local_10 < iVar3) {
    do {
      iVar4 = (**(code **)*param_1)(&local_10);
      iVar3 = local_24.Size;
      local_c = *(float *)(iVar4 + 0x28);
      local_14 = (float)(local_24.Size + 1);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&local_24,(int *)&local_14);
      bVar1 = util__Darray_float___CheckSize(&local_24,iVar3);
      if (bVar1) {
        local_24.Data[local_24.Size + -1] = local_c;
      }
      local_10 = local_10 + 1;
      iVar3 = (**(code **)(*param_1 + 0xc))();
    } while (local_10 < iVar3);
  }
  iVar3 = (**(code **)(local_24._pad_0x0_0 + 0xc))();
  if (iVar3 == 0) {
    local_14 = 0.0;
  }
  else {
    local_28 = 0;
    pfVar2 = (float *)(**(code **)local_24._pad_0x0_0)(&local_28);
    local_c = 0.0;
    local_14 = *pfVar2;
    iVar3 = (**(code **)(local_24._pad_0x0_0 + 0xc))();
    if ((int)local_c < iVar3) {
      do {
        pfVar2 = (float *)(**(code **)local_24._pad_0x0_0)(&local_c);
        if (local_14 <= *pfVar2) {
          local_14 = *pfVar2;
        }
        local_c = (float)((int)local_c + 1);
        iVar3 = (**(code **)(local_24._pad_0x0_0 + 0xc))();
      } while ((int)local_c < iVar3);
    }
  }
  local_24._pad_0x0_0 = (int)((void *)(0x00954c88u));
  if (local_24.Data != (float *)0x0) {
    operator_delete__(local_24.Data);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008bc370 008bc370_FUN_008bc370 ====
void FUN_008bc370(int *param_1,char *param_2,Str_L_char_G_ *param_3, Darray_L_struct_FileIO__Error_G_ *param_4,undefined4 *param_5);

// decompiled by BatchDecomp @ 008bc370 name=FUN_008bc370 conv=unknown body=469

void FUN_008bc370(int *param_1,char *param_2,Str_L_char_G_ *param_3,
                 Darray_L_struct_FileIO__Error_G_ *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  Str_L_char_G_ *pSVar7;
  LocalizationLibrary *this;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  undefined4 local_34;
  Str_L_char_G_ local_30;
  undefined4 local_24;
  int *local_20;
  Str_L_char_G_ *local_1c;
  Str_L_char_G_ local_18;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  bVar2 = false;
  local_20 = param_1;
  local_24 = 0;
  local_c = 0;
  iVar5 = (**(code **)(*param_1 + 0xc))();
  if (local_c < iVar5) {
    do {
      iVar5 = local_c;
      local_1c = (Str_L_char_G_ *)(**(code **)*param_1)(&local_c);
      local_18.Data = (char *)0x0;
      local_18.Capacity = 0;
      local_18.Length = 0;
      if (*param_2 == '\0') {
        bVar2 = true;
        pSVar7 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_4c,param_3);
      }
      else {
        bVar3 = true;
        if (param_3->Capacity < 1) {
          pcVar6 = "";
        }
        else {
          pcVar6 = param_3->Data;
        }
        pSVar7 = util__Printf(&local_58,"%s%i",pcVar6,iVar5);
      }
      util__Str_char___Str_char(&local_18,pSVar7);
      if ((bVar2) && (bVar2 = false, local_4c.Data != (char *)0x0)) {
        operator_delete__(local_4c.Data);
        local_4c.Data = (char *)0x0;
      }
      if ((bVar3) && (bVar3 = false, local_58.Data != (char *)0x0)) {
        operator_delete__(local_58.Data);
        local_58.Data = (char *)0x0;
      }
      pSVar7 = &local_18;
      pSVar8 = local_1c;
      this = util__LocalizationLibrary__GetCurrentLanguage();
      bVar4 = util__LocalizationLibrary__AddString(this,pSVar7,pSVar8);
      if (!bVar4) {
        pcVar6 = "";
        if (0 < local_18.Capacity) {
          pcVar6 = local_18.Data;
        }
        util__Printf(&local_30,"Language string tagged with \'%s\' was overwritten.",pcVar6);
        uVar1 = *param_5;
        local_24 = uVar1;
        util__Str_char___Str_char(&local_40,&local_30);
        local_34 = uVar1;
        if (local_30.Data != (char *)0x0) {
          operator_delete__(local_30.Data);
          local_30.Data = (char *)0x0;
        }
        iVar5 = *(int *)(param_4 + 8);
        local_1c = (Str_L_char_G_ *)(iVar5 + 1);
        util__Darray_struct_FileIO__Error___SetSize(param_4,(int *)&local_1c);
        bVar4 = util__Darray_struct_FileIO__Error___CheckSize(param_4,iVar5);
        if (bVar4) {
          iVar5 = *(int *)(param_4 + 4) + *(int *)(param_4 + 8) * 0x10;
          util__Str_char___operator__o8((Str_L_char_G_ *)(iVar5 + -0x10),&local_40);
          *(undefined4 *)(iVar5 + -4) = local_24;
        }
        param_1 = local_20;
        if (local_40.Data != (char *)0x0) {
          operator_delete__(local_40.Data);
          local_40.Data = (char *)0x0;
          param_1 = local_20;
        }
      }
      if (local_18.Data != (char *)0x0) {
        operator_delete__(local_18.Data);
        ((slice_view *)&local_18)->_0_8_ = ((slice_view *)&local_18)->_0_8_ & 0xffffffff00000000;
      }
      local_c = local_c + 1;
      iVar5 = (**(code **)(*param_1 + 0xc))();
    } while (local_c < iVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008bccd0 008bccd0_FUN_008bccd0 ====
undefined1 __thiscall FUN_008bccd0(Darray_L_struct_FileIO__Error_G_ *param_1,int param_2);

// decompiled by BatchDecomp @ 008bccd0 name=FUN_008bccd0 conv=unknown body=441

undefined1 __thiscall FUN_008bccd0(Darray_L_struct_FileIO__Error_G_ *param_1,int param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  uint uVar7;
  Str_L_char_G_ *pSVar8;
  int iVar9;
  Str_L_char_G_ *this;
  undefined4 *puVar10;
  bool bVar11;
  Str_L_char_G_ *local_c;
  bool local_5;
  
  local_5 = true;
  uVar4 = *(uint *)(param_1 + 8);
  bVar11 = -1 < (int)uVar4;
  bVar2 = !bVar11;
  if (bVar2) {
    local_c = (Str_L_char_G_ *)0x0;
    util__Darray_struct_FileIO__Error___SetSize(param_1,(int *)&local_c);
    uVar4 = *(uint *)(param_1 + 8);
  }
  local_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    local_c = (Str_L_char_G_ *)0x3fffffff;
    util__Darray_struct_FileIO__Error___SetSize(param_1,(int *)&local_c);
    uVar4 = *(uint *)(param_1 + 8);
    local_5 = false;
  }
  uVar7 = *(uint *)(param_1 + 0xc);
  if ((int)uVar4 <= (int)uVar7) {
    return bVar2 && bVar11;
  }
  if (uVar7 == 0) {
    *(uint *)(param_1 + 0xc) = uVar4;
    uVar7 = uVar4;
  }
  if ((int)uVar7 < (int)uVar4) {
    do {
      uVar7 = uVar7 * 2;
    } while ((int)uVar7 < (int)uVar4);
    *(uint *)(param_1 + 0xc) = uVar7;
  }
  if (0x3fffffff < (int)uVar7) {
    *(undefined4 *)(param_1 + 0xc) = 0x3fffffff;
    uVar7 = 0x3fffffff;
  }
  uVar4 = -(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x10);
  puVar3 = (uint *)operator_new__(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    local_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar7;
    local_c = (Str_L_char_G_ *)(puVar3 + 1);
    pSVar5 = local_c;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pSVar5->Data = (char *)0x0;
      pSVar5->Capacity = 0;
      pSVar5->Length = 0;
      pSVar5[1].Data = (char *)0x0;
      pSVar5 = (Str_L_char_G_ *)&pSVar5[1].Capacity;
    }
  }
  pSVar5 = *(Str_L_char_G_ **)(param_1 + 4);
  if (pSVar5 != (Str_L_char_G_ *)0x0) {
    pSVar6 = (Str_L_char_G_ *)(*(int *)(param_1 + 8) * 0x10 + (int)local_c);
    pSVar8 = pSVar5;
    this = local_c;
    if (pSVar5 != (Str_L_char_G_ *)(param_2 * 0x10 + (int)pSVar5)) {
      do {
        if (this == pSVar6) break;
        util__Str_char___operator__o8(this,pSVar8);
        pSVar5 = pSVar8 + 1;
        pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
        this[1].Data = pSVar5->Data;
        this = (Str_L_char_G_ *)&this[1].Capacity;
        pSVar5 = *(Str_L_char_G_ **)(param_1 + 4);
      } while (pSVar8 != (Str_L_char_G_ *)(param_2 * 0x10 + (int)pSVar5));
    }
    if (pSVar5 != (Str_L_char_G_ *)0x0) {
      iVar9 = pSVar5[-1].Length;
      puVar10 = (undefined4 *)(iVar9 * 0x10 + (int)pSVar5);
      if (iVar9 != 0) {
        do {
          puVar1 = puVar10 + -4;
          puVar10 = puVar10 + -4;
          iVar9 = iVar9 + -1;
          if ((void *)*puVar1 != (void *)0x0) {
            operator_delete__((void *)*puVar1);
            *puVar10 = 0;
          }
        } while (iVar9 != 0);
        iVar9 = pSVar5[-1].Length;
      }
      operator_delete__(&pSVar5[-1].Length,iVar9 * 0x10 + 4);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(Str_L_char_G_ **)(param_1 + 4) = local_c;
  return local_5;
}


//==== 00008cada0 008cada0_FUN_008cada0 ====
void FUN_008cada0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7,undefined4 *param_8);

// decompiled by BatchDecomp @ 008cada0 name=FUN_008cada0 conv=unknown body=472

void FUN_008cada0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,undefined4 *param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  double local_30;
  double local_28;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar5 = *param_4;
  local_18 = param_1;
  local_1c = param_2;
  if ((int)local_10 < iVar5) {
    local_30 = 0.0;
    do {
      param_2 = local_1c;
      if (*param_6 <= (int)local_c) break;
      local_20 = (int *)(**(code **)*local_18)(&local_10);
      local_14 = (int *)(**(code **)*local_18)(&local_c);
      if (*local_14 == 0) {
        local_28 = 0.0;
      }
      else {
        fVar6 = (float10)(**(code **)*param_8)();
        local_28 = (double)fVar6;
      }
      dVar7 = local_30;
      if (*local_20 != 0) {
        fVar6 = (float10)(**(code **)*param_8)();
        dVar7 = (double)fVar6;
      }
      piVar1 = (int *)*param_7;
      *param_7 = (int)piVar1 + 1;
      if (local_28 <= dVar7) {
        local_14 = piVar1;
        piVar1 = (int *)(**(code **)*param_2)(&local_14);
        *piVar1 = *local_20;
        local_10 = (int *)((int)local_10 + 1);
      }
      else {
        local_20 = piVar1;
        piVar1 = (int *)(**(code **)*param_2)(&local_20);
        *piVar1 = *local_14;
        local_c = (int *)((int)local_c + 1);
      }
      iVar5 = *param_4;
    } while ((int)local_10 < iVar5);
    if ((int)local_10 < iVar5) {
      do {
        local_1c = (int *)*param_7;
        *param_7 = (int)local_1c + 1;
        local_14 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar2 = (undefined4 *)(**(code **)*local_18)(&local_14);
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_1c);
        *puVar3 = *puVar2;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_1c = (int *)*param_7;
      *param_7 = (int)local_1c + 1;
      local_14 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar2 = (undefined4 *)(**(code **)*local_18)(&local_14);
      puVar3 = (undefined4 *)(**(code **)*param_2)(&local_1c);
      *puVar3 = *puVar2;
    } while ((int)local_c < *param_6);
  }
  iVar5 = *param_7;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((iVar4 < iVar5) || (iVar5 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008caf80 008caf80_FUN_008caf80 ====
void FUN_008caf80(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5, int *param_6,int *param_7,undefined4 *param_8);

// decompiled by BatchDecomp @ 008caf80 name=FUN_008caf80 conv=unknown body=468

void FUN_008caf80(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,undefined4 *param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  double dVar7;
  double local_30;
  double local_28;
  int *local_20;
  int *local_1c;
  undefined4 *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = (int *)*param_3;
  local_c = (int *)*param_5;
  iVar5 = *param_4;
  local_18 = param_1;
  local_1c = param_2;
  if ((int)local_10 < iVar5) {
    local_30 = 0.0;
    do {
      param_2 = local_1c;
      if (*param_6 <= (int)local_c) break;
      local_20 = (int *)(**(code **)*local_18)(&local_10);
      local_14 = (int *)(**(code **)*local_18)(&local_c);
      if (*local_14 == 0) {
        local_28 = 0.0;
      }
      else {
        fVar6 = (float10)(**(code **)*param_8)();
        local_28 = (double)fVar6;
      }
      dVar7 = local_30;
      if (*local_20 != 0) {
        fVar6 = (float10)(**(code **)*param_8)();
        dVar7 = (double)fVar6;
      }
      piVar1 = (int *)*param_7;
      *param_7 = (int)piVar1 + 1;
      if (dVar7 <= local_28) {
        local_14 = piVar1;
        piVar1 = (int *)(**(code **)*param_2)(&local_14);
        *piVar1 = *local_20;
        local_10 = (int *)((int)local_10 + 1);
      }
      else {
        local_20 = piVar1;
        piVar1 = (int *)(**(code **)*param_2)(&local_20);
        *piVar1 = *local_14;
        local_c = (int *)((int)local_c + 1);
      }
      iVar5 = *param_4;
    } while ((int)local_10 < iVar5);
    if ((int)local_10 < iVar5) {
      do {
        local_1c = (int *)*param_7;
        *param_7 = (int)local_1c + 1;
        local_14 = local_10;
        local_10 = (int *)((int)local_10 + 1);
        puVar2 = (undefined4 *)(**(code **)*local_18)(&local_14);
        puVar3 = (undefined4 *)(**(code **)*param_2)(&local_1c);
        *puVar3 = *puVar2;
      } while ((int)local_10 < *param_4);
    }
  }
  if ((int)local_c < *param_6) {
    do {
      local_1c = (int *)*param_7;
      *param_7 = (int)local_1c + 1;
      local_14 = local_c;
      local_c = (int *)((int)local_c + 1);
      puVar2 = (undefined4 *)(**(code **)*local_18)(&local_14);
      puVar3 = (undefined4 *)(**(code **)*param_2)(&local_1c);
      *puVar3 = *puVar2;
    } while ((int)local_c < *param_6);
  }
  iVar5 = *param_7;
  iVar4 = (**(code **)(*param_2 + 0xc))();
  if ((iVar4 < iVar5) || (iVar5 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008d1cb0 008d1cb0_FUN_008d1cb0 ====
void FUN_008d1cb0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5, int *param_6,int *param_7);

// decompiled by BatchDecomp @ 008d1cb0 name=FUN_008d1cb0 conv=unknown body=474

void FUN_008d1cb0(undefined4 *param_1,int *param_2,int *param_3,int *param_4,int *param_5,
                 int *param_6,int *param_7)

{
  double dVar1;
  double dVar2;
  int *piVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  int iVar7;
  int iVar8;
  Str_L_char_G_ *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  double dVar3;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = *param_3;
  local_c = *param_5;
  iVar8 = *param_4;
  local_18 = param_7;
  if (local_10 < iVar8) {
    do {
      piVar4 = local_18;
      if (*param_6 <= local_c) break;
      pSVar5 = (Str_L_char_G_ *)(**(code **)*param_1)(&local_10);
      local_1c = (Str_L_char_G_ *)(**(code **)*param_1)(&local_c);
      dVar1 = *(double *)&local_1c[1].Capacity;
      dVar2 = *(double *)&pSVar5[1].Capacity;
      dVar3 = *(double *)&pSVar5[1].Capacity;
      local_14 = *piVar4;
      *piVar4 = local_14 + 1;
      if (dVar1 < dVar3 || dVar1 == dVar2) {
        pSVar6 = (Str_L_char_G_ *)(**(code **)*param_2)(&local_14);
        util__Str_char___operator__o8(pSVar6,pSVar5);
        iVar8 = pSVar5[1].Length;
        pSVar6[1].Capacity = pSVar5[1].Capacity;
        pSVar6[1].Length = iVar8;
        local_10 = local_10 + 1;
      }
      else {
        pSVar5 = (Str_L_char_G_ *)(**(code **)*param_2)(&local_14);
        util__Str_char___operator__o8(pSVar5,local_1c);
        iVar8 = local_1c[1].Length;
        pSVar5[1].Capacity = local_1c[1].Capacity;
        pSVar5[1].Length = iVar8;
        local_c = local_c + 1;
      }
      iVar8 = *param_4;
    } while (local_10 < iVar8);
    if (local_10 < iVar8) {
      do {
        local_1c = (Str_L_char_G_ *)*local_18;
        *local_18 = (int)((int)&local_1c->Data + 1);
        local_14 = local_10;
        local_10 = local_10 + 1;
        pSVar5 = (Str_L_char_G_ *)(**(code **)*param_1)(&local_14);
        pSVar6 = (Str_L_char_G_ *)(**(code **)*param_2)(&local_1c);
        util__Str_char___operator__o8(pSVar6,pSVar5);
        iVar8 = pSVar5[1].Length;
        pSVar6[1].Capacity = pSVar5[1].Capacity;
        pSVar6[1].Length = iVar8;
      } while (local_10 < *param_4);
    }
  }
  if (local_c < *param_6) {
    do {
      local_1c = (Str_L_char_G_ *)*local_18;
      *local_18 = (int)((int)&local_1c->Data + 1);
      local_14 = local_c;
      local_c = local_c + 1;
      pSVar5 = (Str_L_char_G_ *)(**(code **)*param_1)(&local_14);
      pSVar6 = (Str_L_char_G_ *)(**(code **)*param_2)(&local_1c);
      util__Str_char___operator__o8(pSVar6,pSVar5);
      iVar8 = pSVar5[1].Length;
      pSVar6[1].Capacity = pSVar5[1].Capacity;
      pSVar6[1].Length = iVar8;
    } while (local_c < *param_6);
  }
  iVar8 = *local_18;
  iVar7 = (**(code **)(*param_2 + 0xc))();
  if ((iVar7 < iVar8) || (iVar8 == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\sort.inl",0x21,
                    "OutIndex <= OutList.Num() && OutIndex",(char *)0x0);
    DebugBreak();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


//==== 00008d9220 008d9220_FUN_008d9220 ====
uint __thiscall FUN_008d9220(int *param_1,int *param_2);

// decompiled by BatchDecomp @ 008d9220 name=FUN_008d9220 conv=unknown body=623

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

uint __thiscall FUN_008d9220(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  BalloonPopup *this;
  BalloonPopup *this_00;
  undefined8 uVar4;
  undefined8 uVar5;
  pmf_8b547651 *ppVar6;
  undefined4 uVar7;
  pmf_8b547651 *extraout_EAX;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  pmf_8b547651 *extraout_EAX_00;
  undefined3 extraout_var_01;
  pmf_8b547651 *extraout_EAX_01;
  bool bVar8;
  double dVar9;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_44;
  undefined7 uStack_3f;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 uStack_1c;
  int *local_18;
  undefined8 local_14;
  undefined8 uStack_c;
  
  ppVar6 = (pmf_8b547651 *)((int *)*param_1)[1];
  if ((ppVar6 != (pmf_8b547651 *)param_2[1]) ||
     (ppVar6 = *(pmf_8b547651 **)*param_1, ppVar6 != (pmf_8b547651 *)*param_2)) {
    iVar1 = *param_2;
    ppVar6 = (pmf_8b547651 *)CONCAT31((int3)((uint)ppVar6 >> 8),*(char *)(iVar1 + 0x198));
    bVar8 = *(char *)(iVar1 + 0x198) == '\0';
    local_18 = param_1;
    if (bVar8) {
      iVar2 = *(int *)(iVar1 + 0x170);
      uStack_c = (double)CONCAT44(iVar2 + 1,(undefined4)uStack_c);
      util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)(iVar1 + 0x168),(int *)((int)&uStack_c + 4));
      bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)(iVar1 + 0x168),iVar2);
      if (bVar8) {
        *(code **)(*(int *)(iVar1 + 0x16c) + -4 + *(int *)(iVar1 + 0x170) * 4) =
             BalloonPopup__GetTruePosition_Clear;
      }
      uVar7 = (**(code **)(**(int **)(iVar1 + 0x1f0) + 0xc))(&local_38);
      uStack_48 = CONCAT31(((slice_view *)&uStack_48)->_1_3_,(undefined1)uStack_20);
      local_50 = *(undefined4 *)&local_28;
      uStack_4c = *(undefined4 *)((char *)&local_28 + 4);
      *(undefined4 *)(iVar1 + 0x178) = local_38;
      *(undefined4 *)(iVar1 + 0x17c) = uStack_34;
      *(undefined4 *)(iVar1 + 0x180) = uStack_30;
      *(undefined4 *)(iVar1 + 0x184) = uStack_2c;
      *(undefined4 *)(iVar1 + 0x188) = local_50;
      *(undefined4 *)(iVar1 + 0x18c) = uStack_4c;
      *(undefined4 *)(iVar1 + 400) = uStack_48;
      *(undefined4 *)(iVar1 + 0x194) = uStack_44;
      *(ulonglong *)(iVar1 + 0x198) = CONCAT71(uStack_3f,1);
      ppVar6 = (pmf_8b547651 *)CONCAT31((int3)((uint)uVar7 >> 8),*(char *)(iVar1 + 0x198));
      bVar8 = *(char *)(iVar1 + 0x198) == '\0';
    }
    if (bVar8) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
      ppVar6 = extraout_EAX;
    }
    if (*(char *)(iVar1 + 400) != '\0') {
      puVar3 = (undefined4 *)*local_18;
      if ((ReferenceController *)puVar3[1] != (ReferenceController *)0x0) {
        bVar8 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar3[1]);
        ppVar6 = (pmf_8b547651 *)CONCAT31(extraout_var,bVar8);
        if (!bVar8) {
          *puVar3 = 0;
        }
      }
      this = (BalloonPopup *)*puVar3;
      if ((this->GetScreenDepth_MemoizedValue).IsValidData == false) {
        iVar1 = (this->BalloonPopupMemoizationHandlerInstance).ResetFunctions.Size;
        local_18 = (int *)(iVar1 + 1);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)&this->BalloonPopupMemoizationHandlerInstance
                   ,(int *)&local_18);
        bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                           &this->BalloonPopupMemoizationHandlerInstance,iVar1);
        ppVar6 = (pmf_8b547651 *)CONCAT31(extraout_var_00,bVar8);
        if (bVar8) {
          ppVar6 = (this->BalloonPopupMemoizationHandlerInstance).ResetFunctions.Data;
          ppVar6[(this->BalloonPopupMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_8b547651, BalloonPopup__GetScreenDepth_Clear);
        }
        dVar9 = BalloonPopup__GetScreenDepth_MemoizedFunction(this);
        uVar4 = uStack_c;
        uStack_c = (double)CONCAT71(((slice_view *)&uStack_c)->_1_7_,1);
        uVar5 = uStack_c;
        ((slice_view *)&local_14)->_0_4_ = *(undefined4 *)&dVar9;
        ((slice_view *)&local_14)->_4_4_ = *(undefined4 *)((char *)&dVar9 + 4);
        ((slice_view *)&uStack_c)->_4_4_ = SUB84(uVar4,4);
        *(undefined4 *)&(this->GetScreenDepth_MemoizedValue).Data = (undefined4)local_14;
        *(undefined4 *)((int)&(this->GetScreenDepth_MemoizedValue).Data + 4) = ((slice_view *)&local_14)->_4_4_;
        *(undefined4 *)&(this->GetScreenDepth_MemoizedValue).IsValidData = (undefined4)uStack_c;
        *(undefined4 *)((char *)&(this->GetScreenDepth_MemoizedValue) + 0xc) = ((slice_view *)&uStack_c)->_4_4_;
        local_14 = dVar9;
        if ((this->GetScreenDepth_MemoizedValue).IsValidData == false) {
          uStack_c = (double)uVar5;
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          ppVar6 = extraout_EAX_00;
        }
      }
      this_00 = (BalloonPopup *)*param_2;
      uStack_c = (this->GetScreenDepth_MemoizedValue).Data;
      if ((this_00->GetScreenDepth_MemoizedValue).IsValidData == false) {
        iVar1 = (this_00->BalloonPopupMemoizationHandlerInstance).ResetFunctions.Size;
        local_18 = (int *)(iVar1 + 1);
        util__Darray_class_util__Reflectable____SetSize((Darray_L_util__Reflectable_P_G_ *)
                   &this_00->BalloonPopupMemoizationHandlerInstance,(int *)&local_18);
        bVar8 = util__Darray_enum_GraphicsResource__Type___CheckSize((Darray_L_GraphicsResource__Type_G_ *)
                           &this_00->BalloonPopupMemoizationHandlerInstance,iVar1);
        ppVar6 = (pmf_8b547651 *)CONCAT31(extraout_var_01,bVar8);
        if (bVar8) {
          ppVar6 = (this_00->BalloonPopupMemoizationHandlerInstance).ResetFunctions.Data;
          ppVar6[(this_00->BalloonPopupMemoizationHandlerInstance).ResetFunctions.Size + -1] =
               CDE_PMF(pmf_8b547651, BalloonPopup__GetScreenDepth_Clear);
        }
        dVar9 = BalloonPopup__GetScreenDepth_MemoizedFunction(this_00);
        ((slice_view *)&uStack_20)->_0_4_ = ((unsigned)(1) | ((unsigned)(((slice_view *)&uStack_20)->_1_3_[0] | (((slice_view *)&uStack_20)->_1_3_[1] << 8) | (((slice_view *)&uStack_20)->_1_3_[2] << 16)) << 8));
        ((slice_view *)&local_28)->_0_4_ = *(undefined4 *)&dVar9;
        ((slice_view *)&local_28)->_4_4_ = *(undefined4 *)((char *)&dVar9 + 4);
        *(undefined4 *)&(this_00->GetScreenDepth_MemoizedValue).Data = (undefined4)local_28;
        *(undefined4 *)((int)&(this_00->GetScreenDepth_MemoizedValue).Data + 4) = ((slice_view *)&local_28)->_4_4_;
        *(undefined4 *)&(this_00->GetScreenDepth_MemoizedValue).IsValidData = uStack_20;
        *(undefined4 *)((char *)&(this_00->GetScreenDepth_MemoizedValue) + 0xc) = uStack_1c;
        if ((this_00->GetScreenDepth_MemoizedValue).IsValidData == false) {
          local_28 = dVar9;
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
          ppVar6 = extraout_EAX_01;
        }
      }
      dVar9 = (this_00->GetScreenDepth_MemoizedValue).Data;
      if ((dVar9 <= uStack_c) &&
         ((ppVar6 = (pmf_8b547651 *)
                    ((uint)CONCAT21((short)((uint)ppVar6 >> 0x10),
                                    (uStack_c == dVar9) << 6 | (NAN(uStack_c) || NAN(dVar9)) << 2 |
                                    2U | uStack_c < dVar9) << 8),
          (NAN(uStack_c) || NAN(dVar9)) == (uStack_c == dVar9) ||
          (ppVar6 = (pmf_8b547651 *)this->DepthTieBreakerIndex,
          *(pmf_8b547651 **)(*param_2 + 0x1c0) <= ppVar6)))) {
        return CONCAT31((int3)((uint)ppVar6 >> 8),1);
      }
    }
  }
  return (uint)ppVar6 & 0xffffff00;
}


//==== 00008db280 008db280___glfwChooseFBConfig ====
// decompiled by BatchDecomp @ 008db280 name=__glfwChooseFBConfig conv=unknown body=458

int * __glfwChooseFBConfig(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_10 = 0xffffffff;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  local_14 = (int *)0x0;
  if (param_3 == 0) {
    return (int *)0x0;
  }
  piVar4 = (int *)(param_2 + 0x28);
  do {
    if (((param_1[0xb] < 1) || (piVar4[1] != 0)) && (param_1[0xe] == piVar4[4])) {
      uVar7 = 0;
      if ((0 < param_1[3]) && (piVar4[-7] == 0)) {
        uVar7 = 1;
      }
      iVar3 = param_1[4];
      if ((0 < iVar3) && (piVar4[-6] == 0)) {
        uVar7 = uVar7 + 1;
      }
      iVar1 = param_1[5];
      if ((0 < iVar1) && (piVar4[-5] == 0)) {
        uVar7 = uVar7 + 1;
      }
      iVar6 = param_1[10];
      if ((0 < iVar6) && (*piVar4 < iVar6)) {
        uVar7 = uVar7 + (iVar6 - *piVar4);
      }
      if ((0 < param_1[0xc]) && (piVar4[2] == 0)) {
        uVar7 = uVar7 + 1;
      }
      uVar5 = 0;
      if (*param_1 != -1) {
        iVar6 = *param_1 - piVar4[-10];
        uVar5 = iVar6 * iVar6;
      }
      if (param_1[1] != -1) {
        iVar6 = param_1[1] - piVar4[-9];
        uVar5 = uVar5 + iVar6 * iVar6;
      }
      if (param_1[2] != -1) {
        iVar6 = param_1[2] - piVar4[-8];
        uVar5 = uVar5 + iVar6 * iVar6;
      }
      uVar2 = 0;
      if (param_1[3] != -1) {
        uVar2 = (param_1[3] - piVar4[-7]) * (param_1[3] - piVar4[-7]);
      }
      if (iVar3 != -1) {
        uVar2 = uVar2 + (iVar3 - piVar4[-6]) * (iVar3 - piVar4[-6]);
      }
      if (iVar1 != -1) {
        uVar2 = uVar2 + (iVar1 - piVar4[-5]) * (iVar1 - piVar4[-5]);
      }
      if (param_1[6] != -1) {
        iVar3 = param_1[6] - piVar4[-4];
        uVar2 = uVar2 + iVar3 * iVar3;
      }
      if (param_1[7] != -1) {
        iVar3 = param_1[7] - piVar4[-3];
        uVar2 = uVar2 + iVar3 * iVar3;
      }
      if (param_1[8] != -1) {
        iVar3 = param_1[8] - piVar4[-2];
        uVar2 = uVar2 + iVar3 * iVar3;
      }
      if (param_1[9] != -1) {
        iVar3 = param_1[9] - piVar4[-1];
        uVar2 = uVar2 + iVar3 * iVar3;
      }
      if (param_1[0xc] != -1) {
        iVar3 = param_1[0xc] - piVar4[2];
        uVar2 = uVar2 + iVar3 * iVar3;
      }
      if ((param_1[0xd] != 0) && (piVar4[3] == 0)) {
        uVar2 = uVar2 + 1;
      }
      if ((uVar7 < local_10) ||
         ((uVar7 == local_10 && ((uVar5 < local_c || ((uVar5 == local_c && (uVar2 < local_8))))))))
      {
        local_14 = piVar4 + -10;
      }
      if (piVar4 + -10 == local_14) {
        local_10 = uVar7;
        local_c = uVar5;
        local_8 = uVar2;
      }
    }
    piVar4 = piVar4 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return local_14;
}


//==== 00008db450 008db450___glfwIsValidContextConfig ====
// decompiled by BatchDecomp @ 008db450 name=__glfwIsValidContextConfig conv=unknown body=465

undefined4 __glfwIsValidContextConfig(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[1];
  if ((iVar1 != 0x36001) && (iVar1 != 0x36002)) {
    __glfwInputError(0x10003,"Invalid context creation API %i",iVar1);
    return 0;
  }
  iVar1 = *param_1;
  if (iVar1 == 0) {
LAB_008db4ab:
    if (iVar1 != 0x30001) {
      if ((iVar1 == 0x30002) &&
         ((((iVar1 = param_1[2], iVar1 < 1 || (iVar2 = param_1[3], iVar2 < 0)) ||
           ((iVar1 == 1 && (1 < iVar2)))) || ((iVar1 == 2 && (0 < iVar2)))))) {
        __glfwInputError(0x10004,"Invalid OpenGL ES version %i.%i",iVar1,param_1[3]);
        return 0;
      }
      goto LAB_008db5c0;
    }
  }
  else if (iVar1 != 0x30001) {
    if (iVar1 != 0x30002) {
      __glfwInputError(0x10003,"Invalid client API %i",iVar1);
      return 0;
    }
    goto LAB_008db4ab;
  }
  iVar1 = param_1[2];
  if ((((iVar1 < 1) || (iVar2 = param_1[3], iVar2 < 0)) || ((iVar1 == 1 && (5 < iVar2)))) ||
     (((iVar1 == 2 && (1 < iVar2)) || ((iVar1 == 3 && (3 < iVar2)))))) {
    __glfwInputError(0x10004,"Invalid OpenGL version %i.%i",iVar1,param_1[3]);
    return 0;
  }
  iVar3 = param_1[7];
  if (iVar3 != 0) {
    if ((iVar3 != 0x32001) && (iVar3 != 0x32002)) {
      __glfwInputError(0x10003,"Invalid OpenGL profile %i",iVar3);
      return 0;
    }
    if ((iVar1 < 3) || ((iVar1 == 3 && (iVar2 < 2)))) {
      __glfwInputError(0x10004,"Context profiles are only defined for OpenGL version 3.2 and above")
      ;
      return 0;
    }
  }
  if ((param_1[4] != 0) && (iVar1 < 3)) {
    __glfwInputError(0x10004,
                     "Forward-compatibility is only defined for OpenGL version 3.0 and above");
    return 0;
  }
LAB_008db5c0:
  iVar1 = param_1[8];
  if (((iVar1 != 0) && (iVar1 != 0x31001)) && (iVar1 != 0x31002)) {
    __glfwInputError(0x10003,"Invalid context robustness mode %i",iVar1);
    return 0;
  }
  iVar1 = param_1[9];
  if (((iVar1 != 0) && (iVar1 != 0x35002)) && (iVar1 != 0x35001)) {
    __glfwInputError(0x10003,"Invalid context release behavior %i",iVar1);
    return 0;
  }
  return 1;
}


//==== 00008ddd30 008ddd30_FUN_008ddd30 ====
void FUN_008ddd30(void);

// decompiled by BatchDecomp @ 008ddd30 name=FUN_008ddd30 conv=unknown body=415

void FUN_008ddd30(void)

{
  undefined4 uVar1;
  char *lpLibFileName;
  int iVar2;
  char *local_1c;
  char *local_18[4];
  undefined4 local_8;
  uint local_4;
  
  local_4 = __security_cookie ^ (uint)&local_1c;
  DAT_00994804 = LoadLibraryA("winmm.dll");
  if (DAT_00994804 == (HMODULE)0x0) {
    __glfwInputError(0x10008,"Win32: Failed to load winmm.dll");
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  DAT_00994808 = GetProcAddress(DAT_00994804,"timeGetTime");
  DAT_00994824 = LoadLibraryA("user32.dll");
  if (DAT_00994824 == (HMODULE)0x0) {
    __glfwInputError(0x10008,"Win32: Failed to load user32.dll");
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  DAT_00994828 = GetProcAddress(DAT_00994824,"SetProcessDPIAware");
  DAT_0099482c = GetProcAddress(DAT_00994824,"ChangeWindowMessageFilterEx");
  DAT_0099480c = LoadLibraryA("dinput8.dll");
  if (DAT_0099480c != (HMODULE)0x0) {
    DAT_00994810 = GetProcAddress(DAT_0099480c,"DirectInput8Create");
  }
  local_1c = "xinput1_4.dll";
  iVar2 = 0;
  local_18[0] = "xinput1_3.dll";
  lpLibFileName = "xinput1_4.dll";
  local_18[1] = "xinput9_1_0.dll";
  local_18[2] = "xinput1_2.dll";
  local_18[3] = "xinput1_1.dll";
  local_8 = 0;
  uVar1 = DAT_00994818;
  do {
    DAT_00994818 = (HMODULE)uVar1;
    DAT_00994818 = LoadLibraryA(lpLibFileName);
    if (DAT_00994818 != (HMODULE)0x0) {
      DAT_0099481c = GetProcAddress(DAT_00994818,"XInputGetCapabilities");
      DAT_00994820 = GetProcAddress(DAT_00994818,"XInputGetState");
      break;
    }
    lpLibFileName = local_18[iVar2];
    iVar2 = iVar2 + 1;
    uVar1 = 0;
  } while (lpLibFileName != (LPCSTR)0x0);
  DAT_00994830 = LoadLibraryA("dwmapi.dll");
  if (DAT_00994830 != (HMODULE)0x0) {
    DAT_00994834 = GetProcAddress(DAT_00994830,"DwmIsCompositionEnabled");
    DAT_00994838 = GetProcAddress(DAT_00994830,"DwmFlush");
  }
  DAT_0099483c = LoadLibraryA("shcore.dll");
  if (DAT_0099483c != (HMODULE)0x0) {
    DAT_00994840 = GetProcAddress(DAT_0099483c,"SetProcessDpiAwareness");
  }
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


//==== 00008dec70 008dec70___glfwPlatformPollEvents ====
extern undefined4 FUN_008dfbb0(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 008dec70 name=__glfwPlatformPollEvents conv=unknown body=391

void __glfwPlatformPollEvents(void)

{
  undefined4 *puVar1;
  SHORT SVar2;
  SHORT SVar3;
  int iVar4;
  HWND hWnd;
  HANDLE pvVar5;
  undefined4 uVar6;
  tagMSG local_30;
  tagRECT tStack_14;
  uint local_4;
  
  local_4 = __security_cookie ^ (uint)&local_30;
  iVar4 = PeekMessageW(&local_30,(HWND)0x0,0,0,1);
  while (iVar4 != 0) {
    puVar1 = DAT_0099409c;
    if (local_30.message == 0x12) {
      for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
        __glfwInputWindowCloseRequest(puVar1);
      }
    }
    else {
      TranslateMessage(&local_30);
      DispatchMessageW(&local_30);
    }
    iVar4 = PeekMessageW(&local_30,(HWND)0x0,0,0,1);
  }
  hWnd = GetActiveWindow();
  if ((hWnd != (HWND)0x0) && (pvVar5 = GetPropW(hWnd,L"GLFW"), pvVar5 != (HANDLE)0x0)) {
    uVar6 = FUN_008dfbb0();
    SVar2 = GetAsyncKeyState(0xa0);
    SVar3 = GetAsyncKeyState(0xa1);
    if ((-1 < SVar2) && (*(char *)((int)pvVar5 + 0x1bc) == '\x01')) {
      __glfwInputKey(pvVar5,0x154,0,0,uVar6);
    }
    if ((-1 < SVar3) && (*(char *)((int)pvVar5 + 0x1c0) == '\x01')) {
      __glfwInputKey(pvVar5,0x158,0,0,uVar6);
    }
  }
  iVar4 = DAT_00994800;
  if (DAT_00994800 != 0) {
    GetClientRect(*(HWND *)(DAT_00994800 + 0x280),&tStack_14);
    tStack_14.right = tStack_14.right / 2;
    if ((*(int *)(iVar4 + 0x294) != tStack_14.right) ||
       (*(int *)(iVar4 + 0x298) != tStack_14.bottom / 2)) {
      *(LONG *)(iVar4 + 0x294) = tStack_14.right;
      tStack_14.top = tStack_14.bottom / 2;
      *(LONG *)(iVar4 + 0x298) = tStack_14.top;
      tStack_14.left = tStack_14.right;
      ClientToScreen(*(HWND *)(iVar4 + 0x280),(LPPOINT)&tStack_14);
      SetCursorPos(tStack_14.left,tStack_14.top);
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


//==== 00008defe0 008defe0___glfwPlatformSetWindowMonitor ====
extern undefined4 FUN_008df460(); /* K&R auto(v2): 判读返回类型——x87 返回值改 float10 */

// decompiled by BatchDecomp @ 008defe0 name=__glfwPlatformSetWindowMonitor conv=unknown body=678

void __glfwPlatformSetWindowMonitor
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  DWORD DVar1;
  int iVar2;
  int cx;
  uint uVar3;
  DWORD DVar4;
  uint uVar5;
  HWND hWndInsertAfter;
  UINT UVar6;
  tagRECT local_1c;
  uint local_4;
  
  local_4 = __security_cookie ^ (uint)&local_1c;
  iVar2 = *(int *)(param_1 + 0x34);
  if (iVar2 == param_2) {
    if (param_2 != 0) {
      if (*(int *)(param_2 + 0xc) == param_1) {
        FUN_008df460(param_1);
        __security_check_cookie(local_4 ^ (uint)&local_1c);
        return;
      }
      goto LAB_008df274;
    }
    local_1c.right = param_5 + param_3;
    local_1c.bottom = param_6 + param_4;
    local_1c.left = param_3;
    local_1c.top = param_4;
    DVar4 = 0x40000;
    if ((iVar2 != 0) || (*(int *)(param_1 + 0x10) != 0)) {
      DVar4 = 0x40008;
    }
    if ((iVar2 == 0) && (*(int *)(param_1 + 8) != 0)) {
      DVar1 = 0x6ca0000;
      if (*(int *)(param_1 + 4) != 0) {
        DVar1 = 0x6cf0000;
      }
    }
    else {
      DVar1 = 0x86000000;
    }
    AdjustWindowRectEx(&local_1c,DVar1,0,DVar4);
    iVar2 = local_1c.bottom - local_1c.top;
    UVar6 = 0x114;
    cx = local_1c.right - local_1c.left;
    hWndInsertAfter = (HWND)0x0;
  }
  else {
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == param_1)) {
      __glfwInputMonitorWindowChange(iVar2,0);
      __glfwRestoreVideoModeWin32(*(undefined4 *)(param_1 + 0x34));
    }
    __glfwInputWindowMonitorChange(param_1,param_2);
    if (param_2 != 0) {
      uVar3 = GetWindowLongW(*(HWND *)(param_1 + 0x280),-0x10);
      UVar6 = 0x150;
      if (*(int *)(param_1 + 8) != 0) {
        if (*(int *)(param_1 + 0x34) == 0) {
          uVar5 = 0x6ca0000;
          if (*(int *)(param_1 + 4) != 0) {
            uVar5 = 0x6cf0000;
          }
        }
        else {
          uVar5 = 0x86000000;
        }
        SetWindowLongW(*(HWND *)(param_1 + 0x280),-0x10,uVar5 | uVar3 & 0xff30ffff);
        UVar6 = 0x170;
      }
      __glfwPlatformGetVideoMode(param_2,&local_1c);
      __glfwPlatformGetMonitorPos(param_2,&param_3,&param_4);
      SetWindowPos(*(HWND *)(param_1 + 0x280),(HWND)0xffffffff,param_3,param_4,local_1c.left,
                   local_1c.top,UVar6);
      FUN_008df460(param_1);
      __security_check_cookie(local_4 ^ (uint)&local_1c);
      return;
    }
    local_1c.right = param_5 + param_3;
    local_1c.bottom = param_6 + param_4;
    local_1c.left = param_3;
    local_1c.top = param_4;
    uVar3 = GetWindowLongW(*(HWND *)(param_1 + 0x280),-0x10);
    UVar6 = 0x110;
    if (*(int *)(param_1 + 8) != 0) {
      if (*(int *)(param_1 + 0x34) == 0) {
        uVar5 = 0x6ca0000;
        if (*(int *)(param_1 + 4) != 0) {
          uVar5 = 0x6cf0000;
        }
      }
      else {
        uVar5 = 0x86000000;
      }
      SetWindowLongW(*(HWND *)(param_1 + 0x280),-0x10,uVar5 | uVar3 & 0x7fffffff);
      UVar6 = 0x130;
    }
    DVar4 = 0x40000;
    hWndInsertAfter = (HWND)((*(int *)(param_1 + 0x10) != 0) - 2);
    if ((*(int *)(param_1 + 0x34) != 0) || (*(int *)(param_1 + 0x10) != 0)) {
      DVar4 = 0x40008;
    }
    if ((*(int *)(param_1 + 0x34) == 0) && (*(int *)(param_1 + 8) != 0)) {
      DVar1 = 0x6ca0000;
      if (*(int *)(param_1 + 4) != 0) {
        DVar1 = 0x6cf0000;
      }
    }
    else {
      DVar1 = 0x86000000;
    }
    AdjustWindowRectEx(&local_1c,DVar1,0,DVar4);
    iVar2 = local_1c.bottom - local_1c.top;
    cx = local_1c.right - local_1c.left;
  }
  SetWindowPos(*(HWND *)(param_1 + 0x280),hWndInsertAfter,local_1c.left,local_1c.top,cx,iVar2,UVar6)
  ;
LAB_008df274:
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}


//==== 00008e0ef0 008e0ef0_FUN_008e0ef0 ====
void FUN_008e0ef0(int param_1,undefined4 *param_2);

// decompiled by BatchDecomp @ 008e0ef0 name=FUN_008e0ef0 conv=unknown body=573

/* WARNING: Type propagation algorithm not settling */

void FUN_008e0ef0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  int local_20[4];
  undefined4 uStack_10;
  undefined8 local_c;
  uint local_4;
  
  local_4 = __security_cookie ^ (uint)local_20;
  local_20[0] = param_1;
  piVar1 = (int *)(param_2[1] + param_2[2] * 8);
  bVar2 = *(byte *)(param_1 + 0x18);
  if ((bVar2 & 3) != 0) {
    piVar7 = (int *)(param_1 + 4);
    uVar6 = 0xc;
    piVar5 = &_GUID_Slider;
    piVar4 = piVar7;
    do {
      if (*piVar4 != *piVar5) {
        piVar5 = &_GUID_XAxis;
        uVar6 = 0xc;
        piVar4 = piVar7;
        goto LAB_008e0f60;
      }
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
      bVar8 = 3 < uVar6;
      uVar6 = uVar6 - 4;
    } while (bVar8);
    *piVar1 = param_2[4] * 4 + 0x18;
    goto LAB_008e1052;
  }
  if ((bVar2 & 0xc) == 0) {
    if ((bVar2 & 0x10) != 0) {
      iVar3 = param_2[6];
      piVar1[1] = 3;
      *piVar1 = iVar3 * 4 + 0x20;
      param_2[6] = param_2[6] + 1;
    }
  }
  else {
    iVar3 = param_2[5];
    piVar1[1] = 2;
    *piVar1 = iVar3 + 0x30;
    param_2[5] = param_2[5] + 1;
  }
  goto LAB_008e1110;
  while( true ) {
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar8 = uVar6 < 4;
    uVar6 = uVar6 - 4;
    if (bVar8) break;
LAB_008e0f60:
    if (*piVar4 != *piVar5) {
      piVar5 = &_GUID_YAxis;
      uVar6 = 0xc;
      piVar4 = piVar7;
      goto LAB_008e0f90;
    }
  }
  *piVar1 = 0;
  goto LAB_008e1052;
  while( true ) {
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar8 = uVar6 < 4;
    uVar6 = uVar6 - 4;
    if (bVar8) break;
LAB_008e0f90:
    if (*piVar4 != *piVar5) {
      piVar5 = &_GUID_ZAxis;
      uVar6 = 0xc;
      piVar4 = piVar7;
      goto LAB_008e0fc0;
    }
  }
  *piVar1 = 4;
  goto LAB_008e1052;
  while( true ) {
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar8 = uVar6 < 4;
    uVar6 = uVar6 - 4;
    if (bVar8) break;
LAB_008e0fc0:
    if (*piVar4 != *piVar5) {
      piVar5 = &_GUID_RxAxis;
      uVar6 = 0xc;
      piVar4 = piVar7;
      goto LAB_008e0fe6;
    }
  }
  *piVar1 = 8;
  goto LAB_008e1052;
  while( true ) {
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar8 = uVar6 < 4;
    uVar6 = uVar6 - 4;
    if (bVar8) break;
LAB_008e0fe6:
    if (*piVar4 != *piVar5) {
      piVar5 = &_GUID_RyAxis;
      uVar6 = 0xc;
      piVar4 = piVar7;
      goto LAB_008e1010;
    }
  }
  *piVar1 = 0xc;
  goto LAB_008e1052;
  while( true ) {
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar8 = uVar6 < 4;
    uVar6 = uVar6 - 4;
    if (bVar8) break;
LAB_008e1010:
    if (*piVar4 != *piVar5) {
      piVar5 = &_GUID_RzAxis;
      uVar6 = 0xc;
      piVar4 = piVar7;
      goto LAB_008e1036;
    }
  }
  *piVar1 = 0x10;
  goto LAB_008e1052;
  while( true ) {
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
    bVar8 = uVar6 < 4;
    uVar6 = uVar6 - 4;
    if (bVar8) break;
LAB_008e1036:
    if (*piVar4 != *piVar5) goto LAB_008e1113;
  }
  *piVar1 = 0x14;
LAB_008e1052:
  local_20[1] = 0x18;
  local_20[3] = *(undefined4 *)(param_1 + 0x18);
  local_20[2] = 0x10;
  uStack_10 = 2;
  local_c = 0x7fffffff8000;
  iVar3 = (**(code **)(*(int *)*param_2 + 0x18))((int *)*param_2,4,local_20 + 1);
  if (-1 < iVar3) {
    piVar4 = &_GUID_Slider;
    uVar6 = 0xc;
    do {
      if (*piVar7 != *piVar4) {
        piVar1[1] = 0;
        param_2[3] = param_2[3] + 1;
        goto LAB_008e1110;
      }
      piVar7 = piVar7 + 1;
      piVar4 = piVar4 + 1;
      bVar8 = 3 < uVar6;
      uVar6 = uVar6 - 4;
    } while (bVar8);
    piVar1[1] = 1;
    param_2[4] = param_2[4] + 1;
LAB_008e1110:
    param_2[2] = param_2[2] + 1;
  }
LAB_008e1113:
  __security_check_cookie(local_4 ^ (uint)local_20);
  return;
}

