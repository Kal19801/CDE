// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 004c2730 SetNormalMatrix_004c2730 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PropellantTankShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
PropellantTankShader__SetNormalMatrix(PropellantTankShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c27f0 SetNormalMatrix_004c27f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PropellantTankShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
PropellantTankShader__SetNormalMatrix__o3(PropellantTankShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c2920 SetNormalMatrix_004c2920 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RadiatorShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_
   const &)const  */

void  RadiatorShader__SetNormalMatrix(RadiatorShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004c29e0 SetNormalMatrix_004c29e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RadiatorShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  RadiatorShader__SetNormalMatrix__o3(RadiatorShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004c2b10 SetNormalMatrix_004c2b10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingShadowShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_
   const &)const  */

void  RingShadowShader__SetNormalMatrix(RingShadowShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  }
  return;
}

//==== 004c2bd0 SetNormalMatrix_004c2bd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingShadowShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  RingShadowShader__SetNormalMatrix__o3(RingShadowShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  }
  return;
}

//==== 004c2d00 SetNormalMatrix_004c2d00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  RingsShader__SetNormalMatrix(RingsShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c2dc0 SetNormalMatrix_004c2dc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_ const
   &)const  */

void  RingsShader__SetNormalMatrix__o3(RingsShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c2ef0 SetNormalMatrix_004c2ef0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RocketEngineShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_
   const &)const  */

void 
RocketEngineShader__SetNormalMatrix(RocketEngineShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004c2fb0 SetNormalMatrix_004c2fb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RocketEngineShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
RocketEngineShader__SetNormalMatrix__o3(RocketEngineShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004c30e0 SetNormalMatrix_004c30e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShadowShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  ShadowShader__SetNormalMatrix(ShadowShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  }
  return;
}

//==== 004c31a0 SetNormalMatrix_004c31a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShadowShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  ShadowShader__SetNormalMatrix__o3(ShadowShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  }
  return;
}

//==== 004c32d0 SetNormalMatrix_004c32d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShockwaveShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_
   const &)const  */

void  ShockwaveShader__SetNormalMatrix(ShockwaveShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  }
  return;
}

//==== 004c3390 SetNormalMatrix_004c3390 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShockwaveShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  ShockwaveShader__SetNormalMatrix__o3(ShockwaveShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  }
  return;
}

//==== 004c34b0 SetNormalMatrix_004c34b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SimpleShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  SimpleShader__SetNormalMatrix(SimpleShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  }
  return;
}

//==== 004c3570 SetNormalMatrix_004c3570 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SimpleShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  SimpleShader__SetNormalMatrix__o3(SimpleShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  }
  return;
}

//==== 004c3690 SetNormalMatrix_004c3690 ====


/* public: virtual void  SpacecraftShadowShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
SpacecraftShadowShader__SetNormalMatrix(SpacecraftShadowShader *this,Matrix3x3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x38) != -1) {
    fStack_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    fStack_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    fStack_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(*(int *)(this + 0x38),1,0,&fStack_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004c3750 SetNormalMatrix_004c3750 ====


/* public: virtual void  SpacecraftShadowShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
SpacecraftShadowShader__SetNormalMatrix__o3(SpacecraftShadowShader *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x38) != -1) {
    fStack_2c = (float)param_1->Data[0];
    fStack_28 = (float)param_1->Data[1];
    fStack_24 = (float)param_1->Data[2];
    fStack_20 = (float)param_1->Data[3];
    fStack_1c = (float)param_1->Data[4];
    fStack_18 = (float)param_1->Data[5];
    fStack_14 = (float)param_1->Data[6];
    fStack_10 = (float)param_1->Data[7];
    fStack_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(*(int *)(this + 0x38),1,0,&fStack_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004c3880 SetNormalMatrix_004c3880 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  StarShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_ const
   &)const  */

void  StarShader__SetNormalMatrix(StarShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  }
  return;
}

//==== 004c3940 SetNormalMatrix_004c3940 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  StarShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_ const
   &)const  */

void  StarShader__SetNormalMatrix__o3(StarShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  }
  return;
}

//==== 004c3a60 SetNormalSmoothingAmount ====

/* public: virtual void  PlanetShader__SetNormalSmoothingAmount(float const &)const  */

void  PlanetShader__SetNormalSmoothingAmount(PlanetShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalSmoothingAmountRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c3af0 SetNormalSmoothingAmount_004c3af0 ====

/* public: virtual void  PlanetShader__SetNormalSmoothingAmount(double const &)const  */

void  PlanetShader__SetNormalSmoothingAmount__o3(PlanetShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalSmoothingAmountRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c3b90 SetNormalSmoothingAmountDefault ====

/* private: static void __cdecl PlanetShader__SetNormalSmoothingAmountDefault(void) */

void __cdecl PlanetShader__SetNormalSmoothingAmountDefault(void)

{
  PlanetShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0x3f800000;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xa4))(&local_8);
  return;
}

//==== 004c3bc0 SetNormalsTexture ====

/* public: virtual void __thiscall DeferredGlobalLightingShader__SetNormalsTexture(int const &)const
    */

void __thiscall
DeferredGlobalLightingShader__SetNormalsTexture(DeferredGlobalLightingShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalsTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c3c40 SetNormalsTexture_004c3c40 ====

/* public: virtual void __thiscall DeferredWorldLightingShader__SetNormalsTexture(int const &)const
    */

void __thiscall
DeferredWorldLightingShader__SetNormalsTexture(DeferredWorldLightingShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalsTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c3cc0 SetNormalsTextureDefault ====

/* private: static void __cdecl DeferredGlobalLightingShader__SetNormalsTextureDefault(void) */

void __cdecl DeferredGlobalLightingShader__SetNormalsTextureDefault(void)

{
  DeferredGlobalLightingShader *pDVar1;
  undefined4 local_8;
  
  local_8 = 2;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004c3ce0 SetNormalsTextureDefault_004c3ce0 ====

/* private: static void __cdecl DeferredWorldLightingShader__SetNormalsTextureDefault(void) */

void __cdecl DeferredWorldLightingShader__SetNormalsTextureDefault(void)

{
  DeferredWorldLightingShader *pDVar1;
  undefined4 local_8;
  
  local_8 = 2;
  pDVar1 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004c3d00 SetPayloadDiameter_m ====


/* public: virtual void  BlastLauncherShader__SetPayloadDiameter_m(float const &)const  */

void  BlastLauncherShader__SetPayloadDiameter_m(BlastLauncherShader *this,float *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x4c) != -1) {
    (*___glewUniform1f)(*(int *)(this + 0x4c),*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  return;
}





//==== 004c3d90 SetPayloadDiameter_m_004c3d90 ====


/* public: virtual void  BlastLauncherShader__SetPayloadDiameter_m(double const &)const
    */

void  BlastLauncherShader__SetPayloadDiameter_m__o3(BlastLauncherShader *this,double *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x4c) != -1) {
    (*___glewUniform1f)(*(int *)(this + 0x4c),(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  return;
}





//==== 004c3e20 SetPixelsPerMeter ====

/* public: virtual void  ArmorShader__SetPixelsPerMeter(float const &)const  */

void  ArmorShader__SetPixelsPerMeter(ArmorShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  }
  return;
}

//==== 004c3eb0 SetPixelsPerMeter_004c3eb0 ====

/* public: virtual void  ArmorShader__SetPixelsPerMeter(double const &)const  */

void  ArmorShader__SetPixelsPerMeter__o3(ArmorShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  }
  return;
}

//==== 004c3f40 SetPixelsPerMeter_004c3f40 ====


/* public: virtual void  BlastLauncherShader__SetPixelsPerMeter(float const &)const  */

void  BlastLauncherShader__SetPixelsPerMeter(BlastLauncherShader *this,float *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x48) != -1) {
    (*___glewUniform1f)(*(int *)(this + 0x48),*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  return;
}





//==== 004c3fd0 SetPixelsPerMeter_004c3fd0 ====


/* public: virtual void  BlastLauncherShader__SetPixelsPerMeter(double const &)const  */

void  BlastLauncherShader__SetPixelsPerMeter__o3(BlastLauncherShader *this,double *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x48) != -1) {
    (*___glewUniform1f)(*(int *)(this + 0x48),(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  return;
}





//==== 004c4060 SetPixelsPerMeter_004c4060 ====

/* public: virtual void  DamagedArmorShader__SetPixelsPerMeter(float const &)const  */

void  DamagedArmorShader__SetPixelsPerMeter(DamagedArmorShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  }
  return;
}

//==== 004c40f0 SetPixelsPerMeter_004c40f0 ====

/* public: virtual void  DamagedArmorShader__SetPixelsPerMeter(double const &)const  */

void  DamagedArmorShader__SetPixelsPerMeter__o3(DamagedArmorShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  }
  return;
}

//==== 004c4180 SetPixelsPerMeter_004c4180 ====

/* public: virtual void  GeneralModuleShader__SetPixelsPerMeter(float const &)const  */

void  GeneralModuleShader__SetPixelsPerMeter(GeneralModuleShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  }
  return;
}

//==== 004c4210 SetPixelsPerMeter_004c4210 ====

/* public: virtual void  GeneralModuleShader__SetPixelsPerMeter(double const &)const  */

void  GeneralModuleShader__SetPixelsPerMeter__o3(GeneralModuleShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  }
  return;
}

//==== 004c42a0 SetPixelsPerMeter_004c42a0 ====

/* public: virtual void  PropellantTankShader__SetPixelsPerMeter(float const &)const  */

