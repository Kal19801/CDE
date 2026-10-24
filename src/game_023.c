// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 0081b9c0 LoadRadialLocation ====

/* private: static void __cdecl UIShader__LoadRadialLocation(void) */

void __cdecl UIShader__LoadRadialLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "Axis__Radial";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->RadialRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  if ((pUVar1->RadialRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Axis__Radial.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pUVar1 = UIShader__GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 0x60))((int)&uStack_8 + 3);
  return;
}

//==== 0081ba30 LoadTotalTransformMatrixLocation_0081ba30 ====

/* private: static void __cdecl UIShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl UIShader__LoadTotalTransformMatrixLocation(void)

{
  UIShader *pUVar1;
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
  
  pUVar1 = UIShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pUVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x81ba5b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  pUVar1 = UIShader__GetStatic();
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
  (**(code **)(pUVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0081ba70 LoadUISizeLocation ====

/* private: static void __cdecl UIShader__LoadUISizeLocation(void) */

void __cdecl UIShader__LoadUISizeLocation(void)

{
  UIShader *pUVar1;
  UIShader *pUVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pUVar1 = UIShader__GetStatic();
  pcVar4 = "UISize";
  pUVar2 = UIShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pUVar2->_pad_0x4_1,pcVar4);
  (pUVar1->UISizeRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  if ((pUVar1->UISizeRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UISize.");
    DebugBreak();
  }
  pUVar1 = UIShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pUVar1->_pad_0x0_0 + 0x5c))(&local_c);
  return;
}

//==== 0081bb00 MouseDown_0081bb00 ====


/* public: virtual bool __thiscall UIButton__MouseDown(struct InputModifiers const &,struct
   util__Vec2_L_double_G_) */

bool __thiscall UIButton__MouseDown(UIButton *this,InputModifiers *param_1,Vec3_L_double_G_ param_2)

{
  return true;
}





//==== 0081bbc0 PartialResetState_0081bbc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall UIShader__PartialResetState(void)const  */

void __thiscall UIShader__PartialResetState(UIShader *this)

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

//==== 0081fdc0 SetAll_0081fdc0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Delegate_L_void_G__G__G__G___SetAll(struct util__tuple2_L_class_util__Str_L_char_G__Cclassutil__Darray_L_classutil__Delegate_L_void_G__G__G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Darray_class_util__Delegate_void_________SetAll(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Delegate_L_void_G___G___G___G_
         *this,tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Delegate_L_void_G___G___G_
               *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != (Str_L_char_G_ *)((int)this_00 + *(int *)(this + 8) * 0x1c)) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      Darray_L_class_util__Delegate_L_void_G___G___op_assign
                ((Darray_L_class_util__Delegate_L_void_G___G_ *)(this_00 + 1),
                 (Darray_L_class_util__Delegate_L_void_G___G_ *)(param_1 + 0xc));
      this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
  }
  return;
}





//==== 0081fe20 SetBorders ====

/* public: virtual void __thiscall UIShader__SetBorders(bool const &)const  */

void __thiscall UIShader__SetBorders(UIShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BordersRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 0081fed0 SetEmbossed ====

/* public: virtual void __thiscall UIShader__SetEmbossed(bool const &)const  */

void __thiscall UIShader__SetEmbossed(UIShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->EmbossedRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 0081ff80 SetFarPlane_0081ff80 ====

/* public: virtual void  UIShader__SetFarPlane(float const &)const  */

void  UIShader__SetFarPlane(UIShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820010 SetFarPlane_00820010 ====

/* public: virtual void  UIShader__SetFarPlane(double const &)const  */

void  UIShader__SetFarPlane__o3(UIShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 008200a0 SetGradientAmount ====

/* public: virtual void  UIShader__SetGradientAmount(float const &)const  */

void  UIShader__SetGradientAmount(UIShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->GradientAmountRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820130 SetGradientAmount_00820130 ====

/* public: virtual void  UIShader__SetGradientAmount(double const &)const  */

void  UIShader__SetGradientAmount__o3(UIShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->GradientAmountRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 008201c0 SetGradientAmountDefault ====

/* private: static void __cdecl UIShader__SetGradientAmountDefault(void) */

void __cdecl UIShader__SetGradientAmountDefault(void)

{
  UIShader *pUVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pUVar1 = UIShader__GetStatic();
  (**(code **)(pUVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 008201e0 SetInverseModelMatrix_008201e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetInverseModelMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  UIShader__SetInverseModelMatrix(UIShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 008202a0 SetInverseModelMatrix_008202a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetInverseModelMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  UIShader__SetInverseModelMatrix__o3(UIShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820390 SetInverseModelMatrixDefault_00820390 ====

/* private: static void __cdecl UIShader__SetInverseModelMatrixDefault(void) */

void __cdecl UIShader__SetInverseModelMatrixDefault(void)

{
  UIShader *pUVar1;
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
  
  pUVar1 = UIShader__GetStatic();
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
  (**(code **)(pUVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 00820470 SetModelMatrix_00820470 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  UIShader__SetModelMatrix(UIShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820530 SetModelMatrix_00820530 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void  UIShader__SetModelMatrix__o3(UIShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820620 SetModelMatrixDefault_00820620 ====

/* private: static void __cdecl UIShader__SetModelMatrixDefault(void) */

void __cdecl UIShader__SetModelMatrixDefault(void)

{
  UIShader *pUVar1;
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
  
  pUVar1 = UIShader__GetStatic();
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
  (**(code **)(pUVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00820700 SetNearPlane_00820700 ====

/* public: virtual void  UIShader__SetNearPlane(float const &)const  */

void  UIShader__SetNearPlane(UIShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820790 SetNearPlane_00820790 ====

/* public: virtual void  UIShader__SetNearPlane(double const &)const  */

void  UIShader__SetNearPlane__o3(UIShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820820 SetNormalMatrix_00820820 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  UIShader__SetNormalMatrix(UIShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 008208e0 SetNormalMatrix_008208e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_ const
   &)const  */

void  UIShader__SetNormalMatrix__o3(UIShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    *(uint32_t *)&local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820a00 SetRadial ====

/* public: virtual void __thiscall UIShader__SetRadial(bool const &)const  */

void __thiscall UIShader__SetRadial(UIShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RadialRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820ab0 SetTotalTransformMatrix_00820ab0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  UIShader__SetTotalTransformMatrix(UIShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820b70 SetTotalTransformMatrix_00820b70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  UIShader__SetTotalTransformMatrix__o3(UIShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820c60 SetTotalTransformMatrixDefault_00820c60 ====

/* private: static void __cdecl UIShader__SetTotalTransformMatrixDefault(void) */

void __cdecl UIShader__SetTotalTransformMatrixDefault(void)

{
  UIShader *pUVar1;
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
  
  pUVar1 = UIShader__GetStatic();
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
  (**(code **)(pUVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 00820d40 SetUISize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetUISize(struct util__Vec2_L_float_G_ const &)const  */

void  UIShader__SetUISize(UIShader *this,Vec3_L_float_G_* param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UISizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820df0 SetUISize_00820df0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  UIShader__SetUISize(struct util__Vec2_L_double_G_ const &)const  */

void  UIShader__SetUISize__o3(UIShader *this,Vec3_L_double_G_* param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UISizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x38);
  }
  return;
}

//==== 00820eb0 SetUISizeDefault ====

/* private: static void __cdecl UIShader__SetUISizeDefault(void) */

void __cdecl UIShader__SetUISizeDefault(void)

{
  UIShader *pUVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  pUVar1 = UIShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pUVar1->_pad_0x0_0 + 0x5c))(&local_c);
  return;
}

//==== 00820ef0 Setup_00820ef0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall UIShader__Setup(void) */

bool __thiscall UIShader__Setup(UIShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  UIShader *pUVar2;
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
  local_28.Length = 0;
  local_34.Data = (char *)0x0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  this->IsReadyToUse = false;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  util__Str_char___Str_char(&local_1c,&local_34);
  util__Str_char___operator__o10(&local_1c,&this->AdditionalPreprocessor);
  util__Str_char___Str_char(&local_28,&local_1c);
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  util__Str_char___Str_char(&local_1c,"TexColor");
  util__Str_char___Str_char(&local_34,"UI");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_1c,&local_28);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  if (bVar1) {
    pUVar2 = UIShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pUVar2);
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
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  return bVar1;
}

//==== 008216b0 operator__008216b0 ====


/* public: class util__Darray_L_structCombatNotification_G_ &  util__Darray_struct_CombatNotification___operator(class util__Darray_L_structCombatNotification_G_ const &) */

Darray_L_struct_CombatNotification_G_ * 
util__Darray_struct_CombatNotification___operator
          (Darray_L_struct_CombatNotification_G_ *this,Darray_L_struct_CombatNotification_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_CombatNotification_G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_CombatNotification_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar8 = *(uint *)(this + 8);
  if ((int)uVar8 < 0) {
    param_1 = (Darray_L_struct_CombatNotification_G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar8 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar8) {
    param_1 = (Darray_L_struct_CombatNotification_G_ *)0x3fffffff;
    SetSize(this,(int *)&param_1);
    uVar8 = *(uint *)(this + 8);
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar10 < (int)uVar8) {
    if (uVar10 == 0) {
      *(uint *)(this + 0xc) = uVar8;
      uVar10 = uVar8;
    }
    if ((int)uVar10 < (int)uVar8) {
      do {
        uVar10 = uVar10 * 2;
      } while ((int)uVar10 < (int)uVar8);
      *(uint *)(this + 0xc) = uVar10;
    }
    if (0x3fffffff < (int)uVar10) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar10 = 0x3fffffff;
    }
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar10 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar7 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x20 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x20));
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else if (uVar10 != 0) {
      puVar9 = puVar7 + 2;
      do {
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined8 *)(puVar9 + 2) = 0;
        puVar9[4] = 0;
        uVar10 = uVar10 - 1;
        puVar9 = puVar9 + 8;
      } while (uVar10 != 0);
      *(undefined4 **)(this + 4) = puVar7;
      goto LAB_008217ef;
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_008217ef:
  puVar9 = *(undefined4 **)(pDVar5 + 4);
  if (puVar9 != puVar9 + *(int *)(pDVar5 + 8) * 8) {
    do {
      uVar2 = puVar9[1];
      uVar3 = puVar9[2];
      uVar4 = puVar9[3];
      *puVar7 = *puVar9;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar1 = puVar9 + 4;
      uVar2 = puVar9[5];
      uVar3 = puVar9[6];
      uVar4 = puVar9[7];
      puVar9 = puVar9 + 8;
      puVar7[4] = *puVar1;
      puVar7[5] = uVar2;
      puVar7[6] = uVar3;
      puVar7[7] = uVar4;
      puVar7 = puVar7 + 8;
    } while (puVar9 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x20 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 00821830 scalar_deleting_destructor_00821830 ====


/* public: virtual void * __thiscall util__Darray_L_structCombatNotification_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_CombatNotification____scalar_deleting_destructor
          (Darray_L_struct_CombatNotification_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_544;
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





//==== 008218c0 CheckSize_008218c0 ====


/* private: bool  util__Darray_L_structCombatNotification_G___CheckSize(int) */

bool 
util__Darray_struct_CombatNotification___CheckSize
          (Darray_L_struct_CombatNotification_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar11 = -1 < (int)uVar7;
  bVar2 = !bVar11;
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
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar9) {
    return bVar2 && bVar11;
  }
  if (uVar9 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar9 = uVar7;
  }
  if ((int)uVar9 < (int)uVar7) {
    do {
      uVar9 = uVar9 * 2;
    } while ((int)uVar9 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar9;
  }
  if (0x3fffffff < (int)uVar9) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar9 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x20 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar9 * 0x20));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar9 != 0) {
    puVar6 = puStack_c + 2;
    do {
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)(puVar6 + 2) = 0;
      puVar6[4] = 0;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 8;
    } while (uVar9 != 0);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar8 = puVar6;
    puVar10 = puStack_c;
    if (puVar6 != puVar6 + param_1 * 8) {
      do {
        if (puVar10 == puStack_c + iVar1 * 8) break;
        uVar3 = puVar8[1];
        uVar4 = puVar8[2];
        uVar5 = puVar8[3];
        *puVar10 = *puVar8;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        puVar6 = puVar8 + 4;
        uVar3 = puVar8[5];
        uVar4 = puVar8[6];
        uVar5 = puVar8[7];
        puVar8 = puVar8 + 8;
        puVar10[4] = *puVar6;
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar6 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 8;
      } while (puVar8 != puVar6 + param_1 * 8);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00821a30 Clear_00821a30 ====


/* public: virtual void  util__Darray_L_structCombatNotification_G___Clear(void) */

void __thiscall
util__Darray_struct_CombatNotification___Clear(Darray_L_struct_CombatNotification_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00821a50 CompareNotifications ====


/* public: static bool __cdecl CombatNotifier__CompareNotifications(struct CombatNotification const
   &,struct CombatNotification const &) */

bool __cdecl
CombatNotifier__CompareNotifications(CombatNotification *param_1,CombatNotification *param_2)

{
  int TVar1;
  bool bVar2;
  bool bVar3;
  
  TVar1 = param_1->Type;
  if (((((TVar1 == ArmorDamaged) || (TVar1 == OutOfFuel)) || (TVar1 == OutOfPower)) ||
      ((TVar1 == Disarmed || (TVar1 == CrewKilled)))) ||
     ((TVar1 == SpacecraftDestroyed || (TVar1 == ModuleDestroyed)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((TVar1 == WeaponFiring) || (TVar1 == CarrierLaunching)) || (TVar1 == ModuleDestroyed)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((TVar1 == param_2->Type) && ((param_1->ShipType == param_2->ShipType || (!bVar2)))) &&
     (((param_1->ModuleType == param_2->ModuleType || (!bVar3)) &&
      (param_1->FactionType == param_2->FactionType)))) {
    return true;
  }
  return false;
}





//==== 00821c20 GetClassID_00821c20 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual unsigned long  BalloonPopupCombatPayload__GetClassID(void)const  */

ulong BalloonPopupCombatPayload__GetClassID(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3d53e1be__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3d53e1be__thread_safe_static_guard_0__);
    if ( cde_l2_3d53e1be__thread_safe_static_guard_0__ == -1) {
       cde_l2_c528cb33_ID = util__GetHash("BalloonPopupCombatPayload");
      _Init_thread_footer(& cde_l2_3d53e1be__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_c528cb33_ID;
}





//==== 00821c80 GetIcon_00821c80 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void (__cdecl* BalloonPopupCombatPayload__GetIcon(void)const )(void) */

_func_void * BalloonPopupCombatPayload__GetIcon(void)

{
  return Icons__Selection;
}





//==== 00821e70 GetTooltip_00821e70 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual class util__Str_L_char_G_  BalloonPopupCombatPayload__GetTooltip(void)const
    */

Str_L_char_G_ * BalloonPopupCombatPayload__GetTooltip(Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this;
  Str_L_char_G_ *pSVar1;
  void *local_34 [3];
  void *local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_1c,"SelectAffectedShipModule Tooltip");
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this = (LocStr *)util__LocStr__LocStr((LocStr *)local_34,&local_1c,&local_10);
  pSVar1 = util__LocStr__operator__o3(this);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
  if (local_28 != (void *)0x0) {
    port_op_delete(local_28);
    local_28 = (void *)0x0;
  }
  if (local_34[0] != (void *)0x0) {
    port_op_delete(local_34[0]);
    local_34[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return __return_storage_ptr__;
}





//==== 008220c0 OnDestroyPreviousPopups_008220c0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool  BalloonPopupCombatPayload__OnDestroyPreviousPopups(class
   util__SharedPtr_L_structBalloonPopup_G_ &)const  */

bool BalloonPopupCombatPayload__OnDestroyPreviousPopups(SharedPtr_L_BalloonPopup_G_ *param_1)

{
  ReferenceController *this;
  BalloonPopupPayloadInterface BVar1;
  BalloonPopupPayloadInterface BVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  BalloonPopupPayloadInterface *pBVar9;
  CombatNotification local_2c;
  BalloonPopupPayloadInterface local_c;
  int local_8;
  
  this = (param_1->Pointer->Payload).Controller;
  pBVar9 = (param_1->Pointer->Payload).Pointer;
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this);
    if (this != (ReferenceController *)0x0) {
      bVar6 = util__ReferenceController__IsDataStillValid(this);
      if (!bVar6) {
        pBVar9 = (BalloonPopupPayloadInterface *)0x0;
      }
    }
  }
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c34acbeb__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3577effc__thread_safe_static_guard_0__);
    if ( cde_l2_3577effc__thread_safe_static_guard_0__ == -1) {
       cde_l2_f1c984da_ID = util__GetHash("BalloonPopupCombatPayload");
      _Init_thread_footer(& cde_l2_3577effc__thread_safe_static_guard_0__);
    }
  }
  uVar5 =  cde_l2_f1c984da_ID;
  uVar8 = (**(code **)(uintptr_t)*(undefined4 *)(void *)&(*pBVar9))();
  if (uVar8 == uVar5) {
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__AddWeakReference(this);
      bVar6 = util__ReferenceController__IsDataStillValid(this);
      if (!bVar6) {
        pBVar9 = (BalloonPopupPayloadInterface *)0x0;
      }
    }
    BVar1 = pBVar9[3];
    local_2c.Time_s = *(double *)(pBVar9 + 6);
    BVar2 = pBVar9[2];
    local_2c.ModuleType = *(Module **)(pBVar9 + 4);
    local_2c.FactionType = *(Faction **)(pBVar9 + 5);
    local_2c.Count = *(int *)(pBVar9 + 8);
    local_2c.Type = (*(int *)&BVar2);
    local_2c.ShipType = *(CraftBlueprint **)&(BVar1);
    local_c = *(BalloonPopupPayloadInterface *)&(local_2c.FactionType);
    if (this != (ReferenceController *)0x0) {
      util__ReferenceController__ReleaseWeakReference(this);
    }
    iVar3 = *(int *)(local_8 + 8);
    if (((((iVar3 == 2) || (iVar3 == 7)) || (iVar3 == 8)) || ((iVar3 == 3 || (iVar3 == 4)))) ||
       (iVar3 == 5)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if ((iVar3 == 7) || (iVar3 == 8)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    if ((*(undefined4 *)(local_8 + 0xc) == *(undefined4 *)&BVar1) &&
       (*(undefined4 *)(local_8 + 0x14) == *(undefined4 *)&local_c)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((((!bVar6) || (*(undefined4 *)&BVar2 != (undefined4)0x6)) &&
        ((!bVar7 || (*(undefined4 *)&BVar2 != (undefined4)0x2)))) || (bVar6 = true, !bVar4)) {
      bVar6 = false;
    }
    bVar7 = CombatNotifier__CompareNotifications((CombatNotification *)(local_8 + 8),&local_2c);
    if ((bVar7) || (bVar6)) {
      bVar6 = false;
      goto LAB_0082220d;
    }
  }
  bVar6 = true;
LAB_0082220d:
  if (this != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this);
  }
  return bVar6;
}





//==== 00822270 SetSize_00822270 ====


/* private: void  util__Darray_L_structCombatNotification_G___SetSize(int const &) */

void 
util__Darray_struct_CombatNotification___SetSize
          (Darray_L_struct_CombatNotification_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_8;
  
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
      puVar3[7] = uStack_8;
      puVar3 = puVar3 + 8;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x20 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 00822aa0 MethodCaller__public__void___thiscall_OrderButton__OnClick_void__ ====


/* public: static void __cdecl util__DelegateFactory_L_structOrderButton_Cvoid_G___MethodCaller_L__public__void__thiscallOrderButton__OnClick_void__G_(void *) */

void __cdecl
util__DelegateFactory_struct_OrderButton_void___MethodCaller__public__void___thiscall_OrderButton__OnClick_void(void *param_1)

{
                    /* WARNING: Load optimize_e__size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00822aa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(uintptr_t)(*(int *)param_1+ 0xcc))();
  return;
}





//==== 00822ac0 MethodCallerConst__private__class_util__Str_char____thiscall_OrderButton__GetFullInfo_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structOrderButton_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_OrderButton__GetFullInfo_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_OrderButton_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_OrderButton__GetFullInfo_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(OrderButton__GetFullInfo(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00822b00 MethodCallerConst__private__void____cdecl___thiscall_OrderButton__GetImage_void_const__void__ ====


/* public: static void (__cdecl*__cdecl util__DelegateFactory_L_structOrderButton_Cvoid____cdecl_P__void__G___MethodCallerConst_L__private_void___cdecl_P__thiscall_OrderButton__GetImage_void_const__void__G_(void const * const))(void) */

_func_void * __cdecl
util__DelegateFactory_struct_OrderButton_void____cdecl___void____MethodCallerConst__private__void____cdecl___thiscall_OrderButton__GetImage_void_const__void
          (void *param_1)

{
  undefined8 stack0xfffffff0;
  BasicInfo *pBVar1;
  
  pBVar1 = OrderInfo__GetOrderInfo((BasicInfo *)&stack0xfffffff0,*(int *)((int)param_1 + 0x1d0));
  return (_func_void *)(pBVar1->Name).Data;
}





//==== 00822b30 MethodCallerConst__private__class_util__Str_char____thiscall_OrderButton__GetTitle_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structOrderButton_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_OrderButton__GetTitle_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_OrderButton_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_OrderButton__GetTitle_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(OrderButton__GetTitle(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 008230e0 BroadsideEnabled ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: static bool __cdecl OrderButton__BroadsideEnabled(class util__WeakPtr_L_class_ControllableComponent_G_) */

bool OrderButton__BroadsideEnabled(WeakPtr_L_ControllableComponent_G_ param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_1.Controller != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_1.Controller), !bVar3)) {
    param_1.Pointer = (ControllableComponent *)0x0;
  }
  if (((ReferenceController *)(param_1.Pointer)->_pad_0x8_2 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)(param_1.Pointer)->_pad_0x8_2), !bVar3)) {
    (param_1.Pointer)->_pad_0x4_1 = 0;
  }
  iVar2 = (param_1.Pointer)->_pad_0x4_1;
  Body__GetSpacecraftComponent_Memoize();
  if (*(char *)(iVar2 + 0x2c) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((*(ReferenceController **)(iVar2 + 0x28) != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 0x28)),
     !bVar3)) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  SpacecraftComponent__HasWeaponsLeft_Memoize();
  if (*(char *)(iVar2 + 0x21) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x20);
  if (param_1.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.Controller);
  }
  return (bool)uVar1;
}

//==== 00823b60 GetControllersOfShips ====


/* private: static class util__Darray_L_classutil__WeakPtr_L_classControllableComponent_G__G_ __cdecl
   OrderButton__GetControllersOfShips(class util__Darray_L_classutil__WeakPtr_L_class_SpacecraftComponent_G__G_ const &) */

void __cdecl
OrderButton__GetControllersOfShips(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this;
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_stack_00000008;
  int iStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  ReferenceController *pRStack_18;
  char cStack_14;
  int iStack_10;
  undefined1 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piStack_20 = in_stack_00000008;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uStack_c = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  util__Darray_class_util__WeakPtr_class_Body_____Darray_class_util__WeakPtr_class_Body
            ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar2);
  iStack_10 = 0;
  iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_10 < iVar2) {
    do {
      uVar3 = (**(code **)*in_stack_00000008)(&iStack_10);
      FUN_00822d60(&uStack_1c,uVar3);
      this_00 = pRStack_18;
      if (cStack_14 != '\0') {
        iVar2 = *(int *)(param_1 + 8);
        iStack_24 = iVar2 + 1;
        util__Darray_class_util__WeakPtr_class_Body_____SetSize
                  ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,&iStack_24);
        bVar1 = util__Darray_class_util__WeakPtr_class_Body_____CheckSize
                          ((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)param_1,iVar2);
        in_stack_00000008 = piStack_20;
        if (bVar1) {
          this = *(ReferenceController **)(*(int *)(param_1 + 4) + -4 + *(int *)(param_1 + 8) * 8);
          iVar2 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 8;
          *(undefined4 *)(iVar2 + -8) = uStack_1c;
          *(ReferenceController **)(iVar2 + -4) = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddWeakReference(this_00);
          }
          in_stack_00000008 = piStack_20;
          if (this != (ReferenceController *)0x0) {
            util__ReferenceController__ReleaseWeakReference(this);
            in_stack_00000008 = piStack_20;
          }
        }
      }
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      iStack_10 = iStack_10 + 1;
      iVar2 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_10 < iVar2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00824050 GetOrderButtonInfo ====


/* public: static struct OrderInfo__BasicInfo __cdecl OrderInfo__GetOrderButtonInfo(enum
   Order__Type) */

BasicInfo * __cdecl OrderInfo__GetOrderButtonInfo(BasicInfo *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int TVar2;
  code *pcVar3;
  
  iVar1 = 0;
  if (0 < DAT_00988580) {
    do {
      switch(iVar1) {
      case 0:
        TVar2 = GroupType__None;
        pcVar3 = (long long int (*)())(Icons__SmallCancel);
        break;
      case 1:
        TVar2 = OrderType__Move;
        pcVar3 = (long long int (*)())(Icons__ForwardArrow);
        break;
      case 2:
        TVar2 = OrderType__Orient;
        pcVar3 = (code *)(uintptr_t) Icons__Reorient;
        break;
      case 3:
        TVar2 = AIOrder__Roll;
        pcVar3 = (code *)(uintptr_t) Icons__Roll;
        break;
      case 4:
        TVar2 = AIOrder__Homing;
        pcVar3 = (code *)(uintptr_t) Icons__Target;
        break;
      case 5:
        TVar2 = AIOrder__Scatter;
        pcVar3 = (long long int (*)())(Icons__Scatter);
        break;
      case 6:
        TVar2 = AIOrder__Broadside;
        pcVar3 = (long long int (*)())(Icons__Broadside);
        break;
      case 7:
        TVar2 = AIOrder__NoseForward;
        pcVar3 = (long long int (*)())(Icons__NoseForward);
        break;
      default:
        TVar2 = GroupType__None;
        pcVar3 = (code *)0x0;
      }
      if (TVar2 == param_1) {
        __return_storage_ptr__->OrderType = TVar2;
        __return_storage_ptr__->ButtonType = TVar2;
        (__return_storage_ptr__->Name).Data = (char *)pcVar3;
        return __return_storage_ptr__;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_00988580);
  }
  __return_storage_ptr__->OrderType = GroupType__None;
  __return_storage_ptr__->ButtonType = OrderButtonType__Cancel;
  (__return_storage_ptr__->Name).Data = (char *)0x0;
  return __return_storage_ptr__;
}





//==== 008242f0 GetOrderInUseString ====


/* public: static class util__Str_L_char_G_ __cdecl OrderInfo__GetOrderInUseString(enum
   OrderInfoTypes__Type) */

Str_L_char_G_ * __cdecl OrderInfo__GetOrderInUseString(Str_L_char_G_ *__return_storage_ptr__,int param_1)

{
  BasicInfo *pBVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  Str_L_char_G_ *pSVar4;
  LocStr *this;
  void *apvStack_50 [3];
  void *pvStack_44;
  BasicInfo BStack_38;
  int TStack_8;
  
  BStack_38.Tooltip.Data = (char *)0x0;
  BStack_38.Tooltip.Capacity = 0;
  BStack_38.Tooltip.Length = 0;
  pBVar1 = (BasicInfo *)(uintptr_t)(GetOrderInfo(&BStack_38,param_1));
  TStack_8 = pBVar1->ButtonType;
  pSVar2 = (Str_L_char_G_ *)(*(code *)DAT_00988438)(&TStack_8);
  util__Str_char___Str_char(&BStack_38.InUseString,pSVar2);
  pSVar2 = &BStack_38.Tooltip;
  pcVar3 = "";
  if (0 < BStack_38.InUseString.Capacity) {
    pcVar3 = BStack_38.InUseString.Data;
  }
  pSVar4 = util__Printf((Str_L_char_G_ *)&BStack_38.Name.Capacity,(wchar_t*)("Orders %s Use"),pcVar3);
  this = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_50,pSVar4,pSVar2);
  pSVar2 = util__LocStr__operator__o3(this);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar2);
  if (pvStack_44 != (void *)0x0) {
    port_op_delete(pvStack_44);
    pvStack_44 = (void *)0x0;
  }
  if (apvStack_50[0] != (void *)0x0) {
    port_op_delete(apvStack_50[0]);
    apvStack_50[0] = (void *)0x0;
  }
  if ((void *)BStack_38.Name.Capacity != (void *)0x0) {
    port_op_delete((void *)BStack_38.Name.Capacity);
    BStack_38.Name.Capacity = 0;
  }
  if (BStack_38.InUseString.Data != (char *)0x0) {
    port_op_delete(BStack_38.InUseString.Data);
  }
  if (BStack_38.Tooltip.Data != (char *)0x0) {
    port_op_delete(BStack_38.Tooltip.Data);
  }
  return __return_storage_ptr__;
}





//==== 008243f0 GetOrderInfo ====


/* public: static struct OrderInfo__BasicInfo __cdecl OrderInfo__GetOrderInfo(enum
   OrderInfoTypes__Type) */

BasicInfo * __cdecl OrderInfo__GetOrderInfo(BasicInfo *__return_storage_ptr__,int param_1)

{
  switch(param_1) {
  case (int)(uintptr_t)((int)(uintptr_t)(OrderButtonType__Cancel)):
    (__return_storage_ptr__->Name).Data = (char *)Icons__SmallCancel;
    __return_storage_ptr__->ButtonType = OrderButtonType__Cancel;
    __return_storage_ptr__->OrderType = GroupType__None;
    return __return_storage_ptr__;
  case OrderType__Move:
    __return_storage_ptr__->OrderType = OrderType__Move;
    __return_storage_ptr__->ButtonType = OrderType__Move;
    (__return_storage_ptr__->Name).Data = (char *)Icons__ForwardArrow;
  case OrderType__Orient:
    __return_storage_ptr__->OrderType = OrderType__Orient;
    __return_storage_ptr__->ButtonType = OrderType__Orient;
    (__return_storage_ptr__->Name).Data = (char *)Icons__Reorient;
  case AIOrder__Roll:
    __return_storage_ptr__->OrderType = AIOrder__Roll;
    __return_storage_ptr__->ButtonType = AIOrder__Roll;
    (__return_storage_ptr__->Name).Data = (char *)Icons__Roll;
  case 6:
    __return_storage_ptr__->OrderType = AIOrder__Homing;
    __return_storage_ptr__->ButtonType = AIOrder__Homing;
    (__return_storage_ptr__->Name).Data = (char *)Icons__Target;
  case AIOrder__Scatter:
    __return_storage_ptr__->OrderType = AIOrder__Scatter;
    __return_storage_ptr__->ButtonType = AIOrder__Scatter;
    (__return_storage_ptr__->Name).Data = (char *)Icons__Scatter;
  case 7:
    __return_storage_ptr__->OrderType = AIOrder__Broadside;
    __return_storage_ptr__->ButtonType = AIOrder__Broadside;
    (__return_storage_ptr__->Name).Data = (char *)Icons__Broadside;
  case AIOrder__NoseForward:
    __return_storage_ptr__->OrderType = AIOrder__NoseForward;
    __return_storage_ptr__->ButtonType = AIOrder__NoseForward;
    (__return_storage_ptr__->Name).Data = (char *)Icons__NoseForward;
  default:
    (__return_storage_ptr__->Name).Data = (char *)0x0;
    __return_storage_ptr__->ButtonType = OrderButtonType__Cancel;
    __return_storage_ptr__->OrderType = GroupType__None;
  }
}





//==== 00824920 IsOrderEnabled ====


/* private: static bool __cdecl OrderButton__IsOrderEnabled(enum OrderInfoTypes__Type,class
   util__Darray_L_classutil__WeakPtr_L_classControllableComponent_G__G_ const &) */

bool __cdecl
OrderButton__IsOrderEnabled
          (int param_1,Darray_L_class_util__WeakPtr_L_class_ControllableComponent_G___G_ *param_2)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ReferenceController *pRVar6;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_1 != AIOrder__Roll) {
    if (param_1 == AIOrder__Broadside) {
      iStack_c = 0;
      iVar3 = (**(code **)(*(int *)param_2 + 0xc))();
      if (iVar3 <= iStack_c) goto LAB_00824a12;
      while( true ) {
        puVar4 = (undefined4 *)(*(code *)**(undefined4 **)param_2)(&iStack_c);
        uVar5 = *puVar4;
        pRVar6 = (ReferenceController *)puVar4[1];
        if (pRVar6 != (ReferenceController *)0x0) {
          util__ReferenceController__AddWeakReference(pRVar6);
        }
        bVar2 = BroadsideEnabled(uVar5,pRVar6);
        if (bVar2) break;
        iStack_c = iStack_c + 1;
        iVar3 = (**(code **)(*(int *)param_2 + 0xc))();
        if (iVar3 <= iStack_c) {
          uVar1 = 0;
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar1;
        }
      }
    }
LAB_00824945:
    uVar1 = 1;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar1;
  }
  iStack_c = 0;
  iVar3 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)**(undefined4 **)param_2)(&iStack_c);
      uVar5 = *puVar4;
      pRVar6 = (ReferenceController *)puVar4[1];
      if (pRVar6 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(pRVar6);
      }
      bVar2 = RollEnabled(uVar5,pRVar6);
      if (bVar2) goto LAB_00824945;
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(*(int *)param_2 + 0xc))();
    } while (iStack_c < iVar3);
  }
LAB_00824a12:
  uVar1 = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}





//==== 00824a30 RollEnabled ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: static bool __cdecl OrderButton__RollEnabled(class util__WeakPtr_L_class_ControllableComponent_G_) */

bool OrderButton__RollEnabled(WeakPtr_L_ControllableComponent_G_ param_1)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  
  if ((param_1.Controller != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(param_1.Controller), !bVar3)) {
    param_1.Pointer = (ControllableComponent *)0x0;
  }
  if (((ReferenceController *)(param_1.Pointer)->_pad_0x8_2 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid
                        ((ReferenceController *)(param_1.Pointer)->_pad_0x8_2), !bVar3)) {
    (param_1.Pointer)->_pad_0x4_1 = 0;
  }
  iVar2 = (param_1.Pointer)->_pad_0x4_1;
  Body__GetSpacecraftComponent_Memoize();
  if (*(char *)(iVar2 + 0x2c) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((*(ReferenceController **)(iVar2 + 0x28) != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid(*(ReferenceController **)(iVar2 + 0x28)),
     !bVar3)) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  iVar2 = *(int *)(iVar2 + 0x24);
  SpacecraftComponent__CanRoll_Memoize();
  if (*(char *)(iVar2 + 0x3d) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  uVar1 = *(undefined1 *)(iVar2 + 0x3c);
  if (param_1.Controller != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_1.Controller);
  }
  return (bool)uVar1;
}

//==== 00825740 MethodCallerConst__private__bool___thiscall_ShipGroupUI__CanSplitOrUnsplit_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_ShipGroupUI_Cbool_G___MethodCallerConst_L__private_bool__thiscall_ShipGroupUI__CanSplitOrUnsplit_void_const_G_(void const * const) */

bool util__DelegateFactory_L_ShipGroupUI_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ShipGroupUI__CanSplitOrUnsplit_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__CanSplitUnits();
  if (!bVar1) {
    bVar1 = ShipGroupUI__CanUnsplitUnits();
    if (!bVar1) {
      return false;
    }
  }
  return true;
}





//==== 00825780 MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetChangeOrderIconTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structShipGroupUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ShipGroupUI__GetChangeOrderIconTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ShipGroupUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetChangeOrderIconTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ShipGroupUI__GetChangeOrderIconTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 008257c0 MethodCallerConst__private__struct_util__Color___thiscall_ShipGroupUI__GetColorFromSelection_void_const__ ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Color __cdecl util__DelegateFactory_L_structShipGroupUI_Cstruct_util__Color_G___MethodCallerConst_L__private_structutil__Color__thiscall_ShipGroupUI__GetColorFromSelection_void_const_G_(void const * const) */

Color * util__DelegateFactory_L_ShipGroupUI_Cutil__Color_G___MethodCallerConst_L__private__struct_util__Color___thiscall_ShipGroupUI__GetColorFromSelection_void_const__G_
                  (Color *__return_storage_ptr__,void *param_1)

{
  Color *pCVar1;
  Color local_24;
  
  pCVar1 = (Color *)(uintptr_t)(ShipGroupUI__GetColorFromSelection(&local_24));
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const
            ((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x4_1,(Str_L_char_G_ *)&pCVar1->_pad_0x4_1);
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  __return_storage_ptr__->Hue_degrees = pCVar1->Hue_degrees;
  __return_storage_ptr__->Saturation = pCVar1->Saturation;
  __return_storage_ptr__->Value = pCVar1->Value;
  __return_storage_ptr__->Alpha = pCVar1->Alpha;
  local_24._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_24._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_24._pad_0x4_1);
  }
  return __return_storage_ptr__;
}

//==== 00825840 MethodCallerConst__private__void____cdecl___thiscall_ShipGroupUI__GetGroupOrderIcon_void_const__void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void (__cdecl*__cdecl util__DelegateFactory_L_structShipGroupUI_Cvoid____cdecl_P__void__G___MethodCallerConst_L__private_void___cdecl_P__thiscall_ShipGroupUI__GetGroupOrderIcon_void_const__void__G_(void const * const))(void) */

_func_void *
util__DelegateFactory_struct_ShipGroupUI_void____cdecl___void____MethodCallerConst__private__void____cdecl___thiscall_ShipGroupUI__GetGroupOrderIcon_void_const__void
          (void *param_1)

{
  undefined8 stack0xffffffe8;
  bool bVar1;
  BasicInfo *pBVar2;
  int TVar3;
  int local_c;
  char local_8;
  
  ShipGroupUI__GetGroupOrder();
  if (local_8 != '\0') {
    bVar1 = ShipGroupUI__AnyShipsHaveDeltaV();
    TVar3 = GroupType__None;
    if (bVar1) {
      TVar3 = local_c;
    }
    pBVar2 = OrderInfo__GetOrderButtonInfo((BasicInfo *)&stack0xffffffe8,TVar3);
    return (_func_void *)(pBVar2->Name).Data;
  }
  return Icons__MultipleOrders;
}





//==== 008258b0 MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetOverallTooltip_void_const__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structShipGroupUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ShipGroupUI__GetOverallTooltip_void_const_G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_struct_ShipGroupUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetOverallTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ SStack_10;
  
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,&SStack_10);
  return __return_storage_ptr__;
}





//==== 008258f0 MethodCallerConst__public__struct_util__Color___thiscall_ShipGroupUI__GetSelectColor_void_const__ ====

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__Color __cdecl util__DelegateFactory_L_structShipGroupUI_Cstruct_util__Color_G___MethodCallerConst_L__public_structutil__Color__thiscall_ShipGroupUI__GetSelectColor_void_const_G_(void const * const) */

Color * util__DelegateFactory_L_ShipGroupUI_Cutil__Color_G___MethodCallerConst_L__public__struct_util__Color___thiscall_ShipGroupUI__GetSelectColor_void_const__G_
                  (Color *__return_storage_ptr__,void *param_1)

{
  Color *pCVar1;
  Color local_24;
  
  pCVar1 = (Color *)(uintptr_t)(ShipGroupUI__GetSelectColor(&local_24));
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const
            ((Str_L_char_G_ *)&__return_storage_ptr__->_pad_0x4_1,(Str_L_char_G_ *)&pCVar1->_pad_0x4_1);
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_5;
  __return_storage_ptr__->Hue_degrees = pCVar1->Hue_degrees;
  __return_storage_ptr__->Saturation = pCVar1->Saturation;
  __return_storage_ptr__->Value = pCVar1->Value;
  __return_storage_ptr__->Alpha = pCVar1->Alpha;
  local_24._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_24._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_24._pad_0x4_1);
  }
  return __return_storage_ptr__;
}

//==== 008259b0 MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetSplitButtonTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structShipGroupUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ShipGroupUI__GetSplitButtonTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ShipGroupUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetSplitButtonTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ShipGroupUI__GetSplitButtonTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 008259f0 MethodCallerConst__private__void____cdecl___thiscall_ShipGroupUI__GetSplitIcon_void_const__void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void (__cdecl*__cdecl util__DelegateFactory_L_structShipGroupUI_Cvoid____cdecl_P__void__G___MethodCallerConst_L__private_void___cdecl_P__thiscall_ShipGroupUI__GetSplitIcon_void_const__void__G_(void const * const))(void) */

_func_void *
util__DelegateFactory_struct_ShipGroupUI_void____cdecl___void____MethodCallerConst__private__void____cdecl___thiscall_ShipGroupUI__GetSplitIcon_void_const__void
          (void *param_1)

{
  GroupType GVar1;
  code *pcVar2;
  
  GVar1 = ShipGroupUI__GetSplitOrder();
  pcVar2 = (long long int (*)())(Icons__BigSplit);
  if (GVar1 != GroupType__None) {
    pcVar2 = (long long int (*)())(Icons__BigJoin);
  }
  return (_func_void *)(pcVar2);
}





//==== 00825a10 MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetTargetShipTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structShipGroupUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ShipGroupUI__GetTargetShipTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ShipGroupUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetTargetShipTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ShipGroupUI__GetTargetShipTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00825a50 MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetTargetShipVerboseTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structShipGroupUI_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_ShipGroupUI__GetTargetShipVerboseTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_ShipGroupUI_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_ShipGroupUI__GetTargetShipVerboseTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(ShipGroupUI__GetTargetShipVerboseTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00825ad0 MethodCallerConst__private__bool___thiscall_ShipGroupUI__IsChangeOrderButtonVisible_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_ShipGroupUI_Cbool_G___MethodCallerConst_L__private_bool__thiscall_ShipGroupUI__IsChangeOrderButtonVisible_void_const_G_(void const * const) */

bool util__DelegateFactory_L_ShipGroupUI_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ShipGroupUI__IsChangeOrderButtonVisible_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__IsGroupAllied();
  if (bVar1) {
    bVar1 = ShipGroupUI__AreShipsNonStationary();
    if (bVar1) {
      return true;
    }
  }
  return false;
}





//==== 00825b20 MethodCallerConst__private__void___thiscall_ShipGroupUI__RenderIconAsButton_bool_bool_bool_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_struct_ShipGroupUI_Cvoid_Cbool_Cbool_Cbool_G___MethodCallerConst_L__private_void__thiscall_ShipGroupUI__RenderIconAsButton_bool_Cbool_Cbool_const_G_(void const * const,bool,bool,bool) */

void util__DelegateFactory_L_ShipGroupUI_Cvoid_Cbool_Cbool_Cbool_G___MethodCallerConst_L__private__void___thiscall_ShipGroupUI__RenderIconAsButton_bool_Cbool_Cbool_const__G_
               (void *param_1,bool param_2,bool param_3,bool param_4)

{
  util__DelegateFactory_struct_ShipGroupUI_void_bool_bool_bool___MethodCallerConst__private__void___thiscall_ShipGroupUI__RenderIconAsButton_bool_bool_bool_const(param_2,param_3,param_4);
  return;
}





//==== 00825b50 MethodCallerConst__private__bool___thiscall_ShipGroupUI__ShowPlainShipIcon_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_ShipGroupUI_Cbool_G___MethodCallerConst_L__private_bool__thiscall_ShipGroupUI__ShowPlainShipIcon_void_const_G_(void const * const) */

bool util__DelegateFactory_L_ShipGroupUI_Cbool_G___MethodCallerConst_L__private__bool___thiscall_ShipGroupUI__ShowPlainShipIcon_void_const__G_
               (void *param_1)

{
  bool bVar1;
  
  bVar1 = ShipGroupUI__ShowButtonShipIcon();
  return !bVar1;
}





//==== 00825b70 Darray_util__Darray_util__WeakPtr_SpacecraftComponent_____ ====


/* public:  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G___G__G___Darray_L_classutil__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G__G_(class
   util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G__G_ const &) */

Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ * 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this,
          Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *param_1)

{
  Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *pDVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *pDVar5;
  Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *this_00;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_452);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *)
            (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar4 = *(uint *)(this + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    this_00 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)0x0;
  }
  else {
    *puVar2 = uVar4;
    this_00 = (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)(puVar2 + 1);
    pDVar5 = this_00;
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined ***)pDVar5 = &vftable_66;
      *(uint *)(pDVar5 + 4) = 0;
      *(uint *)(pDVar5 + 8) = 0;
      *(uint *)(pDVar5 + 0xc) = 0;
      pDVar5 = pDVar5 + 0x10;
    }
  }
  *(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ **)(this + 4) = this_00;
  pDVar5 = *(Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ **)(pDVar1 + 4);
  if (pDVar5 != pDVar5 + *(int *)(pDVar1 + 8) * 0x10) {
    do {
      Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign(this_00,pDVar5);
      pDVar5 = pDVar5 + 0x10;
      this_00 = this_00 + 0x10;
    } while (pDVar5 != (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                       (*(int *)(pDVar1 + 8) * 0x10 + *(int *)(pDVar1 + 4)));
    return this;
  }
  return this;
}





//==== 00825c70 Darray_util__Darray_util__WeakPtr_SpacecraftComponent______00825c70 ====


/* public:  util__Darray_L_classutil__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G___G__G___Darray_L_classutil__Darray_L_classutil__WeakPtr_L_classSpacecraftComponent_G__G__G_(int) */

Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ * 
util__Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent_______Darray_class_util__Darray_class_util__WeakPtr_class_SpacecraftComponent__o2
          (Darray_L_class_util__Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___G_ *this,
          int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined **ppuStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  int iStack_8;
  
  *(undefined ***)this = (undefined **)(&vftable_452);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar4 = -(uint)((int)((ulonglong)(uint)param_1 * 0x10 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x10);
    piVar2 = (int *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = param_1;
      piVar2 = piVar2 + 1;
      piVar3 = piVar2;
      if (param_1 != 0) {
        do {
          *piVar3 = (int)&vftable_66;
          piVar3[1] = 0;
          piVar3[2] = 0;
          piVar3[3] = 0;
          param_1 = param_1 + -1;
          piVar3 = piVar3 + 4;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar2;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iStack_8 = 0;
      do {
        ppuStack_1c = &vftable_66;
        iStack_18 = 0;
        uStack_14 = 0;
        uStack_10 = 0;
        Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G___op_assign
                  ((Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)
                   (*(int *)(this + 4) + iStack_8),
                   (Darray_L_class_util__WeakPtr_L_class_SpacecraftComponent_G___G_ *)&ppuStack_1c);
        ppuStack_1c = &vftable_66;
        if (iStack_18 != 0) {
          iVar5 = *(int *)(iStack_18 + -4);
          piStack_c = (int *)(iStack_18 + -4);
          if (iVar5 != 0) {
            iVar6 = iStack_18 + 4 + iVar5 * 8;
            do {
              puVar1 = (undefined4 *)(iVar6 + -8);
              iVar6 = iVar6 + -8;
              iVar5 = iVar5 + -1;
              if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
                ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
              }
            } while (iVar5 != 0);
            iVar5 = *piStack_c;
          }
          port_op_delete(piStack_c,iVar5 * 8 + 4);
        }
        param_1 = param_1 + 1;
        iStack_8 = iStack_8 + 0x10;
      } while (param_1 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 00829b20 GetTargetShipTooltip ====


/* WARNING: Removing unreachable block (ram,0x00829c4a) */
/* WARNING: Removing unreachable block (ram,0x00829c57) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_  ShipGroupUI__GetTargetShipTooltip(void)const  */

Str_L_char_G_ * ShipGroupUI__GetTargetShipTooltip__o3(Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  LocStr *pLVar10;
  Str_L_char_G_ *pSVar11;
  GroupType GVar12;
  Str_L_char_G_ *pSVar13;
  void *local_94 [3];
  void *local_88;
  void *local_7c [3];
  void *local_70;
  void *local_64 [3];
  void *local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  bVar9 = IsGroupEnemy();
  if (!bVar9) {
    GVar12 = GetDodgeOrder();
    if (GVar12 == GroupType__Every) {
      util__Str_char___Str_char(&local_4c,"DodgingIsOn Tooltip");
      local_10.Data = (char *)0x0;
      pLVar10 = (LocStr *)local_64;
      local_10.Capacity = 0;
      pSVar11 = &local_4c;
      local_10.Length = 0;
      pSVar13 = &local_10;
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      bVar9 = false;
    }
    else if (GVar12 == GroupType__Some) {
      util__Str_char___Str_char(&local_34,"DodgingIsDisabledForSome Tooltip");
      local_1c.Data = (char *)0x0;
      pLVar10 = (LocStr *)local_7c;
      local_1c.Capacity = 0;
      pSVar11 = &local_34;
      local_1c.Length = 0;
      pSVar13 = &local_1c;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = true;
      bVar4 = true;
      bVar3 = true;
      bVar2 = false;
      bVar1 = false;
      bVar9 = false;
    }
    else {
      util__Str_char___Str_char(&local_40,"DodgingIsDisabled Tooltip");
      local_28.Data = (char *)0x0;
      pLVar10 = (LocStr *)local_94;
      local_28.Capacity = 0;
      pSVar11 = &local_40;
      local_28.Length = 0;
      pSVar13 = &local_28;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = true;
      bVar1 = true;
      bVar9 = true;
    }
    pLVar10 = (LocStr *)util__LocStr__LocStr(pLVar10,pSVar11,pSVar13);
    pSVar11 = util__LocStr__operator__o3(pLVar10);
    util__Str_char___Str_char(__return_storage_ptr__,pSVar11);
    if (bVar9) {
      if (local_88 != (void *)0x0) {
        port_op_delete(local_88);
        local_88 = (void *)0x0;
      }
      if (local_94[0] != (void *)0x0) {
        port_op_delete(local_94[0]);
        local_94[0] = (void *)0x0;
      }
    }
    if ((bVar1) && (local_28.Data != (char *)0x0)) {
      port_op_delete(local_28.Data);
      local_28.Data = (char *)0x0;
    }
    if ((bVar2) && (local_40.Data != (char *)0x0)) {
      port_op_delete(local_40.Data);
      local_40.Data = (char *)0x0;
    }
    if (bVar3) {
      if (local_70 != (void *)0x0) {
        port_op_delete(local_70);
        local_70 = (void *)0x0;
      }
      if (local_7c[0] != (void *)0x0) {
        port_op_delete(local_7c[0]);
        local_7c[0] = (void *)0x0;
      }
    }
    if ((bVar4) && (local_1c.Data != (char *)0x0)) {
      port_op_delete(local_1c.Data);
      local_1c.Data = (char *)0x0;
    }
    if ((bVar5) && (local_34.Data != (char *)0x0)) {
      port_op_delete(local_34.Data);
      local_34.Data = (char *)0x0;
    }
    if (bVar6) {
      if (local_58 != (void *)0x0) {
        port_op_delete(local_58);
        local_58 = (void *)0x0;
      }
      if (local_64[0] != (void *)0x0) {
        port_op_delete(local_64[0]);
        local_64[0] = (void *)0x0;
      }
    }
    if ((bVar7) && (local_10.Data != (char *)0x0)) {
      port_op_delete(local_10.Data);
      local_10.Data = (char *)0x0;
    }
    if ((local_4c.Data != (char *)0x0) && (bVar8)) {
      port_op_delete(local_4c.Data);
    }
    return __return_storage_ptr__;
  }
  bVar9 = AreAllShipsTargeted();
  if (bVar9) {
    util__Str_char___Str_char(&local_4c,"HighPriorityTarget Tooltip");
    local_28.Data = (char *)0x0;
    pLVar10 = (LocStr *)local_94;
    local_28.Capacity = 0;
    pSVar11 = &local_4c;
    local_28.Length = 0;
    pSVar13 = &local_28;
    bVar7 = false;
    bVar6 = true;
    bVar5 = true;
    bVar4 = false;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    bVar9 = true;
  }
  else {
    bVar9 = AreAnyShipsTargeted();
    if (bVar9) {
      util__Str_char___Str_char(&local_40,"SomeHighPriorityTarget Tooltip");
      local_1c.Data = (char *)0x0;
      pLVar10 = (LocStr *)local_7c;
      local_1c.Capacity = 0;
      pSVar11 = &local_40;
      local_1c.Length = 0;
      pSVar13 = &local_1c;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
      bVar3 = true;
      bVar2 = true;
      bVar1 = false;
      bVar9 = false;
    }
    else {
      util__Str_char___Str_char(&local_34,"DefaultPriorityTarget Tooltip");
      local_10.Data = (char *)0x0;
      pLVar10 = (LocStr *)local_64;
      local_10.Capacity = 0;
      pSVar11 = &local_34;
      local_10.Length = 0;
      pSVar13 = &local_10;
      bVar7 = true;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      bVar1 = true;
      bVar9 = false;
    }
  }
  pLVar10 = (LocStr *)util__LocStr__LocStr(pLVar10,pSVar11,pSVar13);
  pSVar11 = util__LocStr__operator__o3(pLVar10);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar11);
  if (bVar7) {
    if (local_58 != (void *)0x0) {
      port_op_delete(local_58);
      local_58 = (void *)0x0;
    }
    if (local_64[0] != (void *)0x0) {
      port_op_delete(local_64[0]);
      local_64[0] = (void *)0x0;
    }
  }
  if ((bVar1) && (local_34.Data != (char *)0x0)) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (bVar2) {
    if (local_70 != (void *)0x0) {
      port_op_delete(local_70);
      local_70 = (void *)0x0;
    }
    if (local_7c[0] != (void *)0x0) {
      port_op_delete(local_7c[0]);
      local_7c[0] = (void *)0x0;
    }
  }
  if ((bVar3) && (local_1c.Data != (char *)0x0)) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if ((bVar4) && (local_40.Data != (char *)0x0)) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (bVar5) {
    if (local_88 != (void *)0x0) {
      port_op_delete(local_88);
      local_88 = (void *)0x0;
    }
    if (local_94[0] != (void *)0x0) {
      port_op_delete(local_94[0]);
      local_94[0] = (void *)0x0;
    }
  }
  if ((bVar6) && (local_28.Data != (char *)0x0)) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if ((local_4c.Data != (char *)0x0) && (bVar9)) {
    port_op_delete(local_4c.Data);
  }
  return __return_storage_ptr__;
}





//==== 00829fe0 GetTargetShipVerboseTooltip ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_  ShipGroupUI__GetTargetShipVerboseTooltip(void)const  */

Str_L_char_G_ * ShipGroupUI__GetTargetShipVerboseTooltip__o3(Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  void *local_68 [3];
  void *local_5c;
  void *local_50 [3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar1 = IsGroupEnemy();
  bVar1 = !bVar1;
  if (bVar1) {
    util__Str_char___Str_char(&local_2c,"EnableDodging Tooltip");
    local_14.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_50;
    local_14.Capacity = 0;
    pSVar3 = &local_2c;
    local_14.Length = 0;
    pSVar4 = &local_14;
  }
  else {
    util__Str_char___Str_char(&local_38,"TargetShip Tooltip");
    local_20.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_68;
    local_20.Capacity = 0;
    pSVar3 = &local_38;
    local_20.Length = 0;
    pSVar4 = &local_20;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr(pLVar2,pSVar3,pSVar4);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar3);
  if (bVar1) {
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      port_op_delete(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar1) {
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if (!bVar1) {
    if (local_5c != (void *)0x0) {
      port_op_delete(local_5c);
      *(uint32_t *)&local_5c = (uint32_t)(uintptr_t)((void *)0x0);
    }
    if (local_68[0] != (void *)0x0) {
      port_op_delete(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if (!bVar1) {
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_38.Data != (char *)0x0) && (!bVar1)) {
    port_op_delete(local_38.Data);
  }
  return __return_storage_ptr__;
}





//==== 0082b0c0 MethodCaller__private__void___thiscall_HUDTactical__OnMarqueeSelect_struct_util__AABB_struct_util__Vec2_int_____ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_structHUDTactical_Cvoid_Cstruct_util__AABB_L_structutil__Vec2_L_int_G__G__G___MethodCaller_L__private_void__thiscall_HUDTactical__OnMarqueeSelect_structutil__AABB_L_structutil__Vec2_L_int_G__G___G_(void *,struct
   util__AABB_L_structutil__Vec2_L_int_G__G_) */

void util__DelegateFactory_L_HUDTactical_Cvoid_Cutil__AABB_L_util__Vec2_L_int_G___G___G___MethodCaller_L__private__void___thiscall_HUDTactical__OnMarqueeSelect_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G_
               (void *param_1,AABB_L_util__Vec2_L_int_G___G_ param_2)

{
  util__DelegateFactory_struct_HUDTactical_void_struct_util__AABB_struct_util__Vec2_int_______MethodCaller__private__void___thiscall_HUDTactical__OnMarqueeSelect_struct_util__AABB_struct_util__Vec2_int(param_2);
  return;
}





//==== 0082b0e0 MethodCaller__public__void___thiscall_HUDTactical__RequestRebuildOfShips_void__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_structHUDTactical_Cvoid_G___MethodCaller_L__public__void__thiscallHUDTactical__RequestRebuildOfShips_void__G_(void *) */

void util__DelegateFactory_struct_HUDTactical_void___MethodCaller__public__void___thiscall_HUDTactical__RequestRebuildOfShips_void(void *param_1)

{
  bool bVar1;
  
  if (*(ReferenceController **)((int)param_1 + 0x18c) != (ReferenceController *)0x0) {
    bVar1 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x18c));
    if (!bVar1) {
      *(undefined4 *)((int)param_1 + 0x188) = 0;
    }
  }
  ShipListUI__RequestRebuild();
  if (*(ReferenceController **)((int)param_1 + 0x194) != (ReferenceController *)0x0) {
    bVar1 = ReferenceController__IsDataStillValid(*(ReferenceController **)((int)param_1 + 0x194));
    if (!bVar1) {
      *(undefined4 *)((int)param_1 + 400) = 0;
    }
  }
  *(undefined1 *)(*(int *)((int)param_1 + 400) + 0x168) = 1;
  return;
}





//==== 0082b100 MethodCaller__private__void___thiscall_HUDTactical__SendPopupToBacklog_void____cdecl___void__class_util__Str_char__class_util__Str_char___ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static void __cdecl util__DelegateFactory_L_structHUDTactical_Cvoid_Cvoid____cdecl_P__void__Cclassutil__Str_L_char_G__Cclassutil__Str_L_char_G__G___MethodCaller_L__private_void___thiscallHUDTactical__SendPopupToBacklog_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G___G_(void *,void (__cdecl*)(void),class util__Str_L_char_G_,class util__Str_L_char_G_) */

void util__DelegateFactory_L_HUDTactical_Cvoid_Cvoid____cdecl_P__void__Cutil__Str_L_char_G__Cutil__Str_L_char_G___G___MethodCaller_L__private__void___thiscall_HUDTactical__SendPopupToBacklog_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_
               (void *param_1,_func_void *param_2,Str_L_char_G_ param_3,Str_L_char_G_ param_4)

{
  undefined8 stack0xffffffdc;
  undefined8 stack0xffffffe8;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  char *in_stack_ffffffdc;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  char *in_stack_ffffffe8;
  int in_stack_ffffffec;
  int in_stack_fffffff0;
  
  pSVar4 = &param_4;
  iVar3 = 0x82b119;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&stack0xffffffe8,pSVar4);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)&stack0xffffffdc,&param_3);
  SVar1.Capacity = iVar3;
  SVar1.Data = in_stack_ffffffdc;
  SVar1.Length = (int)pSVar4;
  SVar2.Capacity = in_stack_ffffffec;
  SVar2.Data = in_stack_ffffffe8;
  SVar2.Length = in_stack_fffffff0;
  HUDTactical__SendPopupToBacklog(param_2,SVar1,SVar2);
  if (param_3.Data != (char *)0x0) {
    port_op_delete(param_3.Data);
    param_3.Data = (char *)0x0;
  }
  if (param_4.Data != (char *)0x0) {
    port_op_delete(param_4.Data);
  }
  return;
}





//==== 0082b160 MethodCallerConst__private__bool___thiscall_HUDTactical__CanExit_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDTactical_Cbool_G___MethodCallerConst_L__private_bool__thiscallHUDTactical__CanExit_void_const__G_(void const * const) */

bool util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__CanExit_void_const(void *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)((int)param_1 + 8);
  if (*(char *)(iVar1 + 0x120) != '\0') {
    bVar2 = TacticalManager__ConflictExists();
    if (bVar2) {
      TacticalManager__GetStrategicGame_Memoize();
      if (*(char *)(iVar1 + 0xec) == '\0') {
        LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                  "IsValid()",(char *)0x0);
        DebugBreak();
      }
      bVar2 = StrategicManager__PlayerIsVictorious();
      if (!bVar2) {
        return false;
      }
    }
  }
  return true;
}





//==== 0082b1f0 MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetBackButtonText_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDTactical_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDTactical__GetBackButtonText_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDTactical_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetBackButtonText_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDTactical__GetBackButtonText(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0082b230 MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetExitButtonTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDTactical_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDTactical__GetExitButtonTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDTactical_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetExitButtonTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDTactical__GetExitButtonTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0082b270 MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetExitButtonVerboseTooltip_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDTactical_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDTactical__GetExitButtonVerboseTooltip_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDTactical_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetExitButtonVerboseTooltip_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDTactical__GetExitButtonVerboseTooltip(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0082b2b0 MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetRangeTimeText_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_structHUDTactical_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__private_classutil__Str_L_char_G___thiscall_HUDTactical__GetRangeTimeText_void_const_G_(void const * const) */

Str_L_char_G_ *
util__DelegateFactory_struct_HUDTactical_class_util__Str_char_____MethodCallerConst__private__class_util__Str_char____thiscall_HUDTactical__GetRangeTimeText_void_const
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ local_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(HUDTactical__GetRangeTimeText(&local_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 0082b320 MethodCallerConst__public__struct_util__AABB_struct_util__Vec2_int______thiscall_HUDTactical__GetWorkableScreenArea_void_const__ ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: static struct util__AABB_L_structutil__Vec2_L_int_G__G_ __cdecl util__DelegateFactory_L_struct_HUDTactical_Cstructutil__AABB_L_structutil__Vec2_L_int_G__G__G___MethodCallerConst_L__public_struct_util__AABB_L_structutil__Vec2_L_int_G__G___thiscallHUDTactical__GetWorkableScreenArea_void_const__G_(void const * const) */

AABB_L_util__Vec2_L_int_G___G_ *
util__DelegateFactory_struct_HUDTactical_struct_util__AABB_struct_util__Vec2_int_______MethodCallerConst__public__struct_util__AABB_struct_util__Vec2_int______thiscall_HUDTactical__GetWorkableScreenArea_void_const
          (AABB_L_util__Vec2_L_int_G___G_ *__return_storage_ptr__,void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  AABB_L_util__Vec2_L_int_G___G_ *pAVar4;
  AABB_L_util__Vec2_L_int_G___G_ local_14;
  
  pAVar4 = (AABB_L_util__Vec2_L_int_G___G_ *)(uintptr_t)(HUDTactical__GetWorkableScreenArea(&local_14));
  iVar1 = (pAVar4->Lower).Y;
  iVar2 = (pAVar4->Upper).X;
  iVar3 = (pAVar4->Upper).Y;
  (__return_storage_ptr__->Lower).X = (pAVar4->Lower).X;
  (__return_storage_ptr__->Lower).Y = iVar1;
  (__return_storage_ptr__->Upper).X = iVar2;
  (__return_storage_ptr__->Upper).Y = iVar3;
  return __return_storage_ptr__;
}





//==== 0082b370 MethodCallerConst__private__bool___thiscall_HUDTactical__IsRangeTextVisible_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_struct_HUDTactical_Cbool_G___MethodCallerConst_L__private_bool__thiscall_HUDTactical__IsRangeTextVisible_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_struct_HUDTactical_bool___MethodCallerConst__private__bool___thiscall_HUDTactical__IsRangeTextVisible_void_const
          (void *param_1)

{
  return (bool)*(undefined1 *)(*(int *)((int)param_1 + 8) + 0x120);
}





//==== 0082f030 Add_0082f030 ====


/* public: bool  util__AssocArray_L_int_CenumOrderInfoTypes__Type_G___Add(int const &,enum
   OrderInfoTypes__Type const &) */

bool 
util__AssocArray_int_enum_OrderInfoTypes__Type___Add
          (AssocArray_L_int_Cenum_OrderInfoTypes__Type_G_ *this,int *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int TVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = *(uint *)(this + 8);
  if (uVar2 == 0) {
    return false;
  }
  uVar4 = *param_1;
  uVar5 = (uVar4 & 0xff) * 0x401;
  uVar5 = ((uVar4 >> 8 & 0xff) + (uVar5 >> 6 ^ uVar5)) * 0x401;
  uVar5 = ((uVar4 >> 0x10 & 0xff) + (uVar5 >> 6 ^ uVar5)) * 0x401;
  uVar4 = ((uVar5 >> 6 ^ uVar5) + (uVar4 >> 0x18)) * 0x401;
  uVar4 = (uVar4 ^ uVar4 >> 6) * 9;
  for (uVar4 = ((uVar4 >> 0xb ^ uVar4) * 0x8001) % uVar2; (int)uVar4 < 0; uVar4 = uVar4 + uVar2) {
  }
  if ((int)uVar2 <= (int)uVar4) {
    uVar4 = (int)uVar4 % (int)uVar2;
  }
  iVar6 = 0;
  cVar1 = *(char *)(*(int *)(this + 4) + uVar4);
  while (cVar1 != '\0') {
    if ((int)uVar2 <= iVar6) goto LAB_0082f115;
    if (*(int *)(*(int *)this + uVar4 * 8) == *param_1) {
      return false;
    }
    for (uVar4 = uVar4 + 1; (int)uVar4 < 0; uVar4 = uVar4 + uVar2) {
    }
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = (int)uVar4 % (int)uVar2;
    }
    iVar6 = iVar6 + 1;
    cVar1 = *(char *)(*(int *)(this + 4) + uVar4);
  }
  if ((int)uVar2 <= iVar6) {
LAB_0082f115:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(this + 8) <= iVar6) {
      return false;
    }
  }
  TVar3 = *param_2;
  iVar6 = *(int *)this;
  *(int *)(iVar6 + uVar4 * 8) = *param_1;
  *(int *)(iVar6 + 4 + uVar4 * 8) = TVar3;
  *(undefined1 *)(uVar4 + *(int *)(this + 4)) = 1;
  return true;
}





//==== 0082f170 GetBackButtonText ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_  HUDTactical__GetBackButtonText(void)const  */

Str_L_char_G_ * HUDTactical__GetBackButtonText__o3(Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  void *local_68 [3];
  void *local_5c;
  void *local_50 [3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar1 = TacticalManager__CanExit();
  bVar1 = !bVar1;
  if (bVar1) {
    util__Str_char___Str_char(&local_2c,"EnemiesInRange");
    local_14.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_50;
    local_14.Capacity = 0;
    pSVar3 = &local_2c;
    local_14.Length = 0;
    pSVar4 = &local_14;
  }
  else {
    util__Str_char___Str_char(&local_38,"FaceType__Back");
    local_20.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_68;
    local_20.Capacity = 0;
    pSVar3 = &local_38;
    local_20.Length = 0;
    pSVar4 = &local_20;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr(pLVar2,pSVar3,pSVar4);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar3);
  if (bVar1) {
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      port_op_delete(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar1) {
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if (!bVar1) {
    if (local_5c != (void *)0x0) {
      port_op_delete(local_5c);
      *(uint32_t *)&local_5c = (uint32_t)(uintptr_t)((void *)0x0);
    }
    if (local_68[0] != (void *)0x0) {
      port_op_delete(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if (!bVar1) {
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_38.Data != (char *)0x0) && (!bVar1)) {
    port_op_delete(local_38.Data);
  }
  return __return_storage_ptr__;
}





//==== 0082f2f0 GetCentralScreenRadius ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  HUDTactical__GetCentralScreenRadius(void)const  */

double HUDTactical__GetCentralScreenRadius(void)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)) / 2;
  local_10 = (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0)) / 2 + -0xfa;
  iVar1 = util__Abs(&local_c);
  iVar2 = util__Abs(&local_10);
  if (iVar1 < iVar2) {
    local_10 = local_c;
  }
  return (double)local_10;
}





//==== 0082f380 GetExitButtonTooltip ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_  HUDTactical__GetExitButtonTooltip(void)const  */

Str_L_char_G_ * HUDTactical__GetExitButtonTooltip__o3(Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  void *local_68 [3];
  void *local_5c;
  void *local_50 [3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar1 = TacticalManager__CanExit();
  bVar1 = !bVar1;
  if (bVar1) {
    util__Str_char___Str_char(&local_2c,"CantExitTactical Tooltip");
    local_14.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_50;
    local_14.Capacity = 0;
    pSVar3 = &local_2c;
    local_14.Length = 0;
    pSVar4 = &local_14;
  }
  else {
    util__Str_char___Str_char(&local_38,"ExitTactical Tooltip");
    local_20.Data = (char *)0x0;
    pLVar2 = (LocStr *)local_68;
    local_20.Capacity = 0;
    pSVar3 = &local_38;
    local_20.Length = 0;
    pSVar4 = &local_20;
  }
  pLVar2 = (LocStr *)util__LocStr__LocStr(pLVar2,pSVar3,pSVar4);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar3);
  if (bVar1) {
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      port_op_delete(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar1) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar1) {
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if (!bVar1) {
    if (local_5c != (void *)0x0) {
      port_op_delete(local_5c);
      *(uint32_t *)&local_5c = (uint32_t)(uintptr_t)((void *)0x0);
    }
    if (local_68[0] != (void *)0x0) {
      port_op_delete(local_68[0]);
      local_68[0] = (void *)0x0;
    }
  }
  if (!bVar1) {
    if (local_20.Data != (char *)0x0) {
      port_op_delete(local_20.Data);
      local_20.Data = (char *)0x0;
    }
  }
  if ((local_38.Data != (char *)0x0) && (!bVar1)) {
    port_op_delete(local_38.Data);
  }
  return __return_storage_ptr__;
}





//==== 0082f500 GetExitButtonVerboseTooltip ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* private: class util__Str_L_char_G_  HUDTactical__GetExitButtonVerboseTooltip(void)const  */

Str_L_char_G_ * HUDTactical__GetExitButtonVerboseTooltip__o3(Str_L_char_G_ *__return_storage_ptr__)

{
  char *pcVar1;
  bool bVar2;
  LocStr *this;
  Str_L_char_G_ *pSVar3;
  void *local_50 [3];
  void *local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  undefined4 local_8;
  
  local_8 = 0;
  bVar2 = TacticalManager__CanExit();
  bVar2 = !bVar2;
  if (bVar2) {
    util__Str_char___Str_char(&local_2c,"CantExitTactical VerboseTooltip");
    local_14.Data = (char *)0x0;
    local_14.Capacity = 0;
    local_14.Length = 0;
    this = (LocStr *)util__LocStr__LocStr((LocStr *)local_50,&local_2c,&local_14);
    pSVar3 = util__LocStr__operator__o3(this);
    pSVar3 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_38,pSVar3);
  }
  else {
    pSVar3 = &local_20;
    local_20.Data = (char *)0x0;
    local_20.Capacity = 0;
    local_20.Length = 0;
  }
  pcVar1 = local_20.Data;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar3);
  if (bVar2) {
    if (local_38.Data != (char *)0x0) {
      port_op_delete(local_38.Data);
      local_38.Data = (char *)0x0;
    }
  }
  if (bVar2) {
    if (local_44 != (void *)0x0) {
      port_op_delete(local_44);
      local_44 = (void *)0x0;
    }
    if (local_50[0] != (void *)0x0) {
      port_op_delete(local_50[0]);
      local_50[0] = (void *)0x0;
    }
  }
  if (bVar2) {
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
      local_14.Data = (char *)0x0;
    }
  }
  if (bVar2) {
    if (local_2c.Data != (char *)0x0) {
      port_op_delete(local_2c.Data);
      local_2c.Data = (char *)0x0;
    }
  }
  if ((pcVar1 != (char *)0x0) && (!bVar2)) {
    port_op_delete(pcVar1);
  }
  return __return_storage_ptr__;
}





//==== 0082fee0 GetWorkableScreenArea_0082fee0 ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__AABB_L_structutil__Vec2_L_int_G__G_ 
   HUDTactical__GetWorkableScreenArea(void)const  */

AABB_L_util__Vec2_L_int_G___G_ *
HUDTactical__GetWorkableScreenArea__o2(AABB_L_util__Vec2_L_int_G___G_ *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  NotificationManager *this;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  
  iVar2 = LayoutAttributes__DefaultPadding();
  iVar3 = LayoutAttributes__DefaultMargin();
  this = (NotificationManager *)(uintptr_t)(TacticalManager__GetNotifications());
  bVar1 = NotificationManager__AreNotificationsVisible(this);
  if (bVar1) {
    dVar7 = NotificationManager__GetNotificationHeight();
    iVar4 = (int)dVar7 + iVar2;
  }
  else {
    iVar4 = 0;
  }
  iVar6 = (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)) - iVar3;
  iVar5 = (((*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0)) - iVar2) + -0xfa) - iVar3;
  iVar4 = iVar4 + iVar3;
  iVar3 = iVar2 + 0xfa + iVar3;
  iVar2 = iVar3;
  if (iVar5 <= iVar3) {
    iVar2 = iVar5;
  }
  (__return_storage_ptr__->Lower).X = iVar2;
  iVar2 = iVar4;
  if (iVar6 <= iVar4) {
    iVar2 = iVar6;
  }
  (__return_storage_ptr__->Lower).Y = iVar2;
  if (iVar3 <= iVar5) {
    iVar3 = iVar5;
  }
  (__return_storage_ptr__->Upper).X = iVar3;
  if (iVar4 <= iVar6) {
    iVar4 = iVar6;
  }
  (__return_storage_ptr__->Upper).Y = iVar4;
  return __return_storage_ptr__;
}





//==== 00830a50 SendPopupToBacklog_00830a50 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void  HUDTactical__SendPopupToBacklog(void (__cdecl*)(void),class
   util__Str_L_char_G_,class util__Str_L_char_G_) */

void HUDTactical__SendPopupToBacklog(_func_void *param_1,Str_L_char_G_ param_2,Str_L_char_G_ param_3)

{
  NotificationManager *this;
  BacklogMessage *pBVar1;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  undefined1 local_68 [20];
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  bool local_2c;
  int local_28;
  undefined1 local_24 [16];
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  util__Str_char___Str_char(&local_80,&param_3);
  util__Str_char___Str_char(&local_74,&param_2);
  util__Color__Color((Color *)local_24,Preset__White,1.0);
  (*(uint32_t*)&(local_68)) = (uint32_t)(uintptr_t)(param_1);
  (*(uint32_t*)((char*)&(local_68)+4)) = (uint32_t)(uintptr_t)(&vftable_5);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_68 + 8),(Str_L_char_G_ *)(local_24 + 4));
  (*(uint32_t*)((char*)&(local_68)+4)) = (uint32_t)(uintptr_t)(&vftable_59);
  local_54 = local_14;
  fStack_50 = fStack_10;
  fStack_4c = fStack_c;
  fStack_48 = fStack_8;
  util__Str_char___Str_char(&local_44,&local_74);
  util__Str_char___Str_char(&local_38,&local_80);
  local_2c = true;
  local_28 = 1;
  (*(uint32_t*)&(local_24)) = (uint32_t)(uintptr_t)(&vftable_5);
  if ((void *)(*(uint32_t*)((char*)&(local_24)+4)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_24)+4)));
    (*(uint32_t*)((char*)&(local_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_74.Data != (char *)0x0) {
    port_op_delete(local_74.Data);
  }
  if (local_80.Data != (char *)0x0) {
    port_op_delete(local_80.Data);
  }
  pBVar1 = (BacklogMessage *)local_68;
  this = (NotificationManager *)(uintptr_t)(TacticalManager__GetNotifications());
  NotificationManager__AddBacklogMessage(this,pBVar1);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  (*(uint32_t*)((char*)&(local_68)+4)) = (uint32_t)(uintptr_t)(&vftable_5);
  if ((void *)(*(uint32_t*)((char*)&(local_68)+8)) != (void *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_68)+8)));
  }
  if (param_2.Data != (char *)0x0) {
    port_op_delete(param_2.Data);
    param_2.Data = (char *)0x0;
  }
  if (param_3.Data != (char *)0x0) {
    port_op_delete(param_3.Data);
  }
  return;
}





//==== 00830bb0 Tick_00830bb0 ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual void  HUDTactical__Tick(double) */

void HUDTactical__Tick(double)

{
  CombatNotifier__TickPopups(param_1);
  return;
}





//==== 00830d30 bad_cast ====


/* public:  std__bad_cast__bad_cast(class std__bad_cast const &) */

bad_cast *  std__bad_cast__bad_cast(bad_cast *this,bad_cast *param_1)

{
  *(undefined ***)this = exception__vftable;
  *(undefined8 *)&this->field_0x4 = 0;
  ___std_exception_copy(&param_1->field_0x4,&this->field_0x4);
  *(undefined ***)this = (undefined **)(&vftable_549);
  return this;
}





//==== 00830d70 bad_cast_00830d70 ====


/* public:  std__bad_cast__bad_cast(void) */

bad_cast *  std__bad_cast__bad_cast__o3(bad_cast *this)

{
  *(undefined8 *)&this->field_0x4 = 0;
  *(char **)&this->field_0x4 = "bad cast";
  *(undefined ***)this = (undefined **)(&vftable_549);
  return this;
}





//==== 00830d90 exception ====

/* public: __thiscall std__exception__exception(class std__exception const &) */

exception * __thiscall std__exception__exception(exception *this,exception *param_1)

{
  this->_pad_0x0_0 = (int)vftable;
  this->_Mywhat = (char *)0x0;
  this->_Mydofree = false;
  (undefined3)((*(undefined3 *)(void *)((char *)(uintptr_t)(this) + 0x9)) = 0);
  ___std_exception_copy(&param_1->_Mywhat,&this->_Mywhat);
  return this;
}

//==== 00830dc0 basic_filebuf_char_std__char_traits_char___ ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual  basic_filebuf_L_char_Cstructstd__char_traits_L_char_G__G___dtor(void) */

void __thiscall
std__basic_filebuf_char_struct_std__char_traits_char______basic_filebuf_char_struct_std__char_traits_char(basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  int iVar1;
  int iVar2;
  
  *(undefined ***)this = &vftable_551;
  if ((*(int *)(this + 0x4c) != 0) &&
     ((basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)**(int **)(this + 0xc) == this + 0x3c))
  {
    iVar1 = *(int *)(this + 0x54);
    iVar2 = *(int *)(this + 0x50);
    **(int **)(this + 0xc) = iVar2;
    **(int **)(this + 0x1c) = iVar2;
    **(int **)(this + 0x2c) = iVar1 - iVar2;
  }
  if (this[0x48] != (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x0) {
    if (*(int *)(this + 0x4c) != 0) {
      _Endwrite(this);
      fclose(*(FILE **)(this + 0x4c));
    }
    this[0x48] = (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x0;
    this[0x3d] = (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x0;
    std__basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G____Init
              ((basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x40) = (undefined4)(uintptr_t) __Stinit;
    *(undefined4 *)(this + 0x44) = DAT_00989540;
    *(undefined4 *)(this + 0x38) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00830e3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std__basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G___basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G___dtor((basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)this);
  return;
}





//==== 00830e50 bad_alloc ====


void  std__bad_alloc___bad_alloc(bad_alloc *this)

{
  *(undefined ***)this = exception__vftable;
  ___std_exception_destroy(&this->field_0x4);
  return;
}





//==== 00830e70 operator__00830e70 ====


/* public: char const * __thiscall util__Str_char___operator__o12(void)const  */

char * __thiscall util__Str_char___operator__o12(Str_L_char_G_ *this)

{
  if (0 < this->Capacity) {
    return this->Data;
  }
  return "";
}





//==== 00830e7f vector_deleting_destructorvtordisp_4294967292_0_ ====

/* [thunk]:public: virtual void * __thiscall std__basic_ofstream_L_char_Cstructstd__char_traits_L_char_G___G_:: 0 vectordeletingdestructor 0 vtordisp_4294967292_0_ (unsigned int) */

void * 
std__basic_ofstream_char_struct_std__char_traits_char______vector_deleting_destructor__vtordisp_4294967292_0
          (basic_ofstream_L_char_Cstd__char_traits_L_char_G___G_ *this,uint param_1)

{
  uint *puVar1;
  ios_base *piVar2;
  
  piVar2 = (ios_base *)((int)this - *(int *)&this[-1].field77_0xa0);
  puVar1 = &piVar2[-2]._Stdstr;
  *(undefined ***)(*(int *)(piVar2[-2]._Stdstr + 4) + -0x68 + (int)piVar2) = (undefined **)(&vftable_552);
  *(int *)(*(int *)(*puVar1 + 4) + -0x6c + (int)piVar2) = *(int *)(*puVar1 + 4) + -0x68;
  basic_filebuf_L_char_Cstd__char_traits_L_char_G___G___dtor((basic_filebuf_L_char_Cstd__char_traits_L_char_G___G_ *)&piVar2[-2]._Mystate);
  basic_ostream_L_char_Cstd__char_traits_L_char_G___G___dtor((basic_ostream_L_char_Cstd__char_traits_L_char_G___G_ *)&piVar2[-2]._Except);
  piVar2->_pad_0x0_0 = (int)_vftable__exref;
  piVar2->_pad_0x0_0 = (int)_vftable__exref;
  std__ios_base___Ios_base_dtor(piVar2);
  if ((param_1 & 1) != 0) {
    port_op_delete(puVar1,0xb0);
  }
  return puVar1;
}

//==== 00830e90 scalar_deleting_destructor_00830e90 ====


/* public: virtual void * __thiscall std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
std__basic_filebuf_char_struct_std__char_traits_char______scalar_deleting_destructor__o2
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this,uint param_1)

{
  std__basic_filebuf_char_struct_std__char_traits_char______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x58);
  }
  return this;
}





//==== 00830ec0 scalar_deleting_destructor_00830ec0 ====


/* public: virtual void * __thiscall std__basic_ofstream_L_char_Cstructstd__char_traits_L_char_G___G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
std__basic_ofstream_char_struct_std__char_traits_char______scalar_deleting_destructor
          (basic_ofstream_L_char_Cstruct_std__char_traits_L_char_G___G_ *this,uint param_1)

{
  basic_ofstream_L_char_Cstruct_std__char_traits_L_char_G___G_ *pbVar1;
  
  pbVar1 = this + -0x68;
  *(undefined ***)(this + *(int *)(*(int *)(this + -0x68) + 4) + -0x68) = (undefined **)(&vftable_552);
  *(int *)(this + *(int *)(*(int *)pbVar1 + 4) + -0x6c) = *(int *)(*(int *)pbVar1 + 4) + -0x68;
  basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G___basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G___dtor((basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)(this + -100));
  std__basic_ostream_L_char_Cstruct_std__char_traits_L_char_G___G___basic_ostream_L_char_Cstruct_std__char_traits_L_char_G___G___dtor((basic_ostream_L_char_Cstruct_std__char_traits_L_char_G___G_ *)(this + -0x60));
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std__ios_base___Ios_base_dtor((ios_base *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(pbVar1,0xb0);
  }
  return pbVar1;
}





//==== 00830f30 scalar_deleting_destructor_00830f30 ====

/* public: virtual void * __thiscall util__FileWriter:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall util__FileWriter___scalar_deleting_destructor(FileWriter *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = &(this->Stream).field5_0x58;
  *(undefined ***)(puVar1 + *(int *)(*(int *)&this->Stream + 4) + -0x68) = (undefined **)(&vftable_552);
  iVar2 = *(int *)(*(int *)&this->Stream + 4);
  *(int *)(puVar1 + iVar2 + -0x6c) = iVar2 + -0x68;
  basic_filebuf_L_char_Cstd__char_traits_L_char_G___G___dtor(&(this->Stream)._Filebuffer);
  basic_ostream_L_char_Cstd__char_traits_L_char_G___G___dtor((basic_ostream_L_char_Cstd__char_traits_L_char_G___G_ *)&(this->Stream)._Filebuffer._padfb1);
  *(code **)puVar1 = _vftable__exref;
  *(code **)puVar1 = _vftable__exref;
  std__ios_base___Ios_base_dtor((ios_base *)puVar1);
  this->_pad_0x0_0 = (int)&vftable_550;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xb8);
  }
  return this;
}

//==== 00830fa0 scalar_deleting_destructor_00830fa0 ====


/* public: virtual void * __thiscall util__FileWriterInterface:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
util__FileWriterInterface___scalar_deleting_destructor(FileWriterInterface *this,uint param_1)

{
  *this = *(FileWriterInterface *)&vftable_550;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,4);
  }
  return this;
}





//==== 00830fd0 scalar_deleting_destructor_00830fd0 ====

/* public: virtual void * __thiscall std__exception:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall std__exception___scalar_deleting_destructor(exception *this,uint param_1)

{
  this->_pad_0x0_0 = (int)vftable;
  ___std_exception_destroy(&this->_Mywhat);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xc);
  }
  return this;
}

//==== 00831000 AbortHandler ====


/* void __cdecl util__AbortHandler(int) */

void __cdecl util__AbortHandler(int)

{
  Str_L_char_G_ *pSVar1;
  char *pcVar2;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  if (DAT_00989538 == '\0') {
    DAT_00989538 = '\x01';
    pSVar1 = (Str_L_char_G_ *)(uintptr_t)(GetSignalName(&SStack_1c,param_1));
    pcVar2 = (char *)(uintptr_t)(Str_L_char_G___op_mul(pSVar1));
    pSVar1 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_10,"Caught Signal \'%s\'\n",pcVar2));
    Log(pSVar1);
    util__Str_char____Str_char(&SStack_10);
    util__Str_char____Str_char(&SStack_1c);
    pSVar1 = (Str_L_char_G_ *)(uintptr_t)(GetBacktrace(&SStack_1c));
    Log(pSVar1);
    util__Str_char____Str_char(&SStack_1c);
    DumpCrashLog();
  }
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}





//==== 00831080 DumpCrashLog ====


/* void __cdecl util__DumpCrashLog(void) */

void __cdecl util__DumpCrashLog(void)

{
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_28,"Unable to generate a crash log file.");
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1c,"A crash log has been successfully dumped out.");
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_10,"The program has crashed.");
  DumpLog(&SStack_10,&SStack_1c,&SStack_28);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  return;
}





//==== 00831100 DumpLog ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl util__DumpLog(class util__Str_L_char_G_ const &,class util__Str_L_char_G_ const &,class
   util__Str_L_char_G_ const &) */

void __cdecl util__DumpLog(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  FILE *_File;
  Str_L_char_G_ local_168;
  Str_L_char_G_ local_15c;
  Str_L_char_G_ *local_150;
  char *local_14c;
  tm local_148;
  undefined1 local_124 [8];
  undefined1 local_11c [4];
  undefined1 local_118 [56];
  char *local_e0;
  undefined1 local_db;
  codecvt_L_char_Cchar_Cint_G_ *local_d8;
  char local_d4;
  bool bStack_d3;
  undefined2 uStack_d2;
  undefined1 local_d0;
  undefined4 local_cc;
  basic_ios_L_char_Cstd__char_traits_L_char_G___G_ local_b4;
  __time64_t local_6c;
  Str_L_char_G_ local_64;
  char local_58 [80];
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_150 = param_2;
  if (param_1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = param_1->Data;
  }
  _printf("\n\n%s\n",pcVar3);
  pSVar2 = (Str_L_char_G_ *)(uintptr_t)(GetCrashLogPath(&local_15c));
  EnsureDirectoryExists(pSVar2);
  if (local_15c.Data != (char *)0x0) {
    port_op_delete(local_15c.Data);
  }
  local_64.Length = 0;
  local_64.Data = (char *)0x0;
  local_64.Capacity = 0;
  _time64(&local_6c);
  _localtime64_s(&local_148,&local_6c);
  strftime(local_58,0x50,"%Y-%m-%d-%H.%M.%S", (void *)(&local_148));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&local_168,local_58);
  local_14c = "";
  if (0 < local_168.Capacity) {
    local_14c = local_168.Data;
  }
  pSVar2 = (Str_L_char_G_ *)(uintptr_t)(GetCrashLogPath(&local_15c));
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  Printf(&local_64,"%s/CrashLog-%s.txt",pcVar3,local_14c);
  if (local_15c.Data != (char *)0x0) {
    port_op_delete(local_15c.Data);
    local_15c.Data = (char *)0x0;
  }
  if (local_168.Data != (char *)0x0) {
    port_op_delete(local_168.Data);
  }
  memset(local_124,0,0xb8);
  (*(uint32_t*)&(local_124)) = (uint32_t)(uintptr_t)(&vftable_553);
  *(uint32_t *)&local_11c = (uint32_t)(uintptr_t)&std__basic_ofstream_L_char_Cstd__char_traits_L_char_G___G____vbtable_;
  std__basic_ios_L_char_Cstd__char_traits_L_char_G___G___basic_ios_L_char_Cstd__char_traits_L_char_G___G_(&local_b4);
  std__basic_ostream_L_char_Cstd__char_traits_L_char_G___G___basic_ostream_L_char_Cstd__char_traits_L_char_G___G_
            ((basic_ostream_L_char_Cstd__char_traits_L_char_G___G_ *)local_11c,
             (basic_streambuf_L_char_Cstd__char_traits_L_char_G___G_ *)local_118,false);
  *(undefined ***)(local_11c + *(int *)((int)local_11c + 4)) = (undefined **)(&vftable_552);
  *(int *)(local_124 + *(int *)((int)local_11c + 4) + 4) = *(int *)((int)local_11c + 4) + -0x68;
  std__basic_streambuf_L_char_Cstd__char_traits_L_char_G___G___basic_streambuf_L_char_Cstd__char_traits_L_char_G___G_
            ((basic_streambuf_L_char_Cstd__char_traits_L_char_G___G_ *)local_118);
  (*(uint32_t*)&(local_118)) = (uint32_t)(uintptr_t)(&vftable_551);
  local_d0 = 0;
  local_db = 0;
  std__basic_streambuf_L_char_Cstd__char_traits_L_char_G___G____Init
            ((basic_streambuf_L_char_Cstd__char_traits_L_char_G___G_ *)local_118);
  local_d8 = (codecvt_L_char_Cchar_Cint_G_ *)(__Stinit);
  local_d4 = (char)DAT_00989540;
  bStack_d3 = (*(uint8_t*)((char*)&(DAT_00989540)+1));
  uStack_d2 = (*(uint16_t*)((char*)&(DAT_00989540)+2));
  (*(uint8_t*)&(local_cc)) = false;
  (*(uint24_t*)((char*)&(local_cc)+1)) = 0;
  local_e0 = (char *)0x0;
  bVar1 = FileWriter__Open((FileWriter *)local_124,&local_64);
  if (bVar1) {
    pSVar2 = (Str_L_char_G_ *)(uintptr_t)(GetErrorLog());
    FileWriter__Write((FileWriter *)local_124,pSVar2);
    FileWriter__Close((FileWriter *)local_124);
    pcVar3 = "";
    if (0 < (*(struct AmmoBaySubModule *)&(SupportWebsiteUrl)).Capacity) {
      pcVar3 = *(char **)&(SupportWebsiteUrl);
    }
    pcVar5 = "";
    if (0 < local_64.Capacity) {
      pcVar5 = local_64.Data;
    }
    if (local_150->Capacity < 1) {
      pcVar4 = "";
    }
    else {
      pcVar4 = local_150->Data;
    }
    _printf("%s\nIt is located at \'%s\'.\nPlease post it to the forums at %s along with any extra information you can provide. Thanks!\n"
            ,pcVar4,pcVar5,pcVar3);
  }
  else {
    pcVar3 = "";
    if (0 < (*(struct AmmoBaySubModule *)&(SupportWebsiteUrl)).Capacity) {
      pcVar3 = *(char **)&(SupportWebsiteUrl);
    }
    if (param_3->Capacity < 1) {
      pcVar5 = "";
    }
    else {
      pcVar5 = param_3->Data;
    }
    _printf("%s\nPlease post any information you can to the forums at %s about this crash. Thanks!\n"
            ,pcVar5,pcVar3);
  }
  _File = (FILE *)__acrt_iob_func(1);
  fflush(_File);
  *(undefined ***)(local_11c + *(int *)((int)local_11c + 4)) = (undefined **)(&vftable_552);
  *(int *)(local_124 + *(int *)((int)local_11c + 4) + 4) = *(int *)((int)local_11c + 4) + -0x68;
  basic_filebuf_L_char_Cstd__char_traits_L_char_G___G___dtor((basic_filebuf_L_char_Cstd__char_traits_L_char_G___G_ *)local_118);
  basic_ostream_L_char_Cstd__char_traits_L_char_G___G___dtor((basic_ostream_L_char_Cstd__char_traits_L_char_G___G_ *)(local_118 + 4));
  local_b4._pad_0x0_0 = (int)_vftable__exref;
  std__ios_base___Ios_base_dtor((ios_base *)&local_b4);
  (*(uint32_t*)&(local_124)) = (uint32_t)(uintptr_t)(&vftable_550);
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
  }
  return;
}

//==== 00831440 GeneralExceptionHandler ====


/* void __cdecl util__GeneralExceptionHandler(void) */

void __cdecl util__GeneralExceptionHandler(void)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(GetBacktrace(&SStack_10));
  Log(pSVar1);
  util__Str_char____Str_char(&SStack_10);
  DumpCrashLog();
                    /* WARNING: Subroutine does not return */
  exit(0);
}





//==== 00831470 GetBacktrace ====


/* class util__Str_L_char_G_ __cdecl util__GetBacktrace(void) */

Str_L_char_G_ * __cdecl util__GetBacktrace(Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  _CONTEXT _Stack_2d4;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  RtlCaptureContext(&_Stack_2d4);
  PrintCrashingStacktrace(__return_storage_ptr__,&_Stack_2d4);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 008314c0 GetErrorLog ====


/* class util__Str_L_char_G_ * __cdecl util__GetErrorLog(void) */

Str_L_char_G_ * __cdecl util__GetErrorLog(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00988cf0) {
    _Init_thread_header(&DAT_00988cf0);
    if (DAT_00988cf0 == -1) {
      atexit(FUN_0090ff10);
      _Init_thread_footer(&DAT_00988cf0);
    }
  }
  return (Str_L_char_G_ *)&DAT_00988ce4;
}





//==== 00831520 GetSignalName ====


/* class util__Str_L_char_G_ __cdecl util__GetSignalName(int) */

Str_L_char_G_ * __cdecl util__GetSignalName(Str_L_char_G_ *__return_storage_ptr__,int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0xb) {
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,"SIGSEGV");
    return __return_storage_ptr__;
  }
  if (param_1 == 4) {
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,"SIGILL");
    return __return_storage_ptr__;
  }
  if (param_1 == 2) {
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,"SIGINT");
    return __return_storage_ptr__;
  }
  if (param_1 == 8) {
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,"SIGFPE");
    return __return_storage_ptr__;
  }
  if (param_1 == 0xf) {
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,"SIGTERM");
    return __return_storage_ptr__;
  }
  pcVar1 = "SIGABRT";
  if (param_1 != 0x16) {
    pcVar1 = "Unknown";
  }
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pcVar1);
  return __return_storage_ptr__;
}





//==== 008315c0 InitializeCrashHandler ====


/* void __cdecl util__InitializeCrashHandler(void) */

void __cdecl util__InitializeCrashHandler(void)

{
  undefined8 stack0xfffffff4;
  undefined8 stack0xfffffffc;
  HMODULE hModule;
  FARPROC pFVar1;
  FARPROC pFVar2;
  int iVar3;
  undefined4 uStack00000004;
  uint uVar4;
  char *pcVar5;
  
  SetUnhandledExceptionFilter(WindowsExceptionHandler);
  set_purecall_handler((_purecall_handler)(uintptr_t)((_purecall_handler)(uintptr_t)(PurecallHandler)));
  _set_invalid_parameter_handler(InvalidParameterHandler);
  signal(4);
  signal(2);
  signal(8);
  signal(0xf);
  signal(0x16);
  hModule = (HMODULE)(uintptr_t)(LoadLibraryA("kernel32.__scrt_module_type__dll"));
  pFVar1 = (FARPROC)(uintptr_t)(GetProcAddress(hModule,"GetProcessUserModeExceptionPolicy"));
  pcVar5 = "SetProcessUserModeExceptionPolicy";
  pFVar2 = (FARPROC)(uintptr_t)(GetProcAddress(hModule,"SetProcessUserModeExceptionPolicy"));
  if ((*(char *)&(pFVar1) != 0) && (*(char *)&(pFVar2) != 0)) {
    pcVar5 = (char *)(&stack0xfffffff4);
    uVar4 = 0x83165e;
    iVar3 = (*pFVar1)();
    if (iVar3 != 0) {
      pcVar5 = (char *)(uVar4 & 0xfffffffe);
      (*pFVar2)();
    }
  }
  uStack00000004 = 0x831678;
  __security_check_cookie((uint)pcVar5 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00831680 InvalidParameterHandler ====


/* void __cdecl util__InvalidParameterHandler(wchar_t const *,wchar_t const *,wchar_t const
   *,unsigned int,unsigned int) */

void __cdecl
util__InvalidParameterHandler
          (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uint param_5)

{
  code *pcVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ SStack_10;
  
  pSVar2 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_10,L"Fatal Error: Invalid parameter detected in function %s at %s(%d).\n",
                  (uint)(ushort)*param_2,(uint)(ushort)*param_3,param_4));
  Log(pSVar2);
  util__Str_char____Str_char(&SStack_10);
  GeneralExceptionHandler();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





//==== 008316c0 Log ====


/* void __cdecl util__Log(class util__Str_L_char_G_ const &) */

void __cdecl util__Log(Str_L_char_G_ *param_1)

{
  char *pcVar1;
  LPCSTR lpOutputString;
  Str_L_char_G_ *this;
  
  if (param_1->Capacity < 1) {
    pcVar1 = "";
  }
  else {
    pcVar1 = param_1->Data;
  }
  _printf("%s",pcVar1);
  if (param_1->Capacity < 1) {
    lpOutputString = "";
  }
  else {
    lpOutputString = param_1->Data;
  }
  OutputDebugStringA(lpOutputString);
  this = (Str_L_char_G_ *)(uintptr_t)(GetErrorLog());
  Str_L_char_G___op_iadd(this,param_1);
  return;
}





//==== 00831710 LogAssert ====


/* void __cdecl util__LogAssert(char const *,int,char const *,char const *) */

void __cdecl util__LogAssert(char *param_1,int param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  Str_L_char_G_ *this;
  bool bVar4;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  SStack_20.Data = (char *)0x0;
  SStack_20.Capacity = 0;
  SStack_20.Length = 0;
  bVar4 = param_4 == (char *)0x0;
  if (bVar4) {
    pSVar2 = &SStack_14;
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    SStack_14.Length = 0;
  }
  else {
    pSVar2 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_2c," %s",param_4));
  }
  pcVar1 = SStack_14.Data;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_20,pSVar2);
  if ((bVar4) && (pcVar1 != (char *)0x0)) {
    port_op_delete(pcVar1);
  }
  if ((SStack_2c.Data != (char *)0x0) && (!bVar4)) {
    port_op_delete(SStack_2c.Data);
  }
  pcVar1 = SStack_20.Data;
  pcVar3 = "";
  if (0 < SStack_20.Capacity) {
    pcVar3 = SStack_20.Data;
  }
  pSVar2 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_2c,"Assertion at %s(%i):%s %s\n",param_1,param_2,pcVar3,param_3));
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  _printf("%s",pcVar3);
  if (pSVar2->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar2->Data;
  }
  OutputDebugStringA(pcVar3);
  this = (Str_L_char_G_ *)(uintptr_t)(GetErrorLog());
  Str_L_char_G___op_iadd(this,pSVar2);
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
  }
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
  }
  return;
}





//==== 00831830 LogEnsure ====


/* void __cdecl util__LogEnsure(char const *,int,char const *,char const *) */

void __cdecl util__LogEnsure(char *param_1,int param_2,char *param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  Str_L_char_G_ *this;
  int *piVar5;
  bool bVar6;
  Str_L_char_G_ SStack_38;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  piVar5 = (int *)(uintptr_t)(DAT_0095f4a4);
  if (DAT_0095f4a4 != DAT_0095f4a4 + DAT_0095f4a8 * 2) {
    do {
      if (((char *)*piVar5 == param_1) && (piVar5[1] == param_2)) {
        return;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != DAT_0095f4a4 + DAT_0095f4a8 * 2);
  }
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  bVar6 = param_4 == (char *)0x0;
  if (bVar6) {
    pSVar3 = &SStack_20;
    SStack_20.Data = (char *)0x0;
    SStack_20.Capacity = 0;
    SStack_20.Length = 0;
  }
  else {
    pSVar3 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_38," %s",param_4));
  }
  pcVar4 = SStack_20.Data;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,pSVar3);
  if ((bVar6) && (pcVar4 != (char *)0x0)) {
    port_op_delete(pcVar4);
  }
  if ((SStack_38.Data != (char *)0x0) && (!bVar6)) {
    port_op_delete(SStack_38.Data);
  }
  iVar2 = param_2;
  pcVar4 = "";
  if (0 < SStack_14.Capacity) {
    pcVar4 = SStack_14.Data;
  }
  pSVar3 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_38,"Ensure at %s(%i):%s %s\n",param_1,param_2,pcVar4,param_3));
  if (pSVar3->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar3->Data;
  }
  _printf("%s",pcVar4);
  if (pSVar3->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar3->Data;
  }
  OutputDebugStringA(pcVar4);
  this = (Str_L_char_G_ *)(uintptr_t)(GetErrorLog());
  Str_L_char_G___op_iadd(this,pSVar3);
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
  }
  iVar1 = DAT_0095f4a8;
  param_2 = DAT_0095f4a8 + 1;
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&EnsuresLogged,&param_2);
  bVar6 = Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___CheckSize
                    ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)&EnsuresLogged,iVar1);
  iVar1 = DAT_0095f4a8;
  piVar5 = (int *)(uintptr_t)(DAT_0095f4a4);
  if (bVar6) {
    ((undefined4 *)0x0095f4a4u)[DAT_0095f4a8 * 2 + -2] = (int)param_1;
    piVar5[iVar1 * 2 + -1] = iVar2;
  }
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_38,"Unable to generate an error log file.");
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_2c,"An error log has been successfully dumped out.");
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_20,"The program has recovered from a serious error.");
  DumpLog(&SStack_20,&SStack_2c,&SStack_38);
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
  }
  return;
}





//==== 00831a20 OpenWebsite ====


/* void __cdecl util__OpenWebsite(class util__Str_L_char_G_ const &) */

void __cdecl util__OpenWebsite(Str_L_char_G_ *param_1)

{
  LPCSTR lpFile;
  
  if (param_1->Capacity < 1) {
    lpFile = "";
  }
  else {
    lpFile = param_1->Data;
  }
  ShellExecuteA((HWND)0x0,"open",lpFile,(LPCSTR)0x0,(LPCSTR)0x0,1);
  return;
}





//==== 00831a50 PrintCrashingStacktrace ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class util__Str_L_char_G_ __cdecl util__PrintCrashingStacktrace(struct _CONTEXT *) */

Str_L_char_G_ * __cdecl
util__PrintCrashingStacktrace(Str_L_char_G_ *__return_storage_ptr__,_CONTEXT *param_1)

{
  undefined8 stack0xfffffffc;
  uint uVar1;
  char *pcVar2;
  char cVar3;
  HANDLE pvVar4;
  HANDLE pvVar5;
  int iVar6;
  char *pcVar7;
  Str_L_char_G_ *pSVar8;
  DWORD DVar9;
  char *pcVar10;
  char *pcVar11;
  code *pcVar12;
  DWORD *pDVar13;
  _CONTEXT *p_Var14;
  code *pcVar15;
  undefined4 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  Str_L_char_G_ SStack_118;
  Str_L_char_G_ SStack_10c;
  Str_L_char_G_ SStack_100;
  Str_L_char_G_ SStack_f4;
  Str_L_char_G_ SStack_e8;
  _CONTEXT *p_Stack_dc;
  Str_L_char_G_ *pSStack_d8;
  Str_L_char_G_ SStack_d4;
  Str_L_char_G_ SStack_c8;
  int iStack_bc;
  DWORD DStack_b8;
  undefined1 auStack_b4 [4];
  undefined4 uStack_b0;
  DWORD DStack_a0;
  undefined4 uStack_98;
  DWORD DStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_14;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  uVar20 = 1;
  uVar19 = 0;
  pSStack_d8 = __return_storage_ptr__;
  p_Stack_dc = param_1;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  pvVar4 = (HANDLE)(uintptr_t)(GetCurrentProcess());
  SymInitialize(pvVar4,uVar19,uVar20);
  memset(auStack_b4,0,0xa0);
  DStack_b8 = param_1->Eip;
  DStack_94 = param_1->Esp;
  DStack_a0 = param_1->Ebp;
  uVar20 = 0;
  pDVar13 = &DStack_b8;
  uStack_b0 = 3;
  uVar19 = 0;
  uStack_8c = 3;
  uStack_98 = 3;
  iStack_bc = 0;
  pcVar12 = (long long int (*)())(uintptr_t)(SymFunctionTableAccess_exref);
  pcVar15 = (long long int (*)())(uintptr_t)(SymGetModuleBase_exref);
  pvVar4 = (HANDLE)(uintptr_t)(GetCurrentThread());
  pvVar5 = (HANDLE)(uintptr_t)(GetCurrentProcess());
  iVar6 = StackWalk(0x14c,pvVar5,pvVar4,pDVar13,param_1,uVar19,pcVar12,pcVar15,uVar20);
  while (iVar6 != 0) {
    uStack_14 = 0;
    memset(&DAT_00988cf8,0,0x828);
    _DAT_00988cf8 = 0x58;
    _DAT_00988d48 = 2000;
    SStack_c8.Length = 0;
    do {
      iVar6 = SStack_c8.Length;
      SStack_c8.Length = iVar6 + 1;
    } while ((&DAT_0093fba5)[iVar6] != '\0');
    uVar1 = iVar6 + 2;
    (*(uint64_t*)&(SStack_c8)) = (ulonglong)uVar1 << 0x20;
    pcVar7 = (char *)port_op_new(uVar1);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x0;
    }
    else {
      memset(pcVar7,0,uVar1);
    }
    SStack_c8.Data = pcVar7;
    cVar3 = 'U';
    iVar6 = (int)s_Unknown - (int)pcVar7;
    do {
      *pcVar7 = cVar3;
      pcVar7 = pcVar7 + 1;
      cVar3 = pcVar7[iVar6];
    } while (cVar3 != '\0');
    *pcVar7 = '\0';
    puVar17 = &uStack_14;
    puVar18 = (undefined *)(&DAT_00988cf8);
    uVar19 = 0;
    DVar9 = DStack_b8;
    pvVar4 = (HANDLE)(uintptr_t)(GetCurrentProcess());
    iVar6 = SymFromAddr(pvVar4,DVar9,uVar19,puVar17,puVar18);
    pcVar12 = (long long int (*)())(uintptr_t)(GetLastError_exref);
    if (iVar6 == 0) {
      DVar9 = GetLastError();
      pSVar8 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_f4,"Function Error %i",DVar9));
      util__Maybe_struct_util__ClassMember___operator(&SStack_c8,pSVar8);
      if (SStack_f4.Data != (char *)0x0) {
        port_op_delete(SStack_f4.Data);
        SStack_f4.Data = (char *)0x0;
      }
    }
    else {
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_e8,&DAT_00988d4c);
      util__Maybe_struct_util__ClassMember___operator(&SStack_c8,&SStack_e8);
      pcVar12 = (long long int (*)())(uintptr_t)(GetLastError_exref);
      if (SStack_e8.Data != (char *)0x0) {
        port_op_delete(SStack_e8.Data);
        SStack_e8.Data = (char *)0x0;
        pcVar12 = (long long int (*)())(uintptr_t)(GetLastError_exref);
      }
    }
    SymSetOptions(0x10);
    puVar18 = (undefined *)(&DAT_00989520);
    uStack_c = (undefined4)uStack_14;
    puVar16 = &uStack_c;
    uVar19 = 0;
    uRam00989524 = 0;
    DAT_00989528 = 0;
    DAT_0098952c = 0;
    _DAT_00989530 = 0;
    _DAT_00989520 = 0x18;
    SStack_d4.Data = (char *)0x0;
    SStack_d4.Capacity = 0;
    SStack_d4.Length = 0;
    DVar9 = DStack_b8;
    pvVar4 = (HANDLE)(uintptr_t)(GetCurrentProcess());
    iVar6 = SymGetLineFromAddr64(pvVar4,DVar9,uVar19,puVar16,puVar18);
    if (iVar6 == 0) {
      uVar19 = (*pcVar12)();
      pSVar8 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_10c,"LineType__Line Info Error %i",uVar19));
      util__Maybe_struct_util__ClassMember___operator(&SStack_d4,pSVar8);
      if (SStack_10c.Data != (char *)0x0) {
        port_op_delete(SStack_10c.Data);
        SStack_10c.Data = (char *)0x0;
      }
    }
    else {
      pSVar8 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_100,"%s(%i)",DAT_0098952c,DAT_00989528));
      util__Maybe_struct_util__ClassMember___operator(&SStack_d4,pSVar8);
      if (SStack_100.Data != (char *)0x0) {
        port_op_delete(SStack_100.Data);
        SStack_100.Data = (char *)0x0;
      }
    }
    pcVar7 = SStack_d4.Data;
    pcVar2 = SStack_c8.Data;
    pcVar11 = "";
    if (0 < SStack_d4.Capacity) {
      pcVar11 = SStack_d4.Data;
    }
    pcVar10 = "";
    if (0 < SStack_c8.Capacity) {
      pcVar10 = SStack_c8.Data;
    }
    pSVar8 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_118,"%i 0x%08x %-40s %s\n",iStack_bc,DStack_b8,pcVar10,pcVar11));
    Str_L_char_G___op_iadd(pSStack_d8,pSVar8);
    if (SStack_118.Data != (char *)0x0) {
      port_op_delete(SStack_118.Data);
      SStack_118.Data = (char *)0x0;
    }
    iStack_bc = iStack_bc + 1;
    if (pcVar7 != (char *)0x0) {
      port_op_delete(pcVar7);
      (*(uint64_t*)&(SStack_d4)) = (*(uint64_t*)&(SStack_d4)) & 0xffffffff00000000;
    }
    if (pcVar2 != (char *)0x0) {
      port_op_delete(pcVar2);
      (*(uint64_t*)&(SStack_c8)) = (*(uint64_t*)&(SStack_c8)) & 0xffffffff00000000;
    }
    uVar20 = 0;
    pDVar13 = &DStack_b8;
    uVar19 = 0;
    p_Var14 = p_Stack_dc;
    pcVar12 = (long long int (*)())(uintptr_t)(SymFunctionTableAccess_exref);
    pcVar15 = (long long int (*)())(uintptr_t)(SymGetModuleBase_exref);
    pvVar4 = (HANDLE)(uintptr_t)(GetCurrentThread());
    pvVar5 = (HANDLE)(uintptr_t)(GetCurrentProcess());
    iVar6 = StackWalk(0x14c,pvVar5,pvVar4,pDVar13,p_Var14,uVar19,pcVar12,pcVar15,uVar20);
  }
  pvVar4 = (HANDLE)(uintptr_t)(GetCurrentProcess());
  SymCleanup(pvVar4);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pSStack_d8;
}





//==== 00831eb0 PurecallHandler ====


/* void __cdecl util__PurecallHandler(void) */

void __cdecl util__PurecallHandler(void)

{
  code *pcVar1;
  Str_L_char_G_ SStack_10;
  
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_10,"Fatal Error: Pure virtual function called.\n");
  Log(&SStack_10);
  util__Str_char____Str_char(&SStack_10);
  GeneralExceptionHandler();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





//==== 00831ee0 SetSupportWebsiteUrl ====


/* void __cdecl util__SetSupportWebsiteUrl(class util__Str_L_char_G_ const &) */

void __cdecl util__SetSupportWebsiteUrl(Str_L_char_G_ *param_1)

{
  util__Maybe_struct_util__ClassMember___operator(&SupportWebsiteUrl,param_1);
  return;
}





//==== 00831f00 SleepForMilliseconds ====


/* void __cdecl util__SleepForMilliseconds(unsigned int) */

void __cdecl util__SleepForMilliseconds(uint)

{
  Sleep(param_1);
  return;
}





//==== 00831f10 WindowsExceptionHandler ====


/* long __stdcall util__WindowsExceptionHandler(struct _EXCEPTION_POINTERS *) */

long util__WindowsExceptionHandler(_EXCEPTION_POINTERS *param_1)

{
  undefined8 stack0xfffffffc;
  uint uVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  Str_L_char_G_ *this;
  long lVar4;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar1 = param_1->ExceptionRecord->ExceptionCode;
  if (uVar1 < 0xc0000006) {
    if (uVar1 == 0xc0000005) {
      pcVar3 = "Error: EXCEPTION_ACCESS_VIOLATION\n";
    }
    else if (uVar1 == 0x80000002) {
      pcVar3 = "Error: EXCEPTION_DATATYPE_MISALIGNMENT\n";
    }
    else {
      if (uVar1 != 0x80000003) {
        if (uVar1 == 0x80000004) {
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_SINGLE_STEP\n");
          Log(&SStack_14);
          util__Str_char____Str_char(&SStack_14);
          goto LAB_0083222c;
        }
        goto LAB_00832203;
      }
      pcVar3 = "Error: EXCEPTION_BREAKPOINT\n";
    }
LAB_00832208:
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,pcVar3);
    Log(&SStack_14);
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
    }
  }
  else {
    switch(uVar1) {
    case 0xc0000006:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_IN_PAGE_ERROR\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    default:
LAB_00832203:
      pcVar3 = "Error: Unrecognized Exception\n";
      goto LAB_00832208;
    case 0xc000001d:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_ILLEGAL_INSTRUCTION\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000025:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_NONCONTINUABLE_EXCEPTION\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000026:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_INVALID_DISPOSITION\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc000008c:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_ARRAY_BOUNDS_EXCEEDED\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc000008d:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_FLT_DENORMAL_OPERAND\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc000008e:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_FLT_DIVIDE_BY_ZERO\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc000008f:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_FLT_INEXACT_RESULT\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000090:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_FLT_INVALID_OPERATION\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000091:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_FLT_OVERFLOW\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000092:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_FLT_STACK_CHECK\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000093:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_FLT_UNDERFLOW\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000094:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_INT_DIVIDE_BY_ZERO\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000095:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_INT_OVERFLOW\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc0000096:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_PRIV_INSTRUCTION\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
      break;
    case 0xc00000fd:
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,"Error: EXCEPTION_STACK_OVERFLOW\n");
      Log(&SStack_14);
      util__Str_char____Str_char(&SStack_14);
    }
  }
LAB_0083222c:
  if (param_1->ExceptionRecord->ExceptionCode != 0xc00000fd) {
    SStack_14.Length = 0;
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    PrintCrashingStacktrace(&SStack_14,param_1->ContextRecord);
    pcVar3 = "";
    if (0 < SStack_14.Capacity) {
      pcVar3 = SStack_14.Data;
    }
    pSVar2 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_20,"%s",pcVar3));
    if (pSVar2->Capacity < 1) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pSVar2->Data;
    }
    _printf("%s",pcVar3);
    if (pSVar2->Capacity < 1) {
      pcVar3 = "";
    }
    else {
      pcVar3 = pSVar2->Data;
    }
    OutputDebugStringA(pcVar3);
    this = (Str_L_char_G_ *)(uintptr_t)(GetErrorLog());
    Str_L_char_G___op_iadd(this,pSVar2);
    if (SStack_20.Data != (char *)0x0) {
      port_op_delete(SStack_20.Data);
    }
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
    }
  }
  DumpCrashLog();
  lVar4 = 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return lVar4;
}





//==== 00832430 Endwrite ====


/* protected: bool  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G____Endwrite(void) */

bool 
std__basic_filebuf_char_struct_std__char_traits_char______Endwrite
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  int iVar2;
  size_t sVar3;
  char ****ppppcVar4;
  size_t _Count;
  uint uVar5;
  char *pcStack_24;
  char ***apppcStack_20 [4];
  int iStack_10;
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(int *)(this + 0x38) == 0) ||
     (this[0x3d] == (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x0)) {
    uVar1 = 1;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar1;
  }
  iVar2 = (**(code **)(*(int *)this + 0xc))(0xffffffff);
  if (iVar2 == -1) {
    uVar1 = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return (bool)uVar1;
  }
  iStack_10 = 0;
  uStack_c = 0xf;
  apppcStack_20[0] = (char ***)((uint)apppcStack_20[0] & 0xffffff00);
  basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G___assign
            ((basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *)
             apppcStack_20,8,'\0');
  while( true ) {
    ppppcVar4 = apppcStack_20;
    if (0xf < uStack_c) {
      ppppcVar4 = (char ****)apppcStack_20[0];
    }
    iVar2 = std__codecvt_L_char_Cchar_Cstruct__Mbstatet_G___unshift
                      (*(codecvt_L_char_Cchar_Cstruct__Mbstatet_G_ **)(this + 0x38),
                       (_Mbstatet *)(this + 0x40),(char *)ppppcVar4,
                       (char *)((int)ppppcVar4 + iStack_10),&pcStack_24);
    if (iVar2 != 0) break;
    this[0x3d] = (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x0;
LAB_008324e1:
    ppppcVar4 = apppcStack_20;
    if (0xf < uStack_c) {
      ppppcVar4 = (char ****)apppcStack_20[0];
    }
    _Count = (int)pcStack_24 - (int)ppppcVar4;
    if (_Count != 0) {
      ppppcVar4 = apppcStack_20;
      if (0xf < uStack_c) {
        ppppcVar4 = (char ****)apppcStack_20[0];
      }
      sVar3 = fwrite(ppppcVar4,1,_Count,*(FILE **)(this + 0x4c));
      if (_Count != sVar3) goto LAB_008324d9;
    }
    if (this[0x3d] == (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x0) goto LAB_0083253c;
    if (_Count == 0) {
      basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G___append
                ((basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *)
                 apppcStack_20,8,'\0');
    }
  }
  if (iVar2 == 1) goto LAB_008324e1;
  if (iVar2 != 3) {
LAB_008324d9:
    uVar1 = 0;
    goto LAB_0083253e;
  }
LAB_0083253c:
  uVar1 = 1;
LAB_0083253e:
  if (0xf < uStack_c) {
    uVar5 = uStack_c + 1;
    ppppcVar4 = (char ****)apppcStack_20[0];
    if (0xfff < uVar5) {
      ppppcVar4 = (char ****)apppcStack_20[0][-1];
      uVar5 = uStack_c + 0x24;
      if ((char *)0x1f < (char *)((int)apppcStack_20[0] + (-4 - (int)ppppcVar4))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    port_op_delete(ppppcVar4,uVar5);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}





//==== 008325a0 Lock ====


/* public: virtual void  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G____Lock(void) */

void 
std__basic_filebuf_char_struct_std__char_traits_char______Lock
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  if (*(FILE **)(this + 0x4c) != (FILE *)0x0) {
    _lock_file(*(FILE **)(this + 0x4c));
  }
  return;
}





//==== 008325b0 Reset_back ====


/* private: void  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G____Reset_back(void) */

void 
std__basic_filebuf_char_struct_std__char_traits_char______Reset_back
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  int iVar1;
  int iVar2;
  
  if ((basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)**(int **)(this + 0xc) == this + 0x3c) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    **(int **)(this + 0xc) = iVar1;
    **(int **)(this + 0x1c) = iVar1;
    **(int **)(this + 0x2c) = iVar2 - iVar1;
  }
  return;
}





//==== 008325e0 Unlock ====


/* public: virtual void  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G____Unlock(void) */

void 
std__basic_filebuf_char_struct_std__char_traits_char______Unlock
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  if (*(FILE **)(this + 0x4c) != (FILE *)0x0) {
    _unlock_file(*(FILE **)(this + 0x4c));
  }
  return;
}





//==== 008325f0 Xlen ====


/* public: static void __cdecl std__basic_string_L_char_Cstructstd__char_traits_L_char_G__Cclass_std__allocator_L_char_G__G____Xlen(void) */

void __cdecl
std__basic_string_char_struct_std__char_traits_char__class_std__allocator_char______Xlen(void)

{
  code *pcVar1;
  
  _Xlength_error("string too long");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}





//==== 00832600 append ====


/* public: class std__basic_string_L_char_Cstructstd__char_traits_L_char_G__Cclassstd__allocator_L_char_G__G_ &
    std__basic_string_char_struct_std__char_traits_char__class_std__allocator_char_____append(unsigned int,char) */

basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ * 
std__basic_string_char_struct_std__char_traits_char__class_std__allocator_char_____append__o2
          (basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *this,
          uint param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *pbVar3;
  undefined3 in_stack_00000009;
  
  uVar2 = param_1;
  iVar1 = *(int *)(this + 0x10);
  if (param_1 <= *(uint *)(this + 0x14) - iVar1) {
    *(uint *)(this + 0x10) = iVar1 + param_1;
    pbVar3 = this;
    if (0xf < *(uint *)(this + 0x14)) {
      pbVar3 = *(basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ **)
                this;
    }
    memset(pbVar3 + iVar1,(int)param_2,param_1);
    (pbVar3 + iVar1)[param_1] =
         (basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_)0x0;
    return this;
  }
  param_1 = param_1 & 0xffffff00;
  pbVar3 = (basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *)
           FUN_00830bd0(uVar2,param_1,uVar2,_param_2);
  return pbVar3;
}





//==== 00832660 assign ====


/* public: class std__basic_string_L_char_Cstructstd__char_traits_L_char_G__Cclassstd__allocator_L_char_G__G_ &
    std__basic_string_char_struct_std__char_traits_char__class_std__allocator_char_____assign(unsigned int,char) */

basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ * 
std__basic_string_char_struct_std__char_traits_char__class_std__allocator_char_____assign__o2
          (basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *this,
          uint param_1,char param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *pbVar6;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(this + 0x14);
  if (param_1 <= uVar1) {
    pbVar6 = this;
    if (0xf < uVar1) {
      pbVar6 = *(basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ **)
                this;
    }
    *(uint *)(this + 0x10) = param_1;
    memset(pbVar6,(int)param_2,param_1);
    pbVar6[param_1] =
         (basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_)0x0;
    return this;
  }
  if (0x7fffffff < param_1) {
    _Xlen();
    pcVar2 = (code *)swi(3);
    pbVar6 = (basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *)
             (*pcVar2)();
    return pbVar6;
  }
  uVar9 = param_1 | 0xf;
  if (uVar9 < 0x80000000) {
    if (0x7fffffff - (uVar1 >> 1) < uVar1) {
      uVar9 = 0x7fffffff;
    }
    else {
      uVar7 = (uVar1 >> 1) + uVar1;
      if (uVar9 < uVar7) {
        uVar9 = uVar7;
      }
    }
  }
  else {
    uVar9 = 0x7fffffff;
  }
  uVar7 = -(uint)(0xfffffffe < uVar9) | uVar9 + 1;
  if (uVar7 < 0x1000) {
    if (uVar7 == 0) {
      pvVar8 = (void *)0x0;
    }
    else {
      pvVar8 = (void *)(uintptr_t)(port_op_new(uVar7));
    }
  }
  else {
    uVar3 = uVar7 + 0x23;
    if (uVar3 <= uVar7) {
      uVar3 = 0xffffffff;
    }
    pvVar4 = (void *)(uintptr_t)(port_op_new(uVar3));
    if (pvVar4 == (void *)0x0) goto LAB_0083278e;
    pvVar8 = (void *)((int)pvVar4 + 0x23U & 0xffffffe0);
    *(void **)((int)pvVar8 + -4) = pvVar4;
  }
  *(uint *)(this + 0x10) = param_1;
  *(uint *)(this + 0x14) = uVar9;
  memset(pvVar8,(int)param_2,param_1);
  *(undefined1 *)(param_1 + (int)pvVar8) = 0;
  if (0xf < uVar1) {
    uVar9 = uVar1 + 1;
    pvVar4 = *(void **)this;
    pvVar5 = pvVar4;
    if (0xfff < uVar9) {
      pvVar5 = *(void **)((int)pvVar4 + -4);
      uVar9 = uVar1 + 0x24;
      if (0x1f < (uint)((int)pvVar4 + (-4 - (int)pvVar5))) {
LAB_0083278e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    port_op_delete(pvVar5,uVar9);
  }
  *(void **)this = pvVar8;
  return this;
}





//==== 008327a0 imbue ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* protected: virtual void  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G___imbue(class std__locale const &) */

void 
std__basic_filebuf_char_struct_std__char_traits_char_____imbue
          (basic_filebuf_L_char_Cstd__char_traits_L_char_G___G_ *this,locale *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint uVar2;
  _Locimp *p_Var3;
  facet *pfVar4;
  bad_cast local_20;
  locale *local_14;
  facet *local_10;
  _Lockit local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_14 = param_1;
  std___Lockit___Lockit(&local_c,0);
  local_10 = (facet *)(uintptr_t)(_Facetptr_L_std__codecvt_L_char_Cchar_C_Mbstatet_G___G____Psave);
  uVar2 = std__locale__id__operator_unsigned_int((id *)id_exref);
  p_Var3 = param_1[1]._Ptr;
  if (uVar2 < p_Var3->_Facetcount) {
    pfVar4 = p_Var3->_Facetvec[uVar2];
    if (pfVar4 != (facet *)0x0) goto LAB_00832844;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (p_Var3->_Xparent == false) {
LAB_00832808:
    if (pfVar4 != (facet *)0x0) goto LAB_00832844;
  }
  else {
    p_Var3 = (_Locimp *)(uintptr_t)(locale___Getgloballocale());
    if (uVar2 < p_Var3->_Facetcount) {
      pfVar4 = p_Var3->_Facetvec[uVar2];
      goto LAB_00832808;
    }
  }
  pfVar4 = local_10;
  if (local_10 == (facet *)0x0) {
    uVar2 = std__codecvt_L_char_Cchar_C_Mbstatet_G____Getcat(&local_10,local_14);
    pfVar4 = local_10;
    if (uVar2 == 0xffffffff) {
      bad_cast__bad_cast(&local_20);
                    /* WARNING: Subroutine does not return */
      CxxThrowException_8__o3(&local_20,(ThrowInfo *)&__TI2_AVbad_cast_std__);
    }
    _Facet_Register((_Facet_base *)local_10);
    (**(code **)(pfVar4->_pad_0x0_0 + 4))();
    *(undefined4 *)&(_Facetptr_L_std__codecvt_L_char_Cchar_C_Mbstatet_G___G____Psave) = (undefined4)(uintptr_t)(local_10);
    pfVar4 = local_10;
  }
LAB_00832844:
  _Lockit__dtor(&local_c);
  bVar1 = std__codecvt_base__always_noconv((codecvt_base *)pfVar4);
  if (!bVar1) {
    this->_Set_eback = (char *)pfVar4;
    std__basic_streambuf_L_char_Cstd__char_traits_L_char_G___G____Init
              ((basic_streambuf_L_char_Cstd__char_traits_L_char_G___G_ *)this);
    return;
  }
  this->_Set_eback = (char *)0x0;
  return;
}

//==== 008328b0 overflow ====


/* protected: virtual int  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G___overflow(int) */

int 
std__basic_filebuf_char_struct_std__char_traits_char_____overflow
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this,int param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  char *pcVar2;
  int iVar3;
  char ****ppppcVar4;
  size_t sVar5;
  char ****ppppcVar6;
  size_t _Count;
  char cVar7;
  uint uVar8;
  char *pcStack_2c;
  char *pcStack_28;
  char ***apppcStack_24 [4];
  uint uStack_14;
  uint uStack_10;
  char cStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_1 == -1) {
    iVar1 = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  }
  uVar8 = **(uint **)(this + 0x20);
  cVar7 = (char)param_1;
  if ((uVar8 != 0) && (uVar8 < **(int **)(this + 0x30) + uVar8)) {
    pcVar2 = (char *)(uintptr_t)(std__basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G____Pninc
                       ((basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)this));
    *pcVar2 = cVar7;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return param_1;
  }
  if (*(int *)(this + 0x4c) == 0) {
    iVar1 = -1;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return iVar1;
  }
  if ((basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)**(int **)(this + 0xc) == this + 0x3c) {
    iVar1 = *(int *)(this + 0x50);
    iVar3 = *(int *)(this + 0x54);
    **(int **)(this + 0xc) = iVar1;
    **(int **)(this + 0x1c) = iVar1;
    **(int **)(this + 0x2c) = iVar3 - iVar1;
  }
  if (*(int *)(this + 0x38) == 0) {
    iVar3 = fputc((int)cVar7,*(FILE **)(this + 0x4c));
    iVar1 = -1;
    if (iVar3 != -1) {
      iVar1 = param_1;
    }
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return iVar1;
  }
  uStack_14 = 0;
  uStack_10 = 0xf;
  apppcStack_24[0] = (char ***)((uint)apppcStack_24[0] & 0xffffff00);
  cStack_9 = cVar7;
  basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G___assign
            ((basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *)
             apppcStack_24,8,'\0');
LAB_008329b0:
  ppppcVar4 = apppcStack_24;
  if (0xf < uStack_10) {
    ppppcVar4 = (char ****)apppcStack_24[0];
  }
  ppppcVar6 = apppcStack_24;
  if (0xf < uStack_10) {
    ppppcVar6 = (char ****)apppcStack_24[0];
  }
  iVar1 = std__codecvt_L_char_Cchar_Cstruct__Mbstatet_G___out
                    (*(codecvt_L_char_Cchar_Cstruct__Mbstatet_G_ **)(this + 0x38),
                     (_Mbstatet *)(this + 0x40),&cStack_9,(char *)&uStack_8,&pcStack_2c,
                     (char *)ppppcVar6,(char *)((int)ppppcVar4 + uStack_14),&pcStack_28);
  if (iVar1 < 0) goto LAB_00832a8d;
  if (iVar1 < 2) {
    ppppcVar4 = apppcStack_24;
    if (0xf < uStack_10) {
      ppppcVar4 = (char ****)apppcStack_24[0];
    }
    _Count = (int)pcStack_28 - (int)ppppcVar4;
    if (_Count != 0) {
      ppppcVar4 = apppcStack_24;
      if (0xf < uStack_10) {
        ppppcVar4 = (char ****)apppcStack_24[0];
      }
      sVar5 = fwrite(ppppcVar4,1,_Count,*(FILE **)(this + 0x4c));
      if (_Count != sVar5) goto LAB_00832a8d;
    }
    this[0x3d] = (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x1;
    iVar1 = param_1;
    if (pcStack_2c == &cStack_9) goto code_r0x00832a3b;
  }
  else {
    if (iVar1 != 3) goto LAB_00832a8d;
    iVar3 = fputc((int)cStack_9,*(FILE **)(this + 0x4c));
    iVar1 = -1;
    if (iVar3 != -1) {
      iVar1 = param_1;
    }
  }
  goto LAB_00832a90;
code_r0x00832a3b:
  if (_Count == 0) {
    if (0x1f < uStack_14) {
LAB_00832a8d:
      iVar1 = -1;
LAB_00832a90:
      if (0xf < uStack_10) {
        uVar8 = uStack_10 + 1;
        ppppcVar4 = (char ****)apppcStack_24[0];
        if (0xfff < uVar8) {
          ppppcVar4 = (char ****)apppcStack_24[0][-1];
          uVar8 = uStack_10 + 0x24;
          if ((char *)0x1f < (char *)((int)apppcStack_24[0] + (-4 - (int)ppppcVar4))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        port_op_delete(ppppcVar4,uVar8);
      }
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return iVar1;
    }
    basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G___append
              ((basic_string_L_char_Cstruct_std__char_traits_L_char_G__Cclass_std__allocator_L_char_G___G_ *)
               apppcStack_24,8,'\0');
  }
  goto LAB_008329b0;
}





//==== 00832ae0 pbackfail ====


/* protected: virtual int  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G___pbackfail(int) */

int 
std__basic_filebuf_char_struct_std__char_traits_char_____pbackfail
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this,int param_1)

{
  basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *pbVar1;
  uint uVar2;
  basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *pbVar3;
  int iVar4;
  
  uVar2 = **(uint **)(this + 0x1c);
  if (((uVar2 != 0) && (**(uint **)(this + 0xc) < uVar2)) &&
     ((param_1 == -1 || ((uint)*(byte *)(uVar2 - 1) == param_1)))) {
    **(int **)(this + 0x2c) = **(int **)(this + 0x2c) + 1;
    **(int **)(this + 0x1c) = **(int **)(this + 0x1c) + -1;
    if (param_1 == -1) {
      param_1 = 0;
    }
    return param_1;
  }
  if ((param_1 != -1) && (*(FILE **)(this + 0x4c) != (FILE *)0x0)) {
    if ((*(int *)(this + 0x38) == 0) &&
       (iVar4 = ungetc(param_1 & 0xff,*(FILE **)(this + 0x4c)), iVar4 != -1)) {
      return param_1;
    }
    pbVar1 = this + 0x3c;
    if ((basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)**(int **)(this + 0x1c) != pbVar1) {
      *pbVar1 = SUB41(param_1,0);
      pbVar3 = (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)**(int **)(this + 0xc);
      if (pbVar3 != pbVar1) {
        *(basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ **)(this + 0x50) = pbVar3;
        *(int *)(this + 0x54) = **(int **)(this + 0x2c) + **(int **)(this + 0x1c);
      }
      **(int **)(this + 0xc) = (int)pbVar1;
      **(int **)(this + 0x1c) = (int)pbVar1;
      **(undefined4 **)(this + 0x2c) = (undefined4)(uintptr_t)(this + (0x3d - (int)pbVar1));
      return param_1;
    }
  }
  return -1;
}





//==== 00832d90 setbuf ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* protected: virtual class std__basic_streambuf_L_char_Cstructstd__char_traits_L_char_G__G_ * 
   std__basic_filebuf_char_struct_std__char_traits_char_____setbuf(char *,__int64) */

basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ * 
std__basic_filebuf_char_struct_std__char_traits_char_____setbuf__o2
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this,char *param_1,__int64 param_2)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *pbVar2;
  size_t in_stack_00000008;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(FILE **)(this + 0x4c) != (FILE *)0x0) {
    if ((param_1 == (char *)0x0) && (in_stack_00000008 == 0 && (int)param_2 == 0)) {
      iVar1 = 4;
    }
    else {
      iVar1 = 0;
    }
    iVar1 = setvbuf(*(FILE **)(this + 0x4c),param_1,iVar1,in_stack_00000008);
    if (iVar1 == 0) {
      iVar1 = *(int *)(this + 0x4c);
      this[0x48] = (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x1;
      this[0x3d] = (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_)0x0;
      std__basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G____Init
                ((basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)this);
      if (iVar1 != 0) {
        uStack_c = 0;
        uStack_10 = 0;
        uStack_14 = 0;
        get_stream_buffer_pointers(iVar1,&uStack_c,&uStack_10,&uStack_14);
        *(undefined4 *)(this + 0xc) = uStack_c;
        *(undefined4 *)(this + 0x10) = uStack_c;
        *(undefined4 *)(this + 0x1c) = uStack_10;
        *(undefined4 *)(this + 0x20) = uStack_10;
        *(undefined4 *)(this + 0x2c) = uStack_14;
        *(undefined4 *)(this + 0x30) = uStack_14;
      }
      *(int *)(this + 0x4c) = iVar1;
      *(undefined4 *)(this + 0x40) = (undefined4)(uintptr_t) __Stinit;
      *(undefined4 *)(this + 0x44) = DAT_00989540;
      *(undefined4 *)(this + 0x38) = 0;
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return (basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)this;
    }
  }
  pbVar2 = (basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)0x0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pbVar2;
}





//==== 00832e80 sync ====


/* protected: virtual int  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G___sync(void) */

int 
std__basic_filebuf_char_struct_std__char_traits_char_____sync
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x4c) != 0) {
    iVar1 = (**(code **)(*(int *)this + 0xc))(0xffffffff);
    if (iVar1 != -1) {
      iVar1 = fflush(*(FILE **)(this + 0x4c));
      if (iVar1 < 0) {
        return -1;
      }
    }
  }
  return 0;
}





//==== 00832eb0 uflow ====


/* protected: virtual int  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G___uflow(void) */

int 
std__basic_filebuf_char_struct_std__char_traits_char_____uflow
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  byte ******ppppppbVar6;
  byte ******ppppppbVar7;
  uint uVar8;
  uint uStack_30;
  byte *pbStack_2c;
  char *pcStack_28;
  byte *****apppppbStack_24 [4];
  uint uStack_14;
  uint uStack_10;
  byte bStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar3 = **(uint **)(this + 0x1c);
  if ((uVar3 != 0) && (uVar3 < **(int **)(this + 0x2c) + uVar3)) {
    pbVar2 = (byte *)std__basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G____Gninc
                               ((basic_streambuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)this);
    uVar3 = (uint)*pbVar2;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  }
  if (*(int *)(this + 0x4c) == 0) {
    iVar4 = -1;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return iVar4;
  }
  if ((basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *)**(int **)(this + 0xc) == this + 0x3c) {
    iVar4 = *(int *)(this + 0x54);
    iVar1 = *(int *)(this + 0x50);
    **(int **)(this + 0xc) = iVar1;
    **(int **)(this + 0x1c) = iVar1;
    **(int **)(this + 0x2c) = iVar4 - iVar1;
  }
  if (*(int *)(this + 0x38) == 0) {
    uVar3 = fgetc(*(FILE **)(this + 0x4c));
    if (uVar3 == 0xffffffff) {
      iVar4 = -1;
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return iVar4;
    }
    uVar3 = uVar3 & 0xff;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return uVar3;
  }
  uStack_14 = 0;
  uStack_10 = 0xf;
  apppppbStack_24[0] = (byte *****)((uint)apppppbStack_24[0] & 0xffffff00);
  iVar4 = fgetc(*(FILE **)(this + 0x4c));
  while (iVar4 != -1) {
    if (uStack_10 == uStack_14) {
      uStack_30 = uStack_30 & 0xffffff00;
      FUN_00830bd0(1,uStack_30,1,iVar4);
    }
    else {
      ppppppbVar6 = apppppbStack_24;
      if (0xf < uStack_10) {
        ppppppbVar6 = (byte ******)apppppbStack_24[0];
      }
      pbVar2 = (byte *)((int)ppppppbVar6 + uStack_14);
      uStack_14 = uStack_14 + 1;
      *pbVar2 = (byte)iVar4;
      pbVar2[1] = 0;
    }
    ppppppbVar6 = apppppbStack_24;
    if (0xf < uStack_10) {
      ppppppbVar6 = (byte ******)apppppbStack_24[0];
    }
    ppppppbVar7 = apppppbStack_24;
    if (0xf < uStack_10) {
      ppppppbVar7 = (byte ******)apppppbStack_24[0];
    }
    iVar4 = std__codecvt_L_char_Cchar_Cstruct__Mbstatet_G___in
                      (*(codecvt_L_char_Cchar_Cstruct__Mbstatet_G_ **)(this + 0x38),
                       (_Mbstatet *)(this + 0x40),(char *)ppppppbVar7,
                       (char *)((int)ppppppbVar6 + uStack_14),&pcStack_28,(char *)&bStack_9,
                       (char *)&uStack_8,(char **)&pbStack_2c);
    if (iVar4 < 0) break;
    if (iVar4 < 2) {
      if (pbStack_2c != &bStack_9) {
        ppppppbVar6 = apppppbStack_24;
        if (0xf < uStack_10) {
          ppppppbVar6 = (byte ******)apppppbStack_24[0];
        }
        for (pbVar2 = (byte *)((int)ppppppbVar6 + (uStack_14 - (int)pcStack_28)); 0 < (int)pbVar2;
            pbVar2 = pbVar2 + -1) {
          ungetc((int)(char)(pbVar2 + -1)[(int)pcStack_28],*(FILE **)(this + 0x4c));
        }
        uVar3 = (uint)bStack_9;
        goto LAB_008330bf;
      }
      ppppppbVar6 = apppppbStack_24;
      if (0xf < uStack_10) {
        ppppppbVar6 = (byte ******)apppppbStack_24[0];
      }
      uVar3 = (int)pcStack_28 - (int)ppppppbVar6;
      if (uStack_14 < (uint)((int)pcStack_28 - (int)ppppppbVar6)) {
        uVar3 = uStack_14;
      }
      ppppppbVar6 = apppppbStack_24;
      if (0xf < uStack_10) {
        ppppppbVar6 = (byte ******)apppppbStack_24[0];
      }
      uStack_14 = uStack_14 - uVar3;
      memmove(ppppppbVar6,(byte *)((int)ppppppbVar6 + uVar3),uStack_14 + 1);
    }
    else {
      if (iVar4 != 3) break;
      if (uStack_14 != 0) {
        ppppppbVar6 = apppppbStack_24;
        if ((uStack_10 < 0x10) ||
           (ppppppbVar6 = (byte ******)apppppbStack_24[0],
           (byte ******)apppppbStack_24[0] != (byte ******)0x0)) {
          bStack_9 = *(byte *)ppppppbVar6;
          uVar3 = (uint)bStack_9;
        }
        else {
          bStack_9 = 0;
          piVar5 = (int *)(uintptr_t)(_errno());
          *piVar5 = 0x16;
          _invalid_parameter_noinfo();
          uVar3 = (uint)bStack_9;
        }
        goto LAB_008330bf;
      }
    }
    iVar4 = fgetc(*(FILE **)(this + 0x4c));
  }
  uVar3 = 0xffffffff;
LAB_008330bf:
  if (0xf < uStack_10) {
    uVar8 = uStack_10 + 1;
    ppppppbVar6 = (byte ******)apppppbStack_24[0];
    if (0xfff < uVar8) {
      ppppppbVar6 = (byte ******)apppppbStack_24[0][-1];
      uVar8 = uStack_10 + 0x24;
      if ((byte *)0x1f < (byte *)((int)apppppbStack_24[0] + (-4 - (int)ppppppbVar6))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    port_op_delete(ppppppbVar6,uVar8);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return uVar3;
}





//==== 00833150 underflow ====


/* protected: virtual int  std__basic_filebuf_L_char_Cstructstd__char_traits_L_char_G___G___underflow(void) */

int 
std__basic_filebuf_char_struct_std__char_traits_char_____underflow
          (basic_filebuf_L_char_Cstruct_std__char_traits_L_char_G___G_ *this)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)**(undefined4 **)(this + 0x1c);
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + **(int **)(this + 0x2c))) {
    return (uint)*pbVar1;
  }
  iVar2 = (**(code **)(*(int *)this + 0x1c))();
  if (iVar2 == -1) {
    return -1;
  }
  (**(code **)(*(int *)this + 0x10))(iVar2);
  return iVar2;
}





//==== 00833190 what ====


/* public: virtual char const * __thiscall std__exception__what(void)const  */

char * __thiscall std__exception__what(exception *this)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (this->_Mywhat != (char *)0x0) {
    pcVar1 = this->_Mywhat;
  }
  return pcVar1;
}





//==== 008331a0 Abs ====


/* float __cdecl util__Abs(float const &) */

float __cdecl util__Abs__o4(float *param_1)

{
  return ABS(*param_1);
}





//==== 008331d0 Abs_008331d0 ====


/* double __cdecl util__Abs(double const &) */

double __cdecl util__Abs__o5(double *param_1)

{
  return ABS(*param_1);
}





//==== 008331f0 Cbrt ====


/* double __cdecl util__Cbrt(double const &) */

double __cdecl util__Cbrt(double *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)cbrt(*param_1);
  return (double)fVar1;
}





//==== 00833210 Ceil ====


/* double __cdecl util__Ceil(double const &) */

double __cdecl util__Ceil(double *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)ceil(*param_1);
  return (double)fVar1;
}





//==== 00833230 Cos ====


/* double __cdecl util__Cos(double const &) */

double __cdecl util__Cos(double *param_1)

{
  return libm_sse2_cos_precise(*param_1);
}





//==== 00833250 Floor ====


/* double __cdecl util__Floor(double const &) */

double __cdecl util__Floor(double *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)floor(*param_1);
  return (double)fVar1;
}





//==== 00833270 Sin ====


/* double __cdecl util__Sin(double const &) */

double __cdecl util__Sin(double *param_1)

{
  return libm_sse2_sin_precise(*param_1);
}





//==== 008332e0 Sqrt_008332e0 ====


/* class util__Maybe_L_double_G_ __cdecl util__Sqrt(double const &) */

Maybe_L_double_G_ * __cdecl util__Sqrt(Maybe_L_double_G_ *__return_storage_ptr__,double *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  dVar1 = *param_1;
  if (0.0 <= dVar1) {
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
    libm_sse2_sqrt_precise(0.0);
    __return_storage_ptr__->Data = (double)CONCAT44(uVar3,uVar2);
    __return_storage_ptr__->IsValidData = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Data = 0.0;
  __return_storage_ptr__->IsValidData = false;
  return __return_storage_ptr__;
}





//==== 00833320 Tan ====


/* double __cdecl util__Tan(double const &) */

double __cdecl util__Tan(double *param_1)

{
  return libm_sse2_tan_precise(*param_1);
}





//==== 00833340 tuple2_int_util__Darray_IndexedFace____ ====


/* public:  tuple2_L_int_Cclass_util__Darray_L_structIndexedFace_P_G__G___dtor(void) */

void __thiscall
util__tuple2_int_class_util__Darray_struct_IndexedFace_______tuple2_int_class_util__Darray_struct_IndexedFace(tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *this)

{
  *(undefined ***)(this + 4) = (undefined **)(&vftable_2);
  if (*(void **)(this + 8) != (void *)0x0) {
    port_op_delete(*(void **)(this + 8));
  }
  *(undefined ***)(this + 4) = (undefined **)(&vftable);
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 00833370 vector_deleting_destructor_00833370 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_int_Cclassutil__Darray_L_struct_IndexedFace_P_G__G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_int_class_util__Darray_struct_IndexedFace_________vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *this,
          uint param_1)

{
  Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *pDVar2;
  void *pvVar3;
  Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *pDVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    iVar5 = *(int *)(this + -4);
    pDVar1 = this + -4;
    pDVar4 = this + iVar5 * 0x10;
    while (iVar5 != 0) {
      pvVar3 = *(void **)(pDVar4 + -0xc);
      pDVar2 = pDVar4 + -0x10;
      iVar5 = iVar5 + -1;
      *(undefined ***)pDVar2 = &vftable_554;
      if (pvVar3 != (void *)0x0) {
        _vector_destructor_iterator_
                  (pvVar3,0x14,*(uint *)((int)pvVar3 + -4),
                   tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___dtor);
        port_op_delete((int *)((int)pvVar3 + -4),*(int *)((int)pvVar3 + -4) * 0x14 + 4);
      }
      *(undefined4 *)(pDVar4 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)(&vftable);
      pDVar4 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return pDVar1;
  }
  *(undefined ***)this = &vftable_554;
  if (*(tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ **)(this + 4) !=
      (tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *)0x0) {
    tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G____vector_deleting_destructor_
              (*(tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00833450 vector_deleting_destructor_00833450 ====


/* public: void * __thiscall util__tuple2_L_int_Cclassutil__Darray_L_structIndexedFace_P_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_int_class_util__Darray_struct_IndexedFace_______vector_deleting_destructor
          (tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *this,uint param_1)

{
  tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *ptVar1;
  tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *ptVar2;
  tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    if (iVar4 != 0) {
      ptVar3 = this + iVar4 * 0x14 + 4;
      do {
        ptVar2 = ptVar3 + -0x14;
        iVar4 = iVar4 + -1;
        *(undefined ***)ptVar2 = (undefined **)(&vftable_2);
        if (*(void **)(ptVar3 + -0x10) != (void *)0x0) {
          port_op_delete(*(void **)(ptVar3 + -0x10));
        }
        *(undefined4 *)(ptVar3 + -0x10) = 0;
        *(undefined ***)ptVar2 = (undefined **)(&vftable);
        ptVar3 = ptVar2;
      } while (iVar4 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x14 + 4);
    }
    return ptVar1;
  }
  *(undefined ***)(this + 4) = (undefined **)(&vftable_2);
  if (*(void **)(this + 8) != (void *)0x0) {
    port_op_delete(*(void **)(this + 8));
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined ***)(this + 4) = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x14);
  }
  return this;
}





//==== 00833500 AddStrongReference ====


/* public: void __thiscall util__ReferenceController__AddStrongReference(void) */

void __thiscall util__ReferenceController__AddStrongReference(ReferenceController *this)

{
  this->StrongReferenceCount = this->StrongReferenceCount + 1;
  return;
}





//==== 00833510 AddWeakReference ====


/* public: void __thiscall util__ReferenceController__AddWeakReference(void) */

void __thiscall util__ReferenceController__AddWeakReference(ReferenceController *this)

{
  this->WeakReferenceCount = this->WeakReferenceCount + 1;
  return;
}





//==== 00833520 CheckForWeakRelease ====

/* private: void __thiscall util__ReferenceController__CheckForWeakRelease(void) */

void __thiscall util__ReferenceController__CheckForWeakRelease(ReferenceController *this)

{
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar1;
  undefined4 *puVar2;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar3;
  int iVar4;
  
  if ((this->StrongReferenceCount == 0) && (this->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar1 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar1 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar1 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar1->Capacity = 0;
          pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar1->Capacity = 10000;
          puVar2 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar2 == (undefined4 *)0x0) {
            pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar2 = 10000;
            iVar4 = 10000;
            pDVar3 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar2 + 1);
            do {
              pDVar3->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar3->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar3->Size = 0;
              pDVar3->Capacity = 0;
              iVar4 = iVar4 + -1;
              pDVar3 = pDVar3 + 1;
            } while (iVar4 != 0);
            pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar2 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar1);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,this);
  }
  return;
}

//==== 00833620 CheckSize_00833620 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_int_Cclassutil__Darray_L_struct_IndexedFace_P_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_int_class_util__Darray_struct_IndexedFace________CheckSize
          (Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *this,
          int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  bool bVar8;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar4;
  bVar1 = !bVar8;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar4 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar5) {
    return bVar1 && bVar8;
  }
  if (uVar5 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar5 = uVar4;
  }
  if ((int)uVar5 < (int)uVar4) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar5;
  }
  if (0x3fffffff < (int)uVar5) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar5 = 0x3fffffff;
  }
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x14 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x14);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puStack_c = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puStack_c = puVar2 + 1;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 4;
      puVar2 = puStack_c;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 5;
        puVar3[-2] = (uint)&vftable_2;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 5;
      } while (uVar5 != 0);
    }
  }
  puVar2 = *(uint **)(this + 4);
  if (puVar2 != (uint *)0x0) {
    puVar3 = puStack_c + *(int *)(this + 8) * 5;
    puVar6 = puVar2;
    puVar7 = puStack_c;
    if (puVar2 != puVar2 + param_1 * 5) {
      do {
        if (puVar7 == puVar3) break;
        *puVar7 = *puVar6;
        Darray_L_class_Module_P_G___op_assign
                  ((Darray_L_class_Module_P_G_ *)(puVar7 + 1),(Darray_L_class_Module_P_G_ *)(puVar6 + 1));
        puVar6 = puVar6 + 5;
        puVar2 = *(uint **)(this + 4);
        puVar7 = puVar7 + 5;
      } while (puVar6 != puVar2 + param_1 * 5);
    }
    if (puVar2 != (uint *)0x0) {
      uVar4 = puVar2[-1];
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        puVar3 = puVar2 + uVar4 * 5 + 1;
        do {
          puVar6 = puVar3 + -5;
          uVar4 = uVar4 - 1;
          *puVar6 = (uint)&vftable_2;
          if ((void *)puVar3[-4] != (void *)0x0) {
            port_op_delete((void *)puVar3[-4]);
          }
          puVar3[-4] = 0;
          *puVar6 = (uint)&vftable;
          puVar3 = puVar6;
        } while (uVar4 != 0);
        uVar4 = puVar2[-1];
      }
      port_op_delete(puVar2 + -1,uVar4 * 0x14 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00833820 Clear_00833820 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_int_Cclassutil__Darray_L_struct_IndexedFace_P_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_int_class_util__Darray_struct_IndexedFace________Clear
          (Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00833840 Find_00833840 ====


/* public: struct util__Vec2_L_int_G_ *  util__HashMap_L_void___cdecl_P__void__Cstruct_util__Vec2_L_int_G__G___Find(void (__cdecl*const &)(void))const  */

Vec2_L_int_G_ * 
util__HashMap_void____cdecl___void__struct_util__Vec2_int_____Find
          (HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *this,_func_void **param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int *piVar2;
  Vec2_L_int_G_ *pVVar3;
  int *piVar4;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(uint *)(this + 4) != 0) {
    iStack_c = 0;
    piVar4 = (int *)(((uint)((int)*param_1 * -0x61c8864f) % *(uint *)(this + 4)) * 0x10 +
                    *(int *)this);
    iVar1 = (**(code **)(uintptr_t)(*piVar4 + 0xc))();
    if (iStack_c < iVar1) {
      do {
        piVar2 = (int *)(**(code **)*piVar4)(&iStack_c);
        if ((_func_void *)*piVar2 == *param_1) {
          iVar1 = (**(code **)*piVar4)(&iStack_c);
          pVVar3 = (Vec2_L_int_G_ *)(iVar1 + 4);
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        }
        iStack_c = iStack_c + 1;
        iVar1 = (*(code *)((undefined4 *)*piVar4)[3])();
      } while (iStack_c < iVar1);
    }
  }
  pVVar3 = (Vec2_L_int_G_ *)0x0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pVVar3;
}





//==== 008338d0 Get_008338d0 ====

/* public: static class util__ReferenceControllerRegistry * __cdecl
   util__ReferenceControllerRegistry__Get(void) */

ReferenceControllerRegistry * __cdecl util__ReferenceControllerRegistry__Get(void)

{
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar1;
  undefined4 *puVar2;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar3;
  int iVar4;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
    _Init_thread_header(&DAT_0098956c);
    if (DAT_0098956c == -1) {
      pHVar1 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
      if (pHVar1 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
        pHVar1 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
      }
      else {
        pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                        *)0x0;
        pHVar1->Capacity = 0;
        pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                        *)0x0;
        pHVar1->Capacity = 10000;
        puVar2 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
        if (puVar2 == (undefined4 *)0x0) {
          pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
        }
        else {
          *puVar2 = 10000;
          iVar4 = 10000;
          pDVar3 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *
                   )(puVar2 + 1);
          do {
            pDVar3->_pad_0x0_0 =
                 (int)&vftable_554;
            pDVar3->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
            pDVar3->Size = 0;
            pDVar3->Capacity = 0;
            iVar4 = iVar4 + -1;
            pDVar3 = pDVar3 + 1;
          } while (iVar4 != 0);
          pHVar1->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)(puVar2 + 1);
        }
      }
      DAT_00989568 = (undefined4)(uintptr_t)(pHVar1);
      atexit(FUN_0090ff50);
      _Init_thread_footer(&DAT_0098956c);
    }
  }
  return (ReferenceControllerRegistry *)DAT_00989568;
}

//==== 008339b0 GetController ====


/* public: class util__ReferenceController * __thiscall
   util__ReferenceControllerRegistry__GetController(void const * const) */

ReferenceController * __thiscall
util__ReferenceControllerRegistry__GetController(ReferenceControllerRegistry *this,void *param_1)

{
  undefined8 stack0xfffffffc;
  ReferenceController *pRVar1;
  Vec2_L_int_G_ *pVVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  ReferenceController *pRStack_10;
  _func_void *p_Stack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  p_Stack_c = (_func_void *)param_1;
  pVVar2 = (Vec2_L_int_G_ *)(uintptr_t)(HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G___Find
                     ((HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *)this,&p_Stack_c));
  if (pVVar2 == (Vec2_L_int_G_ *)0x0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x52
              ,"Controllers","Tried to get the controller of an unregistered pointer.");
    DebugBreak();
  }
  pRStack_10 = (ReferenceController *)0x0;
  p_Stack_c = (_func_void *)0x0;
  iVar3 = (**(code **)(pVVar2->X + 0xc))();
  if ((int)p_Stack_c < iVar3) {
    do {
      piVar4 = (int *)(**(code **)pVVar2->X)(&p_Stack_c);
      pRVar1 = (ReferenceController *)*piVar4;
      if ((0 < pRVar1->StrongReferenceCount) &&
         (bVar5 = pRStack_10 != (ReferenceController *)0x0, pRStack_10 = pRVar1, bVar5)) {
        LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",
                  0x58,"Controller == nullptr",(char *)0x0);
        DebugBreak();
      }
      p_Stack_c = p_Stack_c + 1;
      iVar3 = (**(code **)(pVVar2->X + 0xc))();
    } while ((int)p_Stack_c < iVar3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pRStack_10;
}





//==== 00833a70 IsDataStillValid ====


/* public: bool __thiscall util__ReferenceController__IsDataStillValid(void) */

bool __thiscall util__ReferenceController__IsDataStillValid(ReferenceController *this)

{
  return 0 < this->StrongReferenceCount;
}





//==== 00833a80 Register ====


/* public: class util__ReferenceController * __thiscall
   util__ReferenceControllerRegistry__Register(void *) */

ReferenceController * __thiscall
util__ReferenceControllerRegistry__Register(ReferenceControllerRegistry *this,void *param_1)

{
  undefined8 stack0xfffffffc;
  uint uVar1;
  _func_void *p_Var2;
  bool bVar3;
  ReferenceController *pRVar4;
  Vec2_L_int_G_ *pVVar5;
  int *piVar6;
  int iVar7;
  Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *this_00;
  Darray_L_class_Module_P_G_ *pDVar8;
  undefined **ppuStack_44;
  void *pvStack_40;
  undefined **ppuStack_34;
  void *pvStack_30;
  undefined **ppuStack_24;
  Vec2_L_int_G_ *pVStack_20;
  Vec2_L_int_G_ *pVStack_1c;
  int iStack_18;
  HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *pHStack_14;
  _func_void *p_Stack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  p_Stack_10 = (_func_void *)param_1;
  pHStack_14 = (HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *)this;
  pRVar4 = (ReferenceController *)port_op_new(0xc);
  if (pRVar4 == (ReferenceController *)0x0) {
    pRVar4 = (ReferenceController *)0x0;
  }
  else {
    pRVar4->StrongReferenceCount = 0;
    pRVar4->WeakReferenceCount = 0;
    pRVar4->Pointer = (void *)0x0;
    pRVar4->StrongReferenceCount = 0;
    pRVar4->WeakReferenceCount = 0;
    pRVar4->Pointer = param_1;
  }
  pVVar5 = (Vec2_L_int_G_ *)(uintptr_t)(HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G___Find
                     ((HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *)this,&p_Stack_10));
  if (pVVar5 == (Vec2_L_int_G_ *)0x0) {
    ppuStack_24 = (undefined **)(&vftable_2);
    iStack_18 = 1;
    pVStack_20 = pVVar5;
    pVStack_1c = pVVar5;
    pVStack_20 = (Vec2_L_int_G_ *)port_op_new(4);
    p_Var2 = p_Stack_10;
    if (pVStack_20 == (Vec2_L_int_G_ *)0x0) {
      pVStack_20 = (Vec2_L_int_G_ *)0x0;
    }
    else {
      *(undefined4 *)pVStack_20 = 0;
    }
    iVar7 = 0;
    if (0 < iStack_18) {
      do {
        *(undefined4 *)((int)pVStack_20 + iVar7 * 4) = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iStack_18);
    }
    uVar1 = (this->ReferenceControllers).Capacity;
    if (uVar1 != 0) {
      iStack_c = 0;
      this_00 = (Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *)
                (((uint)((int)p_Stack_10 * -0x61c8864f) % uVar1) * 0x10 + *(int *)pHStack_14);
      iVar7 = (**(code **)(*(int *)this_00 + 0xc))();
      if (iStack_c < iVar7) {
        do {
          pDVar8 = (Darray_L_class_Module_P_G_ *)&iStack_c;
          piVar6 = (int *)(*(code *)**(undefined4 **)this_00)();
          if ((_func_void *)*piVar6 == p_Var2) {
            iVar7 = (*(code *)**(undefined4 **)this_00)(&iStack_c,&ppuStack_24);
            Darray_L_class_Module_P_G___op_assign((Darray_L_class_Module_P_G_ *)(iVar7 + 4),pDVar8);
            this = (ReferenceControllerRegistry *)pHStack_14;
            goto LAB_00833c1e;
          }
          iStack_c = iStack_c + 1;
          iVar7 = (*(code *)(*(undefined4 **)this_00)[3])();
        } while (iStack_c < iVar7);
      }
      Darray_L_bool_P_G___Darray_L_bool_P_G_((Darray_L_bool_P_G_ *)&ppuStack_34,(Darray_L_bool_P_G_ *)&ppuStack_24);
      Darray_L_bool_P_G___Darray_L_bool_P_G_((Darray_L_bool_P_G_ *)&ppuStack_44,(Darray_L_bool_P_G_ *)&ppuStack_34);
      ppuStack_34 = (undefined **)(&vftable_2);
      if (pvStack_30 != (void *)0x0) {
        port_op_delete(pvStack_30);
      }
      iVar7 = *(int *)(this_00 + 8);
      pvStack_30 = (void *)0x0;
      ppuStack_34 = (undefined **)(&vftable);
      iStack_c = iVar7 + 1;
      Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G___SetSize
                (this_00,&iStack_c);
      bVar3 = Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G___CheckSize
                        (this_00,iVar7);
      if (bVar3) {
        iVar7 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x14;
        *(_func_void **)(iVar7 + -0x14) = p_Var2;
        Darray_L_class_Module_P_G___op_assign
                  ((Darray_L_class_Module_P_G_ *)(iVar7 + -0x10),(Darray_L_class_Module_P_G_ *)&ppuStack_44);
      }
      ppuStack_44 = (undefined **)(&vftable_2);
      this = (ReferenceControllerRegistry *)pHStack_14;
      if (pvStack_40 != (void *)0x0) {
        port_op_delete(pvStack_40);
        this = (ReferenceControllerRegistry *)pHStack_14;
      }
    }
LAB_00833c1e:
    ppuStack_24 = (undefined **)(&vftable_2);
    if (pVStack_20 != (Vec2_L_int_G_ *)0x0) {
      port_op_delete(pVStack_20);
    }
  }
  pVVar5 = (Vec2_L_int_G_ *)(uintptr_t)(HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G___Find
                     ((HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *)this,&p_Stack_10));
  iVar7 = pVVar5[1].X;
  p_Stack_10 = (_func_void *)(iVar7 + 1);
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pVVar5,(int *)&p_Stack_10);
  bVar3 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pVVar5,iVar7);
  if (bVar3) {
    *(ReferenceController **)(pVVar5->Y + -4 + pVVar5[1].X * 4) = pRVar4;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pRVar4;
}





//==== 00833ca0 ReleaseStrongReference ====


/* public: bool __thiscall util__ReferenceController__ReleaseStrongReference(void) */

bool __thiscall util__ReferenceController__ReleaseStrongReference(ReferenceController *this)

{
  int iVar1;
  
  this->StrongReferenceCount = this->StrongReferenceCount + -1;
  iVar1 = this->StrongReferenceCount;
  if (this->StrongReferenceCount < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0xd,
              "StrongReferenceCount >= 0",(char *)0x0);
    DebugBreak();
    iVar1 = this->StrongReferenceCount;
  }
  CheckForWeakRelease(this);
  return iVar1 == 0;
}





//==== 00833ce0 ReleaseWeakReference ====

/* public: void __thiscall util__ReferenceController__ReleaseWeakReference(void) */

void __thiscall util__ReferenceController__ReleaseWeakReference(ReferenceController *this)

{
  int *piVar1;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar2;
  undefined4 *puVar3;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar4;
  int iVar5;
  
  piVar1 = &this->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x15
              ,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if ((this->StrongReferenceCount == 0) && (this->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar2 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar2 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar2 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar2->Capacity = 0;
          pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar2->Capacity = 10000;
          puVar3 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar3 == (undefined4 *)0x0) {
            pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar3 = 10000;
            iVar5 = 10000;
            pDVar4 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar3 + 1);
            do {
              pDVar4->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar4->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar4->Size = 0;
              pDVar4->Capacity = 0;
              iVar5 = iVar5 + -1;
              pDVar4 = pDVar4 + 1;
            } while (iVar5 != 0);
            pHVar2->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar3 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar2);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,this);
  }
  return;
}

//==== 00833d10 SetAll_00833d10 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_int_Cclassutil__Darray_L_struct_IndexedFace_P_G__G__G___SetAll(struct util__tuple2_L_int_Cclassutil__Darray_L_structIndexedFace_P_G__G_
   const &) */

void 
util__Darray_struct_util__tuple2_int_class_util__Darray_struct_IndexedFace________SetAll
          (Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *this,
          tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 5) {
    do {
      *puVar1 = *(undefined4 *)param_1;
      Darray_L_class_Module_P_G___op_assign
                ((Darray_L_class_Module_P_G_ *)(puVar1 + 1),(Darray_L_class_Module_P_G_ *)(param_1 + 4));
      puVar1 = puVar1 + 5;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x14));
  }
  return;
}





//==== 00833d60 SetSize_00833d60 ====


/* private: void  util__Darray_L_structutil__tuple2_L_int_Cclassutil__Darray_L_struct_IndexedFace_P_G__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_int_class_util__Darray_struct_IndexedFace________SetSize
          (Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined **ppuStack_14;
  void *pvStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
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
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x14),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x14))) {
    do {
      ppuStack_14 = (undefined **)(&vftable_2);
      pvStack_10 = (void *)0x0;
      uStack_c = 0;
      uStack_8 = 0;
      *puVar4 = 0;
      Darray_L_class_Module_P_G___op_assign
                ((Darray_L_class_Module_P_G_ *)(puVar4 + 1),(Darray_L_class_Module_P_G_ *)&ppuStack_14);
      ppuStack_14 = (undefined **)(&vftable_2);
      if (pvStack_10 != (void *)0x0) {
        port_op_delete(pvStack_10);
      }
      puVar4 = puVar4 + 5;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x14));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00833e50 Unregister ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void  util__ReferenceControllerRegistry__Unregister(class
   util__ReferenceController *) */

void 
util__ReferenceControllerRegistry__Unregister
          (ReferenceControllerRegistry *this,ReferenceController *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  void **ppvVar2;
  ReferenceControllerRegistry *pRVar3;
  Vec2_L_int_G_ *this_00;
  int iVar4;
  int *piVar5;
  void **ppvVar6;
  uint uVar7;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *this_01;
  code *pcVar8;
  tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *ptVar9;
  uint local_14;
  void **local_10;
  ReferenceControllerRegistry *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppvVar6 = &param_1->Pointer;
  local_10 = ppvVar6;
  local_c = this;
  this_00 = (Vec2_L_int_G_ *)(uintptr_t)(HashMap_L_void____cdecl_P__void__Cutil__Vec2_L_int_G___G___Find
                      ((HashMap_L_void____cdecl_P__void__Cutil__Vec2_L_int_G___G_ *)this,ppvVar6));
  pcVar8 = DebugBreak_exref;
  if (this_00 == (Vec2_L_int_G_ *)0x0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x43
              ,"Controllers","Tried to unregister an already unregistered pointer.");
    DebugBreak();
  }
  ppvVar2 = local_10;
  piVar5 = (int *)this_00->Y;
  bVar1 = false;
  local_14 = 1;
  if (piVar5 != piVar5 + this_00[1].X) {
    do {
      if (bVar1) {
        piVar5[-1] = *piVar5;
      }
      else if ((ReferenceController *)*piVar5 == param_1) {
        bVar1 = true;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)(this_00->Y + this_00[1].X * 4));
    ppvVar6 = local_10;
    pcVar8 = DebugBreak_exref;
    if (bVar1) {
      local_10 = (void **)(this_00[1].X + -1);
      Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)this_00,(int *)&local_10);
      ppvVar6 = ppvVar2;
      goto LAB_00833f1f;
    }
  }
  LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x45,
            "Removed","Failed to unregister pointer.");
  (*pcVar8)();
LAB_00833f1f:
  iVar4 = (**(code **)(this_00->X + 0xc))();
  pRVar3 = local_c;
  if ((iVar4 == 0) && (uVar7 = (local_c->ReferenceControllers).Capacity, uVar7 != 0)) {
    local_c = (ReferenceControllerRegistry *)0x0;
    this_01 = (pRVar3->ReferenceControllers).Data + (uint)((int)*ppvVar6 * -0x61c8864f) % uVar7;
    iVar4 = (**(code **)(this_01->_pad_0x0_0 + 0xc))();
    if ((int)local_c < iVar4) {
      do {
        piVar5 = (int *)(**(code **)this_01->_pad_0x0_0)(&local_c);
        if ((void *)*piVar5 == *ppvVar6) {
          iVar4 = (**(code **)(this_01->_pad_0x0_0 + 0xc))();
          if (iVar4 != 0) {
            iVar4 = (**(code **)(this_01->_pad_0x0_0 + 0xc))();
            if ((((int)local_c < 1) && (iVar4 + -1 <= (int)local_c)) ||
               (((int)local_c <= iVar4 + -1 && (-1 < (int)local_c)))) {
              ptVar9 = this_01->Data;
              uVar7 = 0;
              local_10 = (void **)0x0;
              if (ptVar9 != ptVar9 + this_01->Size) {
                do {
                  if ((char)uVar7 == '\0') {
                    uVar7 = uVar7 & 0xff;
                    if ((ReferenceControllerRegistry *)local_10 == local_c) {
                      uVar7 = local_14;
                    }
                  }
                  else {
                    ptVar9[-1].Value1 = ptVar9->Value1;
                    Darray_L_Module_P_G___op_assign
                              ((Darray_L_Module_P_G_ *)&ptVar9[-1].Value2,
                               (Darray_L_class_Module_P_G_ *)&ptVar9->Value2);
                  }
                  local_10 = (void **)((int)local_10 + 1);
                  ptVar9 = ptVar9 + 1;
                } while (ptVar9 != this_01->Data + this_01->Size);
                if ((char)uVar7 != '\0') {
                  local_14 = this_01->Size - 1;
                  Darray_L_util__tuple2_L_int_Cutil__Darray_L_IndexedFace_P_G___G___G___SetSize
                            ((Darray_L_util__tuple2_L_int_Cutil__Darray_L_IndexedFace_P_G___G___G_ *)this_01,
                             (int *)&local_14);
                }
              }
            }
          }
          break;
        }
        local_c = (ReferenceControllerRegistry *)((int)&(local_c->ReferenceControllers).Data + 1);
        iVar4 = (**(code **)(this_01->_pad_0x0_0 + 0xc))();
      } while ((int)local_c < iVar4);
    }
  }
  port_op_delete(param_1,0xc);
  return;
}

//==== 00834040 Clear_00834040 ====


/* public: virtual void  util__AutoDarray_L_classutil__LocalizationLibrary_G___Clear(void) */

void 
util__AutoDarray_class_util__LocalizationLibrary___Clear
          (AutoDarray_L_class_util__LocalizationLibrary_G_ *this)

{
  AutoDarray_L_class_util__LocalizationLibrary_G_ *pAStack_8;
  
  pAStack_8 = this;
  FreeAll(this);
  pAStack_8 = (AutoDarray_L_class_util__LocalizationLibrary_G_ *)0x0;
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&pAStack_8);
  return;
}





//==== 00834070 scalar_deleting_destructor_00834070 ====


/* public: virtual void * __thiscall util__AutoDarray_L_classutil__LocalizationLibrary_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__AutoDarray_class_util__LocalizationLibrary____scalar_deleting_destructor
          (AutoDarray_L_class_util__LocalizationLibrary_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_555;
  FreeAll(this);
  *(undefined ***)this = (undefined **)(&vftable_2);
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





//==== 008340c0 HashMap_util__Str_char__util__Str_char___ ====


/* public:  util__HashMap_L_classutil__Str_L_char_G__Cclassutil__Str_L_char_G__G___HashMap_L_class_util__Str_L_char_G__Cclassutil__Str_L_char_G__G_(int const &) */

HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_ * 
util__HashMap_class_util__Str_char__class_util__Str_char_____HashMap_class_util__Str_char__class_util__Str_char
          (HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_ *this,int *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined4 *)this = 0;
  uVar5 = *param_1;
  *(uint *)(this + 4) = uVar5;
  if ((((int)uVar5 < 1) && (0x3ffffffe < (int)uVar5)) ||
     (((int)uVar5 < 0x40000000 && (-1 < (int)uVar5)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    *(undefined4 *)(this + 4) = 0;
    return this;
  }
  if (0 < (int)uVar5) {
    uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x10);
    puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (puVar2 == (uint *)0x0) {
      puVar2 = (uint *)0x0;
    }
    else {
      *puVar2 = uVar5;
      puVar2 = puVar2 + 1;
      puVar3 = puVar2;
      if (uVar5 != 0) {
        do {
          *puVar3 = (uint)&vftable_556;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 4;
        } while (uVar5 != 0);
        *(uint **)this = puVar2;
        return this;
      }
    }
    *(uint **)this = puVar2;
  }
  return this;
}





//==== 00834180 LocStr_00834180 ====


/* public: __thiscall util__LocStr__LocStr(class util__Str_L_char_G_ const &,class util__Str_L_char_G_ const
   &) */

LocStr * __thiscall util__LocStr__LocStr(LocStr *this,Str_L_char_G_ *param_1,Str_L_char_G_ *param_2)

{
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)this,param_2);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(this + 0xc),param_1);
  return this;
}





//==== 008341a0 operator___008341a0 ====


/* public: bool const __thiscall util__LocStr__operator(class util__LocStr const &)const  */

bool __thiscall util__LocStr__operator(LocStr *this,LocStr *param_1)

{
  bool bVar1;
  
  bVar1 = Str_L_char_G___op_eq((Str_L_char_G_ *)this,(Str_L_char_G_ *)param_1);
  if (bVar1) {
    bVar1 = Str_L_char_G___op_eq((Str_L_char_G_ *)(this + 0xc),(Str_L_char_G_ *)(param_1 + 0xc));
    if (bVar1) {
      return true;
    }
  }
  return false;
}





//==== 008341e0 operator__008341e0 ====


/* public: class util__Str_L_char_G_ const & __thiscall util__LocStr__operator__o3(void)const  */

Str_L_char_G_ * __thiscall util__LocStr__operator__o3(LocStr *this)

{
  Str_L_char_G_ *pSVar1;
  
  if (((*(int *)(this + 0x14) != 0) &&
      (LocalizationLibrary__CurrentLanguage != (LocalizationLibrary *)0x0)) &&
     (pSVar1 = (Str_L_char_G_ *)
               HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G___Find
                         ((HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G_
                           *)(LocalizationLibrary__CurrentLanguage + 0xc),(Str_L_char_G_ *)(this + 0xc))
     , pSVar1 != (Str_L_char_G_ *)0x0)) {
  }
  return (Str_L_char_G_ *)this;
}





//==== 00834210 vector_deleting_destructor_00834210 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Str_L_char_G__G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Str_char________vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *this,
          uint param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *pDVar2;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = &vftable_556;
      if (*(LocStr **)(pDVar3 + -0xc) != (LocStr *)0x0) {
        LocStr___vector_deleting_destructor_(*(LocStr **)(pDVar3 + -0xc),3);
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)(&vftable);
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = &vftable_556;
  if (*(LocStr **)(this + 4) != (LocStr *)0x0) {
    LocStr___vector_deleting_destructor_(*(LocStr **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 008342c0 Add_008342c0 ====


/* public: void  util__HashMap_L_classutil__Str_L_char_G__Cclassutil__Str_L_char_G__G___Add(class
   util__Str_L_char_G_ const &,class util__Str_L_char_G_ const &) */

void 
util__HashMap_class_util__Str_char__class_util__Str_char_____Add
          (HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_ *this,Str_L_char_G_ *param_1,
          Str_L_char_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *this_00;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ *pSStack_10;
  char *pcStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSStack_10 = param_2;
  if (*(int *)(this + 4) != 0) {
    if (param_1->Capacity < 1) {
      pcVar5 = "";
    }
    else {
      pcVar5 = param_1->Data;
    }
    uVar2 = GetHash(pcVar5);
    pcStack_c = (char *)0x0;
    this_00 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *)
              ((uVar2 % *(uint *)(this + 4)) * 0x10 + *(int *)this);
    iVar3 = (**(code **)(*(int *)this_00 + 0xc))();
    if ((int)pcStack_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(*(code *)**(undefined4 **)this_00)(&pcStack_c);
        if (puVar4[2] == param_1->Length) {
          if ((int)puVar4[1] < 1) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)*puVar4;
          }
          if (param_1->Capacity < 1) {
            pcVar7 = "";
          }
          else {
            pcVar7 = param_1->Data;
          }
          cVar6 = *pcVar5;
          if (cVar6 == '\0') {
LAB_0083436d:
            pSVar8 = (Str_L_char_G_ *)&pcStack_c;
            iVar3 = (*(code *)**(undefined4 **)this_00)(pSVar8,pSStack_10);
            util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar3 + 0xc),pSVar8);
            __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar3 = (int)pcVar7 - (int)pcVar5;
          while (cVar6 == pcVar5[iVar3]) {
            cVar6 = pcVar5[1];
            pcVar5 = pcVar5 + 1;
            if (cVar6 == '\0') goto LAB_0083436d;
          }
        }
        pcStack_c = pcStack_c + 1;
        iVar3 = (**(code **)(*(int *)this_00 + 0xc))();
      } while ((int)pcStack_c < iVar3);
    }
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_28,pSStack_10);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1c,param_1);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_40,&SStack_1c);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_34,&SStack_28);
    if (SStack_1c.Data != (char *)0x0) {
      port_op_delete(SStack_1c.Data);
    }
    if (SStack_28.Data != (char *)0x0) {
      port_op_delete(SStack_28.Data);
    }
    iVar3 = *(int *)(this_00 + 8);
    pSStack_10 = (Str_L_char_G_ *)(iVar3 + 1);
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G___SetSize
              (this_00,(int *)&pSStack_10);
    bVar1 = Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G___CheckSize
                      (this_00,iVar3);
    if (bVar1) {
      iVar3 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x18;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar3 + -0x18),&SStack_40);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar3 + -0xc),&SStack_34);
    }
    if (SStack_34.Data != (char *)0x0) {
      port_op_delete(SStack_34.Data);
    }
    if (SStack_40.Data != (char *)0x0) {
      port_op_delete(SStack_40.Data);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00834470 AddFontOverride ====


/* public: bool  util__LocalizationLibrary__AddFontOverride(class util__Str_L_char_G_ const
   &,class util__Str_L_char_G_ const &) */

bool 
util__LocalizationLibrary__AddFontOverride
          (LocalizationLibrary *this,Str_L_char_G_ *param_1,Str_L_char_G_ *param_2)

{
  SharedPtr_L_struct_AudioSource_G_ *pSVar1;
  
  pSVar1 = (SharedPtr_L_struct_AudioSource_G_ *)(uintptr_t)(HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G___Find
                     ((HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G_ *)
                      (this + 0x14),param_1));
  HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___Add
            ((HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_ *)(this + 0x14),param_1,param_2)
  ;
  return pSVar1 == (SharedPtr_L_struct_AudioSource_G_ *)0x0;
}





//==== 008344a0 AddString ====


/* public: bool  util__LocalizationLibrary__AddString(class util__Str_L_char_G_ const &,class
   util__Str_L_char_G_ const &) */

bool 
util__LocalizationLibrary__AddString
          (LocalizationLibrary *this,Str_L_char_G_ *param_1,Str_L_char_G_ *param_2)

{
  SharedPtr_L_struct_AudioSource_G_ *pSVar1;
  
  pSVar1 = (SharedPtr_L_struct_AudioSource_G_ *)(uintptr_t)(HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G___Find
                     ((HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G_ *)
                      (this + 0xc),param_1));
  HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___Add
            ((HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_ *)(this + 0xc),param_1,param_2);
  return pSVar1 == (SharedPtr_L_struct_AudioSource_G_ *)0x0;
}





//==== 008344d0 AddUnicodeRange ====


/* public: void  util__LocalizationLibrary__AddUnicodeRange(struct util__Range_L_unsigned_long_G_) */

void 
util__LocalizationLibrary__AddUnicodeRange
          (LocalizationLibrary *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iStack_8;
  
  iVar1 = *(int *)(this + 0x24);
  iStack_8 = iVar1 + 1;
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(this + 0x1c),&iStack_8);
  bVar3 = Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___CheckSize
                    ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)(this + 0x1c),iVar1);
  if (bVar3) {
    iVar1 = *(int *)(this + 0x20);
    iVar2 = *(int *)(this + 0x24);
    *(undefined4 *)(iVar1 + -8 + iVar2 * 8) = param_2;
    *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = param_3;
  }
  return;
}





//==== 00834520 CheckSize_00834520 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Str_L_char_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Str_char_______CheckSize
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *this,
          int param_1)

{
  Str_L_char_G_ *pSVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *this_00;
  uint uVar6;
  Str_L_char_G_ *pSVar7;
  bool bVar8;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar8 = -1 < (int)uVar4;
  bVar2 = !bVar8;
  if (bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x0;
    SetSize(this,(int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    pSStack_c = (Str_L_char_G_ *)0x3fffffff;
    SetSize(this,(int *)&pSStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar6) {
    return bVar2 && bVar8;
  }
  if (uVar6 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar6 = uVar4;
  }
  if ((int)uVar6 < (int)uVar4) {
    do {
      uVar6 = uVar6 * 2;
    } while ((int)uVar6 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar6;
  }
  if (0x3fffffff < (int)uVar6) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar6 = 0x3fffffff;
  }
  uVar4 = -(uint)((int)((ulonglong)uVar6 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x18);
  puVar3 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar3 == (uint *)0x0) {
    pSStack_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar3 = uVar6;
    pSStack_c = (Str_L_char_G_ *)(puVar3 + 1);
    pSVar5 = pSStack_c;
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      pSVar5->Data = (char *)0x0;
      pSVar5 = pSVar5 + 2;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3 = puVar3 + 6;
    }
  }
  pSVar5 = *(Str_L_char_G_ **)(this + 4);
  if (pSVar5 != (Str_L_char_G_ *)0x0) {
    pSVar1 = pSStack_c + *(int *)(this + 8) * 2;
    this_00 = pSStack_c;
    pSVar7 = pSVar5;
    if (pSVar5 != pSVar5 + param_1 * 2) {
      do {
        if (this_00 == pSVar1) break;
        util__Maybe_struct_util__ClassMember___operator(this_00,pSVar7);
        util__Maybe_struct_util__ClassMember___operator(this_00 + 1,pSVar7 + 1);
        pSVar7 = pSVar7 + 2;
        pSVar5 = *(Str_L_char_G_ **)(this + 4);
        this_00 = this_00 + 2;
      } while (pSVar7 != pSVar5 + param_1 * 2);
    }
    if (pSVar5 != (Str_L_char_G_ *)0x0) {
      LocStr___vector_deleting_destructor_((LocStr *)pSVar5,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 008346b0 Clear_008346b0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Str_L_char_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Str_char_______Clear
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 008346d0 CreateNew ====


/* public: static void __cdecl util__LocalizationLibrary__CreateNew(class util__Str_L_char_G_ const &)
    */

void __cdecl util__LocalizationLibrary__CreateNew(Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  Str_L_char_G_ *this;
  char cVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar3 = (**(code **)(uintptr_t)(Libraries + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)Libraries)(&iStack_c);
      puVar4 = (undefined4 *)*puVar4;
      if (puVar4[2] == param_1->Length) {
        if ((int)puVar4[1] < 1) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)*puVar4;
        }
        if (param_1->Capacity < 1) {
          pcVar8 = "";
        }
        else {
          pcVar8 = param_1->Data;
        }
        cVar6 = *pcVar5;
        if (cVar6 == '\0') goto LAB_00834883;
        iVar3 = (int)pcVar8 - (int)pcVar5;
        while (cVar6 == pcVar5[iVar3]) {
          cVar6 = pcVar5[1];
          pcVar5 = pcVar5 + 1;
          if (cVar6 == '\0') {
            __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
            return;
          }
        }
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(Libraries + 0xc))();
    } while (iStack_c < iVar3);
  }
  this = (Str_L_char_G_ *)port_op_new(0x2c);
  if (this == (Str_L_char_G_ *)0x0) {
    this = (Str_L_char_G_ *)0x0;
  }
  else {
    memset(this,0,0x2c);
    iStack_c = 10000;
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(this,param_1);
    HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_
              ((HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_ *)(this + 1),&iStack_c);
    iStack_c = 0x32;
    HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_
              ((HashMap_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G_ *)&this[1].Length,&iStack_c);
    this[2].Capacity = (int)&vftable_109;
    this[2].Length = 0;
    this[3].Data = (char *)0x0;
    this[3].Capacity = 10;
    puVar4 = (undefined4 *)port_op_new(0x50);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar3 = 10;
      puVar7 = puVar4;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        iVar3 = iVar3 + -1;
        puVar7 = puVar7 + 2;
      } while (iVar3 != 0);
    }
    iVar3 = 0;
    this[2].Length = (int)puVar4;
    if (0 < this[3].Capacity) {
      do {
        iVar1 = this[2].Length;
        *(undefined4 *)(iVar1 + iVar3 * 8) = 0;
        *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar3 < this[3].Capacity);
    }
  }
  iVar3 = DAT_0095f4b8;
  iStack_c = DAT_0095f4b8 + 1;
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)&Libraries,&iStack_c);
  bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)&Libraries,iVar3);
  CurrentLanguage = (LocalizationLibrary *)this;
  if (bVar2) {
    *(Str_L_char_G_ **)(DAT_0095f4b4 + -4 + DAT_0095f4b8 * 4) = this;
  }
LAB_00834883:
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 008348a0 Find_008348a0 ====


/* public: class util__SharedPtr_L_structAudioSource_G_ *  util__HashMap_L_class_util__Str_L_char_G__Cclassutil__SharedPtr_L_structAudioSource_G__G___Find(class util__Str_L_char_G_ const
   &)const  */

SharedPtr_L_struct_AudioSource_G_ * 
util__HashMap_class_util__Str_char__class_util__SharedPtr_struct_AudioSource_____Find
          (HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G_ *this,
          Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  ulong uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  SharedPtr_L_struct_AudioSource_G_ *pSVar6;
  char cVar7;
  char *pcVar8;
  int *piVar9;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 4) != 0) {
    if (param_1->Capacity < 1) {
      pcVar5 = "";
    }
    else {
      pcVar5 = param_1->Data;
    }
    uVar2 = GetHash(pcVar5);
    iStack_c = 0;
    piVar9 = (int *)((uVar2 % *(uint *)(this + 4)) * 0x10 + *(int *)this);
    iVar3 = (**(code **)(uintptr_t)(*piVar9 + 0xc))();
    if (iStack_c < iVar3) {
      do {
        puVar4 = (undefined4 *)(**(code **)*piVar9)(&iStack_c);
        if (puVar4[2] == param_1->Length) {
          if ((int)puVar4[1] < 1) {
            pcVar5 = "";
          }
          else {
            pcVar5 = (char *)*puVar4;
          }
          if (param_1->Capacity < 1) {
            pcVar8 = "";
          }
          else {
            pcVar8 = param_1->Data;
          }
          cVar7 = *pcVar5;
          if (cVar7 != '\0') {
            iVar3 = (int)pcVar8 - (int)pcVar5;
            do {
              if (cVar7 != pcVar5[iVar3]) goto LAB_00834912;
              cVar7 = pcVar5[1];
              pcVar5 = pcVar5 + 1;
            } while (cVar7 != '\0');
          }
          bVar1 = true;
        }
        else {
LAB_00834912:
          bVar1 = false;
        }
        if (bVar1) {
          iVar3 = (**(code **)*piVar9)(&iStack_c);
          pSVar6 = (SharedPtr_L_struct_AudioSource_G_ *)(iVar3 + 0xc);
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
          return pSVar6;
        }
        iStack_c = iStack_c + 1;
        iVar3 = (*(code *)((undefined4 *)*piVar9)[3])();
      } while (iStack_c < iVar3);
    }
  }
  pSVar6 = (SharedPtr_L_struct_AudioSource_G_ *)0x0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pSVar6;
}





//==== 008349a0 FreeAll_008349a0 ====


/* private: void  util__AutoDarray_L_classutil__LocalizationLibrary_G___FreeAll(void) */

void 
util__AutoDarray_class_util__LocalizationLibrary___FreeAll
          (AutoDarray_L_class_util__LocalizationLibrary_G_ *this)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 != puVar3 + *(int *)(this + 8)) {
    do {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1[7] = (undefined4)(uintptr_t)(&vftable_109);
        if ((void *)puVar1[8] != (void *)0x0) {
          port_op_delete((void *)puVar1[8]);
        }
        puVar1[8] = 0;
        puVar1[7] = (undefined4)(uintptr_t)(&vftable);
        piVar2 = (int *)puVar1[5];
        if (piVar2 != (int *)0x0) {
          if (piVar2[-1] == 0) {
            port_op_delete(piVar2 + -1);
          }
          else {
            (**(code **)(uintptr_t)(*piVar2 + 0x18))(3);
          }
        }
        puVar1[5] = 0;
        piVar2 = (int *)puVar1[3];
        if (piVar2 != (int *)0x0) {
          if (piVar2[-1] == 0) {
            port_op_delete(piVar2 + -1);
          }
          else {
            (**(code **)(uintptr_t)(*piVar2 + 0x18))(3);
          }
        }
        puVar1[3] = 0;
        if ((void *)*puVar1 != (void *)0x0) {
          port_op_delete((void *)*puVar1);
          *puVar1 = 0;
        }
        port_op_delete(puVar1,0x2c);
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  return;
}





//==== 00834a70 GetCurrentLanguage ====


/* public: static class util__LocalizationLibrary * __cdecl
   util__LocalizationLibrary__GetCurrentLanguage(void) */

LocalizationLibrary * __cdecl util__LocalizationLibrary__GetCurrentLanguage(void)

{
  return CurrentLanguage;
}





//==== 00834a80 GetFontOverride ====


/* public: class util__Str_L_char_G_ const & __thiscall util__LocalizationLibrary__GetFontOverride(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * __thiscall
util__LocalizationLibrary__GetFontOverride(LocalizationLibrary *this,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ *pSVar1;
  
  pSVar1 = (Str_L_char_G_ *)
           HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G___Find
                     ((HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G_ *)
                      (this + 0x14),param_1);
  if (pSVar1 != (Str_L_char_G_ *)0x0) {
    param_1 = pSVar1;
  }
  return param_1;
}





//==== 00834aa0 GetName_00834aa0 ====


/* public: class util__Str_L_char_G_ __thiscall util__LocalizationLibrary__GetName(void)const  */

Str_L_char_G_ * __thiscall
util__LocalizationLibrary__GetName(LocalizationLibrary *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,(Str_L_char_G_ *)this);
  return __return_storage_ptr__;
}





//==== 00834ac0 GetUnicodeRanges ====


/* public: class util__Darray_L_structutil__Range_L_unsignedlong_G__G_ __thiscall
   util__LocalizationLibrary__GetUnicodeRanges(void)const  */

Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ * __thiscall
util__LocalizationLibrary__GetUnicodeRanges(LocalizationLibrary *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *in_stack_00000004;
  LocalizationLibrary *pLStack_8;
  
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = &vftable_109
  ;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = *(undefined4 *)(this + 0x28);
  pLStack_8 = this;
  pLStack_8 = (LocalizationLibrary *)(**(code **)(*(int *)(this + 0x1c) + 0xc))();
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize(in_stack_00000004,(int *)&pLStack_8);
  uVar4 = *(uint *)(in_stack_00000004 + 0xc);
  puVar2 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 8));
  puVar3 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    }
  }
  *(undefined4 **)(in_stack_00000004 + 4) = puVar2;
  puVar3 = *(undefined4 **)(this + 0x20);
  if (puVar3 == puVar3 + *(int *)(this + 0x24) * 2) {
    return in_stack_00000004;
  }
  do {
    *puVar2 = *puVar3;
    puVar1 = puVar3 + 1;
    puVar3 = puVar3 + 2;
    puVar2[1] = *puVar1;
    puVar2 = puVar2 + 2;
  } while (puVar3 != (undefined4 *)(*(int *)(this + 0x20) + *(int *)(this + 0x24) * 8));
  return in_stack_00000004;
}





//==== 00834ba0 HasLocalizedString ====


/* public: bool __thiscall util__LocStr__HasLocalizedString(void)const  */

bool __thiscall util__LocStr__HasLocalizedString(LocStr *this)

{
  SharedPtr_L_struct_AudioSource_G_ *pSVar1;
  
  if ((*(int *)(this + 0x14) != 0) &&
     (LocalizationLibrary__CurrentLanguage != (LocalizationLibrary *)0x0)) {
    pSVar1 = (SharedPtr_L_struct_AudioSource_G_ *)(uintptr_t)(HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G___Find
                       ((HashMap_L_class_util__Str_L_char_G__Cclass_util__SharedPtr_L_struct_AudioSource_G___G_ *
                        )(LocalizationLibrary__CurrentLanguage + 0xc),(Str_L_char_G_ *)(this + 0xc)));
    return pSVar1 != (SharedPtr_L_struct_AudioSource_G_ *)0x0;
  }
  return false;
}





//==== 00834bd0 SetCurrentLanguage ====


/* public: static void __cdecl util__LocalizationLibrary__SetCurrentLanguage(class util__Str_L_char_G_
   const &) */

void __cdecl util__LocalizationLibrary__SetCurrentLanguage(Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  int iStack_24;
  Str_L_char_G_ *pSStack_20;
  undefined **ppuStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSStack_20 = param_1;
  ppuStack_1c = (undefined **)0x0;
  puStack_18 = (undefined4 *)0x0;
  iStack_14 = 0;
  uStack_10 = 0;
  iVar3 = (**(code **)(uintptr_t)(Libraries + 0xc))();
  Darray_L_class_Manager_P_G___Darray_L_class_Manager_P_G_((Darray_L_class_Manager_P_G_ *)&ppuStack_1c,iVar3);
  iStack_c = 0;
  iVar3 = (**(code **)(uintptr_t)(Libraries + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(**(code **)Libraries)(&iStack_c);
      iVar3 = iStack_14;
      puVar1 = (undefined4 *)*puVar4;
      if (puVar1[2] == pSStack_20->Length) {
        if ((int)puVar1[1] < 1) {
          pcVar5 = "";
        }
        else {
          pcVar5 = (char *)*puVar1;
        }
        if (pSStack_20->Capacity < 1) {
          pcVar7 = "";
        }
        else {
          pcVar7 = pSStack_20->Data;
        }
        cVar6 = *pcVar5;
        if (cVar6 != '\0') {
          iVar8 = (int)pcVar7 - (int)pcVar5;
          do {
            if (cVar6 != pcVar5[iVar8]) goto LAB_00834ca2;
            cVar6 = pcVar5[1];
            pcVar5 = pcVar5 + 1;
          } while (cVar6 != '\0');
        }
        iStack_24 = iStack_14 + 1;
        Darray_L_class_util__Reflectable_P_G___SetSize
                  ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_1c,&iStack_24);
        bVar2 = Darray_L_enum_GraphicsResource__Type_G___CheckSize
                          ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_1c,iVar3);
        if (bVar2) {
          puStack_18[iStack_14 + -1] = *puVar4;
        }
      }
LAB_00834ca2:
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(Libraries + 0xc))();
    } while (iStack_c < iVar3);
  }
  if (0 < iStack_14) {
    CurrentLanguage = (LocalizationLibrary *)*puStack_18;
  }
  ppuStack_1c = (undefined **)(&vftable_2);
  if (puStack_18 != (undefined4 *)0x0) {
    port_op_delete(puStack_18);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00834cf0 SetSize_00834cf0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Str_L_char_G__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Str_char_______SetSize
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Str_L_char_G___G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  Str_L_char_G_ *this_00;
  int iVar3;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
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
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if ((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) {
    this_00 = (Str_L_char_G_ *)(iVar2 + iVar3 * 0x18);
    if (this_00 != (Str_L_char_G_ *)(iVar2 + *(int *)(this + 8) * 0x18)) {
      do {
        SStack_10.Capacity = 0;
        SStack_10.Length = 0;
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        SStack_1c.Length = 0;
        SStack_10.Data = (char *)0x0;
        util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_1c);
        util__Maybe_struct_util__ClassMember___operator(this_00 + 1,&SStack_10);
        this_00 = this_00 + 2;
      } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
    }
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00834dd0 Darray_util__LocStr__00834dd0 ====


/* public:  util__Darray_L_classutil__LocStr_G___Darray_L_classutil__LocStr_G_(int) */

Darray_L_class_util__LocStr_G_ * 
util__Darray_class_util__LocStr___Darray_class_util__LocStr
          (Darray_L_class_util__LocStr_G_ *this,int param_1)

{
  int iVar1;
  int *piVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  uint uVar5;
  LocStr *this_00;
  void *apvStack_38 [3];
  void *pvStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  int iStack_8;
  
  *(undefined ***)this = &vftable_3;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar5 = -(uint)((int)((ulonglong)(uint)param_1 * 0x18 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x18);
    piVar2 = (int *)port_op_new(-(uint)(0xfffffffb < uVar5) | uVar5 + 4);
    if (piVar2 == (int *)0x0) {
      pLVar3 = (LocStr *)0x0;
    }
    else {
      *piVar2 = param_1;
      pLVar3 = (LocStr *)(piVar2 + 1);
      this_00 = pLVar3;
      if (param_1 != 0) {
        do {
          SStack_20.Data = (char *)0x0;
          SStack_20.Capacity = 0;
          SStack_20.Length = 0;
          param_1 = param_1 + -1;
          SStack_14.Data = (char *)0x0;
          SStack_14.Capacity = 0;
          SStack_14.Length = 0;
          LocStr__LocStr(this_00,&SStack_14,&SStack_20);
          if (SStack_14.Data != (char *)0x0) {
            port_op_delete(SStack_14.Data);
            SStack_14.Data = (char *)0x0;
          }
          if (SStack_20.Data != (char *)0x0) {
            port_op_delete(SStack_20.Data);
          }
          this_00 = this_00 + 0x18;
        } while (param_1 != 0);
      }
    }
    *(LocStr **)(this + 4) = pLVar3;
    iStack_8 = 0;
    if (0 < *(int *)(this + 0xc)) {
      param_1 = 0;
      do {
        SStack_14.Data = (char *)0x0;
        SStack_14.Capacity = 0;
        SStack_14.Length = 0;
        SStack_20.Data = (char *)0x0;
        SStack_20.Capacity = 0;
        SStack_20.Length = 0;
        pSVar4 = (Str_L_char_G_ *)LocStr__LocStr((LocStr *)apvStack_38,&SStack_20,&SStack_14);
        iVar1 = *(int *)(this + 4);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + param_1),pSVar4);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + param_1) + 1,pSVar4 + 1);
        if (pvStack_2c != (void *)0x0) {
          port_op_delete(pvStack_2c);
          pvStack_2c = (void *)0x0;
        }
        if (apvStack_38[0] != (void *)0x0) {
          port_op_delete(apvStack_38[0]);
          apvStack_38[0] = (void *)0x0;
        }
        if (SStack_20.Data != (char *)0x0) {
          port_op_delete(SStack_20.Data);
          SStack_20.Data = (char *)0x0;
        }
        if (SStack_14.Data != (char *)0x0) {
          port_op_delete(SStack_14.Data);
        }
        param_1 = param_1 + 0x18;
        iStack_8 = iStack_8 + 1;
      } while (iStack_8 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 00834fd0 CheckSize_00834fd0 ====


/* private: bool  util__Darray_L_classutil__LocStr_G___CheckSize(int) */

bool __thiscall
util__Darray_class_util__LocStr___CheckSize(Darray_L_class_util__LocStr_G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  uint uVar5;
  Str_L_char_G_ *pSVar6;
  bool bVar7;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ *pSStack_10;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  bVar1 = !bVar7;
  if (bVar1) {
    pSStack_c = (Str_L_char_G_ *)0x0;
    SetSize(this,(int *)&pSStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pSStack_c = (Str_L_char_G_ *)0x3fffffff;
    SetSize(this,(int *)&pSStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar5) {
    return bVar1 && bVar7;
  }
  if (uVar5 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar5 = uVar3;
  }
  if ((int)uVar5 < (int)uVar3) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar5;
  }
  if (0x3fffffff < (int)uVar5) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar5 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x18);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pSStack_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar2 = uVar5;
    pSVar4 = (Str_L_char_G_ *)(puVar2 + 1);
    pSStack_c = pSVar4;
    while (uVar5 != 0) {
      SStack_28.Data = (char *)0x0;
      SStack_28.Capacity = 0;
      SStack_28.Length = 0;
      uVar5 = uVar5 - 1;
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      LocStr__LocStr((LocStr *)pSVar4,&SStack_1c,&SStack_28);
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
        SStack_1c.Data = (char *)0x0;
      }
      if (SStack_28.Data != (char *)0x0) {
        port_op_delete(SStack_28.Data);
        SStack_28.Data = (char *)0x0;
      }
      pSVar4 = pSVar4 + 2;
    }
  }
  pSVar4 = *(Str_L_char_G_ **)(this + 4);
  if (pSVar4 != (Str_L_char_G_ *)0x0) {
    pSStack_10 = pSStack_c + *(int *)(this + 8) * 2;
    this_00 = pSStack_c;
    pSVar6 = pSVar4;
    if (pSVar4 != pSVar4 + param_1 * 2) {
      do {
        if (this_00 == pSStack_10) break;
        util__Maybe_struct_util__ClassMember___operator(this_00,pSVar6);
        util__Maybe_struct_util__ClassMember___operator(this_00 + 1,pSVar6 + 1);
        pSVar6 = pSVar6 + 2;
        pSVar4 = *(Str_L_char_G_ **)(this + 4);
        this_00 = this_00 + 2;
      } while (pSVar6 != pSVar4 + param_1 * 2);
    }
    if (pSVar4 != (Str_L_char_G_ *)0x0) {
      LocStr___vector_deleting_destructor_((LocStr *)pSVar4,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 008351a0 VariadicLocStringify ====


/* class util__Darray_L_classutil__LocStr_G_ __cdecl util__VariadicLocStringify(char const *,char const
   *) */

void __cdecl util__VariadicLocStringify(char *param_1,char *param_2)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  char *in_stack_0000000c;
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  int iStack_2c;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  if (in_stack_0000000c != (char *)0x0) {
    SStack_18.Length = 0;
    cVar1 = *in_stack_0000000c;
    while (cVar1 != '\0') {
      SStack_18.Length = SStack_18.Length + 1;
      cVar1 = in_stack_0000000c[SStack_18.Length];
    }
    SStack_18.Capacity = SStack_18.Length + 1;
    pcVar3 = (char *)port_op_new(SStack_18.Capacity);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      memset(pcVar3,0,SStack_18.Capacity);
    }
    cVar1 = *in_stack_0000000c;
    pcVar7 = pcVar3;
    if (cVar1 != '\0') {
      do {
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
        cVar1 = pcVar7[(int)in_stack_0000000c - (int)pcVar3];
      } while (cVar1 != '\0');
    }
    *pcVar7 = '\0';
    SStack_18.Data = pcVar3;
  }
  Tokenize_L_char_C0_G_(&SStack_28,(char *)&SStack_18);
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  iVar4 = (**(code **)(uintptr_t)(SStack_28.Data + 0xc))();
  Darray_L_class_util__LocStr_G___Darray_L_class_util__LocStr_G_
            ((Darray_L_class_util__LocStr_G_ *)param_1,iVar4);
  iStack_c = 0;
  iVar4 = (**(code **)(uintptr_t)(SStack_28.Data + 0xc))();
  if (iStack_c < iVar4) {
    do {
      pSVar5 = (Str_L_char_G_ *)(**(code **)SStack_28.Data)(&iStack_c);
      if (pSVar5->Capacity < 1) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pSVar5->Data;
      }
      pSVar5 = (Str_L_char_G_ *)(uintptr_t)(Str_L_char_G___PrettyPrinted(pSVar5,&SStack_38));
      pSVar6 = (Str_L_char_G_ *)(uintptr_t)(Printf(&SStack_18,"%s %s",param_2,pcVar3));
      LocStr__LocStr((LocStr *)&SStack_50,pSVar6,pSVar5);
      if (SStack_18.Data != (char *)0x0) {
        port_op_delete(SStack_18.Data);
        SStack_18.Data = (char *)0x0;
      }
      if (SStack_38.Data != (char *)0x0) {
        port_op_delete(SStack_38.Data);
        SStack_38.Data = (char *)0x0;
      }
      iVar4 = *(int *)(param_1 + 8);
      iStack_2c = iVar4 + 1;
      Darray_L_class_util__LocStr_G___SetSize((Darray_L_class_util__LocStr_G_ *)param_1,&iStack_2c);
      bVar2 = Darray_L_class_util__LocStr_G___CheckSize((Darray_L_class_util__LocStr_G_ *)param_1,iVar4);
      if (bVar2) {
        iVar4 = *(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar4 + -0x18),&SStack_50);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar4 + -0xc),&SStack_44);
      }
      if (SStack_44.Data != (char *)0x0) {
        port_op_delete(SStack_44.Data);
        SStack_44.Data = (char *)0x0;
      }
      if (SStack_50.Data != (char *)0x0) {
        port_op_delete(SStack_50.Data);
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)(uintptr_t)(SStack_28.Data + 0xc))();
    } while (iStack_c < iVar4);
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&SStack_28);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00835390 VariadicStringify ====


/* class util__Darray_L_classutil__Str_L_char_G__G_ __cdecl util__VariadicStringify(char const *) */

char * __cdecl util__VariadicStringify(char *param_1)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_stack_00000008;
  char *pcStack_10;
  uint uStack_c;
  int iStack_8;
  
  pcStack_10 = (char *)0x0;
  uStack_c = 0;
  iStack_8 = 0;
  if (in_stack_00000008 != (char *)0x0) {
    iStack_8 = 0;
    cVar2 = *in_stack_00000008;
    pcVar3 = in_stack_00000008;
    while (cVar2 != '\0') {
      pcVar3 = pcVar3 + 1;
      iStack_8 = iStack_8 + 1;
      cVar2 = *pcVar3;
    }
    uVar1 = iStack_8 + 1;
    uStack_c = uVar1;
    pcVar3 = (char *)port_op_new(uVar1);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      memset(pcVar3,0,uVar1);
    }
    cVar2 = *in_stack_00000008;
    pcVar4 = pcVar3;
    if (cVar2 != '\0') {
      do {
        *pcVar4 = cVar2;
        pcVar4 = pcVar4 + 1;
        cVar2 = pcVar4[(int)in_stack_00000008 - (int)pcVar3];
      } while (cVar2 != '\0');
    }
    *pcVar4 = '\0';
    pcStack_10 = pcVar3;
  }
  Tokenize_L_char_C0_G_((Str_L_char_G_ *)param_1,(char *)&pcStack_10);
  if (pcStack_10 != (char *)0x0) {
    port_op_delete(pcStack_10);
  }
  return param_1;
}





//==== 00835bb0 Unzip_util__Str_char__util__LocStr_ ====


/* struct util__tuple2_L_classutil__Darray_L_classutil__Str_L_char_G__G__Cclassutil__Darray_L_class_util__LocStr_G__G_ __cdecl util__Unzip_L_classutil__Str_L_char_G__Cclassutil__LocStr_G_(class
   util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G_ const &) */

void __cdecl
util__Unzip_class_util__Str_char__class_util__LocStr
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  bool bVar2;
  int iVar3;
  int *in_stack_00000008;
  int iStack_14;
  Str_L_char_G_ *pSStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  *(undefined ***)param_1 = (undefined **)(&vftable_4);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)(param_1 + 0x10) = &vftable_3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  iVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iStack_c < iVar3) {
    do {
      pSStack_10 = (Str_L_char_G_ *)(**(code **)*in_stack_00000008)(&iStack_c);
      iVar3 = *(int *)(param_1 + 8);
      iStack_14 = iVar3 + 1;
      Darray_L_class_util__Str_L_char_G___G___SetSize((Darray_L_class_util__Str_L_char_G___G_ *)param_1,&iStack_14);
      bVar2 = Darray_L_class_util__Str_L_char_G___G___CheckSize
                        ((Darray_L_class_util__Str_L_char_G___G_ *)param_1,iVar3);
      pSVar1 = pSStack_10;
      if (bVar2) {
        util__Maybe_struct_util__ClassMember___operator
                  ((Str_L_char_G_ *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) * 3 + -3) * 4),
                   pSStack_10);
      }
      pSStack_10 = pSVar1 + 1;
      iVar3 = *(int *)(param_1 + 0x18);
      iStack_14 = iVar3 + 1;
      Darray_L_class_util__LocStr_G___SetSize((Darray_L_class_util__LocStr_G_ *)(param_1 + 0x10),&iStack_14)
      ;
      bVar2 = Darray_L_class_util__LocStr_G___CheckSize
                        ((Darray_L_class_util__LocStr_G_ *)(param_1 + 0x10),iVar3);
      if (bVar2) {
        iVar3 = *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x18) * 0x18;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar3 + -0x18),pSStack_10);
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar3 + -0xc),pSStack_10 + 1);
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
    } while (iStack_c < iVar3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00835ce0 Zip_util__Str_char__util__LocStr_ ====


/* class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G_ __cdecl
   util__Zip_class_util__Str_char__class_util__LocStr(class util__Darray_L_classutil__Str_L_char_G__G_
   const &,class util__Darray_L_classutil__LocStr_G_ const &) */

void __cdecl
util__Zip_class_util__Str_char__class_util__LocStr__o2
          (Darray_L_class_util__Str_L_char_G___G_ *param_1,Darray_L_class_util__LocStr_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  Darray_L_class_util__LocStr_G_ *pDVar1;
  int *piVar2;
  Darray_L_class_util__Str_L_char_G___G_ *this;
  Str_L_char_G_ *pSVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  Str_L_char_G_ *pSVar7;
  uint uVar8;
  char *pcVar9;
  int *in_stack_0000000c;
  Str_L_char_G_ SStack_ec;
  Str_L_char_G_ SStack_e0;
  void *apvStack_d4 [3];
  void *pvStack_c8;
  Str_L_char_G_ SStack_bc;
  Str_L_char_G_ SStack_b0;
  Str_L_char_G_ SStack_a4;
  Str_L_char_G_ SStack_98;
  Str_L_char_G_ SStack_8c;
  Str_L_char_G_ SStack_80;
  Str_L_char_G_ SStack_74;
  Str_L_char_G_ SStack_68;
  Str_L_char_G_ SStack_5c;
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  Str_L_char_G_ SStack_2c;
  uint uStack_20;
  Darray_L_class_util__LocStr_G_ *pDStack_1c;
  int *piStack_18;
  Darray_L_class_util__Str_L_char_G___G_ *pDStack_14;
  Str_L_char_G_ *pSStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_14 = param_1;
  uVar8 = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  pDStack_1c = param_2;
  piStack_18 = in_stack_0000000c;
  uStack_20 = 0;
  iVar5 = (**(code **)(uintptr_t)(*in_stack_0000000c + 0xc))();
  iVar6 = (**(code **)(*(int *)param_2 + 0xc))();
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)pDStack_14,
             iVar5);
  iStack_c = 0;
  pcVar9 = SStack_2c.Data;
  while( true ) {
    iVar5 = (**(code **)(uintptr_t)(*piStack_18 + 0xc))();
    iVar6 = (**(code **)(*(int *)pDStack_1c + 0xc))();
    piVar2 = piStack_18;
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    if (iVar5 <= iStack_c) break;
    iVar5 = (**(code **)(uintptr_t)(*piStack_18 + 0xc))();
    if (iStack_c < iVar5) {
      uVar8 = uVar8 | 1;
      pSVar7 = (Str_L_char_G_ *)(**(code **)*piVar2)(&iStack_c);
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_ec,pSVar7);
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_e0,pSVar7 + 1);
      pSStack_10 = &SStack_ec;
    }
    else {
      SStack_44.Data = (char *)0x0;
      SStack_44.Capacity = 0;
      SStack_44.Length = 0;
      SStack_38.Data = (char *)0x0;
      SStack_38.Capacity = 0;
      SStack_38.Length = 0;
      pSStack_10 = (Str_L_char_G_ *)LocStr__LocStr((LocStr *)apvStack_d4,&SStack_38,&SStack_44);
      uVar8 = uVar8 | 0xe;
    }
    pDVar1 = pDStack_1c;
    iVar5 = (**(code **)(*(int *)pDStack_1c + 0xc))();
    if (iStack_c < iVar5) {
      pSVar7 = (Str_L_char_G_ *)(*(code *)**(undefined4 **)pDVar1)(&iStack_c);
      pSVar7 = (Str_L_char_G_ *)util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_68,pSVar7);
      uStack_20 = 0x10;
    }
    else {
      pcVar9 = (char *)0x0;
      pSVar7 = &SStack_2c;
      SStack_2c.Data = (char *)0x0;
      uStack_20 = 0x20;
      SStack_2c.Capacity = 0;
      SStack_2c.Length = 0;
    }
    pSVar3 = pSStack_10;
    uStack_20 = uStack_20 | uVar8;
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_98,pSStack_10);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_8c,pSVar3 + 1);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_5c,pSVar7);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_80,&SStack_98);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_74,&SStack_8c);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_50,&SStack_5c);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_bc,&SStack_50);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_b0,&SStack_80);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_a4,&SStack_74);
    if (SStack_50.Data != (char *)0x0) {
      port_op_delete(SStack_50.Data);
      SStack_50.Data = (char *)0x0;
    }
    if (SStack_74.Data != (char *)0x0) {
      port_op_delete(SStack_74.Data);
    }
    if (SStack_80.Data != (char *)0x0) {
      port_op_delete(SStack_80.Data);
    }
    if (SStack_5c.Data != (char *)0x0) {
      port_op_delete(SStack_5c.Data);
      SStack_5c.Data = (char *)0x0;
    }
    if (SStack_8c.Data != (char *)0x0) {
      port_op_delete(SStack_8c.Data);
    }
    if (SStack_98.Data != (char *)0x0) {
      port_op_delete(SStack_98.Data);
    }
    this = pDStack_14;
    iVar5 = *(int *)(pDStack_14 + 8);
    pSStack_10 = (Str_L_char_G_ *)(iVar5 + 1);
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___SetSize
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)pDStack_14,
               (int *)&pSStack_10);
    bVar4 = Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)
                       this,iVar5);
    if (bVar4) {
      iVar5 = *(int *)(this + 4) + *(int *)(this + 8) * 0x24;
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar5 + -0x24),&SStack_bc);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar5 + -0x18),&SStack_b0);
      util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar5 + -0xc),&SStack_a4);
    }
    if (SStack_a4.Data != (char *)0x0) {
      port_op_delete(SStack_a4.Data);
    }
    if (SStack_b0.Data != (char *)0x0) {
      port_op_delete(SStack_b0.Data);
    }
    if (SStack_bc.Data != (char *)0x0) {
      port_op_delete(SStack_bc.Data);
    }
    uVar8 = uStack_20;
    if (((uStack_20 & 0x20) != 0) && (uVar8 = uStack_20 & 0xffffffdf, pcVar9 != (char *)0x0)) {
      port_op_delete(pcVar9);
      pcVar9 = (char *)0x0;
      SStack_2c.Data = (char *)0x0;
    }
    if ((uVar8 & 0x10) != 0) {
      uVar8 = uVar8 & 0xffffffef;
      if (SStack_68.Data != (char *)0x0) {
        port_op_delete(SStack_68.Data);
        SStack_68.Data = (char *)0x0;
      }
    }
    if ((uVar8 & 8) != 0) {
      uVar8 = uVar8 & 0xfffffff7;
      if (pvStack_c8 != (void *)0x0) {
        port_op_delete(pvStack_c8);
        pvStack_c8 = (void *)0x0;
      }
      if (apvStack_d4[0] != (void *)0x0) {
        port_op_delete(apvStack_d4[0]);
        apvStack_d4[0] = (void *)0x0;
      }
    }
    if ((uVar8 & 4) != 0) {
      uVar8 = uVar8 & 0xfffffffb;
      if (SStack_38.Data != (char *)0x0) {
        port_op_delete(SStack_38.Data);
        SStack_38.Data = (char *)0x0;
      }
    }
    if ((uVar8 & 2) != 0) {
      uVar8 = uVar8 & 0xfffffffd;
      if (SStack_44.Data != (char *)0x0) {
        port_op_delete(SStack_44.Data);
        SStack_44.Data = (char *)0x0;
      }
    }
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar8 & 0xfffffffe;
      if (SStack_e0.Data != (char *)0x0) {
        port_op_delete(SStack_e0.Data);
      }
      if (SStack_ec.Data != (char *)0x0) {
        port_op_delete(SStack_ec.Data);
      }
    }
    iStack_c = iStack_c + 1;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 008360b0 Darray_util__tuple2_util__Str_char__util__LocStr___ ====


/* public:  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G___G___Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G_(class
   util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G_ const &) */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_____Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this,
          Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *pDVar1;
  uint *puVar2;
  uint uVar3;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *pDVar4;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *pDVar5;
  Str_L_char_G_ *pSVar6;
  uint uVar7;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *pDStack_8;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_558;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  param_1 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)
            (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar7 = *(uint *)(this + 0xc);
  uVar3 = -(uint)((int)((ulonglong)uVar7 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x24);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pDVar4 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)0x0;
  }
  else {
    *puVar2 = uVar7;
    pDVar5 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)(puVar2 + 1);
    pDVar4 = pDVar5;
    this = pDStack_8;
    while (param_1 = pDVar4, pDStack_8 = this, uVar7 != 0) {
      *(uint *)pDVar5 = 0;
      *(uint *)(pDVar5 + 4) = 0;
      *(uint *)(pDVar5 + 8) = 0;
      uVar7 = uVar7 - 1;
      SStack_20.Data = (char *)0x0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      SStack_14.Data = (char *)0x0;
      SStack_14.Capacity = 0;
      SStack_14.Length = 0;
      LocStr__LocStr((LocStr *)(pDVar5 + 0xc),&SStack_14,&SStack_20);
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
        SStack_14.Data = (char *)0x0;
      }
      if (SStack_20.Data != (char *)0x0) {
        port_op_delete(SStack_20.Data);
        SStack_20.Data = (char *)0x0;
      }
      pDVar5 = pDVar5 + 0x24;
      pDVar4 = param_1;
      this = pDStack_8;
    }
  }
  *(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ **)(this + 4) = pDVar4;
  pSVar6 = *(Str_L_char_G_ **)(pDVar1 + 4);
  if (pSVar6 != pSVar6 + *(int *)(pDVar1 + 8) * 3) {
    this_00 = (Str_L_char_G_ *)(pDVar4 + 0xc);
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00 + -1,pSVar6);
      util__Maybe_struct_util__ClassMember___operator(this_00,pSVar6 + 1);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,pSVar6 + 2);
      pSVar6 = pSVar6 + 3;
      this_00 = this_00 + 3;
    } while (pSVar6 != (Str_L_char_G_ *)(*(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 0x24));
  }
  return pDStack_8;
}





//==== 00836240 Darray_util__tuple2_util__Str_char__util__LocStr____00836240 ====


/* public:  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G___G___Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G_(int) */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_____Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr__o2
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  Str_L_char_G_ *this_00;
  int iVar4;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  *(undefined ***)this = &vftable_558;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar2 = -(uint)((int)((ulonglong)(uint)param_1 * 0x24 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x24);
    piVar1 = (int *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      *piVar1 = param_1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar1;
      if (param_1 != 0) {
        do {
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          param_1 = param_1 + -1;
          SStack_1c.Data = (char *)0x0;
          SStack_1c.Capacity = 0;
          SStack_1c.Length = 0;
          SStack_10.Data = (char *)0x0;
          SStack_10.Capacity = 0;
          SStack_10.Length = 0;
          LocStr__LocStr((LocStr *)(piVar3 + 3),&SStack_10,&SStack_1c);
          if (SStack_10.Data != (char *)0x0) {
            port_op_delete(SStack_10.Data);
            SStack_10.Data = (char *)0x0;
          }
          if (SStack_1c.Data != (char *)0x0) {
            port_op_delete(SStack_1c.Data);
          }
          piVar3 = piVar3 + 9;
        } while (param_1 != 0);
      }
    }
    iVar4 = 0;
    *(int **)(this + 4) = piVar1;
    if (0 < *(int *)(this + 0xc)) {
      param_1 = 0;
      do {
        SStack_40.Data = (char *)0x0;
        SStack_40.Capacity = 0;
        SStack_40.Length = 0;
        SStack_10.Data = (char *)0x0;
        SStack_10.Capacity = 0;
        SStack_10.Length = 0;
        SStack_1c.Data = (char *)0x0;
        SStack_1c.Capacity = 0;
        SStack_1c.Length = 0;
        LocStr__LocStr((LocStr *)&SStack_34,&SStack_1c,&SStack_10);
        if (SStack_1c.Data != (char *)0x0) {
          port_op_delete(SStack_1c.Data);
          SStack_1c.Data = (char *)0x0;
        }
        if (SStack_10.Data != (char *)0x0) {
          port_op_delete(SStack_10.Data);
          SStack_10.Data = (char *)0x0;
        }
        this_00 = (Str_L_char_G_ *)(*(int *)(this + 4) + param_1);
        util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_40);
        util__Maybe_struct_util__ClassMember___operator(this_00 + 1,&SStack_34);
        util__Maybe_struct_util__ClassMember___operator(this_00 + 2,&SStack_28);
        if (SStack_28.Data != (char *)0x0) {
          port_op_delete(SStack_28.Data);
          SStack_28.Data = (char *)0x0;
        }
        if (SStack_34.Data != (char *)0x0) {
          port_op_delete(SStack_34.Data);
          SStack_34.Data = (char *)0x0;
        }
        if (SStack_40.Data != (char *)0x0) {
          port_op_delete(SStack_40.Data);
        }
        param_1 = param_1 + 0x24;
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 00836470 Darray_util__TupleProperty_ ====


/* public:  util__Darray_L_structutil__TupleProperty_G___Darray_L_struct_util__TupleProperty_G_(class util__Darray_L_structutil__TupleProperty_G_ const &) */

Darray_L_struct_util__TupleProperty_G_ * 
util__Darray_struct_util__TupleProperty___Darray_struct_util__TupleProperty
          (Darray_L_struct_util__TupleProperty_G_ *this,Darray_L_struct_util__TupleProperty_G_ *param_1)

{
  Darray_L_struct_util__TupleProperty_G_ *pDVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  Str_L_char_G_ *pSVar6;
  uint *puVar7;
  
  pDVar1 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_557);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_util__TupleProperty_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  uVar5 = *(uint *)(this + 0xc);
  uVar4 = -(uint)((int)((ulonglong)uVar5 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x1c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  if (puVar2 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar5;
    puVar7 = puVar2 + 1;
    if (uVar5 != 0) {
      puVar3 = puVar2 + 6;
      puVar2 = puVar7;
      do {
        *puVar2 = 0;
        puVar2 = puVar2 + 7;
        puVar3[-4] = 0;
        puVar3[-3] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar5 = uVar5 - 1;
        puVar3 = puVar3 + 7;
      } while (uVar5 != 0);
    }
  }
  *(uint **)(this + 4) = puVar7;
  pSVar6 = *(Str_L_char_G_ **)(pDVar1 + 4);
  if (pSVar6 == (Str_L_char_G_ *)((int)pSVar6 + *(int *)(pDVar1 + 8) * 0x1c)) {
    return this;
  }
  puVar2 = puVar7 + 6;
  do {
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + -6),pSVar6);
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar2 + -3),pSVar6 + 1);
    *puVar2 = (uint)pSVar6[2].Data;
    pSVar6 = (Str_L_char_G_ *)&pSVar6[2].Capacity;
    puVar2 = puVar2 + 7;
  } while (pSVar6 != (Str_L_char_G_ *)(*(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 0x1c));
  return this;
}





//==== 008365b0 Darray_util__LocStr__008365b0 ====


/* public:  util__Darray_L_classutil__LocStr_G___Darray_L_classutil__LocStr_G_(class
   util__Darray_L_classutil__LocStr_G_ const &) */

Darray_L_class_util__LocStr_G_ * 
util__Darray_class_util__LocStr___Darray_class_util__LocStr__o2
          (Darray_L_class_util__LocStr_G_ *this,Darray_L_class_util__LocStr_G_ *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  Darray_L_class_util__LocStr_G_ *pDStack_8;
  
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = &vftable_3;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  pDStack_8 = this;
  iStack_c = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_c);
  uVar3 = *(uint *)(this + 0xc);
  uVar2 = -(uint)((int)((ulonglong)uVar3 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x18);
  puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puVar1 == (uint *)0x0) {
    this_00 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar1 = uVar3;
    this_00 = (Str_L_char_G_ *)(puVar1 + 1);
    pSVar4 = this_00;
    while (uVar3 != 0) {
      SStack_24.Data = (char *)0x0;
      SStack_24.Capacity = 0;
      SStack_24.Length = 0;
      uVar3 = uVar3 - 1;
      SStack_18.Data = (char *)0x0;
      SStack_18.Capacity = 0;
      SStack_18.Length = 0;
      LocStr__LocStr((LocStr *)pSVar4,&SStack_18,&SStack_24);
      if (SStack_18.Data != (char *)0x0) {
        port_op_delete(SStack_18.Data);
        SStack_18.Data = (char *)0x0;
      }
      if (SStack_24.Data != (char *)0x0) {
        port_op_delete(SStack_24.Data);
        SStack_24.Data = (char *)0x0;
      }
      pSVar4 = pSVar4 + 2;
    }
  }
  *(Str_L_char_G_ **)(pDStack_8 + 4) = this_00;
  pSVar4 = *(Str_L_char_G_ **)(param_1 + 4);
  if (pSVar4 != pSVar4 + *(int *)(param_1 + 8) * 2) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,pSVar4);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,pSVar4 + 1);
      pSVar4 = pSVar4 + 2;
      this_00 = this_00 + 2;
    } while (pSVar4 != (Str_L_char_G_ *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18));
    return pDStack_8;
  }
  return pDStack_8;
}





//==== 00836710 ReflectionRegistry ====


/* private: __thiscall util__ReflectionRegistry__ReflectionRegistry(void) */

ReflectionRegistry * __thiscall
util__ReflectionRegistry__ReflectionRegistry(ReflectionRegistry *this)

{
  uint uVar1;
  undefined4 *puVar2;
  tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *ptVar3;
  bool *pbVar4;
  int iVar5;
  tuple2_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cvoid__P____cdecl_P__int__G___G_
  *ptVar6;
  tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *ptVar7;
  tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *ptVar8;
  tuple2_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cvoid__P____cdecl_P__int__G___G_
  *ptVar9;
  tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *ptVar10;
  
  (this->ReflectionInfoDatabase).Data = (tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *)0x0;
  (this->ReflectionInfoDatabase).DataInUse = (bool *)0x0;
  (this->ReflectionInfoDatabase).Capacity = 500;
  puVar2 = (undefined4 *)port_op_new(0x1f44);
  if (puVar2 == (undefined4 *)0x0) {
    ptVar8 = (tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *)0x0;
  }
  else {
    ptVar8 = (tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *)(puVar2 + 1);
    *puVar2 = 500;
    iVar5 = 500;
    ptVar3 = ptVar8;
    do {
      (ptVar3->Value1).Data = (char *)0x0;
      (ptVar3->Value1).Capacity = 0;
      (ptVar3->Value1).Length = 0;
      ptVar3->Value2 = (ReflectionInfoBase *)0x0;
      iVar5 = iVar5 + -1;
      ptVar3 = ptVar3 + 1;
    } while (iVar5 != 0);
  }
  uVar1 = (this->ReflectionInfoDatabase).Capacity;
  (this->ReflectionInfoDatabase).Data = ptVar8;
  pbVar4 = (bool *)port_op_new(uVar1);
  if (pbVar4 == (bool *)0x0) {
    pbVar4 = (bool *)0x0;
  }
  else {
    memset(pbVar4,0,uVar1);
  }
  (this->ReflectionInfoDatabase).DataInUse = pbVar4;
  (this->TupleDatabase).Data =
       (tuple2_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cvoid__P____cdecl_P__int__G___G_
        *)0x0;
  (this->TupleDatabase).DataInUse = (bool *)0x0;
  (this->TupleDatabase).Capacity = 500;
  puVar2 = (undefined4 *)port_op_new(0x55f4);
  if (puVar2 == (undefined4 *)0x0) {
    ptVar9 = (tuple2_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cvoid__P____cdecl_P__int__G___G_
              *)0x0;
  }
  else {
    ptVar9 = (tuple2_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cvoid__P____cdecl_P__int__G___G_
              *)(puVar2 + 1);
    *puVar2 = 500;
    iVar5 = 500;
    puVar2 = puVar2 + 10;
    ptVar6 = ptVar9;
    do {
      (ptVar6->Value1).Data = (char *)0x0;
      ptVar6 = (tuple2_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cvoid__P____cdecl_P__int__G___G_
                *)&ptVar6[1].Value2;
      puVar2[-8] = 0;
      puVar2[-7] = 0;
      puVar2[-6] = (undefined4)(uintptr_t)(&vftable_557);
      puVar2[-5] = 0;
      puVar2[-4] = 0;
      puVar2[-3] = 0;
      puVar2[-2] = 0;
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar5 = iVar5 + -1;
      puVar2 = puVar2 + 0xb;
    } while (iVar5 != 0);
  }
  uVar1 = (this->TupleDatabase).Capacity;
  (this->TupleDatabase).Data = ptVar9;
  pbVar4 = (bool *)port_op_new(uVar1);
  if (pbVar4 == (bool *)0x0) {
    pbVar4 = (bool *)0x0;
  }
  else {
    memset(pbVar4,0,uVar1);
  }
  (this->TupleDatabase).DataInUse = pbVar4;
  (this->EnumDatabase).Data = (tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *)0x0;
  (this->EnumDatabase).DataInUse = (bool *)0x0;
  (this->EnumDatabase).Capacity = 500;
  puVar2 = (undefined4 *)port_op_new(0x36b4);
  if (puVar2 == (undefined4 *)0x0) {
    ptVar10 = (tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *)0x0;
  }
  else {
    ptVar10 = (tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *)(puVar2 + 1);
    *puVar2 = 500;
    iVar5 = 500;
    puVar2 = puVar2 + 6;
    ptVar7 = ptVar10;
    do {
      (ptVar7->Value1).Data = (char *)0x0;
      ptVar7 = ptVar7 + 1;
      puVar2[-4] = 0;
      puVar2[-3] = 0;
      puVar2[-2] = (undefined4)(uintptr_t)(&vftable_558);
      puVar2[-1] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar5 = iVar5 + -1;
      puVar2 = puVar2 + 7;
    } while (iVar5 != 0);
  }
  uVar1 = (this->EnumDatabase).Capacity;
  (this->EnumDatabase).Data = ptVar10;
  pbVar4 = (bool *)port_op_new(uVar1);
  if (pbVar4 == (bool *)0x0) {
    (this->EnumDatabase).DataInUse = (bool *)0x0;
    return this;
  }
  memset(pbVar4,0,uVar1);
  (this->EnumDatabase).DataInUse = pbVar4;
  return this;
}





//==== 00836920 AssocArray_util__Str_char__util__ReflectionInfoBase__ ====


/* public:  AssocArray_L_classutil__Str_L_char_G__Cstructutil__ReflectionInfoBase_P_G___dtor(void) */

void __thiscall
util__AssocArray_class_util__Str_char__struct_util__ReflectionInfoBase_____AssocArray_class_util__Str_char__struct_util__ReflectionInfoBase(AssocArray_L_class_util__Str_L_char_G__Cstruct_util__ReflectionInfoBase_P_G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    puVar4 = (undefined4 *)(iVar3 * 0x10 + iVar2);
    if (iVar3 != 0) {
      do {
        puVar1 = puVar4 + -4;
        puVar4 = puVar4 + -4;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          port_op_delete((void *)*puVar1);
          *puVar4 = 0;
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x10 + 4);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}





//==== 008369a0 AssocArray_util__Str_char__util__tuple2_util__Darray_util__TupleProperty__util__ReflectionRegistry__TupleTypedFunctions___ ====


/* public:  AssocArray_L_classutil__Str_L_char_G__Cstructutil__tuple2_L_classutil__Darray_L_struct_util__TupleProperty_G__Cstructutil__ReflectionRegistry__TupleTypedFunctions_G__G___dtor(void) */

void 
util__AssocArray_class_util__Str_char__struct_util__tuple2_class_util__Darray_struct_util__TupleProperty__struct_util__ReflectionRegistry__TupleTypedFunctions______AssocArray_class_util__Str_char__struct_util__tuple2_class_util__Darray_struct_util__TupleProperty__struct_util__ReflectionRegistry__TupleTypedFunctions(AssocArray_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = *(int *)this;
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + -4);
    iVar5 = *piVar1;
    puVar4 = (undefined4 *)(iVar5 * 0x2c + iVar3);
    if (iVar5 != 0) {
      do {
        puVar2 = puVar4 + -0xb;
        iVar5 = iVar5 + -1;
        puVar4[-8] = (undefined4)(uintptr_t)(&vftable_557);
        if ((TupleProperty *)puVar4[-7] != (TupleProperty *)0x0) {
          util__Darray_struct_util__TupleProperty____scalar_deleting_destructor((TupleProperty *)puVar4[-7],3);
        }
        puVar4[-7] = 0;
        puVar4[-8] = (undefined4)(uintptr_t)(&vftable);
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x2c + 4);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}





//==== 00836a40 AssocArray_util__Str_char__util__Darray_util__tuple2_util__Str_char__util__LocStr_____ ====


/* public:  AssocArray_L_class_util__Str_L_char_G__Cclassutil__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G___G__G___dtor(void) */

void 
util__AssocArray_class_util__Str_char__class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr________AssocArray_class_util__Str_char__class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr(AssocArray_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)this;
  if (iVar5 != 0) {
    piVar1 = (int *)(iVar5 + -4);
    iVar4 = *piVar1;
    puVar3 = (undefined4 *)(iVar5 + iVar4 * 0x1c);
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        puVar2 = puVar3 + -7;
        iVar4 = iVar4 + -1;
        puVar3[-4] = (undefined4)(uintptr_t)(&vftable_558);
        if ((ResearchReference *)puVar3[-3] != (ResearchReference *)0x0) {
          ResearchReference___vector_deleting_destructor((ResearchReference *)puVar3[-3],3);
        }
        puVar3[-3] = 0;
        puVar3[-4] = (undefined4)(uintptr_t)(&vftable);
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        puVar3 = puVar2;
      } while (iVar4 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x1c + 4);
  }
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)this = 0;
  return;
}





//==== 00836b00 Darray_util__ClassMember__00836b00 ====


/* public: virtual __thiscall util__Darray_struct_util__ClassMember____Darray_struct_util__ClassMember(void) */

void __thiscall
util__Darray_struct_util__ClassMember____Darray_struct_util__ClassMember(Darray_L_struct_util__ClassMember_G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 4);
  *(undefined ***)this = (undefined **)(&vftable_52);
  if (iVar5 != 0) {
    piVar1 = (int *)(iVar5 + -4);
    iVar4 = *piVar1;
    puVar3 = (undefined4 *)(iVar5 + iVar4 * 0x28);
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        puVar2 = puVar3 + -10;
        iVar4 = iVar4 + -1;
        if ((void *)puVar3[-4] != (void *)0x0) {
          port_op_delete((void *)puVar3[-4]);
          puVar3[-4] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        puVar3 = puVar2;
      } while (iVar4 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x28 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00836b90 Darray_util__TupleProperty__00836b90 ====


/* public: virtual __thiscall util__Darray_struct_util__TupleProperty____Darray_struct_util__TupleProperty(void) */

void __thiscall
util__Darray_struct_util__TupleProperty____Darray_struct_util__TupleProperty(Darray_L_struct_util__TupleProperty_G_ *this)

{
  *(undefined ***)this = (undefined **)(&vftable_557);
  if (*(TupleProperty **)(this + 4) != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(*(TupleProperty **)(this + 4),3);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00836bc0 tuple2_util__Str_char__util__tuple2_util__Darray_util__TupleProperty__util__ReflectionRegistry__TupleTypedFunctions___ ====


/* public:  tuple2_L_classutil__Str_L_char_G__Cstructutil__tuple2_L_classutil__Darray_L_struct_util__TupleProperty_G__Cstructutil__ReflectionRegistry__TupleTypedFunctions_G__G___dtor(void) */

void 
util__tuple2_class_util__Str_char__struct_util__tuple2_class_util__Darray_struct_util__TupleProperty__struct_util__ReflectionRegistry__TupleTypedFunctions______tuple2_class_util__Str_char__struct_util__tuple2_class_util__Darray_struct_util__TupleProperty__struct_util__ReflectionRegistry__TupleTypedFunctions(tuple2_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G_
           *this)

{
  *(undefined ***)(this + 0xc) = (undefined **)(&vftable_557);
  if (*(TupleProperty **)(this + 0x10) != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(*(TupleProperty **)(this + 0x10),3);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)(this + 0xc) = (undefined **)(&vftable);
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
    *(undefined4 *)this = 0;
  }
  return;
}





//==== 00836c00 tuple2_util__Str_char__util__Darray_util__tuple2_util__Str_char__util__LocStr_____ ====


/* public:  tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G__G___dtor(void) */

void 
util__tuple2_class_util__Str_char__class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr________tuple2_class_util__Str_char__class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G_
           *this)

{
  *(undefined ***)(this + 0xc) =
       &vftable_558;
  if (*(ResearchReference **)(this + 0x10) != (ResearchReference *)0x0) {
    ResearchReference___vector_deleting_destructor(*(ResearchReference **)(this + 0x10),3);
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)(this + 0xc) = (undefined **)(&vftable);
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
    *(undefined4 *)this = 0;
  }
  return;
}





//==== 00836c40 operator__00836c40 ====


/* public: class util__Darray_L_structutil__TupleProperty_G_ &  util__Darray_struct_util__TupleProperty___operator(class util__Darray_L_structutil__TupleProperty_G_ const &) */

Darray_L_struct_util__TupleProperty_G_ * 
util__Darray_struct_util__TupleProperty___operator
          (Darray_L_struct_util__TupleProperty_G_ *this,Darray_L_struct_util__TupleProperty_G_ *param_1)

{
  Str_L_char_G_ *pSVar1;
  int iVar2;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar3;
  int iStack_8;
  
  iStack_8 = (**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,&iStack_8);
  iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iVar2 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  CheckSizeDestructive(this);
  pSVar3 = *(Str_L_char_G_ **)(param_1 + 4);
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (pSVar3 == (Str_L_char_G_ *)((int)pSVar3 + *(int *)(param_1 + 8) * 0x1c)) {
    return this;
  }
  do {
    util__Maybe_struct_util__ClassMember___operator(this_00,pSVar3);
    util__Maybe_struct_util__ClassMember___operator(this_00 + 1,pSVar3 + 1);
    pSVar1 = pSVar3 + 2;
    pSVar3 = (Str_L_char_G_ *)&pSVar3[2].Capacity;
    this_00[2].Data = pSVar1->Data;
    this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
  } while (pSVar3 != (Str_L_char_G_ *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x1c));
  return this;
}





//==== 00836d00 scalar_deleting_destructor_00836d00 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__LocStr_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr______scalar_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this,uint param_1
          )

{
  *(undefined ***)this = &vftable_558;
  if (*(ResearchReference **)(this + 4) != (ResearchReference *)0x0) {
    ResearchReference___vector_deleting_destructor(*(ResearchReference **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00836d40 scalar_deleting_destructor_00836d40 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__TupleProperty_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__TupleProperty____scalar_deleting_destructor__o2
          (Darray_L_struct_util__TupleProperty_G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_557);
  if (*(TupleProperty **)(this + 4) != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(*(TupleProperty **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00836d80 Add_00836d80 ====


/* public: bool  util__AssocArray_L_classutil__Str_L_char_G__Cstructutil__ReflectionInfoBase__P_G___Add(class util__Str_L_char_G_ const &,struct util__ReflectionInfoBase * const &) */

bool 
util__AssocArray_class_util__Str_char__struct_util__ReflectionInfoBase____Add
          (AssocArray_L_class_util__Str_L_char_G__Cstruct_util__ReflectionInfoBase_P_G_ *this,
          Str_L_char_G_ *param_1,ReflectionInfoBase **param_2)

{
  uint uVar1;
  ReflectionInfoBase *pRVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ SStack_28;
  ReflectionInfoBase *pRStack_1c;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  AssocArray_L_class_util__Str_L_char_G__Cstruct_util__ReflectionInfoBase_P_G_ *pAStack_8;
  
  pSVar10 = param_1;
  if (*(int *)(this + 8) == 0) {
    return false;
  }
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  pAStack_8 = this;
  uVar3 = GetHash(pcVar4);
  uVar1 = *(uint *)(this + 8);
  for (uVar7 = uVar3 % uVar1; (int)uVar7 < 0; uVar7 = uVar7 + uVar1) {
  }
  if ((int)uVar1 <= (int)uVar7) {
    uVar7 = (int)uVar7 % (int)uVar1;
  }
  param_1 = (Str_L_char_G_ *)0x0;
  iStack_c = *(int *)(pAStack_8 + 4);
  cVar5 = *(char *)(iStack_c + uVar7);
  while (cVar5 != '\0') {
    if ((int)uVar1 <= (int)param_1) goto LAB_00836e66;
    puVar6 = (undefined4 *)(uVar7 * 0x10 + *(int *)pAStack_8);
    if (puVar6[2] == pSVar10->Length) {
      if ((int)puVar6[1] < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)*puVar6;
      }
      if (pSVar10->Capacity < 1) {
        pcVar8 = "";
      }
      else {
        pcVar8 = pSVar10->Data;
      }
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        return false;
      }
      iVar9 = (int)pcVar8 - (int)pcVar4;
      while (cVar5 == pcVar4[iVar9]) {
        cVar5 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar5 == '\0') {
          return false;
        }
      }
    }
    for (uVar7 = uVar7 + 1; (int)uVar7 < 0; uVar7 = uVar7 + uVar1) {
    }
    if ((int)uVar1 <= (int)uVar7) {
      uVar7 = (int)uVar7 % (int)uVar1;
    }
    param_1 = (Str_L_char_G_ *)((int)&param_1->Data + 1);
    cVar5 = *(char *)(iStack_c + uVar7);
  }
  if ((int)uVar1 <= (int)param_1) {
LAB_00836e66:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(pAStack_8 + 8) <= (int)param_1) {
      return false;
    }
  }
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_18,pSVar10);
  pRVar2 = *param_2;
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_28,&SStack_18);
  pRStack_1c = pRVar2;
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  pSVar10 = (Str_L_char_G_ *)(uVar7 * 0x10 + *(int *)pAStack_8);
  util__Maybe_struct_util__ClassMember___operator(pSVar10,&SStack_28);
  pSVar10[1].Data = (char *)pRVar2;
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  *(undefined1 *)(uVar7 + *(int *)(pAStack_8 + 4)) = 1;
  return true;
}





//==== 00836f00 Add_00836f00 ====


/* public: bool  util__AssocArray_L_classutil__Str_L_char_G__Cstructutil__tuple2_L_class_util__Darray_L_structutil__TupleProperty_G__Cstructutil__ReflectionRegistry__TupleTypedFunctions_G___G___Add(class util__Str_L_char_G_ const &,struct util__tuple2_L_classutil__Darray_L_struct_util__TupleProperty_G__Cstructutil__ReflectionRegistry__TupleTypedFunctions_G_ const &) */

bool 
util__AssocArray_class_util__Str_char__struct_util__tuple2_class_util__Darray_struct_util__TupleProperty__struct_util__ReflectionRegistry__TupleTypedFunctions_____Add(AssocArray_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G_
      *this,Str_L_char_G_ *param_1,
     tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G_
     *param_2)

{
  uint uVar1;
  AssocArray_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G_
  *pAVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  undefined4 *puVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_64;
  Darray_L_struct_util__TupleProperty_G_ aDStack_58 [16];
  int iStack_48;
  int iStack_44;
  char *pcStack_40;
  int iStack_3c;
  undefined **ppuStack_38;
  TupleProperty *pTStack_34;
  int iStack_28;
  int iStack_24;
  char *pcStack_20;
  int iStack_1c;
  Str_L_char_G_ SStack_18;
  int iStack_c;
  AssocArray_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G_
  *pAStack_8;
  
  if (*(int *)(this + 8) == 0) {
    return false;
  }
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  pAStack_8 = this;
  uVar3 = GetHash(pcVar4);
  uVar1 = *(uint *)(this + 8);
  for (uVar7 = uVar3 % uVar1; (int)uVar7 < 0; uVar7 = uVar7 + uVar1) {
  }
  if ((int)uVar1 <= (int)uVar7) {
    uVar7 = (int)uVar7 % (int)uVar1;
  }
  iVar10 = 0;
  iStack_c = *(int *)(pAStack_8 + 4);
  cVar5 = *(char *)(iStack_c + uVar7);
  while (cVar5 != '\0') {
    if ((int)uVar1 <= iVar10) goto LAB_00836fe0;
    puVar6 = (undefined4 *)(uVar7 * 0x2c + *(int *)pAStack_8);
    if (puVar6[2] == param_1->Length) {
      if ((int)puVar6[1] < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)*puVar6;
      }
      if (param_1->Capacity < 1) {
        pcVar8 = "";
      }
      else {
        pcVar8 = param_1->Data;
      }
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        return false;
      }
      iVar9 = (int)pcVar8 - (int)pcVar4;
      while (cVar5 == pcVar4[iVar9]) {
        cVar5 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar5 == '\0') {
          return false;
        }
      }
    }
    for (uVar7 = uVar7 + 1; (int)uVar7 < 0; uVar7 = uVar7 + uVar1) {
    }
    if ((int)uVar1 <= (int)uVar7) {
      uVar7 = (int)uVar7 % (int)uVar1;
    }
    iVar10 = iVar10 + 1;
    cVar5 = *(char *)(iStack_c + uVar7);
  }
  if ((int)uVar1 <= iVar10) {
LAB_00836fe0:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(pAStack_8 + 8) <= iVar10) {
      return false;
    }
  }
  Darray_L_struct_util__TupleProperty_G___Darray_L_struct_util__TupleProperty_G_
            ((Darray_L_struct_util__TupleProperty_G_ *)&ppuStack_38,
             (Darray_L_struct_util__TupleProperty_G_ *)param_2);
  iStack_28 = *(int *)(param_2 + 0x10);
  iStack_24 = *(int *)(param_2 + 0x14);
  pcStack_20 = *(char **)(param_2 + 0x18);
  iStack_1c = *(int *)(param_2 + 0x1c);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_18,param_1);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_64,&SStack_18);
  Darray_L_struct_util__TupleProperty_G___Darray_L_struct_util__TupleProperty_G_
            (aDStack_58,(Darray_L_struct_util__TupleProperty_G_ *)&ppuStack_38);
  iStack_48 = iStack_28;
  iStack_44 = iStack_24;
  pcStack_40 = pcStack_20;
  iStack_3c = iStack_1c;
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  ppuStack_38 = (undefined **)(&vftable_557);
  if (pTStack_34 != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(pTStack_34,3);
  }
  pAVar2 = pAStack_8;
  this_00 = (Str_L_char_G_ *)(uVar7 * 0x2c + *(int *)pAStack_8);
  util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_64);
  Darray_L_struct_util__TupleProperty_G___op_assign
            ((Darray_L_struct_util__TupleProperty_G_ *)(this_00 + 1),aDStack_58);
  this_00[2].Capacity = iStack_48;
  this_00[2].Length = iStack_44;
  this_00[3].Data = pcStack_40;
  this_00[3].Capacity = iStack_3c;
  tuple2_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G___tuple2_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G___dtor((tuple2_L_class_util__Str_L_char_G__Cstruct_util__tuple2_L_class_util__Darray_L_struct_util__TupleProperty_G__Cstruct_util__ReflectionRegistry__TupleTypedFunctions_G___G_
              *)&SStack_64);
  *(undefined1 *)(uVar7 + *(int *)(pAVar2 + 4)) = 1;
  return true;
}





//==== 008370b0 Add_008370b0 ====


/* public: bool  util__AssocArray_L_classutil__Str_L_char_G__Cclassutil__Darray_L_struct_util__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G__G___Add(class util__Str_L_char_G_ const
   &,class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G__G_ const &) */

bool 
util__AssocArray_class_util__Str_char__class_util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_______Add(AssocArray_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G_
      *this,Str_L_char_G_ *param_1,
     Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  uint uVar11;
  Str_L_char_G_ SStack_48;
  int iStack_3c;
  Str_L_char_G_ *pSStack_38;
  int iStack_34;
  undefined **ppuStack_2c;
  ResearchReference *pRStack_28;
  Str_L_char_G_ SStack_1c;
  int iStack_10;
  AssocArray_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G_
  *pAStack_c;
  uint uStack_8;
  
  if (*(int *)(this + 8) == 0) {
    return false;
  }
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  pAStack_c = this;
  uVar3 = GetHash(pcVar4);
  uVar2 = *(uint *)(this + 8);
  for (uStack_8 = uVar3 % uVar2; (int)uStack_8 < 0; uStack_8 = uStack_8 + uVar2) {
  }
  if ((int)uVar2 <= (int)uStack_8) {
    uStack_8 = (int)uStack_8 % (int)uVar2;
  }
  iVar8 = 0;
  iStack_10 = *(int *)(pAStack_c + 4);
  cVar5 = *(char *)(iStack_10 + uStack_8);
  uVar11 = uStack_8;
  while (uStack_8 = uVar11, cVar5 != '\0') {
    if ((int)uVar2 <= iVar8) goto LAB_008371b1;
    puVar1 = (undefined4 *)(*(int *)pAStack_c + uVar11 * 0x1c);
    if (puVar1[2] == param_1->Length) {
      if ((int)puVar1[1] < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)*puVar1;
      }
      if (param_1->Capacity < 1) {
        pcVar6 = "";
      }
      else {
        pcVar6 = param_1->Data;
      }
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
        return false;
      }
      iVar7 = (int)pcVar6 - (int)pcVar4;
      while (cVar5 == pcVar4[iVar7]) {
        cVar5 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar5 == '\0') {
          return false;
        }
      }
    }
    for (uStack_8 = uVar11 + 1; (int)uStack_8 < 0; uStack_8 = uStack_8 + uVar2) {
    }
    if ((int)uVar2 <= (int)uStack_8) {
      uStack_8 = (int)uStack_8 % (int)uVar2;
    }
    iVar8 = iVar8 + 1;
    uVar11 = uStack_8;
    cVar5 = *(char *)(iStack_10 + uStack_8);
  }
  if ((int)uVar2 <= iVar8) {
LAB_008371b1:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\assocarray.inl",0x6c,
              "IndicesPassed < Capacity",(char *)0x0);
    DebugBreak();
    if (*(int *)(pAStack_c + 8) <= iVar8) {
      return false;
    }
  }
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)&ppuStack_2c,
             param_2);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1c,param_1);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_48,&SStack_1c);
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)&iStack_3c,
             (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)&ppuStack_2c)
  ;
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  ppuStack_2c = &vftable_558;
  if (pRStack_28 != (ResearchReference *)0x0) {
    ResearchReference___vector_deleting_destructor(pRStack_28,3);
  }
  pRStack_28 = (ResearchReference *)0x0;
  ppuStack_2c = (undefined **)(&vftable);
  pSVar10 = (Str_L_char_G_ *)(*(int *)pAStack_c + uVar11 * 0x1c);
  util__Maybe_struct_util__ClassMember___operator(pSVar10,&SStack_48);
  pSVar9 = pSVar10 + 1;
  param_1 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(iStack_3c + 0xc))();
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)pSVar9,
             (int *)&param_1);
  iVar8 = (**(code **)(uintptr_t)(iStack_3c + 0xc))();
  if (iVar8 == 0) {
    (**(code **)(pSVar9->Data + 0x10))();
  }
  else {
    Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___CheckSizeDestructive
              ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)pSVar9);
    pSVar10 = (Str_L_char_G_ *)pSVar10[1].Capacity;
    pSVar9 = pSStack_38;
    param_1 = pSVar10;
    if (pSStack_38 != pSStack_38 + iStack_34 * 3) {
      do {
        util__Maybe_struct_util__ClassMember___operator(pSVar10,pSVar9);
        util__Maybe_struct_util__ClassMember___operator(pSVar10 + 1,pSVar9 + 1);
        util__Maybe_struct_util__ClassMember___operator(pSVar10 + 2,pSVar9 + 2);
        pSVar9 = pSVar9 + 3;
        pSVar10 = pSVar10 + 3;
        uVar11 = uStack_8;
      } while (pSVar9 != pSStack_38 + iStack_34 * 3);
    }
  }
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G___tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G___dtor((tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G_
              *)&SStack_48);
  *(undefined1 *)(uVar11 + *(int *)(pAStack_c + 4)) = 1;
  return true;
}





//==== 00837300 CheckSize_00837300 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__LocStr_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_____CheckSize
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  ResearchReference *this_00;
  uint uVar4;
  Str_L_char_G_ *pSVar5;
  ResearchReference *pRVar6;
  bool bVar7;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ *pSStack_14;
  Str_L_char_G_ *pSStack_10;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  bVar1 = !bVar7;
  if (bVar1) {
    pSStack_10 = (Str_L_char_G_ *)0x0;
    SetSize(this,(int *)&pSStack_10);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pSStack_10 = (Str_L_char_G_ *)0x3fffffff;
    SetSize(this,(int *)&pSStack_10);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar4) {
    return bVar1 && bVar7;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < (int)uVar3) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x24);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pSStack_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar2 = uVar4;
    pSVar5 = (Str_L_char_G_ *)(puVar2 + 1);
    pSStack_c = pSVar5;
    while (uVar4 != 0) {
      pSVar5->Data = (char *)0x0;
      pSVar5->Capacity = 0;
      pSVar5->Length = 0;
      uVar4 = uVar4 - 1;
      SStack_2c.Data = (char *)0x0;
      SStack_2c.Capacity = 0;
      SStack_2c.Length = 0;
      SStack_20.Data = (char *)0x0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      LocStr__LocStr((LocStr *)(pSVar5 + 1),&SStack_20,&SStack_2c);
      if (SStack_20.Data != (char *)0x0) {
        port_op_delete(SStack_20.Data);
        SStack_20.Data = (char *)0x0;
      }
      if (SStack_2c.Data != (char *)0x0) {
        port_op_delete(SStack_2c.Data);
        SStack_2c.Data = (char *)0x0;
      }
      pSVar5 = pSVar5 + 3;
    }
  }
  this_00 = *(ResearchReference **)(this + 4);
  if (this_00 != (ResearchReference *)0x0) {
    pSStack_14 = pSStack_c + *(int *)(this + 8) * 3;
    pSVar5 = pSStack_c;
    pRVar6 = this_00;
    pSStack_10 = pSStack_c;
    if (this_00 != this_00 + param_1) {
      do {
        pSStack_10 = pSVar5;
        if (pSVar5 == pSStack_14) break;
        util__Maybe_struct_util__ClassMember___operator(pSVar5,&pRVar6->Authors);
        util__Maybe_struct_util__ClassMember___operator(pSVar5 + 1,&pRVar6->Title);
        util__Maybe_struct_util__ClassMember___operator(pSVar5 + 2,&pRVar6->ExtraInfo);
        pRVar6 = pRVar6 + 1;
        pSVar5 = pSStack_10 + 3;
        this_00 = *(ResearchReference **)(this + 4);
        pSStack_10 = pSVar5;
      } while (pRVar6 != this_00 + param_1);
    }
    if (this_00 != (ResearchReference *)0x0) {
      ResearchReference___vector_deleting_destructor(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 00837510 CheckSize_00837510 ====


/* private: bool  util__Darray_L_structutil__TupleProperty_G___CheckSize(int) */

bool 
util__Darray_struct_util__TupleProperty___CheckSize
          (Darray_L_struct_util__TupleProperty_G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Str_L_char_G_ *pSVar4;
  TupleProperty *this_00;
  Str_L_char_G_ *this_01;
  uint uVar5;
  TupleProperty *pTVar6;
  bool bVar7;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  bVar1 = !bVar7;
  if (bVar1) {
    pSStack_c = (Str_L_char_G_ *)0x0;
    SetSize(this,(int *)&pSStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    pSStack_c = (Str_L_char_G_ *)0x3fffffff;
    SetSize(this,(int *)&pSStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar5) {
    return bVar1 && bVar7;
  }
  if (uVar5 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar5 = uVar3;
  }
  if ((int)uVar5 < (int)uVar3) {
    do {
      uVar5 = uVar5 * 2;
    } while ((int)uVar5 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar5;
  }
  if (0x3fffffff < (int)uVar5) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar5 = 0x3fffffff;
  }
  uVar3 = -(uint)((int)((ulonglong)uVar5 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar5 * 0x1c);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 == (uint *)0x0) {
    pSStack_c = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar2 = uVar5;
    pSStack_c = (Str_L_char_G_ *)(puVar2 + 1);
    if (uVar5 != 0) {
      puVar2 = puVar2 + 6;
      pSVar4 = pSStack_c;
      do {
        pSVar4->Data = (char *)0x0;
        pSVar4 = (Str_L_char_G_ *)&pSVar4[2].Capacity;
        puVar2[-4] = 0;
        puVar2[-3] = 0;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar5 = uVar5 - 1;
        puVar2 = puVar2 + 7;
      } while (uVar5 != 0);
    }
  }
  this_00 = *(TupleProperty **)(this + 4);
  if (this_00 != (TupleProperty *)0x0) {
    pSVar4 = (Str_L_char_G_ *)((int)pSStack_c + *(int *)(this + 8) * 0x1c);
    this_01 = pSStack_c;
    pTVar6 = this_00;
    if (this_00 != this_00 + param_1) {
      do {
        if (this_01 == pSVar4) break;
        util__Maybe_struct_util__ClassMember___operator(this_01,&pTVar6->Name);
        util__Maybe_struct_util__ClassMember___operator(this_01 + 1,&pTVar6->Type);
        puVar2 = &pTVar6->Offset;
        pTVar6 = pTVar6 + 1;
        this_01[2].Data = (char *)*puVar2;
        this_01 = (Str_L_char_G_ *)&this_01[2].Capacity;
        this_00 = *(TupleProperty **)(this + 4);
      } while (pTVar6 != this_00 + param_1);
    }
    if (this_00 != (TupleProperty *)0x0) {
      util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 008376c0 CheckSizeDestructive_008376c0 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__LocStr_G__G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_____CheckSizeDestructive
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar5 = -1 < (int)uVar3;
  bVar1 = !bVar5;
  if (bVar1) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar3 < 0x40000000;
  if (!bVar1) {
    puStack_c = (uint *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar3 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar3 <= (int)uVar4) {
    return bVar1 && bVar5;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar3;
    uVar4 = uVar3;
  }
  if ((int)uVar4 < (int)uVar3) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar3);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  if (*(ResearchReference **)(this + 4) != (ResearchReference *)0x0) {
    ResearchReference___vector_deleting_destructor(*(ResearchReference **)(this + 4),3);
    uVar4 = *(uint *)(this + 0xc);
  }
  *(undefined4 *)(this + 4) = 0;
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x24);
  puVar2 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = uVar4;
    puVar2 = puVar2 + 1;
    puStack_c = puVar2;
    while (uVar4 != 0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      uVar4 = uVar4 - 1;
      SStack_24.Data = (char *)0x0;
      SStack_24.Capacity = 0;
      SStack_24.Length = 0;
      SStack_18.Data = (char *)0x0;
      SStack_18.Capacity = 0;
      SStack_18.Length = 0;
      LocStr__LocStr((LocStr *)(puVar2 + 3),&SStack_18,&SStack_24);
      if (SStack_18.Data != (char *)0x0) {
        port_op_delete(SStack_18.Data);
        SStack_18.Data = (char *)0x0;
      }
      if (SStack_24.Data != (char *)0x0) {
        port_op_delete(SStack_24.Data);
      }
      puVar2 = puVar2 + 9;
    }
    *(uint **)(this + 4) = puStack_c;
    return bStack_5;
  }
  *(undefined4 *)(this + 4) = 0;
  return bStack_5;
}





//==== 00837860 CheckSizeDestructive_00837860 ====


/* private: bool  util__Darray_L_structutil__TupleProperty_G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__TupleProperty___CheckSizeDestructive
          (Darray_L_struct_util__TupleProperty_G_ *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  bool bVar7;
  Darray_L_struct_util__TupleProperty_G_ *pDStack_8;
  
  uVar3 = *(uint *)(this + 8);
  bVar7 = -1 < (int)uVar3;
  pDStack_8 = this;
  if (!bVar7) {
    pDStack_8 = (Darray_L_struct_util__TupleProperty_G_ *)0x0;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = (int)uVar3 < 0x40000000;
  if (!bVar5) {
    pDStack_8 = (Darray_L_struct_util__TupleProperty_G_ *)0x3fffffff;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar5 = bVar5 && bVar7;
  uVar6 = *(uint *)(this + 0xc);
  if ((int)uVar6 < (int)uVar3) {
    if (uVar6 == 0) {
      *(uint *)(this + 0xc) = uVar3;
      uVar6 = uVar3;
    }
    if ((int)uVar6 < (int)uVar3) {
      do {
        uVar6 = uVar6 * 2;
      } while ((int)uVar6 < (int)uVar3);
      *(uint *)(this + 0xc) = uVar6;
    }
    if (0x3fffffff < (int)uVar6) {
      *(undefined4 *)(this + 0xc) = 0x3fffffff;
      uVar6 = 0x3fffffff;
    }
    if (*(TupleProperty **)(this + 4) != (TupleProperty *)0x0) {
      util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(*(TupleProperty **)(this + 4),3);
      uVar6 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    uVar3 = -(uint)((int)((ulonglong)uVar6 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar6 * 0x1c);
    puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    if (puVar1 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar1 = uVar6;
      puVar4 = puVar1 + 1;
      if (uVar6 != 0) {
        puVar2 = puVar1 + 6;
        puVar1 = puVar4;
        do {
          *puVar1 = 0;
          puVar1 = puVar1 + 7;
          puVar2[-4] = 0;
          puVar2[-3] = 0;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar6 = uVar6 - 1;
          puVar2 = puVar2 + 7;
        } while (uVar6 != 0);
        *(uint **)(this + 4) = puVar4;
        return bVar5;
      }
    }
    *(uint **)(this + 4) = puVar4;
  }
  return bVar5;
}





//==== 008379b0 CheckType ====


/* public: enum util__Reflection__Type __thiscall util__ReflectionRegistry__CheckType(class
   util__Str_L_char_G_ const &)const  */

int __thiscall util__ReflectionRegistry__CheckType(ReflectionRegistry *this,Str_L_char_G_ *param_1)

{
  tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *ptVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  int iStack_c;
  
  if ((this->TupleDatabase).Capacity == 0) {
LAB_00837aa4:
    if ((this->EnumDatabase).Capacity != 0) {
      if (param_1->Capacity < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = param_1->Data;
      }
      uVar3 = GetHash(pcVar4);
      uVar2 = (this->EnumDatabase).Capacity;
      for (uVar6 = uVar3 % uVar2; (int)uVar6 < 0; uVar6 = uVar6 + uVar2) {
      }
      if ((int)uVar2 <= (int)uVar6) {
        uVar6 = (int)uVar6 % (int)uVar2;
      }
      iStack_c = 0;
      if ((this->EnumDatabase).DataInUse[uVar6] != false) {
        while (iStack_c < (int)uVar2) {
          ptVar1 = (this->EnumDatabase).Data + uVar6;
          if ((ptVar1->Value1).Length == param_1->Length) {
            if ((ptVar1->Value1).Capacity < 1) {
              pcVar4 = "";
            }
            else {
              pcVar4 = (ptVar1->Value1).Data;
            }
            if (param_1->Capacity < 1) {
              pcVar9 = "";
            }
            else {
              pcVar9 = param_1->Data;
            }
            cVar5 = *pcVar4;
            if (cVar5 == '\0') {
LAB_00837b43:
              if (ptVar1 == (tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *)0xfffffff4) {
                return Enum;
              }
              return Struct;
            }
            iVar8 = (int)pcVar9 - (int)pcVar4;
            while (cVar5 == pcVar4[iVar8]) {
              cVar5 = pcVar4[1];
              pcVar4 = pcVar4 + 1;
              if (cVar5 == '\0') goto LAB_00837b43;
            }
          }
          for (uVar6 = uVar6 + 1; (int)uVar6 < 0; uVar6 = uVar6 + uVar2) {
          }
          if ((int)uVar2 <= (int)uVar6) {
            uVar6 = (int)uVar6 % (int)uVar2;
          }
          iStack_c = iStack_c + 1;
          if ((this->EnumDatabase).DataInUse[uVar6] == false) {
            return Enum;
          }
        }
      }
    }
    return Enum;
  }
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  uVar3 = GetHash(pcVar4);
  uVar2 = (this->TupleDatabase).Capacity;
  for (uVar6 = uVar3 % uVar2; (int)uVar6 < 0; uVar6 = uVar6 + uVar2) {
  }
  if ((int)uVar2 <= (int)uVar6) {
    uVar6 = (int)uVar6 % (int)uVar2;
  }
  iStack_c = 0;
  cVar5 = (this->TupleDatabase).DataInUse[uVar6];
  do {
    if ((cVar5 == '\0') || ((int)uVar2 <= iStack_c)) goto LAB_00837aa4;
    puVar7 = (undefined4 *)(uVar6 * 0x2c + (int)(this->TupleDatabase).Data);
    if (puVar7[2] == param_1->Length) {
      if ((int)puVar7[1] < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)*puVar7;
      }
      if (param_1->Capacity < 1) {
        pcVar9 = "";
      }
      else {
        pcVar9 = param_1->Data;
      }
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
LAB_00837a61:
        if (puVar7 != (undefined4 *)0xfffffff4) {
          return Tuple|Boolean;
        }
        goto LAB_00837aa4;
      }
      iVar8 = (int)pcVar9 - (int)pcVar4;
      while (cVar5 == pcVar4[iVar8]) {
        cVar5 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar5 == '\0') goto LAB_00837a61;
      }
    }
    for (uVar6 = uVar6 + 1; (int)uVar6 < 0; uVar6 = uVar6 + uVar2) {
    }
    if ((int)uVar2 <= (int)uVar6) {
      uVar6 = (int)uVar6 % (int)uVar2;
    }
    iStack_c = iStack_c + 1;
    cVar5 = (this->TupleDatabase).DataInUse[uVar6];
  } while( true );
}





//==== 00837ba0 Clear_00837ba0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__LocStr_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_____Clear
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00837bc0 Clear_00837bc0 ====


/* public: virtual void  util__Darray_L_structutil__TupleProperty_G___Clear(void) */

void __thiscall
util__Darray_struct_util__TupleProperty___Clear(Darray_L_struct_util__TupleProperty_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00837be0 ClearValue ====


/* WARNING: int propagation algorithm not settling */
/* void __cdecl util__ClearValue(void *,enum util__Reflection__Type,bool,class util__Str_L_char_G_ const
   &,void *,unsigned int,class util__Str_L_char_G_ const &) */

void __cdecl
util__ClearValue(void *param_1,int param_2,bool param_3,Str_L_char_G_ *param_4,void *param_5,
                uint param_6,Str_L_char_G_ *param_7)

{
  uint uVar1;
  tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *ptVar2;
  ReflectionInfoBase *pRVar3;
  ReflectionInfoBase *pRVar4;
  Str_L_char_G_ *pSVar5;
  ulong uVar6;
  char *pcVar7;
  ReflectionInfoBase **ppRVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  undefined3 in_stack_00000009;
  LocStr aLStack_40 [24];
  Str_L_char_G_ *pSStack_28;
  int iStack_24;
  Darray_L_struct_util__ClassMember_G_ aDStack_20 [4];
  Str_L_char_G_ SStack_1c;
  ReflectionRegistry *pRStack_10;
  ReflectionInfoBase *pRStack_c;
  ReflectionInfoBase *pRStack_8;
  
  pRStack_c = (ReflectionInfoBase *)param_1;
  pSStack_28 = param_4;
  if (param_3) {
    *(undefined1 *)(param_6 + (int)param_1) = 0;
  }
  switch(_param_2) {
  case 1:
  case 5:
    if (param_5 == (void *)0x0) {
      *(undefined1 *)param_1 = 0;
      return;
    }
                    /* WARNING: Load optimize_e__size is inaccurate */
    *(undefined1 *)param_1 = *(int *)param_5;
    return;
  case 2:
  case 9:
    if (param_5 == (void *)0x0) {
      *(undefined4 *)param_1 = 0;
      return;
    }
                    /* WARNING: Load optimize_e__size is inaccurate */
    *(undefined4 *)param_1 = *(int *)param_5;
    return;
  case 3:
    if (param_5 == (void *)0x0) {
      *(undefined4 *)param_1 = 0;
      return;
    }
                    /* WARNING: Load optimize_e__size is inaccurate */
    *(undefined4 *)param_1 = *(int *)param_5;
    return;
  case 4:
    if (param_5 == (void *)0x0) {
      *(undefined8 *)param_1 = 0;
      return;
    }
                    /* WARNING: Load optimize_e__size is inaccurate */
    *(undefined8 *)param_1 = *(int *)param_5;
    return;
  case 6:
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
    SStack_1c.Length = 0;
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_1,&SStack_1c);
    return;
  case 7:
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
    SStack_1c.Length = 0;
    pSVar5 = (Str_L_char_G_ *)LocStr__LocStr(aLStack_40,param_7,&SStack_1c);
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_1,pSVar5);
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)((int)param_1 + 0xc),pSVar5 + 1);
    util__LocStr___LocStr(aLStack_40);
    if (SStack_1c.Data != (char *)0x0) {
      port_op_delete(SStack_1c.Data);
      return;
    }
    break;
  case 8:
    *(undefined4 *)param_1 = 0;
    return;
  case 10:
    pRStack_10 = (ReflectionRegistry *)(uintptr_t)(ReflectionRegistry__Get());
    if ((pRStack_10->ReflectionInfoDatabase).Capacity != 0) {
      if (param_4->Capacity < 1) {
        pcVar7 = "";
      }
      else {
        pcVar7 = param_4->Data;
      }
      uVar6 = GetHash(pcVar7);
      uVar1 = (pRStack_10->ReflectionInfoDatabase).Capacity;
      for (uVar11 = uVar6 % uVar1; (int)uVar11 < 0; uVar11 = uVar11 + uVar1) {
      }
      if ((int)uVar1 <= (int)uVar11) {
        uVar11 = (int)uVar11 % (int)uVar1;
      }
      pRStack_8 = (ReflectionInfoBase *)(pRStack_10->ReflectionInfoDatabase).DataInUse;
      iStack_24 = 0;
      if ((bool)(&pRStack_8->field_0x0)[uVar11] != false) {
        while (iStack_24 < (int)uVar1) {
          ptVar2 = (pRStack_10->ReflectionInfoDatabase).Data;
          if (ptVar2[uVar11].Value1.Length == param_4->Length) {
            if (ptVar2[uVar11].Value1.Capacity < 1) {
              pcVar7 = "";
            }
            else {
              pcVar7 = ptVar2[uVar11].Value1.Data;
            }
            if (param_4->Capacity < 1) {
              pcVar12 = "";
            }
            else {
              pcVar12 = param_4->Data;
            }
            cVar10 = *pcVar7;
            if (cVar10 == '\0') {
LAB_00837ddd:
              ppRVar8 = &(pRStack_10->ReflectionInfoDatabase).Data[uVar11].Value2;
              if (ppRVar8 == (ReflectionInfoBase **)0x0) {
                return;
              }
              pRVar3 = *ppRVar8;
              if (pRVar3 == (ReflectionInfoBase *)0x0) {
                return;
              }
              util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_1c,"InitializedDatum");
              pRVar4 = pRStack_c;
              util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(pRStack_c + 1),&SStack_1c);
              util__Str_char____Str_char(&SStack_1c);
              pRStack_8 = pRVar4;
              pRStack_c = pRVar3;
              uVar9 = (**(code **)(*(int *)(pRVar3) + 4))(aDStack_20,&pRStack_c,&pRStack_8);
              FUN_00835600(uVar9);
              util__Darray_struct_util__ClassMember____Darray_struct_util__ClassMember(aDStack_20);
              return;
            }
            iVar13 = (int)pcVar12 - (int)pcVar7;
            while (param_4 = pSStack_28, cVar10 == pcVar7[iVar13]) {
              cVar10 = pcVar7[1];
              pcVar7 = pcVar7 + 1;
              if (cVar10 == '\0') goto LAB_00837ddd;
            }
          }
          for (uVar11 = uVar11 + 1; (int)uVar11 < 0; uVar11 = uVar11 + uVar1) {
          }
          if ((int)uVar1 <= (int)uVar11) {
            uVar11 = (int)uVar11 % (int)uVar1;
          }
          iStack_24 = iStack_24 + 1;
          if ((bool)(&pRStack_8->field_0x0)[uVar11] == false) {
            return;
          }
        }
      }
    }
  }
  return;
}





//==== 00837ea0 CopyClassToAnotherClass ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl util__CopyClassToAnotherClass(struct util__ReflectionInfoBase *,class
   util__Reflectable *,class util__Reflectable *) */

void __cdecl
util__CopyClassToAnotherClass(ReflectionInfoBase *param_1,Reflectable *param_2,Reflectable *param_3)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  undefined4 uVar2;
  Str_L_char_G_ *this;
  Str_L_char_G_ *pSVar3;
  Darray_L_util__ClassMember_G_ local_2c;
  Str_L_char_G_ local_1c;
  Reflectable *local_10;
  Reflectable *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = param_2;
  local_10 = param_3;
  uVar2 = (**(code **)(param_3->_pad_0x0_0 + 0x58))(&local_2c.Data);
  pSVar3 = &local_1c;
  this = (Str_L_char_G_ *)(**(code **)(local_c->_pad_0x0_0 + 0x58))(pSVar3,uVar2);
  bVar1 = Str_L_char_G___op_eq(this,pSVar3);
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_2c.Data != (ClassMember *)0x0) {
    port_op_delete(local_2c.Data);
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.cpp",0x167
              ,"CopyFrom->GetTypeSearchString() == CopyTo->GetTypeSearchString()",(char *)0x0);
    DebugBreak();
  }
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&local_1c,"InitializedDatum");
  util__Maybe_struct_util__ClassMember___operator(&local_10->Name,&local_1c);
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  uVar2 = (**(code **)(*(int *)(param_1) + 4))(&local_2c,&local_c,&local_10);
  FUN_00835440(uVar2);
  Darray_L_util__ClassMember_G___dtor(&local_2c);
  return;
}

//==== 00837f90 CopyToValue ====


/* void __cdecl util__CopyToValue(void *,void *,enum util__Reflection__Type,bool,class
   util__Str_L_char_G_ const &,unsigned int) */

void __cdecl
util__CopyToValue(void *param_1,void *param_2,int param_3,bool param_4,Str_L_char_G_ *param_5,
                 uint param_6)

{
  uint uVar1;
  tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *ptVar2;
  ReflectionInfoBase *pRVar3;
  bool bVar4;
  ulong uVar5;
  char *pcVar6;
  undefined4 uVar7;
  Str_L_char_G_ *this;
  char cVar8;
  uint uVar9;
  ReflectionInfoBase **ppRVar10;
  char *pcVar11;
  int iVar12;
  undefined3 in_stack_0000000d;
  Str_L_char_G_ *pSVar13;
  Darray_L_struct_util__ClassMember_G_ aDStack_38 [4];
  void *apvStack_34 [3];
  Str_L_char_G_ SStack_28;
  int *piStack_1c;
  ReflectionRegistry *pRStack_18;
  bool *pbStack_14;
  Str_L_char_G_ *pSStack_10;
  int *piStack_c;
  ReflectionRegistry *pRStack_8;
  
  piStack_1c = (int *)param_1;
  pRStack_18 = (ReflectionRegistry *)param_2;
  pSStack_10 = param_5;
  if (param_4) {
    *(undefined1 *)(param_6 + (int)param_2) = *(undefined1 *)(param_6 + (int)param_1);
  }
  switch(_param_3) {
  case 1:
  case 5:
                    /* WARNING: Load optimize_e__size is inaccurate */
    *(undefined1 *)param_2 = *(int *)param_1;
    return;
  case 2:
  case 3:
  case 8:
  case 9:
                    /* WARNING: Load optimize_e__size is inaccurate */
    *(undefined4 *)param_2 = *(int *)param_1;
    return;
  case 4:
                    /* WARNING: Load optimize_e__size is inaccurate */
    *(undefined8 *)param_2 = *(int *)param_1;
    return;
  case 6:
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_2,(Str_L_char_G_ *)param_1);
    return;
  case 7:
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_2,(Str_L_char_G_ *)param_1);
    util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)((int)param_2 + 0xc),(Str_L_char_G_ *)((int)param_1 + 0xc));
    return;
  case 10:
    pRStack_8 = (ReflectionRegistry *)(uintptr_t)(ReflectionRegistry__Get());
    if ((pRStack_8->ReflectionInfoDatabase).Capacity != 0) {
      if (param_5->Capacity < 1) {
        pcVar6 = "";
      }
      else {
        pcVar6 = param_5->Data;
      }
      uVar5 = GetHash(pcVar6);
      uVar1 = (pRStack_8->ReflectionInfoDatabase).Capacity;
      for (uVar9 = uVar5 % uVar1; (int)uVar9 < 0; uVar9 = uVar9 + uVar1) {
      }
      if ((int)uVar1 <= (int)uVar9) {
        uVar9 = (int)uVar9 % (int)uVar1;
      }
      pbStack_14 = (pRStack_8->ReflectionInfoDatabase).DataInUse;
      piStack_c = (int *)0x0;
      if (pbStack_14[uVar9] != false) {
        while ((int)piStack_c < (int)uVar1) {
          ptVar2 = (pRStack_8->ReflectionInfoDatabase).Data;
          if (ptVar2[uVar9].Value1.Length == param_5->Length) {
            if (ptVar2[uVar9].Value1.Capacity < 1) {
              pcVar6 = "";
            }
            else {
              pcVar6 = ptVar2[uVar9].Value1.Data;
            }
            if (param_5->Capacity < 1) {
              pcVar11 = "";
            }
            else {
              pcVar11 = param_5->Data;
            }
            cVar8 = *pcVar6;
            if (cVar8 == '\0') {
LAB_008380d1:
              ppRVar10 = &(pRStack_8->ReflectionInfoDatabase).Data[uVar9].Value2;
              if (ppRVar10 == (ReflectionInfoBase **)0x0) {
                return;
              }
              pRVar3 = *ppRVar10;
              if (pRVar3 == (ReflectionInfoBase *)0x0) {
                return;
              }
              pRStack_8 = pRStack_18;
              piStack_c = piStack_1c;
              uVar7 = (*(code *)(pRStack_18->ReflectionInfoDatabase).Data[5].Value1.Length)
                                (apvStack_34);
              pSVar13 = &SStack_28;
              this = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piStack_c + 0x58))(pSVar13,uVar7);
              bVar4 = Str_L_char_G___op_eq(this,pSVar13);
              if (SStack_28.Data != (char *)0x0) {
                port_op_delete(SStack_28.Data);
                SStack_28.Data = (char *)0x0;
              }
              if (apvStack_34[0] != (void *)0x0) {
                port_op_delete(apvStack_34[0]);
              }
              if (!bVar4) {
                LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.cpp"
                          ,0x167,"CopyFrom->GetTypeSearchString() == CopyTo->GetTypeSearchString()",
                          (char *)0x0);
                DebugBreak();
              }
              util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_28,"InitializedDatum");
              util__Maybe_struct_util__ClassMember___operator
                        ((Str_L_char_G_ *)&(pRStack_8->ReflectionInfoDatabase).DataInUse,&SStack_28);
              if (SStack_28.Data != (char *)0x0) {
                port_op_delete(SStack_28.Data);
              }
              uVar7 = (**(code **)(*(int *)(pRVar3) + 4))(aDStack_38,&piStack_c,&pRStack_8);
              FUN_00835440(uVar7);
              util__Darray_struct_util__ClassMember____Darray_struct_util__ClassMember(aDStack_38);
              return;
            }
            iVar12 = (int)pcVar11 - (int)pcVar6;
            while (param_5 = pSStack_10, cVar8 == pcVar6[iVar12]) {
              cVar8 = pcVar6[1];
              pcVar6 = pcVar6 + 1;
              if (cVar8 == '\0') goto LAB_008380d1;
            }
          }
          for (uVar9 = uVar9 + 1; (int)uVar9 < 0; uVar9 = uVar9 + uVar1) {
          }
          if ((int)uVar1 <= (int)uVar9) {
            uVar9 = (int)uVar9 % (int)uVar1;
          }
          piStack_c = (int *)((int)piStack_c + 1);
          if (pbStack_14[uVar9] == false) {
            return;
          }
        }
      }
    }
  }
  return;
}





//==== 00838210 DangerousTypelessCopy ====


/* public: bool  util__Darray_void____DangerousTypelessCopy(class util__Darray_L_void_P_G_
   const &,unsigned int,void * (__cdecl*)(unsigned int),void (__cdecl*)(void *),void (__cdecl*)(void
   *),void (__cdecl*)(void *,void *)) */

bool 
util__Darray_void____DangerousTypelessCopy
          (Darray_L_void_P_G_ *this,Darray_L_void_P_G_ *param_1,uint param_2,_func_void_ptr_uint *param_3,
          _func_void_void_ptr *param_4,_func_void_void_ptr *param_5,
          _func_void_void_ptr_void_ptr *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iStack_8;
  
  if ((param_2 != 0) && (uVar1 = (**(code **)(*(int *)param_1 + 0xc))(), uVar1 < 0x40000000)) {
    uVar6 = *(uint *)(this + 8);
    if ((uVar1 < uVar6) && (*(int *)(this + 4) != 0)) {
      iVar2 = uVar1 * param_2;
      iStack_8 = uVar6 - uVar1;
      do {
        (*param_5)((void *)(*(int *)(this + 4) + iVar2));
        iVar2 = iVar2 + param_2;
        iStack_8 = iStack_8 + -1;
      } while (iStack_8 != 0);
    }
    uVar3 = *(uint *)(this + 0xc);
    *(uint *)(this + 8) = uVar1;
    if ((int)uVar3 < (int)uVar1) {
      if (uVar3 == 0) {
        *(uint *)(this + 0xc) = uVar1;
        uVar3 = uVar1;
      }
      if ((int)uVar3 < (int)uVar1) {
        do {
          uVar3 = uVar3 * 2;
        } while ((int)uVar3 < (int)uVar1);
        *(uint *)(this + 0xc) = uVar3;
      }
      if (0x3fffffff < (int)uVar3) {
        *(undefined4 *)(this + 0xc) = 0x3fffffff;
        uVar3 = 0x3fffffff;
      }
      pvVar4 = (*param_3)(uVar3);
      pvVar5 = *(void **)(this + 4);
      if (pvVar5 != (void *)0x0) {
        if (uVar6 != 0) {
          iVar2 = 0;
          do {
            (*param_6)((void *)(iVar2 + (int)pvVar4),(void *)(*(int *)(this + 4) + iVar2));
            iVar2 = iVar2 + param_2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          pvVar5 = *(void **)(this + 4);
        }
        (*param_4)(pvVar5);
        *(undefined4 *)(this + 4) = 0;
      }
      *(void **)(this + 4) = pvVar4;
    }
    if (uVar1 != 0) {
      iVar2 = 0;
      do {
        (*param_6)((void *)(*(int *)(this + 4) + iVar2),(void *)(*(int *)(param_1 + 4) + iVar2));
        iVar2 = iVar2 + param_2;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    return true;
  }
  return false;
}





//==== 00838350 DangerousTypelessResize ====


/* public: bool  util__Darray_void____DangerousTypelessResize(unsigned int,unsigned
   int,void * (__cdecl*)(unsigned int),void (__cdecl*)(void *),void (__cdecl*)(void *),void
   (__cdecl*)(void *,void *)) */

bool 
util__Darray_void____DangerousTypelessResize
          (Darray_L_void_P_G_ *this,uint param_1,uint param_2,_func_void_ptr_uint *param_3,
          _func_void_void_ptr *param_4,_func_void_void_ptr *param_5,
          _func_void_void_ptr_void_ptr *param_6)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  
  if ((param_1 != 0) && (param_2 < 0x40000000)) {
    uVar6 = *(uint *)(this + 8);
    if ((param_2 < uVar6) && (*(int *)(this + 4) != 0)) {
      iVar1 = param_1 * param_2;
      iVar5 = uVar6 - param_2;
      do {
        (*param_5)((void *)(*(int *)(this + 4) + iVar1));
        iVar1 = iVar1 + param_1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar2 = *(uint *)(this + 0xc);
    *(uint *)(this + 8) = param_2;
    if ((int)uVar2 < (int)param_2) {
      if (uVar2 == 0) {
        *(uint *)(this + 0xc) = param_2;
        uVar2 = param_2;
      }
      if ((int)uVar2 < (int)param_2) {
        do {
          uVar2 = uVar2 * 2;
        } while ((int)uVar2 < (int)param_2);
        *(uint *)(this + 0xc) = uVar2;
      }
      if (0x3fffffff < (int)uVar2) {
        *(undefined4 *)(this + 0xc) = 0x3fffffff;
        uVar2 = 0x3fffffff;
      }
      pvVar3 = (*param_3)(uVar2);
      pvVar4 = *(void **)(this + 4);
      if (pvVar4 != (void *)0x0) {
        if (uVar6 != 0) {
          iVar1 = 0;
          do {
            (*param_6)((void *)(iVar1 + (int)pvVar3),(void *)(*(int *)(this + 4) + iVar1));
            iVar1 = iVar1 + param_1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
          pvVar4 = *(void **)(this + 4);
        }
        (*param_4)(pvVar4);
        *(undefined4 *)(this + 4) = 0;
      }
      *(void **)(this + 4) = pvVar3;
    }
    return true;
  }
  return false;
}





//==== 00838450 DefaultArrayAllocator ====


/* public: static void * __cdecl util__Darray_bool___DefaultArrayAllocator(unsigned int) */

void * __cdecl util__Darray_bool___DefaultArrayAllocator(uint)

{
  void *pvVar1;
  
  pvVar1 = (void *)(uintptr_t)(port_op_new(param_1));
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,param_1);
  }
  return (void *)0x0;
}





//==== 00838480 DefaultArrayAllocator_00838480 ====


/* public: static void * __cdecl util__Darray_void____DefaultArrayAllocator(unsigned int) */

void * __cdecl util__Darray_void____DefaultArrayAllocator(uint)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = -(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 4);
  pvVar1 = (void *)(uintptr_t)(port_op_new(uVar2));
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,uVar2);
  }
  return (void *)0x0;
}





//==== 008384c0 DefaultArrayAllocator_008384c0 ====


/* public: static void * __cdecl util__Darray_double___DefaultArrayAllocator(unsigned int) */

void * __cdecl util__Darray_double___DefaultArrayAllocator(uint)

{
  void *pvVar1;
  uint uVar2;
  
  uVar2 = -(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 8);
  pvVar1 = (void *)(uintptr_t)(port_op_new(uVar2));
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,uVar2);
  }
  return (void *)0x0;
}





//==== 00838500 DefaultArrayAllocator_00838500 ====


/* public: static void * __cdecl util__Darray_L_classutil__Str_L_char_G___G___DefaultArrayAllocator(unsigned int) */

void * __cdecl util__Darray_class_util__Str_char_____DefaultArrayAllocator(uint)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0xc >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0xc);
  puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puVar1 == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    *puVar1 = param_1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar1;
    if (param_1 != 0) {
      do {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        param_1 = param_1 - 1;
        puVar3 = puVar3 + 3;
      } while (param_1 != 0);
      return puVar1;
    }
  }
  return puVar1;
}





//==== 00838570 DefaultArrayAllocator_00838570 ====


/* public: static void * __cdecl util__Darray_L_classutil__LocStr_G___DefaultArrayAllocator(unsigned
   int) */

void * __cdecl util__Darray_class_util__LocStr___DefaultArrayAllocator(uint)

{
  uint *puVar1;
  uint uVar2;
  LocStr *this;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  uVar2 = -(uint)((int)((ulonglong)param_1 * 0x18 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x18)
  ;
  puVar1 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  if (puVar1 == (uint *)0x0) {
    return (void *)0x0;
  }
  *puVar1 = param_1;
  this = (LocStr *)(puVar1 + 1);
  if (param_1 != 0) {
    do {
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      param_1 = param_1 - 1;
      SStack_10.Data = (char *)0x0;
      SStack_10.Capacity = 0;
      SStack_10.Length = 0;
      LocStr__LocStr(this,&SStack_10,&SStack_1c);
      if (SStack_10.Data != (char *)0x0) {
        port_op_delete(SStack_10.Data);
        SStack_10.Data = (char *)0x0;
      }
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
      }
      this = this + 0x18;
    } while (param_1 != 0);
  }
  return (LocStr *)(puVar1 + 1);
}





//==== 00838640 DefaultArrayDestroyer ====


/* public: static void __cdecl util__Darray_L_classutil__Str_L_char_G__G___DefaultArrayDestroyer(void *)
    */

void __cdecl util__Darray_class_util__Str_char_____DefaultArrayDestroyer(void *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (void *)0x0) {
    iVar2 = *(int *)((int)param_1 + -4);
    puVar3 = (undefined4 *)((int)param_1 + iVar2 * 0xc);
    if (iVar2 != 0) {
      do {
        puVar1 = puVar3 + -3;
        puVar3 = puVar3 + -3;
        iVar2 = iVar2 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          port_op_delete((void *)*puVar1);
          *puVar3 = 0;
        }
      } while (iVar2 != 0);
      iVar2 = *(int *)((int)param_1 + -4);
    }
    port_op_delete((int *)((int)param_1 + -4),iVar2 * 0xc + 4);
  }
  return;
}





//==== 008386a0 DefaultArrayDestroyer_008386a0 ====


/* public: static void __cdecl util__Darray_L_classutil__LocStr_G___DefaultArrayDestroyer(void *) */

void __cdecl util__Darray_class_util__LocStr___DefaultArrayDestroyer(void *param_1)

{
  if (param_1 != (void *)0x0) {
    LocStr___vector_deleting_destructor_((LocStr *)param_1,3);
  }
  return;
}





//==== 008386c0 DefaultDataClearer ====


/* public: static void __cdecl util__Darray_bool___DefaultDataClearer(void *) */

void __cdecl util__Darray_bool___DefaultDataClearer(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}





//==== 008386d0 DefaultDataClearer_008386d0 ====


/* public: static void __cdecl util__Darray_void____DefaultDataClearer(void *) */

void __cdecl util__Darray_void____DefaultDataClearer(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}





//==== 008386e0 DefaultDataClearer_008386e0 ====


/* public: static void __cdecl util__Darray_double___DefaultDataClearer(void *) */

void __cdecl util__Darray_double___DefaultDataClearer(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}





//==== 008386f0 DefaultDataClearer_008386f0 ====


/* public: static void __cdecl util__Darray_L_classutil__Str_L_char_G__G___DefaultDataClearer(void *) */

void __cdecl util__Darray_class_util__Str_char_____DefaultDataClearer(void *param_1)

{
  Str_L_char_G_ SStack_10;
  
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_1,&SStack_10);
  return;
}





//==== 00838720 DefaultDataClearer_00838720 ====


/* public: static void __cdecl util__Darray_L_classutil__LocStr_G___DefaultDataClearer(void *) */

void __cdecl util__Darray_class_util__LocStr___DefaultDataClearer(void *param_1)

{
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pSVar1 = (Str_L_char_G_ *)LocStr__LocStr((LocStr *)apvStack_34,&SStack_10,&SStack_1c);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_1,pSVar1);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)((int)param_1 + 0xc),pSVar1 + 1);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
    pvStack_28 = (void *)0x0;
  }
  if (apvStack_34[0] != (void *)0x0) {
    port_op_delete(apvStack_34[0]);
    apvStack_34[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return;
}





//==== 008387e0 DefaultDataCopier ====


/* public: static void __cdecl util__Darray_bool___DefaultDataCopier(void *,void *) */

void __cdecl util__Darray_bool___DefaultDataCopier(void *param_1,void *param_2)

{
                    /* WARNING: Load optimize_e__size is inaccurate */
  *(undefined1 *)param_1 = *(int *)param_2;
  return;
}





//==== 008387f0 DefaultDataCopier_008387f0 ====


/* public: static void __cdecl util__Darray_void____DefaultDataCopier(void *,void *) */

void __cdecl util__Darray_void____DefaultDataCopier(void *param_1,void *param_2)

{
                    /* WARNING: Load optimize_e__size is inaccurate */
  *(undefined4 *)param_1 = *(int *)param_2;
  return;
}





//==== 00838800 DefaultDataCopier_00838800 ====


/* public: static void __cdecl util__Darray_double___DefaultDataCopier(void *,void *) */

void __cdecl util__Darray_double___DefaultDataCopier(void *param_1,void *param_2)

{
                    /* WARNING: Load optimize_e__size is inaccurate */
  *(undefined8 *)param_1 = *(int *)param_2;
  return;
}





//==== 00838820 DefaultDataCopier_00838820 ====


/* public: static void __cdecl util__Darray_L_classutil__Str_L_char_G__G___DefaultDataCopier(void *,void
   *) */

void __cdecl util__Darray_class_util__Str_char_____DefaultDataCopier(void *param_1,void *param_2)

{
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_1,(Str_L_char_G_ *)param_2);
  return;
}





//==== 00838830 DefaultDataCopier_00838830 ====


/* public: static void __cdecl util__Darray_L_classutil__LocStr_G___DefaultDataCopier(void *,void *) */

void __cdecl util__Darray_class_util__LocStr___DefaultDataCopier(void *param_1,void *param_2)

{
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)param_1,(Str_L_char_G_ *)param_2);
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)((int)param_1 + 0xc),(Str_L_char_G_ *)((int)param_2 + 0xc));
  return;
}





//==== 00838860 Get_00838860 ====


/* public: static class util__ReflectionRegistry * __cdecl util__ReflectionRegistry__Get(void) */

ReflectionRegistry * __cdecl util__ReflectionRegistry__Get(void)

{
  ReflectionRegistry *this;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_009895ac) {
    _Init_thread_header(&DAT_009895ac);
    if (DAT_009895ac == -1) {
      this = (ReflectionRegistry *)port_op_new(0x24);
      if (this == (ReflectionRegistry *)0x0) {
        DAT_009895a8 = (undefined4)(uintptr_t)((ReflectionRegistry *)0x0);
      }
      else {
        (this->ReflectionInfoDatabase).Data =
             (tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *)0x0;
        (this->ReflectionInfoDatabase).DataInUse = (bool *)0x0;
        (this->ReflectionInfoDatabase).Capacity = 0;
        (this->TupleDatabase).Data =
             (tuple2_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cvoid__P____cdecl_P__int__G___G_
              *)0x0;
        (this->TupleDatabase).DataInUse = (bool *)0x0;
        (this->TupleDatabase).Capacity = 0;
        (this->EnumDatabase).Data = (tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *)0x0;
        (this->EnumDatabase).DataInUse = (bool *)0x0;
        (this->EnumDatabase).Capacity = 0;
        DAT_009895a8 = (undefined4)(uintptr_t)((ReflectionRegistry *)ReflectionRegistry__ReflectionRegistry(this));
      }
      atexit(FUN_0090fff0);
      _Init_thread_footer(&DAT_009895ac);
    }
  }
  return (ReflectionRegistry *)(uintptr_t)DAT_009895a8;
}





//==== 008388f0 GetEnumInfo ====


/* public: class util__Darray_L_classutil__Str_L_char_G__G_ 
   util__ReflectionRegistry__GetEnumInfo(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
util__ReflectionRegistry__GetEnumInfo(ReflectionRegistry *this,Str_L_char_G_ *param_1)

{
  tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *ptVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *in_stack_00000008;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ aDStack_4c [16];
  undefined **ppuStack_3c;
  LocStr *pLStack_38;
  Darray_L_class_util__Str_L_char_G___G_ aDStack_2c [16];
  undefined **ppuStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ReflectionRegistry *pRStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  pRStack_c = this;
  if ((this->EnumDatabase).Capacity == 0) {
LAB_00838a01:
    ppuStack_1c = (undefined **)(&vftable_4);
    pDVar8 = (Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_1c;
    uStack_18 = 0;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    uStack_14 = 0;
    uStack_10 = 0;
LAB_00838a25:
    Darray_L_class_util__Str_L_char_G___G___Darray_L_class_util__Str_L_char_G___G_
              ((Darray_L_class_util__Str_L_char_G___G_ *)param_1,pDVar8);
    if (bVar3) {
      util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_1c);
    }
    if (bVar4) {
      util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_2c);
    }
    if (bVar5) {
      ppuStack_3c = &vftable_3;
      if (pLStack_38 != (LocStr *)0x0) {
        LocStr___vector_deleting_destructor_(pLStack_38,3);
      }
      pLStack_38 = (LocStr *)0x0;
      ppuStack_3c = (undefined **)(&vftable);
      util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)aDStack_4c);
    }
    return param_1;
  }
  if ((int)in_stack_00000008[1] < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = (char *)*in_stack_00000008;
  }
  uVar6 = GetHash(pcVar7);
  uVar2 = (this->EnumDatabase).Capacity;
  for (uVar10 = uVar6 % uVar2; (int)uVar10 < 0; uVar10 = uVar10 + uVar2) {
  }
  if ((int)uVar2 <= (int)uVar10) {
    uVar10 = (int)uVar10 % (int)uVar2;
  }
  iStack_8 = 0;
  cVar9 = (this->EnumDatabase).DataInUse[uVar10];
  do {
    if ((cVar9 == '\0') || ((int)uVar2 <= iStack_8)) goto LAB_00838a01;
    ptVar1 = (this->EnumDatabase).Data + uVar10;
    if ((ptVar1->Value1).Length == in_stack_00000008[2]) {
      if ((ptVar1->Value1).Capacity < 1) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (ptVar1->Value1).Data;
      }
      if ((int)in_stack_00000008[1] < 1) {
        puVar11 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar11 = (undefined1 *)*in_stack_00000008;
      }
      cVar9 = *pcVar7;
      if (cVar9 == '\0') {
LAB_008389ad:
        if (ptVar1 != (tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *)0xfffffff4) {
          pDVar8 = (Darray_L_class_util__Str_L_char_G___G_ *)
                   Unzip_L_class_util__Str_L_char_G__Cclass_util__LocStr_G_(aDStack_4c);
          pDVar8 = (Darray_L_class_util__Str_L_char_G___G_ *)
                   Darray_L_class_util__Str_L_char_G___G___Darray_L_class_util__Str_L_char_G___G_(aDStack_2c,pDVar8)
          ;
          bVar5 = true;
          bVar4 = true;
          bVar3 = false;
          goto LAB_00838a25;
        }
        goto LAB_00838a01;
      }
      iVar12 = (int)puVar11 - (int)pcVar7;
      while (cVar9 == pcVar7[iVar12]) {
        cVar9 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
        if (cVar9 == '\0') goto LAB_008389ad;
      }
    }
    for (uVar10 = uVar10 + 1; (int)uVar10 < 0; uVar10 = uVar10 + uVar2) {
    }
    if ((int)uVar2 <= (int)uVar10) {
      uVar10 = (int)uVar10 % (int)uVar2;
    }
    iStack_8 = iStack_8 + 1;
    cVar9 = (pRStack_c->EnumDatabase).DataInUse[uVar10];
    this = pRStack_c;
  } while( true );
}





//==== 00838a90 GetEnumLocStrings ====


/* public: class util__Darray_L_classutil__LocStr_G_ __thiscall
   util__ReflectionRegistry__GetEnumLocStrings(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * __thiscall
util__ReflectionRegistry__GetEnumLocStrings(ReflectionRegistry *this,Str_L_char_G_ *param_1)

{
  tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *ptVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  Darray_L_class_util__LocStr_G_ *pDVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *in_stack_00000008;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ aDStack_4c [16];
  undefined **ppuStack_3c;
  LocStr *pLStack_38;
  undefined **ppuStack_2c;
  LocStr *pLStack_28;
  undefined **ppuStack_1c;
  LocStr *pLStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  ReflectionRegistry *pRStack_c;
  int iStack_8;
  
  iStack_8 = 0;
  pRStack_c = this;
  if ((this->EnumDatabase).Capacity == 0) {
LAB_00838ba1:
    ppuStack_1c = &vftable_3;
    pDVar8 = (Darray_L_class_util__LocStr_G_ *)&ppuStack_1c;
    pLStack_18 = (LocStr *)0x0;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    uStack_14 = 0;
    uStack_10 = 0;
LAB_00838bc5:
    Darray_L_class_util__LocStr_G___Darray_L_class_util__LocStr_G_
              ((Darray_L_class_util__LocStr_G_ *)param_1,pDVar8);
    if (bVar3) {
      ppuStack_1c = &vftable_3;
      if (pLStack_18 != (LocStr *)0x0) {
        LocStr___vector_deleting_destructor_(pLStack_18,3);
      }
      pLStack_18 = (LocStr *)0x0;
      ppuStack_1c = (undefined **)(&vftable);
    }
    if (bVar4) {
      ppuStack_2c = &vftable_3;
      if (pLStack_28 != (LocStr *)0x0) {
        LocStr___vector_deleting_destructor_(pLStack_28,3);
      }
      pLStack_28 = (LocStr *)0x0;
      ppuStack_2c = (undefined **)(&vftable);
    }
    if (bVar5) {
      ppuStack_3c = &vftable_3;
      if (pLStack_38 != (LocStr *)0x0) {
        LocStr___vector_deleting_destructor_(pLStack_38,3);
      }
      pLStack_38 = (LocStr *)0x0;
      ppuStack_3c = (undefined **)(&vftable);
      util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)aDStack_4c);
    }
    return param_1;
  }
  if ((int)in_stack_00000008[1] < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = (char *)*in_stack_00000008;
  }
  uVar6 = GetHash(pcVar7);
  uVar2 = (this->EnumDatabase).Capacity;
  for (uVar10 = uVar6 % uVar2; (int)uVar10 < 0; uVar10 = uVar10 + uVar2) {
  }
  if ((int)uVar2 <= (int)uVar10) {
    uVar10 = (int)uVar10 % (int)uVar2;
  }
  iStack_8 = 0;
  cVar9 = (this->EnumDatabase).DataInUse[uVar10];
  do {
    if ((cVar9 == '\0') || ((int)uVar2 <= iStack_8)) goto LAB_00838ba1;
    ptVar1 = (this->EnumDatabase).Data + uVar10;
    if ((ptVar1->Value1).Length == in_stack_00000008[2]) {
      if ((ptVar1->Value1).Capacity < 1) {
        pcVar7 = "";
      }
      else {
        pcVar7 = (ptVar1->Value1).Data;
      }
      if ((int)in_stack_00000008[1] < 1) {
        puVar11 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar11 = (undefined1 *)*in_stack_00000008;
      }
      cVar9 = *pcVar7;
      if (cVar9 == '\0') {
LAB_00838b4d:
        if (ptVar1 != (tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Str_L_char_G___G___G_ *)0xfffffff4) {
          iVar12 = Unzip_L_class_util__Str_L_char_G__Cclass_util__LocStr_G_(aDStack_4c);
          pDVar8 = (Darray_L_class_util__LocStr_G_ *)
                   Darray_L_class_util__LocStr_G___Darray_L_class_util__LocStr_G_
                             ((Darray_L_class_util__LocStr_G_ *)&ppuStack_2c,
                              (Darray_L_class_util__LocStr_G_ *)(iVar12 + 0x10));
          bVar5 = true;
          bVar4 = true;
          bVar3 = false;
          goto LAB_00838bc5;
        }
        goto LAB_00838ba1;
      }
      iVar12 = (int)puVar11 - (int)pcVar7;
      while (cVar9 == pcVar7[iVar12]) {
        cVar9 = pcVar7[1];
        pcVar7 = pcVar7 + 1;
        if (cVar9 == '\0') goto LAB_00838b4d;
      }
    }
    for (uVar10 = uVar10 + 1; (int)uVar10 < 0; uVar10 = uVar10 + uVar2) {
    }
    if ((int)uVar2 <= (int)uVar10) {
      uVar10 = (int)uVar10 % (int)uVar2;
    }
    iStack_8 = iStack_8 + 1;
    cVar9 = (pRStack_c->EnumDatabase).DataInUse[uVar10];
    this = pRStack_c;
  } while( true );
}





//==== 00838c70 GetFlatPointerPropertyChoices ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   util__Reflectable__GetFlatPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * __thiscall
util__Reflectable__GetFlatPointerPropertyChoices
          (Reflectable *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G_ local_4c [16];
  undefined4 *local_3c;
  int local_38;
  Darray_L_util__Str_L_char_G___G_ local_34;
  undefined **local_24;
  int *local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  Str_L_char_G_ *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar2 = (int *)(**(code **)(this->_pad_0x0_0 + 0x18))(local_4c,param_2);
  local_34._pad_0x0_0 = (int)&vftable_4;
  local_34.Data = (Str_L_char_G_ *)0x0;
  local_34.Size = 0;
  local_34.Capacity = 0;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable_152);
  local_20 = (int *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
  if (local_14 < iVar3) {
    do {
      local_10 = (Str_L_char_G_ *)(**(code **)*piVar2)(&local_14);
      iVar3 = local_34.Size;
      local_c = local_34.Size + 1;
      Darray_L_util__Str_L_char_G___G___SetSize(&local_34,&local_c);
      bVar1 = Darray_L_util__Str_L_char_G___G___CheckSize(&local_34,iVar3);
      if (bVar1) {
        util__Maybe_struct_util__ClassMember___operator(local_34.Data + local_34.Size + -1,local_10);
      }
      iVar3 = local_1c;
      local_c = local_1c + 1;
      Darray_L_util__Darray_L_Module_P_G___G___SetSize((Darray_L_util__Darray_L_Module_P_G___G_ *)&local_24,&local_c);
      bVar1 = Darray_L_util__Darray_L_Module_P_G___G___CheckSize
                        ((Darray_L_util__Darray_L_Module_P_G___G_ *)&local_24,iVar3);
      if (bVar1) {
        Darray_L_Module_P_G___op_assign
                  ((Darray_L_Module_P_G_ *)(local_20 + local_1c * 4 + -4),
                   (Darray_L_class_Module_P_G_ *)(local_10 + 1));
      }
      local_14 = local_14 + 1;
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
    } while (local_14 < iVar3);
  }
  iVar4 = 0;
  local_c = 0;
  iVar3 = (*(code *)local_24[3])();
  if (local_c < iVar3) {
    do {
      piVar2 = (int *)(*(code *)*local_24)(&local_c);
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
      local_c = local_c + 1;
      iVar4 = iVar4 + iVar3;
      iVar3 = (*(code *)local_24[3])();
    } while (local_c < iVar3);
  }
  (param_1->Name).Data = (char *)0x0;
  (param_1->Name).Capacity = 0;
  (param_1->Name).Length = 0;
  *(undefined4 *)&param_1->Type = 0;
  Darray_L_util__Reflectable_P_G___Darray_L_util__Reflectable_P_G_
            ((Darray_L_util__Reflectable_P_G_ *)param_1,iVar4);
  local_10 = (Str_L_char_G_ *)0x0;
  iVar3 = (*(code *)local_24[3])();
  if ((int)local_10 < iVar3) {
    do {
      piVar2 = (int *)(*(code *)*local_24)(&local_10);
      local_c = 0;
      iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
      if (local_c < iVar3) {
        do {
          local_3c = (undefined4 *)(**(code **)*piVar2)(&local_c);
          iVar3 = (param_1->Name).Length;
          local_38 = iVar3 + 1;
          Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)param_1,&local_38);
          bVar1 = Darray_L_GraphicsResource__Type_G___CheckSize
                            ((Darray_L_GraphicsResource__Type_G_ *)param_1,iVar3);
          if (bVar1) {
            *(undefined4 *)((param_1->Name).Capacity + -4 + (param_1->Name).Length * 4) = *local_3c;
          }
          local_c = local_c + 1;
          iVar3 = (**(code **)(uintptr_t)(*piVar2 + 0xc))();
        } while (local_c < iVar3);
      }
      local_10 = (Str_L_char_G_ *)((int)&local_10->Data + 1);
      iVar3 = (*(code *)local_24[3])();
    } while ((int)local_10 < iVar3);
  }
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable_152);
  if (local_20 != (int *)0x0) {
    if (local_20[-1] == 0) {
      port_op_delete(local_20 + -1);
    }
    else {
      (**(code **)(uintptr_t)(*local_20 + 0x18))(3);
    }
  }
  local_20 = (int *)0x0;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&vftable);
  Darray_L_util__Str_L_char_G___G___dtor(&local_34);
  Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___Darray_L_util__tuple2_L_util__Str_L_char_G__Cutil__Darray_L_util__Reflectable_P_G___G___G___dtor(local_4c);
  return param_1;
}

//==== 00838ec0 GetIntegerPropertyBoundaries_00838ec0 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_int_G__G_ __thiscall
   util__Reflectable__GetIntegerPropertyBoundaries(struct util__ClassMember const &)const  */

void __thiscall
util__Reflectable__GetIntegerPropertyBoundaries(Reflectable *this,ClassMember *param_1)

{
  (param_1->Name).Data = (char *)0x0;
  (param_1->Name).Capacity = 0;
  (undefined1)((param_1->Name).Length = 0);
  return;
}





//==== 00838ee0 GetLocalizationTag ====

/* public: virtual class util__Str_L_char_G_ __thiscall util__Reflectable__GetLocalizationTag(void)const
    */

Str_L_char_G_ * __thiscall
util__Reflectable__GetLocalizationTag(Reflectable *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  void *local_10 [3];
  
  puVar1 = (undefined4 *)(**(code **)this->_pad_0x0_0)();
  if ((this->Name).Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (this->Name).Data;
  }
  puVar1 = (undefined4 *)(**(code **)*puVar1)(local_10);
  if ((int)puVar1[1] < 1) {
    puVar2 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar2 = (undefined1 *)*puVar1;
  }
  Printf(__return_storage_ptr__,"%s %s",puVar2,pcVar3);
  if (local_10[0] != (void *)0x0) {
    port_op_delete(local_10[0]);
  }
  return __return_storage_ptr__;
}

//==== 00838f50 GetLocalizedName_00838f50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Str_L_char_G_ __thiscall util__Reflectable__GetLocalizedName(void)const
    */

Str_L_char_G_ * __thiscall
util__Reflectable__GetLocalizedName(Reflectable *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_38;
  void *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Str_L_char_G_ local_20;
  void *pvStack_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_2c = (void *)0x0;
  pSVar2 = &local_38;
  local_28 = 0;
  *(uint32_t *)&local_24 = 0;
  local_10 = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  pvStack_14 = (void *)0x0;
  pSVar1 = (Str_L_char_G_ *)(**(code **)(this->_pad_0x0_0 + 0x44))(pSVar2,&local_2c);
  LocStr__LocStr((LocStr *)&local_20,pSVar1,pSVar2);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_2c != (void *)0x0) {
    port_op_delete(local_2c);
  }
  util__Maybe_struct_util__ClassMember___operator(&local_20,&this->Name);
  pSVar2 = (Str_L_char_G_ *)(uintptr_t)(LocStr__op_mul((LocStr *)&local_20));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar2);
  if (pvStack_14 != (void *)0x0) {
    port_op_delete(pvStack_14);
    pvStack_14 = (void *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
  }
  return __return_storage_ptr__;
}

//==== 00839020 GetPointerPropertyChoices_00839020 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   util__Reflectable__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

void 
util__Reflectable__GetPointerPropertyChoices
          (Reflectable *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  (param_1->Name).Data =
       (char *)&vftable_85;
  (param_1->Name).Capacity = 0;
  (param_1->Name).Length = 0;
  *(undefined4 *)&param_1->Type = 0;
  return;
}





//==== 00839050 GetReflectionInfo_00839050 ====


/* public: struct util__ReflectionInfoBase * __thiscall
   util__ReflectionRegistry__GetReflectionInfo(class util__Str_L_char_G_ const &)const  */

ReflectionInfoBase * __thiscall
util__ReflectionRegistry__GetReflectionInfo(ReflectionRegistry *this,Str_L_char_G_ *param_1)

{
  uint uVar1;
  bool *pbVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  tuple2_L_util__Str_L_char_G__Cutil__ReflectionInfoBase__P_G_ *ptVar7;
  char *pcVar8;
  int iVar9;
  int iStack_8;
  
  if ((this->ReflectionInfoDatabase).Capacity == 0) {
    return (ReflectionInfoBase *)0x0;
  }
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  uVar3 = GetHash(pcVar4);
  uVar1 = (this->ReflectionInfoDatabase).Capacity;
  for (uVar6 = uVar3 % uVar1; (int)uVar6 < 0; uVar6 = uVar6 + uVar1) {
  }
  if ((int)uVar1 <= (int)uVar6) {
    uVar6 = (int)uVar6 % (int)uVar1;
  }
  pbVar2 = (this->ReflectionInfoDatabase).DataInUse;
  iStack_8 = 0;
  cVar5 = pbVar2[uVar6];
  do {
    if (cVar5 == '\0') {
      return (ReflectionInfoBase *)0x0;
    }
    if ((int)uVar1 <= iStack_8) {
      return (ReflectionInfoBase *)0x0;
    }
    ptVar7 = (this->ReflectionInfoDatabase).Data + uVar6;
    if ((ptVar7->Value1).Length == param_1->Length) {
      if ((ptVar7->Value1).Capacity < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (ptVar7->Value1).Data;
      }
      if (param_1->Capacity < 1) {
        pcVar8 = "";
      }
      else {
        pcVar8 = param_1->Data;
      }
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
LAB_008390fd:
        if (&ptVar7->Value2 == (ReflectionInfoBase **)0x0) {
          return (ReflectionInfoBase *)0x0;
        }
        return ptVar7->Value2;
      }
      iVar9 = (int)pcVar8 - (int)pcVar4;
      while (cVar5 == pcVar4[iVar9]) {
        cVar5 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar5 == '\0') goto LAB_008390fd;
      }
    }
    for (uVar6 = uVar6 + 1; (int)uVar6 < 0; uVar6 = uVar6 + uVar1) {
    }
    if ((int)uVar1 <= (int)uVar6) {
      uVar6 = (int)uVar6 % (int)uVar1;
    }
    iStack_8 = iStack_8 + 1;
    cVar5 = pbVar2[uVar6];
  } while( true );
}





//==== 00839150 GetSizeOfType ====


/* unsigned int __cdecl util__GetSizeOfType(enum util__Reflection__Type) */

uint __cdecl util__GetSizeOfType(int)

{
  undefined3 in_stack_00000005;
  
  switch(_param_1) {
  case 1:
  case 5:
    return 1;
  case 2:
  case 3:
  case 8:
  case 9:
    return 4;
  case 4:
    return 8;
  case 6:
    return 0xc;
  case 7:
    return 0x18;
  default:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.cpp",0xdc,
              "0",(char *)0x0);
    DebugBreak();
    return 0;
  }
}





//==== 008391f0 GetTupleInfo ====


/* public: class util__Darray_L_structutil__TupleProperty_G_ 
   util__ReflectionRegistry__GetTupleInfo(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
util__ReflectionRegistry__GetTupleInfo(ReflectionRegistry *this,Str_L_char_G_ *param_1)

{
  char cVar7;
  int iStack_8;
  bool *pbStack_c;
  undefined4 uVar8;
  undefined4 uVar1;
  undefined4 uVar4;
  bool bVar2;
  bool bVar3;
  char *pcVar5;
  Darray_L_struct_util__TupleProperty_G_ *pDVar6;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined4 *in_stack_00000008;
  undefined **ppuStack_30;
  TupleProperty *pTStack_2c;
  undefined **ppuStack_20;
  TupleProperty *pTStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ReflectionRegistry *pRStack_10;
  
  pRStack_10 = this;
  if ((this->TupleDatabase).Capacity == 0) {
LAB_008392e5:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.cpp",0x40,
              "Info",(char *)0x0);
    DebugBreak();
    bVar3 = false;
    ppuStack_20 = (undefined **)(&vftable_557);
    pTStack_1c = (TupleProperty *)0x0;
    pDVar6 = (Darray_L_struct_util__TupleProperty_G_ *)&ppuStack_20;
    uStack_18 = 0;
    uStack_14 = 0;
    bVar2 = true;
LAB_00839325:
    Darray_L_struct_util__TupleProperty_G___Darray_L_struct_util__TupleProperty_G_
              ((Darray_L_struct_util__TupleProperty_G_ *)param_1,pDVar6);
    if (bVar2) {
      ppuStack_20 = (undefined **)(&vftable_557);
      if (pTStack_1c != (TupleProperty *)0x0) {
        util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(pTStack_1c,3);
      }
      pTStack_1c = (TupleProperty *)0x0;
      ppuStack_20 = (undefined **)(&vftable);
    }
    if (bVar3) {
      ppuStack_30 = (undefined **)(&vftable);
      if (pTStack_2c != (TupleProperty *)0x0) {
        util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(pTStack_2c,3);
      }
    }
    return param_1;
  }
  if ((int)in_stack_00000008[1] < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = (char *)*in_stack_00000008;
  }
  uVar4 = GetHash(pcVar5);
  uVar1 = (this->TupleDatabase).Capacity;
  for (uVar8 = uVar4 % uVar1; (int)uVar8 < 0; uVar8 = uVar8 + uVar1) {
  }
  if ((int)uVar1 <= (int)uVar8) {
    uVar8 = (int)uVar8 % (int)uVar1;
  }
  pbStack_c = (this->TupleDatabase).DataInUse;
  iStack_8 = 0;
  cVar7 = pbStack_c[uVar8];
  do {
    if ((cVar7 == '\0') || ((int)uVar1 <= iStack_8)) goto LAB_008392e5;
    puVar9 = (undefined4 *)((int)(this->TupleDatabase).Data + uVar8 * 0x2c);
    if (puVar9[2] == in_stack_00000008[2]) {
      if ((int)puVar9[1] < 1) {
        pcVar5 = "";
      }
      else {
        pcVar5 = (char *)*puVar9;
      }
      if ((int)in_stack_00000008[1] < 1) {
        puVar10 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar10 = (undefined1 *)*in_stack_00000008;
      }
      cVar7 = *pcVar5;
      if (cVar7 == '\0') {
LAB_0083929d:
        if ((Darray_L_struct_util__TupleProperty_G_ *)(puVar9 + 3) !=
            (Darray_L_struct_util__TupleProperty_G_ *)0x0) {
          pDVar6 = (Darray_L_struct_util__TupleProperty_G_ *)
                   Darray_L_struct_util__TupleProperty_G___Darray_L_struct_util__TupleProperty_G_
                             ((Darray_L_struct_util__TupleProperty_G_ *)&ppuStack_30,
                              (Darray_L_struct_util__TupleProperty_G_ *)(puVar9 + 3));
          bVar3 = true;
          bVar2 = false;
          goto LAB_00839325;
        }
        goto LAB_008392e5;
      }
      iVar11 = (int)puVar10 - (int)pcVar5;
      while (cVar7 == pcVar5[iVar11]) {
        cVar7 = pcVar5[1];
        pcVar5 = pcVar5 + 1;
        if (cVar7 == '\0') goto LAB_0083929d;
      }
    }
    for (uVar8 = uVar8 + 1; (int)uVar8 < 0; uVar8 = uVar8 + uVar1) {
    }
    if ((int)uVar1 <= (int)uVar8) {
      uVar8 = (int)uVar8 % (int)uVar1;
    }
    iStack_8 = iStack_8 + 1;
    cVar7 = pbStack_c[uVar8];
    this = pRStack_10;
  } while( true );
}





//==== 00839380 GetTupleTypedFunctions ====


/* public: struct util__ReflectionRegistry__TupleTypedFunctions __thiscall
   util__ReflectionRegistry__GetTupleTypedFunctions(class util__Str_L_char_G_ const &)const  */

void __thiscall
util__ReflectionRegistry__GetTupleTypedFunctions(ReflectionRegistry *this,Str_L_char_G_ *param_1)

{
  uint uVar1;
  bool *pbVar2;
  ulong uVar3;
  char *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *in_stack_00000008;
  char *pcStack_20;
  int iStack_1c;
  int iStack_18;
  char *pcStack_14;
  int iStack_8;
  
  if ((this->TupleDatabase).Capacity == 0) {
LAB_0083946b:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.cpp",100,
              "Info",(char *)0x0);
    DebugBreak();
    pcStack_20 = (char *)0x0;
    iStack_1c = 0;
    iStack_18 = 0;
    pcStack_14 = (char *)0x0;
LAB_008394a3:
    param_1->Data = pcStack_20;
    param_1->Capacity = iStack_1c;
    param_1->Length = iStack_18;
    param_1[1].Data = pcStack_14;
    return;
  }
  if ((int)in_stack_00000008[1] < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = (char *)*in_stack_00000008;
  }
  uVar3 = GetHash(pcVar4);
  uVar1 = (this->TupleDatabase).Capacity;
  for (uVar6 = uVar3 % uVar1; (int)uVar6 < 0; uVar6 = uVar6 + uVar1) {
  }
  if ((int)uVar1 <= (int)uVar6) {
    uVar6 = (int)uVar6 % (int)uVar1;
  }
  pbVar2 = (this->TupleDatabase).DataInUse;
  iStack_8 = 0;
  cVar5 = pbVar2[uVar6];
  do {
    if ((cVar5 == '\0') || ((int)uVar1 <= iStack_8)) goto LAB_0083946b;
    puVar7 = (undefined4 *)((int)(this->TupleDatabase).Data + uVar6 * 0x2c);
    if (puVar7[2] == in_stack_00000008[2]) {
      if ((int)puVar7[1] < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)*puVar7;
      }
      if ((int)in_stack_00000008[1] < 1) {
        puVar8 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar8 = (undefined1 *)*in_stack_00000008;
      }
      cVar5 = *pcVar4;
      if (cVar5 == '\0') {
LAB_0083942d:
        if (puVar7 != (undefined4 *)0xfffffff4) {
          pcStack_20 = (char *)puVar7[7];
          iStack_1c = puVar7[8];
          iStack_18 = puVar7[9];
          pcStack_14 = (char *)puVar7[10];
          goto LAB_008394a3;
        }
        goto LAB_0083946b;
      }
      iVar9 = (int)puVar8 - (int)pcVar4;
      while (cVar5 == pcVar4[iVar9]) {
        cVar5 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar5 == '\0') goto LAB_0083942d;
      }
    }
    for (uVar6 = uVar6 + 1; (int)uVar6 < 0; uVar6 = uVar6 + uVar1) {
    }
    if ((int)uVar1 <= (int)uVar6) {
      uVar6 = (int)uVar6 % (int)uVar1;
    }
    iStack_8 = iStack_8 + 1;
    cVar5 = pbVar2[uVar6];
  } while( true );
}





//==== 008394c0 GetTypeFromTypeString ====


/* enum util__Reflection__Type __cdecl util__GetTypeFromTypeString(class util__Str_L_char_G_ const &) */

int __cdecl util__GetTypeFromTypeString(Str_L_char_G_ *param_1)

{
  bool bVar1;
  int TVar2;
  char *pcVar3;
  ReflectionRegistry *this;
  char *pcVar4;
  
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  pcVar3 = "bool";
  while( true ) {
    if ((pcVar3[(int)(pcVar4 + -0x91f318)] == '\0') && (*pcVar3 == '\0')) {
      return Boolean;
    }
    if (pcVar3[(int)(pcVar4 + -0x91f318)] != *pcVar3) break;
    pcVar3 = pcVar3 + 1;
  }
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  pcVar3 = "int";
  while( true ) {
    if ((pcVar3[(int)(pcVar4 + -0x91d7e4)] == '\0') && (*pcVar3 == '\0')) {
      return Integer;
    }
    if (pcVar3[(int)(pcVar4 + -0x91d7e4)] != *pcVar3) break;
    pcVar3 = pcVar3 + 1;
  }
  bVar1 = Str_L_char_G___op_eq(param_1,"float");
  if (bVar1) {
    return Float;
  }
  bVar1 = Str_L_char_G___op_eq(param_1,"double");
  if (bVar1) {
    return Decimal;
  }
  bVar1 = Str_L_char_G___op_eq(param_1,"uchar");
  if (bVar1) {
    return TypeCode__Character;
  }
  bVar1 = Str_L_char_G___op_eq(param_1,"AStr");
  if (bVar1) {
    return String;
  }
  bVar1 = Str_L_char_G___op_eq(param_1,"LocStr");
  if (bVar1) {
    return Pointer__V;
  }
  bVar1 = Str_L_char_G___op_eq(param_1,"Unused");
  if (!bVar1) {
    this = (ReflectionRegistry *)(uintptr_t)(ReflectionRegistry__Get());
    TVar2 = ReflectionRegistry__CheckType(this,param_1);
    return TVar2;
  }
  return Unused;
}





//==== 008395d0 GetTypeSearchString_008395d0 ====

/* public: virtual class util__Str_L_char_G_ __thiscall
   util__Reflectable__GetTypeSearchString(void)const  */

Str_L_char_G_ * __thiscall
util__Reflectable__GetTypeSearchString(Reflectable *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)this->_pad_0x0_0)();
  (**(code **)*puVar1)(__return_storage_ptr__);
  return __return_storage_ptr__;
}

//==== 008395f0 GetTypedFuncs ====


/* public: struct util__ReflectionRegistry__TupleTypedFunctions 
   util__ReflectionRegistry__GetTypedFuncs(enum util__Reflection__Type,class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
util__ReflectionRegistry__GetTypedFuncs(ReflectionRegistry *this,int param_1,Str_L_char_G_ *param_2,struct cde_TupleTypedFunctions *tuplefuncs_param)

{
  ReflectionRegistry *this_00;
  undefined3 in_stack_00000005;
  Str_L_char_G_ *pSVar1;
  cde_DarrayHdr *cde_tf_buf = (cde_DarrayHdr *)tuplefuncs_param;
  
  switch(param_1) {
  case (int)(uintptr_t)(0x1):
    cde_tf_buf->Data = (char *)Darray_L_bool_G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)ChemicalMakeup__DestroyArray;
    cde_tf_buf->Length = (int)Darray_L_bool_G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_bool_G___DefaultDataCopier;
    return (Str_L_char_G_ *)(uintptr_t) cde_tf_buf;
  case (int)(uintptr_t)(0x2):
  case (int)(uintptr_t)(0x9):
    cde_tf_buf->Data = (char *)Darray_L_void_P_G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)ChemicalMakeup__DestroyArray;
    cde_tf_buf->Length = (int)Darray_L_void_P_G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_void_P_G___DefaultDataCopier;
  case (int)(uintptr_t)(0x3):
    cde_tf_buf->Data = (char *)Darray_L_void_P_G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)ChemicalMakeup__DestroyArray;
    cde_tf_buf->Length = (int)Darray_L_void_P_G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_void_P_G___DefaultDataCopier;
  case (int)(uintptr_t)(0x4):
    cde_tf_buf->Data = (char *)Darray_L_double_G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)ChemicalMakeup__DestroyArray;
    cde_tf_buf->Length = (int)Darray_L_double_G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_double_G___DefaultDataCopier;
  case (int)(uintptr_t)(0x5):
    cde_tf_buf->Data = (char *)Darray_L_bool_G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)ChemicalMakeup__DestroyArray;
    cde_tf_buf->Length = (int)Darray_L_bool_G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_bool_G___DefaultDataCopier;
  case (int)(uintptr_t)(0x6):
    cde_tf_buf->Data = (char *)Darray_L_class_util__Str_L_char_G___G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)Darray_L_class_util__Str_L_char_G___G___DefaultArrayDestroyer;
    cde_tf_buf->Length = (int)Darray_L_class_util__Str_L_char_G___G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_class_util__Str_L_char_G___G___DefaultDataCopier;
  case (int)(uintptr_t)(0x7):
    cde_tf_buf->Data = (char *)Darray_L_class_util__LocStr_G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)Darray_L_class_util__LocStr_G___DefaultArrayDestroyer;
    cde_tf_buf->Length = (int)Darray_L_class_util__LocStr_G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_class_util__LocStr_G___DefaultDataCopier;
  default:
    cde_tf_buf->Data = (char *)Darray_L_void_P_G___DefaultArrayAllocator;
    cde_tf_buf->Capacity = (int)ChemicalMakeup__DestroyArray;
    cde_tf_buf->Length = (int)Darray_L_void_P_G___DefaultDataClearer;
    cde_tf_buf[1].Data = (char *)Darray_L_void_P_G___DefaultDataCopier;
  case (int)(uintptr_t)(0xb):
    pSVar1 = (Str_L_char_G_ *)(uintptr_t)(cde_tf_buf);
    this_00 = (ReflectionRegistry *)(uintptr_t)(Get());
    GetTupleTypedFunctions(this_00,pSVar1);
  }
}





//==== 00839760 InitializeClassMembers ====


/* void __cdecl util__InitializeClassMembers(struct util__ReflectionInfoBase *,class
   util__Reflectable *) */

void __cdecl util__InitializeClassMembers(ReflectionInfoBase *param_1,Reflectable *param_2)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  Darray_L_struct_util__ClassMember_G_ aDStack_1c [16];
  ReflectionInfoBase *pRStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pRStack_c = param_1;
  uVar1 = (**(code **)(*(int *)(param_1) + 4))(aDStack_1c,&pRStack_c,&param_2);
  FUN_00835600(uVar1);
  util__Darray_struct_util__ClassMember____Darray_struct_util__ClassMember(aDStack_1c);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 008397b0 InvokeTupleArrayAllocation ====


/* public: void *  util__ReflectionRegistry__InvokeTupleArrayAllocation(class
   util__Str_L_char_G_ const &,int)const  */

void * 
util__ReflectionRegistry__InvokeTupleArrayAllocation
          (ReflectionRegistry *this,Str_L_char_G_ *param_1,int param_2)

{
  uint uVar1;
  bool *pbVar2;
  ulong uVar3;
  char *pcVar4;
  void *pvVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  int iStack_8;
  
  if ((this->TupleDatabase).Capacity == 0) {
LAB_008398a5:
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.cpp",0x5c,
              "Info",(char *)0x0);
    DebugBreak();
    return (void *)0x0;
  }
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  uVar3 = GetHash(pcVar4);
  uVar1 = (this->TupleDatabase).Capacity;
  for (uVar7 = uVar3 % uVar1; (int)uVar7 < 0; uVar7 = uVar7 + uVar1) {
  }
  if ((int)uVar1 <= (int)uVar7) {
    uVar7 = (int)uVar7 % (int)uVar1;
  }
  pbVar2 = (this->TupleDatabase).DataInUse;
  iStack_8 = 0;
  cVar6 = pbVar2[uVar7];
  do {
    if ((cVar6 == '\0') || ((int)uVar1 <= iStack_8)) goto LAB_008398a5;
    puVar8 = (undefined4 *)((int)(this->TupleDatabase).Data + uVar7 * 0x2c);
    if (puVar8[2] == param_1->Length) {
      if ((int)puVar8[1] < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = (char *)*puVar8;
      }
      if (param_1->Capacity < 1) {
        pcVar9 = "";
      }
      else {
        pcVar9 = param_1->Data;
      }
      cVar6 = *pcVar4;
      if (cVar6 == '\0') {
LAB_0083985d:
        if (puVar8 != (undefined4 *)0xfffffff4) {
          pvVar5 = (void *)(*(code *)puVar8[7])(param_2);
          return pvVar5;
        }
        goto LAB_008398a5;
      }
      iVar10 = (int)pcVar9 - (int)pcVar4;
      while (cVar6 == pcVar4[iVar10]) {
        cVar6 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        if (cVar6 == '\0') goto LAB_0083985d;
      }
    }
    for (uVar7 = uVar7 + 1; (int)uVar7 < 0; uVar7 = uVar7 + uVar1) {
    }
    if ((int)uVar1 <= (int)uVar7) {
      uVar7 = (int)uVar7 % (int)uVar1;
    }
    iStack_8 = iStack_8 + 1;
    cVar6 = pbVar2[uVar7];
  } while( true );
}





//==== 008398d0 RegisterEnum ====


/* public: void  util__ReflectionRegistry__RegisterEnum(class util__Str_L_char_G_ const
   &,class util__Darray_L_classutil__Str_L_char_G__G_ const &,class util__Darray_L_classutil__LocStr_G_ const
   &) */

void 
util__ReflectionRegistry__RegisterEnum
          (ReflectionRegistry *this,Str_L_char_G_ *param_1,Darray_L_class_util__Str_L_char_G___G_ *param_2,
          Darray_L_class_util__LocStr_G_ *param_3)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *pDVar1;
  undefined **ppuStack_14;
  ResearchReference *pRStack_10;
  
  pDVar1 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *)
           Zip_L_class_util__Str_L_char_G__Cclass_util__LocStr_G_
                     ((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_14,
                      (Darray_L_class_util__LocStr_G_ *)param_2);
  AssocArray_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G___Add((AssocArray_L_class_util__Str_L_char_G__Cclass_util__Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G___G_
         *)&this->EnumDatabase,param_1,pDVar1);
  ppuStack_14 = &vftable_558;
  if (pRStack_10 != (ResearchReference *)0x0) {
    ResearchReference___vector_deleting_destructor(pRStack_10,3);
  }
  return;
}





//==== 00839920 RegisterStruct ====


/* public: void  util__ReflectionRegistry__RegisterStruct(class util__Str_L_char_G_ const
   &,struct util__ReflectionInfoBase *) */

void 
util__ReflectionRegistry__RegisterStruct
          (ReflectionRegistry *this,Str_L_char_G_ *param_1,ReflectionInfoBase *param_2)

{
  undefined8 stack0xfffffffc;
  ReflectionInfoBase *pRStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pRStack_c = param_2;
  AssocArray_L_class_util__Str_L_char_G__Cstruct_util__ReflectionInfoBase_P_G___Add
            ((AssocArray_L_class_util__Str_L_char_G__Cstruct_util__ReflectionInfoBase_P_G_ *)this,param_1,
             &pRStack_c);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00839960 RegisterTuple ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall util__ReflectionRegistry__RegisterTuple(class util__Str_L_char_G_ const
   &,class util__Darray_L_classutil__Str_L_char_G__G_ const &,class util__Darray_L_classutil__Str_L_char_G__G_
   const &,class util__Darray_L_unsignedint_G_ const &,void * (__cdecl*)(unsigned int),void
   (__cdecl*)(void *),void (__cdecl*)(void *),void (__cdecl*)(void *,void *)) */

void __thiscall
util__ReflectionRegistry__RegisterTuple
          (ReflectionRegistry *this,Str_L_char_G_ *param_1,Darray_L_util__Str_L_char_G___G_ *param_2,
          Darray_L_util__Str_L_char_G___G_ *param_3,Darray_L_unsigned_int_G_ *param_4,
          _func_void_ptr_uint *param_5,_func_void_void_ptr *param_6,_func_void_void_ptr *param_7,
          _func_void_void_ptr_void_ptr *param_8)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  Str_L_char_G_ *pSVar6;
  uint uVar7;
  TupleProperty *pTVar8;
  Darray_L_util__TupleProperty_G_ local_98;
  _func_void_ptr_uint *local_88;
  _func_void_void_ptr *p_Stack_84;
  _func_void_void_ptr *p_Stack_80;
  _func_void_void_ptr_void_ptr *p_Stack_7c;
  ReflectionRegistry *local_78;
  Str_L_char_G_ *local_74;
  Darray_L_unsigned_int_G_ *local_70;
  undefined1 local_6c [16];
  undefined1 local_5c [16];
  Str_L_char_G_ local_4c;
  Str_L_char_G_ SStack_40;
  _func_void_void_ptr_void_ptr *local_34;
  uint local_30;
  Darray_L_util__Str_L_char_G___G_ local_2c;
  Darray_L_util__TupleProperty_G_ local_1c;
  Darray_L_util__Str_L_char_G___G_ *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_74 = param_1;
  local_c = param_3;
  local_70 = param_4;
  local_78 = this;
  iVar2 = (**(code **)(param_4->_pad_0x0_0 + 0xc))();
  iVar3 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
  if (iVar3 == iVar2) {
    iVar2 = (**(code **)(param_3->_pad_0x0_0 + 0xc))();
    iVar3 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
    if (iVar3 == iVar2) goto LAB_008399d0;
  }
  LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\reflection\\reflection.cpp",0x1f,
            "TupleTypeNames.Num() == TupleOffsets.Num() && TupleTypeNames.Num() == TupleNames.Num()"
            ,(char *)0x0);
  DebugBreak();
LAB_008399d0:
  local_30 = local_30 & 0xffffff00;
  local_2c._pad_0x0_0 = 0;
  local_2c.Data = (Str_L_char_G_ *)0x0;
  local_2c.Size = 0;
  local_2c.Capacity = 0;
  FUN_00835950(&local_2c,param_2,local_30);
  local_1c._pad_0x0_0 = 0;
  local_1c.Data = (TupleProperty *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = 0;
  uVar4 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
  local_1c._pad_0x0_0 = (int)&vftable_557;
  local_1c.Data = (TupleProperty *)0x0;
  local_1c.Size = 0;
  if (((int)uVar4 < 0) || (0x3fffffff < (int)uVar4)) {
    local_1c.Capacity = 0;
  }
  else {
    local_1c.Capacity = uVar4;
    if (0 < (int)uVar4) {
      uVar7 = -(uint)((int)((ulonglong)uVar4 * 0x1c >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x1c)
      ;
      puVar5 = (uint *)(uintptr_t)(port_op_new(-(uint)(0xfffffffb < uVar7) | uVar7 + 4));
      if (puVar5 == (uint *)0x0) {
        local_1c.Data = (TupleProperty *)0x0;
      }
      else {
        *puVar5 = uVar4;
        local_1c.Data = (TupleProperty *)(puVar5 + 1);
        if (uVar4 != 0) {
          puVar5 = puVar5 + 6;
          pTVar8 = local_1c.Data;
          do {
            (pTVar8->Name).Data = (char *)0x0;
            pTVar8 = pTVar8 + 1;
            puVar5[-4] = 0;
            puVar5[-3] = 0;
            puVar5[-2] = 0;
            puVar5[-1] = 0;
            *puVar5 = 0;
            puVar5[1] = 0;
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 7;
          } while (uVar4 != 0);
        }
      }
      iVar2 = 0;
      param_3 = local_c;
      if (0 < local_1c.Capacity) {
        iVar3 = 0;
        do {
          pSVar6 = (Str_L_char_G_ *)((int)&((local_1c.Data)->Name).Data + iVar3);
          SStack_40.Capacity = 0;
          SStack_40.Length = 0;
          local_34 = (_func_void_void_ptr_void_ptr *)0x0;
          local_4c.Data = (char *)0x0;
          local_4c.Capacity = 0;
          local_4c.Length = 0;
          SStack_40.Data = (char *)0x0;
          util__Maybe_struct_util__ClassMember___operator(pSVar6,&local_4c);
          util__Maybe_struct_util__ClassMember___operator(pSVar6 + 1,&SStack_40);
          iVar2 = iVar2 + 1;
          pSVar6[2].Data = (char *)0x0;
          iVar3 = iVar3 + 0x1c;
          param_3 = local_c;
        } while (iVar2 < local_1c.Capacity);
      }
    }
  }
  local_c = (Darray_L_util__Str_L_char_G___G_ *)0x0;
  if (0 < local_2c.Size) {
    do {
      pSVar6 = (Str_L_char_G_ *)(**(code **)local_2c._pad_0x0_0)(&local_c);
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(local_6c + 4),pSVar6);
      pSVar6 = (Str_L_char_G_ *)(**(code **)param_3->_pad_0x0_0)(&local_c);
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const((Str_L_char_G_ *)(local_5c + 4),pSVar6);
      puVar5 = (uint *)(**(code **)local_70->_pad_0x0_0)(&local_c);
      uVar4 = *puVar5;
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&local_4c,(Str_L_char_G_ *)(local_5c + 4));
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_40,(Str_L_char_G_ *)(local_6c + 4));
      local_34 = (_func_void_void_ptr_void_ptr *)uVar4;
      if ((TupleProperty *)(*(uint32_t*)((char*)&(local_5c)+4)) != (TupleProperty *)0x0) {
        port_op_delete((void *)(*(uint32_t*)((char*)&(local_5c)+4)));
        (*(uint32_t*)((char*)&(local_5c)+4)) = (uint32_t)(uintptr_t)((TupleProperty *)0x0);
      }
      if ((TupleProperty *)(*(uint32_t*)((char*)&(local_6c)+4)) != (TupleProperty *)0x0) {
        port_op_delete((void *)(*(uint32_t*)((char*)&(local_6c)+4)));
        (*(uint32_t*)((char*)&(local_6c)+4)) = (uint32_t)(uintptr_t)((TupleProperty *)0x0);
      }
      iVar2 = local_1c.Size;
      local_30 = local_1c.Size + 1;
      Darray_L_util__TupleProperty_G___SetSize(&local_1c,(int *)&local_30);
      bVar1 = Darray_L_util__TupleProperty_G___CheckSize(&local_1c,iVar2);
      iVar2 = local_1c.Size;
      pTVar8 = local_1c.Data;
      if (bVar1) {
        util__Maybe_struct_util__ClassMember___operator(&local_1c.Data[local_1c.Size + -1].Name,&local_4c);
        util__Maybe_struct_util__ClassMember___operator(&pTVar8[iVar2 + -1].Type,&SStack_40);
        pTVar8[iVar2 + -1].Offset = uVar4;
      }
      if (SStack_40.Data != (char *)0x0) {
        port_op_delete(SStack_40.Data);
      }
      if (local_4c.Data != (char *)0x0) {
        port_op_delete(local_4c.Data);
      }
      local_c = (Darray_L_util__Str_L_char_G___G_ *)((int)&local_c->_pad_0x0_0 + 1);
    } while ((int)local_c < local_2c.Size);
  }
  SStack_40.Data = (char *)param_5;
  SStack_40.Capacity = (int)param_6;
  SStack_40.Length = (int)param_7;
  local_34 = param_8;
  Darray_L_util__TupleProperty_G___Darray_L_util__TupleProperty_G_
            ((Darray_L_util__TupleProperty_G_ *)local_5c,(Darray_L_struct_util__TupleProperty_G_ *)&local_1c
            );
  Darray_L_util__TupleProperty_G___Darray_L_util__TupleProperty_G_
            ((Darray_L_util__TupleProperty_G_ *)local_6c,(Darray_L_struct_util__TupleProperty_G_ *)local_5c)
  ;
  Darray_L_util__TupleProperty_G___Darray_L_util__TupleProperty_G_
            (&local_98,(Darray_L_struct_util__TupleProperty_G_ *)local_6c);
  (*(uint32_t*)&(local_6c)) = (uint32_t)(uintptr_t)(&vftable_557);
  local_88 = (_func_void_ptr_uint *)SStack_40.Data;
  p_Stack_84 = (_func_void_void_ptr *)SStack_40.Capacity;
  p_Stack_80 = (_func_void_void_ptr *)SStack_40.Length;
  p_Stack_7c = local_34;
  if ((TupleProperty *)(*(uint32_t*)((char*)&(local_6c)+4)) != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor((TupleProperty *)(*(uint32_t*)((char*)&(local_6c)+4)),3);
  }
  (*(uint32_t*)((char*)&(local_6c)+4)) = (uint32_t)(uintptr_t)((TupleProperty *)0x0);
  (*(uint32_t*)&(local_6c)) = (uint32_t)(uintptr_t)(&vftable);
  (*(uint32_t*)&(local_5c)) = (uint32_t)(uintptr_t)(&vftable_557);
  if ((TupleProperty *)(*(uint32_t*)((char*)&(local_5c)+4)) != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor((TupleProperty *)(*(uint32_t*)((char*)&(local_5c)+4)),3);
  }
  (*(uint32_t*)((char*)&(local_5c)+4)) = (uint32_t)(uintptr_t)((TupleProperty *)0x0);
  (*(uint32_t*)&(local_5c)) = (uint32_t)(uintptr_t)(&vftable);
  AssocArray_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cutil__ReflectionRegistry__TupleTypedFunctions_G___G___Add((AssocArray_L_util__Str_L_char_G__Cutil__tuple2_L_util__Darray_L_util__TupleProperty_G__Cutil__ReflectionRegistry__TupleTypedFunctions_G___G_
         *)&local_78->TupleDatabase,local_74,
        (tuple2_L_util__Darray_L_util__TupleProperty_G__Cutil__ReflectionRegistry__TupleTypedFunctions_G_ *)
        &local_98);
  local_98._pad_0x0_0 = (int)&vftable_557;
  if (local_98.Data != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(local_98.Data,3);
  }
  local_1c._pad_0x0_0 = (int)&vftable_557;
  if (local_1c.Data != (TupleProperty *)0x0) {
    util__Darray_struct_util__TupleProperty____scalar_deleting_destructor(local_1c.Data,3);
  }
  local_1c.Data = (TupleProperty *)0x0;
  local_1c._pad_0x0_0 = (int)&vftable;
  Darray_L_util__Str_L_char_G___G___dtor(&local_2c);
  return;
}

//==== 00839d30 SetAll_00839d30 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__LocStr_G__G___SetAll(struct util__tuple2_L_classutil__Str_L_char_G__Cclassutil__LocStr_G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_____SetAll
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this,
          tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G_ *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 3) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,(Str_L_char_G_ *)(param_1 + 0xc));
      util__Maybe_struct_util__ClassMember___operator(this_00 + 2,(Str_L_char_G_ *)(param_1 + 0x18));
      this_00 = this_00 + 3;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x24));
  }
  return;
}





//==== 00839d90 SetAll_00839d90 ====


/* public: virtual void  util__Darray_L_structutil__TupleProperty_G___SetAll(struct
   util__TupleProperty const &) */

void 
util__Darray_struct_util__TupleProperty___SetAll
          (Darray_L_struct_util__TupleProperty_G_ *this,TupleProperty *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != (Str_L_char_G_ *)((int)this_00 + *(int *)(this + 8) * 0x1c)) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,&param_1->Name);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,&param_1->Type);
      this_00[2].Data = (char *)param_1->Offset;
      this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
  }
  return;
}





//==== 00839df0 SetSize_00839df0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__LocStr_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__LocStr_____SetSize
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__LocStr_G___G_ *this,int *param_1
          )

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
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
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Str_L_char_G_ *)(iVar2 + iVar3 * 0x24),
     this_00 != (Str_L_char_G_ *)(iVar2 + *(int *)(this + 8) * 0x24))) {
    do {
      SStack_40.Data = (char *)0x0;
      SStack_40.Capacity = 0;
      SStack_40.Length = 0;
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      SStack_10.Data = (char *)0x0;
      SStack_10.Capacity = 0;
      SStack_10.Length = 0;
      LocStr__LocStr((LocStr *)&SStack_34,&SStack_10,&SStack_1c);
      if (SStack_10.Data != (char *)0x0) {
        port_op_delete(SStack_10.Data);
        SStack_10.Data = (char *)0x0;
      }
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
        SStack_1c.Data = (char *)0x0;
      }
      util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_40);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,&SStack_34);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 2,&SStack_28);
      if (SStack_28.Data != (char *)0x0) {
        port_op_delete(SStack_28.Data);
        SStack_28.Data = (char *)0x0;
      }
      if (SStack_34.Data != (char *)0x0) {
        port_op_delete(SStack_34.Data);
        SStack_34.Data = (char *)0x0;
      }
      if (SStack_40.Data != (char *)0x0) {
        port_op_delete(SStack_40.Data);
      }
      this_00 = this_00 + 3;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x24));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00839f90 SetSize_00839f90 ====


/* private: void  util__Darray_L_structutil__TupleProperty_G___SetSize(int const &) */

void 
util__Darray_struct_util__TupleProperty___SetSize
          (Darray_L_struct_util__TupleProperty_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  undefined4 uStack_8;
  
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
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Str_L_char_G_ *)(iVar2 + iVar3 * 0x1c),
     this_00 != (Str_L_char_G_ *)(iVar2 + *(int *)(this + 8) * 0x1c))) {
    do {
      SStack_14.Capacity = 0;
      SStack_14.Length = 0;
      uStack_8 = 0;
      SStack_20.Data = (char *)0x0;
      SStack_20.Capacity = 0;
      SStack_20.Length = 0;
      SStack_14.Data = (char *)0x0;
      util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_20);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,&SStack_14);
      this_00[2].Data = (char *)0x0;
      this_00 = (Str_L_char_G_ *)&this_00[2].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x1c));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0083a080 glCheckErrorInternal ====


/* void __cdecl glCheckErrorInternal(char const *,int) */

void __cdecl glCheckErrorInternal(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  iVar2 = glGetError();
  if (iVar2 != 0) {
    SStack_10.Data = (char *)0x0;
    SStack_10.Capacity = 0;
    SStack_10.Length = 0;
    if (iVar2 == 0x502) {
      util__Str_char___Str_char(&SStack_1c,"GL_INVALID_OPERATION");
      util__Str_char___operator__o8(&SStack_10,&SStack_1c);
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
      }
    }
    else if (iVar2 == 0x500) {
      util__Str_char___Str_char(&SStack_1c,"GL_INVALID_ENUM");
      util__Str_char___operator__o8(&SStack_10,&SStack_1c);
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
      }
    }
    else {
      if (iVar2 == 0x501) {
        util__Str_char___Str_char(&SStack_1c,"GL_INVALID_VALUE");
        pSVar3 = &SStack_1c;
      }
      else if (iVar2 == 0x505) {
        util__Str_char___Str_char(&SStack_1c,"GL_OUT_OF_MEMORY");
        pSVar3 = &SStack_1c;
      }
      else if (iVar2 == 0x506) {
        util__Str_char___Str_char(&SStack_1c,"GL_INVALID_FRAMEBUFFER_OPERATION");
        pSVar3 = &SStack_1c;
      }
      else {
        pSVar3 = util__Printf(&SStack_1c,(wchar_t*)("Unknown Error %u"),iVar2);
      }
      util__Str_char___operator__o8(&SStack_10,pSVar3);
      util__Str_char____Str_char(&SStack_1c);
    }
    pcVar1 = SStack_10.Data;
    pcVar4 = "";
    if (0 < SStack_10.Capacity) {
      pcVar4 = SStack_10.Data;
    }
    pSVar3 = util__Printf(&SStack_1c,(wchar_t*)("OpenGL Error at %s(%d): (%s)."),param_1,param_2,pcVar4);
    if (pSVar3->Capacity < 1) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pSVar3->Data;
    }
    util__LogEnsure("\\mac\\home\\documents\\code\\engine\\graphics\\opengltools.cpp",0x18,
                    "!HasGLError",pcVar4);
    if (SStack_1c.Data != (char *)0x0) {
      port_op_delete(SStack_1c.Data);
    }
    if (pcVar1 != (char *)0x0) {
      port_op_delete(pcVar1);
    }
  }
  return;
}





//==== 0083a200 glCheckFramebufferError ====


/* bool __cdecl glCheckFramebufferError(void) */

bool __cdecl glCheckFramebufferError(void)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  Str_L_char_G_ *pSVar5;
  char *pcVar6;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  undefined1 uStack_5;
  
  iVar3 = (*___glewCheckFramebufferStatus)(0x8d40);
  SStack_14.Length = 0;
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  if (iVar3 == 0x8cd5) {
    return true;
  }
  if (iVar3 == 0x8219) {
    util__Str_char___Str_char(&SStack_20,"GL_FRAMEBUFFER_UNDEFINED");
    util__Str_char___operator__o8(&SStack_14,&SStack_20);
    if (SStack_20.Data != (char *)0x0) {
      port_op_delete(SStack_20.Data);
    }
  }
  else if (iVar3 == 0x8cd6) {
    util__Str_char___Str_char(&SStack_20,"GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT");
    util__Str_char___operator__o8(&SStack_14,&SStack_20);
    if (SStack_20.Data != (char *)0x0) {
      port_op_delete(SStack_20.Data);
    }
  }
  else if (iVar3 == 0x8cd7) {
    util__Str_char___Str_char(&SStack_20,"GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT");
    util__Str_char___operator__o8(&SStack_14,&SStack_20);
    if (SStack_20.Data != (char *)0x0) {
      port_op_delete(SStack_20.Data);
    }
  }
  else {
    if (iVar3 == 0x8cdb) {
      util__Str_char___Str_char(&SStack_20,"GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER");
      pSVar5 = &SStack_20;
    }
    else if (iVar3 == 0x8cdc) {
      util__Str_char___Str_char(&SStack_20,"GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER");
      pSVar5 = &SStack_20;
    }
    else if (iVar3 == 0x8cdd) {
      util__Str_char___Str_char(&SStack_20,"GL_FRAMEBUFFER_UNSUPPORTED");
      pSVar5 = &SStack_20;
    }
    else if (iVar3 == 0x8d56) {
      util__Str_char___Str_char(&SStack_20,"GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE");
      pSVar5 = &SStack_20;
    }
    else {
      pSVar5 = util__Printf(&SStack_20,(wchar_t*)("Unknown Error %u"),iVar3);
    }
    util__Str_char___operator__o8(&SStack_14,pSVar5);
    util__Str_char____Str_char(&SStack_20);
  }
  pcVar1 = SStack_14.Data;
  pcVar6 = "";
  if (0 < SStack_14.Capacity) {
    pcVar6 = SStack_14.Data;
  }
  uVar4 = (undefined4)(uintptr_t) glewGetErrorString(iVar3);
  pSVar5 = util__Printf(&SStack_20,(wchar_t*)("FBO Initialization Error: (%s) %s\n"),pcVar6,uVar4);
  util__Log(pSVar5);
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  uStack_5 = 0;
  uVar2 = 0;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    uVar2 = uStack_5;
  }
  return (bool)uVar2;
}





//==== 0083a3e0 glColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl glColor(struct util__Color) */

void __cdecl glColor(Color param_1)

{
  undefined8 stack0xfffffffc;
  Vec4_L_float_G_ local_28;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Color__ToRGBA(&param_1,&local_28);
  _DAT_0098960c = local_28.X;
  _DAT_00989610 = local_28.Y;
  _DAT_00989614 = local_28.Z;
  _DAT_00989618 = local_28.W;
  local_18 = DAT_0095f4c0 * local_28.X;
  fStack_14 = DAT_0095f4c0 * local_28.Y;
  fStack_10 = DAT_0095f4c0 * local_28.Z;
  fStack_c = DAT_0095f4c4 * local_28.W;
  glColor4fv(&local_18);
  param_1._pad_0x0_0 = (int)&vftable_5;
  if (param_1._pad_0x4_1 != 0) {
    port_op_delete((void *)param_1._pad_0x4_1);
  }
  return;
}

//==== 0083a4c0 glColor_0083a4c0 ====

/* void __cdecl glColor(enum util__SampleColor__Preset,float) */

void __cdecl glColor__o3(Preset param_1,float param_2)

{
  undefined8 stack0xffffffbc;
  Color CVar1;
  Color *this;
  Color *__return_storage_ptr__;
  undefined1 in_stack_ffffffbc [24];
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  Color local_24;
  
  __return_storage_ptr__ = (Color *)&stack0xffffffbc;
  this = (Color *)util__Color__Color(&local_24,param_1,1.0);
  util__Color__operator__o6(this,__return_storage_ptr__,param_2);
  CVar1.Value = in_stack_ffffffd4;
  CVar1._pad_0x0_0 = (*(uint32_t*)&(in_stack_ffffffbc));
  CVar1._pad_0x4_1 = (*(uint32_t*)((char*)&(in_stack_ffffffbc)+4));
  CVar1._pad_0x8_2 = (*(uint32_t*)((char*)&(in_stack_ffffffbc)+8));
  CVar1._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_ffffffbc) + 12));
  CVar1.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_ffffffbc) + 16));
  CVar1.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_ffffffbc) + 20));
  CVar1.Alpha = in_stack_ffffffd8;
  glColor(CVar1);
  local_24._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_24._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_24._pad_0x4_1);
  }
  return;
}

//==== 0083a520 glColorLuminance ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl glColorLuminance(struct util__Vec3_L_float_G_,float) */

void __cdecl glColorLuminance(Vec3_L_float_G_ param_1,float param_2)

{
  undefined8 stack0xfffffffc;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  _DAT_0098960c = param_1.X;
  _DAT_00989610 = param_1.Y;
  _DAT_00989614 = param_1.Z;
  _DAT_00989618 = param_2;
  fStack_18 = DAT_0095f4c0 * param_1.X;
  fStack_14 = DAT_0095f4c0 * param_1.Y;
  fStack_10 = DAT_0095f4c0 * param_1.Z;
  fStack_c = DAT_0095f4c4 * param_2;
  glColor4fv(&fStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083a5c0 glColorAlpha ====

/* void __cdecl glColorAlpha(enum util__SampleColor__Preset,float,float) */

void __cdecl glColorAlpha(Preset param_1,float param_2,float param_3)

{
  undefined8 stack0xffffffbc;
  Color CVar1;
  Color *this;
  Color *__return_storage_ptr__;
  undefined1 in_stack_ffffffbc [24];
  float in_stack_ffffffd4;
  float in_stack_ffffffd8;
  Color local_24;
  
  __return_storage_ptr__ = (Color *)&stack0xffffffbc;
  this = (Color *)util__Color__Color(&local_24,param_1,param_2);
  util__Color__operator__o6(this,__return_storage_ptr__,param_3);
  CVar1.Value = in_stack_ffffffd4;
  CVar1._pad_0x0_0 = (*(uint32_t*)&(in_stack_ffffffbc));
  CVar1._pad_0x4_1 = (*(uint32_t*)((char*)&(in_stack_ffffffbc)+4));
  CVar1._pad_0x8_2 = (*(uint32_t*)((char*)&(in_stack_ffffffbc)+8));
  CVar1._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_ffffffbc) + 12));
  CVar1.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_ffffffbc) + 16));
  CVar1.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_ffffffbc) + 20));
  CVar1.Alpha = in_stack_ffffffd8;
  glColor(CVar1);
  local_24._pad_0x0_0 = (int)&vftable_5;
  if ((void *)local_24._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)local_24._pad_0x4_1);
  }
  return;
}

//==== 0083a620 glColorVec ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl glColorVec(struct util__Vec3_L_float_G_) */

void __cdecl glColorVec(Vec3_L_float_G_ param_1)

{
  undefined8 stack0xfffffffc;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  _DAT_0098960c = param_1.X;
  _DAT_00989610 = param_1.Y;
  _DAT_00989614 = param_1.Z;
  _DAT_00989618 = 0x3f800000;
  fStack_18 = DAT_0095f4c0 * param_1.X;
  fStack_14 = DAT_0095f4c0 * param_1.Y;
  fStack_10 = DAT_0095f4c0 * param_1.Z;
  fStack_c = DAT_0095f4c4 * 1.0;
  glColor4fv(&fStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083a6b0 glScaleAlpha ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl glScaleAlpha(float) */

void __cdecl glScaleAlpha(float)

{
  undefined8 stack0xfffffffc;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  DAT_0095f4c4 = param_1;
  fStack_18 = _DAT_0098960c * DAT_0095f4c0;
  fStack_14 = _DAT_00989610 * DAT_0095f4c0;
  fStack_10 = _DAT_00989614 * DAT_0095f4c0;
  fStack_c = _DAT_00989618 * param_1;
  glColor4fv(&fStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083a720 glScaleColor ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl glScaleColor(float) */

void __cdecl glScaleColor(float)

{
  undefined8 stack0xfffffffc;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  DAT_0095f4c0 = param_1;
  fStack_18 = _DAT_0098960c * param_1;
  fStack_14 = _DAT_00989610 * param_1;
  fStack_10 = _DAT_00989614 * param_1;
  fStack_c = _DAT_00989618 * DAT_0095f4c4;
  glColor4fv(&fStack_18);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083a990 CubeMap ====

/* public: __thiscall CubeMap__CubeMap(void) */

Type__CubeMap * __thiscall CubeMap__CubeMap(Type__CubeMap *this)

{
  GraphicsResourceInterface__GraphicsResourceInterface((GraphicsResourceInterface *)this);
  ((struct CubeMap *)(uintptr_t)(this))->_pad_0x0_0 = (int)&vftable_432;
  (((struct CubeMap *)(uintptr_t)(this))->TextureSize).X = 0;
  (((struct CubeMap *)(uintptr_t)(this))->TextureSize).Y = 0;
  ((struct CubeMap *)(uintptr_t)(this))->Texture = 0xffffffff;
  ((struct CubeMap *)(uintptr_t)(this))->IsTextureMipmapped = false;
  this[1]._pad_0x0_0 = 0;
  this[1].TextureSize.X = 0;
  this[1].TextureSize.Y = 0;
  this[1].Texture = 0;
  *(undefined4 *)&this[1].IsTextureMipmapped = 0;
  this[2]._pad_0x0_0 = 0;
  *(undefined1 *)&this[2].TextureSize.X = 0;
  *(undefined1 *)&this[2].TextureSize.Y = 0;
  this[2].Texture = 0;
  return this;
}

//==== 0083aa00 CustomTexture ====

/* public: __thiscall CustomTexture__CustomTexture(void) */

CustomTexture * __thiscall CustomTexture__CustomTexture(CustomTexture *this)

{
  bool bVar1;
  
  GraphicsResourceInterface__GraphicsResourceInterface((GraphicsResourceInterface *)this);
  this->_pad_0x0_0 = (int)&vftable_141;
  (this->TextureSize).X = 0;
  (this->TextureSize).Y = 0;
  this->Texture = 0xffffffff;
  this->Type = Type__TwoDimensional;
  this->IsTextureMipmapped = false;
  this[1]._pad_0x0_0 = 0;
  this[1].TextureSize.X = 0;
  this[1].TextureSize.Y = 0;
  this[1].Texture = 0;
  this[1].Type = Type__TwoDimensional;
  *(undefined4 *)&this[1].IsTextureMipmapped = 0;
  *(undefined1 *)&this[2]._pad_0x0_0 = 0;
  *(undefined1 *)&this[2].TextureSize.X = 0;
  this[2].TextureSize.Y = 0;
  bVar1 = GraphicsResourceInterface__IsGraphicsResourceInGlobalListing
                    ((GraphicsResourceInterface *)this);
  if (!bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x109,
                    "GraphicsResourceInterface__IsGraphicsResourceInGlobalListing(this)",(char *)0x0
                   );
    DebugBreak();
  }
  return this;
}

//==== 0083aaa0 TemporaryFramebuffer ====


/* public:  TemporaryFramebuffer__TemporaryFramebuffer(unsigned int,struct
   TextureInterface *) */

TemporaryFramebuffer * 
TemporaryFramebuffer__TemporaryFramebuffer
          (TemporaryFramebuffer *this,uint param_1,TextureInterface *param_2)

{
  this->FrameBufferObject = param_1;
  this->Target = param_2;
  return this;
}





//==== 0083aac0 operator___0083aac0 ====


/* public: unsigned char const &  util__Matrix2_L_unsignedchar_G___op_subscript(struct
   util__Vec2_L_int_G_ const &)const  */

uchar * __thiscall
util__Matrix2_unsigned_char___operator(Matrix2_L_unsigned_char_G_ *this,Vec3_L_int_G_* param_1)

{
  int iVar1;
  int iVar2;
  
  if (this->Data == (uchar *)0x0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x53,
              "IsValid()",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->Size).X;
  iVar2 = param_1->Y * iVar1 + param_1->X;
  if ((iVar2 < 0) || ((this->Size).Y * iVar1 <= iVar2)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x55,
              "Index >= 0 && Index < GetTotalSize()",(char *)0x0);
    DebugBreak();
  }
  return this->Data + iVar2;
}





//==== 0083ae30 Bind ====


/* public: void __thiscall TemporaryFramebuffer__Bind(void) */

void __thiscall TemporaryFramebuffer__Bind(TemporaryFramebuffer *this)

{
  (*___glewBindFramebuffer)(0x8d40,this->FrameBufferObject);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0xee);
  return;
}





//==== 0083ae50 BuildTexture ====


/* void __cdecl BuildTexture(struct TextureInitOptions const &,class util__Maybe_L_int_G_,class
   util__Maybe_L_structutil__Vec2_L_int_G__G_,enum TextureType__Type,void *) */

void __cdecl
BuildTexture(void *param_1,undefined4 param_2,char param_3,Maybe_L_util__Vec2_L_int_G___G_ param_4,
            undefined4 param_5,void *param_6)

{
  undefined8 stack0x00000020;
  int iVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (param_4.IsValidData == param_3) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x4e,
                    "Size1D.IsValid() ^ Size2D.IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((param_3 != '\0') && (param_5 != 1)) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x4f,
                    "Size1D ? int == TextureType__OneDimensional : true",(char *)0x0);
    DebugBreak();
  }
  puVar2 = &param_5;
  puVar3 = (undefined1 *)&param_2;
  puVar4 = (undefined1 *)(&stack0x00000020);
  puVar5 = (undefined1 *)&param_4;
  FUN_0083ab30(0);
  iVar1 = glGetError(param_1,puVar2,puVar3,puVar4,puVar5);
  if (iVar1 != 0) {
    FUN_0083ab30(1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0xb5);
  }
  return;
}





//==== 0083af00 CheckSize_0083af00 ====


/* private: bool  util__Darray_L_structTemporaryFramebuffer_G___CheckSize(int) */

bool 
util__Darray_struct_TemporaryFramebuffer___CheckSize
          (Darray_L_struct_TemporaryFramebuffer_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar4;
  bVar2 = !bVar9;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar7 = *(uint *)(this + 0xc);
  if ((int)uVar4 <= (int)uVar7) {
    return bVar2 && bVar9;
  }
  if (uVar7 == 0) {
    *(uint *)(this + 0xc) = uVar4;
    uVar7 = uVar4;
  }
  if ((int)uVar7 < (int)uVar4) {
    do {
      uVar7 = uVar7 * 2;
    } while ((int)uVar7 < (int)uVar4);
    *(uint *)(this + 0xc) = uVar7;
  }
  if (0x3fffffff < (int)uVar7) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar7 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar7 * 8 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar7 * 8));
  puVar5 = puStack_c;
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
  }
  puVar3 = puStack_c;
  puVar5 = *(undefined4 **)(this + 4);
  if (puVar5 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar6 = puVar5;
    puVar8 = puStack_c;
    if (puVar5 != puVar5 + param_1 * 2) {
      do {
        if (puVar8 == puStack_c + iVar1 * 2) break;
        *puVar8 = *puVar5;
        puVar6 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        puVar8[1] = *puVar6;
        puVar6 = *(undefined4 **)(this + 4);
        puVar8 = puVar8 + 2;
      } while (puVar5 != puVar6 + param_1 * 2);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puVar3;
  return bStack_5;
}





//==== 0083b050 Cleanup_0083b050 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall TemporaryFramebuffer__Cleanup(void) */

void __thiscall TemporaryFramebuffer__Cleanup(TemporaryFramebuffer *this)

{
  undefined8 stack0xfffffffc;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar1;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *this_00;
  int iVar7;
  uint local_2c;
  undefined4 local_28;
  uint *local_24;
  uint local_20;
  int local_1c;
  TextureStack local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  cVar3 = (**(code **)(*(int *)(this)->Target + 0x1c))();
  if (cVar3 != '\0') {
    glHint(0x8192,0x1102);
    local_18.StoredChannels._pad_0x0_0 = (int)&vftable_11;
    local_18.StoredChannels.Data = (int *)0x0;
    local_18.StoredChannels.Size = 0;
    local_18.StoredChannels.Capacity = 1;
    local_18.StoredChannels.Data = (int *)(uintptr_t)(port_op_new(4));
    iVar7 = local_18.StoredChannels.Size;
    if (local_18.StoredChannels.Data == (int *)0x0) {
      local_18.StoredChannels.Data = (int *)0x0;
    }
    else {
      *local_18.StoredChannels.Data = 0;
    }
    iVar5 = 0;
    if (0 < local_18.StoredChannels.Capacity) {
      do {
        local_18.StoredChannels.Data[iVar5] = 0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_18.StoredChannels.Capacity);
    }
    *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)((uint *)(local_18.StoredChannels.Size + 1));
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&local_18,(int *)&local_24);
    bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)&local_18,iVar7);
    if (bVar4) {
      local_18.StoredChannels.Data[local_18.StoredChannels.Size + -1] = 0;
    }
    Graphics__TextureStack__PeekState((int)&local_20);
    if (this->Target == (TextureInterface *)0x0) {
      local_2c = 0xffffffff;
      local_28 = 0;
    }
    else {
      uVar6 = (**(code **)(*(int *)(this)->Target + 0x18))();
      local_2c = (**(code **)(*(int *)(this)->Target + 0x14))();
      local_28 = uVar6;
    }
    *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(&local_2c);
    this_00 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(Graphics__TextureStack__GetStack(0));
    iVar5 = this_00->Size;
    iVar7 = iVar5 + 1;
    this_00->Size = iVar7;
    this_00->EndData = this_00->Data + iVar7;
    bVar4 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(this_00,iVar5);
    if (bVar4) {
      ptVar1 = this_00->Data;
      iVar7 = this_00->Size;
      ptVar1[iVar7 + -1].Value1 = *local_24;
      ptVar1[iVar7 + -1].Value2 = local_24[1];
    }
    tVar2.Value2 = local_1c;
    tVar2.Value1 = local_20;
    Graphics__TextureStack__AlterState(&local_18,tVar2.Value1,tVar2.Value2,0);
    iVar7 = (**(code **)(*(int *)(this)->Target + 0x18))();
    if (iVar7 == 2) {
      iVar7 = 0x8513;
    }
    else {
      iVar7 = (iVar7 != 1) + 0xde0;
    }
    (*___glewGenerateMipmap)(iVar7);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0xf8);
    Graphics__TextureStack___TextureStack(&local_18);
  }
  (*___glewDeleteFramebuffers)(1,this);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0xfb);
  (*___glewBindFramebuffer)(0x8d40,0);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0xfd);
  return;
}

//==== 0083b240 Destroy_0083b240 ====


/* public: virtual void __thiscall CubeMap__Destroy(void) */

void __thiscall CubeMap__Destroy(Type__CubeMap *this)

{
  if (((struct CubeMap *)(uintptr_t)(this))->Texture != 0xffffffff) {
    glDeleteTextures(1,&((struct CubeMap *)(uintptr_t)(this))->Texture);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x203);
  }
  (((struct CubeMap *)(uintptr_t)(this))->TextureSize).X = 0;
  (((struct CubeMap *)(uintptr_t)(this))->TextureSize).Y = 0;
  ((struct CubeMap *)(uintptr_t)(this))->Texture = 0xffffffff;
  return;
}





//==== 0083b280 Destroy_0083b280 ====


/* public: virtual void __thiscall CustomTexture__Destroy(void) */

void __thiscall CustomTexture__Destroy(CustomTexture *this)

{
  if (this->Texture != 0xffffffff) {
    glDeleteTextures(1,&this->Texture);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x111);
  }
  (this->TextureSize).X = 0;
  (this->TextureSize).Y = 0;
  this->Texture = 0xffffffff;
  return;
}





//==== 0083b2c0 ForceSizeToPowerOfTwo ====


/* struct util__Vec2_L_int_G_ __cdecl ForceSizeToPowerOfTwo(struct util__Vec2_L_int_G_) */

Vec2_L_int_G_ __cdecl ForceSizeToPowerOfTwo(Vec3_L_int_G_ param_1)

{
  undefined8 stack0x0000000c;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  Vec2_L_int_G_ VVar8;
  double dVar9;
  int in_stack_0000000c;
  double dStack_c;
  
  iVar1 = param_1.X;
  iVar6 = 0;
  iVar4 = param_1.Y;
  iVar3 = in_stack_0000000c;
  do {
    if ((iVar6 == 0) || (iVar5 = iVar3, iVar6 != 1)) {
      iVar5 = iVar4;
    }
    if (0 < iVar5) {
      if ((iVar6 != 0) && (iVar6 == 1)) {
        iVar4 = iVar3;
      }
      fVar7 = (float10)log2((double)iVar4);
      dStack_c = (double)fVar7;
      dVar9 = util__Ceil(&dStack_c);
      iVar3 = (int)dVar9;
      iVar5 = (iVar3 >> 0x1f & 0xfffffffeU) + 2;
      iVar4 = -iVar3;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      if (iVar4 == 0) {
        iVar3 = 1;
      }
      else {
        iVar3 = iVar5;
        if ((iVar4 != 1) && (iVar4 = iVar4 + -1, 0 < iVar4)) {
          do {
            iVar3 = iVar3 * iVar5;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      if ((iVar6 == 0) || (piVar2 = (int *)&stack0x0000000c, iVar6 != 1)) {
        piVar2 = &param_1.Y;
      }
      *piVar2 = iVar3;
      iVar4 = param_1.Y;
      iVar3 = in_stack_0000000c;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  *(int *)iVar1 = iVar4;
  *(int *)(iVar1 + 4) = iVar3;
  VVar8.Y = iVar3;
  VVar8.X = iVar1;
  return VVar8;
}





//==== 0083b390 GetBlackTexture ====


/* public: static struct CustomTexture const & __cdecl CustomTexture__GetBlackTexture(void) */

CustomTexture * __cdecl CustomTexture__GetBlackTexture(void)

{
  int iVar1;
  TextureInitOptions TStack_48;
  Matrix3_L_unsigned_char_G_ MStack_20;
  Vec3_L_int_G_ VStack_10;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00989734) {
    _Init_thread_header(&DAT_00989734);
    if (DAT_00989734 == -1) {
      CustomTexture__CustomTexture((CustomTexture *)&DAT_009896f8);
      atexit(FUN_009100b0);
      _Init_thread_footer(&DAT_00989734);
    }
  }
  if (DAT_00989704 == -1) {
    VStack_10.X = 4;
    VStack_10.Y = 1;
    VStack_10.Z = 1;
    util__Matrix3_unsigned_char___Matrix3_unsigned_char(&MStack_20,&VStack_10);
    iVar1 = 0;
    do {
      if (MStack_20.Data == (uchar *)0x0) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",
                        0x355,"IsValid()",(char *)0x0);
        DebugBreak();
      }
      if ((iVar1 < 0) || (MStack_20.Size.Y * MStack_20.Size.X * MStack_20.Size.Z <= iVar1)) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",
                        0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
        DebugBreak();
      }
      MStack_20.Data[iVar1] = '\0';
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    if (MStack_20.Data == (uchar *)0x0) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",
                      0x355,"IsValid()",(char *)0x0);
      DebugBreak();
    }
    if (MStack_20.Size.Y * MStack_20.Size.X * MStack_20.Size.Z < 4) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",
                      0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
      DebugBreak();
    }
    MStack_20.Data[3] = 0xff;
    TStack_48.NearestFiltering = false;
    TStack_48.Mipmaps.Data.MinLevel = 0;
    TStack_48.Mipmaps.Data.MaxLevel.Data = 0;
    TStack_48.TextureS = Repeat;
    TStack_48.TextureT = Repeat;
    TStack_48.TextureR = Repeat;
    TStack_48.Channels = RGBA;
    TStack_48.Mipmaps.Data.MaxLevel.IsValidData = false;
    TStack_48.Mipmaps.IsValidData = false;
    TStack_48.Quality = EightBit;
    Initialize((CustomTexture *)&DAT_009896f8,&MStack_20,&TStack_48);
    port_op_delete(MStack_20.Data);
  }
  return (CustomTexture *)&DAT_009896f8;
}





//==== 0083b530 GetBytesPerPixel ====


/* int __cdecl GetBytesPerPixel(struct TextureInitOptions const &) */

int __cdecl GetBytesPerPixel(TextureInitOptions *param_1)

{
  int TVar1;
  int iVar2;
  
  if (param_1->Quality == ThirtyTwoBit) {
    iVar2 = 4;
  }
  else {
    iVar2 = 2 - (uint)(param_1->Quality != SixteenBit);
  }
  TVar1 = param_1->Channels;
  if (TVar1 == RGBA) {
    return iVar2 * 4;
  }
  if (TVar1 == RGB) {
    return iVar2 * 3;
  }
  if (TVar1 == RG) {
    return iVar2 * 2;
  }
  return iVar2 * (uint)(TVar1 == R);
}





//==== 0083b590 GetDefaultTexture ====


/* public: static struct CustomTexture const & __cdecl CustomTexture__GetDefaultTexture(void) */

CustomTexture * __cdecl CustomTexture__GetDefaultTexture(void)

{
  undefined8 stack0xfffffffc;
  CustomTexture *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Vec3_L_int_G_ VStack_68;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  Matrix3_L_unsigned_char_G_ MStack_44;
  int iStack_34;
  TextureInitOptions TStack_30;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_009896f4) {
    _Init_thread_header(&DAT_009896f4);
    if (DAT_009896f4 == -1) {
      CustomTexture__CustomTexture((CustomTexture *)&DAT_009896b8);
      atexit(FUN_00910110);
      _Init_thread_footer(&DAT_009896f4);
    }
  }
  if (DAT_009896c4 != -1) {
    pCVar1 = (CustomTexture *)&DAT_009896b8;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return pCVar1;
  }
  VStack_68.X = 4;
  VStack_68.Y = 2;
  VStack_68.Z = 2;
  util__Matrix3_unsigned_char___Matrix3_unsigned_char(&MStack_44,&VStack_68);
  iStack_5c = MStack_44.Size.X * MStack_44.Size.Y;
  iStack_34 = 0;
  iStack_54 = 3;
  do {
    iStack_4c = 0;
    iStack_50 = iStack_54;
    do {
      iStack_48 = 3;
      iStack_58 = (~(iStack_4c + iStack_34) & 1U) * 0x80 + 0x7f;
      iVar4 = iStack_50 + -3;
      iVar2 = MStack_44.Size.X;
      iVar3 = MStack_44.Size.Y;
      do {
        if (MStack_44.Data == (uchar *)0x0) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                          ,0x355,"IsValid()",(char *)0x0);
          DebugBreak();
          iVar2 = MStack_44.Size.X;
          iVar3 = MStack_44.Size.Y;
        }
        if ((iVar4 < 0) || (MStack_44.Size.Z * iVar2 * iVar3 <= iVar4)) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl"
                          ,0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
          DebugBreak();
          iVar2 = MStack_44.Size.X;
          iVar3 = MStack_44.Size.Y;
        }
        MStack_44.Data[iVar4] = (uchar)iStack_58;
        iVar4 = iVar4 + 1;
        iStack_48 = iStack_48 + -1;
      } while (iStack_48 != 0);
      if (MStack_44.Data == (uchar *)0x0) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",
                        0x355,"IsValid()",(char *)0x0);
        DebugBreak();
      }
      iVar2 = iStack_50;
      if (iStack_50 < 0) {
LAB_0083b6dc:
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",
                        0x357,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
        DebugBreak();
      }
      else if (MStack_44.Size.Z * MStack_44.Size.X * MStack_44.Size.Y <= iStack_50)
      goto LAB_0083b6dc;
      iStack_4c = iStack_4c + 1;
      MStack_44.Data[iVar2] = 0xff;
      iStack_50 = iVar2 + MStack_44.Size.X;
    } while (iStack_4c < 2);
    iStack_34 = iStack_34 + 1;
    iStack_54 = iStack_54 + iStack_5c;
    if (1 < iStack_34) {
      TStack_30.Mipmaps.Data.MinLevel = 0;
      TStack_30.Mipmaps.Data.MaxLevel.Data = 0;
      TStack_30.Mipmaps.Data.MaxLevel.IsValidData = false;
      TStack_30.Mipmaps.IsValidData = false;
      TStack_30.TextureS = Repeat;
      TStack_30.TextureT = Repeat;
      TStack_30.TextureR = Repeat;
      TStack_30.Channels = RGBA;
      TStack_30.Quality = EightBit;
      TStack_30.NearestFiltering = true;
      Initialize((CustomTexture *)&DAT_009896b8,&MStack_44,&TStack_30);
      if (MStack_44.Data != (uchar *)0x0) {
        port_op_delete(MStack_44.Data);
      }
      pCVar1 = (CustomTexture *)&DAT_009896b8;
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return pCVar1;
    }
  } while( true );
}





//==== 0083b7e0 GetResourceIDs ====


/* public: virtual class util__Darray_L_structResourceID_G_ __thiscall
   CustomTexture__GetResourceIDs(void)const  */

ResourceID * __thiscall CustomTexture__GetResourceIDs(CustomTexture *this)

{
  ResourceID *in_stack_00000004;
  
  util__Darray_struct_ResourceID___SingleItem(in_stack_00000004);
}





//==== 0083b810 GetResourceIDs_0083b810 ====


/* public: virtual class util__Darray_L_structResourceID_G_ __thiscall
   GraphicsResourceInterface__GetResourceIDs(void)const  */

void __thiscall GraphicsResourceInterface__GetResourceIDs(GraphicsResourceInterface *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_109);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 0083b840 GetSize ====


/* public: struct util__Vec2_L_int_G_ __thiscall CustomTexture__GetSize(void)const  */

Vec2_L_int_G_ __thiscall CustomTexture__GetSize(CustomTexture *this)

{
  int iVar1;
  int iVar2;
  Vec2_L_int_G_ VVar3;
  int *in_stack_00000004;
  
  iVar1 = (this->TextureSize).X;
  iVar2 = (this->TextureSize).Y;
  *in_stack_00000004 = iVar1;
  in_stack_00000004[1] = iVar2;
  VVar3.Y = iVar1;
  VVar3.X = (int)in_stack_00000004;
}





//==== 0083b860 GetTextureTargetFromType ====


/* unsigned int __cdecl GetTextureTargetFromType(enum TextureType__Type) */

uint __cdecl GetTextureTargetFromType(int)

{
  if (param_1 == TextureType__CubeMap) {
    return 0x8513;
  }
  return (param_1 != Type__OneDimensional) + 0xde0;
}





//==== 0083b890 Initialize1D ====


/* public: bool  CustomTexture__Initialize1D(struct util__Matrix2_L_unsignedchar_G_ const
   &,struct TextureInitOptions const &) */

bool 
CustomTexture__Initialize1D
          (CustomTexture *this,Matrix2_L_unsigned_char_G_ *param_1,TextureInitOptions *param_2)

{
  uchar *puVar1;
  Vec2_L_int_G_ VStack_c;
  
  if (this->Texture != 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x134,
                    "!IsInitialized()",(char *)0x0);
    DebugBreak();
  }
  VStack_c.Y = 0;
  (this->TextureSize).X = (param_1->Size).Y;
  (this->TextureSize).Y = 0;
  VStack_c.X = 0;
  puVar1 = util__Matrix2_unsigned_char___operator(param_1,(Vec3_L_int_G_*)((Vec3_L_int_G_*)(&VStack_c)));
  MakeTexture1D(this,puVar1,param_2);
  return true;
}





//==== 0083b900 Initialize_0083b900 ====


/* public: bool  CustomTexture__Initialize(struct util__Matrix2_L_unsignedchar_G_ const
   &,struct TextureInitOptions const &) */

bool 
CustomTexture__Initialize
          (CustomTexture *this,Matrix2_L_unsigned_char_G_ *param_1,TextureInitOptions *param_2)

{
  int iVar1;
  uchar *puVar2;
  Vec2_L_int_G_ VStack_c;
  
  if (this->Texture != 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x128,
                    "!IsInitialized()",(char *)0x0);
    DebugBreak();
  }
  iVar1 = GetBytesPerPixel(param_2);
  if (iVar1 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x129,
                    "GetBytesPerPixel(Options) == 1",(char *)0x0);
    DebugBreak();
  }
  VStack_c.X = 0;
  VStack_c.Y = 0;
  (this->TextureSize).X = (param_1->Size).X;
  (this->TextureSize).Y = (param_1->Size).Y;
  puVar2 = util__Matrix2_unsigned_char___operator(param_1,(Vec3_L_int_G_*)((Vec3_L_int_G_*)(&VStack_c)));
  MakeTexture2D(this,puVar2,param_2);
  return true;
}





//==== 0083b9a0 Initialize_0083b9a0 ====


/* public: bool  CustomTexture__Initialize(struct util__Matrix3_L_unsignedchar_G_ const
   &,struct TextureInitOptions const &) */

bool 
CustomTexture__Initialize__o2
          (CustomTexture *this,Matrix3_L_unsigned_char_G_ *param_1,TextureInitOptions *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iStack_10;
  int iStack_c;
  
  if (this->Texture != 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x11c,
                    "!IsInitialized()",(char *)0x0);
    DebugBreak();
  }
  (*(uint32_t*)&(uVar1)) = (param_1->Size).X;
  (*(uint32_t*)((char*)&(uVar1)+4)) = (param_1->Size).Y;
  iVar3 = GetBytesPerPixel(param_2);
  iStack_10 = (int)uVar1;
  if (iVar3 != iStack_10) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x11d,
                    "GetBytesPerPixel(Options) == InData.GetDimensions().X",(char *)0x0);
    DebugBreak();
  }
  (*(uint32_t*)&(uVar2)) = (param_1->Size).X;
  (*(uint32_t*)((char*)&(uVar2)+4)) = (param_1->Size).Y;
  iVar3 = (param_1->Size).Z;
  iStack_c = (int)((ulonglong)uVar2 >> 0x20);
  (this->TextureSize).X = iStack_c;
  (this->TextureSize).Y = iVar3;
  if (param_1->Data == (uchar *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x34c
                    ,"IsValid()",(char *)0x0);
    DebugBreak();
  }
  if ((param_1->Size).Z * (param_1->Size).Y * (param_1->Size).X < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x34e
                    ,"Index >= 0 && Index < GetTotalSize()",(char *)0x0);
    DebugBreak();
  }
  MakeTexture2D(this,param_1->Data,param_2);
  return true;
}





//==== 0083ba90 Initialize_0083ba90 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool  CustomTexture__Initialize(class util__Str_L_char_G_ const &,char const
   *,struct TextureInitOptions const &) */

bool 
CustomTexture__Initialize__o3
          (CustomTexture *this,Str_L_char_G_ *param_1,char *param_2,TextureInitOptions *param_3)

{
  undefined8 stack0xfffffffc;
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->Texture != 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x195,
                    "!IsInitialized()",(char *)0x0);
    DebugBreak();
  }
  SStack_14.Length = 0;
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (param_1->Capacity < 1) {
    pcVar5 = "";
  }
  else {
    pcVar5 = param_1->Data;
  }
  pcVar4 = "_";
  if (pcVar3 == param_2 + 1) {
    pcVar4 = "";
  }
  util__Printf(&SStack_14,(wchar_t*)("%s%s%s"),pcVar5,pcVar4,param_2);
  pSVar7 = &SStack_14;
  uVar6 = 0;
  GetGameManager();
  uVar2 = FUN_0083a790(uVar6,pSVar7,this,param_3);
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 0083bb60 InitializeAndGetTemporaryFramebuffer ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Maybe_L_structTemporaryFramebuffer_G_ __thiscall
   CustomTexture__InitializeAndGetTemporaryFramebuffer(struct util__Vec2_L_int_G_,struct
   TextureInitOptions const &) */

Maybe_L_TemporaryFramebuffer_G_ * __thiscall
CustomTexture__InitializeAndGetTemporaryFramebuffer
          (CustomTexture *this,Maybe_L_TemporaryFramebuffer_G_ *__return_storage_ptr__,Vec3_L_int_G_ param_1
          ,TextureInitOptions *param_2)

{
  undefined8 stack0xfffffffc;
  int TVar1;
  int TVar2;
  int TVar3;
  int TVar4;
  int iVar5;
  undefined3 uVar6;
  int iVar7;
  undefined4 uVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ local_1c;
  TextureInitOptions *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_10 = param_2;
  if (this->Texture != 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x1ab,
                    "!IsInitialized()",(char *)0x0);
    DebugBreak();
  }
  (this->TextureSize).X = param_1.X;
  (this->TextureSize).Y = param_1.Y;
  uVar6 = *(undefined3 *)&local_10->TextureS;
  TVar1 = local_10->TextureS;
  TVar2 = local_10->TextureT;
  TVar3 = local_10->TextureR;
  this->IsTextureMipmapped = local_10->NearestFiltering;
  (undefined3)((*(undefined3 *)(void *)((char *)(uintptr_t)(this) + 0x15)) = uVar6);
  this[1]._pad_0x0_0 = TVar1;
  this[1].TextureSize.X = TVar2;
  this[1].TextureSize.Y = TVar3;
  TVar4 = (local_10->Mipmaps).Data.MinLevel;
  iVar7 = (local_10->Mipmaps).Data.MaxLevel.Data;
  iVar5 = (int)((local_10->Mipmaps).Data.MaxLevel.IsValidData);
  this[1].Texture = local_10->Channels;
  this[1].Type = TVar4;
  *(int *)&this[1].IsTextureMipmapped = iVar7;
  this[2]._pad_0x0_0 = iVar5;
  *(int *)&(this[2].TextureSize) = (local_10->Mipmaps).IsValidData;
  MakeTexture2D(this,(uchar *)0x0,local_10);
  (*___glewGenFramebuffers)(1,&local_c);
  (*___glewBindFramebuffer)(0x8d40,local_c);
  (*___glewFramebufferTexture2D)(0x8d40,0x8ce0,0xde1,this->Texture,0);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x1b6);
  iVar7 = (*___glewCheckFramebufferStatus)(0x8d40);
  if (iVar7 != 0x8cd5) {
    uVar8 = (undefined4)(uintptr_t) glewGetErrorString(iVar7);
    pSVar9 = util__Printf(&local_1c,(wchar_t*)("FBO Initialization Error: %s\n"),uVar8);
    util__Log(pSVar9);
    if (local_1c.Data != (char *)0x0) {
      port_op_delete(local_1c.Data);
    }
    this->Texture = 0xffffffff;
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x1c2,"0",
                    (char *)0x0);
    DebugBreak();
    (__return_storage_ptr__->Data).FrameBufferObject = 0xffffffff;
    (__return_storage_ptr__->Data).Target = (TextureInterface *)0x0;
    __return_storage_ptr__->IsValidData = false;
    return __return_storage_ptr__;
  }
  Graphics__LoadCustomMode(this->TextureSize,false);
  (__return_storage_ptr__->Data).Target = (TextureInterface *)this;
  (__return_storage_ptr__->Data).FrameBufferObject = local_c;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 0083bce0 InitializeAndGetTemporaryFramebuffers ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class util__Darray_L_structTemporaryFramebuffer_G_ __thiscall
   CubeMap__InitializeAndGetTemporaryFramebuffers(struct util__Vec2_L_int_G_,struct TextureInitOptions
   const &) */

Darray_L_TemporaryFramebuffer_G_ * __thiscall
CubeMap__InitializeAndGetTemporaryFramebuffers
          (Type__CubeMap *this,Darray_L_TemporaryFramebuffer_G_ *__return_storage_ptr__,Vec3_L_int_G_ param_1,
          TextureInitOptions *param_2)

{
  undefined8 stack0xfffffffc;
  int TVar1;
  int TVar2;
  int TVar3;
  int iVar4;
  Maybe_L_util__Vec2_L_int_G___G_ MVar5;
  undefined3 uVar6;
  bool bVar7;
  TemporaryFramebuffer *pTVar8;
  TemporaryFramebuffer *pTVar9;
  int iVar10;
  Str_L_char_G_ *pSVar11;
  int iVar12;
  uint *puVar13;
  uint in_stack_ffffff9c;
  undefined4 uVar14;
  Str_L_char_G_ local_38;
  uint *local_2c;
  TextureInitOptions *local_28;
  int local_24;
  Type__CubeMap *local_20;
  TextureInitOptions *local_1c;
  TextureStack local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puVar13 = (uint *)(&((struct ArmorTextureHandler *)(uintptr_t)(this))->Texture);
  local_1c = param_2;
  local_2c = puVar13;
  local_20 = this;
  if ((*(undefined4 *)&((struct ArmorTextureHandler *)(uintptr_t)(this))->Texture) != 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x20b,
                    "!IsInitialized()",(char *)0x0);
    DebugBreak();
  }
  (((struct CubeMap *)(uintptr_t)(this))->TextureSize).X = param_1.X;
  (((struct CubeMap *)(uintptr_t)(this))->TextureSize).Y = param_1.Y;
  uVar6 = *(undefined3 *)&local_1c->TextureS;
  TVar1 = local_1c->TextureS;
  TVar2 = local_1c->TextureT;
  TVar3 = local_1c->TextureR;
  ((struct CubeMap *)(uintptr_t)(this))->IsTextureMipmapped = local_1c->NearestFiltering;
  *(undefined3 *)(void *)((char *)this + 0x11) = uVar6;
  this[1]._pad_0x0_0 = TVar1;
  this[1].TextureSize.X = TVar2;
  this[1].TextureSize.Y = TVar3;
  iVar12 = (local_1c->Mipmaps).Data.MinLevel;
  iVar10 = (local_1c->Mipmaps).Data.MaxLevel.Data;
  iVar4 = (int)((local_1c->Mipmaps).Data.MaxLevel.IsValidData);
  this[1].Texture = local_1c->Channels;
  *(int *)&this[1].IsTextureMipmapped = iVar12;
  this[2]._pad_0x0_0 = iVar10;
  this[2].TextureSize.X = iVar4;
  (undefined8)(this[2].TextureSize.Y = (undefined8)((local_1c->Mipmaps).IsValidData));
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x210);
  glGenTextures(1,puVar13);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x212);
  Graphics__TextureStack__TextureStack(&local_18,*puVar13,TextureType__CubeMap,0);
  uVar14 = 0x83bd99;
  ResolveTextureInitOptions(local_1c,TextureType__CubeMap);
  (*(uint24_t*)((char*)&(MVar5)+9)) = (int3)((uint)uVar14 >> 8);
  MVar5.IsValidData = true;
  MVar5.Data = ((struct CubeMap *)(uintptr_t)(this))->TextureSize;
  BuildTexture(local_1c,(undefined4)(({ __typeof__(((ulonglong)(in_stack_ffffff9c & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(in_stack_ffffff9c & 0xffffff00) << 0x20); *(undefined4 *)&_t_; })),(char)((*(char *)&(MVar5))),(Maybe_L_util__Vec2_L_int_G___G_){0},
               TextureType__CubeMap,(void *)0x0);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x216);
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (TemporaryFramebuffer *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_445;
  __return_storage_ptr__->Data = (TemporaryFramebuffer *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 6;
  pTVar8 = (TemporaryFramebuffer *)(uintptr_t)(port_op_new(0x30));
  if (pTVar8 == (TemporaryFramebuffer *)0x0) {
    pTVar8 = (TemporaryFramebuffer *)0x0;
  }
  else {
    iVar12 = 6;
    pTVar9 = pTVar8;
    do {
      pTVar9->FrameBufferObject = 0xffffffff;
      pTVar9->Target = (TextureInterface *)0x0;
      iVar12 = iVar12 + -1;
      pTVar9 = pTVar9 + 1;
    } while (iVar12 != 0);
  }
  iVar12 = 0;
  __return_storage_ptr__->Data = pTVar8;
  if (0 < __return_storage_ptr__->Capacity) {
    do {
      pTVar8 = __return_storage_ptr__->Data;
      pTVar8[iVar12].FrameBufferObject = 0xffffffff;
      pTVar8[iVar12].Target = (TextureInterface *)0x0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < __return_storage_ptr__->Capacity);
  }
  iVar12 = 0;
  do {
    (*___glewGenFramebuffers)(1,&local_1c);
    (*___glewBindFramebuffer)(0x8d40,local_1c);
    (*___glewFramebufferTexture2D)(0x8d40,0x8ce0,iVar12 + 0x8515,*puVar13,0);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x220);
    iVar10 = (*___glewCheckFramebufferStatus)(0x8d40);
    if (iVar10 != 0x8cd5) {
      uVar14 = (undefined4)(uintptr_t) glewGetErrorString(iVar10);
      pSVar11 = util__Printf(&local_38,(wchar_t*)("FBO Initialization Error: %s\n"),uVar14);
      util__Log(pSVar11);
      if (local_38.Data != (char *)0x0) {
        port_op_delete(local_38.Data);
        local_38.Data = (char *)0x0;
      }
      *puVar13 = 0xffffffff;
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x22c,"0",
                      (char *)0x0);
      DebugBreak();
    }
    iVar10 = __return_storage_ptr__->Size;
    local_28 = local_1c;
    *(uint32_t *)&local_24 = iVar10 + 1;
    util__Darray_L_TemporaryFramebuffer_G___SetSize(__return_storage_ptr__,&local_24);
    bVar7 = util__Darray_L_TemporaryFramebuffer_G___CheckSize(__return_storage_ptr__,iVar10);
    if (bVar7) {
      pTVar8 = __return_storage_ptr__->Data;
      iVar10 = __return_storage_ptr__->Size;
      pTVar8[iVar10 + -1].FrameBufferObject = (uint)local_28;
      pTVar8[iVar10 + -1].Target = (TextureInterface *)local_20;
    }
    iVar12 = iVar12 + 1;
    puVar13 = local_2c;
  } while (iVar12 < 6);
  Graphics__LoadCustomMode(((struct CubeMap *)(uintptr_t)(local_20))->TextureSize,false);
  Graphics__TextureStack___TextureStack(&local_18);
  return __return_storage_ptr__;
}

//==== 0083bf90 IsInitialized ====


/* public: bool __thiscall CustomTexture__IsInitialized(void)const  */

bool __thiscall CustomTexture__IsInitialized(CustomTexture *this)

{
  return this->Texture != 0xffffffff;
}





//==== 0083bfa0 IsMipmapped ====


/* public: virtual bool __thiscall CubeMap__IsMipmapped(void)const  */

bool __thiscall CubeMap__IsMipmapped(Type__CubeMap *this)

{
  return (bool)(char)this[2].TextureSize.Y;
}





//==== 0083bfb0 MakeTexture1D ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __thiscall CustomTexture__MakeTexture1D(unsigned char const *,struct
   TextureInitOptions const &) */

void __thiscall
CustomTexture__MakeTexture1D(CustomTexture *this,uchar *param_1,TextureInitOptions *param_2)

{
  undefined8 stack0xfffffffc;
  int TVar1;
  int TVar2;
  int TVar3;
  int TVar4;
  Maybe_L_int_G_ MVar5;
  undefined1 auVar6 [12];
  undefined3 uVar7;
  TextureInitOptions *pTVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  double dVar15;
  undefined4 in_stack_ffffff94;
  uint uVar16;
  double local_38;
  uchar *local_30;
  int local_2c;
  int local_28;
  TextureInitOptions *local_24;
  TextureStack local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(param_2);
  if ((param_2->Mipmaps).IsValidData != false) {
    local_28 = (this->TextureSize).X;
    iVar13 = 0;
    iVar11 = (this->TextureSize).Y;
    local_2c = (this->TextureSize).Y;
    iVar10 = (this->TextureSize).X;
    local_10 = iVar10;
    local_c = iVar11;
    do {
      if ((iVar13 == 0) || (iVar12 = iVar11, iVar13 != 1)) {
        iVar12 = iVar10;
      }
      if (0 < iVar12) {
        if ((iVar13 != 0) && (iVar13 == 1)) {
          iVar10 = iVar11;
        }
        fVar14 = (float10)log2((double)iVar10);
        local_38 = (double)fVar14;
        dVar15 = util__Ceil(&local_38);
        iVar10 = (int)dVar15;
        iVar12 = (iVar10 >> 0x1f & 0xfffffffeU) + 2;
        iVar11 = -iVar10;
        if (-1 < iVar10) {
          iVar11 = iVar10;
        }
        if (iVar11 == 0) {
          iVar10 = 1;
        }
        else {
          iVar10 = iVar12;
          if ((iVar11 != 1) && (iVar11 = iVar11 + -1, 0 < iVar11)) {
            do {
              iVar10 = iVar10 * iVar12;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
        if ((iVar13 == 0) || (piVar9 = &local_c, iVar13 != 1)) {
          piVar9 = &local_10;
        }
        *piVar9 = iVar10;
        iVar10 = local_10;
        iVar11 = local_c;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 2);
    if ((iVar10 != local_28) || (iVar11 != local_2c)) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x186,
                      "!Options.Mipmaps || IsSizeAPowerOfTwo(TextureSize)",(char *)0x0);
      DebugBreak();
    }
  }
  pTVar8 = local_24;
  this->Type = Type__OneDimensional;
  uVar7 = *(undefined3 *)&local_24->TextureS;
  TVar1 = local_24->TextureS;
  TVar2 = local_24->TextureT;
  TVar3 = local_24->TextureR;
  this->IsTextureMipmapped = local_24->NearestFiltering;
  (undefined3)((*(undefined3 *)(void *)((char *)(uintptr_t)(this) + 0x15)) = uVar7);
  this[1]._pad_0x0_0 = TVar1;
  this[1].TextureSize.X = TVar2;
  this[1].TextureSize.Y = TVar3;
  TVar4 = (local_24->Mipmaps).Data.MinLevel;
  iVar11 = (local_24->Mipmaps).Data.MaxLevel.Data;
  iVar10 = (int)((local_24->Mipmaps).Data.MaxLevel.IsValidData);
  this[1].Texture = local_24->Channels;
  this[1].Type = TVar4;
  *(int *)&this[1].IsTextureMipmapped = iVar11;
  this[2]._pad_0x0_0 = iVar10;
  *(int *)&(this[2].TextureSize) = (local_24->Mipmaps).IsValidData;
  glGenTextures(1,&this->Texture);
  Graphics__TextureStack__TextureStack(&local_20,this->Texture,this->Type,0);
  uVar16 = 0x83c110;
  ResolveTextureInitOptions(pTVar8,Type__OneDimensional);
  (*(uint24_t*)((char*)&(MVar5)+5)) = (int3)((uint)in_stack_ffffff94 >> 8);
  MVar5.IsValidData = true;
  MVar5.Data = (this->TextureSize).X;
  (*(uint64_t*)((char*)&(auVar6)+4)) = 0;
  (*(uint32_t*)&(auVar6)) = uVar16 & 0xffffff00;
  BuildTexture(pTVar8,(undefined4)((*(undefined4 *)&(MVar5))),MVar5.IsValidData,(*(Maybe_L_util__Vec2_L_int_G___G_ *)cde_shl16((auVar6), 0x40)),this->Type,(void *)(uintptr_t)(local_30));
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",399);
  Graphics__TextureStack___TextureStack(&local_20);
  return;
}

//==== 0083c170 MakeTexture2D ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: void __thiscall CustomTexture__MakeTexture2D(unsigned char const *,struct
   TextureInitOptions const &) */

void __thiscall
CustomTexture__MakeTexture2D(CustomTexture *this,uchar *param_1,TextureInitOptions *param_2)

{
  undefined8 stack0xfffffffc;
  int TVar1;
  int TVar2;
  int TVar3;
  int TVar4;
  Maybe_L_util__Vec2_L_int_G___G_ MVar5;
  undefined3 uVar6;
  TextureInitOptions *pTVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  double dVar14;
  uint in_stack_ffffff94;
  undefined4 uVar15;
  double local_38;
  uchar *local_30;
  int local_2c;
  int local_28;
  TextureInitOptions *local_24;
  TextureStack local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_30 = param_1;
  *(uint32_t *)&local_24 = (uint32_t)(uintptr_t)(param_2);
  if ((param_2->Mipmaps).IsValidData != false) {
    local_28 = (this->TextureSize).X;
    iVar12 = 0;
    iVar10 = (this->TextureSize).Y;
    local_2c = (this->TextureSize).Y;
    iVar9 = (this->TextureSize).X;
    local_10 = iVar9;
    local_c = iVar10;
    do {
      if ((iVar12 == 0) || (iVar11 = iVar10, iVar12 != 1)) {
        iVar11 = iVar9;
      }
      if (0 < iVar11) {
        if ((iVar12 != 0) && (iVar12 == 1)) {
          iVar9 = iVar10;
        }
        fVar13 = (float10)log2((double)iVar9);
        local_38 = (double)fVar13;
        dVar14 = util__Ceil(&local_38);
        iVar9 = (int)dVar14;
        iVar11 = (iVar9 >> 0x1f & 0xfffffffeU) + 2;
        iVar10 = -iVar9;
        if (-1 < iVar9) {
          iVar10 = iVar9;
        }
        if (iVar10 == 0) {
          iVar9 = 1;
        }
        else {
          iVar9 = iVar11;
          if ((iVar10 != 1) && (iVar10 = iVar10 + -1, 0 < iVar10)) {
            do {
              iVar9 = iVar9 * iVar11;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
        }
        if ((iVar12 == 0) || (piVar8 = &local_c, iVar12 != 1)) {
          piVar8 = &local_10;
        }
        *piVar8 = iVar9;
        iVar9 = local_10;
        iVar10 = local_c;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 2);
    if ((iVar9 != local_28) || (iVar10 != local_2c)) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x176,
                      "!Options.Mipmaps || IsSizeAPowerOfTwo(TextureSize)",(char *)0x0);
      DebugBreak();
    }
  }
  pTVar7 = local_24;
  this->Type = Type__TwoDimensional;
  uVar6 = *(undefined3 *)&local_24->TextureS;
  TVar1 = local_24->TextureS;
  TVar2 = local_24->TextureT;
  TVar3 = local_24->TextureR;
  this->IsTextureMipmapped = local_24->NearestFiltering;
  (undefined3)((*(undefined3 *)(void *)((char *)(uintptr_t)(this) + 0x15)) = uVar6);
  this[1]._pad_0x0_0 = TVar1;
  this[1].TextureSize.X = TVar2;
  this[1].TextureSize.Y = TVar3;
  TVar4 = (local_24->Mipmaps).Data.MinLevel;
  iVar10 = (local_24->Mipmaps).Data.MaxLevel.Data;
  iVar9 = (int)((local_24->Mipmaps).Data.MaxLevel.IsValidData);
  this[1].Texture = local_24->Channels;
  this[1].Type = TVar4;
  *(int *)&this[1].IsTextureMipmapped = iVar10;
  this[2]._pad_0x0_0 = iVar9;
  *(int *)&(this[2].TextureSize) = (local_24->Mipmaps).IsValidData;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x17b);
  glGenTextures(1,&this->Texture);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x17d);
  Graphics__TextureStack__TextureStack(&local_20,this->Texture,this->Type,0);
  uVar15 = 0x83c2f4;
  ResolveTextureInitOptions(pTVar7,Type__TwoDimensional);
  (*(uint24_t*)((char*)&(MVar5)+9)) = (int3)((uint)uVar15 >> 8);
  MVar5.IsValidData = true;
  MVar5.Data = this->TextureSize;
  BuildTexture(pTVar7,(undefined4)(({ __typeof__(((ulonglong)(in_stack_ffffff94 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(in_stack_ffffff94 & 0xffffff00) << 0x20); *(undefined4 *)&_t_; })),(char)((*(char *)&(MVar5))),(Maybe_L_util__Vec2_L_int_G___G_){0},
               this->Type,local_30);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x181);
  Graphics__TextureStack___TextureStack(&local_20);
  return;
}

//==== 0083c360 RenderCroppedQuad ====


/* void __cdecl RenderCroppedQuad(struct util__Vec2_L_int_G_,struct util__Vec2_L_int_G_,bool) */

void __cdecl RenderCroppedQuad(Vec3_L_int_G_ param_1,Vec3_L_int_G_ param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_14;
  float fStack_10;
  DrawStack DStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  fVar5 = (float)param_1.Y;
  fVar2 = (float)param_2.Y;
  fVar3 = (float)param_2.X;
  fVar4 = (float)param_1.X;
  if (fVar2 / fVar3 <= fVar5 / fVar4) {
    fVar1 = fVar3 / fVar4;
  }
  else {
    fVar1 = fVar2 / fVar5;
  }
  fVar4 = (fVar3 / (fVar4 * fVar1)) * 0.5;
  fStack_10 = (fVar2 / (fVar5 * fVar1)) * 0.5;
  fVar2 = 0.5 - fVar4;
  fVar4 = fVar4 + 0.5;
  fVar3 = 0.5 - fStack_10;
  fStack_10 = fStack_10 + 0.5;
  fStack_14 = fVar3;
  if (!param_3) {
    fStack_14 = fStack_10;
    fStack_10 = fVar3;
  }
  Graphics__DrawStack__DrawStack(&DStack_9,7);
  Graphics__TexCoord((double)fVar2,(double)fStack_10);
  Graphics__Vertex(0.0,0.0);
  Graphics__TexCoord((double)fVar4,(double)fStack_10);
  Graphics__Vertex((double)param_2.X,0.0);
  Graphics__TexCoord((double)fVar4,(double)fStack_14);
  Graphics__Vertex((double)param_2.X,(double)param_2.Y);
  Graphics__TexCoord((double)fVar2,(double)fStack_14);
  Graphics__Vertex(0.0,(double)param_2.Y);
  Graphics__DrawStack___DrawStack(&DStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083c520 RenderFullscreenQuad ====


/* void __cdecl RenderFullscreenQuad(struct util__Vec2_L_int_G_) */

void __cdecl RenderFullscreenQuad(Vec3_L_int_G_ param_1)

{
  undefined8 stack0xfffffffc;
  DepthStack DStack_a;
  DrawStack DStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Graphics__DepthStack__DepthStack(&DStack_a,DepthMode__Disabled);

  Graphics__DrawStack__DrawStack(&DStack_9,5);
  Graphics__TexCoord(0.0,0.0);
  Graphics__Vertex(0.0,0.0);
  Graphics__TexCoord(1.0,0.0);
  Graphics__Vertex((double)param_1.X,0.0);
  Graphics__TexCoord(0.0,1.0);
  Graphics__Vertex(0.0,(double)param_1.Y);
  Graphics__TexCoord(1.0,1.0);
  Graphics__Vertex((double)param_1.X,(double)param_1.Y);
  Graphics__DrawStack___DrawStack(&DStack_9);
  DepthStack__dtor(&DStack_a);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083c620 Resize_0083c620 ====


/* public: bool  util__Darray_L_unsignedchar_G___Resize(int) */

bool __thiscall util__Darray_unsigned_char___Resize(Darray_L_unsigned_char_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  uchar *puVar9;
  uint uVar10;
  uint uVar11;
  uchar *puVar12;
  bool bVar13;
  uchar *puStack_c;
  bool bStack_5;
  
  iVar1 = this->Size;
  Darray_L_bool_G___SetSize((Darray_L_bool_G_ *)this,&param_1);
  uVar4 = this->Size;
  bStack_5 = true;
  bVar13 = -1 < (int)uVar4;
  bVar2 = !bVar13;
  if (bVar2) {
    puStack_c = (uchar *)0x0;
    Darray_L_bool_G___SetSize((Darray_L_bool_G_ *)this,(int *)&puStack_c);
    uVar4 = this->Size;
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    puStack_c = (uchar *)0x3fffffff;
    Darray_L_bool_G___SetSize((Darray_L_bool_G_ *)this,(int *)&puStack_c);
    uVar4 = this->Size;
    bStack_5 = false;
  }
  uVar11 = this->Capacity;
  if ((int)uVar4 <= (int)uVar11) {
    return bVar2 && bVar13;
  }
  if (uVar11 == 0) {
    this->Capacity = uVar4;
    uVar11 = uVar4;
  }
  uVar10 = uVar11;
  if ((int)uVar11 < (int)uVar4) {
    do {
      uVar11 = uVar10 * 2;
      this->Capacity = uVar11;
      uVar4 = this->Size;
      iVar3 = uVar10 * -2;
      uVar10 = uVar11;
    } while (uVar4 != uVar11 && SBORROW4(uVar4,uVar11) == (int)(uVar4 + iVar3) < 0);
  }
  if (0x3fffffff < (int)uVar11) {
    this->Capacity = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  puVar5 = (uchar *)port_op_new(uVar11);
  if (puVar5 == (uchar *)0x0) {
    puVar5 = (uchar *)0x0;
    puStack_c = (uchar *)0x0;
  }
  else {
    puStack_c = puVar5;
    memset(puVar5,0,uVar11);
  }
  puVar7 = this->Data;
  if (puVar7 != (uchar *)0x0) {
    puVar6 = puVar5 + this->Size;
    puVar8 = puVar7;
    puVar12 = puVar5;
    if (puVar7 != puVar7 + iVar1) {
      do {
        puVar5 = puStack_c;
        if (puVar12 == puVar6) break;
        puVar9 = puVar8 + 1;
        *puVar12 = *puVar8;
        puVar7 = this->Data;
        puVar8 = puVar9;
        puVar12 = puVar12 + 1;
      } while (puVar9 != puVar7 + iVar1);
    }
    port_op_delete(puVar7);
    this->Data = (uchar *)0x0;
  }
  this->Data = puVar5;
  return bStack_5;
}





//==== 0083c750 ResolveTextureInitOptions ====


/* void __cdecl ResolveTextureInitOptions(struct TextureInitOptions const &,enum TextureType__Type)
    */

void __cdecl ResolveTextureInitOptions(TextureInitOptions *param_1,int param_2)

{
  int TVar1;
  int iVar2;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcStack_64;
  Str_L_char_G_ SStack_58;
  char *pcStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  char *pcStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char *pcStack_28;
  undefined4 uStack_24;
  int iStack_20;
  char *pcStack_1c;
  
  if (param_2 == TextureType__CubeMap) {
    pcVar6 = (char *)0x8513;
  }
  else {
    pcVar6 = (char *)((param_2 != Type__OneDimensional) + 0xde0);
  }
  pcStack_1c = (char *)0x83c77f;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x28);
  iStack_20 = 0x83c7b3;
  pcStack_1c = pcVar6;
  glTexParameteri();
  iStack_20 = (param_1->NearestFiltering == false) + 0x2600;
  uStack_24 = 0x2800;
  uStack_2c = 0x83c7c8;
  pcStack_28 = pcVar6;
  glTexParameteri();
  TVar1 = param_1->TextureS;
  if (TVar1 == Repeat) {
    uStack_2c = 0x2901;
  }
  else if (TVar1 == ClampToBorder) {
    uStack_2c = 0x812d;
  }
  else {
    uStack_2c = 0x2901;
    if (TVar1 == ClampToEdge) {
      uStack_2c = 0x812f;
    }
  }
  uStack_30 = 0x2802;
  uStack_38 = 0x83c7fb;
  pcStack_34 = pcVar6;
  glTexParameteri();
  TVar1 = param_1->TextureT;
  if (TVar1 == Repeat) {
    uStack_38 = 0x2901;
  }
  else if (TVar1 == ClampToBorder) {
    uStack_38 = 0x812d;
  }
  else {
    uStack_38 = 0x2901;
    if (TVar1 == ClampToEdge) {
      uStack_38 = 0x812f;
    }
  }
  uStack_3c = 0x2803;
  uStack_44 = 0x83c82e;
  pcStack_40 = pcVar6;
  glTexParameteri();
  TVar1 = param_1->TextureT;
  if (TVar1 == Repeat) {
    uStack_44 = 0x2901;
  }
  else if (TVar1 == ClampToBorder) {
    uStack_44 = 0x812d;
  }
  else {
    uStack_44 = 0x2901;
    if (TVar1 == ClampToEdge) {
      uStack_44 = 0x812f;
    }
  }
  uStack_48 = 0x8072;
  SStack_58.Length = 0x83c861;
  pcStack_4c = pcVar6;
  glTexParameteri();
  SStack_58.Length = (int)((param_1->Mipmaps).IsValidData != false);
  SStack_58.Capacity = 0x8191;
  SStack_58.Data = pcVar6;
  glTexParameteri();
  pcStack_64 = (char *)0x83c87e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x33);
  if ((param_1->Mipmaps).IsValidData != false) {
    pcStack_64 = (char *)0xde1;
    glTexParameteri();
    if ((param_1->Mipmaps).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x18,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    if ((param_1->Mipmaps).Data.MaxLevel.IsValidData == false) {
      iVar5 = 1000;
    }
    else {
      iVar5 = (param_1->Mipmaps).Data.MaxLevel.Data;
    }
    glTexParameteri(0xde1,0x813d,iVar5);
    (*___glewGenerateMipmap)(0xde1);
  }
  glGetError();
  iVar5 = SStack_58.Capacity;
  iVar2 = glGetError();
  if (iVar2 != 0) {
    SStack_58.Data = (char *)0x0;
    SStack_58.Capacity = 0;
    SStack_58.Length = 0;
    if (iVar2 == 0x502) {
      util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_64,"GL_INVALID_OPERATION");
      util__Str_char___operator__o8(&SStack_58,(Str_L_char_G_ *)&pcStack_64);
      if (pcStack_64 != (char *)0x0) {
        port_op_delete(pcStack_64);
      }
    }
    else if (iVar2 == 0x500) {
      util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_64,"GL_INVALID_ENUM");
      util__Str_char___operator__o8(&SStack_58,(Str_L_char_G_ *)&pcStack_64);
      if (pcStack_64 != (char *)0x0) {
        port_op_delete(pcStack_64);
      }
    }
    else {
      if (iVar2 == 0x501) {
        util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_64,"GL_INVALID_VALUE");
        pSVar3 = (Str_L_char_G_ *)&pcStack_64;
      }
      else if (iVar2 == 0x505) {
        util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_64,"GL_OUT_OF_MEMORY");
        pSVar3 = (Str_L_char_G_ *)&pcStack_64;
      }
      else if (iVar2 == 0x506) {
        util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_64,"GL_INVALID_FRAMEBUFFER_OPERATION");
        pSVar3 = (Str_L_char_G_ *)&pcStack_64;
      }
      else {
        pSVar3 = util__Printf((Str_L_char_G_ *)&pcStack_64,(wchar_t*)("Unknown Error %u"),iVar2);
      }
      util__Str_char___operator__o8(&SStack_58,pSVar3);
      util__Str_char____Str_char((Str_L_char_G_ *)&pcStack_64);
    }
    pcVar6 = SStack_58.Data;
    pcVar4 = "";
    if (0 < SStack_58.Capacity) {
      pcVar4 = SStack_58.Data;
    }
    pSVar3 = util__Printf((Str_L_char_G_ *)&pcStack_64,(wchar_t*)("OpenGL Error at %s(%d): (%s)."),uStack_44,
                          pcStack_40,pcVar4,iVar5);
    if (pSVar3->Capacity < 1) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pSVar3->Data;
    }
    util__LogEnsure("\\mac\\home\\documents\\code\\engine\\graphics\\opengltools.cpp",0x18,
                    "!HasGLError",pcVar4);
    if (pcStack_64 != (char *)0x0) {
      port_op_delete(pcStack_64);
    }
    if (pcVar6 != (char *)0x0) {
      port_op_delete(pcVar6);
    }
  }
  return;
}





//==== 0083c900 SaveBoundTexture ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* bool __cdecl SaveBoundTexture(class util__Str_L_char_G_ const &,struct util__Vec2_L_int_G_,int,bool) */

bool __cdecl SaveBoundTexture(Str_L_char_G_ *param_1,Vec3_L_int_G_ param_2,int param_3,bool param_4)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Darray_L_unsigned_char_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_18._pad_0x0_0 = (int)&vftable_178;
  local_18.Data = (uchar *)0x0;
  local_18.Size = 0;
  local_18.Capacity = 0;
  util__Darray_unsigned_char___Resize(&local_18,param_2.Y * param_2.X * param_3);
  glGetTexImage(0xde1,0,0x1908,0x1401,local_18.Data);
  uVar5 = param_2.Y & 0x80000001;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
  }
  iVar6 = (uint)(uVar5 != 0) + param_2.Y / 2;
  local_1c = 0;
  if (0 < iVar6) {
    do {
      local_20 = 0;
      if (0 < param_2.X) {
        do {
          iVar9 = (param_2.Y - local_1c) + -1;
          iVar8 = 0;
          do {
            local_28 = (local_1c * param_2.X + local_20) * param_3 + iVar8;
            *(uint32_t *)&local_24 = (iVar9 * param_2.X + local_20) * param_3 + iVar8;
            puVar3 = (undefined1 *)(**(code **)local_18._pad_0x0_0)(&local_24);
            puVar4 = (undefined1 *)(**(code **)local_18._pad_0x0_0)(&local_28);
            iVar2 = local_20;
            iVar8 = iVar8 + 1;
            uVar1 = *puVar4;
            *puVar4 = *puVar3;
            *puVar3 = uVar1;
          } while (iVar8 < 3);
          *(uint32_t *)&local_24 = (local_1c * param_2.X + local_20) * param_3 + 3;
          local_28 = (iVar9 * param_2.X + local_20) * param_3 + 3;
          puVar3 = (undefined1 *)(**(code **)local_18._pad_0x0_0)(&local_28);
          *puVar3 = 0xff;
          puVar3 = (undefined1 *)(**(code **)local_18._pad_0x0_0)(&local_24);
          local_20 = iVar2 + 1;
          *puVar3 = 0xff;
        } while (local_20 < param_2.X);
      }
      local_1c = local_1c + 1;
    } while (local_1c < iVar6);
  }
  if (param_1->Capacity < 1) {
    pcVar7 = "";
  }
  else {
    pcVar7 = param_1->Data;
  }
  iVar6 = _SOIL_save_image(pcVar7,param_4,param_2.X,param_2.Y,param_3,local_18.Data);
  local_18._pad_0x0_0 = (int)&vftable_178;
  if (local_18.Data != (uchar *)0x0) {
    port_op_delete(local_18.Data);
  }
  return iVar6 == 1;
}

//==== 0083cad0 SaveToFile ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __thiscall CustomTexture__SaveToFile(class util__Str_L_char_G_ const &)const  */

bool __thiscall CustomTexture__SaveToFile(CustomTexture *this,Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int iVar2;
  TextureStack local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = false;
  if (this[1].Texture == 0) {
    iVar2 = (**(code **)(this->_pad_0x0_0 + 0x18))();
    if (iVar2 == 0) {
      Graphics__TextureStack__TextureStack(&local_18,this->Texture,this->Type,0);
      bVar1 = SaveBoundTexture(param_1,(*(Vec3_L_int_G_ *)&this->TextureSize),4,true);
      Graphics__TextureStack___TextureStack(&local_18);
    }
  }
  return bVar1;
}

//==== 0083cb40 SetSize_0083cb40 ====


/* private: void  util__Darray_L_structTemporaryFramebuffer_G___SetSize(int const &) */

void 
util__Darray_struct_TemporaryFramebuffer___SetSize
          (Darray_L_struct_TemporaryFramebuffer_G_ *this,int *param_1)

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
     (puVar3 = (undefined4 *)(iVar2 + iVar4 * 8),
     puVar3 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      *puVar3 = 0xffffffff;
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0083cbf0 SetWindowAsRenderTarget ====


/* void __cdecl SetWindowAsRenderTarget(void) */

void __cdecl SetWindowAsRenderTarget(void)

{
  Vec2_L_int_G_ VVar1;
  
  (*___glewBindFramebuffer)(0x8d40,0);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\textures.cpp",0x265);
  (*(struct Quaternion_L_double_G_ *)&(VVar1)).Y = (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).Y;
  (*(struct Quaternion_L_double_G_ *)&(VVar1)).X = (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X;
  Graphics__LoadCustomMode(VVar1,false);
  return;
}





//==== 0083cc30 SingleItem_0083cc30 ====


/* public: static class util__Darray_L_structResourceID_G_ __cdecl util__Darray_struct_ResourceID___SingleItem(struct ResourceID const &) */

ResourceID * __cdecl util__Darray_struct_ResourceID___SingleItem(ResourceID *param_1)

{
  uint uVar1;
  GraphicsResourceType GVar2;
  ResourceID *this;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_stack_00000008;
  
  this = param_1;
  param_1->Type = GraphicsResourceType__TextureResource;
  param_1->ID = 0;
  param_1[1].Type = GraphicsResourceType__TextureResource;
  param_1[1].ID = 0;
  param_1->Type =
       (GraphicsResourceType)&vftable_109;
  param_1->ID = 0;
  param_1[1].Type = GraphicsResourceType__TextureResource;
  param_1[1].ID = 1;
  puVar4 = (undefined4 *)port_op_new(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  iVar5 = 0;
  this->ID = (uint)puVar4;
  if (0 < (int)this[1].ID) {
    do {
      uVar1 = this->ID;
      *(undefined4 *)(uVar1 + iVar5 * 8) = 0;
      *(undefined4 *)(uVar1 + 4 + iVar5 * 8) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)this[1].ID);
  }
  GVar2 = this[1].Type;
  param_1 = (ResourceID *)(GVar2 + GraphicsResourceType__VertexBuffer);
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___SetSize
            ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,(int *)&param_1);
  bVar3 = Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G___CheckSize
                    ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)this,GVar2);
  if (bVar3) {
    GVar2 = this[1].Type;
    uVar1 = this->ID;
    *(undefined4 *)((uVar1 - 8) + GVar2 * 8) = *in_stack_00000008;
    *(undefined4 *)((uVar1 - 4) + GVar2 * 8) = in_stack_00000008[1];
  }
  return this;
}





//==== 0083cf10 CalcSafePerpendicular_float_ ====


/* struct util__Vec3_L_float_G_ __cdecl util__CalcSafePerpendicular_float(struct
   util__Vec3_L_float_G_,struct util__Vec3_L_float_G_) */

Vec3_L_float_G_ * __cdecl
util__CalcSafePerpendicular_float
          (Vec3_L_float_G_ *__return_storage_ptr__,Vec3_L_float_G_ param_1,Vec3_L_float_G_ param_2)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  Vec3_L_float_G_ *pVVar4;
  Vec3_L_float_G_ VStack_20;
  float fStack_14;
  Vec3_L_float_G_ VStack_10;
  
  if ((((NAN(param_1.X)) || (NAN(param_1.Y))) || (NAN(param_1.Z))) ||
     (((NAN(param_2.X) || (NAN(param_2.Y))) || (NAN(param_2.Z))))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\advancedgeometry.inl",0x62,
              "!IsNan(A_Norm) && !IsNan(B_Norm)",(char *)0x0);
    DebugBreak();
  }
  if (NAN(param_1.X) != (param_1.X == 0.0)) {
    if (((NAN(param_1.Y) != (param_1.Y == 0.0)) && (NAN(param_1.Z) != (param_1.Z == 0.0))) &&
       ((NAN(param_2.X) != (param_2.X == 0.0) &&
        ((NAN(param_2.Y) != (param_2.Y == 0.0) && (NAN(param_2.Z) != (param_2.Z == 0.0))))))) {
      __return_storage_ptr__->X = 1.0;
      __return_storage_ptr__->Y = 0.0;
      __return_storage_ptr__->Z = 0.0;
      return __return_storage_ptr__;
    }
    if ((NAN(param_1.Y) != (param_1.Y == 0.0)) && (NAN(param_1.Z) != (param_1.Z == 0.0))) {
      iVar3 = Vec3_L_float_G___SmallestDim(&param_2);
      if (iVar3 == 0) {
        param_1.X = 1.0;
        param_1.Y = 0.0;
        param_1.Z = 0.0;
      }
      else {
        if (iVar3 == 1) {
          VStack_10.Y = 1.0;
          VStack_10.Z = 0.0;
        }
        else {
          VStack_10.Y = 0.0;
          VStack_10.Z = 1.0;
        }
        param_1.X = 0.0;
        param_1.Y = VStack_10.Y;
        param_1.Z = VStack_10.Z;
      }
      goto LAB_0083d191;
    }
  }
  if (((NAN(param_2.X) == (param_2.X == 0.0)) || (NAN(param_2.Y) == (param_2.Y == 0.0))) ||
     (NAN(param_2.Z) == (param_2.Z == 0.0))) {
    fStack_14 = 1e-08;
    bVar2 = Equals_L_float_G_(&param_1,&param_2,&fStack_14);
    if (!bVar2) {
      VStack_10.X = -param_2.X;
      fStack_14 = 1e-08;
      VStack_10.Y = -param_2.Y;
      VStack_10.Z = -param_2.Z;
      bVar2 = Equals_L_float_G_(&param_1,&VStack_10,&fStack_14);
      if (!bVar2) goto LAB_0083d191;
    }
  }
  VStack_10.Y = (float)Vec3_L_float_G___SmallestDim(&param_1);
  if (VStack_10.Y == 0.0) {
    VStack_10.Z = VStack_10.Y;
    pVVar4 = &VStack_10;
    VStack_10.X = 1.0;
  }
  else {
    VStack_10.X = 0.0;
    if (VStack_10.Y == 1.4013e-45) {
      VStack_10.Y = 1.0;
      VStack_10.Z = 0.0;
    }
    else {
      VStack_10.Y = 0.0;
      VStack_10.Z = 1.0;
    }
    VStack_20.Z = VStack_10.Z;
    pVVar4 = &VStack_20;
    VStack_20.X = (float)(int)((ulonglong)(uint)VStack_10.Y << 0x20);
    VStack_20.Y = (float)(int)(((ulonglong)(uint)VStack_10.Y << 0x20) >> 0x20);
  }
  (*(uint32_t*)&(uVar1)) = pVVar4->X;
  (*(uint32_t*)((char*)&(uVar1)+4)) = pVVar4->Y;
  param_2.Z = pVVar4->Z;
  param_2.X = (float)uVar1;
  param_2.Y = (float)((ulonglong)uVar1 >> 0x20);
LAB_0083d191:
  __return_storage_ptr__->X = param_2.Z * param_1.Y - param_2.Y * param_1.Z;
  __return_storage_ptr__->Y = param_2.X * param_1.Z - param_2.Z * param_1.X;
  __return_storage_ptr__->Z = param_2.Y * param_1.X - param_2.X * param_1.Y;
  return __return_storage_ptr__;
}





//==== 0083d1f0 Equals_float_ ====


/* bool const __cdecl util__Equals_float(float const &,float const &,float const &) */

bool __cdecl util__Equals_float(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  
  pfVar4 = param_2;
  pfVar3 = param_1;
  fVar1 = *param_2;
  fVar2 = *param_1;
  if ((NAN(fVar2) || NAN(fVar1)) != (fVar2 == fVar1)) {
    return true;
  }
  *(float *)&param_1 = (float)(fVar2 - fVar1);
  param_1 = (float *)Abs((float *)&param_1);
  fVar1 = *pfVar3;
  if ((NAN(fVar1) == (fVar1 == 0.0)) && (fVar1 = *pfVar4, NAN(fVar1) == (fVar1 == 0.0))) {
    pfVar4 = (float *)Abs(pfVar4);
    param_2 = (float *)Abs(pfVar3);
    if ((float)(int)(uintptr_t)(param_2) <= (float)(int)(uintptr_t)(pfVar4)) {
      param_2 = pfVar4;
    }
    if ((float)(int)(uintptr_t)(param_2) <= 0.0) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl",0x1e,
                "BestOfType__Greatest > (int)0",(char *)0x0);
      DebugBreak();
    }
    return (float)(int)(uintptr_t)(param_1) / (float)(int)(uintptr_t)(param_2) < *param_3;
  }
  return (float)(int)(uintptr_t)(param_1) < *param_3;
}





//==== 0083d2d0 Equals_float__0083d2d0 ====


/* bool __cdecl util__Equals_float(struct util__Vec3_L_float_G_ const &,struct util__Vec3_L_float_G_ const
   &,float const &) */

bool __cdecl util__Equals_float__o3(Vec3_L_float_G_ *param_1,Vec3_L_float_G_ *param_2,float *param_3)

{
  bool bVar1;
  
  bVar1 = Equals_L_float_G_(&param_1->X,&param_2->X,param_3);
  if (bVar1) {
    bVar1 = Equals_L_float_G_(&param_1->Y,&param_2->Y,param_3);
    if (bVar1) {
      bVar1 = Equals_L_float_G_(&param_1->Z,&param_2->Z,param_3);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}





//==== 0083d4e0 ColorTexVertexBufferObject ====

/* public: __thiscall ColorTexVertexBufferObject__ColorTexVertexBufferObject(void) */

ColorTexVertexBufferObject * __thiscall
ColorTexVertexBufferObject__ColorTexVertexBufferObject(ColorTexVertexBufferObject *this)

{
  GraphicsResourceInterface__GraphicsResourceInterface((GraphicsResourceInterface *)this);
  this->_pad_0x4_1 = -1;
  this->_pad_0x8_2 = -1;
  *(undefined1 *)&this->_pad_0xc_3 = 0;
  util__Matrix4x4_double___ClearToIdentity((Matrix4x4_L_double_G_ *)&this->_pad_0x10_4);
  this->_pad_0x0_0 = (int)&vftable_562;
  (this->VertexData)._padfb0 = (int)&vftable_10;
  (this->VertexData).Data = (ColorTexVertex *)0x0;
  (this->VertexData).Size = 0;
  (this->VertexData).Capacity = 0;
  return this;
}

//==== 0083d540 ColorVertexBufferObject ====

/* public: __thiscall ColorVertexBufferObject__ColorVertexBufferObject(void) */

ColorVertexBufferObject * __thiscall
ColorVertexBufferObject__ColorVertexBufferObject(ColorVertexBufferObject *this)

{
  GraphicsResourceInterface__GraphicsResourceInterface((GraphicsResourceInterface *)this);
  this->_pad_0x4_1 = -1;
  this->_pad_0x8_2 = -1;
  *(undefined1 *)&this->_pad_0xc_3 = 0;
  util__Matrix4x4_double___ClearToIdentity((Matrix4x4_L_double_G_ *)&this->_pad_0x10_4);
  this->_pad_0x0_0 = (int)&vftable_561;
  (this->VertexData)._padfb0 = (int)&vftable_424;
  (this->VertexData).Data = (ColorVertex *)0x0;
  (this->VertexData).Size = 0;
  (this->VertexData).Capacity = 0;
  return this;
}

//==== 0083d5a0 FontVertexBufferObject ====

/* public: __thiscall FontVertexBufferObject__FontVertexBufferObject(void) */

FontVertexBufferObject * __thiscall
FontVertexBufferObject__FontVertexBufferObject(FontVertexBufferObject *this)

{
  GraphicsResourceInterface__GraphicsResourceInterface((GraphicsResourceInterface *)this);
  this->_pad_0x4_1 = -1;
  this->_pad_0x8_2 = -1;
  *(undefined1 *)&this->_pad_0xc_3 = 0;
  util__Matrix4x4_double___ClearToIdentity((Matrix4x4_L_double_G_ *)&this->_pad_0x10_4);
  this->_pad_0x0_0 = (int)&vftable_563;
  (this->VertexData)._padfb0 = (int)&vftable_106;
  (this->VertexData).Data = (FontVertex *)0x0;
  (this->VertexData).Size = 0;
  (this->VertexData).Capacity = 0;
  return this;
}

//==== 0083d600 VertexBufferObject ====

/* public: __thiscall VertexBufferObject__VertexBufferObject(void) */

VertexBufferObject * __thiscall VertexBufferObject__VertexBufferObject(VertexBufferObject *this)

{
  GraphicsResourceInterface__GraphicsResourceInterface((GraphicsResourceInterface *)this);
  this->_pad_0x4_1 = -1;
  this->_pad_0x8_2 = -1;
  *(undefined1 *)&this->_pad_0xc_3 = 0;
  util__Matrix4x4_double___ClearToIdentity((Matrix4x4_L_double_G_ *)&this->_pad_0x10_4);
  this->_pad_0x0_0 = (int)&vftable_560;
  (this->VertexData)._pad_0x0_0 = (int)&vftable_8;
  (this->VertexData).Data = (Vertex *)0x0;
  (this->VertexData).Size = 0;
  (this->VertexData).Capacity = 0;
  return this;
}

//==== 0083d660 VertexBufferObjectInterface ====

/* public: virtual __thiscall VertexBufferObjectInterface___VertexBufferObjectInterface(void) */

void __thiscall
VertexBufferObjectInterface___VertexBufferObjectInterface(VertexBufferObjectInterface *this)

{
  undefined8 stack0xfffffff8;
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = this->Buffer;
  puVar1 = &this->Buffer;
  this->_pad_0x0_0 = (int)&vftable_559;
  if (LastBufferRendered == uVar3) {
    LastBufferRendered = 0xffffffff;
    uVar3 = *puVar1;
  }
  if (uVar3 != 0xffffffff) {
    (*___glewDeleteBuffers)(1,puVar1);
  }
  this->Type = 0xffffffff;
  *puVar1 = 0xffffffff;
  this->_pad_0x0_0 = (int)&vftable_616;
  bVar2 = false;
  piVar4 = (int *)(uintptr_t)(DAT_009608fc);
  iVar5 = DAT_00960900;
  piVar6 = (int *)(uintptr_t)(DAT_009608fc);
  if (DAT_009608fc != DAT_009608fc + DAT_00960900) {
    do {
      if (bVar2) {
        piVar4[-1] = *piVar4;
        iVar5 = DAT_00960900;
        piVar6 = (int *)(uintptr_t)(DAT_009608fc);
      }
      else if ((VertexBufferObjectInterface *)*piVar4 == this) {
        bVar2 = true;
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar6 + iVar5);
    if (bVar2) {
      util__Darray_L_util__Reflectable_P_G___SetSize
                ((Darray_L_util__Reflectable_P_G_ *)&PTR_vftable_009608f8,(int *)&stack0xfffffff8);
    }
  }
  return;
}

//==== 0083ddd0 scalar_deleting_destructor_0083ddd0 ====

/* public: virtual void * __thiscall ColorTexVertexBufferObject:: 0 scalardeletingdestructor(unsigned int) */

void * 
ColorTexVertexBufferObject___scalar_deleting_destructor
          (ColorTexVertexBufferObject *this,uint param_1)

{
  int *piVar1;
  ColorTexVertex *pCVar2;
  uint uVar3;
  
  pCVar2 = (this->VertexData).Data;
  (this->VertexData)._padfb0 = (int)&vftable_10;
  if (pCVar2 != (ColorTexVertex *)0x0) {
    port_op_delete(pCVar2);
  }
  (this->VertexData).Data = (ColorTexVertex *)0x0;
  piVar1 = &this->_pad_0x8_2;
  (this->VertexData)._padfb0 = (int)&vftable;
  uVar3 = *piVar1;
  this->_pad_0x0_0 = (int)&vftable_559;
  if (VertexBufferObjectInterface__LastBufferRendered == uVar3) {
    VertexBufferObjectInterface__LastBufferRendered = 0xffffffff;
    uVar3 = *piVar1;
  }
  if (uVar3 != 0xffffffff) {
    (*___glewDeleteBuffers)(1,piVar1);
  }
  this->_pad_0x4_1 = -1;
  *piVar1 = -1;
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xa0);
  }
  return this;
}

//==== 0083de70 scalar_deleting_destructor_0083de70 ====

/* public: virtual void * __thiscall ColorVertexBufferObject:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
ColorVertexBufferObject___scalar_deleting_destructor(ColorVertexBufferObject *this,uint param_1)

{
  int *piVar1;
  ColorVertex *pCVar2;
  uint uVar3;
  
  pCVar2 = (this->VertexData).Data;
  (this->VertexData)._padfb0 = (int)&vftable_424;
  if (pCVar2 != (ColorVertex *)0x0) {
    port_op_delete(pCVar2);
  }
  (this->VertexData).Data = (ColorVertex *)0x0;
  piVar1 = &this->_pad_0x8_2;
  (this->VertexData)._padfb0 = (int)&vftable;
  uVar3 = *piVar1;
  this->_pad_0x0_0 = (int)&vftable_559;
  if (VertexBufferObjectInterface__LastBufferRendered == uVar3) {
    VertexBufferObjectInterface__LastBufferRendered = 0xffffffff;
    uVar3 = *piVar1;
  }
  if (uVar3 != 0xffffffff) {
    (*___glewDeleteBuffers)(1,piVar1);
  }
  this->_pad_0x4_1 = -1;
  *piVar1 = -1;
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xa0);
  }
  return this;
}

//==== 0083df10 scalar_deleting_destructor_0083df10 ====

/* public: virtual void * __thiscall FontVertexBufferObject:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
FontVertexBufferObject___scalar_deleting_destructor(FontVertexBufferObject *this,uint param_1)

{
  int *piVar1;
  FontVertex *pFVar2;
  uint uVar3;
  
  pFVar2 = (this->VertexData).Data;
  (this->VertexData)._padfb0 = (int)&vftable_106;
  if (pFVar2 != (FontVertex *)0x0) {
    port_op_delete(pFVar2);
  }
  (this->VertexData).Data = (FontVertex *)0x0;
  piVar1 = &this->_pad_0x8_2;
  (this->VertexData)._padfb0 = (int)&vftable;
  uVar3 = *piVar1;
  this->_pad_0x0_0 = (int)&vftable_559;
  if (VertexBufferObjectInterface__LastBufferRendered == uVar3) {
    VertexBufferObjectInterface__LastBufferRendered = 0xffffffff;
    uVar3 = *piVar1;
  }
  if (uVar3 != 0xffffffff) {
    (*___glewDeleteBuffers)(1,piVar1);
  }
  this->_pad_0x4_1 = -1;
  *piVar1 = -1;
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xa0);
  }
  return this;
}

//==== 0083dfd0 scalar_deleting_destructor_0083dfd0 ====

/* public: virtual void * __thiscall VertexBufferObject:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
VertexBufferObject___scalar_deleting_destructor(VertexBufferObject *this,uint param_1)

{
  int *piVar1;
  Vertex *pVVar2;
  uint uVar3;
  
  pVVar2 = (this->VertexData).Data;
  (this->VertexData)._pad_0x0_0 = (int)&vftable_8;
  if (pVVar2 != (Vertex *)0x0) {
    port_op_delete(pVVar2);
  }
  (this->VertexData).Data = (Vertex *)0x0;
  piVar1 = &this->_pad_0x8_2;
  (this->VertexData)._pad_0x0_0 = (int)&vftable;
  uVar3 = *piVar1;
  this->_pad_0x0_0 = (int)&vftable_559;
  if (VertexBufferObjectInterface__LastBufferRendered == uVar3) {
    VertexBufferObjectInterface__LastBufferRendered = 0xffffffff;
    uVar3 = *piVar1;
  }
  if (uVar3 != 0xffffffff) {
    (*___glewDeleteBuffers)(1,piVar1);
  }
  this->_pad_0x4_1 = -1;
  *piVar1 = -1;
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xa0);
  }
  return this;
}

//==== 0083e070 scalar_deleting_destructor_0083e070 ====

/* public: virtual void * __thiscall VertexBufferObjectInterface:: 0 scalardeletingdestructor(unsigned int) */

void * 
VertexBufferObjectInterface___scalar_deleting_destructor
          (VertexBufferObjectInterface *this,uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = this->Buffer;
  puVar1 = &this->Buffer;
  this->_pad_0x0_0 = (int)&vftable_559;
  if (LastBufferRendered == uVar2) {
    LastBufferRendered = 0xffffffff;
    uVar2 = *puVar1;
  }
  if (uVar2 != 0xffffffff) {
    (*___glewDeleteBuffers)(1,puVar1);
  }
  this->Type = 0xffffffff;
  *puVar1 = 0xffffffff;
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x90);
  }
  return this;
}

//==== 0083e0e0 Add_0083e0e0 ====


/* public: bool  util__Darray_L_structVertex_G___Add(struct Vertex const &) */

bool __thiscall util__Darray_struct_Vertex___Add(Darray_L_struct_Vertex_G_ *this,Vertex *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  int iStack_8;
  
  iVar5 = *(int *)(this + 8);
  iStack_8 = iVar5 + 1;
  SetSize(this,&iStack_8);
  bVar4 = CheckSize(this,iVar5);
  if (!bVar4) {
  }
  fVar1 = (param_1->Point).Y;
  fVar2 = (param_1->Point).Z;
  fVar3 = (param_1->TextureCoordinate).X;
  iVar5 = *(int *)(this + 8) * 0x2c + *(int *)(this + 4);
  *(float *)(iVar5 + -0x2c) = (param_1->Point).X;
  *(float *)(iVar5 + -0x28) = fVar1;
  *(float *)(iVar5 + -0x24) = fVar2;
  *(float *)(iVar5 + -0x20) = fVar3;
  fVar1 = (param_1->Mode__Normal).X;
  fVar2 = (param_1->Mode__Normal).Y;
  fVar3 = (param_1->Mode__Normal).Z;
  *(float *)(iVar5 + -0x1c) = (param_1->TextureCoordinate).Y;
  *(float *)(iVar5 + -0x18) = fVar1;
  *(float *)(iVar5 + -0x14) = fVar2;
  *(float *)(iVar5 + -0x10) = fVar3;
  *(undefined8 *)(iVar5 + -0xc) = *(undefined8 *)&param_1->Tangent;
  *(float *)(iVar5 + -4) = (param_1->Tangent).Z;
  return true;
}





//==== 0083e150 Add_0083e150 ====


/* public: void  util__HashMap_L_int_Cclassutil__Darray_L_structIndexedFace_P_G__G___Add(int
   const &,class util__Darray_L_structIndexedFace_P_G_ const &) */

void 
util__HashMap_int_class_util__Darray_struct_IndexedFace______Add
          (HashMap_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *this,int *param_1,
          Darray_L_struct_IndexedFace_P_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *this_00;
  Darray_L_class_Module_P_G_ *pDVar7;
  undefined **ppuStack_30;
  void *pvStack_2c;
  undefined **ppuStack_20;
  void *pvStack_1c;
  Darray_L_struct_IndexedFace_P_G_ *pDStack_10;
  HashMap_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *pHStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDStack_10 = param_2;
  pHStack_c = this;
  if (*(uint *)(this + 4) != 0) {
    uVar5 = *param_1;
    uVar6 = (uVar5 & 0xff) * 0x401;
    uVar6 = ((uVar5 >> 8 & 0xff) + (uVar6 >> 6 ^ uVar6)) * 0x401;
    uVar6 = ((uVar5 >> 0x10 & 0xff) + (uVar6 >> 6 ^ uVar6)) * 0x401;
    uVar5 = ((uVar6 >> 6 ^ uVar6) + (uVar5 >> 0x18)) * 0x401;
    uVar5 = (uVar5 ^ uVar5 >> 6) * 9;
    pHStack_c = (HashMap_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G_ *)0x0;
    this_00 = (Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G_ *)
              ((((uVar5 >> 0xb ^ uVar5) * 0x8001) % *(uint *)(this + 4)) * 0x10 + *(int *)this);
    iVar3 = (**(code **)(*(int *)this_00 + 0xc))();
    if ((int)pHStack_c < iVar3) {
      do {
        piVar4 = (int *)(*(code *)**(undefined4 **)this_00)(&pHStack_c);
        if (*piVar4 == *param_1) {
          pDVar7 = (Darray_L_class_Module_P_G_ *)&pHStack_c;
          iVar3 = (*(code *)**(undefined4 **)this_00)(pDVar7,pDStack_10);
          Darray_L_class_Module_P_G___op_assign((Darray_L_class_Module_P_G_ *)(iVar3 + 4),pDVar7);
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        pHStack_c = pHStack_c + 1;
        iVar3 = (*(code *)(*(undefined4 **)this_00)[3])();
      } while ((int)pHStack_c < iVar3);
    }
    Darray_L_bool_P_G___Darray_L_bool_P_G_((Darray_L_bool_P_G_ *)&ppuStack_20,(Darray_L_bool_P_G_ *)pDStack_10);
    iVar3 = *param_1;
    Darray_L_bool_P_G___Darray_L_bool_P_G_((Darray_L_bool_P_G_ *)&ppuStack_30,(Darray_L_bool_P_G_ *)&ppuStack_20);
    ppuStack_20 = (undefined **)(&vftable_2);
    if (pvStack_1c != (void *)0x0) {
      port_op_delete(pvStack_1c);
    }
    iVar1 = *(int *)(this_00 + 8);
    pvStack_1c = (void *)0x0;
    ppuStack_20 = (undefined **)(&vftable);
    pDStack_10 = (Darray_L_struct_IndexedFace_P_G_ *)(iVar1 + 1);
    Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G___SetSize
              (this_00,(int *)&pDStack_10);
    bVar2 = Darray_L_struct_util__tuple2_L_int_Cclass_util__Darray_L_struct_IndexedFace_P_G___G___G___CheckSize
                      (this_00,iVar1);
    if (bVar2) {
      iVar1 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x14;
      *(int *)(iVar1 + -0x14) = iVar3;
      Darray_L_class_Module_P_G___op_assign
                ((Darray_L_class_Module_P_G_ *)(iVar1 + -0x10),(Darray_L_class_Module_P_G_ *)&ppuStack_30);
    }
    ppuStack_30 = (undefined **)(&vftable_2);
    if (pvStack_2c != (void *)0x0) {
      port_op_delete(pvStack_2c);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083e2f0 AddVertex ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ColorTexVertexBufferObject__AddVertex(struct ColorTexVertex const &) */

void __thiscall
ColorTexVertexBufferObject__AddVertex(ColorTexVertexBufferObject *this,ColorTexVertex *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ColorTexVertex *pCVar4;
  Vec4_L_float_G_ *pVVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ColorTexVertex *pCVar12;
  Vec3_L_double_G_ *pVVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  int *piVar21;
  int iVar22;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar22 = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  dVar8 = (param_1->Point).X;
  dVar9 = (param_1->Point).Y;
  piVar21 = &this->_pad_0x30_12;
  dVar10 = (param_1->Point).Z;
  local_1c = 0.0;
  fStack_18 = 0.0;
  fStack_14 = 0.0;
  fStack_10 = 0.0;
  do {
    piVar1 = piVar21 + -8;
    dVar11 = *(double *)piVar21;
    piVar2 = piVar21 + 8;
    piVar3 = piVar21 + 0x10;
    piVar21 = piVar21 + 2;
    *(double *)(&local_2c + iVar22 * 2) =
         *(double *)piVar1 * dVar8 + *(double *)(&local_2c + iVar22 * 2) + dVar11 * dVar9 +
         *(double *)piVar2 * dVar10 + *(double *)piVar3;
    fVar19 = fStack_18;
    fVar18 = local_1c;
    uVar17 = uStack_20;
    uVar16 = uStack_24;
    uVar15 = uStack_28;
    uVar14 = local_2c;
    iVar22 = iVar22 + 1;
  } while (iVar22 < 4);
  fVar6 = (param_1->TexCoord).X;
  fVar7 = (param_1->TexCoord).Y;
  iVar22 = (this->VertexData).Size;
  local_1c = (param_1->Color).X;
  fStack_18 = (param_1->Color).Y;
  fStack_14 = (param_1->Color).Z;
  fStack_10 = (param_1->Color).W;
  local_c = iVar22 + 1;
  util__Darray_L_ColorTexVertex_G___SetSize(&this->VertexData,&local_c);
  bVar20 = util__Darray_L_ColorTexVertex_G___CheckSize(&this->VertexData,iVar22);
  if (bVar20) {
    iVar22 = (this->VertexData).Size;
    pCVar12 = (this->VertexData).Data;
    pCVar4 = pCVar12 + iVar22 + -1;
    (undefined4)((pCVar4->Point).X = uVar14);
    *(undefined4 *)((int)&(pCVar4->Point).X + 4) = uVar15;
    (undefined4)((pCVar4->Point).Y = uVar16);
    *(undefined4 *)((int)&(pCVar4->Point).Y + 4) = uVar17;
    pVVar13 = &pCVar12[iVar22 + -1].Point;
    *(float *)&pVVar13->Z = fVar18;
    *(float *)((int)&pVVar13->Z + 4) = fVar19;
    *(float *)(&pVVar13->Z + 1) = fVar6;
    ((Vec2_L_float_G_ *)(pVVar13 + 1))->Y = fVar7;
    pVVar5 = &pCVar12[iVar22 + -1].Color;
    pVVar5->X = local_1c;
    pVVar5->Y = fStack_18;
    pVVar5->Z = fStack_14;
    pVVar5->W = fStack_10;
  }
  return;
}

//==== 0083e410 AddVertex_0083e410 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall ColorVertexBufferObject__AddVertex(struct ColorVertex const &) */

void __thiscall
ColorVertexBufferObject__AddVertex(ColorVertexBufferObject *this,ColorVertex *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ColorVertex *pCVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ColorVertex *pCVar9;
  float fVar10;
  float fVar11;
  Vec3_L_double_G_ *pVVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  int *piVar18;
  int iVar19;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar19 = 0;
  local_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  dVar5 = (param_1->Point).X;
  dVar6 = (param_1->Point).Y;
  piVar18 = &this->_pad_0x30_12;
  dVar7 = (param_1->Point).Z;
  local_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  do {
    piVar1 = piVar18 + -8;
    dVar8 = *(double *)piVar18;
    piVar2 = piVar18 + 8;
    piVar3 = piVar18 + 0x10;
    piVar18 = piVar18 + 2;
    *(double *)(&local_2c + iVar19 * 2) =
         *(double *)piVar1 * dVar5 + *(double *)(&local_2c + iVar19 * 2) + dVar6 * dVar8 +
         *(double *)piVar2 * dVar7 + *(double *)piVar3;
    uVar16 = uStack_18;
    uVar15 = local_1c;
    iVar19 = iVar19 + 1;
  } while (iVar19 < 4);
  iVar19 = (this->VertexData).Size;
  fVar10 = (param_1->Color).X;
  fVar11 = (param_1->Color).Y;
  fVar13 = (param_1->Color).Z;
  fVar14 = (param_1->Color).W;
  local_c = iVar19 + 1;
  local_1c = local_2c;
  uStack_18 = uStack_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  util__Darray_L_ColorVertex_G___SetSize(&this->VertexData,&local_c);
  bVar17 = util__Darray_L_ColorVertex_G___CheckSize(&this->VertexData,iVar19);
  if (bVar17) {
    iVar19 = (this->VertexData).Size;
    pCVar9 = (this->VertexData).Data;
    pCVar4 = pCVar9 + iVar19 + -1;
    (undefined4)((pCVar4->Point).X = local_1c);
    *(undefined4 *)((int)&(pCVar4->Point).X + 4) = uStack_18;
    (undefined4)((pCVar4->Point).Y = uStack_14);
    *(undefined4 *)((int)&(pCVar4->Point).Y + 4) = uStack_10;
    pVVar12 = &pCVar9[iVar19 + -1].Point;
    *(undefined4 *)&pVVar12->Z = uVar15;
    *(undefined4 *)((int)&pVVar12->Z + 4) = uVar16;
    *(float *)(&pVVar12->Z + 1) = fVar10;
    ((Vec4_L_float_G_ *)(pVVar12 + 1))->Y = fVar11;
    pCVar9[iVar19 + -1].Color.Z = fVar13;
    pCVar9[iVar19 + -1].Color.W = fVar14;
  }
  return;
}

//==== 0083e510 AddVertex_0083e510 ====


/* public: void __thiscall FontVertexBufferObject__AddVertex(struct FontVertex const &) */

void __thiscall FontVertexBufferObject__AddVertex(FontVertexBufferObject *this,FontVertex *param_1)

{
  int iVar1;
  FontVertex *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iStack_8;
  
  iVar1 = (this->VertexData).Size;
  iStack_8 = iVar1 + 1;
  util__Darray_struct_util__Vec2_double_____SetSize
            ((Darray_L_struct_util__Vec2_L_double_G___G_ *)&this->VertexData,&iStack_8);
  bVar6 = util__Darray_struct_FontVertex___CheckSize
                    ((Darray_L_struct_FontVertex_G_ *)&this->VertexData,iVar1);
  if (bVar6) {
    iVar1 = (this->VertexData).Size;
    pFVar2 = (this->VertexData).Data;
    fVar3 = (param_1->Position).Y;
    fVar4 = (param_1->TexCoord).X;
    fVar5 = (param_1->TexCoord).Y;
    pFVar2[iVar1 + -1].Position.X = (param_1->Position).X;
    pFVar2[iVar1 + -1].Position.Y = fVar3;
    pFVar2[iVar1 + -1].TexCoord.X = fVar4;
    pFVar2[iVar1 + -1].TexCoord.Y = fVar5;
  }
  return;
}





//==== 0083e560 AddVertex_0083e560 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall VertexBufferObject__AddVertex(struct Vertex const &) */

void __thiscall VertexBufferObject__AddVertex(VertexBufferObject *this,Vertex *param_1)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  Vertex *pVVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  Vertex *pVVar16;
  double dVar17;
  bool bVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  float fVar22;
  int iStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 uStack_20;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar21 = 0;
  fVar6 = (param_1->Mode__Normal).X;
  piVar19 = &this->_pad_0x30_12;
  fVar7 = (param_1->Point).X;
  fVar8 = (param_1->Point).Y;
  fVar9 = (param_1->Point).Z;
  fVar22 = (param_1->Tangent).X;
  fVar10 = (param_1->Tangent).Y;
  fVar11 = (param_1->Tangent).Z;
  fVar12 = (param_1->Mode__Normal).Y;
  fVar13 = (param_1->Mode__Normal).Z;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  uStack_20 = 0.0;
  fStack_18 = 0.0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  piVar20 = piVar19;
  do {
    piVar1 = piVar20 + -8;
    dVar14 = *(double *)piVar20;
    piVar2 = piVar20 + 8;
    piVar3 = piVar20 + 0x10;
    piVar20 = piVar20 + 2;
    *(double *)(&fStack_28 + iVar21 * 2) =
         *(double *)piVar1 * (double)fVar22 + *(double *)(&fStack_28 + iVar21 * 2) +
         dVar14 * (double)fVar10 + *(double *)piVar2 * (double)fVar11 + *(double *)piVar3;
    iVar21 = iVar21 + 1;
  } while (iVar21 < 4);
  dVar14 = (double)CONCAT44(fStack_24,fStack_28);
  iVar21 = 0;
  fVar22 = (float)uStack_20;
  dVar17 = (double)CONCAT44(uStack_14,fStack_18);
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  uStack_20 = 0.0;
  fStack_18 = 0.0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  piVar20 = piVar19;
  do {
    piVar1 = piVar20 + -8;
    dVar15 = *(double *)piVar20;
    piVar2 = piVar20 + 8;
    piVar3 = piVar20 + 0x10;
    piVar20 = piVar20 + 2;
    *(double *)(&fStack_28 + iVar21 * 2) =
         *(double *)piVar1 * (double)fVar6 + *(double *)(&fStack_28 + iVar21 * 2) +
         dVar15 * (double)fVar12 + *(double *)piVar2 * (double)fVar13 + *(double *)piVar3;
    iVar21 = iVar21 + 1;
  } while (iVar21 < 4);
  iVar21 = 0;
  local_40 = (float)(double)CONCAT44(fStack_24,fStack_28);
  fStack_3c = (float)uStack_20;
  fStack_38 = (float)(double)CONCAT44(uStack_14,fStack_18);
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  uStack_20 = 0.0;
  fStack_18 = 0.0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  do {
    piVar20 = piVar19 + -8;
    dVar15 = *(double *)piVar19;
    piVar1 = piVar19 + 8;
    piVar2 = piVar19 + 0x10;
    piVar19 = piVar19 + 2;
    *(double *)(&fStack_28 + iVar21 * 2) =
         *(double *)piVar20 * (double)fVar7 + *(double *)(&fStack_28 + iVar21 * 2) +
         dVar15 * (double)fVar8 + *(double *)piVar1 * (double)fVar9 + *(double *)piVar2;
    iVar21 = iVar21 + 1;
  } while (iVar21 < 4);
  dVar15 = (double)CONCAT44(fStack_24,fStack_28);
  fStack_24 = (param_1->TextureCoordinate).Y;
  local_34 = (float)dVar15;
  fStack_30 = (float)uStack_20;
  fStack_2c = (float)(double)CONCAT44(uStack_14,fStack_18);
  fStack_28 = (param_1->TextureCoordinate).X;
  iVar21 = (this->VertexData).Size;
  fStack_18 = fStack_38;
  (*(uint32_t*)&(uStack_20)) = local_40;
  (*(uint32_t*)((char*)&(uStack_20)+4)) = fStack_3c;
  util__Darray_L_Vertex_G___SetSize(&this->VertexData,&iStack_44);
  bVar18 = util__Darray_L_Vertex_G___CheckSize(&this->VertexData,iVar21);
  if (bVar18) {
    iVar21 = (this->VertexData).Size;
    pVVar16 = (this->VertexData).Data;
    pVVar4 = pVVar16 + iVar21 + -1;
    (pVVar4->Point).X = local_34;
    (pVVar4->Point).Y = fStack_30;
    (pVVar4->Point).Z = fStack_2c;
    (pVVar4->TextureCoordinate).X = fStack_28;
    pfVar5 = &pVVar16[iVar21 + -1].TextureCoordinate.Y;
    *pfVar5 = fStack_24;
    pfVar5[1] = (float)uStack_20;
    pfVar5[2] = (*(uint32_t*)((char*)&(uStack_20)+4));
    pfVar5[3] = fStack_18;
    pVVar16[iVar21 + -1].Tangent.X = (float)dVar14;
    pVVar16[iVar21 + -1].Tangent.Y = fVar22;
    pVVar16[iVar21 + -1].Tangent.Z = (float)dVar17;
  }
  return;
}

//==== 0083e800 CheckSize_0083e800 ====


/* private: bool  util__Darray_L_structColorTexVertex_G___CheckSize(int) */

bool __thiscall
util__Darray_struct_ColorTexVertex___CheckSize(Darray_L_struct_ColorTexVertex_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar11 = -1 < (int)uVar7;
  bVar2 = !bVar11;
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
  uVar9 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar9) {
    return bVar2 && bVar11;
  }
  if (uVar9 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar9 = uVar7;
  }
  if ((int)uVar9 < (int)uVar7) {
    do {
      uVar9 = uVar9 * 2;
    } while ((int)uVar9 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar9;
  }
  if (0x3fffffff < (int)uVar9) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar9 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar9 * 0x30 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar9 * 0x30));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar9 != 0) {
    puVar6 = puStack_c + 9;
    do {
      *(undefined8 *)(puVar6 + -5) = 0;
      puVar6[-9] = 0;
      puVar6[-8] = 0;
      puVar6[-7] = 0;
      puVar6[-6] = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      uVar9 = uVar9 - 1;
      puVar6 = puVar6 + 0xc;
    } while (uVar9 != 0);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar8 = puVar6;
    puVar10 = puStack_c;
    if (puVar6 != puVar6 + param_1 * 0xc) {
      do {
        if (puVar10 == puStack_c + iVar1 * 0xc) break;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        *puVar10 = *puVar6;
        puVar10[1] = uVar3;
        puVar10[2] = uVar4;
        puVar10[3] = uVar5;
        uVar3 = puVar6[5];
        uVar4 = puVar6[6];
        uVar5 = puVar6[7];
        puVar10[4] = puVar6[4];
        puVar10[5] = uVar3;
        puVar10[6] = uVar4;
        puVar10[7] = uVar5;
        puVar8 = puVar6 + 8;
        uVar3 = puVar6[9];
        uVar4 = puVar6[10];
        uVar5 = puVar6[0xb];
        puVar6 = puVar6 + 0xc;
        puVar10[8] = *puVar8;
        puVar10[9] = uVar3;
        puVar10[10] = uVar4;
        puVar10[0xb] = uVar5;
        puVar8 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 0xc;
      } while (puVar6 != puVar8 + param_1 * 0xc);
    }
    port_op_delete(puVar8);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0083e990 CheckSize_0083e990 ====


/* private: bool  util__Darray_L_structColorVertex_G___CheckSize(int) */

bool __thiscall
util__Darray_struct_ColorVertex___CheckSize(Darray_L_struct_ColorVertex_G_ *this,int param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar9 = *(uint *)(this + 8);
  bVar13 = -1 < (int)uVar9;
  bVar3 = !bVar13;
  if (bVar3) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar9 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar3;
  bVar3 = (int)uVar9 < 0x40000000;
  if (!bVar3) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar9 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar11 = *(uint *)(this + 0xc);
  if ((int)uVar9 <= (int)uVar11) {
    return bVar3 && bVar13;
  }
  if (uVar11 == 0) {
    *(uint *)(this + 0xc) = uVar9;
    uVar11 = uVar9;
  }
  if ((int)uVar11 < (int)uVar9) {
    do {
      uVar11 = uVar11 * 2;
    } while ((int)uVar11 < (int)uVar9);
    *(uint *)(this + 0xc) = uVar11;
  }
  if (0x3fffffff < (int)uVar11) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x28 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar11 * 0x28));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar11 != 0) {
    puVar8 = puStack_c + 8;
    do {
      *(undefined8 *)(puVar8 + -4) = 0;
      puVar8[-8] = 0;
      puVar8[-7] = 0;
      puVar8[-6] = 0;
      puVar8[-5] = 0;
      puVar8[-2] = 0;
      puVar8[-1] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 10;
    } while (uVar11 != 0);
  }
  puVar7 = puStack_c;
  puVar8 = *(undefined4 **)(this + 4);
  if (puVar8 != (undefined4 *)0x0) {
    iVar2 = *(int *)(this + 8);
    puVar10 = puStack_c;
    puVar12 = puVar8;
    if (puVar8 != puVar8 + param_1 * 10) {
      do {
        if (puVar10 == puStack_c + iVar2 * 10) break;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *puVar10 = *puVar8;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
        uVar4 = puVar8[5];
        uVar5 = puVar8[6];
        uVar6 = puVar8[7];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar4;
        puVar10[6] = uVar5;
        puVar10[7] = uVar6;
        puVar1 = (undefined8 *)(puVar8 + 8);
        puVar8 = puVar8 + 10;
        *(undefined8 *)(puVar10 + 8) = *puVar1;
        puVar12 = *(undefined4 **)(this + 4);
        puVar10 = puVar10 + 10;
      } while (puVar8 != puVar12 + param_1 * 10);
    }
    port_op_delete(puVar12);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puVar7;
  return bStack_5;
}





//==== 0083eb10 CheckSize_0083eb10 ====


/* private: bool  util__Darray_L_structFontVertex_G___CheckSize(int) */

bool __thiscall
util__Darray_struct_FontVertex___CheckSize(Darray_L_struct_FontVertex_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar8 = *(uint *)(this + 8);
  bVar12 = -1 < (int)uVar8;
  bVar2 = !bVar12;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    Darray_L_struct_util__Vec2_L_double_G___G___SetSize
              ((Darray_L_struct_util__Vec2_L_double_G___G_ *)this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar8 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    Darray_L_struct_util__Vec2_L_double_G___G___SetSize
              ((Darray_L_struct_util__Vec2_L_double_G___G_ *)this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar8 <= (int)uVar10) {
    return bVar2 && bVar12;
  }
  if (uVar10 == 0) {
    *(uint *)(this + 0xc) = uVar8;
    uVar10 = uVar8;
  }
  if ((int)uVar10 < (int)uVar8) {
    do {
      uVar10 = uVar10 * 2;
    } while ((int)uVar10 < (int)uVar8);
    *(uint *)(this + 0xc) = uVar10;
  }
  if (0x3fffffff < (int)uVar10) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar10 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar10 * 0x10));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar10 != 0) {
    puVar7 = puStack_c + 1;
    do {
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 4;
    } while (uVar10 != 0);
  }
  puVar7 = *(undefined4 **)(this + 4);
  if (puVar7 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar9 = puVar7;
    puVar11 = puStack_c;
    if (puVar7 != puVar7 + param_1 * 4) {
      do {
        if (puVar11 == puStack_c + iVar1 * 4) break;
        uVar3 = *puVar9;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        puVar9 = puVar9 + 4;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
        puVar7 = *(undefined4 **)(this + 4);
        puVar11 = puVar11 + 4;
      } while (puVar9 != puVar7 + param_1 * 4);
    }
    port_op_delete(puVar7);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 0083ec70 CheckSize_0083ec70 ====


/* private: bool  util__Darray_L_structVertex_G___CheckSize(int) */

bool __thiscall util__Darray_struct_Vertex___CheckSize(Darray_L_struct_Vertex_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar8 = *(uint *)(this + 8);
  bVar12 = -1 < (int)uVar8;
  bVar2 = !bVar12;
  if (bVar2) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar8 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar8 <= (int)uVar10) {
    return bVar2 && bVar12;
  }
  if (uVar10 == 0) {
    *(uint *)(this + 0xc) = uVar8;
    uVar10 = uVar8;
  }
  if ((int)uVar10 < (int)uVar8) {
    do {
      uVar10 = uVar10 * 2;
    } while ((int)uVar10 < (int)uVar8);
    *(uint *)(this + 0xc) = uVar10;
  }
  if (0x3fffffff < (int)uVar10) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar10 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x2c >> 0x20) != 0) |
                             (uint)((ulonglong)uVar10 * 0x2c));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar10 != 0) {
    puVar7 = puStack_c + 6;
    do {
      puVar7[-6] = 0;
      puVar7[-5] = 0;
      puVar7[-4] = 0;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      uVar10 = uVar10 - 1;
      puVar7 = puVar7 + 0xb;
    } while (uVar10 != 0);
  }
  puVar6 = puStack_c;
  puVar7 = *(undefined4 **)(this + 4);
  if (puVar7 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar9 = puVar7;
    puVar11 = puStack_c;
    if (puVar7 != puVar7 + param_1 * 0xb) {
      do {
        if (puVar11 == puStack_c + iVar1 * 0xb) break;
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        uVar5 = puVar7[3];
        *puVar11 = *puVar7;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        puVar11[3] = uVar5;
        uVar3 = puVar7[5];
        uVar4 = puVar7[6];
        uVar5 = puVar7[7];
        puVar11[4] = puVar7[4];
        puVar11[5] = uVar3;
        puVar11[6] = uVar4;
        puVar11[7] = uVar5;
        *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(puVar7 + 8);
        puVar9 = puVar7 + 10;
        puVar7 = puVar7 + 0xb;
        puVar11[10] = *puVar9;
        puVar9 = *(undefined4 **)(this + 4);
        puVar11 = puVar11 + 0xb;
      } while (puVar7 != puVar9 + param_1 * 0xb);
    }
    port_op_delete(puVar9);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puVar6;
  return bStack_5;
}





//==== 0083ee10 ClearLastBufferRendered ====


/* public: static void __cdecl VertexBufferObjectInterface__ClearLastBufferRendered(void) */

void __cdecl VertexBufferObjectInterface__ClearLastBufferRendered(void)

{
  LastBufferRendered = 0xffffffff;
  return;
}





//==== 0083ee20 ClearToIdentity ====


/* public: void __thiscall util__Matrix4x4_double___ClearToIdentity(void) */

void __thiscall util__Matrix4x4_double___ClearToIdentity(Matrix4x4_L_double_G_ *this)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    (*(uint64_t*)&(auVar5)) = CONCAT44(-(uint)(iVar1 == 1),-(uint)(iVar1 == 0));
    (*(uint32_t*)((char*)&(auVar5)+8)) = -(uint)(iVar1 == 0);
    (*(uint32_t *)((char *)&(auVar5) + 12)) = -(uint)(iVar1 == 0);
    (*(uint32_t*)((char*)&(auVar3)+8)) = (*(uint32_t*)((char*)&(auVar5)+8));
    (*(uint64_t*)&(auVar3)) = (*(uint64_t*)&(auVar5));
    (*(uint32_t *)((char *)&(auVar3) + 12)) = (*(uint32_t *)((char *)&(auVar5) + 12));
    *(uint32_t *)&auVar3 = (*(uint32_t *)&auVar5 & 0x00000001u);
    this->Data[0] = (double)(*(uint32_t*)&(auVar3));
    *(double *)((int)this + 8) = (double)(*(uint32_t*)((char*)&(auVar3)+4));
    (*(uint64_t*)&(auVar6)) = CONCAT44(-(uint)(iVar1 == 3),-(uint)(iVar1 == 2));
    (*(uint32_t*)((char*)&(auVar6)+8)) = -(uint)(iVar1 == 0);
    (*(uint32_t *)((char *)&(auVar6) + 12)) = -(uint)(iVar1 == 0);
    (*(uint32_t*)((char*)&(auVar4)+8)) = (*(uint32_t*)((char*)&(auVar6)+8));
    (*(uint64_t*)&(auVar4)) = (*(uint64_t*)&(auVar6));
    (*(uint32_t *)((char *)&(auVar4) + 12)) = (*(uint32_t *)((char *)&(auVar6) + 12));
    *(uint32_t *)&auVar3 = (*(uint32_t *)&auVar6 & 0x00000001u);
    *(double *)((int)this + 0x10) = (double)(*(uint32_t*)&(auVar3));
    *(double *)((int)this + 0x18) = (double)(*(uint32_t*)((char*)&(auVar3)+4));
    iVar1 = iVar2;
    this = (Matrix4x4_L_double_G_ *)((int)this + 0x20);
  } while (iVar2 < 4);
  return;
}





//==== 0083eec0 Destroy_0083eec0 ====


/* public: virtual void __thiscall VertexBufferObjectInterface__Destroy(void) */

void __thiscall VertexBufferObjectInterface__Destroy(VertexBufferObjectInterface *this)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = this->Buffer;
  puVar1 = &this->Buffer;
  if (LastBufferRendered == uVar2) {
    LastBufferRendered = 0xffffffff;
    uVar2 = *puVar1;
  }
  if (uVar2 != 0xffffffff) {
    (*___glewDeleteBuffers)(1,puVar1);
  }
  this->Type = 0xffffffff;
  *puVar1 = 0xffffffff;
  return;
}





//==== 0083ef00 EstimateVertexCount ====


/* public: void __thiscall ColorTexVertexBufferObject__EstimateVertexCount(int) */

void __thiscall
ColorTexVertexBufferObject__EstimateVertexCount(ColorTexVertexBufferObject *this,int param_1)

{
  int *piVar1;
  ColorTexVertex *pCVar2;
  float *pfVar3;
  uint uVar4;
  
  (this->VertexData).Capacity = param_1;
  piVar1 = &(this->VertexData).Capacity;
  if (param_1 < 1) {
    *piVar1 = 1;
    param_1 = 1;
  }
  if (0x3fffffff < param_1) {
    *piVar1 = 0x3fffffff;
    param_1 = 0x3fffffff;
  }
  if (param_1 < (this->VertexData).Size) {
    util__Darray_struct_ColorTexVertex___SetSize
              ((Darray_L_struct_ColorTexVertex_G_ *)&this->VertexData,piVar1);
  }
  pCVar2 = (this->VertexData).Data;
  if (pCVar2 != (ColorTexVertex *)0x0) {
    port_op_delete(pCVar2);
  }
  uVar4 = *piVar1;
  (this->VertexData).Data = (ColorTexVertex *)0x0;
  pCVar2 = (ColorTexVertex *)
           port_op_new(-(uint)((int)((ulonglong)uVar4 * 0x30 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0x30));
  if (pCVar2 != (ColorTexVertex *)0x0) {
    if (uVar4 != 0) {
      pfVar3 = &(pCVar2->Color).Y;
      do {
        *(undefined8 *)(pfVar3 + -5) = 0;
        pfVar3[-9] = 0.0;
        pfVar3[-8] = 0.0;
        pfVar3[-7] = 0.0;
        pfVar3[-6] = 0.0;
        pfVar3[-3] = 0.0;
        pfVar3[-2] = 0.0;
        ((Vec4_L_float_G_ *)(pfVar3 + -1))->X = 0.0;
        *pfVar3 = 0.0;
        pfVar3[1] = 0.0;
        pfVar3[2] = 0.0;
        uVar4 = uVar4 - 1;
        pfVar3 = pfVar3 + 0xc;
      } while (uVar4 != 0);
    }
    (this->VertexData).Data = pCVar2;
    return;
  }
  (this->VertexData).Data = (ColorTexVertex *)0x0;
  return;
}





//==== 0083eff0 EstimateVertexCount_0083eff0 ====


/* public: void __thiscall ColorVertexBufferObject__EstimateVertexCount(int) */

void __thiscall
ColorVertexBufferObject__EstimateVertexCount(ColorVertexBufferObject *this,int param_1)

{
  int *piVar1;
  ColorVertex *pCVar2;
  float *pfVar3;
  uint uVar4;
  
  (this->VertexData).Capacity = param_1;
  piVar1 = &(this->VertexData).Capacity;
  if (param_1 < 1) {
    *piVar1 = 1;
    param_1 = 1;
  }
  if (0x3fffffff < param_1) {
    *piVar1 = 0x3fffffff;
    param_1 = 0x3fffffff;
  }
  if (param_1 < (this->VertexData).Size) {
    util__Darray_struct_ColorVertex___SetSize
              ((Darray_L_struct_ColorVertex_G_ *)&this->VertexData,piVar1);
  }
  pCVar2 = (this->VertexData).Data;
  if (pCVar2 != (ColorVertex *)0x0) {
    port_op_delete(pCVar2);
  }
  uVar4 = *piVar1;
  (this->VertexData).Data = (ColorVertex *)0x0;
  pCVar2 = (ColorVertex *)
           port_op_new(-(uint)((int)((ulonglong)uVar4 * 0x28 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0x28));
  if (pCVar2 != (ColorVertex *)0x0) {
    if (uVar4 != 0) {
      pfVar3 = &(pCVar2->Color).Z;
      do {
        *(undefined8 *)(pfVar3 + -4) = 0;
        pfVar3[-8] = 0.0;
        pfVar3[-7] = 0.0;
        pfVar3[-6] = 0.0;
        pfVar3[-5] = 0.0;
        ((Vec4_L_float_G_ *)(pfVar3 + -2))->X = 0.0;
        pfVar3[-1] = 0.0;
        *pfVar3 = 0.0;
        pfVar3[1] = 0.0;
        uVar4 = uVar4 - 1;
        pfVar3 = pfVar3 + 10;
      } while (uVar4 != 0);
    }
    (this->VertexData).Data = pCVar2;
    return;
  }
  (this->VertexData).Data = (ColorVertex *)0x0;
  return;
}





//==== 0083f0d0 EstimateVertexCount_0083f0d0 ====


/* public: void __thiscall VertexBufferObject__EstimateVertexCount(int) */

void __thiscall VertexBufferObject__EstimateVertexCount(VertexBufferObject *this,int param_1)

{
  int *piVar1;
  Vertex *pVVar2;
  float *pfVar3;
  uint uVar4;
  
  (this->VertexData).Capacity = param_1;
  piVar1 = &(this->VertexData).Capacity;
  if (param_1 < 1) {
    *piVar1 = 1;
    param_1 = 1;
  }
  if (0x3fffffff < param_1) {
    *piVar1 = 0x3fffffff;
    param_1 = 0x3fffffff;
  }
  if (param_1 < (this->VertexData).Size) {
    util__Darray_struct_Vertex___SetSize((Darray_L_struct_Vertex_G_ *)&this->VertexData,piVar1);
  }
  pVVar2 = (this->VertexData).Data;
  if (pVVar2 != (Vertex *)0x0) {
    port_op_delete(pVVar2);
  }
  uVar4 = *piVar1;
  (this->VertexData).Data = (Vertex *)0x0;
  pVVar2 = (Vertex *)
           port_op_new(-(uint)((int)((ulonglong)uVar4 * 0x2c >> 0x20) != 0) |
                          (uint)((ulonglong)uVar4 * 0x2c));
  if (pVVar2 != (Vertex *)0x0) {
    if (uVar4 != 0) {
      pfVar3 = &(pVVar2->Mode__Normal).Y;
      do {
        pfVar3[-6] = 0.0;
        pfVar3[-5] = 0.0;
        pfVar3[-4] = 0.0;
        pfVar3[-3] = 0.0;
        pfVar3[-2] = 0.0;
        ((Vec3_L_float_G_ *)(pfVar3 + -1))->X = 0.0;
        *pfVar3 = 0.0;
        pfVar3[1] = 0.0;
        pfVar3[2] = 0.0;
        pfVar3[3] = 0.0;
        pfVar3[4] = 0.0;
        uVar4 = uVar4 - 1;
        pfVar3 = pfVar3 + 0xb;
      } while (uVar4 != 0);
    }
    (this->VertexData).Data = pVVar2;
    return;
  }
  (this->VertexData).Data = (Vertex *)0x0;
  return;
}





//==== 0083f1c0 Find_0083f1c0 ====


/* public: struct Font__Character *  util__HashMap_L_unsignedlong_Cstruct_Font__Character_G___Find(unsigned long const &)const  */

Character * 
util__HashMap_unsigned_long_struct_Font__Character___Find
          (HashMap_L_unsigned_long_Cstruct_Font__Character_G_ *this,ulong *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  ulong *puVar2;
  Character *pCVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  HashMap_L_unsigned_long_Cstruct_Font__Character_G_ *pHStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pHStack_c = this;
  if (*(uint *)(this + 4) != 0) {
    uVar4 = *param_1;
    uVar5 = (uVar4 & 0xff) * 0x401;
    uVar5 = ((uVar4 >> 8 & 0xff) + (uVar5 >> 6 ^ uVar5)) * 0x401;
    uVar5 = ((uVar4 >> 0x10 & 0xff) + (uVar5 >> 6 ^ uVar5)) * 0x401;
    uVar4 = ((uVar5 >> 6 ^ uVar5) + (uVar4 >> 0x18)) * 0x401;
    uVar4 = (uVar4 ^ uVar4 >> 6) * 9;
    pHStack_c = (HashMap_L_unsigned_long_Cstruct_Font__Character_G_ *)0x0;
    piVar6 = (int *)((((uVar4 >> 0xb ^ uVar4) * 0x8001) % *(uint *)(this + 4)) * 0x10 + *(int *)this
                    );
    iVar1 = (**(code **)(uintptr_t)(*piVar6 + 0xc))();
    if ((int)pHStack_c < iVar1) {
      do {
        puVar2 = (ulong *)(**(code **)*piVar6)(&pHStack_c);
        if (*puVar2 == *param_1) {
          iVar1 = (**(code **)*piVar6)(&pHStack_c);
          pCVar3 = (Character *)(iVar1 + 4);
          __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
        }
        pHStack_c = pHStack_c + 1;
        iVar1 = (*(code *)((undefined4 *)*piVar6)[3])();
      } while ((int)pHStack_c < iVar1);
    }
  }
  pCVar3 = (Character *)0x0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pCVar3;
}





//==== 0083f2c0 Generate_0083f2c0 ====

/* public: void __thiscall VertexBufferObjectInterface__Generate(void) */

void __thiscall VertexBufferObjectInterface__Generate(VertexBufferObjectInterface *this)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (this->Type == 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x20,"int != -1",
                    (char *)0x0);
    DebugBreak();
  }
  uVar1 = this->Buffer;
  if (uVar1 == 0xffffffff) {
    (*___glewGenBuffers)(1,&this->Buffer);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x24);
    uVar1 = this->Buffer;
  }
  (*___glewBindBuffer)(0x8892,uVar1);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x27);
  uVar2 = (**(code **)(this->_pad_0x0_0 + 0x30))();
  uVar2 = (**(code **)(this->_pad_0x0_0 + 0x20))(uVar2);
  uVar2 = (**(code **)(this->_pad_0x0_0 + 0x1c))(uVar2);
  (*___glewBufferData)(0x8892,uVar2);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x29);
  return;
}

//==== 0083f360 GenerateFromObjFile ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool  VertexBufferObject__GenerateFromObjFile(class util__Str_L_char_G_ const
   &,bool,double,bool,struct util__Matrix4x4_L_double_G_) */

bool 
VertexBufferObject__GenerateFromObjFile
          (VertexBufferObject *this,Str_L_char_G_ *param_1,bool param_2,double param_3,bool param_4,
          Matrix4x4_L_double_G_ param_5)

{
  undefined8 stack0x00000018;
  undefined8 stack0xffffffa8;
  undefined8 stack0xfffffffc;
  char cVar1;
  GameManager *this_00;
  Str_L_char_G_ *pSVar2;
  bool bVar3;
  Darray_L_util__Str_L_char_G___G_ DStack_38;
  undefined1 *local_28;
  double *pdStack_24;
  bool *pbStack_20;
  Str_L_char_G_ *pSStack_1c;
  undefined8 local_18;
  int local_10;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->_pad_0x8_2 != -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0xc3,
                    "!IsGenerated()",(char *)0x0);
    DebugBreak();
  }
  local_28 = &local_9;
  pdStack_24 = &param_3;
  DStack_38._pad_0x0_0 = (int)&param_2;
  DStack_38.Data = (Str_L_char_G_ *)&param_4;
  DStack_38.Capacity = (int)&stack0x00000018;
  local_18 = CONCAT44(DStack_38.Capacity,this);
  DStack_38.Size = (int)this;
  pbStack_20 = (bool *)DStack_38._pad_0x0_0;
  pSStack_1c = DStack_38.Data;
  this_00 = GetGameManager();
  DStack_38._pad_0x0_0 = 0;
  DStack_38.Data = (Str_L_char_G_ *)0x0;
  DStack_38.Size = 0;
  DStack_38.Capacity = 0;
  GameManager__GetValidFileInAllResourcePaths(this_00,(ResourceType)(uintptr_t)((ResourceType)(uintptr_t)(&DStack_38)),(Str_L_char_G_*)(1),param_1);
  local_10 = 0;
  if (0 < DStack_38.Size) {
    do {
      pSVar2 = (Str_L_char_G_ *)(**(code **)DStack_38._pad_0x0_0)(&local_10);
      util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffffa8,pSVar2);
      cVar1 = FUN_0083da40();
      if (cVar1 != '\0') {
        bVar3 = true;
        goto LAB_0083f42a;
      }
      local_10 = local_10 + 1;
    } while (local_10 < DStack_38.Size);
  }
  bVar3 = false;
LAB_0083f42a:
  Darray_L_util__Str_L_char_G___G___dtor(&DStack_38);
  return bVar3;
}

//==== 0083f450 GetBufferByteSize ====

/* private: virtual int __thiscall ColorTexVertexBufferObject__GetBufferByteSize(void)const  */

int __thiscall ColorTexVertexBufferObject__GetBufferByteSize(ColorTexVertexBufferObject *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->VertexData)._padfb0 + 0xc))();
  return iVar1 * 0x30;
}

//==== 0083f470 GetBufferByteSize_0083f470 ====

/* private: virtual int __thiscall ColorVertexBufferObject__GetBufferByteSize(void)const  */

int __thiscall ColorVertexBufferObject__GetBufferByteSize(ColorVertexBufferObject *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->VertexData)._padfb0 + 0xc))();
  return iVar1 * 0x28;
}

//==== 0083f490 GetBufferByteSize_0083f490 ====

/* private: virtual int __thiscall FontVertexBufferObject__GetBufferByteSize(void)const  */

int __thiscall FontVertexBufferObject__GetBufferByteSize(FontVertexBufferObject *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->VertexData)._padfb0 + 0xc))();
  return iVar1 << 4;
}

//==== 0083f4b0 GetBufferByteSize_0083f4b0 ====

/* private: virtual int __thiscall VertexBufferObject__GetBufferByteSize(void)const  */

int __thiscall VertexBufferObject__GetBufferByteSize(VertexBufferObject *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
  return iVar1 * 0x2c;
}

//==== 0083f4d0 GetBufferSize ====

/* private: virtual int __thiscall VertexBufferObject__GetBufferSize(void)const  */

int __thiscall VertexBufferObject__GetBufferSize(VertexBufferObject *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0083f4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
}

//==== 0083f4e0 GetBufferStart ====


/* private: virtual void * __thiscall VertexBufferObject__GetBufferStart(void)const  */

void * __thiscall VertexBufferObject__GetBufferStart(VertexBufferObject *this)

{
  return (this->VertexData).Data;
}





//==== 0083f4f0 GetBufferType ====


/* private: virtual unsigned int __thiscall FontVertexBufferObject__GetBufferType(void)const  */

uint __thiscall FontVertexBufferObject__GetBufferType(FontVertexBufferObject *this)

{
  return 0x88e8;
}





//==== 0083f500 GetBufferType_0083f500 ====


/* protected: virtual unsigned int __thiscall VertexBufferObjectInterface__GetBufferType(void)const
    */

uint __thiscall VertexBufferObjectInterface__GetBufferType(VertexBufferObjectInterface *this)

{
  return 0x88e4;
}





//==== 0083f510 GetResourceIDs_0083f510 ====


/* public: virtual class util__Darray_L_structResourceID_G_ __thiscall
   VertexBufferObjectInterface__GetResourceIDs(void)const  */

Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ * __thiscall
VertexBufferObjectInterface__GetResourceIDs(VertexBufferObjectInterface *this)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *in_stack_00000004;
  VertexBufferObjectInterface *pVStack_8;
  
  uVar1 = this->Buffer;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       &vftable_109;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  pVStack_8 = this;
  puVar4 = (undefined4 *)port_op_new(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  iVar5 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    do {
      iVar2 = *(int *)(in_stack_00000004 + 4);
      *(undefined4 *)(iVar2 + iVar5 * 8) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar5 = *(int *)(in_stack_00000004 + 8);
  pVStack_8 = (VertexBufferObjectInterface *)(iVar5 + 1);
  util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
            (in_stack_00000004,(int *)&pVStack_8);
  bVar3 = util__Darray_struct_util__tuple2_enum_Order__Type_int_____CheckSize
                    (in_stack_00000004,iVar5);
  if (bVar3) {
    iVar5 = *(int *)(in_stack_00000004 + 4);
    iVar2 = *(int *)(in_stack_00000004 + 8);
    *(undefined4 *)(iVar5 + -8 + iVar2 * 8) = 1;
    *(uint *)(iVar5 + -4 + iVar2 * 8) = uVar1;
  }
  return in_stack_00000004;
}





//==== 0083f5c0 GetResourceTypeName_0083f5c0 ====


/* public: virtual class util__Str_L_char_G_ 
   VertexBufferObjectInterface__GetResourceTypeName(void)const  */

Str_L_char_G_ * 
VertexBufferObjectInterface__GetResourceTypeName
          (VertexBufferObjectInterface *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Vertex Buffer Object");
  return __return_storage_ptr__;
}





//==== 0083f5e0 GetStateCleaner ====


/* private: virtual void (__cdecl*__thiscall ColorTexVertexBufferObject__GetStateCleaner(void)const
   )(void) */

_func_void * __thiscall
ColorTexVertexBufferObject__GetStateCleaner(ColorTexVertexBufferObject *this)

{
  return (_func_void *)(TearDownState);
}





//==== 0083f5f0 GetStateCleaner_0083f5f0 ====


/* private: virtual void (__cdecl*__thiscall ColorVertexBufferObject__GetStateCleaner(void)const
   )(void) */

_func_void * __thiscall ColorVertexBufferObject__GetStateCleaner(ColorVertexBufferObject *this)

{
  return (_func_void *)(TearDownState);
}





//==== 0083f600 GetStateCleaner_0083f600 ====


/* private: virtual void (__cdecl*__thiscall FontVertexBufferObject__GetStateCleaner(void)const
   )(void) */

_func_void * __thiscall FontVertexBufferObject__GetStateCleaner(FontVertexBufferObject *this)

{
  return (_func_void *)(TearDownState);
}





//==== 0083f610 GetStateCleaner_0083f610 ====


/* private: virtual void (__cdecl*__thiscall VertexBufferObject__GetStateCleaner(void)const )(void)
    */

_func_void * __thiscall VertexBufferObject__GetStateCleaner(VertexBufferObject *this)

{
  return (_func_void *)(TearDownState);
}





//==== 0083f620 HasData ====

/* public: virtual bool __thiscall VertexBufferObject__HasData(void)const  */

bool __thiscall VertexBufferObject__HasData(VertexBufferObject *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
}

//==== 0083f640 IsGenerated_0083f640 ====


/* public: bool __thiscall VertexBufferObjectInterface__IsGenerated(void)const  */

bool __thiscall VertexBufferObjectInterface__IsGenerated(VertexBufferObjectInterface *this)

{
  return this->Buffer != 0xffffffff;
}





//==== 0083f650 IsSplineModel ====


/* public: bool __thiscall VertexBufferObjectInterface__IsSplineModel(void)const  */

bool __thiscall VertexBufferObjectInterface__IsSplineModel(VertexBufferObjectInterface *this)

{
  return this->IsSplineFlag;
}





//==== 0083f660 ProcessIndexedShape ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl ProcessIndexedShape(struct IndexedShape const &,class VertexBufferObject *,class
   util__Darray_L_structVertex_G_ *) */

void __cdecl
ProcessIndexedShape(IndexedShape *param_1,VertexBufferObject *param_2,Darray_L_Vertex_G_ *param_3)

{
  undefined8 stack0xfffffffc;
  uint *puVar1;
  uint uVar2;
  OptionsSection__Graphics *this;
  uint *puVar3;
  IndexedShape *pIVar4;
  Shader *pSVar5;
  GameManager *pGVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  Matrix4x4_L_double_G_ *pMVar11;
  int *piVar12;
  char *pcVar13;
  undefined1 local_f0 [12];
  undefined8 *local_e4;
  IndexedShape **local_e0;
  IndexedShape *local_dc;
  double *local_d8;
  undefined4 *local_d4;
  undefined4 *local_d0;
  VertexBufferObject **local_cc;
  Darray_L_Vertex_G_ **local_c8;
  VertexBufferObject *local_c4;
  Matrix4x4_L_double_G_ local_c0;
  double local_40;
  double local_38;
  double local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 *local_20;
  IndexedShape *local_1c;
  undefined8 local_18;
  DrawStack local_d;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c4 = param_2;
  if ((param_2 == (VertexBufferObject *)0x0) && (param_3 == (Darray_L_Vertex_G_ *)0x0)) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0xffffffff;
  }
  Graphics__DrawStack__DrawStack(&local_d,uVar2);
  if (local_c4 != (VertexBufferObject *)0x0) {
    pMVar11 = &local_c0;
    this = Graphics__Get();
    Graphics__GetCurrentTransformMatrix(this,pMVar11);
    pMVar11 = &local_c0;
    piVar12 = &local_c4->_pad_0x10_4;
    for (iVar9 = 0x20; iVar9 != 0; iVar9 = iVar9 + -1) {
      *piVar12 = *(int *)pMVar11->Data;
      pMVar11 = (Matrix4x4_L_double_G_ *)((int)pMVar11->Data + 4);
      piVar12 = piVar12 + 1;
    }
    local_c4->_pad_0x4_1 = 4;
  }
  local_18 = 0;
  iVar9 = (**(code **)((param_1->Vertices)._pad_0x0_0 + 0xc))();
  uVar2 = iVar9 * 2;
  local_18 = (ulonglong)uVar2 << 0x20;
  if ((((int)uVar2 < 1) && (0x3ffffffe < (int)uVar2)) ||
     (((int)uVar2 < 0x40000000 && (-1 < (int)uVar2)))) {
    if (0 < (int)uVar2) {
      uVar10 = -(uint)((int)((ulonglong)uVar2 * 0x10 >> 0x20) != 0) |
               (uint)((ulonglong)uVar2 * 0x10);
      puVar3 = (uint *)(uintptr_t)(port_op_new(-(uint)(0xfffffffb < uVar10) | uVar10 + 4));
      if (puVar3 == (uint *)0x0) {
        local_18 = (ulonglong)(*(uint32_t*)((char*)&(local_18)+4)) << 0x20;
      }
      else {
        *puVar3 = uVar2;
        puVar1 = puVar3 + 1;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar1 = (uint)&vftable_554;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0;
          puVar1 = puVar1 + 4;
        }
        local_18 = CONCAT44((*(uint32_t*)((char*)&(local_18)+4)),puVar3 + 1);
      }
    }
  }
  else {
    local_18 = 0;
  }
  local_c = 0;
  iVar9 = (**(code **)((param_1->Faces)._pad_0x0_0 + 0xc))();
  if (local_c < iVar9) {
    do {
      pIVar4 = (IndexedShape *)(**(code **)(param_1->Faces)._pad_0x0_0)(&local_c);
      local_20 = &local_18;
      local_1c = pIVar4;
      FUN_0083d980((pIVar4->Vertices)._pad_0x0_0);
      FUN_0083d980((pIVar4->Vertices).Data);
      FUN_0083d980((pIVar4->Vertices).Size);
      local_c = local_c + 1;
      iVar9 = (**(code **)((param_1->Faces)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar9);
  }
  if ((local_c4 == (VertexBufferObject *)0x0) && (param_3 == (Darray_L_Vertex_G_ *)0x0)) {
    pcVar13 = "Mode__Normal";
    pSVar5 = Shader__GetCurrent();
    pGVar6 = Manager__GetParent((Manager *)pSVar5);
    *(uint32_t *)&local_24 = (*___glewGetAttribLocation)(pGVar6,pcVar13);
  }
  else {
    *(uint32_t *)&local_24 = 0xffffffff;
  }
  if ((local_c4 == (VertexBufferObject *)0x0) && (param_3 == (Darray_L_Vertex_G_ *)0x0)) {
    pcVar13 = "Tangent";
    pSVar5 = Shader__GetCurrent();
    pGVar6 = Manager__GetParent((Manager *)pSVar5);
    local_28 = (*___glewGetAttribLocation)(pGVar6,pcVar13);
  }
  else {
    local_28 = 0xffffffff;
  }
  local_c = 0;
  iVar9 = (**(code **)((param_1->Faces)._pad_0x0_0 + 0xc))();
  if (local_c < iVar9) {
    do {
      puVar7 = (undefined4 *)(**(code **)(param_1->Faces)._pad_0x0_0)(&local_c);
      local_1c = param_1;
      pfVar8 = (float *)FUN_0083d860(local_f0,puVar7);
      local_dc = param_1;
      local_40 = (double)*pfVar8;
      local_38 = (double)pfVar8[1];
      local_e4 = &local_18;
      local_e0 = &local_1c;
      local_d8 = &local_40;
      local_d4 = &local_24;
      local_d0 = &local_28;
      local_30 = (double)pfVar8[2];
      local_cc = &local_c4;
      local_c8 = &param_3;
      FUN_0083d6b0(*puVar7);
      FUN_0083d6b0(puVar7[1]);
      FUN_0083d6b0(puVar7[2]);
      local_c = local_c + 1;
      iVar9 = (**(code **)((param_1->Faces)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar9);
  }
  if ((int *)local_18 != (int *)0x0) {
    if (((int *)local_18)[-1] == 0) {
      port_op_delete((int *)local_18 + -1);
    }
    else {
      (**(code **)(*(int *)local_18 + 0x18))(3);
    }
  }
  local_18 = local_18 & 0xffffffff00000000;
  Graphics__DrawStack___DrawStack(&local_d);
  return;
}

//==== 0083f980 Render_0083f980 ====

/* public: void __thiscall VertexBufferObjectInterface__Render(void)const  */

void __thiscall VertexBufferObjectInterface__Render(VertexBufferObjectInterface *this)

{
  OptionsSection__Graphics *this_00;
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  if (this->Buffer == 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x3a,
                    "IsGenerated()",(char *)0x0);
    DebugBreak();
  }
  this_00 = Graphics__Get();
  Graphics__ApplyTransformation(this_00);
  (**(code **)(this->_pad_0x0_0 + 0x28))();
  if (LastBufferRendered != this->Buffer) {
    (*___glewBindBuffer)(0x8892,this->Buffer);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x43);
    (**(code **)(this->_pad_0x0_0 + 0x24))();
  }
  uVar1 = (**(code **)(this->_pad_0x0_0 + 0x18))();
  glDrawArrays(this->Type,0,uVar1);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x47);
  iVar2 = (**(code **)(this->_pad_0x0_0 + 0x2c))();
  if (iVar2 != 0) {
    pcVar3 = (code *)(**(code **)(this->_pad_0x0_0 + 0x2c))();
    (*pcVar3)();
  }
  LastBufferRendered = this->Buffer;
  return;
}

//==== 0083fa30 ReplaceVertices ====


/* public: void __thiscall VertexBufferObject__ReplaceVertices(class util__Darray_L_structVertex_G_
   const &) */

void __thiscall
VertexBufferObject__ReplaceVertices(VertexBufferObject *this,Darray_L_struct_Vertex_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  Vertex *pVVar2;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
  if (iStack_c < iVar1) {
    do {
      pVVar2 = (Vertex *)(*(code *)**(undefined4 **)param_1)(&iStack_c);
      AddVertex(this,pVVar2);
      iStack_c = iStack_c + 1;
      iVar1 = (**(code **)(*(int *)param_1 + 0xc))();
    } while (iStack_c < iVar1);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0083faa0 SafeNormalized_0083faa0 ====


/* public: struct util__Vec3_L_float_G_ const __thiscall util__Vec3_float___SafeNormalized(void)const
    */

Vec3_L_float_G_ * __thiscall
util__Vec3_float___SafeNormalized(Vec3_L_float_G_ *this,Vec3_L_float_G_ *__return_storage_ptr__)

{
  float fVar1;
  Maybe_L_float_G_ MVar2;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  fStack_8 = this->X * this->X + this->Y * this->Y + this->Z * this->Z;
  Sqrt((Maybe_L_float_G_ *)&MVar2,&fStack_10);
  if (*(char *)((float *)&(MVar2.Data) + 1) == '\0') {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,"IsValid()",
              (char *)0x0);
    DebugBreak();
  }
  fStack_14 = this->X;
  fVar1 = *(float *)&(MVar2.Data);
  fStack_c = 1.0 / fVar1;
  if ((((NAN(fStack_14) == (fStack_14 == 0.0)) || (NAN(this->Y) == (this->Y == 0.0))) ||
      (NAN(this->Z) == (this->Z == 0.0))) && (NAN(fVar1) == (fVar1 == 0.0))) {
    fStack_14 = fStack_14 * fStack_c;
    fStack_10 = fStack_c * this->Y;
    fStack_c = fStack_c * this->Z;
  }
  else {
    fStack_14 = 0.0;
    fStack_10 = 0.0;
    fStack_c = 0.0;
  }
  __return_storage_ptr__->X = (float)(int)CONCAT44(fStack_10,fStack_14);
  __return_storage_ptr__->Y = (float)(int)(CONCAT44(fStack_10,fStack_14) >> 0x20);
  __return_storage_ptr__->Z = fStack_c;
  return __return_storage_ptr__;
}





//==== 0083fba0 SetIsSpline ====


/* public: void __thiscall VertexBufferObjectInterface__SetIsSpline(bool) */

void __thiscall
VertexBufferObjectInterface__SetIsSpline(VertexBufferObjectInterface *this,bool param_1)

{
  if (this->Buffer != 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x1c,
                    "!IsGenerated()",(char *)0x0);
    DebugBreak();
  }
  this->IsSplineFlag = param_1;
  return;
}





//==== 0083fbe0 SetSize_0083fbe0 ====


/* private: void  util__Darray_L_structColorTexVertex_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_ColorTexVertex___SetSize(Darray_L_struct_ColorTexVertex_G_ *this,int *param_1)

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
     (puVar3 = (undefined4 *)(iVar4 * 0x30 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x30 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      puVar3 = puVar3 + 0xc;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 0083fcc0 SetSize_0083fcc0 ====


/* private: void  util__Darray_L_structColorVertex_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_ColorVertex___SetSize(Darray_L_struct_ColorVertex_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
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
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x28),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x28))) {
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(undefined8 *)(puVar4 + 8) = 0;
      puVar4 = puVar4 + 10;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x28));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0083fd90 SetTransformMatrix ====


/* public: void  VertexBufferObjectInterface__SetTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &) */

void 
VertexBufferObjectInterface__SetTransformMatrix
          (VertexBufferObjectInterface *this,Matrix4x4_L_double_G_ *param_1)

{
  int iVar1;
  Matrix4x4_L_double_G_ *pMVar2;
  
  pMVar2 = &this->CachedTransformMatrix;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pMVar2->Data = *(undefined4 *)param_1->Data;
    param_1 = (Matrix4x4_L_double_G_ *)((int)param_1->Data + 4);
    pMVar2 = (Matrix4x4_L_double_G_ *)((int)pMVar2->Data + 4);
  }
  return;
}





//==== 0083fdb0 SetType ====


/* public: void __thiscall VertexBufferObjectInterface__SetType(unsigned int) */

void __thiscall VertexBufferObjectInterface__SetType(VertexBufferObjectInterface *this,uint param_1)

{
  this->Type = param_1;
  return;
}




