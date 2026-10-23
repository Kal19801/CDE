// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

static const undefined4 __xmm_41f00000000000000000000000000000[4] = {0x41f00000u, 0x00000000u, 0x00000000u, 0x00000000u};

//==== 0083fdc0 SetupPointers ====


/* private: virtual void __thiscall ColorTexVertexBufferObject__SetupPointers(void)const  */

void __thiscall ColorTexVertexBufferObject__SetupPointers(ColorTexVertexBufferObject *this)

{
  glVertexPointer(3,0x140a,0x30,0);
  glTexCoordPointer(2,0x1406,0x30,0x18);
  glColorPointer(4,0x1406,0x30,0x20);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x19c);
  return;
}





//==== 0083fe10 SetupPointers_0083fe10 ====


/* private: virtual void __thiscall ColorVertexBufferObject__SetupPointers(void)const  */

void __thiscall ColorVertexBufferObject__SetupPointers(ColorVertexBufferObject *this)

{
  glVertexPointer(3,0x140a,0x28,0);
  glColorPointer(4,0x1406,0x28,0x18);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x166);
  return;
}





//==== 0083fe50 SetupPointers_0083fe50 ====


/* private: virtual void __thiscall FontVertexBufferObject__SetupPointers(void)const  */

void __thiscall FontVertexBufferObject__SetupPointers(FontVertexBufferObject *this)

{
  glVertexPointer(2,0x1406,0x10,0);
  glTexCoordPointer(2,0x1406,0x10,8);
  return;
}





//==== 0083fe80 SetupPointers_0083fe80 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: virtual void __thiscall VertexBufferObject__SetupPointers(void)const  */

void __thiscall VertexBufferObject__SetupPointers(VertexBufferObject *this)

{
  Shader *pSVar1;
  GameManager *pGVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  
  glVertexPointer(3,0x1406,0x2c,0);
  glTexCoordPointer(2,0x1406,0x2c,0xc);
  pcVar9 = "Mode__Normal";
  pSVar1 = Shader__GetCurrent();
  pGVar2 = Manager__GetParent((Manager *)pSVar1);
  iVar3 = (*___glewGetAttribLocation)(pGVar2,pcVar9);
  if (iVar3 != -1) {
    uVar8 = 0x14;
    uVar7 = 0x2c;
    uVar6 = 0;
    uVar5 = 0x1406;
    uVar4 = 3;
    pcVar9 = "Mode__Normal";
    pSVar1 = Shader__GetCurrent();
    pGVar2 = Manager__GetParent((Manager *)pSVar1);
    uVar4 = (*___glewGetAttribLocation)(pGVar2,pcVar9,uVar4,uVar5,uVar6,uVar7,uVar8);
    (*___glewVertexAttribPointer)(uVar4);
  }
  pcVar9 = "Tangent";
  pSVar1 = Shader__GetCurrent();
  pGVar2 = Manager__GetParent((Manager *)pSVar1);
  iVar3 = (*___glewGetAttribLocation)(pGVar2,pcVar9);
  if (iVar3 != -1) {
    uVar8 = 0x20;
    uVar7 = 0x2c;
    uVar6 = 0;
    uVar5 = 0x1406;
    uVar4 = 3;
    pcVar9 = "Tangent";
    pSVar1 = Shader__GetCurrent();
    pGVar2 = Manager__GetParent((Manager *)pSVar1);
    uVar4 = (*___glewGetAttribLocation)(pGVar2,pcVar9,uVar4,uVar5,uVar6,uVar7,uVar8);
    (*___glewVertexAttribPointer)(uVar4);
  }
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x12f);
  return;
}





//==== 0083ff50 SetupState ====


/* private: virtual void __thiscall ColorTexVertexBufferObject__SetupState(void)const  */

void __thiscall ColorTexVertexBufferObject__SetupState(ColorTexVertexBufferObject *this)

{
  glEnableClientState(0x8074);
  glEnableClientState(0x8078);
  glEnableClientState(0x8076);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x1a4);
  return;
}





//==== 0083ff80 SetupState_0083ff80 ====


/* private: virtual void __thiscall ColorVertexBufferObject__SetupState(void)const  */

void __thiscall ColorVertexBufferObject__SetupState(ColorVertexBufferObject *this)

{
  glEnableClientState(0x8074);
  glEnableClientState(0x8076);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x16d);
  return;
}





//==== 0083ffb0 SetupState_0083ffb0 ====


/* private: virtual void __thiscall FontVertexBufferObject__SetupState(void)const  */

void __thiscall FontVertexBufferObject__SetupState(FontVertexBufferObject *this)

{
  glEnableClientState(0x8074);
  glEnableClientState(0x8078);
  return;
}





//==== 0083ffd0 SetupState_0083ffd0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: virtual void __thiscall VertexBufferObject__SetupState(void)const  */

void __thiscall VertexBufferObject__SetupState(VertexBufferObject *this)

{
  Shader *pSVar1;
  GameManager *pGVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  glEnableClientState(0x8074);
  glEnableClientState(0x8078);
  pcVar5 = "Mode__Normal";
  pSVar1 = Shader__GetCurrent();
  pGVar2 = Manager__GetParent((Manager *)pSVar1);
  iVar3 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
  if (iVar3 != -1) {
    pcVar5 = "Mode__Normal";
    pSVar1 = Shader__GetCurrent();
    pGVar2 = Manager__GetParent((Manager *)pSVar1);
    uVar4 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
    (*___glewEnableVertexAttribArray)(uVar4);
  }
  pcVar5 = "Tangent";
  pSVar1 = Shader__GetCurrent();
  pGVar2 = Manager__GetParent((Manager *)pSVar1);
  iVar3 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
  if (iVar3 != -1) {
    pcVar5 = "Tangent";
    pSVar1 = Shader__GetCurrent();
    pGVar2 = Manager__GetParent((Manager *)pSVar1);
    uVar4 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
    (*___glewEnableVertexAttribArray)(uVar4);
  }
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x138);
  return;
}





//==== 00840080 SetupVertex ====


/* struct Vertex __cdecl SetupVertex(struct util__Vec3_L_double_G_,struct util__Vec3_L_double_G_,struct
   util__Vec3_L_double_G_) */

Vertex * __cdecl
SetupVertex__o3(Vertex *__return_storage_ptr__,Vec4_L_double_G_ param_1,Vec4_L_double_G_ param_2,
           Vec3_L_double_G_ param_3)

{
  undefined8 stack0xfffffffc;
  Vec4_L_float_G_ VVar1;
  Maybe_L_double_G_ *pMVar2;
  Vec3_L_float_G_ *pVVar3;
  double *pdVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined4 in_stack_00000008;
  Maybe_L_double_G_ MStack_7c;
  double dStack_6c;
  double dStack_64;
  undefined8 uStack_5c;
  undefined1 auStack_54 [8];
  double dStack_4c;
  undefined1 auStack_44 [8];
  double dStack_3c;
  double dStack_34;
  double dStack_28;
  Vec3_L_float_G_ VStack_20;
  undefined8 uStack_14;
  char cStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_14 = (double)(*(uint64_t*)((char*)&(param_1)+4)) * (double)(*(uint64_t*)((char*)&(param_1)+4)) +
              (double)CONCAT44(param_1.X,in_stack_00000008) *
              (double)CONCAT44(param_1.X,in_stack_00000008) +
              (double)(*(uint64_t *)((char *)&(param_1) + 12)) * (double)(*(uint64_t *)((char *)&(param_1) + 12));
  pMVar2 = util__Sqrt(&MStack_7c,(double *)&uStack_14);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar10 = (double)CONCAT44(param_1.X,in_stack_00000008);
  dVar9 = pMVar2->Data;
  dVar5 = 1.0 / dVar9;
  if ((((NAN(dVar10) == (dVar10 == 0.0)) ||
       (NAN((double)(*(uint64_t*)((char*)&(param_1)+4))) == ((double)(*(uint64_t*)((char*)&(param_1)+4)) == 0.0))) ||
      (NAN((double)(*(uint64_t *)((char *)&(param_1) + 12))) == ((double)(*(uint64_t *)((char *)&(param_1) + 12)) == 0.0))) &&
     (NAN(dVar9) == (dVar9 == 0.0))) {
    dVar10 = dVar10 * dVar5;
    dVar9 = (double)(*(uint64_t*)((char*)&(param_1)+4)) * dVar5;
    (*(uint32_t*)&(uStack_5c)) = SUB84(dVar10,0);
    (*(uint32_t*)((char*)&(uStack_5c)+4)) = (undefined4)((ulonglong)dVar10 >> 0x20);
    (*(uint32_t*)&(auStack_54)) = SUB84(dVar9,0);
    (*(uint32_t*)((char*)&(auStack_54)+4)) = (undefined4)((ulonglong)dVar9 >> 0x20);
    dStack_4c = (double)(*(uint64_t *)((char *)&(param_1) + 12)) * dVar5;
  }
  else {
    dStack_4c = 0.0;
    (*(uint32_t*)&(uStack_5c)) = 0;
    (*(uint32_t*)((char*)&(uStack_5c)+4)) = 0;
    dVar10 = 0.0;
    (*(uint32_t*)&(auStack_54)) = 0;
    (*(uint32_t*)((char*)&(auStack_54)+4)) = 0;
    dVar9 = 0.0;
  }
  (*(uint32_t*)((char*)&(auStack_54)+4)) = (undefined4)((ulonglong)dVar9 >> 0x20);
  (*(uint32_t*)&(auStack_54)) = SUB84(dVar9,0);
  (*(uint32_t*)&(dStack_3c)) = (*(uint32_t*)&(auStack_54));
  *(uint32_t *)&auStack_44 = (uint64_t)dVar10;
  (*(uint32_t*)((char*)&(dStack_3c)+4)) = (*(uint32_t*)((char*)&(auStack_54)+4));
  dVar5 = SUB168(_auStack_44,8);
  (*(uint32_t*)((char*)&(MStack_7c)+8)) = (*(uint32_t*)&(auStack_54));
  MStack_7c.Data = dVar5;
  (*(uint32_t *)((char *)&(MStack_7c) + 12)) = (*(uint32_t*)((char*)&(auStack_54)+4));
  if ((dVar5 <= -1.0) || (1.0 <= dVar5)) {
    (*(uint32_t*)((char*)&(dStack_3c)+4)) = param_2.X;
    (*(uint32_t*)&(dStack_3c)) = param_1.W;
    cStack_9 = '\x01';
    dStack_34 = (double)(*(uint64_t *)((char *)&(param_2) + 12));
  }
  else {
    cStack_9 = '\0';
    dStack_6c = dVar10;
    dStack_64 = dStack_4c;
  }
  pdVar4 = &dStack_6c;
  if (cStack_9 != '\0') {
    pdVar4 = (double *)(auStack_44 + 8);
  }
  dVar5 = pdVar4[1];
  VStack_20.Y = SUB84(dVar5,0);
  VStack_20.Z = (float)((ulonglong)dVar5 >> 0x20);
  dStack_28 = dVar5 * dVar5 + *pdVar4 * *pdVar4;
  uStack_5c = dVar10;
  *(uint32_t *)&auStack_54 = (uint64_t)dVar9;
  pMVar2 = util__Sqrt((Maybe_L_double_G_ *)auStack_54,&dStack_28);
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(pMVar2);
  if (pMVar2->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_3c = *pdVar4;
  dVar9 = (((struct Maybe_L_double_G_ *)(uintptr_t)(*(uint32_t *)((char *)&(uStack_14)+4))))->Data;
  fVar6 = VStack_20.Y;
  fVar7 = VStack_20.Z;
  if (NAN(dStack_3c) == (dStack_3c == 0.0)) {
LAB_0084029c:
    if (NAN(dVar9) == (dVar9 == 0.0)) {
      dStack_3c = dStack_3c * (1.0 / dVar9);
      dStack_34 = (double)CONCAT44(fVar7,fVar6) * (1.0 / dVar9);
      goto LAB_00840257;
    }
  }
  else {
    dVar10 = pdVar4[1];
    fVar6 = SUB84(dVar10,0);
    fVar7 = (float)((ulonglong)dVar10 >> 0x20);
    if (NAN(dVar10) == (dVar10 == 0.0)) goto LAB_0084029c;
  }
  dStack_3c = 0.0;
  dStack_34 = 0.0;
LAB_00840257:
  uStack_14 = util__SafeACos_double(dStack_3c);
  uStack_14 = uStack_14 / 6.283185307179586;
  if (0.0 <= dStack_34) {
    uStack_14 = 1.0 - uStack_14;
  }
  if (((double)(*(uint64_t *)((char *)&(param_2) + 12)) <= 0.0) && (0.75 < uStack_14)) {
    uStack_14 = uStack_14 - 1.0;
  }
  if ((0.0 < (double)(*(uint64_t *)((char *)&(param_2) + 12))) && (uStack_14 < 0.25)) {
    uStack_14 = uStack_14 + 1.0;
  }
  dVar9 = util__SafeASin_double(MStack_7c.Data);
  (__return_storage_ptr__->Point).X = 0.0;
  (__return_storage_ptr__->Point).Y = 0.0;
  (__return_storage_ptr__->Point).Z = 0.0;
  (__return_storage_ptr__->TextureCoordinate).X = 0.0;
  (__return_storage_ptr__->TextureCoordinate).Y = 0.0;
  (__return_storage_ptr__->Mode__Normal).X = 0.0;
  (__return_storage_ptr__->Mode__Normal).Y = 0.0;
  (__return_storage_ptr__->Mode__Normal).Z = 0.0;
  (__return_storage_ptr__->Tangent).X = 0.0;
  (__return_storage_ptr__->Tangent).Y = 0.0;
  (__return_storage_ptr__->Tangent).Z = 0.0;
  uVar8 = CONCAT44((float)(double)(*(uint64_t*)((char*)&(param_1)+4)),
                   (float)(double)CONCAT44(param_1.X,in_stack_00000008));
  (__return_storage_ptr__->Point).X = (float)(int)uVar8;
  (__return_storage_ptr__->Point).Y = (float)(int)((ulonglong)uVar8 >> 0x20);
  (__return_storage_ptr__->TextureCoordinate).X = (float)uStack_14;
  (__return_storage_ptr__->TextureCoordinate).Y = (float)(dVar9 / 3.141592653589793 + 0.5);
  VStack_20.X = (float)(double)CONCAT44(param_3.X,param_2.W);
  (__return_storage_ptr__->Point).Z = (float)(double)(*(uint64_t *)((char *)&(param_1) + 12));
  VStack_20.Y = (float)(double)(*(uint64_t*)((char*)&(param_3)+4));
  VStack_20.Z = (float)(double)(*(uint64_t *)((char *)&(param_3) + 12));
  (__return_storage_ptr__->Mode__Normal).X = (float)(int)CONCAT44(VStack_20.Y,VStack_20.X);
  (__return_storage_ptr__->Mode__Normal).Y = (float)(int)(CONCAT44(VStack_20.Y,VStack_20.X) >> 0x20);
  (__return_storage_ptr__->Mode__Normal).Z = VStack_20.Z;
  if (cStack_9 != '\0') {
    VStack_20.X = (float)(double)CONCAT44(param_2.X,param_1.W);
    VStack_20.Y = (float)(double)(*(uint64_t*)((char*)&(param_2)+4));
    VStack_20.Z = (float)(double)(*(uint64_t *)((char *)&(param_2) + 12));
  }
  dStack_28 = (double)((ulonglong)dStack_28 & 0xffffffff);
  VVar1.Y = VStack_20.Y;
  VVar1.X = VStack_20.X;
  VVar1.Z = VStack_20.Z;
  pVVar3 = util__CalcSafePerpendicular_float
                     (&VStack_20,(*(Vec3_L_float_G_ *)&VVar1),(*(Vec3_L_float_G_ *)cde_z16lit(0x3f80000000000000)));
  fVar6 = pVVar3->Y;
  (__return_storage_ptr__->Tangent).X = pVVar3->X;
  (__return_storage_ptr__->Tangent).Y = fVar6;
  (__return_storage_ptr__->Tangent).Z = pVVar3->Z;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00840490 SmallestDim_00840490 ====


/* public: int const __thiscall util__Vec3_float___SmallestDim(void)const  */

int __thiscall util__Vec3_float___SmallestDim(Vec3_L_float_G_ *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = Abs(&this->Y);
  fVar3 = Abs(&this->X);
  fVar4 = Abs(&this->Z);
  if (fVar2 < fVar3) {
    fVar2 = Abs(&this->Y);
    return (fVar4 < fVar2) + 1;
  }
  fVar2 = Abs(&this->X);
  iVar1 = 0;
  if (fVar4 < fVar2) {
    iVar1 = 2;
  }
  return iVar1;
}





//==== 00840510 TearDownState ====


/* private: static void __cdecl ColorTexVertexBufferObject__TearDownState(void) */

void __cdecl ColorTexVertexBufferObject__TearDownState(void)

{
  glDisableClientState(0x8074);
  glDisableClientState(0x8078);
  glDisableClientState(0x8076);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x1ac);
  return;
}





//==== 00840540 TearDownState_00840540 ====


/* private: static void __cdecl ColorVertexBufferObject__TearDownState(void) */

void __cdecl ColorVertexBufferObject__TearDownState(void)

{
  glDisableClientState(0x8074);
  glDisableClientState(0x8076);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x174);
  return;
}





//==== 00840570 TearDownState_00840570 ====


/* private: static void __cdecl FontVertexBufferObject__TearDownState(void) */

void __cdecl FontVertexBufferObject__TearDownState(void)

{
  glDisableClientState(0x8074);
  glDisableClientState(0x8078);
  return;
}





//==== 00840590 TearDownState_00840590 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: static void __cdecl VertexBufferObject__TearDownState(void) */

void __cdecl VertexBufferObject__TearDownState(void)

{
  Shader *pSVar1;
  GameManager *pGVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = "Mode__Normal";
  pSVar1 = Shader__GetCurrent();
  pGVar2 = Manager__GetParent((Manager *)pSVar1);
  iVar3 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
  if (iVar3 != -1) {
    pcVar5 = "Mode__Normal";
    pSVar1 = Shader__GetCurrent();
    pGVar2 = Manager__GetParent((Manager *)pSVar1);
    uVar4 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
    (*___glewDisableVertexAttribArray)(uVar4);
  }
  pcVar5 = "Tangent";
  pSVar1 = Shader__GetCurrent();
  pGVar2 = Manager__GetParent((Manager *)pSVar1);
  iVar3 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
  if (iVar3 != -1) {
    pcVar5 = "Tangent";
    pSVar1 = Shader__GetCurrent();
    pGVar2 = Manager__GetParent((Manager *)pSVar1);
    uVar4 = (*___glewGetAttribLocation)(pGVar2,pcVar5);
    (*___glewDisableVertexAttribArray)(uVar4);
  }
  glDisableClientState(0x8074);
  glDisableClientState(0x8078);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x141);
  return;
}





//==== 00840640 TransformPoints ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall VertexBufferObject__TransformPoints(struct util__Matrix4x4_L_double_G_ const
   &) */

void __thiscall
VertexBufferObject__TransformPoints(VertexBufferObject *this,Matrix4x4_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double *pdVar1;
  double dVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  double *pdVar6;
  double dVar7;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  double local_2c [4];
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->_pad_0x8_2 != -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0xf7,
                    "!IsGenerated()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar3 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
  if (local_c < iVar3) {
    do {
      pfVar4 = (float *)(**(code **)(this->VertexData)._pad_0x0_0)(&local_c);
      iVar3 = 0;
      local_2c[0] = (double)*pfVar4;
      local_2c[1] = (double)pfVar4[1];
      local_2c[2] = (double)pfVar4[2];
      local_2c[3] = 1.0;
      local_4c = 0;
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      local_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      do {
        dVar7 = *(double *)(&local_4c + iVar3 * 2);
        pdVar6 = param_1->Data + iVar3;
        iVar5 = 0;
        do {
          pdVar1 = local_2c + iVar5;
          iVar5 = iVar5 + 1;
          dVar2 = *pdVar6;
          pdVar6 = pdVar6 + 4;
          dVar7 = dVar7 + *pdVar1 * dVar2;
        } while (iVar5 < 4);
        *(double *)(&local_4c + iVar3 * 2) = dVar7;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      *(ulonglong *)pfVar4 =
           CONCAT44((float)(double)CONCAT44(uStack_40,uStack_44),
                    (float)(double)CONCAT44(uStack_48,local_4c));
      pfVar4[2] = (float)(double)CONCAT44(uStack_38,local_3c);
      local_c = local_c + 1;
      iVar3 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar3);
  }
  return;
}

//==== 00840780 TransformTangents ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall VertexBufferObject__TransformTangents(struct util__Matrix3x3_L_double_G_
   const &) */

void __thiscall
VertexBufferObject__TransformTangents(VertexBufferObject *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->_pad_0x8_2 != -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x113,
                    "!IsGenerated()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar4 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      iVar4 = (**(code **)(this->VertexData)._pad_0x0_0)(&local_c);
      dVar7 = (double)*(float *)(iVar4 + 0x20);
      dVar5 = (double)*(float *)(iVar4 + 0x24);
      dVar1 = param_1->Data[2];
      dVar6 = (double)*(float *)(iVar4 + 0x28);
      dVar2 = param_1->Data[5];
      dVar3 = param_1->Data[8];
      *(ulonglong *)(iVar4 + 0x20) =
           CONCAT44((float)(dVar7 * param_1->Data[1] + 0.0 + dVar5 * param_1->Data[4] +
                           dVar6 * param_1->Data[7]),
                    (float)(dVar7 * param_1->Data[0] + 0.0 + dVar5 * param_1->Data[3] +
                           dVar6 * param_1->Data[6]));
      *(float *)(iVar4 + 0x28) = (float)(dVar7 * dVar1 + 0.0 + dVar5 * dVar2 + dVar6 * dVar3);
      local_c = local_c + 1;
      iVar4 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  return;
}

//==== 008408b0 TransformTextureCoordinates ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall VertexBufferObject__TransformTextureCoordinates(struct
   util__Matrix3x3_L_double_G_ const &) */

void __thiscall
VertexBufferObject__TransformTextureCoordinates(VertexBufferObject *this,Matrix3x3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (this->_pad_0x8_2 != -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x102,
                    "!IsGenerated()",(char *)0x0);
    DebugBreak();
  }
  local_c = 0;
  iVar5 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
  if (local_c < iVar5) {
    do {
      iVar5 = (**(code **)(this->VertexData)._pad_0x0_0)(&local_c);
      fVar1 = *(float *)(iVar5 + 0x10);
      dVar2 = param_1->Data[0];
      dVar3 = param_1->Data[3];
      dVar4 = param_1->Data[6];
      *(float *)(iVar5 + 0x10) =
           (float)((double)*(float *)(iVar5 + 0xc) * param_1->Data[1] + 0.0 +
                   (double)fVar1 * param_1->Data[4] + param_1->Data[7]);
      *(float *)(iVar5 + 0xc) =
           (float)((double)*(float *)(iVar5 + 0xc) * dVar2 + 0.0 + (double)fVar1 * dVar3 + dVar4);
      local_c = local_c + 1;
      iVar5 = (**(code **)((this->VertexData)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar5);
  }
  return;
}

//==== 008409a0 Shader ====

/* public: __thiscall Shader__Shader(void) */

Shader * __thiscall Shader__Shader(Shader *this)

{
  GraphicsResourceInterface__GraphicsResourceInterface((GraphicsResourceInterface *)this);
  this->_pad_0x0_0 = (int)&vftable_564;
  this->ShaderID = 0xffffffff;
  (this->FragmentFileName).Data = (char *)0x0;
  (this->FragmentFileName).Capacity = 0;
  (this->FragmentFileName).Length = 0;
  (this->VertexFileName).Data = (char *)0x0;
  (this->VertexFileName).Capacity = 0;
  (this->VertexFileName).Length = 0;
  (this->PreprocessorDefines).Data = (char *)0x0;
  (this->PreprocessorDefines).Capacity = 0;
  (this->PreprocessorDefines).Length = 0;
  return this;
}

//==== 00840a00 Shader_00840a00 ====

/* public: virtual __thiscall Shader___Shader(void) */

void __thiscall Shader___Shader(Shader *this)

{
  char *pcVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  this->_pad_0x0_0 = (int)&vftable_564;
  if (this->ShaderID != 0xffffffff) {
    (*___glewDeleteProgram)(this->ShaderID);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x1a);
    this->ShaderID = 0xffffffff;
  }
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pSVar2 = util__Str_char___operator__o8(&this->VertexFileName,&local_10);
  util__Str_char___operator__o8(&this->FragmentFileName,pSVar2);
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  util__Str_char___operator__o8(&this->PreprocessorDefines,&local_10);
  pcVar1 = (this->PreprocessorDefines).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->PreprocessorDefines).Data = (char *)0x0;
  }
  pcVar1 = (this->VertexFileName).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->VertexFileName).Data = (char *)0x0;
  }
  pcVar1 = (this->FragmentFileName).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->FragmentFileName).Data = (char *)0x0;
  }
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  return;
}

//==== 00840ae0 scalar_deleting_destructor_00840ae0 ====

/* public: virtual void * __thiscall Shader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall Shader___scalar_deleting_destructor(Shader *this,uint param_1)

{
  char *pcVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ local_10;
  
  this->_pad_0x0_0 = (int)&vftable_564;
  if (this->ShaderID != 0xffffffff) {
    (*___glewDeleteProgram)(this->ShaderID);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x1a);
    this->ShaderID = 0xffffffff;
  }
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pSVar2 = util__Str_char___operator__o8(&this->VertexFileName,&local_10);
  util__Str_char___operator__o8(&this->FragmentFileName,pSVar2);
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  util__Str_char___operator__o8(&this->PreprocessorDefines,&local_10);
  pcVar1 = (this->PreprocessorDefines).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->PreprocessorDefines).Data = (char *)0x0;
  }
  pcVar1 = (this->VertexFileName).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->VertexFileName).Data = (char *)0x0;
  }
  pcVar1 = (this->FragmentFileName).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->FragmentFileName).Data = (char *)0x0;
  }
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x2c);
  }
  return this;
}

//==== 00840bd0 CompileShader ====


/* protected: bool __thiscall Shader__CompileShader(class util__Str_L_char_G_ const &,unsigned int)const
    */

bool __thiscall Shader__CompileShader(Shader *this,Str_L_char_G_ *param_1,uint param_2)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  undefined1 uVar4;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (*___glewCompileShader)(param_2);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x44);
  uStack_10 = 0;
  (*___glewGetShaderiv)(param_2,0x8b81,&uStack_10);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x47);
  (*___glewGetShaderiv)(param_2,0x8b84,&iStack_c);
  if (0 < iStack_c) {
    uStack_14 = 0;
    SStack_30.Data = (char *)0x0;
    SStack_30.Capacity = 0;
    SStack_30.Length = 0;
    util__Str_char___Resize(&SStack_30,iStack_c);
    pcVar3 = SStack_30.Data;
    (*___glewGetShaderInfoLog)(param_2,iStack_c,&uStack_14,SStack_30.Data);
    if (*pcVar3 != '\0') {
      util__Str_char___Str_char(&SStack_24,&SStack_30);
      port_op_delete(pcVar3);
      pcVar3 = "";
      if (0 < SStack_24.Capacity) {
        pcVar3 = SStack_24.Data;
      }
      if (param_1->Capacity < 1) {
        pcVar1 = "";
      }
      else {
        pcVar1 = param_1->Data;
      }
      pSVar2 = util__Printf(&SStack_30,(wchar_t*)("Compile Warnings/Errors in %s!\n%s\n"),pcVar1,pcVar3);
      util__Log(pSVar2);
      pcVar3 = SStack_24.Data;
      if (SStack_30.Data != (char *)0x0) {
        port_op_delete(SStack_30.Data);
      }
      goto LAB_00840cf4;
    }
    port_op_delete(pcVar3);
  }
  pcVar3 = (char *)0x0;
LAB_00840cf4:
  iStack_c = 0;
  (*___glewGetShaderiv)(param_2,0x8b81,&iStack_c);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x86);
  uVar4 = iStack_c == 1;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar4;
}





//==== 00840d50 Destroy_00840d50 ====


/* public: virtual void __thiscall Shader__Destroy(void) */

void __thiscall Shader__Destroy(Shader *this)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  if (this->ShaderID != 0xffffffff) {
    (*___glewDeleteProgram)(this->ShaderID);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x1a);
    this->ShaderID = 0xffffffff;
  }
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pSVar1 = util__Str_char___operator__o8(&this->VertexFileName,&SStack_10);
  util__Str_char___operator__o8(&this->FragmentFileName,pSVar1);
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__Str_char___operator__o8(&this->PreprocessorDefines,&SStack_10);
  return;
}





//==== 00840dd0 DestroyAllShaders ====


/* void __cdecl DestroyAllShaders(void) */

void __cdecl DestroyAllShaders(void)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar1 = (**(code **)(uintptr_t)(PTR__vftable__0095f4d4 + 0xc))();
  if (iStack_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)PTR__vftable__0095f4d4)(&iStack_c);
      (**(code **)(*(int *)*puVar2 + 4))();
      iStack_c = iStack_c + 1;
      iVar1 = (**(code **)(uintptr_t)(PTR__vftable__0095f4d4 + 0xc))();
    } while (iStack_c < iVar1);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00840e40 GetParent ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class GameManager * __thiscall Manager__GetParent(void)const  */

GameManager * __thiscall Manager__GetParent(Manager *this)

{
  return this->Parent;
}





//==== 00840e50 GetAllShaders ====


/* class util__Darray_L_classShader_P_G_ __cdecl GetAllShaders(void) */

Darray_L_class_util__Reflectable_P_G_ * __cdecl GetAllShaders(void)

{
  undefined8 stack0x00000004;
  Darray_L_class_util__Reflectable_P_G_ *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  Darray_L_class_util__Reflectable_P_G_ *in_stack_00000004;
  
  this = in_stack_00000004;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f4d4);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = DAT_0095f4e0;
  in_stack_00000004 =
       (Darray_L_class_util__Reflectable_P_G_ *)(**(code **)(uintptr_t)(PTR__vftable__0095f4d4 + 0xc))();
  util__Darray_class_util__Reflectable____SetSize(this,(int *)&stack0x00000004);
  in_stack_00000004 =
       (Darray_L_class_util__Reflectable_P_G_ *)
       (-(uint)((int)((ulonglong)*(uint *)(this + 0xc) * 4 >> 0x20) != 0) |
       (uint)((ulonglong)*(uint *)(this + 0xc) * 4));
  puVar1 = (undefined4 *)port_op_new((uint)in_stack_00000004);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    memset(puVar1,0,(size_t)(uintptr_t)((size_t)(uintptr_t)(in_stack_00000004)));
  }
  *(undefined4 **)(this + 4) = puVar1;
  puVar2 = (undefined4 *)(uintptr_t)(DAT_0095f4d8);
  if (DAT_0095f4d8 != DAT_0095f4d8 + DAT_0095f4dc) {
    do {
      *puVar1 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (puVar2 != DAT_0095f4d8 + DAT_0095f4dc);
  }
  return this;
}





//==== 00840f10 GetCachedUsedProgram ====


/* protected: static unsigned int * __cdecl Shader__GetCachedUsedProgram(void) */

uint * __cdecl Shader__GetCachedUsedProgram(void)

{
  return &DAT_0095f4d0;
}





//==== 00840f20 GetCurrent_00840f20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class Shader const * __cdecl Shader__GetCurrent(void) */

Shader * __cdecl Shader__GetCurrent(void)

{
  if (DAT_00989824 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  return *(Shader **)(_CurrentShaders + -4 + DAT_00989824 * 4);
}





//==== 00840f60 GetProgramLinkLog ====


/* protected: class util__Maybe_L_classutil__Str_L_char_G__G_ __thiscall
   Shader__GetProgramLinkLog(void)const  */

void __thiscall Shader__GetProgramLinkLog(Shader *this)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  Str_L_char_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_1c;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  (*___glewGetProgramiv)(this->ShaderID,0x8b84,&iStack_c);
  if (0 < iStack_c) {
    uStack_10 = 0;
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
    SStack_1c.Length = 0;
    util__Str_char___Resize(&SStack_1c,iStack_c);
    pcVar1 = SStack_1c.Data;
    (*___glewGetProgramInfoLog)(this->ShaderID,iStack_c,&uStack_10,SStack_1c.Data);
    if (*pcVar1 != '\0') {
      util__Str_char___Str_char(in_stack_00000004,&SStack_1c);
      *(undefined1 *)&in_stack_00000004[1].Data = 1;
      port_op_delete(pcVar1);
      goto LAB_00841020;
    }
    port_op_delete(pcVar1);
  }
  in_stack_00000004->Data = (char *)0x0;
  in_stack_00000004->Capacity = 0;
  in_stack_00000004->Length = 0;
  *(undefined1 *)&in_stack_00000004[1].Data = 0;
LAB_00841020:
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00841040 GetResourceIDs_00841040 ====


/* public: virtual class util__Darray_L_structResourceID_G_ __thiscall
   Shader__GetResourceIDs(void)const  */

Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ * __thiscall Shader__GetResourceIDs(Shader *this)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *in_stack_00000004;
  Shader *pSStack_8;
  
  uVar1 = this->ShaderID;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       &vftable_109;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  pSStack_8 = this;
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
  pSStack_8 = (Shader *)(iVar5 + 1);
  util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
            (in_stack_00000004,(int *)&pSStack_8);
  bVar3 = util__Darray_struct_util__tuple2_enum_Order__Type_int_____CheckSize
                    (in_stack_00000004,iVar5);
  if (bVar3) {
    iVar5 = *(int *)(in_stack_00000004 + 4);
    iVar2 = *(int *)(in_stack_00000004 + 8);
    *(undefined4 *)(iVar5 + -8 + iVar2 * 8) = 3;
    *(uint *)(iVar5 + -4 + iVar2 * 8) = uVar1;
  }
  return in_stack_00000004;
}





//==== 008410f0 Initialize_008410f0 ====


/* protected: bool __thiscall Shader__Initialize(void) */

bool __thiscall Shader__Initialize(Shader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  Str_L_char_G_ *pSVar6;
  char *pcVar7;
  Str_L_char_G_ *pSVar8;
  char *pcVar9;
  char *pcVar10;
  Str_L_char_G_ SStack_74;
  Str_L_char_G_ SStack_68;
  Str_L_char_G_ SStack_5c;
  uint uStack_50;
  char *pcStack_4c;
  uint uStack_48;
  char cStack_41;
  undefined1 *puStack_40;
  int iStack_3c;
  char cStack_34;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  char cStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((this->ShaderID != 0xffffffff) || ((this->FragmentFileName).Length == 0)) ||
     ((this->VertexFileName).Length == 0)) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x4f,
                    "ShaderID == -1 && !FragmentFileName.IsNull() && !VertexFileName.IsNull()",
                    (char *)0x0);
    DebugBreak();
  }
  SStack_30.Data = (char *)0x0;
  SStack_30.Capacity = 0;
  SStack_30.Length = 0;
  if ((this->VertexFileName).Capacity < 1) {
    pcVar10 = "";
  }
  else {
    pcVar10 = (this->VertexFileName).Data;
  }
  util__Printf(&SStack_30,(wchar_t*)("%s.vert"),pcVar10);
  SStack_24.Length = 0;
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  if ((this->FragmentFileName).Capacity < 1) {
    pcVar10 = "";
  }
  else {
    pcVar10 = (this->FragmentFileName).Data;
  }
  util__Printf(&SStack_24,(wchar_t*)("%s.frag"),pcVar10);
  SStack_68.Length = 0;
  SStack_68.Data = (char *)0x0;
  SStack_68.Capacity = 0;
  util__Str_char___Str_char(&SStack_68,"CommonVertex.glsl");
  SStack_5c.Length = 0;
  SStack_5c.Data = (char *)0x0;
  SStack_5c.Capacity = 0;
  util__Str_char___Str_char(&SStack_5c,"CommonFragment.glsl");
  uStack_48 = (*___glewCreateShader)(0x8b31);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x5d);
  uVar3 = (*___glewCreateShader)(0x8b30);
  uStack_50 = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x5f);
  util__Str_char___Str_char(&SStack_18,&SStack_68);
  pSVar8 = &this->PreprocessorDefines;
  cStack_c = '\x01';
  bVar1 = LoadShaderIntoMemory
                    (this,&SStack_30,(Maybe_L_class_util__Str_L_char_G___G_ *)&SStack_18,pSVar8,uStack_48);
  cStack_41 = !bVar1;
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
  }
  if (cStack_41 == '\0') {
    util__Str_char___Str_char(&SStack_18,&SStack_5c);
    cStack_c = '\x01';
    bVar1 = LoadShaderIntoMemory
                      (this,&SStack_24,(Maybe_L_class_util__Str_L_char_G___G_ *)&SStack_18,pSVar8,uVar3);
    cStack_41 = !bVar1;
    if (SStack_18.Data != (char *)0x0) {
      port_op_delete(SStack_18.Data);
    }
    if (cStack_41 == '\0') {
      bVar1 = CompileShader(this,&SStack_30,uStack_48);
      if (bVar1) {
        bVar1 = CompileShader(this,&SStack_24,uVar3);
        if (bVar1) {
          uVar4 = (*___glewCreateProgram)();
          this->ShaderID = uVar4;
          glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x68);
          (*___glewAttachShader)(this->ShaderID,uStack_48);
          glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x6a);
          (*___glewAttachShader)(this->ShaderID,uVar3);
          glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x6c);
          cStack_41 = WasLinkASuccess(this);
          GetProgramLinkLog(this);
          if (cStack_34 != '\0') {
            puVar5 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
            if (0 < iStack_3c) {
              puVar5 = puStack_40;
            }
            if ((this->VertexFileName).Capacity < 1) {
              pcVar10 = "";
            }
            else {
              pcVar10 = (this->VertexFileName).Data;
            }
            if ((this->PreprocessorDefines).Capacity < 1) {
              pcVar9 = "";
            }
            else {
              pcVar9 = pSVar8->Data;
            }
            if ((this->FragmentFileName).Capacity < 1) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (this->FragmentFileName).Data;
            }
            pSVar6 = util__Printf(&SStack_74,(wchar_t*)("Attach Warnings/Errors in %s (%s) and %s!\n%s\n"),
                                  pcVar7,pcVar9,pcVar10,puVar5);
            util__Log(pSVar6);
            util__Str_char____Str_char(&SStack_74);
          }
          if ((cStack_41 == '\0') && (cStack_34 != '\0')) {
            uVar2 = 0;
          }
          else {
            (*___glewLinkProgram)(this->ShaderID);
            glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x74)
            ;
            cStack_41 = WasLinkASuccess(this);
            GetProgramLinkLog(this);
            if (cStack_c != '\0') {
              pcStack_4c = "";
              if (0 < SStack_18.Capacity) {
                pcStack_4c = SStack_18.Data;
              }
              if ((this->PreprocessorDefines).Capacity < 1) {
                pcVar10 = "";
              }
              else {
                pcVar10 = pSVar8->Data;
              }
              if ((this->VertexFileName).Capacity < 1) {
                pcVar9 = "";
              }
              else {
                pcVar9 = (this->VertexFileName).Data;
              }
              if ((this->FragmentFileName).Capacity < 1) {
                pcVar7 = "";
              }
              else {
                pcVar7 = (this->FragmentFileName).Data;
              }
              pSVar8 = util__Printf(&SStack_74,(wchar_t*)("Link Warnings/Errors in %s (%s) and %s!\n%s\n"),
                                    pcVar7,pcVar9,pcVar10,pcStack_4c);
              util__Log(pSVar8);
              util__Str_char____Str_char(&SStack_74);
            }
            (*___glewDetachShader)(this->ShaderID,uStack_48);
            glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x7a)
            ;
            uVar3 = uStack_50;
            (*___glewDetachShader)(this->ShaderID,uStack_50);
            glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x7c)
            ;
            (*___glewDeleteShader)(uStack_48);
            glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x7e)
            ;
            (*___glewDeleteShader)(uVar3);
            glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x80)
            ;
            if (((cStack_41 == '\0') && (cStack_c != '\0')) || (this->ShaderID == 0xffffffff)) {
              uVar2 = 0;
            }
            else {
              uVar2 = 1;
            }
            if (SStack_18.Data != (char *)0x0) {
              port_op_delete(SStack_18.Data);
            }
          }
          if (puStack_40 != (undefined1 *)0x0) {
            port_op_delete(puStack_40);
          }
          goto LAB_008414cf;
        }
      }
    }
  }
  uVar2 = 0;
LAB_008414cf:
  if (SStack_5c.Data != (char *)0x0) {
    port_op_delete(SStack_5c.Data);
  }
  if (SStack_68.Data != (char *)0x0) {
    port_op_delete(SStack_68.Data);
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    (*(uint64_t*)&(SStack_24)) = (*(uint64_t*)&(SStack_24)) & 0xffffffff00000000;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 00841530 IsInUse ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: bool __thiscall Shader__IsInUse(void)const  */

bool __thiscall Shader__IsInUse(Shader *this)

{
  if (DAT_00989824 < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  return *(Shader **)(_CurrentShaders + -4 + DAT_00989824 * 4) == this;
}





//==== 00841570 LoadShaderIntoMemory ====


/* protected: bool  Shader__LoadShaderIntoMemory(class util__Str_L_char_G_ const &,class
   util__Maybe_L_classutil__Str_L_char_G__G_ const &,class util__Str_L_char_G_ const &,unsigned int)const  */

bool 
Shader__LoadShaderIntoMemory
          (Shader *this,Str_L_char_G_ *param_1,Maybe_L_class_util__Str_L_char_G___G_ *param_2,Str_L_char_G_ *param_3
          ,uint param_4)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  undefined1 uVar2;
  FileIO *this_00;
  char *pcVar3;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  char *pcVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ SStack_34;
  char *pcStack_28;
  Str_L_char_G_ SStack_24;
  char cStack_18;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (DebugTestCrash) {
    uRam00000000 = 0;
  }
  pSVar4 = &SStack_24;
  pSVar7 = param_1;
  this_00 = FileIO__Get();
  FileIO__LoadShaderFile(this_00,pSVar4,(Maybe_L_class_util__Str_L_char_G___G_ *)pSVar7);
  if (cStack_18 == '\0') {
    if (param_1->Capacity < 1) {
      pcVar3 = "";
    }
    else {
      pcVar3 = param_1->Data;
    }
    pSVar4 = util__Printf(&SStack_34,(wchar_t*)("Error loading shader %s!\n"),pcVar3);
    util__Log(pSVar4);
    if (SStack_34.Data != (char *)0x0) {
      port_op_delete(SStack_34.Data);
    }
    uVar2 = 0;
  }
  else {
    SStack_34.Length = 0;
    SStack_34.Data = (char *)0x0;
    SStack_34.Capacity = 0;
    util__Str_char___Str_char(&SStack_34,"#version 120");
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    SStack_14.Length = 0;
    if (cStack_18 == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x12,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    pcVar3 = "";
    if (0 < SStack_24.Capacity) {
      pcVar3 = SStack_24.Data;
    }
    if (param_3->Capacity < 1) {
      pcVar6 = "";
    }
    else {
      pcVar6 = param_3->Data;
    }
    pcVar1 = SStack_34.Data;
    pcVar5 = "";
    if (0 < SStack_34.Capacity) {
      pcVar5 = SStack_34.Data;
    }
    util__Printf(&SStack_14,(wchar_t*)("%s\n%s\n%s\n"),pcVar5,pcVar6,pcVar3);
    pcStack_28 = "";
    if (0 < SStack_14.Capacity) {
      pcStack_28 = SStack_14.Data;
    }
    (*___glewShaderSource)(param_4,1,&pcStack_28,0);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x3d);
    uVar2 = 1;
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
      (*(uint64_t*)&(SStack_14)) = (*(uint64_t*)&(SStack_14)) & 0xffffffff00000000;
    }
    if (pcVar1 != (char *)0x0) {
      port_op_delete(pcVar1);
    }
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 008416f0 NewShader ====


/* class Shader * __cdecl NewShader(class Shader *) */

Shader * __cdecl NewShader(Shader *param_1)

{
  int iVar1;
  bool bVar2;
  int iStack_8;
  
  iVar1 = DAT_0095f4dc;
  iStack_8 = DAT_0095f4dc + 1;
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)&PTR_vftable_0095f4d4,&iStack_8);
  bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)&PTR_vftable_0095f4d4,iVar1);
  if (bVar2) {
    *(Shader **)(DAT_0095f4d8 + -4 + DAT_0095f4dc * 4) = param_1;
  }
  return param_1;
}





//==== 00841740 Pop ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl Shader__Pop(void) */

void __cdecl Shader__Pop(void)

{
  int iVar1;
  
  if (DAT_00989824 != 0) {
    DAT_00989824 = DAT_00989824 + -1;
    _DAT_0098982c = _CurrentShaders + DAT_00989824 * 4;
  }
  if (DAT_00989824 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(_CurrentShaders + -4 + DAT_00989824 * 4) + 4);
  }
  if (DAT_0095f4d0 != iVar1) {
    (*___glewUseProgram)(iVar1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0xbc);
    DAT_0095f4d0 = iVar1;
  }
  if (0 < DAT_00989824) {
                    /* WARNING: Could not recover jumptable at 0x008417ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(_CurrentShaders + -4 + DAT_00989824 * 4) + 0x18))();
    return;
  }
  return;
}





//==== 008417c0 ProgramEndDestroyShaders ====


/* void __cdecl ProgramEndDestroyShaders(void) */

void __cdecl ProgramEndDestroyShaders(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iStack_8;
  
  piVar1 = (int *)(uintptr_t)(DAT_0095f4d8);
  piVar2 = (int *)(uintptr_t)(DAT_0095f4d8);
  iVar3 = DAT_0095f4dc;
  if (DAT_0095f4d8 != DAT_0095f4d8 + DAT_0095f4dc) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x10))(1);
        piVar1 = (int *)(uintptr_t)(DAT_0095f4d8);
        iVar3 = DAT_0095f4dc;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1 + iVar3);
  }
  iStack_8 = 0;
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)&PTR_vftable_0095f4d4,&iStack_8);
  return;
}





//==== 00841820 Push ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Shader__Push(void)const  */

void __thiscall Shader__Push(Shader *this)

{
  int iVar1;
  bool bVar2;
  
  if (this->ShaderID == 0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0xaa,
                    "ShaderID != -1",(char *)0x0);
    DebugBreak();
  }
  iVar1 = DAT_00989824;
  _DAT_0098982c = _CurrentShaders + DAT_00989824 * 4 + 4;
  DAT_00989824 = DAT_00989824 + 1;
  bVar2 = util__Stack_L_CelestialBody_P_G___CheckSize((Stack_L_CelestialBody_P_G_ *)&CurrentShaders,iVar1);
  if (bVar2) {
    *(Shader **)(_CurrentShaders + -4 + DAT_00989824 * 4) = this;
  }
  if (DAT_0095f4d0 != this->ShaderID) {
    (*___glewUseProgram)(this->ShaderID);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0xaf);
    DAT_0095f4d0 = this->ShaderID;
  }
                    /* WARNING: Could not recover jumptable at 0x008418b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_pad_0x0_0 + 0x18))();
  return;
}

//==== 008418c0 SetupInternal ====

/* protected: bool __thiscall Shader__SetupInternal(class util__Str_L_char_G_ const &,class
   util__Str_L_char_G_ const &,class util__Str_L_char_G_ const &) */

bool __thiscall
Shader__SetupInternal(Shader *this,Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3)

{
  bool bVar1;
  
  bVar1 = util__Str_char___operator__o9(param_1,&this->FragmentFileName);
  if (bVar1) {
    bVar1 = util__Str_char___operator__o9(param_2,&this->VertexFileName);
    if (bVar1) {
      bVar1 = util__Str_char___operator__o9(param_3,&this->PreprocessorDefines);
      if (bVar1) {
        return true;
      }
    }
  }
  (**(code **)(this->_pad_0x0_0 + 4))();
  util__Str_char___operator__o8(&this->FragmentFileName,param_1);
  util__Str_char___operator__o8(&this->VertexFileName,param_2);
  util__Str_char___operator__o8(&this->PreprocessorDefines,param_3);
  bVar1 = Initialize(this);
  return bVar1;
}

//==== 00841940 WasLinkASuccess ====


/* protected: bool __thiscall Shader__WasLinkASuccess(void)const  */

bool __thiscall Shader__WasLinkASuccess(Shader *this)

{
  undefined8 stack0xfffffffc;
  undefined1 uVar1;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  (*___glewGetProgramiv)(this->ShaderID,0x8b82,&iStack_c);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0x88);
  uVar1 = iStack_c == 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}





//==== 00841990 InvertMatrix_double_ ====


/* class util__Maybe_L_structutil__Matrix4x4_L_double_G__G_ __cdecl util__InvertMatrix_double(struct
   util__Matrix4x4_L_double_G_) */

void * __cdecl util__InvertMatrix_double(Matrix4x4_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 in_stack_00000084;
  double adStack_88 [16];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pdVar2 = adStack_88;
  iVar4 = 0;
  do {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + 2;
      *pdVar2 = (double)(iVar3 == iVar4);
      pdVar2[1] = (double)(iVar3 + 1 == iVar4);
      pdVar2 = pdVar2 + 2;
      iVar3 = iVar1;
    } while (iVar1 < 4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  adStack_88[0] =
       ((((double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) *
          (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4))) -
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 92)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) -
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) *
        (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116)) +
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) -
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84));
  adStack_88[4] =
       (((((double)(*(uint64_t *)((char *)&(param_1.Data) + 36)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))
          - (double)(*(uint64_t *)((char *)&(param_1.Data) + 36)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) *
            (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 68)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) *
         (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) -
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 68)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) -
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 100)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) +
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 100)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84));
  adStack_88[8] =
       ((((double)(*(uint64_t *)((char *)&(param_1.Data) + 36)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) *
          (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4))) -
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 36)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108))) -
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 68)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) *
        (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 68)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) +
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 100)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) -
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 100)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76));
  adStack_88[0xc] =
       (((((double)(*(uint64_t *)((char *)&(param_1.Data) + 36)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108))
          - (double)(*(uint64_t *)((char *)&(param_1.Data) + 36)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))
          ) + (double)(*(uint64_t *)((char *)&(param_1.Data) + 68)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) *
              (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) -
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 68)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108))) -
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 100)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84))) +
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 100)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76));
  dVar6 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 68));
  adStack_88[1] =
       (((((double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))
          - (double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) *
            (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) *
         (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) -
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) -
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) +
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84));
  dVar10 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 100));
  dVar19 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 100));
  dVar7 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 68));
  dVar8 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 68));
  dVar18 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 100));
  adStack_88[5] =
       ((((double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) *
          (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4))) -
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) -
        dVar6 * (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
        dVar7 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116)) + dVar10 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) -
       dVar19 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84));
  adStack_88[9] =
       (((((double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) -
          (double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) *
          (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
         dVar8 * (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) -
        dVar7 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108))) - dVar18 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) +
       dVar19 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76));
  adStack_88[0xd] =
       ((((double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116)) -
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108))) -
        dVar8 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) + dVar6 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) +
       dVar18 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84))) - dVar10 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76));
  dVar9 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60));
  adStack_88[2] =
       ((((double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) *
          (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4))) -
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) -
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) *
        (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116)) +
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60))) -
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52));
  dVar15 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52));
  dVar21 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 36));
  dVar20 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 36));
  dVar22 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44));
  dVar16 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 36));
  adStack_88[6] =
       ((((dVar9 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116)) -
          dVar15 * (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
         dVar21 * (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) -
        dVar20 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) - dVar10 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60))) +
       dVar19 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52));
  adStack_88[10] =
       (((dVar22 * (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4))) -
         dVar9 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108))) -
        dVar16 * (double)CONCAT44(in_stack_00000084,(*(undefined4 *)((char *)&(param_1.Data[0xf]) + 4)))) +
        dVar20 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) + dVar18 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60))) -
       dVar19 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44));
  adStack_88[0xe] =
       ((((dVar15 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108)) - dVar22 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) +
         dVar16 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 116))) - dVar21 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 108))) -
       dVar18 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52))) + dVar10 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44));
  adStack_88[3] =
       (((((double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) -
          (double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) +
         (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) -
        (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84))) -
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60))) +
       (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52));
  adStack_88[7] =
       (((dVar15 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92)) - dVar9 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84))) -
        dVar21 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) + dVar20 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) +
       dVar6 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60))) - dVar7 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52));
  adStack_88[0xb] =
       ((((dVar9 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) - dVar22 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) +
         dVar16 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 92))) - dVar20 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76))) -
       dVar8 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 60))) + dVar7 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44));
  adStack_88[0xf] =
       (((dVar22 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84)) - dVar15 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76))) -
        dVar16 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 84))) + dVar21 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 76)) +
       dVar8 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 52))) - dVar6 * (double)(*(uint64_t *)((char *)&(param_1.Data) + 44));
  dVar6 = (double)(*(uint64_t *)((char *)&(param_1.Data) + 12)) * adStack_88[4] + (double)(*(uint64_t *)((char *)&(param_1.Data) + 4)) * adStack_88[0] +
          (double)(*(uint64_t *)((char *)&(param_1.Data) + 20)) * adStack_88[8] +
          (double)(*(uint64_t *)((char *)&(param_1.Data) + 28)) * adStack_88[0xc];
  if (NAN(dVar6) != (dVar6 == 0.0)) {
    iVar4 = 0;
    pdVar2 = (double *)(uintptr_t)((*(undefined4 *)((char *)&(param_1.Data[0]) + 0)));
    do {
      iVar3 = iVar4 + 1;
      *pdVar2 = (double)(iVar4 == 0);
      pdVar2[1] = (double)(iVar4 == 1);
      pdVar2[2] = (double)(iVar4 == 2);
      pdVar2[3] = (double)(iVar4 == 3);
      iVar4 = iVar3;
      pdVar2 = pdVar2 + 4;
    } while (iVar3 < 4);
    *(undefined1 *)((*(undefined4 *)((char *)&(param_1.Data[0]) + 0)) + 0x10) = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return 0;
  }
  iVar4 = 0;
  dVar6 = 1.0 / dVar6;
  do {
    uVar14 = SUB84(dVar6,0);
    uVar17 = (undefined4)((ulonglong)dVar6 >> 0x20);
    (*(uint32_t*)((char*)&(auVar11)+8)) = uVar14;
    (*(uint64_t*)&(auVar11)) = dVar6;
    (*(uint32_t *)((char *)&(auVar11) + 12)) = uVar17;
    adStack_88[iVar4] = dVar6 * adStack_88[iVar4];
    adStack_88[iVar4 + 1] = (*(uint64_t*)((char*)&(auVar11)+8)) * adStack_88[iVar4 + 1];
    (*(uint32_t*)((char*)&(auVar12)+8)) = uVar14;
    (*(uint64_t*)&(auVar12)) = dVar6;
    (*(uint32_t *)((char *)&(auVar12) + 12)) = uVar17;
    adStack_88[iVar4 + 2] = dVar6 * adStack_88[iVar4 + 2];
    adStack_88[iVar4 + 3] = (*(uint64_t*)((char*)&(auVar12)+8)) * adStack_88[iVar4 + 3];
    (*(uint32_t*)((char*)&(auVar13)+8)) = uVar14;
    (*(uint64_t*)&(auVar13)) = dVar6;
    (*(uint32_t *)((char *)&(auVar13) + 12)) = uVar17;
    adStack_88[iVar4 + 4] = adStack_88[iVar4 + 4] * dVar6;
    adStack_88[iVar4 + 5] = adStack_88[iVar4 + 5] * dVar6;
    adStack_88[iVar4 + 6] = dVar6 * adStack_88[iVar4 + 6];
    adStack_88[iVar4 + 7] = (*(uint64_t*)((char*)&(auVar13)+8)) * adStack_88[iVar4 + 7];
    iVar4 = iVar4 + 8;
  } while (iVar4 < 0x10);
  pdVar2 = adStack_88;
  pdVar5 = (double *)(uintptr_t)((*(undefined4 *)((char *)&(param_1.Data[0]) + 0)));
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar5 = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pdVar5 = (double *)((int)pdVar5 + 4);
  }
  *(undefined1 *)((*(undefined4 *)((char *)&(param_1.Data[0]) + 0)) + 0x10) = 1;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return 0;
}





//==== 00842320 Stack_util__tuple2_unsigned_int_TextureType__Type___ ====


/* public:  util__Stack_L_structutil__tuple2_L_unsignedint_CenumTextureType__Type_G___G___Stack_L_structutil__tuple2_L_unsignedint_CenumTextureType__Type_G__G_(int) */

Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ * 
util__Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type_____Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type
          (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (param_1 < 1) {
    param_1 = 0;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar3 = 0x3fffffff;
  if (param_1 < 0x3fffffff) {
    uVar3 = param_1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(uint *)(this + 8) = uVar3;
  if (0 < (int)uVar3) {
    puVar1 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar3 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar3 * 8));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar1;
      if (uVar3 != 0) {
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          uVar3 = uVar3 - 1;
          puVar2 = puVar2 + 2;
        } while (uVar3 != 0);
        *(undefined4 **)this = puVar1;
        *(undefined4 **)(this + 0xc) = puVar1 + *(int *)(this + 4) * 2;
        return this;
      }
    }
    *(undefined4 **)this = puVar1;
    *(undefined4 **)(this + 0xc) = puVar1 + *(int *)(this + 4) * 2;
  }
  return this;
}





//==== 008423c0 BlendStack ====


/* public:  Graphics__BlendStack__BlendStack(struct BlendSet,struct BlendSet) */

BlendStack * 
Graphics__BlendStack__BlendStack(BlendStack *this,BlendSet param_1,BlendSet param_2)

{
  Stack_L_struct_FullBlendState_G_ *this_00;
  FullBlendState *pFVar1;
  FullBlendState FStack_20;
  
  FStack_20.Color.Source = param_1.Source;
  FStack_20.Color.Dest = param_1.Dest;
  FStack_20.Color.Equation = param_1.Equation;
  FStack_20.Alpha.Source = param_2.Source;
  FStack_20.Alpha.Dest = param_2.Dest;
  FStack_20.Alpha.Equation = param_2.Equation;
  pFVar1 = &FStack_20;
  FStack_20.State = BlendState__Custom;
  this_00 = (Stack_L_struct_FullBlendState_G_ *)(uintptr_t)(GetStack());
  util__Stack_struct_FullBlendState___Push(this_00,pFVar1);
  AlterState(this);
  return this;
}





//==== 00842420 BlendStack_00842420 ====


/* public:  Graphics__BlendStack__BlendStack(struct BlendSet) */

BlendStack *  Graphics__BlendStack__BlendStack__o4(BlendStack *this,BlendSet param_1)

{
  Stack_L_struct_FullBlendState_G_ *this_00;
  FullBlendState *pFVar1;
  FullBlendState FStack_20;
  
  FStack_20.Color.Equation = param_1.Equation;
  FStack_20.Alpha.Equation = param_1.Equation;
  pFVar1 = &FStack_20;
  FStack_20.State = BlendState__Custom;
  FStack_20.Color.Source = param_1.Source;
  FStack_20.Color.Dest = param_1.Dest;
  FStack_20.Alpha.Source = param_1.Source;
  FStack_20.Alpha.Dest = param_1.Dest;
  this_00 = (Stack_L_struct_FullBlendState_G_ *)(uintptr_t)(GetStack());
  util__Stack_struct_FullBlendState___Push(this_00,pFVar1);
  AlterState(this);
  return this;
}





//==== 00842470 BlendStack_00842470 ====


/* public:  Graphics__BlendStack__BlendStack(enum BlendState__Type) */

BlendStack *  Graphics__BlendStack__BlendStack__o5(BlendStack *this,int param_1)

{
  Stack_L_struct_FullBlendState_G_ *this_00;
  FullBlendState *pFVar1;
  FullBlendState FStack_20;
  
  if (param_1 == BlendState__Custom) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x20c,
                    "InType != BlendState__Custom",(char *)0x0);
    DebugBreak();
  }
  pFVar1 = &FStack_20;
  FStack_20.State = param_1;
  FStack_20.Color.Source = 0;
  FStack_20.Color.Dest = 0;
  FStack_20.Color.Equation = 0;
  FStack_20.Alpha.Source = 0;
  FStack_20.Alpha.Dest = 0;
  FStack_20.Alpha.Equation = 0;
  this_00 = (Stack_L_struct_FullBlendState_G_ *)(uintptr_t)(GetStack());
  util__Stack_struct_FullBlendState___Push(this_00,pFVar1);
  AlterState(this);
  return this;
}





//==== 008424f0 CullStack ====


/* public: __thiscall Graphics__CullStack__CullStack(enum CullState__Type) */

CullStack * __thiscall Graphics__CullStack__CullStack(CullStack *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Stack_L_enum_CullState__Type_G_ *this_00;
  
  this_00 = (Stack_L_enum_CullState__Type_G_ *)(uintptr_t)(GetStack());
  iVar2 = *(int *)(this_00 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(this_00 + 4) = iVar1;
  *(int *)(this_00 + 0xc) = *(int *)this_00 + iVar1 * 4;
  bVar3 = util__Stack_struct_CelestialBody____CheckSize
                    ((Stack_L_struct_CelestialBody_P_G_ *)this_00,iVar2);
  if (bVar3) {
    *(int *)(*(int *)this_00 + -4 + *(int *)(this_00 + 4) * 4) = param_1;
  }
  AlterState(this);
  return this;
}





//==== 00842540 DepthStack ====


/* public: __thiscall Graphics__DepthStack__DepthStack(enum DepthTest__Type) */

DepthStack * __thiscall Graphics__DepthStack__DepthStack(DepthStack *this,int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  Stack_L_enum_DepthTest__Type_G_ *this_00;
  
  this_00 = (Stack_L_enum_DepthTest__Type_G_ *)(uintptr_t)(GetStack());
  iVar2 = *(int *)(this_00 + 4);
  iVar1 = iVar2 + 1;
  *(int *)(this_00 + 4) = iVar1;
  *(int *)(this_00 + 0xc) = *(int *)this_00 + iVar1 * 4;
  bVar3 = util__Stack_struct_CelestialBody____CheckSize
                    ((Stack_L_struct_CelestialBody_P_G_ *)this_00,iVar2);
  if (bVar3) {
    *(int *)(*(int *)this_00 + -4 + *(int *)(this_00 + 4) * 4) = param_1;
  }
  AlterState(this);
  return this;
}





//==== 00842590 DrawStack ====


/* public: __thiscall Graphics__DrawStack__DrawStack(unsigned int) */

DrawStack * __thiscall Graphics__DrawStack__DrawStack(DrawStack *this,uint param_1)

{
  this->NullDraw = param_1 == 0xffffffff;
  if (param_1 != 0xffffffff) {
    if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack != false) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x167,
                      "!Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
      DebugBreak();
    }
    ApplyTransformation(&GlobalState);
    (*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack = true;
    glBegin(param_1);
  }
  return this;
}





//==== 008425f0 FrameStack ====


/* public: __thiscall Graphics__FrameStack__FrameStack(void) */

FrameStack * __thiscall Graphics__FrameStack__FrameStack(FrameStack *this)

{
  (*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideAFrame = true;
  (*(struct Graphics *)&(GlobalState)).CurrentDrawMode = GroupType__None;
  CheckDelimiters(this);
  return this;
}





//==== 00842610 Graphics ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: __thiscall Graphics__Graphics(void) */

OptionsSection__Graphics * __thiscall Graphics__Graphics(OptionsSection__Graphics *this)

{
  ulonglong uVar1;
  bool bVar2;
  double *pdVar3;
  int iVar4;
  Matrix4x4_L_double_G_ *pMVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *this_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  double adStack_12c [16];
  double adStack_ac [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  OptionsSection__Graphics *pGStack_14;
  Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *pDStack_10;
  int iStack_c;
  int iStack_8;
  
  ((struct Graphics *)(uintptr_t)(this))->IsCurrentlyInsideAFrame = false;
  ((struct Graphics *)(uintptr_t)(this))->CurrentDrawMode = GroupType__None;
  (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Data = (Matrix4x4_L_double_G_ *)0x0;
  (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Size = 0;
  (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).EndData = (Matrix4x4_L_double_G_ *)0x0;
  (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Capacity = 0x14;
  pGStack_14 = this;
  pdVar3 = (double *)port_op_new(0xa00);
  if ((Matrix4x4_L_double_G_ *)pdVar3 == (Matrix4x4_L_double_G_ *)0x0) {
    pdVar3 = (double *)0x0;
  }
  else {
    iVar8 = 0x14;
    pdVar6 = pdVar3;
    do {
      iVar8 = iVar8 + -1;
      iVar7 = 0;
      do {
        iVar4 = iVar7 + 1;
        (*(uint64_t*)&(auVar28)) = CONCAT44(-(uint)(iVar7 == 1),-(uint)(iVar7 == 0));
        (*(uint32_t*)((char*)&(auVar28)+8)) = -(uint)(iVar7 == 0);
        (*(uint32_t *)((char *)&(auVar28) + 12)) = -(uint)(iVar7 == 0);
        (*(uint32_t*)((char*)&(auVar18)+8)) = (*(uint32_t*)((char*)&(auVar28)+8));
        (*(uint64_t*)&(auVar18)) = (*(uint64_t*)&(auVar28));
        (*(uint32_t *)((char *)&(auVar18) + 12)) = (*(uint32_t *)((char *)&(auVar28) + 12));
        *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar28 & 0x00000001u);
        *pdVar6 = (double)(*(uint32_t*)&(auVar18));
        pdVar6[1] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
        (*(uint64_t*)&(auVar29)) = CONCAT44(-(uint)(iVar7 == 3),-(uint)(iVar7 == 2));
        (*(uint32_t*)((char*)&(auVar29)+8)) = -(uint)(iVar7 == 0);
        (*(uint32_t *)((char *)&(auVar29) + 12)) = -(uint)(iVar7 == 0);
        (*(uint32_t*)((char*)&(auVar20)+8)) = (*(uint32_t*)((char*)&(auVar29)+8));
        (*(uint64_t*)&(auVar20)) = (*(uint64_t*)&(auVar29));
        (*(uint32_t *)((char *)&(auVar20) + 12)) = (*(uint32_t *)((char *)&(auVar29) + 12));
        *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar29 & 0x00000001u);
        pdVar6[2] = (double)(*(uint32_t*)&(auVar18));
        pdVar6[3] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
        pdVar6 = pdVar6 + 4;
        iVar7 = iVar4;
      } while (iVar4 < 4);
    } while (iVar8 != 0);
  }
  *(uint32_t *)&auVar18 = (uint32_t)(uintptr_t) ___xmm_00000001000000010000000100000001;
  uVar38 = (uint)(uintptr_t) SUB164(___xmm_00000001000000010000000100000001,0);
  uVar39 = (uint)(uintptr_t) SUB164(___xmm_00000001000000010000000100000001,4);
  (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Data = (Matrix4x4_L_double_G_ *)pdVar3;
  (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).EndData =
       (Matrix4x4_L_double_G_ *)(pdVar3 + (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Size * 0x10);
  ((struct Graphics *)(uintptr_t)(this))->IsCurrentlyInsideADrawStack = false;
  pMVar5 = &((struct Graphics *)(uintptr_t)(this))->WorldProjection;
  iVar8 = 0;
  do {
    iVar7 = iVar8 + 1;
    (*(uint64_t*)&(auVar30)) = CONCAT44(-(uint)(iVar8 == 1),-(uint)(iVar8 == 0));
    (*(uint32_t*)((char*)&(auVar30)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar30) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar19)+8)) = (*(uint32_t*)((char*)&(auVar30)+8));
    (*(uint64_t*)&(auVar19)) = (*(uint64_t*)&(auVar30));
    (*(uint32_t *)((char *)&(auVar19) + 12)) = (*(uint32_t *)((char *)&(auVar30) + 12));
    uVar1 = (*(uint64_t*)&(auVar18));
    (*(uint64_t*)((char*)&(auVar10)+8)) = 0;
    (*(uint64_t*)&(auVar10)) = uVar1;
    *(uint32_t *)&auVar20 = (*(uint32_t *)&auVar30 & *(uint32_t *)&auVar10);
    pMVar5->Data[0] = (double)(*(uint32_t*)&(auVar20));
    pMVar5->Data[1] = (double)(*(uint32_t*)((char*)&(auVar20)+4));
    (*(uint64_t*)&(auVar31)) = CONCAT44(-(uint)(iVar8 == 3),-(uint)(iVar8 == 2));
    (*(uint32_t*)((char*)&(auVar31)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar31) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar21)+8)) = (*(uint32_t*)((char*)&(auVar31)+8));
    (*(uint64_t*)&(auVar21)) = (*(uint64_t*)&(auVar31));
    (*(uint32_t *)((char *)&(auVar21) + 12)) = (*(uint32_t *)((char *)&(auVar31) + 12));
    (*(uint64_t*)((char*)&(auVar11)+8)) = 0;
    (*(uint64_t*)&(auVar11)) = uVar1;
    *(uint32_t *)&auVar20 = (*(uint32_t *)&auVar31 & *(uint32_t *)&auVar11);
    pMVar5->Data[2] = (double)(*(uint32_t*)&(auVar20));
    pMVar5->Data[3] = (double)(*(uint32_t*)((char*)&(auVar20)+4));
    pMVar5 = (Matrix4x4_L_double_G_ *)(pMVar5->Data + 4);
    iVar8 = iVar7;
  } while (iVar7 < 4);
  pMVar5 = &((struct Graphics *)(uintptr_t)(this))->UIProjection;
  iVar8 = 0;
  do {
    iVar7 = iVar8 + 1;
    (*(uint64_t*)&(auVar32)) = CONCAT44(-(uint)(iVar8 == 1),-(uint)(iVar8 == 0));
    (*(uint32_t*)((char*)&(auVar32)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar32) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar22)+8)) = (*(uint32_t*)((char*)&(auVar32)+8));
    (*(uint64_t*)&(auVar22)) = (*(uint64_t*)&(auVar32));
    (*(uint32_t *)((char *)&(auVar22) + 12)) = (*(uint32_t *)((char *)&(auVar32) + 12));
    (*(uint64_t*)((char*)&(auVar12)+8)) = 0;
    (*(uint64_t*)&(auVar12)) = uVar1;
    *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar12 & *(uint32_t *)&auVar32);
    pMVar5->Data[0] = (double)(*(uint32_t*)&(auVar18));
    pMVar5->Data[1] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
    (*(uint64_t*)&(auVar33)) = CONCAT44(-(uint)(iVar8 == 3),-(uint)(iVar8 == 2));
    (*(uint32_t*)((char*)&(auVar33)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar33) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar23)+8)) = (*(uint32_t*)((char*)&(auVar33)+8));
    (*(uint64_t*)&(auVar23)) = (*(uint64_t*)&(auVar33));
    (*(uint32_t *)((char *)&(auVar23) + 12)) = (*(uint32_t *)((char *)&(auVar33) + 12));
    (*(uint64_t*)((char*)&(auVar13)+8)) = 0;
    (*(uint64_t*)&(auVar13)) = uVar1;
    *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar13 & *(uint32_t *)&auVar33);
    pMVar5->Data[2] = (double)(*(uint32_t*)&(auVar18));
    pMVar5->Data[3] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
    pMVar5 = (Matrix4x4_L_double_G_ *)(pMVar5->Data + 4);
    iVar8 = iVar7;
  } while (iVar7 < 4);
  pMVar5 = &((struct Graphics *)(uintptr_t)(this))->ShadowProjection;
  iVar8 = 0;
  do {
    iVar7 = iVar8 + 1;
    (*(uint64_t*)&(auVar34)) = CONCAT44(-(uint)(iVar8 == 1),-(uint)(iVar8 == 0));
    (*(uint32_t*)((char*)&(auVar34)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar34) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar24)+8)) = (*(uint32_t*)((char*)&(auVar34)+8));
    (*(uint64_t*)&(auVar24)) = (*(uint64_t*)&(auVar34));
    (*(uint32_t *)((char *)&(auVar24) + 12)) = (*(uint32_t *)((char *)&(auVar34) + 12));
    (*(uint64_t*)((char*)&(auVar14)+8)) = 0;
    (*(uint64_t*)&(auVar14)) = uVar1;
    *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar14 & *(uint32_t *)&auVar34);
    pMVar5->Data[0] = (double)(*(uint32_t*)&(auVar18));
    pMVar5->Data[1] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
    (*(uint64_t*)&(auVar35)) = CONCAT44(-(uint)(iVar8 == 3),-(uint)(iVar8 == 2));
    (*(uint32_t*)((char*)&(auVar35)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar35) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar25)+8)) = (*(uint32_t*)((char*)&(auVar35)+8));
    (*(uint64_t*)&(auVar25)) = (*(uint64_t*)&(auVar35));
    (*(uint32_t *)((char *)&(auVar25) + 12)) = (*(uint32_t *)((char *)&(auVar35) + 12));
    (*(uint64_t*)((char*)&(auVar15)+8)) = 0;
    (*(uint64_t*)&(auVar15)) = uVar1;
    *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar15 & *(uint32_t *)&auVar35);
    pMVar5->Data[2] = (double)(*(uint32_t*)&(auVar18));
    pMVar5->Data[3] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
    pMVar5 = (Matrix4x4_L_double_G_ *)(pMVar5->Data + 4);
    iVar8 = iVar7;
  } while (iVar7 < 4);
  pMVar5 = &((struct Graphics *)(uintptr_t)(this))->CustomProjection;
  iVar8 = 0;
  do {
    iVar7 = iVar8 + 1;
    (*(uint64_t*)&(auVar36)) = CONCAT44(-(uint)(iVar8 == 1),-(uint)(iVar8 == 0));
    (*(uint32_t*)((char*)&(auVar36)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar36) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar26)+8)) = (*(uint32_t*)((char*)&(auVar36)+8));
    (*(uint64_t*)&(auVar26)) = (*(uint64_t*)&(auVar36));
    (*(uint32_t *)((char *)&(auVar26) + 12)) = (*(uint32_t *)((char *)&(auVar36) + 12));
    (*(uint64_t*)((char*)&(auVar16)+8)) = 0;
    (*(uint64_t*)&(auVar16)) = uVar1;
    *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar36 & *(uint32_t *)&auVar16);
    pMVar5->Data[0] = (double)(*(uint32_t*)&(auVar18));
    pMVar5->Data[1] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
    (*(uint64_t*)&(auVar37)) = CONCAT44(-(uint)(iVar8 == 3),-(uint)(iVar8 == 2));
    (*(uint32_t*)((char*)&(auVar37)+8)) = -(uint)(iVar8 == 0);
    (*(uint32_t *)((char *)&(auVar37) + 12)) = -(uint)(iVar8 == 0);
    (*(uint32_t*)((char*)&(auVar27)+8)) = (*(uint32_t*)((char*)&(auVar37)+8));
    (*(uint64_t*)&(auVar27)) = (*(uint64_t*)&(auVar37));
    (*(uint32_t *)((char *)&(auVar27) + 12)) = (*(uint32_t *)((char *)&(auVar37) + 12));
    (*(uint64_t*)((char*)&(auVar17)+8)) = 0;
    (*(uint64_t*)&(auVar17)) = uVar1;
    *(uint32_t *)&auVar18 = (*(uint32_t *)&auVar37 & *(uint32_t *)&auVar17);
    pMVar5->Data[2] = (double)(*(uint32_t*)&(auVar18));
    pMVar5->Data[3] = (double)(*(uint32_t*)((char*)&(auVar18)+4));
    pMVar5 = (Matrix4x4_L_double_G_ *)(pMVar5->Data + 4);
    iVar8 = iVar7;
  } while (iVar7 < 4);
  iStack_8 = 2;
  *(undefined4 *)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 4) = 0;
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 1) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0xc) = 0;
  this_00 = (Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 9);
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 2) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x14) = 0;
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 3) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x1c) = 0;
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 4) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x24) = 0;
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 5) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x2c) = 0;
  (((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data[6] = 0.0;
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 7) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x3c) = 0;
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 8) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x44) = 0;
  *(undefined ***)this_00 = &vftable_565;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x4c) = 0;
  *(undefined4 *)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 10) = 0;
  *(undefined4 *)((int)(((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 0x54) = 0;
  pDStack_10 = this_00;
  do {
    iVar8 = 0;
    pdVar3 = adStack_12c + 2;
    do {
      iVar7 = iVar8 + 1;
      pdVar3[-2] = (double)(int)(-(uint)(iVar8 == 0) & uVar38);
      pdVar3[-1] = (double)(int)(-(uint)(iVar8 == 1) & uVar39);
      *pdVar3 = (double)(int)(-(uint)(iVar8 == 2) & uVar38);
      pdVar3[1] = (double)(int)(-(uint)(iVar8 == 3) & uVar39);
      iVar8 = iVar7;
      pdVar3 = pdVar3 + 4;
    } while (iVar7 < 4);
    iVar8 = 0;
    pdVar3 = adStack_ac + 2;
    do {
      iVar7 = iVar8 + 1;
      pdVar3[-2] = (double)(int)(-(uint)(iVar8 == 0) & uVar38);
      pdVar3[-1] = (double)(int)(-(uint)(iVar8 == 1) & uVar39);
      *pdVar3 = (double)(int)(-(uint)(iVar8 == 2) & uVar38);
      pdVar3[1] = (double)(int)(-(uint)(iVar8 == 3) & uVar39);
      iVar8 = iVar7;
      pdVar3 = pdVar3 + 4;
    } while (iVar7 < 4);
    iVar8 = *(int *)(this_00 + 8);
    uStack_1c = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    iStack_c = iVar8 + 1;
    util__Darray_struct_Graphics__ShadowMatrixInfo___SetSize(this_00,&iStack_c);
    bVar2 = util__Darray_struct_Graphics__ShadowMatrixInfo___CheckSize(this_00,iVar8);
    if (bVar2) {
      pdVar3 = adStack_12c;
      puVar9 = (undefined4 *)(*(int *)(this_00 + 8) * 0x118 + -0x118 + *(int *)(this_00 + 4));
      for (iVar8 = 0x46; this_00 = pDStack_10, iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar9 = *(undefined4 *)pdVar3;
        pdVar3 = (double *)((int)pdVar3 + 4);
        puVar9 = puVar9 + 1;
      }
    }
    iStack_8 = iStack_8 + -1;
    uVar38 = 1;
    uVar39 = 1;
  } while (iStack_8 != 0);
  return pGStack_14;
}





//==== 00842b10 ScissorStack ====


/* public:  Graphics__ScissorStack__ScissorStack(class util__Maybe_L_struct_util__AABB_L_structutil__Vec2_L_int_G__G__G_) */

ScissorStack * 
Graphics__ScissorStack__ScissorStack
          (ScissorStack *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *this_00;
  
  this_00 = (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *)(uintptr_t)(GetStack());
  iVar3 = *(int *)(this_00 + 4);
  iVar1 = iVar3 + 1;
  *(int *)(this_00 + 4) = iVar1;
  *(int *)(this_00 + 0xc) = *(int *)this_00 + iVar1 * 0x14;
  bVar4 = util__Stack_class_util__Maybe_struct_util__AABB_struct_util__Vec2_int_________CheckSize
                    (this_00,iVar3);
  if (bVar4) {
    iVar1 = *(int *)(this_00 + 4);
    iVar3 = *(int *)this_00;
    puVar2 = (undefined4 *)(iVar3 + -0x14 + iVar1 * 0x14);
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    puVar2[3] = param_5;
    *(undefined4 *)(iVar3 + iVar1 * 0x14 + -4) = param_6;
  }
  AlterState(this);
  return this;
}





//==== 00842b70 ShaderStack ====


/* public: __thiscall Graphics__ShaderStack__ShaderStack(class Shader const *) */

ShaderStack * __thiscall Graphics__ShaderStack__ShaderStack(ShaderStack *this,Shader *param_1)

{
  Shader__Push(param_1);
  return this;
}





//==== 00842b90 TextureStack ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public:  Graphics__TextureStack__TextureStack(unsigned int,enum TextureType__Type,int)
    */

TextureStack * 
Graphics__TextureStack__TextureStack(TextureStack *this,uint param_1,int param_2,int param_3)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar2;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar3;
  bool bVar4;
  int *piVar5;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *this_00;
  int iVar6;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (this->StoredChannels)._pad_0x0_0 = 0;
  (this->StoredChannels).Data = (int *)0x0;
  (this->StoredChannels).Size = 0;
  (this->StoredChannels).Capacity = 0;
  (this->StoredChannels)._pad_0x0_0 = (int)&vftable_11;
  (this->StoredChannels).Data = (int *)0x0;
  (this->StoredChannels).Size = 0;
  (this->StoredChannels).Capacity = 1;
  piVar5 = (int *)(uintptr_t)(port_op_new(4));
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    *piVar5 = 0;
  }
  iVar6 = 0;
  (this->StoredChannels).Data = piVar5;
  if (0 < (this->StoredChannels).Capacity) {
    do {
      (this->StoredChannels).Data[iVar6] = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (this->StoredChannels).Capacity);
  }
  iVar6 = (this->StoredChannels).Size;
  local_c = iVar6 + Type__OneDimensional;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)this,(int *)&local_c);
  bVar4 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)this,iVar6);
  if (bVar4) {
    (this->StoredChannels).Data[(this->StoredChannels).Size + -1] = param_3;
  }
  PeekState((int)&local_10);
  this_00 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(uintptr_t)(GetStack(param_3));
  iVar1 = this_00->Size;
  iVar6 = iVar1 + 1;
  this_00->Size = iVar6;
  this_00->EndData = this_00->Data + iVar6;
  bVar4 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(this_00,iVar1);
  if (bVar4) {
    ptVar2 = this_00->Data;
    iVar6 = this_00->Size;
    ptVar2[iVar6 + -1].Value1 = param_1;
    ptVar2[iVar6 + -1].Value2 = param_2;
  }
  tVar3.Value2 = local_c;
  tVar3.Value1 = local_10;
  AlterState(this,tVar3,param_3);
  return this;
}

//==== 00842ca0 TextureStack_00842ca0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public:  Graphics__TextureStack__TextureStack(struct CustomTexture * *,int,int) */

TextureStack * 
Graphics__TextureStack__TextureStack__o2
          (TextureStack *this,CustomTexture **param_1,int param_2,int param_3)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar3;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar4;
  bool bVar5;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  (this->StoredChannels)._pad_0x0_0 = (int)&vftable_11;
  (this->StoredChannels).Data = (int *)0x0;
  (this->StoredChannels).Size = 0;
  (this->StoredChannels).Capacity = 0;
  if (0 < param_2) {
    do {
      iVar1 = (this->StoredChannels).Size;
      local_10 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(iVar1 + 1);
      util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)this,(int *)&local_10)
      ;
      bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                        ((Darray_L_GraphicsResource__Type_G_ *)this,iVar1);
      if (bVar5) {
        (this->StoredChannels).Data[(this->StoredChannels).Size + -1] = param_3;
      }
      PeekState((int)&local_20);
      iVar1 = local_c;
      local_18 = (**(code **)(param_1[local_c]->_pad_0x0_0 + 0x18))();
      local_14 = (**(code **)(param_1[iVar1]->_pad_0x0_0 + 0x14))();
      local_10 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(uintptr_t)(GetStack(param_3));
      iVar2 = local_10->Size;
      iVar1 = iVar2 + 1;
      local_10->Size = iVar1;
      local_10->EndData = local_10->Data + iVar1;
      bVar5 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(local_10,iVar2);
      if (bVar5) {
        ptVar3 = local_10->Data;
        iVar1 = local_10->Size;
        ptVar3[iVar1 + -1].Value1 = local_14;
        ptVar3[iVar1 + -1].Value2 = local_18;
      }
      tVar4.Value2 = local_1c;
      tVar4.Value1 = local_20;
      AlterState(this,tVar4,param_3);
      param_3 = param_3 + 1;
      local_c = local_c + 1;
    } while (local_c < param_2);
  }
  return this;
}

//==== 00842db0 TransformStack ====


/* public: __thiscall Graphics__TransformStack__TransformStack(enum GraphicsTransformFlag) */

TransformStack * __thiscall
Graphics__TransformStack__TransformStack(TransformStack *this,GraphicsTransformFlag param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  Matrix4x4_L_double_G_ *pMVar6;
  double adStack_88 [16];
  TransformStack *pTStack_8;
  
  pTStack_8 = this;
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x156,
                    "!Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  if ((param_1 == GraphicsTransformFlag__ClearToIdentity) || ((*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size == 0)) {
    pdVar5 = adStack_88;
    iVar4 = 0;
    do {
      iVar2 = 0;
      do {
        iVar3 = iVar2 + 2;
        *pdVar5 = (double)(iVar2 == iVar4);
        pdVar5[1] = (double)(iVar2 + 1 == iVar4);
        pdVar5 = pdVar5 + 2;
        iVar2 = iVar3;
      } while (iVar3 < 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  else {
    if ((*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
    }
    pMVar6 = (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Data + (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size + -1;
    pdVar5 = adStack_88;
    for (iVar4 = 0x20; this = pTStack_8, iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pdVar5 = *(undefined4 *)pMVar6->Data;
      pMVar6 = (Matrix4x4_L_double_G_ *)((int)pMVar6->Data + 4);
      pdVar5 = (double *)((int)pdVar5 + 4);
    }
  }
  (*(struct Graphics *)&(GlobalState)).TransformationMatrix.EndData =
       (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Data + (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size + 1;
  iVar4 = (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size;
  (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size = (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size + 1;
  bVar1 = util__Stack_struct_util__Matrix4x4_double_____CheckSize
                    ((Stack_L_struct_util__Matrix4x4_L_double_G___G_ *)&(*(struct Graphics *)&(GlobalState)).TransformationMatrix,
                     iVar4);
  if (!bVar1) {
    return this;
  }
  pdVar5 = adStack_88;
  pMVar6 = (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Data + (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size + -1;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pMVar6->Data = *(undefined4 *)pdVar5;
    pdVar5 = (double *)((int)pdVar5 + 4);
    pMVar6 = (Matrix4x4_L_double_G_ *)((int)pMVar6->Data + 4);
  }
  return pTStack_8;
}





//==== 00842fb0 DrawStack_00842fb0 ====


/* public: __thiscall Graphics__DrawStack___DrawStack(void) */

void __thiscall Graphics__DrawStack___DrawStack(DrawStack *this)

{
  if (this->NullDraw == false) {
    if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x172,
                      "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
      DebugBreak();
    }
    (*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack = false;
    glEnd();
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x175);
  }
  return;
}





//==== 00843000 FrameStack_00843000 ====


/* public: __thiscall Graphics__FrameStack___FrameStack(void) */

void __thiscall Graphics__FrameStack___FrameStack(FrameStack *this)

{
  (*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideAFrame = false;
  (*(struct Graphics *)&(GlobalState)).CurrentDrawMode = GroupType__None;
  CheckDelimiters(this);
  glFlush();
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x142);
  glfwSwapBuffers(MainWindow);
  return;
}





//==== 00843070 ShaderStack_00843070 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall Graphics__ShaderStack___ShaderStack(void) */

void __thiscall Graphics__ShaderStack___ShaderStack(ShaderStack *this)

{
  int iVar1;
  
  if (DAT_00989824 != 0) {
    DAT_00989824 = DAT_00989824 + -1;
    _DAT_0098982c = _CurrentShaders + DAT_00989824 * 4;
  }
  if (DAT_00989824 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(_CurrentShaders + -4 + DAT_00989824 * 4) + 4);
  }
  if (DAT_0095f4d0 != iVar1) {
    (*___glewUseProgram)(iVar1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\shaders.cpp",0xbc);
    DAT_0095f4d0 = iVar1;
  }
  if (0 < DAT_00989824) {
                    /* WARNING: Could not recover jumptable at 0x008417ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(_CurrentShaders + -4 + DAT_00989824 * 4) + 0x18))();
    return;
  }
  return;
}





//==== 00843080 TextureStack_00843080 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: __thiscall Graphics__TextureStack___TextureStack(void) */

void __thiscall Graphics__TextureStack___TextureStack(TextureStack *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar2;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar3;
  int iVar4;
  int *piVar5;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *pSVar6;
  uint uVar7;
  int TVar8;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_c = 0;
  iVar4 = (**(code **)((this->StoredChannels)._pad_0x0_0 + 0xc))();
  if (local_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)(this->StoredChannels)._pad_0x0_0)(&local_c);
      iVar4 = *piVar5;
      pSVar6 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(uintptr_t)(GetStack(iVar4));
      iVar1 = pSVar6->Size;
      if (iVar1 == 0) {
        uVar7 = 0;
        TVar8 = Type__TwoDimensional;
      }
      else {
        ptVar2 = pSVar6->Data;
        uVar7 = ptVar2[iVar1 + -1].Value1;
        TVar8 = ptVar2[iVar1 + -1].Value2;
        pSVar6->Size = iVar1 + -1;
        pSVar6->EndData = ptVar2 + iVar1 + -1;
      }
      tVar3.Value2 = TVar8;
      tVar3.Value1 = uVar7;
      AlterState(this,tVar3,iVar4);
      local_c = local_c + 1;
      iVar4 = (**(code **)((this->StoredChannels)._pad_0x0_0 + 0xc))();
    } while (local_c < iVar4);
  }
  piVar5 = (this->StoredChannels).Data;
  (this->StoredChannels)._pad_0x0_0 = (int)&vftable_11;
  if (piVar5 != (int *)0x0) {
    port_op_delete(piVar5);
  }
  (this->StoredChannels)._pad_0x0_0 = (int)&vftable;
  (this->StoredChannels).Data = (int *)0x0;
  return;
}

//==== 00843130 TransformStack_00843130 ====


/* public: __thiscall Graphics__TransformStack___TransformStack(void) */

void __thiscall Graphics__TransformStack___TransformStack(TransformStack *this)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double adStack_84 [16];
  
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x15e,
                    "!Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  if ((*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size == 0) {
    pdVar3 = adStack_84;
    iVar4 = 0;
    do {
      iVar1 = 0;
      do {
        iVar2 = iVar1 + 2;
        *pdVar3 = (double)(iVar1 == iVar4);
        pdVar3[1] = (double)(iVar1 + 1 == iVar4);
        pdVar3 = pdVar3 + 2;
        iVar1 = iVar2;
      } while (iVar2 < 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    return;
  }
  (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size = (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size + -1;
  (*(struct Graphics *)&(GlobalState)).TransformationMatrix.EndData =
       (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Data + (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size;
  return;
}





//==== 00843200 operator__00843200 ====


/* public: class util__Stack_L_structutil__tuple2_L_unsignedint_CenumTextureType__Type_G__G_ & 
   util__Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type_____operator(class
   util__Stack_L_structutil__tuple2_L_unsignedint_CenumTextureType__Type_G__G_ const &) */

Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ * 
util__Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type_____operator__o2
          (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *this,
          Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar2 = *(uint *)(param_1 + 4);
  puVar3 = *(undefined4 **)this;
  *(uint *)(this + 4) = uVar2;
  *(undefined4 **)(this + 0xc) = puVar3 + uVar2 * 2;
  if (*(int *)(param_1 + 4) != 0) {
    if ((int)uVar2 < 0) {
      uVar2 = 0;
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 **)(this + 0xc) = puVar3;
    }
    if (0x3fffffff < (int)uVar2) {
      *(undefined4 *)(this + 4) = 0x3fffffff;
      uVar2 = 0x3fffffff;
      *(undefined4 **)(this + 0xc) = puVar3 + -2;
    }
    uVar4 = *(uint *)(this + 8);
    if ((int)uVar4 < (int)uVar2) {
      if (uVar4 == 0) {
        *(uint *)(this + 8) = uVar2;
        uVar4 = uVar2;
      }
      if ((int)uVar4 < (int)uVar2) {
        do {
          uVar4 = uVar4 * 2;
        } while ((int)uVar4 < (int)uVar2);
        *(uint *)(this + 8) = uVar4;
      }
      if (0x3fffffff < (int)uVar4) {
        *(undefined4 *)(this + 8) = 0x3fffffff;
        uVar4 = 0x3fffffff;
      }
      if (puVar3 != (undefined4 *)0x0) {
        port_op_delete(puVar3);
        uVar4 = *(uint *)(this + 8);
      }
      puVar3 = (undefined4 *)0x0;
      *(undefined4 *)this = 0;
      if (0 < (int)uVar4) {
        puVar3 = (undefined4 *)
                 port_op_new(-(uint)((int)((ulonglong)uVar4 * 8 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar4 * 8));
        puVar5 = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5 = puVar5 + 2;
          }
        }
        *(undefined4 **)this = puVar3;
        *(undefined4 **)(this + 0xc) = puVar3 + *(int *)(this + 4) * 2;
      }
    }
    puVar5 = *(undefined4 **)param_1;
    if (puVar5 != puVar5 + *(int *)(param_1 + 4) * 2) {
      do {
        *puVar3 = *puVar5;
        puVar1 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        puVar3[1] = *puVar1;
        puVar3 = puVar3 + 2;
      } while (puVar5 != (undefined4 *)(*(int *)param_1 + *(int *)(param_1 + 4) * 8));
    }
    return this;
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 **)(this + 0xc) = puVar3;
  return this;
}





//==== 00843350 operator__00843350 ====


/* public: struct util__Matrix4x4_L_double_G_ const  util__Matrix4x4_L_double_G___op_mul(struct
   util__Matrix4x4_L_double_G_ const &)const  */

Matrix4x4_L_double_G_ * 
util__Matrix4x4_double___operator
          (Matrix4x4_L_double_G_ *this,Matrix4x4_L_double_G_ *__return_storage_ptr__,
          Matrix4x4_L_double_G_ *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  int iStack_8;
  
  iVar7 = 0;
  pdVar5 = __return_storage_ptr__->Data;
  do {
    iVar4 = iVar7 + 1;
    (*(uint64_t*)&(auVar13)) = CONCAT44(-(uint)(iVar7 == 1),-(uint)(iVar7 == 0));
    (*(uint32_t*)((char*)&(auVar13)+8)) = -(uint)(iVar7 == 0);
    (*(uint32_t *)((char *)&(auVar13) + 12)) = -(uint)(iVar7 == 0);
    (*(uint32_t*)((char*)&(auVar11)+8)) = (*(uint32_t*)((char*)&(auVar13)+8));
    (*(uint64_t*)&(auVar11)) = (*(uint64_t*)&(auVar13));
    (*(uint32_t *)((char *)&(auVar11) + 12)) = (*(uint32_t *)((char *)&(auVar13) + 12));
    *(uint32_t *)&auVar11 = (*(uint32_t *)&auVar13 & 0x00000001u);
    *pdVar5 = (double)(*(uint32_t*)&(auVar11));
    pdVar5[1] = (double)(*(uint32_t*)((char*)&(auVar11)+4));
    (*(uint64_t*)&(auVar14)) = CONCAT44(-(uint)(iVar7 == 3),-(uint)(iVar7 == 2));
    (*(uint32_t*)((char*)&(auVar14)+8)) = -(uint)(iVar7 == 0);
    (*(uint32_t *)((char *)&(auVar14) + 12)) = -(uint)(iVar7 == 0);
    (*(uint32_t*)((char*)&(auVar12)+8)) = (*(uint32_t*)((char*)&(auVar14)+8));
    (*(uint64_t*)&(auVar12)) = (*(uint64_t*)&(auVar14));
    (*(uint32_t *)((char *)&(auVar12) + 12)) = (*(uint32_t *)((char *)&(auVar14) + 12));
    *(uint32_t *)&auVar11 = (*(uint32_t *)&auVar14 & 0x00000001u);
    pdVar5[2] = (double)(*(uint32_t*)&(auVar11));
    pdVar5[3] = (double)(*(uint32_t*)((char*)&(auVar11)+4));
    iVar7 = iVar4;
    pdVar5 = pdVar5 + 4;
  } while (iVar4 < 4);
  iVar7 = 4;
  pdVar5 = __return_storage_ptr__->Data + 2;
  do {
    *(undefined4 *)((Matrix4x4_L_double_G_ *)(pdVar5 + -2))->Data = 0;
    *(undefined4 *)((int)pdVar5 + -0xc) = 0;
    *(undefined4 *)(pdVar5 + -1) = 0;
    *(undefined4 *)((int)pdVar5 + -4) = 0;
    *(undefined4 *)pdVar5 = 0;
    *(undefined4 *)((int)pdVar5 + 4) = 0;
    *(undefined4 *)(pdVar5 + 1) = 0;
    *(undefined4 *)((int)pdVar5 + 0xc) = 0;
    iVar7 = iVar7 + -1;
    pdVar5 = pdVar5 + 4;
  } while (iVar7 != 0);
  iStack_8 = 4;
  pdVar5 = __return_storage_ptr__->Data;
  do {
    pdVar1 = (double *)(((int)this - (int)__return_storage_ptr__) + (int)pdVar5);
    iVar7 = 4;
    pdVar9 = param_1->Data;
    do {
      dVar10 = *pdVar5;
      iVar4 = 4;
      pdVar6 = pdVar1;
      pdVar8 = pdVar9;
      do {
        dVar2 = *pdVar8;
        pdVar8 = pdVar8 + 4;
        dVar3 = *pdVar6;
        pdVar6 = pdVar6 + 1;
        dVar10 = dVar10 + dVar2 * dVar3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pdVar9 = pdVar9 + 1;
      *pdVar5 = dVar10;
      pdVar5 = pdVar5 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  return __return_storage_ptr__;
}





//==== 00843480 scalar_deleting_destructor_00843480 ====


/* public: virtual void * __thiscall util__Darray_L_structGraphics__ShadowMatrixInfo_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_Graphics__ShadowMatrixInfo____scalar_deleting_destructor
          (Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_565;
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





//==== 008434d0 AlterState ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall Graphics__BlendStack__AlterState(void)const  */

void __thiscall Graphics__BlendStack__AlterState(BlendStack *this)

{
  Stack_L_struct_FullBlendState_G_ *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_14;
  int iStack_c;
  int iStack_8;
  
  pSVar1 = (Stack_L_struct_FullBlendState_G_ *)(uintptr_t)(GetStack());
  if (*(int *)(pSVar1 + 4) < 1) {
    iVar4 = 0;
    iStack_14 = 0;
    iVar6 = 0;
    iStack_c = 0;
    iVar5 = 5;
    iStack_8 = 0;
    iVar2 = 0;
  }
  else {
    pSVar1 = (Stack_L_struct_FullBlendState_G_ *)(uintptr_t)(GetStack());
    iVar2 = *(int *)(pSVar1 + 4);
    if (iVar2 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar2 = *(int *)(pSVar1 + 4);
    }
    iVar3 = *(int *)pSVar1;
    iStack_14 = *(int *)(iVar3 + -0x14 + iVar2 * 0x1c);
    iVar4 = *(int *)(iVar3 + -8 + iVar2 * 0x1c);
    iVar6 = *(int *)(iVar3 + -4 + iVar2 * 0x1c);
    iVar5 = *(int *)(iVar3 + -0x1c + iVar2 * 0x1c);
    iStack_c = *(int *)(iVar3 + -0x10 + iVar2 * 0x1c);
    iStack_8 = *(int *)(iVar3 + -0x18 + iVar2 * 0x1c);
    iVar2 = *(int *)(iVar3 + -0xc + iVar2 * 0x1c);
  }
  if ((((iVar5 != DAT_0095f4f4) || (iStack_8 != DAT_0095f4f8)) || (iStack_14 != DAT_0095f4fc)) ||
     (((iStack_c != DAT_0095f500 || (iVar2 != DAT_0095f504)) ||
      ((iVar4 != DAT_0095f508 || (iVar6 != DAT_0095f50c)))))) {
    if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack != false) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x23d,
                      "!Graphics__IsInsideADrawStack()",(char *)0x0);
      DebugBreak();
    }
    if (iVar5 == 0) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x241);
      glBlendFunc(0x302,0x303);
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x243);
      (*___glewBlendEquation)(0x8006);
      iVar3 = 0x245;
    }
    else if (iVar5 == 1) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x24a);
      glBlendFunc(1,1);
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x24c);
      (*___glewBlendEquation)(0x8006);
      iVar3 = 0x24e;
    }
    else if (iVar5 == 2) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x253);
      glBlendFunc(1,0);
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x255);
      (*___glewBlendEquation)(0x8006);
      iVar3 = 599;
    }
    else if (iVar5 == 3) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x25c);
      (*___glewBlendFuncSeparate)(0x302,0x303,0,1);
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x25e);
      (*___glewBlendEquation)(0x8006);
      iVar3 = 0x260;
    }
    else if (iVar5 == 4) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x265);
      (*___glewBlendFuncSeparate)(iStack_8,iStack_14,iVar2,iVar4);
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x268);
      (*___glewBlendEquationSeparate)(iStack_c,iVar6);
      iVar3 = 0x26a;
    }
    else {
      glDisable(0xbe2);
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x26f);
      glBlendFunc(1,0);
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x271);
      (*___glewBlendEquation)(0x8006);
      iVar3 = 0x273;
    }
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",iVar3);
    DAT_0095f4f8 = iStack_8;
    DAT_0095f500 = iStack_c;
    _DAT_0095f504 = CONCAT44(iVar4,iVar2);
    DAT_0095f4f4 = iVar5;
    DAT_0095f4fc = iStack_14;
    DAT_0095f50c = iVar6;
  }
  return;
}





//==== 00843800 AlterState_00843800 ====


/* private: void __thiscall Graphics__CullStack__AlterState(void)const  */

void __thiscall Graphics__CullStack__AlterState(CullStack *this)

{
  Stack_L_enum_CullState__Type_G_ *pSVar1;
  int iVar2;
  int iVar3;
  
  pSVar1 = (Stack_L_enum_CullState__Type_G_ *)(uintptr_t)(GetStack());
  if (*(int *)(pSVar1 + 4) < 1) {
    iVar3 = 2;
  }
  else {
    pSVar1 = (Stack_L_enum_CullState__Type_G_ *)(uintptr_t)(GetStack());
    iVar3 = *(int *)(pSVar1 + 4);
    if (iVar3 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar3 = *(int *)(pSVar1 + 4);
    }
    iVar3 = *(int *)(*(int *)pSVar1 + -4 + iVar3 * 4);
  }
  if (DAT_0095f4ec != iVar3) {
    if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack != false) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x196,
                      "!Graphics__IsInsideADrawStack()",(char *)0x0);
      DebugBreak();
    }
    if (iVar3 == 0) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x19a);
      glCullFace(0x405);
      iVar2 = 0x19c;
    }
    else if (iVar3 == 1) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x1a1);
      glCullFace(0x404);
      iVar2 = 0x1a3;
    }
    else {
      glDisable(0xb44);
      iVar2 = 0x1a8;
    }
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",iVar2);
    DAT_0095f4ec = iVar3;
  }
  return;
}





//==== 00843900 AlterState_00843900 ====


/* private: void __thiscall Graphics__DepthStack__AlterState(void)const  */

void __thiscall Graphics__DepthStack__AlterState(DepthStack *this)

{
  Stack_L_enum_DepthTest__Type_G_ *pSVar1;
  int iVar2;
  int iVar3;
  
  pSVar1 = (Stack_L_enum_DepthTest__Type_G_ *)(uintptr_t)(GetStack());
  if (*(int *)(pSVar1 + 4) < 1) {
    iVar3 = 2;
  }
  else {
    pSVar1 = (Stack_L_enum_DepthTest__Type_G_ *)(uintptr_t)(GetStack());
    iVar3 = *(int *)(pSVar1 + 4);
    if (iVar3 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar3 = *(int *)(pSVar1 + 4);
    }
    iVar3 = *(int *)(*(int *)pSVar1 + -4 + iVar3 * 4);
  }
  if (DAT_0095f4f0 != iVar3) {
    if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack != false) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x1cc,
                      "!Graphics__IsInsideADrawStack()",(char *)0x0);
      DebugBreak();
    }
    if (iVar3 == 0) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x1d0);
      glDepthMask(1);
      iVar2 = 0x1d2;
    }
    else if (iVar3 == 1) {
      glEnable();
      glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x1d7);
      glDepthMask(0);
      iVar2 = 0x1d9;
    }
    else {
      glDisable(0xb71);
      iVar2 = 0x1de;
    }
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",iVar2);
    DAT_0095f4f0 = iVar3;
  }
  return;
}





//==== 00843a00 AlterState_00843a00 ====


/* private: void __thiscall Graphics__ScissorStack__AlterState(void)const  */

void __thiscall Graphics__ScissorStack__AlterState(ScissorStack *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *pSVar4;
  int iVar5;
  
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x1fc,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  pSVar4 = (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *)(uintptr_t)(GetStack());
  if (*(int *)(pSVar4 + 4) != 0) {
    pSVar4 = (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *)(uintptr_t)(GetStack());
    iVar5 = *(int *)(pSVar4 + 4);
    if (iVar5 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar5 = *(int *)(pSVar4 + 4);
    }
    if (*(char *)(*(int *)pSVar4 + -4 + iVar5 * 0x14) != '\0') {
      glEnable(0xc11);
      pSVar4 = (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *)(uintptr_t)(GetStack());
      iVar5 = *(int *)(pSVar4 + 4);
      if (iVar5 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                        "Size > 0",(char *)0x0);
        DebugBreak();
        iVar5 = *(int *)(pSVar4 + 4);
      }
      iVar1 = *(int *)pSVar4 + iVar5 * 0x14;
      if (*(char *)(*(int *)pSVar4 + -4 + iVar5 * 0x14) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      uVar2 = *(undefined4 *)(iVar1 + -0x10);
      uVar3 = *(undefined4 *)(iVar1 + -0x14);
      pSVar4 = (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *)(uintptr_t)(GetStack());
      iVar5 = *(int *)(pSVar4 + 4);
      if (iVar5 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                        "Size > 0",(char *)0x0);
        DebugBreak();
        iVar5 = *(int *)(pSVar4 + 4);
      }
      iVar1 = *(int *)pSVar4 + iVar5 * 0x14;
      if (*(char *)(*(int *)pSVar4 + -4 + iVar5 * 0x14) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      glScissor(uVar3,uVar2,*(int *)(iVar1 + -0xc) - *(int *)(iVar1 + -0x14),
                *(int *)(iVar1 + -8) - *(int *)(iVar1 + -0x10));
      goto LAB_00843b5c;
    }
  }
  glDisable(0xc11);
LAB_00843b5c:
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x205);
  return;
}





//==== 00843b80 AlterState_00843b80 ====


/* private: void  Graphics__TextureStack__AlterState(struct util__tuple2_L_unsignedint_Cenum_TextureType__Type_G_,int)const  */

void 
Graphics__TextureStack__AlterState(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iStack_c;
  int TStack_8;
  
  PeekState((int)&iStack_c);
  if ((iStack_c != param_2) || (TStack_8 != param_3)) {
    if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack != false) {
      util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x2c5,
                      "!Graphics__IsInsideADrawStack()",(char *)0x0);
      DebugBreak();
    }
    (*___glewActiveTexture)(param_4 + 0x84c0);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x2c8);
    iVar1 = 0;
    if (iStack_c != -1) {
      iVar1 = iStack_c;
    }
    uVar2 = GetTextureTargetFromType(TStack_8);
    glBindTexture(uVar2,iVar1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x2cc);
  }
  return;
}





//==== 00843c30 ApplyTransformation ====


/* public: void __thiscall Graphics__ApplyTransformation(void)const  */

void __thiscall Graphics__ApplyTransformation(OptionsSection__Graphics *this)

{
  undefined8 stack0xfffffc14;
  undefined8 stack0xfffffffc;
  int TVar1;
  Matrix4x4_L_double_G_ MVar2;
  OptionsSection__Graphics *pGVar3;
  int iVar4;
  Matrix4x4_L_double_G_ *pMVar5;
  Matrix4x4_L_double_G_ *pMVar6;
  Shader *pSVar7;
  undefined4 *puVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  Matrix4x4_L_double_G_ *pMVar12;
  undefined1 in_stack_fffffc14 [108];
  undefined4 in_stack_fffffc80;
  undefined4 in_stack_fffffc84;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_364 [136];
  Matrix4x4_L_double_G_ MStack_2dc;
  Matrix4x4_L_double_G_ MStack_25c;
  Shader *pSStack_1dc;
  undefined4 uStack_1d8;
  OptionsSection__Graphics *pGStack_1d4;
  undefined4 auStack_1d0 [32];
  Matrix4x4_L_double_G_ MStack_150;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  Matrix4x4_L_double_G_ MStack_88;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pdVar9 = MStack_150.Data;
  iVar11 = 0;
  do {
    iVar10 = 0;
    do {
      iVar4 = iVar10 + 2;
      *pdVar9 = (double)(iVar10 == iVar11);
      pdVar9[1] = (double)(iVar10 + 1 == iVar11);
      pdVar9 = pdVar9 + 2;
      iVar10 = iVar4;
    } while (iVar4 < 4);
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  TVar1 = ((struct Graphics *)(uintptr_t)(this))->CurrentDrawMode;
  pGStack_1d4 = this;
  if (TVar1 == DrawMode__World) {
    pMVar5 = &((struct Graphics *)(uintptr_t)(this))->CustomProjection;
LAB_00843d09:
    pMVar12 = &MStack_150;
    for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pMVar12->Data = *(undefined4 *)pMVar5->Data;
      pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
      pMVar12 = (Matrix4x4_L_double_G_ *)((int)pMVar12->Data + 4);
    }
  }
  else {
    if (TVar1 == DrawMode__Shadow) {
      uStack_1d8 = 0;
LAB_00843cec:
      iVar11 = (*(code *)**(undefined4 **)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 9))();
      pMVar5 = (Matrix4x4_L_double_G_ *)(iVar11 + 0x80);
      goto LAB_00843d09;
    }
    if (TVar1 == DrawMode__Custom) {
      uStack_1d8 = 1;
      goto LAB_00843cec;
    }
  }
  pMVar5 = (Matrix4x4_L_double_G_ *)(uintptr_t)(GetCurrentTransformMatrix(pGStack_1d4,&MStack_25c));
  uVar13 = 0x843d3d;
  pMVar5 = (Matrix4x4_L_double_G_ *)(uintptr_t)(util__Matrix4x4_L_double_G___op_mul(pMVar5,&MStack_88,&MStack_150));
  iVar10 = 0;
  pMVar12 = &MStack_150;
  for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pMVar12->Data = *(undefined4 *)pMVar5->Data;
    pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
    pMVar12 = (Matrix4x4_L_double_G_ *)((int)pMVar12->Data + 4);
  }
  pdVar9 = MStack_25c.Data;
  do {
    iVar11 = 0;
    do {
      iVar4 = iVar11 + 2;
      *pdVar9 = (double)(iVar11 == iVar10);
      pdVar9[1] = (double)(iVar11 + 1 == iVar10);
      pdVar9 = pdVar9 + 2;
      iVar11 = iVar4;
    } while (iVar4 < 4);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 4);
  uVar14 = 0x843dca;
  pMVar5 = (Matrix4x4_L_double_G_ *)(uintptr_t)(GetCurrentTransformMatrix(pGStack_1d4,&MStack_2dc));
  puVar8 = (undefined4 *)&stack0xfffffc14;
  for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar8 = *(undefined4 *)pMVar5->Data;
    pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
    puVar8 = puVar8 + 1;
  }
  (*(uint32_t *)((char *)&(MVar2.Data) + 4)) = (uint32_t)(uintptr_t)(in_stack_fffffc14);
  (*(undefined4 *)((char *)&(MVar2.Data[0]) + 0)) = (undefined4)(uintptr_t) auStack_364;
  (*(undefined4 *)((char *)&(MVar2.Data[0xe]) + 0)) = in_stack_fffffc80;
  (*(undefined4 *)((char *)&(MVar2.Data[0xe]) + 4)) = in_stack_fffffc84;
  (*(undefined4 *)((char *)&(MVar2.Data[0xf]) + 0)) = uVar13;
  (*(undefined4 *)((char *)&(MVar2.Data[0xf]) + 4)) = uVar14;
  pMVar6 = (Matrix4x4_L_double_G_ *)util__InvertMatrix_double(MVar2);
  iVar11 = 0x20;
  puVar8 = auStack_1d0;
  pMVar12 = &MStack_25c;
  pMVar5 = &MStack_25c;
  if (*(char *)pMVar6[1].Data != '\0') {
    pMVar12 = pMVar6;
    pMVar5 = pMVar6;
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar8 = *(undefined4 *)pMVar12->Data;
    pMVar12 = (Matrix4x4_L_double_G_ *)((int)pMVar12->Data + 4);
    puVar8 = puVar8 + 1;
  }
  pMVar12 = &MStack_88;
  for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pMVar12->Data = *(undefined4 *)pMVar5->Data;
    pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
    pMVar12 = (Matrix4x4_L_double_G_ *)((int)pMVar12->Data + 4);
  }
  dStack_d0 = MStack_88.Data[0];
  dStack_b8 = MStack_88.Data[1];
  dStack_a0 = MStack_88.Data[2];
  dStack_c8 = MStack_88.Data[4];
  dStack_b0 = MStack_88.Data[5];
  dStack_98 = MStack_88.Data[6];
  dStack_c0 = MStack_88.Data[8];
  dStack_a8 = MStack_88.Data[9];
  dStack_90 = MStack_88.Data[10];
  pSVar7 = Shader__GetCurrent();
  iVar11 = pSVar7->_pad_0x0_0;
  GetCurrentTransformMatrix(pGStack_1d4,&MStack_2dc);
  (**(code **)(uintptr_t)(iVar11 + 0x1c))();
  pSStack_1dc = Shader__GetCurrent();
  pGVar3 = pGStack_1d4;
  switch(((struct Graphics *)(uintptr_t)(pGStack_1d4))->CurrentDrawMode) {
  case DrawMode__World:
    pMVar5 = &((struct Graphics *)(uintptr_t)(pGStack_1d4))->WorldProjection;
    pMVar12 = &MStack_88;
    for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pMVar12->Data = *(undefined4 *)pMVar5->Data;
      pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
      pMVar12 = (Matrix4x4_L_double_G_ *)((int)pMVar12->Data + 4);
    }
    break;
  case (int)(uintptr_t)((int)(uintptr_t)(DrawMode__UI)):
    pMVar5 = &((struct Graphics *)(uintptr_t)(pGStack_1d4))->UIProjection;
    pMVar12 = &MStack_88;
    for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pMVar12->Data = *(undefined4 *)pMVar5->Data;
      pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
      pMVar12 = (Matrix4x4_L_double_G_ *)((int)pMVar12->Data + 4);
    }
    break;
  case (int)(uintptr_t)((int)(uintptr_t)(DrawMode__Shadow)):
    uStack_1d8 = 0;
    goto LAB_00843f16;
  case DrawMode__Custom:
    pGStack_1d4 = (OptionsSection__Graphics *)0x1;
LAB_00843f16:
    puVar8 = (undefined4 *)(*(code *)**(undefined4 **)((((struct Graphics *)(uintptr_t)(pGVar3))->ViewMatrix).Data + 9))();
    pMVar5 = &MStack_88;
    for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pMVar5->Data = *puVar8;
      puVar8 = puVar8 + 1;
      pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
    }
    break;
  case DrawMode__Custom|DrawMode__World:
    pMVar5 = &((struct Graphics *)(uintptr_t)(pGStack_1d4))->ShadowProjection;
    pMVar12 = &MStack_88;
    for (iVar11 = 0x20; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined4 *)pMVar12->Data = *(undefined4 *)pMVar5->Data;
      pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
      pMVar12 = (Matrix4x4_L_double_G_ *)((int)pMVar12->Data + 4);
    }
    break;
  default:
    iVar11 = 0;
    pdVar9 = MStack_88.Data;
    do {
      iVar10 = 0;
      do {
        iVar4 = iVar10 + 2;
        *pdVar9 = (double)(iVar10 == iVar11);
        pdVar9[1] = (double)(iVar10 + 1 == iVar11);
        pdVar9 = pdVar9 + 2;
        iVar10 = iVar4;
      } while (iVar4 < 4);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
  }
  iVar11 = pSStack_1dc->_pad_0x0_0;
  util__Matrix4x4_L_double_G___op_mul(&MStack_150,&MStack_2dc,&MStack_88);
  (**(code **)(uintptr_t)(iVar11 + 0x2c))();
  pSVar7 = Shader__GetCurrent();
  (**(code **)(pSVar7->_pad_0x0_0 + 0x34))();
  pSVar7 = Shader__GetCurrent();
  (**(code **)(pSVar7->_pad_0x0_0 + 0x24))();
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00844040 CheckDelimiters ====


/* public: void __thiscall Graphics__FrameStack__CheckDelimiters(void) */

void __thiscall Graphics__FrameStack__CheckDelimiters(FrameStack *this)

{
  undefined8 stack0xfffffffc;
  Stack_L_enum_CullState__Type_G_ *pSVar1;
  Stack_L_enum_DepthTest__Type_G_ *pSVar2;
  Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *pSVar3;
  Stack_L_struct_FullBlendState_G_ *pSVar4;
  Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *pSVar5;
  int iVar6;
  int iVar7;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x14a,
                    "Graphics__Get().TransformationMatrix.Num() == 0",(char *)0x0);
    DebugBreak();
  }
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack != false) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x14b,
                    "!Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  pSVar1 = (Stack_L_enum_CullState__Type_G_ *)(uintptr_t)(CullStack__GetStack());
  if (*(int *)(pSVar1 + 4) != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x14c,
                    "Graphics__CullStack__IsStackEmpty()",(char *)0x0);
    DebugBreak();
  }
  pSVar2 = (Stack_L_enum_DepthTest__Type_G_ *)(uintptr_t)(DepthStack__GetStack());
  if (*(int *)(pSVar2 + 4) != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x14d,
                    "Graphics__DepthStack__IsStackEmpty()",(char *)0x0);
    DebugBreak();
  }
  pSVar3 = (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *)(uintptr_t)(ScissorStack__GetStack());
  if (*(int *)(pSVar3 + 4) != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x14e,
                    "Graphics__ScissorStack__IsStackEmpty()",(char *)0x0);
    DebugBreak();
  }
  pSVar4 = (Stack_L_struct_FullBlendState_G_ *)(uintptr_t)(BlendStack__GetStack());
  if (*(int *)(pSVar4 + 4) != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x14f,
                    "Graphics__BlendStack__IsStackEmpty()",(char *)0x0);
    DebugBreak();
  }
  iVar7 = 0;
  while( true ) {
    glGetIntegerv(0x8872,&iStack_c);
    iVar6 = 0x10;
    if (iStack_c < 0x10) {
      iVar6 = iStack_c;
    }
    if (iVar6 <= iVar7) goto LAB_00844189;
    pSVar5 = (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *)(uintptr_t)(TextureStack__GetStack(iVar7));
    if (*(int *)(pSVar5 + 4) != 0) break;
    iVar7 = iVar7 + 1;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x150,
                  "Graphics__TextureStack__AreStacksEmpty()",(char *)0x0);
  DebugBreak();
LAB_00844189:
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 008441a0 CheckSize_008441a0 ====


/* private: bool  util__Darray_L_structGraphics__ShadowMatrixInfo_G___CheckSize(int) */

bool 
util__Darray_struct_Graphics__ShadowMatrixInfo___CheckSize
          (Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *this,int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  double *pdVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar7 = *(uint *)(this + 8);
  bVar13 = -1 < (int)uVar7;
  bVar1 = !bVar13;
  if (bVar1) {
    puStack_c = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar1;
  bVar1 = (int)uVar7 < 0x40000000;
  if (!bVar1) {
    puStack_c = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_c);
    uVar7 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar11 = *(uint *)(this + 0xc);
  if ((int)uVar7 <= (int)uVar11) {
    return bVar1 && bVar13;
  }
  if (uVar11 == 0) {
    *(uint *)(this + 0xc) = uVar7;
    uVar11 = uVar7;
  }
  if ((int)uVar11 < (int)uVar7) {
    do {
      uVar11 = uVar11 * 2;
    } while ((int)uVar11 < (int)uVar7);
    *(uint *)(this + 0xc) = uVar11;
  }
  if (0x3fffffff < (int)uVar11) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x118 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar11 * 0x118));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar11 != 0) {
    pdVar3 = (double *)(puStack_c + 0x20);
    do {
      uVar11 = uVar11 - 1;
      iVar5 = 0;
      pdVar8 = pdVar3 + -0x10;
      do {
        iVar4 = iVar5 + 1;
        (*(uint64_t*)&(auVar16)) = CONCAT44(-(uint)(iVar5 == 1),-(uint)(iVar5 == 0));
        (*(uint32_t*)((char*)&(auVar16)+8)) = -(uint)(iVar5 == 0);
        (*(uint32_t *)((char *)&(auVar16) + 12)) = -(uint)(iVar5 == 0);
        (*(uint32_t*)((char*)&(auVar14)+8)) = (*(uint32_t*)((char*)&(auVar16)+8));
        (*(uint64_t*)&(auVar14)) = (*(uint64_t*)&(auVar16));
        (*(uint32_t *)((char *)&(auVar14) + 12)) = (*(uint32_t *)((char *)&(auVar16) + 12));
        *(uint32_t *)&auVar14 = (*(uint32_t *)&auVar16 & 0x00000001u);
        *pdVar8 = (double)(*(uint32_t*)&(auVar14));
        pdVar8[1] = (double)(*(uint32_t*)((char*)&(auVar14)+4));
        (*(uint64_t*)&(auVar17)) = CONCAT44(-(uint)(iVar5 == 3),-(uint)(iVar5 == 2));
        (*(uint32_t*)((char*)&(auVar17)+8)) = -(uint)(iVar5 == 0);
        (*(uint32_t *)((char *)&(auVar17) + 12)) = -(uint)(iVar5 == 0);
        (*(uint32_t*)((char*)&(auVar15)+8)) = (*(uint32_t*)((char*)&(auVar17)+8));
        (*(uint64_t*)&(auVar15)) = (*(uint64_t*)&(auVar17));
        (*(uint32_t *)((char *)&(auVar15) + 12)) = (*(uint32_t *)((char *)&(auVar17) + 12));
        *(uint32_t *)&auVar14 = (*(uint32_t *)&auVar17 & 0x00000001u);
        pdVar8[2] = (double)(*(uint32_t*)&(auVar14));
        pdVar8[3] = (double)(*(uint32_t*)((char*)&(auVar14)+4));
        iVar5 = iVar4;
        pdVar8 = pdVar8 + 4;
      } while (iVar4 < 4);
      iVar5 = 0;
      pdVar8 = pdVar3;
      do {
        iVar4 = iVar5 + 1;
        uVar2 = CONCAT44(-(uint)(iVar5 == 1),-(uint)(iVar5 == 0)) & 0x100000001;
        *pdVar8 = (double)(int)uVar2;
        pdVar8[1] = (double)(int)(uVar2 >> 0x20);
        (*(uint32_t*)&(auVar18)) = -(uint)(iVar5 == 2);
        (*(uint32_t*)((char*)&(auVar18)+4)) = -(uint)(iVar5 == 3);
        (*(uint32_t*)((char*)&(auVar18)+8)) = -(uint)(iVar5 == 0);
        (*(uint32_t *)((char *)&(auVar18) + 12)) = -(uint)(iVar5 == 0);
        *(uint32_t *)&auVar14 = (*(uint32_t *)&auVar18 & 0x00000001u);
        pdVar8[2] = (double)(*(uint32_t*)&(auVar14));
        pdVar8[3] = (double)(*(uint32_t*)((char*)&(auVar14)+4));
        iVar5 = iVar4;
        pdVar8 = pdVar8 + 4;
      } while (iVar4 < 4);
      *(undefined4 *)(pdVar3 + 0x10) = 0;
      *(undefined4 *)((int)pdVar3 + 0x84) = 0;
      *(undefined4 *)(pdVar3 + 0x11) = 0;
      *(undefined4 *)((int)pdVar3 + 0x8c) = 0;
      pdVar3[0x12] = 0.0;
      pdVar3 = pdVar3 + 0x23;
    } while (uVar11 != 0);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    iVar5 = *(int *)(this + 8);
    puVar9 = puVar6;
    puVar10 = puStack_c;
    if (puVar6 != puVar6 + param_1 * 0x46) {
      do {
        if (puVar10 == puStack_c + iVar5 * 0x46) break;
        puVar6 = puVar9;
        puVar12 = puVar10;
        for (iVar4 = 0x46; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar12 = puVar12 + 1;
        }
        puVar9 = puVar9 + 0x46;
        puVar10 = puVar10 + 0x46;
        puVar6 = *(undefined4 **)(this + 4);
      } while (puVar9 != puVar6 + param_1 * 0x46);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 00844430 CheckSize_00844430 ====


/* private: bool  util__Stack_L_structutil__Matrix4x4_L_double_G__G___CheckSize(int) */

bool 
util__Stack_struct_util__Matrix4x4_double_____CheckSize
          (Stack_L_struct_util__Matrix4x4_L_double_G___G_ *this,int param_1)

{
  bool bVar1;
  bool bVar2;
  double *pdVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  double *pdVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double *pdStack_c;
  bool bStack_5;
  
  uVar6 = *(uint *)(this + 4);
  bVar11 = -1 < (int)uVar6;
  if (!bVar11) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)this;
    *(undefined4 *)(this + 4) = 0;
    uVar6 = 0;
  }
  bVar1 = (int)uVar6 < 0x40000000;
  bVar2 = !bVar1;
  if (bVar2) {
    *(undefined4 *)(this + 4) = 0x3fffffff;
    *(int *)(this + 0xc) = *(int *)this + -0x80;
    uVar6 = 0x3fffffff;
  }
  bStack_5 = !bVar2 && bVar11;
  uVar8 = *(uint *)(this + 8);
  if ((int)uVar6 <= (int)uVar8) {
    return bVar1 && bVar11;
  }
  if (uVar8 == 0) {
    *(uint *)(this + 8) = uVar6;
    uVar8 = uVar6;
  }
  if ((int)uVar8 < (int)uVar6) {
    do {
      uVar8 = uVar8 * 2;
    } while ((int)uVar8 < (int)uVar6);
    *(uint *)(this + 8) = uVar8;
  }
  if (0x3fffffff < (int)uVar8) {
    *(undefined4 *)(this + 8) = 0x3fffffff;
    uVar8 = 0x3fffffff;
  }
  pdStack_c = (double *)0x0;
  if (0 < (int)uVar8) {
    pdStack_c = (double *)
                port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x80 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar8 * 0x80));
    pdVar3 = pdStack_c;
    if (pdStack_c == (double *)0x0) {
      pdStack_c = (double *)0x0;
    }
    else {
      while (uVar8 != 0) {
        uVar8 = uVar8 - 1;
        iVar4 = 0;
        do {
          iVar5 = iVar4 + 1;
          (*(uint64_t*)&(auVar14)) = CONCAT44(-(uint)(iVar4 == 1),-(uint)(iVar4 == 0));
          (*(uint32_t*)((char*)&(auVar14)+8)) = -(uint)(iVar4 == 0);
          (*(uint32_t *)((char *)&(auVar14) + 12)) = -(uint)(iVar4 == 0);
          (*(uint32_t*)((char*)&(auVar12)+8)) = (*(uint32_t*)((char*)&(auVar14)+8));
          (*(uint64_t*)&(auVar12)) = (*(uint64_t*)&(auVar14));
          (*(uint32_t *)((char *)&(auVar12) + 12)) = (*(uint32_t *)((char *)&(auVar14) + 12));
          *(uint32_t *)&auVar12 = (*(uint32_t *)&auVar14 & 0x00000001u);
          *pdVar3 = (double)(*(uint32_t*)&(auVar12));
          pdVar3[1] = (double)(*(uint32_t*)((char*)&(auVar12)+4));
          (*(uint64_t*)&(auVar15)) = CONCAT44(-(uint)(iVar4 == 3),-(uint)(iVar4 == 2));
          (*(uint32_t*)((char*)&(auVar15)+8)) = -(uint)(iVar4 == 0);
          (*(uint32_t *)((char *)&(auVar15) + 12)) = -(uint)(iVar4 == 0);
          (*(uint32_t*)((char*)&(auVar13)+8)) = (*(uint32_t*)((char*)&(auVar15)+8));
          (*(uint64_t*)&(auVar13)) = (*(uint64_t*)&(auVar15));
          (*(uint32_t *)((char *)&(auVar13) + 12)) = (*(uint32_t *)((char *)&(auVar15) + 12));
          *(uint32_t *)&auVar12 = (*(uint32_t *)&auVar15 & 0x00000001u);
          pdVar3[2] = (double)(*(uint32_t*)&(auVar12));
          pdVar3[3] = (double)(*(uint32_t*)((char*)&(auVar12)+4));
          pdVar3 = pdVar3 + 4;
          iVar4 = iVar5;
        } while (iVar5 < 4);
      }
    }
    iVar4 = *(int *)(this + 4);
    puVar7 = *(undefined4 **)this;
    pdVar3 = pdStack_c;
    if (puVar7 != puVar7 + param_1 * 0x20) {
      do {
        if (pdVar3 == pdStack_c + iVar4 * 0x10) break;
        puVar9 = puVar7;
        pdVar10 = pdVar3;
        for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pdVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          pdVar10 = (double *)((int)pdVar10 + 4);
        }
        puVar7 = puVar7 + 0x20;
        pdVar3 = pdVar3 + 0x10;
      } while (puVar7 != (undefined4 *)(*(int *)this + param_1 * 0x80));
    }
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  *(double **)this = pdStack_c;
  *(double **)(this + 0xc) = pdStack_c + *(int *)(this + 4) * 0x10;
  return bStack_5;
}





//==== 00844620 CheckSize_00844620 ====


/* private: bool  util__Stack_L_structFullBlendState_G___CheckSize(int) */

bool __thiscall
util__Stack_struct_FullBlendState___CheckSize(Stack_L_struct_FullBlendState_G_ *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 *puStack_c;
  bool bStack_5;
  
  uVar10 = *(uint *)(this + 4);
  bVar12 = -1 < (int)uVar10;
  if (!bVar12) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)this;
    *(undefined4 *)(this + 4) = 0;
    uVar10 = 0;
  }
  bVar3 = (int)uVar10 < 0x40000000;
  bVar7 = !bVar3;
  if (bVar7) {
    *(undefined4 *)(this + 4) = 0x3fffffff;
    *(int *)(this + 0xc) = *(int *)this + -0x1c;
    uVar10 = 0x3fffffff;
  }
  bStack_5 = !bVar7 && bVar12;
  uVar11 = *(uint *)(this + 8);
  if ((int)uVar10 <= (int)uVar11) {
    return bVar3 && bVar12;
  }
  if (uVar11 == 0) {
    *(uint *)(this + 8) = uVar10;
    uVar11 = uVar10;
  }
  if ((int)uVar11 < (int)uVar10) {
    do {
      uVar11 = uVar11 * 2;
    } while ((int)uVar11 < (int)uVar10);
    *(uint *)(this + 8) = uVar11;
  }
  if (0x3fffffff < (int)uVar11) {
    *(undefined4 *)(this + 8) = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)0x0;
  if (0 < (int)uVar11) {
    puStack_c = (undefined4 *)
                port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x1c >> 0x20) != 0) |
                               (uint)((ulonglong)uVar11 * 0x1c));
    if (puStack_c == (undefined4 *)0x0) {
      puStack_c = (undefined4 *)0x0;
    }
    else if (uVar11 != 0) {
      puVar8 = puStack_c + 3;
      do {
        puVar8[-3] = 0;
        puVar8[-2] = 0;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 7;
      } while (uVar11 != 0);
    }
    iVar2 = *(int *)(this + 4);
    puVar8 = *(undefined4 **)this;
    puVar9 = puStack_c;
    if (puVar8 != puVar8 + param_1 * 7) {
      do {
        if (puVar9 == puStack_c + iVar2 * 7) break;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(puVar8 + 4);
        puVar1 = puVar8 + 6;
        puVar8 = puVar8 + 7;
        puVar9[6] = *puVar1;
        puVar9 = puVar9 + 7;
      } while (puVar8 != (undefined4 *)(*(int *)this + param_1 * 0x1c));
    }
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  *(undefined4 **)this = puStack_c;
  *(undefined4 **)(this + 0xc) = puStack_c + *(int *)(this + 4) * 7;
  return bStack_5;
}





//==== 008447c0 CheckSize_008447c0 ====


/* private: bool  util__Stack_L_classutil__Maybe_L_structutil__AABB_L_structutil__Vec2_L_int_G__G___G__G___CheckSize(int) */

bool 
util__Stack_class_util__Maybe_struct_util__AABB_struct_util__Vec2_int_________CheckSize
          (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined4 *puStack_c;
  bool bStack_5;
  
  uVar10 = *(uint *)(this + 4);
  bVar12 = -1 < (int)uVar10;
  if (!bVar12) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)this;
    *(undefined4 *)(this + 4) = 0;
    uVar10 = 0;
  }
  bVar3 = (int)uVar10 < 0x40000000;
  bVar7 = !bVar3;
  if (bVar7) {
    *(undefined4 *)(this + 4) = 0x3fffffff;
    *(int *)(this + 0xc) = *(int *)this + -0x14;
    uVar10 = 0x3fffffff;
  }
  bStack_5 = !bVar7 && bVar12;
  uVar11 = *(uint *)(this + 8);
  if ((int)uVar10 <= (int)uVar11) {
    return bVar3 && bVar12;
  }
  if (uVar11 == 0) {
    *(uint *)(this + 8) = uVar10;
    uVar11 = uVar10;
  }
  if ((int)uVar11 < (int)uVar10) {
    do {
      uVar11 = uVar11 * 2;
    } while ((int)uVar11 < (int)uVar10);
    *(uint *)(this + 8) = uVar11;
  }
  if (0x3fffffff < (int)uVar11) {
    *(undefined4 *)(this + 8) = 0x3fffffff;
    uVar11 = 0x3fffffff;
  }
  puStack_c = (undefined4 *)0x0;
  if (0 < (int)uVar11) {
    puStack_c = (undefined4 *)
                port_op_new(-(uint)((int)((ulonglong)uVar11 * 0x14 >> 0x20) != 0) |
                               (uint)((ulonglong)uVar11 * 0x14));
    if (puStack_c == (undefined4 *)0x0) {
      puStack_c = (undefined4 *)0x0;
    }
    else if (uVar11 != 0) {
      puVar8 = puStack_c + 1;
      do {
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
        uVar11 = uVar11 - 1;
        puVar8 = puVar8 + 5;
      } while (uVar11 != 0);
    }
    iVar2 = *(int *)(this + 4);
    puVar8 = *(undefined4 **)this;
    puVar9 = puStack_c;
    if (puVar8 != puVar8 + param_1 * 5) {
      do {
        if (puVar9 == puStack_c + iVar2 * 5) break;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        *puVar9 = *puVar8;
        puVar9[1] = uVar4;
        puVar9[2] = uVar5;
        puVar9[3] = uVar6;
        puVar1 = puVar8 + 4;
        puVar8 = puVar8 + 5;
        puVar9[4] = *puVar1;
        puVar9 = puVar9 + 5;
      } while (puVar8 != (undefined4 *)(*(int *)this + param_1 * 0x14));
    }
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  *(undefined4 **)this = puStack_c;
  *(undefined4 **)(this + 0xc) = puStack_c + *(int *)(this + 4) * 5;
  return bStack_5;
}





//==== 00844930 Clear_00844930 ====


/* public: virtual void  util__Darray_L_structGraphics__ShadowMatrixInfo_G___Clear(void) */

void 
util__Darray_struct_Graphics__ShadowMatrixInfo___Clear
          (Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00844950 FromFrustum ====


/* public: static struct util__Matrix4x4_L_double_G_ const __cdecl
   util__Matrix4x4_double___FromFrustum(double,double,double,double,double,double) */

Matrix4x4_L_double_G_ * __cdecl
util__Matrix4x4_double___FromFrustum
          (Matrix4x4_L_double_G_ *__return_storage_ptr__,double param_1,double param_2,double param_3,
          double param_4,double param_5,double param_6)

{
  double dVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined4 in_stack_00000008;
  
  iVar4 = 0;
  pdVar3 = __return_storage_ptr__->Data;
  do {
    iVar2 = iVar4 + 1;
    (*(uint64_t*)&(auVar8)) = CONCAT44(-(uint)(iVar4 == 1),-(uint)(iVar4 == 0));
    (*(uint32_t*)((char*)&(auVar8)+8)) = -(uint)(iVar4 == 0);
    (*(uint32_t *)((char *)&(auVar8) + 12)) = -(uint)(iVar4 == 0);
    (*(uint32_t*)((char*)&(auVar5)+8)) = (*(uint32_t*)((char*)&(auVar8)+8));
    (*(uint64_t*)&(auVar5)) = (*(uint64_t*)&(auVar8));
    (*(uint32_t *)((char *)&(auVar5) + 12)) = (*(uint32_t *)((char *)&(auVar8) + 12));
    *(uint32_t *)&auVar5 = (*(uint32_t *)&auVar8 & 0x00000001u);
    *pdVar3 = (double)(*(uint32_t*)&(auVar5));
    pdVar3[1] = (double)(*(uint32_t*)((char*)&(auVar5)+4));
    (*(uint64_t*)&(auVar9)) = CONCAT44(-(uint)(iVar4 == 3),-(uint)(iVar4 == 2));
    (*(uint32_t*)((char*)&(auVar9)+8)) = -(uint)(iVar4 == 0);
    (*(uint32_t *)((char *)&(auVar9) + 12)) = -(uint)(iVar4 == 0);
    (*(uint32_t*)((char*)&(auVar6)+8)) = (*(uint32_t*)((char*)&(auVar9)+8));
    (*(uint64_t*)&(auVar6)) = (*(uint64_t*)&(auVar9));
    (*(uint32_t *)((char *)&(auVar6) + 12)) = (*(uint32_t *)((char *)&(auVar9) + 12));
    *(uint32_t *)&auVar5 = (*(uint32_t *)&auVar9 & 0x00000001u);
    pdVar3[2] = (double)(*(uint32_t*)&(auVar5));
    pdVar3[3] = (double)(*(uint32_t*)((char*)&(auVar5)+4));
    iVar4 = iVar2;
    pdVar3 = pdVar3 + 4;
  } while (iVar2 < 4);
  iVar4 = 4;
  pdVar3 = __return_storage_ptr__->Data + 2;
  do {
    *(undefined4 *)((Matrix4x4_L_double_G_ *)(pdVar3 + -2))->Data = 0;
    *(undefined4 *)((int)pdVar3 + -0xc) = 0;
    *(undefined4 *)(pdVar3 + -1) = 0;
    *(undefined4 *)((int)pdVar3 + -4) = 0;
    *(undefined4 *)pdVar3 = 0;
    *(undefined4 *)((int)pdVar3 + 4) = 0;
    *(undefined4 *)(pdVar3 + 1) = 0;
    *(undefined4 *)((int)pdVar3 + 0xc) = 0;
    iVar4 = iVar4 + -1;
    pdVar3 = pdVar3 + 4;
  } while (iVar4 != 0);
  dVar10 = (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4))) -
           (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  dVar1 = (double)CONCAT44((*(uint32_t*)&(param_5)),(*(uint32_t*)((char*)&(param_4)+4)));
  __return_storage_ptr__->Data[8] =
       ((double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) +
       (double)CONCAT44((*(uint32_t*)&(param_2)),(*(uint32_t*)((char*)&(param_1)+4)))) / dVar10;
  dVar7 = (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4))) -
          (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4)));
  __return_storage_ptr__->Data[0] = (dVar1 + dVar1) / dVar10;
  dVar10 = (double)CONCAT44((*(uint32_t*)&(param_6)),(*(uint32_t*)((char*)&(param_5)+4)));
  __return_storage_ptr__->Data[9] =
       ((double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4))) +
       (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)))) / dVar7;
  __return_storage_ptr__->Data[5] = (dVar1 + dVar1) / dVar7;
  __return_storage_ptr__->Data[10] = -((dVar1 + dVar10) / (dVar10 - dVar1));
  __return_storage_ptr__->Data[0xb] = -1.0;
  __return_storage_ptr__->Data[0xe] = (dVar10 * -2.0 * dVar1) / (dVar10 - dVar1);
  return __return_storage_ptr__;
}





//==== 00844ab0 FromOrtho2D ====


/* public: static struct util__Matrix4x4_L_double_G_ const __cdecl
   util__Matrix4x4_double___FromOrtho2D(struct util__Vec2_L_double_G_,bool) */

Matrix4x4_L_double_G_ * __cdecl
util__Matrix4x4_double___FromOrtho2D
          (Matrix4x4_L_double_G_ *__return_storage_ptr__,Vec4_L_double_G_ param_1,bool param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined4 in_stack_00000008;
  
  if ((*(uint8_t *)((char *)&(param_1.Y) + 4)) == '\0') {
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)(*(uint64_t*)((char*)&(param_1)+4));
    (*(uint64_t*)((char*)&(param_1)+4)) = 0.0;
  }
  iVar3 = 0;
  pdVar4 = __return_storage_ptr__->Data;
  do {
    iVar2 = iVar3 + 1;
    *pdVar4 = (double)(iVar3 == 0);
    pdVar4[1] = (double)(iVar3 == 1);
    pdVar4[2] = (double)(iVar3 == 2);
    pdVar4[3] = (double)(iVar3 == 3);
    iVar3 = iVar2;
    pdVar4 = pdVar4 + 4;
  } while (iVar2 < 4);
  iVar3 = 0;
  do {
    puVar1 = (undefined4 *)((int)__return_storage_ptr__->Data + iVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = (undefined4 *)((int)__return_storage_ptr__->Data + iVar3 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar3 = iVar3 + 0x20;
  } while (iVar3 < 0x80);
  dVar5 = (double)CONCAT44(param_1.X,in_stack_00000008) - 0.0;
  __return_storage_ptr__->Data[0] = 2.0 / dVar5;
  __return_storage_ptr__->Data[0xc] =
       -(((double)CONCAT44(param_1.X,in_stack_00000008) + 0.0) / dVar5);
  __return_storage_ptr__->Data[10] = -1.0;
  __return_storage_ptr__->Data[5] = 2.0 / ((double)(*(uint64_t*)((char*)&(param_1)+4)) - dVar6);
  __return_storage_ptr__->Data[0xd] =
       -((dVar6 + (double)(*(uint64_t*)((char*)&(param_1)+4))) / ((double)(*(uint64_t*)((char*)&(param_1)+4)) - dVar6));
  *(undefined4 *)(__return_storage_ptr__->Data + 0xe) = 0;
  *(undefined4 *)((int)__return_storage_ptr__->Data + 0x74) = 0x80000000;
  *(undefined4 *)(__return_storage_ptr__->Data + 0xf) = 0;
  *(undefined4 *)((int)__return_storage_ptr__->Data + 0x7c) = 0x3ff00000;
  return __return_storage_ptr__;
}





//==== 00844c00 FromScale ====


/* public: static struct util__Matrix4x4_L_double_G_ const __cdecl
   util__Matrix4x4_double___FromScale(struct util__Vec3_L_double_G_) */

Matrix4x4_L_double_G_ * __cdecl
util__Matrix4x4_double___FromScale(Matrix4x4_L_double_G_ *__return_storage_ptr__,Vec4_L_double_G_ param_1)

{
  int iVar1;
  int iVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_stack_00000008;
  
  iVar1 = 0;
  pdVar3 = __return_storage_ptr__->Data;
  do {
    iVar2 = iVar1 + 1;
    (*(uint64_t*)&(auVar7)) = CONCAT44(-(uint)(iVar1 == 1),-(uint)(iVar1 == 0));
    (*(uint32_t*)((char*)&(auVar7)+8)) = -(uint)(iVar1 == 0);
    (*(uint32_t *)((char *)&(auVar7) + 12)) = -(uint)(iVar1 == 0);
    (*(uint32_t*)((char*)&(auVar5)+8)) = (*(uint32_t*)((char*)&(auVar7)+8));
    (*(uint64_t*)&(auVar5)) = (*(uint64_t*)&(auVar7));
    (*(uint32_t *)((char *)&(auVar5) + 12)) = (*(uint32_t *)((char *)&(auVar7) + 12));
    *(uint32_t *)&auVar5 = (*(uint32_t *)&auVar7 & 0x00000001u);
    *pdVar3 = (double)(*(uint32_t*)&(auVar5));
    pdVar3[1] = (double)(*(uint32_t*)((char*)&(auVar5)+4));
    (*(uint64_t*)&(auVar8)) = CONCAT44(-(uint)(iVar1 == 3),-(uint)(iVar1 == 2));
    (*(uint32_t*)((char*)&(auVar8)+8)) = -(uint)(iVar1 == 0);
    (*(uint32_t *)((char *)&(auVar8) + 12)) = -(uint)(iVar1 == 0);
    (*(uint32_t*)((char*)&(auVar6)+8)) = (*(uint32_t*)((char*)&(auVar8)+8));
    (*(uint64_t*)&(auVar6)) = (*(uint64_t*)&(auVar8));
    (*(uint32_t *)((char *)&(auVar6) + 12)) = (*(uint32_t *)((char *)&(auVar8) + 12));
    *(uint32_t *)&auVar5 = (*(uint32_t *)&auVar8 & 0x00000001u);
    pdVar3[2] = (double)(*(uint32_t*)&(auVar5));
    pdVar3[3] = (double)(*(uint32_t*)((char*)&(auVar5)+4));
    iVar1 = iVar2;
    pdVar3 = pdVar3 + 4;
  } while (iVar2 < 4);
  iVar1 = 0;
  do {
    dVar4 = (double)CONCAT44(param_1.X,in_stack_00000008);
    if (((iVar1 != 0) && (dVar4 = (double)(*(uint64_t*)((char*)&(param_1)+4)), iVar1 != 1)) &&
       (dVar4 = (double)CONCAT44(param_1.X,in_stack_00000008), iVar1 == 2)) {
      dVar4 = (double)(*(uint64_t *)((char *)&(param_1) + 12));
    }
    iVar2 = iVar1 + 1;
    __return_storage_ptr__->Data[iVar1 * 5] = dVar4;
    iVar1 = iVar2;
  } while (iVar2 < 3);
  return __return_storage_ptr__;
}





//==== 00844ce0 FromTranslation ====


/* public: static struct util__Matrix4x4_L_double_G_ const __cdecl
   util__Matrix4x4_double___FromTranslation(struct util__Vec3_L_double_G_) */

Matrix4x4_L_double_G_ * __cdecl
util__Matrix4x4_double___FromTranslation
          (Matrix4x4_L_double_G_ *__return_storage_ptr__,Vec4_L_double_G_ param_1)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 in_stack_00000008;
  
  iVar3 = 0;
  pdVar2 = __return_storage_ptr__->Data;
  do {
    iVar1 = iVar3 + 1;
    (*(uint64_t*)&(auVar7)) = CONCAT44(-(uint)(iVar3 == 1),-(uint)(iVar3 == 0));
    (*(uint32_t*)((char*)&(auVar7)+8)) = -(uint)(iVar3 == 0);
    (*(uint32_t *)((char *)&(auVar7) + 12)) = -(uint)(iVar3 == 0);
    (*(uint32_t*)((char*)&(auVar5)+8)) = (*(uint32_t*)((char*)&(auVar7)+8));
    (*(uint64_t*)&(auVar5)) = (*(uint64_t*)&(auVar7));
    (*(uint32_t *)((char *)&(auVar5) + 12)) = (*(uint32_t *)((char *)&(auVar7) + 12));
    *(uint32_t *)&auVar5 = (*(uint32_t *)&auVar7 & 0x00000001u);
    *pdVar2 = (double)(*(uint32_t*)&(auVar5));
    pdVar2[1] = (double)(*(uint32_t*)((char*)&(auVar5)+4));
    (*(uint64_t*)&(auVar8)) = CONCAT44(-(uint)(iVar3 == 3),-(uint)(iVar3 == 2));
    (*(uint32_t*)((char*)&(auVar8)+8)) = -(uint)(iVar3 == 0);
    (*(uint32_t *)((char *)&(auVar8) + 12)) = -(uint)(iVar3 == 0);
    (*(uint32_t*)((char*)&(auVar6)+8)) = (*(uint32_t*)((char*)&(auVar8)+8));
    (*(uint64_t*)&(auVar6)) = (*(uint64_t*)&(auVar8));
    (*(uint32_t *)((char *)&(auVar6) + 12)) = (*(uint32_t *)((char *)&(auVar8) + 12));
    *(uint32_t *)&auVar5 = (*(uint32_t *)&auVar8 & 0x00000001u);
    pdVar2[2] = (double)(*(uint32_t*)&(auVar5));
    pdVar2[3] = (double)(*(uint32_t*)((char*)&(auVar5)+4));
    iVar3 = iVar1;
    pdVar2 = pdVar2 + 4;
  } while (iVar1 < 4);
  iVar3 = 0;
  do {
    dVar4 = (double)CONCAT44(param_1.X,in_stack_00000008);
    if (((iVar3 != 0) && (dVar4 = (double)(*(uint64_t*)((char*)&(param_1)+4)), iVar3 != 1)) &&
       (dVar4 = (double)CONCAT44(param_1.X,in_stack_00000008), iVar3 == 2)) {
      dVar4 = (double)(*(uint64_t *)((char *)&(param_1) + 12));
    }
    __return_storage_ptr__->Data[iVar3 + 0xc] = dVar4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return __return_storage_ptr__;
}





//==== 00844dc0 Get_00844dc0 ====


/* public: static class OptionsSection__Graphics & __cdecl Graphics__Get(void) */

OptionsSection__Graphics * __cdecl Graphics__Get(void)

{
  return &GlobalState;
}





//==== 00844dd0 GetCurrentTransformMatrix ====


/* public: struct util__Matrix4x4_L_double_G_ __thiscall Graphics__GetCurrentTransformMatrix(void)const
    */

Matrix4x4_L_double_G_ * __thiscall
Graphics__GetCurrentTransformMatrix(OptionsSection__Graphics *this,Matrix4x4_L_double_G_ *__return_storage_ptr__)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  Matrix4x4_L_double_G_ *pMVar5;
  double adStack_84 [16];
  
  if ((((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Size == 0) {
    pdVar2 = adStack_84;
    iVar4 = 0;
    do {
      iVar3 = 0;
      do {
        iVar1 = iVar3 + 2;
        *pdVar2 = (double)(iVar3 == iVar4);
        pdVar2[1] = (double)(iVar3 + 1 == iVar4);
        pdVar2 = pdVar2 + 2;
        iVar3 = iVar1;
      } while (iVar1 < 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
  }
  else {
    iVar4 = (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Size;
    if (iVar4 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa9,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar4 = (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Size;
    }
    pMVar5 = (((struct Graphics *)(uintptr_t)(this))->TransformationMatrix).Data + iVar4 + -1;
    pdVar2 = adStack_84;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pdVar2 = *(undefined4 *)pMVar5->Data;
      pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
      pdVar2 = (double *)((int)pdVar2 + 4);
    }
  }
  pdVar2 = adStack_84;
  pMVar5 = __return_storage_ptr__;
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pMVar5->Data = *(undefined4 *)pdVar2;
    pdVar2 = (double *)((int)pdVar2 + 4);
    pMVar5 = (Matrix4x4_L_double_G_ *)((int)pMVar5->Data + 4);
  }
  return __return_storage_ptr__;
}





//==== 00844eb0 GetMinimumResolutionScalingFactor ====


/* double __cdecl GetMinimumResolutionScalingFactor(void) */

double __cdecl GetMinimumResolutionScalingFactor(void)

{
  double dVar1;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  
  dStack_24 = (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).X / (double)(*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X;
  dStack_1c = (double)(*(struct Quaternion_L_double_G_ *)(MinimumScreenResolution)).Y / (double)(*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).Y;
  dStack_14 = util__Abs(&dStack_1c);
  dVar1 = util__Abs(&dStack_24);
  if ((dStack_14 < dVar1) && (dStack_14 < dVar1)) {
    dStack_24 = dStack_1c;
  }
  if (dStack_24 <= 0.0) {
    dStack_24 = 0.0;
  }
  if (1.0 <= dStack_24) {
    dStack_24 = 1.0;
  }
  return dStack_24;
}





//==== 00844f60 GetScreenPosition_00844f60 ====


/* public: static struct util__Vec3_L_double_G_ __cdecl Graphics__GetScreenPosition(struct
   util__Vec3_L_double_G_) */

Vec3_L_double_G_ * __cdecl
Graphics__GetScreenPosition(Vec3_L_double_G_ *__return_storage_ptr__,Vec4_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  double *pdVar1;
  Matrix4x4_L_double_G_ *pMVar2;
  int iVar3;
  double *pdVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  Matrix4x4_L_double_G_ MStack_c8;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (*(uint32_t*)((char*)&(uStack_48)+4)) = param_1.X;
  uStack_40 = param_1.Y;
  uStack_3c = param_1.Y;
  uStack_38 = (*(uint64_t *)((char *)&(param_1) + 12));
  uStack_30 = 0x3ff0000000000000;
  pMVar2 = util__Matrix4x4_double___operator
                     (&(*(struct Graphics *)&(GlobalState)).CustomProjection,&MStack_c8,&(*(struct Graphics *)&(GlobalState)).WorldProjection);
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  iVar5 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  do {
    dVar7 = *(double *)(&uStack_28 + iVar5 * 2);
    pdVar4 = pMVar2->Data + iVar5;
    iVar3 = 0;
    do {
      pdVar1 = (double *)(&uStack_48 + iVar3);
      iVar3 = iVar3 + 1;
      dVar6 = *pdVar4;
      pdVar4 = pdVar4 + 4;
      dVar7 = dVar7 + *pdVar1 * dVar6;
    } while (iVar3 < 4);
    *(double *)(&uStack_28 + iVar5 * 2) = dVar7;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  dVar7 = (double)CONCAT44(uStack_c,uStack_10);
  dVar6 = (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 4));
  __return_storage_ptr__->X =
       ((double)CONCAT44(uStack_24,uStack_28) / dVar7 + 1.0) * 0.5 *
       (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 0));
  __return_storage_ptr__->Y = (1.0 - (double)CONCAT44(uStack_1c,uStack_20) / dVar7) * 0.5 * dVar6;
  __return_storage_ptr__->Z = ((double)CONCAT44(uStack_14,uStack_18) / dVar7 + 1.0) * 0.5;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00845090 GetScreenRadiusFromWorldRadius ====


/* public: static double __cdecl Graphics__GetScreenRadiusFromWorldRadius(struct
   util__Vec3_L_double_G_,double) */

double __cdecl Graphics__GetScreenRadiusFromWorldRadius(Vec4_L_double_G_ param_1,double param_2)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  undefined1 auStack_24 [16];
  double dStack_14;
  double dStack_c;
  
  dStack_c = (param_1.Y - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[1]) *
             (param_1.Y - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[1]) +
             (param_1.X - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[0]) *
             (param_1.X - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[0]) +
             (param_1.Z - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[2]) *
             (param_1.Z - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[2]);
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_24,&dStack_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_14 = pMVar1->Data;
  dStack_c = (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[6] * 0.5;
  (*(uint64_t*)((char*)&(auStack_24)+8)) = (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[0xf]) + 4)) * param_2;
  dVar2 = util__Tan(&dStack_c);
  return (double)(*(uint64_t*)((char*)&(auStack_24)+8)) / (dVar2 * 2.0 * dStack_14);
}





//==== 00845180 GetScreenRay ====


/* public: static struct util__Vec3_L_double_G_ __cdecl Graphics__GetScreenRay(struct
   util__Vec2_L_double_G_) */

Vec3_L_double_G_ * __cdecl
Graphics__GetScreenRay(Vec3_L_double_G_ *__return_storage_ptr__,Vec4_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  undefined4 in_stack_00000008;
  undefined8 uStack_60;
  undefined8 uStack_58;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  char cStack_30;
  double dStack_28;
  double dStack_20;
  double dStack_18;
  char cStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  VVar1.Y = in_stack_00000008;
  *(uint32_t *)&VVar1.X = (uint32_t)(uintptr_t)(&dStack_48);
  VVar1.Y = param_1.X;
  VVar1.Z = param_1.Y;
  VVar1.Z = param_1.Y;
  VVar1.W = 0;
  UnProject(VVar1);
  VVar2.Y = in_stack_00000008;
  *(uint32_t *)&VVar2.X = (uint32_t)(uintptr_t)(&dStack_28);
  VVar2.Y = param_1.X;
  VVar2.Z = param_1.Y;
  VVar2.Z = param_1.Y;
  VVar2.W = 0xa0b5ed8d;
  UnProject(VVar2);
  if ((cStack_30 == '\0') || (cStack_10 == '\0')) {
    dStack_18 = 0.0;
    uStack_60 = 0.0;
    uStack_58 = 0.0;
  }
  else {
    uStack_60 = dStack_28 - dStack_48;
    uStack_58 = dStack_20 - dStack_40;
    dStack_18 = dStack_18 - dStack_38;
  }
  *(undefined4 *)&__return_storage_ptr__->X = (undefined4)uStack_60;
  *(undefined4 *)((int)&__return_storage_ptr__->X + 4) = (*(uint32_t*)((char*)&(uStack_60)+4));
  *(undefined4 *)&__return_storage_ptr__->Y = (undefined4)uStack_58;
  *(undefined4 *)((int)&__return_storage_ptr__->Y + 4) = (*(uint32_t*)((char*)&(uStack_58)+4));
  __return_storage_ptr__->Z = dStack_18;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00845240 GetShadowBias ====


/* public: double __thiscall Graphics__GetShadowBias(int)const  */

double __thiscall Graphics__GetShadowBias(OptionsSection__Graphics *this,int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)**(undefined4 **)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 9))(&param_1);
  return *(double *)(iVar1 + 0x100);
}





//==== 00845340 GetShadowNearFarPlanes ====


/* public: struct util__Range_L_double_G_ __thiscall Graphics__GetShadowNearFarPlanes(int)const  */

Range_L_double_G_ * __thiscall
Graphics__GetShadowNearFarPlanes(OptionsSection__Graphics *this,Range_L_double_G_ *__return_storage_ptr__,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (*(code *)**(undefined4 **)((((struct Graphics *)(uintptr_t)(this))->ViewMatrix).Data + 9))(&param_1);
  uVar1 = *(undefined4 *)(iVar4 + 0x10c);
  uVar2 = *(undefined4 *)(iVar4 + 0x110);
  uVar3 = *(undefined4 *)(iVar4 + 0x114);
  *(undefined4 *)&__return_storage_ptr__->Lower = *(undefined4 *)(iVar4 + 0x108);
  *(undefined4 *)((int)&__return_storage_ptr__->Lower + 4) = uVar1;
  *(undefined4 *)&__return_storage_ptr__->Upper = uVar2;
  *(undefined4 *)((int)&__return_storage_ptr__->Upper + 4) = uVar3;
  return __return_storage_ptr__;
}





//==== 00845370 GetStack ====


/* private: static class util__Stack_L_structFullBlendState_G_ * __cdecl
   Graphics__BlendStack__GetStack(void) */

Stack_L_struct_FullBlendState_G_ * __cdecl Graphics__BlendStack__GetStack(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
      (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[7]) + 4))) {
    _Init_thread_header((int *)((int)(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 0x3c));
    if ((*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[7]) + 4)) == -1) {
      atexit(FUN_009104b0);
      _Init_thread_footer((int *)((int)(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 0x3c));
    }
  }
  return (Stack_L_struct_FullBlendState_G_ *)((int)(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 0x2c);
}





//==== 008453d0 GetStack_008453d0 ====


/* private: static class util__Stack_L_enumCullState__Type_G_ * __cdecl
   Graphics__CullStack__GetStack(void) */

Stack_L_enum_CullState__Type_G_ * __cdecl Graphics__CullStack__GetStack(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
      (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[0]) + 0))) {
    _Init_thread_header((int *)&(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix);
    if ((*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[0]) + 0)) == -1) {
      atexit(FUN_00910470);
      _Init_thread_footer((int *)&(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix);
    }
  }
  return (Stack_L_enum_CullState__Type_G_ *)&(*(struct Graphics *)&(GlobalState)).WorldViewportSize;
}





//==== 00845430 GetStack_00845430 ====


/* private: static class util__Stack_L_enumDepthTest__Type_G_ * __cdecl
   Graphics__DepthStack__GetStack(void) */

Stack_L_enum_DepthTest__Type_G_ * __cdecl Graphics__DepthStack__GetStack(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
      (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[2]) + 4))) {
    _Init_thread_header((int *)((int)(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 0x14));
    if ((*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[2]) + 4)) == -1) {
      atexit(FUN_00910490);
      _Init_thread_footer((int *)((int)(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 0x14));
    }
  }
  return (Stack_L_enum_DepthTest__Type_G_ *)((int)(*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 4);
}





//==== 00845490 GetStack_00845490 ====


/* private: static class util__Stack_L_classutil__Maybe_L_structutil__AABB_L_structutil__Vec2_L_int_G__G__G___G_ * __cdecl Graphics__ScissorStack__GetStack(void) */

Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ * __cdecl
Graphics__ScissorStack__GetStack(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
      (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[5]) + 0))) {
    _Init_thread_header((int *)((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 5));
    if ((*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data[5]) + 0)) == -1) {
      atexit(FUN_009104d0);
      _Init_thread_footer((int *)((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 5));
    }
  }
  return (Stack_L_class_util__Maybe_L_struct_util__AABB_L_struct_util__Vec2_L_int_G___G___G___G_ *)
         ((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 3);
}





//==== 008454f0 GetStack_008454f0 ====


/* private: static class util__Stack_L_structutil__tuple2_L_unsignedint_CenumTextureType__Type_G__G_ *
   __cdecl Graphics__TextureStack__GetStack(int) */

Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ * __cdecl
Graphics__TextureStack__GetStack(int)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *pSVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  glGetIntegerv(0x8872,&iStack_c);
  iVar3 = 0x10;
  if (iStack_c < 0x10) {
    iVar3 = iStack_c;
  }
  if (param_1 < 1) {
    param_1 = 0;
  }
  if (iVar3 + -1 <= param_1) {
    param_1 = iVar3 + -1;
  }
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00989cb8) {
    _Init_thread_header(&DAT_00989cb8);
    if (DAT_00989cb8 == -1) {
      pSVar2 = (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *)
               ((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 8);
      iVar3 = 0x10;
      do {
        util__Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type_____Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type(pSVar2,0);
        pSVar2 = pSVar2 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      atexit(FUN_009104f0);
      _Init_thread_footer(&DAT_00989cb8);
    }
  }
  if (DAT_00989cbc == '\0') {
    iVar3 = 0;
    pSVar2 = (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *)
             ((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + 8);
    while( true ) {
      glGetIntegerv(0x8872,&iStack_c);
      iVar1 = 0x10;
      if (iStack_c < 0x10) {
        iVar1 = iStack_c;
      }
      if (iVar1 <= iVar3) break;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_10 = 0;
      uStack_14 = 0;
      util__Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type_____operator__o2
                (pSVar2,(Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *)
                        &uStack_1c);
      iVar3 = iVar3 + 1;
      uStack_1c = 0;
      pSVar2 = pSVar2 + 0x10;
    }
    DAT_00989cbc = '\x01';
  }
  pSVar2 = (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *)
           ((*(struct Graphics *)&(GlobalState)).ShadowModelViewMatrix.Data + param_1 * 2 + 8);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pSVar2;
}





//==== 00845630 GetWindowToFramebufferScale ====


/* struct util__Vec2_L_double_G_ __cdecl GetWindowToFramebufferScale(void) */

Vec2_L_double_G_ * __cdecl GetWindowToFramebufferScale(Vec2_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(*(struct Quaternion_L_double_G_ *)(WindowDimensions)).Y;
  dVar1 = (double)(*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4));
  __return_storage_ptr__->X =
       (double)(*(struct Quaternion_L_double_G_ *)(WindowDimensions)).X / (double)(*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0));
  __return_storage_ptr__->Y = dVar2 / dVar1;
  return __return_storage_ptr__;
}





//==== 00845680 GetWorldRadiusFromScreenRadius ====


/* public: static double __cdecl Graphics__GetWorldRadiusFromScreenRadius(struct
   util__Vec3_L_double_G_,double) */

double __cdecl Graphics__GetWorldRadiusFromScreenRadius(Vec4_L_double_G_ param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dStack_c;
  
  dStack_c = (param_1.Y - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[1]) * (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[4] +
             (param_1.X - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[0]) * (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[3] +
             (param_1.Z - (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[2]) * (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[5];
  dVar1 = util__Abs(&dStack_c);
  if ((*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[0xf]) + 4)) < 1) {
    return 0.0;
  }
  dStack_c = (*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[6] * 0.5;
  dVar2 = util__Tan(&dStack_c);
  return (param_2 / (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[0xf]) + 4))) * (dVar2 + dVar2) * dVar1;
}





//==== 00845750 IsInsideADrawStack ====


/* public: static bool __cdecl Graphics__IsInsideADrawStack(void) */

bool __cdecl Graphics__IsInsideADrawStack(void)

{
  return (*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack;
}





//==== 00845810 LoadDrawMode ====


/* public: static void __cdecl Graphics__LoadDrawMode(enum DrawMode__Type) */

void __cdecl Graphics__LoadDrawMode(int)

{
  undefined4 uVar1;
  undefined4 uStack_1c;
  
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0xa1,
                    "!Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  if ((*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size != 0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0xa2,
                    "Graphics__Get().TransformationMatrix.Num() == 0",(char *)0x0);
    DebugBreak();
  }
  (*(struct Graphics *)&(GlobalState)).CurrentDrawMode = param_1;
  if (param_1 == DrawMode__World) {
    uStack_1c = (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 0));
    uVar1 = (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 4));
  }
  else {
    if (param_1 != DrawMode__UI) goto LAB_008458d1;
    uStack_1c = (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[8]) + 0));
    uVar1 = (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[8]) + 4));
  }
  glViewport(0,0,uStack_1c,uVar1);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0xb1);
LAB_008458d1:
  VertexBufferObjectInterface__ClearLastBufferRendered();
  return;
}





//==== 008458e0 Normal ====


/* public: static void __cdecl Graphics__Normal(struct util__Vec3_L_double_G_) */

void __cdecl Graphics__Normal(Vec4_L_double_G_ param_1)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x56,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glNormal3d(param_1.X,param_1.Y,param_1.Z,param_1.Z,param_1.W);
  return;
}





//==== 00845930 PeekState ====


/* private: static struct util__tuple2_L_unsignedint_CenumTextureType__Type_G_ __cdecl
   Graphics__TextureStack__PeekState(int) */

void __cdecl Graphics__TextureStack__PeekState(int)

{
  Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *pSVar1;
  int iVar2;
  int in_stack_00000008;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  pSVar1 = (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *)(uintptr_t)(GetStack(in_stack_00000008));
  if (*(int *)(pSVar1 + 4) < 1) {
    uStack_c = 0xffffffff;
    uStack_8 = 0;
  }
  else {
    pSVar1 = (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *)(uintptr_t)(GetStack(in_stack_00000008));
    iVar2 = *(int *)(pSVar1 + 4);
    if (iVar2 < 1) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                      "Size > 0",(char *)0x0);
      DebugBreak();
      iVar2 = *(int *)(pSVar1 + 4);
    }
    uStack_c = *(undefined4 *)(*(int *)pSVar1 + -8 + iVar2 * 8);
    uStack_8 = *(undefined4 *)(*(int *)pSVar1 + -4 + iVar2 * 8);
  }
  *(undefined4 *)param_1 = uStack_c;
  *(undefined4 *)(param_1 + 4) = uStack_8;
  return;
}





//==== 008459c0 Push_008459c0 ====


/* public: bool  util__Stack_L_structFullBlendState_G___Push(struct FullBlendState const &)
    */

bool __thiscall
util__Stack_struct_FullBlendState___Push(Stack_L_struct_FullBlendState_G_ *this,FullBlendState *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  iVar2 = *(int *)(this + 4);
  iVar1 = iVar2 + 1;
  *(int *)(this + 4) = iVar1;
  *(int *)(this + 0xc) = *(int *)this + iVar1 * 0x1c;
  bVar6 = CheckSize(this,iVar2);
  if (!bVar6) {
  }
  iVar1 = *(int *)this + *(int *)(this + 4) * 0x1c;
  uVar3 = (param_1->Color).Source;
  uVar4 = (param_1->Color).Dest;
  uVar5 = (param_1->Color).Equation;
  *(int *)(iVar1 + -0x1c) = param_1->State;
  *(uint *)(iVar1 + -0x18) = uVar3;
  *(uint *)(iVar1 + -0x14) = uVar4;
  *(uint *)(iVar1 + -0x10) = uVar5;
  *(undefined8 *)(iVar1 + -0xc) = *(undefined8 *)&param_1->Alpha;
  *(uint *)(iVar1 + -4) = (param_1->Alpha).Equation;
  return true;
}





//==== 00845a30 Rotate ====


/* public: static void __cdecl Graphics__Rotate(double) */

void __cdecl Graphics__Rotate(double)

{
  undefined8 stack0xfffffffc;
  Quaternion_L_double_G_ QVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  
  uVar2 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar6 = 0;
  dVar3 = param_1 * 0.5;
  dVar4 = dVar3;
  libm_sse2_sin_precise(0.0);
  dVar5 = dVar4 * 0.0;
  libm_sse2_cos_precise(dVar4);
  QVar1.Y = SUB84(dVar5,0);
  QVar1.X = dVar5;
  QVar1.Z = (int)((ulonglong)dVar5 >> 0x20);
  QVar1.Z = SUB84(dVar4,0);
  QVar1.W = (int)((ulonglong)dVar4 >> 0x20);
  QVar1.W = SUB84(dVar3,0);
  (*(uint32_t *)((char *)&(QVar1.W) + 4)) = (int)((ulonglong)dVar3 >> 0x20);
  Rotate(QVar1);
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00845ab0 Rotate_00845ab0 ====


/* public: static void __cdecl Graphics__Rotate(struct util__Quaternion_L_double_G_) */

void __cdecl Graphics__Rotate__o3(Quaternion_L_double_G_ param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  int iVar2;
  Matrix4x4_L_double_G_ *pMVar3;
  double *pdVar4;
  int iVar5;
  Matrix4x4_L_double_G_ *pMVar6;
  double dVar7;
  Matrix4x4_L_double_G_ MStack_118;
  double dStack_98;
  double dStack_90;
  Matrix4x4_L_double_G_ MStack_88;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x2f,
                    "!Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  pdVar4 = MStack_88.Data;
  iVar5 = 0;
  do {
    iVar1 = 0;
    do {
      iVar2 = iVar1 + 2;
      *pdVar4 = (double)(iVar1 == iVar5);
      pdVar4[1] = (double)(iVar1 + 1 == iVar5);
      pdVar4 = pdVar4 + 2;
      iVar1 = iVar2;
    } while (iVar2 < 4);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  MStack_88.Data[1] = (param_1.Z + param_1.Z) * param_1.W;
  dStack_98 = param_1.Y * param_1.Y + param_1.Y * param_1.Y;
  MStack_88.Data[5] = param_1.Z * param_1.Z + param_1.Z * param_1.Z;
  MStack_88.Data[0] = (1.0 - dStack_98) - MStack_88.Data[5];
  dVar7 = param_1.X * 2.0 * param_1.Y;
  MStack_88.Data[0xe] = 0.0;
  MStack_88.Data[3] = 0.0;
  MStack_88.Data[2] = (param_1.Y + param_1.Y) * param_1.W;
  MStack_88.Data[4] = dVar7 - MStack_88.Data[1];
  MStack_88.Data[7] = 0.0;
  MStack_88.Data[1] = MStack_88.Data[1] + dVar7;
  MStack_88.Data[0xb] = 0.0;
  MStack_88.Data[8] = param_1.X * 2.0 * param_1.Z + MStack_88.Data[2];
  (*(undefined4 *)((char *)&(MStack_88.Data[0xc]) + 0)) = 0;
  (*(undefined4 *)((char *)&(MStack_88.Data[0xc]) + 4)) = 0;
  (*(undefined4 *)((char *)&(MStack_88.Data[0xd]) + 0)) = 0;
  (*(undefined4 *)((char *)&(MStack_88.Data[0xd]) + 4)) = 0;
  MStack_88.Data[6] = (param_1.X + param_1.X) * param_1.W;
  MStack_88.Data[10] = 1.0 - (param_1.X * param_1.X + param_1.X * param_1.X);
  MStack_88.Data[2] = (param_1.X + param_1.X) * param_1.Z - MStack_88.Data[2];
  MStack_88.Data[5] = MStack_88.Data[10] - MStack_88.Data[5];
  MStack_88.Data[10] = MStack_88.Data[10] - dStack_98;
  dStack_90 = (param_1.Y + param_1.Y) * param_1.Z;
  MStack_88.Data[9] = dStack_90 - MStack_88.Data[6];
  MStack_88.Data[6] = MStack_88.Data[6] + dStack_90;
  MStack_88.Data[0xf] = 1.0;
  if ((*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size < 1) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\stack.inl",0xa2,
                    "Size > 0",(char *)0x0);
    DebugBreak();
  }
  pMVar6 = (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Data + (*(struct Graphics *)&(GlobalState)).TransformationMatrix.Size + -1;
  pMVar3 = (Matrix4x4_L_double_G_ *)(uintptr_t)(util__Matrix4x4_L_double_G___op_mul(&MStack_88,&MStack_118,pMVar6));
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pMVar6->Data = *(undefined4 *)pMVar3->Data;
    pMVar3 = (Matrix4x4_L_double_G_ *)((int)pMVar3->Data + 4);
    pMVar6 = (Matrix4x4_L_double_G_ *)((int)pMVar6->Data + 4);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00845d00 Scale ====


/* public: static void __cdecl Graphics__Scale(double) */

void __cdecl Graphics__Scale(double)

{
  Vec4_L_double_G_ VVar1;
  
  VVar1.Y = (*(uint32_t*)&(param_1));
  VVar1.X = param_1;
  VVar1.Z = (*(uint32_t*)((char*)&(param_1)+4));
  VVar1.Z = (*(uint32_t*)&(param_1));
  VVar1.W = (*(uint32_t*)((char*)&(param_1)+4));
  Scale(VVar1);
  return;
}





//==== 00845d30 Scale_00845d30 ====


/* public: static void __cdecl Graphics__Scale(struct util__Vec2_L_double_G_) */

void __cdecl Graphics__Scale__o3(Vec4_L_double_G_)

{
  Vec4_L_double_G_ VVar1;
  
  VVar1.Z = 1.0;
  (*(uint32_t *)((char *)&(VVar1) + 0)) = *(uint32_t *)&(param_1);
  Scale(VVar1);
  return;
}





//==== 00845e10 SetAll_00845e10 ====


/* public: virtual void  util__Darray_L_structGraphics__ShadowMatrixInfo_G___SetAll(struct
   Graphics__ShadowMatrixInfo const &) */

void 
util__Darray_struct_Graphics__ShadowMatrixInfo___SetAll
          (Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *this,ShadowMatrixInfo *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ShadowMatrixInfo *pSVar4;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 0x46) {
    do {
      puVar2 = puVar1 + 0x46;
      pSVar4 = param_1;
      for (iVar3 = 0x46; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar1 = *(undefined4 *)pSVar4;
        pSVar4 = pSVar4 + 4;
        puVar1 = puVar1 + 1;
      }
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)(*(int *)(this + 8) * 0x118 + *(int *)(this + 4)));
  }
  return;
}





//==== 00845e60 SetDrawBuffers ====


/* public: static void __cdecl Graphics__SetDrawBuffers(int) */

void __cdecl Graphics__SetDrawBuffers(int)

{
  undefined8 stack0xfffffffc;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (((0 < param_1) || (param_1 < 4)) && ((4 < param_1 || (param_1 < 0)))) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0xb9,
                    "Between(Count, 0, 4)",(char *)0x0);
    DebugBreak();
  }
  uStack_18 = 0x8ce0;
  uStack_14 = 0x8ce1;
  uStack_10 = 0x8ce2;
  uStack_c = 0x8ce3;
  if (param_1 < 1) {
    uStack_18 = 0;
  }
  if (param_1 < 2) {
    uStack_14 = 0;
  }
  if (param_1 < 3) {
    uStack_10 = 0;
  }
  if (param_1 < 4) {
    uStack_c = 0;
  }
  (*___glewDrawBuffers)(4,&uStack_18);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0xbe);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00845f20 SetShadowMatrix_00845f20 ====


/* public: static void __cdecl Graphics__SetShadowMatrix(int,double,double,double,struct
   util__Vec3_L_double_G_,struct util__Vec3_L_double_G_,double) */

void __cdecl
Graphics__SetShadowMatrix__o2
          (int param_1,double param_2,double param_3,double param_4,Vec4_L_double_G_ param_5,
          Vec4_L_double_G_ param_6,double param_7)

{
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  Vec4_L_double_G_ VVar4;
  undefined4 *puVar5;
  Matrix4x4_L_double_G_ *pMVar6;
  Quaternion_L_double_G_ *this;
  Matrix4x4_L_double_G_ *pMVar7;
  int iVar8;
  double dVar9;
  undefined4 in_stack_00000008;
  int *piVar10;
  Matrix4x4_L_double_G_ MStack_130;
  Quaternion_L_double_G_ QStack_b0;
  Matrix4x4_L_double_G_ MStack_90;
  double dStack_10;
  undefined4 *puStack_8;
  
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideAFrame) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x78,
                    "!Graphics__Get().IsCurrentlyInsideAFrame",(char *)0x0);
    DebugBreak();
  }
  if ((*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack != false) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x79,
                    "!Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  piVar10 = &param_1;
  puVar5 = (undefined4 *)(*(code *)(*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[9]) + 0)))();
  dStack_10 = (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4))) +
              (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)));
  dVar9 = (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4))) -
          (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)));
  (*(uint32_t*)((char*)&(param_3)+4)) = SUB84(dVar9,0);
  (*(uint32_t*)&(param_4)) = (undefined4)((ulonglong)dVar9 >> 0x20);
  puStack_8 = puVar5;
  util__Matrix4x4_double___FromFrustum
            (&MStack_90,(double)(CONCAT44(in_stack_00000008,(*(uint32_t*)&(param_2))) ^ 0x80000000),
             (double)CONCAT44(in_stack_00000008,(*(uint32_t*)&(param_2))),
             (double)(CONCAT44(in_stack_00000008,(*(uint32_t*)&(param_2))) ^ 0x80000000),
             (double)CONCAT44((*(uint32_t*)((char*)&(param_3)+4)),(*(uint32_t*)&(param_2))),
             (double)CONCAT44(SUB84(dStack_10,0),(*(uint32_t*)&(param_4))),
             (double)CONCAT44(piVar10,(int)((ulonglong)dStack_10 >> 0x20)));
  pMVar7 = &MStack_90;
  for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = *(undefined4 *)pMVar7->Data;
    pMVar7 = (Matrix4x4_L_double_G_ *)((int)pMVar7->Data + 4);
    puVar5 = puVar5 + 1;
  }
  VVar3.Z = (*(uint32_t*)((char*)&(param_2)+4));
  (*(uint32_t *)((char *)&(VVar3) + 0)) = ZEXT812(0);
  VVar3.Z = (*(uint32_t*)&(param_3)) ^ 0x80000000;
  VVar3.W = *(double *)(void *)&piVar10;
  pMVar6 = util__Matrix4x4_double___FromTranslation(&MStack_90,VVar3);
  pMVar7 = &MStack_90;
  puVar5 = puStack_8 + 0x20;
  for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar5 = *(undefined4 *)pMVar6->Data;
    pMVar6 = (Matrix4x4_L_double_G_ *)((int)pMVar6->Data + 4);
    puVar5 = puVar5 + 1;
  }
  VVar1.Z = 0;
  VVar1.X = 0.0;
  VVar1.Y = 0.0;
  VVar1.W = 0x3ff00000;
  VVar2.Y = param_6.X;
  VVar2.X = param_5.W;
  VVar2.Y = param_6.Y;
  VVar2.Z = param_6.Y;
  VVar2.Z = param_6.Z;
  VVar2.W = param_6.Z;
  this = (Quaternion_L_double_G_ *)util__Quaternion_double___Quaternion_double(&QStack_b0,VVar1,VVar2);
  pMVar7 = util__Quaternion_double___To4x4Matrix(this,pMVar7);
  pMVar6 = (Matrix4x4_L_double_G_ *)(puStack_8 + 0x20);
  pMVar7 = (Matrix4x4_L_double_G_ *)(uintptr_t)(util__Matrix4x4_L_double_G___op_mul(pMVar7,&MStack_130,pMVar6));
  for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pMVar6->Data = *(undefined4 *)pMVar7->Data;
    pMVar7 = (Matrix4x4_L_double_G_ *)((int)pMVar7->Data + 4);
    pMVar6 = (Matrix4x4_L_double_G_ *)((int)pMVar6->Data + 4);
  }
  VVar4.Y = param_5.Y;
  VVar4.X = param_5.X;
  VVar4.Y = param_5.Y;
  VVar4.Z = (int)(*(uint64_t *)((char *)&(param_5) + 12));
  VVar4.Z = SUB84((*(uint64_t *)((char *)&(param_5) + 12)),4);
  VVar4.W = *(double *)(void *)&piVar10;
  pMVar7 = util__Matrix4x4_double___FromTranslation(&MStack_130,VVar4);
  pMVar6 = (Matrix4x4_L_double_G_ *)(puStack_8 + 0x20);
  pMVar7 = (Matrix4x4_L_double_G_ *)(uintptr_t)(util__Matrix4x4_L_double_G___op_mul(pMVar7,&MStack_90,pMVar6));
  dVar9 = (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)));
  for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pMVar6->Data = *(undefined4 *)pMVar7->Data;
    pMVar7 = (Matrix4x4_L_double_G_ *)((int)pMVar7->Data + 4);
    pMVar6 = (Matrix4x4_L_double_G_ *)((int)pMVar6->Data + 4);
  }
  *(ulonglong *)(puStack_8 + 0x40) = CONCAT44((*(uint32_t*)&(param_7)),param_6.W);
  if (dStack_10 < dVar9) {
    (*(uint32_t*)((char*)&(param_3)+4)) = SUB84(dStack_10,0);
    (*(uint32_t*)&(param_4)) = (undefined4)((ulonglong)dStack_10 >> 0x20);
    dStack_10 = dVar9;
  }
  *(ulonglong *)(puStack_8 + 0x42) = CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)));
  *(double *)(puStack_8 + 0x44) = dStack_10;
  return;
}





//==== 00846120 SetSize_00846120 ====


/* private: void  util__Darray_L_structGraphics__ShadowMatrixInfo_G___SetSize(int const &) */

void 
util__Darray_struct_Graphics__ShadowMatrixInfo___SetSize
          (Darray_L_struct_Graphics__ShadowMatrixInfo_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double adStack_11c [16];
  double adStack_9c [16];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
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
  iVar7 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar7 = iVar2;
  }
  if (((iVar7 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar5 = (undefined4 *)(iVar7 * 0x118 + iVar2),
     puVar5 != (undefined4 *)(*(int *)(this + 8) * 0x118 + iVar2))) {
    do {
      iVar2 = 0;
      pdVar4 = adStack_11c + 2;
      do {
        iVar3 = iVar2 + 1;
        (*(uint64_t*)&(auVar12)) = CONCAT44(-(uint)(iVar2 == 1),-(uint)(iVar2 == 0));
        (*(uint32_t*)((char*)&(auVar12)+8)) = -(uint)(iVar2 == 0);
        (*(uint32_t *)((char *)&(auVar12) + 12)) = -(uint)(iVar2 == 0);
        (*(uint32_t*)((char*)&(auVar8)+8)) = (*(uint32_t*)((char*)&(auVar12)+8));
        (*(uint64_t*)&(auVar8)) = (*(uint64_t*)&(auVar12));
        (*(uint32_t *)((char *)&(auVar8) + 12)) = (*(uint32_t *)((char *)&(auVar12) + 12));
        *(uint32_t *)&auVar8 = (*(uint32_t *)&auVar12 & 0x00000001u);
        pdVar4[-2] = (double)(*(uint32_t*)&(auVar8));
        pdVar4[-1] = (double)(*(uint32_t*)((char*)&(auVar8)+4));
        (*(uint64_t*)&(auVar13)) = CONCAT44(-(uint)(iVar2 == 3),-(uint)(iVar2 == 2));
        (*(uint32_t*)((char*)&(auVar13)+8)) = -(uint)(iVar2 == 0);
        (*(uint32_t *)((char *)&(auVar13) + 12)) = -(uint)(iVar2 == 0);
        (*(uint32_t*)((char*)&(auVar9)+8)) = (*(uint32_t*)((char*)&(auVar13)+8));
        (*(uint64_t*)&(auVar9)) = (*(uint64_t*)&(auVar13));
        (*(uint32_t *)((char *)&(auVar9) + 12)) = (*(uint32_t *)((char *)&(auVar13) + 12));
        *(uint32_t *)&auVar8 = (*(uint32_t *)&auVar13 & 0x00000001u);
        *pdVar4 = (double)(*(uint32_t*)&(auVar8));
        pdVar4[1] = (double)(*(uint32_t*)((char*)&(auVar8)+4));
        iVar2 = iVar3;
        pdVar4 = pdVar4 + 4;
      } while (iVar3 < 4);
      iVar2 = 0;
      pdVar4 = adStack_9c + 2;
      do {
        iVar3 = iVar2 + 1;
        (*(uint64_t*)&(auVar14)) = CONCAT44(-(uint)(iVar2 == 1),-(uint)(iVar2 == 0));
        (*(uint32_t*)((char*)&(auVar14)+8)) = -(uint)(iVar2 == 0);
        (*(uint32_t *)((char *)&(auVar14) + 12)) = -(uint)(iVar2 == 0);
        (*(uint32_t*)((char*)&(auVar10)+8)) = (*(uint32_t*)((char*)&(auVar14)+8));
        (*(uint64_t*)&(auVar10)) = (*(uint64_t*)&(auVar14));
        (*(uint32_t *)((char *)&(auVar10) + 12)) = (*(uint32_t *)((char *)&(auVar14) + 12));
        *(uint32_t *)&auVar8 = (*(uint32_t *)&auVar14 & 0x00000001u);
        pdVar4[-2] = (double)(*(uint32_t*)&(auVar8));
        pdVar4[-1] = (double)(*(uint32_t*)((char*)&(auVar8)+4));
        (*(uint64_t*)&(auVar15)) = CONCAT44(-(uint)(iVar2 == 3),-(uint)(iVar2 == 2));
        (*(uint32_t*)((char*)&(auVar15)+8)) = -(uint)(iVar2 == 0);
        (*(uint32_t *)((char *)&(auVar15) + 12)) = -(uint)(iVar2 == 0);
        (*(uint32_t*)((char*)&(auVar11)+8)) = (*(uint32_t*)((char*)&(auVar15)+8));
        (*(uint64_t*)&(auVar11)) = (*(uint64_t*)&(auVar15));
        (*(uint32_t *)((char *)&(auVar11) + 12)) = (*(uint32_t *)((char *)&(auVar15) + 12));
        *(uint32_t *)&auVar8 = (*(uint32_t *)&auVar15 & 0x00000001u);
        *pdVar4 = (double)(*(uint32_t*)&(auVar8));
        pdVar4[1] = (double)(*(uint32_t*)((char*)&(auVar8)+4));
        iVar2 = iVar3;
        pdVar4 = pdVar4 + 4;
      } while (iVar3 < 4);
      uStack_c = 0;
      puVar6 = puVar5 + 0x46;
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      pdVar4 = adStack_11c;
      for (iVar2 = 0x46; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *(undefined4 *)pdVar4;
        pdVar4 = (double *)((int)pdVar4 + 4);
        puVar5 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)(*(int *)(this + 8) * 0x118 + *(int *)(this + 4)));
    *(int *)(this + 8) = iVar7;
    return;
  }
  *(int *)(this + 8) = iVar7;
  return;
}





//==== 00846790 TexCoord ====


/* public: static void __cdecl Graphics__TexCoord(double) */

void __cdecl Graphics__TexCoord(double)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x54,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glTexCoord1d(param_1);
  return;
}





//==== 008467d0 TexCoord_008467d0 ====


/* public: static void __cdecl Graphics__TexCoord(double,double) */

void __cdecl Graphics__TexCoord__o4(double param_1,double param_2)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x52,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glTexCoord2d(param_1,param_2);
  return;
}





//==== 00846820 TexCoord_00846820 ====


/* public: static void __cdecl Graphics__TexCoord(struct util__Vec2_L_double_G_) */

void __cdecl Graphics__TexCoord__o5(Vec4_L_double_G_ param_1)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x50,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glTexCoord2d(param_1.X,param_1.Y,param_1.Y,param_1.Z);
  return;
}





//==== 00846860 To4x4Matrix ====


/* public: struct util__Matrix4x4_L_double_G_ 
   util__Quaternion_double___To4x4Matrix(void)const  */

Matrix4x4_L_double_G_ * 
util__Quaternion_double___To4x4Matrix
          (Quaternion_L_double_G_ *this,Matrix4x4_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar2 = 0;
  pdVar4 = __return_storage_ptr__->Data;
  do {
    iVar3 = iVar2 + 1;
    (*(uint64_t*)&(auVar11)) = CONCAT44(-(uint)(iVar2 == 1),-(uint)(iVar2 == 0));
    (*(uint32_t*)((char*)&(auVar11)+8)) = -(uint)(iVar2 == 0);
    (*(uint32_t *)((char *)&(auVar11) + 12)) = -(uint)(iVar2 == 0);
    (*(uint32_t*)((char*)&(auVar7)+8)) = (*(uint32_t*)((char*)&(auVar11)+8));
    (*(uint64_t*)&(auVar7)) = (*(uint64_t*)&(auVar11));
    (*(uint32_t *)((char *)&(auVar7) + 12)) = (*(uint32_t *)((char *)&(auVar11) + 12));
    *(uint32_t *)&auVar7 = (*(uint32_t *)&auVar11 & 0x00000001u);
    *pdVar4 = (double)(*(uint32_t*)&(auVar7));
    pdVar4[1] = (double)(*(uint32_t*)((char*)&(auVar7)+4));
    (*(uint64_t*)&(auVar12)) = CONCAT44(-(uint)(iVar2 == 3),-(uint)(iVar2 == 2));
    (*(uint32_t*)((char*)&(auVar12)+8)) = -(uint)(iVar2 == 0);
    (*(uint32_t *)((char *)&(auVar12) + 12)) = -(uint)(iVar2 == 0);
    (*(uint32_t*)((char*)&(auVar8)+8)) = (*(uint32_t*)((char*)&(auVar12)+8));
    (*(uint64_t*)&(auVar8)) = (*(uint64_t*)&(auVar12));
    (*(uint32_t *)((char *)&(auVar8) + 12)) = (*(uint32_t *)((char *)&(auVar12) + 12));
    *(uint32_t *)&auVar7 = (*(uint32_t *)&auVar12 & 0x00000001u);
    pdVar4[2] = (double)(*(uint32_t*)&(auVar7));
    pdVar4[3] = (double)(*(uint32_t*)((char*)&(auVar7)+4));
    iVar2 = iVar3;
    pdVar4 = pdVar4 + 4;
  } while (iVar3 < 4);
  dVar15 = this->Y;
  dVar5 = this->X;
  dVar6 = this->Z;
  dVar13 = dVar5 + dVar5;
  dVar1 = this->W;
  dVar9 = dVar15 * dVar15 + dVar15 * dVar15;
  dVar16 = dVar6 * dVar6 + dVar6 * dVar6;
  dVar14 = dVar13 * this->Z;
  dVar6 = (dVar6 + dVar6) * dVar1;
  __return_storage_ptr__->Data[0] = (1.0 - dVar9) - dVar16;
  dVar10 = 1.0 - (dVar5 * dVar5 + dVar5 * dVar5);
  __return_storage_ptr__->Data[4] = dVar13 * dVar15 - dVar6;
  dVar5 = this->Y + this->Y;
  __return_storage_ptr__->Data[1] = dVar6 + dVar13 * dVar15;
  dVar15 = dVar5 * this->Z;
  dVar5 = dVar5 * dVar1;
  __return_storage_ptr__->Data[8] = dVar14 + dVar5;
  __return_storage_ptr__->Data[2] = dVar14 - dVar5;
  __return_storage_ptr__->Data[10] = dVar10 - dVar9;
  __return_storage_ptr__->Data[5] = dVar10 - dVar16;
  __return_storage_ptr__->Data[9] = dVar15 - dVar13 * dVar1;
  __return_storage_ptr__->Data[6] = dVar13 * dVar1 + dVar15;
  return __return_storage_ptr__;
}





//==== 00846a00 Translate ====


/* public: static void __cdecl Graphics__Translate(double,double,double) */

void __cdecl Graphics__Translate(double param_1,double param_2,double param_3)

{
  Vec4_L_double_G_ VVar1;
  
  VVar1.Y = (*(uint32_t*)&(param_2));
  VVar1.X = param_1;
  VVar1.Z = (*(uint32_t*)((char*)&(param_2)+4));
  VVar1.Z = param_3;
  Translate(VVar1);
  return;
}





//==== 00846a30 Translate_00846a30 ====


/* public: static void __cdecl Graphics__Translate(struct util__Vec2_L_double_G_) */

void __cdecl Graphics__Translate__o3(Vec4_L_double_G_)

{
  Vec4_L_double_G_ VVar1;
  
  VVar1.Z = 0.0;
  (*(uint32_t *)((char *)&(VVar1) + 0)) = *(uint32_t *)&(param_1);
  Translate(VVar1);
  return;
}





//==== 00846b10 UnProject ====


/* public: static class util__Maybe_L_structutil__Vec3_L_double_G__G_ __cdecl Graphics__UnProject(struct
   util__Vec3_L_double_G_) */

void __cdecl Graphics__UnProject(Vec4_L_double_G_ param_1)

{
  undefined8 stack0xfffffe24;
  undefined8 stack0xfffffffc;
  double *pdVar1;
  undefined1 auVar2 [16];
  Matrix4x4_L_double_G_ MVar3;
  Matrix4x4_L_double_G_ *pMVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  undefined4 *puVar8;
  double dVar9;
  double dVar10;
  undefined4 in_stack_0000001c;
  undefined1 in_stack_fffffe24 [116];
  undefined4 uVar11;
  Matrix4x4_L_double_G_ *__return_storage_ptr__;
  Matrix4x4_L_double_G_ MStack_150;
  double adStack_d0 [16];
  char cStack_50;
  double adStack_48 [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  __return_storage_ptr__ = &MStack_150;
  adStack_48[3] = 1.0;
  adStack_48[0] =
       ((double)(*(uint64_t*)((char*)&(param_1)+4)) / (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 0)) +
       (double)(*(uint64_t*)((char*)&(param_1)+4)) / (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 0))) - 1.0;
  adStack_48[1] =
       ((double)(*(uint64_t *)((char *)&(param_1) + 12)) / (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 4)) +
       (double)(*(uint64_t *)((char *)&(param_1) + 12)) / (*(undefined4 *)((char *)&((*(struct Graphics *)&(GlobalState)).ViewMatrix.Data[7]) + 4))) - 1.0;
  adStack_48[2] =
       ((double)CONCAT44(in_stack_0000001c,param_1.W) +
       (double)CONCAT44(in_stack_0000001c,param_1.W)) - 1.0;
  uVar11 = 0x846ba2;
  pMVar4 = util__Matrix4x4_double___operator
                     (&(*(struct Graphics *)&(GlobalState)).CustomProjection,__return_storage_ptr__,
                      &(*(struct Graphics *)&(GlobalState)).WorldProjection);
  puVar8 = (undefined4 *)&stack0xfffffe24;
  for (iVar6 = 0x20; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *(undefined4 *)pMVar4->Data;
    pMVar4 = (Matrix4x4_L_double_G_ *)((int)pMVar4->Data + 4);
    puVar8 = puVar8 + 1;
  }
  (*(uint32_t *)((char *)&(MVar3.Data) + 4)) = (uint32_t)(uintptr_t)(in_stack_fffffe24);
  (*(undefined4 *)((char *)&(MVar3.Data[0]) + 0)) = (undefined4)(uintptr_t) adStack_d0;
  (*(undefined4 *)((char *)&(MVar3.Data[0xf]) + 0)) = uVar11;
  (*(undefined4 *)((char *)&(MVar3.Data[0xf]) + 4)) = (undefined4)(uintptr_t) __return_storage_ptr__;
  util__InvertMatrix_double(MVar3);
  if (cStack_50 != '\0') {
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    iVar6 = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    do {
      dVar9 = *(double *)((int)&uStack_28 + iVar6);
      iVar5 = 0;
      pdVar7 = (double *)((int)adStack_d0 + iVar6);
      do {
        pdVar1 = adStack_48 + iVar5;
        iVar5 = iVar5 + 1;
        dVar10 = *pdVar7;
        pdVar7 = pdVar7 + 4;
        dVar9 = dVar9 + *pdVar1 * dVar10;
      } while (iVar5 < 4);
      *(double *)((int)&uStack_28 + iVar6) = dVar9;
      iVar6 = iVar6 + 8;
    } while (iVar6 < 0x20);
    ((uint32_t *)((char *)&(param_1.X) + 4))[8] = 1;
    dVar9 = (double)CONCAT44(uStack_c,uStack_10);
    dVar10 = (double)CONCAT44(uStack_1c,uStack_20) / dVar9;
    (*(uint32_t*)((char*)&(auVar2)+8)) = SUB84(dVar10,0);
    (*(uint64_t*)&(auVar2)) = (double)CONCAT44(uStack_24,uStack_28) / dVar9;
    (*(uint32_t *)((char *)&(auVar2) + 12)) = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined8 *)(uintptr_t)*(undefined4 *)(void *)&(param_1) = *(undefined8 *)auVar2;
    *(undefined8 *)((uintptr_t)*(undefined4 *)(void *)&(param_1) + 8) = *(undefined8 *)((char *)auVar2 + 8);
    *(double *)(*(uint32_t *)((char *)&(param_1.X) + 4)) = (double)CONCAT44(uStack_14,uStack_18) / dVar9;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *(undefined4 *)(uintptr_t)*(undefined4 *)(void *)&(param_1) = 0;
  *(undefined4 *)((uintptr_t)*(undefined4 *)(void *)&(param_1) + 4) = 0;
  *(undefined4 *)((uintptr_t)*(undefined4 *)(void *)&(param_1) + 8) = 0;
  *(undefined4 *)((uintptr_t)*(undefined4 *)(void *)&(param_1) + 0xc) = 0;
  *(undefined8 *)(*(uint32_t *)((char *)&(param_1.X) + 4)) = 0;
  ((uint32_t *)((char *)&(param_1.X) + 4))[8] = 0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00846c80 Vertex_00846c80 ====


/* public: static void __cdecl Graphics__Vertex(double,double) */

void __cdecl Graphics__Vertex(double param_1,double param_2)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x4e,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glVertex2d(param_1,param_2);
  return;
}





//==== 00846cd0 Vertex_00846cd0 ====


/* public: static void __cdecl Graphics__Vertex(double,double,double) */

void __cdecl Graphics__Vertex__o5(double param_1,double param_2,double param_3)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x4c,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glVertex3d(param_1,param_2,param_3);
  return;
}





//==== 00846d30 Vertex_00846d30 ====


/* public: static void __cdecl Graphics__Vertex(struct util__Vec2_L_double_G_) */

void __cdecl Graphics__Vertex__o6(Vec4_L_double_G_ param_1)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x4a,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glVertex2d(param_1.X,param_1.Y,param_1.Y,param_1.Z);
  return;
}





//==== 00846d70 Vertex_00846d70 ====


/* public: static void __cdecl Graphics__Vertex(struct util__Vec3_L_double_G_) */

void __cdecl Graphics__Vertex__o7(Vec4_L_double_G_ param_1)

{
  if (!(*(struct Graphics *)&(GlobalState)).IsCurrentlyInsideADrawStack) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\graphics.cpp",0x48,
                    "Graphics__Get().IsCurrentlyInsideADrawStack",(char *)0x0);
    DebugBreak();
  }
  glVertex3d(param_1.X,param_1.Y,param_1.Z,param_1.Z,param_1.W);
  return;
}





//==== 00858680 glewGetErrorString ====


/* __stdcall glewGetErrorString,4 */

undefined * glewGetErrorString(uint)

{
  if (4 < param_1) {
    param_1 = 4;
  }
  return (&PTR_s_No_error_0095fe80)[param_1];
}





//==== 008586a0 glewInit ====


/* __stdcall glewInit,0 */

int glewInit(void)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  HDC pHVar6;
  char *pcVar7;
  undefined8 uVar8;
  
  iVar5 = FUN_00855f30();
  if (iVar5 != 0) {
  }
  DAT_0098b988 = (undefined4)(uintptr_t)(wglGetProcAddress("wglGetExtensionsStringARB"));
  DAT_0098b994 = (undefined4)(uintptr_t)(wglGetProcAddress("wglGetExtensionsStringEXT"));
  if (*(char *)&(DAT_0098b988) == 0) {
    if (*(char *)&(DAT_0098b994) == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)((char *(*)(void *))(uintptr_t)DAT_0098b994)((void *)0);
    }
  }
  else {
    pHVar6 = wglGetCurrentDC();
    pcVar7 = (char *)((char *(*)(void *))(uintptr_t)DAT_0098b988)((void *)(uintptr_t)(pHVar6));
  }
  uVar8 = FUN_00855e80(pcVar7);
  pcVar1 = pcVar7 + (int)uVar8;
  if ((*(char *)&(DAT_0098b988) == 0) && ((int)((ulonglong)uVar8 >> 0x20) == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  ___WGLEW_3DFX_multisample = (void *)(uintptr_t)(FUN_00855da0("WGL_3DFX_multisample",pcVar7,pcVar1));
  ___WGLEW_3DL_stereo_control = (void *)(uintptr_t)(FUN_00855da0("WGL_3DL_stereo_control",pcVar7,pcVar1));
  if (((_glewExperimental != '\0') || (___WGLEW_3DL_stereo_control != '\0')) ||
     (cVar3 = '\0', bVar2)) {
    cVar3 = FUN_00855110();
    cVar3 = cVar3 == '\0';
  }
  ___WGLEW_3DL_stereo_control = (void *)(uintptr_t)(cVar3);
  cVar3 = _glewExperimental;
  ___WGLEW_AMD_gpu_association = (void *)(uintptr_t)(FUN_00855da0("WGL_AMD_gpu_association",pcVar7,pcVar1));
  if (((cVar3 != '\0') || (___WGLEW_AMD_gpu_association != '\0')) || (cVar4 = '\0', bVar2)) {
    cVar4 = FUN_00855130();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_AMD_gpu_association = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_buffer_region = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_buffer_region",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_ARB_buffer_region == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_008587bf;
  }
  else {
LAB_008587bf:
    cVar4 = FUN_00855210();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_ARB_buffer_region = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_context_flush_control = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_context_flush_control",pcVar7,pcVar1));
  ___WGLEW_ARB_create_context = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_create_context",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_ARB_create_context == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858804;
  }
  else {
LAB_00858804:
    cVar4 = FUN_00855280();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_ARB_create_context = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_create_context_profile = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_create_context_profile",pcVar7,pcVar1));
  ;
  ___WGLEW_ARB_create_context_robustness = (void *)(uintptr_t)
       FUN_00855da0("WGL_ARB_create_context_robustness",pcVar7,pcVar1);
  ___WGLEW_ARB_extensions_string = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_extensions_string",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_ARB_extensions_string == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_0085885a;
  }
  else {
LAB_0085885a:
    cVar4 = FUN_008552a0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_ARB_extensions_string = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_framebuffer_sRGB = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_framebuffer_sRGB",pcVar7,pcVar1));
  ___WGLEW_ARB_make_current_read = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_make_current_read",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_ARB_make_current_read == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_0085889f;
  }
  else {
LAB_0085889f:
    cVar4 = FUN_008552c0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_ARB_make_current_read = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_multisample = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_multisample",pcVar7,pcVar1));
  ___WGLEW_ARB_pbuffer = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_pbuffer",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_ARB_pbuffer == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_008588e4;
  }
  else {
LAB_008588e4:
    cVar4 = FUN_00855300();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_ARB_pbuffer = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_pixel_format = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_pixel_format",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_ARB_pixel_format == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858918;
  }
  else {
LAB_00858918:
    cVar4 = FUN_00855380();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_ARB_pixel_format = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_pixel_format_float = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_pixel_format_float",pcVar7,pcVar1));
  ___WGLEW_ARB_render_texture = (void *)(uintptr_t)(FUN_00855da0("WGL_ARB_render_texture",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_ARB_render_texture == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_0085895d;
  }
  else {
LAB_0085895d:
    cVar4 = FUN_008553d0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_ARB_render_texture = (void *)(uintptr_t)(cVar4);
  ___WGLEW_ARB_robustness_application_isolation = (void *)(uintptr_t)
       FUN_00855da0("WGL_ARB_robustness_application_isolation",pcVar7,pcVar1);
  ___WGLEW_ARB_robustness_share_group_isolation = (void *)(uintptr_t)
       FUN_00855da0("WGL_ARB_robustness_share_group_isolation",pcVar7,pcVar1);
  ___WGLEW_ATI_pixel_format_float = (void *)(uintptr_t)(FUN_00855da0("WGL_ATI_pixel_format_float",pcVar7,pcVar1));
  ___WGLEW_ATI_render_texture_rectangle = (void *)(uintptr_t)
       FUN_00855da0("WGL_ATI_render_texture_rectangle",pcVar7,pcVar1);
  ___WGLEW_EXT_create_context_es2_profile = (void *)(uintptr_t)
       FUN_00855da0("WGL_EXT_create_context_es2_profile",pcVar7,pcVar1);
  ___WGLEW_EXT_create_context_es_profile = (void *)(uintptr_t)
       FUN_00855da0("WGL_EXT_create_context_es_profile",pcVar7,pcVar1);
  ___WGLEW_EXT_depth_float = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_depth_float",pcVar7,pcVar1));
  ___WGLEW_EXT_display_color_table = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_display_color_table",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_EXT_display_color_table == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858a0b;
  }
  else {
LAB_00858a0b:
    cVar4 = FUN_00855420();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_EXT_display_color_table = (void *)(uintptr_t)(cVar4);
  ___WGLEW_EXT_extensions_string = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_extensions_string",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_EXT_extensions_string == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858a3f;
  }
  else {
LAB_00858a3f:
    cVar4 = FUN_00855490();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_EXT_extensions_string = (void *)(uintptr_t)(cVar4);
  ___WGLEW_EXT_framebuffer_sRGB = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_framebuffer_sRGB",pcVar7,pcVar1));
  ___WGLEW_EXT_make_current_read = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_make_current_read",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_EXT_make_current_read == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858a84;
  }
  else {
LAB_00858a84:
    cVar4 = FUN_008554b0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_EXT_make_current_read = (void *)(uintptr_t)(cVar4);
  ___WGLEW_EXT_multisample = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_multisample",pcVar7,pcVar1));
  ___WGLEW_EXT_pbuffer = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_pbuffer",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_EXT_pbuffer == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858ac9;
  }
  else {
LAB_00858ac9:
    cVar4 = FUN_008554f0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_EXT_pbuffer = (void *)(uintptr_t)(cVar4);
  ___WGLEW_EXT_pixel_format = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_pixel_format",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_EXT_pixel_format == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858afd;
  }
  else {
LAB_00858afd:
    cVar4 = FUN_00855570();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_EXT_pixel_format = (void *)(uintptr_t)(cVar4);
  ___WGLEW_EXT_pixel_format_packed_float = (void *)(uintptr_t)
       FUN_00855da0("WGL_EXT_pixel_format_packed_float",pcVar7,pcVar1);
  ___WGLEW_EXT_swap_control = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_swap_control",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_EXT_swap_control == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858b42;
  }
  else {
LAB_00858b42:
    cVar4 = FUN_008555c0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_EXT_swap_control = (void *)(uintptr_t)(cVar4);
  ___WGLEW_EXT_swap_control_tear = (void *)(uintptr_t)(FUN_00855da0("WGL_EXT_swap_control_tear",pcVar7,pcVar1));
  ___WGLEW_I3D_digital_video_control = (void *)(uintptr_t)(FUN_00855da0("WGL_I3D_digital_video_control",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_I3D_digital_video_control == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858b87;
  }
  else {
LAB_00858b87:
    cVar4 = FUN_00855600();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_I3D_digital_video_control = (void *)(uintptr_t)(cVar4);
  ___WGLEW_I3D_gamma = (void *)(uintptr_t)(FUN_00855da0("WGL_I3D_gamma",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_I3D_gamma == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858bbb;
  }
  else {
LAB_00858bbb:
    cVar4 = FUN_00855640();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_I3D_gamma = (void *)(uintptr_t)(cVar4);
  ___WGLEW_I3D_genlock = (void *)(uintptr_t)(FUN_00855da0("WGL_I3D_genlock",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_I3D_genlock == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858bef;
  }
  else {
LAB_00858bef:
    cVar4 = FUN_008556b0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_I3D_genlock = (void *)(uintptr_t)(cVar4);
  ___WGLEW_I3D_image_buffer = (void *)(uintptr_t)(FUN_00855da0("WGL_I3D_image_buffer",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_I3D_image_buffer == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858c23;
  }
  else {
LAB_00858c23:
    cVar4 = FUN_008557d0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_I3D_image_buffer = (void *)(uintptr_t)(cVar4);
  ___WGLEW_I3D_swap_frame_lock = (void *)(uintptr_t)(FUN_00855da0("WGL_I3D_swap_frame_lock",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_I3D_swap_frame_lock == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858c57;
  }
  else {
LAB_00858c57:
    cVar4 = FUN_00855840();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_I3D_swap_frame_lock = (void *)(uintptr_t)(cVar4);
  ___WGLEW_I3D_swap_frame_usage = (void *)(uintptr_t)(FUN_00855da0("WGL_I3D_swap_frame_usage",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_I3D_swap_frame_usage == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858c8b;
  }
  else {
LAB_00858c8b:
    cVar4 = FUN_008558b0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_I3D_swap_frame_usage = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_DX_interop = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_DX_interop",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_DX_interop == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858cbf;
  }
  else {
LAB_00858cbf:
    cVar4 = FUN_00855920();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_DX_interop = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_DX_interop2 = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_DX_interop2",pcVar7,pcVar1));
  ___WGLEW_NV_copy_image = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_copy_image",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_copy_image == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858d04;
  }
  else {
LAB_00858d04:
    cVar4 = FUN_008559e0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_copy_image = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_delay_before_swap = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_delay_before_swap",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_delay_before_swap == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858d38;
  }
  else {
LAB_00858d38:
    cVar4 = FUN_00855a00();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_delay_before_swap = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_float_buffer = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_float_buffer",pcVar7,pcVar1));
  ___WGLEW_NV_gpu_affinity = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_gpu_affinity",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_gpu_affinity == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858d7d;
  }
  else {
LAB_00858d7d:
    cVar4 = FUN_00855a20();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_gpu_affinity = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_multisample_coverage = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_multisample_coverage",pcVar7,pcVar1));
  ___WGLEW_NV_present_video = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_present_video",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_present_video == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858dc2;
  }
  else {
LAB_00858dc2:
    cVar4 = FUN_00855aa0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_present_video = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_render_depth_texture = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_render_depth_texture",pcVar7,pcVar1));
  ___WGLEW_NV_render_texture_rectangle = (void *)(uintptr_t)
       FUN_00855da0("WGL_NV_render_texture_rectangle",pcVar7,pcVar1);
  ___WGLEW_NV_swap_group = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_swap_group",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_swap_group == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858e18;
  }
  else {
LAB_00858e18:
    cVar4 = FUN_00855af0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_swap_group = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_vertex_array_range = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_vertex_array_range",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_vertex_array_range == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858e4c;
  }
  else {
LAB_00858e4c:
    cVar4 = FUN_00855b80();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_vertex_array_range = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_video_capture = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_video_capture",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_video_capture == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (bVar2) goto LAB_00858e80;
  }
  else {
LAB_00858e80:
    cVar4 = FUN_00855bc0();
    cVar3 = _glewExperimental;
    cVar4 = cVar4 == '\0';
  }
  ___WGLEW_NV_video_capture = (void *)(uintptr_t)(cVar4);
  ___WGLEW_NV_video_output = (void *)(uintptr_t)(FUN_00855da0("WGL_NV_video_output",pcVar7,pcVar1));
  if ((cVar3 == '\0') && (___WGLEW_NV_video_output == '\0')) {
    cVar3 = '\0';
    cVar4 = '\0';
    if (!bVar2) goto LAB_00858ec8;
  }
  cVar4 = FUN_00855c40();
  cVar3 = _glewExperimental;
  cVar4 = cVar4 == '\0';
LAB_00858ec8:
  ___WGLEW_NV_video_output = (void *)(uintptr_t)(cVar4);
  ___WGLEW_OML_sync_control = (void *)(uintptr_t)(FUN_00855da0("WGL_OML_sync_control",pcVar7,pcVar1));
  if (((cVar3 != '\0') || (___WGLEW_OML_sync_control != '\0')) || (cVar3 = '\0', bVar2)) {
    cVar3 = FUN_00855cd0();
    cVar3 = cVar3 == '\0';
  }
  ___WGLEW_OML_sync_control = (void *)(uintptr_t)(cVar3);
  return 0;
}





//==== 00858f00 Str_char32_t_ ====


/* public:  util__Str_char32_t___Str_char32_t(class util__Str_L_char32_t_G_ const &) */

Str_L_char32_t_G_ * 
util__Str_char32_t___Str_char32_t(Str_L_char32_t_G_ *this,Str_L_char32_t_G_ *param_1)

{
  wchar32 *pwVar1;
  int *piVar2;
  wchar32 **ppwVar3;
  uint uVar4;
  
  *(undefined4 *)this = 0;
  uVar4 = *(uint *)(param_1 + 4);
  *(uint *)(this + 4) = uVar4;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  if (0 < (int)uVar4) {
    uVar4 = -(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 4);
    piVar2 = (int *)port_op_new(uVar4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      memset(piVar2,0,uVar4);
    }
    *(int **)this = piVar2;
    if (*(int *)(param_1 + 4) < 1) {
      ppwVar3 = (wchar32 **)(& cde_l2_0b2b1c9f_NullString);
    }
    else {
      ppwVar3 = *(wchar32 ***)param_1;
    }
    pwVar1 = *ppwVar3;
    while (pwVar1 != (wchar32 *)0x0) {
      *piVar2 = (int)pwVar1;
      ppwVar3 = ppwVar3 + 1;
      piVar2 = piVar2 + 1;
      pwVar1 = *ppwVar3;
    }
    *piVar2 = 0;
    return this;
  }
  *(undefined4 *)(this + 8) = 0;
  return this;
}





//==== 00858fa0 operator___00858fa0 ====


/* public: class util__Str_L_char32_t_G_ &  util__Str_char32_t___operator__o5(char32_t) */

Str_L_char32_t_G_ *  util__Str_char32_t___operator__o5(Str_L_char32_t_G_ *this,wchar32 param_1)

{
  wchar32 *pwVar1;
  wchar32 wVar2;
  uint uVar3;
  wchar32 *pwVar4;
  wchar32 *pwStack_8;
  
  if (param_1 != L'\0') {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    uVar3 = *(int *)(this + 8) + 1;
    if ((int)uVar3 < *(int *)(this + 4)) {
      pwVar4 = (wchar32 *)(*(int *)this + (*(int *)(this + 8) + -1) * 4);
    }
    else {
      *(uint *)(this + 4) = uVar3;
      uVar3 = -(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 4);
      pwStack_8 = (wchar32 *)port_op_new(uVar3);
      if (pwStack_8 == (wchar32 *)0x0) {
        pwStack_8 = (wchar32 *)0x0;
      }
      else {
        memset(pwStack_8,0,uVar3);
      }
      pwVar1 = *(wchar32 **)this;
      wVar2 = *pwVar1;
      pwVar4 = pwStack_8;
      if (wVar2 != L'\0') {
        do {
          *pwVar4 = wVar2;
          pwVar1 = pwVar1 + 1;
          wVar2 = *pwVar1;
          pwVar4 = pwVar4 + 1;
        } while (wVar2 != L'\0');
        pwVar1 = *(wchar32 **)this;
      }
      if (pwVar1 != (wchar32 *)0x0) {
        port_op_delete(pwVar1);
        *(undefined4 *)this = 0;
      }
      *(wchar32 **)this = pwStack_8;
    }
    *pwVar4 = param_1;
    pwVar4[1] = L'\0';
  }
  return this;
}





//==== 00859050 CharStringLength ====


/* int __cdecl util__CharStringLength(char const *) */

int __cdecl util__CharStringLength(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  return (int)param_1 - (int)pcVar1;
}





//==== 00859070 CharStringLength_00859070 ====


/* int __cdecl util__CharStringLength(char32_t const *) */

int __cdecl util__CharStringLength__o3(wchar32 *param_1)

{
  wchar32 wVar1;
  int iVar2;
  
  iVar2 = 0;
  wVar1 = *param_1;
  while (wVar1 != L'\0') {
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    wVar1 = *param_1;
  }
  return iVar2;
}





//==== 00859090 GetHash_00859090 ====


/* unsigned long __cdecl util__GetHash(char const *) */

ulong __cdecl util__GetHash(char *param_1)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = 0x1505;
  cVar1 = *param_1;
  while (cVar1 != 0) {
    param_1 = param_1 + 1;
    uVar2 = uVar2 * 0x21 + (int)cVar1;
    cVar1 = *param_1;
  }
  return uVar2;
}





//==== 008590c0 IsCJKEndPunctuation ====


/* bool __cdecl util__IsCJKEndPunctuation(char32_t const &) */

bool __cdecl util__IsCJKEndPunctuation(wchar32 *param_1)

{
  wchar32 wVar1;
  undefined *puVar2;
  
  wVar1 = *(wchar32 *)PTR_s___0096081c;
  if (wVar1 != L'\0') {
    puVar2 = PTR_s___0096081c;
    do {
      if (wVar1 == *param_1) {
        return true;
      }
      wVar1 = *(wchar32 *)(puVar2 + 4);
      puVar2 = puVar2 + 4;
    } while (wVar1 != L'\0');
  }
  return false;
}





//==== 008590f0 IsCJKStartPunctuation ====


/* bool __cdecl util__IsCJKStartPunctuation(char32_t const &) */

bool __cdecl util__IsCJKStartPunctuation(wchar32 *param_1)

{
  wchar32 wVar1;
  undefined *puVar2;
  
  wVar1 = *(wchar32 *)PTR_s___00960818;
  if (wVar1 != L'\0') {
    puVar2 = PTR_s___00960818;
    do {
      if (wVar1 == *param_1) {
        return true;
      }
      wVar1 = *(wchar32 *)(puVar2 + 4);
      puVar2 = puVar2 + 4;
    } while (wVar1 != L'\0');
  }
  return false;
}





//==== 00859120 Printf ====


/* class util__Str_L_char_G_ __cdecl util__Printf(char const *,...) */

Str_L_char_G_ * __cdecl util__Printf__o3(Str_L_char_G_ *__return_storage_ptr__,char *param_1,...)

{
  undefined8 stack0x0000000c;
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  puVar1 = (uint *)local_stdio_printf_options__o3();
  iVar2 = __stdio_common_vsprintf(*puVar1 | 2,puVar1[1],0,0,param_1,0,&stack0x0000000c);
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  __return_storage_ptr__->Length = 0;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Length = 0;
  uVar4 = 0;
  if (-1 < (int)(iVar2 + 1U)) {
    uVar4 = iVar2 + 1U;
  }
  __return_storage_ptr__->Capacity = uVar4;
  if (0 < (int)uVar4) {
    pcVar3 = (char *)port_op_new(uVar4);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      memset(pcVar3,0,uVar4);
    }
    __return_storage_ptr__->Data = pcVar3;
    *pcVar3 = '\0';
  }
  Str_L_char_G___Resize(__return_storage_ptr__,iVar2);
  pcVar3 = __return_storage_ptr__->Data;
  if (pcVar3 == (char *)0x0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\corestring.inl",0x227,
              "Data",(char *)0x0);
    DebugBreak();
    pcVar3 = __return_storage_ptr__->Data;
  }
  __stdio_common_vsprintf
            (*puVar1 | 2,puVar1[1],pcVar3,__return_storage_ptr__->Capacity,param_1,0,
             &stack0x0000000c);
  return __return_storage_ptr__;
}





//==== 00859210 Printf_00859210 ====


/* class util__Str_L_char_G_ __cdecl util__Printf(wchar_t const *,...) */

Str_L_char_G_ * __cdecl util__Printf(Str_L_char_G_ *__return_storage_ptr__,wchar_t *param_1,...)

{
  undefined8 stack0x0000000c;
  size_t _MaxCount;
  uint *puVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  wchar_t **ppwVar5;
  wchar_t **ppwVar6;
  uint uVar7;
  
  puVar1 = (uint *)local_stdio_printf_options__o3();
  uVar2 = __stdio_common_vswprintf(*puVar1 | 1,puVar1[1],0,0,param_1,0,&stack0x0000000c);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  ppwVar5 = (wchar_t **)0x0;
  uVar7 = uVar2 + 1;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  else if (0 < (int)uVar7) {
    uVar4 = -(uint)((int)((ulonglong)uVar7 * 2 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 2);
    ppwVar5 = (wchar_t **)port_op_new(uVar4);
    if (ppwVar5 == (wchar_t **)0x0) {
      ppwVar5 = (wchar_t **)0x0;
    }
    else {
      memset(ppwVar5,0,uVar4);
    }
    *(undefined2 *)ppwVar5 = 0;
  }
  if ((int)uVar7 < (int)uVar2) {
    if (ppwVar5 != (wchar_t **)0x0) {
      port_op_delete(ppwVar5);
    }
    ppwVar6 = (wchar_t **)0x0;
    if ((int)uVar2 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar2;
      if (0 < (int)uVar2) {
        uVar4 = -(uint)((int)((ulonglong)uVar2 * 2 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 2);
        ppwVar5 = (wchar_t **)port_op_new(uVar4);
        if (ppwVar5 == (wchar_t **)0x0) {
          ppwVar5 = (wchar_t **)0x0;
        }
        else {
          memset(ppwVar5,0,uVar4);
        }
        *(undefined2 *)ppwVar5 = 0;
        goto LAB_008592f8;
      }
    }
  }
  else {
LAB_008592f8:
    if (ppwVar5 != (wchar_t **)0x0) {
      *(undefined2 *)ppwVar5 = 0;
    }
    ppwVar6 = ppwVar5;
    if (0 < (int)uVar7) goto LAB_0085930c;
  }
  ppwVar5 = (wchar_t **)(& cde_l2_0b2b1c9f_NullString);
LAB_0085930c:
  __stdio_common_vswprintf(*puVar1 | 1,puVar1[1],ppwVar5,uVar7,param_1,0,&stack0x0000000c);
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  _MaxCount = uVar2 * 2 + 1;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Length = 0;
  uVar2 = 0;
  if (-1 < (int)_MaxCount) {
    uVar2 = _MaxCount;
  }
  __return_storage_ptr__->Capacity = uVar2;
  if (0 < (int)uVar2) {
    pcVar3 = (char *)port_op_new(uVar2);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      memset(pcVar3,0,uVar2);
    }
    __return_storage_ptr__->Data = pcVar3;
    *pcVar3 = '\0';
  }
  Str_L_char_G___Resize(__return_storage_ptr__,_MaxCount);
  ppwVar5 = (wchar_t **)(& cde_l2_0b2b1c9f_NullString);
  if (0 < (int)uVar7) {
    ppwVar5 = ppwVar6;
  }
  if (__return_storage_ptr__->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = __return_storage_ptr__->Data;
  }
  wcstombs(pcVar3,(wchar_t *)ppwVar5,_MaxCount);
  if (ppwVar6 != (wchar_t **)0x0) {
    port_op_delete(ppwVar6);
  }
  return __return_storage_ptr__;
}





//==== 008593e0 Utf32ToUtf8 ====


/* class util__Str_L_char_G_ __cdecl util__Utf32ToUtf8(class util__Str_L_char32_t_G_ const &) */

Str_L_char_G_ * __cdecl util__Utf32ToUtf8(Str_L_char_G_ *__return_storage_ptr__,Str_L_char32_t_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  char *pcVar2;
  Str_L_char_G_ *pSVar3;
  byte bVar4;
  wchar32 **ppwVar5;
  wchar32 *pwVar6;
  uint uVar7;
  Str_L_char_G_ SStack_78;
  Str_L_char_G_ SStack_6c;
  Str_L_char_G_ SStack_60;
  uint uStack_54;
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  wchar32 **ppwStack_38;
  Str_L_char_G_ *pSStack_34;
  Str_L_char_G_ SStack_30;
  uint uStack_24;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSStack_34 = __return_storage_ptr__;
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  iVar1 = *(int *)(param_1 + 8);
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Length = 0;
  uVar7 = 0;
  if (-1 < iVar1 << 2) {
    uVar7 = iVar1 << 2;
  }
  __return_storage_ptr__->Capacity = uVar7;
  if (0 < (int)uVar7) {
    pcVar2 = (char *)port_op_new(uVar7);
    if (pcVar2 == (char *)0x0) {
      pcVar2 = (char *)0x0;
    }
    else {
      memset(pcVar2,0,uVar7);
    }
    pSStack_34->Data = pcVar2;
    *pcVar2 = '\0';
  }
  if (*(int *)(param_1 + 4) < 1) {
    ppwVar5 = (wchar32 **)(& cde_l2_0b2b1c9f_NullString);
  }
  else {
    ppwVar5 = *(wchar32 ***)param_1;
  }
  pwVar6 = *ppwVar5;
  ppwStack_38 = ppwVar5;
  pSVar3 = pSStack_34;
  while (pwVar6 != (wchar32 *)0x0) {
    SStack_30.Length = 0;
    SStack_30.Data = (char *)0x0;
    SStack_30.Capacity = 4;
    SStack_30.Data = (char *)port_op_new(4);
    if (SStack_30.Data == (char *)0x0) {
      SStack_30.Data = (char *)0x0;
    }
    else {
      *(undefined4 *)SStack_30.Data = 0;
    }
    *SStack_30.Data = 0;
    pwVar6 = *ppwVar5;
    if ((int)pwVar6 < 0x80) {
      SStack_44.Data = (char *)0x0;
      SStack_44.Capacity = 0;
      SStack_44.Length = 0;
      if ((char)pwVar6 != '\0') {
        SStack_44.Length = 1;
        SStack_44.Capacity = 2;
        SStack_44.Data = (char *)port_op_new(2);
        if (SStack_44.Data == (char *)0x0) {
          SStack_44.Data = (char *)0x0;
        }
        else {
          SStack_44.Data[0] = '\0';
          SStack_44.Data[1] = '\0';
        }
        *SStack_44.Data = (char)pwVar6;
        SStack_44.Data[1] = '\0';
      }
      pcVar2 = SStack_44.Data;
      util__Maybe_struct_util__ClassMember___operator(&SStack_30,&SStack_44);
      if (pcVar2 != (char *)0x0) {
        port_op_delete(pcVar2);
        SStack_44.Data = (char *)0x0;
      }
    }
    else {
      uVar7 = 6;
      uStack_24 = 0xc0;
      if (0x3f < (int)pwVar6) {
        SStack_60.Length = 1;
        SStack_60.Capacity = 2;
        do {
          uStack_24 = uStack_24 | 1 << (uVar7 & 0x1f);
          uStack_54 = (uint)pwVar6 & 0x3f;
          pwVar6 = (wchar32 *)((int)pwVar6 >> 6);
          uStack_54 = uStack_54 | 0x80;
          uVar7 = uVar7 - 1;
          pcVar2 = (char *)port_op_new(2);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = (char *)0x0;
          }
          else {
            pcVar2[0] = '\0';
            pcVar2[1] = '\0';
          }
          *pcVar2 = (char)uStack_54;
          pcVar2[1] = '\0';
          SStack_14.Data = (char *)0x0;
          SStack_14.Capacity = 0;
          SStack_14.Length = 0;
          SStack_60.Data = pcVar2;
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_14,&SStack_60);
          Str_L_char_G___op_iadd(&SStack_14,&SStack_30);
          util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_6c,&SStack_14);
          if (SStack_14.Data != (char *)0x0) {
            port_op_delete(SStack_14.Data);
            (*(uint64_t*)&(SStack_14)) = (*(uint64_t*)&(SStack_14)) & 0xffffffff00000000;
          }
          util__Maybe_struct_util__ClassMember___operator(&SStack_30,&SStack_6c);
          if (SStack_6c.Data != (char *)0x0) {
            port_op_delete(SStack_6c.Data);
            SStack_6c.Data = (char *)0x0;
          }
          port_op_delete(pcVar2);
          SStack_60.Data = (char *)0x0;
        } while (1 << ((byte)uVar7 & 0x1f) <= (int)pwVar6);
      }
      bVar4 = (byte)uStack_24 | (byte)pwVar6;
      uStack_24 = CONCAT31((int3)(uStack_24 >> 8),bVar4);
      SStack_50.Data = (char *)0x0;
      SStack_50.Capacity = 0;
      SStack_50.Length = 0;
      if (bVar4 != 0) {
        SStack_50.Length = 1;
        SStack_50.Capacity = 2;
        SStack_50.Data = (char *)port_op_new(2);
        if (SStack_50.Data == (char *)0x0) {
          SStack_50.Data = (char *)0x0;
        }
        else {
          SStack_50.Data[0] = '\0';
          SStack_50.Data[1] = '\0';
        }
        *SStack_50.Data = (char)uStack_24;
        SStack_50.Data[1] = '\0';
      }
      pcVar2 = SStack_50.Data;
      SStack_20.Length = 0;
      SStack_20.Data = (char *)0x0;
      SStack_20.Capacity = 0;
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_20,&SStack_50);
      Str_L_char_G___op_iadd(&SStack_20,&SStack_30);
      util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(&SStack_78,&SStack_20);
      if (SStack_20.Data != (char *)0x0) {
        port_op_delete(SStack_20.Data);
        (*(uint64_t*)&(SStack_20)) = (*(uint64_t*)&(SStack_20)) & 0xffffffff00000000;
      }
      util__Maybe_struct_util__ClassMember___operator(&SStack_30,&SStack_78);
      if (SStack_78.Data != (char *)0x0) {
        port_op_delete(SStack_78.Data);
        SStack_78.Data = (char *)0x0;
      }
      if (pcVar2 != (char *)0x0) {
        port_op_delete(pcVar2);
        SStack_50.Data = (char *)0x0;
      }
    }
    pSVar3 = pSStack_34;
    Str_L_char_G___op_iadd(pSStack_34,&SStack_30);
    ppwVar5 = ppwStack_38 + 1;
    ppwStack_38 = ppwVar5;
    if (SStack_30.Data != (char *)0x0) {
      port_op_delete(SStack_30.Data);
      (*(uint64_t*)&(SStack_30)) = (*(uint64_t*)&(SStack_30)) & 0xffffffff00000000;
    }
    pwVar6 = *ppwVar5;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pSVar3;
}





//==== 00859720 Utf8ToUtf32 ====


/* class util__Str_L_char32_t_G_ __cdecl util__Utf8ToUtf32(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl util__Utf8ToUtf32(Str_L_char_G_ *param_1)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  wchar32 wVar4;
  uint uVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 *in_stack_00000008;
  
  param_1->Data = (char *)0x0;
  param_1->Capacity = 0;
  param_1->Length = 0;
  uVar5 = in_stack_00000008[2];
  param_1->Data = (char *)0x0;
  uVar8 = 0;
  if (-1 < (int)uVar5) {
    uVar8 = uVar5;
  }
  param_1->Length = 0;
  param_1->Capacity = uVar8;
  if (0 < (int)uVar8) {
    uVar5 = -(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 4);
    pcVar3 = (char *)port_op_new(uVar5);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = (char *)0x0;
    }
    else {
      memset(pcVar3,0,uVar5);
    }
    param_1->Data = pcVar3;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
  }
  if ((int)in_stack_00000008[1] < 1) {
    pbVar7 = (byte *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    pbVar7 = (byte *)*in_stack_00000008;
  }
  bVar1 = *pbVar7;
  while (bVar1 != 0) {
    wVar4 = (wchar32)bVar1;
    pbVar7 = pbVar7 + 1;
    if (0x7f < (uint)wVar4) {
      uVar8 = 0;
      bVar6 = 0;
      bVar2 = 0;
      uVar5 = 0x3f;
      while ((bVar1 & 0xc0) == 0xc0) {
        bVar6 = bVar6 + 1;
        bVar2 = bVar2 + 6;
        wVar4 = (wVar4 & 0x7fU) * 2;
        uVar5 = (int)uVar5 >> 1;
        uVar8 = uVar8 << 6 | *pbVar7 & 0x3f;
        pbVar7 = pbVar7 + 1;
        bVar1 = (byte)wVar4;
      }
      wVar4 = (wVar4 >> (bVar6 & 0x1f) & uVar5) << (bVar2 & 0x1f) | uVar8;
    }
    Str_L_char32_t_G___op_iadd((Str_L_char32_t_G_ *)param_1,wVar4);
    bVar1 = *pbVar7;
  }
  return param_1;
}





//==== 00859830 EngineBegin ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl EngineBegin(void) */

void __cdecl EngineBegin(void)

{
  undefined4 __glfwInputError;
  undefined4 *puVar1;
  SHORT SVar2;
  SHORT SVar3;
  uint uVar4;
  int iVar5;
  HWND hWnd;
  HANDLE pvVar6;
  undefined4 uVar7;
  tagMSG tStack_30;
  tagRECT tStack_14;
  
  GameManager__LoadPreferences(Game);
  tStack_14.bottom = 0x859842;
  RebuildWindow(true);
  GameManager__LoadLoadingTextures(Game);
  GameManager__StartLoadingScreen(Game);
  if (__glfwInitialized != 0) {
    uVar4 = __security_cookie ^ (uint)&tStack_30;
    iVar5 = PeekMessageW(&tStack_30,(HWND)0x0,0,0,1);
    while (iVar5 != 0) {
      puVar1 = (undefined4 *)(uintptr_t)(DAT_0099409c);
      if (tStack_30.message == 0x12) {
        for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
          __glfwInputWindowCloseRequest(puVar1);
        }
      }
      else {
        TranslateMessage(&tStack_30);
        DispatchMessageW(&tStack_30);
      }
      iVar5 = PeekMessageW(&tStack_30,(HWND)0x0,0,0,1);
    }
    hWnd = GetActiveWindow();
    if ((hWnd != (HWND)0x0) && (pvVar6 = (HANDLE)(uintptr_t)GetPropW(hWnd,L"GLFW"), pvVar6 != (HANDLE)0x0)) {
      uVar7 = FUN_008dfbb0();
      SVar2 = GetAsyncKeyState(0xa0);
      SVar3 = GetAsyncKeyState(0xa1);
      if ((-1 < SVar2) && (*(char *)((int)pvVar6 + 0x1bc) == '\x01')) {
        __glfwInputKey(pvVar6,0x154,0,0,uVar7);
      }
      if ((-1 < SVar3) && (*(char *)((int)pvVar6 + 0x1c0) == '\x01')) {
        __glfwInputKey(pvVar6,0x158,0,0,uVar7);
      }
    }
    iVar5 = DAT_00994800;
    if (DAT_00994800 != 0) {
      GetClientRect(*(HWND *)(DAT_00994800 + 0x280),&tStack_14);
      tStack_14.right = tStack_14.right / 2;
      if ((*(int *)(iVar5 + 0x294) != tStack_14.right) ||
         (*(int *)(iVar5 + 0x298) != tStack_14.bottom / 2)) {
        *(LONG *)(iVar5 + 0x294) = tStack_14.right;
        tStack_14.top = tStack_14.bottom / 2;
        *(LONG *)(iVar5 + 0x298) = tStack_14.top;
        tStack_14.left = tStack_14.right;
        ClientToScreen(*(HWND *)(iVar5 + 0x280),(LPPOINT)&tStack_14);
        SetCursorPos(tStack_14.left,tStack_14.top);
      }
    }
    __security_check_cookie(uVar4 ^ (uint)&tStack_30);
    return;
  }
  tStack_14.bottom = 0x10001;
  tStack_14.right = 0x8dcc55;
  ((void (*)(void))(uintptr_t)__glfwInputError)();
  return;
}





//==== 00859860 EngineCoreLoop ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl EngineCoreLoop(void) */

void __cdecl EngineCoreLoop(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = glfwWindowShouldClose(MainWindow);
  /* MSVC emitted the loop guard's first evaluation as its OWN block (loop
   * peeling).  LLVM jump-threads it into the loop-bottom copy unless the
   * value is made opaque; an empty asm barrier costs zero machine bytes. */
  __asm__("" : "+r"(iVar2));
  if (iVar2 == 0) {
    while ((bVar1 = GameManager__IsExitRequested(Game), !bVar1)) {
      GameManager__Tick(Game);
      iVar2 = glfwGetWindowAttrib(MainWindow,0x20001);
      if (iVar2 != 0) {
        bVar1 = NotificationManager__IsTutorialEnabled((NotificationManager *)Game);
        if (bVar1) {
          GameManager__UpdateLoadingScreen(Game);
        }
        else {
          RenderGame(Game);
        }
      }
      GameManager__PreInput(Game);
      glfwPollEvents();
      iVar2 = glfwWindowShouldClose(MainWindow);
      if (iVar2 != 0) return;
    }
  }
  return;
}





//==== 008598f0 EngineEnd ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl EngineEnd(void) */

void __cdecl EngineEnd(void)

{
  GameManager *pGVar1;
  
  pGVar1 = Game;
  if (Game != (GameManager *)0x0) {
    GameManager___GameManager(Game);
    port_op_delete(pGVar1,0x100);
    Game = (GameManager *)0x0;
  }
  GraphicsResourceInterface__DestroyAll();
  ProgramEndDestroyShaders();
  glfwDestroyWindow(MainWindow);
  glfwTerminate();
  if (DebugCrashOnExit != false) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\engine.cpp",0x1a1,"0",
                    (char *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0085995a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    DebugBreak();
    return;
  }
  return;
}





//==== 00859970 EngineMain ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl EngineMain(int,char const * * const) */

void __cdecl EngineMain(int param_1,char **param_2)

{
  int iVar1;
  bool bVar2;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  HWND hWnd;
  GameManager *this;
  int iVar7;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__InitializeCrashHandler();
  pSVar3 = GetSaveDataPath(&SStack_28);
  if (pSVar3->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar3->Data;
  }
  pSVar3 = util__Printf(&SStack_10,(wchar_t*)((wchar_t*)((wchar_t*)("%s/Crashes/"))),pcVar4);
  util__SetCrashLogPath(pSVar3);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    (*(uint64_t*)&(SStack_10)) = (*(uint64_t*)&(SStack_10)) & 0xffffffff00000000;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  util__Str_char___Str_char(&SStack_1c,(Str_L_char_G_ *)&DAT_0098c984);
  pcVar4 = SStack_1c.Data;
  pcVar6 = "";
  if (0 < SStack_1c.Capacity) {
    pcVar6 = SStack_1c.Data;
  }
  util__Str_char___Str_char(&SStack_1c,(Str_L_char_G_ *)&DAT_0098c9b0);
  pcVar5 = "";
  if (0 < SStack_1c.Capacity) {
    pcVar5 = SStack_1c.Data;
  }
  util__Printf(&SStack_10,(wchar_t*)((wchar_t*)((wchar_t*)("%s %s %s%s"))),pcVar5,pcVar6,"Windows","");
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  if (pcVar4 != (char *)0x0) {
    port_op_delete(pcVar4);
  }
  pcVar4 = "";
  if (0 < SStack_10.Capacity) {
    pcVar4 = SStack_10.Data;
  }
  pSVar3 = util__Printf(&SStack_28,(wchar_t*)((wchar_t*)((wchar_t*)("Version: %s\n\n"))),pcVar4);
  util__Log(pSVar3);
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  if (1 < param_1) {
    util__Str_char___Str_char(&SStack_28,"Arguments: ");
    util__Log(&SStack_28);
    if (SStack_28.Data != (char *)0x0) {
      port_op_delete(SStack_28.Data);
    }
    iVar7 = 1;
    if (1 < param_1) {
      do {
        SStack_10.Length = 0;
        SStack_10.Data = (char *)0x0;
        SStack_10.Capacity = 0;
        util__Str_char___Str_char(&SStack_10,param_2[iVar7]);
        iVar1 = SStack_10.Capacity;
        pcVar4 = SStack_10.Data;
        pcVar5 = "TestCrash";
        pcVar6 = "";
        if (0 < SStack_10.Capacity) {
          pcVar6 = SStack_10.Data;
        }
        while( true ) {
          if (((pcVar6 + -0x953fa0)[(int)pcVar5] == '\0') && (*pcVar5 == '\0')) {
            DebugTestCrash = true;
            goto LAB_00859c24;
          }
          if ((pcVar6 + -0x953fa0)[(int)pcVar5] != *pcVar5) break;
          pcVar5 = pcVar5 + 1;
        }
        pcVar5 = "ShowFPS";
        pcVar6 = "";
        if (0 < SStack_10.Capacity) {
          pcVar6 = SStack_10.Data;
        }
        while( true ) {
          if (((pcVar6 + -0x953fac)[(int)pcVar5] == '\0') && (*pcVar5 == '\0')) {
            DebugShowFPS = true;
            goto LAB_00859c24;
          }
          if ((pcVar6 + -0x953fac)[(int)pcVar5] != *pcVar5) break;
          pcVar5 = pcVar5 + 1;
        }
        pcVar5 = "DebugMode";
        pcVar6 = "";
        if (0 < SStack_10.Capacity) {
          pcVar6 = SStack_10.Data;
        }
        while( true ) {
          if (((pcVar6 + -0x953fb4)[(int)pcVar5] == '\0') && (*pcVar5 == '\0')) {
            DebugMode = true;
            goto LAB_00859c24;
          }
          if ((pcVar6 + -0x953fb4)[(int)pcVar5] != *pcVar5) break;
          pcVar5 = pcVar5 + 1;
        }
        bVar2 = util__Str_char___operator__o9(&SStack_10,"DisableLoadingScreen");
        if (bVar2) {
          DebugDisableLoadingScreen = true;
        }
        else {
          bVar2 = util__Str_char___operator__o9(&SStack_10,"DisableMusic");
          if (bVar2) {
            DebugDisableMusic = true;
          }
          else {
            bVar2 = util__Str_char___operator__o9(&SStack_10,"ScreenshotMode");
            if (bVar2) {
              DebugScreenshotMode = true;
            }
            else {
              bVar2 = util__Str_char___operator__o9(&SStack_10,"DisableSteam");
              if (bVar2) {
                DebugDisableSteam = true;
              }
              else {
                bVar2 = util__Str_char___operator__o9(&SStack_10,"ShowFonts");
                if (bVar2) {
                  DebugShowFonts = true;
                }
              }
            }
          }
        }
LAB_00859c24:
        pcVar6 = "";
        if (0 < iVar1) {
          pcVar6 = pcVar4;
        }
        pSVar3 = util__Printf(&SStack_28,(wchar_t*)((wchar_t*)((wchar_t*)("%s "))),pcVar6);
        util__Log(pSVar3);
        if (SStack_28.Data != (char *)0x0) {
          port_op_delete(SStack_28.Data);
          SStack_28.Data = (char *)0x0;
        }
        if (pcVar4 != (char *)0x0) {
          port_op_delete(pcVar4);
          (*(uint64_t*)&(SStack_10)) = (*(uint64_t*)&(SStack_10)) & 0xffffffff00000000;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < param_1);
    }
    util__Str_char___Str_char(&SStack_28,"\n\n");
    util__Log(&SStack_28);
    if (SStack_28.Data != (char *)0x0) {
      port_op_delete(SStack_28.Data);
    }
  }
  hWnd = GetConsoleWindow();
  if (DebugMode != false) {
    ShowWindow(hWnd,5);
  }
  glfwSetErrorCallback( (void *)(ErrorCallback));
  iVar7 = glfwInit();
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  this = (GameManager *)port_op_new(0x100);
  if (this != (GameManager *)0x0) {
    memset(this,0,0x100);
    Game = (GameManager *)GameManager__GameManager(this);
    return;
  }
  Game = (GameManager *)0x0;
  return;
}





//==== 00859d30 ErrorCallback ====


/* void __cdecl ErrorCallback(int,char const *) */

void __cdecl ErrorCallback(int param_1,char *param_2)

{
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,param_2);
  util__Log(&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return;
}





//==== 00859d70 GetGameManager ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* class GameManager * __cdecl GetGameManager(void) */

GameManager * __cdecl GetGameManager(void)

{
  return Game;
}





//==== 00859d80 GetGameVersion ====


/* class util__Str_L_char_G_ __cdecl GetGameVersion(void) */

Str_L_char_G_ * __cdecl GetGameVersion(Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,(Str_L_char_G_ *)&DAT_0098c984);
  return __return_storage_ptr__;
}





//==== 00859da0 GetLegacySaveDataPath ====


/* class util__Str_L_char_G_ __cdecl GetLegacySaveDataPath(void) */

Str_L_char_G_ * __cdecl GetLegacySaveDataPath(Str_L_char_G_ *__return_storage_ptr__)

{
  util__GetBasicResourcesPath(__return_storage_ptr__);
  return __return_storage_ptr__;
}





//==== 00859dc0 GetModsPath ====


/* class util__Str_L_char_G_ __cdecl GetModsPath(void) */

Str_L_char_G_ * __cdecl GetModsPath(Str_L_char_G_ *__return_storage_ptr__)

{
  Str_L_char_G_ *this;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Mods/");
  pSVar1 = &SStack_1c;
  __return_storage_ptr___00 = __return_storage_ptr__;
  this = GetSaveDataPath(&SStack_10);
  util__Str_char___operator(this,__return_storage_ptr___00,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return __return_storage_ptr__;
}





//==== 00859e20 GetSaveDataPath ====


/* class util__Str_L_char_G_ __cdecl GetSaveDataPath(void) */

Str_L_char_G_ * __cdecl GetSaveDataPath(Str_L_char_G_ *__return_storage_ptr__)

{
  Str_L_char_G_ *pSVar1;
  char *pcVar2;
  char *pcVar3;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,(Str_L_char_G_ *)&DAT_0098c9b0);
  pcVar3 = "";
  if (0 < SStack_10.Capacity) {
    pcVar3 = SStack_10.Data;
  }
  pSVar1 = util__GetApplicationSaveDataPath(&SStack_1c);
  if (pSVar1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = pSVar1->Data;
  }
  util__Printf(__return_storage_ptr__,(wchar_t*)((wchar_t*)((wchar_t*)("%s/%s/"))),pcVar2,pcVar3);
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 00859ea0 InitGL ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl InitGL(class PreferencesBase *) */

void __cdecl InitGL(PreferencesBase *param_1)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  undefined4 *puVar6;
  Str_L_char_G_ SStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  Str_L_char_G_ SStack_10;
  
  SStack_10.Length = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((DebugValidateOpenGL) && (DAT_00960821 != '\0')) {
    DAT_00960821 = '\0';
    uVar3 = glGetString(0x1f02);
    pSVar4 = util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("%s\n"))),uVar3);
    util__Log(pSVar4);
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
    }
    glGetIntegerv(0x8872,&uStack_14);
    pSVar4 = util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("Max Texture Image Units: %i\n"))),uStack_14);
    util__Log(pSVar4);
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
    }
    puVar6 = &uStack_18;
    uVar3 = 0x8b4d;
    glGetIntegerv();
    pSVar4 = util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("Max Combined Texture Image Units: %i\n"))),uStack_18,uVar3,puVar6
                         );
    util__Log(pSVar4);
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
    }
    glGetIntegerv(0x8b4c,&uStack_1c);
    pSVar4 = util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("Max Vertex Texture Image Units: %i\n"))),uStack_1c);
    util__Log(pSVar4);
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
    }
    glGetIntegerv(0x8824,&uStack_20);
    pSVar4 = util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("Max Draw Buffers: %i\n"))),uStack_20);
    util__Log(pSVar4);
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
    }
    glGetIntegerv(0xd33,&SStack_10.Capacity);
    pSVar4 = util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("Max Texture Size: %i\n"))),SStack_10.Capacity);
    util__Log(pSVar4);
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
    }
    util__Str_char___Str_char(&SStack_2c,"\n");
    util__Log(&SStack_2c);
    if (SStack_2c.Data != (char *)0x0) {
      port_op_delete(SStack_2c.Data);
    }
  }
  glClearColor(0,0,0,0);
  glClearDepth(0x3ff0000000000000);
  glTexEnvi(0x2300,0x2200,0x2100);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\infrastructure\\engine.cpp",0x78);
  util__Str_char___Str_char(&SStack_2c,"Shaders");
  pcVar1 = SStack_2c.Data;
  pcVar5 = "";
  if (0 < SStack_2c.Capacity) {
    pcVar5 = SStack_2c.Data;
  }
  util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("Loading %s..."))),pcVar5);
  StartLoading(&SStack_10);
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
  }
  DestroyAllShaders();
  bVar2 = SetupShaders(param_1);
  if (!bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\framework.h",0x36,
                    "Success || !CrashOnFailure",(char *)0x0);
    DebugBreak();
  }
  EndLoading((Timer *)&SStack_10);
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
  }
  InitializeFontLibrary();
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\infrastructure\\engine.cpp",0x82);
  GraphicsEngineIsInitialized = true;
  __security_check_cookie(SStack_10.Length ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0085a160 KeyCallback ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl KeyCallback(struct GLFWwindow *,int,int,int,int) */

void __cdecl KeyCallback(GLFWwindow *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  int TVar2;
  InputModifiers IStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar1 = GameManager__ShouldHandleInput(Game);
  if (bVar1) {
    if (param_4 == 1) {
      TVar2 = Pressed;
    }
    else if (param_4 == 2) {
      TVar2 = Repeated;
    }
    else {
      TVar2 = (param_4 != 0) + Released;
    }
    IStack_c.Shift = (bool)((byte)param_5 & 1);
    IStack_c.Control = (bool)((byte)((uint)param_5 >> 1) & 1);
    IStack_c.Alt = (bool)((byte)((uint)param_5 >> 2) & 1);
    IStack_c.Super = (bool)((byte)((uint)param_5 >> 3) & 1);
    if (TVar2 != Unknown) {
      GameManager__HandleKeyboardInput(Game,param_2,TVar2,&IStack_c);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0085a2f0 MouseMoveCallback ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl MouseMoveCallback(struct GLFWwindow *,double,double) */

void __cdecl MouseMoveCallback(GLFWwindow *param_1,double param_2,double param_3)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  Vec4_L_double_G_ VVar2;
  bool bVar3;
  Vec2_L_double_G_ *pVVar4;
  Vec2_L_double_G_ VStack_38;
  double dStack_28;
  double dStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar3 = GameManager__ShouldHandleInput(Game);
  if (bVar3) {
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    glfwGetCursorPos(MainWindow,(double *)&uStack_18,(double *)&uStack_10);
    pVVar4 = GetWindowToFramebufferScale(&VStack_38);
    dStack_28 = (double)CONCAT44(uStack_14,uStack_18);
    dStack_20 = (double)CONCAT44(uStack_c,uStack_10);
    dVar1 = dStack_20 / pVVar4->Y;
    VVar2.Y = SUB84(dVar1,0);
    VVar2.X = dStack_28 / pVVar4->X;
    VVar2.Z = (int)((ulonglong)dVar1 >> 0x20);
    GameManager__HandleMouseMove(Game,(*(Vec4_L_double_G_ *)&(VVar2)));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0085a370 RebuildWindow ====


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl RebuildWindow(bool) */

void RebuildWindow(bool)

{
  undefined8 stack0xfffffffc;
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  Str_L_char_G_ *pSVar9;
  PreferencesBase *pPVar10;
  GLFWcursor *pGVar11;
  char *pcVar12;
  Str_L_char_G_ local_28;
  char local_1a;
  char local_19;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  piVar3 = (int *)CapitalShipComponent__GetID();
  cVar2 = (**(code **)(uintptr_t)(*piVar3 + 0x84))();
  local_19 = cVar2;
  piVar3 = (int *)CapitalShipComponent__GetID();
  local_1a = (**(code **)(uintptr_t)(*piVar3 + 0xa4))();
  if ((MainWindowIsFullscreen == (bool)cVar2) && (!param_1)) {
LAB_0085a5f5:
    glfwSwapInterval(local_1a != '\0');
    MainWindowIsFullscreen = (bool)cVar2;
    if (MainWindow != (GLFWwindow *)0x0) {
      if (Game == (GameManager *)0x0) {
        pGVar11 = (GLFWcursor *)0x0;
      }
      else {
        pGVar11 = GameManager__RebuildCursorIcon(Game);
      }
      glfwSetCursor(MainWindow,pGVar11);
      if (MainWindow != (GLFWwindow *)0x0) {
        glfwSetInputMode(MainWindow,0x33001,0x34001);
      }
    }
    return;
  }
  GraphicsResourceInterface__DestroyAll();
  if (MainWindow != (GLFWwindow *)0x0) {
    glfwDestroyWindow(MainWindow);
  }
  uVar4 = (undefined4)(uintptr_t)(glfwGetPrimaryMonitor());
  puVar5 = (undefined4 *)glfwGetVideoMode((GLFWmonitor *)(uintptr_t)(uVar4));
  uVar4 = *puVar5;
  uVar1 = puVar5[1];
  if (cVar2 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = (undefined4)(uintptr_t)(glfwGetPrimaryMonitor());
  }
  util__Str_char___Str_char(&local_28,(Str_L_char_G_ *)&DAT_0098c9b0);
  pcVar12 = local_28.Data;
  pcVar7 = "";
  if (0 < local_28.Capacity) {
    pcVar7 = local_28.Data;
  }
  MainWindow = (GLFWwindow *)glfwCreateWindow(uVar4,uVar1,pcVar7,(GLFWmonitor *)(uintptr_t)(uVar6),0);
  if (pcVar12 != (char *)0x0) {
    port_op_delete(pcVar12);
  }
  if (MainWindow != (GLFWwindow *)0x0) {
    glfwSetInputMode(MainWindow,0x33001,0x34003);
    if (MainWindow != (GLFWwindow *)0x0) {
      glfwMakeContextCurrent(MainWindow);
      if (DAT_0098ca21 == '\0') {
        iVar8 = glewInit();
        if (iVar8 != 0) {
          uVar4 = (undefined4)(uintptr_t)(glewGetErrorString(iVar8));
          pSVar9 = util__Printf(&local_28,(wchar_t*)((wchar_t*)((wchar_t*)("Glew Setup Error: %s\n"))),uVar4);
          util__Log(pSVar9);
          util__Str_char____Str_char(&local_28);
                    /* WARNING: Subroutine does not return */
          exit(1);
        }
        DAT_0098ca21 = '\x01';
      }
      util__Str_char___Str_char(&local_28,(Str_L_char_G_ *)&DAT_0098c9dc);
      pcVar12 = "";
      if (0 < local_28.Capacity) {
        pcVar12 = local_28.Data;
      }
      glfwSetWindowTitle(MainWindow,pcVar12);
      if (local_28.Data != (char *)0x0) {
        port_op_delete(local_28.Data);
      }
      glfwSetKeyCallback(MainWindow,KeyCallback);
      glfwSetMouseButtonCallback(MainWindow, (void *)(MouseCallback));
      glfwSetCursorPosCallback(MainWindow,MouseMoveCallback);
      glfwSetScrollCallback(MainWindow,ScrollCallback);
      glfwSetCharCallback(MainWindow,TextCallback);
      glfwSetWindowSizeCallback(MainWindow,ResizeWindowCallback);
      glfwSetFramebufferSizeCallback(MainWindow, (void *)(ResizeFramebufferCallback));
      glfwGetWindowSize(MainWindow,&local_10,&local_c);
      ResizeFramebufferCallback(MainWindow,local_10,local_c);
      glfwGetWindowSize(MainWindow,&local_14,&local_18);
      (*(struct Quaternion_L_double_G_ *)(WindowDimensions)).X = local_14;
      (*(struct Quaternion_L_double_G_ *)(WindowDimensions)).Y = local_18;
      pPVar10 = (PreferencesBase *)CapitalShipComponent__GetID();
      InitGL(pPVar10);
      GraphicsResourceInterface__ReinitializeAll();
      GameManager__LoadGraphicsResources(Game);
      GameManager__GetPostProcessor(Game);
      PostProcessor__ForceInitialize();
      cVar2 = local_19;
      goto LAB_0085a5f5;
    }
  }
  glfwTerminate();
                    /* WARNING: Subroutine does not return */
  exit(1);
}





//==== 0085a680 ResizeFramebufferCallback ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl ResizeFramebufferCallback(struct GLFWwindow *,int,int) */

void ResizeFramebufferCallback__o3(GLFWwindow *param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  
  (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X = param_2;
  (*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).Y = param_3;
  piVar2 = (int *)CapitalShipComponent__GetID();
  fVar3 = (float10)(**(code **)(uintptr_t)(*piVar2 + 0xa0))();
  dVar5 = GetMinimumResolutionScalingFactor();
  dVar4 = (double)fVar3;
  if ((double)fVar3 <= dVar5) {
    dVar4 = dVar5;
  }
  (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0)) =
       (int)((double)(*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).X * dVar4);
  (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)) =
       (int)((double)(*(struct Quaternion_L_double_G_ *)(ScreenFramebufferDimensions)).Y * dVar4);
  bVar1 = AreGraphicsReady();
  if (((bVar1) && (0 < (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 0)))) &&
     (0 < (*(undefined4 *)((char *)&(Graphics__GlobalState.ViewMatrix.Data[0xf]) + 4)))) {
    GameManager__GetPostProcessor(Game);
    PostProcessor__Initialize();
  }
  return;
}





//==== 0085a730 ResizeWindowCallback ====


/* void __cdecl ResizeWindowCallback(struct GLFWwindow *,int,int) */

void __cdecl ResizeWindowCallback(GLFWwindow *param_1,int param_2,int param_3)

{
  (*(struct Quaternion_L_double_G_ *)(WindowDimensions)).X = param_2;
  (*(struct Quaternion_L_double_G_ *)(WindowDimensions)).Y = param_3;
  return;
}





//==== 0085a750 ScrollCallback ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl ScrollCallback(struct GLFWwindow *,double,double) */

void __cdecl ScrollCallback(GLFWwindow *param_1,double param_2,double param_3)

{
  undefined8 stack0xfffffffc;
  double dVar1;
  Vec4_L_double_G_ VVar2;
  Vec4_L_double_G_ VVar3;
  bool bVar4;
  Vec2_L_double_G_ *pVVar5;
  undefined4 in_stack_00000008;
  Vec2_L_double_G_ VStack_38;
  double dStack_28;
  double dStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar4 = GameManager__ShouldHandleInput(Game);
  if (bVar4) {
    uStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_c = 0;
    glfwGetCursorPos(MainWindow,(double *)&uStack_18,(double *)&uStack_10);
    pVVar5 = GetWindowToFramebufferScale(&VStack_38);
    dStack_28 = (double)CONCAT44(uStack_14,uStack_18);
    dStack_20 = (double)CONCAT44(uStack_c,uStack_10);
    VVar3.Y = (*(uint32_t*)&(param_2));
    VVar3.X = in_stack_00000008;
    dVar1 = dStack_20 / pVVar5->Y;
    VVar2.Y = SUB84(dVar1,0);
    VVar2.X = dStack_28 / pVVar5->X;
    VVar2.Z = (int)((ulonglong)dVar1 >> 0x20);
    VVar3.Y = (*(uint32_t*)((char*)&(param_2)+4));
    VVar3.Z = (*(uint32_t*)&(param_3));
    GameManager__HandleMouseWheelInput(Game,VVar3,(*(Vec4_L_double_G_ *)&(VVar2)));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0085a7e0 SetCursorIcon ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl SetCursorIcon(void) */

void __cdecl SetCursorIcon(void)

{
  GLFWcursor *pGVar1;
  
  if (MainWindow != (GLFWwindow *)0x0) {
    if (Game != (GameManager *)0x0) {
      pGVar1 = GameManager__RebuildCursorIcon(Game);
      glfwSetCursor(MainWindow,pGVar1);
      return;
    }
    glfwSetCursor(MainWindow,0);
  }
  return;
}





//==== 0085a820 SetGameStringInfo ====


/* void __cdecl SetGameStringInfo(class util__Str_L_char_G_ const &,class util__Str_L_char_G_ const &,class
   util__Str_L_char_G_ const &) */

void __cdecl SetGameStringInfo(Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3)

{
  if (DAT_0098ca20 != '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\engine.cpp",0x13,
                    "!SingleUse",(char *)0x0);
    DebugBreak();
  }
  util__Str_char___operator__o8((Str_L_char_G_ *)&DAT_0098c9dc,param_1);
  util__Str_char___operator__o8((Str_L_char_G_ *)&DAT_0098c9b0,param_2);
  util__Str_char___operator__o8((Str_L_char_G_ *)&DAT_0098c984,param_3);
  DAT_0098ca20 = 1;
  return;
}





//==== 0085a880 SetWindowCursorVisibility ====


/* void __cdecl SetWindowCursorVisibility(bool) */

void __cdecl SetWindowCursorVisibility(bool)

{
  if (MainWindow != (GLFWwindow *)0x0) {
    glfwSetInputMode(MainWindow,0x33001,(param_1 ^ 1) * 2 + 0x34001);
  }
  return;
}





//==== 0085a8b0 TextCallback ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl TextCallback(struct GLFWwindow *,unsigned int) */

void __cdecl TextCallback(GLFWwindow *param_1,uint param_2)

{
  bool bVar1;
  
  bVar1 = GameManager__ShouldHandleInput(Game);
  if (bVar1) {
    GameManager__HandleTextInput(Game,param_2);
  }
  return;
}





//==== 0085a8e0 Atlas ====


/* public:  Icons__Atlas__Atlas(int,struct util__Vec2_L_int_G_,void (__cdecl** const)(void))
    */

Atlas * 
Icons__Atlas__Atlas(Atlas *this,int param_1,Vec4_L_int_G_ param_2,_func_void **param_3)

{
  int iVar1;
  int TVar2;
  bool bVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  CustomTexture__CustomTexture(&this->AtlasTexture);
  this[1].AtlasTexture.TextureSize.Y = param_2.X;
  this[1].AtlasTexture.Texture = param_2.Y;
  this[1].AtlasTexture.Type = param_2.X / param_1;
  *(int *)&this[1].AtlasTexture.IsTextureMipmapped = param_2.Y / param_1;
  iVar1 = *(int *)&this[1].AtlasTexture.IsTextureMipmapped;
  TVar2 = this[1].AtlasTexture.Type;
  this[1].TotalTextureSize.X = (int)param_3;
  this[1].TotalTextureSize.Y = 0;
  uVar7 = iVar1 * TVar2 * 2;
  this[1].IconAtlasCount.X = uVar7;
  if ((((int)uVar7 < 1) && (0x3ffffffe < (int)uVar7)) ||
     (((int)uVar7 < 0x40000000 && (-1 < (int)uVar7)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    this[1].IconAtlasCount.X = 0;
    return this;
  }
  if (0 < (int)uVar7) {
    uVar6 = -(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x10);
    puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
    if (puVar4 == (uint *)0x0) {
      puVar4 = (uint *)0x0;
    }
    else {
      *puVar4 = uVar7;
      puVar4 = puVar4 + 1;
      puVar5 = puVar4;
      if (uVar7 != 0) {
        do {
          *puVar5 = (uint)&vftable_567;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          uVar7 = uVar7 - 1;
          puVar5 = puVar5 + 4;
        } while (uVar7 != 0);
        this[1].TotalTextureSize.Y = (int)puVar4;
        return this;
      }
    }
    this[1].TotalTextureSize.Y = (int)puVar4;
  }
  return this;
}





//==== 0085a9d0 CustomCursor ====


/* public: __thiscall Icons__CustomCursor__CustomCursor(void (__cdecl*)(struct util__Color,struct
   util__Color)) */

CustomCursor * __thiscall
Icons__CustomCursor__CustomCursor(CustomCursor *this,_func_void_Color_Color *param_1)

{
  this->IconFunction = (_func___cdecl_void_Color_Color *)param_1;
  return this;
}





//==== 0085a9e0 NormalTexture3DShader ====

/* public: __thiscall NormalTexture3DShader__NormalTexture3DShader(void) */

NormalTexture3DShader * __thiscall
NormalTexture3DShader__NormalTexture3DShader(NormalTexture3DShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_566;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0085acf0 vector_deleting_destructor_0085acf0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_struct_util__tuple2_L_int_Cint_G__Cint_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_struct_util__tuple2_int_int__int______vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_struct_util__tuple2_L_int_Cint_G__Cint_G___G_ *this,uint param_1)

{
  Darray_L_struct_util__tuple2_L_struct_util__tuple2_L_int_Cint_G__Cint_G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_struct_util__tuple2_L_int_Cint_G__Cint_G___G_ *pDVar2;
  Darray_L_struct_util__tuple2_L_struct_util__tuple2_L_int_Cint_G__Cint_G___G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = &vftable_567;
      if (*(void **)(pDVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(pDVar3 + -0xc));
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
  *(undefined ***)this = &vftable_567;
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





//==== 0085adb0 Build_0085adb0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall Icons__Atlas__Build(void) */

void __thiscall Icons__Atlas__Build(Atlas *this)

{
  undefined8 stack0xfffffffc;
  IndexedFace *pIVar1;
  uint uVar2;
  IndexedFace *pIVar3;
  Maybe_L_util__AABB_L_util__Vec2_L_int_G___G___G_ MVar4;
  Vec3_L_double_G_ VVar5;
  Vec3_L_double_G_ VVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  NormalShader *pNVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  Darray_L_IndexedFace_G_ *this_00;
  code *pcVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_64;
  bool bStack_60;
  undefined3 uStack_5f;
  int local_5c;
  int local_50;
  int local_4c;
  TextureInitOptions local_48;
  Maybe_L_TemporaryFramebuffer_G_ local_20;
  ShaderStack local_12;
  DepthStack local_11;
  CullStack local_10;
  BlendStack local_f;
  ScissorStack local_e;
  TransformStack local_d;
  code *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar8 = this[1].AtlasTexture.TextureSize.Y / (int)this[1].AtlasTexture.Type;
  iVar9 = (int)this[1].AtlasTexture.Texture / *(int *)&this[1].AtlasTexture.IsTextureMipmapped;
  (**(code **)((this->AtlasTexture)._pad_0x0_0 + 4))();
  bVar7 = GraphicsResourceInterface__IsGraphicsResourceInGlobalListing
                    ((GraphicsResourceInterface *)this);
  pcVar18 = DebugBreak_exref;
  if (!bVar7) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0x1e,
                    "GraphicsResourceInterface__IsGraphicsResourceInGlobalListing(&AtlasTexture)",
                    (char *)0x0);
    DebugBreak();
  }
  uStack_64 = uStack_64 & 0xffffff00;
  local_48.NearestFiltering = false;
  local_48.TextureR = Repeat;
  local_48.Quality = EightBit;
  local_48.TextureT = ClampToBorder;
  local_48.TextureS = ClampToBorder;
  local_48.Mipmaps.Data.MinLevel = 0;
  local_48.Mipmaps.Data.MaxLevel.Data = 0;
  (*(uint32_t *)((char *)&(local_48.Mipmaps.Data.MaxLevel) + 4)) = uStack_64;
  local_48.Mipmaps.IsValidData = true;
  (*(uint32_t *)((char *)&(local_48.Mipmaps) + 13)) = uStack_5f;
  local_48.Channels = RGBA;
  CustomTexture__InitializeAndGetTemporaryFramebuffer
            (&this->AtlasTexture,&local_20,*(Vec3_L_int_G_ *)&this[1].AtlasTexture.TextureSize.Y,
             &local_48);
  if (local_20.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0x25,"Framebuffer",
                    (char *)0x0);
    DebugBreak();
    if (local_20.IsValidData == false) {
      return;
    }
  }
  pNVar10 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_12,(Shader *)pNVar10);
  glColorAlpha(Preset__Black,0.0,1.0);
  RenderFullscreenQuad((*(Vec3_L_int_G_ *)&(*(Vec2_L_int_G_ *)&this[1].AtlasTexture.TextureSize.Y)));
  Graphics__DepthStack__DepthStack(&local_11,DepthMode__Disabled);

  Graphics__CullStack__CullStack(&local_10,CullMode__Disabled);
  Graphics__BlendStack__BlendStack__o5(&local_f,BlendMode__Disabled);
  piVar13 = (int *)this[1].TotalTextureSize.X;
  local_4c = 0;
  local_50 = 0;
  local_5c = 0;
  if (*piVar13 != 0) {
    local_c = (code *)0x0;
    dVar20 = (double)iVar8 * 0.5;
    dVar21 = (double)iVar9 * 0.5;
    do {
      if ((int)(this[1].AtlasTexture.Type * *(int *)&this[1].AtlasTexture.IsTextureMipmapped) <=
          local_5c) {
        util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0x36,
                        "i < IconAtlasCount.X * IconAtlasCount.Y",(char *)0x0);
        DebugBreak();
        piVar13 = (int *)this[1].TotalTextureSize.X;
      }
      local_c = *(code **)(local_c + (int)piVar13);
      glScaleColor(1.0);
      glColor(Preset__White,1.0);
      uVar25 = 0x85af9f;
      glLineWidth(0x40000000);
      dVar24 = (double)iVar8;
      dVar22 = dVar24 * (double)local_4c;
      dVar19 = (double)iVar9;
      dVar23 = dVar19 * (double)local_50;
      iVar14 = (int)dVar22;
      iVar15 = (int)(dVar24 + dVar22);
      iVar17 = (int)(dVar19 + dVar23);
      iVar12 = iVar14;
      if (iVar15 <= iVar14) {
        iVar12 = iVar15;
      }
      iVar16 = (int)dVar23;
      iVar11 = iVar16;
      if (iVar17 <= iVar16) {
        iVar11 = iVar17;
      }
      if (iVar14 <= iVar15) {
        iVar14 = iVar15;
      }
      if (iVar16 <= iVar17) {
        iVar16 = iVar17;
      }
      (*(uint32_t *)((char *)&(MVar4) + 17)) = (int3)((uint)uVar25 >> 8);
      MVar4.IsValidData = true;
      MVar4.Data.Lower.Y = iVar11;
      MVar4.Data.Lower.X = iVar12;
      MVar4.Data.Upper.X = iVar14;
      MVar4.Data.Upper.Y = iVar16;
      Graphics__ScissorStack__ScissorStack(&local_e,(undefined4)((*(undefined4 *)&(MVar4))),0,0,0,0);
      Graphics__TransformStack__TransformStack(&local_d,Style__Default);
      VVar5.Y = SUB84(dVar21 + dVar23,0);
      VVar5.X = dVar20 + dVar22;
      VVar5.Z = (int)((ulonglong)(dVar21 + dVar23) >> 0x20);
      { Vec4_L_double_G_ _t; _t.X = dVar20 + dVar22; _t.Y = dVar21 + dVar23; Graphics__Translate__o3(_t); }
      uStack_a4 = SUB84(dVar21,0);
      uStack_a0 = (undefined4)((ulonglong)dVar21 >> 0x20);
      VVar6.Y = uStack_a4;
      VVar6.X = dVar20;
      VVar6.Z = uStack_a0;
      { Vec4_L_double_G_ _t; _t.X = dVar20; _t.Y = dVar21; Graphics__Scale__o3(_t); }
      pcVar18 = local_c;
      (*local_c)();
      glScaleColor(1.0);
      uVar2 = this[1].IconAtlasCount.X;
      if (uVar2 != 0) {
        local_c = (code *)0x0;
        this_00 = (Darray_L_IndexedFace_G_ *)
                  (((uint)((int)pcVar18 * -0x61c8864f) % uVar2) * 0x10 + this[1].TotalTextureSize.Y)
        ;
        iVar12 = (**(code **)(this_00->_pad_0x0_0 + 0xc))();
        if ((int)local_c < iVar12) {
          do {
            piVar13 = (int *)(**(code **)this_00->_pad_0x0_0)(&local_c);
            if ((code *)*piVar13 == pcVar18) {
              iVar12 = (**(code **)this_00->_pad_0x0_0)(&local_c);
              *(int *)(iVar12 + 4) = local_4c;
              *(int *)(iVar12 + 8) = local_50;
              goto LAB_0085b140;
            }
            local_c = local_c + 1;
            iVar12 = (*(code *)((undefined4 *)this_00->_pad_0x0_0)[3])();
          } while ((int)local_c < iVar12);
        }
        iVar12 = this_00->Size;
        local_c = (code *)(iVar12 + 1);
        util__Darray_L_IndexedFace_G___SetSize(this_00,(int *)&local_c);
        bVar7 = util__Darray_L_util__tuple2_L_void____cdecl_P__void__Cutil__Vec2_L_int_G___G___G___CheckSize
                          ((Darray_L_util__tuple2_L_void____cdecl_P__void__Cutil__Vec2_L_int_G___G___G_ *)this_00,
                           iVar12);
        if (bVar7) {
          iVar12 = this_00->Size;
          pIVar3 = this_00->Data;
          pIVar1 = pIVar3 + iVar12 + -1;
          pIVar1->A = (int)pcVar18;
          pIVar1->B = local_4c;
          pIVar3[iVar12 + -1].C = local_50;
        }
      }
LAB_0085b140:
      local_4c = local_4c + 1;
      if ((int)this[1].AtlasTexture.Type <= local_4c) {
        local_50 = local_50 + 1;
        local_4c = 0;
        if (*(int *)&this[1].AtlasTexture.IsTextureMipmapped <= local_50) {
          util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0x50,
                          "Offset.Y < IconAtlasCount.Y",(char *)0x0);
          DebugBreak();
        }
      }
      Graphics__TransformStack___TransformStack(&local_d);
      ScissorStack__dtor(&local_e);
      piVar13 = (int *)this[1].TotalTextureSize.X;
      local_5c = local_5c + 1;
      local_c = (code *)(local_5c * 4);
      pcVar18 = DebugBreak_exref;
    } while (piVar13[local_5c] != 0);
  }
  if (local_20.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    (*pcVar18)();
  }
  TemporaryFramebuffer__Cleanup(&local_20.Data);
  BlendStack__dtor(&local_f);
  CullStack__dtor(&local_10);
  DepthStack__dtor(&local_11);
  Graphics__ShaderStack___ShaderStack(&local_12);
  return;
}

//==== 0085b210 Build_0085b210 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void  Icons__CustomCursor__Build(struct util__Color,struct util__Color,struct
   util__Matrix3_L_unsignedchar_G_ *) */

void 
Icons__CustomCursor__Build
          (CustomCursor *this,Color param_1,Color param_2,Matrix3_L_unsigned_char_G_ *param_3)

{
  undefined8 stack0xffffff10;
  undefined8 stack0xffffff30;
  undefined8 stack0xfffffffc;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar1;
  Color CVar2;
  Color CVar3;
  Vec4_L_double_G_ VVar4;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar5;
  bool bVar6;
  Matrix3_L_unsigned_char_G_ *pMVar7;
  uint uVar8;
  NormalShader *pNVar9;
  int TVar10;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *this_00;
  uint uVar11;
  int iVar12;
  int iVar13;
  Matrix3_L_unsigned_char_G_ *pMVar14;
  code *pcVar15;
  Str_L_char_G_ in_stack_ffffff10;
  undefined **ppuVar16;
  char *in_stack_ffffff30;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  CustomCursor *local_a4;
  CustomTexture local_a0 [2];
  Darray_L_int_G_ local_64;
  TextureInitOptions local_54;
  Maybe_L_TemporaryFramebuffer_G_ local_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint uStack_18;
  int TStack_14;
  ShaderStack local_d;
  DepthStack local_c;
  CullStack local_b;
  BlendStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_a4 = this;
  CustomTexture__CustomTexture(local_a0);
  pcVar15 = DebugBreak_exref;
  uStack_1c = 4;
  uStack_18 = 0x20;
  if (param_3->Data != (uchar *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x37a
                    ,"!IsValid()",(char *)0x0);
    DebugBreak();
  }
  (param_3->Size).X = uStack_1c;
  (param_3->Size).Y = uStack_18;
  (param_3->Size).Z = 0x20;
  iVar12 = (param_3->Size).X;
  if (((iVar12 < 1) || (iVar17 = (param_3->Size).Y, iVar17 < 1)) ||
     (iVar13 = (param_3->Size).Z, iVar13 < 1)) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\matrix.inl",0x37c
                    ,"Size.X > 0 && Size.Y > 0 && Size.Z > 0",(char *)0x0);
    DebugBreak();
    iVar13 = (param_3->Size).Z;
    iVar17 = (param_3->Size).Y;
    iVar12 = (param_3->Size).X;
  }
  pMVar7 = (Matrix3_L_unsigned_char_G_ *)(uintptr_t)(port_op_new(iVar13 * iVar17 * iVar12));
  iVar12 = (param_3->Size).Z;
  iVar17 = (param_3->Size).Y;
  iVar13 = 0;
  param_3->Data = (uchar *)pMVar7;
  uVar11 = iVar12 * iVar17 * (param_3->Size).X;
  if (0 < (int)uVar11) {
    if ((0xf < uVar11) &&
       ((param_3 < pMVar7 || ((Matrix3_L_unsigned_char_G_ *)((uVar11 - 1) + (int)pMVar7) < param_3)))) {
      uVar8 = uVar11 & 0x8000000f;
      if ((int)uVar8 < 0) {
        uVar8 = (uVar8 - 1 | 0xfffffff0) + 1;
      }
      do {
        iVar13 = iVar13 + 0x10;
      } while (iVar13 < (int)(uVar11 - uVar8));
      iVar12 = (uVar11 - uVar8) + 0xf;
      pMVar14 = pMVar7;
      for (uVar8 = ((iVar12 >> 0x1f & 0xfU) + iVar12 & 0xfffffff0) >> 2; uVar8 != 0;
          uVar8 = uVar8 - 1) {
        pMVar14->Data = (uchar *)0x0;
        pMVar14 = (Matrix3_L_unsigned_char_G_ *)&pMVar14->Size;
      }
      for (iVar12 = 0; pcVar15 = DebugBreak_exref, iVar12 != 0; iVar12 = iVar12 + -1) {
        *(undefined1 *)&pMVar14->Data = 0;
        pMVar14 = (Matrix3_L_unsigned_char_G_ *)((int)&pMVar14->Data + 1);
      }
    }
    for (; iVar13 < (int)uVar11; iVar13 = iVar13 + 1) {
      param_3->Data[iVar13] = '\0';
    }
  }
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = uStack_18 & 0xffffff00;
  TStack_14 = CONCAT31((int3)((uint)pMVar7 >> 8),1);
  local_54.NearestFiltering = false;
  local_54.TextureR = Repeat;
  local_54.Quality = EightBit;
  local_54.TextureT = ClampToBorder;
  local_54.TextureS = ClampToBorder;
  local_54.Mipmaps.Data.MinLevel = 0;
  local_54.Mipmaps.Data.MaxLevel.Data = 0;
  (*(uint32_t *)((char *)&(local_54.Mipmaps.Data.MaxLevel) + 4)) = uStack_18;
  (*(uint32_t *)((char *)&(local_54.Mipmaps) + 12)) = TStack_14;
  local_54.Channels = RGBA;
  CustomTexture__InitializeAndGetTemporaryFramebuffer
            (local_a0,&local_2c,(*(Vec3_L_int_G_ *)cde_zextb(0x8000000080ul,16)),&local_54);
  if (local_2c.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0xf8,"Framebuffer",
                    (char *)0x0);
    (*pcVar15)();
    if (local_2c.IsValidData == false) goto LAB_0085b55f;
  }
  pNVar9 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_d,(Shader *)pNVar9);
  glColorAlpha(Preset__Black,0.0,1.0);
  iVar12 = 0x85b40e;
  RenderFullscreenQuad((*(Vec3_L_int_G_ *)((void *)({ Vec2_L_int_G_ _t; *(uint64_t *)&_t = 0x8000000080ul; (void *)&_t; }))));
  Graphics__DepthStack__DepthStack(&local_c,DepthMode__Disabled);

  Graphics__CullStack__CullStack(&local_b,CullMode__Disabled);
  Graphics__BlendStack__BlendStack__o5(&local_a,BlendMode__Disabled);
  glScaleColor(1.0);
  glColor(Preset__White,1.0);
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  iVar17 = 0x85b46b;
  VVar4.Z = 0x40600000;
  (*(uint32_t *)((char *)&(VVar4) + 0)) = ZEXT812(0x4060000000000000);
  Graphics__Scale__o3(VVar4);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff30,(Str_L_char_G_ *)&param_2._pad_0x4_1);
  ppuVar16 = &vftable_59;
  fVar18 = param_2.Hue_degrees;
  fVar19 = param_2.Saturation;
  fVar20 = param_2.Value;
  fVar21 = param_2.Alpha;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff10,(Str_L_char_G_ *)&param_1._pad_0x4_1);
  CVar2._pad_0x4_1 = (int)in_stack_ffffff10.Data;
  CVar2._pad_0x8_2 = in_stack_ffffff10.Capacity;
  CVar2._pad_0xc_3 = in_stack_ffffff10.Length;
  CVar2._pad_0x0_0 = (int)&vftable_59;
  CVar2.Hue_degrees = param_1.Hue_degrees;
  CVar2.Saturation = param_1.Saturation;
  CVar2.Value = param_1.Value;
  CVar2.Alpha = param_1.Alpha;
  CVar3._pad_0x4_1 = (int)in_stack_ffffff30;
  CVar3._pad_0x0_0 = (int)ppuVar16;
  CVar3._pad_0x8_2 = iVar12;
  CVar3._pad_0xc_3 = iVar17;
  CVar3.Hue_degrees = fVar18;
  CVar3.Saturation = fVar19;
  CVar3.Value = fVar20;
  CVar3.Alpha = fVar21;
  (*local_a4->IconFunction)(CVar2,CVar3);
  glScaleColor(1.0);
  Graphics__TransformStack___TransformStack(&local_9);
  if (local_2c.IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                    "IsValid()",(char *)0x0);
    (*pcVar15)();
  }
  TemporaryFramebuffer__Cleanup(&local_2c.Data);
  BlendStack__dtor(&local_a);
  CullStack__dtor(&local_b);
  DepthStack__dtor(&local_c);
  Graphics__ShaderStack___ShaderStack(&local_d);
LAB_0085b55f:
  local_a4 = (CustomCursor *)0x0;
  util__Darray_int___SingleItem(&local_64,(int *)&local_a4);
  Graphics__TextureStack__PeekState((int)&uStack_18);
  TVar10 = (**(code **)(uintptr_t)(local_a0[0]._pad_0x0_0 + 0x18))();
  local_a4 = (CustomCursor *)(**(code **)(uintptr_t)(local_a0[0]._pad_0x0_0 + 0x14))();
  this_00 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(Graphics__TextureStack__GetStack(0));
  iVar17 = this_00->Size;
  iVar12 = iVar17 + 1;
  this_00->Size = iVar12;
  this_00->EndData = this_00->Data + iVar12;
  bVar6 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(this_00,iVar17);
  if (bVar6) {
    ptVar1 = this_00->Data;
    iVar12 = this_00->Size;
    ptVar1[iVar12 + -1].Value1 = (uint)local_a4;
    ptVar1[iVar12 + -1].Value2 = TVar10;
  }
  tVar5.Value2 = TStack_14;
  tVar5.Value1 = uStack_18;
  Graphics__TextureStack__AlterState((undefined4)(uintptr_t)&local_64,tVar5.Value1,tVar5.Value2,0);
  glGetTexImage();
  Graphics__TextureStack___TextureStack((TextureStack *)&local_64);
  CustomTexture__Destroy(local_a0);
  local_a0[0]._pad_0x0_0 = (int)&vftable_141;
  CustomTexture__Destroy(local_a0);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)local_a0);
  param_1._pad_0x0_0 = (int)&vftable_5;
  if (param_1._pad_0x4_1 != 0) {
    port_op_delete((void *)param_1._pad_0x4_1);
    param_1._pad_0x4_1 = 0;
  }
  param_2._pad_0x0_0 = (int)&vftable_5;
  if (param_2._pad_0x4_1 != 0) {
    port_op_delete((void *)param_2._pad_0x4_1);
  }
  return;
}

//==== 0085b6a0 CheckSize_0085b6a0 ====


/* private: bool  util__Darray_L_structutil__tuple2_L_void___cdecl_P__void__Cstruct_util__Vec2_L_int_G__G__G___CheckSize(int) */

bool 
util__Darray_struct_util__tuple2_void____cdecl___void__struct_util__Vec2_int_______CheckSize
          (Darray_L_struct_util__tuple2_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G___G_ *this,
          int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar5 = *(uint *)(this + 8);
  bVar10 = -1 < (int)uVar5;
  bVar2 = !bVar10;
  if (bVar2) {
    puStack_c = (undefined8 *)0x0;
    Darray_L_struct_IndexedFace_G___SetSize((Darray_L_struct_IndexedFace_G_ *)this,(int *)&puStack_c);
    uVar5 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar5 < 0x40000000;
  if (!bVar2) {
    puStack_c = (undefined8 *)0x3fffffff;
    Darray_L_struct_IndexedFace_G___SetSize((Darray_L_struct_IndexedFace_G_ *)this,(int *)&puStack_c);
    uVar5 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar8 = *(uint *)(this + 0xc);
  if ((int)uVar5 <= (int)uVar8) {
    return bVar2 && bVar10;
  }
  if (uVar8 == 0) {
    *(uint *)(this + 0xc) = uVar5;
    uVar8 = uVar5;
  }
  if ((int)uVar8 < (int)uVar5) {
    do {
      uVar8 = uVar8 * 2;
    } while ((int)uVar8 < (int)uVar5);
    *(uint *)(this + 0xc) = uVar8;
  }
  if (0x3fffffff < (int)uVar8) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar8 = 0x3fffffff;
  }
  puStack_c = (undefined8 *)
              port_op_new(-(uint)((int)((ulonglong)uVar8 * 0xc >> 0x20) != 0) |
                             (uint)((ulonglong)uVar8 * 0xc));
  if (puStack_c == (undefined8 *)0x0) {
    puStack_c = (undefined8 *)0x0;
  }
  else if (uVar8 != 0) {
    puVar4 = (undefined4 *)((int)puStack_c + 4);
    do {
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      uVar8 = uVar8 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar8 != 0);
  }
  puVar3 = puStack_c;
  puVar6 = *(undefined8 **)(this + 4);
  if (puVar6 != (undefined8 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar7 = puVar6;
    puVar9 = puStack_c;
    if (puVar6 != (undefined8 *)(param_1 * 0xc + (int)puVar6)) {
      do {
        if (puVar9 == (undefined8 *)((int)puStack_c + iVar1 * 0xc)) break;
        *puVar9 = *puVar6;
        puVar7 = puVar6 + 1;
        puVar6 = (undefined8 *)((int)puVar6 + 0xc);
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)puVar7;
        puVar7 = *(undefined8 **)(this + 4);
        puVar9 = (undefined8 *)((int)puVar9 + 0xc);
      } while (puVar6 != (undefined8 *)(param_1 * 0xc + (int)puVar7));
    }
    port_op_delete(puVar7);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined8 **)(this + 4) = puVar3;
  return bStack_5;
}





//==== 0085ba80 DrawIcon ====


/* public: void __thiscall Icons__Atlas__DrawIcon(void (__cdecl*)(void),bool)const  */

void __thiscall Icons__Atlas__DrawIcon(Atlas *this,_func_void *param_1,bool param_2)

{
  undefined8 stack0xfffffffc;
  Vec2_L_int_G_ *pVVar1;
  NormalTexture3DShader *pNVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  Atlas *pAStack_20;
  TextureStack TStack_1c;
  BlendStack BStack_b;
  ShaderStack SStack_a;
  DrawStack DStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pAStack_20 = (Atlas *)param_1;
  if (param_1 != (_func_void *)0x0) {
    pVVar1 = util__HashMap_void____cdecl___void__struct_util__Vec2_int_____Find
                       ((HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *)
                        &this[1].TotalTextureSize.Y,(_func_void **)&pAStack_20);
    dVar3 = (double)(int)this[1].AtlasTexture.Type;
    dVar4 = (double)*(int *)&this[1].AtlasTexture.IsTextureMipmapped;
    dVar5 = (double)pVVar1->X / dVar3;
    dVar6 = (double)pVVar1->Y / dVar4;
    dVar3 = (double)(pVVar1->X + 1) / dVar3;
    dVar4 = (double)(pVVar1->Y + 1) / dVar4;
    pAStack_20 = this;
    Graphics__TextureStack__TextureStack_L_struct_CustomTexture_P_G_
              (&TStack_1c,(CustomTexture **)&pAStack_20,0);
    if (param_2) {
      pNVar2 = NormalTexture3DShader__GetStatic();
    }
    else {
      pNVar2 = (NormalTexture3DShader *)NormalTextureShader__GetStatic();
    }
    Graphics__BlendStack__BlendStack__o5(&BStack_b, 0);
    Graphics__ShaderStack__ShaderStack(&SStack_a,(Shader *)pNVar2);
    Graphics__DrawStack__DrawStack(&DStack_9,7);
    Graphics__TexCoord__o4(dVar5, dVar6);
    Graphics__Vertex(-1.0,-1.0);
    Graphics__TexCoord__o4(dVar3, dVar6);
    Graphics__Vertex(1.0,-1.0);
    Graphics__TexCoord__o4(dVar3, dVar4);
    Graphics__Vertex(1.0,1.0);
    Graphics__TexCoord__o4(dVar5, dVar4);
    Graphics__Vertex(-1.0,1.0);
    Graphics__DrawStack___DrawStack(&DStack_9);
    Graphics__ShaderStack___ShaderStack(&SStack_a);
    BlendStack__dtor(&BStack_b);
    Graphics__TextureStack___TextureStack(&TStack_1c);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0085bc30 GetDefaultSetters_0085bc30 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   NormalTexture3DShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl NormalTexture3DShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_36299496__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_36299496__thread_safe_static_guard_0__);
    if ( cde_l2_36299496__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_94cfd361_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_94cfd361_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_94cfd361_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_NormalTexture3DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_36299496__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_94cfd361_DefaultSetters;
}





//==== 0085bce0 GetStatic_0085bce0 ====


/* public: static class NormalTexture3DShader * __cdecl NormalTexture3DShader__GetStatic(void) */

NormalTexture3DShader * __cdecl NormalTexture3DShader__GetStatic(void)

{
  NormalTexture3DShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_01b82244__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9e859412__thread_safe_static_guard_0__);
    if ( cde_l2_9e859412__thread_safe_static_guard_0__ == -1) {
      this = (NormalTexture3DShader *)port_op_new(0x58);
      if (this == (NormalTexture3DShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x58);
        pSVar1 = (Shader *)NormalTexture3DShader__NormalTexture3DShader(this);
      }
       cde_l2_f6cc6630_Singleton = (NormalTexture3DShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_9e859412__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_b248096c_Singleton;
}





//==== 0085bd60 GetTotalTextureSize ====


/* public: struct util__Vec2_L_int_G_ __thiscall Icons__Atlas__GetTotalTextureSize(void)const  */

Vec2_L_int_G_ __thiscall Icons__Atlas__GetTotalTextureSize(Atlas *this)

{
  int iVar1;
  uint uVar2;
  Vec4_L_int_G_ VVar3;
  int *in_stack_00000004;
  
  iVar1 = this[1].AtlasTexture.TextureSize.Y;
  uVar2 = this[1].AtlasTexture.Texture;
  *in_stack_00000004 = iVar1;
  in_stack_00000004[1] = uVar2;
  VVar3.Y = iVar1;
  VVar3.X = (int)in_stack_00000004;
}





//==== 0085bd80 GetValueLocations_0085bd80 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   NormalTexture3DShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl NormalTexture3DShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_39d4eed6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_39d4eed6__thread_safe_static_guard_0__);
    if ( cde_l2_39d4eed6__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_9d7e1609_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_9d7e1609_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_9d7e1609_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_NormalTexture3DShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_39d4eed6__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_9d7e1609_ValueLocations;
}





//==== 0085be10 IconIsInAtlas ====


/* public: bool __thiscall Icons__Atlas__IconIsInAtlas(void (__cdecl*)(void))const  */

bool __thiscall Icons__Atlas__IconIsInAtlas(Atlas *this,_func_void *param_1)

{
  undefined8 stack0xfffffffc;
  Vec2_L_int_G_ *pVVar1;
  undefined1 uVar2;
  _func_void *p_Stack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  p_Stack_c = param_1;
  pVVar1 = util__HashMap_void____cdecl___void__struct_util__Vec2_int_____Find
                     ((HashMap_L_void____cdecl_P__void__Cstruct_util__Vec2_L_int_G___G_ *)
                      &this[1].TotalTextureSize.Y,&p_Stack_c);
  uVar2 = pVVar1 != (Vec2_L_int_G_ *)0x0;
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar2;
}





//==== 0085be50 LoadFarPlaneLocation_0085be50 ====

/* private: static void __cdecl NormalTexture3DShader__LoadFarPlaneLocation(void) */

void __cdecl NormalTexture3DShader__LoadFarPlaneLocation(void)

{
  NormalTexture3DShader *pNVar1;
  NormalTexture3DShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pNVar1 = NormalTexture3DShader__GetStatic();
  pcVar4 = "FarPlane";
  pNVar2 = NormalTexture3DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  local_8 = 0;
  pNVar1 = NormalTexture3DShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 0085bea0 LoadInverseModelMatrixLocation_0085bea0 ====

/* private: static void __cdecl NormalTexture3DShader__LoadInverseModelMatrixLocation(void) */

void __cdecl NormalTexture3DShader__LoadInverseModelMatrixLocation(void)

{
  NormalTexture3DShader *pNVar1;
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
  
  pNVar1 = NormalTexture3DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x85becb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  pNVar1 = NormalTexture3DShader__GetStatic();
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
  (**(code **)(pNVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 0085bee0 LoadModelMatrixLocation_0085bee0 ====

/* private: static void __cdecl NormalTexture3DShader__LoadModelMatrixLocation(void) */

void __cdecl NormalTexture3DShader__LoadModelMatrixLocation(void)

{
  NormalTexture3DShader *pNVar1;
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
  
  pNVar1 = NormalTexture3DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x85bf0b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  pNVar1 = NormalTexture3DShader__GetStatic();
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
  (**(code **)(pNVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 0085bf20 LoadNearPlaneLocation_0085bf20 ====

/* private: static void __cdecl NormalTexture3DShader__LoadNearPlaneLocation(void) */

void __cdecl NormalTexture3DShader__LoadNearPlaneLocation(void)

{
  NormalTexture3DShader *pNVar1;
  NormalTexture3DShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pNVar1 = NormalTexture3DShader__GetStatic();
  pcVar4 = "NearPlane";
  pNVar2 = NormalTexture3DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  local_8 = 0;
  pNVar1 = NormalTexture3DShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 0085bf70 LoadNormalMatrixLocation_0085bf70 ====

/* private: static void __cdecl NormalTexture3DShader__LoadNormalMatrixLocation(void) */

void __cdecl NormalTexture3DShader__LoadNormalMatrixLocation(void)

{
  NormalTexture3DShader *pNVar1;
  NormalTexture3DShader *pNVar2;
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
  
  pNVar1 = NormalTexture3DShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pNVar2 = NormalTexture3DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  pNVar1 = NormalTexture3DShader__GetStatic();
  local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pNVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 0085c000 LoadTextureLocation_0085c000 ====

/* private: static void __cdecl NormalTexture3DShader__LoadTextureLocation(void) */

void __cdecl NormalTexture3DShader__LoadTextureLocation(void)

{
  NormalTexture3DShader *pNVar1;
  NormalTexture3DShader *pNVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pNVar1 = NormalTexture3DShader__GetStatic();
  pcVar4 = "Texture";
  pNVar2 = NormalTexture3DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pNVar2->_pad_0x4_1,pcVar4);
  (pNVar1->TextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  if ((pNVar1->TextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Texture.");
    DebugBreak();
  }
  local_8 = 0;
  pNVar1 = NormalTexture3DShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0085c080 LoadTotalTransformMatrixLocation_0085c080 ====

/* private: static void __cdecl NormalTexture3DShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl NormalTexture3DShader__LoadTotalTransformMatrixLocation(void)

{
  NormalTexture3DShader *pNVar1;
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
  
  pNVar1 = NormalTexture3DShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pNVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x85c0ab;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  pNVar1 = NormalTexture3DShader__GetStatic();
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
  (**(code **)(pNVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 0085c0c0 PartialResetState_0085c0c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall NormalTexture3DShader__PartialResetState(void)const  */

void __thiscall NormalTexture3DShader__PartialResetState(NormalTexture3DShader *this)

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

//==== 0085c370 RenderIconAsBillboard ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* void __cdecl Icons__RenderIconAsBillboard(struct Icons__Atlas const *,void
   (__cdecl*)(void),struct util__Vec3_L_double_G_,double,class CameraManager *,bool,bool) */

void __cdecl
Icons__RenderIconAsBillboard
          (Atlas *param_1,_func_void *param_2,Vec3_L_double_G_ param_3,double param_4,
          CameraManager *param_5,bool param_6,bool param_7)

{
  undefined8 stack0xfffffffc;
  Vec4_L_double_G_ VVar1;
  Vec4_L_double_G_ VVar2;
  Quaternion_L_double_G_ *pQVar3;
  undefined4 uVar4;
  Quaternion_L_double_G_ QStack_34;
  undefined8 uStack_14;
  TransformStack TStack_b;
  CullStack CStack_a;
  DepthStack DStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(param_5);
  if (param_2 == (_func_void *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0xca,"Icon != nullptr",
                    (char *)0x0);
    DebugBreak();
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  Graphics__TransformStack__TransformStack(&TStack_b,Style__Default);
  Graphics__Translate((*(Vec3_L_double_G_ *)&(param_3)).X,(*(Vec3_L_double_G_ *)&(param_3)).Y,(*(Vec3_L_double_G_ *)&(param_3)).Z);
  pQVar3 = (Quaternion_L_double_G_ *)(uintptr_t)(CameraManager__GetIconBillboardOrientation((*(uint32_t*)((char*)&(uStack_14)+4)),&QStack_34));
  Graphics__Rotate__o3(*pQVar3);
  uStack_14 = CameraManager__GetBillboardRadius((CameraManager*)((CameraManager*)((*(uint32_t*)((char*)&(uStack_14)+4)))),(*(Vec4_L_double_G_ *)&(param_3)),param_4);
  uVar4 = (undefined4)((ulonglong)uStack_14 >> 0x20);
  VVar1.Y = SUB84(uStack_14,0);
  VVar1.X = uStack_14;
  VVar1.Z = uVar4;
  VVar1.Z = SUB84(uStack_14,0);
  VVar1.W = uVar4;
  Graphics__Scale__o3(VVar1);
  VVar2.Z = 0xbff00000;
  (*(uint32_t *)((char *)&(VVar2) + 0)) = ZEXT812(0x3ff0000000000000);
  Graphics__Scale__o3(VVar2);
  Graphics__CullStack__CullStack(&CStack_a,CullMode__Disabled);
  if (param_6) {
    (*param_2)();
  }
  else {
    Graphics__DepthStack__DepthStack(&DStack_9,param_7 + DepthMode__Read);
    Atlas__DrawIcon(param_1,param_2,true);
    DepthStack__dtor(&DStack_9);
  }
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0xdf);
  CullStack__dtor(&CStack_a);
  Graphics__TransformStack___TransformStack(&TStack_b);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0085c4e0 RenderIconOnly ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl Icons__RenderIconOnly(struct Icons__Atlas const *,void
   (__cdecl*)(void),double,struct util__Color,bool) */

void __cdecl
Icons__RenderIconOnly(Atlas *param_1,_func_void *param_2,double param_3,Color param_4,bool param_5)

{
  undefined8 stack0xffffffcc;
  undefined8 stack0xfffffffc;
  Color CVar1;
  undefined8 in_stack_ffffffcc;
  int in_stack_ffffffd4;
  TransformStack local_a;
  CullStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if (param_2 == (_func_void *)0x0) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0x9b,"Icon != nullptr",
                    (char *)0x0);
    DebugBreak();
  }
  else {
    Graphics__TransformStack__TransformStack(&local_a,Style__Default);
    util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffffcc,(Str_L_char_G_ *)&param_4._pad_0x4_1);
    CVar1._pad_0x4_1 = (int)(char *)in_stack_ffffffcc;
    CVar1._pad_0x8_2 = SUB84(in_stack_ffffffcc,4);
    CVar1._pad_0x0_0 = (int)&vftable_59;
    CVar1._pad_0xc_3 = in_stack_ffffffd4;
    CVar1.Hue_degrees = param_4.Hue_degrees;
    CVar1.Saturation = param_4.Saturation;
    CVar1.Value = param_4.Value;
    CVar1.Alpha = param_4.Alpha;
    glColor(CVar1);
    Graphics__Scale__o3((*(Vec4_L_double_G_ *)&(param_3)));
    if (param_5) {
      (*param_2)();
    }
    else if (param_1 != (Atlas *)0x0) {
      Graphics__CullStack__CullStack(&local_9,CullMode__Disabled);
      Atlas__DrawIcon(param_1,param_2,false);
      CullStack__dtor(&local_9);
    }
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\ui\\icons.cpp",0xad);
    Graphics__TransformStack___TransformStack(&local_a);
  }
  param_4._pad_0x0_0 = (int)&vftable_5;
  if (param_4._pad_0x4_1 != 0) {
    port_op_delete((void *)param_4._pad_0x4_1);
  }
  return;
}

//==== 0085c600 SetFarPlane_0085c600 ====

/* public: virtual void  NormalTexture3DShader__SetFarPlane(float const &)const  */

void  NormalTexture3DShader__SetFarPlane(NormalTexture3DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085c690 SetFarPlane_0085c690 ====

/* public: virtual void  NormalTexture3DShader__SetFarPlane(double const &)const  */

void  NormalTexture3DShader__SetFarPlane__o3(NormalTexture3DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085c720 SetInverseModelMatrix_0085c720 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
NormalTexture3DShader__SetInverseModelMatrix(NormalTexture3DShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085c7e0 SetInverseModelMatrix_0085c7e0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
NormalTexture3DShader__SetInverseModelMatrix__o3(NormalTexture3DShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085c8d0 SetInverseModelMatrixDefault_0085c8d0 ====

/* private: static void __cdecl NormalTexture3DShader__SetInverseModelMatrixDefault(void) */

void __cdecl NormalTexture3DShader__SetInverseModelMatrixDefault(void)

{
  NormalTexture3DShader *pNVar1;
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
  
  pNVar1 = NormalTexture3DShader__GetStatic();
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
  (**(code **)(pNVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 0085c9b0 SetModelMatrix_0085c9b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
NormalTexture3DShader__SetModelMatrix(NormalTexture3DShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085ca70 SetModelMatrix_0085ca70 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
NormalTexture3DShader__SetModelMatrix__o3(NormalTexture3DShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085cb60 SetModelMatrixDefault_0085cb60 ====

/* private: static void __cdecl NormalTexture3DShader__SetModelMatrixDefault(void) */

void __cdecl NormalTexture3DShader__SetModelMatrixDefault(void)

{
  NormalTexture3DShader *pNVar1;
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
  
  pNVar1 = NormalTexture3DShader__GetStatic();
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
  (**(code **)(pNVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 0085cc40 SetNearPlane_0085cc40 ====

/* public: virtual void  NormalTexture3DShader__SetNearPlane(float const &)const  */

void  NormalTexture3DShader__SetNearPlane(NormalTexture3DShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085ccd0 SetNearPlane_0085ccd0 ====

/* public: virtual void  NormalTexture3DShader__SetNearPlane(double const &)const  */

void  NormalTexture3DShader__SetNearPlane__o3(NormalTexture3DShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085cd60 SetNormalMatrix_0085cd60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetNormalMatrix(struct
   util__Matrix3x3_L_float_G_ const &)const  */

void 
NormalTexture3DShader__SetNormalMatrix(NormalTexture3DShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = param_1->Data[0];
    fStack_28 = param_1->Data[1];
    fStack_24 = param_1->Data[2];
    fStack_20 = param_1->Data[3];
    *(uint32_t *)&local_1c = param_1->Data[4];
    fStack_18 = param_1->Data[5];
    fStack_14 = param_1->Data[6];
    fStack_10 = param_1->Data[7];
    local_c = param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085ce20 SetNormalMatrix_0085ce20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetNormalMatrix(struct
   util__Matrix3x3_L_double_G_ const &)const  */

void 
NormalTexture3DShader__SetNormalMatrix__o3(NormalTexture3DShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    local_20 = (float)param_1->Data[3];
    *(uint32_t *)&local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085cf40 SetTexture_0085cf40 ====

/* public: virtual void __thiscall NormalTexture3DShader__SetTexture(int const &)const  */

void __thiscall NormalTexture3DShader__SetTexture(NormalTexture3DShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->TextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085cfc0 SetTextureDefault_0085cfc0 ====

/* private: static void __cdecl NormalTexture3DShader__SetTextureDefault(void) */

void __cdecl NormalTexture3DShader__SetTextureDefault(void)

{
  NormalTexture3DShader *pNVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pNVar1 = NormalTexture3DShader__GetStatic();
  (**(code **)(pNVar1->_pad_0x0_0 + 0x4c))(&local_8);
  return;
}

//==== 0085cff0 SetTotalTransformMatrix_0085cff0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
NormalTexture3DShader__SetTotalTransformMatrix
          (NormalTexture3DShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085d0b0 SetTotalTransformMatrix_0085d0b0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  NormalTexture3DShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
NormalTexture3DShader__SetTotalTransformMatrix__o2
          (NormalTexture3DShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x10);
  }
  return;
}

//==== 0085d1a0 SetTotalTransformMatrixDefault_0085d1a0 ====

/* private: static void __cdecl NormalTexture3DShader__SetTotalTransformMatrixDefault(void) */

void __cdecl NormalTexture3DShader__SetTotalTransformMatrixDefault(void)

{
  NormalTexture3DShader *pNVar1;
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
  
  pNVar1 = NormalTexture3DShader__GetStatic();
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
  (**(code **)(pNVar1->_pad_0x0_0 + 0x30))(&local_90);
  return;
}

//==== 0085d280 Setup_0085d280 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall NormalTexture3DShader__Setup(void) */

bool __thiscall NormalTexture3DShader__Setup(NormalTexture3DShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *this_00;
  NormalTexture3DShader *pNVar2;
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
  this_00 = (Str_L_char_G_ *)
            util__Str_char___Str_char(&local_28,"#define USES_TEXTURE\n#define THREE_DIMENSIONAL");
  util__Str_char___operator(this_00,__return_storage_ptr__,pSVar6);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char(&local_28,"TexColor");
  util__Str_char___Str_char(&local_34,"Mode__Normal");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_34,&local_28,&local_1c);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (bVar1) {
    pNVar2 = NormalTexture3DShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pNVar2);
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

//==== 0085df80 MethodCallerConst__private__bool___thiscall_GameManager__ShouldShowPauseDialog_void_const__ ====


/* public: static bool __cdecl util__DelegateFactory_L_class_GameManager_Cbool_G___MethodCallerConst_L__private_bool__thiscall_GameManager__ShouldShowPauseDialog_void_const_G_(void const * const) */

bool __cdecl
util__DelegateFactory_class_GameManager_bool___MethodCallerConst__private__bool___thiscall_GameManager__ShouldShowPauseDialog_void_const
          (void *param_1)

{
  if ((!DebugScreenshotMode) && (*(char *)((int)param_1 + 0x58) != '\0')) {
    return true;
  }
  return false;
}





//==== 0085dfa0 Darray_util__Str_char____0085dfa0 ====


/* public:  util__Darray_L_classutil__Str_L_char_G__G___Darray_L_classutil__Str_L_char_G__G_(class
   util__Str_L_char_G_ const *,int) */

Darray_L_class_util__Str_L_char_G___G_ * 
util__Darray_class_util__Str_char_____Darray_class_util__Str_char
          (Darray_L_class_util__Str_L_char_G___G_ *this,Str_L_char_G_ *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  Str_L_char_G_ *this_00;
  Darray_L_class_util__Str_L_char_G___G_ *pDStack_8;
  
  iVar5 = param_2;
  *(undefined ***)this = (undefined **)(&vftable_4);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0xc) = param_2;
  if ((param_2 < 0) || (0x3fffffff < param_2)) {
    *(undefined4 *)(this + 0xc) = 0;
  }
  else if (0 < param_2) {
    uVar4 = -(uint)((int)((ulonglong)(uint)param_2 * 0xc >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_2 * 0xc);
    pDStack_8 = this;
    piVar2 = (int *)port_op_new(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = iVar5;
      piVar2 = piVar2 + 1;
      piVar3 = piVar2;
      if (iVar5 != 0) {
        do {
          *piVar3 = 0;
          piVar3[1] = 0;
          piVar3[2] = 0;
          iVar5 = iVar5 + -1;
          piVar3 = piVar3 + 3;
        } while (iVar5 != 0);
      }
    }
    *(int **)(this + 4) = piVar2;
    SetSize(this,&param_2);
    bVar1 = CheckSizeDestructive(this);
    if (!bVar1) {
      pDStack_8 = (Darray_L_class_util__Str_L_char_G___G_ *)0x0;
      SetSize(this,(int *)&pDStack_8);
      return this;
    }
    this_00 = *(Str_L_char_G_ **)(this + 4);
    if (this_00 != this_00 + *(int *)(this + 8)) {
      do {
        util__Maybe_struct_util__ClassMember___operator(this_00,param_1);
        this_00 = this_00 + 1;
        param_1 = param_1 + 1;
      } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
      return this;
    }
  }
  return this;
}





//==== 0085e0d0 GameManager ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall GameManager__GameManager(void) */

GameManager * __thiscall GameManager__GameManager(GameManager *this)

{
  undefined8 stack0xffffffe8;
  undefined8 stack0xfffffffc;
  uint *lpPerformanceCount;
  bool bVar1;
  bool bVar2;
  DataParser *this_00;
  PreferencesBase *pPVar3;
  AudioManager *this_01;
  OptionsSection__Interface *pIVar4;
  SteamHandler *this_02;
  CameraManager *pCVar5;
  Manager **ppMVar6;
  int iVar7;
  PostProcessor *this_03;
  undefined4 uVar8;
  undefined4 *puVar9;
  Str_L_char_G_ *pSVar10;
  Darray_L_util__Str_L_char_G___G_ *pDVar11;
  undefined1 *puVar12;
  char *pcVar13;
  char cVar14;
  char *pcVar15;
  Str_L_char_G_ *pSVar16;
  AutoPtr_L_DataParser_G_ *pAVar17;
  Darray_L_util__Str_L_char_G___G_ local_64;
  AutoPtr_L_DataParser_G_ *local_54;
  GameManager *local_50;
  int local_4c;
  Darray_L_util__Str_L_char_G___G_ local_48;
  Darray_L_util__Str_L_char_G___G_ local_38;
  Str_L_char_G_ local_28;
  undefined1 local_1c [8];
  int iStack_14;
  int local_10;
  Str_L_char_G_ *local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pAVar17 = &this->DataManager;
  this->DebugDraw = false;
  pAVar17->Pointer = (DataParser *)0x0;
  (this->OptionsSection__Audio).Pointer = (AudioManager *)0x0;
  (this->SteamManager).Pointer = (SteamHandler *)0x0;
  local_54 = pAVar17;
  local_50 = this;
  this_00 = (DataParser *)(uintptr_t)(port_op_new(0x30));
  if (this_00 == (DataParser *)0x0) {
    pPVar3 = (PreferencesBase *)0x0;
  }
  else {
    memset(this_00,0,0x30);
    pPVar3 = (PreferencesBase *)DataParser__DataParser(this_00);
  }
  this->Options = pPVar3;
  this_01 = (AudioManager *)(uintptr_t)(port_op_new(0x4c));
  if (this_01 == (AudioManager *)0x0) {
    pIVar4 = (OptionsSection__Interface *)0x0;
  }
  else {
    memset(this_01,0,0x4c);
    pIVar4 = (OptionsSection__Interface *)AudioManager__AudioManager(this_01,this);
  }
  (this->Interfacer).Pointer = (struct Interface *)(pIVar4);
  this_02 = (SteamHandler *)(uintptr_t)(port_op_new(0x14));
  if (this_02 == (SteamHandler *)0x0) {
    pCVar5 = (CameraManager *)0x0;
  }
  else {
    this_02->SubHandler = (SteamSubHandler *)0x0;
    this_02[1].SubHandler = (SteamSubHandler *)0x0;
    this_02[2].SubHandler = (SteamSubHandler *)0x0;
    this_02[3].SubHandler = (SteamSubHandler *)0x0;
    this_02[4].SubHandler = (SteamSubHandler *)0x0;
    pCVar5 = (CameraManager *)SteamHandler__SteamHandler(this_02);
  }
  (this->Cameras).Pointer = pCVar5;
  (this->Managers)._padfb0 = 0;
  pIVar4 = (OptionsSection__Interface *)(uintptr_t)(port_op_new(0x210));
  if (pIVar4 == (OptionsSection__Interface *)0x0) {
    ppMVar6 = (Manager **)0x0;
  }
  else {
    memset(pIVar4,0,0x210);
    ppMVar6 = (Manager **)Interface__Interface(pIVar4,this);
  }
  (this->Managers).Data = ppMVar6;
  pCVar5 = (CameraManager *)(uintptr_t)(port_op_new(0x70));
  if (pCVar5 == (CameraManager *)0x0) {
    iVar7 = 0;
  }
  else {
    memset(pCVar5,0,0x70);
    iVar7 = (int)(uintptr_t)(CameraManager__CameraManager(pCVar5,this));
  }
  (this->Managers).Size = iVar7;
  (this->Managers).Capacity = (int)&vftable_2;
  this->CurrentManager = (Manager *)0x0;
  (this->GraphicsPostProcessor).Pointer = (PostProcessor *)0x0;
  *(undefined4 *)&this->GraphicsPostProcessor = 0;
  *(undefined4 *)&(this->GameTimer).LastTime = 0;
  this_03 = (PostProcessor *)(uintptr_t)(port_op_new(0x1b4));
  if (this_03 == (PostProcessor *)0x0) {
    uVar8 = 0;
  }
  else {
    memset(this_03,0,0x1b4);
    uVar8 = (undefined4)(uintptr_t)(PostProcessor__PostProcessor(this_03,this));
  }
  *(undefined4 *)((int)&(this->GameTimer).LastTime + 4) = uVar8;
  lpPerformanceCount = &(this->GameTimer).MicrosecondsAccrued;
  *lpPerformanceCount = 0;
  (this->GameTimer).Frames = 0;
  (this->GameTimer).FPS = 0;
  (this->GameTimer).FrameTime = 0;
  this->IsPaused = false;
  this->RunFrame = false;
  *(undefined2 *)&this->ExitIsRequested = 0;
  (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0x54)) = 0);
  if ((int) cde_l2r_015cf72d_TimerFrequency == 0 &&
       (*(uint32_t*)((char*)0x0098cb50u+4)) == 0) {
    QueryPerformanceFrequency
              ((LARGE_INTEGER *)
               & cde_l2r_015cf72d_TimerFrequency);
  }
  QueryPerformanceCounter((LARGE_INTEGER *)lpPerformanceCount);
  *(undefined2 *)&this->GameTime_s = 0;
  this->LoadingScreenIsEnabled = false;
  *(undefined3 *)&this->IconAtlases = 0;
  this->LoadingScreenStep = 0;
  this->IsInLoadingScreen = true;
  *(undefined4 *)&this->IconAtlases = 0;
  *(undefined2 *)&(this->IconAtlases).field_0x4 = 1;
  (this->IconAtlases).field_0x4 = 0;
  (this->IconAtlases).field_0x8 = cde_ptr_as_double((void *)&vftable_2);
  *(undefined2 *)&(this->IconAtlases).field_0x4 = 1;
  (this->Logo)._pad_0x0_0 = 0;
  (this->Logo).TextureSize.X = 1;
  puVar9 = (undefined4 *)(uintptr_t)(port_op_new(4));
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    *puVar9 = 0;
  }
  iVar7 = 0;
  *(undefined4 *)((char *)&(this->IconAtlases) + 4) = (undefined4)(uintptr_t)puVar9;
  if (0 < (this->Logo).TextureSize.X) {
    do {
      *(undefined4 *)(*(int *)((char *)&(this->IconAtlases) + 4) + iVar7 * 4) = 0;
      iVar7 = iVar7 + 1;
    } while (iVar7 < (this->Logo).TextureSize.X);
  }
  *(undefined **)((char *)&(this->IconAtlases) + 8) = &vftable_573;
  CustomTexture__CustomTexture((CustomTexture *)&(this->Logo).TextureSize.Y);
  CustomTexture__CustomTexture((CustomTexture *)&this[1].Options);
  Icons__CustomCursor__CustomCursor((CustomCursor *)&this[1].GameTimer.FrameTime,Icons__MouseCursor)
  ;
  srand(0);
  SteamHandler__Initialize((SteamHandler *)(this->Cameras).Pointer);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_1c + 4),"LanguageOption");
  util__SimpleSerializationManager__AddCategory
            ((SimpleSerializationManager *)this->Options,(Str_L_char_G_ *)(local_1c + 4));
  if ((Str_L_char_G_ *)(*(uint32_t*)((char*)&(local_1c)+4)) != (Str_L_char_G_ *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_1c)+4)));
  }
  local_28.Length = 0;
  local_38._pad_0x0_0 = (int)&vftable_4;
  local_38.Data = (Str_L_char_G_ *)0x0;
  local_38.Size = 0;
  local_38.Capacity = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  util__GetBasicResourcesPath((Str_L_char_G_ *)(local_1c + 4));
  pSVar10 = (Str_L_char_G_ *)
            &cde_l2_0b2b1c9f_NullString;
  if (0 < iStack_14) {
    pSVar10 = (Str_L_char_G_ *)(*(uint32_t*)((char*)&(local_1c)+4));
  }
  util__Printf(&local_28,(wchar_t*)((wchar_t*)((wchar_t*)("%s/Data/Languages/"))),pSVar10);
  if ((Str_L_char_G_ *)(*(uint32_t*)((char*)&(local_1c)+4)) != (Str_L_char_G_ *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_1c)+4)));
  }
  pDVar11 = util__GetAllFilesInDirectory((Str_L_char_G_*)((Str_L_char_G_*)((Darray_L_util__Str_L_char_G___G_ *)local_1c)),&local_28,false)
  ;
  util__Darray_L_util__Str_L_char_G___G___op_iadd(&local_38,(Darray_L_class_util__Str_L_char_G___G_ *)pDVar11);
  Darray_L_util__Str_L_char_G___G___dtor((Darray_L_util__Str_L_char_G___G_ *)local_1c);
  local_48._pad_0x0_0 = 0;
  local_48.Data = (Str_L_char_G_ *)0x0;
  local_48.Size = 0;
  local_48.Capacity = 0;
  GetAllResourcePaths(this,&local_48,false);
  local_c = (Str_L_char_G_ *)0x0;
  iVar7 = (**(code **)(uintptr_t)(local_48._pad_0x0_0 + 0xc))();
  if ((int)local_c < iVar7) {
    do {
      puVar9 = (undefined4 *)(**(code **)local_48._pad_0x0_0)(&local_c);
      local_10 = 0;
      stack0xffffffe8 = 0;
      if ((int)puVar9[1] < 1) {
        puVar12 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar12 = (undefined1 *)*puVar9;
      }
      util__Printf((Str_L_char_G_ *)(local_1c + 4),(wchar_t*)((wchar_t*)((wchar_t*)("%s/Data/Languages/"))),puVar12);
      pDVar11 = util__GetAllFilesInDirectory((Str_L_char_G_*)((Str_L_char_G_*)(&local_64)),(Str_L_char_G_ *)(local_1c + 4),false);
      util__Darray_L_util__Str_L_char_G___G___op_iadd
          (&local_38,(Darray_L_class_util__Str_L_char_G___G_ *)pDVar11);
      Darray_L_util__Str_L_char_G___G___dtor(&local_64);
      if ((Str_L_char_G_ *)(*(uint32_t*)((char*)&(local_1c)+4)) != (Str_L_char_G_ *)0x0) {
        port_op_delete((void *)(*(uint32_t*)((char*)&(local_1c)+4)));
        stack0xffffffe8 = stack0xffffffe8 & 0xffffffff00000000;
      }
      local_c = (Str_L_char_G_ *)((int)&local_c->Data + 1);
      iVar7 = (**(code **)(uintptr_t)(local_48._pad_0x0_0 + 0xc))();
    } while ((int)local_c < iVar7);
  }
  if (1 < local_38.Size) {
    local_4c = 0;
    local_c = local_38.Data;
    pSVar10 = local_38.Data;
    if (local_38.Data != local_38.Data + local_38.Size) {
      do {
        bVar2 = false;
        pSVar16 = local_38.Data;
        while ((bVar1 = bVar2, pSVar16 != pSVar10 && (bVar1 = true, !bVar2))) {
          if (pSVar10->Length == pSVar16->Length) {
            if (pSVar10->Capacity < 1) {
              pcVar13 = "";
            }
            else {
              pcVar13 = pSVar10->Data;
            }
            if (pSVar16->Capacity < 1) {
              pcVar15 = "";
            }
            else {
              pcVar15 = pSVar16->Data;
            }
            cVar14 = *pcVar13;
            if (cVar14 != '\0') {
              iVar7 = (int)pcVar15 - (int)pcVar13;
              do {
                if (cVar14 != pcVar13[iVar7]) goto LAB_0085e529;
                cVar14 = pcVar13[1];
                pcVar13 = pcVar13 + 1;
              } while (cVar14 != '\0');
            }
            bVar2 = true;
          }
          else {
LAB_0085e529:
            bVar2 = false;
          }
          pSVar16 = pSVar16 + 1;
        }
        util__Str_char___operator__o8(local_c,pSVar10);
        if (!bVar1) {
          local_c = local_c + 1;
          local_4c = local_4c + 1;
        }
        pSVar10 = pSVar10 + 1;
        this = local_50;
        pAVar17 = local_54;
      } while (pSVar10 != local_38.Data + local_38.Size);
    }
    util__Darray_L_util__Str_L_char_G___G___SetSize(&local_38,&local_4c);
  }
  FUN_0085dc90(&local_38,this);
  Darray_L_util__Str_L_char_G___G___dtor(&local_48);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    (*(uint64_t*)&(local_28)) = (*(uint64_t*)&(local_28)) & 0xffffffff00000000;
  }
  Darray_L_util__Str_L_char_G___G___dtor(&local_38);
  util__Str_char___Str_char((Str_L_char_G_ *)(local_1c + 4),"Themes");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  FUN_0085d3b0(local_1c + 4,pAVar17,this,&local_28,1);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    (*(uint64_t*)&(local_28)) = (*(uint64_t*)&(local_28)) & 0xffffffff00000000;
  }
  if ((Str_L_char_G_ *)(*(uint32_t*)((char*)&(local_1c)+4)) != (Str_L_char_G_ *)0x0) {
    port_op_delete((void *)(*(uint32_t*)((char*)&(local_1c)+4)));
  }
  return this;
}

//==== 0085e620 AutoDarray_Framebuffer_ ====


/* public: virtual __thiscall util__AutoDarray_struct_Framebuffer____AutoDarray_struct_Framebuffer(void) */

void __thiscall
util__AutoDarray_struct_Framebuffer____AutoDarray_struct_Framebuffer(AutoDarray_L_struct_Framebuffer_G_ *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = &vftable_571;
  if (piVar1 != piVar1 + *(int *)(this + 8)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x10))(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  *(undefined ***)this = &vftable_142;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0085e680 AutoDarray_util__Reflectable_ ====


/* public: virtual __thiscall util__AutoDarray_class_util__Reflectable____AutoDarray_class_util__Reflectable(void) */

void __thiscall
util__AutoDarray_class_util__Reflectable____AutoDarray_class_util__Reflectable(AutoDarray_L_class_util__Reflectable_G_ *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 4);
  *(undefined ***)this = &vftable_572;
  if (piVar1 != piVar1 + *(int *)(this + 8)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x60))(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  *(undefined ***)this = (undefined **)(&vftable_6);
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0085e6e0 AutoPtr_DataParser_ ====


/* public:  AutoPtr_L_classDataParser_G___dtor(void) */

void __thiscall
util__AutoPtr_class_DataParser____AutoPtr_class_DataParser(AutoPtr_L_class_DataParser_G_ *this)

{
  void *pvVar1;
  int *piVar2;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    piVar2 = *(int **)((int)pvVar1 + 0x1c);
    if (piVar2 != (int *)0x0) {
      if (piVar2[-1] == 0) {
        port_op_delete(piVar2 + -1);
      }
      else {
        (**(code **)(uintptr_t)(*piVar2 + 0x18))(3);
      }
    }
    *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
    piVar2 = *(int **)((int)pvVar1 + 0x14);
    if (piVar2 != (int *)0x0) {
      if (piVar2[-1] == 0) {
        port_op_delete(piVar2 + -1);
      }
      else {
        (**(code **)(uintptr_t)(*piVar2 + 0x18))(3);
      }
    }
    *(undefined4 *)((int)pvVar1 + 0x14) = 0;
    util__AutoDarray_class_util__Reflectable____AutoDarray_class_util__Reflectable((AutoDarray_L_class_util__Reflectable_G_ *)((int)pvVar1 + 4));
    port_op_delete(pvVar1,0x30);
  }
  *(undefined4 *)this = 0;
  return;
}





//==== 0085e760 AutoPtr_Interface_ ====


/* public:  AutoPtr_L_classInterface_G___dtor(void) */

void __thiscall
util__AutoPtr_class_Interface____AutoPtr_class_Interface(AutoPtr_L_class_Interface_G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  pvVar3 = *(void **)this;
  if (pvVar3 != (void *)0x0) {
    if (*(void **)((int)pvVar3 + 0x1f0) != (void *)0x0) {
      port_op_delete(*(void **)((int)pvVar3 + 0x1f0));
      *(undefined4 *)((int)pvVar3 + 0x1f0) = 0;
    }
    *(undefined ***)((int)pvVar3 + 0x74) = &vftable_570;
    if (*(ReferenceController **)((int)pvVar3 + 0x70) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar3 + 0x70));
    }
    if (*(ReferenceController **)((int)pvVar3 + 0x68) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar3 + 0x68));
    }
    if (*(ReferenceController **)((int)pvVar3 + 0x60) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar3 + 0x60));
    }
    if (*(ReferenceController **)((int)pvVar3 + 0x58) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar3 + 0x58));
    }
    if (*(void **)((int)pvVar3 + 0x44) != (void *)0x0) {
      port_op_delete(*(void **)((int)pvVar3 + 0x44));
    }
    *(undefined4 *)((int)pvVar3 + 0x44) = 0;
    iVar4 = *(int *)((int)pvVar3 + 0x34);
    if (iVar4 != 0) {
      piVar1 = (int *)(iVar4 + -4);
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 4 + iVar5 * 0xc;
        do {
          puVar2 = (undefined4 *)(iVar4 + -0xc);
          iVar4 = iVar4 + -0xc;
          iVar5 = iVar5 + -1;
          if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
            ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
          }
        } while (iVar5 != 0);
        iVar4 = *piVar1;
      }
      port_op_delete(piVar1,iVar4 * 0xc + 4);
    }
    *(undefined4 *)((int)pvVar3 + 0x34) = 0;
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)((int)pvVar3 + 0x24));
    util__Darray_class_util__WeakPtr_struct_UIWidget______Darray_class_util__WeakPtr_struct_UIWidget((Darray_L_class_util__WeakPtr_L_struct_UIWidget_G___G_ *)((int)pvVar3 + 0x14));
    Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G___Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G___dtor((Darray_L_class_util__SharedPtr_L_struct_UIWidget_G___G_ *)((int)pvVar3 + 4));
    port_op_delete(pvVar3,0x210);
  }
  *(undefined4 *)this = 0;
  return;
}





//==== 0085e870 AutoPtr_PostProcessor_ ====


/* public:  AutoPtr_L_classPostProcessor_G___dtor(void) */

void __thiscall
util__AutoPtr_class_PostProcessor____AutoPtr_class_PostProcessor(AutoPtr_L_class_PostProcessor_G_ *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    if (*(ReferenceController **)((int)pvVar1 + 0x1b0) != (ReferenceController *)0x0) {
      ReferenceController__ReleaseWeakReference(*(ReferenceController **)((int)pvVar1 + 0x1b0));
    }
    util__AutoDarray_struct_Framebuffer____AutoDarray_struct_Framebuffer((AutoDarray_L_struct_Framebuffer_G_ *)((int)pvVar1 + 0x19c));
    util__AutoDarray_struct_Framebuffer____AutoDarray_struct_Framebuffer((AutoDarray_L_struct_Framebuffer_G_ *)((int)pvVar1 + 0x184));
    Framebuffer___Framebuffer((Framebuffer *)((int)pvVar1 + 0x128));
    Framebuffer___Framebuffer((Framebuffer *)((int)pvVar1 + 0xcc));
    Framebuffer___Framebuffer((Framebuffer *)((int)pvVar1 + 0x70));
    Framebuffer___Framebuffer((Framebuffer *)((int)pvVar1 + 0x14));
    port_op_delete(pvVar1,0x1b4);
  }
  *(undefined4 *)this = 0;
  return;
}





//==== 0085e8e0 Darray_util__tuple2_util__Str_char__util__Reflectable____ ====


/* public: virtual  Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclassutil__Reflectable__P_G__G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Reflectable_______Darray_struct_util__tuple2_class_util__Str_char__class_util__Reflectable(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G___G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_574;
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
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0085e960 Darray_util__tuple2_util__Str_char__util__Range_double_____ ====


/* public: virtual  Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cstruct_util__Range_L_double_G__G__G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple2_class_util__Str_char__struct_util__Range_double________Darray_struct_util__tuple2_class_util__Str_char__struct_util__Range_double(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_575;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    puVar4 = (undefined4 *)(iVar3 * 0x20 + iVar2);
    if (iVar3 != 0) {
      do {
        puVar1 = puVar4 + -8;
        puVar4 = puVar4 + -8;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar1 != (void *)0x0) {
          port_op_delete((void *)*puVar1);
          *puVar4 = 0;
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x20 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0085e9e0 GameManager_0085e9e0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall GameManager___GameManager(void) */

void __thiscall GameManager___GameManager(GameManager *this)

{
  undefined8 stack0xfffffffc;
  void *pvVar1;
  Manager *pMVar2;
  CameraManager *this_00;
  OptionsSection__Interface *this_01;
  DataParser *pDVar3;
  int iVar4;
  int *piVar5;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  *(undefined4 *)&(this->GameTimer).LastTime = 0;
  iVar4 = (**(code **)((this->Managers).Capacity + 0xc))();
  if (iStack_c < iVar4) {
    do {
      piVar5 = (int *)(**(code **)(this->Managers).Capacity)(&iStack_c);
      if ((int *)*piVar5 != (int *)0x0) {
        (**(code **)(*(int *)*piVar5 + 4))(1);
      }
      iStack_c = iStack_c + 1;
      iVar4 = (**(code **)((this->Managers).Capacity + 0xc))();
    } while (iStack_c < iVar4);
  }
  (**(code **)((this->Managers).Capacity + 0x10))();
  this[1].Options = (PreferencesBase *)&vftable_141;
  CustomTexture__Destroy((CustomTexture *)&this[1].Options);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&this[1].Options);
  (this->Logo).TextureSize.Y = (int)&vftable_141;
  CustomTexture__Destroy((CustomTexture *)&(this->Logo).TextureSize.Y);
  GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)&(this->Logo).TextureSize.Y);
  (this->IconAtlases).field_0x8 = cde_ptr_as_double((void *)&vftable_573);
  util__AutoDarray_L_struct_Icons__Atlas_G___FreeAll
            ((AutoDarray_L_struct_Icons__Atlas_G_ *)&(this->IconAtlases).field_0x8);
  pvVar1 = (void *)((this->IconAtlases).field_0x4);
  (this->IconAtlases).field_0x8 = cde_ptr_as_double((void *)&vftable_2);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  (undefined4)((this->IconAtlases).field_0x4 = 0);
  (this->IconAtlases).field_0x8 = cde_ptr_as_double((void *)&vftable);
  util__AutoPtr_class_PostProcessor____AutoPtr_class_PostProcessor((AutoPtr_L_class_PostProcessor_G_ *)((int)&(this->GameTimer).LastTime + 4));
  pMVar2 = this->CurrentManager;
  (this->Managers).Capacity = (int)&vftable_2;
  if (pMVar2 != (Manager *)0x0) {
    port_op_delete(pMVar2);
  }
  this->CurrentManager = (Manager *)0x0;
  (this->Managers).Capacity = (int)&vftable;
  pvVar1 = (void *)(this->Managers).Size;
  if (pvVar1 != (void *)0x0) {
    if (*(void **)((int)pvVar1 + 4) != (void *)0x0) {
      port_op_delete(*(void **)((int)pvVar1 + 4));
    }
    *(undefined4 *)((int)pvVar1 + 4) = 0;
    port_op_delete(pvVar1,0x70);
  }
  (this->Managers).Size = 0;
  util__AutoPtr_class_Interface____AutoPtr_class_Interface((AutoPtr_L_class_Interface_G_ *)&(this->Managers).Data);
  this_00 = (this->Cameras).Pointer;
  if (this_00 != (CameraManager *)0x0) {
    SteamHandler___SteamHandler((SteamHandler *)this_00);
    port_op_delete(this_00,0x14);
  }
  (this->Cameras).Pointer = (CameraManager *)0x0;
  this_01 = (OptionsSection__Interface *)((this->Interfacer).Pointer);
  if (this_01 != (OptionsSection__Interface *)0x0) {
    AudioManager___AudioManager((AudioManager *)this_01);
    port_op_delete(this_01,0x4c);
  }
  (this->Interfacer).Pointer = (struct Interface *)((OptionsSection__Interface *)0x0);
  util__AutoPtr_class_DataParser____AutoPtr_class_DataParser((AutoPtr_L_class_DataParser_G_ *)&this->Options);
  pDVar3 = (this->DataManager).Pointer;
  if (pDVar3 != (DataParser *)0x0) {
    port_op_delete(pDVar3);
    (this->DataManager).Pointer = (DataParser *)0x0;
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 0085ec10 operator___0085ec10 ====


/* public: class util__Darray_L_classutil__Str_L_char_G__G_ &  util__Darray_L_class_util__Str_L_char_G__G___op_iadd(class util__Darray_L_classutil__Str_L_char_G__G_ const &) */

Darray_L_class_util__Str_L_char_G___G_ * 
util__Darray_class_util__Str_char_____operator__o3
          (Darray_L_class_util__Str_L_char_G___G_ *this,Darray_L_class_util__Str_L_char_G___G_ *param_1)

{
  Darray_L_class_util__Str_L_char_G___G_ *pDVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  
  pDVar1 = param_1;
  if (*(int *)(this + 8) == 0) {
    param_1 = (Darray_L_class_util__Str_L_char_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
    SetSize(this,(int *)&param_1);
    iVar2 = (**(code **)(*(int *)pDVar1 + 0xc))();
    if (iVar2 == 0) {
      (**(code **)(*(int *)this + 0x10))();
      return this;
    }
    CheckSizeDestructive(this);
    pSVar5 = *(Str_L_char_G_ **)(this + 4);
    pSVar4 = *(Str_L_char_G_ **)(pDVar1 + 4);
    param_1 = (Darray_L_class_util__Str_L_char_G___G_ *)pSVar5;
    if (pSVar4 != pSVar4 + *(int *)(pDVar1 + 8)) {
      do {
        util__Maybe_struct_util__ClassMember___operator(pSVar5,pSVar4);
        pSVar4 = pSVar4 + 1;
        pSVar5 = pSVar5 + 1;
      } while (pSVar4 != (Str_L_char_G_ *)(*(int *)(pDVar1 + 4) + *(int *)(pDVar1 + 8) * 0xc));
      return this;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)param_1 + 0xc))();
    if (iVar2 != 0) {
      iVar2 = *(int *)(this + 8);
      iVar3 = (**(code **)(*(int *)pDVar1 + 0xc))();
      param_1 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar3 + *(int *)(this + 8));
      SetSize(this,(int *)&param_1);
      CheckSize(this,iVar2);
      pSVar4 = *(Str_L_char_G_ **)(pDVar1 + 4);
      pSVar5 = (Str_L_char_G_ *)(*(int *)(this + 4) + iVar2 * 0xc);
      if (pSVar5 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc)) {
        do {
          util__Maybe_struct_util__ClassMember___operator(pSVar5,pSVar4);
          pSVar5 = pSVar5 + 1;
          pSVar4 = pSVar4 + 1;
        } while (pSVar5 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
      }
    }
  }
  return this;
}





//==== 0085ed20 vector_deleting_destructor_0085ed20 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Reflectable_P_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__class_util__Reflectable_______vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G___G_ *this,
          uint param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G___G_ *pDVar2;
  void *pvVar3;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G___G_ *pDVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    iVar5 = *(int *)(this + -4);
    pDVar1 = this + -4;
    pDVar4 = this + iVar5 * 0x10;
    while (iVar5 != 0) {
      pvVar3 = *(void **)(pDVar4 + -0xc);
      pDVar2 = pDVar4 + -0x10;
      iVar5 = iVar5 + -1;
      *(undefined ***)pDVar2 = &vftable_574;
      if (pvVar3 != (void *)0x0) {
        _vector_destructor_iterator_(pvVar3,0x10,*(uint *)((int)pvVar3 + -4),util__Str_char____Str_char);
        port_op_delete((int *)((int)pvVar3 + -4),*(int *)((int)pvVar3 + -4) * 0x10 + 4);
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
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cclass_util__Reflectable_P_G___G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0085ede0 vector_deleting_destructor_0085ede0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cstruct_util__Range_L_double_G__G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__struct_util__Range_double________vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *this,
          uint param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *pDVar2;
  void *pvVar3;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *pDVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    iVar5 = *(int *)(this + -4);
    pDVar1 = this + -4;
    pDVar4 = this + iVar5 * 0x10;
    while (iVar5 != 0) {
      pvVar3 = *(void **)(pDVar4 + -0xc);
      pDVar2 = pDVar4 + -0x10;
      iVar5 = iVar5 + -1;
      *(undefined ***)pDVar2 = &vftable_575;
      if (pvVar3 != (void *)0x0) {
        _vector_destructor_iterator_(pvVar3,0x20,*(uint *)((int)pvVar3 + -4),util__Str_char____Str_char);
        port_op_delete((int *)((int)pvVar3 + -4),*(int *)((int)pvVar3 + -4) * 0x20 + 4);
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
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0085eea0 vector_deleting_destructor_0085eea0 ====


/* public: void * __thiscall util__tuple2_L_classutil__Str_L_char_G__Cstructutil__Range_L_double_G___G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_class_util__Str_char__struct_util__Range_double______vector_deleting_destructor
          (tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ *this,uint param_1)

{
  tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ *ptVar1;
  tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ *ptVar2;
  tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    if (*(void **)this != (void *)0x0) {
      port_op_delete(*(void **)this);
      *(undefined4 *)this = 0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x20);
    }
    return this;
  }
  ptVar1 = this + -4;
  iVar4 = *(int *)ptVar1;
  ptVar3 = this + iVar4 * 0x20;
  while (iVar4 != 0) {
    ptVar2 = ptVar3 + -0x20;
    ptVar3 = ptVar3 + -0x20;
    iVar4 = iVar4 + -1;
    if (*(void **)ptVar2 != (void *)0x0) {
      port_op_delete(*(void **)ptVar2);
      *(undefined4 *)ptVar3 = 0;
    }
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(ptVar1,*(int *)ptVar1 * 0x20 + 4);
  }
  return this + -4;
}





//==== 0085ef40 scalar_deleting_destructor_0085ef40 ====


/* public: virtual void * __thiscall util__AutoDarray_L_structIcons__Atlas_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__AutoDarray_struct_Icons__Atlas____scalar_deleting_destructor
          (AutoDarray_L_struct_Icons__Atlas_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_573;
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





//==== 0085ef90 scalar_deleting_destructor_0085ef90 ====


/* public: virtual void * __thiscall util__AutoDarray_L_structFramebuffer_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__AutoDarray_struct_Framebuffer____scalar_deleting_destructor
          (AutoDarray_L_struct_Framebuffer_G_ *this,uint param_1)

{
  util__AutoDarray_struct_Framebuffer____AutoDarray_struct_Framebuffer(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0085efc0 scalar_deleting_destructor_0085efc0 ====


/* public: virtual void * __thiscall util__AutoDarray_L_classutil__Reflectable_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__AutoDarray_class_util__Reflectable____scalar_deleting_destructor
          (AutoDarray_L_class_util__Reflectable_G_ *this,uint param_1)

{
  util__AutoDarray_class_util__Reflectable____AutoDarray_class_util__Reflectable(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0085eff0 BeginModLoading ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall GameManager__BeginModLoading(void) */

void __thiscall GameManager__BeginModLoading(GameManager *this)

{
  util__SimpleSerializationManager__SetNullPointerErrorState
            ((SimpleSerializationManager *)this->Options,GroupType__None);
  util__SimpleSerializationManager__SetDatumOverrideErrorState
            ((SimpleSerializationManager *)this->Options,GroupType__None);
  DataParser__SetCurrentLoadType((DataParser *)this->Options,1);
  return;
}





//==== 0085f020 Clear_0085f020 ====


/* public: virtual void  util__AutoDarray_L_structIcons__Atlas_G___Clear(void) */

void __thiscall util__AutoDarray_struct_Icons__Atlas___Clear(AutoDarray_L_struct_Icons__Atlas_G_ *this)

{
  AutoDarray_L_struct_Icons__Atlas_G_ *pAStack_8;
  
  pAStack_8 = this;
  FreeAll(this);
  pAStack_8 = (AutoDarray_L_struct_Icons__Atlas_G_ *)0x0;
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&pAStack_8);
  return;
}





//==== 0085f050 Clear_0085f050 ====


/* public: virtual void  util__AutoDarray_L_structFramebuffer_G___Clear(void) */

void __thiscall util__AutoDarray_struct_Framebuffer___Clear(AutoDarray_L_struct_Framebuffer_G_ *this)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(this + 4);
  iVar1 = *(int *)(this + 8);
  piVar2 = piVar3;
  if (piVar3 != piVar3 + iVar1) {
    do {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 0x10))(1);
      }
      iVar1 = *(int *)(this + 8);
      piVar2 = piVar2 + 1;
      piVar3 = *(int **)(this + 4);
    } while (piVar2 != piVar3 + iVar1);
  }
  if (((0 < iVar1) && (piVar3 != (int *)0x0)) && (piVar3 != piVar3 + iVar1)) {
    do {
      *piVar3 = 0;
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 0085f0b0 Clear_0085f0b0 ====


/* public: virtual void  util__AutoDarray_L_classutil__Reflectable_G___Clear(void) */

void __thiscall
util__AutoDarray_class_util__Reflectable___Clear(AutoDarray_L_class_util__Reflectable_G_ *this)

{
  int *piVar1;
  AutoDarray_L_class_util__Reflectable_G_ *pAStack_8;
  
  piVar1 = *(int **)(this + 4);
  pAStack_8 = this;
  if (piVar1 != piVar1 + *(int *)(this + 8)) {
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x60))(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  pAStack_8 = (AutoDarray_L_class_util__Reflectable_G_ *)0x0;
  Darray_L_class_util__Reflectable_P_G___SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&pAStack_8);
  return;
}





//==== 0085f100 Clear_0085f100 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cstruct_util__Range_L_double_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__struct_util__Range_double_______Clear
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0085f120 Clear_0085f120 ====

/* public: virtual void __thiscall util__Sarray_bool_348___Clear(void) */

void __thiscall util__Sarray_bool_348___Clear(Sarray_L_bool_C348_G_ *this)

{
  undefined8 stack0xfffffffb;
  (**(code **)(this->_pad_0x0_0 + 0x10))(&stack0xfffffffb,(uint)this & 0xffffff);
  return;
}

//==== 0085f140 EndModLoading ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* private: void __thiscall GameManager__EndModLoading(void) */

void __thiscall GameManager__EndModLoading(GameManager *this)

{
  util__SimpleSerializationManager__SetNullPointerErrorState
            ((SimpleSerializationManager *)this->Options,Assert);
  util__SimpleSerializationManager__SetDatumOverrideErrorState
            ((SimpleSerializationManager *)this->Options,Ensure);
  DataParser__SetCurrentLoadType((DataParser *)this->Options,0);
  return;
}





//==== 0085f170 Exit ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__Exit(void) */

void __thiscall GameManager__Exit(GameManager *this)

{
  (this->IconAtlases).field_0x4 = 1;
  return;
}





//==== 0085f180 UpdateLoadingScreen ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__UpdateLoadingScreen(void) */

void __attribute__((noinline)) __thiscall GameManager__UpdateLoadingScreen(GameManager *this)

{
  int iVar1;
  
  if (this->IsInLoadingScreen != false) {
    iVar1 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar1;
    RenderLoadingScreen(this,iVar1);
    return;
  }
  RenderBlackScreen(this);
  return;
}





//==== 0085f1b0 FreeAll_0085f1b0 ====

/* private: void  util__AutoDarray_L_structIcons__Atlas_G___FreeAll(void) */

void  util__AutoDarray_struct_Icons__Atlas___FreeAll(AutoDarray_L_Icons__Atlas_G_ *this)

{
  CustomTexture *this_00;
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)&this->field_0x4;
  if (puVar2 != puVar2 + *(int *)&this->field_0x8) {
    do {
      this_00 = (CustomTexture *)*puVar2;
      if (this_00 != (CustomTexture *)0x0) {
        piVar1 = (int *)this_00[3].TextureSize.Y;
        if (piVar1 != (int *)0x0) {
          if (piVar1[-1] == 0) {
            port_op_delete(piVar1 + -1);
          }
          else {
            (**(code **)(uintptr_t)(*piVar1 + 0x18))(3);
          }
        }
        this_00[3].TextureSize.Y = 0;
        this_00->_pad_0x0_0 = (int)&vftable_141;
        CustomTexture__Destroy(this_00);
        GraphicsResourceInterface___GraphicsResourceInterface((GraphicsResourceInterface *)this_00);
        port_op_delete(this_00,0x58);
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(*(int *)&this->field_0x4 + *(int *)&this->field_0x8 * 4));
  }
  return;
}

//==== 0085f230 GetAllResourcePaths ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   GameManager__GetAllResourcePaths(bool)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall
GameManager__GetAllResourcePaths(GameManager *this,bool param_1)

{
  undefined8 stack0x00000008;
  int iVar1;
  Darray_L_class_util__Str_L_char_G___G_ *this_00;
  bool bVar2;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar3;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  Darray_L_class_util__Str_L_char_G___G_ aDStack_38 [16];
  Darray_L_class_util__Str_L_char_G___G_ aDStack_28 [16];
  undefined **ppuStack_18;
  Str_L_char_G_ SStack_14;
  Str_L_char_G_ *pSStack_8;
  
  this_00 = (Darray_L_class_util__Str_L_char_G___G_ *)(uintptr_t)_param_1;
  *(undefined4 *)_param_1 = 0;
  *(undefined4 *)(_param_1 + 4) = 0;
  *(undefined4 *)(_param_1 + 8) = 0;
  *(undefined4 *)(_param_1 + 0xc) = 0;
  *(undefined ***)_param_1 = (undefined **)(&vftable_4);
  *(undefined4 *)(_param_1 + 4) = 0;
  *(undefined4 *)(_param_1 + 8) = 0;
  *(undefined4 *)(_param_1 + 0xc) = 0;
  pSStack_8 = GetModsPath(&SStack_14);
  iVar1 = *(int *)(this_00 + 8);
  _param_1 = (Darray_L_class_util__Str_L_char_G___G_ *)(iVar1 + 1);
  util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&param_1);
  bVar2 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar1);
  if (bVar2) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),pSStack_8
              );
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
  }
  bVar2 = SteamHandler__IsEnabled((SteamHandler *)(this->Cameras).Pointer);
  if (!bVar2) {
    ppuStack_18 = (undefined **)(&vftable_4);
    SStack_14.Data = (char *)0x0;
    pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_18;
    SStack_14.Capacity = 0;
    SStack_14.Length = 0;
  }
  else {
    pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)
             util__Darray_class_util__Str_char_____Darray_class_util__Str_char
                       (aDStack_38,
                        (Darray_L_class_util__Str_L_char_G___G_ *)&((this->Cameras).Pointer)->TargetCamera,0);
  }
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char(aDStack_28,(Str_L_char_G_*)((Str_L_char_G_*)((Str_L_char_G_*)(pDVar3))),0);
  if (!bVar2) {
    util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_18);
  }
  else {
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_38);
  }
  util__Darray_class_util__Str_char_____operator__o3(this_00,aDStack_28);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_28);
  if (in_stack_00000008 != '\0') {
    util__GetBasicResourcesPath(&SStack_14);
    iVar1 = *(int *)(this_00 + 8);
    _in_stack_00000008 = iVar1 + 1;
    util__Darray_class_util__Str_char_____SetSize(this_00,(int *)&stack0x00000008);
    bVar2 = util__Darray_class_util__Str_char_____CheckSize(this_00,iVar1);
    if (bVar2) {
      util__Str_char___operator__o8
                ((Str_L_char_G_ *)(*(int *)(this_00 + 4) + (*(int *)(this_00 + 8) * 3 + -3) * 4),
                 &SStack_14);
    }
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
    }
  }
  return this_00;
}





//==== 0085f3a0 GetAtlasForIcon ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct Icons__Atlas const * __thiscall GameManager__GetAtlasForIcon(void
   (__cdecl*)(void))const  */

Atlas * __thiscall GameManager__GetAtlasForIcon(GameManager *this,_func_void *param_1)

{
  undefined8 stack0xfffffffc;
  undefined1 *puVar1;
  Atlas *this_00;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Atlas *pAStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puVar1 = &(this->IconAtlases).field_0x8;
  pAStack_10 = (Atlas *)0x0;
  iStack_c = 0;
  iVar3 = (int)(uintptr_t) (**(code **)(*(int *)&(this->IconAtlases).field_0x8 + 0xc))();
  if (iStack_c < iVar3) {
    do {
      puVar4 = (undefined4 *)(*(code *)**(undefined4 **)puVar1)(&iStack_c);
      this_00 = (Atlas *)*puVar4;
      bVar2 = Icons__Atlas__IconIsInAtlas(this_00,param_1);
      if (bVar2) {
        pAStack_10 = this_00;
      }
      iStack_c = iStack_c + 1;
      iVar3 = (**(code **)(*(int *)puVar1 + 0xc))();
    } while (iStack_c < iVar3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return pAStack_10;
}





//==== 0085f420 GetDefaultIconAtlas ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct Icons__Atlas const * __thiscall GameManager__GetDefaultIconAtlas(bool)const  */

Atlas * __thiscall GameManager__GetDefaultIconAtlas(GameManager *this,bool param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined3 in_stack_00000005;
  GameManager *pGStack_8;
  
  pcVar1 = (code *)*(undefined4 *)((this->IconAtlases).field_0x8);
  if (param_1) {
    _param_1 = 1;
    pGStack_8 = this;
    puVar2 = (undefined4 *)(*pcVar1)(&param_1);
    return (Atlas *)*puVar2;
  }
  pGStack_8 = (GameManager *)0x0;
  puVar2 = (undefined4 *)(*pcVar1)(&pGStack_8);
  return (Atlas *)*puVar2;
}





//==== 0085f460 GetFactory_0085f460 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetFactory__o2
          (ReflectionInfoStruct_L_class_LanguageOption_G_ *this)

{
  return StaticFactory;
}





//==== 0085f470 GetFrameTime_ms ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int __thiscall GameManager__GetFrameTime_ms(void)const  */

int __thiscall GameManager__GetFrameTime_ms(GameManager *this)

{
  return (uint)((*(undefined1 *)(void *)((char *)(uintptr_t)(this) + 0x54)) / 1000);
}





//==== 0085f480 GetGameTime_s ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: double __thiscall GameManager__GetGameTime_s(void)const  */

double __thiscall GameManager__GetGameTime_s(GameManager *this)

{
  return *(double *)&this->LoadingScreenIsEnabled;
}





//==== 0085f490 GetMainLogo ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct CustomTexture const * __thiscall GameManager__GetMainLogo(void)const  */

CustomTexture * __thiscall GameManager__GetMainLogo(GameManager *this)

{
  return (CustomTexture *)&(this->Logo).TextureSize.Y;
}





//==== 0085f4a0 GetMember_0085f4a0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetMember__o2
          (ReflectionInfoStruct_L_class_LanguageOption_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 0085f4c0 GetMembers_0085f4c0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetMembers(void)const  */

undefined4 
LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetMembers__o2
          (ReflectionInfoStruct_L_class_LanguageOption_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 0085f4e0 GetPauseDialog ====

/* WARNING: Removing unreachable block (ram,0x0085fa7a) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct UIWidget * __thiscall GameManager__GetPauseDialog(class Manager *) */

UIWidget * __thiscall GameManager__GetPauseDialog(GameManager *this,Manager *param_1)

{
  undefined8 stack0xfffff690;
  undefined8 stack0xfffff694;
  undefined8 stack0xfffff6c8;
  undefined8 stack0xfffff7e0;
  UIAttributes UVar1;
  UIAttributes UVar2;
  UIAttributes UVar3;
  UIAttributes UVar4;
  Attribute_L_util__Str_L_char_G___G_ AVar5;
  LayoutAttributes LVar6;
  LayoutAttributes LVar7;
  Attribute_L_HorizontalAlignment__Type_G_ AVar8;
  Attribute_L_VerticalAlignment__Type_G_ AVar9;
  Delegate_L_bool_G_ DVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  _func___cdecl_Font_ptr_void_ptr *p_Var20;
  Font *pFVar21;
  CoreUITheme *pCVar22;
  LocStr *pLVar23;
  Str_L_char_G_ *pSVar24;
  UIAttributes *pUVar25;
  UIWidget *pUVar26;
  UIAttributes *pUVar27;
  float *pfVar28;
  Data *pDVar29;
  LayoutAttributes *pLVar30;
  Manager *in_stack_fffff690;
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  undefined1 in_stack_fffff694 [44];
  _func___cdecl_bool_void_ptr *in_stack_fffff6c0;
  _func___cdecl_bool_void_ptr *in_stack_fffff6c4;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined1 auVar38 [44];
  undefined1 auVar40 [44];
  undefined1 in_stack_fffff6c8 [264];
  float in_stack_fffff7d0;
  Str_L_char_G_ *in_stack_fffff7d4;
  float in_stack_fffff7d8;
  float in_stack_fffff7dc;
  void *pvVar41;
  char *in_stack_fffff7e0;
  char *pcVar42;
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Var43;
  Str_L_char_G_ *in_stack_fffff7e4;
  void *pvVar44;
  _func___cdecl_Color_void_ptr *in_stack_fffff7e8;
  _func___cdecl_Color_void_ptr *p_Var45;
  void *in_stack_fffff7ec;
  float fVar46;
  void *pvVar47;
  _func___cdecl_Type_void_ptr_conflict1 *in_stack_fffff7f0;
  float fVar48;
  _func___cdecl_int_void_ptr *p_Var49;
  int in_stack_fffff7f4;
  float fVar50;
  int iVar51;
  void *in_stack_fffff7f8;
  float fVar52;
  void *pvVar53;
  _func___cdecl_Type_void_ptr_conflict *in_stack_fffff7fc;
  float fVar54;
  _func___cdecl_bool_void_ptr *p_Var55;
  float in_stack_fffff800;
  float fVar56;
  float in_stack_fffff804;
  float fVar57;
  float fVar58;
  float fVar59;
  LineCount LVar60;
  UIAttributes local_7e4;
  UIAttributes local_69c;
  UIAttributes local_554;
  UIAttributes local_40c;
  UIAttributes local_2c4;
  LayoutAttributes local_17c;
  LayoutAttributes local_14c;
  void *local_11c [3];
  void *local_110;
  void *local_104 [3];
  void *local_f8;
  Str_L_char_G_ local_ec;
  void *local_e0;
  _func___cdecl_Color_void_ptr *local_dc;
  undefined **local_d8;
  Str_L_char_G_ local_d4;
  float local_c8;
  float local_c4;
  UIWidget *local_c0;
  float local_bc;
  undefined1 local_b8;
  void *local_b4;
  _func___cdecl_Color_void_ptr *local_b0;
  undefined **local_ac;
  Str_L_char_G_ local_a8;
  float local_9c;
  float local_98;
  UIWidget *local_94;
  float local_90;
  Str_L_char_G_ local_8c;
  Data local_80;
  GameManager *local_70;
  _func___cdecl_bool_void_ptr *p_Stack_6c;
  uint local_68;
  void *local_64;
  _func___cdecl_Font_ptr_void_ptr *p_Stack_60;
  Font *pFStack_5c;
  undefined4 uStack_58;
  Str_L_char_G_ local_54;
  Str_L_char_G_ local_48;
  UIRowLayout *local_3c;
  UIStaticText *local_38;
  Font *local_34;
  UIBoxLayout *local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  void *pvStack_20;
  undefined1 auStack_1c [8];
  undefined8 uStack_14;
  UIWidget *local_c;
  UIWidget *local_8;
  undefined1 auVar39 [32];
  
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  local_30 = (UIBoxLayout *)0x0;
  pCVar22 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme());
  local_34 = ThemeFont__Get((ThemeFont *)&(pCVar22->MainFont).FontUsed.CharInfo[0xe].TextureCoords.Y
                           );
  local_30 = (UIBoxLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_30 == (UIBoxLayout *)0x0) {
    pUVar26 = (UIWidget *)0x0;
  }
  else {
    local_3c = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
    if (local_3c == (UIRowLayout *)0x0) {
      local_8 = (UIWidget *)0x0;
    }
    else {
      local_38 = (UIStaticText *)(uintptr_t)(port_op_new(0x1c8));
      if (local_38 == (UIStaticText *)0x0) {
        local_8 = (UIWidget *)0x0;
      }
      else {
        util__Str_char___Str_char(&local_ec,"Paused");
        util__Str_char___Str_char(&local_8c,"PressSpaceToUnpauseGame");
        LVar60 = 0;
        fVar58 = 0.0;
        in_stack_fffff804 = 0.0;
        in_stack_fffff7f8 = (void *)0x0;
        in_stack_fffff7fc = (_func___cdecl_Type_void_ptr_conflict *)0x0;
        in_stack_fffff800 = 0.0;
        in_stack_fffff7ec = (void *)0x0;
        in_stack_fffff7f0 = (_func___cdecl_Type_void_ptr_conflict1 *)0x0;
        in_stack_fffff7f4 = FaceType__Left__V;
        in_stack_fffff7e4 = &local_ec;
        local_54.Data = (char *)0x0;
        local_54.Capacity = 0;
        local_54.Length = 0;
        in_stack_fffff7e0 = (char *)0x85f5af;
        pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_11c,in_stack_fffff7e4,&local_54);
        in_stack_fffff7e8 = (_func___cdecl_Color_void_ptr *)0x85f5b6;
        in_stack_fffff7d4 = util__LocStr__operator__o3(pLVar23);
        in_stack_fffff7d8 = 0.0;
        in_stack_fffff7dc = 0.0;
        in_stack_fffff7d0 = 1.2302292e-38;
        util__Str_char___Str_char((Str_L_char_G_ *)&stack0xfffff7e0,in_stack_fffff7d4);
        p_Stack_6c = util__DelegateFactory_class_GameManager_bool___MethodCallerConst__private__bool___thiscall_GameManager__ShouldShowPauseDialog_void_const
        ;
        local_68 = local_68 & 0xffffff00;
        local_48.Data = (char *)0x0;
        local_48.Capacity = 0;
        local_48.Length = 0;
        local_70 = this;
        pLVar23 = (LocStr *)util__LocStr__LocStr((LocStr *)local_104,&local_8c,&local_48);
        pSVar24 = util__LocStr__operator__o3(pLVar23);
        pvStack_20 = (void *)0x0;
        *(uint32_t *)&auStack_1c = (uint64_t)((ulonglong)(uint)(*(uint32_t*)((char*)&(auStack_1c)+4)) << 0x20);
        util__Str_char___Str_char((Str_L_char_G_ *)(auStack_1c + 4),pSVar24);
        pCVar22 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme());
        local_b4 = (void *)0x0;
        local_b0 = (_func___cdecl_Color_void_ptr *)0x0;
        local_ac = &vftable_5;
        util__Str_char___Str_char(&local_a8,(Str_L_char_G_ *)&(pCVar22->BrightTextColor)._pad_0x4_1);
        local_9c = (pCVar22->BrightTextColor).Hue_degrees;
        local_98 = (pCVar22->BrightTextColor).Saturation;
        local_94 = (UIWidget *)(uintptr_t)*(undefined4 *)&(((pCVar22->BrightTextColor).Value));
        local_90 = (pCVar22->BrightTextColor).Alpha;
        local_ac = &vftable_59;
        p_Stack_60 = (void *)0x0;
        pFStack_5c = (Font *)0x0;
        local_2c = local_98;
        local_28 = local_9c;
        local_c = local_94;
        local_8 = (UIWidget *)(uintptr_t)*(undefined4 *)&((local_90));
        pUVar25 = (UIAttributes *)UIAttributes__UIAttributes(&local_7e4,param_1);
        pFVar21 = pFStack_5c;
        p_Var20 = p_Stack_60;
        local_64 = p_Stack_60;
        p_Stack_60 = (_func___cdecl_Font_ptr_void_ptr *)pFStack_5c;
        pFStack_5c = local_34;
        local_e0 = local_b4;
        uStack_58 = CONCAT31((*(uint24_t*)((char*)&(uStack_58)+1)),1);
        local_dc = local_b0;
        (pUVar25->TextFont).Data.Getter.Callee = p_Var20;
        (pUVar25->TextFont).Data.Getter.CallbackFunction =
             (_func___cdecl_Font_ptr_void_ptr *)pFVar21;
        (pUVar25->TextFont).Data.Value = local_34;
        (undefined4)((pUVar25->TextFont).IsValidData = uStack_58);
        local_d8 = &vftable_5;
        util__Str_char___Str_char(&local_d4,&local_a8);
        local_c8 = local_28;
        local_c4 = local_2c;
        (pUVar25->TextColor).Data.Getter.Callee = local_e0;
        (pUVar25->TextColor).Data.Getter.CallbackFunction = local_dc;
        local_c0 = local_c;
        local_d8 = &vftable_59;
        local_bc = (double)(uintptr_t)((float)(int)(uintptr_t)(local_8));
        local_b8 = 1;
        util__Str_char___operator__o8
                  ((Str_L_char_G_ *)&(pUVar25->TextColor).Data.Value._pad_0x4_1,&local_d4);
        (pUVar25->TextColor).Data.Value.Hue_degrees = local_28;
        (pUVar25->TextColor).Data.Value.Saturation = local_2c;
        (pUVar25->TextColor).Data.Value.Value = (double)(uintptr_t)((float)(int)(uintptr_t)(local_c));
        (pUVar25->TextColor).Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(local_8));
        (pUVar25->TextColor).IsValidData = true;
        if (local_d4.Data != (char *)0x0) {
          port_op_delete(local_d4.Data);
        }
        if (local_a8.Data != (char *)0x0) {
          port_op_delete(local_a8.Data);
        }
        (pUVar25->Tooltip).Getter.Callee = pvStack_20;
        (pUVar25->Tooltip).Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(*(uint32_t*)&(auStack_1c));
        util__Str_char___operator__o8(&(pUVar25->Tooltip).Value,(Str_L_char_G_ *)(auStack_1c + 4));
        if ((void *)(*(uint32_t*)((char*)&(auStack_1c)+4)) != (void *)0x0) {
          port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_1c)+4)));
        }
        DVar10.CallbackFunction = p_Stack_6c;
        DVar10.Callee = local_70;
        (pUVar25->Visible).Getter = DVar10;
        (uint)((pUVar25->Visible).Value = local_68);
        UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff690,pUVar25);
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff694) + 0)));
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff694) + 28)));
        UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar31));
        UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
        UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar31)+8));
        uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff694) + 12)),0);
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff694) + 12)),8);
        UVar1.Location.Getter.Callee = (void *)(int)uVar33;
        UVar1.Location.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.Location.Value.X = (int)uVar34;
        UVar1.Location.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
        UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar32));
        UVar1.Visible.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar32)) >> 0x20);
        UVar1.Visible.Value = (bool)auVar32[8];
        (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar32)+9));
        UVar1.Enabled.Getter.Callee = (void *)(*(uint32_t *)((char *)&(in_stack_fffff694) + 40));
        UVar1.Parent = in_stack_fffff690;
        UVar1.Enabled.Getter.CallbackFunction = in_stack_fffff6c0;
        (*(uint32_t *)((char *)&(UVar1.Enabled) + 8)) = (uint32_t)(uintptr_t)(in_stack_fffff6c4);
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 124)));
*(uint32_t *)&auVar38 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 140)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 184)));
        uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 0)),0);
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 0)),8);
        UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar33;
        UVar1.DesiredSize.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.DesiredSize.Value.X = (int)uVar34;
        UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
        uVar33 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 16)),0);
*(uint32_t *)&auVar35 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 16)),8));
        UVar1.FillProportion.Getter.Callee = (void *)(int)uVar33;
        UVar1.FillProportion.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar35));
        UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar35)+8));
        uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 40)),0);
        UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar33;
        UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
        UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 40)),8);
        (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 52));
        uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 56)),0);
        UVar1.Depth.Getter.Callee = (void *)(int)uVar33;
        UVar1.Depth.Getter.CallbackFunction =
             (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 56)),8);
        uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 72)),0);
        UVar1.Icon.Getter.Callee = (void *)(int)uVar33;
        UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
        UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 72)),8);
        uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 84)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 84)),8));
        UVar1.Tooltip.Getter.Callee = (void *)(int)uVar33;
        UVar1.Tooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
        UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
        UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
        uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 104)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 104)),8));
        UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar33;
        UVar1.VerboseTooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
        UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
        UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
        uVar33 = SUB128((*(uint32_t *)((char *)&(auVar37) + 0)),0);
        UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar33;
        UVar1.TextFont.Data.Getter.CallbackFunction =
             (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar37) + 0)),8);
        UVar1.TextFont.IsValidData = (bool)auVar37[0xc];
        (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar37) + 13));
        uVar33 = SUB408((*(uint32_t *)((char *)&(auVar38) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar38) + 0)),8));
        UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar33;
        UVar1.ForegroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
        UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
        UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
        UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
        UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
        UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
        UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
        UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
        UVar1.ForegroundColor.IsValidData = (bool)auVar38[0x28];
        (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar38) + 41));
        uVar33 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
        UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar33;
        UVar1.BackgroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
        UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
        UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
        UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
        UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
        UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
        UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
        UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
        UVar1.BackgroundColor.IsValidData = (bool)auVar40[0x28];
        (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
        UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 228));
        UVar1.TextColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 228)) >> 0x20);
        UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 236));
        UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 240));
        UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 244));
        UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 248));
        UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff6c8) + 252));
        UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff6c8) + 256));
        UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffff6c8) + 260));
        UVar1.TextColor.Data.Value.Alpha = in_stack_fffff7d0;
        (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = (uint32_t)(uintptr_t)(in_stack_fffff7d4);
        AVar5.Getter.CallbackFunction = *(_func___cdecl_Str_L_char_G__void_ptr *)&(in_stack_fffff7dc);
        AVar5.Getter.Callee = *(void **)&(in_stack_fffff7d8);
        AVar5.Value.Data = in_stack_fffff7e0;
        AVar5.Value.Capacity = (int)in_stack_fffff7e4;
        AVar5.Value.Length = (int)in_stack_fffff7e8;
        AVar8.Getter.CallbackFunction = (Type (*)(void *))(in_stack_fffff7f0);
        AVar8.Getter.Callee = in_stack_fffff7ec;
        AVar8.Value = in_stack_fffff7f4;
        AVar9.Getter.CallbackFunction = (Type (*)(void *))(in_stack_fffff7fc);
        AVar9.Getter.Callee = in_stack_fffff7f8;
        AVar9.Value = (int)in_stack_fffff800;
        local_8 = (UIWidget *)
                  UIStaticText__UIStaticText
                            (local_38,UVar1,AVar5,AVar8,AVar9,(Background)in_stack_fffff804,
                             (Verticality)fVar58,LVar60);
        bVar17 = true;
        bVar16 = true;
        bVar15 = true;
        bVar14 = true;
        bVar13 = true;
        bVar12 = true;
        bVar11 = true;
      }
      pUVar26 = (UIWidget *)(uintptr_t)(port_op_new(0x168));
      if (pUVar26 == (UIWidget *)0x0) {
        local_c = (UIWidget *)0x0;
      }
      else {
        local_c = pUVar26;
        UIAttributes__UIAttributes(&local_2c4,param_1);
        pUVar25 = &local_2c4;
        fVar58 = 1.2303288e-38;
        pUVar27 = (UIAttributes *)UIAttributes__UIAttributes(&local_40c,pUVar25);
        *(uint32_t *)&auStack_1c = (uint64_t)0x3ff0000000000000;
        uStack_14 = 0x3ff0000000000000;
        local_24 = 0;
        pvStack_20 = (void *)0x0;
        (pUVar27->FillProportion).Getter.Callee = (void *)0x0;
        (pUVar27->FillProportion).Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
        (undefined4)((pUVar27->FillProportion).Value.X = 0);
        *(undefined4 *)((int)&(pUVar27->FillProportion).Value.X + 4) = 0x3ff00000;
        (pUVar27->FillProportion).Value.Y = 1.0;
        in_stack_fffff6c0 = (_func___cdecl_bool_void_ptr *)0x85f8c8;
        UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff6c8,pUVar27);
        in_stack_fffff6c4 = (_func___cdecl_bool_void_ptr *)0x85f8cf;
        UVar4.BackgroundColor.Data.Value.Hue_degrees = in_stack_fffff7d0;
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 4)));
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 32)));
*(uint32_t *)&auVar36 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 44)));
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 180)));
*(uint32_t *)&auVar38 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 196)));
        UVar4.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff6c8));
        UVar4.Tag.Data = (char *)(*(uint32_t*)&(auVar31));
        UVar4.Tag.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
        UVar4.Tag.Length = (*(uint32_t*)((char*)&(auVar31)+8));
        uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 16)),0);
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 16)),8);
        UVar4.Location.Getter.Callee = (void *)(int)uVar33;
        UVar4.Location.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.Location.Value.X = (int)uVar34;
        UVar4.Location.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
        UVar4.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar32));
        UVar4.Visible.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar32)) >> 0x20);
        UVar4.Visible.Value = (bool)auVar32[8];
        (*(uint24_t *)((char *)&(UVar4.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar32)+9));
        UVar4.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar36));
        UVar4.Enabled.Getter.CallbackFunction =
             (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar36)) >> 0x20);
        UVar4.Enabled.Value = (bool)auVar36[8];
        (*(uint24_t *)((char *)&(UVar4.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar36)+9));
        uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 56)),0);
        uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 56)),8);
        UVar4.DesiredSize.Getter.Callee = (void *)(int)uVar33;
        UVar4.DesiredSize.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.DesiredSize.Value.X = (int)uVar34;
        UVar4.DesiredSize.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
        uVar33 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 72)),0);
*(uint32_t *)&auVar35 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 72)),8));
        UVar4.FillProportion.Getter.Callee = (void *)(int)uVar33;
        UVar4.FillProportion.Getter.CallbackFunction =
             (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar35));
        UVar4.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar35)+8));
        uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 96)),0);
        UVar4.HitTestShape.Getter.Callee = (void *)(int)uVar33;
        UVar4.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
        UVar4.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 96)),8);
        (*(uint32_t *)((char *)&(UVar4) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 108));
        uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 112)),0);
        UVar4.Depth.Getter.Callee = (void *)(int)uVar33;
        UVar4.Depth.Getter.CallbackFunction =
             (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 112)),8);
        uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 128)),0);
        UVar4.Icon.Getter.Callee = (void *)(int)uVar33;
        UVar4.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
        UVar4.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 128)),8);
        uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 140)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 140)),8));
        UVar4.Tooltip.Getter.Callee = (void *)(int)uVar33;
        UVar4.Tooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
        UVar4.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
        UVar4.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
        uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 160)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 160)),8));
        UVar4.VerboseTooltip.Getter.Callee = (void *)(int)uVar33;
        UVar4.VerboseTooltip.Getter.CallbackFunction =
             (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
        UVar4.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
        UVar4.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
        uVar33 = SUB128((*(uint32_t *)((char *)&(auVar37) + 0)),0);
        UVar4.TextFont.Data.Getter.Callee = (void *)(int)uVar33;
        UVar4.TextFont.Data.Getter.CallbackFunction =
             (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar37) + 0)),8);
        UVar4.TextFont.IsValidData = (bool)auVar37[0xc];
        (*(uint32_t *)((char *)&(UVar4.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar37) + 13));
        uVar33 = SUB408((*(uint32_t *)((char *)&(auVar38) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar38) + 0)),8));
        UVar4.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar33;
        UVar4.ForegroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
        UVar4.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
        UVar4.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
        UVar4.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
        UVar4.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
        UVar4.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
        UVar4.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
        UVar4.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
        UVar4.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
        UVar4.ForegroundColor.IsValidData = (bool)auVar38[0x28];
        (*(uint32_t *)((char *)&(UVar4.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar38) + 41));
        UVar4.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 240));
        UVar4.BackgroundColor.Data.Getter.CallbackFunction =
             (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 240)) >> 0x20);
        UVar4.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 248));
        UVar4.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 252));
        UVar4.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 256));
        UVar4.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 260));
        UVar4.BackgroundColor.Data.Value.Saturation = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff7d4));
        UVar4.BackgroundColor.Data.Value.Value = in_stack_fffff7d8;
        UVar4.BackgroundColor.Data.Value.Alpha = in_stack_fffff7dc;
        (*(uint32_t *)((char *)&(UVar4.BackgroundColor) + 40)) = (uint32_t)(uintptr_t)(in_stack_fffff7e0);
        UVar4.TextColor.Data.Getter.Callee = in_stack_fffff7e4;
        UVar4.TextColor.Data.Getter.CallbackFunction = in_stack_fffff7e8;
        UVar4.TextColor.Data.Value._pad_0x0_0 = (int)in_stack_fffff7ec;
        UVar4.TextColor.Data.Value._pad_0x4_1 = (int)in_stack_fffff7f0;
        UVar4.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff7f4;
        UVar4.TextColor.Data.Value._pad_0xc_3 = (int)in_stack_fffff7f8;
        UVar4.TextColor.Data.Value.Hue_degrees = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff7fc));
        UVar4.TextColor.Data.Value.Saturation = in_stack_fffff800;
        UVar4.TextColor.Data.Value.Value = in_stack_fffff804;
        UVar4.TextColor.Data.Value.Alpha = fVar58;
        (*(uint32_t *)((char *)&(UVar4.TextColor) + 40)) = (uint32_t)(uintptr_t)(pUVar25);
        UIWidget__UIWidget(pUVar26,UVar4);
        UIAttributes___UIAttributes(&local_40c);
        pUVar26->_pad_0x0_0 = (int)&vftable_49;
        UIAttributes___UIAttributes(&local_2c4);
      }
      local_80.Widgets._pad_0x0_0 = (int)&vftable_48;
      bVar19 = true;
      local_80.Widgets.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
      local_80.Widgets.Size = 0;
      local_80.Widgets.Capacity = 0;
      pfVar28 = (float *)LayoutAttributes__LayoutAttributes(&local_14c);
      *(undefined1 *)((int)pfVar28 + 0x2d) = 0;
      pUVar25 = (UIAttributes *)UIAttributes__UIAttributes(&local_69c,param_1);
      local_24 = 0;
      *(uint32_t *)&auStack_1c = (uint64_t)0x0;
      uStack_14 = 0x3ff0000000000000;
      pvStack_20 = (void *)0x0;
      (pUVar25->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar25->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      (undefined4)((pUVar25->FillProportion).Value.X = 0);
      *(undefined4 *)((int)&(pUVar25->FillProportion).Value.X + 4) = 0;
      (pUVar25->FillProportion).Value.Y = 1.0;
      pUVar26 = local_8;
      pDVar29 = (Data *)(uintptr_t)(UILayout__Data__Add(&local_80,local_c));
      pDVar29 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar29,pUVar26));
      fVar58 = *pfVar28;
      pcVar42 = (char *)(uintptr_t)(*(char *)&(pfVar28[1]));
      pvVar41 = *(void **)&(pfVar28[2]);
      p_Var45 = *(_func___cdecl_Color_void_ptr *)&(pfVar28[3]);
      fVar46 = pfVar28[4];
      fVar48 = pfVar28[5];
      fVar50 = pfVar28[6];
      fVar52 = pfVar28[7];
      fVar54 = pfVar28[8];
      fVar56 = pfVar28[9];
      fVar57 = pfVar28[10];
      fVar59 = pfVar28[0xb];
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff694,pUVar25);
      UVar2.Enabled.Getter.Callee = in_stack_fffff6c0;
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff694) + 4)));
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff694) + 32)));
      UVar2.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff694));
      UVar2.Tag.Data = (char *)(*(uint32_t*)&(auVar31));
      UVar2.Tag.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
      UVar2.Tag.Length = (*(uint32_t*)((char*)&(auVar31)+8));
      uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff694) + 16)),0);
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff694) + 16)),8);
      UVar2.Location.Getter.Callee = (void *)(int)uVar33;
      UVar2.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.Location.Value.X = (int)uVar34;
      UVar2.Location.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
      UVar2.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar32));
      UVar2.Visible.Getter.CallbackFunction =
           (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar32)) >> 0x20);
      UVar2.Visible.Value = (bool)auVar32[8];
      (*(uint24_t *)((char *)&(UVar2.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar32)+9));
      UVar2.Enabled.Getter.CallbackFunction = in_stack_fffff6c4;
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 128)));
*(uint32_t *)&auVar38 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 144)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 188)));
      UVar2.Enabled.Value = (bool)in_stack_fffff6c8[0];
      (*(uint24_t *)((char *)&(UVar2.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff6c8)+1));
      uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 4)),0);
      uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 4)),8);
      UVar2.DesiredSize.Getter.Callee = (void *)(int)uVar33;
      UVar2.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.DesiredSize.Value.X = (int)uVar34;
      UVar2.DesiredSize.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
      uVar33 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 20)),0);
*(uint32_t *)&auVar35 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 20)),8));
      UVar2.FillProportion.Getter.Callee = (void *)(int)uVar33;
      UVar2.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar35));
      UVar2.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar35)+8));
      uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 44)),0);
      UVar2.HitTestShape.Getter.Callee = (void *)(int)uVar33;
      UVar2.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
      UVar2.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 44)),8);
      (*(uint32_t *)((char *)&(UVar2) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 56));
      uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 60)),0);
      UVar2.Depth.Getter.Callee = (void *)(int)uVar33;
      UVar2.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 60)),8);
      uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 76)),0);
      UVar2.Icon.Getter.Callee = (void *)(int)uVar33;
      UVar2.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
      UVar2.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 76)),8);
      uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 88)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 88)),8));
      UVar2.Tooltip.Getter.Callee = (void *)(int)uVar33;
      UVar2.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
      UVar2.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
      UVar2.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
      uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 108)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 108)),8));
      UVar2.VerboseTooltip.Getter.Callee = (void *)(int)uVar33;
      UVar2.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
      UVar2.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
      UVar2.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
      uVar33 = SUB128((*(uint32_t *)((char *)&(auVar37) + 0)),0);
      UVar2.TextFont.Data.Getter.Callee = (void *)(int)uVar33;
      UVar2.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar37) + 0)),8);
      UVar2.TextFont.IsValidData = (bool)auVar37[0xc];
      (*(uint32_t *)((char *)&(UVar2.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar37) + 13));
      uVar33 = SUB408((*(uint32_t *)((char *)&(auVar38) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar38) + 0)),8));
      UVar2.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar33;
      UVar2.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
      UVar2.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
      UVar2.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
      UVar2.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
      UVar2.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
      UVar2.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
      UVar2.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
      UVar2.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
      UVar2.ForegroundColor.IsValidData = (bool)auVar38[0x28];
      (*(uint32_t *)((char *)&(UVar2.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar38) + 41));
      uVar33 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
      UVar2.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar33;
      UVar2.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
      UVar2.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
      UVar2.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
      UVar2.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
      UVar2.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
      UVar2.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
      UVar2.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
      UVar2.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
      UVar2.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
      UVar2.BackgroundColor.IsValidData = (bool)auVar40[0x28];
      (*(uint32_t *)((char *)&(UVar2.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
      UVar2.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 232));
      UVar2.TextColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 232)) >> 0x20);
      UVar2.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 240));
      UVar2.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 244));
      UVar2.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 248));
      UVar2.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 252));
      UVar2.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff6c8) + 256));
      UVar2.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff6c8) + 260));
      UVar2.TextColor.Data.Value.Value = in_stack_fffff7d0;
      UVar2.TextColor.Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff7d4));
      (*(uint32_t *)((char *)&(UVar2.TextColor) + 40)) = in_stack_fffff7d8;
      LVar6.Margin.Getter.CallbackFunction = (_func___cdecl_Vec2_L_int_G__void_ptr *)pcVar42;
      LVar6.Margin.Getter.Callee = *(void **)&(fVar58);
      LVar6.Margin.Value.X = (int)pvVar41;
      LVar6.Margin.Value.Y = (int)p_Var45;
      LVar6.Padding.Getter.Callee = *(void **)&(fVar46);
      LVar6.Padding.Getter.CallbackFunction = *(_func___cdecl_int_void_ptr *)&(fVar48);
      LVar6.Padding.Value = (int)fVar50;
      LVar6.Background__HasBackground.Getter.Callee = *(void **)&(fVar52);
      LVar6.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar54);
      (*(uint32_t *)((char *)&(LVar6.Background__HasBackground) + 8)) = fVar56;
      (*(uint32_t *)((char *)&(LVar6) + 40)) = fVar57;
      (*(uint32_t *)((char *)&(LVar6) + 44)) = fVar59;
      local_8 = (UIWidget *)UIRowLayout__UIRowLayout(local_3c,UVar2,LVar6,pDVar29);
    }
    bVar18 = true;
    pLVar30 = LayoutAttributes__OpenScreen(&local_17c);
    pLVar30->IsCentered = true;
    (*(undefined1 *)(void *)((char *)(uintptr_t)(pLVar30) + 0x2d)) = 0;
    pUVar25 = (UIAttributes *)UIAttributes__UIAttributes(&local_554,param_1);
    *(uint32_t *)&auStack_1c = (uint64_t)0x3ff0000000000000;
    uStack_14 = 0x3ff0000000000000;
    local_24 = 0;
    pvStack_20 = (void *)0x0;
    (pUVar25->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar25->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    (undefined4)((pUVar25->FillProportion).Value.X = 0);
    *(undefined4 *)((int)&(pUVar25->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar25->FillProportion).Value.Y = 1.0;
    pvVar41 = (pLVar30->Margin).Getter.Callee;
    p_Var43 = (pLVar30->Margin).Getter.CallbackFunction;
    pvVar44 = (void *)(pLVar30->Margin).Value.X;
    p_Var45 = (_func___cdecl_Color_void_ptr *)(pLVar30->Margin).Value.Y;
    pvVar47 = (pLVar30->Padding).Getter.Callee;
    p_Var49 = (pLVar30->Padding).Getter.CallbackFunction;
    iVar51 = (pLVar30->Padding).Value;
    pvVar53 = (pLVar30->Background__HasBackground).Getter.Callee;
    p_Var55 = (pLVar30->Background__HasBackground).Getter.CallbackFunction;
    fVar58 = *(float *)&(pLVar30->Background__HasBackground).Value;
    fVar46 = *(float *)&pLVar30->IsEmbossed;
    fVar48 = *(float *)&pLVar30->HasFlexibleSizing;
    pUVar26 = local_8;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff694,pUVar25);
    UVar3.Enabled.Getter.Callee = in_stack_fffff6c0;
*(uint32_t *)&auVar31 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff694) + 4)));
*(uint32_t *)&auVar32 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff694) + 32)));
    UVar3.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff694));
    UVar3.Tag.Data = (char *)(*(uint32_t*)&(auVar31));
    UVar3.Tag.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
    UVar3.Tag.Length = (*(uint32_t*)((char*)&(auVar31)+8));
    uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff694) + 16)),0);
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff694) + 16)),8);
    UVar3.Location.Getter.Callee = (void *)(int)uVar33;
    UVar3.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.Location.Value.X = (int)uVar34;
    UVar3.Location.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
    UVar3.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar32));
    UVar3.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar32)) >> 0x20);
    UVar3.Visible.Value = (bool)auVar32[8];
    (*(uint24_t *)((char *)&(UVar3.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar32)+9));
    UVar3.Enabled.Getter.CallbackFunction = in_stack_fffff6c4;
*(uint32_t *)&auVar37 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 128)));
*(uint32_t *)&auVar38 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 144)));
*(uint32_t *)&auVar40 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 188)));
    UVar3.Enabled.Value = (bool)in_stack_fffff6c8[0];
    (*(uint24_t *)((char *)&(UVar3.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff6c8)+1));
    uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 4)),0);
    uVar34 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 4)),8);
    UVar3.DesiredSize.Getter.Callee = (void *)(int)uVar33;
    UVar3.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.DesiredSize.Value.X = (int)uVar34;
    UVar3.DesiredSize.Value.Y = (int)((ulonglong)uVar34 >> 0x20);
    uVar33 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 20)),0);
*(uint32_t *)&auVar35 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 20)),8));
    UVar3.FillProportion.Getter.Callee = (void *)(int)uVar33;
    UVar3.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar35));
    UVar3.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar35)+8));
    uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 44)),0);
    UVar3.HitTestShape.Getter.Callee = (void *)(int)uVar33;
    UVar3.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
    UVar3.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 44)),8);
    (*(uint32_t *)((char *)&(UVar3) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 56));
    uVar33 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 60)),0);
    UVar3.Depth.Getter.Callee = (void *)(int)uVar33;
    UVar3.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 60)),8);
    uVar33 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 76)),0);
    UVar3.Icon.Getter.Callee = (void *)(int)uVar33;
    UVar3.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20));
    UVar3.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 76)),8);
    uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 88)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 88)),8));
    UVar3.Tooltip.Getter.Callee = (void *)(int)uVar33;
    UVar3.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
    UVar3.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
    UVar3.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
    uVar33 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 108)),0);
*(uint32_t *)&auVar31 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff6c8) + 108)),8));
    UVar3.VerboseTooltip.Getter.Callee = (void *)(int)uVar33;
    UVar3.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar31));
    UVar3.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar31)+4));
    UVar3.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar31)+8));
    uVar33 = SUB128((*(uint32_t *)((char *)&(auVar37) + 0)),0);
    UVar3.TextFont.Data.Getter.Callee = (void *)(int)uVar33;
    UVar3.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar37) + 0)),8);
    UVar3.TextFont.IsValidData = (bool)auVar37[0xc];
    (*(uint32_t *)((char *)&(UVar3.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar37) + 13));
    uVar33 = SUB408((*(uint32_t *)((char *)&(auVar38) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar38) + 0)),8));
    UVar3.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar33;
    UVar3.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
    UVar3.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
    UVar3.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
    UVar3.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
    UVar3.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
    UVar3.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
    UVar3.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
    UVar3.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
    UVar3.ForegroundColor.IsValidData = (bool)auVar38[0x28];
    (*(uint32_t *)((char *)&(UVar3.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar38) + 41));
    uVar33 = SUB408((*(uint32_t *)((char *)&(auVar40) + 0)),0);
*(uint32_t *)&auVar39 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar40) + 0)),8));
    UVar3.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar33;
    UVar3.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar33 >> 0x20);
    UVar3.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar39));
    UVar3.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar39)+4));
    UVar3.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar39)+8));
    UVar3.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar39) + 12));
    UVar3.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar39) + 16));
    UVar3.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar39) + 20));
    UVar3.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar39) + 24));
    UVar3.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar39) + 28));
    UVar3.BackgroundColor.IsValidData = (bool)auVar40[0x28];
    (*(uint32_t *)((char *)&(UVar3.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar40) + 41));
    UVar3.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 232));
    UVar3.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff6c8) + 232)) >> 0x20);
    UVar3.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 240));
    UVar3.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 244));
    UVar3.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 248));
    UVar3.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff6c8) + 252));
    UVar3.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff6c8) + 256));
    UVar3.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff6c8) + 260));
    UVar3.TextColor.Data.Value.Value = in_stack_fffff7d0;
    UVar3.TextColor.Data.Value.Alpha = (double)(uintptr_t)((float)(int)(uintptr_t)(in_stack_fffff7d4));
    (*(uint32_t *)((char *)&(UVar3.TextColor) + 40)) = in_stack_fffff7d8;
    LVar7.Margin.Getter.CallbackFunction = p_Var43;
    LVar7.Margin.Getter.Callee = pvVar41;
    LVar7.Margin.Value.X = (int)pvVar44;
    LVar7.Margin.Value.Y = (int)p_Var45;
    LVar7.Padding.Getter.Callee = pvVar47;
    LVar7.Padding.Getter.CallbackFunction = p_Var49;
    LVar7.Padding.Value = iVar51;
    LVar7.Background__HasBackground.Getter.Callee = pvVar53;
    LVar7.Background__HasBackground.Getter.CallbackFunction = p_Var55;
    (*(uint32_t *)((char *)&(LVar7.Background__HasBackground) + 8)) = fVar58;
    (*(uint32_t *)((char *)&(LVar7) + 40)) = fVar46;
    (*(uint32_t *)((char *)&(LVar7) + 44)) = fVar48;
    pUVar26 = (UIWidget *)UIBoxLayout__UIBoxLayout(local_30,UVar3,LVar7,pUVar26);
  }
  if (bVar18) {
    UIAttributes___UIAttributes(&local_554);
  }
  if (bVar19) {
    UIAttributes___UIAttributes(&local_69c);
  }
  if (bVar12) {
    UIAttributes___UIAttributes(&local_7e4);
  }
  if (bVar13) {
    if (local_f8 != (void *)0x0) {
      port_op_delete(local_f8);
      local_f8 = (void *)0x0;
    }
    if (local_104[0] != (void *)0x0) {
      port_op_delete(local_104[0]);
      local_104[0] = (void *)0x0;
    }
  }
  if ((bVar14) && (local_48.Data != (char *)0x0)) {
    port_op_delete(local_48.Data);
    local_48.Data = (char *)0x0;
  }
  if (bVar15) {
    if (local_110 != (void *)0x0) {
      port_op_delete(local_110);
      local_110 = (void *)0x0;
    }
    if (local_11c[0] != (void *)0x0) {
      port_op_delete(local_11c[0]);
      local_11c[0] = (void *)0x0;
    }
  }
  if ((bVar16) && (local_54.Data != (char *)0x0)) {
    port_op_delete(local_54.Data);
    local_54.Data = (char *)0x0;
  }
  if ((bVar17) && (local_8c.Data != (char *)0x0)) {
    port_op_delete(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if ((local_ec.Data != (char *)0x0) && (bVar11)) {
    port_op_delete(local_ec.Data);
  }
  return pUVar26;
}

//==== 0085fbb0 GetPostProcessor ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class PostProcessor * __thiscall GameManager__GetPostProcessor(void)const  */

PostProcessor * __thiscall GameManager__GetPostProcessor(GameManager *this)

{
  return *(PostProcessor **)((int)&(this->GameTimer).LastTime + 4);
}





//==== 0085fbc0 GetReflectionInfo_0085fbc0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LanguageOption__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall LanguageOption__GetReflectionInfo(LanguageOption *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0e5c8f91__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0e5c8f91__thread_safe_static_guard_0__);
    if ( cde_l2_0e5c8f91__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d39adf50_ReflectionInfo) = &vftable_569;
      _Init_thread_footer(& cde_l2_0e5c8f91__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_d39adf50_ReflectionInfo;
}





//==== 0085fc20 GetTypeName_0085fc20 ====


/* public: virtual class util__Str_L_char_G_  LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetTypeName(void)const  */

Str_L_char_G_ * 
LanguageOption__ReflectionInfoStruct_class_LanguageOption___GetTypeName
          (ReflectionInfoStruct_L_class_LanguageOption_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LanguageOption");
  return __return_storage_ptr__;
}





//==== 0085fc40 GetValidFileInAllResourcePaths ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: class util__Darray_L_classutil__Str_L_char_G__G_ 
   GameManager__GetValidFileInAllResourcePaths(enum GameManager__ResourceType,class util__Str_L_char_G_
   const &)const  */

void 
GameManager__GetValidFileInAllResourcePaths
          (GameManager *this,ResourceType param_1,Str_L_char_G_ *param_2)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  LocalizationLibrary *this_00;
  char *pcVar2;
  Darray_L_class_util__Str_L_char_G___G_ *pDVar3;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 *in_stack_0000000c;
  Darray_L_class_util__Str_L_char_G___G_ aDStack_d8 [16];
  undefined4 *puStack_c8;
  Str_L_char_G_ SStack_c4;
  Darray_L_class_util__Str_L_char_G___G_ aDStack_b8 [4];
  Str_L_char_G_ SStack_b4;
  Darray_L_class_util__Str_L_char_G___G_ aDStack_a8 [4];
  Str_L_char_G_ SStack_a4;
  int iStack_98;
  Darray_L_class_util__Str_L_char_G___G_ *pDStack_94;
  Str_L_char_G_ SStack_90;
  Str_L_char_G_ SStack_84;
  undefined **ppuStack_78;
  Str_L_char_G_ SStack_74;
  int iStack_68;
  char *pcStack_64;
  uint uStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  Str_L_char_G_ SStack_3c;
  Darray_L_class_util__Str_L_char_G___G_ aDStack_30 [4];
  Str_L_char_G_ SStack_2c;
  Darray_L_class_util__Str_L_char_G___G_ aDStack_20 [4];
  Str_L_char_G_ SStack_1c;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  puStack_c8 = in_stack_0000000c;
  pSVar4 = &SStack_3c;
  iStack_98 = 0;
  pDStack_94 = (Darray_L_class_util__Str_L_char_G___G_ *)param_1;
  SStack_3c.Data = (char *)0x0;
  SStack_3c.Capacity = 0;
  SStack_3c.Length = 0;
  this_00 = util__LocalizationLibrary__GetCurrentLanguage();
  util__LocalizationLibrary__GetName(this_00,pSVar4);
  puStack_5c = (undefined4 *)0x0;
  uStack_58 = 0;
  iStack_54 = 0;
  uStack_50 = 0;
  GetAllResourcePaths(this,SUB41(&puStack_5c,0));
  SStack_c4.Length = 0;
  SStack_c4.Data = (char *)0x0;
  SStack_c4.Capacity = 0;
  if (param_2 == (Str_L_char_G_ *)0x0) {
    pcVar2 = "Textures";
  }
  else if (param_2 == (Str_L_char_G_ *)0x1) {
    pcVar2 = "Models";
  }
  else if (param_2 == (Str_L_char_G_ *)0x2) {
    pcVar2 = "OptionsSection__Audio";
  }
  else if (param_2 == (Str_L_char_G_ *)0x3) {
    pcVar2 = "Fonts";
  }
  else {
    pcVar2 = "Shaders";
    if (param_2 != (Str_L_char_G_ *)0x4) {
      pcVar2 = "";
    }
  }
  util__Str_char___Str_char(&SStack_c4,pcVar2);
  puStack_4c = (undefined4 *)0x0;
  uStack_48 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  if (param_2 == (Str_L_char_G_ *)0x0) {
    if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098cb80) &&
       (_Init_thread_header(&DAT_0098cb80), DAT_0098cb80 == -1)) {
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cb68,"jpg");
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cb74,"png");
      atexit(FUN_009108d0);
      _Init_thread_footer(&DAT_0098cb80);
    }
    util__Darray_class_util__Str_char_____Darray_class_util__Str_char
              (aDStack_20,(Str_L_char_G_ *)&DAT_0098cb68,2);
    pDVar3 = aDStack_20;
    uStack_60 = 1;
  }
  else {
    if (param_2 == (Str_L_char_G_ *)0x1) {
      if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098cb90)
         && (_Init_thread_header(&DAT_0098cb90), DAT_0098cb90 == -1)) {
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cb84,"obj");
        atexit(FUN_00910910);
        _Init_thread_footer(&DAT_0098cb90);
      }
      util__Darray_class_util__Str_char_____Darray_class_util__Str_char
                (aDStack_30,(Str_L_char_G_ *)&DAT_0098cb84,1);
      pDVar3 = aDStack_30;
      uStack_60 = 2;
    }
    else {
      if (param_2 == (Str_L_char_G_ *)0x2) {
        if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098cbac)
           && (_Init_thread_header(&DAT_0098cbac), DAT_0098cbac == -1)) {
          util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cb94,"wav");
          util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cba0,"ogg");
          atexit(FUN_00910890);
          _Init_thread_footer(&DAT_0098cbac);
        }
        util__Darray_class_util__Str_char_____Darray_class_util__Str_char
                  (aDStack_b8,(Str_L_char_G_ *)&DAT_0098cb94,2);
        pDVar3 = aDStack_b8;
        uStack_60 = 0x24;
      }
      else {
        SStack_84.Data = (char *)0x0;
        SStack_84.Capacity = 0;
        SStack_84.Length = 0;
        ppuStack_78 = (undefined **)(&vftable_4);
        SStack_74.Data = (char *)0x0;
        SStack_74.Capacity = 0;
        SStack_74.Length = 1;
        puVar6 = (undefined4 *)port_op_new(0x10);
        if (puVar6 == (undefined4 *)0x0) {
          SStack_74.Data = (char *)0x0;
        }
        else {
          *puVar6 = 1;
          SStack_74.Data = (char *)(puVar6 + 1);
          SStack_74.Data[0] = '\0';
          SStack_74.Data[1] = '\0';
          SStack_74.Data[2] = '\0';
          SStack_74.Data[3] = '\0';
          puVar6[2] = 0;
          puVar6[3] = 0;
        }
        iVar13 = 0;
        if (0 < SStack_74.Length) {
          SStack_90.Data = (char *)0x0;
          iVar11 = 0;
          SStack_90.Capacity = 0;
          SStack_90.Length = 0;
          do {
            util__Str_char___operator__o8((Str_L_char_G_ *)(SStack_74.Data + iVar11),&SStack_90);
            iVar13 = iVar13 + 1;
            iVar11 = iVar11 + 0xc;
          } while (iVar13 < SStack_74.Length);
        }
        iVar13 = SStack_74.Capacity;
        iStack_68 = SStack_74.Capacity + 1;
        util__Darray_class_util__Str_char_____SetSize
                  ((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_78,&iStack_68);
        bVar1 = util__Darray_class_util__Str_char_____CheckSize
                          ((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_78,iVar13);
        if (bVar1) {
          util__Str_char___operator__o8
                    ((Str_L_char_G_ *)(SStack_74.Data + (SStack_74.Capacity * 3 + -3) * 4),&SStack_84);
        }
        pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_78;
        uStack_60 = 0x38;
      }
      pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)
               util__Darray_class_util__Str_char_____Darray_class_util__Str_char
                         (aDStack_d8,pDVar3,0);
    }
    uStack_60 = uStack_60 | 0x40;
    pDVar3 = (Darray_L_class_util__Str_L_char_G___G_ *)
             util__Darray_class_util__Str_char_____Darray_class_util__Str_char(aDStack_a8,(Str_L_char_G_*)((Str_L_char_G_*)(pDVar3)),0)
    ;
  }
  util__Darray_L_class_util__Str_L_char_G___G___Darray_L_class_util__Str_L_char_G___G___o2
            ((Darray_L_class_util__Str_L_char_G___G_ *)&puStack_4c,pDVar3);
  if ((uStack_60 & 0x40) != 0) {
    uStack_60 = uStack_60 & 0xffffffbf;
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_a8);
  }
  if ((uStack_60 & 0x20) != 0) {
    uStack_60 = uStack_60 & 0xffffffdf;
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_d8);
  }
  if ((uStack_60 & 0x10) != 0) {
    uStack_60 = uStack_60 & 0xffffffef;
    util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_78);
  }
  if (((uStack_60 & 8) != 0) && (uStack_60 = uStack_60 & 0xfffffff7, SStack_84.Data != (char *)0x0))
  {
    port_op_delete(SStack_84.Data);
  }
  if ((uStack_60 & 4) != 0) {
    uStack_60 = uStack_60 & 0xfffffffb;
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_b8);
  }
  if ((uStack_60 & 2) != 0) {
    uStack_60 = uStack_60 & 0xfffffffd;
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_30);
  }
  if ((uStack_60 & 1) != 0) {
    uStack_60 = uStack_60 & 0xfffffffe;
    util__Darray_class_util__Str_char______Darray_class_util__Str_char(aDStack_20);
  }
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = (undefined **)(&vftable_4);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iStack_10 = 0;
  pcVar2 = SStack_c4.Data;
  if (0 < iStack_54) {
    pcStack_64 = SStack_90.Data;
    do {
      SStack_b4.Length = 0;
      SStack_b4.Data = (char *)0x0;
      SStack_b4.Capacity = 0;
      pSVar4 = (Str_L_char_G_ *)(*(code *)*puStack_5c)(&iStack_10);
      util__Str_char___Str_char(&SStack_b4,pSVar4);
      iStack_68 = 0;
      do {
        SStack_a4.Length = 0;
        SStack_a4.Data = (char *)0x0;
        SStack_a4.Capacity = 0;
        iVar13 = iStack_68;
        if (iStack_68 == 0) {
          do {
            iVar11 = iVar13;
            SStack_90.Length = iVar11 + 1;
            iVar13 = SStack_90.Length;
          } while ((&DAT_0091e2e9)[iVar11] != '\0');
          uVar12 = iVar11 + 2;
          SStack_90.Capacity = uVar12;
          pcVar2 = (char *)port_op_new(uVar12);
          if (pcVar2 == (char *)0x0) {
            pcVar2 = (char *)0x0;
            pcStack_64 = (char *)0x0;
          }
          else {
            pcStack_64 = pcVar2;
            memset(pcVar2,0,uVar12);
          }
          cVar9 = '-';
          pcVar5 = pcVar2;
          do {
            *pcVar5 = cVar9;
            pcVar5 = pcVar5 + 1;
            cVar9 = pcVar5[(int)(uintptr_t)s__ - (int)pcVar2];
          } while (cVar9 != '\0');
          *pcVar5 = '\0';
          SStack_1c.Data = (char *)0x0;
          SStack_1c.Capacity = 0;
          SStack_1c.Length = 0;
          SStack_90.Data = pcVar2;
          util__Str_char___Str_char(&SStack_1c,&SStack_90);
          util__Str_char___operator__o10(&SStack_1c,&SStack_3c);
          util__Str_char___Str_char(&SStack_74,&SStack_1c);
          if (SStack_1c.Data != (char *)0x0) {
            port_op_delete(SStack_1c.Data);
            (*(uint64_t*)&(SStack_1c)) = (*(uint64_t*)&(SStack_1c)) & 0xffffffff00000000;
          }
          pSVar4 = &SStack_74;
          uVar12 = 0x180;
        }
        else {
          SStack_84.Data = (char *)0x0;
          pSVar4 = &SStack_84;
          SStack_84.Capacity = 0;
          uVar12 = 0x200;
          SStack_84.Length = 0;
        }
        uVar12 = uVar12 | uStack_60;
        util__Str_char___Str_char(&SStack_a4,pSVar4);
        uStack_60 = uVar12;
        if (((uVar12 & 0x200) != 0) &&
           (uStack_60 = uVar12 & 0xfffffdff, SStack_84.Data != (char *)0x0)) {
          port_op_delete(SStack_84.Data);
          SStack_84.Data = (char *)0x0;
        }
        if (((uStack_60 & 0x100) != 0) &&
           (uStack_60 = uStack_60 & 0xfffffeff, SStack_74.Data != (char *)0x0)) {
          port_op_delete(SStack_74.Data);
          SStack_74.Data = (char *)0x0;
        }
        if (((char)uStack_60 < '\0') &&
           (uStack_60 = uStack_60 & 0xffffff7f, pcStack_64 != (char *)0x0)) {
          port_op_delete(pcStack_64);
          pcStack_64 = (char *)0x0;
        }
        iStack_c = 0;
        pcVar2 = SStack_a4.Data;
        if (0 < iStack_44) {
          do {
            puVar6 = (undefined4 *)(*(code *)*puStack_4c)(&iStack_c);
            SStack_2c.Length = 0;
            SStack_2c.Data = (char *)0x0;
            SStack_2c.Capacity = 0;
            if ((int)puVar6[1] < 1) {
              puVar7 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
            }
            else {
              puVar7 = (undefined1 *)*puVar6;
            }
            pcVar5 = "";
            if (0 < SStack_a4.Capacity) {
              pcVar5 = pcVar2;
            }
            if ((int)puStack_c8[1] < 1) {
              puVar14 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
            }
            else {
              puVar14 = (undefined1 *)*puStack_c8;
            }
            pcVar2 = "";
            if (0 < SStack_c4.Capacity) {
              pcVar2 = SStack_c4.Data;
            }
            pcVar8 = "";
            pcVar10 = "";
            if (0 < SStack_b4.Capacity) {
              pcVar10 = SStack_b4.Data;
            }
            if (puVar6[2] != 0) {
              pcVar8 = ".";
            }
            util__Printf(&SStack_2c,(wchar_t*)((wchar_t*)((wchar_t*)("%s/%s/%s%s%s%s"))),pcVar10,pcVar2,puVar14,pcVar5,pcVar8,puVar7);
            bVar1 = util__DoesFileExist(&SStack_2c);
            pDVar3 = pDStack_94;
            if (bVar1) {
              iVar13 = *(int *)(pDStack_94 + 8);
              iStack_98 = iVar13 + 1;
              util__Darray_class_util__Str_char_____SetSize(pDStack_94,&iStack_98);
              bVar1 = util__Darray_class_util__Str_char_____CheckSize(pDVar3,iVar13);
              if (bVar1) {
                util__Str_char___operator__o8
                          ((Str_L_char_G_ *)(*(int *)(pDVar3 + 4) + (*(int *)(pDVar3 + 8) * 3 + -3) * 4)
                           ,&SStack_2c);
              }
            }
            if (SStack_2c.Data != (char *)0x0) {
              port_op_delete(SStack_2c.Data);
              (*(uint64_t*)&(SStack_2c)) = (*(uint64_t*)&(SStack_2c)) & 0xffffffff00000000;
            }
            iStack_c = iStack_c + 1;
            pcVar2 = SStack_a4.Data;
          } while (iStack_c < iStack_44);
        }
        if (SStack_a4.Data != (char *)0x0) {
          port_op_delete(SStack_a4.Data);
          (*(uint64_t*)&(SStack_a4)) = (*(uint64_t*)&(SStack_a4)) & 0xffffffff00000000;
        }
        iStack_68 = iStack_68 + 1;
      } while (iStack_68 < 2);
      if (SStack_b4.Data != (char *)0x0) {
        port_op_delete(SStack_b4.Data);
        (*(uint64_t*)&(SStack_b4)) = (*(uint64_t*)&(SStack_b4)) & 0xffffffff00000000;
      }
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < iStack_54);
    pcVar2 = SStack_c4.Data;
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&puStack_4c);
  if (pcVar2 != (char *)0x0) {
    port_op_delete(pcVar2);
  }
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&puStack_5c);
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00860440 HandleKeyboardInput_00860440 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__HandleKeyboardInput(int,enum KeyInput__Type,struct
   InputModifiers const &) */

void __thiscall
GameManager__HandleKeyboardInput(GameManager *this,int param_1,int param_2,InputModifiers *param_3)

{
  bool bVar1;
  ActorHandler *this_00;
  int iVar2;
  int TVar3;
  InputModifiers *pIVar4;
  
  if (((param_2 == Pressed) && (param_1 == 0x50)) && (DebugScreenshotMode)) {
    *(bool *)&this->GameTime_s = *(char *)&this->GameTime_s == '\0';
    return;
  }
  iVar2 = param_1;
  TVar3 = param_2;
  pIVar4 = param_3;
  this_00 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num
                      ((Darray_L_enum_CrewDepartment__Type_G_ *)((this->GameTimer).LastTime));
  bVar1 = ActorHandler__HandleKeyboardInput(this_00,iVar2,TVar3,pIVar4);
  if (!bVar1) {
    bVar1 = Interface__HandleKeyboardInput
                      ((OptionsSection__Interface *)(this->Managers).Data,param_1,param_2,param_3);
    if (!bVar1) {
      (**(code **)(*(int *)((this->GameTimer).LastTime + 0x30)))(param_1,param_2,param_3);
    }
  }
  return;
}





//==== 00860520 HandleMouseMove_00860520 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__HandleMouseMove(struct util__Vec2_L_double_G_) */

void __thiscall GameManager__HandleMouseMove(GameManager *this,Vec4_L_double_G_ param_1)

{
  Vec4_L_double_G_ VVar1;
  char cVar2;
  bool bVar3;
  ActorHandler *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  cVar2 = (**(code **)(*(int *)((this->GameTimer).LastTime + 0x3c)))
                    (param_1.X,param_1.Y,param_1.Y,param_1.Z);
  if (cVar2 == '\0') {
    uVar4 = param_1.X;
    uVar5 = param_1.Y;
    uVar6 = param_1.Y;
    uVar7 = param_1.Z;
    this_00 = (ActorHandler *)
              util__Darray_enum_CrewDepartment__Type___Num
                        ((Darray_L_enum_CrewDepartment__Type_G_ *)(this->GameTimer).LastTime);
    VVar1.Y = uVar5;
    VVar1.X = uVar4;
    VVar1.Y = uVar6;
    VVar1.Z = uVar7;
    bVar3 = ActorHandler__HandleMouseMove(this_00,(*(Vec4_L_double_G_ *)&(VVar1)));
    if (!bVar3) {
      Interface__HandleMouseMove((OptionsSection__Interface *)(this->Managers).Data,(*(Vec3_L_double_G_ *)&(param_1)));
    }
  }
  return;
}





//==== 00860580 HandleMouseWheelInput_00860580 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__HandleMouseWheelInput(struct util__Vec2_L_double_G_,struct
   util__Vec2_L_double_G_) */

void __thiscall
GameManager__HandleMouseWheelInput(GameManager *this,Vec4_L_double_G_ param_1,Vec4_L_double_G_ param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)((this->GameTimer).LastTime + 0x38)))
                    (param_1.X,param_1.Y,param_1.Y,param_1.Z,param_2.X
                     ,param_2.Y,param_2.Y,param_2.Z);
  if (cVar1 == '\0') {
    Interface__HandleMouseWheelInput((OptionsSection__Interface *)(this->Managers).Data,(*(Vec3_L_double_G_ *)&(param_1)),(*(Vec3_L_double_G_ *)&(param_2)));
  }
  return;
}





//==== 008605e0 HandleTextInput ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__HandleTextInput(unsigned int) */

void __thiscall GameManager__HandleTextInput(GameManager *this,uint param_1)

{
  Manager **ppMVar1;
  bool bVar2;
  
  ppMVar1 = (this->Managers).Data;
  if ((ppMVar1[0x15] != (Manager *)0x0) &&
     ((ReferenceController *)ppMVar1[0x16] != (ReferenceController *)0x0)) {
    bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)ppMVar1[0x16]);
    if (bVar2) {
      if ((ReferenceController *)ppMVar1[0x16] != (ReferenceController *)0x0) {
        bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)ppMVar1[0x16]);
        if (!bVar2) {
          ppMVar1[0x15] = (Manager *)0x0;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x008aea0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(ppMVar1[0x15]->_pad_0x0_0 + 0xa4))();
      return;
    }
  }
  return;
}

//==== 008605f0 IsExitRequested ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool __thiscall GameManager__IsExitRequested(void)const  */

bool __attribute__((noinline)) __thiscall GameManager__IsExitRequested(GameManager *this)

{
  return (bool)(this->IconAtlases).field_0x4;
}





//==== 00860600 Last_00860600 ====


/* public: virtual bool & __thiscall util__Sarray_bool_348___Last(void) */

bool * __thiscall util__Sarray_bool_348___Last(Sarray_L_bool_C348_G_ *this)

{
  return this->Data + 0x15b;
}





//==== 00860610 Load ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__Load(class util__Str_L_char_G_ const &,class util__Str_L_char_G_
   *,class util__Str_L_char_G_ const &) */

void __thiscall
GameManager__Load(GameManager *this,Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3)

{
  FUN_0085d3b0(param_1,param_2,this,param_3,1);
  return;
}





//==== 00860630 LoadAll_00860630 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__LoadAll(void) */

void __thiscall GameManager__LoadAll(GameManager *this)

{
  undefined8 stack0xfffffffc;
  OptionsSection__Interface *this_00;
  CameraManager *this_01;
  Vec4_L_int_G_ VVar1;
  bool bVar2;
  Atlas *pAVar3;
  char *pcVar4;
  Darray_L_SoundEffect_P_G_ *pDVar5;
  undefined4 *puVar6;
  CameraState *pCVar7;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;
  CameraState local_90;
  undefined **local_38;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  char local_19;
  void *local_18;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pAVar3 = (Atlas *)(uintptr_t)(port_op_new(0x58));
  if (pAVar3 == (Atlas *)0x0) {
    local_14.Length = 0;
  }
  else {
    local_14.Length =
         (int)(uintptr_t)Icons__Atlas__Atlas(pAVar3,0x40,(Vec4_L_int_G_){{0x400,4,0,0}},(_func_void **)&Icons__NormalIcons
                            );
  }
  iVar8 = (this->Logo)._pad_0x0_0;
  puVar9 = &(this->IconAtlases).field_0x8;
  local_14.Capacity = iVar8 + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)puVar9,&local_14.Capacity)
  ;
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)puVar9,iVar8);
  if (bVar2) {
    *(int *)((int)((this->IconAtlases).field_0x4 + -4 + (this->Logo)._pad_0x0_0 * 4) )=
         local_14.Length;
  }
  pAVar3 = (Atlas *)(uintptr_t)(port_op_new(0x58));
  if (pAVar3 == (Atlas *)0x0) {
    local_14.Length = 0;
  }
  else {
    local_14.Length =
         (int)(uintptr_t)Icons__Atlas__Atlas(pAVar3,0x100,((Vec4_L_int_G_)(({ __typeof__((({ Vec2_L_int_G_ _t; *(uint64_t *)&_t = 0x40000000800ul; _t; }))) _t_ = (({ Vec2_L_int_G_ _t; *(uint64_t *)&_t = 0x40000000800ul; _t; })); *(Vec4_L_int_G_ *)&_t_; }))),(_func_void **)&Icons__BigIcons);
  }
  iVar8 = (this->Logo)._pad_0x0_0;
  local_14.Capacity = iVar8 + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)puVar9,&local_14.Capacity)
  ;
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)puVar9,iVar8);
  if (bVar2) {
    *(int *)((int)((this->IconAtlases).field_0x4 + -4 + (this->Logo)._pad_0x0_0 * 4) )=
         local_14.Length;
  }
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  iVar8 = (**(code **)(*(int *)(this->Managers)._pad_0x0_0 + 0x98))();
  VVar1.Y = iVar8;
  VVar1.X = iVar8;
  PostProcessor__SetShadowBufferSize
            (*(PostProcessor **)((int)&(this->GameTimer).LastTime + 4),(*(Vec3_L_int_G_ *)&VVar1));
  PostProcessor__Initialize();
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  util__Str_char___Str_char(&local_28,"Limits");
  local_18 = (void *)0x0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  FUN_0085d990(&local_28,&this->DataManager,this,&local_18,1);
  if (local_18 != (void *)0x0) {
    port_op_delete(local_18);
    local_18 = (void *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  util__Str_char___Str_char(&local_28,"SoundEffects");
  local_18 = (void *)0x0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  FUN_0085d3b0(&local_28,&this->DataManager,this,&local_18,1);
  if (local_18 != (void *)0x0) {
    port_op_delete(local_18);
    local_18 = (void *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  util__Str_char___Str_char(&local_28,"SoundFiles");
  pcVar4 = "";
  if (0 < local_28.Capacity) {
    pcVar4 = local_28.Data;
  }
  util__Printf(&local_34,(wchar_t*)((wchar_t*)((wchar_t*)("Loading %s..."))),pcVar4);
  StartLoading(&local_14);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  this_00 = (OptionsSection__Interface *)((this->Interfacer).Pointer);
  pDVar5 = (Darray_L_SoundEffect_P_G_ *)
           util__SerializationManagerInterface__GetTypedDataOfType_L_SoundEffect_G_
                     ((SerializationManagerInterface *)this->Options,SUB41(&local_38,0));
  local_19 = AudioManager__LoadSounds((AudioManager *)this_00,pDVar5);
  local_38 = (undefined **)(&vftable_2);
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (local_19 == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\framework.h",0x36,
                    "Success || !CrashOnFailure",(char *)0x0);
    DebugBreak();
  }
  EndLoading((Timer *)&local_14);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  piVar10 = &(this->Managers).Capacity;
  local_14.Length = 0;
  iVar8 = (**(code **)((this->Managers).Capacity + 0xc))();
  if (local_14.Length < iVar8) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar10)(&local_14.Length);
      (**(code **)(*(int *)*puVar6 + 0x44))();
      if (this->IsInLoadingScreen == false) {
        RenderBlackScreen(this);
      }
      else {
        iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
        *(int *)&this->IconAtlases = iVar8;
        RenderLoadingScreen(this,iVar8);
      }
      local_14.Length = local_14.Length + 1;
      iVar8 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
    } while (local_14.Length < iVar8);
  }
  puVar9 = &(this->IconAtlases).field_0x8;
  local_14.Length = 0;
  iVar8 = (**(code **)(*(int *)puVar9 + 0xc))();
  if (local_14.Length < iVar8) {
    do {
      puVar6 = (undefined4 *)(*(code *)**(undefined4 **)puVar9)(&local_14.Length);
      Icons__Atlas__Build((Atlas *)*puVar6);
      if (this->IsInLoadingScreen == false) {
        RenderBlackScreen(this);
      }
      else {
        iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
        *(int *)&this->IconAtlases = iVar8;
        RenderLoadingScreen(this,iVar8);
      }
      local_14.Length = local_14.Length + 1;
      iVar8 = (**(code **)(*(int *)puVar9 + 0xc))();
    } while (local_14.Length < iVar8);
  }
  piVar10 = &(this->Managers).Capacity;
  local_14.Length = 0;
  iVar8 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
  if (local_14.Length < iVar8) {
    do {
      puVar6 = (undefined4 *)(**(code **)*piVar10)(&local_14.Length);
      (**(code **)(*(int *)*puVar6 + 0x40))();
      if (this->IsInLoadingScreen == false) {
        RenderBlackScreen(this);
      }
      else {
        iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
        *(int *)&this->IconAtlases = iVar8;
        RenderLoadingScreen(this,iVar8);
      }
      local_14.Length = local_14.Length + 1;
      iVar8 = (**(code **)(uintptr_t)(*piVar10 + 0xc))();
    } while (local_14.Length < iVar8);
  }
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.cpp",0xe3);
  ProcGenTextureManager__PreGenerate();
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  Interface__ResetWidgetScreen((OptionsSection__Interface *)(this->Managers).Data);
  this_01 = (CameraManager *)(this->Managers).Size;
  pCVar7 = (CameraState *)CameraState__CameraState(&local_90);
  CameraManager__PushNewCameraState(this_01,pCVar7);
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  (**(code **)(*(int *)((this->GameTimer).LastTime + 0xc)))();
  if (this->IsInLoadingScreen == false) {
    RenderBlackScreen(this);
  }
  else {
    iVar8 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar8;
    RenderLoadingScreen(this,iVar8);
  }
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.cpp",0xd1);
  (this->IconAtlases).field_0x4 = 1;
  return;
}

//==== 00860b70 LoadGraphicsResources_00860b70 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__LoadGraphicsResources(void) */

void __thiscall GameManager__LoadGraphicsResources(GameManager *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iStack_c = 0;
  iVar1 = (**(code **)(*(int *)&(this->IconAtlases).field_0x8 + 0xc))();
  if (iStack_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)&((this->IconAtlases).field_0x8))(&iStack_c);
      Icons__Atlas__Build((Atlas *)*puVar2);
      if (this->IsInLoadingScreen == false) {
        RenderBlackScreen(this);
      }
      else {
        iVar1 = (*(int *)&this->IconAtlases + 1) % 10;
        *(int *)&this->IconAtlases = iVar1;
        RenderLoadingScreen(this,iVar1);
      }
      iStack_c = iStack_c + 1;
      iVar1 = (**(code **)(*(int *)&(this->IconAtlases).field_0x8 + 0xc))();
    } while (iStack_c < iVar1);
  }
  iStack_c = 0;
  iVar1 = (**(code **)((this->Managers).Capacity + 0xc))();
  if (iStack_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)(this->Managers).Capacity)(&iStack_c);
      (**(code **)(*(int *)*puVar2 + 0x40))();
      if (this->IsInLoadingScreen == false) {
        RenderBlackScreen(this);
      }
      else {
        iVar1 = (*(int *)&this->IconAtlases + 1) % 10;
        *(int *)&this->IconAtlases = iVar1;
        RenderLoadingScreen(this,iVar1);
      }
      iStack_c = iStack_c + 1;
      iVar1 = (**(code **)((this->Managers).Capacity + 0xc))();
    } while (iStack_c < iVar1);
  }
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.cpp",0xe3);
  ProcGenTextureManager__PreGenerate();
  if (this->IsInLoadingScreen != false) {
    iVar1 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar1;
    RenderLoadingScreen(this,iVar1);
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  RenderBlackScreen(this);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00860cb0 LoadLoadingTextures ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__LoadLoadingTextures(void) */

void __thiscall GameManager__LoadLoadingTextures(GameManager *this)

{
  undefined8 stack0xfffffffc;
  int *this_00;
  bool bVar1;
  Str_L_char_G_ SStack_3c;
  TextureInitOptions TStack_30;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  this_00 = &(this->Logo).TextureSize.Y;
  bVar1 = CustomTexture__IsInitialized((CustomTexture *)&this[1].Options);
  if (bVar1) {
    bVar1 = CustomTexture__IsInitialized((CustomTexture *)this_00);
    if (bVar1) goto LAB_00860d72;
  }
  TStack_30.NearestFiltering = false;
  TStack_30.Mipmaps.Data.MinLevel = 0;
  TStack_30.TextureS = Repeat;
  TStack_30.TextureT = Repeat;
  TStack_30.TextureR = Repeat;
  TStack_30.Channels = RGBA;
  TStack_30.Mipmaps.Data.MaxLevel.Data = 0;
  TStack_30.Mipmaps.Data.MaxLevel.IsValidData = false;
  TStack_30.Mipmaps.IsValidData = false;
  TStack_30.Quality = EightBit;
  util__Str_char___Str_char(&SStack_3c,"Loading");
  CustomTexture__Initialize((CustomTexture *)&this[1].Options,&SStack_3c,"",&TStack_30);
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  util__Str_char___Str_char(&SStack_3c,"Logo");
  CustomTexture__Initialize((CustomTexture *)this_00,&SStack_3c,"",&TStack_30);
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
LAB_00860d72:
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00860d90 LoadPreferences ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__LoadPreferences(void) */

void __thiscall GameManager__LoadPreferences(GameManager *this)

{
  PreferencesBase *pPVar1;
  
  pPVar1 = PreferencesBase__LoadFromFile(this);
  (this->Managers)._pad_0x0_0 = (int)pPVar1;
  return;
}

//==== 00860db0 Num_00860db0 ====


/* public: virtual int const __thiscall util__Sarray_bool_348___Num(void)const  */

int __thiscall util__Sarray_bool_348___Num(Sarray_L_bool_C348_G_ *this)

{
  return 0x15c;
}





//==== 00860dc0 Pause ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__Pause(void) */

void __thiscall GameManager__Pause(GameManager *this)

{
  *(undefined1 *)&this->GameTime_s = 1;
  return;
}





//==== 00860dd0 PreInput ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__PreInput(void) */

void __thiscall GameManager__PreInput(GameManager *this)

{
  undefined8 stack0xfffffffc;
  Manager **ppMVar1;
  Manager **ppMVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iStack_c;
  uint uStack_8;
  
  ppMVar2 = (this->Managers).Data;
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  ppMVar1 = ppMVar2 + 5;
  iStack_c = 0;
  iVar4 = (*(code *)ppMVar2[5][1]._pad_0x0_0)();
  if (iStack_c < iVar4) {
    do {
      piVar5 = (int *)(*(code *)(*ppMVar1)->_pad_0x0_0)(&iStack_c);
      if (((*piVar5 != 0) && ((ReferenceController *)piVar5[1] != (ReferenceController *)0x0)) &&
         (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         bVar3)) {
        if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
           (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
           !bVar3)) {
          *piVar5 = 0;
        }
        (**(code **)(*(int *)*piVar5 + 0xc4))();
      }
      iStack_c = iStack_c + 1;
      iVar4 = (*(code *)(*ppMVar1)[1]._pad_0x0_0)();
    } while (iStack_c < iVar4);
  }
  return;
}

//==== 00860de0 RebuildCursorIcon ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct GLFWcursor * __thiscall GameManager__RebuildCursorIcon(void) */

GLFWcursor * __thiscall GameManager__RebuildCursorIcon(GameManager *this)

{
  undefined8 stack0xffffff88;
  undefined8 stack0xffffffa8;
  undefined8 stack0xfffffffc;
  Color CVar1;
  Color CVar2;
  char cVar3;
  int iVar4;
  GLFWcursor *pGVar5;
  Str_L_char_G_ in_stack_ffffff88;
  undefined **ppuVar6;
  Str_L_char_G_ in_stack_ffffffa8;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  Matrix3_L_unsigned_char_G_ *pMVar11;
  Matrix3_L_unsigned_char_G_ local_20;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  cVar3 = (**(code **)(*(int *)(this->Managers)._pad_0x0_0 + 0x78))();
  if (cVar3 != '\0') {
    return (GLFWcursor *)0x0;
  }
  local_20.Data = (uchar *)0x0;
  local_20.Size.X = 0;
  local_20.Size.Y = 0;
  local_20.Size.Z = 0;
  iVar4 = (**(code **)(*(int *)(this->Managers)._pad_0x0_0 + 0x68))();
  pMVar11 = &local_20;
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffffa8,(Str_L_char_G_ *)(iVar4 + 0x214));
  ppuVar6 = &vftable_59;
  uVar7 = *(undefined4 *)(iVar4 + 0x220);
  uVar8 = *(undefined4 *)(iVar4 + 0x224);
  uVar9 = *(undefined4 *)(iVar4 + 0x228);
  fVar10 = *(float *)(iVar4 + 0x22c);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffff88,(Str_L_char_G_ *)(iVar4 + 500));
  CVar1._pad_0x4_1 = (int)in_stack_ffffff88.Data;
  CVar1._pad_0x8_2 = in_stack_ffffff88.Capacity;
  CVar1._pad_0xc_3 = in_stack_ffffff88.Length;
  CVar1._pad_0x0_0 = (int)&vftable_59;
  CVar1.Hue_degrees = (float)*(undefined4 *)(iVar4 + 0x200);
  CVar1.Saturation = (float)*(undefined4 *)(iVar4 + 0x204);
  CVar1.Value = (float)*(undefined4 *)(iVar4 + 0x208);
  CVar1.Alpha = *(float *)(iVar4 + 0x20c);
  CVar2._pad_0x4_1 = (int)in_stack_ffffffa8.Data;
  CVar2._pad_0x8_2 = in_stack_ffffffa8.Capacity;
  CVar2._pad_0xc_3 = in_stack_ffffffa8.Length;
  CVar2._pad_0x0_0 = (int)ppuVar6;
  CVar2.Hue_degrees = (float)uVar7;
  CVar2.Saturation = (float)uVar8;
  CVar2.Value = (float)uVar9;
  CVar2.Alpha = fVar10;
  Icons__CustomCursor__Build((CustomCursor *)&this[1].GameTimer.FrameTime,CVar1,CVar2,pMVar11);
  int l_cursz[2] = {0,0};
  Icons__CustomCursor__GetSize((CustomCursor *)&this[1].GameTimer.FrameTime,(int *)l_cursz);
  GLFWimage l_img;
  l_img.width = l_cursz[0];
  l_img.height = l_cursz[1];
  l_img.pixels = local_20.Data;
  pGVar5 = (GLFWcursor *)glfwCreateCursor(&l_img,0,0);
  if (local_20.Data != (uchar *)0x0) {
    port_op_delete(local_20.Data);
  }
  return pGVar5;
}

//==== 00860f20 RegisterIconAtlas ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__RegisterIconAtlas(struct Icons__Atlas *) */

void __thiscall GameManager__RegisterIconAtlas(GameManager *this,Atlas *param_1)

{
  bool bVar1;
  int iVar2;
  int local_c;
  Atlas *local_8;
  
  local_8 = param_1;
  iVar2 = (this->Logo)._pad_0x0_0;
  local_c = iVar2 + 1;
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)&(this->IconAtlases).field_0x8,&local_c);
  bVar1 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&(this->IconAtlases).field_0x8,iVar2);
  if (bVar1) {
    *(Atlas **)((int)((this->IconAtlases).field_0x4 + -4 + (this->Logo)._pad_0x0_0 * 4) )= local_8
    ;
  }
  Icons__Atlas__Build(local_8);
  if (this->IsInLoadingScreen != false) {
    iVar2 = (*(int *)&this->IconAtlases + 1) % 10;
    *(int *)&this->IconAtlases = iVar2;
    RenderLoadingScreen(this,iVar2);
    return;
  }
  RenderBlackScreen(this);
  return;
}

//==== 00860fa0 RegisterManager ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__RegisterManager(class Manager *) */

void __thiscall GameManager__RegisterManager(GameManager *this,Manager *param_1)

{
  PostProcessor *pPVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *local_8;
  
  pPVar1 = (this->GraphicsPostProcessor).Pointer;
  local_8 = (undefined1 *)((int)&pPVar1->_pad_0x0_0 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)&(this->Managers).Capacity,(int *)&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&(this->Managers).Capacity,(int)pPVar1);
  if (bVar2) {
    *(Manager **)((int)this->CurrentManager + (int)(this->GraphicsPostProcessor).Pointer * 4 + -4) =
         param_1;
  }
  if ((int)(this->GameTimer).LastTime == 0) {
    iVar3 = (**(code **)((this->Managers).Capacity + 0xc))();
    if (0 < iVar3) {
      puVar4 = (undefined4 *)(**(code **)((this->Managers).Capacity + 0x20))();
      *(undefined4 *)&(this->GameTimer).LastTime = *puVar4;
    }
  }
  return;
}

//==== 00861010 Render3DUI ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__Render3DUI(void) */

void __thiscall GameManager__Render3DUI(GameManager *this)

{
  undefined8 stack0xfffffffc;
  Normal3DShader *pNVar1;
  ActorHandler *this_00;
  ShaderStack SStack_b;
  DepthStack DStack_a;
  BlendStack BStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar1 = Normal3DShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_b,(Shader *)pNVar1);
  Graphics__DepthStack__DepthStack(&DStack_a,DepthMode__ReadWrite);
  Graphics__BlendStack__BlendStack__o5(&BStack_9,BlendMode__Disabled);
  Interface__Render3DUI((OptionsSection__Interface *)(this->Managers).Data);
  (**(code **)(*(int *)((this->GameTimer).LastTime + 0x24)))();
  BlendStack__dtor(&BStack_9);
  DepthStack__dtor(&DStack_a);
  Graphics__DepthStack__DepthStack((DepthStack *)&BStack_9,DepthMode__Read);
  Graphics__BlendStack__BlendStack__o5((BlendStack *)&DStack_a,Style__Default);
  Interface__Render3DTransparentUI((OptionsSection__Interface *)(this->Managers).Data);
  this_00 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num
                      ((Darray_L_enum_CrewDepartment__Type_G_ *)(this->GameTimer).LastTime);
  ActorHandler__Render3DTransparentUI(this_00);
  BlendStack__dtor((BlendStack *)&DStack_a);
  DepthStack__dtor((DepthStack *)&BStack_9);
  Graphics__ShaderStack___ShaderStack(&SStack_b);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 008610c0 Render_008610c0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__Render(void) */

void __thiscall GameManager__Render(GameManager *this)

{
  ActorHandler *this_00;
  
  (**(code **)(*(int *)((this->GameTimer).LastTime + 0x14)))();
  this_00 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num
                      ((Darray_L_enum_CrewDepartment__Type_G_ *)(this->GameTimer).LastTime);
  ActorHandler__Render(this_00);
                    /* WARNING: Could not recover jumptable at 0x008610e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((this->GameTimer).LastTime + 0x18)))();
  return;
}





//==== 008610f0 RenderLoadingTexture ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__RenderLoadingTexture(struct util__Vec2_L_int_G_) */

void __thiscall GameManager__RenderLoadingTexture(GameManager *this,Vec4_L_int_G_ param_1)

{
  undefined8 stack0xfffffffc;
  Vec4_L_int_G_ VVar1;
  NormalTextureShader *pNVar2;
  CustomTexture *pCStack_28;
  TextureStack TStack_24;
  int iStack_14;
  int iStack_10;
  ShaderStack SStack_a;
  BlendStack BStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  LoadLoadingTextures(this);
  pCStack_28 = (CustomTexture *)&this[1].Options;
  Graphics__TextureStack__TextureStack_L_struct_CustomTexture_P_G_(&TStack_24,&pCStack_28,0);
  pNVar2 = NormalTextureShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_a,(Shader *)pNVar2);
  Graphics__BlendStack__BlendStack__o5(&BStack_9,BlendMode__Disabled);
  glColor(Preset__White,1.0);
  CustomTexture__GetSize((CustomTexture *)&this[1].Options);
  if ((param_1.X != 0) || (param_1.Y != 0)) {
    VVar1.Y = iStack_10;
    VVar1.X = iStack_14;
    RenderCroppedQuad((*(Vec3_L_int_G_ *)&(VVar1)),(*(Vec3_L_int_G_ *)&(param_1)),true);
  }
  BlendStack__dtor(&BStack_9);
  Graphics__ShaderStack___ShaderStack(&SStack_a);
  Graphics__TextureStack___TextureStack(&TStack_24);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00861280 RenderScreenEffects_00861280 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__RenderScreenEffects(void)const  */

void __thiscall GameManager__RenderScreenEffects(GameManager *this)

{
                    /* WARNING: Could not recover jumptable at 0x00861285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((this->GameTimer).LastTime + 0x28)))();
  return;
}





//==== 00861290 RenderShadows_00861290 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__RenderShadows(enum PostProcessor__ShadowBuffer) */

void __thiscall GameManager__RenderShadows(GameManager *this,ShadowBuffer param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00861299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((this->GameTimer).LastTime + 0x2c)))();
  return;
}





//==== 008612a0 RenderTransparent_008612a0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__RenderTransparent(void)const  */

void __thiscall GameManager__RenderTransparent(GameManager *this)

{
  ActorHandler *this_00;
  
  this_00 = (ActorHandler *)
            util__Darray_enum_CrewDepartment__Type___Num
                      ((Darray_L_enum_CrewDepartment__Type_G_ *)&(this->GameTimer).LastTime);
  ActorHandler__RenderTransparent(this_00);
                    /* WARNING: Could not recover jumptable at 0x008612b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)((this->GameTimer).LastTime + 0x1c)))();
  return;
}





//==== 008613b0 RunSingleFrame ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__RunSingleFrame(void) */

void __thiscall GameManager__RunSingleFrame(GameManager *this)

{
  *(undefined1 *)((int)&this->GameTime_s + 1) = 1;
  return;
}





//==== 008613c0 SetAll_008613c0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cstruct_util__Range_L_double_G__G__G___SetAll(struct util__tuple2_L_classutil__Str_L_char_G__Cstruct_util__Range_L_double_G__G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__struct_util__Range_double_______SetAll
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *this,
          tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G_ *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Str_L_char_G_ *this_00;
  int *piVar4;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x20 + (int)this_00)) {
    piVar4 = &this_00[1].Capacity;
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      this_00 = (Str_L_char_G_ *)&this_00[2].Length;
      iVar1 = *(int *)(param_1 + 0x14);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      *piVar4 = *(int *)(param_1 + 0x10);
      piVar4[1] = iVar1;
      piVar4[2] = uVar2;
      piVar4[3] = uVar3;
      piVar4 = piVar4 + 8;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x20 + *(int *)(this + 4)));
  }
  return;
}





//==== 00861410 SetAll_00861410 ====


/* public: virtual void __thiscall util__Sarray_bool_348___SetAll(bool const &) */

void __thiscall util__Sarray_bool_348___SetAll(Sarray_L_bool_C348_G_ *this,bool *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    this->Data[iVar1] = *param_1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x15c);
  return;
}





//==== 00861440 SetIsInLoadingScreen ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__SetIsInLoadingScreen(bool) */

void __thiscall GameManager__SetIsInLoadingScreen(GameManager *this,bool param_1)

{
  (this->IconAtlases).field_0x4 = param_1;
  if (!param_1) {
    this->IsInLoadingScreen = true;
    SetWindowCursorVisibility(true);
    return;
  }
  SetWindowCursorVisibility(false);
  if (this->IsInLoadingScreen != false) {
    *(undefined4 *)&this->IconAtlases = 0;
    RenderLoadingScreen(this,0);
    return;
  }
  RenderBlackScreen(this);
  return;
}





//==== 008614a0 SetLoadingScreenEnabled ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__SetLoadingScreenEnabled(bool) */

void __thiscall GameManager__SetLoadingScreenEnabled(GameManager *this,bool param_1)

{
  this->IsInLoadingScreen = param_1;
  return;
}





//==== 008614b0 SetSize_008614b0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cstruct_util__Range_L_double_G__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__struct_util__Range_double_______SetSize
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cstruct_util__Range_L_double_G___G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_24;
  undefined4 uStack_14;
  undefined4 uStack_10;
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
     (this_00 = (Str_L_char_G_ *)(iVar3 * 0x20 + iVar2),
     this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x20 + iVar2))) {
    do {
      SStack_24.Data = (char *)0x0;
      SStack_24.Capacity = 0;
      SStack_24.Length = 0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      uStack_8 = 0;
      util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_24);
      this_00[1].Capacity = 0;
      this_00[1].Length = 0;
      this_00[2].Data = (char *)0x0;
      this_00[2].Capacity = 0;
      this_00 = (Str_L_char_G_ *)&this_00[2].Length;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x20 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 00861580 ShouldHandleInput ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: bool __thiscall GameManager__ShouldHandleInput(void)const  */

bool __thiscall GameManager__ShouldHandleInput(GameManager *this)

{
  bool bVar1;
  
  if ((this->IconAtlases).field_0x4 == '\0') {
    bVar1 = AreGraphicsReady();
    if (bVar1) {
      return true;
    }
  }
  return false;
}





//==== 008615a0 StartLoadingScreen ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__StartLoadingScreen(void) */

void __thiscall GameManager__StartLoadingScreen(GameManager *this)

{
  SetWindowCursorVisibility(false);
  if (this->IsInLoadingScreen != false) {
    *(undefined4 *)&this->IconAtlases = 0;
    RenderLoadingScreen(this,0);
    return;
  }
  RenderBlackScreen(this);
  return;
}





//==== 008615e0 StaticFactory_008615e0 ====

/* public: static class util__Reflectable * __cdecl LanguageOption__ReflectionInfoStruct_L_class_LanguageOption_G___StaticFactory(void) */

Reflectable * __cdecl LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x10));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_568;
  }
  return (Reflectable *)0x0;
}

//==== 00861620 StaticGetMember_00861620 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMember(class util__Str_L_char_G_
   const &) */

Str_L_char_G_ * __cdecl
LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMember__o2(Str_L_char_G_ *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_stack_00000008;
  Str_L_char_G_ SStack_34;
  char *pcStack_28;
  int iStack_24;
  int iStack_20;
  Str_L_char_G_ SStack_1c;
  undefined1 uStack_10;
  undefined1 uStack_f;
  int iStack_c;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  iStack_c = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if ((*(int *)(iStack_c + 4) <
        cde_l2_3da53edf__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_3da53edf__thread_safe_static_guard_0__),
      cde_l2_3da53edf__thread_safe_static_guard_0__ == -1)) {
     cde_l2_239276a0_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_3da53edf__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_239276a0_Count) {
    piVar7 = &DAT_0098cbfc;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_ee56a91f__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_ee56a91f__thread_safe_static_guard_0__),
          cde_l2_ee56a91f__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_8eb9660d_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0098cbf8 = 0;
        DAT_0098cbfc = 0;
        DAT_0098cc00 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cc04,"Unused");
        _DAT_0098cc10 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_ee56a91f__thread_safe_static_guard_0__);
      }
      util__Str_char___Str_char(&SStack_34,(Str_L_char_G_ *)(piVar7 + -4));
      pcStack_28 = (char *)piVar7[-1];
      iStack_24 = *piVar7;
      iStack_20 = piVar7[1];
      util__Str_char___Str_char(&SStack_1c,(Str_L_char_G_ *)(piVar7 + 2));
      pcVar1 = SStack_34.Data;
      uStack_10 = (undefined1)piVar7[5];
      uStack_f = *(undefined1 *)((int)piVar7 + 0x15);
      uStack_6 = uStack_f;
      uStack_5 = uStack_10;
      if (SStack_34.Length == in_stack_00000008[2]) {
        pcVar2 = "";
        if (0 < SStack_34.Capacity) {
          pcVar2 = SStack_34.Data;
        }
        if ((int)in_stack_00000008[1] < 1) {
          puVar4 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
        }
        else {
          puVar4 = (undefined1 *)*in_stack_00000008;
        }
        cVar3 = *pcVar2;
        if (cVar3 == '\0') {
LAB_008616f2:
          util__Str_char___Str_char(param_1,&SStack_34);
          param_1[1].Data = pcStack_28;
          param_1[1].Capacity = iStack_24;
          param_1[1].Length = iStack_20;
          util__Str_char___Str_char(param_1 + 2,&SStack_1c);
          *(undefined1 *)&param_1[3].Data = uStack_5;
          *(undefined1 *)((int)&param_1[3].Data + 1) = uStack_6;
          *(undefined1 *)&param_1[3].Capacity = 1;
          if (SStack_1c.Data != (char *)0x0) {
            port_op_delete(SStack_1c.Data);
          }
          if (SStack_34.Data != (char *)0x0) {
            port_op_delete(SStack_34.Data);
          }
          return param_1;
        }
        iVar5 = (int)puVar4 - (int)pcVar2;
        while (cVar3 == pcVar2[iVar5]) {
          cVar3 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar3 == '\0') goto LAB_008616f2;
        }
      }
      if (SStack_1c.Data != (char *)0x0) {
        port_op_delete(SStack_1c.Data);
      }
      if (pcVar1 != (char *)0x0) {
        port_op_delete(pcVar1);
      }
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 10;
    } while (iVar6 <  cde_l2_239276a0_Count);
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





//==== 00861880 StaticGetMemberCount_00861880 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMemberCount(void) */

int __cdecl LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ae110eb7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ae110eb7__thread_safe_static_guard_0__);
    if ( cde_l2_ae110eb7__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_59fd885e_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0098cbcc = 0;
      _DAT_0098cbd0 = 0;
      _DAT_0098cbd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cbd8,"Unused");
      _DAT_0098cbe4 = 0;
      atexit( private__static_int_const___cdecl_LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_ae110eb7__thread_safe_static_guard_0__);
    }
  }
  return 1;
}





//==== 00861920 StaticGetMembers_00861920 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMembers__o2(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_38;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  Str_L_char_G_ SStack_20;
  undefined1 uStack_14;
  undefined1 uStack_13;
  int iStack_10;
  int iStack_c;
  undefined1 uStack_6;
  undefined1 uStack_5;
  
  iStack_c = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  if ((*(int *)(iStack_c + 4) <
        cde_l2_b9592fcf__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_b9592fcf__thread_safe_static_guard_0__),
      cde_l2_b9592fcf__thread_safe_static_guard_0__ == -1)) {
     cde_l2_29c2b7ef_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_b9592fcf__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_29c2b7ef_Count);
  iVar3 = 0;
  if (0 <  cde_l2_29c2b7ef_Count) {
    puVar4 = &DAT_0098cbfc;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_ee56a91f__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_ee56a91f__thread_safe_static_guard_0__),
          cde_l2_ee56a91f__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_8eb9660d_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0098cbf8 = 0;
        DAT_0098cbfc = 0;
        DAT_0098cc00 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0098cc04,"Unused");
        _DAT_0098cc10 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_LanguageOption__ReflectionInfoStruct_class_LanguageOption___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_ee56a91f__thread_safe_static_guard_0__);
      }
      util__Str_char___Str_char(&SStack_38,(Str_L_char_G_ *)(puVar4 + -4));
      uStack_2c = puVar4[-1];
      uStack_28 = *puVar4;
      uStack_24 = puVar4[1];
      util__Str_char___Str_char(&SStack_20,(Str_L_char_G_ *)(puVar4 + 2));
      uStack_14 = *(undefined1 *)(puVar4 + 5);
      iVar1 = *(int *)(in_stack_00000004 + 8);
      uStack_13 = *(undefined1 *)((int)puVar4 + 0x15);
      iStack_10 = iVar1 + 1;
      uStack_6 = uStack_13;
      uStack_5 = uStack_14;
      util__Darray_struct_util__ClassMember___SetSize(in_stack_00000004,&iStack_10);
      bVar2 = util__Darray_struct_util__ClassMember___CheckSize(in_stack_00000004,iVar1);
      if (bVar2) {
        iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x28;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x28),&SStack_38);
        *(undefined4 *)(iVar1 + -0x1c) = uStack_2c;
        *(undefined4 *)(iVar1 + -0x18) = uStack_28;
        *(undefined4 *)(iVar1 + -0x14) = uStack_24;
        util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x10),&SStack_20);
        *(undefined1 *)(iVar1 + -4) = uStack_5;
        *(undefined1 *)(iVar1 + -3) = uStack_6;
      }
      if (SStack_20.Data != (char *)0x0) {
        port_op_delete(SStack_20.Data);
      }
      if (SStack_38.Data != (char *)0x0) {
        port_op_delete(SStack_38.Data);
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 10;
    } while (iVar3 <  cde_l2_29c2b7ef_Count);
  }
  return in_stack_00000004;
}





//==== 00861b30 SwitchToSession ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__SwitchToSession(class Manager *,bool) */

void __thiscall GameManager__SwitchToSession(GameManager *this,Manager *param_1,bool param_2)

{
  OptionsSection__Interface *this_00;
  Darray_L_enum_CrewDepartment__Type_G_ *this_01;
  ActorHandler *this_02;
  
  if ((Manager *)((this->GameTimer).LastTime != param_1)){
    (this->IconAtlases).field_0x4 = param_2;
    if (param_2) {
      SetWindowCursorVisibility(false);
      if (this->IsInLoadingScreen == false) {
        RenderBlackScreen(this);
      }
      else {
        *(undefined4 *)&this->IconAtlases = 0;
        RenderLoadingScreen(this,0);
      }
    }
    this_00 = (OptionsSection__Interface *)(this->Managers).Data;
    *(Manager * *)&(this->GameTimer).LastTime = param_1;
    Interface__ResetWidgetScreen(this_00);
    this_01 = *(Darray_L_enum_CrewDepartment__Type_G_ * *)&(this->GameTimer).LastTime;
    *(undefined1 *)&this->GameTime_s = 0;
    this_02 = (ActorHandler *)util__Darray_enum_CrewDepartment__Type___Num(this_01);
    ActorHandler__ConstructAllActors(this_02);
  }
  return;
}





//==== 00861ba0 TagFrame ====


/* public: unsigned int __thiscall util__FrameTimer__TagFrame(void) */

uint __thiscall util__FrameTimer__TagFrame(FrameTimer *this)

{
  undefined8 stack0xfffffffc;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  LARGE_INTEGER LStack_10;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  QueryPerformanceCounter(&LStack_10);
  uVar1 = (LStack_10.s.HighPart - *(int *)((int)&this->LastTime + 4)) -
          (uint)(LStack_10.s.LowPart < (uint)this->LastTime);
  _allmul();
  _aulldiv();
  uVar3 = this->MicrosecondsAccrued + uVar1;
  uVar2 = this->Frames + 1;
  this->FrameTime = uVar1;
  *(DWORD *)&this->LastTime = LStack_10.s.LowPart;
  *(LONG *)((int)&this->LastTime + 4) = LStack_10.s.HighPart;
  this->MicrosecondsAccrued = uVar3;
  this->Frames = uVar2;
  LStack_10.s.HighPart = uVar1;
  if (999999 < uVar3) {
    this->FPS = uVar2;
    this->MicrosecondsAccrued = uVar3 - 1000000;
    this->Frames = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return uVar1;
}





//==== 00861c50 Tick_00861c50 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__Tick(void) */

void __thiscall GameManager__Tick(GameManager *this)

{
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [4];
  uint uVar2;
  double dVar3;
  Str_L_char_G_ SStack_20;
  undefined1 auStack_14 [4];
  Str_L_char_G_ SStack_10;
  
  SStack_10.Length = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->IconAtlases).field_0x4 != '\0') {
    uVar2 = util__FrameTimer__TagFrame((FrameTimer *)&(this->GameTimer).MicrosecondsAccrued);
    (*(uint64_t*)&(SStack_10)) = 0.0;
    DAT_0098cb60 = DAT_0098cb60 +
                   ((double)(int)uVar2 +
                   *(double *)(&__xmm_41f00000000000000000000000000000 + ((int)uVar2 >> 0x1f) * -8))
                   / 1000000.0;
    while ((0.03333333333333333 <= DAT_0098cb60 && ((double)(*(uint64_t*)&(SStack_10)) < 1.0))) {
      AudioManager__Tick((AudioManager *)(this->Interfacer).Pointer,0.033333335);
      CameraManager__Tick((CameraManager *)(this->Managers).Size,0.03333333333333333);
      Interface__Tick((OptionsSection__Interface *)(this->Managers).Data,0.03333333333333333);
      dVar3 = *(double *)&this->LoadingScreenIsEnabled + 0.03333333333333333;
      *(double *)&this->LoadingScreenIsEnabled = dVar3;
      if (1000000000.0 < dVar3) {
        *(double *)&this->LoadingScreenIsEnabled = dVar3 - 1000000000.0;
      }
      if ((*(char *)&this->GameTime_s == '\0') || (*(char *)((int)&this->GameTime_s + 1) != '\0')) {
        (**(code **)(*(int *)((this->GameTimer).LastTime + 0x10)))(0x3fa1111111111111);
      }
      Interface__PostTick((OptionsSection__Interface *)(this->Managers).Data,0.03333333333333333);
      DAT_0098cb60 = DAT_0098cb60 - 0.03333333333333333;
      (*(uint64_t*)&(SStack_10)) = (double)(*(uint64_t*)&(SStack_10)) + 0.03333333333333333;
      *(undefined1 *)((int)&this->GameTime_s + 1) = 0;
    }
    SteamHandler__Tick((SteamHandler *)(this->Cameras).Pointer);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\infrastructure\\gameplay.cpp",0x125)
    ;
    __security_check_cookie(SStack_10.Length ^ (uint)&stack0xfffffffc);
    return;
  }
  util__Str_char___Str_char((Str_L_char_G_ *)auStack_14,"Game\n");
  *(uint32_t *)&auVar1 = (uint32_t)"";
  if (0 < (int)SStack_10.Data) {
    memcpy(&auVar1, &auStack_14, 4);
  }
  util__Printf(&SStack_20,(wchar_t*)((wchar_t*)((wchar_t*)("Loading %s..."))),auVar1);
  StartLoading(&SStack_10);
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  LoadAll(this);
  EndLoading((Timer *)&SStack_10);
  if (auStack_14 != (uint32_t)0x0) {
    port_op_delete((void *)auStack_14);
  }
  util__FrameTimer__TagFrame((FrameTimer *)&(this->GameTimer).MicrosecondsAccrued);
  (this->IconAtlases).field_0x4 = 0;
  this->IsInLoadingScreen = true;
  SetWindowCursorVisibility(true);
  __security_check_cookie(SStack_10.Length ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00861e70 TogglePause ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__TogglePause(void) */

void __thiscall GameManager__TogglePause(GameManager *this)

{
  *(bool *)&this->GameTime_s = *(char *)&this->GameTime_s == '\0';
  return;
}





//==== 00861e80 Unpause ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall GameManager__Unpause(void) */

void __thiscall GameManager__Unpause(GameManager *this)

{
  *(undefined1 *)&this->GameTime_s = 0;
  return;
}





//==== 00861e90 UploadItemToSteamWorkshop ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct util__tuple2_L_bool_Cclassutil__Str_L_char_G__G_ 
   GameManager__UploadItemToSteamWorkshop(class util__Str_L_char_G_ const &,class util__Str_L_char_G_ const
   &,class util__Str_L_char_G_ const &,class util__Str_L_char_G_ const &,unsigned __int64 *) */

void 
GameManager__UploadItemToSteamWorkshop
          (GameManager *this,Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,
          Str_L_char_G_ *param_4,__uint64 *param_5)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  LocStr *this_00;
  Str_L_char_G_ *pSVar2;
  void *apvStack_78 [3];
  void *pvStack_6c;
  Str_L_char_G_ SStack_60;
  Str_L_char_G_ SStack_54;
  Str_L_char_G_ SStack_48;
  Str_L_char_G_ SStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ *pSStack_24;
  Str_L_char_G_ *pSStack_20;
  __uint64 *p_Stack_1c;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pSStack_24 = param_3;
  pSStack_20 = param_4;
  p_Stack_1c = param_5;
  bVar1 = SteamHandler__IsEnabled((SteamHandler *)(this->Cameras).Pointer);
  if (bVar1) {
    SteamHandler__UploadItemsToSteamWorkshop
              ((SteamHandler *)(this->Cameras).Pointer,((tuple2_L_bool_Cutil__Str_L_char_G___G_ *)cde_rsp_slot()),param_1,param_2,pSStack_24,pSStack_20,
               p_Stack_1c);
  }
  else {
    util__Str_char___Str_char(&SStack_60,"\n");
    util__Str_char___Str_char(&SStack_3c,"SteamNotEnabled");
    SStack_30.Data = (char *)0x0;
    SStack_30.Capacity = 0;
    SStack_30.Length = 0;
    this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_78,&SStack_3c,&SStack_30);
    pSVar2 = util__LocStr__operator__o3(this_00);
    SStack_14.Length = 0;
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    util__Str_char___Str_char(&SStack_14,pSVar2);
    util__Str_char___operator__o10(&SStack_14,&SStack_60);
    util__Str_char___Str_char(&SStack_54,&SStack_14);
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
      (*(uint64_t*)&(SStack_14)) = (*(uint64_t*)&(SStack_14)) & 0xffffffff00000000;
    }
    util__Str_char___Str_char(&SStack_48,&SStack_54);
    *(undefined1 *)&param_1->Data = 0;
    util__Str_char___Str_char((Str_L_char_G_ *)&param_1->Capacity,&SStack_48);
    if (SStack_48.Data != (char *)0x0) {
      port_op_delete(SStack_48.Data);
    }
    if (SStack_54.Data != (char *)0x0) {
      port_op_delete(SStack_54.Data);
    }
    if (pvStack_6c != (void *)0x0) {
      port_op_delete(pvStack_6c);
      pvStack_6c = (void *)0x0;
    }
    if (apvStack_78[0] != (void *)0x0) {
      port_op_delete(apvStack_78[0]);
      apvStack_78[0] = (void *)0x0;
    }
    if (SStack_30.Data != (char *)0x0) {
      port_op_delete(SStack_30.Data);
      SStack_30.Data = (char *)0x0;
    }
    if (SStack_3c.Data != (char *)0x0) {
      port_op_delete(SStack_3c.Data);
      SStack_3c.Data = (char *)0x0;
    }
    if (SStack_60.Data != (char *)0x0) {
      port_op_delete(SStack_60.Data);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00862440 GetDigits_double_ ====


/* int __cdecl util__GetDigits_double(double) */

int __cdecl util__GetDigits_double(double)

{
  double dVar1;
  double dStack_c;
  
  dStack_c = Abs(&param_1);
  if (NAN(dStack_c) != (dStack_c == 0.0)) {
    return 1;
  }
  libm_sse2_log10_precise(0.0);
  dVar1 = Floor(&dStack_c);
  return (int)dVar1 + 1;
}





//==== 008624a0 GetUnitsOfType ====


/* class util__Str_L_char_G_ __cdecl GetUnitsOfType(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl GetUnitsOfType(Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  char *pcVar4;
  int iVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *this;
  Str_L_char_G_ *pSVar7;
  char *pcVar8;
  Maybe_L_int_G_ MVar9;
  char cVar10;
  Str_L_char_G_ SStack_70;
  Str_L_char_G_ SStack_64;
  Str_L_char_G_ SStack_58;
  undefined1 auStack_4c [8];
  uint uStack_44;
  Str_L_char_G_ SStack_40;
  undefined1 auStack_34 [8];
  char cStack_2c;
  Str_L_char_G_ SStack_28;
  char cStack_19;
  uint uStack_18;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_18 = 0;
  uStack_44 = 0;
  util__Str_L_char_G___Find(param_1,auStack_34 + 4,(int *)"_",(int *)&uStack_44);
  if (cStack_2c == '\0') {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return __return_storage_ptr__;
  }
  SStack_28.Length = 0;
  SStack_28.Data = (char *)0x0;
  SStack_28.Capacity = 0;
  (*(uint32_t*)((char*)&(auStack_4c)+4)) = 0;
  uStack_44 = uStack_44 & 0xffffff00;
  util__Str_char___SubStr(param_1,&SStack_28,(*(uint32_t*)((char*)&(auStack_34)+4)) + 1,(Maybe_L_int_G_ *)(auStack_4c + 4));
  util__Str_char___Str_char(&SStack_40,"");
  util__Str_char___Str_char((Str_L_char_G_ *)auStack_4c,"");
  pSVar3 = &SStack_40;
  cVar10 = ')';
  pSVar7 = &SStack_14;
  pSVar2 = util__Str_char___Replace(&SStack_28,(Str_L_char_G_ *)auStack_34,'(',(Str_L_char_G_ *)auStack_4c);
  pSVar3 = util__Str_char___Replace(pSVar2,pSVar7,cVar10,pSVar3);
  util__Str_char___operator__o8(&SStack_28,pSVar3);
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    (*(uint64_t*)&(SStack_14)) = (*(uint64_t*)&(SStack_14)) & 0xffffffff00000000;
  }
  if ((char *)(*(uint32_t*)&(auStack_34)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(auStack_34)));
    (*(uint32_t*)&(auStack_34)) = (uint32_t)(uintptr_t)((char *)0x0);
  }
  if ((char *)(*(uint32_t*)&(auStack_4c)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(auStack_4c)));
  }
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  pcVar8 = SStack_28.Data;
  pcVar4 = "";
  if (0 < SStack_28.Capacity) {
    pcVar4 = SStack_28.Data;
  }
  if (*pcVar4 == '_') {
    (*(uint32_t*)((char*)&(auStack_34)+4)) = 0;
    cStack_2c = '\0';
    pSVar3 = util__Str_char___SubStr(&SStack_28,&SStack_40,1,(Maybe_L_int_G_ *)(auStack_34 + 4));
    util__Str_char___operator__o8(&SStack_28,pSVar3);
    if (SStack_40.Data != (char *)0x0) {
      port_op_delete(SStack_40.Data);
    }
    uStack_44 = 0;
    uStack_18 = 0;
    MVar9 = util__Str_L_char_G___Find(&SStack_28,auStack_34 + 4,(int *)"_",(int *)&uStack_18);
    cStack_19 = *(char *)(MVar9.Data + 4);
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    SStack_14.Length = 0;
    util__Str_char___Str_char(&SStack_40," ");
    util__Str_char___Replace(&SStack_28,&SStack_14,'_',&SStack_40);
    if (SStack_40.Data != (char *)0x0) {
      port_op_delete(SStack_40.Data);
    }
    if (cStack_19 == '\0') {
      pSVar3 = &SStack_40;
      pcVar8 = "%s^-1";
      uStack_18 = 2;
    }
    else {
      pSVar3 = (Str_L_char_G_ *)auStack_34;
      pcVar8 = "(%s)^-1";
      uStack_18 = 1;
    }
    pcVar4 = "";
    if (0 < SStack_14.Capacity) {
      pcVar4 = SStack_14.Data;
    }
    pSVar3 = util__Printf(pSVar3,(wchar_t*)((wchar_t*)((wchar_t*)(pcVar8))),pcVar4);
    util__Str_char___Str_char(__return_storage_ptr__,pSVar3);
    if ((uStack_18 & 2) != 0) {
      uStack_18 = uStack_18 & 0xfffffffd;
      if (SStack_40.Data != (char *)0x0) {
        port_op_delete(SStack_40.Data);
        SStack_40.Data = (char *)0x0;
      }
    }
    if (((char *)(*(uint32_t*)&(auStack_34)) != (char *)0x0) && ((uStack_18 & 1) != 0)) {
      port_op_delete((void *)(*(uint32_t*)&(auStack_34)));
      (*(uint32_t*)&(auStack_34)) = (uint32_t)(uintptr_t)((char *)0x0);
    }
    if (SStack_14.Data != (char *)0x0) {
      port_op_delete(SStack_14.Data);
      (*(uint64_t*)&(SStack_14)) = (*(uint64_t*)&(SStack_14)) & 0xffffffff00000000;
    }
    if (SStack_28.Data != (char *)0x0) {
      port_op_delete(SStack_28.Data);
      __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
      return __return_storage_ptr__;
    }
  }
  else {
    bVar1 = util__Str_char___operator__o9(&SStack_28,"Percent");
    if (bVar1) {
      util__Str_char___Str_char(__return_storage_ptr__,"%");
    }
    else {
      bVar1 = util__Str_char___operator__o9(&SStack_28,"degrees");
      if (bVar1) {
        util__Str_char___Str_char(__return_storage_ptr__,s__);
      }
      else {
        uStack_44 = 0;
        uStack_18 = 0;
        util__Str_L_char_G___Find(&SStack_28,auStack_34 + 4,(int *)"__",(int *)&uStack_18);
        if (cStack_2c != '\0') {
          util__Str_char___Str_char(&SStack_40,"/");
          (*(uint32_t*)((char*)&(auStack_4c)+4)) = (*(uint32_t*)((char*)&(auStack_34)+4));
          iVar5 = (*(uint32_t*)((char*)&(auStack_34)+4)) + 2;
          uStack_44 = CONCAT31((*(uint24_t*)((char*)&(uStack_44)+1)),1);
          (*(uint32_t*)((char*)&(auStack_34)+4)) = 0;
          cStack_2c = '\0';
          pSVar6 = util__Str_char___SubStr
                             (&SStack_28,&SStack_70,iVar5,(Maybe_L_int_G_ *)(auStack_34 + 4));
          pSVar3 = &SStack_14;
          pSVar7 = &SStack_40;
          pSVar2 = &SStack_58;
          this = util__Str_char___SubStr(&SStack_28,&SStack_64,0,(Maybe_L_int_G_ *)(auStack_4c + 4));
          pSVar7 = util__Str_char___operator(this,pSVar2,pSVar7);
          pSVar3 = util__Str_char___operator(pSVar7,pSVar3,pSVar6);
          util__Str_char___operator__o8(&SStack_28,pSVar3);
          util__Str_char____Str_char(&SStack_14);
          util__Str_char____Str_char(&SStack_58);
          util__Str_char____Str_char(&SStack_64);
          util__Str_char____Str_char(&SStack_70);
          util__Str_char____Str_char(&SStack_40);
          pcVar8 = SStack_28.Data;
        }
        util__Str_char___Str_char(&SStack_40," ");
        util__Str_char___Replace(&SStack_28,__return_storage_ptr__,'_',&SStack_40);
        if (SStack_40.Data != (char *)0x0) {
          port_op_delete(SStack_40.Data);
        }
      }
    }
    if (pcVar8 != (char *)0x0) {
      port_op_delete(pcVar8);
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 008628b0 Print_008628b0 ====


/* class util__Str_L_char_G_ __cdecl Print(double,class util__Str_L_char_G_) */

Str_L_char_G_ * __cdecl Print(Str_L_char_G_ *__return_storage_ptr__,double param_1,Str_L_char_G_ param_2)

{
  undefined8 stack0xffffffd8;
  double dVar1;
  Str_L_char_G_ *pSVar2;
  undefined4 in_stack_00000008;
  int iStack_24;
  void *apvStack_18 [3];
  undefined8 uStack_c;
  
  uStack_c = CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  util__Str_char___Str_char((Str_L_char_G_ *)&stack0xffffffd8,(Str_L_char_G_ *)((int)&param_1 + 4));
  pSVar2 = (Str_L_char_G_ *)(*(code *)PrintFunction)(apvStack_18,uStack_c);
  iStack_24 = 0x8628f4;
  util__Str_char___Str_char(__return_storage_ptr__,pSVar2);
  dVar1 = param_1;
  if (apvStack_18[0] != (void *)0x0) {
    iStack_24 = 0x862901;
    port_op_delete(apvStack_18[0]);
    apvStack_18[0] = (void *)0x0;
    dVar1 = param_1;
  }
  (*(uint32_t*)((char*)&(param_1)+4)) = (uint32_t)(uintptr_t)((void *)((ulonglong)dVar1 >> 0x20));
  if ((*(uint32_t*)((char*)&(param_1)+4)) != (void *)0x0) {
    iStack_24 = 0x862918;
    port_op_delete((*(uint32_t*)((char*)&(param_1)+4)));
    param_1 = dVar1;
  }
  return __return_storage_ptr__;
}





//==== 00862930 PrintNameOfTypeOnly ====


/* class util__Str_L_char_G_ __cdecl PrintNameOfTypeOnly(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl PrintNameOfTypeOnly(Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ *this;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ SStack_20;
  Maybe_L_int_G_ MStack_14;
  int aiStack_c [2];
  
  aiStack_c[1] = 0;
  aiStack_c[0] = 0;
  util__Str_L_char_G___Find(param_1,(char *)&MStack_14,(int *)"_",aiStack_c);
  __return_storage_ptr___00 = __return_storage_ptr__;
  this = util__Str_char___SubStr(param_1,&SStack_20,0,&MStack_14);
  util__Str_char___PrettyPrinted(this,__return_storage_ptr___00);
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  return __return_storage_ptr__;
}





//==== 008629a0 PrintPercent ====


/* class util__Str_L_char_G_ __cdecl PrintPercent(double) */

Str_L_char_G_ * __cdecl PrintPercent(Str_L_char_G_ *__return_storage_ptr__,double param_1)

{
  undefined8 stack0xfffffff0;
  Str_L_char_G_ *pSVar1;
  char *pcVar2;
  undefined4 in_stack_00000008;
  char *in_stack_fffffff0;
  
  pSVar1 = PrintSigFigures((Str_L_char_G_ *)&stack0xfffffff0,
                           (double)CONCAT44(3,(int)((ulonglong)
                                                    ((double)CONCAT44((*(uint32_t*)&(param_1)),
                                                                      in_stack_00000008) * 100.0) >>
                                                   0x20)),(int)in_stack_fffffff0);
  if (pSVar1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = pSVar1->Data;
  }
  util__Printf(__return_storage_ptr__,(wchar_t*)((wchar_t*)((wchar_t*)("%s%%"))),pcVar2);
  if (in_stack_fffffff0 != (char *)0x0) {
    port_op_delete(in_stack_fffffff0);
  }
  return __return_storage_ptr__;
}





//==== 00862a10 PrintSigFigures ====


/* class util__Str_L_char_G_ __cdecl PrintSigFigures(double,int) */

Str_L_char_G_ * __cdecl PrintSigFigures(Str_L_char_G_ *__return_storage_ptr__,double param_1,int param_2)

{
  int iVar1;
  Str_L_char_G_ *pSVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  undefined4 in_stack_00000008;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  dStack_c = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008);
  if (NAN(dStack_c)) {
LAB_00862a54:
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\printing.cpp",0x77,
                    "IsNumericallyValid(Amount)",(char *)0x0);
    DebugBreak();
  }
  else {
    if (NAN(dStack_c) != (dStack_c == 0.0)) goto LAB_00862c73;
    if (NAN(dStack_c / dStack_c)) goto LAB_00862a54;
  }
  if ((NAN(dStack_c) == (dStack_c == 0.0)) && (NAN(dStack_c) == (dStack_c == -0.0))) {
    iVar1 = util__GetDigits_double(dStack_c);
    if (iVar1 < (*(uint32_t*)((char*)&(param_1)+4))) {
      util__GetDigits_double(1.0 / dStack_c);
      pSVar2 = util__Printf(&SStack_18,(wchar_t*)((wchar_t*)((wchar_t*)("%%.%if"))));
      if (pSVar2->Capacity < 1) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pSVar2->Data;
      }
      util__Printf(__return_storage_ptr__,(wchar_t*)((wchar_t*)((wchar_t*)(pcVar3))),dStack_c);
      if (SStack_18.Data != (char *)0x0) {
        port_op_delete(SStack_18.Data);
        return __return_storage_ptr__;
      }
    }
    else {
      dVar8 = 10.0;
      iVar5 = iVar1 - (*(uint32_t*)((char*)&(param_1)+4));
      if (iVar5 < 0) {
        dVar8 = 0.1;
      }
      iVar6 = -iVar5;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      if (iVar6 == 0) {
        dVar7 = 1.0;
      }
      else {
        dVar7 = dVar8;
        if (iVar6 != 1) {
          iVar4 = iVar6 + -1;
          iVar5 = 0;
          if (7 < iVar4) {
            iVar6 = (iVar6 - 9U >> 3) + 1;
            iVar5 = iVar6 * 8;
            do {
              dVar7 = dVar7 * dVar8 * dVar8 * dVar8 * dVar8 * dVar8 * dVar8 * dVar8 * dVar8;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          if (iVar5 < iVar4) {
            iVar4 = iVar4 - iVar5;
            do {
              dVar7 = dVar7 * dVar8;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
      if (dStack_c / dVar7 < 0.0) {
        dVar8 = -0.5;
      }
      else {
        dVar8 = 0.5;
      }
      dStack_c = (double)(int)(dStack_c / dVar7 + dVar8) * dVar7;
      if (iVar1 <= (*(uint32_t*)((char*)&(param_1)+4)) + 5) {
        util__Printf(__return_storage_ptr__,(wchar_t*)((wchar_t*)((wchar_t*)("%.0f"))),dStack_c);
        return __return_storage_ptr__;
      }
      pSVar2 = util__Printf(&SStack_18,(wchar_t*)((wchar_t*)((wchar_t*)("%%.%ie"))));
      if (pSVar2->Capacity < 1) {
        pcVar3 = "";
      }
      else {
        pcVar3 = pSVar2->Data;
      }
      util__Printf(__return_storage_ptr__,(wchar_t*)((wchar_t*)((wchar_t*)(pcVar3))),dStack_c);
      if (SStack_18.Data != (char *)0x0) {
        port_op_delete(SStack_18.Data);
      }
    }
    return __return_storage_ptr__;
  }
LAB_00862c73:
  util__Printf(__return_storage_ptr__,(wchar_t*)((wchar_t*)((wchar_t*)("%i"))),0);
  return __return_storage_ptr__;
}





//==== 00863140 PrintTimeName ====


/* class util__Str_L_char_G_ __cdecl PrintTimeName(enum TimeName__Type,int,bool) */

Str_L_char_G_ * __cdecl
PrintTimeName(Str_L_char_G_ *__return_storage_ptr__,int param_1,int param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  undefined4 *puVar3;
  Str_L_char_G_ *pSVar4;
  undefined1 *puVar5;
  char *pcVar6;
  void *apvStack_6c [3];
  void *pvStack_60;
  void *apvStack_54 [3];
  Str_L_char_G_ SStack_48;
  Str_L_char_G_ SStack_3c;
  int TStack_30;
  Str_L_char_G_ SStack_2c;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  SStack_2c.Data = (char *)0x0;
  SStack_2c.Capacity = 0;
  SStack_2c.Length = 0;
  TStack_30 = param_1;
  pLVar1 = (LocStr *)(*(code *)(uintptr_t)(DAT_0098cc48))(&TStack_30);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(&SStack_2c,pSVar2);
  SStack_20.Length = 0;
  SStack_20.Data = (char *)0x0;
  SStack_20.Capacity = 0;
  TStack_30 = param_1;
  SStack_3c.Data = (char *)0x0;
  SStack_3c.Capacity = 0;
  SStack_3c.Length = 0;
  puVar3 = (undefined4 *)(*(code *)(uintptr_t)(DAT_0098cc38))(&TStack_30);
  if ((int)puVar3[1] < 1) {
    puVar5 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar5 = (undefined1 *)*puVar3;
  }
  pSVar2 = &SStack_3c;
  pSVar4 = util__Printf(&SStack_14,(wchar_t*)((wchar_t*)((wchar_t*)("TimeNamePlural %s"))),puVar5);
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_54,pSVar4,pSVar2);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(&SStack_20,pSVar2);
  if (SStack_48.Data != (char *)0x0) {
    port_op_delete(SStack_48.Data);
    SStack_48.Data = (char *)0x0;
  }
  if (apvStack_54[0] != (void *)0x0) {
    port_op_delete(apvStack_54[0]);
    apvStack_54[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    (*(uint64_t*)&(SStack_14)) = (*(uint64_t*)&(SStack_14)) & 0xffffffff00000000;
  }
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  SStack_14.Length = 0;
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  TStack_30 = param_1;
  SStack_3c.Data = (char *)0x0;
  SStack_3c.Capacity = 0;
  SStack_3c.Length = 0;
  puVar3 = (undefined4 *)(*(code *)(uintptr_t)(DAT_0098cc38))(&TStack_30);
  if ((int)puVar3[1] < 1) {
    puVar5 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar5 = (undefined1 *)*puVar3;
  }
  pSVar2 = &SStack_3c;
  pSVar4 = util__Printf(&SStack_48,(wchar_t*)((wchar_t*)((wchar_t*)("TimeAbbreviation %s"))),puVar5);
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_6c,pSVar4,pSVar2);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(&SStack_14,pSVar2);
  if (pvStack_60 != (void *)0x0) {
    port_op_delete(pvStack_60);
    pvStack_60 = (void *)0x0;
  }
  if (apvStack_6c[0] != (void *)0x0) {
    port_op_delete(apvStack_6c[0]);
    apvStack_6c[0] = (void *)0x0;
  }
  if (SStack_48.Data != (char *)0x0) {
    port_op_delete(SStack_48.Data);
    SStack_48.Data = (char *)0x0;
  }
  if (SStack_3c.Data != (char *)0x0) {
    port_op_delete(SStack_3c.Data);
  }
  if (param_3) {
    pSVar2 = &SStack_20;
    if (param_2 == 1) {
      pSVar2 = &SStack_2c;
    }
  }
  else {
    pSVar2 = &SStack_14;
  }
  if (pSVar2->Capacity < 1) {
    pcVar6 = "";
  }
  else {
    pcVar6 = pSVar2->Data;
  }
  util__Printf(__return_storage_ptr__,(wchar_t*)((wchar_t*)((wchar_t*)(" %s"))),pcVar6);
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00864160 ScientificPrettyPrint ====


/* class util__Str_L_char_G_ __cdecl ScientificPrettyPrint(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl ScientificPrettyPrint(Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  bool bVar2;
  Str_L_char_G_ *this;
  char *pcVar3;
  char *pcVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ SStack_40;
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  int iStack_24;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  SStack_20.Data = (char *)0x0;
  SStack_20.Capacity = 0;
  SStack_20.Length = 0;
  uStack_28 = 0;
  iStack_24 = 0;
  util__Str_L_char_G___Find(param_1,auStack_34 + 4,(int *)"_",&iStack_24);
  pSVar5 = &SStack_20;
  this = util__Str_char___SubStr(param_1,&SStack_40,0,(Maybe_L_int_G_ *)(auStack_34 + 4));
  util__Str_char___PrettyPrinted(this,pSVar5);
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  SStack_14.Length = 0;
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  GetUnitsOfType(&SStack_14,param_1);
  pcVar3 = "%";
  pcVar4 = "";
  if (0 < SStack_14.Capacity) {
    pcVar4 = SStack_14.Data;
  }
  while( true ) {
    if (((pcVar4 + -0x929934)[(int)pcVar3] == '\0') && (*pcVar3 == '\0')) goto LAB_0086425c;
    if ((pcVar4 + -0x929934)[(int)pcVar3] != *pcVar3) break;
    pcVar3 = pcVar3 + 1;
  }
  if (SStack_14.Length == 0) {
LAB_0086425c:
    pSVar5 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)auStack_34,&SStack_20);
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pcVar4 = "";
    if (0 < SStack_14.Capacity) {
      pcVar4 = SStack_14.Data;
    }
    pcVar3 = "";
    if (0 < SStack_20.Capacity) {
      pcVar3 = SStack_20.Data;
    }
    pSVar5 = util__Printf(&SStack_40,(wchar_t*)((wchar_t*)((wchar_t*)("%s (%s)"))),pcVar3,pcVar4);
    bVar2 = true;
    bVar1 = false;
  }
  util__Str_char___Str_char(__return_storage_ptr__,pSVar5);
  if ((bVar1) && ((char *)(*(uint32_t*)&(auStack_34)) != (char *)0x0)) {
    port_op_delete((void *)(*(uint32_t*)&(auStack_34)));
    (*(uint32_t*)&(auStack_34)) = (uint32_t)(uintptr_t)((char *)0x0);
  }
  if ((SStack_40.Data != (char *)0x0) && (bVar2)) {
    port_op_delete(SStack_40.Data);
    SStack_40.Data = (char *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    (*(uint64_t*)&(SStack_14)) = (*(uint64_t*)&(SStack_14)) & 0xffffffff00000000;
  }
  if (SStack_20.Data != (char *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 008642f0 SecondsToDaysHoursMinutesSeconds ====


/* struct util__tuple4_L_int_Cint_Cint_Cdouble_G_ __cdecl SecondsToDaysHoursMinutesSeconds(double) */

tuple4_L_int_Cint_Cint_Cdouble_G_ * __cdecl
SecondsToDaysHoursMinutesSeconds(tuple4_L_int_Cint_Cint_Cdouble_G_ *__return_storage_ptr__,double param_1)

{
  undefined8 stack0x00000008;
  int iVar1;
  double dVar2;
  
  dVar2 = util__Abs((double *)&stack0x00000008);
  iVar1 = (int)(dVar2 / 60.0);
  dVar2 = util__Abs((double *)&stack0x00000008);
  __return_storage_ptr__->Value1 = (int)((double)(int)((double)iVar1 / 60.0) / 24.0);
  __return_storage_ptr__->Value4 = dVar2 - (double)iVar1 * 60.0;
  __return_storage_ptr__->Value2 = (int)((double)iVar1 / 60.0) % 0x18;
  __return_storage_ptr__->Value3 = iVar1 % 0x3c;
  return __return_storage_ptr__;
}





//==== 008643c0 SetPrintFunction ====


/* void __cdecl SetPrintFunction(class util__Str_L_char_G_ (__cdecl*)(double,class util__Str_L_char_G_)) */

void __cdecl SetPrintFunction(_func_Str_L_char_G__double_Str_L_char_G_ *param_1)

{
  PrintFunction = param_1;
  if (DAT_0098cc74 != '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\infrastructure\\printing.cpp",0x6f,
                    "!CalledAlready",(char *)0x0);
    DebugBreak();
  }
  DAT_0098cc74 = 1;
  return;
}





//==== 00864400 GetPointerPropertyChoices_00864400 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   GeneralSettings__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
GeneralSettings__GetPointerPropertyChoices
          (GeneralSettings *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  SerializationManagerInterface SVar3;
  int *in_stack_0000000c;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined **ppuStack_1c;
  void *pvStack_18;
  int *piStack_c;
  undefined1 auStack_8 [4];
  
  piStack_c = in_stack_0000000c;
  if (*(int *)&param_2[1] < 1) {
    SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar3 = *param_2;
  }
  for (pcVar1 = "Theme"; (pcVar1[(int)(*(int *)&SVar3 + -0x9360b8)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)(*(int *)&SVar3 + -0x9360b8)] != *pcVar1) {
      if (*(int *)&param_2[1] < 1) {
        SVar3 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
      }
      else {
        SVar3 = *param_2;
      }
      for (pcVar1 = "Language"; (pcVar1[(int)(*(int *)&SVar3 + -0x935b28)] != '\0' || (*pcVar1 != '\0'))
          ; pcVar1 = pcVar1 + 1) {
        if (pcVar1[(int)(*(int *)&SVar3 + -0x935b28)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      pcVar1 = "LanguageOption";
LAB_00864486:
      util__Str_char___Str_char(&SStack_38,pcVar1);
      uVar2 = (**(code **)(uintptr_t)(*piStack_c + 4))(&ppuStack_2c,&SStack_38,0);
      auStack_8[0] = 0;
      FUN_004f1250(&ppuStack_1c,uVar2,auStack_8);
      AsListing_class_util__Reflectable((Darray_L_class_util__Reflectable_P_G_ *)param_1);
      ppuStack_1c = (undefined **)(&vftable_6);
      if (pvStack_18 != (void *)0x0) {
        port_op_delete(pvStack_18);
      }
      ppuStack_2c = (undefined **)(&vftable_6);
      ppuStack_1c = (undefined **)(&vftable);
      pvStack_18 = (void *)0x0;
      if (pvStack_28 != (void *)0x0) {
        port_op_delete(pvStack_28);
      }
      ppuStack_2c = (undefined **)(&vftable);
      pvStack_28 = (void *)0x0;
      if (SStack_38.Data == (char *)0x0) {
        return param_1;
      }
      port_op_delete(SStack_38.Data);
      return param_1;
    }
  }
  pcVar1 = "CoreUITheme";
  goto LAB_00864486;
}





//==== 00864550 PreferencesBase ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: __thiscall PreferencesBase__PreferencesBase(void) */

PreferencesBase * __thiscall PreferencesBase__PreferencesBase(PreferencesBase *this)

{
  Str_L_char_G_ local_10;
  
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_576;
  this->Parent = (GameManager *)0x0;
  util__Str_char___Str_char(&local_10,"MainOptions");
  util__Str_char___operator__o8((Str_L_char_G_ *)&this->_pad_0x4_1,&local_10);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
  }
  return this;
}

//==== 008645b0 GetPanDownKey ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int __thiscall PreferencesBase__GetPanDownKey(void)const  */

int __thiscall PreferencesBase__GetPanDownKey(PreferencesBase *this)

{
  return 0x53;
}





//==== 008645c0 GetPanLeftKey ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int __thiscall PreferencesBase__GetPanLeftKey(void)const  */

int __thiscall PreferencesBase__GetPanLeftKey(PreferencesBase *this)

{
  return 0x41;
}





//==== 008645d0 GetPanRightKey ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int __thiscall PreferencesBase__GetPanRightKey(void)const  */

int __thiscall PreferencesBase__GetPanRightKey(PreferencesBase *this)

{
  return 0x44;
}





//==== 008645e0 GetPanUpKey ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int __thiscall PreferencesBase__GetPanUpKey(void)const  */

int __thiscall PreferencesBase__GetPanUpKey(PreferencesBase *this)

{
  return 0x57;
}





//==== 008645f0 GetZoomOutKey ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int __thiscall PreferencesBase__GetZoomOutKey(void)const  */

int __thiscall PreferencesBase__GetZoomOutKey(PreferencesBase *this)

{
  return 0x51;
}





//==== 00864600 GetZoomInKey ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: int __thiscall PreferencesBase__GetZoomInKey(void)const  */

int __thiscall PreferencesBase__GetZoomInKey(PreferencesBase *this)

{
  return 0x45;
}





//==== 00864610 LoadFromFile ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: static class PreferencesBase * __cdecl PreferencesBase__LoadFromFile(class GameManager *)
    */

PreferencesBase * __cdecl PreferencesBase__LoadFromFile(GameManager *param_1)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  char *pcVar2;
  DataParser *pDVar3;
  SimpleSerializationManager *pSVar4;
  HashMap_L_util__Str_L_char_G__Cutil__Reflectable_P_G_ *pHVar5;
  ulong uVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  PreferencesBase *this;
  char cVar10;
  char *pcVar11;
  int *piVar12;
  tuple2_L_bool_Cutil__Str_L_char_G___G_ *__return_storage_ptr__;
  Str_L_char_G_ *pSVar13;
  Str_L_char_G_ *pSVar14;
  PreferencesBase *pPVar15;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  GameManager *local_20;
  tuple2_L_bool_Cutil__Str_L_char_G___G_ local_1c;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  if ((PreferencesFactory == (_func_PreferencesBase_ptr *)0x0) || (PreferencesTypeName.Length == 0))
  {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\system\\options.cpp",0x2b,
                    "PreferencesFactory != nullptr && !PreferencesTypeName.IsNull()",
                    "Need a valid preferences type!");
    DebugBreak();
  }
  util__GetBasicResourcesPath(&local_2c);
  pcVar2 = "";
  if (0 < local_2c.Capacity) {
    pcVar2 = local_2c.Data;
  }
  util__Printf(&local_44,(wchar_t*)((wchar_t*)((wchar_t*)("%s/Data/DefaultPreferences.txt"))),pcVar2);
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  util__Str_char___Str_char(&local_38,"Preferences.txt");
  pSVar14 = &local_44;
  pSVar13 = &local_38;
  __return_storage_ptr__ = &local_1c;
  pDVar3 = GameManager__GetDataManager(param_1);
  DataParser__LoadSaveableFile(pDVar3,(Str_L_char_G_*)((Str_L_char_G_*)(__return_storage_ptr__)),pSVar13);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  if (local_1c.Value1 == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\system\\options.cpp",0x30,"Success",
                    (char *)0x0);
    DebugBreak();
  }
  pSVar14 = &PreferencesTypeName;
  pSVar4 = (SimpleSerializationManager *)GameManager__GetDataManager(param_1);
  pHVar5 = (HashMap_L_util__Str_L_char_G__Cutil__Reflectable_P_G_ *)(util__SimpleSerializationManager__GetDataTypeTable(pSVar4,pSVar14));
  if (pHVar5 != (HashMap_L_util__Str_L_char_G__Cutil__Reflectable_P_G_ *)0x0) {
    util__Str_char___Str_char(&local_2c,"MainOptions");
    pcVar2 = local_2c.Data;
    if (*(int *)(pHVar5 + 4) != 0) {
      pcVar9 = "";
      if (0 < local_2c.Capacity) {
        pcVar9 = local_2c.Data;
      }
      uVar6 = util__GetHash(pcVar9);
      local_c = 0;
      piVar12 = (int *)((uVar6 % *(uint *)(pHVar5 + 4)) * 0x10 + *(int *)pHVar5);
      iVar7 = (**(code **)(uintptr_t)(*piVar12 + 0xc))();
      if (local_c < iVar7) {
        do {
          puVar8 = (undefined4 *)(**(code **)*piVar12)(&local_c);
          if (puVar8[2] == local_2c.Length) {
            if ((int)puVar8[1] < 1) {
              pcVar9 = "";
            }
            else {
              pcVar9 = (char *)*puVar8;
            }
            cVar10 = *pcVar9;
            pcVar11 = "";
            if (0 < local_2c.Capacity) {
              pcVar11 = pcVar2;
            }
            if (cVar10 != '\0') {
              iVar7 = (int)pcVar11 - (int)pcVar9;
              do {
                if (cVar10 != pcVar9[iVar7]) goto LAB_00864784;
                cVar10 = pcVar9[1];
                pcVar9 = pcVar9 + 1;
              } while (cVar10 != '\0');
            }
            bVar1 = true;
          }
          else {
LAB_00864784:
            bVar1 = false;
          }
          if (bVar1) {
            iVar7 = (**(code **)*piVar12)(&local_c);
            piVar12 = (int *)(iVar7 + 0xc);
            goto LAB_008647d8;
          }
          local_c = local_c + 1;
          iVar7 = (*(code *)((undefined4 *)*piVar12)[3])();
        } while (local_c < iVar7);
      }
    }
    piVar12 = (int *)0x0;
LAB_008647d8:
    if (pcVar2 != (char *)0x0) {
      port_op_delete(pcVar2);
    }
    param_1 = local_20;
    if ((piVar12 != (int *)0x0) &&
       (this = (PreferencesBase *)*piVar12, this != (PreferencesBase *)0x0)) goto LAB_00864809;
  }
  this = (*PreferencesFactory)();
  pDVar3 = GameManager__GetDataManager(param_1);
  (**(code **)(*(int *)pDVar3 + 8))(this);
LAB_00864809:
  pPVar15 = this;
  pSVar4 = (SimpleSerializationManager *)GameManager__GetDataManager(param_1);
  util__SimpleSerializationManager__CorrectImport(pSVar4,(Reflectable *)pPVar15);
  this->Parent = param_1;
  (**(code **)(this->_pad_0x0_0 + 0xac))();
  SetLanguage(this);
  if (local_1c.Value2.Data != (char *)0x0) {
    port_op_delete(local_1c.Value2.Data);
  }
  return this;
}

//==== 00864860 Save ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall PreferencesBase__Save(void) */

void __thiscall PreferencesBase__Save(PreferencesBase *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  SimpleSerializationManager *this_00;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  DataParser *this_01;
  Str_L_char_G_ *pSVar5;
  Darray_L_class_util__Reflectable_P_G_ *pDVar6;
  PreferencesBase *pPVar7;
  Darray_L_class_util__Reflectable_P_G_ *pDVar8;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pPVar7 = this;
  this_00 = (SimpleSerializationManager *)GameManager__GetDataManager(this->Parent);
  util__SimpleSerializationManager__CorrectImport(this_00,(Reflectable *)pPVar7);
  ppuStack_18 = (undefined **)(&vftable_6);
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  iStack_c = 1;
  puStack_14 = (undefined4 *)port_op_new(4);
  iVar1 = iStack_10;
  if (puStack_14 == (undefined4 *)0x0) {
    puStack_14 = (undefined4 *)0x0;
  }
  else {
    *puStack_14 = 0;
  }
  iVar3 = 0;
  if (0 < iStack_c) {
    do {
      puStack_14[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_c);
  }
  iStack_1c = iStack_10 + 1;
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_18,&iStack_1c);
  bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_18,iVar1);
  if (bVar2) {
    puStack_14[iStack_10 + -1] = (undefined4)(uintptr_t)(this);
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Str_char___Str_char(&SStack_38,"Preferences.txt");
  pDVar8 = (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_2c;
  pDVar6 = (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_18;
  pSVar5 = &SStack_38;
  pSVar4 = GetSaveDataPath(&SStack_44);
  this_01 = GameManager__GetDataManager(this->Parent);
  util__SerializationManagerInterface__SaveDataToFile
            ((SerializationManagerInterface *)this_01,pSVar4,pSVar5,pDVar6,pDVar8);
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  ppuStack_18 = (undefined **)(&vftable_6);
  if (puStack_14 != (undefined4 *)0x0) {
    port_op_delete(puStack_14);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00864870 SaveConst ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall PreferencesBase__SaveConst(void)const  */

void __thiscall PreferencesBase__SaveConst(PreferencesBase *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  SimpleSerializationManager *this_00;
  int iVar3;
  Str_L_char_G_ *pSVar4;
  DataParser *this_01;
  Str_L_char_G_ *pSVar5;
  Darray_L_class_util__Reflectable_P_G_ *pDVar6;
  PreferencesBase *pPVar7;
  Darray_L_class_util__Reflectable_P_G_ *pDVar8;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pPVar7 = this;
  this_00 = (SimpleSerializationManager *)GameManager__GetDataManager(this->Parent);
  util__SimpleSerializationManager__CorrectImport(this_00,(Reflectable *)pPVar7);
  ppuStack_18 = (undefined **)(&vftable_6);
  puStack_14 = (undefined4 *)0x0;
  iStack_10 = 0;
  iStack_c = 1;
  puStack_14 = (undefined4 *)port_op_new(4);
  iVar1 = iStack_10;
  if (puStack_14 == (undefined4 *)0x0) {
    puStack_14 = (undefined4 *)0x0;
  }
  else {
    *puStack_14 = 0;
  }
  iVar3 = 0;
  if (0 < iStack_c) {
    do {
      puStack_14[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_c);
  }
  iStack_1c = iStack_10 + 1;
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_18,&iStack_1c);
  bVar2 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)&ppuStack_18,iVar1);
  if (bVar2) {
    puStack_14[iStack_10 + -1] = (undefined4)(uintptr_t)(this);
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Str_char___Str_char(&SStack_38,"Preferences.txt");
  pDVar8 = (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_2c;
  pDVar6 = (Darray_L_class_util__Reflectable_P_G_ *)&ppuStack_18;
  pSVar5 = &SStack_38;
  pSVar4 = GetSaveDataPath(&SStack_44);
  this_01 = GameManager__GetDataManager(this->Parent);
  util__SerializationManagerInterface__SaveDataToFile
            ((SerializationManagerInterface *)this_01,pSVar4,pSVar5,pDVar6,pDVar8);
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  ppuStack_18 = (undefined **)(&vftable_6);
  if (puStack_14 != (undefined4 *)0x0) {
    port_op_delete(puStack_14);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 008649e0 SetLanguage ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* protected: void __thiscall PreferencesBase__SetLanguage(void)const  */

void __thiscall PreferencesBase__SetLanguage(PreferencesBase *this)

{
  int iVar1;
  LocalizationLibrary *this_00;
  Str_L_char_G_ *this_01;
  Str_L_char_G_ local_14;
  char local_5;
  
  iVar1 = (**(code **)(this->_pad_0x0_0 + 100))();
  if (iVar1 != 0) {
    this_00 = util__LocalizationLibrary__GetCurrentLanguage();
    iVar1 = (**(code **)(this->_pad_0x0_0 + 100))();
    this_01 = util__LocalizationLibrary__GetName(this_00,&local_14);
    local_5 = util__Str_char___operator__o9(this_01,(Str_L_char_G_ *)(iVar1 + 4));
    if (local_14.Data != (char *)0x0) {
      port_op_delete(local_14.Data);
    }
    if (local_5 == '\0') {
      iVar1 = (**(code **)(this->_pad_0x0_0 + 100))();
      util__LocalizationLibrary__SetCurrentLanguage((Str_L_char_G_ *)(iVar1 + 4));
      util__Str_char___Str_char(&local_14,"Font");
      GraphicsResourceInterface__ReinitializeAllOfType(&local_14);
      if (local_14.Data != (char *)0x0) {
        port_op_delete(local_14.Data);
      }
    }
  }
  return;
}

//==== 00864a80 TriggerOnChanged ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void __thiscall PreferencesBase__TriggerOnChanged(void)const  */

void __thiscall PreferencesBase__TriggerOnChanged(PreferencesBase *this)

{
  Vec4_L_int_G_ VVar1;
  bool bVar2;
  SimpleSerializationManager *this_00;
  undefined4 *puVar3;
  int iVar4;
  Str_L_char_G_ *pSVar5;
  DataParser *this_01;
  int iVar6;
  PostProcessor *this_02;
  Str_L_char_G_ *pSVar7;
  Darray_L_util__Reflectable_P_G_ *pDVar8;
  PreferencesBase *pPVar9;
  Darray_L_util__Reflectable_P_G_ *pDVar10;
  Str_L_char_G_ SStack_44;
  Str_L_char_G_ SStack_38;
  undefined **ppuStack_2c;
  void *pvStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined **ppuStack_18;
  int iVar11;
  
  RebuildWindow(false);
  (**(code **)(this->_pad_0x0_0 + 0xa8))();
  iVar6 = (**(code **)(this->_pad_0x0_0 + 0x98))();
  iVar11 = iVar6;
  this_02 = GameManager__GetPostProcessor(this->Parent);
  VVar1.Y = iVar11;
  VVar1.X = iVar6;
  PostProcessor__SetShadowBufferSize(this_02,(*(Vec3_L_int_G_ *)&(VVar1)));
  GameManager__GetPostProcessor(this->Parent);
  PostProcessor__Initialize();
  bVar2 = SetupShaders(this);
  if (!bVar2) {
    ppuStack_18 = (undefined **)0x864ae1;
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\system\\options.cpp",0x54,"Success",
                    (char *)0x0);
    DebugBreak();
  }
  SetCursorIcon();
  (**(code **)(this->_pad_0x0_0 + 0xac))();
  SetLanguage(this);
  pPVar9 = this;
  this_00 = (SimpleSerializationManager *)GameManager__GetDataManager(this->Parent);
  util__SimpleSerializationManager__CorrectImport(this_00,(Reflectable *)pPVar9);
  ppuStack_18 = (undefined **)(&vftable_6);
  iVar11 = 0;
  iVar6 = 1;
  puVar3 = (undefined4 *)(uintptr_t)(port_op_new(4));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
  }
  iVar4 = 0;
  if (0 < iVar6) {
    do {
      puVar3[iVar4] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar6);
  }
  iStack_1c = iVar11 + 1;
  iVar6 = iVar11;
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)&ppuStack_18,&iStack_1c);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)&ppuStack_18,iVar11);
  if (bVar2) {
    puVar3[iVar6 + -1] = (undefined4)(uintptr_t)(this);
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  pvStack_28 = (void *)0x0;
  uStack_24 = 0;
  uStack_20 = 0;
  util__Str_char___Str_char(&SStack_38,"Preferences.txt");
  pDVar10 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_2c;
  pDVar8 = (Darray_L_util__Reflectable_P_G_ *)&ppuStack_18;
  pSVar7 = &SStack_38;
  pSVar5 = GetSaveDataPath(&SStack_44);
  this_01 = GameManager__GetDataManager(this->Parent);
  util__SerializationManagerInterface__SaveDataToFile
            ((SerializationManagerInterface *)this_01,pSVar5,pSVar7,pDVar8,pDVar10);
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
    SStack_44.Data = (char *)0x0;
  }
  if (SStack_38.Data != (char *)0x0) {
    port_op_delete(SStack_38.Data);
    SStack_38.Data = (char *)0x0;
  }
  ppuStack_2c = (undefined **)(&vftable_6);
  if (pvStack_28 != (void *)0x0) {
    port_op_delete(pvStack_28);
  }
  ppuStack_18 = (undefined **)(&vftable_6);
  if (puVar3 != (undefined4 *)0x0) {
    port_op_delete(puVar3);
  }
  return;
}

//==== 00864b10 Darray_float_ ====

/* public: __thiscall util__Darray_float___Darray_float(int) */

Darray_L_float_G_ * __thiscall util__Darray_float___Darray_float(Darray_L_float_G_ *this,int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  
  this->_pad_0x0_0 = (int)&vftable_586;
  this->Data = (float *)0x0;
  this->Size = 0;
  this->Capacity = param_1;
  if ((param_1 < 0) || (0x3fffffff < param_1)) {
    this->Capacity = 0;
  }
  else if (0 < param_1) {
    uVar3 = -(uint)((int)((ulonglong)(uint)param_1 * 4 >> 0x20) != 0) |
            (uint)((ulonglong)(uint)param_1 * 4);
    pfVar1 = (float *)(uintptr_t)(port_op_new(uVar3));
    if (pfVar1 == (float *)0x0) {
      pfVar1 = (float *)0x0;
    }
    else {
      memset(pfVar1,0,uVar3);
    }
    this->Data = pfVar1;
    iVar2 = 0;
    if (0 < this->Capacity) {
      do {
        this->Data[iVar2] = 0.0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < this->Capacity);
      return this;
    }
  }
  return this;
}

//==== 00864bb0 FontShader ====

/* public: __thiscall FontShader__FontShader(void) */

FontShader * __thiscall FontShader__FontShader(FontShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_577;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00864ec0 Line2DShader ====

/* public: __thiscall Line2DShader__Line2DShader(void) */

Line2DShader * __thiscall Line2DShader__Line2DShader(Line2DShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_578;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00865160 Point2DShader ====

/* public: __thiscall Point2DShader__Point2DShader(void) */

Point2DShader * __thiscall Point2DShader__Point2DShader(Point2DShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_579;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00865400 PostProcessBlurCrossShader ====

/* public: __thiscall PostProcessBlurCrossShader__PostProcessBlurCrossShader(void) */

PostProcessBlurCrossShader * __thiscall
PostProcessBlurCrossShader__PostProcessBlurCrossShader(PostProcessBlurCrossShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_587;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->GaussianBlurRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadGaussianBlurLocation);
  }
  (this->BlurSizeMaxRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadBlurSizeMaxLocation);
  }
  (this->TextureLookupOffsetRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLookupOffsetLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 008657d0 PostProcessBlurShader ====

/* public: __thiscall PostProcessBlurShader__PostProcessBlurShader(void) */

PostProcessBlurShader * __thiscall
PostProcessBlurShader__PostProcessBlurShader(PostProcessBlurShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Darray_L_void____cdecl_P__void__G_ *pDVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_585;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar6 = local_18;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar11 = 0;
  pfVar13 = local_78;
  iVar12 = 0;
  iVar14 = 1;
  iVar15 = 2;
  iVar9 = 3;
  do {
    iVar5 = iStack_24;
    iVar4 = iStack_28;
    iVar3 = iStack_2c;
    iVar10 = local_30;
    iVar8 = iVar11 + 1;
    *pfVar13 = (float)(iVar11 == iVar12);
    pfVar13[1] = (float)(iVar11 == iVar14);
    pfVar13[2] = (float)(iVar11 == iVar15);
    pfVar13[3] = (float)(iVar11 == iVar9);
    iVar11 = iVar8;
    pfVar13 = pfVar13 + 4;
    iVar12 = iVar10;
    iVar14 = iVar3;
    iVar15 = iVar4;
    iVar9 = iVar5;
  } while (iVar8 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  iVar15 = iStack_24;
  iVar14 = iStack_28;
  iVar12 = iStack_2c;
  iVar11 = local_30;
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar9 = 0;
  pfVar13 = local_78;
  do {
    iVar10 = iVar9 + 1;
    *pfVar13 = (float)(iVar9 == iVar11);
    pfVar13[1] = (float)(iVar9 == iVar12);
    pfVar13[2] = (float)(iVar9 == iVar14);
    pfVar13[3] = (float)(iVar9 == iVar15);
    iVar9 = iVar10;
    pfVar13 = pfVar13 + 4;
  } while (iVar10 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar11 = 0;
  pfVar13 = local_78;
  do {
    iVar12 = iVar11 + 1;
    bVar7 = iVar11 == iStack_2c;
    bVar1 = iVar11 == iStack_28;
    bVar2 = iVar11 == iStack_24;
    *pfVar13 = (float)(iVar11 == local_30);
    pfVar13[1] = (float)bVar7;
    pfVar13[2] = (float)bVar1;
    pfVar13[3] = (float)bVar2;
    iVar11 = iVar12;
    pfVar13 = pfVar13 + 4;
  } while (iVar12 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->GaussianBlurRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadGaussianBlurLocation);
  }
  (this->BlurSizeMaxRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadBlurSizeMaxLocation);
  }
  (this->BlurFilterRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadBlurFilterLocation);
  }
  (this->TextureLookupOffsetRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTextureLookupOffsetLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00865bf0 PostProcessBrightnessShader ====

/* public: __thiscall PostProcessBrightnessShader__PostProcessBrightnessShader(void) */

PostProcessBrightnessShader * __thiscall
PostProcessBrightnessShader__PostProcessBrightnessShader(PostProcessBrightnessShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_580;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->BrightnessRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadBrightnessLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00865f40 PostProcessCompositeLuminanceShader ====

/* public:  PostProcessCompositeLuminanceShader__PostProcessCompositeLuminanceShader(void)
    */

PostProcessCompositeLuminanceShader * 
PostProcessCompositeLuminanceShader__PostProcessCompositeLuminanceShader
          (PostProcessCompositeLuminanceShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_584;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->AdditionalTextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadAdditionalTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetAdditionalTextureDefault);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 008662d0 PostProcessCopyAndApplyLuminanceShader ====

/* public: 
   PostProcessCopyAndApplyLuminanceShader__PostProcessCopyAndApplyLuminanceShader(void) */

PostProcessCopyAndApplyLuminanceShader * 
PostProcessCopyAndApplyLuminanceShader__PostProcessCopyAndApplyLuminanceShader
          (PostProcessCopyAndApplyLuminanceShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_582;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->LuminanceMultiplierRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadLuminanceMultiplierLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00866620 PostProcessCopyAndBrightPassShader ====

/* public:  PostProcessCopyAndBrightPassShader__PostProcessCopyAndBrightPassShader(void)
    */

PostProcessCopyAndBrightPassShader * 
PostProcessCopyAndBrightPassShader__PostProcessCopyAndBrightPassShader
          (PostProcessCopyAndBrightPassShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_581;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->LuminanceMultiplierRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadLuminanceMultiplierLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00866970 PostProcessCopyLuminanceShader ====

/* public: __thiscall PostProcessCopyLuminanceShader__PostProcessCopyLuminanceShader(void) */

PostProcessCopyLuminanceShader * __thiscall
PostProcessCopyLuminanceShader__PostProcessCopyLuminanceShader(PostProcessCopyLuminanceShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_583;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->SourceTextureCoordinateScalarRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadSourceTextureCoordinateScalarLocation);
  }
  (this->LuminanceMultiplierRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadLuminanceMultiplierLocation);
  }
  (this->TextureLookupOffsetRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLookupOffsetLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00866d40 PostProcessDistortionShader ====

/* public: __thiscall PostProcessDistortionShader__PostProcessDistortionShader(void) */

PostProcessDistortionShader * __thiscall
PostProcessDistortionShader__PostProcessDistortionShader(PostProcessDistortionShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Darray_L_void____cdecl_P__void__G_ *pDVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_588;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar6 = local_18;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar11 = 0;
  pfVar13 = local_78;
  iVar12 = 0;
  iVar14 = 1;
  iVar15 = 2;
  iVar9 = 3;
  do {
    iVar5 = iStack_24;
    iVar4 = iStack_28;
    iVar3 = iStack_2c;
    iVar10 = local_30;
    iVar8 = iVar11 + 1;
    *pfVar13 = (float)(iVar11 == iVar12);
    pfVar13[1] = (float)(iVar11 == iVar14);
    pfVar13[2] = (float)(iVar11 == iVar15);
    pfVar13[3] = (float)(iVar11 == iVar9);
    iVar11 = iVar8;
    pfVar13 = pfVar13 + 4;
    iVar12 = iVar10;
    iVar14 = iVar3;
    iVar15 = iVar4;
    iVar9 = iVar5;
  } while (iVar8 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  iVar15 = iStack_24;
  iVar14 = iStack_28;
  iVar12 = iStack_2c;
  iVar11 = local_30;
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar9 = 0;
  pfVar13 = local_78;
  do {
    iVar10 = iVar9 + 1;
    *pfVar13 = (float)(iVar9 == iVar11);
    pfVar13[1] = (float)(iVar9 == iVar12);
    pfVar13[2] = (float)(iVar9 == iVar14);
    pfVar13[3] = (float)(iVar9 == iVar15);
    iVar9 = iVar10;
    pfVar13 = pfVar13 + 4;
  } while (iVar10 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar11 = 0;
  pfVar13 = local_78;
  do {
    iVar12 = iVar11 + 1;
    bVar7 = iVar11 == iStack_2c;
    bVar1 = iVar11 == iStack_28;
    bVar2 = iVar11 == iStack_24;
    *pfVar13 = (float)(iVar11 == local_30);
    pfVar13[1] = (float)bVar7;
    pfVar13[2] = (float)bVar1;
    pfVar13[3] = (float)bVar2;
    iVar11 = iVar12;
    pfVar13 = pfVar13 + 4;
  } while (iVar12 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->TimeRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTimeLocation);
  }
  (this->TextureLookupOffsetRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = (void (*)(void))(LoadTextureLookupOffsetLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 008670e0 PostProcessFXAAShader ====

/* public: __thiscall PostProcessFXAAShader__PostProcessFXAAShader(void) */

PostProcessFXAAShader * __thiscall
PostProcessFXAAShader__PostProcessFXAAShader(PostProcessFXAAShader *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  Darray_L_void____cdecl_P__void__G_ *pDVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_78 [18];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *local_18;
  Darray_L_void____cdecl_P__void__G_ *local_14;
  
  Shader__Shader((Shader *)this);
  this->_pad_0x0_0 = (int)&vftable_589;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadModelMatrixLocation);
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = local_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadInverseModelMatrixLocation);
  }
  iVar8 = 0;
  pfVar11 = local_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTotalTransformMatrixLocation);
  }
  iVar10 = 0;
  pfVar11 = local_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == local_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNormalMatrixLocation);
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadNearPlaneLocation);
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadFarPlaneLocation);
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLocation);
  }
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(SetTextureDefault);
  }
  (this->TextureLookupOffsetRegisterInstance).Location = -1;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = (void (*)(void))(LoadTextureLookupOffsetLocation);
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 00867430 scalar_deleting_destructor_00867430 ====

/* public: virtual void * __thiscall util__Darray_L_float_G_:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
util__Darray_float____scalar_deleting_destructor(Darray_L_float_G_ *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_586;
  if (this->Data != (float *)0x0) {
    port_op_delete(this->Data);
  }
  this->Data = (float *)0x0;
  this->_pad_0x0_0 = (int)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}

//==== 00867480 AreGraphicsReady ====


/* bool __cdecl AreGraphicsReady(void) */

bool __cdecl AreGraphicsReady(void)

{
  return GraphicsAreReadyToView;
}





//==== 00867490 CheckSize_00867490 ====


/* private: bool __thiscall util__Darray_float___CheckSize(int) */

bool __thiscall util__Darray_float___CheckSize(Darray_L_float_G_ *this,int param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  bool bVar9;
  float *pfStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar8 = this->Size;
  bVar9 = -1 < (int)uVar8;
  bVar3 = !bVar9;
  if (bVar3) {
    pfStack_c = (float *)0x0;
    Darray_L_class_util__Reflectable_P_G___SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&pfStack_c);
    uVar8 = this->Size;
  }
  bStack_5 = !bVar3;
  bVar3 = (int)uVar8 < 0x40000000;
  if (!bVar3) {
    pfStack_c = (float *)0x3fffffff;
    Darray_L_class_util__Reflectable_P_G___SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&pfStack_c);
    uVar8 = this->Size;
    bStack_5 = false;
  }
  uVar4 = this->Capacity;
  if ((int)uVar8 <= (int)uVar4) {
    return bVar3 && bVar9;
  }
  if (uVar4 == 0) {
    this->Capacity = uVar8;
    uVar4 = uVar8;
  }
  if ((int)uVar4 < (int)uVar8) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar8);
    this->Capacity = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    this->Capacity = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar8 = -(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 4);
  pfVar5 = (float *)port_op_new(uVar8);
  if (pfVar5 == (float *)0x0) {
    pfVar5 = (float *)0x0;
    pfStack_c = (float *)0x0;
  }
  else {
    pfStack_c = pfVar5;
    memset(pfVar5,0,uVar8);
  }
  pfVar6 = this->Data;
  if (pfVar6 != (float *)0x0) {
    pfVar1 = pfVar5 + this->Size;
    pfVar7 = pfVar6;
    if (pfVar6 != pfVar6 + param_1) {
      do {
        if (pfVar5 == pfVar1) break;
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        *pfVar5 = fVar2;
        pfVar5 = pfVar5 + 1;
        pfVar6 = this->Data;
      } while (pfVar7 != pfVar6 + param_1);
    }
    port_op_delete(pfVar6);
    this->Data = (float *)0x0;
  }
  this->Data = pfStack_c;
  return bStack_5;
}





//==== 008675c0 ForceGet ====

/* public: class util__Darray_L_float_G_  util__Maybe_L_classutil__Darray_L_float_G___G___ForceGet(class util__Darray_L_float_G_ const &) */

Darray_L_float_G_ * 
util__Maybe_class_util__Darray_float_____ForceGet
          (Maybe_L_util__Darray_L_float_G___G_ *this,Darray_L_float_G_ *__return_storage_ptr__,
          Darray_L_float_G_ *param_1)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  
  if (this->IsValidData == false) {
    this = (Maybe_L_util__Darray_L_float_G___G_ *)param_1;
  }
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_586;
  __return_storage_ptr__->Data = (float *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = (this->Data).Capacity;
  param_1 = (Darray_L_float_G_ *)(**(code **)((this->Data)._pad_0x0_0 + 0xc))();
  Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)__return_storage_ptr__,(int *)&param_1);
  lVar1 = (ulonglong)(uint)__return_storage_ptr__->Capacity * 4;
  param_1 = (Darray_L_float_G_ *)(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  pfVar2 = (float *)(uintptr_t)(port_op_new((uint)param_1));
  if (pfVar2 == (float *)0x0) {
    pfVar2 = (float *)0x0;
  }
  else {
    memset(pfVar2,0,(size_t)(uintptr_t)((size_t)(uintptr_t)(param_1)));
  }
  __return_storage_ptr__->Data = pfVar2;
  pfVar3 = (this->Data).Data;
  if (pfVar3 != pfVar3 + (this->Data).Size) {
    do {
      *pfVar2 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar2 = pfVar2 + 1;
    } while (pfVar3 != (this->Data).Data + (this->Data).Size);
  }
  return __return_storage_ptr__;
}

//==== 00867680 GetDefaultSetters_00867680 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   FontShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl FontShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b6e3f291__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b6e3f291__thread_safe_static_guard_0__);
    if ( cde_l2_b6e3f291__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_852b9107_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_852b9107_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_852b9107_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_FontShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_b6e3f291__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_852b9107_DefaultSetters;
}





//==== 00867710 GetDefaultSetters_00867710 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   Line2DShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl Line2DShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3a29e966__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3a29e966__thread_safe_static_guard_0__);
    if ( cde_l2_3a29e966__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4e3bc3da_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_4e3bc3da_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4e3bc3da_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_Line2DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_3a29e966__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4e3bc3da_DefaultSetters;
}





//==== 008677a0 GetDefaultSetters_008677a0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   Point2DShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl Point2DShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a8b96380__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a8b96380__thread_safe_static_guard_0__);
    if ( cde_l2_a8b96380__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_ccf3d430_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_ccf3d430_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_ccf3d430_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_Point2DShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_a8b96380__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_ccf3d430_DefaultSetters;
}





//==== 00867830 GetDefaultSetters_00867830 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessBlurCrossShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessBlurCrossShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4f0e0882__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4f0e0882__thread_safe_static_guard_0__);
    if ( cde_l2_4f0e0882__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_97487afc_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_97487afc_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_97487afc_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBlurCrossShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_4f0e0882__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_97487afc_DefaultSetters;
}





//==== 008678c0 GetDefaultSetters_008678c0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessBlurShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessBlurShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d73b7dba__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d73b7dba__thread_safe_static_guard_0__);
    if ( cde_l2_d73b7dba__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_eb886b28_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_eb886b28_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_eb886b28_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBlurShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_d73b7dba__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_eb886b28_DefaultSetters;
}





//==== 00867950 GetDefaultSetters_00867950 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessBrightnessShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessBrightnessShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_4f1a0c9f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4f1a0c9f__thread_safe_static_guard_0__);
    if ( cde_l2_4f1a0c9f__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_05923608_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_05923608_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_05923608_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBrightnessShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_4f1a0c9f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_05923608_DefaultSetters;
}





//==== 008679e0 GetDefaultSetters_008679e0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCompositeLuminanceShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessCompositeLuminanceShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_18b45aec__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_18b45aec__thread_safe_static_guard_0__);
    if ( cde_l2_18b45aec__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_c25897eb_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_c25897eb_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_c25897eb_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCompositeLuminanceShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_18b45aec__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_c25897eb_DefaultSetters;
}





//==== 00867a70 GetDefaultSetters_00867a70 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCopyAndApplyLuminanceShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl
PostProcessCopyAndApplyLuminanceShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_436e02f5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_436e02f5__thread_safe_static_guard_0__);
    if ( cde_l2_436e02f5__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_a0ea9f95_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_a0ea9f95_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_a0ea9f95_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyAndApplyLuminanceShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_436e02f5__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_a0ea9f95_DefaultSetters;
}





//==== 00867b00 GetDefaultSetters_00867b00 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCopyAndBrightPassShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessCopyAndBrightPassShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_105d19ae__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_105d19ae__thread_safe_static_guard_0__);
    if ( cde_l2_105d19ae__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_37b423b4_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_37b423b4_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_37b423b4_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyAndBrightPassShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_105d19ae__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_37b423b4_DefaultSetters;
}





//==== 00867b90 GetDefaultSetters_00867b90 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCopyLuminanceShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessCopyLuminanceShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2957e2bc__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2957e2bc__thread_safe_static_guard_0__);
    if ( cde_l2_2957e2bc__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_74e92c46_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_74e92c46_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_74e92c46_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyLuminanceShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_2957e2bc__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_74e92c46_DefaultSetters;
}





//==== 00867c20 GetDefaultSetters_00867c20 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessDistortionShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessDistortionShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2e7508ba__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2e7508ba__thread_safe_static_guard_0__);
    if ( cde_l2_2e7508ba__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_e630ece9_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_e630ece9_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_e630ece9_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessDistortionShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_2e7508ba__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e630ece9_DefaultSetters;
}





//==== 00867cb0 GetDefaultSetters_00867cb0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessFXAAShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessFXAAShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_18b6ac78__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_18b6ac78__thread_safe_static_guard_0__);
    if ( cde_l2_18b6ac78__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_f85f879c_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_f85f879c_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_f85f879c_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessFXAAShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_18b6ac78__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f85f879c_DefaultSetters;
}





//==== 00867d40 GetStatic_00867d40 ====


/* public: static class FontShader * __cdecl FontShader__GetStatic(void) */

FontShader * __cdecl FontShader__GetStatic(void)

{
  FontShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fba411b6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_18b6ac78__thread_safe_static_guard_0__);
    if ( cde_l2_18b6ac78__thread_safe_static_guard_0__ == -1) {
      this = (FontShader *)port_op_new(0x58);
      if (this == (FontShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x58);
        pSVar1 = (Shader *)FontShader__FontShader(this);
      }
       cde_l2_f23ad8e1_Singleton =
           (FontShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_18b6ac78__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_f23ad8e1_Singleton;
}





//==== 00867dc0 GetStatic_00867dc0 ====


/* public: static class Line2DShader * __cdecl Line2DShader__GetStatic(void) */

Line2DShader * __cdecl Line2DShader__GetStatic(void)

{
  Line2DShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0ea89647__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0bb21ca7__thread_safe_static_guard_0__);
    if ( cde_l2_0bb21ca7__thread_safe_static_guard_0__ == -1) {
      this = (Line2DShader *)port_op_new(0x54);
      if (this == (Line2DShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)Line2DShader__Line2DShader(this);
      }
       cde_l2_29f686ce_Singleton =
           (Line2DShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_0bb21ca7__thread_safe_static_guard_0__);
    }
  }
  return cde_l2_29f686ce_Singleton;

}





//==== 00867e40 GetStatic_00867e40 ====


/* public: static class Point2DShader * __cdecl Point2DShader__GetStatic(void) */

Point2DShader * __cdecl Point2DShader__GetStatic(void)

{
  Point2DShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2895af31__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f63c2226__thread_safe_static_guard_0__);
    if ( cde_l2_f63c2226__thread_safe_static_guard_0__ == -1) {
      this = (Point2DShader *)port_op_new(0x54);
      if (this == (Point2DShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x54);
        pSVar1 = (Shader *)Point2DShader__Point2DShader(this);
      }
       cde_l2_ecb8f242_Singleton
           = (Point2DShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_f63c2226__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_29f686ce_Singleton;
}





//==== 00867ec0 GetStatic_00867ec0 ====


/* public: static class PostProcessBlurCrossShader * __cdecl
   PostProcessBlurCrossShader__GetStatic(void) */

PostProcessBlurCrossShader * __cdecl PostProcessBlurCrossShader__GetStatic(void)

{
  PostProcessBlurCrossShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c137b9cc__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c137b9cc__thread_safe_static_guard_0__);
    if ( cde_l2_c137b9cc__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessBlurCrossShader *)port_op_new(100);
      if (this == (PostProcessBlurCrossShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,100);
        pSVar1 = (Shader *)PostProcessBlurCrossShader__PostProcessBlurCrossShader(this);
      }
       cde_l2_6bf016fc_Singleton = (PostProcessBlurCrossShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_c137b9cc__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_6bf016fc_Singleton;
}





//==== 00867f40 GetStatic_00867f40 ====


/* public: static class PostProcessBlurShader * __cdecl PostProcessBlurShader__GetStatic(void) */

PostProcessBlurShader * __cdecl PostProcessBlurShader__GetStatic(void)

{
  PostProcessBlurShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_322059ac__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b10247c4__thread_safe_static_guard_0__);
    if ( cde_l2_b10247c4__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessBlurShader *)port_op_new(0x68);
      if (this == (PostProcessBlurShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x68);
        pSVar1 = (Shader *)PostProcessBlurShader__PostProcessBlurShader(this);
      }
       cde_l2_0680f41e_Singleton = (PostProcessBlurShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_b10247c4__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_216f5501_Singleton;
}





//==== 00867fc0 GetStatic_00867fc0 ====


/* public: static class PostProcessBrightnessShader * __cdecl
   PostProcessBrightnessShader__GetStatic(void) */

PostProcessBrightnessShader * __cdecl PostProcessBrightnessShader__GetStatic(void)

{
  PostProcessBrightnessShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_75d958d3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_75d958d3__thread_safe_static_guard_0__);
    if ( cde_l2_75d958d3__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessBrightnessShader *)port_op_new(0x5c);
      if (this == (PostProcessBrightnessShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)PostProcessBrightnessShader__PostProcessBrightnessShader(this);
      }
       cde_l2_5181885a_Singleton = (PostProcessBrightnessShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_75d958d3__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_5181885a_Singleton;
}





//==== 00868040 GetStatic_00868040 ====


/* public: static class PostProcessCompositeLuminanceShader * __cdecl
   PostProcessCompositeLuminanceShader__GetStatic(void) */

PostProcessCompositeLuminanceShader * __cdecl PostProcessCompositeLuminanceShader__GetStatic(void)

{
  PostProcessCompositeLuminanceShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_45e23c3f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_45e23c3f__thread_safe_static_guard_0__);
    if ( cde_l2_45e23c3f__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessCompositeLuminanceShader *)port_op_new(0x5c);
      if (this == (PostProcessCompositeLuminanceShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)PostProcessCompositeLuminanceShader__PostProcessCompositeLuminanceShader(this);
      }
       cde_l2_9840269c_Singleton = (PostProcessCompositeLuminanceShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_45e23c3f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_9840269c_Singleton;
}





//==== 008680c0 GetStatic_008680c0 ====


/* public: static class PostProcessCopyAndApplyLuminanceShader * __cdecl
   PostProcessCopyAndApplyLuminanceShader__GetStatic(void) */

PostProcessCopyAndApplyLuminanceShader * __cdecl
PostProcessCopyAndApplyLuminanceShader__GetStatic(void)

{
  PostProcessCopyAndApplyLuminanceShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_42f9f078__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_42f9f078__thread_safe_static_guard_0__);
    if ( cde_l2_42f9f078__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessCopyAndApplyLuminanceShader *)port_op_new(0x5c);
      if (this == (PostProcessCopyAndApplyLuminanceShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)PostProcessCopyAndApplyLuminanceShader__PostProcessCopyAndApplyLuminanceShader(this);
      }
       cde_l2_022029cc_Singleton = (PostProcessCopyAndApplyLuminanceShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_42f9f078__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_022029cc_Singleton;
}





//==== 00868140 GetStatic_00868140 ====


/* public: static class PostProcessCopyAndBrightPassShader * __cdecl
   PostProcessCopyAndBrightPassShader__GetStatic(void) */

PostProcessCopyAndBrightPassShader * __cdecl PostProcessCopyAndBrightPassShader__GetStatic(void)

{
  PostProcessCopyAndBrightPassShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2c9c57b2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2c9c57b2__thread_safe_static_guard_0__);
    if ( cde_l2_2c9c57b2__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessCopyAndBrightPassShader *)port_op_new(0x5c);
      if (this == (PostProcessCopyAndBrightPassShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)PostProcessCopyAndBrightPassShader__PostProcessCopyAndBrightPassShader(this);
      }
       cde_l2_3949b650_Singleton = (PostProcessCopyAndBrightPassShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_2c9c57b2__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_3949b650_Singleton;
}





//==== 008681c0 GetStatic_008681c0 ====


/* public: static class PostProcessCopyLuminanceShader * __cdecl
   PostProcessCopyLuminanceShader__GetStatic(void) */

PostProcessCopyLuminanceShader * __cdecl PostProcessCopyLuminanceShader__GetStatic(void)

{
  PostProcessCopyLuminanceShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_51c5d29b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_51c5d29b__thread_safe_static_guard_0__);
    if ( cde_l2_51c5d29b__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessCopyLuminanceShader *)port_op_new(100);
      if (this == (PostProcessCopyLuminanceShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,100);
        pSVar1 = (Shader *)PostProcessCopyLuminanceShader__PostProcessCopyLuminanceShader(this);
      }
       cde_l2_83e57bd1_Singleton = (PostProcessCopyLuminanceShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_51c5d29b__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_83e57bd1_Singleton;
}





//==== 00868240 GetStatic_00868240 ====


/* public: static class PostProcessDistortionShader * __cdecl
   PostProcessDistortionShader__GetStatic(void) */

PostProcessDistortionShader * __cdecl PostProcessDistortionShader__GetStatic(void)

{
  PostProcessDistortionShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e18b9a2d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e18b9a2d__thread_safe_static_guard_0__);
    if ( cde_l2_e18b9a2d__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessDistortionShader *)port_op_new(0x60);
      if (this == (PostProcessDistortionShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x60);
        pSVar1 = (Shader *)PostProcessDistortionShader__PostProcessDistortionShader(this);
      }
       cde_l2_b93681ba_Singleton = (PostProcessDistortionShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_e18b9a2d__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_b93681ba_Singleton;
}





//==== 008682c0 GetStatic_008682c0 ====


/* public: static class PostProcessFXAAShader * __cdecl PostProcessFXAAShader__GetStatic(void) */

PostProcessFXAAShader * __cdecl PostProcessFXAAShader__GetStatic(void)

{
  PostProcessFXAAShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_cb559e25__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_461e840f__thread_safe_static_guard_0__);
    if ( cde_l2_461e840f__thread_safe_static_guard_0__ == -1) {
      this = (PostProcessFXAAShader *)port_op_new(0x5c);
      if (this == (PostProcessFXAAShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)PostProcessFXAAShader__PostProcessFXAAShader(this);
      }
       cde_l2_9e858428_Singleton = (PostProcessFXAAShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_461e840f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_f81c37f5_Singleton;
}





//==== 00868340 GetValueLocations_00868340 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   FontShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl FontShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9de93c7a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9de93c7a__thread_safe_static_guard_0__);
    if ( cde_l2_9de93c7a__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_e10816c0_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_e10816c0_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_e10816c0_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_FontShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_9de93c7a__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e10816c0_ValueLocations;
}





//==== 008683d0 GetValueLocations_008683d0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   Line2DShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl Line2DShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7affa638__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7affa638__thread_safe_static_guard_0__);
    if ( cde_l2_7affa638__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_692aeaaf_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_692aeaaf_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_692aeaaf_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_Line2DShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_7affa638__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_692aeaaf_ValueLocations;
}





//==== 00868460 GetValueLocations_00868460 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   Point2DShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl Point2DShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fd113460__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fd113460__thread_safe_static_guard_0__);
    if ( cde_l2_fd113460__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_977fdf9f_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_977fdf9f_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_977fdf9f_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_Point2DShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_fd113460__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_977fdf9f_ValueLocations;
}





//==== 008684f0 GetValueLocations_008684f0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessBlurCrossShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessBlurCrossShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_765d474f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_765d474f__thread_safe_static_guard_0__);
    if ( cde_l2_765d474f__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_620b2452_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_620b2452_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_620b2452_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBlurCrossShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_765d474f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_620b2452_ValueLocations;
}





//==== 00868580 GetValueLocations_00868580 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessBlurShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessBlurShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9f340592__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9f340592__thread_safe_static_guard_0__);
    if ( cde_l2_9f340592__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_98ffa03c_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_98ffa03c_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_98ffa03c_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBlurShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_9f340592__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_98ffa03c_ValueLocations;
}





//==== 00868610 GetValueLocations_00868610 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessBrightnessShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessBrightnessShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_fb127605__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fb127605__thread_safe_static_guard_0__);
    if ( cde_l2_fb127605__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_43ab9f68_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_43ab9f68_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_43ab9f68_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessBrightnessShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_fb127605__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_43ab9f68_ValueLocations;
}





//==== 008686a0 GetValueLocations_008686a0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCompositeLuminanceShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessCompositeLuminanceShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9791650c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9791650c__thread_safe_static_guard_0__);
    if ( cde_l2_9791650c__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_a447682e_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_a447682e_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_a447682e_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCompositeLuminanceShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_9791650c__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_a447682e_ValueLocations;
}





//==== 00868730 GetValueLocations_00868730 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCopyAndApplyLuminanceShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl
PostProcessCopyAndApplyLuminanceShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c2e42203__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c2e42203__thread_safe_static_guard_0__);
    if ( cde_l2_c2e42203__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_feadccf6_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_feadccf6_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_feadccf6_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyAndApplyLuminanceShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_c2e42203__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_feadccf6_ValueLocations;
}





//==== 008687c0 GetValueLocations_008687c0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCopyAndBrightPassShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessCopyAndBrightPassShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_06a819bf__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_06a819bf__thread_safe_static_guard_0__);
    if ( cde_l2_06a819bf__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_79579f59_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_79579f59_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_79579f59_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyAndBrightPassShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_06a819bf__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_79579f59_ValueLocations;
}





//==== 00868850 GetValueLocations_00868850 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessCopyLuminanceShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessCopyLuminanceShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c488a083__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c488a083__thread_safe_static_guard_0__);
    if ( cde_l2_c488a083__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_c7a06a9e_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_c7a06a9e_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_c7a06a9e_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessCopyLuminanceShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_c488a083__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_c7a06a9e_ValueLocations;
}





//==== 008688e0 GetValueLocations_008688e0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessDistortionShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessDistortionShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_34011b7d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_34011b7d__thread_safe_static_guard_0__);
    if ( cde_l2_34011b7d__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_97b8902e_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_97b8902e_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_97b8902e_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessDistortionShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_34011b7d__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_97b8902e_ValueLocations;
}





//==== 00868970 GetValueLocations_00868970 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PostProcessFXAAShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PostProcessFXAAShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b724a801__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b724a801__thread_safe_static_guard_0__);
    if ( cde_l2_b724a801__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_680c4fd6_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_680c4fd6_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_680c4fd6_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PostProcessFXAAShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_b724a801__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_680c4fd6_ValueLocations;
}





//==== 00868a00 LoadAdditionalTextureLocation_00868a00 ====

/* private: static void __cdecl
   PostProcessCompositeLuminanceShader__LoadAdditionalTextureLocation(void) */

void __cdecl PostProcessCompositeLuminanceShader__LoadAdditionalTextureLocation(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  PostProcessCompositeLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  pcVar4 = "AdditionalTexture";
  pPVar2 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->AdditionalTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  if ((pPVar1->AdditionalTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: AdditionalTexture."
                   );
    DebugBreak();
  }
  local_8 = 1;
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 00868a80 LoadBlurFilterLocation ====

/* private: static void __cdecl PostProcessBlurShader__LoadBlurFilterLocation(void) */

void __cdecl PostProcessBlurShader__LoadBlurFilterLocation(void)

{
  PostProcessBlurShader *pPVar1;
  PostProcessBlurShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  pcVar4 = "BlurFilter";
  pPVar2 = PostProcessBlurShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->BlurFilterRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  if ((pPVar1->BlurFilterRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BlurFilter.");
    DebugBreak();
  }
  pPVar1 = PostProcessBlurShader__GetStatic();
  local_c = 0;
  local_8 = 0;
  (**(code **)(pPVar1->_pad_0x0_0 + 0x60))(&local_c);
  return;
}

//==== 00868b00 LoadBlurSizeMaxLocation ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadBlurSizeMaxLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadBlurSizeMaxLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  PostProcessBlurCrossShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  pcVar4 = "BlurSizeMax";
  pPVar2 = PostProcessBlurCrossShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->BlurSizeMaxRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  if ((pPVar1->BlurSizeMaxRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BlurSizeMax.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 00868b80 LoadBlurSizeMaxLocation_00868b80 ====

/* private: static void __cdecl PostProcessBlurShader__LoadBlurSizeMaxLocation(void) */

void __cdecl PostProcessBlurShader__LoadBlurSizeMaxLocation(void)

{
  PostProcessBlurShader *pPVar1;
  PostProcessBlurShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  pcVar4 = "BlurSizeMax";
  pPVar2 = PostProcessBlurShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->BlurSizeMaxRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  if ((pPVar1->BlurSizeMaxRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BlurSizeMax.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessBlurShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 00868c00 LoadBrightnessLocation ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadBrightnessLocation(void) */

void __cdecl PostProcessBrightnessShader__LoadBrightnessLocation(void)

{
  PostProcessBrightnessShader *pPVar1;
  PostProcessBrightnessShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  pcVar4 = "Brightness";
  pPVar2 = PostProcessBrightnessShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->BrightnessRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  if ((pPVar1->BrightnessRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: Brightness.");
    DebugBreak();
  }
  local_8 = 0;
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 00868c80 LoadFarPlaneLocation_00868c80 ====

/* private: static void __cdecl FontShader__LoadFarPlaneLocation(void) */

void __cdecl FontShader__LoadFarPlaneLocation(void)

{
  FontShader *pFVar1;
  FontShader *pFVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pFVar1 = FontShader__GetStatic();
  pcVar4 = "FarPlane";
  pFVar2 = FontShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pFVar2->_pad_0x4_1,pcVar4);
  (pFVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x14);
  local_8 = 0;
  pFVar1 = FontShader__GetStatic();
  (**(code **)(pFVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868cd0 LoadFarPlaneLocation_00868cd0 ====

/* private: static void __cdecl Line2DShader__LoadFarPlaneLocation(void) */

void __cdecl Line2DShader__LoadFarPlaneLocation(void)

{
  Line2DShader *pLVar1;
  Line2DShader *pLVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pLVar1 = Line2DShader__GetStatic();
  pcVar4 = "FarPlane";
  pLVar2 = Line2DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pLVar2->_pad_0x4_1,pcVar4);
  (pLVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x3e);
  local_8 = 0;
  pLVar1 = Line2DShader__GetStatic();
  (**(code **)(pLVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868d20 LoadFarPlaneLocation_00868d20 ====

/* private: static void __cdecl Point2DShader__LoadFarPlaneLocation(void) */

void __cdecl Point2DShader__LoadFarPlaneLocation(void)

{
  Point2DShader *pPVar1;
  Point2DShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = Point2DShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = Point2DShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x44);
  local_8 = 0;
  pPVar1 = Point2DShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868d70 LoadFarPlaneLocation_00868d70 ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadFarPlaneLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  PostProcessBlurCrossShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessBlurCrossShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  local_8 = 0;
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868dc0 LoadFarPlaneLocation_00868dc0 ====

/* private: static void __cdecl PostProcessBlurShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessBlurShader__LoadFarPlaneLocation(void)

{
  PostProcessBlurShader *pPVar1;
  PostProcessBlurShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessBlurShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  local_8 = 0;
  pPVar1 = PostProcessBlurShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868e10 LoadFarPlaneLocation_00868e10 ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessBrightnessShader__LoadFarPlaneLocation(void)

{
  PostProcessBrightnessShader *pPVar1;
  PostProcessBrightnessShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessBrightnessShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x56);
  local_8 = 0;
  pPVar1 = PostProcessBrightnessShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868e60 LoadFarPlaneLocation_00868e60 ====

/* private: static void __cdecl PostProcessCompositeLuminanceShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessCompositeLuminanceShader__LoadFarPlaneLocation(void)

{
  PostProcessCompositeLuminanceShader *pPVar1;
  PostProcessCompositeLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessCompositeLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x6c);
  local_8 = 0;
  pPVar1 = PostProcessCompositeLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868eb0 LoadFarPlaneLocation_00868eb0 ====

/* private: static void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadFarPlaneLocation(void)
    */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadFarPlaneLocation(void)

{
  PostProcessCopyAndApplyLuminanceShader *pPVar1;
  PostProcessCopyAndApplyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x60);
  local_8 = 0;
  pPVar1 = PostProcessCopyAndApplyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868f00 LoadFarPlaneLocation_00868f00 ====

/* private: static void __cdecl PostProcessCopyAndBrightPassShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessCopyAndBrightPassShader__LoadFarPlaneLocation(void)

{
  PostProcessCopyAndBrightPassShader *pPVar1;
  PostProcessCopyAndBrightPassShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessCopyAndBrightPassShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x5b);
  local_8 = 0;
  pPVar1 = PostProcessCopyAndBrightPassShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868f50 LoadFarPlaneLocation_00868f50 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessCopyLuminanceShader__LoadFarPlaneLocation(void)

{
  PostProcessCopyLuminanceShader *pPVar1;
  PostProcessCopyLuminanceShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessCopyLuminanceShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x67);
  local_8 = 0;
  pPVar1 = PostProcessCopyLuminanceShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868fa0 LoadFarPlaneLocation_00868fa0 ====

/* private: static void __cdecl PostProcessDistortionShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessDistortionShader__LoadFarPlaneLocation(void)

{
  PostProcessDistortionShader *pPVar1;
  PostProcessDistortionShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessDistortionShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessDistortionShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x7f);
  local_8 = 0;
  pPVar1 = PostProcessDistortionShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00868ff0 LoadFarPlaneLocation_00868ff0 ====

/* private: static void __cdecl PostProcessFXAAShader__LoadFarPlaneLocation(void) */

void __cdecl PostProcessFXAAShader__LoadFarPlaneLocation(void)

{
  PostProcessFXAAShader *pPVar1;
  PostProcessFXAAShader *pPVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pPVar1 = PostProcessFXAAShader__GetStatic();
  pcVar4 = "FarPlane";
  pPVar2 = PostProcessFXAAShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pPVar2->_pad_0x4_1,pcVar4);
  (pPVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x84);
  local_8 = 0;
  pPVar1 = PostProcessFXAAShader__GetStatic();
  (**(code **)(pPVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00869050 LoadGaussianBlurLocation ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadGaussianBlurLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadGaussianBlurLocation(void)

{
  PostProcessBlurCrossShader *pPVar1;
  int iVar2;
  Darray_L_float_G_ *pDVar3;
  Maybe_L_util__Darray_L_float_G___G_ MStack_40;
  Darray_L_float_G_ DStack_2c;
  undefined **ppuStack_1c;
  float *pfVar4;
  
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->GaussianBlurRegisterInstance).Location = iVar2;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79);
  if ((pPVar1->GaussianBlurRegisterInstance).Location == -1) {
    ppuStack_1c = (undefined **)0x86909b;
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x79,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: GaussianBlur.");
    DebugBreak();
  }
  pPVar1 = PostProcessBlurCrossShader__GetStatic();
  ppuStack_1c = (undefined **)(&vftable_586);
  pfVar4 = (float *)0x0;
  MStack_40.Data._pad_0x0_0 = (int)&vftable_586;
  MStack_40.Data.Data = (float *)0x0;
  MStack_40.Data.Size = 0;
  MStack_40.Data.Capacity = 0;
  MStack_40.IsValidData = false;
  iVar2 = pPVar1->_pad_0x0_0;
  pDVar3 = util__Maybe_class_util__Darray_float_____ForceGet
                     (&MStack_40,&DStack_2c,(Darray_L_float_G_ *)&ppuStack_1c);
  (**(code **)(uintptr_t)(iVar2 + 0x54))(pDVar3);
  DStack_2c._pad_0x0_0 = (int)&vftable_586;
  if (DStack_2c.Data != (float *)0x0) {
    port_op_delete(DStack_2c.Data);
  }
  DStack_2c.Data = (float *)0x0;
  DStack_2c._pad_0x0_0 = (int)&vftable;
  MStack_40.Data._pad_0x0_0 = (int)&vftable_586;
  if (MStack_40.Data.Data != (float *)0x0) {
    port_op_delete(MStack_40.Data.Data);
  }
  MStack_40.Data.Data = (float *)0x0;
  MStack_40.Data._pad_0x0_0 = (int)&vftable;
  ppuStack_1c = (undefined **)(&vftable_586);
  if (pfVar4 != (float *)0x0) {
    port_op_delete(pfVar4);
  }
  return;
}

//==== 008690b0 LoadGaussianBlurLocation_008690b0 ====

/* private: static void __cdecl PostProcessBlurShader__LoadGaussianBlurLocation(void) */

void __cdecl PostProcessBlurShader__LoadGaussianBlurLocation(void)

{
  PostProcessBlurShader *pPVar1;
  int iVar2;
  Darray_L_float_G_ *pDVar3;
  Maybe_L_util__Darray_L_float_G___G_ MStack_40;
  Darray_L_float_G_ DStack_2c;
  undefined **ppuStack_1c;
  float *pfVar4;
  
  pPVar1 = PostProcessBlurShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pPVar1->GaussianBlurRegisterInstance).Location = iVar2;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73);
  if ((pPVar1->GaussianBlurRegisterInstance).Location == -1) {
    ppuStack_1c = (undefined **)0x8690fb;
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\coreshaders.h",0x73,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: GaussianBlur.");
    DebugBreak();
  }
  pPVar1 = PostProcessBlurShader__GetStatic();
  ppuStack_1c = (undefined **)(&vftable_586);
  pfVar4 = (float *)0x0;
  MStack_40.Data._pad_0x0_0 = (int)&vftable_586;
  MStack_40.Data.Data = (float *)0x0;
  MStack_40.Data.Size = 0;
  MStack_40.Data.Capacity = 0;
  MStack_40.IsValidData = false;
  iVar2 = pPVar1->_pad_0x0_0;
  pDVar3 = util__Maybe_class_util__Darray_float_____ForceGet
                     (&MStack_40,&DStack_2c,(Darray_L_float_G_ *)&ppuStack_1c);
  (**(code **)(uintptr_t)(iVar2 + 0x54))(pDVar3);
  DStack_2c._pad_0x0_0 = (int)&vftable_586;
  if (DStack_2c.Data != (float *)0x0) {
    port_op_delete(DStack_2c.Data);
  }
  DStack_2c.Data = (float *)0x0;
  DStack_2c._pad_0x0_0 = (int)&vftable;
  MStack_40.Data._pad_0x0_0 = (int)&vftable_586;
  if (MStack_40.Data.Data != (float *)0x0) {
    port_op_delete(MStack_40.Data.Data);
  }
  MStack_40.Data.Data = (float *)0x0;
  MStack_40.Data._pad_0x0_0 = (int)&vftable;
  ppuStack_1c = (undefined **)(&vftable_586);
  if (pfVar4 != (float *)0x0) {
    port_op_delete(pfVar4);
  }
  return;
}

//==== 00869110 LoadInverseModelMatrixLocation_00869110 ====

/* private: static void __cdecl FontShader__LoadInverseModelMatrixLocation(void) */

void __cdecl FontShader__LoadInverseModelMatrixLocation(void)

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
  (pFVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86913b;
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
  (**(code **)(pFVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869150 LoadInverseModelMatrixLocation_00869150 ====

/* private: static void __cdecl Line2DShader__LoadInverseModelMatrixLocation(void) */

void __cdecl Line2DShader__LoadInverseModelMatrixLocation(void)

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
  (pLVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86917b;
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
  (**(code **)(pLVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869190 LoadInverseModelMatrixLocation_00869190 ====

/* private: static void __cdecl Point2DShader__LoadInverseModelMatrixLocation(void) */

void __cdecl Point2DShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8691bb;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 008691d0 LoadInverseModelMatrixLocation_008691d0 ====

/* private: static void __cdecl PostProcessBlurCrossShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessBlurCrossShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8691fb;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869210 LoadInverseModelMatrixLocation_00869210 ====

/* private: static void __cdecl PostProcessBlurShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessBlurShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86923b;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869250 LoadInverseModelMatrixLocation_00869250 ====

/* private: static void __cdecl PostProcessBrightnessShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessBrightnessShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86927b;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869290 LoadInverseModelMatrixLocation_00869290 ====

/* private: static void __cdecl
   PostProcessCompositeLuminanceShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessCompositeLuminanceShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8692bb;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 008692d0 LoadInverseModelMatrixLocation_008692d0 ====

/* private: static void __cdecl
   PostProcessCopyAndApplyLuminanceShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessCopyAndApplyLuminanceShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x8692fb;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869310 LoadInverseModelMatrixLocation_00869310 ====

/* private: static void __cdecl
   PostProcessCopyAndBrightPassShader__LoadInverseModelMatrixLocation(void) */

void __cdecl PostProcessCopyAndBrightPassShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86933b;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00869350 LoadInverseModelMatrixLocation_00869350 ====

/* private: static void __cdecl PostProcessCopyLuminanceShader__LoadInverseModelMatrixLocation(void)
    */

void __cdecl PostProcessCopyLuminanceShader__LoadInverseModelMatrixLocation(void)

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
  (pPVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x86937b;
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
  (**(code **)(pPVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