void  PropellantTankShader__SetPixelsPerMeter(PropellantTankShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c4330 SetPixelsPerMeter_004c4330 ====

/* public: virtual void  PropellantTankShader__SetPixelsPerMeter(double const &)const  */

void  PropellantTankShader__SetPixelsPerMeter__o3(PropellantTankShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c43c0 SetPixelsPerMeter_004c43c0 ====

/* public: virtual void  RadiatorShader__SetPixelsPerMeter(float const &)const  */

void  RadiatorShader__SetPixelsPerMeter(RadiatorShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004c4450 SetPixelsPerMeter_004c4450 ====

/* public: virtual void  RadiatorShader__SetPixelsPerMeter(double const &)const  */

void  RadiatorShader__SetPixelsPerMeter__o3(RadiatorShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004c44e0 SetPixelsPerMeter_004c44e0 ====

/* public: virtual void  RocketEngineShader__SetPixelsPerMeter(float const &)const  */

void  RocketEngineShader__SetPixelsPerMeter(RocketEngineShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004c4570 SetPixelsPerMeter_004c4570 ====

/* public: virtual void  RocketEngineShader__SetPixelsPerMeter(double const &)const  */

void  RocketEngineShader__SetPixelsPerMeter__o3(RocketEngineShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PixelsPerMeterRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004c4600 SetPropellantTankCylindricalHeight_m ====

/* public: virtual void  PropellantTankShader__SetPropellantTankCylindricalHeight_m(float
   const &)const  */

void 
PropellantTankShader__SetPropellantTankCylindricalHeight_m
          (PropellantTankShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PropellantTankCylindricalHeight_mRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c4690 SetPropellantTankCylindricalHeight_m_004c4690 ====

/* public: virtual void  PropellantTankShader__SetPropellantTankCylindricalHeight_m(double
   const &)const  */

void 
PropellantTankShader__SetPropellantTankCylindricalHeight_m__o2
          (PropellantTankShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PropellantTankCylindricalHeight_mRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c4720 SetRandomIntegralOffset ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidCratersShader__SetRandomIntegralOffset(struct
   util__Vec2_L_int_G_ const &)const  */

void __thiscall
AsteroidCratersShader__SetRandomIntegralOffset(AsteroidCratersShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomIntegralOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004c47d0 SetRandomOffset ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidDiffuseShader__SetRandomOffset(struct util__Vec2_L_float_G_
   const &)const  */

void 
AsteroidDiffuseShader__SetRandomOffset(AsteroidDiffuseShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004c4890 SetRandomOffset_004c4890 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidDiffuseShader__SetRandomOffset(struct util__Vec2_L_double_G_
   const &)const  */

void 
AsteroidDiffuseShader__SetRandomOffset__o3(AsteroidDiffuseShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004c4950 SetRandomOffset_004c4950 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  CityLightsShader__SetRandomOffset(struct util__Vec2_L_float_G_ const
   &)const  */

void  CityLightsShader__SetRandomOffset(CityLightsShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004c4a10 SetRandomOffset_004c4a10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  CityLightsShader__SetRandomOffset(struct util__Vec2_L_double_G_ const
   &)const  */

void  CityLightsShader__SetRandomOffset__o3(CityLightsShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004c4ad0 SetRandomOffset_004c4ad0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamageGeneratorShader__SetRandomOffset(struct util__Vec2_L_float_G_
   const &)const  */

void 
DamageGeneratorShader__SetRandomOffset(DamageGeneratorShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004c4b90 SetRandomOffset_004c4b90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamageGeneratorShader__SetRandomOffset(struct util__Vec2_L_double_G_
   const &)const  */

void 
DamageGeneratorShader__SetRandomOffset__o3(DamageGeneratorShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004c4c50 SetRandomOffset_004c4c50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ParticleShader__SetRandomOffset(struct util__Vec2_L_float_G_ const
   &)const  */

void  ParticleShader__SetRandomOffset(ParticleShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004c4d10 SetRandomOffset_004c4d10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ParticleShader__SetRandomOffset(struct util__Vec2_L_double_G_ const
   &)const  */

void  ParticleShader__SetRandomOffset__o3(ParticleShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomOffsetRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004c4dd0 SetRandomizer ====

/* public: virtual void  ExhaustShader__SetRandomizer(float const &)const  */

void  ExhaustShader__SetRandomizer(ExhaustShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomizerRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  }
  return;
}

//==== 004c4e60 SetRandomizer_004c4e60 ====

/* public: virtual void  ExhaustShader__SetRandomizer(double const &)const  */

void  ExhaustShader__SetRandomizer__o3(ExhaustShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RandomizerRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  }
  return;
}

//==== 004c4ef0 SetReferenceIrradiance_W_m2_004c4ef0 ====

/* public: virtual void  DeferredGlobalLightingShader__SetReferenceIrradiance_W_m2(float
   const &)const  */

void 
DeferredGlobalLightingShader__SetReferenceIrradiance_W_m2
          (DeferredGlobalLightingShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c4f80 SetReferenceIrradiance_W_m2_004c4f80 ====

/* public: virtual void  DeferredGlobalLightingShader__SetReferenceIrradiance_W_m2(double
   const &)const  */

void 
DeferredGlobalLightingShader__SetReferenceIrradiance_W_m2__o2
          (DeferredGlobalLightingShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c5010 SetReferenceIrradiance_W_m2_004c5010 ====

/* public: virtual void  DeferredWorldLightingShader__SetReferenceIrradiance_W_m2(float
   const &)const  */

void 
DeferredWorldLightingShader__SetReferenceIrradiance_W_m2
          (DeferredWorldLightingShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c50a0 SetReferenceIrradiance_W_m2_004c50a0 ====

/* public: virtual void  DeferredWorldLightingShader__SetReferenceIrradiance_W_m2(double
   const &)const  */

void 
DeferredWorldLightingShader__SetReferenceIrradiance_W_m2__o2
          (DeferredWorldLightingShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c5130 SetReferenceIrradiance_W_m2_004c5130 ====

/* public: virtual void  PlanetShader__SetReferenceIrradiance_W_m2(float const &)const  */

void  PlanetShader__SetReferenceIrradiance_W_m2(PlanetShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c51c0 SetReferenceIrradiance_W_m2_004c51c0 ====

/* public: virtual void  PlanetShader__SetReferenceIrradiance_W_m2(double const &)const
    */

void  PlanetShader__SetReferenceIrradiance_W_m2__o3(PlanetShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c5260 SetReferenceIrradiance_W_m2_004c5260 ====

/* public: virtual void  RingsShader__SetReferenceIrradiance_W_m2(float const &)const  */

void  RingsShader__SetReferenceIrradiance_W_m2(RingsShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c52f0 SetReferenceIrradiance_W_m2_004c52f0 ====

/* public: virtual void  RingsShader__SetReferenceIrradiance_W_m2(double const &)const  */

void  RingsShader__SetReferenceIrradiance_W_m2__o3(RingsShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c5380 SetShadowFarPlane_004c5380 ====

/* public: virtual void  PlanetShader__SetShadowFarPlane(float const &)const  */

void  PlanetShader__SetShadowFarPlane(PlanetShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowFarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c5410 SetShadowFarPlane_004c5410 ====

/* public: virtual void  PlanetShader__SetShadowFarPlane(double const &)const  */

void  PlanetShader__SetShadowFarPlane__o3(PlanetShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowFarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c54b0 SetShadowMapBias_004c54b0 ====

/* public: virtual void  PlanetShader__SetShadowMapBias(float const &)const  */

void  PlanetShader__SetShadowMapBias(PlanetShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMapBiasRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c5540 SetShadowMapBias_004c5540 ====

/* public: virtual void  PlanetShader__SetShadowMapBias(double const &)const  */

void  PlanetShader__SetShadowMapBias__o3(PlanetShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMapBiasRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c55d0 SetShadowMapBias_004c55d0 ====

/* public: virtual void  RingsShader__SetShadowMapBias(float const &)const  */

void  RingsShader__SetShadowMapBias(RingsShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMapBiasRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c5660 SetShadowMapBias_004c5660 ====

/* public: virtual void  RingsShader__SetShadowMapBias(double const &)const  */

void  RingsShader__SetShadowMapBias__o3(RingsShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMapBiasRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c56f0 SetShadowMatrix_004c56f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetShadowMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  PlanetShader__SetShadowMatrix(PlanetShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMatrixRegisterInstance).Location;
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c57c0 SetShadowMatrix_004c57c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetShadowMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  PlanetShader__SetShadowMatrix__o3(PlanetShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMatrixRegisterInstance).Location;
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c58c0 SetShadowMatrix_004c58c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetShadowMatrix(struct util__Matrix4x4_L_float_G_ const
   &)const  */

void  RingsShader__SetShadowMatrix(RingsShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMatrixRegisterInstance).Location;
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c5990 SetShadowMatrix_004c5990 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetShadowMatrix(struct util__Matrix4x4_L_double_G_ const
   &)const  */

void  RingsShader__SetShadowMatrix__o3(RingsShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowMatrixRegisterInstance).Location;
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c5a90 SetShadowMatrixDefault_004c5a90 ====

/* private: static void __cdecl PlanetShader__SetShadowMatrixDefault(void) */

void __cdecl PlanetShader__SetShadowMatrixDefault(void)

{
  PlanetShader *pPVar1;
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
  
  pPVar1 = PlanetShader__GetStatic();
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x5c))(&local_90);
  return;
}

//==== 004c5b70 SetShadowMatrixDefault_004c5b70 ====

/* private: static void __cdecl RingsShader__SetShadowMatrixDefault(void) */

void __cdecl RingsShader__SetShadowMatrixDefault(void)

{
  RingsShader *pRVar1;
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
  
  pRVar1 = RingsShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x50))(&local_90);
  return;
}

//==== 004c5c50 SetShadowNearPlane_004c5c50 ====

/* public: virtual void  PlanetShader__SetShadowNearPlane(float const &)const  */

void  PlanetShader__SetShadowNearPlane(PlanetShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowNearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c5ce0 SetShadowNearPlane_004c5ce0 ====

/* public: virtual void  PlanetShader__SetShadowNearPlane(double const &)const  */

void  PlanetShader__SetShadowNearPlane__o3(PlanetShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowNearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c5d80 SetShadowTexture_004c5d80 ====

/* public: virtual void __thiscall PlanetShader__SetShadowTexture(int const &)const  */

void __thiscall PlanetShader__SetShadowTexture(PlanetShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c5e10 SetShadowTexture_004c5e10 ====

/* public: virtual void __thiscall RingsShader__SetShadowTexture(int const &)const  */

void __thiscall RingsShader__SetShadowTexture(RingsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShadowTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c5ea0 SetShadowTextureDefault_004c5ea0 ====

/* private: static void __cdecl PlanetShader__SetShadowTextureDefault(void) */

void __cdecl PlanetShader__SetShadowTextureDefault(void)

{
  PlanetShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 6;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x7c))(&local_8);
  return;
}

//==== 004c5ec0 SetShadowTextureDefault_004c5ec0 ====

/* private: static void __cdecl RingsShader__SetShadowTextureDefault(void) */

void __cdecl RingsShader__SetShadowTextureDefault(void)

{
  RingsShader *pRVar1;
  undefined4 local_8;
  
  local_8 = 2;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x74))(&local_8);
  return;
}

//==== 004c5ee0 SetShouldDrawGlow ====

/* public: virtual void __thiscall SimpleShader__SetShouldDrawGlow(bool const &)const  */

void __thiscall SimpleShader__SetShouldDrawGlow(SimpleShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ShouldDrawGlowRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  }
  return;
}

//==== 004c5f90 SetSpecularCubeTexture ====

/* public: virtual void __thiscall PlanetShader__SetSpecularCubeTexture(int const &)const  */

void __thiscall PlanetShader__SetSpecularCubeTexture(PlanetShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SpecularCubeTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c6020 SetSpecularCubeTextureDefault ====

/* private: static void __cdecl PlanetShader__SetSpecularCubeTextureDefault(void) */

void __cdecl PlanetShader__SetSpecularCubeTextureDefault(void)

{
  PlanetShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 3;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x70))(&local_8);
  return;
}

//==== 004c6040 SetStarlightColor_004c6040 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetStarlightColor(struct util__Vec3_L_float_G_ const
   &)const  */

void  PlanetShader__SetStarlightColor(PlanetShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c6100 SetStarlightColor_004c6100 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetStarlightColor(struct util__Vec3_L_double_G_ const
   &)const  */

void  PlanetShader__SetStarlightColor__o3(PlanetShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c61d0 SetStarlightColor_004c61d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetStarlightColor(struct util__Vec3_L_float_G_ const
   &)const  */

void  RingsShader__SetStarlightColor(RingsShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c6290 SetStarlightColor_004c6290 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetStarlightColor(struct util__Vec3_L_double_G_ const
   &)const  */

void  RingsShader__SetStarlightColor__o3(RingsShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c6360 SetStarlightColorDefault_004c6360 ====

/* private: static void __cdecl PlanetShader__SetStarlightColorDefault(void) */

void __cdecl PlanetShader__SetStarlightColorDefault(void)

{
  PlanetShader *pPVar1;
  float fVar2;
  undefined8 local_1c;
  float local_14;
  ulonglong local_10;
  float local_8;
  
  local_10 = (ulonglong)(uint)(float)Physics__AverageColorOfTheUniverse.X;
  local_8 = (float)Physics__AverageColorOfTheUniverse.Y;
  fVar2 = (float)Physics__AverageColorOfTheUniverse.Z;
  pPVar1 = PlanetShader__GetStatic();
  local_1c = CONCAT44(local_8,(int)local_10);
  local_14 = fVar2;
  (**(code **)(pPVar1->_pad_0x0_0 + 0xe0))(&local_1c);
  return;
}

//==== 004c63d0 SetStarlightColorDefault_004c63d0 ====

/* private: static void __cdecl RingsShader__SetStarlightColorDefault(void) */

void __cdecl RingsShader__SetStarlightColorDefault(void)

{
  RingsShader *pRVar1;
  float fVar2;
  undefined8 local_1c;
  float local_14;
  ulonglong local_10;
  float local_8;
  
  local_10 = (ulonglong)(uint)(float)Physics__AverageColorOfTheUniverse.X;
  local_8 = (float)Physics__AverageColorOfTheUniverse.Y;
  fVar2 = (float)Physics__AverageColorOfTheUniverse.Z;
  pRVar1 = RingsShader__GetStatic();
  local_1c = CONCAT44(local_8,(int)local_10);
  local_14 = fVar2;
  (**(code **)(pRVar1->_pad_0x0_0 + 0x7c))(&local_1c);
  return;
}

//==== 004c6440 SetStarlightIrradiance_W_m2_004c6440 ====

/* public: virtual void  PlanetShader__SetStarlightIrradiance_W_m2(float const &)const  */

void  PlanetShader__SetStarlightIrradiance_W_m2(PlanetShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c64d0 SetStarlightIrradiance_W_m2_004c64d0 ====

/* public: virtual void  PlanetShader__SetStarlightIrradiance_W_m2(double const &)const
    */

void  PlanetShader__SetStarlightIrradiance_W_m2__o3(PlanetShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c6570 SetStarlightIrradiance_W_m2_004c6570 ====

/* public: virtual void  RingsShader__SetStarlightIrradiance_W_m2(float const &)const  */

void  RingsShader__SetStarlightIrradiance_W_m2(RingsShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c6600 SetStarlightIrradiance_W_m2_004c6600 ====

/* public: virtual void  RingsShader__SetStarlightIrradiance_W_m2(double const &)const  */

void  RingsShader__SetStarlightIrradiance_W_m2__o3(RingsShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004c6690 SetStarlightIrradiance_W_m2Default_004c6690 ====

/* private: static void __cdecl PlanetShader__SetStarlightIrradiance_W_m2Default(void) */

void __cdecl PlanetShader__SetStarlightIrradiance_W_m2Default(void)

{
  PlanetShader *pPVar1;
  undefined4 local_8;
  
  local_8 = 0x3715937b;
  pPVar1 = PlanetShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0xe8))(&local_8);
  return;
}

//==== 004c66c0 SetStarlightIrradiance_W_m2Default_004c66c0 ====

/* private: static void __cdecl RingsShader__SetStarlightIrradiance_W_m2Default(void) */

void __cdecl RingsShader__SetStarlightIrradiance_W_m2Default(void)

{
  RingsShader *pRVar1;
  undefined4 local_8;
  
  local_8 = 0x3715937b;
  pRVar1 = RingsShader__GetStatic();
  (**(code **)(pRVar1->_pad_0x0_0 + 0x84))(&local_8);
  return;
}

//==== 004c66f0 SetSunIsInShadow_004c66f0 ====

/* public: virtual void __thiscall PlanetShader__SetSunIsInShadow(bool const &)const  */

void __thiscall PlanetShader__SetSunIsInShadow(PlanetShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SunIsInShadowRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c6780 SetSunlightDirection_004c6780 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetSunlightDirection(struct util__Vec3_L_float_G_ const
   &)const  */

void  PlanetShader__SetSunlightDirection(PlanetShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SunlightDirectionRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c6840 SetSunlightDirection_004c6840 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetSunlightDirection(struct util__Vec3_L_double_G_
   const &)const  */

void  PlanetShader__SetSunlightDirection__o3(PlanetShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SunlightDirectionRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c6910 SetTexture_004c6910 ====

/* public: virtual void __thiscall SimpleShader__SetTexture(int const &)const  */

void __thiscall SimpleShader__SetTexture(SimpleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  }
  return;
}

//==== 004c6990 SetTextureDefault ====

/* private: static void __cdecl SimpleShader__SetTextureDefault(void) */

void __cdecl SimpleShader__SetTextureDefault(void)

{
  SimpleShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pSVar1 = SimpleShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004c69b0 SetTextureMask ====

/* public: virtual void __thiscall DamageShader__SetTextureMask(int const &)const  */

void __thiscall DamageShader__SetTextureMask(DamageShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureMaskRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  }
  return;
}

//==== 004c6a30 SetTextureSize ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ArmorShader__SetTextureSize(struct util__Vec2_L_float_G_ const
   &)const  */

void  ArmorShader__SetTextureSize(ArmorShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  }
  return;
}

//==== 004c6ae0 SetTextureSize_004c6ae0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ArmorShader__SetTextureSize(struct util__Vec2_L_double_G_ const
   &)const  */

void  ArmorShader__SetTextureSize__o3(ArmorShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  }
  return;
}

//==== 004c6ba0 SetTextureSize_004c6ba0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidCratersShader__SetTextureSize(struct util__Vec2_L_int_G_
   const &)const  */

void __thiscall
AsteroidCratersShader__SetTextureSize(AsteroidCratersShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004c6c50 SetTextureSize_004c6c50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidDiffuseShader__SetTextureSize(struct util__Vec2_L_int_G_
   const &)const  */

void __thiscall
AsteroidDiffuseShader__SetTextureSize(AsteroidDiffuseShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004c6d00 SetTextureSize_004c6d00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidHeightShader__SetTextureSize(struct util__Vec2_L_int_G_ const
   &)const  */

void __thiscall AsteroidHeightShader__SetTextureSize(AsteroidHeightShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  }
  return;
}

//==== 004c6db0 SetTextureSize_004c6db0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AsteroidNormalShader__SetTextureSize(struct util__Vec2_L_int_G_ const
   &)const  */

void __thiscall AsteroidNormalShader__SetTextureSize(AsteroidNormalShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  }
  return;
}

//==== 004c6e60 SetTextureSize_004c6e60 ====


/* public: virtual void  BlastLauncherShader__SetTextureSize(struct util__Vec2_L_float_G_
   const &)const  */

void  BlastLauncherShader__SetTextureSize(BlastLauncherShader *this,Vec2_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x44) != -1) {
    fStack_10 = param_1->X;
    fStack_c = param_1->Y;
    (*___glewUniform2fv)(*(int *)(this + 0x44),1,&fStack_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004c6f10 SetTextureSize_004c6f10 ====


/* public: virtual void  BlastLauncherShader__SetTextureSize(struct util__Vec2_L_double_G_
   const &)const  */

void  BlastLauncherShader__SetTextureSize__o3(BlastLauncherShader *this,Vec2_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x44) != -1) {
    fStack_10 = (float)param_1->X;
    fStack_c = (float)param_1->Y;
    (*___glewUniform2fv)(*(int *)(this + 0x44),1,&fStack_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004c6fe0 SetTextureSize_004c6fe0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall CityLightsShader__SetTextureSize(struct util__Vec2_L_int_G_ const
   &)const  */

void __thiscall CityLightsShader__SetTextureSize(CityLightsShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004c7090 SetTextureSize_004c7090 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall DamageGeneratorShader__SetTextureSize(struct util__Vec2_L_int_G_
   const &)const  */

void __thiscall
DamageGeneratorShader__SetTextureSize(DamageGeneratorShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004c7140 SetTextureSize_004c7140 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamagedArmorShader__SetTextureSize(struct util__Vec2_L_float_G_ const
   &)const  */

void  DamagedArmorShader__SetTextureSize(DamagedArmorShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  }
  return;
}

//==== 004c71f0 SetTextureSize_004c71f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamagedArmorShader__SetTextureSize(struct util__Vec2_L_double_G_
   const &)const  */

void  DamagedArmorShader__SetTextureSize__o3(DamagedArmorShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  }
  return;
}

//==== 004c72b0 SetTextureSize_004c72b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  GeneralModuleShader__SetTextureSize(struct util__Vec2_L_float_G_
   const &)const  */

void  GeneralModuleShader__SetTextureSize(GeneralModuleShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  }
  return;
}

//==== 004c7370 SetTextureSize_004c7370 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  GeneralModuleShader__SetTextureSize(struct util__Vec2_L_double_G_
   const &)const  */

void  GeneralModuleShader__SetTextureSize__o3(GeneralModuleShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  }
  return;
}

//==== 004c7430 SetTextureSize_004c7430 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall ParticleShader__SetTextureSize(struct util__Vec2_L_int_G_ const
   &)const  */

void __thiscall ParticleShader__SetTextureSize(ParticleShader *this,Vec2_L_int_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2iv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004c74e0 SetTextureSize_004c74e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PropellantTankShader__SetTextureSize(struct util__Vec2_L_float_G_
   const &)const  */

void 
PropellantTankShader__SetTextureSize(PropellantTankShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c75a0 SetTextureSize_004c75a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PropellantTankShader__SetTextureSize(struct util__Vec2_L_double_G_
   const &)const  */

void 
PropellantTankShader__SetTextureSize__o3(PropellantTankShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c7660 SetTextureSize_004c7660 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RadiatorShader__SetTextureSize(struct util__Vec2_L_float_G_ const
   &)const  */

void  RadiatorShader__SetTextureSize(RadiatorShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004c7720 SetTextureSize_004c7720 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RadiatorShader__SetTextureSize(struct util__Vec2_L_double_G_ const
   &)const  */

void  RadiatorShader__SetTextureSize__o3(RadiatorShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004c77e0 SetTextureSize_004c77e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RocketEngineShader__SetTextureSize(struct util__Vec2_L_float_G_ const
   &)const  */

void  RocketEngineShader__SetTextureSize(RocketEngineShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004c78a0 SetTextureSize_004c78a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RocketEngineShader__SetTextureSize(struct util__Vec2_L_double_G_
   const &)const  */

void  RocketEngineShader__SetTextureSize__o3(RocketEngineShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureSizeRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004c7960 SetTime ====

/* public: virtual void  ExhaustShader__SetTime(float const &)const  */

void  ExhaustShader__SetTime(ExhaustShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TimeRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  }
  return;
}

//==== 004c79f0 SetTime_004c79f0 ====

/* public: virtual void  ExhaustShader__SetTime(double const &)const  */

void  ExhaustShader__SetTime__o3(ExhaustShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TimeRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  }
  return;
}

//==== 004c7a80 SetTopLeftFrustumCorner ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredGlobalLightingShader__SetTopLeftFrustumCorner(struct
   util__Vec3_L_float_G_ const &)const  */

void 
DeferredGlobalLightingShader__SetTopLeftFrustumCorner
          (DeferredGlobalLightingShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopLeftFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c7b30 SetTopLeftFrustumCorner_004c7b30 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredGlobalLightingShader__SetTopLeftFrustumCorner(struct
   util__Vec3_L_double_G_ const &)const  */

void 
DeferredGlobalLightingShader__SetTopLeftFrustumCorner__o2
          (DeferredGlobalLightingShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopLeftFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c7c00 SetTopLeftFrustumCorner_004c7c00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredWorldLightingShader__SetTopLeftFrustumCorner(struct
   util__Vec3_L_float_G_ const &)const  */

void 
DeferredWorldLightingShader__SetTopLeftFrustumCorner
          (DeferredWorldLightingShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopLeftFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c7cb0 SetTopLeftFrustumCorner_004c7cb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredWorldLightingShader__SetTopLeftFrustumCorner(struct
   util__Vec3_L_double_G_ const &)const  */

void 
DeferredWorldLightingShader__SetTopLeftFrustumCorner__o2
          (DeferredWorldLightingShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopLeftFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c7d80 SetTopRightFrustumCorner ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredGlobalLightingShader__SetTopRightFrustumCorner(struct
   util__Vec3_L_float_G_ const &)const  */

void 
DeferredGlobalLightingShader__SetTopRightFrustumCorner
          (DeferredGlobalLightingShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopRightFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c7e30 SetTopRightFrustumCorner_004c7e30 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredGlobalLightingShader__SetTopRightFrustumCorner(struct
   util__Vec3_L_double_G_ const &)const  */

void 
DeferredGlobalLightingShader__SetTopRightFrustumCorner__o2
          (DeferredGlobalLightingShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopRightFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c7f00 SetTopRightFrustumCorner_004c7f00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredWorldLightingShader__SetTopRightFrustumCorner(struct
   util__Vec3_L_float_G_ const &)const  */

void 
DeferredWorldLightingShader__SetTopRightFrustumCorner
          (DeferredWorldLightingShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopRightFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c7fc0 SetTopRightFrustumCorner_004c7fc0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredWorldLightingShader__SetTopRightFrustumCorner(struct
   util__Vec3_L_double_G_ const &)const  */

void 
DeferredWorldLightingShader__SetTopRightFrustumCorner__o2
          (DeferredWorldLightingShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TopRightFrustumCornerRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c8090 SetTotalTransformMatrix_004c8090 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ArmorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  ArmorShader__SetTotalTransformMatrix(ArmorShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  }
  return;
}

//==== 004c8150 SetTotalTransformMatrix_004c8150 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ArmorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  ArmorShader__SetTotalTransformMatrix__o3(ArmorShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x78);
  }
  return;
}

//==== 004c8240 SetTotalTransformMatrix_004c8240 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidCratersShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
AsteroidCratersShader__SetTotalTransformMatrix
          (AsteroidCratersShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004c8310 SetTotalTransformMatrix_004c8310 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidCratersShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
AsteroidCratersShader__SetTotalTransformMatrix__o2
          (AsteroidCratersShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004c8410 SetTotalTransformMatrix_004c8410 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidDiffuseShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
AsteroidDiffuseShader__SetTotalTransformMatrix
          (AsteroidDiffuseShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004c84e0 SetTotalTransformMatrix_004c84e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidDiffuseShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
AsteroidDiffuseShader__SetTotalTransformMatrix__o2
          (AsteroidDiffuseShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004c85e0 SetTotalTransformMatrix_004c85e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidHeightShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
AsteroidHeightShader__SetTotalTransformMatrix(AsteroidHeightShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  }
  return;
}

//==== 004c86b0 SetTotalTransformMatrix_004c86b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidHeightShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
AsteroidHeightShader__SetTotalTransformMatrix__o3(AsteroidHeightShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x107);
  }
  return;
}

//==== 004c87b0 SetTotalTransformMatrix_004c87b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidNormalShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
AsteroidNormalShader__SetTotalTransformMatrix(AsteroidNormalShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  }
  return;
}

//==== 004c8880 SetTotalTransformMatrix_004c8880 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  AsteroidNormalShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
AsteroidNormalShader__SetTotalTransformMatrix__o3(AsteroidNormalShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x10c);
  }
  return;
}

//==== 004c8980 SetTotalTransformMatrix_004c8980 ====


/* public: virtual void  BlastLauncherShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
BlastLauncherShader__SetTotalTransformMatrix(BlastLauncherShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x34) != -1) {
    fStack_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    fStack_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    fStack_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    fStack_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(*(int *)(this + 0x34),1,0,&fStack_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004c8a40 SetTotalTransformMatrix_004c8a40 ====


/* public: virtual void  BlastLauncherShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
BlastLauncherShader__SetTotalTransformMatrix__o3(BlastLauncherShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 auStack_48 [8];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = *(int *)(this + 0x34);
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)auStack_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)auStack_48 + iVar5 * 4 + 8) =
           CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)auStack_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4)
      ;
      *(ulonglong *)((int)auStack_48 + iVar5 * 4 + 0x18) =
           CONCAT44((float)pdVar4[3],(float)pdVar4[2]);
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,auStack_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x7e);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004c8b30 SetTotalTransformMatrix_004c8b30 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  CityLightsShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
CityLightsShader__SetTotalTransformMatrix(CityLightsShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004c8c00 SetTotalTransformMatrix_004c8c00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  CityLightsShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
CityLightsShader__SetTotalTransformMatrix__o3(CityLightsShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004c8d00 SetTotalTransformMatrix_004c8d00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamageGeneratorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
DamageGeneratorShader__SetTotalTransformMatrix
          (DamageGeneratorShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004c8dd0 SetTotalTransformMatrix_004c8dd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamageGeneratorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
DamageGeneratorShader__SetTotalTransformMatrix__o2
          (DamageGeneratorShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004c8ed0 SetTotalTransformMatrix_004c8ed0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamageShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  DamageShader__SetTotalTransformMatrix(DamageShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  }
  return;
}

//==== 004c8f90 SetTotalTransformMatrix_004c8f90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamageShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  DamageShader__SetTotalTransformMatrix__o3(DamageShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  }
  return;
}

//==== 004c9080 SetTotalTransformMatrix_004c9080 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamagedArmorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
DamagedArmorShader__SetTotalTransformMatrix(DamagedArmorShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  }
  return;
}

//==== 004c9140 SetTotalTransformMatrix_004c9140 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DamagedArmorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
DamagedArmorShader__SetTotalTransformMatrix__o3(DamagedArmorShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x74);
  }
  return;
}

//==== 004c9230 SetTotalTransformMatrix_004c9230 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredGlobalLightingShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
DeferredGlobalLightingShader__SetTotalTransformMatrix
          (DeferredGlobalLightingShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c92f0 SetTotalTransformMatrix_004c92f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredGlobalLightingShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
DeferredGlobalLightingShader__SetTotalTransformMatrix__o2
          (DeferredGlobalLightingShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x52);
  }
  return;
}

//==== 004c93e0 SetTotalTransformMatrix_004c93e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredWorldLightingShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
DeferredWorldLightingShader__SetTotalTransformMatrix
          (DeferredWorldLightingShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c94a0 SetTotalTransformMatrix_004c94a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  DeferredWorldLightingShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
DeferredWorldLightingShader__SetTotalTransformMatrix__o2
          (DeferredWorldLightingShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x5a);
  }
  return;
}

//==== 004c9590 SetTotalTransformMatrix_004c9590 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  EquirectangularToCubeMapShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
EquirectangularToCubeMapShader__SetTotalTransformMatrix
          (EquirectangularToCubeMapShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  }
  return;
}

//==== 004c9660 SetTotalTransformMatrix_004c9660 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  EquirectangularToCubeMapShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
EquirectangularToCubeMapShader__SetTotalTransformMatrix__o2
          (EquirectangularToCubeMapShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x11d);
  }
  return;
}

//==== 004c9760 SetTotalTransformMatrix_004c9760 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ExhaustShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
ExhaustShader__SetTotalTransformMatrix(ExhaustShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  }
  return;
}

//==== 004c9820 SetTotalTransformMatrix_004c9820 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ExhaustShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
ExhaustShader__SetTotalTransformMatrix__o3(ExhaustShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x60);
  }
  return;
}

//==== 004c9910 SetTotalTransformMatrix_004c9910 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  GeneralModuleShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
GeneralModuleShader__SetTotalTransformMatrix(GeneralModuleShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  }
  return;
}

//==== 004c99e0 SetTotalTransformMatrix_004c99e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  GeneralModuleShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
GeneralModuleShader__SetTotalTransformMatrix__o3(GeneralModuleShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8f);
  }
  return;
}

//==== 004c9ae0 SetTotalTransformMatrix_004c9ae0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ParticleShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
ParticleShader__SetTotalTransformMatrix(ParticleShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004c9bb0 SetTotalTransformMatrix_004c9bb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ParticleShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
ParticleShader__SetTotalTransformMatrix__o3(ParticleShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004c9cb0 SetTotalTransformMatrix_004c9cb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  PlanetShader__SetTotalTransformMatrix(PlanetShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c9d80 SetTotalTransformMatrix_004c9d80 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PlanetShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  PlanetShader__SetTotalTransformMatrix__o3(PlanetShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004c9e80 SetTotalTransformMatrix_004c9e80 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PropellantTankShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
PropellantTankShader__SetTotalTransformMatrix(PropellantTankShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004c9f50 SetTotalTransformMatrix_004c9f50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  PropellantTankShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
PropellantTankShader__SetTotalTransformMatrix__o3(PropellantTankShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x83);
  }
  return;
}

//==== 004ca050 SetTotalTransformMatrix_004ca050 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RadiatorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
RadiatorShader__SetTotalTransformMatrix(RadiatorShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004ca120 SetTotalTransformMatrix_004ca120 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RadiatorShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
RadiatorShader__SetTotalTransformMatrix__o3(RadiatorShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x87);
  }
  return;
}

//==== 004ca220 SetTotalTransformMatrix_004ca220 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingShadowShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
RingShadowShader__SetTotalTransformMatrix(RingShadowShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  }
  return;
}

//==== 004ca2f0 SetTotalTransformMatrix_004ca2f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingShadowShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
RingShadowShader__SetTotalTransformMatrix__o3(RingShadowShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd7);
  }
  return;
}

//==== 004ca3f0 SetTotalTransformMatrix_004ca3f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  RingsShader__SetTotalTransformMatrix(RingsShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004ca4c0 SetTotalTransformMatrix_004ca4c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RingsShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  RingsShader__SetTotalTransformMatrix__o3(RingsShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",200);
  }
  return;
}

//==== 004ca5c0 SetTotalTransformMatrix_004ca5c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RocketEngineShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
RocketEngineShader__SetTotalTransformMatrix(RocketEngineShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004ca690 SetTotalTransformMatrix_004ca690 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  RocketEngineShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
RocketEngineShader__SetTotalTransformMatrix__o3(RocketEngineShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x8b);
  }
  return;
}

//==== 004ca790 SetTotalTransformMatrix_004ca790 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShadowShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  ShadowShader__SetTotalTransformMatrix(ShadowShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  }
  return;
}

//==== 004ca860 SetTotalTransformMatrix_004ca860 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShadowShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  ShadowShader__SetTotalTransformMatrix__o3(ShadowShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xca);
  }
  return;
}

//==== 004ca960 SetTotalTransformMatrix_004ca960 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShockwaveShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
ShockwaveShader__SetTotalTransformMatrix(ShockwaveShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  }
  return;
}

//==== 004caa20 SetTotalTransformMatrix_004caa20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  ShockwaveShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
ShockwaveShader__SetTotalTransformMatrix__o3(ShockwaveShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x62);
  }
  return;
}

//==== 004cab10 SetTotalTransformMatrix_004cab10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SimpleShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void  SimpleShader__SetTotalTransformMatrix(SimpleShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  }
  return;
}

//==== 004cabd0 SetTotalTransformMatrix_004cabd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SimpleShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  SimpleShader__SetTotalTransformMatrix__o3(SimpleShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  }
  return;
}

//==== 004cacc0 SetTotalTransformMatrix_004cacc0 ====


/* public: virtual void  SpacecraftShadowShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
SpacecraftShadowShader__SetTotalTransformMatrix
          (SpacecraftShadowShader *this,Matrix4x4_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  uint *puVar2;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x34) != -1) {
    fStack_48 = param_1->Data[0];
    fStack_44 = param_1->Data[1];
    fStack_40 = param_1->Data[2];
    fStack_3c = param_1->Data[3];
    fStack_38 = param_1->Data[4];
    fStack_34 = param_1->Data[5];
    fStack_30 = param_1->Data[6];
    fStack_2c = param_1->Data[7];
    fStack_28 = param_1->Data[8];
    fStack_24 = param_1->Data[9];
    fStack_20 = param_1->Data[10];
    fStack_1c = param_1->Data[0xb];
    fStack_18 = param_1->Data[0xc];
    fStack_14 = param_1->Data[0xd];
    fStack_10 = param_1->Data[0xe];
    fStack_c = param_1->Data[0xf];
    (*___glewUniformMatrix4fv)(*(int *)(this + 0x34),1,0,&fStack_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004cad90 SetTotalTransformMatrix_004cad90 ====


/* public: virtual void  SpacecraftShadowShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
SpacecraftShadowShader__SetTotalTransformMatrix__o2
          (SpacecraftShadowShader *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  uint *puVar3;
  double *pdVar4;
  int iVar5;
  undefined8 auStack_48 [8];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = *(int *)(this + 0x34);
  if (iVar1 != -1) {
    iVar5 = 0;
    pdVar4 = param_1->Data + 4;
    do {
      *(ulonglong *)((int)auStack_48 + iVar5 * 4) =
           CONCAT44((float)pdVar4[-3],(float)((Matrix4x4_L_double_G_ *)(pdVar4 + -4))->Data[0]);
      *(ulonglong *)((int)auStack_48 + iVar5 * 4 + 8) =
           CONCAT44((float)pdVar4[-1],(float)pdVar4[-2]);
      *(ulonglong *)((int)auStack_48 + iVar5 * 4 + 0x10) = CONCAT44((float)pdVar4[1],(float)*pdVar4)
      ;
      *(ulonglong *)((int)auStack_48 + iVar5 * 4 + 0x18) =
           CONCAT44((float)pdVar4[3],(float)pdVar4[2]);
      iVar5 = iVar5 + 8;
      pdVar4 = pdVar4 + 8;
    } while (iVar5 < 0x10);
    (*___glewUniformMatrix4fv)(iVar1,1,0,auStack_48);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004cae90 SetTotalTransformMatrix_004cae90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  StarShader__SetTotalTransformMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  StarShader__SetTotalTransformMatrix(StarShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  }
  return;
}

//==== 004caf50 SetTotalTransformMatrix_004caf50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  StarShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void  StarShader__SetTotalTransformMatrix__o3(StarShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xc);
  }
  return;
}

//==== 004cb040 SetTotalTransformMatrixDefault_004cb040 ====

/* private: static void __cdecl ArmorShader__SetTotalTransformMatrixDefault(void) */

void __cdecl ArmorShader__SetTotalTransformMatrixDefault(void)

{
  ArmorShader *pAVar1;
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
  
  pAVar1 = ArmorShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb120 SetTotalTransformMatrixDefault_004cb120 ====

/* private: static void __cdecl AsteroidCratersShader__SetTotalTransformMatrixDefault(void) */

void __cdecl AsteroidCratersShader__SetTotalTransformMatrixDefault(void)

{
  AsteroidCratersShader *pAVar1;
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
  
  pAVar1 = AsteroidCratersShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb200 SetTotalTransformMatrixDefault_004cb200 ====

/* private: static void __cdecl AsteroidDiffuseShader__SetTotalTransformMatrixDefault(void) */

void __cdecl AsteroidDiffuseShader__SetTotalTransformMatrixDefault(void)

{
  AsteroidDiffuseShader *pAVar1;
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
  
  pAVar1 = AsteroidDiffuseShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb2e0 SetTotalTransformMatrixDefault_004cb2e0 ====

/* private: static void __cdecl AsteroidHeightShader__SetTotalTransformMatrixDefault(void) */

void __cdecl AsteroidHeightShader__SetTotalTransformMatrixDefault(void)

{
  AsteroidHeightShader *pAVar1;
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
  
  pAVar1 = AsteroidHeightShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb3c0 SetTotalTransformMatrixDefault_004cb3c0 ====

/* private: static void __cdecl AsteroidNormalShader__SetTotalTransformMatrixDefault(void) */

void __cdecl AsteroidNormalShader__SetTotalTransformMatrixDefault(void)

{
  AsteroidNormalShader *pAVar1;
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
  
  pAVar1 = AsteroidNormalShader__GetStatic();
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
  (**(code **)(pAVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb4a0 SetTotalTransformMatrixDefault_004cb4a0 ====


/* private: static void __cdecl BlastLauncherShader__SetTotalTransformMatrixDefault(void) */

void __cdecl BlastLauncherShader__SetTotalTransformMatrixDefault(void)

{
  BlastLauncherShader *pBVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_d8 [18];
  float fStack_90;
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
  undefined4 uStack_54;
  float afStack_50 [7];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pBVar1 = BlastLauncherShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_50;
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
  pfVar4 = afStack_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_90 = afStack_50[0];
  uStack_8c = afStack_50[1];
  uStack_88 = afStack_50[2];
  uStack_84 = afStack_50[3];
  uStack_80 = afStack_50[4];
  uStack_7c = afStack_50[5];
  uStack_78 = afStack_50[6];
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(*(int *)pBVar1 + 0x30))(&fStack_90);
  return;
}





//==== 004cb580 SetTotalTransformMatrixDefault_004cb580 ====

/* private: static void __cdecl CityLightsShader__SetTotalTransformMatrixDefault(void) */

void __cdecl CityLightsShader__SetTotalTransformMatrixDefault(void)

{
  CityLightsShader *pCVar1;
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
  
  pCVar1 = CityLightsShader__GetStatic();
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
  (**(code **)(pCVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb660 SetTotalTransformMatrixDefault_004cb660 ====

/* private: static void __cdecl DamageGeneratorShader__SetTotalTransformMatrixDefault(void) */

void __cdecl DamageGeneratorShader__SetTotalTransformMatrixDefault(void)

{
  DamageGeneratorShader *pDVar1;
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
  
  pDVar1 = DamageGeneratorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb740 SetTotalTransformMatrixDefault_004cb740 ====

/* private: static void __cdecl DamageShader__SetTotalTransformMatrixDefault(void) */

void __cdecl DamageShader__SetTotalTransformMatrixDefault(void)

{
  DamageShader *pDVar1;
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
  
  pDVar1 = DamageShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb820 SetTotalTransformMatrixDefault_004cb820 ====

/* private: static void __cdecl DamagedArmorShader__SetTotalTransformMatrixDefault(void) */

void __cdecl DamagedArmorShader__SetTotalTransformMatrixDefault(void)

{
  DamagedArmorShader *pDVar1;
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
  
  pDVar1 = DamagedArmorShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb900 SetTotalTransformMatrixDefault_004cb900 ====

/* private: static void __cdecl DeferredGlobalLightingShader__SetTotalTransformMatrixDefault(void)
    */

void __cdecl DeferredGlobalLightingShader__SetTotalTransformMatrixDefault(void)

{
  DeferredGlobalLightingShader *pDVar1;
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
  
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cb9e0 SetTotalTransformMatrixDefault_004cb9e0 ====

/* private: static void __cdecl DeferredWorldLightingShader__SetTotalTransformMatrixDefault(void) */

void __cdecl DeferredWorldLightingShader__SetTotalTransformMatrixDefault(void)

{
  DeferredWorldLightingShader *pDVar1;
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
  
  pDVar1 = DeferredWorldLightingShader__GetStatic();
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
  (**(code **)(pDVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cbac0 SetTotalTransformMatrixDefault_004cbac0 ====

/* private: static void __cdecl EquirectangularToCubeMapShader__SetTotalTransformMatrixDefault(void)
    */

void __cdecl EquirectangularToCubeMapShader__SetTotalTransformMatrixDefault(void)

{
  EquirectangularToCubeMapShader *pEVar1;
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
  
  pEVar1 = EquirectangularToCubeMapShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cbba0 SetTotalTransformMatrixDefault_004cbba0 ====

/* private: static void __cdecl ExhaustShader__SetTotalTransformMatrixDefault(void) */

void __cdecl ExhaustShader__SetTotalTransformMatrixDefault(void)

{
  ExhaustShader *pEVar1;
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
  
  pEVar1 = ExhaustShader__GetStatic();
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
  (**(code **)(pEVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cbc80 SetTotalTransformMatrixDefault_004cbc80 ====

/* private: static void __cdecl GeneralModuleShader__SetTotalTransformMatrixDefault(void) */

void __cdecl GeneralModuleShader__SetTotalTransformMatrixDefault(void)

{
  GeneralModuleShader *pGVar1;
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
  
  pGVar1 = GeneralModuleShader__GetStatic();
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
  (**(code **)(pGVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cbd60 SetTotalTransformMatrixDefault_004cbd60 ====

/* private: static void __cdecl ParticleShader__SetTotalTransformMatrixDefault(void) */

void __cdecl ParticleShader__SetTotalTransformMatrixDefault(void)

{
  ParticleShader *pPVar1;
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
  
  pPVar1 = ParticleShader__GetStatic();
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

//==== 004cbe40 SetTotalTransformMatrixDefault_004cbe40 ====

/* private: static void __cdecl PlanetShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PlanetShader__SetTotalTransformMatrixDefault(void)

{
  PlanetShader *pPVar1;
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
  
  pPVar1 = PlanetShader__GetStatic();
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

//==== 004cbf20 SetTotalTransformMatrixDefault_004cbf20 ====

/* private: static void __cdecl PropellantTankShader__SetTotalTransformMatrixDefault(void) */

void __cdecl PropellantTankShader__SetTotalTransformMatrixDefault(void)

{
  PropellantTankShader *pPVar1;
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
  
  pPVar1 = PropellantTankShader__GetStatic();
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

//==== 004cc000 SetTotalTransformMatrixDefault_004cc000 ====

/* private: static void __cdecl RadiatorShader__SetTotalTransformMatrixDefault(void) */

void __cdecl RadiatorShader__SetTotalTransformMatrixDefault(void)

{
  RadiatorShader *pRVar1;
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
  
  pRVar1 = RadiatorShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc0e0 SetTotalTransformMatrixDefault_004cc0e0 ====

/* private: static void __cdecl RingShadowShader__SetTotalTransformMatrixDefault(void) */

void __cdecl RingShadowShader__SetTotalTransformMatrixDefault(void)

{
  RingShadowShader *pRVar1;
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
  
  pRVar1 = RingShadowShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc1c0 SetTotalTransformMatrixDefault_004cc1c0 ====

/* private: static void __cdecl RingsShader__SetTotalTransformMatrixDefault(void) */

void __cdecl RingsShader__SetTotalTransformMatrixDefault(void)

{
  RingsShader *pRVar1;
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
  
  pRVar1 = RingsShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc2a0 SetTotalTransformMatrixDefault_004cc2a0 ====

/* private: static void __cdecl RocketEngineShader__SetTotalTransformMatrixDefault(void) */

void __cdecl RocketEngineShader__SetTotalTransformMatrixDefault(void)

{
  RocketEngineShader *pRVar1;
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
  
  pRVar1 = RocketEngineShader__GetStatic();
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
  (**(code **)(pRVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc380 SetTotalTransformMatrixDefault_004cc380 ====

/* private: static void __cdecl ShadowShader__SetTotalTransformMatrixDefault(void) */

void __cdecl ShadowShader__SetTotalTransformMatrixDefault(void)

{
  ShadowShader *pSVar1;
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
  
  pSVar1 = ShadowShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc460 SetTotalTransformMatrixDefault_004cc460 ====

/* private: static void __cdecl ShockwaveShader__SetTotalTransformMatrixDefault(void) */

void __cdecl ShockwaveShader__SetTotalTransformMatrixDefault(void)

{
  ShockwaveShader *pSVar1;
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
  
  pSVar1 = ShockwaveShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc540 SetTotalTransformMatrixDefault_004cc540 ====

/* private: static void __cdecl SimpleShader__SetTotalTransformMatrixDefault(void) */

void __cdecl SimpleShader__SetTotalTransformMatrixDefault(void)

{
  SimpleShader *pSVar1;
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
  
  pSVar1 = SimpleShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc620 SetTotalTransformMatrixDefault_004cc620 ====


/* private: static void __cdecl SpacecraftShadowShader__SetTotalTransformMatrixDefault(void) */

void __cdecl SpacecraftShadowShader__SetTotalTransformMatrixDefault(void)

{
  SpacecraftShadowShader *pSVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float afStack_d8 [18];
  float fStack_90;
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
  undefined4 uStack_54;
  float afStack_50 [7];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pSVar1 = SpacecraftShadowShader__GetStatic();
  iVar2 = 0;
  pfVar4 = afStack_50;
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
  pfVar4 = afStack_d8;
  do {
    iVar3 = iVar2 + 1;
    *pfVar4 = (float)(iVar2 == 0);
    pfVar4[1] = (float)(iVar2 == 1);
    pfVar4[2] = (float)(iVar2 == 2);
    pfVar4[3] = (float)(iVar2 == 3);
    iVar2 = iVar3;
    pfVar4 = pfVar4 + 4;
  } while (iVar3 < 4);
  fStack_90 = afStack_50[0];
  uStack_8c = afStack_50[1];
  uStack_88 = afStack_50[2];
  uStack_84 = afStack_50[3];
  uStack_80 = afStack_50[4];
  uStack_7c = afStack_50[5];
  uStack_78 = afStack_50[6];
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  uStack_68 = uStack_28;
  uStack_64 = uStack_24;
  uStack_60 = uStack_20;
  uStack_5c = uStack_1c;
  uStack_58 = uStack_18;
  uStack_54 = uStack_14;
  (**(code **)(*(int *)pSVar1 + 0x30))(&fStack_90);
  return;
}





//==== 004cc700 SetTotalTransformMatrixDefault_004cc700 ====

/* private: static void __cdecl StarShader__SetTotalTransformMatrixDefault(void) */

void __cdecl StarShader__SetTotalTransformMatrixDefault(void)

{
  StarShader *pSVar1;
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
  
  pSVar1 = StarShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 004cc7e0 SetUseTextureMask ====

/* public: virtual void __thiscall DamageShader__SetUseTextureMask(bool const &)const  */

void __thiscall DamageShader__SetUseTextureMask(DamageShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UseTextureMaskRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x6c);
  }
  return;
}

//==== 004cc870 SetUsesDamageTexture_004cc870 ====


/* public: virtual void __thiscall SpacecraftShadowShader__SetUsesDamageTexture(bool const &)const
    */

void __thiscall
SpacecraftShadowShader__SetUsesDamageTexture(SpacecraftShadowShader *this,bool *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != *(uint *)(this + 4)) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)(this + 0x44) != -1) {
    (*___glewUniform1i)(*(int *)(this + 0x44),*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xd2);
  }
  return;
}





//==== 004cc920 SetUsesDiffuseMap ====

/* public: virtual void __thiscall PlanetShader__SetUsesDiffuseMap(bool const &)const  */

void __thiscall PlanetShader__SetUsesDiffuseMap(PlanetShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UsesDiffuseMapRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004cc9d0 SetUsesHeightMap ====

/* public: virtual void __thiscall PlanetShader__SetUsesHeightMap(bool const &)const  */

void __thiscall PlanetShader__SetUsesHeightMap(PlanetShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UsesHeightMapRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004cca80 SetUsesNormalMap ====

/* public: virtual void __thiscall PlanetShader__SetUsesNormalMap(bool const &)const  */

void __thiscall PlanetShader__SetUsesNormalMap(PlanetShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UsesNormalMapRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004ccb30 SetUsesSpecularMap ====

/* public: virtual void __thiscall PlanetShader__SetUsesSpecularMap(bool const &)const  */

void __thiscall PlanetShader__SetUsesSpecularMap(PlanetShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UsesSpecularMapRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xb7);
  }
  return;
}

//==== 004ccbe0 SetUsesTexture ====

/* public: virtual void __thiscall SimpleShader__SetUsesTexture(bool const &)const  */

void __thiscall SimpleShader__SetUsesTexture(SimpleShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UsesTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x13);
  }
  return;
}

//==== 004ccc90 SetWhiteNoiseTextures0 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures0(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures0(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures0RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004ccd20 SetWhiteNoiseTextures0_004ccd20 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures0(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures0(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures0RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004ccdb0 SetWhiteNoiseTextures0_004ccdb0 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures0(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures0(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures0RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cce40 SetWhiteNoiseTextures0_004cce40 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures0(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures0(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures0RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004cced0 SetWhiteNoiseTextures0_004cced0 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures0(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures0(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures0RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004ccf60 SetWhiteNoiseTextures10 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures10(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures10(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures10RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004ccff0 SetWhiteNoiseTextures10_004ccff0 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures10(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures10(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures10RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004cd080 SetWhiteNoiseTextures10_004cd080 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures10(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures10(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures10RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cd110 SetWhiteNoiseTextures10_004cd110 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures10(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures10(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures10RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004cd1a0 SetWhiteNoiseTextures10_004cd1a0 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures10(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures10(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures10RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004cd230 SetWhiteNoiseTextures1 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures1(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures1(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures1RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004cd2c0 SetWhiteNoiseTextures1_004cd2c0 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures1(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures1(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures1RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004cd350 SetWhiteNoiseTextures1_004cd350 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures1(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures1(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures1RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cd3e0 SetWhiteNoiseTextures1_004cd3e0 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures1(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures1(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures1RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004cd470 SetWhiteNoiseTextures1_004cd470 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures1(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures1(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures1RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004cd500 SetWhiteNoiseTextures2 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures2(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures2(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004cd590 SetWhiteNoiseTextures2_004cd590 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures2(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures2(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004cd620 SetWhiteNoiseTextures2_004cd620 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures2(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures2(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cd6b0 SetWhiteNoiseTextures2_004cd6b0 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures2(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures2(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004cd740 SetWhiteNoiseTextures2_004cd740 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures2(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures2(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004cd7d0 SetWhiteNoiseTextures3 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures3(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures3(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures3RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004cd860 SetWhiteNoiseTextures3_004cd860 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures3(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures3(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures3RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004cd8f0 SetWhiteNoiseTextures3_004cd8f0 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures3(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures3(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures3RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cd980 SetWhiteNoiseTextures3_004cd980 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures3(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures3(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures3RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004cda10 SetWhiteNoiseTextures3_004cda10 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures3(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures3(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures3RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004cdaa0 SetWhiteNoiseTextures4 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures4(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures4(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures4RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004cdb30 SetWhiteNoiseTextures4_004cdb30 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures4(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures4(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures4RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004cdbc0 SetWhiteNoiseTextures4_004cdbc0 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures4(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures4(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures4RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cdc50 SetWhiteNoiseTextures4_004cdc50 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures4(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures4(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures4RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004cdce0 SetWhiteNoiseTextures4_004cdce0 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures4(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures4(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures4RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004cdd70 SetWhiteNoiseTextures5 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures5(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures5(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures5RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004cde00 SetWhiteNoiseTextures5_004cde00 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures5(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures5(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures5RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004cde90 SetWhiteNoiseTextures5_004cde90 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures5(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures5(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures5RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cdf20 SetWhiteNoiseTextures5_004cdf20 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures5(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures5(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures5RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004cdfb0 SetWhiteNoiseTextures5_004cdfb0 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures5(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures5(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures5RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004ce040 SetWhiteNoiseTextures6 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures6(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures6(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures6RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004ce0d0 SetWhiteNoiseTextures6_004ce0d0 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures6(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures6(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures6RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004ce160 SetWhiteNoiseTextures6_004ce160 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures6(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures6(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures6RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004ce1f0 SetWhiteNoiseTextures6_004ce1f0 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures6(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures6(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures6RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004ce280 SetWhiteNoiseTextures6_004ce280 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures6(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures6(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures6RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004ce310 SetWhiteNoiseTextures7 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures7(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures7(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures7RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004ce3a0 SetWhiteNoiseTextures7_004ce3a0 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures7(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures7(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures7RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004ce430 SetWhiteNoiseTextures7_004ce430 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures7(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures7(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures7RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004ce4c0 SetWhiteNoiseTextures7_004ce4c0 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures7(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures7(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures7RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004ce550 SetWhiteNoiseTextures7_004ce550 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures7(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures7(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures7RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004ce5e0 SetWhiteNoiseTextures8 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures8(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures8(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures8RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004ce670 SetWhiteNoiseTextures8_004ce670 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures8(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures8(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures8RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004ce700 SetWhiteNoiseTextures8_004ce700 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures8(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures8(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures8RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004ce790 SetWhiteNoiseTextures8_004ce790 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures8(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures8(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures8RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004ce820 SetWhiteNoiseTextures8_004ce820 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures8(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures8(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures8RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004ce8b0 SetWhiteNoiseTextures9 ====

/* public: virtual void __thiscall AsteroidCratersShader__SetWhiteNoiseTextures9(int const &)const
    */

void __thiscall
AsteroidCratersShader__SetWhiteNoiseTextures9(AsteroidCratersShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures9RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xfc);
  }
  return;
}

//==== 004ce940 SetWhiteNoiseTextures9_004ce940 ====

/* public: virtual void __thiscall AsteroidDiffuseShader__SetWhiteNoiseTextures9(int const &)const
    */

void __thiscall
AsteroidDiffuseShader__SetWhiteNoiseTextures9(AsteroidDiffuseShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures9RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x103);
  }
  return;
}

//==== 004ce9d0 SetWhiteNoiseTextures9_004ce9d0 ====

/* public: virtual void __thiscall CityLightsShader__SetWhiteNoiseTextures9(int const &)const  */

void __thiscall CityLightsShader__SetWhiteNoiseTextures9(CityLightsShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures9RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0xf6);
  }
  return;
}

//==== 004cea60 SetWhiteNoiseTextures9_004cea60 ====

/* public: virtual void __thiscall DamageGeneratorShader__SetWhiteNoiseTextures9(int const &)const
    */

void __thiscall
DamageGeneratorShader__SetWhiteNoiseTextures9(DamageGeneratorShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures9RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x118);
  }
  return;
}

//==== 004ceaf0 SetWhiteNoiseTextures9_004ceaf0 ====

/* public: virtual void __thiscall ParticleShader__SetWhiteNoiseTextures9(int const &)const  */

void __thiscall ParticleShader__SetWhiteNoiseTextures9(ParticleShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->WhiteNoiseTextures9RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x112);
  }
  return;
}

//==== 004ceb80 Setup_004ceb80 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall ArmorShader__Setup(void) */

bool __thiscall ArmorShader__Setup(ArmorShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  ArmorShader *pAVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define ARMOR");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"MaterialClass__Armor");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pAVar2 = ArmorShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pAVar2);
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

//==== 004cecb0 Setup_004cecb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall AsteroidCratersShader__Setup(void) */

bool __thiscall AsteroidCratersShader__Setup(AsteroidCratersShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  AsteroidCratersShader *pAVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define ASTEROID_CRATERS");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pAVar2 = AsteroidCratersShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pAVar2);
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

//==== 004cede0 Setup_004cede0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall AsteroidDiffuseShader__Setup(void) */

bool __thiscall AsteroidDiffuseShader__Setup(AsteroidDiffuseShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  AsteroidDiffuseShader *pAVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define ASTEROID_DIFFUSE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pAVar2 = AsteroidDiffuseShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pAVar2);
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

//==== 004cef10 Setup_004cef10 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall AsteroidHeightShader__Setup(void) */

bool __thiscall AsteroidHeightShader__Setup(AsteroidHeightShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  AsteroidHeightShader *pAVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define ASTEROID_HEIGHT");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pAVar2 = AsteroidHeightShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pAVar2);
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

//==== 004cf040 Setup_004cf040 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall AsteroidNormalShader__Setup(void) */

bool __thiscall AsteroidNormalShader__Setup(AsteroidNormalShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  AsteroidNormalShader *pAVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define ASTEROID_NORMAL");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pAVar2 = AsteroidNormalShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pAVar2);
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

//==== 004cf170 Setup_004cf170 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall BlastLauncherShader__Setup(void) */

bool __thiscall BlastLauncherShader__Setup(BlastLauncherShader *this)

{
  undefined8 stack0xfffffffc;
  BlastLauncherShader BVar1;
  Str_L_char_G_ *this_00;
  Shader *pSVar2;
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
  pSVar6 = (Str_L_char_G_ *)(this + 0x54);
  *(char *)&(this[0x60]) = 0x0;
  __return_storage_ptr__ = &local_1c;
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define BLAST_LAUNCHER");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"MaterialClass__Armor");
  BVar1 = (BlastLauncherShader)Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if ((bool)BVar1) {
    pSVar2 = (Shader *)GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,pSVar2);
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
  this[0x60] = BVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return (bool)BVar1;
}

//==== 004cf2a0 Setup_004cf2a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall CityLightsShader__Setup(void) */

bool __thiscall CityLightsShader__Setup(CityLightsShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  CityLightsShader *pCVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define CITY_LIGHTS");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pCVar2 = CityLightsShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pCVar2);
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

//==== 004cf3d0 Setup_004cf3d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall DamageGeneratorShader__Setup(void) */

bool __thiscall DamageGeneratorShader__Setup(DamageGeneratorShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  DamageGeneratorShader *pDVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define DAMAGE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pDVar2 = DamageGeneratorShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar2);
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

//==== 004cf500 Setup_004cf500 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall DamageShader__Setup(void) */

bool __thiscall DamageShader__Setup(DamageShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  DamageShader *pDVar2;
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
  util__Str_char___Str_char(&local_34,"Tex");
  util__Str_char___Str_char(&local_28,"Damage");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pDVar2 = DamageShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar2);
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

//==== 004cf630 Setup_004cf630 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall DamagedArmorShader__Setup(void) */

bool __thiscall DamagedArmorShader__Setup(DamagedArmorShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  DamagedArmorShader *pDVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define DAMAGED_ARMOR");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"MaterialClass__Armor");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pDVar2 = DamagedArmorShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar2);
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

//==== 004cf760 Setup_004cf760 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall DeferredGlobalLightingShader__Setup(void) */

bool __thiscall DeferredGlobalLightingShader__Setup(DeferredGlobalLightingShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  DeferredGlobalLightingShader *pDVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define GLOBAL_LIGHT");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"DeferredLighting");
  util__Str_char___Str_char(&local_34,"DeferredLighting");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pDVar2 = DeferredGlobalLightingShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar2);
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

//==== 004cf890 Setup_004cf890 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall DeferredWorldLightingShader__Setup(void) */

bool __thiscall DeferredWorldLightingShader__Setup(DeferredWorldLightingShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  DeferredWorldLightingShader *pDVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define WORLD_LIGHT");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"DeferredLighting");
  util__Str_char___Str_char(&local_34,"DeferredLighting");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pDVar2 = DeferredWorldLightingShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar2);
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

//==== 004cf9c0 Setup_004cf9c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall EquirectangularToCubeMapShader__Setup(void) */

bool __thiscall EquirectangularToCubeMapShader__Setup(EquirectangularToCubeMapShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  EquirectangularToCubeMapShader *pEVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define EQUIRECTANGULAR_TO_CUBE_MAP")
  ;
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pEVar2 = EquirectangularToCubeMapShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pEVar2);
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

//==== 004cfaf0 Setup_004cfaf0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall ExhaustShader__Setup(void) */

bool __thiscall ExhaustShader__Setup(ExhaustShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  ExhaustShader *pEVar2;
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
  util__Str_char___Str_char(&local_34,"Exhaust");
  util__Str_char___Str_char(&local_28,"Exhaust");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pEVar2 = ExhaustShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pEVar2);
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

//==== 004cfc20 Setup_004cfc20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall GeneralModuleShader__Setup(void) */

bool __thiscall GeneralModuleShader__Setup(GeneralModuleShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  GeneralModuleShader *pGVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define GENERAL_MODULE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"MaterialClass__Armor");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pGVar2 = GeneralModuleShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pGVar2);
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

//==== 004cfd50 Setup_004cfd50 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall ParticleShader__Setup(void) */

bool __thiscall ParticleShader__Setup(ParticleShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  ParticleShader *pPVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define PARTICLE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"ProceduralTextures");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = ParticleShader__GetStatic();
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

//==== 004cfe80 Setup_004cfe80 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PlanetShader__Setup(void) */

bool __thiscall PlanetShader__Setup(PlanetShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PlanetShader *pPVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define USE_CUBE_MAPS");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Planet");
  util__Str_char___Str_char(&local_34,"Planet");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PlanetShader__GetStatic();
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

//==== 004cffb0 Setup_004cffb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall PropellantTankShader__Setup(void) */

bool __thiscall PropellantTankShader__Setup(PropellantTankShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  PropellantTankShader *pPVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define PROPELLANT_TANK");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"MaterialClass__Armor");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pPVar2 = PropellantTankShader__GetStatic();
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

//==== 004d00e0 Setup_004d00e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall RadiatorShader__Setup(void) */

bool __thiscall RadiatorShader__Setup(RadiatorShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  RadiatorShader *pRVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define RADIATOR");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"MaterialClass__Armor");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pRVar2 = RadiatorShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pRVar2);
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

//==== 004d0210 Setup_004d0210 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall RingShadowShader__Setup(void) */

bool __thiscall RingShadowShader__Setup(RingShadowShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  RingShadowShader *pRVar2;
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
  util__Str_char___Str_char(&local_34,"Tex");
  util__Str_char___Str_char(&local_28,"RingShadow");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pRVar2 = RingShadowShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pRVar2);
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

//==== 004d0340 Setup_004d0340 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall RingsShader__Setup(void) */

bool __thiscall RingsShader__Setup(RingsShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  RingsShader *pRVar2;
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
  util__Str_char___Str_char(&local_34,"Rings");
  util__Str_char___Str_char(&local_28,"Rings");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pRVar2 = RingsShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pRVar2);
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

//==== 004d0470 Setup_004d0470 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall RocketEngineShader__Setup(void) */

bool __thiscall RocketEngineShader__Setup(RocketEngineShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  RocketEngineShader *pRVar2;
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
  this_00 = (Str_L_char_G_ *)util__Str_char___Str_char(&local_28,"#define ROCKET_ENGINE");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"Tex");
  util__Str_char___Str_char(&local_34,"MaterialClass__Armor");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pRVar2 = RocketEngineShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pRVar2);
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

//==== 004d05a0 Setup_004d05a0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall ShadowShader__Setup(void) */

bool __thiscall ShadowShader__Setup(ShadowShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  ShadowShader *pSVar2;
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
  util__Str_char___Str_char(&local_34,"GroupType__None");
  util__Str_char___Str_char(&local_28,"Shadow");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pSVar2 = ShadowShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar2);
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

//==== 004d06d0 Setup_004d06d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall ShockwaveShader__Setup(void) */

bool __thiscall ShockwaveShader__Setup(ShockwaveShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  ShockwaveShader *pSVar2;
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
  util__Str_char___Str_char(&local_34,"Color");
  util__Str_char___Str_char(&local_28,"Shockwave");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pSVar2 = ShockwaveShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar2);
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

//==== 004d0800 Setup_004d0800 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall SimpleShader__Setup(void) */

bool __thiscall SimpleShader__Setup(SimpleShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  SimpleShader *pSVar2;
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
  util__Str_char___Str_char(&local_28,"Simple");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pSVar2 = SimpleShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar2);
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

//==== 004d0930 Setup_004d0930 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall SpacecraftShadowShader__Setup(void) */

bool __thiscall SpacecraftShadowShader__Setup(SpacecraftShadowShader *this)

{
  undefined8 stack0xfffffffc;
  SpacecraftShadowShader SVar1;
  Shader *pSVar2;
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
  *(char *)&(this[0x58]) = 0x0;
  local_28.Length = 0;
  util__Str_char___operator(&local_28,&local_1c,(Str_L_char_G_ *)(this + 0x4c));
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_34,"SpacecraftShadow");
  util__Str_char___Str_char(&local_28,"SpacecraftShadow");
  SVar1 = (SpacecraftShadowShader)
          Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if ((bool)SVar1) {
    pSVar2 = (Shader *)GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,pSVar2);
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
  this[0x58] = SVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return (bool)SVar1;
}

//==== 004d0a60 Setup_004d0a60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall StarShader__Setup(void) */

bool __thiscall StarShader__Setup(StarShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  StarShader *pSVar2;
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
  util__Str_char___Str_char(&local_34,"Stars");
  util__Str_char___Str_char(&local_28,"Stars");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pSVar2 = StarShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar2);
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

//==== 004d0b90 DecimalMod_double_ ====


/* double __cdecl util__DecimalMod_double(double,double) */

double __cdecl util__DecimalMod_double(double param_1,double param_2)

{
  bool bVar1;
  double dVar2;
  double dStack_c;
  
  if (NAN(param_2) != (param_2 == 0.0)) {
    return param_1;
  }
  dStack_c = param_1 / param_2;
  dVar2 = Floor(&dStack_c);
  dVar2 = param_1 - dVar2 * param_2;
  if (param_2 <= 0.0) {
    bVar1 = param_2 < dVar2;
  }
  else {
    bVar1 = dVar2 < param_2;
  }
  if (bVar1) {
    if (param_2 <= 0.0) {
      bVar1 = dVar2 < 0.0;
    }
    else {
      bVar1 = 0.0 < dVar2;
    }
    if (bVar1 || dVar2 == 0.0) {
      return dVar2;
    }
    dVar2 = dVar2 + param_2;
    if ((NAN(dVar2) || NAN(param_2)) == (dVar2 == param_2)) {
      return dVar2;
    }
  }
  return 0.0;
}





//==== 004d0dd0 GetManager_MainManager_ ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class MainManager *  GameManager__GetManager_L_classMainManager_G_(void) */

MainManager * __thiscall GameManager__GetManager_class_MainManager(GameManager *this)

{
  undefined8 stack0xfffffffc;
  MainManager *pMVar1;
  undefined **ppuStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppuStack_18 = (undefined **)0x0;
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  uStack_c = 0;
  FUN_004d0c40(&ppuStack_18,&(this->Managers).Capacity,0);
  if (iStack_10 != 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\function.inl",0x38,
                    "FilteredArray.Num() == 1",(char *)0x0);
    DebugBreak();
  }
  if (iStack_10 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  pMVar1 = (MainManager *)*puStack_14;
  ppuStack_18 = (undefined **)(&vftable_2);
  port_op_delete(puStack_14);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pMVar1;
}





//==== 004d0e70 NormalizeAngle_double_ ====


/* double __cdecl util__NormalizeAngle_double(double) */

double __cdecl util__NormalizeAngle_double(double)

{
  double dVar1;
  double dStack_c;
  
  if (NAN(*(float *)&(param_1))) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl",0x82,
              "!IsNan(Angle_radians)",(char *)0x0);
    DebugBreak();
  }
  dStack_c = param_1 / 6.283185307179586;
  dVar1 = Floor(&dStack_c);
  dVar1 = param_1 - dVar1 * 6.283185307179586;
  if (dVar1 < 6.283185307179586) {
    if ((dVar1 < 0.0) &&
       (dVar1 = dVar1 + 6.283185307179586, NAN(dVar1) != (dVar1 == 6.283185307179586))) {
      return 0.0;
    }
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}





//==== 004d0f30 SafeASin_double_ ====


/* double __cdecl util__SafeASin_double(double) */

double __cdecl util__SafeASin_double(double)

{
  double dVar1;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  if ((((-1.0 < param_1) || (param_1 < 1.0)) && ((1.0 < param_1 || (param_1 < -1.0)))) &&
     (dStack_c = -1.0, NAN(*(float *)&(param_1)) == (param_1 == -1.0))) {
    dStack_1c = param_1 - -1.0;
    dVar1 = Abs(&dStack_1c);
    dStack_14 = dVar1;
    if ((NAN(*(float *)&(param_1)) == (param_1 == 0.0)) && (NAN(dStack_c) == (dStack_c == 0.0))) {
      dStack_2c = Abs(&dStack_c);
      dStack_24 = Abs(&param_1);
      dVar1 = dStack_24;
      if (dStack_24 <= dStack_2c) {
        dVar1 = dStack_2c;
      }
      dStack_2c = dVar1;
      if (dVar1 <= 0.0) {
        LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl",0x1e,
                  "BestOfType__Greatest > (int)0",(char *)0x0);
        DebugBreak();
      }
      dVar1 = dStack_14 / dStack_2c;
    }
    if ((1e-08 <= dVar1) && (dStack_14 = 1.0, NAN(*(float *)&(param_1)) == (param_1 == 1.0))) {
      dStack_2c = param_1 - 1.0;
      dVar1 = Abs(&dStack_2c);
      dStack_c = dVar1;
      if ((NAN(*(float *)&(param_1)) == (param_1 == 0.0)) && (NAN(dStack_14) == (dStack_14 == 0.0))) {
        dStack_1c = Abs(&dStack_14);
        dStack_24 = Abs(&param_1);
        if (dStack_24 <= dStack_1c) {
          dStack_24 = dStack_1c;
        }
        if (dStack_24 <= 0.0) {
          LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.inl",
                    0x1e,"BestOfType__Greatest > (int)0",(char *)0x0);
          DebugBreak();
        }
        dVar1 = dStack_c / dStack_24;
      }
      if (1e-08 <= dVar1) {
        LogEnsure("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.h",0x62,
                  "Between_L_Type_G_(X, (int)-1, (int)1) || Equals(X, (int)-1) || Equals(X, (int)1)"
                  ,(char *)0x0);
      }
    }
  }
  dVar1 = param_1;
  if (param_1 <= -1.0) {
    dVar1 = -1.0;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  libm_sse2_asin_precise(0.0);
  return dVar1;
}





//==== 004d1160 Skybox ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall Skybox__Skybox(class Manager *,struct util__Attribute_L_bool_G_) */

Skybox * __thiscall Skybox__Skybox(Skybox *this,Manager *param_1,Attribute_L_bool_G_ param_2)

{
  undefined8 stack0xfffffeb0;
  UIAttributes in_stack_fffffeb0;
  
  UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffeb0,param_1);
  UIWidget__UIWidget((UIWidget *)this,in_stack_fffffeb0);
  this->ShouldBeShowing = param_2.Getter;
  (undefined4)(this->ColorIntensity = (*(uint32_t*)((char*)&(param_2)+8)));
  this->_padding_ = (int)&vftable_50;
  this[1]._padding_ = 0;
  this[1]._pad_0x4_1 = 0;
  return this;
}

//==== 004d11b0 UIAttributes ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall UIAttributes___UIAttributes(void) */

void __thiscall UIAttributes___UIAttributes(UIAttributes *this)

{
  void *pvVar1;
  char *pcVar2;
  
  (this->TextColor).Data.Value._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->TextColor).Data.Value._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->TextColor).Data.Value._pad_0x4_1 = 0;
  }
  (this->BackgroundColor).Data.Value._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->BackgroundColor).Data.Value._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->BackgroundColor).Data.Value._pad_0x4_1 = 0;
  }
  (this->ForegroundColor).Data.Value._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->ForegroundColor).Data.Value._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->ForegroundColor).Data.Value._pad_0x4_1 = 0;
  }
  pcVar2 = (this->VerboseTooltip).Value.Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->VerboseTooltip).Value.Data = (char *)0x0;
  }
  pcVar2 = (this->Tooltip).Value.Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->Tooltip).Value.Data = (char *)0x0;
  }
  pcVar2 = (this->Tag).Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->Tag).Data = (char *)0x0;
  }
  return;
}

//==== 004d1280 operator__004d1280 ====


/* public: class util__SharedPtr_L_structUIWidget_G_ &  util__SharedPtr_struct_UIWidget___operator(class util__SharedPtr_L_structUIWidget_G_ const &) */

SharedPtr_L_struct_UIWidget_G_ * 
util__SharedPtr_struct_UIWidget___operator
          (SharedPtr_L_struct_UIWidget_G_ *this,SharedPtr_L_struct_UIWidget_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  int *piVar2;
  
  piVar2 = *(int **)this;
  this_00 = *(ReferenceController **)(this + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  this_01 = *(ReferenceController **)(param_1 + 4);
  *(ReferenceController **)(this + 4) = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    ReferenceController__AddStrongReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      if (piVar2 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar2 + 4))(1);
      }
      this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_02,piVar2);
    }
  }
  return this;
}





//==== 004d12e0 operator___004d12e0 ====


/* public: virtual struct util__tuple2_L_structutil__Vec3_L_double_G__Cstructutil__Color_G_ & 
   util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____operator(int
   const &)const  */

tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ * 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____operator__o2
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this,
          int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *)(*(int *)(this + 4) + iVar1 * 0x38)
  ;
}





//==== 004d1330 operator___004d1330 ====


/* public: virtual class util__SharedPtr_L_structUIWidget_G_ &  util__Darray_L_class_util__SharedPtr_L_structUIWidget_G__G___op_subscript(int const &)const  */

SharedPtr_L_struct_UIWidget_G_ * 
util__Darray_class_util__SharedPtr_struct_UIWidget_____operator__o3
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (SharedPtr_L_struct_UIWidget_G_ *)(*(int *)(this + 4) + iVar1 * 8);
}





//==== 004d1380 scalar_deleting_destructor_004d1380 ====


/* public: virtual void * __thiscall util__Darray_L_structStarDatum_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_StarDatum____scalar_deleting_destructor
          (Darray_L_struct_StarDatum_G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_51);
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





//==== 004d13d0 scalar_deleting_destructor_004d13d0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__SharedPtr_L_structUIWidget_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__SharedPtr_struct_UIWidget______scalar_deleting_destructor
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_48);
  if (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 4) != (SharedPtr_L_struct_UIWidget_G_ *)0x0) {
    SharedPtr_L_struct_UIWidget_G____vector_deleting_destructor_
              (*(SharedPtr_L_struct_UIWidget_G_ **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 004d1480 scalar_deleting_destructor_004d1480 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall UIWidget:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall UIWidget___scalar_deleting_destructor(UIWidget *this,uint param_1)

{
  SharedPtr_L_UIWidget_G_ *this_00;
  ReferenceController *this_01;
  
  this->_pad_0x0_0 = (int)&vftable_49;
  this_00 = (this->ChildWidgets).Data;
  (this->ChildWidgets)._pad_0x0_0 = (int)&vftable_48;
  if (this_00 != (SharedPtr_L_UIWidget_G_ *)0x0) {
    util__SharedPtr_L_UIWidget_G_____vector_deleting_destructor_(this_00,3);
  }
  (this->ChildWidgets).Data = (SharedPtr_L_UIWidget_G_ *)0x0;
  (this->ChildWidgets)._pad_0x0_0 = (int)&vftable;
  this_01 = (this->ParentWidget).Controller;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_01);
  }
  UIAttributes___UIAttributes(&this->Attributes);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x168);
  }
  return this;
}

//==== 004d14f0 Build ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall Starbox__Build(void) */

void __thiscall Starbox__Build(Starbox *this)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  MainManager *this_00;
  MetagameManager *pMVar4;
  int iVar5;
  undefined4 *puVar6;
  double *pdVar7;
  StarDatum *pSVar8;
  StarDatum *pSVar9;
  ColorVertexBufferObject *this_01;
  uint uVar10;
  ColorVertex local_44;
  Darray_L_StarDatum_G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_1c._pad_0x0_0 = 0;
  local_1c.Data = (StarDatum *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = (int)(uintptr_t)((MainManager *)(uintptr_t)(0));
  this_00 = (MainManager *)(uintptr_t)(GameManager__GetManager_L_MainManager_G_(this->Parent));
  pMVar4 = MainManager__GetMetagame(this_00);
  local_1c._pad_0x0_0 = (int)&vftable_51;
  local_1c.Data = (StarDatum *)0x0;
  local_1c.Size = 0;
  local_1c.Capacity = (pMVar4->StarChart).Capacity;
  local_c = (**(code **)((pMVar4->StarChart)._pad_0x0_0 + 0xc))();
  util__Darray_L_StarDatum_G___SetSize(&local_1c,&local_c);
  uVar10 = (uint)(uintptr_t)((struct StarDatum *)(uintptr_t)(local_1c.Capacity));
  local_1c.Data = (struct StarDatum *)(uintptr_t)(port_op_new(-(uint)((int)((ulonglong)(uint)local_1c.Capacity * 0x38 >> 0x20) != 0) |
                      (uint)((ulonglong)(uint)local_1c.Capacity * 0x38)));
  if (local_1c.Data == (StarDatum *)0x0) {
    local_1c.Data = (StarDatum *)0x0;
  }
  else if (uVar10 != 0) {
    pdVar7 = &((local_1c.Data)->Color).Z;
    do {
      *(undefined4 *)(pdVar7 + -5) = 0;
      *(undefined4 *)((int)pdVar7 + -0x24) = 0;
      *(undefined4 *)(pdVar7 + -4) = 0;
      *(undefined4 *)((int)pdVar7 + -0x1c) = 0;
      *(undefined4 *)(pdVar7 + -3) = 0;
      *(undefined4 *)((int)pdVar7 + -0x14) = 0;
      (undefined4)((pdVar7[-2] = 0.0));
      *(undefined4 *)((int)pdVar7 + -0xc) = 0;
      *(undefined4 *)(pdVar7 + -1) = 0;
      *(undefined4 *)((int)pdVar7 + -4) = 0;
      *(undefined4 *)pdVar7 = 0;
      *(undefined4 *)((int)pdVar7 + 4) = 0;
      pdVar7[1] = 0.0;
      uVar10 = uVar10 - 1;
      pdVar7 = pdVar7 + 7;
    } while (uVar10 != 0);
  }
  pSVar8 = (pMVar4->StarChart).Data;
  pSVar9 = local_1c.Data;
  if (pSVar8 != pSVar8 + (pMVar4->StarChart).Size) {
    do {
      uVar1 = *(undefined4 *)((int)&(pSVar8->Direction).X + 4);
      uVar2 = (undefined4)((pSVar8->Direction).Y);
      uVar3 = *(undefined4 *)((int)&(pSVar8->Direction).Y + 4);
      (undefined4)((pSVar9->Direction).X = (undefined4)((pSVar8->Direction).X));
      *(undefined4 *)((int)&(pSVar9->Direction).X + 4) = uVar1;
      (undefined4)((pSVar9->Direction).Y = uVar2);
      *(undefined4 *)((int)&(pSVar9->Direction).Y + 4) = uVar3;
      uVar1 = *(undefined4 *)((int)&(pSVar8->Direction).Z + 4);
      uVar2 = (undefined4)((pSVar8->Color).X);
      uVar3 = *(undefined4 *)((int)&(pSVar8->Color).X + 4);
      (undefined4)((pSVar9->Direction).Z = (undefined4)((pSVar8->Direction).Z));
      *(undefined4 *)((int)&(pSVar9->Direction).Z + 4) = uVar1;
      (undefined4)((pSVar9->Color).X = uVar2);
      *(undefined4 *)((int)&(pSVar9->Color).X + 4) = uVar3;
      uVar1 = *(undefined4 *)((int)&(pSVar8->Color).Y + 4);
      uVar2 = (undefined4)((pSVar8->Color).Z);
      uVar3 = *(undefined4 *)((int)&(pSVar8->Color).Z + 4);
      (undefined4)((pSVar9->Color).Y = (undefined4)((pSVar8->Color).Y));
      *(undefined4 *)((int)&(pSVar9->Color).Y + 4) = uVar1;
      (undefined4)((pSVar9->Color).Z = uVar2);
      *(undefined4 *)((int)&(pSVar9->Color).Z + 4) = uVar3;
      pdVar7 = &pSVar8->RelativeLuminance;
      pSVar8 = pSVar8 + 1;
      pSVar9->RelativeLuminance = *pdVar7;
      pSVar9 = pSVar9 + 1;
    } while (pSVar8 != (pMVar4->StarChart).Data + (pMVar4->StarChart).Size);
  }
  this_01 = &this->Starscape;
  ColorVertexBufferObject__EstimateVertexCount(this_01,local_1c.Size);
  VertexBufferObjectInterface__SetType((VertexBufferObjectInterface *)this_01,0);
  local_c = 0;
  iVar5 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
  if (local_c < iVar5) {
    do {
      puVar6 = (undefined4 *)(**(code **)local_1c._pad_0x0_0)(&local_c);
      local_44.Point.X = *puVar6;
      local_44.Point.Y = puVar6[1];
      local_44.Point.Y = puVar6[2];
      local_44.Point.Z = puVar6[3];
      local_44.Point.Z = *(double *)(puVar6 + 4);
      local_44.Color.X = (float)*(double *)(puVar6 + 6);
      local_44.Color.Y = (float)*(double *)(puVar6 + 8);
      local_44.Color.Z = (float)*(double *)(puVar6 + 10);
      local_44.Color.W = (float)*(double *)(puVar6 + 0xc);
      ColorVertexBufferObject__AddVertex(this_01,&local_44);
      local_c = local_c + 1;
      iVar5 = (**(code **)(uintptr_t)(local_1c._pad_0x0_0 + 0xc))();
    } while (local_c < iVar5);
  }
  VertexBufferObjectInterface__Generate((VertexBufferObjectInterface *)this_01);
  local_1c._pad_0x0_0 = (int)&vftable_51;
  if (local_1c.Data != (StarDatum *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return;
}

//==== 004d16f0 CheckSize_004d16f0 ====


/* private: bool  util__Darray_L_structutil__Vec3_L_double_G__G___CheckSize(int) */

bool 
util__Darray_struct_util__Vec3_double_____CheckSize
          (Darray_L_struct_util__Vec3_L_double_G___G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar8 = *(uint *)(this + 8);
  bVar13 = -1 < (int)uVar8;
  bVar2 = !bVar13;
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
  uVar11 = *(uint *)(this + 0xc);
  if ((int)uVar8 <= (int)uVar11) {
    return bVar2 && bVar13;
  }
  if (uVar11 == 0) {
    *(uint *)(this + 0xc) = uVar8;
    uVar11 = uVar8;
  }
  if ((int)uVar11 < (int)uVar8) {
    do {
      uVar11 = uVar11 * 2;
    } while ((int)uVar11 < (int)uVar8);
    *(uint *)(this + 0xc) = uVar11;
  }
  if (0x3fffffff < (int)uVar11) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x18 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar11 * 0x18));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar11 != 0) {
    puVar7 = (undefined8 *)(puStack_c + 4);
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + -2) = 0;
      *(undefined4 *)((int)puVar7 + -0xc) = 0;
      *(undefined4 *)(puVar7 + -1) = 0;
      *(undefined4 *)((int)puVar7 + -4) = 0;
      uVar11 = uVar11 - 1;
      puVar7 = puVar7 + 3;
    } while (uVar11 != 0);
  }
  puVar6 = puStack_c;
  puVar9 = *(undefined4 **)(this + 4);
  if (puVar9 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar10 = puVar9;
    puVar12 = puStack_c;
    if (puVar9 != puVar9 + param_1 * 6) {
      do {
        if (puVar12 == puStack_c + iVar1 * 6) break;
        uVar3 = puVar9[1];
        uVar4 = puVar9[2];
        uVar5 = puVar9[3];
        *puVar12 = *puVar9;
        puVar12[1] = uVar3;
        puVar12[2] = uVar4;
        puVar12[3] = uVar5;
        puVar7 = (undefined8 *)(puVar9 + 4);
        puVar9 = puVar9 + 6;
        *(undefined8 *)(puVar12 + 4) = *puVar7;
        puVar10 = *(undefined4 **)(this + 4);
        puVar12 = puVar12 + 6;
      } while (puVar9 != puVar10 + param_1 * 6);
    }
    port_op_delete(puVar10);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puVar6;
  return bStack_5;
}





//==== 004d1850 Clear_004d1850 ====


/* public: virtual void  util__Darray_L_structStarDatum_G___Clear(void) */

void __thiscall util__Darray_struct_StarDatum___Clear(Darray_L_struct_StarDatum_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 004d1870 Clear_004d1870 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structUIWidget_G___G___Clear(void) */

void 
util__Darray_class_util__SharedPtr_struct_UIWidget_____Clear
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 004d1890 ClipToDimensions ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__ClipToDimensions(void)const  */

bool __thiscall UIWidget__ClipToDimensions(UIWidget *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_pad_0x0_0 + 0x30))();
  return cVar1 == '\0';
}

//==== 004d18a0 Get ====


/* public: class util__Str_L_char_G_ const  util__Attribute_L_classutil__Str_L_char_G___G___Get(void)const  */

Str_L_char_G_ * 
util__Attribute_class_util__Str_char_____Get
          (Attribute_L_class_util__Str_L_char_G___G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  Str_L_char_G_ *pSVar3;
  void *apvStack_38 [3];
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  undefined4 uStack_8;
  
  uStack_8 = 0;
  if ((*(int *)this == 0) || (*(code **)(uintptr_t)(this + 4) == (code *)0x0)) {
    pSVar3 = (Str_L_char_G_ *)util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_20,(Str_L_char_G_ *)(this + 8));
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pSVar3 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(this + 4))(apvStack_38,*(int *)this);
    pSVar3 = (Str_L_char_G_ *)util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,pSVar3);
    util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_2c,pSVar3);
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
      SStack_14.Data = (char *)0x0;
    }
    bVar2 = true;
    bVar1 = false;
    if (apvStack_38[0] != (void *)0x0) {
      port_op_delete(apvStack_38[0]);
    }
    pSVar3 = &SStack_2c;
  }
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar3);
  if (bVar1) {
    if (SStack_20.Data != (char *)0x0) {
      port_op_delete(SStack_20.Data);
      SStack_20.Data = (char *)0x0;
    }
  }
  if ((SStack_2c.Data != (char *)0x0) && (bVar2)) {
    port_op_delete(SStack_2c.Data);
  }
  return __return_storage_ptr__;
}





//==== 004d1970 GetChildClipMargin ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Maybe_L_structutil__Vec2_L_int_G__G_ __thiscall
   UIWidget__GetChildClipMargin(void)const  */

void __thiscall UIWidget__GetChildClipMargin(UIWidget *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  *(undefined1 *)(in_stack_00000004 + 2) = 0;
  return;
}





//==== 004d1990 GetClassID ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual unsigned long __thiscall UIWidget__GetClassID(void)const  */

ulong __thiscall UIWidget__GetClassID(UIWidget *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8def11be__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8def11be__thread_safe_static_guard_0__);
    if ( cde_l2_8def11be__thread_safe_static_guard_0__ == -1) {
       cde_l2r_e55a1afd_ID =
           util__GetHash("UIWidget");
      _Init_thread_footer(& cde_l2_8def11be__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_e55a1afd_ID;
}





//==== 004d1b40 GetHitTestPadding ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual int __thiscall UIWidget__GetHitTestPadding(void)const  */

int __thiscall UIWidget__GetHitTestPadding(UIWidget *this)

{
  return 6;
}





//==== 004d1b50 GetHoverSound ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Str_L_char_G_ __thiscall UIWidget__GetHoverSound(void)const  */

Str_L_char_G_ * __thiscall UIWidget__GetHoverSound(UIWidget *this,Str_L_char_G_ *__return_storage_ptr__)

{
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  return __return_storage_ptr__;
}





//==== 004d1b70 GetIcon ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void (__cdecl*__thiscall UIWidget__GetIcon(void)const )(void) */

_func_void * __thiscall UIWidget__GetIcon(UIWidget *this)

{
  void *pvVar1;
  _func___cdecl__func___cdecl_void_ptr_void_ptr *p_Var2;
  _func___cdecl_void *p_Var3;
  
  pvVar1 = (this->Attributes).Icon.Getter.Callee;
  if ((pvVar1 != (void *)0x0) &&
     (p_Var2 = (void * (*)(void *))(this->Attributes).Icon.Getter.CallbackFunction,
     p_Var2 != (_func___cdecl__func___cdecl_void_ptr_void_ptr *)0x0)) {
    p_Var3 = (*p_Var2)(pvVar1);
    return (_func_void *)p_Var3;
  }
  return (_func_void *)(this->Attributes).Icon.Value;
}





//==== 004d1ba0 GetLayoutOffset ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Maybe_L_structutil__Vec2_L_int_G__G_ 
   UIWidget__GetLayoutOffset(class util__WeakPtr_L_structUIWidget_G_)const  */

undefined4 * 
UIWidget__GetLayoutOffset
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,ReferenceController *param_4)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 2) = 1;
  if (param_4 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(param_4);
  }
  return param_2;
}





//==== 004d1bd0 GetLocation ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Maybe_L_structutil__Vec2_L_int_G__G_ __thiscall
   UIWidget__GetLocation(void)const  */

void __thiscall UIWidget__GetLocation(UIWidget *this)

{
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Var1;
  int iVar2;
  Vec2_L_int_G_ VVar3;
  int *in_stack_00000004;
  undefined1 auStack_14 [8];
  int iStack_c;
  
  if (((this->Attributes).Location.Getter.Callee == (void *)0x0) ||
     (p_Var1 = (this->Attributes).Location.Getter.CallbackFunction,
     p_Var1 == (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0)) {
    iStack_c = (this->Attributes).Location.Value.X;
    iVar2 = (this->Attributes).Location.Value.Y;
  }
  else {
    VVar3 = (*p_Var1)(auStack_14);
    iStack_c = *(int *)VVar3.X;
    iVar2 = ((int *)VVar3.X)[1];
  }
  *in_stack_00000004 = iStack_c;
  in_stack_00000004[1] = iVar2;
  *(undefined1 *)(in_stack_00000004 + 2) = 1;
  return;
}





//==== 004d1c20 get_startup_commit_mode ====


int __cdecl get_startup_commit_mode__o3(_exception *_Except)

{
  return 0;
}





//==== 004d1c30 GetTooltip ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Str_L_char_G_ __thiscall UIWidget__GetTooltip(void)const  */

Str_L_char_G_ * __thiscall UIWidget__GetTooltip(UIWidget *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Attribute_class_util__Str_char_____Get
            ((Attribute_L_class_util__Str_L_char_G___G_ *)&(this->Attributes).Tooltip,__return_storage_ptr__
            );
  /* p80: zero-byte memory barrier — orig keeps call+ret wrapper shape (this+0x94,
     re-push sret, call, return sret ptr); LLVM would fold to tail jmp */
  __asm__ volatile("" ::: "memory");
  return __return_storage_ptr__;
}





//==== 004d1c50 GetVerboseTooltip ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Str_L_char_G_ __thiscall UIWidget__GetVerboseTooltip(void)const  */

Str_L_char_G_ * __thiscall UIWidget__GetVerboseTooltip(UIWidget *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Attribute_class_util__Str_char_____Get
            ((Attribute_L_class_util__Str_L_char_G___G_ *)&(this->Attributes).VerboseTooltip,
             __return_storage_ptr__);
  /* p80: zero-byte memory barrier — orig keeps call+ret wrapper shape (this+0xa8) */
  __asm__ volatile("" ::: "memory");
  return __return_storage_ptr__;
}





//==== 004d1c70 HandleKeyHold ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__HandleKeyHold(int,struct InputModifiers const &) */

bool __thiscall UIWidget__HandleKeyHold(UIWidget *this,int param_1,InputModifiers *param_2)

{
  return false;
}





//==== 004d1c80 HandleKeyInput ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__HandleKeyInput(int,enum KeyInput__Type,struct
   InputModifiers const &) */

bool __thiscall
UIWidget__HandleKeyInput(UIWidget *this,int param_1,int param_2,InputModifiers *param_3)

{
  return false;
}





//==== 004d1c90 PointerWasDestroyed ====


/* public: void  util__ReferenceControllerRegistry__PointerWasDestroyed(void *) */

void 
util__ReferenceControllerRegistry__PointerWasDestroyed
          (ReferenceControllerRegistry *this,void *param_1)

{
  return;
}





//==== 004d1ca0 IsEnabled ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__IsEnabled(void)const  */

bool __thiscall UIWidget__IsEnabled(UIWidget *this)

{
  void *pvVar1;
  _func___cdecl_bool_void_ptr *p_Var2;
  bool bVar3;
  
  pvVar1 = (this->Attributes).Enabled.Getter.Callee;
  if ((pvVar1 != (void *)0x0) &&
     (p_Var2 = (this->Attributes).Enabled.Getter.CallbackFunction,
     p_Var2 != (_func___cdecl_bool_void_ptr *)0x0)) {
    bVar3 = (*p_Var2)(pvVar1);
  }
  return (this->Attributes).Enabled.Value;
}





//==== 004d1cc0 IsPressed ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__IsPressed(void)const  */

bool __thiscall UIWidget__IsPressed(UIWidget *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = IsCaptured(this);
  if (bVar1) {
    cVar2 = (**(code **)(this->_pad_0x0_0 + 0xc))();
    if (cVar2 != '\0') {
      return true;
    }
  }
  return false;
}

//==== 004d1cf0 IsVisible ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__IsVisible(void)const  */

bool __thiscall UIWidget__IsVisible(UIWidget *this)

{
  void *pvVar1;
  _func___cdecl_bool_void_ptr *p_Var2;
  bool bVar3;
  
  pvVar1 = (this->Attributes).Visible.Getter.Callee;
  if ((pvVar1 != (void *)0x0) &&
     (p_Var2 = (this->Attributes).Visible.Getter.CallbackFunction,
     p_Var2 != (_func___cdecl_bool_void_ptr *)0x0)) {
    bVar3 = (*p_Var2)(pvVar1);
  }
  return (this->Attributes).Visible.Value;
}





//==== 004d1d10 Last_004d1d10 ====


/* public: virtual struct util__tuple2_L_structutil__Vec3_L_double_G__Cstructutil__Color_G_ & 
   util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____Last(void) */

tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ * 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____Last__o3
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *)
         (*(int *)(this + 4) + iVar1 * 0x38 + -0x38);
}





//==== 004d1d50 Last_004d1d50 ====


/* public: virtual struct util__tuple2_L_structutil__Vec3_L_double_G__Cstructutil__Color_G_ const &
    util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____Last__o2(void)const  */

tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ * 
util__Darray_struct_util__tuple2_struct_util__Vec3_double__struct_util__Color_____Last__o4
          (Darray_L_struct_util__tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_struct_util__Vec3_L_double_G__Cstruct_util__Color_G_ *)
         (*(int *)(this + 4) + iVar1 * 0x38 + -0x38);
}





//==== 004d1d90 Last_004d1d90 ====


/* public: virtual class util__SharedPtr_L_structUIWidget_G_ &  util__Darray_L_class_util__SharedPtr_L_structUIWidget_G__G___Last(void) */

SharedPtr_L_struct_UIWidget_G_ * 
util__Darray_class_util__SharedPtr_struct_UIWidget_____Last
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (SharedPtr_L_struct_UIWidget_G_ *)(*(int *)(this + 4) + iVar1 * 8 + -8);
}





//==== 004d1dd0 Last_004d1dd0 ====


/* public: virtual class util__SharedPtr_L_structUIWidget_G_ const &  util__Darray_L_class_util__SharedPtr_L_structUIWidget_G__G___Last(void)const  */

SharedPtr_L_struct_UIWidget_G_ * 
util__Darray_class_util__SharedPtr_struct_UIWidget_____Last__o2
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (SharedPtr_L_struct_UIWidget_G_ *)(*(int *)(this + 4) + iVar1 * 8 + -8);
}





//==== 004d1e10 MouseCapturedMove ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall UIWidget__MouseCapturedMove(struct util__Vec2_L_double_G_) */

void __thiscall UIWidget__MouseCapturedMove(UIWidget *this,Vec2_L_double_G_ param_1)

{
  return;
}





//==== 004d1e20 MouseDown ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__MouseDown(struct InputModifiers const &,struct
   util__Vec2_L_double_G_) */

bool __thiscall UIWidget__MouseDown(UIWidget *this,InputModifiers *param_1,Vec2_L_double_G_ param_2)

{
  return false;
}





//==== 004d1e30 MouseUp ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Maybe_L_structutil__Vec2_L_double_G__G_ __thiscall UIWidget__MouseUp(struct
   InputModifiers const &,bool,bool) */

void __thiscall UIWidget__MouseUp(UIWidget *this,InputModifiers *param_1,bool param_2,bool param_3)

{
  param_1->Shift = false;
  param_1->Control = false;
  param_1->Alt = false;
  param_1->Super = false;
  param_1[1].Shift = false;
  param_1[1].Control = false;
  param_1[1].Alt = false;
  param_1[1].Super = false;
  param_1[2].Shift = false;
  param_1[2].Control = false;
  param_1[2].Alt = false;
  param_1[2].Super = false;
  param_1[3].Shift = false;
  param_1[3].Control = false;
  param_1[3].Alt = false;
  param_1[3].Super = false;
  param_1[4].Shift = false;
  return;
}





//==== 004d1e50 MouseWheel ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual bool __thiscall UIWidget__MouseWheel(struct util__Vec2_L_double_G_) */

bool __thiscall UIWidget__MouseWheel(UIWidget *this,Vec2_L_double_G_ param_1)

{
  return false;
}





//==== 004d1e60 OutlineSector ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall Skybox__OutlineSector(struct CelestialGridIndices)const  */

void __thiscall Skybox__OutlineSector(Skybox *this,CelestialGridIndices param_1)

{
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [16];
  GameManager *this_00;
  MainManager *this_01;
  CameraManager *this_02;
  Maybe_L_double_G_ *pMVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char *pcVar8;
  Vec3_L_double_G_ *__return_storage_ptr__;
  ulonglong uVar9;
  undefined1 auStack_80 [16];
  double dStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  Vec3_L_double_G_ VStack_20;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = Manager__GetParent((Manager *)this->_pad_0x8_2);
  this_01 = GameManager__GetManager_class_MainManager(this_00);
  dStack_40 = MainManager__GetSpaceSphereRadius_km(this_01);
  dStack_40 = dStack_40 * 0.1;
  __return_storage_ptr__ = &VStack_20;
  this_02 = Manager__GetCameras((Manager *)this->_padding_);
  CameraManager__GetCameraPos(this_02,__return_storage_ptr__);
  iVar3 = 0;
  (*(uint64_t*)((char*)&(auStack_58)+8)) = (double)param_1.Longitude * 6.283185307179586 * 0.0625;
  dStack_30 = ((double)param_1.Longitude + 1.0) * 6.283185307179586 * 0.0625;
  do {
    uVar9 = CONCAT44(&dStack_38,(Maybe_L_double_G_ *)auStack_80);
    dVar5 = (double)(param_1.Latitude + -4 + iVar3) * 0.25;
    dStack_28 = dVar5 * dStack_40;
    dStack_38 = 1.0 - dVar5 * dVar5;
    pMVar2 = util__Sqrt((Maybe_L_double_G_ *)auStack_80,&dStack_38);
    if (pMVar2->IsValidData == false) {
      pcVar8 = "IsValid()";
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      uVar9 = CONCAT44(0x4d1f6d,pcVar8);
      DebugBreak();
    }
    dVar5 = (double)CONCAT44(VStack_20.Z,VStack_20.Y) + 0.0;
    dStack_28 = dStack_28 + VStack_20.Z;
    (*(uint32_t*)((char*)&(auVar1)+8)) = SUB84(dVar5,0);
    (*(uint64_t*)&(auVar1)) = (double)CONCAT44(VStack_20.Y,VStack_20.X) + 0.0;
    (*(uint32_t *)((char *)&(auVar1) + 12)) = (int)((ulonglong)dVar5 >> 0x20);
    DrawAntialiasedArc(auVar1,dStack_28,0,0,0,0,0,0,0,0x3ff00000,pMVar2->Data * dStack_40,0x10,
                       (*(uint64_t*)((char*)&(auStack_58)+8)),dStack_30,0x3ff0000000000000,VStack_20.X,
                       VStack_20.Y,VStack_20.Y,VStack_20.Z,VStack_20.Z,0,0,0,0,
                       uVar9 & 0xffffffffffffff00);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  (*(uint64_t*)((char*)&(auStack_80)+8)) = util__SafeASin_double(((double)param_1.Latitude - 4.0) * 0.25);
  dStack_70 = util__SafeASin_double((((double)param_1.Latitude + 1.0) - 4.0) * 0.25);
  dVar5 = 0.7853981633974483;
  iVar3 = 0;
  libm_sse2_sin_precise(0.0);
  dStack_38 = dVar5 * 0.0;
  dVar4 = 0.7853981633974483;
  dStack_28 = dVar5;
  libm_sse2_cos_precise(0.0);
  dStack_30 = dVar4;
  do {
    dVar5 = (double)(param_1.Longitude + iVar3) * 0.125 * 3.141592653589793 * 0.5;
    (*(uint64_t*)((char*)&(auStack_58)+8)) = dVar5;
    libm_sse2_sin_precise(0.0);
    dStack_48 = dVar5;
    (*(uint64_t*)((char*)&(auStack_68)+8)) = dVar5 * 0.0;
    libm_sse2_cos_precise(0.0);
    dVar5 = (double)(*(uint64_t*)((char*)&(auStack_68)+8)) * dStack_30;
    dVar4 = (double)(*(uint64_t*)((char*)&(auStack_68)+8)) * dStack_38;
    dVar7 = (double)(*(uint64_t*)((char*)&(auStack_68)+8)) * dStack_28;
    (*(uint64_t*)&(auStack_68)) =
         ((dVar5 + dVar4) - dStack_38 * dStack_48) + dStack_28 * (double)(*(uint64_t*)((char*)&(auStack_58)+8));
    (*(uint64_t*)((char*)&(auStack_68)+8)) = 0;
    dVar6 = dStack_38 * (double)(*(uint64_t*)((char*)&(auStack_58)+8));
    (*(uint64_t*)((char*)&(auStack_58)+8)) = 0;
    (*(uint64_t*)&(auStack_58)) = (dVar4 - dVar7) + dStack_30 * dStack_48 + dVar6;
    dStack_48 = dStack_28 * dStack_48 + (dVar5 - dVar4) + dVar6;
    DrawAntialiasedArc();
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004d2260 Tick ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall UIWidget__Tick(double) */

void __thiscall UIWidget__Tick(UIWidget *this,double param_1)

{
  return;
}





//==== 004d2270 Render3D ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void __thiscall Skybox__Render3D(void)const  */

void __thiscall Skybox__Render3D(Skybox *this)

{
  undefined8 stack0xffffff68;
  undefined8 stack0xfffffffc;
  double dVar1;
  Vec4_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Quaternion_L_double_G_ QVar5;
  Vec4_L_double_G_ VVar6;
  Vec4_L_double_G_ VVar7;
  Maybe_L_util__Range_L_double_G___G_ MVar8;
  Maybe_L_util__Range_L_double_G___G_ MVar9;
  Color CVar10;
  GameManager *this_00;
  MainManager *this_01;
  CameraManager *this_02;
  CustomUIThemeInterface *pCVar11;
  Maybe_L_double_G_ *pMVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  Color *__return_storage_ptr__;
  int in_stack_ffffff68;
  int in_stack_ffffff6c;
  int in_stack_ffffff70;
  int in_stack_ffffff74;
  char *in_stack_ffffff78;
  float in_stack_ffffff7c;
  float fVar20;
  Vec3_L_double_G_ *__return_storage_ptr___00;
  float fVar21;
  undefined1 auStack_54 [16];
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  Vec3_L_double_G_ VStack_24;
  DepthStack DStack_a;
  BlendStack BStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (0.0 < *(double *)(this + 1)) {
    this_00 = (GameManager *)((MainManager *)(uintptr_t)(Manager__GetParent((Manager *)this->_pad_0x8_2)));
    this_01 = (MainManager *)(uintptr_t)(GameManager__GetManager_L_MainManager_G_(this_00));
    dStack_44 = MainManager__GetSpaceSphereRadius_km(this_01);
    dStack_44 = dStack_44 * 0.1;
    __return_storage_ptr___00 = &VStack_24;
    this_02 = Manager__GetCameras((Manager *)this->_pad_0x8_2);
    CameraManager__GetCameraPos(this_02,__return_storage_ptr___00);
    Graphics__DepthStack__DepthStack(&DStack_a,DepthMode__Read);
    fVar21 = 0.0;
    fVar20 = 7.084227e-39;
    Graphics__BlendStack__BlendStack(&BStack_9,Style__Default);
    __return_storage_ptr__ = (CustomUIThemeInterface *)(uintptr_t)((Color *)&stack0xffffff68);
    fVar14 = (float)((1.0 - *(double *)(this + 1)) * 0.0) + (float)(*(double *)(this + 1) * 0.25);
    pCVar11 = (CustomUIThemeInterface *)(uintptr_t)(UIWidget__GetCustomTheme());
    util__Color__ReAlphaed((Color *)&pCVar11[0x6f].field_0x8,__return_storage_ptr__,fVar14);
    CVar10._pad_0x4_1 = in_stack_ffffff6c;
    CVar10._pad_0x0_0 = in_stack_ffffff68;
    CVar10._pad_0x8_2 = in_stack_ffffff70;
    CVar10._pad_0xc_3 = in_stack_ffffff74;
    CVar10.Hue_degrees = (float)(uintptr_t)in_stack_ffffff78;
    CVar10.Saturation = in_stack_ffffff7c;
    CVar10.Value = fVar20;
    CVar10.Alpha = fVar21;
    glColor(CVar10);
    iVar13 = 0;
    do {
      dVar19 = (double)(iVar13 + -3) * 0.25;
      dStack_2c = dVar19 * dStack_44;
      dStack_34 = 1.0 - dVar19 * dVar19;
      fVar14 = 7.084455e-39;
      pMVar12 = util__Sqrt((Maybe_L_double_G_ *)auStack_54,&dStack_34);
      if (pMVar12->IsValidData == false) {
        fVar14 = 2.66247e-44;
        in_stack_ffffff78 = "\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h";
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      in_stack_ffffff78 = (char *)((uint)in_stack_ffffff78 & 0xffffff00);
      dStack_2c = dStack_2c + VStack_24.Z;
      dVar19 = (double)CONCAT44(VStack_24.Z,VStack_24.Y) + 0.0;
      VVar2.Y = SUB84(dVar19,0);
      VVar2.X = (double)CONCAT44(VStack_24.Y,VStack_24.X) + 0.0;
      VVar2.Z = (int)((ulonglong)dVar19 >> 0x20);
      VVar2.Z = dStack_2c;
      (*(uint32_t *)((char *)&(QVar4.W) + 4)) = 0x3ff00000;
      (*(uint32_t *)((char *)&(QVar4) + 0)) = ZEXT828(0);
      VVar6.Y = VStack_24.Y;
      VVar6.X = VStack_24.X;
      VVar6.Y = VStack_24.Y;
      VVar6.Z = VStack_24.Z;
      VVar6.Z = SUB84(VStack_24.Z,0);
      VVar6.W = (int)((ulonglong)VStack_24.Z >> 0x20);
      (*(uint32_t *)((char *)&(MVar8) + 16)) = (uint32_t)(uintptr_t)(in_stack_ffffff78);
      MVar8.Data.Lower = 0.0;
      MVar8.Data.Upper = 0.0;
      (*(uint32_t *)((char *)&(MVar8) + 20)) = fVar14;
      DrawAntialiasedCircle__ov2(VVar2,QVar4,pMVar12->Data * dStack_44,0x48,false,1.0,VVar6,MVar8,0.0);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 7);
    dVar19 = 0.7853981633974483;
    iVar13 = 0;
    libm_sse2_sin_precise(0.0);
    dStack_34 = dVar19 * 0.0;
    dVar15 = 0.7853981633974483;
    dStack_2c = dVar19;
    libm_sse2_cos_precise(0.0);
    dStack_3c = dVar15;
    do {
      dVar16 = (double)iVar13 * 0.125 * 3.141592653589793 * 0.5;
      dVar19 = dVar16;
      libm_sse2_sin_precise(0.0);
      dVar17 = dVar19 * 0.0;
      (*(uint64_t*)((char*)&(auStack_54)+8)) = dVar19;
      libm_sse2_cos_precise(0.0);
      dVar15 = dVar17 * dStack_34;
      dVar19 = dStack_34 * (double)(*(uint64_t*)((char*)&(auStack_54)+8));
      dVar18 = dStack_3c * (double)(*(uint64_t*)((char*)&(auStack_54)+8));
      (*(uint64_t*)((char*)&(auStack_54)+8)) =
           (dVar17 * dStack_3c - dVar15) + dStack_2c * (double)(*(uint64_t*)((char*)&(auStack_54)+8)) + dStack_34 * dVar16
      ;
      in_stack_ffffff78 = (char *)((uint)in_stack_ffffff78 & 0xffffff00);
      dVar1 = (dVar15 - dVar17 * dStack_2c) + dVar18 + dStack_34 * dVar16;
      dVar18 = dStack_3c * dVar16 - (dVar17 * dStack_2c + dVar15 + dVar19);
      VVar3.Y = VStack_24.Y;
      VVar3.X = VStack_24.X;
      VVar3.Y = VStack_24.Y;
      VVar3.Z = VStack_24.Z;
      VVar3.Z = VStack_24.Z;
      QVar5.Y = (int)(*(uint64_t*)((char*)&(auStack_54)+8));
      QVar5.X = ((dVar15 + dVar17 * dStack_3c) - dVar19) + dStack_2c * dVar16;
      QVar5.Z = (int)((ulonglong)(*(uint64_t*)((char*)&(auStack_54)+8)) >> 0x20);
      QVar5.Z = SUB84(dVar1,0);
      QVar5.W = (int)((ulonglong)dVar1 >> 0x20);
      QVar5.W = SUB84(dVar18,0);
      (*(uint32_t *)((char *)&(QVar5.W) + 4)) = (int)((ulonglong)dVar18 >> 0x20);
      VVar7.Y = VStack_24.Y;
      VVar7.X = VStack_24.X;
      VVar7.Y = VStack_24.Y;
      VVar7.Z = VStack_24.Z;
      VVar7.Z = SUB84(VStack_24.Z,0);
      VVar7.W = (int)((ulonglong)VStack_24.Z >> 0x20);
      (*(uint32_t *)((char *)&(MVar9) + 16)) = (uint32_t)(uintptr_t)(in_stack_ffffff78);
      MVar9.Data.Lower = 0.0;
      MVar9.Data.Upper = 0.0;
      (*(uint32_t *)((char *)&(MVar9) + 20)) = fVar14;
      DrawAntialiasedCircle__ov2((*(Vec4_L_double_G_ *)&VVar3),QVar5,dStack_44,0x48,false,1.0,VVar7,MVar9,0.0);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
    BlendStack__dtor(&BStack_9);
    DepthStack__dtor(&DStack_a);
  }
  return;
}

//==== 004d2280 Render_004d2280 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall Starbox__Render(void)const  */

void __thiscall Starbox__Render(Starbox *this)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Vec3_L_double_G_ *pVVar3;
  StarShader *pSVar4;
  MainManager *this_00;
  undefined4 uVar5;
  Vec3_L_double_G_ VStack_30;
  double dStack_18;
  TransformStack TStack_d;
  ShaderStack SStack_c;
  DepthStack DStack_b;
  BlendStack BStack_a;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = (uint)(uintptr_t)(__security_cookie ^ (uint)&stack0xfffffffc);
  Graphics__TransformStack__TransformStack(&TStack_d,Style__Default);
  pVVar3 = (Vec3_L_double_G_ *)(uintptr_t)(CameraManager__GetCameraPos((CameraManager *)(this->Parent->Managers).Size,&VStack_30));
  VVar1.W = (int)((ulonglong)pVVar3->Z >> 0x20);
  (*(uint32_t *)((char *)&(VVar1) + 0)) = (uint32_t)(uintptr_t)(*(undefined1 (*) [20])pVVar3);
  Graphics__Translate(VVar1);
  if (this->Parent->DebugDraw == false) {
    pSVar4 = StarShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&SStack_c,(Shader *)pSVar4);
    Graphics__DepthStack__DepthStack(&DStack_b,DepthMode__Disabled);
    Graphics__BlendStack__BlendStack(&BStack_a,BlendMode__Sum);
    glPointSize(0x3f800000);
    Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
    this_00 = GameManager__GetManager_class_MainManager(this->Parent);
    dStack_18 = MainManager__GetSpaceSphereRadius_km(this_00);
    uVar5 = (undefined4)((ulonglong)dStack_18 >> 0x20);
    VVar2.Y = SUB84(dStack_18,0);
    VVar2.X = dStack_18;
    VVar2.Z = uVar5;
    VVar2.Z = SUB84(dStack_18,0);
    VVar2.W = uVar5;
    Graphics__Scale(VVar2);
    VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)&this->Starscape);
    Graphics__TransformStack___TransformStack(&TStack_9);
    BlendStack__dtor(&BStack_a);
    DepthStack__dtor(&DStack_b);
    Graphics__ShaderStack___ShaderStack(&SStack_c);
  }
  Graphics__TransformStack___TransformStack(&TStack_d);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 004d2380 RenderCelestialGrid ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall Skybox__RenderCelestialGrid(void)const  */

void __thiscall Skybox__RenderCelestialGrid(Skybox *this)

{
  undefined8 stack0xffffff68;
  undefined8 stack0xfffffffc;
  double dVar1;
  Vec4_L_double_G_ VVar2;
  Vec3_L_double_G_ VVar3;
  Quaternion_L_double_G_ QVar4;
  Quaternion_L_double_G_ QVar5;
  Vec4_L_double_G_ VVar6;
  Vec4_L_double_G_ VVar7;
  Maybe_L_util__Range_L_double_G___G_ MVar8;
  Maybe_L_util__Range_L_double_G___G_ MVar9;
  Color CVar10;
  GameManager *this_00;
  MainManager *this_01;
  CameraManager *this_02;
  CustomUIThemeInterface *pCVar11;
  Maybe_L_double_G_ *pMVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  Color *__return_storage_ptr__;
  int in_stack_ffffff68;
  int in_stack_ffffff6c;
  int in_stack_ffffff70;
  int in_stack_ffffff74;
  char *in_stack_ffffff78;
  float in_stack_ffffff7c;
  float fVar20;
  Vec3_L_double_G_ *__return_storage_ptr___00;
  float fVar21;
  undefined1 local_54 [16];
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  Vec3_L_double_G_ local_24;
  DepthStack local_a;
  BlendStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (0.0 < *(double *)(this + 1)) {
    this_00 = Manager__GetParent((Manager *)this->_pad_0x8_2);
    this_01 = (MainManager *)(uintptr_t)(GameManager__GetManager_L_MainManager_G_(this_00));
    local_44 = MainManager__GetSpaceSphereRadius_km(this_01);
    local_44 = local_44 * 0.1;
    __return_storage_ptr___00 = &local_24;
    this_02 = Manager__GetCameras((Manager *)this->_pad_0x8_2);
    CameraManager__GetCameraPos(this_02,__return_storage_ptr___00);
    Graphics__DepthStack__DepthStack(&local_a,DepthMode__Read);
    fVar21 = 0.0;
    fVar20 = 7.084227e-39;
    Graphics__BlendStack__BlendStack(&local_9,Style__Default);
    __return_storage_ptr__ = (Color *)&stack0xffffff68;
    fVar14 = (float)((1.0 - *(double *)(this + 1)) * 0.0) + (float)(*(double *)(this + 1) * 0.25);
    pCVar11 = (CustomUIThemeInterface *)(uintptr_t)(UIWidget__GetCustomTheme());
    util__Color__ReAlphaed((Color *)&pCVar11[0x6f].field_0x8,__return_storage_ptr__,fVar14);
    CVar10._pad_0x4_1 = in_stack_ffffff6c;
    CVar10._pad_0x0_0 = in_stack_ffffff68;
    CVar10._pad_0x8_2 = in_stack_ffffff70;
    CVar10._pad_0xc_3 = in_stack_ffffff74;
    CVar10.Hue_degrees = (float)(uintptr_t)in_stack_ffffff78;
    CVar10.Saturation = in_stack_ffffff7c;
    CVar10.Value = fVar20;
    CVar10.Alpha = fVar21;
    glColor(CVar10);
    iVar13 = 0;
    do {
      dVar19 = (double)(iVar13 + -3) * 0.25;
      local_2c = dVar19 * local_44;
      local_34 = 1.0 - dVar19 * dVar19;
      fVar14 = 7.084455e-39;
      pMVar12 = util__Sqrt((Maybe_L_double_G_ *)local_54,&local_34);
      if (pMVar12->IsValidData == false) {
        fVar14 = 2.66247e-44;
        in_stack_ffffff78 = "\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h";
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      in_stack_ffffff78 = (char *)((uint)in_stack_ffffff78 & 0xffffff00);
      local_2c = local_2c + local_24.Z;
      dVar19 = (double)CONCAT44(local_24.Z,local_24.Y) + 0.0;
      VVar2.Y = SUB84(dVar19,0);
      VVar2.X = (double)CONCAT44(local_24.Y,local_24.X) + 0.0;
      VVar2.Z = (int)((ulonglong)dVar19 >> 0x20);
      VVar2.Z = local_2c;
      (*(uint32_t *)((char *)&(QVar4.W) + 4)) = 0x3ff00000;
      (*(uint32_t *)((char *)&(QVar4) + 0)) = ZEXT828(0);
      VVar6.Y = local_24.Y;
      VVar6.X = local_24.X;
      VVar6.Y = local_24.Y;
      VVar6.Z = local_24.Z;
      VVar6.Z = SUB84(local_24.Z,0);
      VVar6.W = (int)((ulonglong)local_24.Z >> 0x20);
      (*(uint32_t *)((char *)&(MVar8) + 16)) = (uint32_t)(uintptr_t)(in_stack_ffffff78);
      MVar8.Data.Lower = 0.0;
      MVar8.Data.Upper = 0.0;
      (*(uint32_t *)((char *)&(MVar8) + 20)) = fVar14;
      DrawAntialiasedCircle__ov2(VVar2,QVar4,pMVar12->Data * local_44,0x48,false,1.0,VVar6,MVar8,0.0);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 7);
    dVar19 = 0.7853981633974483;
    iVar13 = 0;
    libm_sse2_sin_precise(0.0);
    local_34 = dVar19 * 0.0;
    dVar15 = 0.7853981633974483;
    local_2c = dVar19;
    libm_sse2_cos_precise(0.0);
    local_3c = dVar15;
    do {
      dVar16 = (double)iVar13 * 0.125 * 3.141592653589793 * 0.5;
      dVar19 = dVar16;
      libm_sse2_sin_precise(0.0);
      dVar17 = dVar19 * 0.0;
      (*(uint64_t*)((char*)&(local_54)+8)) = dVar19;
      libm_sse2_cos_precise(0.0);
      dVar15 = dVar17 * local_34;
      dVar19 = local_34 * (double)(*(uint64_t*)((char*)&(local_54)+8));
      dVar18 = local_3c * (double)(*(uint64_t*)((char*)&(local_54)+8));
      (*(uint64_t*)((char*)&(local_54)+8)) =
           (dVar17 * local_3c - dVar15) + local_2c * (double)(*(uint64_t*)((char*)&(local_54)+8)) + local_34 * dVar16;
      in_stack_ffffff78 = (char *)((uint)in_stack_ffffff78 & 0xffffff00);
      dVar1 = (dVar15 - dVar17 * local_2c) + dVar18 + local_34 * dVar16;
      dVar18 = local_3c * dVar16 - (dVar17 * local_2c + dVar15 + dVar19);
      VVar3.Y = local_24.Y;
      VVar3.X = local_24.X;
      VVar3.Y = local_24.Y;
      VVar3.Z = local_24.Z;
      VVar3.Z = local_24.Z;
      QVar5.Y = (int)(*(uint64_t*)((char*)&(local_54)+8));
      QVar5.X = ((dVar15 + dVar17 * local_3c) - dVar19) + local_2c * dVar16;
      QVar5.Z = (int)((ulonglong)(*(uint64_t*)((char*)&(local_54)+8)) >> 0x20);
      QVar5.Z = SUB84(dVar1,0);
      QVar5.W = (int)((ulonglong)dVar1 >> 0x20);
      QVar5.W = SUB84(dVar18,0);
      (*(uint32_t *)((char *)&(QVar5.W) + 4)) = (int)((ulonglong)dVar18 >> 0x20);
      VVar7.Y = local_24.Y;
      VVar7.X = local_24.X;
      VVar7.Y = local_24.Y;
      VVar7.Z = local_24.Z;
      VVar7.Z = SUB84(local_24.Z,0);
      VVar7.W = (int)((ulonglong)local_24.Z >> 0x20);
      (*(uint32_t *)((char *)&(MVar9) + 16)) = (uint32_t)(uintptr_t)(in_stack_ffffff78);
      MVar9.Data.Lower = 0.0;
      MVar9.Data.Upper = 0.0;
      (*(uint32_t *)((char *)&(MVar9) + 20)) = fVar14;
      DrawAntialiasedCircle__ov2((*(Vec4_L_double_G_ *)&VVar3),QVar5,local_44,0x48,false,1.0,VVar7,MVar9,0.0);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 8);
    BlendStack__dtor(&local_9);
    DepthStack__dtor(&local_a);
  }
  return;
}

//==== 004d2740 SetAll_004d2740 ====


/* public: virtual void  util__Darray_L_structStarDatum_G___SetAll(struct StarDatum const &)
    */

void __thiscall
util__Darray_struct_StarDatum___SetAll(Darray_L_struct_StarDatum_G_ *this,StarDatum *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 0xe) {
    do {
      uVar1 = *(undefined4 *)((int)&(param_1->Direction).X + 4);
      uVar2 = (undefined4)((param_1->Direction).Y);
      uVar3 = *(undefined4 *)((int)&(param_1->Direction).Y + 4);
      *puVar4 = (undefined4)((param_1->Direction).X);
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = *(undefined4 *)((int)&(param_1->Direction).Z + 4);
      uVar2 = (undefined4)((param_1->Color).X);
      uVar3 = *(undefined4 *)((int)&(param_1->Color).X + 4);
      puVar4[4] = (undefined4)((param_1->Direction).Z);
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = *(undefined4 *)((int)&(param_1->Color).Y + 4);
      uVar2 = (undefined4)((param_1->Color).Z);
      uVar3 = *(undefined4 *)((int)&(param_1->Color).Z + 4);
      puVar4[8] = (undefined4)((param_1->Color).Y);
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      *(double *)(puVar4 + 0xc) = param_1->RelativeLuminance;
      puVar4 = puVar4 + 0xe;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x38));
  }
  return;
}





//==== 004d27a0 SetAll_004d27a0 ====


/* public: virtual void  util__Darray_L_classutil__SharedPtr_L_structUIWidget_G___G___SetAll(class util__SharedPtr_L_structUIWidget_G_ const &) */

void 
util__Darray_class_util__SharedPtr_struct_UIWidget_____SetAll
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this,SharedPtr_L_struct_UIWidget_G_ *param_1
          )

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  int *piVar2;
  int *piVar3;
  
  piVar2 = *(int **)(this + 4);
  if (piVar2 != piVar2 + *(int *)(this + 8) * 2) {
    do {
      piVar3 = (int *)*piVar2;
      this_00 = (ReferenceController *)piVar2[1];
      *piVar2 = *(int *)param_1;
      this_01 = *(ReferenceController **)(param_1 + 4);
      piVar2[1] = (int)this_01;
      if (this_01 != (ReferenceController *)0x0) {
        ReferenceController__AddStrongReference(this_01);
      }
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (piVar3 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar3 + 4))(1);
        }
        this_02 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_02,piVar3);
      }
      piVar2 = piVar2 + 2;
    } while (piVar2 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
  }
  return;
}





//==== 004d2830 SetSize_004d2830 ====


/* private: void  util__Darray_L_structStarDatum_G___SetSize(int const &) */

void __thiscall util__Darray_struct_StarDatum___SetSize(Darray_L_struct_StarDatum_G_ *this,int *param_1)

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
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x38),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x38))) {
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(undefined8 *)(puVar4 + 0xc) = 0;
      puVar4 = puVar4 + 0xe;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x38));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 004d2900 SetSize_004d2900 ====


