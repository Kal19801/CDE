// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 00869390 LoadInverseModelMatrixLocation_00869390 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessDistortionShader__LoadInverseModelMatrixLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8693bb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  pPVar1 = PostProcessDistortionShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 008693d0 LoadInverseModelMatrixLocation_008693d0 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessFXAAShader__LoadInverseModelMatrixLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8693fe;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  pPVar1 = PostProcessFXAAShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869410 LoadLuminanceMultiplierLocation ====

/* private: static void __cdecl
   PostProcessCopyAndApplyLuminanceShader__LoadLuminanceMultiplierLocation(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadLuminanceMultiplierLocation(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  PostProcessCopyAndApplyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  pcVar4 = "LuminanceMultiplier";
  pPVar2 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->LuminanceMultiplierRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  if ((pPVar1->LuminanceMultiplierRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminanceMultiplier."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 00869490 LoadLuminanceMultiplierLocation_00869490 ====

/* private: static void __cdecl
   PostProcessCopyAndBrightPassShader__LoadLuminanceMultiplierLocation(void) */

void __cdecl PostProcessCopyAndBrightPassShader__LoadLuminanceMultiplierLocation(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  PostProcessCopyAndBrightPassShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  pcVar4 = "LuminanceMultiplier";
  pPVar2 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->LuminanceMultiplierRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  if ((pPVar1->LuminanceMultiplierRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminanceMultiplier."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 00869510 LoadLuminanceMultiplierLocation_00869510 ====

/* private: static void __cdecl
   PostProcessCopyLuminanceShader__LoadLuminanceMultiplierLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadLuminanceMultiplierLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  PostProcessCopyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  pcVar4 = "LuminanceMultiplier";
  pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->LuminanceMultiplierRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  if ((pPVar1->LuminanceMultiplierRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminanceMultiplier."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 00869590 LoadModelMatrixLocation_00869590 ====

/* private: static void __cdecl FontShader__LoadModelMatrixLocation(void) */

void __cdecl FontShader__LoadModelMatrixLocation(void)

{
  FontShader *pFVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pFVar1 = FontShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pFVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8695bb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  pFVar1 = FontShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pFVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 008695d0 LoadModelMatrixLocation_008695d0 ====

/* private: static void __cdecl Line2DShader__LoadModelMatrixLocation(void) */

void __cdecl Line2DShader__LoadModelMatrixLocation(void)

{
  Line2DShader *pLVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pLVar1 = Line2DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pLVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8695fb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  pLVar1 = Line2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pLVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869610 LoadModelMatrixLocation_00869610 ====

/* private: static void __cdecl Point2DShader__LoadModelMatrixLocation(void) */

void __cdecl Point2DShader__LoadModelMatrixLocation(void)

{
  Point2DShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = Point2DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86963b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  pPVar1 = Point2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869650 LoadModelMatrixLocation_00869650 ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadModelMatrixLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86967b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869690 LoadModelMatrixLocation_00869690 ====

/* private: static void __cdecl PostProcessBlurShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessBlurShader__LoadModelMatrixLocation(void)

{
  PostProcessBlurShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8696bb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  pPVar1 = PostProcessBlurShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 008696d0 LoadModelMatrixLocation_008696d0 ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessBrightnessShader__LoadModelMatrixLocation(void)

{
  PostProcessBrightnessShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8696fb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869710 LoadModelMatrixLocation_00869710 ====

/* private: static void __cdecl PostProcessCompositeLuminanceShader__LoadModelMatrixLocation(void)
    */

void __cdecl PostProcessCompositeLuminanceShader__LoadModelMatrixLocation(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86973b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869750 LoadModelMatrixLocation_00869750 ====

/* private: static void __cdecl
   PostProcessCopyAndApplyLuminanceShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadModelMatrixLocation(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86977b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869790 LoadModelMatrixLocation_00869790 ====

/* private: static void __cdecl PostProcessCopyAndBrightPassShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessCopyAndBrightPassShader__LoadModelMatrixLocation(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8697bb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 008697d0 LoadModelMatrixLocation_008697d0 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadModelMatrixLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8697fb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869810 LoadModelMatrixLocation_00869810 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessDistortionShader__LoadModelMatrixLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86983b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  pPVar1 = PostProcessDistortionShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869850 LoadModelMatrixLocation_00869850 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadModelMatrixLocation(void) */

void __cdecl PostProcessFXAAShader__LoadModelMatrixLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86987e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  pPVar1 = PostProcessFXAAShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00869890 LoadNearPlaneLocation_00869890 ====

/* private: static void __cdecl FontShader__LoadNearPlaneLocation(void) */

void __cdecl FontShader__LoadNearPlaneLocation(void)

{
  FontShader *pFVar1;
  FontShader *pFVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pFVar1 = FontShader__GetStatic();
  pcVar4 = "NearPlane";
  pFVar2 = FontShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pFVar2->_pad_0x4_1,pcVar4);
  (pFVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  local_8 = 0;
  pFVar1 = FontShader__GetStatic();
  (**(code **)(pFVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 008698e0 LoadNearPlaneLocation_008698e0 ====

/* private: static void __cdecl Line2DShader__LoadNearPlaneLocation(void) */

void __cdecl Line2DShader__LoadNearPlaneLocation(void)

{
  Line2DShader *pLVar1;
  Line2DShader *pLVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pLVar1 = Line2DShader__GetStatic();
  pcVar4 = "NearPlane";
  pLVar2 = Line2DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pLVar2->_pad_0x4_1,pcVar4);
  (pLVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  local_8 = 0;
  pLVar1 = Line2DShader__GetStatic();
  (**(code **)(pLVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869930 LoadNearPlaneLocation_00869930 ====

/* private: static void __cdecl Point2DShader__LoadNearPlaneLocation(void) */

void __cdecl Point2DShader__LoadNearPlaneLocation(void)

{
  Point2DShader *pPVar1;
  Point2DShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = Point2DShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = Point2DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  local_8 = 0;
  pPVar1 = Point2DShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869980 LoadNearPlaneLocation_00869980 ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadNearPlaneLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  PostProcessBlurCrossShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessBlurCrossShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  local_8 = 0;
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 008699d0 LoadNearPlaneLocation_008699d0 ====

/* private: static void __cdecl PostProcessBlurShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessBlurShader__LoadNearPlaneLocation(void)

{
  PostProcessBlurShader *pPVar1;
  PostProcessBlurShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessBlurShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  local_8 = 0;
  pPVar1 = PostProcessBlurShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869a20 LoadNearPlaneLocation_00869a20 ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessBrightnessShader__LoadNearPlaneLocation(void)

{
  PostProcessBrightnessShader *pPVar1;
  PostProcessBrightnessShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessBrightnessShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  local_8 = 0;
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869a70 LoadNearPlaneLocation_00869a70 ====

/* private: static void __cdecl PostProcessCompositeLuminanceShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessCompositeLuminanceShader__LoadNearPlaneLocation(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  PostProcessCompositeLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  local_8 = 0;
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869ac0 LoadNearPlaneLocation_00869ac0 ====

/* private: static void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadNearPlaneLocation(void)
    */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadNearPlaneLocation(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  PostProcessCopyAndApplyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  local_8 = 0;
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869b10 LoadNearPlaneLocation_00869b10 ====

/* private: static void __cdecl PostProcessCopyAndBrightPassShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessCopyAndBrightPassShader__LoadNearPlaneLocation(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  PostProcessCopyAndBrightPassShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  local_8 = 0;
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869b60 LoadNearPlaneLocation_00869b60 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadNearPlaneLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  PostProcessCopyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  local_8 = 0;
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869bb0 LoadNearPlaneLocation_00869bb0 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessDistortionShader__LoadNearPlaneLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  PostProcessDistortionShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessDistortionShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  local_8 = 0;
  pPVar1 = PostProcessDistortionShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869c00 LoadNearPlaneLocation_00869c00 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadNearPlaneLocation(void) */

void __cdecl PostProcessFXAAShader__LoadNearPlaneLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  PostProcessFXAAShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  pcVar4 = "NearPlane";
  pPVar2 = PostProcessFXAAShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  local_8 = 0;
  pPVar1 = PostProcessFXAAShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00869c60 LoadNormalMatrixLocation_00869c60 ====

/* private: static void __cdecl FontShader__LoadNormalMatrixLocation(void) */

void __cdecl FontShader__LoadNormalMatrixLocation(void)

{
  FontShader *pFVar1;
  FontShader *pFVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pFVar1 = FontShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pFVar2 = FontShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pFVar2->_pad_0x4_1,pcVar4);
  (pFVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  pFVar1 = FontShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pFVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00869cf0 LoadNormalMatrixLocation_00869cf0 ====

/* private: static void __cdecl Line2DShader__LoadNormalMatrixLocation(void) */

void __cdecl Line2DShader__LoadNormalMatrixLocation(void)

{
  Line2DShader *pLVar1;
  Line2DShader *pLVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pLVar1 = Line2DShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pLVar2 = Line2DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pLVar2->_pad_0x4_1,pcVar4);
  (pLVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  pLVar1 = Line2DShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pLVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00869d80 LoadNormalMatrixLocation_00869d80 ====

/* private: static void __cdecl Point2DShader__LoadNormalMatrixLocation(void) */

void __cdecl Point2DShader__LoadNormalMatrixLocation(void)

{
  Point2DShader *pPVar1;
  Point2DShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = Point2DShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = Point2DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  pPVar1 = Point2DShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00869e10 LoadNormalMatrixLocation_00869e10 ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadNormalMatrixLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadNormalMatrixLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  PostProcessBlurCrossShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessBlurCrossShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00869ea0 LoadNormalMatrixLocation_00869ea0 ====

/* private: static void __cdecl PostProcessBlurShader__LoadNormalMatrixLocation(void) */

void __cdecl PostProcessBlurShader__LoadNormalMatrixLocation(void)

{
  PostProcessBlurShader *pPVar1;
  PostProcessBlurShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessBlurShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  pPVar1 = PostProcessBlurShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00869f30 LoadNormalMatrixLocation_00869f30 ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadNormalMatrixLocation(void) */

void __cdecl PostProcessBrightnessShader__LoadNormalMatrixLocation(void)

{
  PostProcessBrightnessShader *pPVar1;
  PostProcessBrightnessShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessBrightnessShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00869fc0 LoadNormalMatrixLocation_00869fc0 ====

/* private: static void __cdecl PostProcessCompositeLuminanceShader__LoadNormalMatrixLocation(void)
    */

void __cdecl PostProcessCompositeLuminanceShader__LoadNormalMatrixLocation(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  PostProcessCompositeLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 0086a050 LoadNormalMatrixLocation_0086a050 ====

/* private: static void __cdecl
   PostProcessCopyAndApplyLuminanceShader__LoadNormalMatrixLocation(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadNormalMatrixLocation(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  PostProcessCopyAndApplyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 0086a0e0 LoadNormalMatrixLocation_0086a0e0 ====

/* private: static void __cdecl PostProcessCopyAndBrightPassShader__LoadNormalMatrixLocation(void)
    */

void __cdecl PostProcessCopyAndBrightPassShader__LoadNormalMatrixLocation(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  PostProcessCopyAndBrightPassShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 0086a170 LoadNormalMatrixLocation_0086a170 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__LoadNormalMatrixLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadNormalMatrixLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  PostProcessCopyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 0086a200 LoadNormalMatrixLocation_0086a200 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadNormalMatrixLocation(void) */

void __cdecl PostProcessDistortionShader__LoadNormalMatrixLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  PostProcessDistortionShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessDistortionShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  pPVar1 = PostProcessDistortionShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 0086a290 LoadNormalMatrixLocation_0086a290 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadNormalMatrixLocation(void) */

void __cdecl PostProcessFXAAShader__LoadNormalMatrixLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  PostProcessFXAAShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pPVar2 = PostProcessFXAAShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  pPVar1 = PostProcessFXAAShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 0086a320 LoadSourceTextureCoordinateScalarLocation ====

/* private: static void __cdecl
   PostProcessCopyLuminanceShader__LoadSourceTextureCoordinateScalarLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadSourceTextureCoordinateScalarLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  PostProcessCopyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  pcVar4 = "SourceTextureCoordinateScalar";
  pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->SourceTextureCoordinateScalarRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  if ((pPVar1->SourceTextureCoordinateScalarRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: SourceTextureCoordinateScalar."
                   );
    DebugBreak();
  }
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_c);
  return;
}

//==== 0086a3a0 LoadTextureLocation_0086a3a0 ====

/* private: static void __cdecl FontShader__LoadTextureLocation(void) */

void __cdecl FontShader__LoadTextureLocation(void)

{
  FontShader *pFVar1;
  FontShader *pFVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pFVar1 = FontShader__GetStatic();
  pcVar4 = "Texture";
  pFVar2 = FontShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pFVar2->_pad_0x4_1,pcVar4);
  (pFVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  if ((pFVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pFVar1 = FontShader__GetStatic();
  (**(code **)(pFVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a420 LoadTextureLocation_0086a420 ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadTextureLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadTextureLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  PostProcessBlurCrossShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessBlurCrossShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a4a0 LoadTextureLocation_0086a4a0 ====

/* private: static void __cdecl PostProcessBlurShader__LoadTextureLocation(void) */

void __cdecl PostProcessBlurShader__LoadTextureLocation(void)

{
  PostProcessBlurShader *pPVar1;
  PostProcessBlurShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessBlurShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessBlurShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a520 LoadTextureLocation_0086a520 ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadTextureLocation(void) */

void __cdecl PostProcessBrightnessShader__LoadTextureLocation(void)

{
  PostProcessBrightnessShader *pPVar1;
  PostProcessBrightnessShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessBrightnessShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a5a0 LoadTextureLocation_0086a5a0 ====

/* private: static void __cdecl PostProcessCompositeLuminanceShader__LoadTextureLocation(void) */

void __cdecl PostProcessCompositeLuminanceShader__LoadTextureLocation(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  PostProcessCompositeLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a620 LoadTextureLocation_0086a620 ====

/* private: static void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadTextureLocation(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadTextureLocation(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  PostProcessCopyAndApplyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a6a0 LoadTextureLocation_0086a6a0 ====

/* private: static void __cdecl PostProcessCopyAndBrightPassShader__LoadTextureLocation(void) */

void __cdecl PostProcessCopyAndBrightPassShader__LoadTextureLocation(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  PostProcessCopyAndBrightPassShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a720 LoadTextureLocation_0086a720 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__LoadTextureLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadTextureLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  PostProcessCopyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a7a0 LoadTextureLocation_0086a7a0 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadTextureLocation(void) */

void __cdecl PostProcessDistortionShader__LoadTextureLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  PostProcessDistortionShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessDistortionShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessDistortionShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a820 LoadTextureLocation_0086a820 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadTextureLocation(void) */

void __cdecl PostProcessFXAAShader__LoadTextureLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  PostProcessFXAAShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  pcVar4 = "Texture";
  pPVar2 = PostProcessFXAAShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  if ((pPVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessFXAAShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0086a8a0 LoadTextureLookupOffsetLocation ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadTextureLookupOffsetLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadTextureLookupOffsetLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  PostProcessBlurCrossShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  pcVar4 = "TextureLookupOffset";
  pPVar2 = PostProcessBlurCrossShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureLookupOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  if ((pPVar1->TextureLookupOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureLookupOffset."
                   );
    DebugBreak();
  }
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x60))(&local_c);
  return;
}

//==== 0086a920 LoadTextureLookupOffsetLocation_0086a920 ====

/* private: static void __cdecl PostProcessBlurShader__LoadTextureLookupOffsetLocation(void) */

void __cdecl PostProcessBlurShader__LoadTextureLookupOffsetLocation(void)

{
  PostProcessBlurShader *pPVar1;
  PostProcessBlurShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  pcVar4 = "TextureLookupOffset";
  pPVar2 = PostProcessBlurShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureLookupOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  if ((pPVar1->TextureLookupOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureLookupOffset."
                   );
    DebugBreak();
  }
  pPVar1 = PostProcessBlurShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x68))(&local_c);
  return;
}

//==== 0086a9a0 LoadTextureLookupOffsetLocation_0086a9a0 ====

/* private: static void __cdecl
   PostProcessCopyLuminanceShader__LoadTextureLookupOffsetLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadTextureLookupOffsetLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  PostProcessCopyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  pcVar4 = "TextureLookupOffset";
  pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureLookupOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  if ((pPVar1->TextureLookupOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureLookupOffset."
                   );
    DebugBreak();
  }
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 100))(&local_c);
  return;
}

//==== 0086aa20 LoadTextureLookupOffsetLocation_0086aa20 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadTextureLookupOffsetLocation(void)
    */

void __cdecl PostProcessDistortionShader__LoadTextureLookupOffsetLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  PostProcessDistortionShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  pcVar4 = "TextureLookupOffset";
  pPVar2 = PostProcessDistortionShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureLookupOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  if ((pPVar1->TextureLookupOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureLookupOffset."
                   );
    DebugBreak();
  }
  pPVar1 = PostProcessDistortionShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x5c))(&local_c);
  return;
}

//==== 0086aaa0 LoadTextureLookupOffsetLocation_0086aaa0 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadTextureLookupOffsetLocation(void) */

void __cdecl PostProcessFXAAShader__LoadTextureLookupOffsetLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  PostProcessFXAAShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  pcVar4 = "TextureLookupOffset";
  pPVar2 = PostProcessFXAAShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TextureLookupOffsetRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  if ((pPVar1->TextureLookupOffsetRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: TextureLookupOffset."
                   );
    DebugBreak();
  }
  pPVar1 = PostProcessFXAAShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_c);
  return;
}

//==== 0086ab30 LoadTimeLocation_0086ab30 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadTimeLocation(void) */

void __cdecl PostProcessDistortionShader__LoadTimeLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  PostProcessDistortionShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  pcVar4 = "Time";
  pPVar2 = PostProcessDistortionShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->TimeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  if ((pPVar1->TimeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Time.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessDistortionShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 0086abb0 LoadTotalTransformMatrixLocation_0086abb0 ====

/* private: static void __cdecl FontShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl FontShader__LoadTotalTransformMatrixLocation(void)

{
  FontShader *pFVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pFVar1 = FontShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pFVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86abdb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  pFVar1 = FontShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pFVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086abf0 LoadTotalTransformMatrixLocation_0086abf0 ====

/* private: static void __cdecl Line2DShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl Line2DShader__LoadTotalTransformMatrixLocation(void)

{
  Line2DShader *pLVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pLVar1 = Line2DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pLVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ac1b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  pLVar1 = Line2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pLVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086ac30 LoadTotalTransformMatrixLocation_0086ac30 ====

/* private: static void __cdecl Point2DShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl Point2DShader__LoadTotalTransformMatrixLocation(void)

{
  Point2DShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = Point2DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ac5b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  pPVar1 = Point2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086ac70 LoadTotalTransformMatrixLocation_0086ac70 ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadTotalTransformMatrixLocation(void)
    */

void __cdecl PostProcessBlurCrossShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ac9b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086acb0 LoadTotalTransformMatrixLocation_0086acb0 ====

/* private: static void __cdecl PostProcessBlurShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PostProcessBlurShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessBlurShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86acdb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  pPVar1 = PostProcessBlurShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086acf0 LoadTotalTransformMatrixLocation_0086acf0 ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadTotalTransformMatrixLocation(void)
    */

void __cdecl PostProcessBrightnessShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessBrightnessShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ad1b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086ad30 LoadTotalTransformMatrixLocation_0086ad30 ====

/* private: static void __cdecl
   PostProcessCompositeLuminanceShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PostProcessCompositeLuminanceShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ad5b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086ad70 LoadTotalTransformMatrixLocation_0086ad70 ====

/* private: static void __cdecl
   PostProcessCopyAndApplyLuminanceShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ad9b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086adb0 LoadTotalTransformMatrixLocation_0086adb0 ====

/* private: static void __cdecl
   PostProcessCopyAndBrightPassShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PostProcessCopyAndBrightPassShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86addb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086adf0 LoadTotalTransformMatrixLocation_0086adf0 ====

/* private: static void __cdecl
   PostProcessCopyLuminanceShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ae1b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086ae30 LoadTotalTransformMatrixLocation_0086ae30 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadTotalTransformMatrixLocation(void)
    */

void __cdecl PostProcessDistortionShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ae5b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  pPVar1 = PostProcessDistortionShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086ae70 LoadTotalTransformMatrixLocation_0086ae70 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl PostProcessFXAAShader__LoadTotalTransformMatrixLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_dc [18];
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86ae9e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  pPVar1 = PostProcessFXAAShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_54;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = afStack_dc;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_94 = afStack_54[0];
  uStack_90 = afStack_54[1];
  uStack_8c = afStack_54[2];
  uStack_88 = afStack_54[3];
  uStack_84 = afStack_54[4];
  uStack_80 = afStack_54[5];
  uStack_7c = afStack_54[6];
  uStack_78 = uStack_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0086aeb0 PartialResetState_0086aeb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall FontShader__PartialResetState(void)const  */

void __thiscall FontShader__PartialResetState(FontShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086af10 PartialResetState_0086af10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall Line2DShader__PartialResetState(void)const  */

void __thiscall Line2DShader__PartialResetState(Line2DShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086af70 PartialResetState_0086af70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall Point2DShader__PartialResetState(void)const  */

void __thiscall Point2DShader__PartialResetState(Point2DShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086afd0 PartialResetState_0086afd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessBlurCrossShader__PartialResetState(void)const  */

void __thiscall PostProcessBlurCrossShader__PartialResetState(PostProcessBlurCrossShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b030 PartialResetState_0086b030 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessBlurShader__PartialResetState(void)const  */

void __thiscall PostProcessBlurShader__PartialResetState(PostProcessBlurShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b090 PartialResetState_0086b090 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessBrightnessShader__PartialResetState(void)const  */

void __thiscall PostProcessBrightnessShader__PartialResetState(PostProcessBrightnessShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b0f0 PartialResetState_0086b0f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessCompositeLuminanceShader__PartialResetState(void)const
    */

void __thiscall
PostProcessCompositeLuminanceShader__PartialResetState(PostProcessCompositeLuminanceShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b150 PartialResetState_0086b150 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyAndApplyLuminanceShader__PartialResetState(void)const  */

void 
PostProcessCopyAndApplyLuminanceShader__PartialResetState
          (PostProcessCopyAndApplyLuminanceShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b1b0 PartialResetState_0086b1b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessCopyAndBrightPassShader__PartialResetState(void)const
    */

void __thiscall
PostProcessCopyAndBrightPassShader__PartialResetState(PostProcessCopyAndBrightPassShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b210 PartialResetState_0086b210 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessCopyLuminanceShader__PartialResetState(void)const  */

void __thiscall
PostProcessCopyLuminanceShader__PartialResetState(PostProcessCopyLuminanceShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b270 PartialResetState_0086b270 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessDistortionShader__PartialResetState(void)const  */

void __thiscall PostProcessDistortionShader__PartialResetState(PostProcessDistortionShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b2d0 PartialResetState_0086b2d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall PostProcessFXAAShader__PartialResetState(void)const  */

void __thiscall PostProcessFXAAShader__PartialResetState(PostProcessFXAAShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->IsReadyToUse != false) {
    pDVar1 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
    local_c = 0;
    iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
    if (local_c < iVar2) {
      do {
        puVar3 = (undefined4 *)(**(code **)pDVar1->_pad_0x0_0)(&local_c);
        (*(code *)*puVar3)();
        local_c = local_c + 1;
        iVar2 = (**(code **)(pDVar1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar2);
    }
  }
  return;
}

//==== 0086b330 RenderBlackScreen ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl RenderBlackScreen(class GameManager *) */

void __cdecl RenderBlackScreen(GameManager *param_1)

{
  undefined8 stack0xfffffffc;
  Vec2_L_int_G_ VVar1;
  FrameStack FStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (GraphicsEngineIsInitialized) {
    Graphics__FrameStack__FrameStack(&FStack_9);
    SetWindowAsRenderTarget();
    (*(struct Quaternion_L_double_G_ *)&(VVar1)).Y = (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).Y;
    (*(struct Quaternion_L_double_G_ *)&(VVar1)).X = (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X;
    Graphics__LoadCustomMode(VVar1,true);
    glClearColor(0,0,0,0);
    glClear(0x4000);
    RenderDebugInfo(param_1);
    Graphics__FrameStack___FrameStack(&FStack_9);
    glfwPollEvents();
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0086b3d0 RenderDebugInfo ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl RenderDebugInfo(class GameManager *) */

void __cdecl RenderDebugInfo(GameManager *param_1)

{
  undefined8 stack0xffffffa8;
  undefined8 stack0xfffffffc;
  NormalShader *pNVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  Atlas *this;
  int iVar5;
  Vec4_L_double_G_ VVar6;
  Vec2_L_int_G_ VVar7;
  Color CStack_78;
  float fStack_40;
  Str_L_char_G_ SStack_18;
  DepthStack DStack_a;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((DebugShowFPS) && (!DebugScreenshotMode)) {
    pNVar1 = NormalShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar1);
  Graphics__DepthStack__DepthStack(&DStack_a,DepthMode__Disabled);

    CStack_78.Alpha = 1.2370591e-38;
    util__Color__Color__o7((Color *)&stack0xffffffa8);
    iVar5 = (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X + -0x226;
    util__Color__Color(&CStack_78,Preset__White,1.0);
    iVar2 = GameManager__GetFrameTime_ms(param_1);
    iVar3 = CapacitorBankSubModule__GetCount((CapacitorBankSubModule *)param_1);
    pSVar4 = util__Printf(&SStack_18,(wchar_t*)("FPS: %i\nFrame Time: %ims\n"),iVar3,iVar2);
    UIStaticText__RenderLabel(iVar5,0,pSVar4);
    if (SStack_18.Data != (char *)0x0) {
      port_op_delete(SStack_18.Data);
    }
    DepthStack__dtor(&DStack_a);
    Graphics__ShaderStack___ShaderStack(&SStack_9);
  }
  if (DebugShowIconAtlas != false) {
    this = GameManager__GetDefaultIconAtlas(param_1,false);
    Graphics__TransformStack__TransformStack((TransformStack *)&SStack_9,Style__Default);
    VVar7 = Icons__Atlas__GetTotalTextureSize(this);
    (*(struct Quaternion_L_double_G_ *)&(VVar6)).X = (double)((*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X - *(int *)(uintptr_t)(uintptr_t)(*(struct Quaternion_L_double_G_ *)&(VVar7)).X);
    VVar6.Y = 0.0;
    Graphics__Translate(VVar6);
    fStack_40 = 1.2370872e-38;
    Icons__DebugDrawAtlas(this,false,false);
    Graphics__TransformStack___TransformStack((TransformStack *)&SStack_9);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0086b510 RenderGame ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl RenderGame(class GameManager *) */

void __cdecl RenderGame(GameManager *param_1)

{
  undefined8 stack0xfffffffc;
  CameraManager *this;
  Shader *pSVar1;
  Vec4_L_double_G_ VVar2;
  Range_L_double_G_ RVar3;
  Vec4_L_double_G_ VVar4;
  Vec4_L_int_G_ VVar5;
  GameManager *pGVar6;
  PostProcessor *pPVar7;
  Range_L_double_G_ *pRVar8;
  Quaternion_L_double_G_ *pQVar9;
  Vec3_L_double_G_ *pVVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  float10 fVar15;
  Vec2_L_int_G_ VVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ShadowBuffer SVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined1 local_74 [32];
  undefined1 local_54 [24];
  undefined1 local_3c [16];
  undefined **local_2c;
  void *local_28;
  GameManager *local_1c;
  CameraManager *local_18;
  int local_14;
  FrameStack local_f;
  DepthStack local_e;
  CullStack local_d;
  BlendStack local_c;
  ShaderStack local_b;
  CullStack local_a;
  DepthStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  this = (CameraManager *)(param_1->Managers).Size;
  pPVar7 = GameManager__GetPostProcessor(param_1);
  VVar16 = PostProcessor__GetScreenSize(pPVar7);
  iVar12 = *(int *)VVar16.X;
  iVar24 = ((int *)VVar16.X)[1];
  local_18 = this;
  pRVar8 = CameraManager__GetCameraNearFarPlanes(this,(Range_L_double_G_ *)local_3c);
  uVar14 = *(undefined4 *)&pRVar8->Lower;
  uVar21 = *(undefined4 *)((int)&pRVar8->Lower + 4);
  uVar22 = *(undefined4 *)&pRVar8->Upper;
  uVar23 = *(undefined4 *)((int)&pRVar8->Upper + 4);
  dVar17 = CameraManager__GetAspectRatio(local_18);
  uVar18 = SUB84(dVar17,0);
  uVar19 = (undefined4)((ulonglong)dVar17 >> 0x20);
  dVar17 = CameraManager__GetCameraFieldOfViewY_radians();
  (*(uint32_t *)((char *)&(RVar3.Lower) + 4)) = uVar21;
  RVar3.Lower = uVar14;
  RVar3.Upper = uVar22;
  (*(uint32_t *)((char *)&(RVar3.Upper) + 4)) = uVar23;
  VVar16.Y = iVar24;
  VVar16.X = iVar12;
  Graphics__SetWorldMatrix(dVar17,(double)CONCAT44(uVar19,uVar18),RVar3,VVar16);
  VVar4.Y = SUB84((double)(*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)),0);
  VVar4.X = (double)(*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0));
  VVar4.Z = (int)((ulonglong)(double)(*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)) >> 0x20)
  ;
  Graphics__SetUIMatrix(VVar4,true);
  pQVar9 = CameraManager__GetCameraOrientation(local_18,(Quaternion_L_double_G_ *)local_74);
  pVVar10 = (Vec3_L_double_G_ *)(uintptr_t)(CameraManager__GetCameraPos(local_18,(Vec3_L_double_G_ *)local_54));
  VVar2.W = (int)((ulonglong)pVVar10->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar2) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar10);
  Graphics__SetViewMatrix(VVar2,*pQVar9);
  if (PreFrameSetupHook != (_func_void_CameraManager_ptr *)0x0) {
    (*PreFrameSetupHook)(local_18);
  }
  piVar11 = (int *)GetAllShaders();
  local_14 = 0;
  iVar12 = (**(code **)(uintptr_t)(*piVar11 + 0xc))();
  if (local_14 < iVar12) {
    do {
      puVar13 = (undefined4 *)(**(code **)*piVar11)(&local_14);
      pSVar1 = (Shader *)*puVar13;
      Graphics__ShaderStack__ShaderStack(&local_b,pSVar1);
      iVar12 = pSVar1->_pad_0x0_0;
      pRVar8 = CameraManager__GetCameraNearFarPlanes(local_18,(Range_L_double_G_ *)(local_74 + 0x10));
      (**(code **)(uintptr_t)(iVar12 + 0x3c))(pRVar8);
      iVar12 = pSVar1->_pad_0x0_0;
      pRVar8 = CameraManager__GetCameraNearFarPlanes(local_18,(Range_L_double_G_ *)(local_54 + 8));
      (**(code **)(uintptr_t)(iVar12 + 0x44))(&pRVar8->Upper);
      Graphics__ShaderStack___ShaderStack(&local_b);
      local_14 = local_14 + 1;
      iVar12 = (**(code **)(uintptr_t)(*piVar11 + 0xc))();
    } while (local_14 < iVar12);
  }
  (*(uint32_t*)&(local_3c)) = (uint32_t)(uintptr_t)(&vftable_2);
  if ((void *)(*(uint32_t*)((char*)&(local_3c)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_3c)+4)));
  }
  pGVar6 = local_1c;
  GraphicsAreReadyToView = true;
  pPVar7 = GameManager__GetPostProcessor(local_1c);
  VVar16 = PostProcessor__GetScreenSize(pPVar7);
  if ((((*(int *)VVar16.X != 0) || (((int *)VVar16.X)[1] != 0)) &&
      (((*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0)) != 0 ||
       ((*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)) != 0)))) &&
     (((*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X != 0 || ((*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).Y != 0)))) {
    (**(code ***)(void *)((char *)&(pGVar6->GameTimer).LastTime + 0x48))();
    Graphics__FrameStack__FrameStack(&local_f);
    SetWindowAsRenderTarget();
    glClearColor(0,0,0,0);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\render.cpp",0x96);
    glClear(0x4100);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\render.cpp",0x98);
    Graphics__DepthStack__DepthStack(&local_e,DepthMode__ReadWrite);
    Graphics__CullStack__CullStack(&local_d,CullMode__Disabled);
    Graphics__BlendStack__BlendStack(&local_c,BlendMode__Disabled);
    Graphics__DepthStack__DepthStack(&local_9,DepthMode__ReadWrite);
    Graphics__CullStack__CullStack(&local_a,Style__Default);
    iVar12 = 0;
    do {
      SVar20 = (uint)(iVar12 != 0);
      pPVar7 = GameManager__GetPostProcessor(pGVar6);
      PostProcessor__SetupForShadowRendering(pPVar7,SVar20);
      Graphics__LoadDrawMode((int)(uintptr_t)((int)(uintptr_t)((iVar12 != 0) + DrawMode__Shadow)));
      Graphics__TransformStack__TransformStack((TransformStack *)&local_b,Style__Default);
      GameManager__RenderShadows(pGVar6,(uint)(iVar12 != 0));
      Graphics__TransformStack___TransformStack((TransformStack *)&local_b);
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    CullStack__dtor(&local_a);
    DepthStack__dtor(&local_9);
    pPVar7 = GameManager__GetPostProcessor(pGVar6);
    PostProcessor__SetupForWriting(pPVar7);
    Graphics__LoadDrawMode(DrawMode__World);
    Graphics__DepthStack__DepthStack((DepthStack *)&local_b,DepthMode__ReadWrite);
    Graphics__BlendStack__BlendStack((BlendStack *)&local_a,BlendMode__Disabled);
    Graphics__TransformStack__TransformStack((TransformStack *)&local_9,Style__Default);
    GameManager__Render(pGVar6);
    Graphics__TransformStack___TransformStack((TransformStack *)&local_9);
    BlendStack__dtor((BlendStack *)&local_a);
    DepthStack__dtor((DepthStack *)&local_b);
    Graphics__LoadDrawMode((int)(uintptr_t)DrawMode__UI);
  Graphics__DepthStack__DepthStack(&local_9,DepthMode__Disabled);

    piVar11 = (int *)((pGVar6->GameTimer).LastTime);
    pPVar7 = GameManager__GetPostProcessor(pGVar6);
    puVar13 = (undefined4 *)pPVar7->_pad_0x0_0;
    fVar15 = (float10)(**(code **)(uintptr_t)(*piVar11 + 0x74))();
    uVar14 = (**(code **)(uintptr_t)(*piVar11 + 0x70))(local_3c,(double)fVar15);
    uVar14 = (**(code **)(uintptr_t)(*piVar11 + 0x6c))(&local_2c,uVar14);
    (*(code *)*puVar13)(uVar14);
    local_2c = &vftable_92;
    if (local_28 != (void *)0x0) {
      port_op_delete(local_28);
    }
    local_28 = (void *)0x0;
    local_2c = (undefined **)(&vftable);
    (*(uint32_t*)&(local_3c)) = (uint32_t)(uintptr_t)(&vftable_168);
    if ((void *)(*(uint32_t*)((char*)&(local_3c)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(local_3c)+4)));
    }
    DepthStack__dtor(&local_9);
    Graphics__LoadDrawMode(DrawMode__World);
    Graphics__DepthStack__DepthStack((DepthStack *)&local_b,DepthMode__Read);
    Graphics__BlendStack__BlendStack((BlendStack *)&local_a,Style__Default);
    Graphics__TransformStack__TransformStack((TransformStack *)&local_9,Style__Default);
    pGVar6 = local_1c;
    GameManager__RenderTransparent(local_1c);
    Graphics__TransformStack___TransformStack((TransformStack *)&local_9);
    BlendStack__dtor((BlendStack *)&local_a);
    DepthStack__dtor((DepthStack *)&local_b);
    Graphics__LoadDrawMode((int)(uintptr_t)DrawMode__UI);
    Graphics__DepthStack__DepthStack((DepthStack *)&local_a,DepthMode__Disabled);
    Graphics__BlendStack__BlendStack((BlendStack *)&local_9,Style__Default);
    GameManager__RenderScreenEffects(pGVar6);
    GameManager__GetPostProcessor(pGVar6);
    PostProcessor__RenderPostProcessEffects();
    BlendStack__dtor((BlendStack *)&local_9);
    DepthStack__dtor((DepthStack *)&local_a);
    Graphics__LoadDrawMode(DrawMode__World);
    Graphics__DepthStack__DepthStack((DepthStack *)&local_b,DepthMode__ReadWrite);
    Graphics__BlendStack__BlendStack((BlendStack *)&local_a,BlendMode__Disabled);
    Graphics__TransformStack__TransformStack((TransformStack *)&local_9,Style__Default);
    GameManager__Render3DUI(pGVar6);
    GameManager__GetPostProcessor(pGVar6);
    PostProcessor__CopyOver3DUI();
    Graphics__TransformStack___TransformStack((TransformStack *)&local_9);
    BlendStack__dtor((BlendStack *)&local_a);
    DepthStack__dtor((DepthStack *)&local_b);
    Graphics__LoadDrawMode((int)(uintptr_t)DrawMode__UI);
    Graphics__DepthStack__DepthStack((DepthStack *)&local_a,DepthMode__Disabled);
    Graphics__BlendStack__BlendStack((BlendStack *)&local_9,BlendMode__Disabled);
    GameManager__RenderUI(pGVar6);
    BlendStack__dtor((BlendStack *)&local_9);
    DepthStack__dtor((DepthStack *)&local_a);
    pPVar7 = GameManager__GetPostProcessor(pGVar6);
    PostProcessor__PerformFinalBlit(pPVar7);
    (*(struct Quaternion_L_double_G_ *)&(VVar5)).Y = (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).Y;
    (*(struct Quaternion_L_double_G_ *)&(VVar5)).X = (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X;
    Graphics__LoadCustomMode(VVar5,true);
    RenderDebugInfo(pGVar6);
    BlendStack__dtor(&local_c);
    CullStack__dtor(&local_d);
    DepthStack__dtor(&local_e);
    Graphics__FrameStack___FrameStack(&local_f);
  }
  return;
}

//==== 0086be50 SetAdditionalTexture_0086be50 ====

/* public: virtual void  PostProcessCompositeLuminanceShader__SetAdditionalTexture(int
   const &)const  */

void 
PostProcessCompositeLuminanceShader__SetAdditionalTexture
          (PostProcessCompositeLuminanceShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->AdditionalTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 0086bed0 SetAdditionalTextureDefault_0086bed0 ====

/* private: static void __cdecl
   PostProcessCompositeLuminanceShader__SetAdditionalTextureDefault(void) */

void __cdecl PostProcessCompositeLuminanceShader__SetAdditionalTextureDefault(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 1;
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 0086bef0 SetAll_0086bef0 ====


/* public: virtual void __thiscall util__Darray_float___SetAll(float const &) */

void __thiscall util__Darray_float___SetAll(Darray_L_float_G_ *this,float *param_1)

{
  float *pfVar1;
  
  pfVar1 = this->Data;
  if (pfVar1 != pfVar1 + this->Size) {
    do {
      *pfVar1 = *param_1;
      pfVar1 = pfVar1 + 1;
    } while (pfVar1 != this->Data + this->Size);
  }
  return;
}





//==== 0086bf30 SetBlurFilter ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetBlurFilter(struct util__Vec2_L_float_G_
   const &)const  */

void 
PostProcessBlurShader__SetBlurFilter(PostProcessBlurShader *this,Vec3_L_float_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BlurFilterRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 0086bff0 SetBlurFilter_0086bff0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetBlurFilter(struct util__Vec2_L_double_G_
   const &)const  */

void 
PostProcessBlurShader__SetBlurFilter__o3(PostProcessBlurShader *this,Vec3_L_double_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BlurFilterRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 0086c0b0 SetBlurSizeMax ====

/* public: virtual void __thiscall PostProcessBlurCrossShader__SetBlurSizeMax(int const &)const  */

void __thiscall
PostProcessBlurCrossShader__SetBlurSizeMax(PostProcessBlurCrossShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BlurSizeMaxRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 0086c130 SetBlurSizeMax_0086c130 ====

/* public: virtual void __thiscall PostProcessBlurShader__SetBlurSizeMax(int const &)const  */

void __thiscall PostProcessBlurShader__SetBlurSizeMax(PostProcessBlurShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BlurSizeMaxRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 0086c1b0 SetBrightness ====

/* public: virtual void  PostProcessBrightnessShader__SetBrightness(float const &)const
    */

void 
PostProcessBrightnessShader__SetBrightness(PostProcessBrightnessShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BrightnessRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 0086c240 SetBrightness_0086c240 ====

/* public: virtual void  PostProcessBrightnessShader__SetBrightness(double const &)const
    */

void 
PostProcessBrightnessShader__SetBrightness__o3(PostProcessBrightnessShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BrightnessRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 0086c2d0 SetFarPlane_0086c2d0 ====

/* public: virtual void  FontShader__SetFarPlane(float const &)const  */

void  FontShader__SetFarPlane(FontShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 0086c360 SetFarPlane_0086c360 ====

/* public: virtual void  FontShader__SetFarPlane(double const &)const  */

void  FontShader__SetFarPlane__o3(FontShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 0086c3f0 SetFarPlane_0086c3f0 ====

/* public: virtual void  Line2DShader__SetFarPlane(float const &)const  */

void  Line2DShader__SetFarPlane(Line2DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 0086c480 SetFarPlane_0086c480 ====

/* public: virtual void  Line2DShader__SetFarPlane(double const &)const  */

void  Line2DShader__SetFarPlane__o3(Line2DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 0086c510 SetFarPlane_0086c510 ====

/* public: virtual void  Point2DShader__SetFarPlane(float const &)const  */

void  Point2DShader__SetFarPlane(Point2DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 0086c5a0 SetFarPlane_0086c5a0 ====

/* public: virtual void  Point2DShader__SetFarPlane(double const &)const  */

void  Point2DShader__SetFarPlane__o3(Point2DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 0086c630 SetFarPlane_0086c630 ====

/* public: virtual void  PostProcessBlurCrossShader__SetFarPlane(float const &)const  */

void 
PostProcessBlurCrossShader__SetFarPlane(PostProcessBlurCrossShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 0086c6c0 SetFarPlane_0086c6c0 ====

/* public: virtual void  PostProcessBlurCrossShader__SetFarPlane(double const &)const  */

void 
PostProcessBlurCrossShader__SetFarPlane__o3(PostProcessBlurCrossShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 0086c750 SetFarPlane_0086c750 ====

/* public: virtual void  PostProcessBlurShader__SetFarPlane(float const &)const  */

void  PostProcessBlurShader__SetFarPlane(PostProcessBlurShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 0086c7e0 SetFarPlane_0086c7e0 ====

/* public: virtual void  PostProcessBlurShader__SetFarPlane(double const &)const  */

void  PostProcessBlurShader__SetFarPlane__o3(PostProcessBlurShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 0086c870 SetFarPlane_0086c870 ====

/* public: virtual void  PostProcessBrightnessShader__SetFarPlane(float const &)const  */

void 
PostProcessBrightnessShader__SetFarPlane(PostProcessBrightnessShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 0086c900 SetFarPlane_0086c900 ====

/* public: virtual void  PostProcessBrightnessShader__SetFarPlane(double const &)const  */

void 
PostProcessBrightnessShader__SetFarPlane__o3(PostProcessBrightnessShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 0086c990 SetFarPlane_0086c990 ====

/* public: virtual void  PostProcessCompositeLuminanceShader__SetFarPlane(float const
   &)const  */

void 
PostProcessCompositeLuminanceShader__SetFarPlane
          (PostProcessCompositeLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 0086ca20 SetFarPlane_0086ca20 ====

/* public: virtual void  PostProcessCompositeLuminanceShader__SetFarPlane(double const
   &)const  */

void 
PostProcessCompositeLuminanceShader__SetFarPlane__o2
          (PostProcessCompositeLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 0086cab0 SetFarPlane_0086cab0 ====

/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetFarPlane(float const
   &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetFarPlane
          (PostProcessCopyAndApplyLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 0086cb40 SetFarPlane_0086cb40 ====

/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetFarPlane(double const
   &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetFarPlane__o2
          (PostProcessCopyAndApplyLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 0086cbd0 SetFarPlane_0086cbd0 ====

/* public: virtual void  PostProcessCopyAndBrightPassShader__SetFarPlane(float const
   &)const  */

void 
PostProcessCopyAndBrightPassShader__SetFarPlane
          (PostProcessCopyAndBrightPassShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 0086cc60 SetFarPlane_0086cc60 ====

/* public: virtual void  PostProcessCopyAndBrightPassShader__SetFarPlane(double const
   &)const  */

void 
PostProcessCopyAndBrightPassShader__SetFarPlane__o2
          (PostProcessCopyAndBrightPassShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 0086ccf0 SetFarPlane_0086ccf0 ====

/* public: virtual void  PostProcessCopyLuminanceShader__SetFarPlane(float const &)const
    */

void 
PostProcessCopyLuminanceShader__SetFarPlane(PostProcessCopyLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 0086cd80 SetFarPlane_0086cd80 ====

/* public: virtual void  PostProcessCopyLuminanceShader__SetFarPlane(double const &)const
    */

void 
PostProcessCopyLuminanceShader__SetFarPlane__o3(PostProcessCopyLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 0086ce10 SetFarPlane_0086ce10 ====

/* public: virtual void  PostProcessDistortionShader__SetFarPlane(float const &)const  */

void 
PostProcessDistortionShader__SetFarPlane(PostProcessDistortionShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 0086cea0 SetFarPlane_0086cea0 ====

/* public: virtual void  PostProcessDistortionShader__SetFarPlane(double const &)const  */

void 
PostProcessDistortionShader__SetFarPlane__o3(PostProcessDistortionShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 0086cf30 SetFarPlane_0086cf30 ====

/* public: virtual void  PostProcessFXAAShader__SetFarPlane(float const &)const  */

void  PostProcessFXAAShader__SetFarPlane(PostProcessFXAAShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 0086cfd0 SetFarPlane_0086cfd0 ====

/* public: virtual void  PostProcessFXAAShader__SetFarPlane(double const &)const  */

void  PostProcessFXAAShader__SetFarPlane__o3(PostProcessFXAAShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 0086d060 SetGaussianBlur ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetGaussianBlur(class
   util__Darray_L_float_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetGaussianBlur(PostProcessBlurCrossShader *this,Darray_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  float *pfVar7;
  int local_20;
  Darray_L_float_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if ((this->GaussianBlurRegisterInstance).Location != -1) {
    local_1c._pad_0x0_0 = 0;
    local_1c.Data = (float *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    iVar3 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    util__Darray_float___Darray_float(&local_1c,iVar3);
    local_c = 0;
    iVar4 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    pfVar7 = local_1c.Data;
    iVar3 = local_1c.Size;
    if (local_c < iVar4) {
      do {
        pfVar5 = (float *)(**(code **)param_1->_pad_0x0_0)(&local_c);
        local_20 = iVar3 + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_20)
        ;
        bVar1 = util__Darray_float___CheckSize(&local_1c,iVar3);
        iVar3 = local_1c.Size;
        pfVar7 = local_1c.Data;
        if (bVar1) {
          local_1c.Data[local_1c.Size + -1] = *pfVar5;
        }
        local_c = local_c + 1;
        iVar4 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar4);
    }
    iVar3 = (this->GaussianBlurRegisterInstance).Location;
    uVar6 = (**(code **)(param_1->_pad_0x0_0 + 0xc))(pfVar7);
    (*___glewUniform1fv)(iVar3,uVar6);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
    if (pfVar7 != (float *)0x0) {
      port_op_delete(pfVar7);
    }
  }
  return;
}

//==== 0086d1a0 SetGaussianBlur_0086d1a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetGaussianBlur(class
   util__Darray_L_double_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetGaussianBlur__o2
          (PostProcessBlurCrossShader *this,Darray_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined4 uVar7;
  float *pfVar8;
  int local_20;
  Darray_L_float_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if ((this->GaussianBlurRegisterInstance).Location != -1) {
    local_1c._pad_0x0_0 = 0;
    local_1c.Data = (float *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    iVar4 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    util__Darray_float___Darray_float(&local_1c,iVar4);
    local_c = 0;
    iVar5 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    pfVar8 = local_1c.Data;
    iVar4 = local_1c.Size;
    if (local_c < iVar5) {
      do {
        pdVar6 = (double *)(**(code **)param_1->_pad_0x0_0)(&local_c);
        dVar1 = *pdVar6;
        local_20 = iVar4 + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_20)
        ;
        bVar2 = util__Darray_float___CheckSize(&local_1c,iVar4);
        iVar4 = local_1c.Size;
        pfVar8 = local_1c.Data;
        if (bVar2) {
          local_1c.Data[local_1c.Size + -1] = (float)dVar1;
        }
        local_c = local_c + 1;
        iVar5 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar5);
    }
    iVar4 = (this->GaussianBlurRegisterInstance).Location;
    uVar7 = (**(code **)(param_1->_pad_0x0_0 + 0xc))(pfVar8);
    (*___glewUniform1fv)(iVar4,uVar7);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
    if (pfVar8 != (float *)0x0) {
      port_op_delete(pfVar8);
    }
  }
  return;
}

//==== 0086d2e0 SetGaussianBlur_0086d2e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetGaussianBlur(class util__Darray_L_float_G_
   const &)const  */

void 
PostProcessBlurShader__SetGaussianBlur(PostProcessBlurShader *this,Darray_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  float *pfVar7;
  int local_20;
  Darray_L_float_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if ((this->GaussianBlurRegisterInstance).Location != -1) {
    local_1c._pad_0x0_0 = 0;
    local_1c.Data = (float *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    iVar3 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    util__Darray_float___Darray_float(&local_1c,iVar3);
    local_c = 0;
    iVar4 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    pfVar7 = local_1c.Data;
    iVar3 = local_1c.Size;
    if (local_c < iVar4) {
      do {
        pfVar5 = (float *)(**(code **)param_1->_pad_0x0_0)(&local_c);
        local_20 = iVar3 + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_20)
        ;
        bVar1 = util__Darray_float___CheckSize(&local_1c,iVar3);
        iVar3 = local_1c.Size;
        pfVar7 = local_1c.Data;
        if (bVar1) {
          local_1c.Data[local_1c.Size + -1] = *pfVar5;
        }
        local_c = local_c + 1;
        iVar4 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar4);
    }
    iVar3 = (this->GaussianBlurRegisterInstance).Location;
    uVar6 = (**(code **)(param_1->_pad_0x0_0 + 0xc))(pfVar7);
    (*___glewUniform1fv)(iVar3,uVar6);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
    if (pfVar7 != (float *)0x0) {
      port_op_delete(pfVar7);
    }
  }
  return;
}

//==== 0086d420 SetGaussianBlur_0086d420 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetGaussianBlur(class util__Darray_L_double_G_
   const &)const  */

void 
PostProcessBlurShader__SetGaussianBlur__o3(PostProcessBlurShader *this,Darray_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  undefined4 uVar7;
  float *pfVar8;
  int local_20;
  Darray_L_float_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if ((this->GaussianBlurRegisterInstance).Location != -1) {
    local_1c._pad_0x0_0 = 0;
    local_1c.Data = (float *)0x0;
    local_1c.Size = 0;
    local_1c.Capacity = 0;
    iVar4 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    util__Darray_float___Darray_float(&local_1c,iVar4);
    local_c = 0;
    iVar5 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
    pfVar8 = local_1c.Data;
    iVar4 = local_1c.Size;
    if (local_c < iVar5) {
      do {
        pdVar6 = (double *)(**(code **)param_1->_pad_0x0_0)(&local_c);
        dVar1 = *pdVar6;
        local_20 = iVar4 + 1;
        util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&local_1c,&local_20)
        ;
        bVar2 = util__Darray_float___CheckSize(&local_1c,iVar4);
        iVar4 = local_1c.Size;
        pfVar8 = local_1c.Data;
        if (bVar2) {
          local_1c.Data[local_1c.Size + -1] = (float)dVar1;
        }
        local_c = local_c + 1;
        iVar5 = (**(code **)(param_1->_pad_0x0_0 + 0xc))();
      } while (local_c < iVar5);
    }
    iVar4 = (this->GaussianBlurRegisterInstance).Location;
    uVar7 = (**(code **)(param_1->_pad_0x0_0 + 0xc))(pfVar8);
    (*___glewUniform1fv)(iVar4,uVar7);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
    if (pfVar8 != (float *)0x0) {
      port_op_delete(pfVar8);
    }
  }
  return;
}

//==== 0086d560 SetGaussianBlurDefault ====

/* private: static void __cdecl PostProcessBlurCrossShader__SetGaussianBlurDefault(void) */

void __cdecl PostProcessBlurCrossShader__SetGaussianBlurDefault(void)

{
  int iVar1;
  PostProcessBlurCrossShader *pPVar2;
  Darray_L_float_G_ *pDVar3;
  Maybe_L_util__Darray_L_float_G___G_ local_38;
  Darray_L_float_G_ local_24;
  Darray_L_float_G_ local_14;
  
  pPVar2 = PostProcessBlurCrossShader__GetStatic();
  local_14._pad_0x0_0 = (int)&vftable_586;
  local_14.Data = (float *)0x0;
  local_14.Size = 0;
  local_14.Capacity = 0;
  local_38.Data._pad_0x0_0 = (int)&vftable_586;
  local_38.Data.Data = (float *)0x0;
  local_38.Data.Size = 0;
  local_38.Data.Capacity = 0;
  local_38.IsValidData = false;
  iVar1 = pPVar2->_pad_0x0_0;
  pDVar3 = (Darray_L_float_G_ *)(uintptr_t)(util__Maybe_class_util__Darray_float_____ForceGet(&local_38,&local_24,&local_14));
  (**(code **)(uintptr_t)(iVar1 + 0x54))(pDVar3);
  local_24._pad_0x0_0 = (int)&vftable_586;
  if (local_24.Data != (float *)0x0) {
    port_op_delete(local_24.Data);
  }
  local_24.Data = (float *)0x0;
  local_24._pad_0x0_0 = (int)&vftable;
  local_38.Data._pad_0x0_0 = (int)&vftable_586;
  if (local_38.Data.Data != (float *)0x0) {
    port_op_delete(local_38.Data.Data);
  }
  local_38.Data.Data = (float *)0x0;
  local_38.Data._pad_0x0_0 = (int)&vftable;
  local_14._pad_0x0_0 = (int)&vftable_586;
  if (local_14.Data != (float *)0x0) {
    port_op_delete(local_14.Data);
  }
  return;
}

//==== 0086d630 SetGaussianBlurDefault_0086d630 ====

/* private: static void __cdecl PostProcessBlurShader__SetGaussianBlurDefault(void) */

void __cdecl PostProcessBlurShader__SetGaussianBlurDefault(void)

{
  int iVar1;
  PostProcessBlurShader *pPVar2;
  Darray_L_float_G_ *pDVar3;
  Maybe_L_util__Darray_L_float_G___G_ local_38;
  Darray_L_float_G_ local_24;
  Darray_L_float_G_ local_14;
  
  pPVar2 = PostProcessBlurShader__GetStatic();
  local_14._pad_0x0_0 = (int)&vftable_586;
  local_14.Data = (float *)0x0;
  local_14.Size = 0;
  local_14.Capacity = 0;
  local_38.Data._pad_0x0_0 = (int)&vftable_586;
  local_38.Data.Data = (float *)0x0;
  local_38.Data.Size = 0;
  local_38.Data.Capacity = 0;
  local_38.IsValidData = false;
  iVar1 = pPVar2->_pad_0x0_0;
  pDVar3 = (Darray_L_float_G_ *)(uintptr_t)(util__Maybe_class_util__Darray_float_____ForceGet(&local_38,&local_24,&local_14));
  (**(code **)(uintptr_t)(iVar1 + 0x54))(pDVar3);
  local_24._pad_0x0_0 = (int)&vftable_586;
  if (local_24.Data != (float *)0x0) {
    port_op_delete(local_24.Data);
  }
  local_24.Data = (float *)0x0;
  local_24._pad_0x0_0 = (int)&vftable;
  local_38.Data._pad_0x0_0 = (int)&vftable_586;
  if (local_38.Data.Data != (float *)0x0) {
    port_op_delete(local_38.Data.Data);
  }
  local_38.Data.Data = (float *)0x0;
  local_38.Data._pad_0x0_0 = (int)&vftable;
  local_14._pad_0x0_0 = (int)&vftable_586;
  if (local_14.Data != (float *)0x0) {
    port_op_delete(local_14.Data);
  }
  return;
}

//==== 0086d700 SetInverseModelMatrix_0086d700 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetInverseModelMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  FontShader__SetInverseModelMatrix(FontShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 0086d7c0 SetInverseModelMatrix_0086d7c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetInverseModelMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  FontShader__SetInverseModelMatrix__o3(FontShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 0086d8b0 SetInverseModelMatrix_0086d8b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetInverseModelMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  Line2DShader__SetInverseModelMatrix(Line2DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 0086d970 SetInverseModelMatrix_0086d970 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  Line2DShader__SetInverseModelMatrix__o3(Line2DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 0086da60 SetInverseModelMatrix_0086da60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  Point2DShader__SetInverseModelMatrix(Point2DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 0086db20 SetInverseModelMatrix_0086db20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  Point2DShader__SetInverseModelMatrix__o3(Point2DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 0086dc10 SetInverseModelMatrix_0086dc10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetInverseModelMatrix
          (PostProcessBlurCrossShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 0086dcd0 SetInverseModelMatrix_0086dcd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetInverseModelMatrix__o2
          (PostProcessBlurCrossShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 0086ddc0 SetInverseModelMatrix_0086ddc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBlurShader__SetInverseModelMatrix(PostProcessBlurShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 0086de80 SetInverseModelMatrix_0086de80 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBlurShader__SetInverseModelMatrix__o3(PostProcessBlurShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 0086df70 SetInverseModelMatrix_0086df70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBrightnessShader__SetInverseModelMatrix
          (PostProcessBrightnessShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 0086e030 SetInverseModelMatrix_0086e030 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBrightnessShader__SetInverseModelMatrix__o2
          (PostProcessBrightnessShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 0086e120 SetInverseModelMatrix_0086e120 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCompositeLuminanceShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCompositeLuminanceShader__SetInverseModelMatrix
          (PostProcessCompositeLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 0086e1e0 SetInverseModelMatrix_0086e1e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCompositeLuminanceShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCompositeLuminanceShader__SetInverseModelMatrix__o2
          (PostProcessCompositeLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 0086e2d0 SetInverseModelMatrix_0086e2d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyAndApplyLuminanceShader__SetInverseModelMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetInverseModelMatrix
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 0086e390 SetInverseModelMatrix_0086e390 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyAndApplyLuminanceShader__SetInverseModelMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetInverseModelMatrix__o2
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 0086e480 SetInverseModelMatrix_0086e480 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndBrightPassShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetInverseModelMatrix
          (PostProcessCopyAndBrightPassShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 0086e540 SetInverseModelMatrix_0086e540 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndBrightPassShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetInverseModelMatrix__o2
          (PostProcessCopyAndBrightPassShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 0086e630 SetInverseModelMatrix_0086e630 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetInverseModelMatrix
          (PostProcessCopyLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 0086e6f0 SetInverseModelMatrix_0086e6f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetInverseModelMatrix__o2
          (PostProcessCopyLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 0086e7e0 SetInverseModelMatrix_0086e7e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessDistortionShader__SetInverseModelMatrix
          (PostProcessDistortionShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 0086e8a0 SetInverseModelMatrix_0086e8a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessDistortionShader__SetInverseModelMatrix__o2
          (PostProcessDistortionShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 0086e990 SetInverseModelMatrix_0086e990 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessFXAAShader__SetInverseModelMatrix(PostProcessFXAAShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 0086ea60 SetInverseModelMatrix_0086ea60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessFXAAShader__SetInverseModelMatrix__o3(PostProcessFXAAShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->InverseModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 0086eb60 SetInverseModelMatrixDefault_0086eb60 ====

/* private: static void __cdecl FontShader__SetInverseModelMatrixDefault(void) */

void __cdecl FontShader__SetInverseModelMatrixDefault(void)

{
  FontShader *pFVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pFVar1 = FontShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pFVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086ec40 SetInverseModelMatrixDefault_0086ec40 ====

/* private: static void __cdecl Line2DShader__SetInverseModelMatrixDefault(void) */

void __cdecl Line2DShader__SetInverseModelMatrixDefault(void)

{
  Line2DShader *pLVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pLVar1 = Line2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pLVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086ed20 SetInverseModelMatrixDefault_0086ed20 ====

/* private: static void __cdecl Point2DShader__SetInverseModelMatrixDefault(void) */

void __cdecl Point2DShader__SetInverseModelMatrixDefault(void)

{
  Point2DShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = Point2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086ee00 SetInverseModelMatrixDefault_0086ee00 ====

/* private: static void __cdecl PostProcessBlurCrossShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessBlurCrossShader__SetInverseModelMatrixDefault(void)

{
  PostProcessBlurCrossShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086eee0 SetInverseModelMatrixDefault_0086eee0 ====

/* private: static void __cdecl PostProcessBlurShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessBlurShader__SetInverseModelMatrixDefault(void)

{
  PostProcessBlurShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086efc0 SetInverseModelMatrixDefault_0086efc0 ====

/* private: static void __cdecl PostProcessBrightnessShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessBrightnessShader__SetInverseModelMatrixDefault(void)

{
  PostProcessBrightnessShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086f0a0 SetInverseModelMatrixDefault_0086f0a0 ====

/* private: static void __cdecl
   PostProcessCompositeLuminanceShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessCompositeLuminanceShader__SetInverseModelMatrixDefault(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086f180 SetInverseModelMatrixDefault_0086f180 ====

/* private: static void __cdecl
   PostProcessCopyAndApplyLuminanceShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__SetInverseModelMatrixDefault(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086f260 SetInverseModelMatrixDefault_0086f260 ====

/* private: static void __cdecl
   PostProcessCopyAndBrightPassShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessCopyAndBrightPassShader__SetInverseModelMatrixDefault(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086f340 SetInverseModelMatrixDefault_0086f340 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__SetInverseModelMatrixDefault(void)
    */

void __cdecl PostProcessCopyLuminanceShader__SetInverseModelMatrixDefault(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086f420 SetInverseModelMatrixDefault_0086f420 ====

/* private: static void __cdecl PostProcessDistortionShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessDistortionShader__SetInverseModelMatrixDefault(void)

{
  PostProcessDistortionShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086f500 SetInverseModelMatrixDefault_0086f500 ====

/* private: static void __cdecl PostProcessFXAAShader__SetInverseModelMatrixDefault(void) */

void __cdecl PostProcessFXAAShader__SetInverseModelMatrixDefault(void)

{
  PostProcessFXAAShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0086f5e0 SetLuminanceMultiplier ====

/* public: virtual void 
   PostProcessCopyAndApplyLuminanceShader__SetLuminanceMultiplier(float const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetLuminanceMultiplier
          (PostProcessCopyAndApplyLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminanceMultiplierRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 0086f670 SetLuminanceMultiplier_0086f670 ====

/* public: virtual void 
   PostProcessCopyAndApplyLuminanceShader__SetLuminanceMultiplier(double const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetLuminanceMultiplier__o2
          (PostProcessCopyAndApplyLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminanceMultiplierRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 0086f700 SetLuminanceMultiplier_0086f700 ====

/* public: virtual void  PostProcessCopyAndBrightPassShader__SetLuminanceMultiplier(float
   const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetLuminanceMultiplier
          (PostProcessCopyAndBrightPassShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminanceMultiplierRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 0086f790 SetLuminanceMultiplier_0086f790 ====

/* public: virtual void  PostProcessCopyAndBrightPassShader__SetLuminanceMultiplier(double
   const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetLuminanceMultiplier__o2
          (PostProcessCopyAndBrightPassShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminanceMultiplierRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 0086f820 SetLuminanceMultiplier_0086f820 ====

/* public: virtual void  PostProcessCopyLuminanceShader__SetLuminanceMultiplier(float
   const &)const  */

void 
PostProcessCopyLuminanceShader__SetLuminanceMultiplier
          (PostProcessCopyLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminanceMultiplierRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 0086f8b0 SetLuminanceMultiplier_0086f8b0 ====

/* public: virtual void  PostProcessCopyLuminanceShader__SetLuminanceMultiplier(double
   const &)const  */

void 
PostProcessCopyLuminanceShader__SetLuminanceMultiplier__o2
          (PostProcessCopyLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminanceMultiplierRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 0086f940 SetModelMatrix_0086f940 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  FontShader__SetModelMatrix(FontShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 0086fa00 SetModelMatrix_0086fa00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void  FontShader__SetModelMatrix__o3(FontShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 0086faf0 SetModelMatrix_0086faf0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  Line2DShader__SetModelMatrix(Line2DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 0086fbb0 SetModelMatrix_0086fbb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void  Line2DShader__SetModelMatrix__o3(Line2DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 0086fca0 SetModelMatrix_0086fca0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  Point2DShader__SetModelMatrix(Point2DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 0086fd60 SetModelMatrix_0086fd60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  Point2DShader__SetModelMatrix__o3(Point2DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 0086fe50 SetModelMatrix_0086fe50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetModelMatrix
          (PostProcessBlurCrossShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 0086ff10 SetModelMatrix_0086ff10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetModelMatrix__o2
          (PostProcessBlurCrossShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00870000 SetModelMatrix_00870000 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBlurShader__SetModelMatrix(PostProcessBlurShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 008700c0 SetModelMatrix_008700c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBlurShader__SetModelMatrix__o3(PostProcessBlurShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 008701b0 SetModelMatrix_008701b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBrightnessShader__SetModelMatrix
          (PostProcessBrightnessShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00870270 SetModelMatrix_00870270 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBrightnessShader__SetModelMatrix__o2
          (PostProcessBrightnessShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00870360 SetModelMatrix_00870360 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCompositeLuminanceShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCompositeLuminanceShader__SetModelMatrix
          (PostProcessCompositeLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 00870420 SetModelMatrix_00870420 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCompositeLuminanceShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCompositeLuminanceShader__SetModelMatrix__o2
          (PostProcessCompositeLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 00870510 SetModelMatrix_00870510 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetModelMatrix
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 008705d0 SetModelMatrix_008705d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetModelMatrix__o2
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 008706c0 SetModelMatrix_008706c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndBrightPassShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetModelMatrix
          (PostProcessCopyAndBrightPassShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00870780 SetModelMatrix_00870780 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndBrightPassShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetModelMatrix__o2
          (PostProcessCopyAndBrightPassShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00870870 SetModelMatrix_00870870 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetModelMatrix
          (PostProcessCopyLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00870930 SetModelMatrix_00870930 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetModelMatrix__o2
          (PostProcessCopyLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00870a20 SetModelMatrix_00870a20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessDistortionShader__SetModelMatrix
          (PostProcessDistortionShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00870ae0 SetModelMatrix_00870ae0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessDistortionShader__SetModelMatrix__o2
          (PostProcessDistortionShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00870bd0 SetModelMatrix_00870bd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessFXAAShader__SetModelMatrix(PostProcessFXAAShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00870ca0 SetModelMatrix_00870ca0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessFXAAShader__SetModelMatrix__o3(PostProcessFXAAShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ModelMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00870da0 SetModelMatrixDefault_00870da0 ====

/* private: static void __cdecl FontShader__SetModelMatrixDefault(void) */

void __cdecl FontShader__SetModelMatrixDefault(void)

{
  FontShader *pFVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pFVar1 = FontShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pFVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00870e80 SetModelMatrixDefault_00870e80 ====

/* private: static void __cdecl Line2DShader__SetModelMatrixDefault(void) */

void __cdecl Line2DShader__SetModelMatrixDefault(void)

{
  Line2DShader *pLVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pLVar1 = Line2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pLVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00870f60 SetModelMatrixDefault_00870f60 ====

/* private: static void __cdecl Point2DShader__SetModelMatrixDefault(void) */

void __cdecl Point2DShader__SetModelMatrixDefault(void)

{
  Point2DShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = Point2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00871040 SetModelMatrixDefault_00871040 ====

/* private: static void __cdecl PostProcessBlurCrossShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessBlurCrossShader__SetModelMatrixDefault(void)

{
  PostProcessBlurCrossShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00871120 SetModelMatrixDefault_00871120 ====

/* private: static void __cdecl PostProcessBlurShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessBlurShader__SetModelMatrixDefault(void)

{
  PostProcessBlurShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00871200 SetModelMatrixDefault_00871200 ====

/* private: static void __cdecl PostProcessBrightnessShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessBrightnessShader__SetModelMatrixDefault(void)

{
  PostProcessBrightnessShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 008712e0 SetModelMatrixDefault_008712e0 ====

/* private: static void __cdecl PostProcessCompositeLuminanceShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessCompositeLuminanceShader__SetModelMatrixDefault(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 008713c0 SetModelMatrixDefault_008713c0 ====

/* private: static void __cdecl PostProcessCopyAndApplyLuminanceShader__SetModelMatrixDefault(void)
    */

void __cdecl PostProcessCopyAndApplyLuminanceShader__SetModelMatrixDefault(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 008714a0 SetModelMatrixDefault_008714a0 ====

/* private: static void __cdecl PostProcessCopyAndBrightPassShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessCopyAndBrightPassShader__SetModelMatrixDefault(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00871580 SetModelMatrixDefault_00871580 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessCopyLuminanceShader__SetModelMatrixDefault(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00871660 SetModelMatrixDefault_00871660 ====

/* private: static void __cdecl PostProcessDistortionShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessDistortionShader__SetModelMatrixDefault(void)

{
  PostProcessDistortionShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00871740 SetModelMatrixDefault_00871740 ====

/* private: static void __cdecl PostProcessFXAAShader__SetModelMatrixDefault(void) */

void __cdecl PostProcessFXAAShader__SetModelMatrixDefault(void)

{
  PostProcessFXAAShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00871820 SetNearPlane_00871820 ====

/* public: virtual void  FontShader__SetNearPlane(float const &)const  */

void  FontShader__SetNearPlane(FontShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 008718b0 SetNearPlane_008718b0 ====

/* public: virtual void  FontShader__SetNearPlane(double const &)const  */

void  FontShader__SetNearPlane__o3(FontShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 00871940 SetNearPlane_00871940 ====

/* public: virtual void  Line2DShader__SetNearPlane(float const &)const  */

void  Line2DShader__SetNearPlane(Line2DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 008719d0 SetNearPlane_008719d0 ====

/* public: virtual void  Line2DShader__SetNearPlane(double const &)const  */

void  Line2DShader__SetNearPlane__o3(Line2DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 00871a60 SetNearPlane_00871a60 ====

/* public: virtual void  Point2DShader__SetNearPlane(float const &)const  */

void  Point2DShader__SetNearPlane(Point2DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 00871af0 SetNearPlane_00871af0 ====

/* public: virtual void  Point2DShader__SetNearPlane(double const &)const  */

void  Point2DShader__SetNearPlane__o3(Point2DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 00871b80 SetNearPlane_00871b80 ====

/* public: virtual void  PostProcessBlurCrossShader__SetNearPlane(float const &)const  */

void 
PostProcessBlurCrossShader__SetNearPlane(PostProcessBlurCrossShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00871c10 SetNearPlane_00871c10 ====

/* public: virtual void  PostProcessBlurCrossShader__SetNearPlane(double const &)const  */

void 
PostProcessBlurCrossShader__SetNearPlane__o3(PostProcessBlurCrossShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00871ca0 SetNearPlane_00871ca0 ====

/* public: virtual void  PostProcessBlurShader__SetNearPlane(float const &)const  */

void  PostProcessBlurShader__SetNearPlane(PostProcessBlurShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 00871d30 SetNearPlane_00871d30 ====

/* public: virtual void  PostProcessBlurShader__SetNearPlane(double const &)const  */

void  PostProcessBlurShader__SetNearPlane__o3(PostProcessBlurShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 00871dc0 SetNearPlane_00871dc0 ====

/* public: virtual void  PostProcessBrightnessShader__SetNearPlane(float const &)const  */

void 
PostProcessBrightnessShader__SetNearPlane(PostProcessBrightnessShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00871e50 SetNearPlane_00871e50 ====

/* public: virtual void  PostProcessBrightnessShader__SetNearPlane(double const &)const
    */

void 
PostProcessBrightnessShader__SetNearPlane__o3(PostProcessBrightnessShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00871ee0 SetNearPlane_00871ee0 ====

/* public: virtual void  PostProcessCompositeLuminanceShader__SetNearPlane(float const
   &)const  */

void 
PostProcessCompositeLuminanceShader__SetNearPlane
          (PostProcessCompositeLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 00871f70 SetNearPlane_00871f70 ====

/* public: virtual void  PostProcessCompositeLuminanceShader__SetNearPlane(double const
   &)const  */

void 
PostProcessCompositeLuminanceShader__SetNearPlane__o2
          (PostProcessCompositeLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 00872000 SetNearPlane_00872000 ====

/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetNearPlane(float const
   &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetNearPlane
          (PostProcessCopyAndApplyLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 00872090 SetNearPlane_00872090 ====

/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetNearPlane(double const
   &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetNearPlane__o2
          (PostProcessCopyAndApplyLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 00872120 SetNearPlane_00872120 ====

/* public: virtual void  PostProcessCopyAndBrightPassShader__SetNearPlane(float const
   &)const  */

void 
PostProcessCopyAndBrightPassShader__SetNearPlane
          (PostProcessCopyAndBrightPassShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 008721b0 SetNearPlane_008721b0 ====

/* public: virtual void  PostProcessCopyAndBrightPassShader__SetNearPlane(double const
   &)const  */

void 
PostProcessCopyAndBrightPassShader__SetNearPlane__o2
          (PostProcessCopyAndBrightPassShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00872240 SetNearPlane_00872240 ====

/* public: virtual void  PostProcessCopyLuminanceShader__SetNearPlane(float const &)const
    */

void 
PostProcessCopyLuminanceShader__SetNearPlane(PostProcessCopyLuminanceShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 008722d0 SetNearPlane_008722d0 ====

/* public: virtual void  PostProcessCopyLuminanceShader__SetNearPlane(double const &)const
    */

void 
PostProcessCopyLuminanceShader__SetNearPlane__o3(PostProcessCopyLuminanceShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00872360 SetNearPlane_00872360 ====

/* public: virtual void  PostProcessDistortionShader__SetNearPlane(float const &)const  */

void 
PostProcessDistortionShader__SetNearPlane(PostProcessDistortionShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 008723f0 SetNearPlane_008723f0 ====

/* public: virtual void  PostProcessDistortionShader__SetNearPlane(double const &)const
    */

void 
PostProcessDistortionShader__SetNearPlane__o3(PostProcessDistortionShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00872480 SetNearPlane_00872480 ====

/* public: virtual void  PostProcessFXAAShader__SetNearPlane(float const &)const  */

void  PostProcessFXAAShader__SetNearPlane(PostProcessFXAAShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00872510 SetNearPlane_00872510 ====

/* public: virtual void  PostProcessFXAAShader__SetNearPlane(double const &)const  */

void  PostProcessFXAAShader__SetNearPlane__o3(PostProcessFXAAShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 008725a0 SetNormalMatrix_008725a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  FontShader__SetNormalMatrix(FontShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 00872660 SetNormalMatrix_00872660 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_ const
   &)const  */

void  FontShader__SetNormalMatrix__o3(FontShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 00872780 SetNormalMatrix_00872780 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  Line2DShader__SetNormalMatrix(Line2DShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 00872840 SetNormalMatrix_00872840 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  Line2DShader__SetNormalMatrix__o3(Line2DShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 00872960 SetNormalMatrix_00872960 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_
   const &)const  */

void  Point2DShader__SetNormalMatrix(Point2DShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 00872a20 SetNormalMatrix_00872a20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  Point2DShader__SetNormalMatrix__o3(Point2DShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 00872b40 SetNormalMatrix_00872b40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetNormalMatrix
          (PostProcessBlurCrossShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00872c00 SetNormalMatrix_00872c00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetNormalMatrix__o2
          (PostProcessBlurCrossShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00872d20 SetNormalMatrix_00872d20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessBlurShader__SetNormalMatrix(PostProcessBlurShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 00872de0 SetNormalMatrix_00872de0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessBlurShader__SetNormalMatrix__o3(PostProcessBlurShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 00872f00 SetNormalMatrix_00872f00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessBrightnessShader__SetNormalMatrix
          (PostProcessBrightnessShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00872fc0 SetNormalMatrix_00872fc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessBrightnessShader__SetNormalMatrix__o2
          (PostProcessBrightnessShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 008730e0 SetNormalMatrix_008730e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCompositeLuminanceShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessCompositeLuminanceShader__SetNormalMatrix
          (PostProcessCompositeLuminanceShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 008731a0 SetNormalMatrix_008731a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCompositeLuminanceShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessCompositeLuminanceShader__SetNormalMatrix__o2
          (PostProcessCompositeLuminanceShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 008732c0 SetNormalMatrix_008732c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetNormalMatrix
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 00873380 SetNormalMatrix_00873380 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetNormalMatrix__o2
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 008734a0 SetNormalMatrix_008734a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndBrightPassShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetNormalMatrix
          (PostProcessCopyAndBrightPassShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00873560 SetNormalMatrix_00873560 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyAndBrightPassShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessCopyAndBrightPassShader__SetNormalMatrix__o2
          (PostProcessCopyAndBrightPassShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00873680 SetNormalMatrix_00873680 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetNormalMatrix
          (PostProcessCopyLuminanceShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00873740 SetNormalMatrix_00873740 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetNormalMatrix__o2
          (PostProcessCopyLuminanceShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00873860 SetNormalMatrix_00873860 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessDistortionShader__SetNormalMatrix
          (PostProcessDistortionShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00873920 SetNormalMatrix_00873920 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessDistortionShader__SetNormalMatrix__o2
          (PostProcessDistortionShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00873a40 SetNormalMatrix_00873a40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PostProcessFXAAShader__SetNormalMatrix(PostProcessFXAAShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00873b00 SetNormalMatrix_00873b00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PostProcessFXAAShader__SetNormalMatrix__o3(PostProcessFXAAShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00873c30 SetSourceTextureCoordinateScalar ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyLuminanceShader__SetSourceTextureCoordinateScalar(struct util__Vec2_L_float_G_ const
   &)const  */

void 
PostProcessCopyLuminanceShader__SetSourceTextureCoordinateScalar
          (PostProcessCopyLuminanceShader *this,Vec3_L_float_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SourceTextureCoordinateScalarRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00873ce0 SetSourceTextureCoordinateScalar_00873ce0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyLuminanceShader__SetSourceTextureCoordinateScalar(struct util__Vec2_L_double_G_ const
   &)const  */

void 
PostProcessCopyLuminanceShader__SetSourceTextureCoordinateScalar__o2
          (PostProcessCopyLuminanceShader *this,Vec3_L_double_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SourceTextureCoordinateScalarRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00873da0 SetTexture_00873da0 ====

/* public: virtual void __thiscall FontShader__SetTexture(int const &)const  */

void __thiscall FontShader__SetTexture(FontShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 00873e20 SetTexture_00873e20 ====

/* public: virtual void __thiscall PostProcessBlurCrossShader__SetTexture(int const &)const  */

void __thiscall
PostProcessBlurCrossShader__SetTexture(PostProcessBlurCrossShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00873ea0 SetTexture_00873ea0 ====

/* public: virtual void __thiscall PostProcessBlurShader__SetTexture(int const &)const  */

void __thiscall PostProcessBlurShader__SetTexture(PostProcessBlurShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 00873f20 SetTexture_00873f20 ====

/* public: virtual void __thiscall PostProcessBrightnessShader__SetTexture(int const &)const  */

void __thiscall
PostProcessBrightnessShader__SetTexture(PostProcessBrightnessShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00873fa0 SetTexture_00873fa0 ====

/* public: virtual void  PostProcessCompositeLuminanceShader__SetTexture(int const &)const
    */

void 
PostProcessCompositeLuminanceShader__SetTexture
          (PostProcessCompositeLuminanceShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 00874020 SetTexture_00874020 ====

/* public: virtual void  PostProcessCopyAndApplyLuminanceShader__SetTexture(int const
   &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetTexture
          (PostProcessCopyAndApplyLuminanceShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 008740a0 SetTexture_008740a0 ====

/* public: virtual void  PostProcessCopyAndBrightPassShader__SetTexture(int const &)const
    */

void 
PostProcessCopyAndBrightPassShader__SetTexture
          (PostProcessCopyAndBrightPassShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00874120 SetTexture_00874120 ====

/* public: virtual void __thiscall PostProcessCopyLuminanceShader__SetTexture(int const &)const  */

void __thiscall
PostProcessCopyLuminanceShader__SetTexture(PostProcessCopyLuminanceShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 008741a0 SetTexture_008741a0 ====

/* public: virtual void __thiscall PostProcessDistortionShader__SetTexture(int const &)const  */

void __thiscall
PostProcessDistortionShader__SetTexture(PostProcessDistortionShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00874220 SetTexture_00874220 ====

/* public: virtual void __thiscall PostProcessFXAAShader__SetTexture(int const &)const  */

void __thiscall PostProcessFXAAShader__SetTexture(PostProcessFXAAShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 008742b0 SetTextureDefault_008742b0 ====

/* private: static void __cdecl FontShader__SetTextureDefault(void) */

void __cdecl FontShader__SetTextureDefault(void)

{
  FontShader *pFVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pFVar1 = FontShader__GetStatic();
  (**(code **)(pFVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 008742d0 SetTextureDefault_008742d0 ====

/* private: static void __cdecl PostProcessBlurCrossShader__SetTextureDefault(void) */

void __cdecl PostProcessBlurCrossShader__SetTextureDefault(void)

{
  PostProcessBlurCrossShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 008742f0 SetTextureDefault_008742f0 ====

/* private: static void __cdecl PostProcessBlurShader__SetTextureDefault(void) */

void __cdecl PostProcessBlurShader__SetTextureDefault(void)

{
  PostProcessBlurShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessBlurShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 00874310 SetTextureDefault_00874310 ====

/* private: static void __cdecl PostProcessBrightnessShader__SetTextureDefault(void) */

void __cdecl PostProcessBrightnessShader__SetTextureDefault(void)

{
  PostProcessBrightnessShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 00874330 SetTextureDefault_00874330 ====

/* private: static void __cdecl PostProcessCompositeLuminanceShader__SetTextureDefault(void) */

void __cdecl PostProcessCompositeLuminanceShader__SetTextureDefault(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 00874350 SetTextureDefault_00874350 ====

/* private: static void __cdecl PostProcessCopyAndApplyLuminanceShader__SetTextureDefault(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__SetTextureDefault(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 00874370 SetTextureDefault_00874370 ====

/* private: static void __cdecl PostProcessCopyAndBrightPassShader__SetTextureDefault(void) */

void __cdecl PostProcessCopyAndBrightPassShader__SetTextureDefault(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 00874390 SetTextureDefault_00874390 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__SetTextureDefault(void) */

void __cdecl PostProcessCopyLuminanceShader__SetTextureDefault(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 008743b0 SetTextureDefault_008743b0 ====

/* private: static void __cdecl PostProcessDistortionShader__SetTextureDefault(void) */

void __cdecl PostProcessDistortionShader__SetTextureDefault(void)

{
  PostProcessDistortionShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessDistortionShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 008743d0 SetTextureDefault_008743d0 ====

/* private: static void __cdecl PostProcessFXAAShader__SetTextureDefault(void) */

void __cdecl PostProcessFXAAShader__SetTextureDefault(void)

{
  PostProcessFXAAShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pPVar1 = PostProcessFXAAShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 008743f0 SetTextureLookupOffset ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetTextureLookupOffset(struct
   util__Vec2_L_float_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetTextureLookupOffset
          (PostProcessBlurCrossShader *this,Vec3_L_float_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 008744a0 SetTextureLookupOffset_008744a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetTextureLookupOffset(struct
   util__Vec2_L_double_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetTextureLookupOffset__o2
          (PostProcessBlurCrossShader *this,Vec3_L_double_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00874560 SetTextureLookupOffset_00874560 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetTextureLookupOffset(struct
   util__Vec2_L_float_G_ const &)const  */

void 
PostProcessBlurShader__SetTextureLookupOffset(PostProcessBlurShader *this,Vec3_L_float_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 00874610 SetTextureLookupOffset_00874610 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetTextureLookupOffset(struct
   util__Vec2_L_double_G_ const &)const  */

void 
PostProcessBlurShader__SetTextureLookupOffset__o3(PostProcessBlurShader *this,Vec3_L_double_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 008746d0 SetTextureLookupOffset_008746d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetTextureLookupOffset(struct
   util__Vec2_L_float_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetTextureLookupOffset
          (PostProcessCopyLuminanceShader *this,Vec3_L_float_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00874780 SetTextureLookupOffset_00874780 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetTextureLookupOffset(struct
   util__Vec2_L_double_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetTextureLookupOffset__o2
          (PostProcessCopyLuminanceShader *this,Vec3_L_double_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00874840 SetTextureLookupOffset_00874840 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetTextureLookupOffset(struct
   util__Vec2_L_float_G_ const &)const  */

void 
PostProcessDistortionShader__SetTextureLookupOffset
          (PostProcessDistortionShader *this,Vec3_L_float_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 008748f0 SetTextureLookupOffset_008748f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetTextureLookupOffset(struct
   util__Vec2_L_double_G_ const &)const  */

void 
PostProcessDistortionShader__SetTextureLookupOffset__o2
          (PostProcessDistortionShader *this,Vec3_L_double_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 008749b0 SetTextureLookupOffset_008749b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetTextureLookupOffset(struct
   util__Vec2_L_float_G_ const &)const  */

void 
PostProcessFXAAShader__SetTextureLookupOffset(PostProcessFXAAShader *this,Vec3_L_float_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00874a70 SetTextureLookupOffset_00874a70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetTextureLookupOffset(struct
   util__Vec2_L_double_G_ const &)const  */

void 
PostProcessFXAAShader__SetTextureLookupOffset__o3(PostProcessFXAAShader *this,Vec3_L_double_G_* param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureLookupOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00874b30 SetTime_00874b30 ====

/* public: virtual void  PostProcessDistortionShader__SetTime(float const &)const  */

void 
PostProcessDistortionShader__SetTime(PostProcessDistortionShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TimeRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00874bc0 SetTime_00874bc0 ====

/* public: virtual void  PostProcessDistortionShader__SetTime(double const &)const  */

void 
PostProcessDistortionShader__SetTime__o3(PostProcessDistortionShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TimeRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00874c50 SetTotalTransformMatrix_00874c50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  FontShader__SetTotalTransformMatrix(FontShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 00874d10 SetTotalTransformMatrix_00874d10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  FontShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  FontShader__SetTotalTransformMatrix__o3(FontShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  }
  return;
}

//==== 00874e00 SetTotalTransformMatrix_00874e00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  Line2DShader__SetTotalTransformMatrix(Line2DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 00874ec0 SetTotalTransformMatrix_00874ec0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Line2DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  Line2DShader__SetTotalTransformMatrix__o3(Line2DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  }
  return;
}

//==== 00874fc0 SetTotalTransformMatrix_00874fc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
Point2DShader__SetTotalTransformMatrix(Point2DShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 00875080 SetTotalTransformMatrix_00875080 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  Point2DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
Point2DShader__SetTotalTransformMatrix__o3(Point2DShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  }
  return;
}

//==== 00875170 SetTotalTransformMatrix_00875170 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetTotalTransformMatrix
          (PostProcessBlurCrossShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00875230 SetTotalTransformMatrix_00875230 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurCrossShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBlurCrossShader__SetTotalTransformMatrix__o2
          (PostProcessBlurCrossShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  }
  return;
}

//==== 00875320 SetTotalTransformMatrix_00875320 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBlurShader__SetTotalTransformMatrix
          (PostProcessBlurShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 008753e0 SetTotalTransformMatrix_008753e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBlurShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBlurShader__SetTotalTransformMatrix__o2
          (PostProcessBlurShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  }
  return;
}

//==== 008754d0 SetTotalTransformMatrix_008754d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessBrightnessShader__SetTotalTransformMatrix
          (PostProcessBrightnessShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00875590 SetTotalTransformMatrix_00875590 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessBrightnessShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessBrightnessShader__SetTotalTransformMatrix__o2
          (PostProcessBrightnessShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  }
  return;
}

//==== 00875680 SetTotalTransformMatrix_00875680 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCompositeLuminanceShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void 
PostProcessCompositeLuminanceShader__SetTotalTransformMatrix
          (PostProcessCompositeLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 00875740 SetTotalTransformMatrix_00875740 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCompositeLuminanceShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void 
PostProcessCompositeLuminanceShader__SetTotalTransformMatrix__o2
          (PostProcessCompositeLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  }
  return;
}

//==== 00875830 SetTotalTransformMatrix_00875830 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyAndApplyLuminanceShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetTotalTransformMatrix
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 008758f0 SetTotalTransformMatrix_008758f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyAndApplyLuminanceShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void 
PostProcessCopyAndApplyLuminanceShader__SetTotalTransformMatrix__o2
          (PostProcessCopyAndApplyLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  }
  return;
}

//==== 008759e0 SetTotalTransformMatrix_008759e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyAndBrightPassShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void 
PostProcessCopyAndBrightPassShader__SetTotalTransformMatrix
          (PostProcessCopyAndBrightPassShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00875aa0 SetTotalTransformMatrix_00875aa0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void 
   PostProcessCopyAndBrightPassShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void 
PostProcessCopyAndBrightPassShader__SetTotalTransformMatrix__o2
          (PostProcessCopyAndBrightPassShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  }
  return;
}

//==== 00875b90 SetTotalTransformMatrix_00875b90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetTotalTransformMatrix
          (PostProcessCopyLuminanceShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00875c50 SetTotalTransformMatrix_00875c50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessCopyLuminanceShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessCopyLuminanceShader__SetTotalTransformMatrix__o2
          (PostProcessCopyLuminanceShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  }
  return;
}

//==== 00875d40 SetTotalTransformMatrix_00875d40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessDistortionShader__SetTotalTransformMatrix
          (PostProcessDistortionShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00875e00 SetTotalTransformMatrix_00875e00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessDistortionShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessDistortionShader__SetTotalTransformMatrix__o2
          (PostProcessDistortionShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  }
  return;
}

//==== 00875ef0 SetTotalTransformMatrix_00875ef0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PostProcessFXAAShader__SetTotalTransformMatrix
          (PostProcessFXAAShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    *(uint32_t *)&local_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    local_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    local_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    local_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(iVar1,1,0,&local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 00875fc0 SetTotalTransformMatrix_00875fc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PostProcessFXAAShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PostProcessFXAAShader__SetTotalTransformMatrix__o2
          (PostProcessFXAAShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_48 [8];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TotalTransformMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)local_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 8) = CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4);
      *(ulonglong *)((int)local_48 + iVar5 * 4 + 0x18) = CONCAT44((float)pdVar4[3],(float)pdVar4[2])
      ;
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,local_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  }
  return;
}

//==== 008760c0 SetTotalTransformMatrixDefault_008760c0 ====

/* private: static void __cdecl FontShader__SetTotalTransformMatrixDefault(void) */

void __cdecl FontShader__SetTotalTransformMatrixDefault(void)

{
  FontShader *pFVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pFVar1 = FontShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pFVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 008761a0 SetTotalTransformMatrixDefault_008761a0 ====

/* private: static void __cdecl Line2DShader__SetTotalTransformMatrixDefault(void) */

void __cdecl Line2DShader__SetTotalTransformMatrixDefault(void)

{
  Line2DShader *pLVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pLVar1 = Line2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pLVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876280 SetTotalTransformMatrixDefault_00876280 ====

/* private: static void __cdecl Point2DShader__SetTotalTransformMatrixDefault(void) */

void __cdecl Point2DShader__SetTotalTransformMatrixDefault(void)

{
  Point2DShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = Point2DShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876360 SetTotalTransformMatrixDefault_00876360 ====

/* private: static void __cdecl PostProcessBlurCrossShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessBlurCrossShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessBlurCrossShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876440 SetTotalTransformMatrixDefault_00876440 ====

/* private: static void __cdecl PostProcessBlurShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessBlurShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessBlurShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876520 SetTotalTransformMatrixDefault_00876520 ====

/* private: static void __cdecl PostProcessBrightnessShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessBrightnessShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessBrightnessShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876600 SetTotalTransformMatrixDefault_00876600 ====

/* private: static void __cdecl
   PostProcessCompositeLuminanceShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessCompositeLuminanceShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 008766e0 SetTotalTransformMatrixDefault_008766e0 ====

/* private: static void __cdecl
   PostProcessCopyAndApplyLuminanceShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 008767c0 SetTotalTransformMatrixDefault_008767c0 ====

/* private: static void __cdecl
   PostProcessCopyAndBrightPassShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessCopyAndBrightPassShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 008768a0 SetTotalTransformMatrixDefault_008768a0 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__SetTotalTransformMatrixDefault(void)
    */

void __cdecl PostProcessCopyLuminanceShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876980 SetTotalTransformMatrixDefault_00876980 ====

/* private: static void __cdecl PostProcessDistortionShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessDistortionShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessDistortionShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876a60 SetTotalTransformMatrixDefault_00876a60 ====

/* private: static void __cdecl PostProcessFXAAShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PostProcessFXAAShader__SetTotalTransformMatrixDefault(void)

{
  PostProcessFXAAShader *pPVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float local_d8 [18];
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50 [7];
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  iVar2 = 0;
  pfVar4 = local_50;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  iVar2 = 0;
  pfVar4 = local_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  local_90 = local_50[0];
  uStack_8c = local_50[1];
  uStack_88 = local_50[2];
  uStack_84 = local_50[3];
  local_80 = local_50[4];
  uStack_7c = local_50[5];
  uStack_78 = local_50[6];
  uStack_74 = uStack_34;
  local_70 = local_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  local_60 = local_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00876b40 Setup_00876b40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall FontShader__Setup(void) */

bool __thiscall FontShader__Setup(FontShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  FontShader *pFVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_28.Data = (char *)0x0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_28.Capacity = 0;
  this->IsReadyToUse = false;
  local_28.Length = 0;
  util__Str_char___operator(&local_28,&local_1c,&this->AdditionalPreprocessor);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_34,"TexColor");
  util__Str_char___Str_char(&local_28,"Fonts");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pFVar2 = FontShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pFVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00876c70 Setup_00876c70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall Line2DShader__Setup(void) */

bool __thiscall Line2DShader__Setup(Line2DShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Line2DShader *pLVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_28.Data = (char *)0x0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_28.Capacity = 0;
  this->IsReadyToUse = false;
  local_28.Length = 0;
  util__Str_char___operator(&local_28,&local_1c,&this->AdditionalPreprocessor);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_34,"TexColor");
  util__Str_char___Str_char(&local_28,"Lines");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pLVar2 = Line2DShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pLVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00876da0 Setup_00876da0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall Point2DShader__Setup(void) */

bool __thiscall Point2DShader__Setup(Point2DShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  Point2DShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define POINT_SHADER");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"TexColor");
  util__Str_char___Str_char(&local_34,"Lines");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = Point2DShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00876ed0 Setup_00876ed0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessBlurCrossShader__Setup(void) */

bool __thiscall PostProcessBlurCrossShader__Setup(PostProcessBlurCrossShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessBlurCrossShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define BLUR_CROSS");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessBlurCrossShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00877000 Setup_00877000 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessBlurShader__Setup(void) */

bool __thiscall PostProcessBlurShader__Setup(PostProcessBlurShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessBlurShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define BLUR");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessBlurShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00877130 Setup_00877130 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessBrightnessShader__Setup(void) */

bool __thiscall PostProcessBrightnessShader__Setup(PostProcessBrightnessShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessBrightnessShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define BRIGHTNESS");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessBrightnessShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00877260 Setup_00877260 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessCompositeLuminanceShader__Setup(void) */

bool __thiscall
PostProcessCompositeLuminanceShader__Setup(PostProcessCompositeLuminanceShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessCompositeLuminanceShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define COMPOSITE_LUMINANCE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessCompositeLuminanceShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00877390 Setup_00877390 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessCopyAndApplyLuminanceShader__Setup(void) */

bool __thiscall
PostProcessCopyAndApplyLuminanceShader__Setup(PostProcessCopyAndApplyLuminanceShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessCopyAndApplyLuminanceShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define COPY_AND_APPLY_LUMINANCE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 008774c0 Setup_008774c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessCopyAndBrightPassShader__Setup(void) */

bool __thiscall PostProcessCopyAndBrightPassShader__Setup(PostProcessCopyAndBrightPassShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessCopyAndBrightPassShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define COPY_AND_BRIGHTPASS");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessCopyAndBrightPassShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 008775f0 Setup_008775f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessCopyLuminanceShader__Setup(void) */

bool __thiscall PostProcessCopyLuminanceShader__Setup(PostProcessCopyLuminanceShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessCopyLuminanceShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define COPY_LUMINANCE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00877720 Setup_00877720 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessDistortionShader__Setup(void) */

bool __thiscall PostProcessDistortionShader__Setup(PostProcessDistortionShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessDistortionShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define DISTORTION");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessDistortionShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00877850 Setup_00877850 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PostProcessFXAAShader__Setup(void) */

bool __thiscall PostProcessFXAAShader__Setup(PostProcessFXAAShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PostProcessFXAAShader *pPVar2;
  Darray_L_void____cdecl_P__void__G_ *pDVar3;
  int iVar4;
  undefined4 *puVar5;
  Str_L_char_G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  pSVar6 = &this->AdditionalPreprocessor;
  this->IsReadyToUse = false;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define FXAA");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"PostProcess");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PostProcessFXAAShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pPVar2);
    pDVar3 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
    local_10 = 0;
    iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
    if (local_10 < iVar4) {
      do {
        puVar5 = (undefined4 *)(**(code **)pDVar3->_pad_0x0_0)(&local_10);
        (*(code *)*puVar5)();
        local_10 = local_10 + 1;
        iVar4 = (**(code **)(pDVar3->_pad_0x0_0 + 0xc))();
      } while (local_10 < iVar4);
    }
    Graphics__ShaderStack___ShaderStack(&local_9);
  }
  this->IsReadyToUse = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 00877980 SetupShaders ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* bool __cdecl SetupShaders(class PreferencesBase const *) */

bool __cdecl SetupShaders(PreferencesBase *param_1)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  undefined1 uVar2;
  PostProcessBlurShader *pPVar3;
  int iVar4;
  Str_L_char_G_ *pSVar5;
  PostProcessBlurCrossShader *pPVar6;
  int *piVar7;
  undefined4 *puVar8;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  NormalShader__GetStatic();
  Normal3DShader__GetStatic();
  NormalTextureShader__GetStatic();
  NormalTexture3DShader__GetStatic();
  FontShader__GetStatic();
  UIShader__GetStatic();
  LineShader__GetStatic();
  Line2DShader__GetStatic();
  PointShader__GetStatic();
  Point2DShader__GetStatic();
  PostProcessCopyShader__GetStatic();
  PostProcessBrightnessShader__GetStatic();
  PostProcessCopyAndBrightPassShader__GetStatic();
  PostProcessCopyAndApplyLuminanceShader__GetStatic();
  PostProcessCopyLuminanceShader__GetStatic();
  PostProcessCompositeLuminanceShader__GetStatic();
  PostProcessBlurShader__GetStatic();
  PostProcessBlurCrossShader__GetStatic();
  PostProcessDistortionShader__GetStatic();
  PostProcessFXAAShader__GetStatic();
  if (InitializeGameShadersHook != (_func_void_PreferencesBase_ptr *)0x0) {
    (*InitializeGameShadersHook)(param_1);
  }
  pPVar3 = PostProcessBlurShader__GetStatic();
  iVar4 = Fleet__GetUIIconSize();
  pSVar5 = util__Printf(&SStack_18,(wchar_t*)("\n#define GAUSSIAN_BLUR_SIZE_MAX %i"),iVar4);
  util__Str_char___operator__o8(&pPVar3->AdditionalPreprocessor,pSVar5);
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  pPVar6 = PostProcessBlurCrossShader__GetStatic();
  iVar4 = PostProcessor__GetCrossBlurSize();
  pSVar5 = util__Printf(&SStack_18,(wchar_t*)("\n#define GAUSSIAN_BLUR_SIZE_MAX %i"),iVar4);
  util__Str_char___operator__o8(&pPVar6->AdditionalPreprocessor,pSVar5);
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  piVar7 = (int *)GetAllShaders();
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(*piVar7 + 0xc))();
  if (iStack_c < iVar4) {
    do {
      puVar8 = (undefined4 *)(**(code **)*piVar7)(&iStack_c);
      cVar1 = (**(code **)(*(int *)*puVar8 + 0x14))();
      if (cVar1 == '\0') {
        uVar2 = 0;
        goto LAB_00877abf;
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(*piVar7 + 0xc))();
    } while (iStack_c < iVar4);
  }
  uVar2 = 1;
LAB_00877abf:
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 00877af0 Intersect_double_util__Line2_double___ ====


/* public: class util__Maybe_L_structutil__Range_L_double_G__G_  util__AABB_L_struct_util__Vec2_L_double_G__G___Intersect_L_double_Cstructutil__Line2_L_double_G__G_(struct util__Line2_L_double_G_
   const &)const  */

undefined4 
util__AABB_struct_util__Vec2_double_____Intersect_double_struct_util__Line2_double
          (AABB_L_struct_util__Vec2_L_double_G___G_ *this,Line2_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double *pdVar6;
  AABB_L_struct_util__Vec2_L_double_G___G_ *pAVar7;
  AABB_L_struct_util__Vec2_L_double_G___G_ *pAVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double *in_stack_00000008;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  double *pdStack_44;
  AABB_L_struct_util__Vec2_L_double_G___G_ *pAStack_40;
  double dStack_3c;
  double dStack_34;
  double *pdStack_2c;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar1 = in_stack_00000008[1];
  pdStack_2c = in_stack_00000008;
  dVar2 = *in_stack_00000008;
  pdStack_44 = in_stack_00000008 + 1;
  dVar4 = in_stack_00000008[3] - dVar1;
  (*(uint32_t*)((char*)&(auStack_18)+8)) = SUB84(dVar4,0);
  (*(uint64_t*)&(auStack_18)) = in_stack_00000008[2] - dVar2;
  (*(uint32_t *)((char *)&(auStack_18) + 12)) = (int)((ulonglong)dVar4 >> 0x20);
  dStack_3c = 1.0;
  dVar13 = 1.0 / (in_stack_00000008[2] - dVar2);
  dVar3 = *(double *)(this + 8);
  dStack_4c = (*(double *)this - dVar2) * dVar13;
  pAStack_40 = this + 0x18;
  iVar9 = 0;
  dVar12 = (*(double *)(this + 0x18) - dVar1) * (1.0 / dVar4);
  dStack_34 = 0.0;
  (*(uint32_t*)((char*)&(auStack_28)+8)) = SUB84(dVar12,0);
  (*(uint64_t*)&(auStack_28)) = (*(double *)(this + 0x10) - dVar2) * dVar13;
  (*(uint32_t *)((char *)&(auStack_28) + 12)) = (int)((ulonglong)dVar12 >> 0x20);
  dStack_54 = 1e-08;
  do {
    dStack_5c = 0.0;
    if ((iVar9 == 0) || (pdVar6 = (double *)(auStack_18 + 8), iVar9 != 1)) {
      pdVar6 = (double *)auStack_18;
    }
    bVar5 = Equals_L_double_G_(pdVar6,&dStack_5c,&dStack_54);
    if (bVar5) {
      if ((iVar9 == 0) || (pAVar7 = pAStack_40, iVar9 != 1)) {
        pAVar7 = this + 0x10;
      }
      if ((iVar9 == 0) || (pAVar8 = this + 8, iVar9 != 1)) {
        pAVar8 = this;
      }
      if ((iVar9 == 0) || (pdVar6 = pdStack_44, iVar9 != 1)) {
        pdVar6 = pdStack_2c;
      }
      dVar2 = *pdVar6;
      if (((*(double *)pAVar8 < dVar2) || (dVar2 < *(double *)pAVar7)) &&
         ((*(double *)pAVar7 < dVar2 || (dVar2 < *(double *)pAVar8)))) {
LAB_00877c49:
        (undefined4)((param_1->A).X = 0);
        *(undefined4 *)((int)&(param_1->A).X + 4) = 0;
        (undefined4)((param_1->A).Y = 0);
        *(undefined4 *)((int)&(param_1->A).Y + 4) = 0;
        (undefined1)((param_1->B).X = 0);
        goto LAB_00877c53;
      }
    }
    else {
      if ((iVar9 == 0) || (pdVar6 = (double *)(auStack_28 + 8), iVar9 != 1)) {
        pdVar6 = (double *)auStack_28;
      }
      dVar2 = dStack_4c;
      if ((iVar9 != 0) && (iVar9 == 1)) {
        dVar2 = (dVar3 - dVar1) * (1.0 / dVar4);
      }
      dVar12 = *pdVar6;
      dVar13 = dVar12;
      if (dVar12 < dVar2) {
        dVar13 = dVar2;
        dVar2 = dVar12;
      }
      uVar10 = SUB84(dStack_3c,0);
      uVar11 = (undefined4)((ulonglong)dStack_3c >> 0x20);
      if ((dStack_3c < dVar2) || (dVar13 < dStack_34)) goto LAB_00877c49;
      if (dVar13 <= dStack_3c) {
        uVar10 = SUB84(dVar13,0);
        uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
      }
      dVar12 = dStack_34;
      if (dStack_34 <= dVar2) {
        dVar12 = dVar2;
      }
      dStack_3c = (double)CONCAT44(uVar11,uVar10);
      dStack_34 = dVar12;
      if ((double)CONCAT44(uVar11,uVar10) <= dVar12 && dVar12 != (double)CONCAT44(uVar11,uVar10)) {
        dStack_34 = (double)CONCAT44(uVar11,uVar10);
        dStack_3c = dVar12;
      }
    }
    iVar9 = iVar9 + 1;
    if (1 < iVar9) {
      (param_1->A).X = dStack_34;
      (param_1->A).Y = dStack_3c;
      (undefined1)((param_1->B).X = 1);
LAB_00877c53:
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return (undefined4)(uintptr_t)in_stack_00000008;
    }
  } while( true );
}





//==== 00877ff0 Frustum_double_ ====


/* public:  util__Frustum_double___Frustum_double(double,double,double,double,struct
   util__Vec3_L_double_G_,struct util__Vec3_L_double_G_,struct util__Vec3_L_double_G_,struct util__Vec3_L_double_G_)
    */

void 
util__Frustum_double___Frustum_double
          (Frustum_L_double_G_ *this,double param_1,double param_2,double param_3,double param_4,
          Vec3_L_double_G_ param_5,Vec3_L_double_G_ param_6,Vec3_L_double_G_ param_7,Vec3_L_double_G_ param_8)

{
  undefined8 stack0xfffffffc;
  Plane_L_double_G_ *pPVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  Vec4_L_double_G_ VVar7;
  Vec4_L_double_G_ VVar8;
  Vec4_L_double_G_ VVar9;
  undefined1 auVar10 [12];
  bool bVar11;
  undefined4 *puVar12;
  int iVar13;
  Maybe_L_double_G_ *pMVar14;
  uint uVar15;
  uint uVar16;
  double *pdVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  Maybe_L_double_G_ MStack_118;
  Maybe_L_double_G_ MStack_108;
  Maybe_L_double_G_ MStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  Plane_L_double_G_ PStack_d0;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  double dStack_58;
  double dStack_50;
  uint uStack_48;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  Frustum_L_double_G_ *pFStack_14;
  undefined8 uStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)&(this->Near).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->Near).Mode__Normal.X + 4) = 0;
  *(undefined4 *)&(this->Near).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->Near).Mode__Normal.Y + 4) = 0;
  *(undefined4 *)&(this->Near).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->Near).Mode__Normal.Z + 4) = 0;
  *(undefined4 *)&(this->Near).OriginDistance = 0;
  *(undefined4 *)((int)&(this->Near).OriginDistance + 4) = 0;
  *(undefined4 *)&(this->Near).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->Far).Mode__Normal.X + 4) = 0;
  *(undefined4 *)&(this->Near).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->Far).Mode__Normal.Y + 4) = 0;
  pPVar1 = &this->FaceType__Left;
  *(undefined4 *)&(this->Near).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->Far).Mode__Normal.Z + 4) = 0;
  *(undefined4 *)&(this->Near).OriginDistance = 0;
  *(undefined4 *)((int)&(this->Far).OriginDistance + 4) = 0;
  *(undefined4 *)&(this->FaceType__Top).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->FaceType__Top).Mode__Normal.X + 4) = 0;
  *(undefined4 *)&(this->FaceType__Top).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->FaceType__Top).Mode__Normal.Y + 4) = 0;
  *(undefined4 *)&(this->FaceType__Top).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->FaceType__Top).Mode__Normal.Z + 4) = 0;
  *(undefined4 *)&(this->FaceType__Top).OriginDistance = 0;
  *(undefined4 *)((int)&(this->FaceType__Top).OriginDistance + 4) = 0;
  *(undefined4 *)&(this->FaceType__Bottom).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->FaceType__Bottom).Mode__Normal.X + 4) = 0;
  *(undefined4 *)&(this->FaceType__Bottom).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->FaceType__Bottom).Mode__Normal.Y + 4) = 0;
  *(undefined4 *)&(this->FaceType__Bottom).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->FaceType__Bottom).Mode__Normal.Z + 4) = 0;
  *(undefined4 *)&(this->FaceType__Bottom).OriginDistance = 0;
  *(undefined4 *)((int)&(this->FaceType__Bottom).OriginDistance + 4) = 0;
  (undefined4)((pPVar1->Mode__Normal).X = 0);
  *(undefined4 *)((int)&(this->FaceType__Left).Mode__Normal.X + 4) = 0;
  *(undefined4 *)&(this->FaceType__Left).Mode__Normal.Y = 0;
  *(undefined4 *)((int)&(this->FaceType__Left).Mode__Normal.Y + 4) = 0;
  *(undefined4 *)&(this->FaceType__Left).Mode__Normal.Z = 0;
  *(undefined4 *)((int)&(this->FaceType__Left).Mode__Normal.Z + 4) = 0;
  *(undefined4 *)&(this->FaceType__Left).OriginDistance = 0;
  *(undefined4 *)((int)&(this->FaceType__Left).OriginDistance + 4) = 0;
  *(undefined4 *)&(this->FaceType__Right).Mode__Normal.X = 0;
  *(undefined4 *)((int)&(this->FaceType__Right).Mode__Normal.X + 4) = 0;
  *(undefined4 *)&(this->FaceType__Right).Mode__Normal.Y = 0;
  *(undefined4 *)((int)&(this->FaceType__Right).Mode__Normal.Y + 4) = 0;
  *(undefined4 *)&(this->FaceType__Right).Mode__Normal.Z = 0;
  *(undefined4 *)((int)&(this->FaceType__Right).Mode__Normal.Z + 4) = 0;
  *(undefined4 *)&(this->FaceType__Right).OriginDistance = 0;
  *(undefined4 *)((int)&(this->FaceType__Right).OriginDistance + 4) = 0;
  dVar18 = param_1 * 0.5;
  pFStack_14 = this;
  libm_sse2_tan_precise(0.0);
  dVar5 = param_5.X;
  dVar6 = param_5.Y;
  dStack_78 = dVar18 * param_3;
  dStack_80 = dVar18 * param_2 * param_3;
  dVar20 = param_5.Z * param_3 + param_8.Z;
  dVar18 = dVar6 * param_3 + param_8.Y;
  uStack_60 = 0;
  *(uint64_t *)&auStack_68 = (uint64_t)(dVar5);
  dStack_24 = dVar6 * param_4;
  dStack_1c = param_5.Z * param_4;
  VVar8.Y = SUB84(dVar18,0);
  VVar8.X = dVar5 * param_3 + param_8.X;
  VVar8.Z = (int)((ulonglong)dVar18 >> 0x20);
  VVar8.Z = SUB84(dVar20,0);
  VVar8.W = (int)((ulonglong)dVar20 >> 0x20);
  puVar12 = (undefined4 *)Plane_L_double_G___Plane_L_double_G_(&PStack_d0,param_5,VVar8);
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar4 = puVar12[3];
  *(undefined4 *)&(pFStack_14->Near).Mode__Normal.X = *puVar12;
  *(undefined4 *)((int)&(pFStack_14->Near).Mode__Normal.X + 4) = uVar2;
  *(undefined4 *)&(pFStack_14->Near).Mode__Normal.Y = uVar3;
  *(undefined4 *)((int)&(pFStack_14->Near).Mode__Normal.Y + 4) = uVar4;
  uVar2 = puVar12[5];
  uVar3 = puVar12[6];
  uVar4 = puVar12[7];
  *(undefined4 *)&(pFStack_14->Near).Mode__Normal.Z = puVar12[4];
  *(undefined4 *)((int)&(pFStack_14->Near).Mode__Normal.Z + 4) = uVar2;
  *(undefined4 *)&(pFStack_14->Near).OriginDistance = uVar3;
  *(undefined4 *)((int)&(pFStack_14->Near).OriginDistance + 4) = uVar4;
  VVar7.Y = param_5.Y;
  VVar7.X = -dVar5;
  *(uint64_t *)&VVar7.Z = *(uint64_t *)&param_5.Z ^ 0x80000000ULL;
  VVar7.Z = -param_5.Z;
  VVar9.Y = SUB84(dStack_24 + param_8.Y,0);
  VVar9.X = (double)(uintptr_t)((double)(int)(uintptr_t)(auStack_68) + param_8.X);
  VVar9.Z = (int)((ulonglong)(dStack_24 + param_8.Y) >> 0x20);
  VVar9.Z = SUB84(dStack_1c + param_8.Z,0);
  VVar9.W = (int)((ulonglong)(dStack_1c + param_8.Z) >> 0x20);
  puVar12 = (undefined4 *)Plane_L_double_G___Plane_L_double_G_(&PStack_d0,VVar7,VVar9);
  (*(uint64_t*)((char*)&(auVar10)+4)) = uStack_60;
  (*(uint32_t*)&(auVar10)) = (uint32_t)(uintptr_t)(&this->FaceType__Right);
  _auStack_68 = (*(uint32_t *)cde_shl16(auVar10, 0x20));
  (*(uint32_t*)((char*)&(uStack_60)+4)) = (uint32_t)(uintptr_t)(pPVar1);
  uVar2 = puVar12[1];
  uVar3 = puVar12[2];
  uVar4 = puVar12[3];
  *(undefined4 *)&(pFStack_14->Far).Mode__Normal.X = *puVar12;
  *(undefined4 *)((int)&(pFStack_14->Far).Mode__Normal.X + 4) = uVar2;
  *(undefined4 *)&(pFStack_14->Far).Mode__Normal.Y = uVar3;
  *(undefined4 *)((int)&(pFStack_14->Far).Mode__Normal.Y + 4) = uVar4;
  uVar2 = puVar12[5];
  uVar3 = puVar12[6];
  uVar4 = puVar12[7];
  (*(uint32_t*)&(auStack_68)) = (uint32_t)(uintptr_t)(&pFStack_14->FaceType__Bottom);
  *(undefined4 *)&(pFStack_14->Far).Mode__Normal.Z = puVar12[4];
  *(undefined4 *)((int)&(pFStack_14->Far).Mode__Normal.Z + 4) = uVar2;
  *(undefined4 *)&(pFStack_14->Far).OriginDistance = uVar3;
  *(undefined4 *)((int)&(pFStack_14->Far).OriginDistance + 4) = uVar4;
  (*(uint32_t*)&(uStack_60)) = (uint32_t)(uintptr_t)(&pFStack_14->FaceType__Top);
  dStack_90 = 1e-08;
  uVar16 = 0;
  do {
    uStack_48 = uVar16 + 1;
    uVar15 = uStack_48 & 0x80000003;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xfffffffc) + 1;
    }
    if ((uVar16 == 1) || (uVar16 == 2)) {
      iVar13 = 1;
    }
    else {
      iVar13 = 0;
    }
    dStack_88 = dStack_78 * param_6.X;
    dStack_2c = dVar5 * param_3;
    dStack_70 = dVar6 * param_3;
    dVar18 = ((double)iVar13 + (double)iVar13) - 1.0;
    dVar20 = ((double)(uVar16 >> 1) + (double)(uVar16 >> 1)) - 1.0;
    dStack_3c = dStack_80 * param_7.X * dVar18 + dStack_2c + dStack_88 * dVar20;
    dStack_44 = dStack_80 * param_7.Y * dVar18 + dStack_70 + dVar20 * dStack_78 * param_6.Y;
    dStack_58 = dStack_80 * param_7.Z * dVar18 + param_5.Z * param_3 +
                dVar20 * dStack_78 * param_6.Z;
    if ((uVar15 == 1) || (uVar15 == 2)) {
      iVar13 = 1;
    }
    else {
      iVar13 = 0;
    }
    dStack_50 = ((double)iVar13 + (double)iVar13) - 1.0;
    dVar19 = ((double)((int)uVar15 / 2) + (double)((int)uVar15 / 2)) - 1.0;
    dVar20 = dStack_80 * param_7.X * dStack_50 + dStack_2c + dStack_88 * dVar19;
    dVar18 = dStack_80 * param_7.Y * dStack_50 + dStack_70 + dVar19 * dStack_78 * param_6.Y;
    dVar19 = dStack_80 * param_7.Z * dStack_50 + param_5.Z * param_3 +
             dVar19 * dStack_78 * param_6.Z;
    uStack_10 = dStack_44 * dVar20 - dVar18 * dStack_3c;
    dStack_24 = dVar18 * dStack_58 - dVar19 * dStack_44;
    dStack_1c = dVar19 * dStack_3c - dVar20 * dStack_58;
    dStack_34 = dStack_1c * dStack_1c + dStack_24 * dStack_24 + uStack_10 * uStack_10;
    pMVar14 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_f8,&dStack_34));
    if (pMVar14->IsValidData == false) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
    }
    dVar18 = pMVar14->Data;
    dVar20 = 1.0 / dVar18;
    if ((((NAN(dStack_24) == (dStack_24 == 0.0)) || (NAN(dStack_1c) == (dStack_1c == 0.0))) ||
        (NAN(*(double *)&(uStack_10)) == (*(double *)&(uStack_10) == 0.0))) && (NAN(dVar18) == (dVar18 == 0.0))) {
      pdVar17 = &dStack_b0;
      dStack_b0 = dVar20 * dStack_24;
      dStack_a8 = dVar20 * dStack_1c;
      dStack_a0 = dVar20 * uStack_10;
    }
    else {
      uStack_d8 = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      pdVar17 = (double *)&uStack_e8;
    }
    PStack_d0.Mode__Normal.Z = pdVar17[2];
    dStack_2c = (dStack_3c + param_8.X) * *pdVar17 + (dStack_44 + param_8.Y) * pdVar17[1] +
                (dStack_58 + param_8.Z) * PStack_d0.Mode__Normal.Z;
    dVar18 = pdVar17[1] * dStack_2c;
    dVar20 = *pdVar17 * dStack_2c;
    dStack_58 = dVar18 * dVar18 + dVar20 * dVar20 +
                PStack_d0.Mode__Normal.Z * dStack_2c * PStack_d0.Mode__Normal.Z * dStack_2c;
    dStack_34 = PStack_d0.Mode__Normal.Z;
    pMVar14 = (Maybe_L_double_G_ *)(uintptr_t)(Sqrt(&MStack_108,&dStack_58));
    (*(uint32_t*)((char*)&(uStack_10)+4)) = (uint32_t)(uintptr_t)(pMVar14);
    if (pMVar14->IsValidData == false) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
    }
    dStack_3c = (((struct Maybe_L_double_G_ *)(uintptr_t)(*(uint32_t *)((char *)&(uStack_10)+4))))->Data;
    if (NAN(dStack_2c) == (dStack_2c == 0.0)) {
      dStack_44 = Abs(&dStack_2c);
      dStack_44 = dStack_2c / dStack_44;
    }
    else {
      dStack_44 = 0.0;
    }
    PStack_d0.OriginDistance = dStack_44 * dStack_3c;
    dStack_3c = 1.0;
    dStack_44 = *pdVar17 * *pdVar17 + pdVar17[1] * pdVar17[1] + dStack_34 * dStack_34;
    dStack_50 = PStack_d0.OriginDistance;
    (*(uint32_t*)((char*)&(uStack_10)+4)) = (undefined4)(uintptr_t)Sqrt(&MStack_118,&dStack_44);
    if ((((struct Maybe_L_double_G_ *)(uintptr_t)(*(uint32_t *)((char *)&(uStack_10)+4))))->IsValidData == false) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()"
                ,(char *)0x0);
      DebugBreak();
    }
    dStack_98 = (((struct Maybe_L_double_G_ *)(uintptr_t)(*(uint32_t *)((char *)&(uStack_10)+4))))->Data;
    bVar11 = Equals_L_double_G_(&dStack_98,&dStack_3c,&dStack_90);
    if (((!bVar11) || (NAN(dStack_50))) ||
       ((NAN(dStack_50) == (dStack_50 == 0.0) && (NAN(dStack_50 / dStack_50))))) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\plane.h",0x20,
                "IsValid()",(char *)0x0);
      DebugBreak();
    }
    puVar12 = *(undefined4 **)(auStack_68 + uVar16 * 4);
    uVar2 = *(undefined4 *)((int)pdVar17 + 4);
    uVar3 = *(undefined4 *)(pdVar17 + 1);
    uVar4 = *(undefined4 *)((int)pdVar17 + 0xc);
    *puVar12 = *(undefined4 *)pdVar17;
    puVar12[1] = uVar2;
    puVar12[2] = uVar3;
    puVar12[3] = uVar4;
    puVar12[4] = PStack_d0.Mode__Normal.Z;
    puVar12[5] =(*(double *)((char *)&(PStack_d0.Mode__Normal) + 0x18));
    puVar12[6] = PStack_d0.OriginDistance;
    puVar12[7] = (*(uint32_t *)((char *)&(PStack_d0.OriginDistance) + 4));
    uVar16 = uStack_48;
  } while ((int)uStack_48 < 4);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 008786d0 CameraManager ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall CameraManager__CameraManager(class GameManager *) */

CameraManager * __thiscall CameraManager__CameraManager(CameraManager *this,GameManager *param_1)

{
  CameraState *pCVar1;
  Quaternion_L_double_G_ *pQVar2;
  CameraState *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vec3_L_double_G_ *pVVar7;
  int iVar8;
  CameraState CStack_5c;
  
  CStack_5c.LogZoom = 0.0;
  this->Parent = param_1;
  (this->TargetCamera).Data = (CameraState *)0x0;
  (this->TargetCamera).Size = 0;
  (this->TargetCamera).EndData = (CameraState *)0x0;
  (this->TargetCamera).Capacity = 0;
  *(undefined4 *)&(this->CurrentCamera).Center.X = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Center.X + 4) = 0;
  *(undefined4 *)&(this->CurrentCamera).Center.Y = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Center.Y + 4) = 0;
  *(undefined4 *)&(this->CurrentCamera).Center.Z = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Center.Z + 4) = 0;
  *(undefined4 *)&(this->CurrentCamera).Offset.X = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Offset.X + 4) = 0;
  *(undefined4 *)&(this->CurrentCamera).Offset.Y = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Offset.Y + 4) = 0;
  *(undefined4 *)&(this->CurrentCamera).Offset.Z = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Offset.Z + 4) = 0;
  (this->CurrentCamera).Orientation.W = 1.0;
  CStack_5c.Center.X = 0;
  CStack_5c.Center.Y = 0;
  CStack_5c.Center.Y = 0;
  CStack_5c.Center.Z = 0;
  CStack_5c.Center.Z = 0;
(*(double *)((char *)&(CStack_5c.Center) + 0x18)) = 0;
  CStack_5c.Offset.X = 0;
  CStack_5c.Offset.Y = 0;
  CStack_5c.Offset.Y = 0;
  CStack_5c.Offset.Z = 0;
  CStack_5c.Offset.Z = 0;
(*(double *)((char *)&(CStack_5c.Offset) + 0x18)) = 0;
  CStack_5c.Orientation.X = 0;
  CStack_5c.Orientation.Y = 0;
  CStack_5c.Orientation.Y = 0;
  CStack_5c.Orientation.Z = 0;
  *(undefined4 *)&(this->CurrentCamera).Orientation.X = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4) = 0;
  *(undefined4 *)&(this->CurrentCamera).Orientation.Y = 0;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Y + 4) = 0;
  (this->CurrentCamera).Orientation.Z = 0.0;
  (this->CurrentCamera).LogZoom = 0.0;
  CStack_5c.Orientation.Z = 0;
  CStack_5c.Orientation.W = 0;
  CStack_5c.Orientation.W = 0;
  (*(uint32_t *)((char *)&(CStack_5c.Orientation.W) + 4)) = 0x3ff00000;
  util__Stack_struct_CameraState___Push((Stack_L_struct_CameraState_G_ *)&this->TargetCamera,&CStack_5c)
  ;
  iVar8 = (this->TargetCamera).Size;
  if (iVar8 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar8 = (this->TargetCamera).Size;
  }
  pCVar3 = (this->TargetCamera).Data;
  pCVar1 = pCVar3 + iVar8 + -1;
  uVar4 = *(undefined4 *)((int)&(pCVar1->Center).X + 4);
  uVar5 = *(undefined4 *)&(pCVar1->Center).Y;
  uVar6 = *(undefined4 *)((int)&(pCVar1->Center).Y + 4);
  *(undefined4 *)&(this->CurrentCamera).Center.X = *(undefined4 *)&(pCVar1->Center).X;
  *(undefined4 *)((int)&(this->CurrentCamera).Center.X + 4) = uVar4;
  *(undefined4 *)&(this->CurrentCamera).Center.Y = uVar5;
  *(undefined4 *)((int)&(this->CurrentCamera).Center.Y + 4) = uVar6;
  pVVar7 = &pCVar3[iVar8 + -1].Center;
  uVar4 = *(undefined4 *)((int)&pVVar7->Z + 4);
  uVar5 = *(undefined4 *)&pVVar7[1].X;
  uVar6 = *(undefined4 *)((int)&pVVar7[1].X + 4);
  *(undefined4 *)&(this->CurrentCamera).Center.Z = *(undefined4 *)&pVVar7->Z;
  *(undefined4 *)((int)&(this->CurrentCamera).Center.Z + 4) = uVar4;
  *(undefined4 *)&(this->CurrentCamera).Offset.X = uVar5;
  *(undefined4 *)((int)&(this->CurrentCamera).Offset.X + 4) = uVar6;
  pVVar7 = &pCVar3[iVar8 + -1].Offset;
  uVar4 = *(undefined4 *)((int)&pVVar7->Y + 4);
  uVar5 = *(undefined4 *)&pVVar7->Z;
  uVar6 = *(undefined4 *)((int)&pVVar7->Z + 4);
  *(undefined4 *)&(this->CurrentCamera).Offset.Y = *(undefined4 *)&pVVar7->Y;
  *(undefined4 *)((int)&(this->CurrentCamera).Offset.Y + 4) = uVar4;
  *(undefined4 *)&(this->CurrentCamera).Offset.Z = uVar5;
  *(undefined4 *)((int)&(this->CurrentCamera).Offset.Z + 4) = uVar6;
  pQVar2 = &pCVar3[iVar8 + -1].Orientation;
  uVar4 = *(undefined4 *)((int)&pQVar2->X + 4);
  uVar5 = *(undefined4 *)&pQVar2->Y;
  uVar6 = *(undefined4 *)((int)&pQVar2->Y + 4);
  *(undefined4 *)&(this->CurrentCamera).Orientation.X = *(undefined4 *)&pQVar2->X;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4) = uVar4;
  *(undefined4 *)&(this->CurrentCamera).Orientation.Y = uVar5;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Y + 4) = uVar6;
  pQVar2 = &pCVar3[iVar8 + -1].Orientation;
  uVar4 = *(undefined4 *)((int)&pQVar2->Z + 4);
  uVar5 = *(undefined4 *)&pQVar2->W;
  uVar6 = *(undefined4 *)((int)&pQVar2->W + 4);
  *(undefined4 *)&(this->CurrentCamera).Orientation.Z = *(undefined4 *)&pQVar2->Z;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Z + 4) = uVar4;
  *(undefined4 *)&(this->CurrentCamera).Orientation.W = uVar5;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.W + 4) = uVar6;
  (this->CurrentCamera).LogZoom = pCVar3[iVar8 + -1].LogZoom;
  return this;
}





//==== 008787d0 CameraState ====


/* public: __thiscall CameraState__CameraState(void) */

CameraState * __thiscall CameraState__CameraState(CameraState *this)

{
  *(undefined4 *)&(this->Center).X = 0;
  *(undefined4 *)((int)&(this->Center).X + 4) = 0;
  *(undefined4 *)&(this->Center).Y = 0;
  *(undefined4 *)((int)&(this->Center).Y + 4) = 0;
  *(undefined4 *)&(this->Center).Z = 0;
  *(undefined4 *)((int)&(this->Center).Z + 4) = 0;
  *(undefined4 *)&(this->Offset).X = 0;
  *(undefined4 *)((int)&(this->Offset).X + 4) = 0;
  *(undefined4 *)&(this->Offset).Y = 0;
  *(undefined4 *)((int)&(this->Offset).Y + 4) = 0;
  *(undefined4 *)&(this->Offset).Z = 0;
  *(undefined4 *)((int)&(this->Offset).Z + 4) = 0;
  *(undefined4 *)&(this->Orientation).X = 0;
  *(undefined4 *)((int)&(this->Orientation).X + 4) = 0;
  *(undefined4 *)&(this->Orientation).Y = 0;
  *(undefined4 *)((int)&(this->Orientation).Y + 4) = 0;
  (this->Orientation).Z = 0.0;
  (this->Orientation).W = 1.0;
  this->LogZoom = 0.0;
  return this;
}





//==== 00878800 scalar_deleting_destructor_00878800 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__Quaternion_L_double_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__Quaternion_double______scalar_deleting_destructor
          (Darray_L_struct_util__Quaternion_L_double_G___G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_590;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00878850 AddCameraOffset ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__AddCameraOffset(struct util__Vec3_L_double_G_) */

void __thiscall CameraManager__AddCameraOffset(CameraManager *this,Vec4_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  Stack_L_CameraState_G_ *pSVar1;
  Vec3_L_double_G_ *pVVar2;
  CameraState *pCVar3;
  double dVar4;
  Vec4_L_double_G_ VVar5;
  Vec4_L_double_G_ VVar6;
  CameraManager *pCVar7;
  int *piVar8;
  int iVar9;
  double *pdVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  int *piVar14;
  undefined **ppuStack_9c;
  void *pvStack_98;
  Maybe_L_double_G_ MStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  uint uStack_5c;
  undefined4 uStack_58;
  double dStack_54;
  CameraManager *pCStack_4c;
  CameraManager *pCStack_48;
  char cStack_41;
  double dStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  double dStack_20;
  uint uStack_18;
  undefined4 uStack_14;
  CameraManager *pCStack_10;
  int iStack_c;
  uint uStack_8;
  
  pcVar11 = DebugBreak_exref;
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar9 = (this->TargetCamera).Size;
  pCStack_4c = this;
  if (iVar9 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar9 = (this->TargetCamera).Size;
  }
  pCVar3 = (this->TargetCamera).Data;
  pCVar3[iVar9 + -1].Offset.X = param_1.X + pCVar3[iVar9 + -1].Offset.X;
  pCVar3[iVar9 + -1].Offset.Y = param_1.Y + pCVar3[iVar9 + -1].Offset.Y;
  pCVar3[iVar9 + -1].Offset.Z = param_1.Z + pCVar3[iVar9 + -1].Offset.Z;
  pCStack_10 = this;
  piVar8 = (int *)(**(code **)(*(int *)((this->Parent->GameTimer).LastTime + 100)))(&ppuStack_9c);
  uStack_18 = uStack_18 & 0xffffff00;
  iStack_c = 0;
  dStack_20 = 0.0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  dStack_40 = 0.0;
  iVar9 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
  if (iStack_c < iVar9) {
    do {
      piVar14 = &iStack_c;
      pdVar10 = (double *)(**(code **)*piVar8)();
      pCVar7 = pCStack_10;
      iVar9 = (pCStack_10->TargetCamera).Size;
      pSVar1 = &pCStack_10->TargetCamera;
      pCStack_48 = pCStack_10;
      uStack_64 = *pdVar10;
      uStack_5c = *(uint *)(pdVar10 + 1);
      uStack_58 = *(undefined4 *)((int)pdVar10 + 0xc);
      dStack_54 = pdVar10[2];
      if (iVar9 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa9,
                        "Size > 0",(char *)0x0);
        DebugBreak();
        iVar9 = (pCVar7->TargetCamera).Size;
      }
      pCVar3 = pSVar1->Data;
      dVar12 = (pCStack_48->CurrentCamera).Center.Y + pCVar3[iVar9 + -1].Offset.Y;
      dVar4 = (pCStack_48->CurrentCamera).Center.Z + pCVar3[iVar9 + -1].Offset.Z;
      dVar13 = pCVar3[iVar9 + -1].Offset.X + (pCStack_48->CurrentCamera).Center.X;
      VVar5.Y = uStack_5c;
      VVar5.X = (*(uint32_t*)((char*)&(uStack_64)+4));
      VVar5.Y = uStack_58;
      (*(uint64_t *)((char *)&(VVar5) + 12)) = dStack_54;
      VVar5.W = SUB84(dVar13,0);
      VVar6.Y = SUB84(dVar12,0);
      VVar6.X = (int)((ulonglong)dVar13 >> 0x20);
      VVar6.Y = (int)((ulonglong)dVar12 >> 0x20);
      VVar6.Z = SUB84(dVar4,0);
      VVar6.Z = (int)((ulonglong)dVar4 >> 0x20);
      *(uint32_t *)&VVar6.W = (uint32_t)(uintptr_t)(piVar14);
      GetScreenDistanceBetweenWorldPositions(pCStack_10,&MStack_8c,VVar5,VVar6);
      if ((MStack_8c.IsValidData != false) &&
         (((char)uStack_18 == '\0' || (MStack_8c.Data < dStack_40)))) {
        uStack_64 = pdVar10[2];
        uStack_30 = *(undefined4 *)pdVar10;
        uStack_2c = *(undefined4 *)((int)pdVar10 + 4);
        uStack_28 = *(undefined4 *)(pdVar10 + 1);
        uStack_24 = *(undefined4 *)((int)pdVar10 + 0xc);
        uStack_5c = CONCAT31((*(uint24_t*)((char*)&(uStack_5c)+1)),1);
        uStack_18 = uStack_5c;
        uStack_14 = uStack_58;
        dStack_40 = MStack_8c.Data;
        dStack_20 = uStack_64;
      }
      iStack_c = iStack_c + 1;
      iVar9 = (**(code **)(uintptr_t)(*piVar8 + 0xc))();
      this = pCStack_4c;
      pcVar11 = DebugBreak_exref;
    } while (iStack_c < iVar9);
  }
  if ((char)uStack_18 == '\0') {
    uStack_5c = (uint)(*(uint24_t*)((char*)&(uStack_5c)+1)) << 8;
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0.0;
    uStack_64 = 0.0;
  }
  else {
    uStack_5c = CONCAT31((*(uint24_t*)((char*)&(uStack_5c)+1)),1);
    uStack_7c = uStack_30;
    uStack_78 = uStack_2c;
    uStack_74 = uStack_28;
    uStack_70 = uStack_24;
    uStack_6c = dStack_20;
    uStack_64 = dStack_40;
  }
  ppuStack_9c = (undefined **)(&vftable_17);
  uStack_38 = uStack_7c;
  uStack_34 = uStack_78;
  uStack_30 = uStack_74;
  uStack_2c = uStack_70;
  cStack_41 = (char)uStack_5c;
  uStack_28 = (undefined4)uStack_6c;
  uStack_24 = (*(uint32_t*)((char*)&(uStack_6c)+4));
  dStack_20 = uStack_64;
  if (pvStack_98 != (void *)0x0) {
    port_op_delete(pvStack_98);
  }
  if ((cStack_41 != '\0') && (dStack_20 < 12.0)) {
    uStack_6c = (double)CONCAT44(uStack_34,uStack_38) - (this->CurrentCamera).Center.X;
    iVar9 = (this->TargetCamera).Size;
    uStack_64 = (double)CONCAT44(uStack_2c,uStack_30) - (this->CurrentCamera).Center.Y;
    dStack_54 = (double)CONCAT44(uStack_24,uStack_28) - (this->CurrentCamera).Center.Z;
    if (iVar9 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      (*pcVar11)();
      iVar9 = (this->TargetCamera).Size;
    }
    pCVar3 = (this->TargetCamera).Data;
    pVVar2 = &pCVar3[iVar9 + -1].Offset;
    *(undefined4 *)&pVVar2->X = (undefined4)uStack_6c;
    *(undefined4 *)((int)&pVVar2->X + 4) = (*(uint32_t*)((char*)&(uStack_6c)+4));
    *(undefined4 *)&pVVar2->Y = (undefined4)uStack_64;
    *(undefined4 *)((int)&pVVar2->Y + 4) = (*(uint32_t*)((char*)&(uStack_64)+4));
    pCVar3[iVar9 + -1].Offset.Z = dStack_54;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00878b30 AddCameraOrientation ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__AddCameraOrientation(struct util__Quaternion_L_double_G_) */

void __thiscall CameraManager__AddCameraOrientation(CameraManager *this,Quaternion_L_double_G_ param_1)

{
  undefined8 stack0xfffffe84;
  undefined8 stack0xfffffeac;
  Quaternion_L_double_G_ *pQVar1;
  double *pdVar2;
  CameraState *pCVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Quaternion_L_double_G_ QVar7;
  Quaternion_L_double_G_ QVar8;
  Vec4_L_double_G_ VVar9;
  Vec4_L_double_G_ VVar10;
  Vec4_L_double_G_ VVar11;
  Vec4_L_double_G_ VVar12;
  Vec4_L_double_G_ VVar13;
  Vec4_L_double_G_ VVar14;
  bool bVar15;
  Vec3_L_double_G_ *pVVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 *puVar19;
  double dVar20;
  double dVar21;
  Vec3_L_double_G_ *pVVar22;
  undefined1 auStack_174 [28];
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined **ppuStack_140;
  void *pvStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  Vec3_L_double_G_ VStack_12c;
  undefined1 uStack_114;
  undefined7 uStack_113;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f4 [24];
  undefined4 uStack_dc;
  double dStack_d8;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  void *pvStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  Vec4_L_double_G_ VStack_94;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  char cStack_54;
  uint uStack_4c;
  uint uStack_44;
  
  uStack_44 = __security_cookie ^ (uint)auStack_174;
  (*(uint32_t*)&(uStack_b0)) = 0;
  (*(uint32_t*)((char*)&(uStack_b0)+4)) = 0x3ff00000;
  dVar20 = param_1.X * param_1.X + param_1.Y * param_1.Y + param_1.Z * param_1.Z +
           param_1.W * param_1.W;
  libm_sse2_sqrt_precise(0.0);
  (*(uint32_t*)&(uStack_b8)) = SUB84(dVar20,0);
  (*(uint32_t*)((char*)&(uStack_b8)+4)) = (undefined4)((ulonglong)dVar20 >> 0x20);
  (*(uint32_t*)&(uStack_150)) = 0xe2308c3a;
  (*(uint32_t*)((char*)&(uStack_150)+4)) = 0x3e45798e;
  bVar15 = util__Equals_double((double *)&uStack_b8,(double *)&uStack_b0,(double *)&uStack_150);
  if (!bVar15) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\cameramanager.cpp",0x3d,
                    "NewOrientation.IsNormalized()",(char *)0x0);
    DebugBreak();
  }
  iVar18 = (this->TargetCamera).Size;
  if (iVar18 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar18 = (this->TargetCamera).Size;
  }
  pCVar3 = (this->TargetCamera).Data;
  pQVar1 = &pCVar3[iVar18 + -1].Orientation;
  uStack_100 = *(undefined4 *)&pQVar1->X;
  uStack_fc = *(undefined4 *)((int)&pQVar1->X + 4);
  uStack_f8 = *(undefined4 *)&pQVar1->Y;
  (*(uint32_t*)&(auStack_f4)) = *(undefined4 *)((int)&pQVar1->Y + 4);
  pdVar2 = &pCVar3[iVar18 + -1].Orientation.Z;
  dVar20 = pdVar2[1];
  dVar21 = pCVar3[iVar18 + -1].Orientation.X;
  dVar4 = pCVar3[iVar18 + -1].Orientation.Y;
  pQVar1 = &pCVar3[iVar18 + -1].Orientation;
  uStack_138 = *(undefined4 *)&pQVar1->Z;
  uStack_134 = *(undefined4 *)((int)&pQVar1->Z + 4);
  uStack_130 = *(undefined4 *)&pQVar1->W;
  VStack_12c.X = *(undefined4 *)((int)&pQVar1->W + 4);
  uStack_b0 = ((param_1.X * dVar20 + param_1.Y * *pdVar2) - param_1.Z * dVar4) + param_1.W * dVar21;
  uStack_150 = (param_1.Y * dVar20 - param_1.X * pCVar3[iVar18 + -1].Orientation.Z) +
               param_1.Z * dVar21 + param_1.W * dVar4;
  uStack_148 = (param_1.X * dVar4 - param_1.Y * pCVar3[iVar18 + -1].Orientation.X) +
               param_1.Z * dVar20 + param_1.W * pCVar3[iVar18 + -1].Orientation.Z;
  uStack_b8 = param_1.W * dVar20 -
              (param_1.Y * dVar4 + param_1.X * pCVar3[iVar18 + -1].Orientation.X +
              param_1.Z * pCVar3[iVar18 + -1].Orientation.Z);
  dVar20 = uStack_150 * uStack_150 + uStack_b0 * uStack_b0 + uStack_148 * uStack_148 +
           uStack_b8 * uStack_b8;
  libm_sse2_sqrt_precise(0.0);
  dVar20 = 1.0 / dVar20;
  dStack_d8 = uStack_b0 * dVar20;
  puVar19 = &uStack_68;
  uStack_c8 = uStack_148 * dVar20;
  *(uint32_t *)&auStack_d0 = (uint64_t)(uStack_150 * dVar20);
  uStack_c0 = uStack_b8 * dVar20;
  (**(code **)(*(int *)((this->Parent->GameTimer).LastTime + 0x5c)))();
  dVar20 = uStack_150;
  dVar21 = uStack_b8;
  dVar4 = uStack_b0;
  if (cStack_54 != '\0') {
    (*(uint32_t*)((char*)&(uStack_150)+4)) = uStack_6c;
    uStack_148 = (double)CONCAT44(uStack_64,uStack_68);
    ppuStack_140 = (undefined **)uStack_60;
    (*(uint32_t*)((char*)&(uStack_b8)+4)) = (undefined4)uStack_5c;
    (*(uint32_t*)&(uStack_b0)) = (undefined4)((ulonglong)uStack_5c >> 0x20);
    QVar7.Y = uStack_fc;
    QVar7.X = uStack_100;
    QVar7.Y = uStack_f8;
    *(uint32_t *)&QVar7.Z = (uint32_t)(uintptr_t)(pvStack_13c);
    QVar7.Z = uStack_138;
    QVar7.W = uStack_134;
    QVar7.W = uStack_130;
    (*(uint32_t *)((char *)&(QVar7.W) + 4)) = 0;
    VVar13.Z = 0;
    (*(uint32_t *)((char *)&(VVar13) + 0)) = ZEXT812(0);
    VVar13.Z = 0x3ff00000;
    *(uint32_t *)&VVar13.W = (uint32_t)(uintptr_t)(puVar19);
    util__Rotate_double(&VStack_12c,QVar7,(*(Vec3_L_double_G_ *)&(VVar13)));
    QVar8.Y = (*(uint32_t*)&(auStack_d0));
    QVar8.X = dStack_d8;
    QVar8.Z = (*(uint32_t*)((char*)&(auStack_d0)+4));
    QVar8.Z = (undefined4)uStack_c8;
    QVar8.W = (*(uint32_t*)((char*)&(uStack_c8)+4));
    QVar8.W = (int)uStack_c0;
    (*(uint32_t *)((char *)&(QVar8.W) + 4)) = 0;
    VVar14.Z = 0;
    (*(uint32_t *)((char *)&(VVar14) + 0)) = ZEXT812(0);
    VVar14.Z = 0x3ff00000;
    *(uint32_t *)&VVar14.W = (uint32_t)(uintptr_t)(puVar19);
    util__Rotate_double((Vec3_L_double_G_ *)(&VStack_94),QVar8,(*(Vec3_L_double_G_ *)&(VVar14)));
    pVVar22 = (Vec3_L_double_G_ *)auStack_f4;
    VVar9.Y = VStack_12c.Y;
    VVar9.X = VStack_12c.Y;
    VVar9.Y = VStack_12c.Z;
    VVar9.Z = SUB84(VStack_12c.Z,0);
    VVar9.Z = (int)((ulonglong)VStack_12c.Z >> 0x20);
    VVar9.W = (*(uint32_t*)((char*)&(uStack_150)+4));
    *(uint32_t *)&VVar11.Y = (uint32_t)(uintptr_t)(ppuStack_140);
    VVar11.X = uStack_148;
    VVar11.Z = (*(uint32_t*)((char*)&(uStack_b8)+4));
    VVar11.Z = (undefined4)uStack_b0;
    *(uint32_t *)&VVar11.W = (uint32_t)(uintptr_t)(pVVar22);
    pVVar16 = util__CalcSafePerpendicular_double(&VStack_12c,VVar9,(*(Vec3_L_double_G_ *)&(VVar11)));
    util__Vec3_double___SafeNormalized(pVVar16,pVVar22);
    pVVar22 = &VStack_12c;
    VVar10.Y = VStack_94.Y;
    VVar10.X = VStack_94.Y;
    VVar10.Y = VStack_94.Z;
    VVar10.Z = VStack_94.Z;
    VVar10.Z = VStack_94.W;
    VVar10.W = (*(uint32_t*)((char*)&(uStack_150)+4));
    *(uint32_t *)&VVar12.Y = (uint32_t)(uintptr_t)(ppuStack_140);
    VVar12.X = uStack_148;
    VVar12.Z = (*(uint32_t*)((char*)&(uStack_b8)+4));
    VVar12.Z = (undefined4)uStack_b0;
    *(uint32_t *)&VVar12.W = (uint32_t)(uintptr_t)(pVVar22);
    pVVar16 = util__CalcSafePerpendicular_double((Vec3_L_double_G_ *)(&VStack_94),VVar10,(*(Vec3_L_double_G_ *)&(VVar12)));
    util__Vec3_double___SafeNormalized(pVVar16,pVVar22);
    dVar20 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_150)+4)),(undefined4)uStack_150);
    dVar21 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_b8)+4)),(undefined4)uStack_b8);
    dVar4 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_b0)+4)),(undefined4)uStack_b0);
    if ((double)CONCAT44((*(uint32_t*)((char*)&(auStack_f4)+4)),(*(uint32_t*)&(auStack_f4))) *
        (double)CONCAT44(VStack_12c.Y,VStack_12c.X) +
        (double)(*(uint64_t*)((char*)&(auStack_f4)+8)) * (double)CONCAT44(VStack_12c.Z,VStack_12c.Y) +
        (double)CONCAT44((*(uint32_t *)((char *)&(auStack_f4) + 20)),(*(uint32_t *)((char *)&(auStack_f4) + 16))) * VStack_12c.Z < 0.0) {
      uStack_dc = uStack_104;
      dStack_d8 = (double)CONCAT44(uStack_fc,uStack_100);
      (*(uint32_t*)((char*)&(auStack_d0)+4)) = (uint32_t)(uintptr_t)(pvStack_13c);
      (*(uint32_t*)&(auStack_d0)) = uStack_f8;
      (*(uint32_t*)&(uStack_c8)) = uStack_138;
      (*(uint32_t*)((char*)&(uStack_c8)+4)) = uStack_134;
      uStack_c0 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_c0)+4)),uStack_130);
      dVar20 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_150)+4)),(undefined4)uStack_150);
      dVar21 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_b8)+4)),(undefined4)uStack_b8);
      dVar4 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_b0)+4)),(undefined4)uStack_b0);
    }
  }
  pvStack_a4 = (void *)0x0;
  iStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_150 = dVar20;
  uStack_b8 = dVar21;
  uStack_b0 = dVar4;
  uVar17 = (**(code **)(*(int *)((this->Parent->GameTimer).LastTime + 0x60)))
                     (&pvStack_13c,&uStack_dc);
  FUN_00877d10(&ppuStack_a8,uVar17);
  ppuStack_140 = (undefined **)(&vftable_17);
  dVar20 = uStack_b0;
  if (pvStack_13c != (void *)0x0) {
    port_op_delete(pvStack_13c);
    dVar20 = uStack_b0;
  }
  (*(uint32_t*)((char*)&(uStack_b0)+4)) = (uint)((ulonglong)dVar20 >> 0x20);
  (*(uint32_t*)&(uStack_b0)) = SUB84(dVar20,0);
  if (0 < iStack_a0) {
    (*(uint32_t*)((char*)&(uStack_b0)+4)) = (*(uint32_t*)((char*)&(uStack_b0)+4)) & 0xffffff00;
    iVar18 = (*(code *)ppuStack_a8[3])();
    if (iVar18 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x179
                      ,"ArrayToCheck.Num() > 0",(char *)0x0);
      DebugBreak();
    }
    uStack_78 = uStack_78 & 0xffffff00;
    uStack_98 = 0;
    VStack_94.X = 0;
    VStack_94.Y = 0;
    VStack_94.Y = 0;
    (*(uint32_t*)&(uStack_c0)) = 0;
    VStack_94.Z = 0;
    VStack_94.Z = 0;
    VStack_94.W = 0;
    uStack_7c = 0x3ff00000;
    (*(uint32_t*)&(uStack_b8)) = 0;
    (*(uint32_t*)((char*)&(uStack_b8)+4)) = 0;
    iVar18 = (*(code *)ppuStack_a8[3])();
    if ((int)uStack_c0 < iVar18) {
      do {
        puVar19 = (undefined4 *)(*(code *)*ppuStack_a8)(&uStack_c0);
        dVar20 = *(double *)(puVar19 + 6);
        if (dVar20 <= 0.0) {
          dVar20 = 0.0;
        }
        if (1.0 <= dVar20) {
          dVar20 = 1.0;
        }
        dVar20 = util__SafeACos_double(dVar20);
        unique0x1000091d = dVar20 * 2.0;
        if (((char)uStack_7c == '\0') ||
           (unique0x1000091d < (double)CONCAT44((undefined4)uStack_b8,(*(uint32_t*)((char*)&(uStack_c0)+4))))) {
          uStack_9c = *puVar19;
          uStack_98 = puVar19[1];
          VStack_94.X = puVar19[2];
          VStack_94.Y = puVar19[3];
          uStack_114 = 1;
          VStack_94.Y = puVar19[4];
          VStack_94.Z = puVar19[5];
          VStack_94.Z = puVar19[6];
          VStack_94.W = puVar19[7];
          uStack_7c = (undefined4)CONCAT71(uStack_113,1);
          uStack_78 = (uint)((uint7)uStack_113 >> 0x18);
          (*(uint32_t*)((char*)&(uStack_c0)+4)) = SUB84(unique0x1000091d,0);
          (*(uint32_t*)&(uStack_b8)) = (undefined4)((ulonglong)unique0x1000091d >> 0x20);
        }
        (*(uint32_t*)((char*)&(uStack_c8)+4)) = (*(uint32_t*)((char*)&(uStack_c8)+4)) + 1;
        iVar18 = (**(code **)((*(uint32_t*)((char*)&(uStack_b0)+4)) + 0xc))();
      } while ((int)uStack_c0 < iVar18);
    }
    dVar20 = unique0x1000142d;
    if ((char)uStack_78 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x186
                      ,"BestType.IsValid()",(char *)0x0);
      DebugBreak();
      dVar20 = stack0xfffffeac;
      if ((char)uStack_78 == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
        dVar20 = stack0xfffffeac;
      }
    }
    (*(uint32_t*)&(uStack_150)) = (undefined4)((ulonglong)dVar20 >> 0x20);
    (*(uint32_t*)((char*)&(auStack_158)+4)) = SUB84(dVar20,0);
    dVar20 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_b0)+4)),(undefined4)uStack_b0);
    if ((double)CONCAT44((*(uint32_t*)((char*)&(uStack_b8)+4)),(undefined4)uStack_b8) <= 0.026179938779914945 &&
        uStack_b8 != 0.026179938779914945) {
      dVar21 = (double)CONCAT44(VStack_94.X,uStack_98);
      dVar4 = (double)CONCAT44(VStack_94.Z,VStack_94.Z);
      dVar20 = (double)CONCAT44(uStack_dc,(*(uint32_t *)((char *)&(auStack_f4) + 20)));
      uStack_c0 = ((dVar21 * uStack_c8 +
                   (double)(int)(uintptr_t)CONCAT44(VStack_94.Y,VStack_94.Y) * (double)(int)(uintptr_t)(auStack_d0)) -
                  dVar4 * dStack_d8) + (double)CONCAT44(uStack_7c,VStack_94.W) * dVar20;
      (*(uint64_t *)&(auStack_158)) = (((double)CONCAT44(VStack_94.Y,VStack_94.Y) * uStack_c8 -
                     dVar21 * (double)(int)(uintptr_t)(auStack_d0)) + dVar4 * dVar20 +
                    (double)CONCAT44(uStack_7c,VStack_94.W) * dStack_d8);
      uStack_150 = (dVar21 * dStack_d8 -
                   (double)CONCAT44(VStack_94.Y,VStack_94.Y) * dVar20) +
                   dVar4 * uStack_c8 +
                   (double)(int)(uintptr_t)CONCAT44(uStack_7c,VStack_94.W) * (double)(int)(uintptr_t)(auStack_d0);
      uStack_b8 = (double)CONCAT44(uStack_7c,VStack_94.W) * uStack_c8 -
                  ((double)CONCAT44(VStack_94.Y,VStack_94.Y) * dStack_d8 +
                   dVar21 * dVar20 + dVar4 * (double)(int)(uintptr_t)(auStack_d0));
      dVar21 = (double)(uintptr_t)((double)(int)(uintptr_t)(auStack_158) * (double)(int)(uintptr_t)(auStack_158) + uStack_c0 * uStack_c0 +
               uStack_150 * uStack_150 + uStack_b8 * uStack_b8);
      libm_sse2_sqrt_precise(0.0);
      dVar20 = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_b0)+4)),(undefined4)uStack_b0);
      dVar21 = 1.0 / dVar21;
      unique0x1000067f = dVar21 * uStack_c0;
      dStack_d8 = (double)(uintptr_t)(dVar21 * (double)(int)(uintptr_t)(auStack_158));
      (*(uint32_t*)&(uStack_c8)) = SUB84(dVar21 * uStack_b8,0);
      *(uint32_t *)&auStack_d0 = (uint64_t)(dVar21 * uStack_150);
      (*(uint32_t*)((char*)&(uStack_c8)+4)) = (int)((ulonglong)(dVar21 * uStack_b8) >> 0x20);
    }
  }
  iVar18 = (this->TargetCamera).Size;
  uStack_b0 = dVar20;
  if (iVar18 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar18 = (this->TargetCamera).Size;
  }
  pCVar3 = (this->TargetCamera).Data;
  pQVar1 = &pCVar3[iVar18 + -1].Orientation;
  pQVar1->X = unique0x100015f5;
  pQVar1->Y = dStack_d8;
  pQVar1 = &pCVar3[iVar18 + -1].Orientation;
  *(undefined4 *)&(pQVar1->Z) = (*(uint32_t*)&(auStack_d0));
  *(undefined4 *)((int)&pQVar1->Z + 4) = (*(uint32_t*)((char*)&(auStack_d0)+4));
  *(undefined4 *)&pQVar1->W = (undefined4)uStack_c8;
  *(int *)((int)&pQVar1->W + 4) = (*(uint32_t*)((char*)&(uStack_c8)+4));
  iVar18 = (this->TargetCamera).Size;
  if (iVar18 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar18 = (this->TargetCamera).Size;
  }
  pCVar3 = (this->TargetCamera).Data;
  pQVar1 = &pCVar3[iVar18 + -1].Orientation;
  uVar17 = *(undefined4 *)((int)&pQVar1->X + 4);
  uVar5 = *(undefined4 *)&pQVar1->Y;
  uVar6 = *(undefined4 *)((int)&pQVar1->Y + 4);
  *(undefined4 *)&(this->CurrentCamera).Orientation.X = *(undefined4 *)&pQVar1->X;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4) = uVar17;
  *(undefined4 *)&(this->CurrentCamera).Orientation.Y = uVar5;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Y + 4) = uVar6;
  pQVar1 = &pCVar3[iVar18 + -1].Orientation;
  uVar17 = *(undefined4 *)((int)&pQVar1->Z + 4);
  uVar5 = *(undefined4 *)&pQVar1->W;
  uVar6 = *(undefined4 *)((int)&pQVar1->W + 4);
  *(undefined4 *)&(this->CurrentCamera).Orientation.Z = *(undefined4 *)&pQVar1->Z;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Z + 4) = uVar17;
  *(undefined4 *)&(this->CurrentCamera).Orientation.W = uVar5;
  *(undefined4 *)((int)&(this->CurrentCamera).Orientation.W + 4) = uVar6;
  LockCameraToPlane(this,true);
  ppuStack_a8 = &vftable_590;
  if (pvStack_a4 != (void *)0x0) {
    port_op_delete(pvStack_a4);
  }
  __security_check_cookie(uStack_4c ^ (uint)&stack0xfffffe84);
  return;
}





//==== 00879420 AlterCameraZoom ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__AlterCameraZoom(double) */

void __thiscall CameraManager__AlterCameraZoom(CameraManager *this,double param_1)

{
  CameraState *pCVar1;
  int iVar2;
  
  iVar2 = (this->TargetCamera).Size;
  if (iVar2 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar2 = (this->TargetCamera).Size;
  }
  pCVar1 = (this->TargetCamera).Data;
  pCVar1[iVar2 + -1].LogZoom = pCVar1[iVar2 + -1].LogZoom - param_1 * 0.1;
  ClampCameraZoom(this);
  return;
}





//==== 00879480 AreScreenObjectsObscuringEachother ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool  CameraManager__AreScreenObjectsObscuringEachother(struct
   util__Vec3_L_double_G_,struct util__Vec3_L_double_G_,double,double)const  */

bool 
CameraManager__AreScreenObjectsObscuringEachother
          (CameraManager *this,Vec4_L_double_G_ param_1,Vec3_L_double_G_ param_2,double param_3,
          double param_4)

{
  undefined8 stack0xffffffe8;
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 in_stack_ffffffe8;
  undefined4 uStack_14;
  bool bStack_10;
  
  uVar4 = __security_cookie ^ (uint)&stack0xfffffffc;
  VVar1.W = param_2.X;
  (*(uint32_t *)((char *)&(VVar1) + 0)) = (*(uint32_t *)((char *)&(param_1) + 4));
  VVar2.W = in_stack_ffffffe8;
  (*(uint32_t *)((char *)&(VVar2) + 0)) = (*(uint32_t *)((char *)&(param_2) + 4));
  GetScreenDistanceBetweenWorldPositions(this,(Maybe_L_double_G_ *)&stack0xffffffe8,VVar1,VVar2);
  if ((bStack_10 != false) &&
     ((double)CONCAT44(uStack_14,in_stack_ffffffe8) <= param_3 + param_4 &&
      param_3 + param_4 != (double)CONCAT44(uStack_14,in_stack_ffffffe8))) {
    uVar3 = 1;
    __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
    return (bool)uVar3;
  }
  uVar3 = 0;
  __security_check_cookie(uVar4 ^ (uint)&stack0xfffffffc);
  return (bool)uVar3;
}





//==== 008797d0 CheckSize_008797d0 ====


/* private: bool  util__Darray_L_structutil__Quaternion_L_double_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__Quaternion_double_____CheckSize
          (Darray_L_struct_util__Quaternion_L_double_G___G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar12 = -1 < (int)uVar7;
  bVar2 = !bVar12;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar7 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar10) {
    return bVar2 && bVar12;
  }
  if (uVar10 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar10 = uVar7;
  }
  if ((int)uVar10 < (int)uVar7) {
    do {
      uVar10 = uVar10 * 2;
    } while ((int)uVar10 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar10;
  }
  if (0x3fffffff < (int)uVar10) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar10 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x20 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar10 * 0x20));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar10 != 0) {
    puVar6 = (undefined8 *)(puStack_c + 4);
    do {
      *puVar6 = 0;
      puVar6[1] = 0x3ff0000000000000;
      *(undefined4 *)(puVar6 + -2) = 0;
      *(undefined4 *)((int)puVar6 + -0xc) = 0;
      *(undefined4 *)(puVar6 + -1) = 0;
      *(undefined4 *)((int)puVar6 + -4) = 0;
      uVar10 = uVar10 - 1;
      puVar6 = puVar6 + 4;
    } while (uVar10 != 0);
  }
  puVar8 = *(undefined4 **)(this + 4);
  if (puVar8 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar9 = puVar8;
    puVar11 = puStack_c;
    if (puVar8 != puVar8 + param_1 * 8) {
      do {
        if (puVar11 == puStack_c + iVar1 * 8) break;
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        *puVar11 = *puVar9;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        puVar8 = puVar9 + 4;
        uVar3 = puVar9[5];
        uVar4 = puVar9[6];
        uVar5 = puVar9[7];
        puVar9 = puVar9 + 8;
        puVar11[4] = *puVar8;
        puVar11[5] = uVar3;
        puVar11[6] = uVar4;
        puVar11[7] = uVar5;
        puVar8 = *(undefined4 **)(this + 4);
        puVar11 = puVar11 + 8;
      } while (puVar9 != puVar8 + param_1 * 8);
    }
    port_op_delete(puVar8);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00879940 CheckSize_00879940 ====


/* private: bool  util__Stack_L_structCameraState_G___CheckSize(int) */

bool __thiscall
util__Stack_struct_CameraState___CheckSize(Stack_L_struct_CameraState_G_ *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint uVar12;
  bool bVar13;
  bool bStack_5;
  
  uVar10 = *(uint *)(this + 4);
  bVar13 = -1 < (int)uVar10;
  if (!bVar13) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)this;
    *(undefined4 *)(this + 4) = 0;
    uVar10 = 0;
  }
  bVar3 = (int)uVar10 < 0x40000000;
  bVar7 = !bVar3;
  if (bVar7) {
    *(undefined4 *)(this + 4) = 0x3fffffff;
    *(int *)(this + 0xc) = *(int *)this + -0x58;
    uVar10 = 0x3fffffff;
  }
  bStack_5 = !bVar7 && bVar13;
  uVar12 = *(uint *)(this + 8);
  if ((int)uVar10 <= (int)uVar12) {
    return bVar3 && bVar13;
  }
  if (uVar12 == 0) {
    *(uint *)(this + 8) = uVar10;
    uVar12 = uVar10;
  }
  if ((int)uVar12 < (int)uVar10) {
    do {
      uVar12 = uVar12 * 2;
    } while ((int)uVar12 < (int)uVar10);
    *(uint *)(this + 8) = uVar12;
  }
  if (0x3fffffff < (int)uVar12) {
    *(undefined4 *)(this + 8) = 0x3fffffff;
    uVar12 = 0x3fffffff;
  }
  puVar11 = (undefined4 *)0x0;
  if (0 < (int)uVar12) {
    puVar11 = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar12 * 0x58 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar12 * 0x58));
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else if (uVar12 != 0) {
      puVar8 = puVar11 + 10;
      do {
        puVar8[-10] = 0;
        puVar8[-9] = 0;
        puVar8[-8] = 0;
        puVar8[-7] = 0;
        puVar8[-6] = 0;
        puVar8[-5] = 0;
        puVar8[-4] = 0;
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        *(undefined8 *)(puVar8 + 6) = 0;
        *(undefined8 *)(puVar8 + 8) = 0x3ff0000000000000;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        *(undefined8 *)(puVar8 + 10) = 0;
        uVar12 = uVar12 - 1;
        puVar8 = puVar8 + 0x16;
      } while (uVar12 != 0);
    }
    iVar2 = *(int *)(this + 4);
    puVar8 = *(undefined4 **)this;
    puVar9 = puVar11;
    if (puVar8 != puVar8 + param_1 * 0x16) {
      do {
        if (puVar9 == puVar11 + iVar2 * 0x16) break;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        uVar4 = puVar8[5];
        uVar5 = puVar8[6];
        uVar6 = puVar8[7];
        puVar9[4] = puVar8[4];
        puVar9[5] = uVar4;
        puVar9[6] = uVar5;
        puVar9[7] = uVar6;
        uVar4 = puVar8[9];
        uVar5 = puVar8[10];
        uVar6 = puVar8[0xb];
        puVar9[8] = puVar8[8];
        puVar9[9] = uVar4;
        puVar9[10] = uVar5;
        puVar9[0xb] = uVar6;
        uVar4 = puVar8[0xd];
        uVar5 = puVar8[0xe];
        uVar6 = puVar8[0xf];
        puVar9[0xc] = puVar8[0xc];
        puVar9[0xd] = uVar4;
        puVar9[0xe] = uVar5;
        puVar9[0xf] = uVar6;
        uVar4 = puVar8[0x11];
        uVar5 = puVar8[0x12];
        uVar6 = puVar8[0x13];
        puVar9[0x10] = puVar8[0x10];
        puVar9[0x11] = uVar4;
        puVar9[0x12] = uVar5;
        puVar9[0x13] = uVar6;
        puVar1 = (undefined8 *)(puVar8 + 0x14);
        puVar8 = puVar8 + 0x16;
        *(undefined8 *)(puVar9 + 0x14) = *puVar1;
        puVar9 = puVar9 + 0x16;
      } while (puVar8 != (undefined4 *)(*(int *)this + param_1 * 0x58));
    }
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar11;
  *(undefined4 **)(this + 0xc) = puVar11 + *(int *)(this + 4) * 0x16;
  return bStack_5;
}





//==== 00879ad0 ClampCameraZoom ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall CameraManager__ClampCameraZoom(void) */

void __thiscall CameraManager__ClampCameraZoom(CameraManager *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  CameraState *pCVar2;
  double dVar3;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  double dStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (**(code **)(*(int *)((this->Parent->GameTimer).LastTime + 0x54)))(&dStack_18);
  if ((0.0 < dStack_18) && (0.0 < dStack_10)) {
    dStack_20 = dStack_18;
    libm_sse2_log10_precise(0.0);
    libm_sse2_log10_precise(0.0);
    dStack_28 = dStack_10;
    if (dStack_10 < dStack_20) {
      dStack_28 = dStack_20;
      dStack_20 = dStack_10;
    }
    iVar1 = (this->TargetCamera).Size;
    if (iVar1 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar1 = (this->TargetCamera).Size;
    }
    pCVar2 = (this->TargetCamera).Data;
    dVar3 = pCVar2[iVar1 + -1].LogZoom;
    if (pCVar2[iVar1 + -1].LogZoom <= dStack_20) {
      dVar3 = dStack_20;
    }
    if (dStack_28 <= dVar3) {
      dVar3 = dStack_28;
    }
    if (iVar1 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar1 = (this->TargetCamera).Size;
      pCVar2 = (this->TargetCamera).Data;
    }
    pCVar2[iVar1 + -1].LogZoom = dVar3;
    dVar3 = (this->CurrentCamera).LogZoom;
    if (dVar3 <= dStack_20) {
      dVar3 = dStack_20;
    }
    if (dStack_28 <= dVar3) {
      dVar3 = dStack_28;
    }
    (this->CurrentCamera).LogZoom = dVar3;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00879bf0 Clear_00879bf0 ====


/* public: virtual void  util__Darray_L_structutil__Quaternion_L_double_G__G___Clear(void) */

void 
util__Darray_struct_util__Quaternion_double_____Clear
          (Darray_L_struct_util__Quaternion_L_double_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00879c10 ClearCameraOffset ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__ClearCameraOffset(void) */

void __thiscall CameraManager__ClearCameraOffset(CameraManager *this)

{
  Vec3_L_double_G_ *pVVar1;
  CameraState *pCVar2;
  int iVar3;
  
  iVar3 = (this->TargetCamera).Size;
  if (iVar3 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar3 = (this->TargetCamera).Size;
  }
  pCVar2 = (this->TargetCamera).Data;
  pVVar1 = &pCVar2[iVar3 + -1].Offset;
  *(undefined4 *)&pVVar1->X = 0;
  *(undefined4 *)((int)&pVVar1->X + 4) = 0;
  *(undefined4 *)&pVVar1->Y = 0;
  *(undefined4 *)((int)&pVVar1->Y + 4) = 0;
  pCVar2[iVar3 + -1].Offset.Z = 0.0;
  return;
}





//==== 00879c60 EnsureCameraLocking ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__EnsureCameraLocking(void) */

void __thiscall CameraManager__EnsureCameraLocking(CameraManager *this)

{
  LockCameraToPlane(this,false);
  return;
}





//==== 00879c70 GetAspectRatio ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: double __thiscall CameraManager__GetAspectRatio(void)const  */

double __thiscall CameraManager__GetAspectRatio(CameraManager *this)

{
  PostProcessor *pPVar1;
  int iStack_20;
  int iStack_1c;
  int iStack_10;
  int iStack_c;
  
  pPVar1 = GameManager__GetPostProcessor(this->Parent);
  PostProcessor__GetScreenSize(pPVar1);
  if (0 < iStack_c) {
    pPVar1 = GameManager__GetPostProcessor(this->Parent);
    PostProcessor__GetScreenSize(pPVar1);
    if (0 < iStack_10) {
      pPVar1 = GameManager__GetPostProcessor(this->Parent);
      PostProcessor__GetScreenSize(pPVar1);
      pPVar1 = GameManager__GetPostProcessor(this->Parent);
      PostProcessor__GetScreenSize(pPVar1);
      return (double)iStack_1c / (double)iStack_20;
    }
  }
  return 1.0;
}





//==== 00879d10 GetBillboardRadius ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: double __thiscall CameraManager__GetBillboardRadius(struct
   util__Vec3_L_double_G_,double)const  */

double __thiscall
CameraManager__GetBillboardRadius(CameraManager *this,Vec4_L_double_G_ param_1,double param_2)

{
  double dVar1;
  
  dVar1 = Graphics__GetWorldRadiusFromScreenRadius((*(Vec4_L_double_G_ *)&(param_1)),param_2);
}





//==== 00879d40 GetCameraCenter_00879d40 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__Vec3_L_double_G_ __thiscall CameraManager__GetCameraCenter(void)const  */

Vec3_L_double_G_ * __thiscall
CameraManager__GetCameraCenter(CameraManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->X = (this->CurrentCamera).Center.X + (this->CurrentCamera).Offset.X;
  __return_storage_ptr__->Y = (this->CurrentCamera).Center.Y + (this->CurrentCamera).Offset.Y;
  __return_storage_ptr__->Z = (this->CurrentCamera).Center.Z + (this->CurrentCamera).Offset.Z;
  return __return_storage_ptr__;
}





//==== 00879d80 GetCameraFieldOfViewY_radians ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  CameraManager__GetCameraFieldOfViewY_radians(void)const  */

double CameraManager__GetCameraFieldOfViewY_radians(void)

{
  int *piVar1;
  float10 fVar2;
  
  piVar1 = (int *)CapitalShipComponent__GetID();
                    /* WARNING: Could not recover jumptable at 0x00879d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar2 = (float10)(**(code **)(uintptr_t)(*piVar1 + 0x9c))();
  return (double)fVar2;
}





//==== 00879df0 GetCameraHeight ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: double __thiscall CameraManager__GetCameraHeight(void)const  */

double __thiscall CameraManager__GetCameraHeight(CameraManager *this)

{
  double dVar1;
  
  dVar1 = 10.0;
  libm_sse2_pow_precise(0.0,0.0);
}





//==== 00879e20 GetCameraNearFarPlanes_00879e20 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__Range_L_double_G_ __thiscall CameraManager__GetCameraNearFarPlanes(void)const
    */

Range_L_double_G_ * __thiscall
CameraManager__GetCameraNearFarPlanes(CameraManager *this,Range_L_double_G_ *__return_storage_ptr__)

{
  (**(code **)(*(int *)((this->Parent->GameTimer).LastTime + 0x58)))(__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 00879e40 GetCameraOrientation ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__Quaternion_L_double_G_ __thiscall CameraManager__GetCameraOrientation(void)const
    */

Quaternion_L_double_G_ * __thiscall
CameraManager__GetCameraOrientation(CameraManager *this,Quaternion_L_double_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4);
  uVar2 = *(undefined4 *)&(this->CurrentCamera).Orientation.Y;
  uVar3 = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Y + 4);
  (undefined4)(__return_storage_ptr__->X = *(undefined4 *)&(this->CurrentCamera).Orientation.X);
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar3;
  uVar1 = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Z + 4);
  uVar2 = *(undefined4 *)&(this->CurrentCamera).Orientation.W;
  uVar3 = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.W + 4);
  (undefined4)(__return_storage_ptr__->Z = *(undefined4 *)&(this->CurrentCamera).Orientation.Z);
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->W = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->W + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00879f60 GetCameraTargetCenter ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__Vec3_L_double_G_ __thiscall CameraManager__GetCameraTargetCenter(void)const  */

Vec3_L_double_G_ * __thiscall
CameraManager__GetCameraTargetCenter(CameraManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  CameraState *pCVar1;
  int iVar2;
  
  iVar2 = (this->TargetCamera).Size;
  if (iVar2 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa9,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar2 = (this->TargetCamera).Size;
  }
  pCVar1 = (this->TargetCamera).Data;
  __return_storage_ptr__->X = (this->CurrentCamera).Center.X + pCVar1[iVar2 + -1].Offset.X;
  __return_storage_ptr__->Y = (this->CurrentCamera).Center.Y + pCVar1[iVar2 + -1].Offset.Y;
  __return_storage_ptr__->Z = (this->CurrentCamera).Center.Z + pCVar1[iVar2 + -1].Offset.Z;
  return __return_storage_ptr__;
}





//==== 0087a010 GetCameraVelocity__s_0087a010 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__Vec3_L_double_G_ __thiscall CameraManager__GetCameraVelocity__s(void)const  */

Vec3_L_double_G_ * __thiscall
CameraManager__GetCameraVelocity__s(CameraManager *this,Vec3_L_double_G_ *__return_storage_ptr__)

{
  (**(code **)(*(int *)((this->Parent->GameTimer).LastTime + 0x50)))(__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 0087a180 GetFromLookAt ====


/* public: static struct util__Quaternion_L_double_G_ __cdecl
   util__Quaternion_double___GetFromLookAt(struct util__Vec3_L_double_G_,struct util__Vec3_L_double_G_) */

Quaternion_L_double_G_ * __cdecl
util__Quaternion_double___GetFromLookAt
          (Quaternion_L_double_G_ *__return_storage_ptr__,Vec4_L_double_G_ param_1,Vec3_L_double_G_ param_2)

{
  undefined8 stack0x00000008;
  undefined8 stack0xffffffd4;
  double dVar1;
  double dVar2;
  Vec3_L_double_G_ VVar3;
  Vec4_L_double_G_ VVar4;
  Vec3_L_double_G_ *pVVar5;
  undefined4 uStack00000008;
  Vec3_L_double_G_ VStack_64;
  Vec3_L_double_G_ VStack_4c;
  undefined1 auStack_34 [16];
  double dStack_24;
  Vec3_L_double_G_ VStack_1c;
  
  pVVar5 = (Vec3_L_double_G_ *)(uintptr_t)(Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)&stack0x00000008,&VStack_4c));
  dVar1 = pVVar5->X;
  dVar2 = pVVar5->Y;
  uStack00000008 = SUB84(dVar1,0);
  param_1.X = (undefined4)((ulonglong)dVar1 >> 0x20);
  param_1.Y = SUB84(dVar2,0);
  param_1.Y = (undefined4)((ulonglong)dVar2 >> 0x20);
  (*(uint64_t *)((char *)&(param_1) + 12)) = pVVar5->Z;
  (*(uint64_t*)&(auStack_34)) = (*(uint64_t*)((char*)&(param_2)+4)) * (double)(*(uint64_t *)((char *)&(param_1) + 12)) - (double)(*(uint64_t *)((char *)&(param_2) + 12)) * dVar2;
  dStack_24 = (double)CONCAT44(param_2.X,param_1.W) * dVar2 - dVar1 * (*(uint64_t*)((char*)&(param_2)+4));
  (*(uint64_t*)((char*)&(auStack_34)+8)) =
       (double)(*(uint64_t *)((char *)&(param_2) + 12)) * dVar1 -
       (double)(*(uint64_t *)((char *)&(param_1) + 12)) * (double)CONCAT44(param_2.X,param_1.W);
  Vec3_L_double_G___SafeNormalized((Vec3_L_double_G_ *)auStack_34,&VStack_1c);
  dStack_24 = 0.0;
  (*(uint64_t*)((char*)&(auStack_34)+8)) = VStack_1c.X;
  if (((NAN(VStack_1c.X) != (VStack_1c.X == 0.0)) && (NAN(VStack_1c.Y) != (VStack_1c.Y == 0.0))) &&
     (NAN(VStack_1c.Z) != (VStack_1c.Z == 0.0))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\quaternion.inl",0x118,
              "!FaceType__Right.IsZero()",(char *)0x0);
    DebugBreak();
    VStack_1c.X = (double)(*(uint64_t*)((char*)&(auStack_34)+8));
  }
  VStack_4c.X = VStack_1c.Z * (double)CONCAT44(param_1.Y,param_1.Y) -
                VStack_1c.Y * (double)(*(uint64_t *)((char *)&(param_1) + 12));
  VStack_4c.Y = VStack_1c.X * (double)(*(uint64_t *)((char *)&(param_1) + 12)) -
                VStack_1c.Z * (double)CONCAT44(param_1.X,uStack00000008);
  VStack_4c.Z = VStack_1c.Y * (double)CONCAT44(param_1.X,uStack00000008) -
                VStack_1c.X * (double)CONCAT44(param_1.Y,param_1.Y);
  pVVar5 = (Vec3_L_double_G_ *)(uintptr_t)(Vec3_L_double_G___SafeNormalized(&VStack_4c,&VStack_64));
  param_1.W = *(undefined4 *)&pVVar5->X;
  VVar3.Y = param_1.X;
  VVar3.X = uStack00000008;
  VVar3.Y = param_1.Y;
  VVar3.Z = param_1.Y;
  VVar3.Z = (double)(*(uint64_t *)((char *)&(param_1) + 12));
  VVar4.Y = SUB84(VStack_1c.Y,0);
  VVar4.X = (double)SUB168(stack0xffffffd4,0);
  VVar4.Z = (int)((ulonglong)VStack_1c.Y >> 0x20);
  VVar4.Z = SUB84(VStack_1c.Z,0);
  VVar4.W = (int)((ulonglong)VStack_1c.Z >> 0x20);
  util__Quaternion_double___Quaternion_double(__return_storage_ptr__,VVar3,*pVVar5,VVar4);
  return __return_storage_ptr__;
}





//==== 0087a670 GetMouseDragAmount ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: double __thiscall CameraManager__GetMouseDragAmount(struct util__Vec2_L_double_G_,struct
   util__Vec2_L_double_G_)const  */

double __thiscall
CameraManager__GetMouseDragAmount(CameraManager *this,Vec4_L_double_G_ param_1,Vec2_L_double_G_ param_2)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dStack_24;
  undefined1 auStack_1c [16];
  double dStack_c;
  
  dVar2 = 0.0;
  dStack_c = param_2.X * param_1.X + param_2.Y * param_1.Y;
  dStack_24 = param_1.X * dStack_c;
  (*(uint64_t*)((char*)&(auStack_1c)+8)) = dStack_c * param_1.Y;
  if (NAN(dStack_c) == (dStack_c == 0.0)) {
    dVar2 = util__Abs(&dStack_c);
    dVar2 = dStack_c / dVar2;
    dStack_c = dVar2;
  }
  dStack_24 = (double)(*(uint64_t*)((char*)&(auStack_1c)+8)) * (double)(*(uint64_t*)((char*)&(auStack_1c)+8)) + dStack_24 * dStack_24;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_1c,&dStack_24);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return (double)(int)dVar2 * pMVar1->Data;
}





//==== 0087b100 GetScreenRawLine ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__Line2_L_double_G_  CameraManager__GetScreenRawLine(struct
   util__Line3_L_double_G_)const  */

Line2_L_double_G_ * 
CameraManager__GetScreenRawLine
          (CameraManager *this,Line2_L_double_G_ *__return_storage_ptr__,Line3_L_double_G_ param_1)

{
  undefined8 stack0xffffffb8;
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  undefined4 in_stack_ffffffb8;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  Vec3_L_double_G_ VStack_30;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  VVar1.W = in_stack_ffffffb8;
  (*(uint32_t *)((char *)&(VVar1) + 0)) = *(uint32_t *)&(param_1.A);
  Graphics__GetScreenPosition(&VStack_30,(*(Vec4_L_double_G_ *)&(VVar1)));
  uStack_18 = VStack_30.X;
  uStack_14 = VStack_30.Y;
  uStack_10 = 0;
  uStack_c = 0;
  VVar2.W = in_stack_ffffffb8;
  (*(uint32_t *)((char *)&(VVar2) + 0)) = *(uint32_t *)&(param_1.B);
  Graphics__GetScreenPosition((Vec3_L_double_G_ *)&stack0xffffffb8,(*(Vec4_L_double_G_ *)&(VVar2)));
  *(undefined4 *)&(__return_storage_ptr__->A).X = uStack_18;
  *(undefined4 *)((int)&(__return_storage_ptr__->A).X + 4) = uStack_14;
  *(int *)&(__return_storage_ptr__->A).Y = SUB84(VStack_30.Y,0);
  *(int *)((int)&(__return_storage_ptr__->A).Y + 4) = (int)((ulonglong)VStack_30.Y >> 0x20);
  *(undefined4 *)&(__return_storage_ptr__->B).X = in_stack_ffffffb8;
  *(undefined4 *)((int)&(__return_storage_ptr__->B).X + 4) = uStack_44;
  *(undefined4 *)&(__return_storage_ptr__->B).Y = uStack_40;
  *(undefined4 *)((int)&(__return_storage_ptr__->B).Y + 4) = uStack_3c;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 0087b1c0 GetTargetCameraHeight ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: double __thiscall CameraManager__GetTargetCameraHeight(void)const  */

double __thiscall CameraManager__GetTargetCameraHeight(CameraManager *this)

{
  double dVar1;
  
  if ((this->TargetCamera).Size < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa9,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  dVar1 = 10.0;
  libm_sse2_pow_precise(0.0,0.0);
  return dVar1;
}





//==== 0087b220 GetTargetOrientation ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__Quaternion_L_double_G_ __thiscall CameraManager__GetTargetOrientation(void)const
    */

Quaternion_L_double_G_ * __thiscall
CameraManager__GetTargetOrientation(CameraManager *this,Quaternion_L_double_G_ *__return_storage_ptr__)

{
  CameraState *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = (this->TargetCamera).Size;
  if (iVar5 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa9,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar5 = (this->TargetCamera).Size;
  }
  pCVar1 = (this->TargetCamera).Data;
  uVar2 = *(undefined4 *)((int)&pCVar1[iVar5 + -1].Orientation.X + 4);
  uVar3 = *(undefined4 *)&pCVar1[iVar5 + -1].Orientation.Y;
  uVar4 = *(undefined4 *)((int)&pCVar1[iVar5 + -1].Orientation.Y + 4);
  *(undefined4 *)&__return_storage_ptr__->X = *(undefined4 *)&pCVar1[iVar5 + -1].Orientation.X;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = uVar2;
  *(undefined4 *)&__return_storage_ptr__->Y = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = uVar4;
  uVar2 = *(undefined4 *)((int)&pCVar1[iVar5 + -1].Orientation.Z + 4);
  uVar3 = *(undefined4 *)&pCVar1[iVar5 + -1].Orientation.W;
  uVar4 = *(undefined4 *)((int)&pCVar1[iVar5 + -1].Orientation.W + 4);
  *(undefined4 *)&__return_storage_ptr__->Z = *(undefined4 *)&pCVar1[iVar5 + -1].Orientation.Z;
  *(undefined4 *)((int)&__return_storage_ptr__->Z + 4) = uVar2;
  *(undefined4 *)&__return_storage_ptr__->W = uVar3;
  *(undefined4 *)((int)&__return_storage_ptr__->W + 4) = uVar4;
  return __return_storage_ptr__;
}





//==== 0087b270 IsScreenLineOffscreen ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool __thiscall CameraManager__IsScreenLineOffscreen(struct util__Line2_L_double_G_)const  */

bool __thiscall CameraManager__IsScreenLineOffscreen(CameraManager *this,Line2_L_double_G_ param_1)

{
  undefined8 stack0xffffffe4;
  int iVar1;
  double dVar2;
  double dVar3;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  
  dVar2 = (double)*(unsigned int *)(&(Graphics__GlobalState.ViewMatrix.Data[0xf]));
  dStack_3c = 0.0;
  if (dVar2 <= 0.0) {
    dStack_3c = dVar2;
  }
  dVar3 = (double)*(unsigned int *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4);
  dStack_34 = 0.0;
  if (dVar3 <= 0.0) {
    dStack_34 = dVar3;
  }
  dStack_24 = 0.0;
  if (0.0 <= dVar3) {
    dStack_24 = dVar3;
  }
  dStack_2c = 0.0;
  if (0.0 <= dVar2) {
    dStack_2c = dVar2;
  }
  iVar1 = util__AABB_struct_util__Vec2_double_____Intersect_double_struct_util__Line2_double
                    ((AABB_L_struct_util__Vec2_L_double_G___G_ *)&dStack_3c,
                     (Line2_L_double_G_ *)&stack0xffffffe4);
  return *(char *)(iVar1 + 0x10) == '\0';
}





//==== 0087b2e0 LockCameraToPlane ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall CameraManager__LockCameraToPlane(bool) */

void __thiscall CameraManager__LockCameraToPlane(CameraManager *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  CameraState *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Vec4_L_double_G_ VVar5;
  Quaternion_L_double_G_ QVar6;
  Vec4_L_double_G_ VVar7;
  Vec4_L_double_G_ VVar8;
  Vec4_L_double_G_ VVar9;
  Vec4_L_double_G_ VVar10;
  Vec4_L_double_G_ VVar11;
  Vec4_L_double_G_ VVar12;
  Vec4_L_double_G_ VVar13;
  Quaternion_L_double_G_ *pQVar14;
  Vec3_L_double_G_ *pVVar15;
  Vec3_L_double_G_ *pVVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined1 *puVar19;
  Vec3_L_double_G_ VStack_b4;
  undefined1 auStack_9c [32];
  Vec4_L_double_G_ VStack_7c;
  Vec3_L_double_G_ VStack_64;
  double dStack_4c;
  Vec3_L_double_G_ VStack_44;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  char cStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puVar19 = auStack_28;
  (**(code **)(*(int *)((this->Parent->GameTimer).LastTime + 0x5c)))();
  if (cStack_10 != '\0') {
    iVar18 = (this->TargetCamera).Size;
    if (iVar18 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar18 = (this->TargetCamera).Size;
    }
    pCVar1 = (this->TargetCamera).Data;
    pQVar14 = &pCVar1[iVar18 + -1].Orientation;
    QVar6.Z = *(undefined4 *)&pQVar14->Z;
    (*(uint32_t *)((char *)&(QVar6) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [12])((int)&pCVar1[iVar18 + -1].Orientation.X + 4));
    QVar6.Z = *(undefined4 *)((int)&pQVar14->Z + 4);
    QVar6.W = *(undefined4 *)&pQVar14->W;
    QVar6.W = *(undefined4 *)((int)&pQVar14->W + 4);
    (*(uint32_t *)((char *)&(QVar6.W) + 4)) = 0;
    VVar13.Z = 0;
    (*(uint32_t *)((char *)&(VVar13) + 0)) = ZEXT812(0);
    VVar13.Z = 0x3ff00000;
    *(uint32_t *)&VVar13.W = (uint32_t)(uintptr_t)(puVar19);
    util__Rotate_double(&VStack_44,QVar6,(*(Vec3_L_double_G_ *)&(VVar13)));
    if (cStack_10 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pVVar16 = &VStack_64;
    VVar7.Y = uStack_20;
    VVar7.X = uStack_24;
    VVar7.Y = uStack_1c;
    VVar7.Z = (int)uStack_18;
    VVar7.Z = (int)((ulonglong)uStack_18 >> 0x20);
    VVar7.W = VStack_44.X;
    VVar10.Y = VStack_44.Y;
    VVar10.X = VStack_44.Y;
    VVar10.Y = VStack_44.Z;
    VVar10.Z = SUB84(VStack_44.Z,0);
    VVar10.Z = (int)((ulonglong)VStack_44.Z >> 0x20);
    *(uint32_t *)&VVar10.W = (uint32_t)(uintptr_t)(pVVar16);
    pVVar15 = util__CalcSafePerpendicular_double((Vec3_L_double_G_ *)(&VStack_7c),VVar7,(*(Vec3_L_double_G_ *)&(VVar10)));
    util__Vec3_double___SafeNormalized(pVVar15,pVVar16);
    pVVar16 = &VStack_b4;
    VVar8.Y = VStack_44.Y;
    VVar8.X = VStack_44.Y;
    VVar8.Y = VStack_44.Z;
    VVar8.Z = SUB84(VStack_44.Z,0);
    VVar8.Z = (int)((ulonglong)VStack_44.Z >> 0x20);
    VVar8.W = VStack_64.X;
    VVar11.Y = VStack_64.Y;
    VVar11.X = VStack_64.Y;
    VVar11.Y = VStack_64.Z;
    VVar11.Z = SUB84(VStack_64.Z,0);
    VVar11.Z = (int)((ulonglong)VStack_64.Z >> 0x20);
    *(uint32_t *)&VVar11.W = (uint32_t)(uintptr_t)(pVVar16);
    pVVar15 = util__CalcSafePerpendicular_double((Vec3_L_double_G_ *)(auStack_9c + 8),VVar8,(*(Vec3_L_double_G_ *)&(VVar11)));
    pVVar16 = util__Vec3_double___SafeNormalized(pVVar15,pVVar16);
    VStack_7c.Y = *(undefined4 *)&pVVar16->X;
    VStack_7c.Z = *(undefined4 *)((int)&pVVar16->X + 4);
    VStack_7c.Z = *(undefined4 *)&pVVar16->Y;
    VStack_7c.W = *(undefined4 *)((int)&pVVar16->Y + 4);
    dStack_4c = pVVar16->Z;
    iStack_2c = (this->TargetCamera).Size;
    if (iStack_2c < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iStack_2c = (this->TargetCamera).Size;
    }
    pCVar1 = (this->TargetCamera).Data;
    VVar5.Y = VStack_44.Y;
    VVar5.X = VStack_44.X;
    VVar5.Y = VStack_44.Y;
    VVar5.Z = VStack_44.Z;
    VVar5.Z = SUB84(VStack_44.Z,0);
    VVar5.W = (int)((ulonglong)VStack_44.Z >> 0x20);
    VVar9.Y = VStack_7c.Z;
    VVar9.X = VStack_7c.Y;
    VVar9.Y = VStack_7c.Z;
    VVar9.Z = VStack_7c.W;
    VVar9.Z = SUB84(dStack_4c,0);
    VVar9.W = (int)((ulonglong)dStack_4c >> 0x20);
    VVar12.Y = VStack_64.Y;
    VVar12.X = VStack_64.X;
    VVar12.Y = VStack_64.Y;
    VVar12.Z = VStack_64.Z;
    VVar12.Z = SUB84(VStack_64.Z,0);
    VVar12.W = (int)((ulonglong)VStack_64.Z >> 0x20);
    puVar17 = (undefined4 *)
              util__Quaternion_double___Quaternion_double
                        ((Quaternion_L_double_G_ *)auStack_9c,VVar5,VVar9,VVar12);
    uVar2 = puVar17[1];
    uVar3 = puVar17[2];
    uVar4 = puVar17[3];
    pQVar14 = &pCVar1[iStack_2c + -1].Orientation;
    *(undefined4 *)&pQVar14->X = *puVar17;
    *(undefined4 *)((int)&pQVar14->X + 4) = uVar2;
    *(undefined4 *)&pQVar14->Y = uVar3;
    *(undefined4 *)((int)&pQVar14->Y + 4) = uVar4;
    uVar2 = puVar17[5];
    uVar3 = puVar17[6];
    uVar4 = puVar17[7];
    pQVar14 = &pCVar1[iStack_2c + -1].Orientation;
    *(undefined4 *)&pQVar14->Z = puVar17[4];
    *(undefined4 *)((int)&pQVar14->Z + 4) = uVar2;
    *(undefined4 *)&pQVar14->W = uVar3;
    *(undefined4 *)((int)&pQVar14->W + 4) = uVar4;
    if (param_1) {
      iVar18 = (this->TargetCamera).Size;
      if (iVar18 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                        "Size > 0",(char *)0x0);
        DebugBreak();
        iVar18 = (this->TargetCamera).Size;
      }
      pCVar1 = (this->TargetCamera).Data;
      pQVar14 = &pCVar1[iVar18 + -1].Orientation;
      uVar2 = *(undefined4 *)((int)&pQVar14->X + 4);
      uVar3 = *(undefined4 *)&pQVar14->Y;
      uVar4 = *(undefined4 *)((int)&pQVar14->Y + 4);
      *(undefined4 *)&(this->CurrentCamera).Orientation.X = *(undefined4 *)&pQVar14->X;
      *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4) = uVar2;
      *(undefined4 *)&(this->CurrentCamera).Orientation.Y = uVar3;
      *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Y + 4) = uVar4;
      pQVar14 = &pCVar1[iVar18 + -1].Orientation;
      uVar2 = *(undefined4 *)((int)&pQVar14->Z + 4);
      uVar3 = *(undefined4 *)&pQVar14->W;
      uVar4 = *(undefined4 *)((int)&pQVar14->W + 4);
      *(undefined4 *)&(this->CurrentCamera).Orientation.Z = *(undefined4 *)&pQVar14->Z;
      *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Z + 4) = uVar2;
      *(undefined4 *)&(this->CurrentCamera).Orientation.W = uVar3;
      *(undefined4 *)((int)&(this->CurrentCamera).Orientation.W + 4) = uVar4;
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0087b520 PopCameraState ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__PopCameraState(void) */

void __thiscall CameraManager__PopCameraState(CameraManager *this)

{
  int iVar1;
  
  if ((this->TargetCamera).Size < 2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\cameramanager.cpp",0x93,
                    "TargetCamera.Num() > 1",(char *)0x0);
    DebugBreak();
    if ((this->TargetCamera).Size < 2) {
      return;
    }
  }
  iVar1 = (this->TargetCamera).Size;
  if (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    (this->TargetCamera).Size = iVar1;
    (this->TargetCamera).EndData = (this->TargetCamera).Data + iVar1;
  }
  return;
}





//==== 0087b570 Push_0087b570 ====


/* public: bool  util__Stack_L_structCameraState_G___Push(struct CameraState const &) */

bool __thiscall
util__Stack_struct_CameraState___Push(Stack_L_struct_CameraState_G_ *this,CameraState *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  
  iVar1 = *(int *)(this + 4);
  iVar6 = iVar1 + 1;
  *(int *)(this + 4) = iVar6;
  *(int *)(this + 0xc) = iVar6 * 0x58 + *(int *)this;
  bVar5 = CheckSize(this,iVar1);
  if (!bVar5) {
  }
  iVar6 = *(int *)(this + 4) * 0x58 + *(int *)this;
  uVar2 = *(undefined4 *)((int)&(param_1->Center).X + 4);
  uVar3 = *(undefined4 *)&(param_1->Center).Y;
  uVar4 = *(undefined4 *)((int)&(param_1->Center).Y + 4);
  *(undefined4 *)(iVar6 + -0x58) = *(undefined4 *)&(param_1->Center).X;
  *(undefined4 *)(iVar6 + -0x54) = uVar2;
  *(undefined4 *)(iVar6 + -0x50) = uVar3;
  *(undefined4 *)(iVar6 + -0x4c) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->Center).Z + 4);
  uVar3 = *(undefined4 *)&(param_1->Offset).X;
  uVar4 = *(undefined4 *)((int)&(param_1->Offset).X + 4);
  *(undefined4 *)(iVar6 + -0x48) = *(undefined4 *)&(param_1->Center).Z;
  *(undefined4 *)(iVar6 + -0x44) = uVar2;
  *(undefined4 *)(iVar6 + -0x40) = uVar3;
  *(undefined4 *)(iVar6 + -0x3c) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->Offset).Y + 4);
  uVar3 = *(undefined4 *)&(param_1->Offset).Z;
  uVar4 = *(undefined4 *)((int)&(param_1->Offset).Z + 4);
  *(undefined4 *)(iVar6 + -0x38) = *(undefined4 *)&(param_1->Offset).Y;
  *(undefined4 *)(iVar6 + -0x34) = uVar2;
  *(undefined4 *)(iVar6 + -0x30) = uVar3;
  *(undefined4 *)(iVar6 + -0x2c) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->Orientation).X + 4);
  uVar3 = *(undefined4 *)&(param_1->Orientation).Y;
  uVar4 = *(undefined4 *)((int)&(param_1->Orientation).Y + 4);
  *(undefined4 *)(iVar6 + -0x28) = *(undefined4 *)&(param_1->Orientation).X;
  *(undefined4 *)(iVar6 + -0x24) = uVar2;
  *(undefined4 *)(iVar6 + -0x20) = uVar3;
  *(undefined4 *)(iVar6 + -0x1c) = uVar4;
  uVar2 = *(undefined4 *)((int)&(param_1->Orientation).Z + 4);
  uVar3 = *(undefined4 *)&(param_1->Orientation).W;
  uVar4 = *(undefined4 *)((int)&(param_1->Orientation).W + 4);
  *(undefined4 *)(iVar6 + -0x18) = *(undefined4 *)&(param_1->Orientation).Z;
  *(undefined4 *)(iVar6 + -0x14) = uVar2;
  *(undefined4 *)(iVar6 + -0x10) = uVar3;
  *(undefined4 *)(iVar6 + -0xc) = uVar4;
  *(double *)(iVar6 + -8) = param_1->LogZoom;
  return true;
}





//==== 0087b5e0 PushIdenticalCameraState ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__PushIdenticalCameraState(void) */

void __thiscall CameraManager__PushIdenticalCameraState(CameraManager *this)

{
  CameraState CStack_5c;
  
  CStack_5c.Center.X = *(undefined4 *)&(this->CurrentCamera).Center.X;
  CStack_5c.Center.Y = *(undefined4 *)((int)&(this->CurrentCamera).Center.X + 4);
  CStack_5c.Center.Y = *(undefined4 *)&(this->CurrentCamera).Center.Y;
  CStack_5c.Center.Z = *(undefined4 *)((int)&(this->CurrentCamera).Center.Y + 4);
  CStack_5c.Center.Z = *(undefined4 *)&(this->CurrentCamera).Center.Z;
  CStack_5c.Center.W = *(undefined4 *)((int)&(this->CurrentCamera).Center.Z + 4);
  CStack_5c.Offset.X = *(undefined4 *)&(this->CurrentCamera).Offset.X;
  CStack_5c.Offset.Y = *(undefined4 *)((int)&(this->CurrentCamera).Offset.X + 4);
  CStack_5c.Offset.Y = *(undefined4 *)&(this->CurrentCamera).Offset.Y;
  CStack_5c.Offset.Z = *(undefined4 *)((int)&(this->CurrentCamera).Offset.Y + 4);
  CStack_5c.Offset.Z = *(undefined4 *)&(this->CurrentCamera).Offset.Z;
  CStack_5c.Offset.W = *(undefined4 *)((int)&(this->CurrentCamera).Offset.Z + 4);
  CStack_5c.Orientation.X = *(undefined4 *)&(this->CurrentCamera).Orientation.X;
  CStack_5c.Orientation.Y = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.X + 4);
  CStack_5c.Orientation.Y = *(undefined4 *)&(this->CurrentCamera).Orientation.Y;
  CStack_5c.Orientation.Z = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Y + 4);
  CStack_5c.Orientation.Z = *(undefined4 *)&(this->CurrentCamera).Orientation.Z;
  CStack_5c.Orientation.W = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.Z + 4);
  CStack_5c.Orientation.W = *(undefined4 *)&(this->CurrentCamera).Orientation.W;
  (*(uint32_t *)((char *)&(CStack_5c.Orientation.W) + 4)) = *(undefined4 *)((int)&(this->CurrentCamera).Orientation.W + 4);
  CStack_5c.LogZoom = (this->CurrentCamera).LogZoom;
  util__Stack_struct_CameraState___Push((Stack_L_struct_CameraState_G_ *)&this->TargetCamera,&CStack_5c)
  ;
  return;
}





//==== 0087b630 PushNewCameraState ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__PushNewCameraState(struct CameraState const &) */

void __thiscall CameraManager__PushNewCameraState(CameraManager *this,CameraState *param_1)

{
  int iVar1;
  int iVar2;
  CameraState *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  Stack_L_CameraState_G_ *this_00;
  
  this_00 = &this->TargetCamera;
  iVar2 = (this->TargetCamera).Size;
  iVar1 = iVar2 + 1;
  (this->TargetCamera).Size = iVar1;
  (this->TargetCamera).EndData = this_00->Data + iVar1;
  bVar7 = util__Stack_struct_CameraState___CheckSize((Stack_L_struct_CameraState_G_ *)this_00,iVar2);
  if (!bVar7) {
    return;
  }
  iVar1 = (this->TargetCamera).Size;
  pCVar3 = this_00->Data;
  uVar4 = *(undefined4 *)((int)&(param_1->Center).X + 4);
  uVar5 = *(undefined4 *)&(param_1->Center).Y;
  uVar6 = *(undefined4 *)((int)&(param_1->Center).Y + 4);
  (undefined4)(pCVar3[iVar1 + -1].Center.X = *(undefined4 *)&(param_1->Center).X);
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Center.X + 4) = uVar4;
  *(undefined4 *)&pCVar3[iVar1 + -1].Center.Y = uVar5;
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Center.Y + 4) = uVar6;
  uVar4 = *(undefined4 *)((int)&(param_1->Center).Z + 4);
  uVar5 = *(undefined4 *)&(param_1->Offset).X;
  uVar6 = *(undefined4 *)((int)&(param_1->Offset).X + 4);
  (undefined4)(pCVar3[iVar1 + -1].Center.Z = *(undefined4 *)&(param_1->Center).Z);
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Center.Z + 4) = uVar4;
  *(undefined4 *)&pCVar3[iVar1 + -1].Offset.X = uVar5;
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Offset.X + 4) = uVar6;
  uVar4 = *(undefined4 *)((int)&(param_1->Offset).Y + 4);
  uVar5 = *(undefined4 *)&(param_1->Offset).Z;
  uVar6 = *(undefined4 *)((int)&(param_1->Offset).Z + 4);
  (undefined4)(pCVar3[iVar1 + -1].Offset.Y = *(undefined4 *)&(param_1->Offset).Y);
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Offset.Y + 4) = uVar4;
  *(undefined4 *)&pCVar3[iVar1 + -1].Offset.Z = uVar5;
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Offset.Z + 4) = uVar6;
  uVar4 = *(undefined4 *)((int)&(param_1->Orientation).X + 4);
  uVar5 = *(undefined4 *)&(param_1->Orientation).Y;
  uVar6 = *(undefined4 *)((int)&(param_1->Orientation).Y + 4);
  (undefined4)(pCVar3[iVar1 + -1].Orientation.X = *(undefined4 *)&(param_1->Orientation).X);
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Orientation.X + 4) = uVar4;
  *(undefined4 *)&pCVar3[iVar1 + -1].Orientation.Y = uVar5;
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Orientation.Y + 4) = uVar6;
  uVar4 = *(undefined4 *)((int)&(param_1->Orientation).Z + 4);
  uVar5 = *(undefined4 *)&(param_1->Orientation).W;
  uVar6 = *(undefined4 *)((int)&(param_1->Orientation).W + 4);
  (undefined4)(pCVar3[iVar1 + -1].Orientation.Z = *(undefined4 *)&(param_1->Orientation).Z);
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Orientation.Z + 4) = uVar4;
  *(undefined4 *)&pCVar3[iVar1 + -1].Orientation.W = uVar5;
  *(undefined4 *)((int)&pCVar3[iVar1 + -1].Orientation.W + 4) = uVar6;
  pCVar3[iVar1 + -1].LogZoom = param_1->LogZoom;
  return;
}





//==== 0087b640 SetCameraHeight ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__SetCameraHeight(double) */

void __thiscall CameraManager__SetCameraHeight(CameraManager *this,double param_1)

{
  int iVar1;
  
  iVar1 = (this->TargetCamera).Size;
  if (iVar1 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar1 = (this->TargetCamera).Size;
  }
  libm_sse2_log10_precise(0.0);
  (this->TargetCamera).Data[iVar1 + -1].LogZoom = param_1;
  return;
}





//==== 0087b690 SetCameraTargetOrientation ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__SetCameraTargetOrientation(struct
   util__Quaternion_L_double_G_) */

void __thiscall
CameraManager__SetCameraTargetOrientation(CameraManager *this,Quaternion_L_double_G_ param_1)

{
  Quaternion_L_double_G_ *pQVar1;
  CameraState *pCVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  undefined1 auStack_28 [16];
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  dStack_38 = 1.0;
  dVar5 = param_1.Y * param_1.Y + param_1.X * param_1.X + param_1.Z * param_1.Z +
          param_1.W * param_1.W;
  libm_sse2_sqrt_precise(0.0);
  dStack_40 = 1e-08;
  dStack_30 = dVar5;
  bVar3 = util__Equals_double(&dStack_30,&dStack_38,&dStack_40);
  if (!bVar3) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\cameramanager.cpp",0x66,
                    "TargetOrientation.IsNormalized()",(char *)0x0);
    DebugBreak();
  }
  dVar5 = param_1.Y * param_1.Y + param_1.X * param_1.X + param_1.Z * param_1.Z +
          param_1.W * param_1.W;
  libm_sse2_sqrt_precise(0.0);
  dVar5 = 1.0 / dVar5;
  iVar4 = (this->TargetCamera).Size;
  (*(uint32_t*)((char*)&(auStack_28)+8)) = SUB84(param_1.Y * dVar5,0);
  (*(uint64_t*)&(auStack_28)) = param_1.X * dVar5;
  (*(uint32_t *)((char *)&(auStack_28) + 12)) = (int)((ulonglong)(param_1.Y * dVar5) >> 0x20);
  uStack_10 = dVar5 * param_1.W;
  uStack_18 = dVar5 * param_1.Z;
  if (iVar4 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
    iVar4 = (this->TargetCamera).Size;
  }
  pCVar2 = (this->TargetCamera).Data;
  pQVar1 = &pCVar2[iVar4 + -1].Orientation;
  *(undefined4 *)&(pQVar1->X) = (*(uint32_t*)&(auStack_28));
  *(undefined4 *)((int)&pQVar1->X + 4) = (*(uint32_t*)((char*)&(auStack_28)+4));
  *(undefined4 *)&(pQVar1->Y) = (*(uint32_t*)((char*)&(auStack_28)+8));
  *(undefined4 *)((int)&pQVar1->Y + 4) = (*(uint32_t *)((char *)&(auStack_28) + 12));
  pQVar1 = &pCVar2[iVar4 + -1].Orientation;
  *(undefined4 *)&pQVar1->Z = (undefined4)uStack_18;
  *(undefined4 *)((int)&pQVar1->Z + 4) = (*(uint32_t*)((char*)&(uStack_18)+4));
  *(undefined4 *)&pQVar1->W = (undefined4)uStack_10;
  *(undefined4 *)((int)&pQVar1->W + 4) = (*(uint32_t*)((char*)&(uStack_10)+4));
  LockCameraToPlane(this,false);
  return;
}





//==== 0087b7f0 SetSize_0087b7f0 ====


/* private: void  util__Darray_L_structutil__Quaternion_L_double_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__Quaternion_double_____SetSize
          (Darray_L_struct_util__Quaternion_L_double_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = *param_1;
  if (((iVar2 < 1) && (0x3ffffffe < iVar2)) || ((iVar2 < 0x40000000 && (-1 < iVar2)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar2 = *param_1;
  }
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  iVar4 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar4 = iVar2;
  }
  if (((iVar4 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar3 = (undefined4 *)(iVar4 * 0x20 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x20 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0x3ff00000;
      puVar3 = puVar3 + 8;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x20 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0087b8a0 ShiftActualCamera ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall CameraManager__ShiftActualCamera(struct util__Vec3_L_double_G_) */

void __thiscall CameraManager__ShiftActualCamera(CameraManager *this,Vec4_L_double_G_ param_1)

{
  (this->CurrentCamera).Offset.X = (this->CurrentCamera).Offset.X + param_1.X;
  (this->CurrentCamera).Offset.Y = param_1.Y + (this->CurrentCamera).Offset.Y;
  (this->CurrentCamera).Offset.Z = param_1.Z + (this->CurrentCamera).Offset.Z;
  return;
}





//==== 0087b9c0 TweenToTargetState ====


/* public: void  CameraState__TweenToTargetState(double,struct CameraState const
   &,double,double,double) */

void 
CameraState__TweenToTargetState
          (CameraState *this,double param_1,CameraState *param_2,double param_3,double param_4,
          double param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 (*pauVar7) [16];
  undefined4 uVar8;
  undefined4 uVar11;
  double dVar9;
  double dVar10;
  double dVar12;
  double dVar13;
  undefined4 in_stack_00000010;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double dStack_60;
  double dStack_58;
  undefined1 auStack_50 [16];
  
  dVar9 = (double)CONCAT44((*(uint32_t*)&(param_3)),in_stack_00000010);
  dVar12 = 1.0 - dVar9;
  this->LogZoom =
       param_2->LogZoom * (double)CONCAT44((*(uint32_t*)&(param_5)),(*(uint32_t*)((char*)&(param_4)+4))) +
       (1.0 - (double)CONCAT44((*(uint32_t*)&(param_5)),(*(uint32_t*)((char*)&(param_4)+4)))) * this->LogZoom;
  dVar1 = (param_2->Center).Z;
  dVar13 = dVar12 * (this->Center).Y + (param_2->Center).Y * dVar9;
  dVar2 = (this->Offset).X;
  dVar10 = (this->Offset).Y;
  (*(uint32_t*)((char*)&(auVar6)+8)) = SUB84(dVar13,0);
  (*(uint64_t*)&(auVar6)) = dVar12 * (this->Center).X + (param_2->Center).X * dVar9;
  (*(uint32_t *)((char *)&(auVar6) + 12)) = (int)((ulonglong)dVar13 >> 0x20);
  (this->Center).X = (double)(*(uint64_t*)&(auVar6));
  (this->Center).Y = (double)(*(uint64_t*)((char*)&(auVar6)+8));
  (this->Center).Z = dVar12 * (this->Center).Z + dVar1 * dVar9;
  dVar1 = (param_2->Offset).Z;
  dVar13 = (param_2->Offset).Y * dVar9 + dVar12 * dVar10;
  dStack_c0 = (this->Orientation).X;
  dStack_b8 = (this->Orientation).Y;
  (*(uint32_t*)((char*)&(auVar4)+8)) = SUB84(dVar13,0);
  (*(uint64_t*)&(auVar4)) = (param_2->Offset).X * dVar9 + dVar12 * dVar2;
  (*(uint32_t *)((char *)&(auVar4) + 12)) = (int)((ulonglong)dVar13 >> 0x20);
  (this->Offset).X = (double)(*(uint64_t*)&(auVar4));
  (this->Offset).Y = (double)(*(uint64_t*)((char*)&(auVar4)+8));
  (this->Offset).Z = dVar1 * dVar9 + dVar12 * (this->Offset).Z;
  (*(uint64_t*)&(auStack_a0)) = (param_2->Orientation).X;
  (*(uint64_t*)((char*)&(auStack_a0)+8)) = (param_2->Orientation).Y;
  (*(uint64_t*)&(auStack_90)) = (param_2->Orientation).Z;
  (*(uint64_t*)((char*)&(auStack_90)+8)) = (param_2->Orientation).W;
  (*(uint64_t*)&(auStack_80)) = (this->Orientation).Z;
  (*(uint64_t*)((char*)&(auStack_80)+8)) = (this->Orientation).W;
  (*(uint32_t*)((char*)&(auStack_50)+8)) = (*(uint32_t*)((char*)&(auStack_a0)+8));
  (*(uint64_t*)&(auStack_50)) = (*(uint64_t*)((char*)&(auStack_a0)+8));
  (*(uint32_t *)((char *)&(auStack_50) + 12)) = (*(uint32_t *)((char *)&(auStack_a0) + 12));
  dVar1 = (*(uint64_t*)((char*)&(auStack_90)+8));
  dVar2 = (*(uint64_t*)((char*)&(auStack_80)+8));
  dStack_60 = dStack_b8;
  dStack_58 = dStack_b8;
  dVar13 = util__SafeACos_double
                     ((*(uint64_t*)((char*)&(auStack_a0)+8)) * dStack_b8 + (*(uint64_t*)&(auStack_a0)) * dStack_c0 +
                      (*(uint64_t*)&(auStack_90)) * (*(uint64_t*)&(auStack_80)) + dVar1 * dVar2);
  uVar8 = SUB84(dVar13,0);
  uVar11 = (undefined4)((ulonglong)dVar13 >> 0x20);
  if (NAN(dVar13) == (dVar13 == 0.0)) {
    libm_sse2_sin_precise(0.0);
    dVar10 = (double)CONCAT44(uVar11,uVar8);
    dVar9 = dVar13 * (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)));
    libm_sse2_sin_precise(0.0);
    dVar13 = (1.0 - (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)))) * dVar13;
    libm_sse2_sin_precise(0.0);
    pauVar7 = (undefined1 (*) [16])&dStack_c0;
    dStack_c0 = (dVar13 * dStack_c0 + dVar9 * (double)(*(uint64_t*)&(auStack_a0))) / dVar10;
    dStack_b8 = (dVar13 * dStack_60 + dVar9 * (double)(*(uint64_t*)&(auStack_50))) / dVar10;
    dStack_b0 = (dVar13 * (double)(*(uint64_t*)&(auStack_80)) + dVar9 * (double)(*(uint64_t*)&(auStack_90))) / dVar10;
    dStack_a8 = (dVar13 * dVar2 + dVar9 * dVar1) / dVar10;
  }
  else {
    pauVar7 = &auStack_80;
    memcpy(&auStack_80, &auStack_a0, 16);
    uStack_70 = (*(uint32_t*)&(auStack_90));
    uStack_6c = (*(uint32_t*)((char*)&(auStack_90)+4));
    uStack_68 = (*(uint32_t*)((char*)&(auStack_90)+8));
    uStack_64 = (*(uint32_t *)((char *)&(auStack_90) + 12));
  }
  *(uint32_t *)&dVar13 = (uint32_t)(uintptr_t)(SUB168(*pauVar7,8));
  *(uint32_t *)&dVar1 = (uint32_t)(uintptr_t)(SUB168(*pauVar7,0));
  *(uint32_t *)&dVar10 = (uint32_t)(uintptr_t)(SUB168(pauVar7[1],0));
  *(uint32_t *)&dVar2 = (uint32_t)(uintptr_t)(SUB168(pauVar7[1],8));
  dVar10 = dVar2 * dVar2 + dVar13 * dVar13 + dVar1 * dVar1 + dVar10 * dVar10;
  libm_sse2_sqrt_precise(0.0);
  dVar10 = 1.0 / dVar10;
  dVar1 = *(double *)pauVar7[1];
  (*(uint32_t*)((char*)&(auVar5)+8)) = SUB84(dVar10 * dVar13,0);
  (*(uint64_t*)&(auVar5)) = dVar10 * *(double *)*pauVar7;
  (*(uint32_t *)((char *)&(auVar5) + 12)) = (int)((ulonglong)(dVar10 * dVar13) >> 0x20);
  (this->Orientation).X = (double)(*(uint64_t*)&(auVar5));
  (this->Orientation).Y = (double)(*(uint64_t*)((char*)&(auVar5)+8));
  (*(uint32_t*)((char*)&(auVar3)+8)) = SUB84(dVar10 * dVar2,0);
  (*(uint64_t*)&(auVar3)) = dVar10 * dVar1;
  (*(uint32_t *)((char *)&(auVar3) + 12)) = (int)((ulonglong)(dVar10 * dVar2) >> 0x20);
  (this->Orientation).Z = (double)(*(uint64_t*)&(auVar3));
  (this->Orientation).W = (double)(*(uint64_t*)((char*)&(auVar3)+8));
  return;
}





//==== 0087bce0 Color_0087bce0 ====

/* public:  util__Color__Color(float,float) */

Color *  util__Color__Color(Color *this,double param_1,double param_2)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->Value = param_1;
  this->_pad_0x0_0 = (int)&vftable_59;
  this->Hue_degrees = 0.0;
  this->Saturation = 0.0;
  this->Alpha = param_2;
  return this;
}

//==== 0087bd30 Color_0087bd30 ====

/* public:  util__Color__Color(float,float,float,float) */

Color * __thiscall
util__Color__Color__o5(Color *this,float param_1,float param_2,float param_3,float param_4)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->Hue_degrees = param_1;
  this->Saturation = param_2;
  this->Value = param_3;
  this->_pad_0x0_0 = (int)&vftable_59;
  this->Alpha = param_4;
  return this;
}

//==== 0087bd80 Color_0087bd80 ====

/* public:  util__Color__Color(enum util__SampleColor__Preset,float) */

Color *  util__Color__Color__o6(Color *this,Preset param_1,float param_2)

{
  Color *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Color local_24;
  
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_59;
  switch(param_1) {
  case Preset__White:
    fVar2 = 1.0;
    goto LAB_0087bdca;
  case Preset__Black:
    fVar2 = 0.0;
  case Preset__LightestGray:
    fVar2 = 0.9;
  case Preset__LightGray:
    fVar2 = 0.75;
  case Preset__Gray:
    fVar2 = 0.5;
  case Preset__DarkGray:
    fVar2 = 0.25;
  case Preset__DarkestGray:
    fVar2 = 0.1;
LAB_0087bdca:
    pCVar1 = (Color *)Color__Color(&local_24,fVar2,1.0);
    util__Color__operator(this,pCVar1);
    goto LAB_0087c3f9;
  case Preset__Red:
    fVar4 = 0.0;
    fVar3 = 0.0;
    goto LAB_0087be75;
  case Preset__Green:
    fVar3 = 0.0;
    fVar2 = 1.0;
    goto LAB_0087beb0;
  case Preset__Blue:
    fVar3 = 1.0;
    fVar2 = 0.0;
LAB_0087beb0:
    pCVar1 = (Color *)(uintptr_t)(FromRGB(&local_24,0.0,fVar2,fVar3,1.0));
    util__Color__operator(this,pCVar1);
  case Preset__Yellow:
    fVar4 = 0.0;
    fVar3 = 1.0;
  case Preset__Cyan:
    fVar4 = 1.0;
    fVar3 = 1.0;
    fVar2 = 0.0;
    break;
  default:
    pCVar1 = (Color *)(uintptr_t)(FromRGB(&local_24,1.0,0.0,1.0,1.0));
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&this->_pad_0x4_1,(Str_L_char_G_ *)&pCVar1->_pad_0x4_1);
    this->Hue_degrees = pCVar1->Hue_degrees;
    this->Saturation = pCVar1->Saturation;
    this->Value = pCVar1->Value;
    this->Alpha = pCVar1->Alpha;
  case Preset__Orange:
    fVar4 = 0.0;
    fVar3 = 0.4;
  case Preset__Purple:
    fVar4 = 0.83;
    fVar3 = 0.0;
    fVar2 = 0.58;
    break;
  case Preset__MildRed:
    fVar4 = 0.2;
    fVar3 = 0.2;
    fVar2 = 0.8;
    break;
  case Preset__MildGreen:
    fVar4 = 0.2;
    fVar3 = 0.8;
    fVar2 = 0.2;
    break;
  case Preset__MildBlue:
    fVar4 = 0.8;
    fVar3 = 0.2;
    fVar2 = 0.2;
    break;
  case Preset__MildYellow:
    fVar4 = 0.2;
    fVar3 = 0.8;
    fVar2 = 0.8;
    break;
  case Preset__MildCyan:
    fVar4 = 0.8;
    fVar3 = 0.8;
    fVar2 = 0.2;
    break;
  case Preset__MildViolet:
    fVar4 = 0.8;
    fVar3 = 0.2;
    fVar2 = 0.8;
    break;
  case Preset__DarkRed:
    fVar4 = 0.0;
    fVar3 = 0.0;
    fVar2 = 0.5;
    break;
  case Preset__DarkGreen:
    fVar4 = 0.0;
    fVar3 = 0.5;
    fVar2 = 0.0;
    break;
  case Preset__DarkBlue:
    fVar4 = 0.5;
    fVar3 = 0.0;
    fVar2 = 0.0;
    break;
  case Preset__DarkYellow:
    fVar4 = 0.0;
    fVar3 = 0.5;
    fVar2 = 0.5;
    break;
  case Preset__DarkCyan:
    fVar4 = 0.5;
    fVar3 = 0.5;
    fVar2 = 0.0;
    break;
  case Preset__DarkViolet:
    fVar4 = 0.5;
    fVar3 = 0.0;
    fVar2 = 0.5;
    break;
  case Preset__LightRed:
    fVar4 = 0.5;
    fVar3 = 0.5;
  case Preset__LightGreen:
    fVar4 = 0.5;
    fVar3 = 1.0;
    fVar2 = 0.5;
    break;
  case Preset__LightBlue:
    fVar4 = 1.0;
    fVar3 = 0.5;
    fVar2 = 0.5;
    break;
  case Preset__LightYellow:
    fVar4 = 0.5;
    fVar3 = 1.0;
  case Preset__LightCyan:
    fVar4 = 1.0;
    fVar3 = 1.0;
    fVar2 = 0.5;
    break;
  case Preset__LightViolet:
    fVar4 = 1.0;
    fVar3 = 0.5;
  case Preset__MediumPurple:
    fVar4 = 0.86;
    fVar3 = 0.44;
    fVar2 = 0.58;
    break;
  case Preset__DarkOrange:
    fVar4 = 0.0;
    fVar3 = 0.4;
    fVar2 = 0.8;
    break;
  case Preset__Tan:
    fVar4 = 0.55;
    fVar3 = 0.71;
    fVar2 = 0.82;
    break;
  case Preset__SkyBlue:
    fVar4 = 1.0;
    fVar3 = 0.8;
    fVar2 = 0.52;
    break;
  case Preset__DarkestBlue:
    fVar4 = 0.1;
    fVar3 = 0.0;
    fVar2 = 0.0;
    break;
  case Preset__Bronze:
    fVar4 = 0.196;
    fVar3 = 0.498;
    fVar2 = 0.804;
    break;
  case Preset__Silver:
    fVar4 = 0.753;
    fVar3 = 0.753;
    fVar2 = 0.753;
    break;
  case Preset__Gold:
    fVar4 = 0.0;
    fVar3 = 0.843;
LAB_0087be75:
    fVar2 = 1.0;
    break;
  case Preset__Platinum:
    fVar4 = 0.886;
    fVar3 = 0.894;
    fVar2 = 0.898;
    break;
  case Preset__SlateGray:
    fVar4 = 0.565;
    fVar3 = 0.502;
    fVar2 = 0.439;
  }
  pCVar1 = (Color *)(uintptr_t)(FromRGB(&local_24,fVar2,fVar3,fVar4,1.0));
  util__Color__operator(this,pCVar1);
LAB_0087c3f9:
  local_24._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_24._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_24._pad_0x4_1);
  }
  this->Alpha = param_2;
  return this;
}

//==== 0087c4d0 Color_0087c4d0 ====

/* public:  util__Color__Color(void) */

Color * __thiscall util__Color__Color__o7(Color *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_59;
  this->Hue_degrees = 0.0;
  this->Saturation = 0.0;
  this->Value = 0.0;
  this->Alpha = 0.0;
  return this;
}

//==== 0087c510 operator__0087c510 ====

/* public: struct util__Color & __thiscall util__Color__operator(struct util__Color &&) */

Color * __thiscall util__Color__operator(Color *this,Color *param_1)

{
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)&this->_pad_0x4_1,(Str_L_char_G_ *)&param_1->_pad_0x4_1);
  this->Hue_degrees = param_1->Hue_degrees;
  this->Saturation = param_1->Saturation;
  this->Value = param_1->Value;
  this->Alpha = param_1->Alpha;
  return this;
}

//==== 0087c550 operator___0087c550 ====


/* public: bool const __thiscall util__Color__operator__o5(struct util__Color const &)const  */

bool __thiscall util__Color__operator__o5(Color *this,Color *param_1)

{
  if (((((NAN(this->Hue_degrees) || NAN(param_1->Hue_degrees)) !=
         (this->Hue_degrees == param_1->Hue_degrees)) &&
       ((NAN(this->Saturation) || NAN(param_1->Saturation)) !=
        (this->Saturation == param_1->Saturation))) &&
      ((NAN(this->Value) || NAN(param_1->Value)) != (this->Value == param_1->Value))) &&
     ((NAN(this->Alpha) || NAN(param_1->Alpha)) != (this->Alpha == param_1->Alpha))) {
    return true;
  }
  return false;
}





//==== 0087c5a0 operator___0087c5a0 ====


/* public: bool const __thiscall util__Color__operator__o7(struct util__Color const &)const  */

bool __thiscall util__Color__operator__o7(Color *this,Color *param_1)

{
  if (((((NAN(this->Hue_degrees) || NAN(param_1->Hue_degrees)) !=
         (this->Hue_degrees == param_1->Hue_degrees)) &&
       ((NAN(this->Saturation) || NAN(param_1->Saturation)) !=
        (this->Saturation == param_1->Saturation))) &&
      ((NAN(this->Value) || NAN(param_1->Value)) != (this->Value == param_1->Value))) &&
     ((NAN(this->Alpha) || NAN(param_1->Alpha)) != (this->Alpha == param_1->Alpha))) {
    return false;
  }
  return true;
}





//==== 0087c5f0 operator__0087c5f0 ====

/* public: struct util__Color const __thiscall util__Color__operator__o6(float)const  */

Color * __thiscall util__Color__operator__o6(Color *this,Color *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = this->Value * param_1;
  fVar1 = this->Hue_degrees;
  fVar2 = this->Saturation;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar3 = this->Alpha;
  __return_storage_ptr__->_pad_0x4_1 = 0;
  __return_storage_ptr__->_pad_0x8_2 = 0;
  __return_storage_ptr__->_pad_0xc_3 = 0;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_59;
  __return_storage_ptr__->Hue_degrees = fVar1;
  __return_storage_ptr__->Saturation = fVar2;
  __return_storage_ptr__->Alpha = fVar3;
  __return_storage_ptr__->Value = fVar4;
  return __return_storage_ptr__;
}

//==== 0087c660 AlphaScaled ====

/* public: struct util__Color __thiscall util__Color__AlphaScaled(float)const  */

Color * __thiscall util__Color__AlphaScaled(Color *this,Color *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = this->Alpha;
  fVar2 = this->Hue_degrees;
  fVar3 = this->Saturation;
  fVar4 = this->Value;
  __return_storage_ptr__->_pad_0x4_1 = 0;
  __return_storage_ptr__->_pad_0x8_2 = 0;
  __return_storage_ptr__->_pad_0xc_3 = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_59;
  __return_storage_ptr__->Hue_degrees = fVar2;
  __return_storage_ptr__->Saturation = fVar3;
  __return_storage_ptr__->Value = fVar4;
  __return_storage_ptr__->Alpha = fVar1 * param_1;
  return __return_storage_ptr__;
}

//==== 0087c6c0 Darken ====

/* public: struct util__Color __thiscall util__Color__Darken(float)const  */

Color * __thiscall util__Color__Darken(Color *this,Color *__return_storage_ptr__,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (((0.0 < param_1) || (param_1 < 1.0)) && ((1.0 < param_1 || (param_1 < 0.0)))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\color.cpp",0x62,
              "IsSaturated(Percent)",(char *)0x0);
    DebugBreak();
  }
  fVar1 = this->Hue_degrees;
  fVar4 = (1.0 - param_1) * this->Value;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar2 = this->Alpha;
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  fVar3 = this->Saturation;
  __return_storage_ptr__->_pad_0x4_1 = 0;
  __return_storage_ptr__->_pad_0x8_2 = 0;
  __return_storage_ptr__->_pad_0xc_3 = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_59;
  __return_storage_ptr__->Hue_degrees = fVar1;
  __return_storage_ptr__->Saturation = fVar3;
  __return_storage_ptr__->Value = fVar4;
  __return_storage_ptr__->Alpha = fVar2;
  return __return_storage_ptr__;
}