/* private: void  util__Darray_L_classutil__SharedPtr_L_structUIWidget_G__G___SetSize(int const
   &) */

void 
util__Darray_class_util__SharedPtr_struct_UIWidget_____SetSize
          (Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  ReferenceControllerRegistry *this_01;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
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
     (piVar4 = (int *)(iVar2 + iVar3 * 8), piVar4 != (int *)(iVar2 + *(int *)(this + 8) * 8))) {
    do {
      this_00 = (ReferenceController *)piVar4[1];
      piVar5 = (int *)*piVar4;
      *piVar4 = 0;
      piVar4[1] = 0;
      if ((this_00 != (ReferenceController *)0x0) &&
         (bVar1 = ReferenceController__ReleaseStrongReference(this_00), bVar1)) {
        if (piVar5 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar5 + 4))(1);
        }
        this_01 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(this_01,piVar5);
      }
      piVar4 = piVar4 + 2;
    } while (piVar4 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 8));
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 004d29e0 Tick_004d29e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall Skybox__Tick(double) */

void __thiscall Skybox__Tick(Skybox *this,double param_1)

{
  undefined8 stack0xfffffffc;
  void *pvVar1;
  _func___cdecl_bool_void_ptr *p_Var2;
  char cVar3;
  double dVar4;
  double local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pvVar1 = (this->ShouldBeShowing).Callee;
  if ((pvVar1 == (void *)0x0) ||
     (p_Var2 = (this->ShouldBeShowing).CallbackFunction,
     p_Var2 == (_func___cdecl_bool_void_ptr *)0x0)) {
    cVar3 = *(char *)&this->ColorIntensity;
  }
  else {
    cVar3 = (*p_Var2)(pvVar1);
  }
  if (cVar3 == '\0') {
    local_10 = 0.0;
  }
  else {
    local_10 = 1.0;
  }
  local_10 = local_10 - *(double *)(this + 1);
  dVar4 = util__Abs(&local_10);
  if (param_1 / 0.3 < dVar4) {
    if (local_10 == 0.0) {
      local_10 = 0.0;
    }
    else {
      dVar4 = util__Abs(&local_10);
      local_10 = local_10 / dVar4;
    }
    dVar4 = local_10 * (param_1 / 0.3) + *(double *)(this + 1);
  }
  else {
    pvVar1 = (this->ShouldBeShowing).Callee;
    if ((pvVar1 == (void *)0x0) ||
       (p_Var2 = (this->ShouldBeShowing).CallbackFunction,
       p_Var2 == (_func___cdecl_bool_void_ptr *)0x0)) {
      cVar3 = *(char *)&this->ColorIntensity;
    }
    else {
      cVar3 = (*p_Var2)(pvVar1);
    }
    if (cVar3 == '\0') {
      this[1]._padding_ = 0;
      this[1]._pad_0x4_1 = 0;
      return;
    }
    dVar4 = 1.0;
  }
  *(double *)(this + 1) = dVar4;
  return;
}

//==== 004d2b00 operator___004d2b00 ====


/* public: virtual struct util__ClassMember &  util__Darray_struct_util__ClassMember___operator__o2(int const &)const  */

ClassMember * 
util__Darray_struct_util__ClassMember___operator__o2
          (Darray_L_struct_util__ClassMember_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (ClassMember *)(*(int *)(this + 4) + iVar1 * 0x28);
}





//==== 004d2b50 Last_004d2b50 ====


/* public: virtual struct util__ClassMember & __thiscall util__Darray_struct_util__ClassMember___Last(void) */

ClassMember * __thiscall
util__Darray_struct_util__ClassMember___Last(Darray_L_struct_util__ClassMember_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (ClassMember *)(*(int *)(this + 4) + iVar1 * 0x28 + -0x28);
}





//==== 004d2b90 Last_004d2b90 ====


/* public: virtual struct util__ClassMember const &  util__Darray_L_struct_util__ClassMember_G___Last__o1(void)const  */

ClassMember * 
util__Darray_struct_util__ClassMember___Last__o3(Darray_L_struct_util__ClassMember_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (ClassMember *)(*(int *)(this + 4) + iVar1 * 0x28 + -0x28);
}





//==== 004d2bd0 Clear_004d2bd0 ====


/* public: virtual void  util__Darray_L_structutil__ClassMember_G___Clear(void) */

void __thiscall
util__Darray_struct_util__ClassMember___Clear(Darray_L_struct_util__ClassMember_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 004d2bf0 SetAll_004d2bf0 ====


/* public: virtual void  util__Darray_L_structutil__ClassMember_G___SetAll(struct
   util__ClassMember const &) */

void 
util__Darray_struct_util__ClassMember___SetAll
          (Darray_L_struct_util__ClassMember_G_ *this,ClassMember *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != (Str_L_char_G_ *)((int)this_00 + *(int *)(this + 8) * 0x28)) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,&param_1->Name);
      this_00[1].Data = *(char **)&param_1->Type;
      this_00[1].Capacity = param_1->Offset;
      this_00[1].Length = param_1->Size;
      util__Maybe_struct_util__ClassMember___operator(this_00 + 2,&param_1->AdditionalType);
      *(bool *)&this_00[3].Data = param_1->IsArray;
      *(bool *)((int)&this_00[3].Data + 1) = param_1->IsMaybe;
      this_00 = (Str_L_char_G_ *)&this_00[3].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x28));
  }
  return;
}





//==== 004d2c60 scalar_deleting_destructor_004d2c60 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__ClassMember_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__ClassMember____scalar_deleting_destructor__o2
          (Darray_L_struct_util__ClassMember_G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_52);
  if (*(ClassMember **)(this + 4) != (ClassMember *)0x0) {
    util__Darray_struct_util__ClassMember____scalar_deleting_destructor(*(ClassMember **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)(&vftable);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 004d2ca0 GetReflectionInfo ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   ThemeFont__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall ThemeFont__GetReflectionInfo(ThemeFont *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_555f21e0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_555f21e0__thread_safe_static_guard_0__);
    if ( cde_l2_555f21e0__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_acc107ca_ReflectionInfo) = &vftable_54;
      _Init_thread_footer(& cde_l2_555f21e0__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_acc107ca_ReflectionInfo;
}





//==== 004d2d00 scalar_deleting_destructor_004d2d00 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall ThemeFont:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall ThemeFont___scalar_deleting_destructor(ThemeFont *this,uint param_1)

{
  char *pcVar1;
  
  Font___Font(&this->FontUsed);
  pcVar1 = (this->Name).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->Name).Data = (char *)0x0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x6c);
  }
  return this;
}

//==== 004d2d60 GetTypeName ====


/* public: virtual class util__Str_L_char_G_  ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetTypeName(void)const  */

Str_L_char_G_ * 
ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetTypeName
          (ReflectionInfoStruct_L_struct_ThemeFont_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"ThemeFont");
  return __return_storage_ptr__;
}





//==== 004d2d80 GetMembers ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetMembers__o2
          (ReflectionInfoStruct_L_struct_ThemeFont_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_246256fd__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_246256fd__thread_safe_static_guard_0__),
      cde_l2_246256fd__thread_safe_static_guard_0__ == -1)) {
     cde_l2_00f774cd_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_246256fd__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_00f774cd_Count);
  iVar3 = (int)(uintptr_t)(0);
  if (0 <  cde_l2_00f774cd_Count) {
    do {
      pCStack_8 = (ClassMember *)(uintptr_t)(StaticGetMemberByIndex(&CStack_34,iVar3));
      iVar1 = *(int *)(in_stack_00000004 + 8);
      iStack_c = iVar1 + 1;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_c);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&pCStack_8->Name);
        *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)&pCStack_8->Type;
        *(uint *)(iVar1 + -0x18) = pCStack_8->Offset;
        *(uint *)(iVar1 + -0x14) = pCStack_8->Size;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&pCStack_8->AdditionalType);
        *(bool *)(iVar1 + -4) = pCStack_8->IsArray;
        *(bool *)(iVar1 + -3) = pCStack_8->IsMaybe;
      }
      if (CStack_34.AdditionalType.Data != (char *)0x0) {
        port_op_delete(CStack_34.AdditionalType.Data);
        CStack_34.AdditionalType.Data = (char *)0x0;
      }
      if (CStack_34.Name.Data != (char *)0x0) {
        port_op_delete(CStack_34.Name.Data);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <  cde_l2_00f774cd_Count);
  }
  return in_stack_00000004;
}





//==== 004d2ec0 GetMember ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetMember(class util__Str_L_char_G_ const &)const
    */

Str_L_char_G_ * 
ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetMember__o2
          (ReflectionInfoStruct_L_struct_ThemeFont_G_ *this,Str_L_char_G_ *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_stack_00000008;
  undefined1 auStack_2c [16];
  uint uStack_1c;
  uint uStack_18;
  Str_L_char_G_ SStack_14;
  bool bStack_8;
  bool bStack_7;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_5bc5fed4__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5bc5fed4__thread_safe_static_guard_0__),
      cde_l2_5bc5fed4__thread_safe_static_guard_0__ == -1)) {
     cde_l2_f2000d81_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5bc5fed4__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_f2000d81_Count) {
    do {
      StaticGetMemberByIndex((ClassMember *)auStack_2c,iVar6);
      uVar1 = (*(uint32_t*)&(auStack_2c));
      if ((*(uint32_t*)((char*)&(auStack_2c)+8)) == in_stack_00000008[2]) {
        pcVar2 = "";
        if (0 < (int)(*(uint32_t*)((char*)&(auStack_2c)+4))) {
          pcVar2 = (char *)(*(uint32_t*)&(auStack_2c));
        }
        if ((int)in_stack_00000008[1] < 1) {
          puVar4 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
        }
        else {
          puVar4 = (undefined1 *)*in_stack_00000008;
        }
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
LAB_004d2f4d:
          util__Str_char___Str_char(param_1,(Str_L_char_G_ *)auStack_2c);
          param_1[1].Data = (char *)(*(uint32_t *)((char *)&(auStack_2c) + 12));
          param_1[1].Capacity = uStack_1c;
          param_1[1].Length = uStack_18;
          util__Str_char___Str_char(param_1 + 2,(Str_L_char_G_ *)(auStack_2c + 0x18));
          *(bool *)&param_1[3].Data = bStack_8;
          *(bool *)((int)&param_1[3].Data + 1) = bStack_7;
          *(undefined1 *)&param_1[3].Capacity = 1;
          if (SStack_14.Data != (char *)0x0) {
            port_op_delete(SStack_14.Data);
          }
          if ((char *)(*(uint32_t*)&(auStack_2c)) != (char *)0x0) {
            port_op_delete((void *)(*(uint32_t*)&(auStack_2c)));
          }
          return param_1;
        }
        iVar5 = (int)puVar4 - (int)pcVar2;
        while (cVar3 == pcVar2[iVar5]) {
          cVar3 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar3 == '\0') goto LAB_004d2f4d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_f2000d81_Count);
  }
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[1].Data = (char *)0x0;
  param_1[1].Capacity = 0;
  param_1[1].Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  *(undefined8 *)&param_1[2].Length = 0;
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  param_1[2].Length = 0;
  *(undefined1 *)&param_1[3].Capacity = 0;
  return param_1;
}





//==== 004d3060 InitializeMembers ====


/* public: virtual void  util__Color__ReflectionInfoStruct_struct_util__Color___InitializeMembers(class util__Reflectable *) */

void 
util__Color__ReflectionInfoStruct_struct_util__Color___InitializeMembers
          (ReflectionInfoStruct_L_struct_util__Color_G_ *this,Reflectable *param_1)

{
  InitializeClassMembers((ReflectionInfoBase *)this,param_1);
  return;
}





//==== 004d3080 GetFactory ====


/* public: virtual class util__Reflectable * (__cdecl*
   ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall ThemeFont__ReflectionInfoStruct_struct_ThemeFont___GetFactory__o2
          (ReflectionInfoStruct_L_struct_ThemeFont_G_ *this)

{
  return StaticFactory;
}





//==== 004d3090 GetReflectionInfo_004d3090 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CoreUITheme__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CoreUITheme__GetReflectionInfo(CoreUITheme *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_be5e6992__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_be5e6992__thread_safe_static_guard_0__);
    if ( cde_l2_be5e6992__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_75c4296c_ReflectionInfo) = &vftable_56;
      _Init_thread_footer(& cde_l2_be5e6992__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_75c4296c_ReflectionInfo;
}





//==== 004d30f0 scalar_deleting_destructor_004d30f0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall CoreUITheme:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall CoreUITheme___scalar_deleting_destructor(CoreUITheme *this,uint param_1)

{
  CoreUITheme___CoreUITheme(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x628);
  }
  return this;
}





//==== 004d3120 GetTypeName_004d3120 ====


/* public: virtual class util__Str_L_char_G_  CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetTypeName(void)const  */

Str_L_char_G_ * 
CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetTypeName
          (ReflectionInfoStruct_L_struct_CoreUITheme_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CoreUITheme");
  return __return_storage_ptr__;
}





//==== 004d3140 GetMembers_004d3140 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetMembers__o2
          (ReflectionInfoStruct_L_struct_CoreUITheme_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_60197c71__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_60197c71__thread_safe_static_guard_0__),
      cde_l2_60197c71__thread_safe_static_guard_0__ == -1)) {
     cde_l2_27b6947a_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_60197c71__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_27b6947a_Count);
  iVar3 = (int)(uintptr_t)(0);
  if (0 <  cde_l2_27b6947a_Count) {
    do {
      pCStack_8 = (ClassMember *)(uintptr_t)(StaticGetMemberByIndex(&CStack_34,iVar3));
      iVar1 = *(int *)(in_stack_00000004 + 8);
      iStack_c = iVar1 + 1;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_c);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&pCStack_8->Name);
        *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)&pCStack_8->Type;
        *(uint *)(iVar1 + -0x18) = pCStack_8->Offset;
        *(uint *)(iVar1 + -0x14) = pCStack_8->Size;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&pCStack_8->AdditionalType);
        *(bool *)(iVar1 + -4) = pCStack_8->IsArray;
        *(bool *)(iVar1 + -3) = pCStack_8->IsMaybe;
      }
      if (CStack_34.AdditionalType.Data != (char *)0x0) {
        port_op_delete(CStack_34.AdditionalType.Data);
        CStack_34.AdditionalType.Data = (char *)0x0;
      }
      if (CStack_34.Name.Data != (char *)0x0) {
        port_op_delete(CStack_34.Name.Data);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <  cde_l2_27b6947a_Count);
  }
  return in_stack_00000004;
}





//==== 004d3280 GetMember_004d3280 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetMember__o2
          (ReflectionInfoStruct_L_struct_CoreUITheme_G_ *this,Str_L_char_G_ *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_stack_00000008;
  undefined1 auStack_2c [16];
  uint uStack_1c;
  uint uStack_18;
  Str_L_char_G_ SStack_14;
  bool bStack_8;
  bool bStack_7;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_45b9a09c__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_45b9a09c__thread_safe_static_guard_0__),
      cde_l2_45b9a09c__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1965bc5e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_45b9a09c__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_1965bc5e_Count) {
    do {
      StaticGetMemberByIndex((ClassMember *)auStack_2c,iVar6);
      uVar1 = (*(uint32_t*)&(auStack_2c));
      if ((*(uint32_t*)((char*)&(auStack_2c)+8)) == in_stack_00000008[2]) {
        pcVar2 = "";
        if (0 < (int)(*(uint32_t*)((char*)&(auStack_2c)+4))) {
          pcVar2 = (char *)(*(uint32_t*)&(auStack_2c));
        }
        if ((int)in_stack_00000008[1] < 1) {
          puVar4 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
        }
        else {
          puVar4 = (undefined1 *)*in_stack_00000008;
        }
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
LAB_004d330d:
          util__Str_char___Str_char(param_1,(Str_L_char_G_ *)auStack_2c);
          param_1[1].Data = (char *)(*(uint32_t *)((char *)&(auStack_2c) + 12));
          param_1[1].Capacity = uStack_1c;
          param_1[1].Length = uStack_18;
          util__Str_char___Str_char(param_1 + 2,(Str_L_char_G_ *)(auStack_2c + 0x18));
          *(bool *)&param_1[3].Data = bStack_8;
          *(bool *)((int)&param_1[3].Data + 1) = bStack_7;
          *(undefined1 *)&param_1[3].Capacity = 1;
          if (SStack_14.Data != (char *)0x0) {
            port_op_delete(SStack_14.Data);
          }
          if ((char *)(*(uint32_t*)&(auStack_2c)) != (char *)0x0) {
            port_op_delete((void *)(*(uint32_t*)&(auStack_2c)));
          }
          return param_1;
        }
        iVar5 = (int)puVar4 - (int)pcVar2;
        while (cVar3 == pcVar2[iVar5]) {
          cVar3 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar3 == '\0') goto LAB_004d330d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_1965bc5e_Count);
  }
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[1].Data = (char *)0x0;
  param_1[1].Capacity = 0;
  param_1[1].Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  *(undefined8 *)&param_1[2].Length = 0;
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  param_1[2].Length = 0;
  *(undefined1 *)&param_1[3].Capacity = 0;
  return param_1;
}





//==== 004d3420 GetFactory_004d3420 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CoreUITheme__ReflectionInfoStruct_struct_CoreUITheme___GetFactory__o2
          (ReflectionInfoStruct_L_struct_CoreUITheme_G_ *this)

{
  return StaticFactory;
}





//==== 004d3430 GetReflectionInfo_004d3430 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   UITheme__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall UITheme__GetReflectionInfo(UITheme *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_848b620a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_848b620a__thread_safe_static_guard_0__);
    if ( cde_l2_848b620a__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_1a96b06b_ReflectionInfo) = &vftable_58;
      _Init_thread_footer(& cde_l2_848b620a__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_1a96b06b_ReflectionInfo;
}





//==== 004d3440 GetCoreTheme ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct CoreUITheme const * __thiscall UITheme__GetCoreTheme(void)const  */

CoreUITheme * __thiscall UITheme__GetCoreTheme(UITheme *this)

{
  return &this->CoreTheme;
}





//==== 004d3450 scalar_deleting_destructor_004d3450 ====

/* WARNING: int propagation algorithm not settling */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall UITheme:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall UITheme___scalar_deleting_destructor(UITheme *this,uint param_1)

{
  void *pvVar1;
  
  this->_pad_0x0_0 = (int)&vftable_57;
  (this->CoreTheme).MainFont.FontUsed.CharInfo[0x22].BitmapSize.Y =
       (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void **)&((this->CoreTheme).MainFont.FontUsed.CharInfo[0x22].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CoreTheme).MainFont.FontUsed.CharInfo[0x22].BitmapCorner.X = 0.0;
  }
  (this->CoreTheme).MainFont.FontUsed.CharInfo[0x21].BitmapSize.Y =
       (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void **)&((this->CoreTheme).MainFont.FontUsed.CharInfo[0x21].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CoreTheme).MainFont.FontUsed.CharInfo[0x21].BitmapCorner.X = 0.0;
  }
  (this->CoreTheme).MainFont.FontUsed.CharInfo[0x20].BitmapSize.Y =
       (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void **)&((this->CoreTheme).MainFont.FontUsed.CharInfo[0x20].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CoreTheme).MainFont.FontUsed.CharInfo[0x20].BitmapCorner.X = 0.0;
  }
  (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1f].BitmapSize.Y =
       (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void **)&((this->CoreTheme).MainFont.FontUsed.CharInfo[0x1f].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1f].BitmapCorner.X = 0.0;
  }
  (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1e].BitmapSize.Y =
       (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void **)&((this->CoreTheme).MainFont.FontUsed.CharInfo[0x1e].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1e].BitmapCorner.X = 0.0;
  }
  (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1d].BitmapSize.Y =
       (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void **)&((this->CoreTheme).MainFont.FontUsed.CharInfo[0x1d].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1d].BitmapCorner.X = 0.0;
  }
  (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1c].BitmapSize.Y =
       (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void **)&((this->CoreTheme).MainFont.FontUsed.CharInfo[0x1c].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CoreTheme).MainFont.FontUsed.CharInfo[0x1c].BitmapCorner.X = 0.0;
  }
  CoreUITheme___CoreUITheme(&this->CoreTheme);
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x718);
  }
  return this;
}

//==== 004d35b0 GetTypeName_004d35b0 ====


/* public: virtual class util__Str_L_char_G_  UITheme__ReflectionInfoStruct_struct_UITheme___GetTypeName(void)const  */

Str_L_char_G_ * 
UITheme__ReflectionInfoStruct_struct_UITheme___GetTypeName
          (ReflectionInfoStruct_L_struct_UITheme_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"UITheme");
  return __return_storage_ptr__;
}





//==== 004d35d0 GetMembers_004d35d0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   UITheme__ReflectionInfoStruct_struct_UITheme___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
UITheme__ReflectionInfoStruct_struct_UITheme___GetMembers__o2
          (ReflectionInfoStruct_L_struct_UITheme_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_98aca77d__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_98aca77d__thread_safe_static_guard_0__),
      cde_l2_98aca77d__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4fdc1267_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_98aca77d__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_4fdc1267_Count);
  iVar3 = (int)(uintptr_t)(0);
  if (0 <  cde_l2_4fdc1267_Count) {
    do {
      pCStack_8 = (ClassMember *)(uintptr_t)(StaticGetMemberByIndex(&CStack_34,iVar3));
      iVar1 = *(int *)(in_stack_00000004 + 8);
      iStack_c = iVar1 + 1;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_c);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&pCStack_8->Name);
        *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)&pCStack_8->Type;
        *(uint *)(iVar1 + -0x18) = pCStack_8->Offset;
        *(uint *)(iVar1 + -0x14) = pCStack_8->Size;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&pCStack_8->AdditionalType);
        *(bool *)(iVar1 + -4) = pCStack_8->IsArray;
        *(bool *)(iVar1 + -3) = pCStack_8->IsMaybe;
      }
      if (CStack_34.AdditionalType.Data != (char *)0x0) {
        port_op_delete(CStack_34.AdditionalType.Data);
        CStack_34.AdditionalType.Data = (char *)0x0;
      }
      if (CStack_34.Name.Data != (char *)0x0) {
        port_op_delete(CStack_34.Name.Data);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <  cde_l2_4fdc1267_Count);
  }
  return in_stack_00000004;
}





//==== 004d3710 GetMember_004d3710 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   UITheme__ReflectionInfoStruct_struct_UITheme___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
UITheme__ReflectionInfoStruct_struct_UITheme___GetMember__o2
          (ReflectionInfoStruct_L_struct_UITheme_G_ *this,Str_L_char_G_ *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_stack_00000008;
  undefined1 auStack_2c [16];
  uint uStack_1c;
  uint uStack_18;
  Str_L_char_G_ SStack_14;
  bool bStack_8;
  bool bStack_7;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_db2ab16a__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_db2ab16a__thread_safe_static_guard_0__),
      cde_l2_db2ab16a__thread_safe_static_guard_0__ == -1)) {
     cde_l2_abcfe89e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_db2ab16a__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_abcfe89e_Count) {
    do {
      StaticGetMemberByIndex((ClassMember *)auStack_2c,iVar6);
      uVar1 = (*(uint32_t*)&(auStack_2c));
      if ((*(uint32_t*)((char*)&(auStack_2c)+8)) == in_stack_00000008[2]) {
        pcVar2 = "";
        if (0 < (int)(*(uint32_t*)((char*)&(auStack_2c)+4))) {
          pcVar2 = (char *)(*(uint32_t*)&(auStack_2c));
        }
        if ((int)in_stack_00000008[1] < 1) {
          puVar4 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
        }
        else {
          puVar4 = (undefined1 *)*in_stack_00000008;
        }
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
LAB_004d379d:
          util__Str_char___Str_char(param_1,(Str_L_char_G_ *)auStack_2c);
          param_1[1].Data = (char *)(*(uint32_t *)((char *)&(auStack_2c) + 12));
          param_1[1].Capacity = uStack_1c;
          param_1[1].Length = uStack_18;
          util__Str_char___Str_char(param_1 + 2,(Str_L_char_G_ *)(auStack_2c + 0x18));
          *(bool *)&param_1[3].Data = bStack_8;
          *(bool *)((int)&param_1[3].Data + 1) = bStack_7;
          *(undefined1 *)&param_1[3].Capacity = 1;
          if (SStack_14.Data != (char *)0x0) {
            port_op_delete(SStack_14.Data);
          }
          if ((char *)(*(uint32_t*)&(auStack_2c)) != (char *)0x0) {
            port_op_delete((void *)(*(uint32_t*)&(auStack_2c)));
          }
          return param_1;
        }
        iVar5 = (int)puVar4 - (int)pcVar2;
        while (cVar3 == pcVar2[iVar5]) {
          cVar3 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar3 == '\0') goto LAB_004d379d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_abcfe89e_Count);
  }
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[1].Data = (char *)0x0;
  param_1[1].Capacity = 0;
  param_1[1].Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  *(undefined8 *)&param_1[2].Length = 0;
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  param_1[2].Data = (char *)0x0;
  param_1[2].Capacity = 0;
  param_1[2].Length = 0;
  *(undefined1 *)&param_1[3].Capacity = 0;
  return param_1;
}





//==== 004d38b0 GetFactory_004d38b0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   UITheme__ReflectionInfoStruct_struct_UITheme___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall UITheme__ReflectionInfoStruct_struct_UITheme___GetFactory__o2
          (ReflectionInfoStruct_L_struct_UITheme_G_ *this)

{
  return StaticFactory;
}





//==== 004d38c0 Darray_util__ClassMember_ ====


/* public:  util__Darray_L_structutil__ClassMember_G___Darray_L_structutil__ClassMember_G_(int)
    */

Darray_L_struct_util__ClassMember_G_ * 
util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
          (Darray_L_struct_util__ClassMember_G_ *this,int param_1)

{
  undefined8 stack0xfffffff4;
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_2c;
  char *pcStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_14 [12];
  undefined1 uStack_8;
  undefined1 uStack_7;
  
  *(undefined ***)this = (undefined **)(&vftable_52);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 0x28 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 0x28);
    uVar3 = -(uint)(0xfffffffb < uVar3) | uVar3 + 4;
    piVar1 = (int *)port_op_new(uVar3);
    if (piVar1 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      memset(piVar1,0,uVar3);
      *piVar1 = param_1;
      piVar4 = piVar1 + 1;
      if (param_1 != 0) {
        piVar2 = piVar1 + 9;
        piVar1 = piVar4;
        do {
          *piVar1 = 0;
          piVar1 = piVar1 + 10;
          piVar2[-7] = 0;
          piVar2[-6] = 0;
          piVar2[-2] = 0;
          piVar2[-1] = 0;
          *piVar2 = 0;
          param_1 = param_1 + -1;
          piVar2 = piVar2 + 10;
        } while (param_1 != 0);
      }
    }
    *(int **)(this + 4) = piVar4;
    param_1 = 0;
    if (0 < *(int *)(this + 0xc)) {
      iVar5 = 0;
      do {
        this_00 = (Str_L_char_G_ *)(*(int *)(this + 4) + iVar5);
        pcStack_20 = (char *)0x0;
        iStack_1c = 0;
        iStack_18 = 0;
        SStack_2c.Data = (char *)0x0;
        SStack_2c.Capacity = 0;
        SStack_2c.Length = 0;
        (*(uint32_t*)&(auStack_14)) = (uint32_t)(uintptr_t)((char *)0x0);
        (*(uint32_t*)((char*)&(auStack_14)+4)) = 0;
        stack0xfffffff4 = 0;
        util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_2c);
        this_00[1].Data = pcStack_20;
        this_00[1].Capacity = iStack_1c;
        this_00[1].Length = iStack_18;
        util__Maybe_struct_util__ClassMember___operator(this_00 + 2,(Str_L_char_G_ *)auStack_14);
        iVar5 = iVar5 + 0x28;
        *(undefined1 *)&this_00[3].Data = uStack_8;
        *(undefined1 *)((int)&this_00[3].Data + 1) = uStack_7;
        param_1 = param_1 + 1;
      } while (param_1 < *(int *)(this + 0xc));
    }
    return this;
  }
  return this;
}





//==== 004d3a50 CoreUITheme ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall CoreUITheme__CoreUITheme(void) */

CoreUITheme * __thiscall CoreUITheme__CoreUITheme(CoreUITheme *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_55;
  util__Color__Color__o7(&this->ForegroundColor);
  util__Color__Color__o7(&this->BackgroundColor);
  util__Color__Color__o7(&this->TextColor);
  util__Color__Color__o7(&this->ButtonBackgroundColor);
  util__Color__Color__o7(&this->IconButtonBackgroundColor);
  util__Color__Color__o7(&this->ToggledButtonColor);
  util__Color__Color__o7(&this->ButtonTextColor);
  util__Color__Color__o7(&this->SubHeaderColor);
  util__Color__Color__o7(&this->BrightTextColor);
  util__Color__Color__o7(&this->DarkBackgroundColor);
  util__Color__Color__o7(&this->SliderForegroundColor);
  util__Color__Color__o7(&this->ListBoxBackgroundColor);
  util__Color__Color__o7(&this->EditTextBackgroundColor);
  util__Color__Color__o7(&this->WarningIconBackgroundColor);
  util__Color__Color__o7(&this->WarningTextColor);
  util__Color__Color__o7(&this->CursorPrimaryColor);
  util__Color__Color__o7(&this->CursorSecondaryColor);
  (this->HoverSound).Data = (char *)0x0;
  (this->HoverSound).Capacity = 0;
  (this->HoverSound).Length = 0;
  (this->ButtonSound).Data = (char *)0x0;
  (this->ButtonSound).Capacity = 0;
  (this->ButtonSound).Length = 0;
  this->ButtonGradient = 0.0;
  this->RadialButtonGradient = 0.0;
  this->BackgroundGradient = 0.0;
  this->BarGradient = 0.0;
  this->EditTextGradient = 0.0;
  (this->MainFont)._pad_0x4_1 = 0;
  (this->MainFont)._pad_0x8_2 = 0;
  (this->MainFont)._pad_0xc_3 = 0;
  (this->MainFont)._pad_0x0_0 = (int)&vftable_53;
  (this->MainFont).Name.Data = (char *)0x0;
  (this->MainFont).Name.Capacity = 0;
  (this->MainFont).Name.Length = 0;
  (this->MainFont).Size = 0;
  (this->MainFont).LineSpacing = 0.0;
  Font__Font(&(this->MainFont).FontUsed);
  (this->MainFont).FontUsed.CharInfo[1].BitmapCorner.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[1].BitmapCorner.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[1].TextureCoords.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[1].BitmapSize.Y = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[1].TextureCoords.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[2].Advance.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[2].Advance.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[2].BitmapSize.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[2].BitmapSize.Y = 0.0;
  Font__Font((Font *)&(this->MainFont).FontUsed.CharInfo[2].BitmapCorner);
  (this->MainFont).FontUsed.CharInfo[4].TextureCoords.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[5].Advance.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[5].Advance.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[4].TextureCoords.X = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[5].BitmapSize.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[5].BitmapSize.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[5].BitmapCorner.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[5].BitmapCorner.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[5].TextureCoords.X = 0.0;
  Font__Font((Font *)&(this->MainFont).FontUsed.CharInfo[5].TextureCoords.Y);
  (this->MainFont).FontUsed.CharInfo[8].BitmapSize.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[8].BitmapSize.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[8].BitmapCorner.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[8].Advance.Y = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[8].BitmapCorner.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[8].TextureCoords.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[8].TextureCoords.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[9].Advance.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[9].Advance.Y = 0.0;
  Font__Font((Font *)&(this->MainFont).FontUsed.CharInfo[9].BitmapSize);
  (this->MainFont).FontUsed.CharInfo[0xb].BitmapCorner.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xb].TextureCoords.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xb].TextureCoords.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xb].BitmapCorner.X = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[0xc].Advance.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xc].Advance.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xc].BitmapSize.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xc].BitmapSize.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xc].BitmapCorner.X = 0.0;
  Font__Font((Font *)&(this->MainFont).FontUsed.CharInfo[0xc].BitmapCorner.Y);
  (this->MainFont).FontUsed.CharInfo[0xf].Advance.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xf].Advance.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xf].BitmapSize.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xe].TextureCoords.Y = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[0xf].BitmapSize.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xf].BitmapCorner.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xf].BitmapCorner.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xf].TextureCoords.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0xf].TextureCoords.Y = 0.0;
  Font__Font((Font *)((this->MainFont).FontUsed.CharInfo + 0x10));
  (this->MainFont).FontUsed.CharInfo[0x12].BitmapSize.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x12].BitmapCorner.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x12].BitmapCorner.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x12].BitmapSize.X = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[0x12].TextureCoords.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x12].TextureCoords.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x13].Advance.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x13].Advance.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x13].BitmapSize.X = 0.0;
  Font__Font((Font *)&(this->MainFont).FontUsed.CharInfo[0x13].BitmapSize.Y);
  (this->MainFont).FontUsed.CharInfo[0x15].TextureCoords.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x15].TextureCoords.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x16].Advance.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x15].BitmapCorner.Y = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[0x16].Advance.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x16].BitmapSize.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x16].BitmapSize.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x16].BitmapCorner.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x16].BitmapCorner.Y = 0.0;
  Font__Font((Font *)&(this->MainFont).FontUsed.CharInfo[0x16].TextureCoords);
  (this->MainFont).FontUsed.CharInfo[0x19].Advance.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x19].BitmapSize.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x19].BitmapSize.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x19].Advance.X = (float)(uintptr_t)&vftable_53;
  (this->MainFont).FontUsed.CharInfo[0x19].BitmapCorner.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x19].BitmapCorner.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x19].TextureCoords.X = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x19].TextureCoords.Y = 0.0;
  (this->MainFont).FontUsed.CharInfo[0x1a].Advance.X = 0.0;
  Font__Font((Font *)&(this->MainFont).FontUsed.CharInfo[0x1a].Advance.Y);
  return this;
}

//==== 004d3f20 ThemeFont ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall ThemeFont__ThemeFont(void) */

ThemeFont * __thiscall ThemeFont__ThemeFont(ThemeFont *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_53;
  (this->Name).Data = (char *)0x0;
  (this->Name).Capacity = 0;
  (this->Name).Length = 0;
  this->Size = 0;
  this->LineSpacing = 0.0;
  Font__Font(&this->FontUsed);
  return this;
}

//==== 004d3f70 CoreUITheme_004d3f70 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual __thiscall CoreUITheme___CoreUITheme(void) */

void __thiscall CoreUITheme___CoreUITheme(CoreUITheme *this)

{
  void *pvVar1;
  char *pcVar2;
  
  Font___Font((Font *)&(this->MainFont).FontUsed.CharInfo[0x1a].Advance.Y);
  pvVar1 = *(void **)&((this->MainFont).FontUsed.CharInfo[0x19].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0x19].BitmapCorner.X = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[0x19].Advance.X = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0x19].Advance.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0x19].Advance.Y = 0.0;
  }
  Font___Font((Font *)&(this->MainFont).FontUsed.CharInfo[0x16].TextureCoords);
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0x16].Advance.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0x16].Advance.Y = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[0x15].BitmapCorner.Y = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0x15].TextureCoords.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0x15].TextureCoords.X = 0.0;
  }
  Font___Font((Font *)&(this->MainFont).FontUsed.CharInfo[0x13].BitmapSize.Y);
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0x12].TextureCoords.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0x12].TextureCoords.X = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[0x12].BitmapSize.X = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0x12].BitmapSize.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0x12].BitmapSize.Y = 0.0;
  }
  Font___Font((Font *)((this->MainFont).FontUsed.CharInfo + 0x10));
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0xf].BitmapSize.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0xf].BitmapSize.Y = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[0xe].TextureCoords.Y = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0xf].Advance.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0xf].Advance.X = 0.0;
  }
  Font___Font((Font *)&(this->MainFont).FontUsed.CharInfo[0xc].BitmapCorner.Y);
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0xc].Advance.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0xc].Advance.X = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[0xb].BitmapCorner.X = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[0xb].BitmapCorner.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[0xb].BitmapCorner.Y = 0.0;
  }
  Font___Font((Font *)&(this->MainFont).FontUsed.CharInfo[9].BitmapSize);
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[8].BitmapCorner.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[8].BitmapCorner.Y = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[8].Advance.Y = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[8].BitmapSize.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[8].BitmapSize.X = 0.0;
  }
  Font___Font((Font *)&(this->MainFont).FontUsed.CharInfo[5].TextureCoords.Y);
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[5].BitmapSize.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[5].BitmapSize.X = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[4].TextureCoords.X = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[4].TextureCoords.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[4].TextureCoords.Y = 0.0;
  }
  Font___Font((Font *)&(this->MainFont).FontUsed.CharInfo[2].BitmapCorner);
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[1].TextureCoords.Y);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[1].TextureCoords.Y = 0.0;
  }
  (this->MainFont).FontUsed.CharInfo[1].BitmapSize.Y = (float)(uintptr_t)&vftable_5;
  pvVar1 = *(void * *)&((this->MainFont).FontUsed.CharInfo[1].BitmapCorner.X);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont).FontUsed.CharInfo[1].BitmapCorner.X = 0.0;
  }
  Font___Font(&(this->MainFont).FontUsed);
  pcVar2 = (this->MainFont).Name.Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->MainFont).Name.Data = (char *)0x0;
  }
  (this->MainFont)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->MainFont)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->MainFont)._pad_0x4_1 = 0;
  }
  pcVar2 = (this->ButtonSound).Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->ButtonSound).Data = (char *)0x0;
  }
  pcVar2 = (this->HoverSound).Data;
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
    (this->HoverSound).Data = (char *)0x0;
  }
  (this->CursorSecondaryColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->CursorSecondaryColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CursorSecondaryColor)._pad_0x4_1 = 0;
  }
  (this->CursorPrimaryColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->CursorPrimaryColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->CursorPrimaryColor)._pad_0x4_1 = 0;
  }
  (this->WarningTextColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->WarningTextColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->WarningTextColor)._pad_0x4_1 = 0;
  }
  (this->WarningIconBackgroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->WarningIconBackgroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->WarningIconBackgroundColor)._pad_0x4_1 = 0;
  }
  (this->EditTextBackgroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->EditTextBackgroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->EditTextBackgroundColor)._pad_0x4_1 = 0;
  }
  (this->ListBoxBackgroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->ListBoxBackgroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->ListBoxBackgroundColor)._pad_0x4_1 = 0;
  }
  (this->SliderForegroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->SliderForegroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->SliderForegroundColor)._pad_0x4_1 = 0;
  }
  (this->DarkBackgroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->DarkBackgroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->DarkBackgroundColor)._pad_0x4_1 = 0;
  }
  (this->BrightTextColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->BrightTextColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->BrightTextColor)._pad_0x4_1 = 0;
  }
  (this->SubHeaderColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->SubHeaderColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->SubHeaderColor)._pad_0x4_1 = 0;
  }
  (this->ButtonTextColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->ButtonTextColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->ButtonTextColor)._pad_0x4_1 = 0;
  }
  (this->ToggledButtonColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->ToggledButtonColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->ToggledButtonColor)._pad_0x4_1 = 0;
  }
  (this->IconButtonBackgroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->IconButtonBackgroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->IconButtonBackgroundColor)._pad_0x4_1 = 0;
  }
  (this->ButtonBackgroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->ButtonBackgroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->ButtonBackgroundColor)._pad_0x4_1 = 0;
  }
  (this->TextColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->TextColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->TextColor)._pad_0x4_1 = 0;
  }
  (this->BackgroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->BackgroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->BackgroundColor)._pad_0x4_1 = 0;
  }
  (this->ForegroundColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->ForegroundColor)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->ForegroundColor)._pad_0x4_1 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  return;
}

//==== 004d4510 operator___004d4510 ====


/* public: bool const  util__Str_char___operator__o9(class util__Str_L_char_G_ const &)const  */

bool  util__Str_char___operator__o9(Str_L_char_G_ *this,Str_L_char_G_ *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  
  if (this->Length != param_1->Length) {
    return false;
  }
  if (this->Capacity < 1) {
    pcVar1 = "";
  }
  else {
    pcVar1 = this->Data;
  }
  if (param_1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = param_1->Data;
  }
  cVar2 = *pcVar1;
  if (cVar2 != '\0') {
    iVar4 = (int)pcVar3 - (int)pcVar1;
    do {
      if (cVar2 != pcVar1[iVar4]) {
        return false;
      }
      cVar2 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    } while (cVar2 != '\0');
  }
  return true;
}





//==== 004d4560 Add ====


/* public: bool  util__Darray_L_structutil__ClassMember_G___Add(struct util__ClassMember
   const &) */

bool 
util__Darray_struct_util__ClassMember___Add
          (Darray_L_struct_util__ClassMember_G_ *this,ClassMember *param_1)

{
  int iVar1;
  bool bVar2;
  int iStack_8;
  
  iVar1 = *(int *)(this + 8);
  iStack_8 = iVar1 + 1;
  SetSize(this,&iStack_8);
  bVar2 = CheckSize(this,iVar1);
  if (!bVar2) {
  }
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 0x28;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x28),&param_1->Name);
  *(undefined4 *)(iVar1 + -0x1c) = *(undefined4 *)&param_1->Type;
  *(uint *)(iVar1 + -0x18) = param_1->Offset;
  *(uint *)(iVar1 + -0x14) = param_1->Size;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x10),&param_1->AdditionalType);
  *(bool *)(iVar1 + -4) = param_1->IsArray;
  *(bool *)(iVar1 + -3) = param_1->IsMaybe;
  return true;
}





//==== 004d45e0 CheckSize_004d45e0 ====


/* private: bool  util__Darray_L_structutil__ClassMember_G___CheckSize(int) */

bool 
util__Darray_struct_util__ClassMember___CheckSize
          (Darray_L_struct_util__ClassMember_G_ *this,int param_1)

{
  bool *pbVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  ClassMember *this_00;
  uint *puVar6;
  uint uVar7;
  ClassMember *pCVar8;
  bool bVar9;
  uint *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar4 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar4;
  bVar2 = !bVar9;
  if (bVar2) {
    puStack_c = (uint *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar4 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar4 < 0x40000000;
  if (!bVar2) {
    puStack_c = (uint *)0x3fffffff;
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
  uVar4 = -(uint)((int)((ulonglong)uVar7 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x28);
  uVar4 = -(uint)(0xfffffffb < uVar4) | uVar4 + 4;
  puStack_c = (uint *)port_op_new(uVar4);
  if (puStack_c == (uint *)0x0) {
    puStack_c = (uint *)0x0;
    puVar6 = puStack_c;
  }
  else {
    memset(puStack_c,0,uVar4);
    *puStack_c = uVar7;
    puVar6 = puStack_c + 1;
    if (uVar7 != 0) {
      puVar3 = puStack_c + 9;
      puVar5 = puVar6;
      do {
        *puVar5 = 0;
        puVar5 = puVar5 + 10;
        puVar3[-7] = 0;
        puVar3[-6] = 0;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        *puVar3 = 0;
        uVar7 = uVar7 - 1;
        puVar3 = puVar3 + 10;
      } while (uVar7 != 0);
    }
  }
  puStack_c = puVar6;
  this_00 = *(ClassMember **)(this + 4);
  puVar6 = puStack_c;
  if (this_00 != (ClassMember *)0x0) {
    puVar6 = puStack_c + *(int *)(this + 8) * 10;
    if (this_00 != this_00 + param_1) {
      puVar5 = puStack_c + 4;
      pCVar8 = this_00;
      do {
        if (puVar5 + -4 == puVar6) break;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + -4),&pCVar8->Name);
        puVar5[-1] = *(uint *)&pCVar8->Type;
        *puVar5 = pCVar8->Offset;
        puVar5[1] = pCVar8->Size;
        util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(puVar5 + 2),&pCVar8->AdditionalType);
        *(bool *)(puVar5 + 5) = pCVar8->IsArray;
        pbVar1 = &pCVar8->IsMaybe;
        pCVar8 = pCVar8 + 1;
        *(bool *)((int)puVar5 + 0x15) = *pbVar1;
        puVar5 = puVar5 + 10;
        this_00 = *(ClassMember **)(this + 4);
      } while (pCVar8 != this_00 + param_1);
    }
    puVar6 = puStack_c;
    if (this_00 != (ClassMember *)0x0) {
      util__Darray_struct_util__ClassMember____scalar_deleting_destructor(this_00,3);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(uint **)(this + 4) = puVar6;
  return bStack_5;
}





//==== 004d47c0 SetSize_004d47c0 ====


/* private: void  util__Darray_L_structutil__ClassMember_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_util__ClassMember___SetSize(Darray_L_struct_util__ClassMember_G_ *this,int *param_1)

{
  undefined8 stack0xfffffff4;
  bool bVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_2c;
  char *pcStack_20;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_14 [12];
  undefined1 uStack_8;
  undefined1 uStack_7;
  
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
     (this_00 = (Str_L_char_G_ *)(iVar2 + iVar3 * 0x28),
     this_00 != (Str_L_char_G_ *)(iVar2 + *(int *)(this + 8) * 0x28))) {
    do {
      pcStack_20 = (char *)0x0;
      iStack_1c = 0;
      iStack_18 = 0;
      SStack_2c.Data = (char *)0x0;
      SStack_2c.Capacity = 0;
      SStack_2c.Length = 0;
      (*(uint32_t*)&(auStack_14)) = (uint32_t)(uintptr_t)((char *)0x0);
      (*(uint32_t*)((char*)&(auStack_14)+4)) = 0;
      stack0xfffffff4 = 0;
      util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_2c);
      this_00[1].Data = pcStack_20;
      this_00[1].Capacity = iStack_1c;
      this_00[1].Length = iStack_18;
      util__Maybe_struct_util__ClassMember___operator(this_00 + 2,(Str_L_char_G_ *)auStack_14);
      *(undefined1 *)&this_00[3].Data = uStack_8;
      *(undefined1 *)((int)&this_00[3].Data + 1) = uStack_7;
      this_00 = (Str_L_char_G_ *)&this_00[3].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x28));
  }
  *(int *)(this + 8) = iVar3;
  return;
}




