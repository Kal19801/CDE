// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

undefined1 cde_l2_0b2b1c9f_NullString[16];

static Vec2_L_int_G_ g_iconsize_t1;

//==== 004010b0 text_di ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _text_di(void)

{
  double dVar1;
  
  dVar1 = 3.0;
  libm_sse2_sqrt_precise(0.0);
  _DAT_00960cf8 = (dVar1 * 3.141592653589793) / 6.0;
  return;
}





//==== 00486fd2 dynamic_initializer_for__Fac_tidy_reg ====


void __cdecl std___dynamic_initializer_for___Fac_tidy_reg(void)

{
  atexit(_dynamic_atexit_destructor_for___Fac_tidy_reg__);
  return;
}





//==== 00486fe0 SOIL_load_OGL_texture ====


int _SOIL_load_OGL_texture(char *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  FILE *_File;
  void *_Memory;
  undefined4 uStack_8;
  
  uVar1 = param_4;
  if (((param_4 & 0x40) != 0) && (iVar2 = _SOIL_direct_load_DDS(param_4), iVar2 != 0)) {
  }
  _File = fopen(param_1,"rb");
  if (_File == (FILE *)0x0) {
    _Memory = (void *)0x0;
    DAT_009936c8 = (undefined4)(uintptr_t)port_intern_string("Unable to open file");
    _result_string_pointer = s_Unable_to_open_file;
  }
  else {
    _Memory = (void *)stbi_load_from_file(&uStack_8,&param_4,param_2);
    fclose(_File);
    if (_Memory == (void *)0x0) {
      _result_string_pointer = (void *)(uintptr_t)(DAT_009936c8);
    }
    else {
      _result_string_pointer = s_Image_loaded;
    }
  }
  if (param_2 - 1 < 4) {
    param_4 = param_2;
  }
  if (_Memory != (void *)0x0) {
    iVar2 = _SOIL_internal_create_OGL_texture(uStack_8,param_4,param_3,uVar1);
    threading_e__free(_Memory);
    return iVar2;
  }
  _result_string_pointer = (void *)(uintptr_t)(DAT_009936c8);
  return 0;
}





//==== 00487a50 SOIL_save_image ====


undefined4 _SOIL_save_image(char *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  void *_Memory;
  int iVar1;
  FILE *_File;
  char *pcVar2;
  undefined1 auStack_a4 [4];
  char *pcStack_a0;
  size_t sStack_9c;
  void *pvStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  uint uStack_80;
  size_t sStack_7c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_24;
  uint uStack_c;
  
  uStack_c = __security_cookie ^ (uint)auStack_a4;
  pcStack_a0 = param_1;
  if ((((0 < (int)param_3) && (0 < param_4)) && (param_1 != (char *)0x0)) &&
     ((param_6 != 0 && (param_5 - 1 < 4)))) {
    if (param_2 == 1) {
      iVar1 = FUN_0048faf0(param_1,0xffffffff,0xffffffff,param_3,param_4,param_5,param_6,0,
                           param_3 & 3,"11 4 22 44 44 22 444444",0x42,0x4d,
                           ((param_3 & 3) + param_3 * 3) * param_4 + 0x36,0,0,0x36,0x28,param_3,
                           param_4,1,0x18,0,0,0,0,0,0);
    }
    else if (param_2 == 0) {
      iVar1 = (~param_5 & 1) * 8;
      iVar1 = FUN_0048faf0(param_1,0xffffffff,0xffffffff,param_3,param_4,param_5,param_6,
                           ~param_5 & 1,0,"111 221 2222 11",0,0,2,0,0,0,0,0,param_3,param_4,
                           iVar1 + 0x18,iVar1);
    }
    else if (param_2 == 2) {
      uStack_94 = param_5 & 1;
      if (uStack_94 == 0) {
        pvStack_98 = (void *)convert_image_to_DXT5(param_4,param_5,&sStack_9c);
      }
      else {
        pvStack_98 = (void *)convert_image_to_DXT1();
      }
      memset(&uStack_90,0,0x80);
      uStack_3c = 0x35545844;
      if (uStack_94 != 0) {
        uStack_3c = 0x31545844;
      }
      uStack_90 = 0x20534444;
      uStack_8c = 0x7c;
      uStack_88 = 0x81007;
      uStack_80 = param_3;
      iStack_84 = param_4;
      sStack_7c = sStack_9c;
      uStack_44 = 0x20;
      uStack_40 = 4;
      uStack_24 = 0x1000;
      _File = fopen(pcStack_a0,"wb");
      fwrite(&uStack_90,0x80,1,_File);
      _Memory = pvStack_98;
      fwrite(pvStack_98,1,sStack_9c,_File);
      fclose(_File);
      threading_e__free(_Memory);
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    pcVar2 = "Image saved";
    if (iVar1 == 0) {
      pcVar2 = "Saving the image failed";
    }
    _result_string_pointer = pcVar2;
    __security_check_cookie(uStack_c ^ (uint)auStack_a4);
    return 0;
  }
  __security_check_cookie(uStack_c ^ (uint)auStack_a4);
  return 0;
}





//==== 00487c90 SOIL_last_result ====


undefined * _SOIL_last_result(void)

{
  return _result_string_pointer;
}





//==== 00488250 query_DXT_capability ====


/* query_DXT_capability */

int __cdecl query_DXT_capability(void)

{
  char *pcVar1;
  PROC pPVar2;
  char *_SubStr;
  
  if (DAT_00960c20 == -1) {
    _SubStr = "GL_EXT_texture_compression_s3tc";
    pcVar1 = (char *)glGetString(0x1f03);
    pcVar1 = strstr(pcVar1,_SubStr);
    if (pcVar1 != (char *)0x0) {
      pPVar2 = wglGetProcAddress("glCompressedTexImage2DARB");
      if (*(char *)&(pPVar2) != 0) {
        _soilGlCompressedTexImage2D = (undefined4)(uintptr_t)(pPVar2);
        DAT_00960c20 = 1;
        return 1;
      }
    }
    DAT_00960c20 = 0;
  }
  return DAT_00960c20;
}





//==== 0048b080 stbi_jpeg_load_from_file ====


/* WARNING: Function: _chkstk replaced with injection: alloca_probe */
/* stbi_jpeg_load_from_file */

void __cdecl stbi_jpeg_load_from_file(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 stack0xfffffffc;
  uint uVar1;
  
  uVar1 = __security_cookie ^ (uint)&stack0xfffffffc;
  FUN_0048aad0(param_1,param_2,param_3);
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 00491eb0 SafeACos_double_ ====


/* double __cdecl util__SafeACos_double(double) */

double __cdecl util__SafeACos_double(double)

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
        LogEnsure("\\mac\\home\\documents\\code\\utilities\\utilities\\coremath\\coremath.h",0x5b,
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
  libm_sse2_acos_precise(0.0);
  return dVar1;
}





//==== 004920e0 Str_char_ ====


/* public: __thiscall util__Str_char____Str_char(void) */

void __thiscall util__Str_char____Str_char(Str_L_char_G_ *this)

{
  if (this->Data != (char *)0x0) {
    port_op_delete(this->Data);
    this->Data = (char *)0x0;
  }
  return;
}





//==== 00492100 LocStr ====


/* public: __thiscall util__LocStr___LocStr(void) */

void __thiscall util__LocStr___LocStr(LocStr *this)

{
  if (*(void **)(this + 0xc) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
    *(undefined4 *)this = 0;
  }
  return;
}





//==== 00492140 vector_deleting_destructor ====


/* public: void * __thiscall util__Str_L_char_G_:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall util__Str_char____vector_deleting_destructor(Str_L_char_G_ *this,uint param_1)

{
  int *piVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    if (this->Data != (char *)0x0) {
      port_op_delete(this->Data);
      this->Data = (char *)0x0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0xc);
    }
    return this;
  }
  piVar1 = &this[-1].Length;
  iVar4 = *piVar1;
  pSVar3 = this + iVar4;
  while (iVar4 != 0) {
    pSVar2 = pSVar3 + -1;
    pSVar3 = pSVar3 + -1;
    iVar4 = iVar4 + -1;
    if (pSVar2->Data != (char *)0x0) {
      port_op_delete(pSVar2->Data);
      pSVar3->Data = (char *)0x0;
    }
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(piVar1,*piVar1 * 0xc + 4);
  }
  return piVar1;
}





//==== 004921e0 vector_deleting_destructor_004921e0 ====


/* public: void * __thiscall util__ClassMember:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall util__ClassMember___vector_deleting_destructor(ClassMember *this,uint param_1)

{
  bool *pbVar1;
  ClassMember *pCVar2;
  char *pcVar3;
  ClassMember *pCVar4;
  int iVar5;
  
  if ((param_1 & 2) == 0) {
    pcVar3 = (this->AdditionalType).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->AdditionalType).Data = (char *)0x0;
    }
    pcVar3 = (this->Name).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Name).Data = (char *)0x0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x28);
    }
    return this;
  }
  pbVar1 = &this[-1].IsArray;
  iVar5 = *(int *)pbVar1;
  pCVar4 = this + iVar5;
  while (iVar5 != 0) {
    pcVar3 = pCVar4[-1].AdditionalType.Data;
    pCVar2 = pCVar4 + -1;
    iVar5 = iVar5 + -1;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      pCVar4[-1].AdditionalType.Data = (char *)0x0;
    }
    pcVar3 = (pCVar2->Name).Data;
    pCVar4 = pCVar2;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (pCVar2->Name).Data = (char *)0x0;
    }
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(pbVar1,*(int *)pbVar1 * 0x28 + 4);
  }
  return pbVar1;
}





//==== 004922b0 vector_deleting_destructor_004922b0 ====


/* public: void * __thiscall util__TupleProperty:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall
util__TupleProperty___vector_deleting_destructor(TupleProperty *this,uint param_1)

{
  uint *puVar1;
  TupleProperty *pTVar2;
  char *pcVar3;
  TupleProperty *pTVar4;
  uint uVar5;
  
  if ((param_1 & 2) == 0) {
    pcVar3 = (this->Type).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Type).Data = (char *)0x0;
    }
    pcVar3 = (this->Name).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Name).Data = (char *)0x0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x1c);
    }
  }
  else {
    puVar1 = &this[-1].Offset;
    uVar5 = *puVar1;
    pTVar4 = this + uVar5;
    while (uVar5 != 0) {
      pcVar3 = pTVar4[-1].Type.Data;
      pTVar2 = pTVar4 + -1;
      uVar5 = uVar5 - 1;
      if (pcVar3 != (char *)0x0) {
        port_op_delete(pcVar3);
        pTVar4[-1].Type.Data = (char *)0x0;
      }
      pcVar3 = (pTVar2->Name).Data;
      pTVar4 = pTVar2;
      if (pcVar3 != (char *)0x0) {
        port_op_delete(pcVar3);
        (pTVar2->Name).Data = (char *)0x0;
      }
    }
    this = (TupleProperty *)puVar1;
    if ((param_1 & 1) != 0) {
      port_op_delete(puVar1,*puVar1 * 0x1c + 4);
      return puVar1;
    }
  }
  return this;
}





//==== 004923c0 GetDefaultNearFarPlanes_km ====


/* struct util__Range_L_double_G_ __cdecl GetDefaultNearFarPlanes_km(double) */

Range_L_double_G_ * __cdecl
GetDefaultNearFarPlanes_km(Range_L_double_G_ *__return_storage_ptr__,double param_1)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = (double)CONCAT44((*(uint32_t*)&(param_1)),in_stack_00000008) * 0.01;
  if (dVar1 <= 1e-05) {
    dVar1 = 1e-05;
  }
  __return_storage_ptr__->Upper = 200000000000.0;
  __return_storage_ptr__->Lower = dVar1;
  if (200000000000.0 < dVar1) {
    __return_storage_ptr__->Lower = 200000000000.0;
    __return_storage_ptr__->Upper = dVar1;
  }
  return __return_storage_ptr__;
}





//==== 00492400 GetMinimumRadialSegmentation ====


/* int __cdecl GetMinimumRadialSegmentation(void) */

int __cdecl GetMinimumRadialSegmentation(void)

{
  return 0xc;
}





//==== 00492410 GetMinimumBattleRange_km ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: double  StrategicManager__GetMinimumBattleRange_km(void)const  */

double StrategicManager__GetMinimumBattleRange_km(void)

{
  return 2.0;
}





//==== 00492420 GetUniversalRadialSegmentation ====


/* int __cdecl GetUniversalRadialSegmentation(double) */

int __cdecl GetUniversalRadialSegmentation(double)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1 - 0.1;
  if (param_1 <= 0.1) {
    param_1 = 0.1;
  }
  dVar3 = 0.0;
  if (0.0 <= dVar2) {
    dVar3 = dVar2;
  }
  dVar2 = util__SafeACos_double(dVar3 / param_1);
  dVar2 = (6.283185307179586 / dVar2) / 12.0;
  if (dVar2 < 0.0) {
    dVar3 = -0.5;
  }
  else {
    dVar3 = 0.5;
  }
  iVar1 = (int)(dVar2 + dVar3) * 0xc;
  if (iVar1 < 0xd) {
    iVar1 = 0xc;
  }
  else if (0x17 < iVar1) {
    return 0x18;
  }
  return iVar1;
}





//==== 004924b0 scalar_deleting_destructor ====


/* public: virtual void * __thiscall util__IArray_L_enumCrewDepartment__Type_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__IArray_enum_CrewDepartment__Type____scalar_deleting_destructor
          (IArray_L_enum_CrewDepartment__Type_G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,4);
  }
  return this;
}





//==== 004924e0 operator__ ====


/* public: virtual enum CrewDepartment__Type &  util__Darray_enum_CrewDepartment__Type___operator(int const &)const  */

int * 
util__Darray_enum_CrewDepartment__Type___operator
          (Darray_L_enum_CrewDepartment__Type_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (int *)(*(int *)(this + 4) + iVar1 * 4);
}





//==== 00492530 First ====


/* public: virtual enum CrewDepartment__Type & __thiscall util__Darray_enum_CrewDepartment__Type___First(void) */

int * __thiscall
util__Darray_enum_CrewDepartment__Type___First(Darray_L_enum_CrewDepartment__Type_G_ *this)

{
  if (*(int *)(this + 8) < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,"Size > 0",
              (char *)0x0);
    DebugBreak();
  }
  return *(int **)(this + 4);
}





//==== 00492560 First_00492560 ====


/* public: virtual enum CrewDepartment__Type const & __thiscall util__Darray_enum_CrewDepartment__Type___First(void)const  */

int * 
util__Darray_enum_CrewDepartment__Type___First__o3(Darray_L_enum_CrewDepartment__Type_G_ *this)

{
  if (*(int *)(this + 8) < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3b,"Size > 0",
              (char *)0x0);
    DebugBreak();
  }
  return *(int **)(this + 4);
}





//==== 00492590 Last ====


/* public: virtual enum CrewDepartment__Type & __thiscall util__Darray_enum_CrewDepartment__Type___Last(void) */

int * __thiscall
util__Darray_enum_CrewDepartment__Type___Last(Darray_L_enum_CrewDepartment__Type_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (int *)(*(int *)(this + 4) + iVar1 * 4 + -4);
}





//==== 004925d0 Last_004925d0 ====


/* public: virtual enum CrewDepartment__Type const & __thiscall util__Darray_enum_CrewDepartment__Type___Last(void)const  */

int * 
util__Darray_enum_CrewDepartment__Type___Last__o3(Darray_L_enum_CrewDepartment__Type_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (int *)(*(int *)(this + 4) + iVar1 * 4 + -4);
}





//==== 00492610 Num ====


/* public: virtual int const  util__Darray_L_enumCrewDepartment__Type_G___Num(void)const  */

int __thiscall util__Darray_enum_CrewDepartment__Type___Num(Darray_L_enum_CrewDepartment__Type_G_ *this)

{
  return *(int *)(this + 8);
}





//==== 00492620 Clear ====


/* public: virtual void  util__Darray_L_enumCrewDepartment__Type_G___Clear(void) */

void __thiscall
util__Darray_enum_CrewDepartment__Type___Clear(Darray_L_enum_CrewDepartment__Type_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  Darray_L_class_util__Reflectable_P_G___SetSize((Darray_L_class_util__Reflectable_P_G_ *)this,&iStack_8);
  return;
}





//==== 00492640 SetAll ====


/* public: virtual void  util__Darray_L_enumCrewDepartment__Type_G___SetAll(enum
   CrewDepartment__Type const &) */

void 
util__Darray_enum_CrewDepartment__Type___SetAll
          (Darray_L_enum_CrewDepartment__Type_G_ *this,int *param_1)

{
  int *pTVar1;
  
  pTVar1 = *(int **)(this + 4);
  if (pTVar1 != pTVar1 + *(int *)(this + 8)) {
    do {
      *pTVar1 = *param_1;
      pTVar1 = pTVar1 + 1;
    } while (pTVar1 != (int *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  return;
}





//==== 00492680 scalar_deleting_destructor_00492680 ====


/* public: virtual void * __thiscall util__Darray_L_enumCrewDepartment__Type_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_enum_CrewDepartment__Type____scalar_deleting_destructor
          (Darray_L_enum_CrewDepartment__Type_G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)&vftable_2;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 004926d0 operator___004926d0 ====


/* public: virtual class util__LocStr &  util__Darray_L_classutil__LocStr_G___op_subscript(int
   const &)const  */

LocStr * __thiscall
util__Darray_class_util__LocStr___operator(Darray_L_class_util__LocStr_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (LocStr *)(*(int *)(this + 4) + iVar1 * 0x18);
}





//==== 00492720 Last_00492720 ====


/* public: virtual class util__LocStr &  util__Darray_L_classutil__LocStr_G___Last(void) */

LocStr * __thiscall util__Darray_class_util__LocStr___Last(Darray_L_class_util__LocStr_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (LocStr *)(*(int *)(this + 4) + iVar1 * 0x18 + -0x18);
}





//==== 00492760 Last_00492760 ====


/* public: virtual class util__LocStr const & __thiscall util__Darray_class_util__LocStr___Last(void)const  */

LocStr *  util__Darray_class_util__LocStr___Last__o3(Darray_L_class_util__LocStr_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (LocStr *)(*(int *)(this + 4) + iVar1 * 0x18 + -0x18);
}





//==== 004927a0 Clear_004927a0 ====


/* public: virtual void  util__Darray_L_classutil__LocStr_G___Clear(void) */

void __thiscall util__Darray_class_util__LocStr___Clear(Darray_L_class_util__LocStr_G_ *this)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ *this_00;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  if (*(int *)(this + 8) < 1) {
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if ((this_00 != (Str_L_char_G_ *)0x0) && (this_00 != this_00 + *(int *)(this + 8) * 2)) {
    do {
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      SStack_10.Data = (char *)0x0;
      SStack_10.Capacity = 0;
      SStack_10.Length = 0;
      pSVar1 = (Str_L_char_G_ *)LocStr__LocStr((LocStr *)apvStack_34,&SStack_10,&SStack_1c);
      util__Maybe_struct_util__ClassMember___operator(this_00,pSVar1);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,pSVar1 + 1);
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
      this_00 = this_00 + 2;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 004928c0 SetAll_004928c0 ====


/* public: virtual void  util__Darray_L_classutil__LocStr_G___SetAll(class util__LocStr const
   &) */

void __thiscall
util__Darray_class_util__LocStr___SetAll(Darray_L_class_util__LocStr_G_ *this,LocStr *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 2) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      util__Maybe_struct_util__ClassMember___operator(this_00 + 1,(Str_L_char_G_ *)(param_1 + 0xc));
      this_00 = this_00 + 2;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}





//==== 00492910 scalar_deleting_destructor_00492910 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__LocStr_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__LocStr____scalar_deleting_destructor__o2
          (Darray_L_class_util__LocStr_G_ *this,uint param_1)

{
  util__Darray_class_util__LocStr____Darray_class_util__LocStr(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00492940 operator___00492940 ====


/* public: virtual class util__Str_L_char_G_ &  util__Darray_L_classutil__Str_L_char_G___G___op_subscript(int const &)const  */

Str_L_char_G_ * __thiscall
util__Darray_class_util__Str_char_____operator(Darray_L_class_util__Str_L_char_G___G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (Str_L_char_G_ *)(*(int *)(this + 4) + iVar1 * 0xc);
}





//==== 00492990 Last_00492990 ====


/* public: virtual class util__Str_L_char_G_ &  util__Darray_L_classutil__Str_L_char_G___G___Last(void) */

Str_L_char_G_ * __thiscall
util__Darray_class_util__Str_char_____Last(Darray_L_class_util__Str_L_char_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (Str_L_char_G_ *)(*(int *)(this + 4) + iVar1 * 0xc + -0xc);
}





//==== 004929d0 Last_004929d0 ====


/* public: virtual class util__Str_L_char_G_ const &  util__Darray_L_classutil__Str_L_char_G___G___Last(void)const  */

Str_L_char_G_ * 
util__Darray_class_util__Str_char_____Last__o3(Darray_L_class_util__Str_L_char_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (Str_L_char_G_ *)(*(int *)(this + 4) + iVar1 * 0xc + -0xc);
}





//==== 00492a10 Clear_00492a10 ====


/* public: virtual void  util__Darray_L_classutil__Str_L_char_G__G___Clear(void) */

void __thiscall util__Darray_class_util__Str_char_____Clear(Darray_L_class_util__Str_L_char_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00492a30 SetAll_00492a30 ====


/* public: virtual void  util__Darray_L_classutil__Str_L_char_G__G___SetAll(class
   util__Str_L_char_G_ const &) */

void 
util__Darray_class_util__Str_char_____SetAll
          (Darray_L_class_util__Str_L_char_G___G_ *this,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8)) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,param_1);
      this_00 = this_00 + 1;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
  }
  return;
}





//==== 00492a80 Str_char__00492a80 ====


/* public:  util__Str_char___Str_char(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * util__Str_char___Str_char(Str_L_char_G_ *this,Str_L_char_G_ *param_1)
{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  
  this->Data = (char *)0x0;
  uVar2 = param_1->Capacity;
  this->Capacity = uVar2;
  this->Length = param_1->Length;
  if ((int)uVar2 < 1) {
    this->Length = 0;
    return this;
  }
  pcVar3 = (char *)port_op_new(uVar2);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)0x0;
  }
  else {
    memset(pcVar3,0,uVar2);
  }
  this->Data = pcVar3;
  if (param_1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = param_1->Data;
  }
  cVar1 = *pcVar4;
  while (cVar1 != '\0') {
    *pcVar3 = cVar1;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar4;
  }
  *pcVar3 = '\0';
  return this;
}





//==== 00492b10 Str_char__00492b10 ====


/* public:  util__Str_char___Str_char(char const *) */

Str_L_char_G_ *  util__Str_char___Str_char__o5(Str_L_char_G_ *this,char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  this->Data = (char *)0x0;
  this->Capacity = 0;
  this->Length = 0;
  if (param_1 != (char *)0x0) {
    iVar2 = 0;
    this->Length = 0;
    cVar1 = *param_1;
    pcVar4 = param_1;
    while (cVar1 != '\0') {
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 1;
      this->Length = iVar2;
      cVar1 = *pcVar4;
    }
    uVar3 = iVar2 + 1;
    this->Capacity = uVar3;
    pcVar4 = (char *)port_op_new(uVar3);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      memset(pcVar4,0,uVar3);
    }
    this->Data = pcVar4;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      *pcVar4 = cVar1;
      param_1 = param_1 + 1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *param_1;
    }
    *pcVar4 = '\0';
  }
  return this;
}





//==== 00492ba0 Str_char__00492ba0 ====


/* public:  util__Str_char___Str_char(void) */

Str_L_char_G_ *  util__Str_char___Str_char__o6(Str_L_char_G_ *this)

{
  this->Data = (char *)0x0;
  this->Capacity = 0;
  this->Length = 0;
  return this;
}





//==== 00492bc0 GameColorModel ====


/* public: __thiscall GameColorModel__GameColorModel(void) */

GameColorModel * __thiscall GameColorModel__GameColorModel(GameColorModel *this)

{
  ColorTexVertexBufferObject__ColorTexVertexBufferObject(&this->VertexObject);
  return this;
}





//==== 00492bd0 GameModel ====


/* public: __thiscall GameModel__GameModel(class Material const *,class Material const *,class
   util__Maybe_L_int_G_) */

GameModel * __thiscall
GameModel__GameModel(GameModel *this,Material *param_1,Material *param_2,Maybe_L_int_G_ param_3)

{
  VertexBufferObject__VertexBufferObject(&this->VertexObject);
  (this->Texture).Pointer = (CustomTexture *)0x0;
  (this->Texture).Controller = (ReferenceController *)0x0;
  (this->TextureID).Data = param_3.Data;
  (this->TextureID).IsValidData = param_3.IsValidData;
  this->StructureComposition = param_1;
  this->PaintComposition = param_2;
  return this;
}





//==== 00492c20 SpacecraftShader ====

/* public: __thiscall SpacecraftShader__SpacecraftShader(void) */

SpacecraftShader * __thiscall SpacecraftShader__SpacecraftShader(SpacecraftShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_16;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = SpacecraftShader__GetValueLocations();
  iVar12 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar6 = local_18;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadModelMatrixLocation;
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar12 = 0;
  pfVar13 = local_78;
  iVar11 = 0;
  iVar14 = 1;
  iVar15 = 2;
  iVar9 = 3;
  do {
    iVar5 = iStack_24;
    iVar4 = iStack_28;
    iVar3 = iStack_2c;
    iVar10 = local_30;
    iVar8 = iVar12 + 1;
    *pfVar13 = (float)(iVar12 == iVar11);
    pfVar13[1] = (float)(iVar12 == iVar14);
    pfVar13[2] = (float)(iVar12 == iVar15);
    pfVar13[3] = (float)(iVar12 == iVar9);
    iVar12 = iVar8;
    pfVar13 = pfVar13 + 4;
    iVar11 = iVar10;
    iVar14 = iVar3;
    iVar15 = iVar4;
    iVar9 = iVar5;
  } while (iVar8 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  iVar15 = iStack_24;
  iVar14 = iStack_28;
  iVar11 = iStack_2c;
  iVar12 = local_30;
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
  }
  iVar9 = 0;
  pfVar13 = local_78;
  do {
    iVar10 = iVar9 + 1;
    *pfVar13 = (float)(iVar9 == iVar12);
    pfVar13[1] = (float)(iVar9 == iVar11);
    pfVar13[2] = (float)(iVar9 == iVar14);
    pfVar13[3] = (float)(iVar9 == iVar15);
    iVar9 = iVar10;
    pfVar13 = pfVar13 + 4;
  } while (iVar10 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
  }
  iVar12 = 0;
  pfVar13 = local_78;
  do {
    iVar11 = iVar12 + 1;
    bVar7 = iVar12 == iStack_2c;
    bVar1 = iVar12 == iStack_28;
    bVar2 = iVar12 == iStack_24;
    *pfVar13 = (float)(iVar12 == local_30);
    pfVar13[1] = (float)bVar7;
    pfVar13[2] = (float)bVar1;
    pfVar13[3] = (float)bVar2;
    iVar12 = iVar11;
    pfVar13 = pfVar13 + 4;
  } while (iVar11 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadBlackbodyRadiationPeakTemperature_KLocation;
  }
  GetBlackbodyTexturePeakTemperature_K();
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetBlackbodyRadiationPeakTemperature_KDefault;
  }
  (this->BlackbodyRadiationTextureRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadBlackbodyRadiationTextureLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetBlackbodyRadiationTextureDefault;
  }
  (this->NormalTextureRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadNormalTextureLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetNormalTextureDefault;
  }
  (this->DamageTextureRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadDamageTextureLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetDamageTextureDefault;
  }
  (this->DamagedArmorTextureRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadDamagedArmorTextureLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetDamagedArmorTextureDefault;
  }
  (this->UsesNormalTextureRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadUsesNormalTextureLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetUsesNormalTextureDefault;
  }
  (this->UsesDamageTextureRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadUsesDamageTextureLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetUsesDamageTextureDefault;
  }
  (this->PaintedByDefaultRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadPaintedByDefaultLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetPaintedByDefaultDefault;
  }
  (this->UseSplineTexCoordsRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadUseSplineTexCoordsLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetUseSplineTexCoordsDefault;
  }
  (this->ArmorTextureScaleRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadArmorTextureScaleLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetArmorTextureScaleDefault;
  }
  (this->DiffuseColorRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadDiffuseColorLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetDiffuseColorDefault;
  }
  (this->ReflectionCoefficientColorRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadReflectionCoefficientColorLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetReflectionCoefficientColorDefault;
  }
  (this->RoughnessCoefficientRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadRoughnessCoefficientLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetRoughnessCoefficientDefault;
  }
  (this->PaintDiffuseColorRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadPaintDiffuseColorLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetPaintDiffuseColorDefault;
  }
  (this->PaintReflectionCoefficientColorRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadPaintReflectionCoefficientColorLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetPaintReflectionCoefficientColorDefault;
  }
  (this->PaintRoughnessCoefficientRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__LoadPaintRoughnessCoefficientLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SpacecraftShader__SetPaintRoughnessCoefficientDefault;
  }
  (this->LuminantTemperature_KRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadLuminantTemperature_KLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetLuminantTemperature_KDefault;
  }
  (this->LuminantIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadLuminantIrradiance_W_m2Location;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetLuminantIrradiance_W_m2Default;
  }
  (this->CameraPositionRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DeferredGlobalLightingShader__LoadCameraPositionLocation;
  }
  (this->SunlightDirectionRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowTextureLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetShadowTextureDefault;
  }
  (this->SunIsInShadowRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowMatrixLocation;
  }
  iVar12 = 0;
  pfVar13 = local_78;
  do {
    iVar11 = iVar12 + 1;
    bVar7 = iVar12 == iStack_2c;
    bVar1 = iVar12 == iStack_28;
    bVar2 = iVar12 == iStack_24;
    *pfVar13 = (float)(iVar12 == local_30);
    pfVar13[1] = (float)bVar7;
    pfVar13[2] = (float)bVar1;
    pfVar13[3] = (float)bVar2;
    iVar12 = iVar11;
    pfVar13 = pfVar13 + 4;
  } while (iVar11 < 4);
  (this->StarlightColorRegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowMapBiasLocation;
  }
  (this->StarlightIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowNearPlaneLocation;
  }
  (this->ReferenceIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowFarPlaneLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0xffffffff;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadSunlightDirectionLocation;
  }
  (this->AdditionalPreprocessor).Capacity = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadSunIsInShadowLocation;
  }
  (this->AdditionalPreprocessor).Length = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadStarlightColorLocation;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetStarlightColorDefault;
  }
  *(undefined4 *)&this->IsReadyToUse = 0xffffffff;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadStarlightIrradiance_W_m2Location;
  }
  local_14 = SpacecraftShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetStarlightIrradiance_W_m2Default;
  }
  this[1]._pad_0x0_0 = -1;
  local_14 = SpacecraftShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DeferredGlobalLightingShader__LoadReferenceIrradiance_W_m2Location;
  }
  this[1]._pad_0x4_1 = 0;
  this[1]._pad_0x8_2 = 0;
  this[1]._pad_0xc_3 = 0;
  *(undefined1 *)&this[1]._pad_0x10_4 = 0;
  return this;
}

//==== 00493b30 Vertex ====


/* public: __thiscall Vertex__Vertex(void) */

Vertex * __thiscall Vertex__Vertex(Vertex *this)

{
  (this->Point).X = 0.0;
  (this->Point).Y = 0.0;
  (this->Point).Z = 0.0;
  (this->TextureCoordinate).X = 0.0;
  (this->TextureCoordinate).Y = 0.0;
  (this->Mode__Normal).X = 0.0;
  (this->Mode__Normal).Y = 0.0;
  (this->Mode__Normal).Z = 0.0;
  (this->Tangent).X = 0.0;
  (this->Tangent).Y = 0.0;
  (this->Tangent).Z = 0.0;
  return this;
}





//==== 00493b80 Darray_util__tuple2_util__Str_char__double____thiscall_util__Reflectable_____void_const____ ====


/* public: virtual  Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cdouble___thiscallutil__Reflectable___P__void_const_G__G___dtor(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
           *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = (undefined **)&vftable_7;
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
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00493c00 Darray_util__Str_char___ ====


/* public: virtual  Darray_L_classutil__Str_L_char_G___G___dtor(void) */

void __thiscall
util__Darray_class_util__Str_char______Darray_class_util__Str_char(Darray_L_class_util__Str_L_char_G___G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(this + 4);
  *(undefined ***)this = (undefined **)&vftable_4;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    puVar5 = (undefined4 *)(iVar4 + iVar3 * 0xc);
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      do {
        puVar2 = puVar5 + -3;
        puVar5 = puVar5 + -3;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar5 = 0;
        }
      } while (iVar3 != 0);
      iVar4 = *piVar1;
    }
    port_op_delete(piVar1,iVar4 * 0xc + 4);
  }
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00493c80 Darray_util__LocStr_ ====


/* public: virtual  Darray_L_classutil__LocStr_G___dtor(void) */

void __thiscall
util__Darray_class_util__LocStr____Darray_class_util__LocStr(Darray_L_class_util__LocStr_G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_3;
  if (iVar5 != 0) {
    piVar1 = (int *)(iVar5 + -4);
    iVar4 = *piVar1;
    puVar3 = (undefined4 *)(iVar5 + iVar4 * 0x18);
    if (iVar4 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        puVar2 = puVar3 + -6;
        iVar4 = iVar4 + -1;
        if ((void *)puVar3[-3] != (void *)0x0) {
          port_op_delete((void *)puVar3[-3]);
          puVar3[-3] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        puVar3 = puVar2;
      } while (iVar4 != 0);
      iVar5 = *piVar1;
    }
    port_op_delete(piVar1,iVar5 * 0x18 + 4);
  }
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00493d10 BacklogMessage ====

/* public: __thiscall BacklogMessage___BacklogMessage(void) */

void __thiscall BacklogMessage___BacklogMessage(BacklogMessage *this)

{
  char *pcVar1;
  void *pvVar2;
  
  pcVar1 = (this->Message).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->Message).Data = (char *)0x0;
  }
  pcVar1 = (this->Header).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->Header).Data = (char *)0x0;
  }
  (this->IconColor)._pad_0x0_0 = (int)&vftable_5;
  pvVar2 = (void *)(this->IconColor)._pad_0x4_1;
  if (pvVar2 != (void *)0x0) {
    port_op_delete(pvVar2);
    (this->IconColor)._pad_0x4_1 = 0;
  }
  return;
}

//==== 00493d70 CraftSplinePoint ====


/* public: __thiscall CraftSplinePoint___CraftSplinePoint(void) */

void __thiscall CraftSplinePoint___CraftSplinePoint(CraftSplinePoint *this)

{
  *(undefined ***)this = (undefined **)&vftable_12;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 00493da0 operator_ ====


/* public: class util__Darray_L_structutil__Vec2_L_double_G__G_ &  util__Darray_L_struct_util__Vec2_L_double_G__G___op_assign(class util__Darray_L_structutil__Vec2_L_double_G__G_ const &) */

Darray_L_struct_util__Vec2_L_double_G___G_ * 
util__Darray_struct_util__Vec2_double_____operator
          (Darray_L_struct_util__Vec2_L_double_G___G_ *this,Darray_L_struct_util__Vec2_L_double_G___G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  pDVar5 = param_1;
  param_1 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  SetSize(this,(int *)&param_1);
  iVar6 = (**(code **)(*(int *)pDVar5 + 0xc))();
  if (iVar6 == 0) {
    (**(code **)(*(int *)this + 0x10))();
    return this;
  }
  uVar9 = *(uint *)(this + 8);
  if ((int)uVar9 < 0) {
    param_1 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
    SetSize(this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  if (0x3fffffff < (int)uVar9) {
    param_1 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x3fffffff;
    SetSize(this,(int *)&param_1);
    uVar9 = *(uint *)(this + 8);
  }
  uVar10 = *(uint *)(this + 0xc);
  if ((int)uVar10 < (int)uVar9) {
    if (uVar10 == 0) {
      *(uint *)(this + 0xc) = uVar9;
      uVar10 = uVar9;
    }
    if ((int)uVar10 < (int)uVar9) {
      do {
        uVar10 = uVar10 * 2;
      } while ((int)uVar10 < (int)uVar9);
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
             port_op_new(-(uint)((int)((ulonglong)uVar10 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar10 * 0x10));
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = puVar7;
      if (uVar10 != 0) {
        do {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0;
          uVar10 = uVar10 - 1;
          puVar8 = puVar8 + 4;
        } while (uVar10 != 0);
        *(undefined4 **)(this + 4) = puVar7;
        goto LAB_00493ebb;
      }
    }
    *(undefined4 **)(this + 4) = puVar7;
  }
  else {
    puVar7 = *(undefined4 **)(this + 4);
  }
LAB_00493ebb:
  puVar8 = *(undefined4 **)(pDVar5 + 4);
  if (puVar8 != puVar8 + *(int *)(pDVar5 + 8) * 4) {
    do {
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar8 = puVar8 + 4;
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
    } while (puVar8 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x10 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 00493f00 operator__00493f00 ====


/* public: class util__Str_L_char_G_ & __thiscall util__Str_char___operator__o8(class util__Str_L_char_G_ const
   &) */

Str_L_char_G_ * __thiscall util__Str_char___operator__o8(Str_L_char_G_ *this,Str_L_char_G_ *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar4 = this->Capacity;
  if (uVar4 != param_1->Capacity) {
    uVar4 = param_1->Capacity;
    if (this->Data != (char *)0x0) {
      port_op_delete(this->Data);
      this->Data = (char *)0x0;
      uVar4 = param_1->Capacity;
    }
    this->Capacity = uVar4;
    if (0 < (int)uVar4) {
      pcVar2 = (char *)port_op_new(uVar4);
      if (pcVar2 == (char *)0x0) {
        pcVar2 = (char *)0x0;
      }
      else {
        memset(pcVar2,0,uVar4);
      }
      uVar4 = this->Capacity;
      this->Data = pcVar2;
    }
  }
  this->Length = param_1->Length;
  if (0 < (int)uVar4) {
    if (param_1->Capacity < 1) {
      pcVar2 = "";
    }
    else {
      pcVar2 = param_1->Data;
    }
    pcVar3 = this->Data;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
      *pcVar3 = cVar1;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar2;
    }
    *pcVar3 = '\0';
  }
  return this;
}





//==== 00493fa0 operator___00493fa0 ====


/* public: virtual struct util__Line2_L_double_G_ &  util__Darray_L_structutil__Line2_L_double_G___G___op_subscript(int const &)const  */

Line2_L_double_G_ * 
util__Darray_struct_util__Line2_double_____operator__o2
          (Darray_L_struct_util__Line2_L_double_G___G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (Line2_L_double_G_ *)(iVar1 * 0x20 + *(int *)(this + 4));
}





//==== 00493ff0 operator___00493ff0 ====


/* public: virtual struct util__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G_ &  util__Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cdouble___thiscallutil__Reflectable___P__void_const_G__G___op_subscript(int const
   &)const  */

tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G_ * 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______operator__o3(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
             *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G_ *)
         (iVar1 * 0x10 + *(int *)(this + 4));
}





//==== 00494040 operator___00494040 ====


/* public: virtual struct util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G_ & 
   util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______operator__o2(int const
   &)const  */

tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
* 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______operator__o4(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
             *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
          *)(iVar1 * 0x30 + *(int *)(this + 4));
}





//==== 00494090 operator___00494090 ====


/* public: virtual struct Vertex &  util__Darray_L_structVertex_G___op_subscript(int const
   &)const  */

Vertex * __thiscall
util__Darray_struct_Vertex___operator__o3(Darray_L_struct_Vertex_G_ *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((iVar1 < 0) || (*(int *)(this + 8) <= iVar1)) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0xa0,
              "Index >= 0 && Index < Size",(char *)0x0);
    DebugBreak();
    iVar1 = *param_1;
  }
  return (Vertex *)(iVar1 * 0x2c + *(int *)(this + 4));
}





//==== 004940e0 operator__004940e0 ====


/* public: class util__Str_L_char_G_ __thiscall util__Str_char___operator(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * __thiscall
util__Str_char___operator(Str_L_char_G_ *this,Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  util__Str_char___Str_char(&SStack_14,this);
  if (SStack_14.Length == 0) {
    util__Str_char___operator__o8(&SStack_14,param_1);
  }
  else if (param_1->Length != 0) {
    SStack_14.Length = SStack_14.Length + param_1->Length;
    uVar6 = SStack_14.Length + 1;
    if (SStack_14.Capacity < (int)uVar6) {
      SStack_14.Capacity = uVar6;
      pcVar1 = (char *)port_op_new(uVar6);
      if (pcVar1 == (char *)0x0) {
        pcVar1 = (char *)0x0;
      }
      else {
        memset(pcVar1,0,uVar6);
      }
      if (param_1->Capacity < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = param_1->Data;
      }
      cVar3 = *SStack_14.Data;
      pcVar2 = pcVar1;
      if (cVar3 != '\0') {
        do {
          *pcVar2 = cVar3;
          pcVar2 = pcVar2 + 1;
          cVar3 = pcVar2[(int)SStack_14.Data - (int)pcVar1];
        } while (cVar3 != '\0');
      }
      cVar3 = *pcVar4;
      if (cVar3 != '\0') {
        iVar5 = (int)pcVar4 - (int)pcVar2;
        do {
          *pcVar2 = cVar3;
          pcVar2 = pcVar2 + 1;
          cVar3 = pcVar2[iVar5];
        } while (cVar3 != '\0');
      }
      *pcVar2 = '\0';
      port_op_delete(SStack_14.Data);
      SStack_14.Data = pcVar1;
    }
    else {
      cVar3 = *SStack_14.Data;
      pcVar1 = SStack_14.Data;
      while (cVar3 != '\0') {
        pcVar1 = pcVar1 + 1;
        cVar3 = *pcVar1;
      }
      if (param_1->Capacity < 1) {
        pcVar4 = "";
      }
      else {
        pcVar4 = param_1->Data;
      }
      cVar3 = *pcVar4;
      if (cVar3 != '\0') {
        iVar5 = (int)pcVar4 - (int)pcVar1;
        do {
          *pcVar1 = cVar3;
          pcVar1 = pcVar1 + 1;
          cVar3 = pcVar1[iVar5];
        } while (cVar3 != '\0');
      }
      *pcVar1 = '\0';
      pcVar1 = SStack_14.Data;
    }
    goto LAB_00494127;
  }
  pcVar1 = SStack_14.Data;
LAB_00494127:
  util__Str_char___Str_char(__return_storage_ptr__,&SStack_14);
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return __return_storage_ptr__;
}





//==== 00494230 operator___00494230 ====


/* public: class util__Str_L_char_G_ &  util__Str_char___operator__o10(class util__Str_L_char_G_
   const &) */

Str_L_char_G_ *  util__Str_char___operator__o10(Str_L_char_G_ *this,Str_L_char_G_ *param_1)

{
  Str_L_char_G_ *pSVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  
  if (this->Length == 0) {
    pSVar1 = (Str_L_char_G_ *)(uintptr_t)(util__Str_char___operator__o8(this,param_1));
  }
  if (param_1->Length != 0) {
    iVar2 = this->Length + param_1->Length;
    this->Length = iVar2;
    uVar3 = iVar2 + 1;
    if (this->Capacity < (int)uVar3) {
      this->Capacity = uVar3;
      pcVar4 = (char *)port_op_new(uVar3);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)0x0;
      }
      else {
        memset(pcVar4,0,uVar3);
      }
      if (param_1->Capacity < 1) {
        pcVar8 = "";
      }
      else {
        pcVar8 = param_1->Data;
      }
      pcVar7 = this->Data;
      cVar6 = *pcVar7;
      pcVar5 = pcVar4;
      while (cVar6 != '\0') {
        pcVar7 = pcVar7 + 1;
        *pcVar5 = cVar6;
        pcVar5 = pcVar5 + 1;
        cVar6 = *pcVar7;
      }
      cVar6 = *pcVar8;
      if (cVar6 != '\0') {
        iVar2 = (int)pcVar8 - (int)pcVar5;
        do {
          *pcVar5 = cVar6;
          pcVar5 = pcVar5 + 1;
          cVar6 = pcVar5[iVar2];
        } while (cVar6 != '\0');
      }
      *pcVar5 = '\0';
      port_op_delete(this->Data);
      this->Data = pcVar4;
      return this;
    }
    pcVar4 = this->Data;
    cVar6 = *pcVar4;
    while (cVar6 != '\0') {
      pcVar4 = pcVar4 + 1;
      cVar6 = *pcVar4;
    }
    if (param_1->Capacity < 1) {
      pcVar8 = "";
    }
    else {
      pcVar8 = param_1->Data;
    }
    cVar6 = *pcVar8;
    if (cVar6 != '\0') {
      iVar2 = (int)pcVar8 - (int)pcVar4;
      do {
        *pcVar4 = cVar6;
        pcVar4 = pcVar4 + 1;
        cVar6 = pcVar4[iVar2];
      } while (cVar6 != '\0');
    }
    *pcVar4 = '\0';
  }
  return this;
}





//==== 00494320 vector_deleting_destructor_00494320 ====

/* public: virtual void * __thiscall util__Darray_L_int_G_:: 0 vectordeletingdestructor(unsigned int)
    */

void * __thiscall util__Darray_int____vector_deleting_destructor(Darray_L_int_G_ *this,uint param_1)

{
  int *piVar1;
  Darray_L_int_G_ *pDVar2;
  Darray_L_int_G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    piVar1 = &this[-1].Capacity;
    iVar4 = *piVar1;
    pDVar3 = this + iVar4;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -1;
      iVar4 = iVar4 + -1;
      pDVar2->_pad_0x0_0 = (int)&vftable_11;
      if (pDVar3[-1].Data != (int *)0x0) {
        port_op_delete(pDVar3[-1].Data);
      }
      pDVar3[-1].Data = (int *)0x0;
      pDVar2->_pad_0x0_0 = (int)&vftable;
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(piVar1,*piVar1 * 0x10 + 4);
    }
    return &this[-1].Capacity;
  }
  this->_pad_0x0_0 = (int)&vftable_11;
  if (this->Data != (int *)0x0) {
    port_op_delete(this->Data);
  }
  this->Data = (int *)0x0;
  this->_pad_0x0_0 = (int)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}

//==== 004943e0 vector_deleting_destructor_004943e0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__Line2_L_double_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__Line2_double______vector_deleting_destructor
          (Darray_L_struct_util__Line2_L_double_G___G_ *this,uint param_1)

{
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar1;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar2;
  Darray_L_struct_util__Line2_L_double_G___G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = (undefined **)&vftable_13;
      if (*(void **)(pDVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(pDVar3 + -0xc));
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)&vftable;
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = (undefined **)&vftable_13;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 004944a0 vector_deleting_destructor_004944a0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__Vec2_L_double_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__Vec2_double______vector_deleting_destructor
          (Darray_L_struct_util__Vec2_L_double_G___G_ *this,uint param_1)

{
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar1;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar2;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = (undefined **)&vftable_12;
      if (*(void **)(pDVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(pDVar3 + -0xc));
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)&vftable;
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = (undefined **)&vftable_12;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00494560 vector_deleting_destructor_00494560 ====


/* public: virtual void * __thiscall util__Darray_L_structCraftSplinePoint_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_CraftSplinePoint____vector_deleting_destructor
          (Darray_L_struct_CraftSplinePoint_G_ *this,uint param_1)

{
  Darray_L_struct_CraftSplinePoint_G_ *pDVar1;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar2;
  void *pvVar3;
  Darray_L_struct_CraftSplinePoint_G_ *pDVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    iVar5 = *(int *)(this + -4);
    pDVar1 = this + -4;
    pDVar4 = this + iVar5 * 0x10;
    while (iVar5 != 0) {
      pvVar3 = *(void **)(pDVar4 + -0xc);
      pDVar2 = pDVar4 + -0x10;
      iVar5 = iVar5 + -1;
      *(undefined ***)pDVar2 = (undefined **)&vftable_14;
      if (pvVar3 != (void *)0x0) {
        _vector_destructor_iterator_
                  (pvVar3,0x18,*(uint *)((int)pvVar3 + -4),CraftSplinePoint___CraftSplinePoint);
        port_op_delete((int *)((int)pvVar3 + -4),*(int *)((int)pvVar3 + -4) * 0x18 + 4);
      }
      *(undefined4 *)(pDVar4 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)&vftable;
      pDVar4 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return pDVar1;
  }
  *(undefined ***)this = (undefined **)&vftable_14;
  if (*(CraftSplinePoint **)(this + 4) != (CraftSplinePoint *)0x0) {
    CraftSplinePoint___vector_deleting_destructor(*(CraftSplinePoint **)(this + 4),3);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00494640 vector_deleting_destructor_00494640 ====


/* public: void * __thiscall BacklogMessage:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall BacklogMessage___vector_deleting_destructor(BacklogMessage *this,uint param_1)

{
  int *piVar1;
  Str_L_char_G_ *pSVar2;
  int iVar3;
  
  if ((param_1 & 2) == 0) {
    BacklogMessage___BacklogMessage(this);
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x44);
    }
  }
  else {
    piVar1 = &this[-1].Count;
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      pSVar2 = &this[iVar3].Message;
      do {
        iVar3 = iVar3 + -1;
        if (*(void **)((int)(pSVar2 + -6) + 4) != (void *)0x0) {
          port_op_delete(*(void **)((int)(pSVar2 + -6) + 4));
          *(undefined4 *)((int)(pSVar2 + -6) + 4) = 0;
        }
        if (*(void **)((int)(pSVar2 + -7) + 4) != (void *)0x0) {
          port_op_delete(*(void **)((int)(pSVar2 + -7) + 4));
          *(undefined4 *)((int)(pSVar2 + -7) + 4) = 0;
        }
        *(undefined ***)((int)(pSVar2 + -10) + 8) = &vftable_5;
        if (pSVar2[-9].Data != (void *)0x0) {
          port_op_delete(pSVar2[-9].Data);
          pSVar2[-9].Data = 0;
        }
        pSVar2 = (Str_L_char_G_ *)((int)(pSVar2 + -6) + 4);
      } while (iVar3 != 0);
    }
    this = (BacklogMessage *)piVar1;
    if ((param_1 & 1) != 0) {
      port_op_delete(piVar1,*piVar1 * 0x44 + 4);
      return piVar1;
    }
  }
  return this;
}





//==== 00494710 vector_deleting_destructor_00494710 ====


/* public: void * __thiscall CraftSplinePoint:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall
CraftSplinePoint___vector_deleting_destructor(CraftSplinePoint *this,uint param_1)

{
  CraftSplinePoint *pCVar1;
  CraftSplinePoint *pCVar2;
  CraftSplinePoint *pCVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pCVar1 = this + -4;
    iVar4 = *(int *)pCVar1;
    pCVar3 = this + iVar4 * 0x18;
    while (iVar4 != 0) {
      pCVar2 = pCVar3 + -0x18;
      iVar4 = iVar4 + -1;
      *(undefined ***)pCVar2 = (undefined **)&vftable_12;
      if (*(void **)(pCVar3 + -0x14) != (void *)0x0) {
        port_op_delete(*(void **)(pCVar3 + -0x14));
      }
      *(undefined4 *)(pCVar3 + -0x14) = 0;
      *(undefined ***)pCVar2 = (undefined **)&vftable;
      pCVar3 = pCVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pCVar1,*(int *)pCVar1 * 0x18 + 4);
    }
    return pCVar1;
  }
  *(undefined ***)this = (undefined **)&vftable_12;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x18);
  }
  return this;
}





//==== 004947c0 vector_deleting_destructor_004947c0 ====


/* public: void * __thiscall InfoBox:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall InfoBox___vector_deleting_destructor(InfoBox *this,uint param_1)

{
  bool *pbVar1;
  int iVar2;
  char *pcVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  
  if ((param_1 & 2) == 0) {
    pcVar3 = (this->Tooltip).Value.Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Tooltip).Value.Data = (char *)0x0;
    }
    pcVar3 = (this->Info).Value.Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Info).Value.Data = (char *)0x0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x38);
    }
  }
  else {
    pbVar1 = &this[-1].IsVisible.Value;
    iVar5 = *(int *)pbVar1;
    if (iVar5 != 0) {
      pSVar4 = &this[iVar5].Info.Value;
      do {
        iVar2 = (int)(pSVar4 + -5) + 4;
        iVar5 = iVar5 + -1;
        if (pSVar4[-3].Data != (void *)0x0) {
          port_op_delete(pSVar4[-3].Data);
          pSVar4[-3].Data = 0;
        }
        if (*(void **)iVar2 != (void *)0x0) {
          port_op_delete(*(void **)iVar2);
          *(undefined4 *)iVar2 = 0;
        }
        pSVar4 = (Str_L_char_G_ *)iVar2;
      } while (iVar5 != 0);
    }
    this = (InfoBox *)pbVar1;
    if ((param_1 & 1) != 0) {
      port_op_delete(pbVar1,*(int *)pbVar1 * 0x38 + 4);
      return pbVar1;
    }
  }
  return this;
}





//==== 004948a0 vector_deleting_destructor_004948a0 ====


/* public: void * __thiscall LevelRecordMetadata:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall
LevelRecordMetadata___vector_deleting_destructor(LevelRecordMetadata *this,uint param_1)

{
  bool *pbVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    pbVar1 = &this[-1].LessIsBetter;
    iVar5 = *(int *)pbVar1;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)((int)this + iVar5 * 0x2c + 0x10);
      do {
        puVar2 = puVar4 + -0xb;
        iVar5 = iVar5 + -1;
        if ((void *)puVar4[-8] != (void *)0x0) {
          port_op_delete((void *)puVar4[-8]);
          puVar4[-8] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        if ((void *)puVar4[-0xe] != (void *)0x0) {
          port_op_delete((void *)puVar4[-0xe]);
          puVar4[-0xe] = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pbVar1,*(int *)pbVar1 * 0x2c + 4);
    }
    return pbVar1;
  }
  if (*(void **)&this->LessIsBetter != (void *)0x0) {
    port_op_delete(*(void **)&this->LessIsBetter);
    this->LessIsBetter = false;
    this->CombatOnly = false;
    this->DeltaVOnly = false;
    this->PrecisionCombatOnly = false;
  }
  pcVar3 = (this->Tooltip).Data;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
    (this->Tooltip).Data = (char *)0x0;
  }
  pcVar3 = (this->Name).Data;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
    (this->Name).Data = (char *)0x0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x2c);
  }
  return this;
}





//==== 00494990 vector_deleting_destructor_00494990 ====


/* public: void * __thiscall LevelSpeakerMessage:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall
LevelSpeakerMessage___vector_deleting_destructor(LevelSpeakerMessage *this,uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((param_1 & 2) == 0) {
    if (this[1].Talker != (Speaker *)0x0) {
      port_op_delete(this[1].Talker);
      this[1].Talker = (Speaker *)0x0;
    }
    pcVar3 = (this->Message).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Message).Data = (char *)0x0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x1c);
    }
  }
  else {
    piVar1 = &this[-1].Message.Length;
    iVar5 = *piVar1;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)((int)this + iVar5 * 0x1c + 4);
      do {
        puVar2 = puVar4 + -7;
        iVar5 = iVar5 + -1;
        if ((void *)puVar4[-4] != (void *)0x0) {
          port_op_delete((void *)puVar4[-4]);
          puVar4[-4] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
    }
    this = (LevelSpeakerMessage *)piVar1;
    if ((param_1 & 1) != 0) {
      port_op_delete(piVar1,*piVar1 * 0x1c + 4);
      return piVar1;
    }
  }
  return this;
}





//==== 00494a70 vector_deleting_destructor_00494a70 ====


/* public: void * __thiscall LevelTutorialMessage:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall
LevelTutorialMessage___vector_deleting_destructor(LevelTutorialMessage *this,uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    piVar1 = &this[-1].Message.Length;
    iVar5 = *piVar1;
    if (iVar5 != 0) {
      puVar4 = (undefined4 *)((int)this + iVar5 * 0x28 + 0x10);
      do {
        puVar2 = puVar4 + -10;
        iVar5 = iVar5 + -1;
        if ((void *)puVar4[-7] != (void *)0x0) {
          port_op_delete((void *)puVar4[-7]);
          puVar4[-7] = 0;
        }
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar2 = 0;
        }
        if ((void *)puVar4[-0xd] != (void *)0x0) {
          port_op_delete((void *)puVar4[-0xd]);
          puVar4[-0xd] = 0;
        }
        puVar4 = puVar2;
      } while (iVar5 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(piVar1,*piVar1 * 0x28 + 4);
    }
    return piVar1;
  }
  if (this[1].Talker != (Speaker *)0x0) {
    port_op_delete(this[1].Talker);
    this[1].Talker = (Speaker *)0x0;
  }
  pcVar3 = (this->Message).Data;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
    (this->Message).Data = (char *)0x0;
  }
  pcVar3 = (this->TutorialTag).Data;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
    (this->TutorialTag).Data = (char *)0x0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x28);
  }
  return this;
}





//==== 00494b70 vector_deleting_destructor_00494b70 ====


/* public: void * __thiscall StructureCost:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall StructureCost___vector_deleting_destructor(StructureCost *this,uint param_1)

{
  int *piVar1;
  StructureCost *pSVar2;
  char *pcVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    pcVar3 = (this->Label).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Label).Data = (char *)0x0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x18);
    }
    return this;
  }
  piVar1 = (int *)((int)&this[-1].Cost_c + 4);
  iVar4 = *piVar1;
  pSVar2 = this + iVar4;
  while (iVar4 != 0) {
    pcVar3 = pSVar2[-1].Label.Data;
    pSVar2 = pSVar2 + -1;
    iVar4 = iVar4 + -1;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (pSVar2->Label).Data = (char *)0x0;
    }
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(piVar1,*piVar1 * 0x18 + 4);
  }
  return piVar1;
}





//==== 00494c10 vector_deleting_destructor_00494c10 ====


/* public: void * __thiscall ResearchReference:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall
ResearchReference___vector_deleting_destructor(ResearchReference *this,uint param_1)

{
  int *piVar1;
  ResearchReference *pRVar2;
  char *pcVar3;
  ResearchReference *pRVar4;
  int iVar5;
  
  if ((param_1 & 2) == 0) {
    pcVar3 = (this->ExtraInfo).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->ExtraInfo).Data = (char *)0x0;
    }
    pcVar3 = (this->Title).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Title).Data = (char *)0x0;
    }
    pcVar3 = (this->Authors).Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (this->Authors).Data = (char *)0x0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x24);
    }
    return this;
  }
  piVar1 = &this[-1].ExtraInfo.Length;
  iVar5 = *piVar1;
  pRVar4 = this + iVar5;
  while (iVar5 != 0) {
    pcVar3 = pRVar4[-1].ExtraInfo.Data;
    pRVar2 = pRVar4 + -1;
    iVar5 = iVar5 + -1;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      pRVar4[-1].ExtraInfo.Data = (char *)0x0;
    }
    pcVar3 = pRVar4[-1].Title.Data;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      pRVar4[-1].Title.Data = (char *)0x0;
    }
    pcVar3 = (pRVar2->Authors).Data;
    pRVar4 = pRVar2;
    if (pcVar3 != (char *)0x0) {
      port_op_delete(pcVar3);
      (pRVar2->Authors).Data = (char *)0x0;
    }
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(piVar1,*piVar1 * 0x24 + 4);
  }
  return piVar1;
}





//==== 00494d10 vector_deleting_destructor_00494d10 ====


/* public: void * __thiscall SpeakerMessage:: 0 vectordeletingdestructor(unsigned int) */

void * __thiscall SpeakerMessage___vector_deleting_destructor(SpeakerMessage *this,uint param_1)

{
  bool *pbVar1;
  int iVar2;
  char *pcVar3;
  Str_L_char_G_ *pSVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    pbVar1 = &this[-1].SlowPrint;
    iVar5 = *(int *)pbVar1;
    if (iVar5 != 0) {
      pSVar4 = &this[iVar5].AudioTrack;
      do {
        iVar2 = (int)(pSVar4 + -5) + 8;
        iVar5 = iVar5 + -1;
        if (*(void **)((int)(pSVar4 + -4) + 8) != (void *)0x0) {
          port_op_delete(*(void **)((int)(pSVar4 + -4) + 8));
          *(undefined4 *)((int)(pSVar4 + -4) + 8) = 0;
        }
        if (*(void **)iVar2 != (void *)0x0) {
          port_op_delete(*(void **)iVar2);
          *(undefined4 *)iVar2 = 0;
        }
        if (*(void **)((int)(pSVar4 + -6) + 8) != (void *)0x0) {
          port_op_delete(*(void **)((int)(pSVar4 + -6) + 8));
          *(undefined4 *)((int)(pSVar4 + -6) + 8) = 0;
        }
        pSVar4 = (Str_L_char_G_ *)iVar2;
      } while (iVar5 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pbVar1,*(int *)pbVar1 * 0x34 + 4);
    }
    return pbVar1;
  }
  pcVar3 = (this->TutorialTag).Data.Data;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
    (this->TutorialTag).Data.Data = (char *)0x0;
  }
  pcVar3 = (this->AudioTrack).Data;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
    (this->AudioTrack).Data = (char *)0x0;
  }
  pcVar3 = (this->Message).Data;
  if (pcVar3 != (char *)0x0) {
    port_op_delete(pcVar3);
    (this->Message).Data = (char *)0x0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x34);
  }
  return this;
}





//==== 00494e00 scalar_deleting_destructor_00494e00 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble____thiscallutil__Reflectable___P__void_const_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
           *this,uint param_1)

{
  util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00494e30 scalar_deleting_destructor_00494e30 ====


/* public: virtual void * __thiscall util__Darray_L_structColorTexVertex_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_ColorTexVertex____scalar_deleting_destructor
          (Darray_L_struct_ColorTexVertex_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_10;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00494e80 scalar_deleting_destructor_00494e80 ====


/* public: virtual void * __thiscall util__Darray_L_structIndexedFace_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_IndexedFace____scalar_deleting_destructor
          (Darray_L_struct_IndexedFace_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_9;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00494ed0 scalar_deleting_destructor_00494ed0 ====


/* public: virtual void * __thiscall util__Darray_L_structVertex_G_:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
util__Darray_struct_Vertex____scalar_deleting_destructor(Darray_L_struct_Vertex_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_8;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 00494f20 scalar_deleting_destructor_00494f20 ====

/* public: virtual void * __thiscall util__Reflectable:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall util__Reflectable___scalar_deleting_destructor(Reflectable *this,uint param_1)

{
  char *pcVar1;
  
  this->_pad_0x0_0 = (int)&vftable_5;
  pcVar1 = (this->Name).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->Name).Data = (char *)0x0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}

//==== 00494f60 scalar_deleting_destructor_00494f60 ====

/* public: virtual void * __thiscall SpacecraftShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
SpacecraftShader___scalar_deleting_destructor(SpacecraftShader *this,uint param_1)

{
  if ((void *)this[1]._pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this[1]._pad_0x4_1);
    this[1]._pad_0x4_1 = 0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,200);
  }
  return this;
}

//==== 00494fb0 CheckSize ====


/* private: bool  util__Darray_L_enumGraphicsResource__Type_G___CheckSize(int) */

bool 
util__Darray_enum_GraphicsResource__Type___CheckSize
          (Darray_L_enum_GraphicsResource__Type_G_ *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar8 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar8;
  bVar3 = !bVar9;
  if (bVar3) {
    puStack_c = (undefined4 *)0x0;
    Darray_L_class_util__Reflectable_P_G___SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar3;
  bVar3 = (int)uVar8 < 0x40000000;
  if (!bVar3) {
    puStack_c = (undefined4 *)0x3fffffff;
    Darray_L_class_util__Reflectable_P_G___SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)this,(int *)&puStack_c);
    uVar8 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar4 = *(uint *)(this + 0xc);
  if ((int)uVar8 <= (int)uVar4) {
    return bVar3 && bVar9;
  }
  if (uVar4 == 0) {
    *(uint *)(this + 0xc) = uVar8;
    uVar4 = uVar8;
  }
  if ((int)uVar4 < (int)uVar8) {
    do {
      uVar4 = uVar4 * 2;
    } while ((int)uVar4 < (int)uVar8);
    *(uint *)(this + 0xc) = uVar4;
  }
  if (0x3fffffff < (int)uVar4) {
    *(undefined4 *)(this + 0xc) = 0x3fffffff;
    uVar4 = 0x3fffffff;
  }
  uVar8 = -(uint)((int)((ulonglong)uVar4 * 4 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 4);
  puVar5 = (undefined4 *)port_op_new(uVar8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
    puStack_c = (undefined4 *)0x0;
  }
  else {
    puStack_c = puVar5;
    memset(puVar5,0,uVar8);
  }
  puVar6 = *(undefined4 **)(this + 4);
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = puVar5 + *(int *)(this + 8);
    puVar7 = puVar6;
    if (puVar6 != puVar6 + param_1) {
      do {
        if (puVar5 == puVar1) break;
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar2;
        puVar5 = puVar5 + 1;
        puVar6 = *(undefined4 **)(this + 4);
      } while (puVar7 != puVar6 + param_1);
    }
    port_op_delete(puVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 004950e0 CheckSize_004950e0 ====


/* private: bool  util__Stack_L_structutil__tuple2_L_unsignedint_CenumTextureType__Type_G___G___CheckSize(int) */

bool 
util__Stack_struct_util__tuple2_unsigned_int_enum_TextureType__Type_____CheckSize
          (Stack_L_struct_util__tuple2_L_unsigned_int_Cenum_TextureType__Type_G___G_ *this,int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  bool bVar10;
  bool bStack_5;
  
  uVar6 = *(uint *)(this + 4);
  bVar10 = -1 < (int)uVar6;
  if (!bVar10) {
    *(undefined4 *)(this + 0xc) = *(undefined4 *)this;
    *(undefined4 *)(this + 4) = 0;
    uVar6 = 0;
  }
  bVar3 = (int)uVar6 < 0x40000000;
  bVar4 = !bVar3;
  if (bVar4) {
    *(undefined4 *)(this + 4) = 0x3fffffff;
    *(int *)(this + 0xc) = *(int *)this + -8;
    uVar6 = 0x3fffffff;
  }
  bStack_5 = !bVar4 && bVar10;
  uVar9 = *(uint *)(this + 8);
  if ((int)uVar6 <= (int)uVar9) {
    return bVar3 && bVar10;
  }
  if (uVar9 == 0) {
    *(uint *)(this + 8) = uVar6;
    uVar9 = uVar6;
  }
  if ((int)uVar9 < (int)uVar6) {
    do {
      uVar9 = uVar9 * 2;
    } while ((int)uVar9 < (int)uVar6);
    *(uint *)(this + 8) = uVar9;
  }
  if (0x3fffffff < (int)uVar9) {
    *(undefined4 *)(this + 8) = 0x3fffffff;
    uVar9 = 0x3fffffff;
  }
  puVar8 = (undefined4 *)0x0;
  if (0 < (int)uVar9) {
    puVar8 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar9 * 8 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar9 * 8));
    puVar7 = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      for (; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7 = puVar7 + 2;
      }
    }
    iVar2 = *(int *)(this + 4);
    puVar7 = *(undefined4 **)this;
    puVar5 = puVar8;
    if (puVar7 != puVar7 + param_1 * 2) {
      do {
        if (puVar5 == puVar8 + iVar2 * 2) break;
        *puVar5 = *puVar7;
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 2;
        puVar5[1] = *puVar1;
        puVar5 = puVar5 + 2;
      } while (puVar7 != (undefined4 *)(*(int *)this + param_1 * 8));
    }
  }
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
  }
  *(undefined4 **)this = puVar8;
  *(undefined4 **)(this + 0xc) = puVar8 + *(int *)(this + 4) * 2;
  return bStack_5;
}





//==== 00495220 CheckSizeDestructive ====


/* private: bool  util__Darray_L_structutil__Vec2_L_double_G__G___CheckSizeDestructive(void) */

bool 
util__Darray_struct_util__Vec2_double_____CheckSizeDestructive
          (Darray_L_struct_util__Vec2_L_double_G___G_ *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  bool bVar6;
  Darray_L_struct_util__Vec2_L_double_G___G_ *pDStack_8;
  
  uVar3 = *(uint *)(this + 8);
  bVar6 = -1 < (int)uVar3;
  pDStack_8 = this;
  if (!bVar6) {
    pDStack_8 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x0;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar4 = (int)uVar3 < 0x40000000;
  if (!bVar4) {
    pDStack_8 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)0x3fffffff;
    SetSize(this,(int *)&pDStack_8);
    uVar3 = *(uint *)(this + 8);
  }
  bVar4 = bVar4 && bVar6;
  uVar5 = *(uint *)(this + 0xc);
  if ((int)uVar5 < (int)uVar3) {
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
    if (*(void **)(this + 4) != (void *)0x0) {
      port_op_delete(*(void **)(this + 4));
      uVar5 = *(uint *)(this + 0xc);
    }
    *(undefined4 *)(this + 4) = 0;
    puVar1 = (undefined4 *)
             port_op_new(-(uint)((int)((ulonglong)uVar5 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)uVar5 * 0x10));
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar2 = puVar1;
      if (uVar5 != 0) {
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          uVar5 = uVar5 - 1;
          puVar2 = puVar2 + 4;
        } while (uVar5 != 0);
        *(undefined4 **)(this + 4) = puVar1;
        return bVar4;
      }
    }
    *(undefined4 **)(this + 4) = puVar1;
  }
  return bVar4;
}





//==== 00495320 Clear_00495320 ====


/* public: virtual void  util__Darray_L_structutil__Line2_L_double_G__G___Clear(void) */

void __thiscall
util__Darray_struct_util__Line2_double_____Clear(Darray_L_struct_util__Line2_L_double_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00495340 Clear_00495340 ====


/* public: virtual void  util__Darray_L_structutil__Vec2_L_double_G__G___Clear(void) */

void __thiscall
util__Darray_struct_util__Vec2_double_____Clear(Darray_L_struct_util__Vec2_L_double_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00495360 Clear_00495360 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble____thiscallutil__Reflectable___P__void_const_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______Clear(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
        *this)

{
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_14;
  undefined4 uStack_8;
  
  if (0 < *(int *)(this + 8)) {
    this_00 = *(Str_L_char_G_ **)(this + 4);
    if ((this_00 != (Str_L_char_G_ *)0x0) &&
       (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x10 + (int)this_00))) {
      SStack_14.Data = (char *)0x0;
      SStack_14.Capacity = 0;
      SStack_14.Length = 0;
      uStack_8 = 0;
      do {
        util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_14);
        this_00[1].Data = (char *)0x0;
        this_00 = (Str_L_char_G_ *)&this_00[1].Capacity;
      } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
    }
    *(undefined4 *)(this + 8) = 0;
    return;
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 004953e0 Clear_004953e0 ====


/* public: virtual void  util__Darray_L_structColorTexVertex_G___Clear(void) */

void __thiscall util__Darray_struct_ColorTexVertex___Clear(Darray_L_struct_ColorTexVertex_G_ *this)

{
  undefined4 *puVar1;
  
  if (((0 < *(int *)(this + 8)) &&
      (puVar1 = *(undefined4 **)(this + 4), puVar1 != (undefined4 *)0x0)) &&
     (puVar1 != puVar1 + *(int *)(this + 8) * 0xc)) {
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1 = puVar1 + 0xc;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  *(undefined4 *)(this + 8) = 0;
  return;
}





//==== 00495460 Clear_00495460 ====


/* public: virtual void  util__Darray_L_structCraftSplinePoint_G___Clear(void) */

void __thiscall util__Darray_struct_CraftSplinePoint___Clear(Darray_L_struct_CraftSplinePoint_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 00495480 Clear_00495480 ====


/* public: virtual void  util__Darray_L_structIndexedFace_G___Clear(void) */

void __thiscall util__Darray_struct_IndexedFace___Clear(Darray_L_struct_IndexedFace_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 004954a0 Clear_004954a0 ====


/* public: virtual void  util__Darray_L_structMaterialConstituent_G___Clear(void) */

void __thiscall
util__Darray_struct_MaterialConstituent___Clear(Darray_L_struct_MaterialConstituent_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 004954c0 Clear_004954c0 ====


/* public: virtual void  util__Darray_L_structVertex_G___Clear(void) */

void __thiscall util__Darray_struct_Vertex___Clear(Darray_L_struct_Vertex_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 004954e0 GetDefaultSetters ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   SpacecraftShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl SpacecraftShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_32495244__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_32495244__thread_safe_static_guard_0__);
    if ( cde_l2_32495244__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_c4a95b99_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_c4a95b99_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_c4a95b99_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_32495244__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_c4a95b99_DefaultSetters;
}





//==== 00495570 GetMutuallyExclusiveProperties ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   util__Reflectable__GetMutuallyExclusiveProperties(void)const  */

void __thiscall util__Reflectable__GetMutuallyExclusiveProperties(Reflectable *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_4);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 004955a0 GetLegacyValueReplacement ====


/* public: virtual class util__Str_L_char_G_ 
   util__Reflectable__GetLegacyValueReplacement(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
util__Reflectable__GetLegacyValueReplacement
          (Reflectable *this,Str_L_char_G_ *__return_storage_ptr__,Str_L_char_G_ *param_1)

{
  __return_storage_ptr__->Data = (char *)0x0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->Length = 0;
  return __return_storage_ptr__;
}





//==== 004955c0 GetReflectionDependencies ====


/* public: virtual class util__Darray_L_classutil__Reflectable_P_G_ __thiscall
   util__Reflectable__GetReflectionDependencies(void)const  */

void __thiscall util__Reflectable__GetReflectionDependencies(Reflectable *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)(&vftable_6);
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 004955f0 GetResourceTypeName ====


/* public: virtual class util__Str_L_char_G_ __thiscall Shader__GetResourceTypeName(void)const  */

Str_L_char_G_ * __thiscall Shader__GetResourceTypeName(Shader *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char__o5(__return_storage_ptr__,"Shader");
  return __return_storage_ptr__;
}





//==== 00495610 GetSearchString ====


/* public: virtual class util__Str_L_char_G_ __thiscall util__Reflectable__GetSearchString(void)const
    */

Str_L_char_G_ * __thiscall
util__Reflectable__GetSearchString(Reflectable *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,&this->Name);
  return __return_storage_ptr__;
}





//==== 00495630 Print ====

/* public: virtual class util__Str_L_char_G_ __thiscall util__Reflectable__Print(void)const  */

Str_L_char_G_ * __thiscall util__Reflectable__Print(Reflectable *this,Str_L_char_G_ *__return_storage_ptr__)

{
  (**(code **)(this->_pad_0x0_0 + 0x48))(__return_storage_ptr__);
  return __return_storage_ptr__;
}

//==== 00495650 GetStatic ====


/* public: static class SpacecraftShader * __cdecl SpacecraftShader__GetStatic(void) */

SpacecraftShader * __cdecl SpacecraftShader__GetStatic(void)

{
  SpacecraftShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_90d9eb4a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_9c8903ed__thread_safe_static_guard_0__);
    if ( cde_l2_9c8903ed__thread_safe_static_guard_0__ == -1) {
      this = (SpacecraftShader *)port_op_new(200);
      if (this == (SpacecraftShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,200);
        pSVar1 = (Shader *)SpacecraftShader__SpacecraftShader(this);
      }
       cde_l2_701edb63_Singleton = (SpacecraftShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_9c8903ed__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_701edb63_Singleton;
}





//==== 004956e0 GetTextureID ====


/* public: class util__Maybe_L_int_G_ __thiscall GameModel__GetTextureID(void)const  */

Maybe_L_int_G_ __thiscall GameModel__GetTextureID(GameModel *this)

{
  bool bVar1;
  int iVar2;
  Maybe_L_int_G_ MVar3;
  int *in_stack_00000004;
  
  iVar2 = (this->TextureID).Data;
  bVar1 = (this->TextureID).IsValidData;
  *in_stack_00000004 = iVar2;
  *(bool *)(in_stack_00000004 + 1) = bVar1;
  (*(uint32_t*)((char*)&(MVar3)+4)) = iVar2;
  MVar3.Data = (int)in_stack_00000004;
}





//==== 00495700 GetValueLocations ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   SpacecraftShader__GetValueLocations(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl SpacecraftShader__GetValueLocations(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_07fb21ce__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_07fb21ce__thread_safe_static_guard_0__);
    if ( cde_l2_07fb21ce__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_beb2677f_ValueLocations), 0, 12); *(unsigned int *)(void *)&(cde_l2_beb2677f_ValueLocations) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_beb2677f_ValueLocations.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShader__GetValueLocations_void______l2___dynamic_atexit_destructor_for__ValueLocations);
      _Init_thread_footer(& cde_l2_07fb21ce__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_beb2677f_ValueLocations;
}





//==== 00495790 GetVertexObject ====


/* public: class VertexBufferObject * __thiscall GameModel__GetVertexObject(void) */

VertexBufferObject * __thiscall GameModel__GetVertexObject(GameModel *this)

{
  return &this->VertexObject;
}





//==== 004957a0 should_initialize_environment ====


bool __cdecl _should_initialize_environment(void)

{
  return true;
}





//==== 004957b0 RequirePropertyBoundaries ====


/* public: virtual bool __thiscall util__Reflectable__RequirePropertyBoundaries(void)const  */

bool __thiscall util__Reflectable__RequirePropertyBoundaries(Reflectable *this)

{
  return false;
}





//==== 004957c0 IsPropertyReadOnly ====


/* public: virtual bool __thiscall util__Reflectable__IsPropertyReadOnly(struct util__ClassMember
   const &)const  */

bool __thiscall util__Reflectable__IsPropertyReadOnly(Reflectable *this,ClassMember *param_1)

{
  return false;
}





//==== 004957d0 Last_004957d0 ====


/* public: virtual struct util__Line2_L_double_G_ &  util__Darray_L_structutil__Line2_L_double_G___G___Last(void) */

Line2_L_double_G_ * __thiscall
util__Darray_struct_util__Line2_double_____Last(Darray_L_struct_util__Line2_L_double_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (Line2_L_double_G_ *)(*(int *)(this + 4) + -0x20 + iVar1 * 0x20);
}





//==== 00495810 Last_00495810 ====


/* public: virtual struct util__Line2_L_double_G_ const &  util__Darray_L_struct_util__Line2_L_double_G__G___Last(void)const  */

Line2_L_double_G_ * 
util__Darray_struct_util__Line2_double_____Last__o3(Darray_L_struct_util__Line2_L_double_G___G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (Line2_L_double_G_ *)(*(int *)(this + 4) + -0x20 + iVar1 * 0x20);
}





//==== 00495850 Last_00495850 ====


/* public: virtual struct util__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G_ &  util__Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cdouble___thiscallutil__Reflectable___P__void_const_G__G___Last(void) */

tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G_ * 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______Last(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G_ *)
         (*(int *)(this + 4) + -0x10 + iVar1 * 0x10);
}





//==== 00495890 Last_00495890 ====


/* public: virtual struct util__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G_ const &  util__Darray_L_structutil__tuple2_L_class_util__Str_L_char_G__Cdouble___thiscallutil__Reflectable___P__void_const_G__G___Last(void)const  */

tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G_ * 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______Last__o3(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G_ *)
         (*(int *)(this + 4) + -0x10 + iVar1 * 0x10);
}





//==== 004958d0 Last_004958d0 ====


/* public: virtual struct util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G_ & 
   util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______Last(void) */

tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
* 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______Last__o2(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
          *)(*(int *)(this + 4) + -0x30 + iVar1 * 0x30);
}





//==== 00495910 Last_00495910 ====


/* public: virtual struct util__tuple5_L_void___cdecl_P__void__Cclassutil__Str_L_char_G__Cclass_util__Str_L_char_G__Cclassutil__Delegate_L_void_G__Cclassutil__Str_L_char_G__G_ const & 
   util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______Last(void)const  */

tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
* 
util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__class_util__Delegate_void__class_util__Str_char_______Last__o3(Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G___G_
       *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cclass_util__Delegate_L_void_G__Cclass_util__Str_L_char_G___G_
          *)(*(int *)(this + 4) + -0x30 + iVar1 * 0x30);
}





//==== 00495950 Last_00495950 ====


/* public: virtual struct Vertex &  util__Darray_L_structVertex_G___Last(void) */

Vertex * __thiscall util__Darray_struct_Vertex___Last(Darray_L_struct_Vertex_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3c,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (Vertex *)(*(int *)(this + 4) + -0x2c + iVar1 * 0x2c);
}





//==== 00495990 Last_00495990 ====


/* public: virtual struct Vertex const &  util__Darray_L_structVertex_G___Last(void)const  */

Vertex *  util__Darray_struct_Vertex___Last__o3(Darray_L_struct_Vertex_G_ *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 < 1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3d,"Size > 0",
              (char *)0x0);
    DebugBreak();
    iVar1 = *(int *)(this + 8);
  }
  return (Vertex *)(*(int *)(this + 4) + -0x2c + iVar1 * 0x2c);
}





//==== 004959d0 LoadArmorTextureScaleLocation ====

/* private: static void __cdecl SpacecraftShader__LoadArmorTextureScaleLocation(void) */

void __cdecl SpacecraftShader__LoadArmorTextureScaleLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "ArmorTextureScale";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->ArmorTextureScaleRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->ArmorTextureScaleRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ArmorTextureScale."
                   );
    DebugBreak();
  }
  pSVar1 = SpacecraftShader__GetStatic();
  local_c = 0x3f800000;
  local_8 = 0x3f800000;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x78))(&local_c);
  return;
}

//==== 00495a60 LoadBlackbodyRadiationPeakTemperature_KLocation ====

/* private: static void __cdecl
   SpacecraftShader__LoadBlackbodyRadiationPeakTemperature_KLocation(void) */

void __cdecl SpacecraftShader__LoadBlackbodyRadiationPeakTemperature_KLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  double dVar4;
  char *pcVar5;
  float local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar5 = "BlackbodyRadiationPeakTemperature_K";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar5);
  (pSVar1->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BlackbodyRadiationPeakTemperature_K."
                   );
    DebugBreak();
  }
  dVar4 = GetBlackbodyTexturePeakTemperature_K();
  local_8 = (float)dVar4;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 00495ae0 LoadBlackbodyRadiationTextureLocation ====

/* private: static void __cdecl SpacecraftShader__LoadBlackbodyRadiationTextureLocation(void) */

void __cdecl SpacecraftShader__LoadBlackbodyRadiationTextureLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "BlackbodyRadiationTexture";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->BlackbodyRadiationTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->BlackbodyRadiationTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: BlackbodyRadiationTexture."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 00495b60 LoadCameraPositionLocation ====

/* private: static void __cdecl SpacecraftShader__LoadCameraPositionLocation(void) */

void __cdecl SpacecraftShader__LoadCameraPositionLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "CameraPosition";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->CameraPositionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->CameraPositionRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: CameraPosition.");
    DebugBreak();
  }
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0xc0))(&local_10);
  return;
}

//==== 00495bf0 LoadDamageTextureLocation ====

/* private: static void __cdecl SpacecraftShader__LoadDamageTextureLocation(void) */

void __cdecl SpacecraftShader__LoadDamageTextureLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "DamageTexture";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->DamageTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->DamageTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DamageTexture.");
    DebugBreak();
  }
  local_8 = 2;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 00495c70 LoadDamagedArmorTextureLocation ====

/* private: static void __cdecl SpacecraftShader__LoadDamagedArmorTextureLocation(void) */

void __cdecl SpacecraftShader__LoadDamagedArmorTextureLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "DamagedArmorTexture";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->DamagedArmorTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->DamagedArmorTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DamagedArmorTexture."
                   );
    DebugBreak();
  }
  local_8 = 3;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 00495cf0 LoadDiffuseColorLocation ====

/* private: static void __cdecl SpacecraftShader__LoadDiffuseColorLocation(void) */

void __cdecl SpacecraftShader__LoadDiffuseColorLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "DiffuseColor";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->DiffuseColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->DiffuseColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: DiffuseColor.");
    DebugBreak();
  }
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x80))(&local_10);
  return;
}

//==== 00495d80 LoadFarPlaneLocation ====

/* private: static void __cdecl SpacecraftShader__LoadFarPlaneLocation(void) */

void __cdecl SpacecraftShader__LoadFarPlaneLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "FarPlane";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->FarPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x48))(&local_8);
  return;
}

//==== 00495dd0 LoadInverseModelMatrixLocation ====

/* private: static void __cdecl SpacecraftShader__LoadInverseModelMatrixLocation(void) */

void __cdecl SpacecraftShader__LoadInverseModelMatrixLocation(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->InverseModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x495dfb;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  pSVar1 = SpacecraftShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x28))(&fStack_94);
  return;
}

//==== 00495e10 LoadLuminantIrradiance_W_m2Location ====

/* private: static void __cdecl SpacecraftShader__LoadLuminantIrradiance_W_m2Location(void) */

void __cdecl SpacecraftShader__LoadLuminantIrradiance_W_m2Location(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "LuminantIrradiance_W_m2";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->LuminantIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->LuminantIrradiance_W_m2RegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminantIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xb8))(&local_8);
  return;
}

//==== 00495e90 LoadLuminantTemperature_KLocation ====

/* private: static void __cdecl SpacecraftShader__LoadLuminantTemperature_KLocation(void) */

void __cdecl SpacecraftShader__LoadLuminantTemperature_KLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "LuminantTemperature_K";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->LuminantTemperature_KRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->LuminantTemperature_KRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: LuminantTemperature_K."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xb0))(&local_8);
  return;
}

//==== 00495f10 LoadModelMatrixLocation ====

/* private: static void __cdecl SpacecraftShader__LoadModelMatrixLocation(void) */

void __cdecl SpacecraftShader__LoadModelMatrixLocation(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->ModelMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x495f3b;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  pSVar1 = SpacecraftShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x20))(&fStack_94);
  return;
}

//==== 00495f50 LoadNearPlaneLocation ====

/* private: static void __cdecl SpacecraftShader__LoadNearPlaneLocation(void) */

void __cdecl SpacecraftShader__LoadNearPlaneLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "NearPlane";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NearPlaneRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x40))(&local_8);
  return;
}

//==== 00495fa0 LoadNormalMatrixLocation ====

/* private: static void __cdecl SpacecraftShader__LoadNormalMatrixLocation(void) */

void __cdecl SpacecraftShader__LoadNormalMatrixLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "NormalMatrix";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NormalMatrixRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  pSVar1 = SpacecraftShader__GetStatic();
  *(uint32_t *)&local_20 = 0x3f800000;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x38))(&local_40);
  return;
}

//==== 00496030 LoadNormalTextureLocation ====

/* private: static void __cdecl SpacecraftShader__LoadNormalTextureLocation(void) */

void __cdecl SpacecraftShader__LoadNormalTextureLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "NormalTexture";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->NormalTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->NormalTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: NormalTexture.");
    DebugBreak();
  }
  local_8 = 1;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004960b0 LoadPaintDiffuseColorLocation ====

/* private: static void __cdecl SpacecraftShader__LoadPaintDiffuseColorLocation(void) */

void __cdecl SpacecraftShader__LoadPaintDiffuseColorLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "PaintDiffuseColor";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->PaintDiffuseColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->PaintDiffuseColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PaintDiffuseColor."
                   );
    DebugBreak();
  }
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x98))(&local_10);
  return;
}

//==== 00496140 LoadPaintReflectionCoefficientColorLocation ====

/* private: static void __cdecl SpacecraftShader__LoadPaintReflectionCoefficientColorLocation(void)
    */

void __cdecl SpacecraftShader__LoadPaintReflectionCoefficientColorLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "PaintReflectionCoefficientColor";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->PaintReflectionCoefficientColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->PaintReflectionCoefficientColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PaintReflectionCoefficientColor."
                   );
    DebugBreak();
  }
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0xa0))(&local_10);
  return;
}

//==== 004961d0 LoadPaintRoughnessCoefficientLocation ====

/* private: static void __cdecl SpacecraftShader__LoadPaintRoughnessCoefficientLocation(void) */

void __cdecl SpacecraftShader__LoadPaintRoughnessCoefficientLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "PaintRoughnessCoefficient";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->PaintRoughnessCoefficientRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->PaintRoughnessCoefficientRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PaintRoughnessCoefficient."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xa8))(&local_8);
  return;
}

//==== 00496250 LoadPaintedByDefaultLocation ====

/* private: static void __cdecl SpacecraftShader__LoadPaintedByDefaultLocation(void) */

void __cdecl SpacecraftShader__LoadPaintedByDefaultLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "PaintedByDefault";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->PaintedByDefaultRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->PaintedByDefaultRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: PaintedByDefault.")
    ;
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x6c))((int)&uStack_8 + 3);
  return;
}

//==== 004962c0 LoadReferenceIrradiance_W_m2Location ====

/* private: static void __cdecl SpacecraftShader__LoadReferenceIrradiance_W_m2Location(void) */

void __cdecl SpacecraftShader__LoadReferenceIrradiance_W_m2Location(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "ReferenceIrradiance_W_m2";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  pSVar1[1]._pad_0x0_0 = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if (pSVar1[1]._pad_0x0_0 == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ReferenceIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x108))(&local_8);
  return;
}

//==== 00496340 LoadReflectionCoefficientColorLocation ====

/* private: static void __cdecl SpacecraftShader__LoadReflectionCoefficientColorLocation(void) */

void __cdecl SpacecraftShader__LoadReflectionCoefficientColorLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "ReflectionCoefficientColor";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->ReflectionCoefficientColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->ReflectionCoefficientColorRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: ReflectionCoefficientColor."
                   );
    DebugBreak();
  }
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x88))(&local_10);
  return;
}

//==== 004963d0 LoadRoughnessCoefficientLocation ====

/* private: static void __cdecl SpacecraftShader__LoadRoughnessCoefficientLocation(void) */

void __cdecl SpacecraftShader__LoadRoughnessCoefficientLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "RoughnessCoefficient";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->RoughnessCoefficientRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->RoughnessCoefficientRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: RoughnessCoefficient."
                   );
    DebugBreak();
  }
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x90))(&local_8);
  return;
}

//==== 00496450 LoadShadowFarPlaneLocation ====

/* private: static void __cdecl SpacecraftShader__LoadShadowFarPlaneLocation(void) */

void __cdecl SpacecraftShader__LoadShadowFarPlaneLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "ShadowFarPlane";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->ReferenceIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xe4))(&local_8);
  return;
}

//==== 004964b0 LoadShadowMapBiasLocation ====

/* private: static void __cdecl SpacecraftShader__LoadShadowMapBiasLocation(void) */

void __cdecl SpacecraftShader__LoadShadowMapBiasLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "ShadowMapBias";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->StarlightColorRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xd4))(&local_8);
  return;
}

//==== 00496510 LoadShadowMatrixLocation ====

/* private: static void __cdecl SpacecraftShader__LoadShadowMatrixLocation(void) */

void __cdecl SpacecraftShader__LoadShadowMatrixLocation(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->SunIsInShadowRegisterInstance).Location = iVar2;
  uStack_18 = 0x49653e;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  pSVar1 = SpacecraftShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0xcc))(&fStack_94);
  return;
}

//==== 00496550 LoadShadowNearPlaneLocation ====

/* private: static void __cdecl SpacecraftShader__LoadShadowNearPlaneLocation(void) */

void __cdecl SpacecraftShader__LoadShadowNearPlaneLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "ShadowNearPlane";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->StarlightIrradiance_W_m2RegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xdc))(&local_8);
  return;
}

//==== 004965b0 LoadShadowTextureLocation ====

/* private: static void __cdecl SpacecraftShader__LoadShadowTextureLocation(void) */

void __cdecl SpacecraftShader__LoadShadowTextureLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "ShadowTexture";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->SunlightDirectionRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  local_8 = 4;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xc4))(&local_8);
  return;
}

//==== 00496610 LoadStarlightColorLocation ====

/* private: static void __cdecl SpacecraftShader__LoadStarlightColorLocation(void) */

void __cdecl SpacecraftShader__LoadStarlightColorLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  float fVar4;
  char *pcVar5;
  undefined8 local_1c;
  float local_14;
  ulonglong local_10;
  float local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar5 = "StarlightColor";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar5);
  (pSVar1->AdditionalPreprocessor).Length = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->AdditionalPreprocessor).Length == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: StarlightColor.");
    DebugBreak();
  }
  local_10 = (ulonglong)(uint)(float)Physics__AverageColorOfTheUniverse.X;
  local_8 = (float)Physics__AverageColorOfTheUniverse.Y;
  fVar4 = (float)Physics__AverageColorOfTheUniverse.Z;
  pSVar1 = SpacecraftShader__GetStatic();
  local_1c = CONCAT44(local_8,(int)local_10);
  local_14 = fVar4;
  (**(code **)(pSVar1->_pad_0x0_0 + 0xf8))(&local_1c);
  return;
}

//==== 004966e0 LoadStarlightIrradiance_W_m2Location ====

/* private: static void __cdecl SpacecraftShader__LoadStarlightIrradiance_W_m2Location(void) */

void __cdecl SpacecraftShader__LoadStarlightIrradiance_W_m2Location(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "StarlightIrradiance_W_m2";
  pSVar2 = SpacecraftShader__GetStatic();
  uVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  *(undefined4 *)&pSVar1->IsReadyToUse = uVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if (*(int *)&pSVar1->IsReadyToUse == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: StarlightIrradiance_W_m2."
                   );
    DebugBreak();
  }
  local_8 = 0x3715937b;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x100))(&local_8);
  return;
}

//==== 00496770 LoadSunIsInShadowLocation ====

/* private: static void __cdecl SpacecraftShader__LoadSunIsInShadowLocation(void) */

void __cdecl SpacecraftShader__LoadSunIsInShadowLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "SunIsInShadow";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->AdditionalPreprocessor).Capacity = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->AdditionalPreprocessor).Capacity == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: SunIsInShadow.");
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xf0))((int)&uStack_8 + 3);
  return;
}

//==== 004967f0 LoadSunlightDirectionLocation ====

/* private: static void __cdecl SpacecraftShader__LoadSunlightDirectionLocation(void) */

void __cdecl SpacecraftShader__LoadSunlightDirectionLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  char *pcVar3;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar3 = "SunlightDirection";
  pSVar2 = SpacecraftShader__GetStatic();
  pcVar3 = (char *)(*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar3);
  (pSVar1->AdditionalPreprocessor).Data = pcVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->AdditionalPreprocessor).Data == (char *)0xffffffff) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: SunlightDirection."
                   );
    DebugBreak();
  }
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0xec))(&local_10);
  return;
}

//==== 00496880 LoadTotalTransformMatrixLocation ====

/* private: static void __cdecl SpacecraftShader__LoadTotalTransformMatrixLocation(void) */

void __cdecl SpacecraftShader__LoadTotalTransformMatrixLocation(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
  GetStatic();
  iVar2 = (*___glewGetUniformLocation)();
  (pSVar1->TotalTransformMatrixRegisterInstance).Location = iVar2;
  uStack_18 = 0x4968ab;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  pSVar1 = SpacecraftShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x30))(&fStack_94);
  return;
}

//==== 004968c0 LoadUseSplineTexCoordsLocation ====

/* private: static void __cdecl SpacecraftShader__LoadUseSplineTexCoordsLocation(void) */

void __cdecl SpacecraftShader__LoadUseSplineTexCoordsLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "UseSplineTexCoords";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->UseSplineTexCoordsRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->UseSplineTexCoordsRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UseSplineTexCoords."
                   );
    DebugBreak();
  }
  uStack_8 = CONCAT13(1,(undefined3)uStack_8);
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x70))((int)&uStack_8 + 3);
  return;
}

//==== 00496930 LoadUsesDamageTextureLocation ====

/* private: static void __cdecl SpacecraftShader__LoadUsesDamageTextureLocation(void) */

void __cdecl SpacecraftShader__LoadUsesDamageTextureLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "UsesDamageTexture";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->UsesDamageTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->UsesDamageTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UsesDamageTexture."
                   );
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x68))((int)&uStack_8 + 3);
  return;
}

//==== 004969a0 LoadUsesNormalTextureLocation ====

/* private: static void __cdecl SpacecraftShader__LoadUsesNormalTextureLocation(void) */

void __cdecl SpacecraftShader__LoadUsesNormalTextureLocation(void)

{
  SpacecraftShader *pSVar1;
  SpacecraftShader *pSVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  pcVar4 = "UsesNormalTexture";
  pSVar2 = SpacecraftShader__GetStatic();
  iVar3 = (*___glewGetUniformLocation)(pSVar2->_pad_0x4_1,pcVar4);
  (pSVar1->UsesNormalTextureRegisterInstance).Location = iVar3;
  glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  if ((pSVar1->UsesNormalTextureRegisterInstance).Location == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "Location != -1",
                    "Unable to match C++ Shader Definition with GLSL Definition: UsesNormalTexture."
                   );
    DebugBreak();
  }
  uStack_8 = uStack_8 & 0xffffff;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 100))((int)&uStack_8 + 3);
  return;
}

//==== 00496a10 PartialResetState ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall SpacecraftShader__PartialResetState(void)const  */

void __thiscall SpacecraftShader__PartialResetState(SpacecraftShader *this)

{
  undefined8 stack0xfffffffc;
  Darray_L_void____cdecl_P__void__G_ *pDVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((char)this[1]._pad_0x10_4 != '\0') {
    pDVar1 = ArmorShader__GetDefaultSetters();
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

//==== 00496a70 guard_check_icall_nop ====


void __cdecl guard_check_icall_nop__o3(uint)

{
  return;
}





//==== 00496a80 Render ====

/* public: void __thiscall GameColorModel__Render(void)const  */

void __thiscall GameColorModel__Render(GameColorModel *this)

{
  uint uVar1;
  OptionsSection__Graphics *this_00;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  if ((this->VertexObject)._pad_0x8_2 == -1) {
    util__LogAssert("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x3a,
                    "IsGenerated()",(char *)0x0);
    DebugBreak();
  }
  this_00 = Graphics__Get();
  Graphics__ApplyTransformation(this_00);
  (**(code **)((this->VertexObject)._pad_0x0_0 + 0x28))();
  uVar1 = (this->VertexObject)._pad_0x8_2;
  if (VertexBufferObjectInterface__LastBufferRendered != uVar1) {
    (*___glewBindBuffer)(0x8892,uVar1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x43);
    (**(code **)((this->VertexObject)._pad_0x0_0 + 0x24))();
  }
  uVar2 = (**(code **)((this->VertexObject)._pad_0x0_0 + 0x18))();
  glDrawArrays((this->VertexObject)._pad_0x4_1,0,uVar2);
  glCheckErrorInternal("\\mac\\home\\documents\\code\\engine\\graphics\\models.cpp",0x47);
  iVar3 = (**(code **)((this->VertexObject)._pad_0x0_0 + 0x2c))();
  if (iVar3 != 0) {
    pcVar4 = (code *)(**(code **)((this->VertexObject)._pad_0x0_0 + 0x2c))();
    (*pcVar4)();
  }
  VertexBufferObjectInterface__LastBufferRendered = (this->VertexObject)._pad_0x8_2;
  return;
}

//==== 00496a90 Render_00496a90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall GameModel__Render(double,double,bool)const  */

void __thiscall GameModel__Render(GameModel *this,double param_1,double param_2,bool param_3)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  CustomTexture *pCVar2;
  tuple2_L_unsigned_int_CTextureType__Type_G_ *ptVar3;
  tuple2_L_unsigned_int_CTextureType__Type_G_ tVar4;
  bool bVar5;
  SpacecraftShader *pSVar6;
  int iVar7;
  undefined4 uVar8;
  Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *this_00;
  uint local_34;
  undefined4 local_30;
  uint *local_2c;
  undefined1 local_25;
  uint local_24;
  int local_20;
  TextureStack local_1c;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar5 = VertexBufferObjectInterface__IsGenerated((VertexBufferObjectInterface *)this);
  if ((bVar5) && (this->StructureComposition != (Material *)0x0)) {
    pCVar2 = (this->Texture).Pointer;
    if ((pCVar2 == (CustomTexture *)0x0) ||
       (((this->Texture).Controller == (ReferenceController *)0x0 ||
        (bVar5 = CustomTexture__IsInitialized(pCVar2), !bVar5)))) {
      local_9 = 0;
    }
    else {
      local_9 = 1;
    }
    pSVar6 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar6->_pad_0x0_0 + 100))(&local_9);
    local_1c.StoredChannels._pad_0x0_0 = (int)&vftable_11;
    local_1c.StoredChannels.Data = (int *)0x0;
    local_1c.StoredChannels.Size = 0;
    local_1c.StoredChannels.Capacity = 1;
    local_1c.StoredChannels.Data = (int *)(uintptr_t)(port_op_new(4));
    iVar1 = local_1c.StoredChannels.Size;
    if (local_1c.StoredChannels.Data == (int *)0x0) {
      local_1c.StoredChannels.Data = (int *)0x0;
    }
    else {
      *local_1c.StoredChannels.Data = 0;
    }
    iVar7 = 0;
    if (0 < local_1c.StoredChannels.Capacity) {
      do {
        local_1c.StoredChannels.Data[iVar7] = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_1c.StoredChannels.Capacity);
    }
    local_2c = (uint *)(local_1c.StoredChannels.Size + 1);
    util__Darray_L_util__Reflectable_P_G___SetSize
              ((Darray_L_util__Reflectable_P_G_ *)&local_1c,(int *)&local_2c);
    bVar5 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                      ((Darray_L_GraphicsResource__Type_G_ *)&local_1c,iVar1);
    if (bVar5) {
      local_1c.StoredChannels.Data[local_1c.StoredChannels.Size + -1] = 1;
    }
    Graphics__TextureStack__PeekState((int)&local_24);
    pCVar2 = (this->Texture).Pointer;
    if ((pCVar2 == (CustomTexture *)0x0) ||
       ((this->Texture).Controller == (ReferenceController *)0x0)) {
      local_34 = 0xffffffff;
      local_30 = 0;
    }
    else {
      uVar8 = (**(code **)(pCVar2->_pad_0x0_0 + 0x18))();
      local_34 = (**(code **)(pCVar2->_pad_0x0_0 + 0x14))();
      local_30 = uVar8;
    }
    local_2c = &local_34;
    this_00 = (Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G_ *)(Graphics__TextureStack__GetStack(1));
    iVar7 = this_00->Size;
    iVar1 = iVar7 + 1;
    this_00->Size = iVar1;
    this_00->EndData = this_00->Data + iVar1;
    bVar5 = util__Stack_L_util__tuple2_L_unsigned_int_CTextureType__Type_G___G___CheckSize(this_00,iVar7);
    if (bVar5) {
      ptVar3 = this_00->Data;
      iVar1 = this_00->Size;
      ptVar3[iVar1 + -1].Value1 = *local_2c;
      ptVar3[iVar1 + -1].Value2 = local_2c[1];
    }
    tVar4.Value2 = local_20;
    tVar4.Value1 = local_24;
    Graphics__TextureStack__AlterState(&local_1c,tVar4.Value1,tVar4.Value2,1);
    if ((param_3 == false) || ((this->TextureID).IsValidData == false)) {
      local_a = 0;
    }
    else {
      local_a = 1;
    }
    pSVar6 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar6->_pad_0x0_0 + 0x68))(&local_a);
    pSVar6 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar6->_pad_0x0_0 + 0xac))(&param_1);
    local_25 = this->PaintComposition != (Material *)0x0;
    pSVar6 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar6->_pad_0x0_0 + 0x6c))(&local_25);
    local_25 = VertexBufferObjectInterface__IsSplineModel((VertexBufferObjectInterface *)this);
    pSVar6 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar6->_pad_0x0_0 + 0x70))(&local_25);
    pSVar6 = SpacecraftShader__GetStatic();
    Material__SetupRendering(this->StructureComposition,(Shader *)pSVar6,false);
    if (this->PaintComposition != (Material *)0x0) {
      pSVar6 = SpacecraftShader__GetStatic();
      Material__SetupRendering(this->PaintComposition,(Shader *)pSVar6,true);
    }
    VertexBufferObjectInterface__Render((VertexBufferObjectInterface *)this);
    Graphics__TextureStack___TextureStack(&local_1c);
  }
  return;
}

//==== 00496d00 SetAll_00496d00 ====


/* public: virtual void  util__Darray_L_structutil__Line2_L_double_G__G___SetAll(struct
   util__Line2_L_double_G_ const &) */

void 
util__Darray_struct_util__Line2_double_____SetAll
          (Darray_L_struct_util__Line2_L_double_G___G_ *this,Line2_L_double_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 8) {
    do {
      uVar1 = *(undefined4 *)((int)&(param_1->A).X + 4);
      uVar2 = (undefined4)((param_1->A).Y);
      uVar3 = *(undefined4 *)((int)&(param_1->A).Y + 4);
      *puVar4 = (undefined4)((param_1->A).X);
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = *(undefined4 *)((int)&(param_1->B).X + 4);
      uVar2 = (undefined4)((param_1->B).Y);
      uVar3 = *(undefined4 *)((int)&(param_1->B).Y + 4);
      puVar4[4] = (undefined4)((param_1->B).X);
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      puVar4 = puVar4 + 8;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x20 + *(int *)(this + 4)));
  }
  return;
}





//==== 00496d50 SetAll_00496d50 ====


/* public: virtual void  util__Darray_L_structutil__Vec2_L_double_G__G___SetAll(struct
   util__Vec2_L_double_G_ const &) */

void 
util__Darray_struct_util__Vec2_double_____SetAll
          (Darray_L_struct_util__Vec2_L_double_G___G_ *this,Vec2_L_double_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 4) {
    do {
      uVar1 = *(undefined4 *)((int)&param_1->X + 4);
      uVar2 = *(undefined4 *)&param_1->Y;
      uVar3 = *(undefined4 *)((int)&param_1->Y + 4);
      *puVar4 = *(undefined4 *)&param_1->X;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 4;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 00496d90 SetAll_00496d90 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble____thiscallutil__Reflectable___P__void_const_G__G___SetAll(struct util__tuple2_L_class_util__Str_L_char_G__Cdouble___thiscallutil__Reflectable___P__void_const_G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______SetAll(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
         *this,tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G_
               *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x10 + (int)this_00)) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,(Str_L_char_G_ *)param_1);
      this_00[1].Data = *(char **)(param_1 + 0xc);
      this_00 = (Str_L_char_G_ *)&this_00[1].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 00496de0 SetAll_00496de0 ====


/* public: virtual void  util__Darray_L_structutil__AABB_L_structutil__Vec3_L_double_G__G___G___SetAll(struct util__AABB_L_structutil__Vec3_L_double_G__G_ const &) */

void 
util__Darray_struct_util__AABB_struct_util__Vec3_double_______SetAll
          (Darray_L_struct_util__AABB_L_struct_util__Vec3_L_double_G___G___G_ *this,
          AABB_L_struct_util__Vec3_L_double_G___G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 0xc) {
    do {
      uVar1 = *(undefined4 *)(param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar3 = *(undefined4 *)(param_1 + 0xc);
      *puVar4 = *(undefined4 *)param_1;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x14);
      uVar2 = *(undefined4 *)(param_1 + 0x18);
      uVar3 = *(undefined4 *)(param_1 + 0x1c);
      puVar4[4] = *(undefined4 *)(param_1 + 0x10);
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      uVar3 = *(undefined4 *)(param_1 + 0x2c);
      puVar4[8] = *(undefined4 *)(param_1 + 0x20);
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      puVar4 = puVar4 + 0xc;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x30 + *(int *)(this + 4)));
  }
  return;
}





//==== 00496e30 SetAll_00496e30 ====


/* public: virtual void  util__Darray_L_structCraftSplinePoint_G___SetAll(struct
   CraftSplinePoint const &) */

void 
util__Darray_struct_CraftSplinePoint___SetAll
          (Darray_L_struct_CraftSplinePoint_G_ *this,CraftSplinePoint *param_1)

{
  Darray_L_struct_util__Vec2_L_double_G___G_ *this_00;
  
  this_00 = *(Darray_L_struct_util__Vec2_L_double_G___G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 0x18) {
    do {
      Darray_L_struct_util__Vec2_L_double_G___G___op_assign
                (this_00,(Darray_L_struct_util__Vec2_L_double_G___G_ *)param_1);
      *(undefined8 *)(this_00 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      this_00 = this_00 + 0x18;
    } while (this_00 !=
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18))
    ;
  }
  return;
}





//==== 00496e80 SetAll_00496e80 ====


/* public: virtual void  util__Darray_L_structIndexedFace_G___SetAll(struct IndexedFace const
   &) */

void __thiscall
util__Darray_struct_IndexedFace___SetAll(Darray_L_struct_IndexedFace_G_ *this,IndexedFace *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 4);
  if (puVar1 != (undefined8 *)((int)puVar1 + *(int *)(this + 8) * 0xc)) {
    do {
      *puVar1 = *(undefined8 *)param_1;
      *(int *)(puVar1 + 1) = param_1->C;
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
    } while (puVar1 != (undefined8 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
  }
  return;
}





//==== 00496ed0 SetAll_00496ed0 ====


/* public: virtual void  util__Darray_L_structVertex_G___SetAll(struct Vertex const &) */

void __thiscall util__Darray_struct_Vertex___SetAll(Darray_L_struct_Vertex_G_ *this,Vertex *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  
  pfVar4 = *(float **)(this + 4);
  if (pfVar4 != pfVar4 + *(int *)(this + 8) * 0xb) {
    do {
      fVar1 = (param_1->Point).Y;
      fVar2 = (param_1->Point).Z;
      fVar3 = (param_1->TextureCoordinate).X;
      *pfVar4 = (param_1->Point).X;
      pfVar4[1] = fVar1;
      pfVar4[2] = fVar2;
      pfVar4[3] = fVar3;
      fVar1 = (param_1->Mode__Normal).X;
      fVar2 = (param_1->Mode__Normal).Y;
      fVar3 = (param_1->Mode__Normal).Z;
      pfVar4[4] = (param_1->TextureCoordinate).Y;
      pfVar4[5] = fVar1;
      pfVar4[6] = fVar2;
      pfVar4[7] = fVar3;
      fVar1 = (param_1->Tangent).Y;
      pfVar4[8] = (param_1->Tangent).X;
      pfVar4[9] = fVar1;
      pfVar4[10] = (param_1->Tangent).Z;
      pfVar4 = pfVar4 + 0xb;
    } while (pfVar4 != (float *)(*(int *)(this + 8) * 0x2c + *(int *)(this + 4)));
  }
  return;
}





//==== 00496f20 SetArmorTextureScale ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetArmorTextureScale(struct util__Vec2_L_float_G_
   const &)const  */

void  SpacecraftShader__SetArmorTextureScale(SpacecraftShader *this,Vec2_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ArmorTextureScaleRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = param_1->X;
    local_c = param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00496fd0 SetArmorTextureScale_00496fd0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetArmorTextureScale(struct util__Vec2_L_double_G_
   const &)const  */

void  SpacecraftShader__SetArmorTextureScale__o3(SpacecraftShader *this,Vec2_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ArmorTextureScaleRegisterInstance).Location;
  if (iVar1 != -1) {
    local_10 = (float)param_1->X;
    local_c = (float)param_1->Y;
    (*___glewUniform2fv)(iVar1,1,&local_10);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497090 SetArmorTextureScaleDefault ====

/* private: static void __cdecl SpacecraftShader__SetArmorTextureScaleDefault(void) */

void __cdecl SpacecraftShader__SetArmorTextureScaleDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  local_c = 0x3f800000;
  local_8 = 0x3f800000;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x78))(&local_c);
  return;
}

//==== 004970d0 SetBlackbodyRadiationPeakTemperature_K ====

/* public: virtual void  SpacecraftShader__SetBlackbodyRadiationPeakTemperature_K(float
   const &)const  */

void 
SpacecraftShader__SetBlackbodyRadiationPeakTemperature_K(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497160 SetBlackbodyRadiationPeakTemperature_K_00497160 ====

/* public: virtual void  SpacecraftShader__SetBlackbodyRadiationPeakTemperature_K(double
   const &)const  */

void 
SpacecraftShader__SetBlackbodyRadiationPeakTemperature_K__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004971f0 SetBlackbodyRadiationPeakTemperature_KDefault ====

/* private: static void __cdecl
   SpacecraftShader__SetBlackbodyRadiationPeakTemperature_KDefault(void) */

void __cdecl SpacecraftShader__SetBlackbodyRadiationPeakTemperature_KDefault(void)

{
  SpacecraftShader *pSVar1;
  double dVar2;
  float local_8;
  
  dVar2 = GetBlackbodyTexturePeakTemperature_K();
  local_8 = (float)dVar2;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x50))(&local_8);
  return;
}

//==== 00497210 SetBlackbodyRadiationTexture ====

/* public: virtual void __thiscall SpacecraftShader__SetBlackbodyRadiationTexture(int const &)const
    */

void __thiscall SpacecraftShader__SetBlackbodyRadiationTexture(SpacecraftShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->BlackbodyRadiationTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497290 SetBlackbodyRadiationTextureDefault ====

/* private: static void __cdecl SpacecraftShader__SetBlackbodyRadiationTextureDefault(void) */

void __cdecl SpacecraftShader__SetBlackbodyRadiationTextureDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x54))(&local_8);
  return;
}

//==== 004972b0 SetCameraPosition ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetCameraPosition(struct util__Vec3_L_float_G_
   const &)const  */

void  SpacecraftShader__SetCameraPosition(SpacecraftShader *this,Vec3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->CameraPositionRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497360 SetCameraPosition_00497360 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetCameraPosition(struct util__Vec3_L_double_G_
   const &)const  */

void  SpacecraftShader__SetCameraPosition__o3(SpacecraftShader *this,Vec3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->CameraPositionRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497430 SetDamageTexture ====

/* public: virtual void __thiscall SpacecraftShader__SetDamageTexture(int const &)const  */

void __thiscall SpacecraftShader__SetDamageTexture(SpacecraftShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->DamageTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004974b0 SetDamageTextureDefault ====

/* private: static void __cdecl SpacecraftShader__SetDamageTextureDefault(void) */

void __cdecl SpacecraftShader__SetDamageTextureDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 2;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x5c))(&local_8);
  return;
}

//==== 004974d0 SetDamagedArmorTexture ====

/* public: virtual void __thiscall SpacecraftShader__SetDamagedArmorTexture(int const &)const  */

void __thiscall SpacecraftShader__SetDamagedArmorTexture(SpacecraftShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->DamagedArmorTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497550 SetDamagedArmorTextureDefault ====

/* private: static void __cdecl SpacecraftShader__SetDamagedArmorTextureDefault(void) */

void __cdecl SpacecraftShader__SetDamagedArmorTextureDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 3;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x60))(&local_8);
  return;
}

//==== 00497570 SetDiffuseColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetDiffuseColor(struct util__Vec3_L_float_G_ const
   &)const  */

void  SpacecraftShader__SetDiffuseColor(SpacecraftShader *this,Vec3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->DiffuseColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497620 SetDiffuseColor_00497620 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetDiffuseColor(struct util__Vec3_L_double_G_ const
   &)const  */

void  SpacecraftShader__SetDiffuseColor__o3(SpacecraftShader *this,Vec3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->DiffuseColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004976f0 SetDiffuseColorDefault ====

/* private: static void __cdecl SpacecraftShader__SetDiffuseColorDefault(void) */

void __cdecl SpacecraftShader__SetDiffuseColorDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x80))(&local_10);
  return;
}

//==== 00497730 SetFarPlane ====

/* public: virtual void  SpacecraftShader__SetFarPlane(float const &)const  */

void  SpacecraftShader__SetFarPlane(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004977c0 SetFarPlane_004977c0 ====

/* public: virtual void  SpacecraftShader__SetFarPlane(double const &)const  */

void  SpacecraftShader__SetFarPlane__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->FarPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497850 SetInverseModelMatrix ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
SpacecraftShader__SetInverseModelMatrix(SpacecraftShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497910 SetInverseModelMatrix_00497910 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetInverseModelMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
SpacecraftShader__SetInverseModelMatrix__o3(SpacecraftShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497a00 SetInverseModelMatrixDefault ====

/* private: static void __cdecl SpacecraftShader__SetInverseModelMatrixDefault(void) */

void __cdecl SpacecraftShader__SetInverseModelMatrixDefault(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x28))(&local_90);
  return;
}

//==== 00497ae0 SetLuminantIrradiance_W_m2 ====

/* public: virtual void  SpacecraftShader__SetLuminantIrradiance_W_m2(float const &)const
    */

void  SpacecraftShader__SetLuminantIrradiance_W_m2(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminantIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497b70 SetLuminantIrradiance_W_m2_00497b70 ====

/* public: virtual void  SpacecraftShader__SetLuminantIrradiance_W_m2(double const &)const
    */

void  SpacecraftShader__SetLuminantIrradiance_W_m2__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminantIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497c00 SetLuminantIrradiance_W_m2Default ====

/* private: static void __cdecl SpacecraftShader__SetLuminantIrradiance_W_m2Default(void) */

void __cdecl SpacecraftShader__SetLuminantIrradiance_W_m2Default(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xb8))(&local_8);
  return;
}

//==== 00497c30 SetLuminantTemperature_K ====

/* public: virtual void  SpacecraftShader__SetLuminantTemperature_K(float const &)const
    */

void  SpacecraftShader__SetLuminantTemperature_K(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminantTemperature_KRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497cc0 SetLuminantTemperature_K_00497cc0 ====

/* public: virtual void  SpacecraftShader__SetLuminantTemperature_K(double const &)const
    */

void  SpacecraftShader__SetLuminantTemperature_K__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->LuminantTemperature_KRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497d50 SetLuminantTemperature_KDefault ====

/* private: static void __cdecl SpacecraftShader__SetLuminantTemperature_KDefault(void) */

void __cdecl SpacecraftShader__SetLuminantTemperature_KDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xb0))(&local_8);
  return;
}

//==== 00497d80 SetModelMatrix ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetModelMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  SpacecraftShader__SetModelMatrix(SpacecraftShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497e40 SetModelMatrix_00497e40 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetModelMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  SpacecraftShader__SetModelMatrix__o3(SpacecraftShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00497f30 SetModelMatrixDefault ====

/* private: static void __cdecl SpacecraftShader__SetModelMatrixDefault(void) */

void __cdecl SpacecraftShader__SetModelMatrixDefault(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0x20))(&local_90);
  return;
}

//==== 00498010 SetNearPlane ====

/* public: virtual void  SpacecraftShader__SetNearPlane(float const &)const  */

void  SpacecraftShader__SetNearPlane(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004980a0 SetNearPlane_004980a0 ====

/* public: virtual void  SpacecraftShader__SetNearPlane(double const &)const  */

void  SpacecraftShader__SetNearPlane__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NearPlaneRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498130 SetNormalMatrix ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetNormalMatrix(struct util__Matrix3x3_L_float_G_
   const &)const  */

void  SpacecraftShader__SetNormalMatrix(SpacecraftShader *this,Matrix3x3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004981f0 SetNormalMatrix_004981f0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetNormalMatrix(struct util__Matrix3x3_L_double_G_
   const &)const  */

void  SpacecraftShader__SetNormalMatrix__o3(SpacecraftShader *this,Matrix3x3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalMatrixRegisterInstance).Location;
  if (iVar1 != -1) {
    local_2c = (float)param_1->Data[0];
    local_28 = (float)param_1->Data[1];
    local_24 = (float)param_1->Data[2];
    *(uint32_t *)&local_20 = (float)param_1->Data[3];
    local_1c = (float)param_1->Data[4];
    local_18 = (float)param_1->Data[5];
    local_14 = (float)param_1->Data[6];
    local_10 = (float)param_1->Data[7];
    local_c = (float)param_1->Data[8];
    (*___glewUniformMatrix3fv)(iVar1,1,0,&local_2c);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498310 SetNormalTexture ====

/* public: virtual void __thiscall SpacecraftShader__SetNormalTexture(int const &)const  */

void __thiscall SpacecraftShader__SetNormalTexture(SpacecraftShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->NormalTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498390 SetNormalTextureDefault ====

/* private: static void __cdecl SpacecraftShader__SetNormalTextureDefault(void) */

void __cdecl SpacecraftShader__SetNormalTextureDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 1;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x58))(&local_8);
  return;
}

//==== 004983b0 SetPaintDiffuseColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetPaintDiffuseColor(struct util__Vec3_L_float_G_
   const &)const  */

void  SpacecraftShader__SetPaintDiffuseColor(SpacecraftShader *this,Vec3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PaintDiffuseColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498460 SetPaintDiffuseColor_00498460 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetPaintDiffuseColor(struct util__Vec3_L_double_G_
   const &)const  */

void  SpacecraftShader__SetPaintDiffuseColor__o3(SpacecraftShader *this,Vec3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PaintDiffuseColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498530 SetPaintDiffuseColorDefault ====

/* private: static void __cdecl SpacecraftShader__SetPaintDiffuseColorDefault(void) */

void __cdecl SpacecraftShader__SetPaintDiffuseColorDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x98))(&local_10);
  return;
}

//==== 00498570 SetPaintReflectionCoefficientColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetPaintReflectionCoefficientColor(struct
   util__Vec3_L_float_G_ const &)const  */

void 
SpacecraftShader__SetPaintReflectionCoefficientColor(SpacecraftShader *this,Vec3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PaintReflectionCoefficientColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498620 SetPaintReflectionCoefficientColor_00498620 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetPaintReflectionCoefficientColor(struct
   util__Vec3_L_double_G_ const &)const  */

void 
SpacecraftShader__SetPaintReflectionCoefficientColor__o3(SpacecraftShader *this,Vec3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PaintReflectionCoefficientColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004986f0 SetPaintReflectionCoefficientColorDefault ====

/* private: static void __cdecl SpacecraftShader__SetPaintReflectionCoefficientColorDefault(void) */

void __cdecl SpacecraftShader__SetPaintReflectionCoefficientColorDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0xa0))(&local_10);
  return;
}

//==== 00498730 SetPaintRoughnessCoefficient ====

/* public: virtual void  SpacecraftShader__SetPaintRoughnessCoefficient(float const
   &)const  */

void 
SpacecraftShader__SetPaintRoughnessCoefficient(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PaintRoughnessCoefficientRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004987c0 SetPaintRoughnessCoefficient_004987c0 ====

/* public: virtual void  SpacecraftShader__SetPaintRoughnessCoefficient(double const
   &)const  */

void 
SpacecraftShader__SetPaintRoughnessCoefficient__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PaintRoughnessCoefficientRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498850 SetPaintRoughnessCoefficientDefault ====

/* private: static void __cdecl SpacecraftShader__SetPaintRoughnessCoefficientDefault(void) */

void __cdecl SpacecraftShader__SetPaintRoughnessCoefficientDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xa8))(&local_8);
  return;
}

//==== 00498880 SetPaintedByDefault ====

/* public: virtual void __thiscall SpacecraftShader__SetPaintedByDefault(bool const &)const  */

void __thiscall SpacecraftShader__SetPaintedByDefault(SpacecraftShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->PaintedByDefaultRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498930 SetReferenceIrradiance_W_m2 ====

/* public: virtual void  SpacecraftShader__SetReferenceIrradiance_W_m2(float const &)const
    */

void  SpacecraftShader__SetReferenceIrradiance_W_m2(SpacecraftShader *this,float *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (this[1]._pad_0x0_0 != -1) {
    (*___glewUniform1f)(this[1]._pad_0x0_0,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004989c0 SetReferenceIrradiance_W_m2_004989c0 ====

/* public: virtual void  SpacecraftShader__SetReferenceIrradiance_W_m2(double const
   &)const  */

void 
SpacecraftShader__SetReferenceIrradiance_W_m2__o3(SpacecraftShader *this,double *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (this[1]._pad_0x0_0 != -1) {
    (*___glewUniform1f)(this[1]._pad_0x0_0,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498a50 SetReflectionCoefficientColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetReflectionCoefficientColor(struct
   util__Vec3_L_float_G_ const &)const  */

void 
SpacecraftShader__SetReflectionCoefficientColor(SpacecraftShader *this,Vec3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReflectionCoefficientColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498b00 SetReflectionCoefficientColor_00498b00 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetReflectionCoefficientColor(struct
   util__Vec3_L_double_G_ const &)const  */

void 
SpacecraftShader__SetReflectionCoefficientColor__o3(SpacecraftShader *this,Vec3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReflectionCoefficientColorRegisterInstance).Location;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498bd0 SetReflectionCoefficientColorDefault ====

/* private: static void __cdecl SpacecraftShader__SetReflectionCoefficientColorDefault(void) */

void __cdecl SpacecraftShader__SetReflectionCoefficientColorDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined8 local_10;
  undefined4 local_8;
  
  pSVar1 = SpacecraftShader__GetStatic();
  local_8 = 0;
  local_10 = 0;
  (**(code **)(pSVar1->_pad_0x0_0 + 0x88))(&local_10);
  return;
}

//==== 00498c10 SetRoughnessCoefficient ====

/* public: virtual void  SpacecraftShader__SetRoughnessCoefficient(float const &)const  */

void  SpacecraftShader__SetRoughnessCoefficient(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RoughnessCoefficientRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498ca0 SetRoughnessCoefficient_00498ca0 ====

/* public: virtual void  SpacecraftShader__SetRoughnessCoefficient(double const &)const
    */

void  SpacecraftShader__SetRoughnessCoefficient__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->RoughnessCoefficientRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498d30 SetRoughnessCoefficientDefault ====

/* private: static void __cdecl SpacecraftShader__SetRoughnessCoefficientDefault(void) */

void __cdecl SpacecraftShader__SetRoughnessCoefficientDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 0;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x90))(&local_8);
  return;
}

//==== 00498d60 SetShadowFarPlane ====

/* public: virtual void  SpacecraftShader__SetShadowFarPlane(float const &)const  */

void  SpacecraftShader__SetShadowFarPlane(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498df0 SetShadowFarPlane_00498df0 ====

/* public: virtual void  SpacecraftShader__SetShadowFarPlane(double const &)const  */

void  SpacecraftShader__SetShadowFarPlane__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->ReferenceIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498e80 SetShadowMapBias ====

/* public: virtual void  SpacecraftShader__SetShadowMapBias(float const &)const  */

void  SpacecraftShader__SetShadowMapBias(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightColorRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498f10 SetShadowMapBias_00498f10 ====

/* public: virtual void  SpacecraftShader__SetShadowMapBias(double const &)const  */

void  SpacecraftShader__SetShadowMapBias__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightColorRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00498fa0 SetShadowMatrix ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetShadowMatrix(struct util__Matrix4x4_L_float_G_
   const &)const  */

void  SpacecraftShader__SetShadowMatrix(SpacecraftShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SunIsInShadowRegisterInstance).Location;
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499060 SetShadowMatrix_00499060 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetShadowMatrix(struct util__Matrix4x4_L_double_G_
   const &)const  */

void  SpacecraftShader__SetShadowMatrix__o3(SpacecraftShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SunIsInShadowRegisterInstance).Location;
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499150 SetShadowMatrixDefault ====

/* private: static void __cdecl SpacecraftShader__SetShadowMatrixDefault(void) */

void __cdecl SpacecraftShader__SetShadowMatrixDefault(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
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
  (**(code **)(pSVar1->_pad_0x0_0 + 0xcc))(&local_90);
  return;
}

//==== 00499230 SetShadowNearPlane ====

/* public: virtual void  SpacecraftShader__SetShadowNearPlane(float const &)const  */

void  SpacecraftShader__SetShadowNearPlane(SpacecraftShader *this,float *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004992c0 SetShadowNearPlane_004992c0 ====

/* public: virtual void  SpacecraftShader__SetShadowNearPlane(double const &)const  */

void  SpacecraftShader__SetShadowNearPlane__o3(SpacecraftShader *this,double *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->StarlightIrradiance_W_m2RegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1f)(iVar1,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499350 SetShadowTexture ====

/* public: virtual void __thiscall SpacecraftShader__SetShadowTexture(int const &)const  */

void __thiscall SpacecraftShader__SetShadowTexture(SpacecraftShader *this,int *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->SunlightDirectionRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 004993d0 SetShadowTextureDefault ====

/* private: static void __cdecl SpacecraftShader__SetShadowTextureDefault(void) */

void __cdecl SpacecraftShader__SetShadowTextureDefault(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 4;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0xc4))(&local_8);
  return;
}

//==== 00499400 SetSize ====


/* private: void  util__Darray_L_classutil__Reflectable_P_G___SetSize(int const &) */

void __thiscall
util__Darray_class_util__Reflectable____SetSize(Darray_L_class_util__Reflectable_P_G_ *this,int *param_1)

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
     (puVar3 = (undefined4 *)(iVar2 + iVar4 * 4),
     puVar3 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 4))) {
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 004994a0 SetSize_004994a0 ====


/* private: void  util__Darray_L_structutil__Line2_L_double_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__Line2_double_____SetSize
          (Darray_L_struct_util__Line2_L_double_G___G_ *this,int *param_1)

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
      puVar3[7] = 0;
      puVar3 = puVar3 + 8;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x20 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 00499550 SetSize_00499550 ====


/* private: void  util__Darray_L_structutil__Vec2_L_double_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__Vec2_double_____SetSize
          (Darray_L_struct_util__Vec2_L_double_G___G_ *this,int *param_1)

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
     (puVar3 = (undefined4 *)(iVar4 * 0x10 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar3 + 4;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 004995f0 SetSize_004995f0 ====


/* private: void  util__Darray_L_structCraftSplinePoint_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_CraftSplinePoint___SetSize(Darray_L_struct_CraftSplinePoint_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Darray_L_struct_util__Vec2_L_double_G___G_ *this_00;
  undefined **ppuStack_1c;
  void *pvStack_18;
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
  iVar3 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iVar3 = iVar2;
  }
  if (((iVar3 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (this_00 = (Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar2 + iVar3 * 0x18),
     this_00 != (Darray_L_struct_util__Vec2_L_double_G___G_ *)(iVar2 + *(int *)(this + 8) * 0x18))) {
    do {
      ppuStack_1c = (undefined **)&vftable_12;
      pvStack_18 = (void *)0x0;
      uStack_14 = 0;
      uStack_10 = 0;
      uStack_c = 0;
      Darray_L_struct_util__Vec2_L_double_G___G___op_assign
                (this_00,(Darray_L_struct_util__Vec2_L_double_G___G_ *)&ppuStack_1c);
      *(undefined8 *)(this_00 + 0x10) = uStack_c;
      ppuStack_1c = (undefined **)&vftable_12;
      if (pvStack_18 != (void *)0x0) {
        port_op_delete(pvStack_18);
      }
      this_00 = this_00 + 0x18;
    } while (this_00 !=
             (Darray_L_struct_util__Vec2_L_double_G___G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18))
    ;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 004996e0 SetSize_004996e0 ====


/* private: void  util__Darray_L_structIndexedFace_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_IndexedFace___SetSize(Darray_L_struct_IndexedFace_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
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
     (puVar3 = (undefined8 *)(iVar2 + iVar4 * 0xc),
     puVar3 != (undefined8 *)(iVar2 + *(int *)(this + 8) * 0xc))) {
    do {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3 = (undefined8 *)((int)puVar3 + 0xc);
    } while (puVar3 != (undefined8 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 004997a0 SetSize_004997a0 ====


/* private: void  util__Darray_L_structMaterialConstituent_G___SetSize(int const &) */

void 
util__Darray_struct_MaterialConstituent___SetSize
          (Darray_L_struct_MaterialConstituent_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uStack_10;
  
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
     (puVar3 = (undefined4 *)(iVar4 * 0x10 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = uStack_10;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3 = puVar3 + 4;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 00499860 SetSize_00499860 ====


/* private: void  util__Darray_L_structVertex_G___SetSize(int const &) */

void __thiscall util__Darray_struct_Vertex___SetSize(Darray_L_struct_Vertex_G_ *this,int *param_1)

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
     (puVar3 = (undefined4 *)(iVar4 * 0x2c + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x2c + iVar2))) {
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined8 *)(puVar3 + 8) = 0;
      puVar3[10] = 0;
      puVar3 = puVar3 + 0xb;
    } while (puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x2c + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar4;
  return;
}





//==== 00499920 SetSize_00499920 ====


/* private: void  util__Darray_L_classutil__Str_L_char_G__G___SetSize(int const &) */

void __thiscall
util__Darray_class_util__Str_char_____SetSize(Darray_L_class_util__Str_L_char_G___G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *this_00;
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
     (this_00 = (Str_L_char_G_ *)(iVar2 + iVar3 * 0xc),
     this_00 != (Str_L_char_G_ *)(iVar2 + *(int *)(this + 8) * 0xc))) {
    SStack_10.Data = (char *)0x0;
    SStack_10.Capacity = 0;
    SStack_10.Length = 0;
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_10);
      this_00 = this_00 + 1;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 004999e0 SetStarlightColor ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetStarlightColor(struct util__Vec3_L_float_G_
   const &)const  */

void  SpacecraftShader__SetStarlightColor(SpacecraftShader *this,Vec3_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->AdditionalPreprocessor).Length;
  if (iVar1 != -1) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499a90 SetStarlightColor_00499a90 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetStarlightColor(struct util__Vec3_L_double_G_
   const &)const  */

void  SpacecraftShader__SetStarlightColor__o3(SpacecraftShader *this,Vec3_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->AdditionalPreprocessor).Length;
  if (iVar1 != -1) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(iVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499b60 SetStarlightColorDefault ====

/* private: static void __cdecl SpacecraftShader__SetStarlightColorDefault(void) */

void __cdecl SpacecraftShader__SetStarlightColorDefault(void)

{
  SpacecraftShader *pSVar1;
  float fVar2;
  undefined8 local_1c;
  float local_14;
  ulonglong local_10;
  float local_8;
  
  local_10 = (ulonglong)(uint)(float)Physics__AverageColorOfTheUniverse.X;
  local_8 = (float)Physics__AverageColorOfTheUniverse.Y;
  fVar2 = (float)Physics__AverageColorOfTheUniverse.Z;
  pSVar1 = SpacecraftShader__GetStatic();
  local_1c = CONCAT44(local_8,(int)local_10);
  local_14 = fVar2;
  (**(code **)(pSVar1->_pad_0x0_0 + 0xf8))(&local_1c);
  return;
}

//==== 00499bd0 SetStarlightIrradiance_W_m2 ====

/* public: virtual void  SpacecraftShader__SetStarlightIrradiance_W_m2(float const &)const
    */

void  SpacecraftShader__SetStarlightIrradiance_W_m2(SpacecraftShader *this,float *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)&this->IsReadyToUse != -1) {
    (*___glewUniform1f)(*(int *)&this->IsReadyToUse,*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499c60 SetStarlightIrradiance_W_m2_00499c60 ====

/* public: virtual void  SpacecraftShader__SetStarlightIrradiance_W_m2(double const
   &)const  */

void 
SpacecraftShader__SetStarlightIrradiance_W_m2__o3(SpacecraftShader *this,double *param_1)

{
  bool bVar1;
  uint *puVar2;
  
  bVar1 = Graphics__IsInsideADrawStack();
  if (bVar1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar2 = Shader__GetCachedUsedProgram();
  if (*puVar2 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  if (*(int *)&this->IsReadyToUse != -1) {
    (*___glewUniform1f)(*(int *)&this->IsReadyToUse,(float)*param_1);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499cf0 SetStarlightIrradiance_W_m2Default ====

/* private: static void __cdecl SpacecraftShader__SetStarlightIrradiance_W_m2Default(void) */

void __cdecl SpacecraftShader__SetStarlightIrradiance_W_m2Default(void)

{
  SpacecraftShader *pSVar1;
  undefined4 local_8;
  
  local_8 = 0x3715937b;
  pSVar1 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar1->_pad_0x0_0 + 0x100))(&local_8);
  return;
}

//==== 00499d20 SetSunIsInShadow ====

/* public: virtual void __thiscall SpacecraftShader__SetSunIsInShadow(bool const &)const  */

void __thiscall SpacecraftShader__SetSunIsInShadow(SpacecraftShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->AdditionalPreprocessor).Capacity;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499db0 SetSunlightDirection ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetSunlightDirection(struct util__Vec3_L_float_G_
   const &)const  */

void  SpacecraftShader__SetSunlightDirection(SpacecraftShader *this,Vec3_L_float_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0xffffffff) {
    local_c = param_1->Z;
    (*(uint32_t*)&(local_14)) = param_1->X;
    (*(uint32_t*)((char*)&(local_14)+4)) = param_1->Y;
    (*___glewUniform3fv)(pcVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499e60 SetSunlightDirection_00499e60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetSunlightDirection(struct util__Vec3_L_double_G_
   const &)const  */

void  SpacecraftShader__SetSunlightDirection__o3(SpacecraftShader *this,Vec3_L_double_G_ *param_1)

{
  undefined8 stack0xfffffffc;
  char *pcVar1;
  bool bVar2;
  uint *puVar3;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0xffffffff) {
    local_14 = (float)param_1->X;
    local_10 = (float)param_1->Y;
    local_c = (float)param_1->Z;
    (*___glewUniform3fv)(pcVar1,1,&local_14);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 00499f30 SetTexture ====

/* public: void __thiscall GameModel__SetTexture(class util__SharedPtr_L_structCustomTexture_G_ &) */

void  GameModel__SetTexture__o3(GameModel *this,SharedPtr_L_CustomTexture_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  bool bVar1;
  ReferenceControllerRegistry *this_02;
  CustomTexture *pCVar2;
  
  pCVar2 = (this->Texture).Pointer;
  this_00 = (this->Texture).Controller;
  (this->Texture).Pointer = param_1->Pointer;
  this_01 = param_1->Controller;
  (this->Texture).Controller = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    bVar1 = util__ReferenceController__ReleaseStrongReference(this_00);
    if (bVar1) {
      if (pCVar2 != (CustomTexture *)0x0) {
        (**(code **)(pCVar2->_pad_0x0_0 + 0x10))(1);
      }
      this_02 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,pCVar2);
    }
  }
  return;
}

//==== 00499f90 SetTotalTransformMatrix ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_float_G_ const &)const  */

void 
SpacecraftShader__SetTotalTransformMatrix(SpacecraftShader *this,Matrix4x4_L_float_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 0049a050 SetTotalTransformMatrix_0049a050 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void  SpacecraftShader__SetTotalTransformMatrix(struct
   util__Matrix4x4_L_double_G_ const &)const  */

void 
SpacecraftShader__SetTotalTransformMatrix__o3(SpacecraftShader *this,Matrix4x4_L_double_G_ *param_1)

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
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
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
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 0049a140 SetTotalTransformMatrixDefault ====

/* private: static void __cdecl SpacecraftShader__SetTotalTransformMatrixDefault(void) */

void __cdecl SpacecraftShader__SetTotalTransformMatrixDefault(void)

{
  SpacecraftShader *pSVar1;
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
  
  pSVar1 = SpacecraftShader__GetStatic();
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

//==== 0049a220 SetUseSplineTexCoords ====

/* public: virtual void __thiscall SpacecraftShader__SetUseSplineTexCoords(bool const &)const  */

void __thiscall SpacecraftShader__SetUseSplineTexCoords(SpacecraftShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UseSplineTexCoordsRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 0049a2d0 SetUsesDamageTexture ====

/* public: virtual void __thiscall SpacecraftShader__SetUsesDamageTexture(bool const &)const  */

void __thiscall SpacecraftShader__SetUsesDamageTexture(SpacecraftShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UsesDamageTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 0049a380 SetUsesNormalTexture ====

/* public: virtual void __thiscall SpacecraftShader__SetUsesNormalTexture(bool const &)const  */

void __thiscall SpacecraftShader__SetUsesNormalTexture(SpacecraftShader *this,bool *param_1)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  
  bVar2 = Graphics__IsInsideADrawStack();
  if (bVar2) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "!Graphics__IsInsideADrawStack()",(char *)0x0);
    DebugBreak();
  }
  puVar3 = Shader__GetCachedUsedProgram();
  if (*puVar3 != this->_pad_0x4_1) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e,
                    "*GetCachedUsedProgram() == ShaderID",(char *)0x0);
    DebugBreak();
  }
  iVar1 = (this->UsesNormalTextureRegisterInstance).Location;
  if (iVar1 != -1) {
    (*___glewUniform1i)(iVar1,*param_1 != false);
    glCheckErrorInternal("\\mac\\home\\documents\\code\\cde\\cde\\common\\gameshaders.h",0x3e);
  }
  return;
}

//==== 0049a430 Setup ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall SpacecraftShader__Setup(void) */

bool __thiscall SpacecraftShader__Setup(SpacecraftShader *this)

{
  undefined8 stack0xfffffffc;
  bool bVar1;
  SpacecraftShader *pSVar2;
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
  *(undefined1 *)&this[1]._pad_0x10_4 = 0;
  local_28.Length = 0;
  util__Str_char___operator(&local_28,&local_1c,(Str_L_char_G_ *)&this[1]._pad_0x4_1);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
  }
  util__Str_char___Str_char__o5(&local_34,"Spacecraft");
  util__Str_char___Str_char__o5(&local_28,"Spacecraft");
  bVar1 = Shader__SetupInternal((Shader *)this,&local_28,&local_34,&local_1c);
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  if (bVar1) {
    pSVar2 = SpacecraftShader__GetStatic();
    Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pSVar2);
    pDVar3 = ArmorShader__GetValueLocations();
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
  *(bool *)&this[1]._pad_0x10_4 = bVar1;
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
  }
  return bVar1;
}

//==== 0049a570 SingleItem ====

/* public: static class util__Darray_L_int_G_ __cdecl util__Darray_int___SingleItem(int const &) */

Darray_L_int_G_ * __cdecl
util__Darray_int___SingleItem(Darray_L_int_G_ *__return_storage_ptr__,int *param_1)

{
  Darray_L_int_G_ *this;
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  this = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (int *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_11;
  __return_storage_ptr__->Data = (int *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 1;
  piVar2 = (int *)(uintptr_t)(port_op_new(4));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = 0;
  }
  iVar3 = 0;
  this->Data = piVar2;
  if (0 < this->Capacity) {
    do {
      this->Data[iVar3] = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < this->Capacity);
  }
  iVar3 = this->Size;
  __return_storage_ptr__ = (Darray_L_int_G_ *)(iVar3 + 1);
  Darray_L_util__Reflectable_P_G___SetSize
            ((Darray_L_util__Reflectable_P_G_ *)this,(int *)&__return_storage_ptr__);
  bVar1 = Darray_L_GraphicsResource__Type_G___CheckSize((Darray_L_GraphicsResource__Type_G_ *)this,iVar3);
  if (bVar1) {
    this->Data[this->Size + -1] = *param_1;
  }
  return this;
}

//==== 0049a610 StaticGetPropertyGetters ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall
   util__Reflectable__StaticGetPropertyGetters(void)const  */

void __thiscall util__Reflectable__StaticGetPropertyGetters(Reflectable *this)

{
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = (undefined4)(uintptr_t)&vftable_7;
  in_stack_00000004[1] = 0;
  in_stack_00000004[2] = 0;
  in_stack_00000004[3] = 0;
  return;
}





//==== 0049a640 Str_char__0049a640 ====


/* public:  util__Str_char___Str_char(int) */

Str_L_char_G_ *  util__Str_char___Str_char__o7(Str_L_char_G_ *this,int param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (-1 < param_1) {
    uVar2 = param_1;
  }
  this->Data = (char *)0x0;
  this->Length = 0;
  this->Capacity = uVar2;
  if (0 < (int)uVar2) {
    pcVar1 = (char *)port_op_new(uVar2);
    if (pcVar1 != (char *)0x0) {
      memset(pcVar1,0,uVar2);
      this->Data = pcVar1;
      *pcVar1 = '\0';
      return this;
    }
    this->Data = (char *)0x0;
    uRam00000000 = 0;
  }
  return this;
}





//==== 0049a6a0 Darray_util__Reflectable__ ====


/* public: virtual __thiscall util__Darray_class_util__Reflectable_____Darray_class_util__Reflectable(void) */

void __thiscall
util__Darray_class_util__Reflectable_____Darray_class_util__Reflectable(Darray_L_class_util__Reflectable_P_G_ *this)

{
  *(undefined ***)this = (undefined **)&vftable_6;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0049a6d0 Darray_util__tuple2_util__Reflectable__util__WeakPtr_UIWidget_____ ====


/* public: virtual  Darray_L_structutil__tuple2_L_classutil__Reflectable_P_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___dtor(void) */

void 
util__Darray_struct_util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget________Darray_struct_util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget(Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
           *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_19;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 8 + iVar3 * 0xc;
      do {
        puVar2 = (undefined4 *)(iVar4 + -0xc);
        iVar4 = iVar4 + -0xc;
        iVar3 = iVar3 + -1;
        if ((ReferenceController *)*puVar2 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar2);
        }
      } while (iVar3 != 0);
      iVar4 = *piVar1;
    }
    port_op_delete(piVar1,iVar4 * 0xc + 4);
  }
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0049a750 Darray_util__tuple2_util__Str_char__void____cdecl___void____ ====


/* public: virtual  Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cvoid___cdecl_P__void__G___G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void_______Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void(Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_18;
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
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0049a7d0 Darray_util__tuple2_util__WeakPtr_Fleet__double___ ====


/* public: virtual  Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G__G___dtor(void) */

void __thiscall
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double______Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double(Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_20;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    if (iVar3 != 0) {
      iVar4 = iVar3 * 0x10 + 4 + iVar2;
      do {
        puVar1 = (undefined4 *)(iVar4 + -0x10);
        iVar4 = iVar4 + -0x10;
        iVar3 = iVar3 + -1;
        if ((ReferenceController *)*puVar1 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference((ReferenceController *)*puVar1);
        }
      } while (iVar3 != 0);
      iVar3 = *(int *)(iVar2 + -4);
    }
    port_op_delete((int *)(iVar2 + -4),iVar3 * 0x10 + 4);
  }
  *(undefined ***)this = (undefined **)&vftable;
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 0049a840 SharedPtr_UIWidget_ ====


/* public:  SharedPtr_L_structUIWidget_G___dtor(void) */

void __thiscall
util__SharedPtr_struct_UIWidget____SharedPtr_struct_UIWidget(SharedPtr_L_struct_UIWidget_G_ *this)

{
  bool bVar1;
  ReferenceControllerRegistry *this_00;
  int *piVar2;
  
  if (*(ReferenceController **)(this + 4) != (ReferenceController *)0x0) {
    bVar1 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)(this + 4));
    if (bVar1) {
      piVar2 = *(int **)this;
      if (piVar2 != (int *)0x0) {
        (**(code **)(uintptr_t)(*piVar2 + 4))(1);
        piVar2 = *(int **)this;
      }
      this_00 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
      ReferenceControllerRegistry__PointerWasDestroyed(this_00,piVar2);
      *(undefined4 *)this = 0;
    }
  }
  return;
}





//==== 0049a880 WeakPtr_SpacecraftComponent_ ====

/* public: __thiscall util__WeakPtr_class_SpacecraftComponent____WeakPtr_class_SpacecraftComponent(void) */

void __thiscall
util__WeakPtr_class_SpacecraftComponent____WeakPtr_class_SpacecraftComponent(WeakPtr_L_class_SpacecraftComponent_G_ *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar3;
  undefined4 *puVar4;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar5;
  int iVar6;
  
  pRVar2 = *(ReferenceController **)(this + 4);
  if (pRVar2 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &pRVar2->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x15
              ,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if ((pRVar2->StrongReferenceCount == 0) && (pRVar2->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar3 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 0;
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 10000;
          puVar4 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar4 == (undefined4 *)0x0) {
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar4 = 10000;
            iVar6 = 10000;
            pDVar5 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar4 + 1);
            do {
              pDVar5->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar5->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar5->Size = 0;
              pDVar5->Capacity = 0;
              iVar6 = iVar6 + -1;
              pDVar5 = pDVar5 + 1;
            } while (iVar6 != 0);
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar4 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar3);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,pRVar2);
  }
  return;
}

//==== 0049a890 tuple2_util__Reflectable__util__WeakPtr_UIWidget___ ====

/* public:  tuple2_L_classutil__Reflectable_P_Cclassutil__WeakPtr_L_structUIWidget_G__G___dtor(void) */

void 
util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget______tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget(tuple2_L_util__Reflectable_P_Cutil__WeakPtr_L_UIWidget_G___G_ *this)

{
  int *piVar1;
  ReferenceController *pRVar2;
  HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *pHVar3;
  undefined4 *puVar4;
  Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_ *pDVar5;
  int iVar6;
  
  pRVar2 = *(ReferenceController **)(this + 8);
  if (pRVar2 == (ReferenceController *)0x0) {
    return;
  }
  piVar1 = &pRVar2->WeakReferenceCount;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.cpp",0x15
              ,"WeakReferenceCount >= 0",(char *)0x0);
    DebugBreak();
  }
  if ((pRVar2->StrongReferenceCount == 0) && (pRVar2->WeakReferenceCount == 0)) {
    if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0098956c) {
      _Init_thread_header(&DAT_0098956c);
      if (DAT_0098956c == -1) {
        DAT_00989568 = (undefined4)(uintptr_t)((HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0);
        pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)(uintptr_t)(port_op_new(8));
        if (pHVar3 == (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0) {
          pHVar3 = (HashMap_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
        }
        else {
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 0;
          pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                          *)0x0;
          pHVar3->Capacity = 10000;
          puVar4 = (undefined4 *)(uintptr_t)(port_op_new(0x27104));
          if (puVar4 == (undefined4 *)0x0) {
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)0x0;
          }
          else {
            *puVar4 = 10000;
            iVar6 = 10000;
            pDVar5 = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                      *)(puVar4 + 1);
            do {
              pDVar5->_pad_0x0_0 =
                   (int)&vftable_554;
              pDVar5->Data = (tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G_ *)0x0;
              pDVar5->Size = 0;
              pDVar5->Capacity = 0;
              iVar6 = iVar6 + -1;
              pDVar5 = pDVar5 + 1;
            } while (iVar6 != 0);
            pHVar3->Data = (Darray_L_util__tuple2_L_void_const__P_Cutil__Darray_L_util__ReferenceController__P_G___G___G_
                            *)(puVar4 + 1);
          }
        }
        DAT_00989568 = (undefined4)(uintptr_t)(pHVar3);
        atexit(FUN_0090ff50);
        _Init_thread_footer(&DAT_0098956c);
      }
    }
    ReferenceControllerRegistry__Unregister((ReferenceControllerRegistry *)DAT_00989568,pRVar2);
  }
  return;
}

//==== 0049a8a0 tuple2_util__Str_char__util__Darray_util__Reflectable____ ====


/* public:  tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_classutil__Reflectable_P_G__G___dtor(void) */

void __thiscall
util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable(tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *this)

{
  *(undefined ***)(this + 0xc) = (undefined **)&vftable_6;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)(this + 0xc) = (undefined **)&vftable;
  if (*(void **)this != (void *)0x0) {
    port_op_delete(*(void **)this);
    *(undefined4 *)this = 0;
  }
  return;
}





//==== 0049a9d0 operator__0049a9d0 ====


/* public: class util__WeakPtr_L_classFleet_G_ &  util__WeakPtr_L_classFleet_G___op_assign(class
   util__WeakPtr_L_classFleet_G_ const &) */

WeakPtr_L_class_Fleet_G_ * __thiscall
util__WeakPtr_class_Fleet___operator(WeakPtr_L_class_Fleet_G_ *this,WeakPtr_L_class_Fleet_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  
  this_00 = *(ReferenceController **)(this + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  this_01 = *(ReferenceController **)(param_1 + 4);
  *(ReferenceController **)(this + 4) = this_01;
  if (this_01 != (ReferenceController *)0x0) {
    util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
  }
  if (this_00 != (ReferenceController *)0x0) {
    ReferenceController__ReleaseWeakReference(this_00);
  }
  return this;
}





//==== 0049aa10 operator___0049aa10 ====


/* public: bool const  util__Str_char___operator__o9(char const *)const  */

bool  util__Str_char___operator__o9(Str_L_char_G_ *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  if (this->Capacity < 1) {
    pcVar1 = "";
  }
  else {
    pcVar1 = this->Data;
  }
  iVar2 = (int)pcVar1 - (int)param_1;
  for (; (param_1[iVar2] != '\0' || (*param_1 != '\0')); param_1 = param_1 + 1) {
    if (param_1[iVar2] != *param_1) {
      return false;
    }
  }
  return true;
}





//==== 0049aa50 operator___0049aa50 ====


/* public: class util__Str_L_char_G_ &  util__Str_char___operator__o10(char) */

Str_L_char_G_ *  util__Str_char___operator__o11(Str_L_char_G_ *this,char param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  
  if (param_1 != '\0') {
    this->Length = this->Length + 1;
    iVar2 = this->Length;
    uVar1 = iVar2 + 1;
    if (this->Capacity <= (int)uVar1) {
      this->Capacity = uVar1;
      pcVar3 = (char *)port_op_new(uVar1);
      if (pcVar3 == (char *)0x0) {
        pcVar3 = (char *)0x0;
      }
      else {
        memset(pcVar3,0,uVar1);
      }
      pcVar4 = this->Data;
      cVar5 = *pcVar4;
      pcVar6 = pcVar3;
      if (cVar5 != '\0') {
        do {
          *pcVar6 = cVar5;
          pcVar4 = pcVar4 + 1;
          cVar5 = *pcVar4;
          pcVar6 = pcVar6 + 1;
        } while (cVar5 != '\0');
        pcVar4 = this->Data;
      }
      if (pcVar4 != (char *)0x0) {
        port_op_delete(pcVar4);
        this->Data = (char *)0x0;
      }
      this->Data = pcVar3;
      *pcVar6 = param_1;
      pcVar6[1] = '\0';
      return this;
    }
    pcVar3 = this->Data;
    pcVar3[iVar2 + -1] = param_1;
    (pcVar3 + iVar2 + -1)[1] = '\0';
  }
  return this;
}





//==== 0049aaf0 vector_deleting_destructor_0049aaf0 ====


/* public: virtual void * __thiscall util__Darray_L_classutil__Reflectable_P_G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_class_util__Reflectable_____vector_deleting_destructor
          (Darray_L_class_util__Reflectable_P_G_ *this,uint param_1)

{
  Darray_L_class_util__Reflectable_P_G_ *pDVar1;
  Darray_L_class_util__Reflectable_P_G_ *pDVar2;
  Darray_L_class_util__Reflectable_P_G_ *pDVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    pDVar1 = this + -4;
    iVar4 = *(int *)pDVar1;
    pDVar3 = this + iVar4 * 0x10;
    while (iVar4 != 0) {
      pDVar2 = pDVar3 + -0x10;
      iVar4 = iVar4 + -1;
      *(undefined ***)pDVar2 = (undefined **)&vftable_6;
      if (*(void **)(pDVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(pDVar3 + -0xc));
      }
      *(undefined4 *)(pDVar3 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)&vftable;
      pDVar3 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return this + -4;
  }
  *(undefined ***)this = (undefined **)&vftable_6;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0049abb0 vector_deleting_destructor_0049abb0 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Reflectable__P_Cclassutil__WeakPtr_L_structUIWidget_G__G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget________vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
           *this,uint param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
  *pDVar1;
  Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
  *pDVar2;
  void *pvVar3;
  Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
  *pDVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    iVar5 = *(int *)(this + -4);
    pDVar1 = this + -4;
    pDVar4 = this + iVar5 * 0x10;
    while (iVar5 != 0) {
      pvVar3 = *(void **)(pDVar4 + -0xc);
      pDVar2 = pDVar4 + -0x10;
      iVar5 = iVar5 + -1;
      *(undefined ***)pDVar2 = &vftable_19;
      if (pvVar3 != (void *)0x0) {
        _vector_destructor_iterator_
                  (pvVar3,0xc,*(uint *)((int)pvVar3 + -4),
                   util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget______tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget);
        port_op_delete((int *)((int)pvVar3 + -4),*(int *)((int)pvVar3 + -4) * 0xc + 4);
      }
      *(undefined4 *)(pDVar4 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)&vftable;
      pDVar4 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return pDVar1;
  }
  Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0049ac80 vector_deleting_destructor_0049ac80 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cdouble_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double______vector_deleting_destructor
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this,uint param_1)

{
  Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *pDVar1;
  Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *pDVar2;
  void *pvVar3;
  Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *pDVar4;
  int iVar5;
  
  if ((param_1 & 2) != 0) {
    iVar5 = *(int *)(this + -4);
    pDVar1 = this + -4;
    pDVar4 = this + iVar5 * 0x10;
    while (iVar5 != 0) {
      pvVar3 = *(void **)(pDVar4 + -0xc);
      pDVar2 = pDVar4 + -0x10;
      iVar5 = iVar5 + -1;
      *(undefined ***)pDVar2 = &vftable_20;
      if (pvVar3 != (void *)0x0) {
        _vector_destructor_iterator_
                  (pvVar3,0x10,*(uint *)((int)pvVar3 + -4),
                   util__WeakPtr_class_SpacecraftComponent____WeakPtr_class_SpacecraftComponent);
        port_op_delete((int *)((int)pvVar3 + -4),*(int *)((int)pvVar3 + -4) * 0x10 + 4);
      }
      *(undefined4 *)(pDVar4 + -0xc) = 0;
      *(undefined ***)pDVar2 = (undefined **)&vftable;
      pDVar4 = pDVar2;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pDVar1,*(int *)pDVar1 * 0x10 + 4);
    }
    return pDVar1;
  }
  Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G___dtor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0049ad40 vector_deleting_destructor_0049ad40 ====


/* public: void * __thiscall util__SharedPtr_L_structUIWidget_G_:: 0 vectordeletingdestructor(unsigned
   int) */

void * 
util__SharedPtr_struct_UIWidget____vector_deleting_destructor
          (SharedPtr_L_struct_UIWidget_G_ *this,uint param_1)

{
  SharedPtr_L_struct_UIWidget_G_ *pSVar1;
  SharedPtr_L_struct_UIWidget_G_ *pSVar2;
  SharedPtr_L_struct_UIWidget_G_ *pSVar3;
  bool bVar4;
  ReferenceControllerRegistry *pRVar5;
  int *piVar6;
  int iVar7;
  
  if ((param_1 & 2) != 0) {
    pSVar1 = this + -4;
    iVar7 = *(int *)pSVar1;
    pSVar3 = this + iVar7 * 8;
    while (iVar7 != 0) {
      pSVar2 = pSVar3 + -4;
      pSVar3 = pSVar3 + -8;
      iVar7 = iVar7 + -1;
      if ((*(ReferenceController **)pSVar2 != (ReferenceController *)0x0) &&
         (bVar4 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)pSVar2),
         bVar4)) {
        piVar6 = *(int **)pSVar3;
        if (piVar6 != (int *)0x0) {
          (**(code **)(uintptr_t)(*piVar6 + 4))(1);
          piVar6 = *(int **)pSVar3;
        }
        pRVar5 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
        ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar6);
        *(int *)pSVar3 = 0;
      }
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(pSVar1,*(int *)pSVar1 * 8 + 4);
    }
    return pSVar1;
  }
  if ((*(ReferenceController **)(this + 4) != (ReferenceController *)0x0) &&
     (bVar4 = ReferenceController__ReleaseStrongReference(*(ReferenceController **)(this + 4)),
     bVar4)) {
    piVar6 = *(int **)this;
    if (piVar6 != (int *)0x0) {
      (**(code **)(uintptr_t)(*piVar6 + 4))(1);
      piVar6 = *(int **)this;
    }
    pRVar5 = (ReferenceControllerRegistry *)(uintptr_t)(ReferenceControllerRegistry__Get());
    ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,piVar6);
    *(undefined4 *)this = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,8);
  }
  return this;
}





//==== 0049ae10 vector_deleting_destructor_0049ae10 ====


/* public: void * __thiscall util__tuple2_L_structutil__tuple2_L_structModulePlacerconst_P_Cint_G__Cclass_util__Darray_L_structutil__Vec3_L_double_G__G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_struct_util__tuple2_struct_ModulePlacer_const__int__class_util__Darray_struct_util__Vec3_double________vector_deleting_destructor
          (tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
           *this,uint param_1)

{
  tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *ptVar1;
  tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *ptVar2;
  tuple2_L_struct_util__tuple2_L_struct_ModulePlacer_const_P_Cint_G__Cclass_util__Darray_L_struct_util__Vec3_L_double_G___G___G_
  *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) != 0) {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    if (iVar4 != 0) {
      ptVar3 = this + iVar4 * 0x18 + 8;
      do {
        ptVar2 = ptVar3 + -0x18;
        iVar4 = iVar4 + -1;
        *(undefined ***)ptVar2 = (undefined **)&vftable_17;
        if (*(void **)(ptVar3 + -0x14) != (void *)0x0) {
          port_op_delete(*(void **)(ptVar3 + -0x14));
        }
        *(undefined4 *)(ptVar3 + -0x14) = 0;
        *(undefined ***)ptVar2 = (undefined **)&vftable;
        ptVar3 = ptVar2;
      } while (iVar4 != 0);
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x18 + 4);
    }
    return ptVar1;
  }
  *(undefined ***)(this + 8) = (undefined **)&vftable_17;
  if (*(void **)(this + 0xc) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0xc));
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)(this + 8) = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x18);
  }
  return this;
}





//==== 0049aec0 vector_deleting_destructor_0049aec0 ====


/* public: void * __thiscall util__tuple2_L_classutil__Str_L_char_G__Cvoid___cdecl_P__void__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_class_util__Str_char__void____cdecl___void_____vector_deleting_destructor
          (tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ *this,uint param_1)

{
  tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ *ptVar1;
  tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ *ptVar2;
  tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G_ *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    if (*(void **)this != (void *)0x0) {
      port_op_delete(*(void **)this);
      *(undefined4 *)this = 0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x10);
    }
    return this;
  }
  ptVar1 = this + -4;
  iVar4 = *(int *)ptVar1;
  ptVar3 = this + iVar4 * 0x10;
  while (iVar4 != 0) {
    ptVar2 = ptVar3 + -0x10;
    ptVar3 = ptVar3 + -0x10;
    iVar4 = iVar4 + -1;
    if (*(void **)ptVar2 != (void *)0x0) {
      port_op_delete(*(void **)ptVar2);
      *(undefined4 *)ptVar3 = 0;
    }
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(ptVar1,*(int *)ptVar1 * 0x10 + 4);
  }
  return this + -4;
}





//==== 0049af60 vector_deleting_destructor_0049af60 ====


/* public: void * __thiscall util__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_int_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_class_util__Str_char__class_util__Darray_int______vector_deleting_destructor
          (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_int_G___G_ *this,uint param_1)

{
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_int_G___G_ *ptVar1;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_int_G___G_ *ptVar2;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_int_G___G_ *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    *(undefined ***)(this + 0xc) = (undefined **)&vftable_11;
    if (*(void **)(this + 0x10) != (void *)0x0) {
      port_op_delete(*(void **)(this + 0x10));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined ***)(this + 0xc) = (undefined **)&vftable;
    if (*(void **)this != (void *)0x0) {
      port_op_delete(*(void **)this);
      *(undefined4 *)this = 0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x1c);
    }
  }
  else {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    ptVar3 = this + iVar4 * 0x1c;
    while (iVar4 != 0) {
      ptVar2 = ptVar3 + -0x1c;
      iVar4 = iVar4 + -1;
      *(undefined ***)(ptVar3 + -0x10) = (undefined **)&vftable_11;
      if (*(void **)(ptVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(ptVar3 + -0xc));
      }
      *(undefined4 *)(ptVar3 + -0xc) = 0;
      *(undefined ***)(ptVar3 + -0x10) = (undefined **)&vftable;
      ptVar3 = ptVar2;
      if (*(void **)ptVar2 != (void *)0x0) {
        port_op_delete(*(void **)ptVar2);
        *(undefined4 *)ptVar2 = 0;
      }
    }
    this = ptVar1;
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x1c + 4);
      return ptVar1;
    }
  }
  return this;
}





//==== 0049b060 vector_deleting_destructor_0049b060 ====


/* public: void * __thiscall util__tuple2_L_classutil__Str_L_char_G__Cclassutil__Darray_L_class_util__Reflectable_P_G__G_:: 0 vectordeletingdestructor(unsigned int) */

void * 
util__tuple2_class_util__Str_char__class_util__Darray_class_util__Reflectable_______vector_deleting_destructor
          (tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *this,
          uint param_1)

{
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptVar1;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptVar2;
  tuple2_L_class_util__Str_L_char_G__Cclass_util__Darray_L_class_util__Reflectable_P_G___G_ *ptVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    *(undefined ***)(this + 0xc) = (undefined **)&vftable_6;
    if (*(void **)(this + 0x10) != (void *)0x0) {
      port_op_delete(*(void **)(this + 0x10));
    }
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined ***)(this + 0xc) = (undefined **)&vftable;
    if (*(void **)this != (void *)0x0) {
      port_op_delete(*(void **)this);
      *(undefined4 *)this = 0;
    }
    if ((param_1 & 1) != 0) {
      port_op_delete(this,0x1c);
    }
  }
  else {
    ptVar1 = this + -4;
    iVar4 = *(int *)ptVar1;
    ptVar3 = this + iVar4 * 0x1c;
    while (iVar4 != 0) {
      ptVar2 = ptVar3 + -0x1c;
      iVar4 = iVar4 + -1;
      *(undefined ***)(ptVar3 + -0x10) = (undefined **)&vftable_6;
      if (*(void **)(ptVar3 + -0xc) != (void *)0x0) {
        port_op_delete(*(void **)(ptVar3 + -0xc));
      }
      *(undefined4 *)(ptVar3 + -0xc) = 0;
      *(undefined ***)(ptVar3 + -0x10) = (undefined **)&vftable;
      ptVar3 = ptVar2;
      if (*(void **)ptVar2 != (void *)0x0) {
        port_op_delete(*(void **)ptVar2);
        *(undefined4 *)ptVar2 = 0;
      }
    }
    this = ptVar1;
    if ((param_1 & 1) != 0) {
      port_op_delete(ptVar1,*(int *)ptVar1 * 0x1c + 4);
      return ptVar1;
    }
  }
  return this;
}





//==== 0049b200 scalar_deleting_destructor_0049b200 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__Vec3_L_double_G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__Vec3_double______scalar_deleting_destructor
          (Darray_L_struct_util__Vec3_L_double_G___G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)&vftable_17;
  if (*(void **)(this + 4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 4));
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined ***)this = (undefined **)&vftable;
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0049b250 scalar_deleting_destructor_0049b250 ====


/* public: virtual void * __thiscall util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cvoid____cdecl_P__void__G__G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void_______scalar_deleting_destructor__o2
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *this,
          uint param_1)

{
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void_______scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 0049b280 Clear_0049b280 ====


/* public: virtual void  util__Darray_L_structutil__Vec3_L_double_G__G___Clear(void) */

void __thiscall
util__Darray_struct_util__Vec3_double_____Clear(Darray_L_struct_util__Vec3_L_double_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0049b2a0 Clear_0049b2a0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Reflectable_P_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget_______Clear(Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
      *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0049b2c0 Clear_0049b2c0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cvoid____cdecl_P__void__G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______Clear
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0049b2e0 Clear_0049b2e0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cdouble_G__G___Clear(void) */

void 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_____Clear
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 0049b3e0 GetUIIconSize ====


/* public: static int __cdecl Fleet__GetUIIconSize(void) */

int __cdecl Fleet__GetUIIconSize(void)

{
  return 0xf;
}





//==== 0049b3f0 SetAll_0049b3f0 ====


/* public: virtual void  util__Darray_L_structutil__Vec3_L_double_G__G___SetAll(struct
   util__Vec3_L_double_G_ const &) */

void 
util__Darray_struct_util__Vec3_double_____SetAll
          (Darray_L_struct_util__Vec3_L_double_G___G_ *this,Vec3_L_double_G_ *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(this + 4);
  if (puVar4 != puVar4 + *(int *)(this + 8) * 6) {
    do {
      uVar1 = *(undefined4 *)((int)&param_1->X + 4);
      uVar2 = *(undefined4 *)&param_1->Y;
      uVar3 = *(undefined4 *)((int)&param_1->Y + 4);
      *puVar4 = *(undefined4 *)&param_1->X;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      *(double *)(puVar4 + 4) = param_1->Z;
      puVar4 = puVar4 + 6;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}





//==== 0049b440 SetAll_0049b440 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__Reflectable_P_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___SetAll(struct util__tuple2_L_classutil__Reflectable_P_Cclass_util__WeakPtr_L_structUIWidget_G__G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget_______SetAll(Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
       *this,tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 3) {
    puVar2 = puVar1 + 2;
    do {
      *puVar1 = *(undefined4 *)param_1;
      this_00 = (ReferenceController *)*puVar2;
      puVar2[-1] = *(undefined4 *)(param_1 + 4);
      this_01 = *(ReferenceController **)(param_1 + 8);
      *puVar2 = (undefined4)(uintptr_t)(this_01);
      if (this_01 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      puVar1 = puVar1 + 3;
      puVar2 = puVar2 + 3;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
  }
  return;
}





//==== 0049b4b0 SetAll_0049b4b0 ====


/* public: virtual void  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cdouble_G__G___SetAll(struct util__tuple2_L_classutil__WeakPtr_L_classFleet_G__Cdouble_G_ const &) */

void 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_____SetAll
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this,
          tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G_ *param_1)

{
  ReferenceController *this_00;
  ReferenceController *this_01;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != puVar1 + *(int *)(this + 8) * 4) {
    do {
      this_00 = (ReferenceController *)puVar1[1];
      *puVar1 = *(undefined4 *)param_1;
      this_01 = *(ReferenceController **)(param_1 + 4);
      puVar1[1] = (undefined4)(uintptr_t)(this_01);
      if (this_01 != (ReferenceController *)0x0) {
        util__MakeTuple_class_util__WeakPtr_struct_UICompartmentInfo__class_util__WeakPtr_struct_UIWidget(this_01);
      }
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_1 + 8);
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  return;
}





//==== 0049b520 SetSize_0049b520 ====


/* private: void  util__Darray_L_structutil__Vec3_L_double_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__Vec3_double_____SetSize
          (Darray_L_struct_util__Vec3_L_double_G___G_ *this,int *param_1)

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
     (puVar4 = (undefined4 *)(iVar2 + iVar3 * 0x18),
     puVar4 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0x18))) {
    do {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined8 *)(puVar4 + 4) = 0;
      puVar4 = puVar4 + 6;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0049b5d0 SetSize_0049b5d0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__Reflectable_P_Cclass_util__WeakPtr_L_structUIWidget_G__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__Reflectable__class_util__WeakPtr_struct_UIWidget_______SetSize(Darray_L_struct_util__tuple2_L_class_util__Reflectable_P_Cclass_util__WeakPtr_L_struct_UIWidget_G___G___G_
        *this,int *param_1)

{
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
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
    puVar5 = (undefined4 *)(iVar2 + iVar3 * 0xc);
    if (puVar5 != (undefined4 *)(iVar2 + *(int *)(this + 8) * 0xc)) {
      puVar4 = puVar5 + 2;
      do {
        *puVar5 = 0;
        this_00 = (ReferenceController *)*puVar4;
        puVar4[-1] = 0;
        *puVar4 = 0;
        if (this_00 != (ReferenceController *)0x0) {
          ReferenceController__ReleaseWeakReference(this_00);
        }
        puVar5 = puVar5 + 3;
        puVar4 = puVar4 + 3;
      } while (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 0xc));
      *(int *)(this + 8) = iVar3;
      return;
    }
    *(int *)(this + 8) = iVar3;
    return;
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0049b6c0 SetSize_0049b6c0 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cvoid____cdecl_P__void__G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
          (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *this,
          int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *this_00;
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
     (this_00 = (Str_L_char_G_ *)(iVar3 * 0x10 + iVar2),
     this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    SStack_14.Data = (char *)0x0;
    SStack_14.Capacity = 0;
    SStack_14.Length = 0;
    uStack_8 = 0;
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_14);
      this_00[1].Data = (char *)0x0;
      this_00 = (Str_L_char_G_ *)&this_00[1].Capacity;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0049b790 SetSize_0049b790 ====


/* private: void  util__Darray_L_structutil__tuple2_L_classutil__WeakPtr_L_class_Fleet_G__Cdouble_G__G___SetSize(int const &) */

void 
util__Darray_struct_util__tuple2_class_util__WeakPtr_class_Fleet__double_____SetSize
          (Darray_L_struct_util__tuple2_L_class_util__WeakPtr_L_class_Fleet_G__Cdouble_G___G_ *this,int *param_1)

{
  ReferenceController *this_00;
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
     (puVar4 = (undefined4 *)(iVar3 * 0x10 + iVar2),
     puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x10 + iVar2))) {
    do {
      this_00 = (ReferenceController *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      if (this_00 != (ReferenceController *)0x0) {
        ReferenceController__ReleaseWeakReference(this_00);
      }
      *(undefined8 *)(puVar4 + 2) = 0;
      puVar4 = puVar4 + 4;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x10 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 0049b850 SubStr ====


/* public: class util__Str_L_char_G_  util__Str_char___SubStr(int,class util__Maybe_L_int_G_ const
   &)const  */

Str_L_char_G_ * 
util__Str_char___SubStr
          (Str_L_char_G_ *this,Str_L_char_G_ *__return_storage_ptr__,int param_1,Maybe_L_int_G_ *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  Str_L_char_G_ SStack_1c;
  uint uStack_10;
  char *pcStack_c;
  int iStack_8;
  
  if (param_1 < 0) {
    __return_storage_ptr__->Data = (char *)0x0;
    __return_storage_ptr__->Capacity = 0;
    __return_storage_ptr__->Length = 0;
    return __return_storage_ptr__;
  }
  if (param_2->IsValidData == false) {
    iStack_8 = this->Length;
  }
  else {
    iStack_8 = param_2->Data + param_1;
    if (this->Length < iStack_8) {
      iStack_8 = this->Length;
    }
  }
  pcVar8 = (char *)0x0;
  uVar6 = (iStack_8 - param_1) + 2;
  SStack_1c.Length = 0;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
    SStack_1c.Data = (char *)0x0;
    SStack_1c.Capacity = 0;
  }
  else {
    (*(uint64_t*)&(SStack_1c)) = (ulonglong)uVar6 << 0x20;
    if (0 < (int)uVar6) {
      pcVar8 = (char *)port_op_new(uVar6);
      if (pcVar8 == (char *)0x0) {
        pcVar8 = (char *)0x0;
      }
      else {
        memset(pcVar8,0,uVar6);
      }
      SStack_1c.Data = pcVar8;
      *pcVar8 = '\0';
    }
  }
  iVar5 = 0;
  if (this->Capacity < 1) {
    pcStack_c = "";
  }
  else {
    pcStack_c = this->Data;
  }
  if (param_1 < iStack_8) {
    do {
      cVar2 = pcStack_c[param_1];
      if (cVar2 != '\0') {
        SStack_1c.Length = iVar5 + 1;
        uVar1 = iVar5 + 2;
        if ((int)uVar1 < (int)uVar6) {
          pcVar7 = pcVar8 + iVar5;
        }
        else {
          SStack_1c.Capacity = uVar1;
          uStack_10 = uVar1;
          pcVar4 = (char *)port_op_new(uVar1);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = (char *)0x0;
          }
          else {
            memset(pcVar4,0,uVar1);
          }
          cVar3 = *pcVar8;
          pcVar7 = pcVar4;
          if (cVar3 != '\0') {
            do {
              *pcVar7 = cVar3;
              pcVar7 = pcVar7 + 1;
              cVar3 = pcVar7[(int)pcVar8 - (int)pcVar4];
            } while (cVar3 != '\0');
          }
          port_op_delete(pcVar8);
          SStack_1c.Data = pcVar4;
          uVar6 = uStack_10;
          pcVar8 = pcVar4;
        }
        *pcVar7 = cVar2;
        pcVar7[1] = '\0';
        iVar5 = SStack_1c.Length;
      }
      param_1 = param_1 + 1;
    } while (param_1 < iStack_8);
  }
  util__Str_char___Str_char(__return_storage_ptr__,&SStack_1c);
  if (pcVar8 != (char *)0x0) {
    port_op_delete(pcVar8);
  }
  return __return_storage_ptr__;
}





//==== 0049b9d0 CDE_game_main ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */

int _main(int _Argc,char **_Argv,char **_Env)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  Str_L_char_G_ *pSVar4;
  char *pcVar5;
  char *pcVar6;
  MainManager *this;
  GameManager *pGVar7;
  Manager *pMVar8;
  LogisticManager *this_00;
  void *pvVar9;
  Atlas *pAVar10;
  char cVar11;
  int iVar12;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  undefined1 local_20 [8];
  undefined1 local_18;
  int local_14;
  char local_10;
  int local_c [2];
  
  util__Str_char___Str_char__o5((Str_L_char_G_ *)local_20,"1.2.1.3");
  util__Str_char___Str_char__o5(&local_2c,"CDE");
  util__Str_char___Str_char__o5(&local_38,"Children of a Dead Earth");
  SetGameStringInfo(&local_38,&local_2c,(Str_L_char_G_ *)local_20);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    (*(uint64_t*)&(local_38)) = (*(uint64_t*)&(local_38)) & 0xffffffff00000000;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    (*(uint64_t*)&(local_2c)) = (*(uint64_t*)&(local_2c)) & 0xffffffff00000000;
  }
  if ((char *)(*(uint32_t*)&(local_20)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_20)));
  }
  util__Str_char___Str_char__o5(&local_38,"http://childrenofadeadearth.boards.net/");
  util__SetSupportWebsiteUrl(&local_38);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
  }
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  util__Str_char___operator__o8(&GlobalLevel,&local_38);
  if (1 < _Argc) {
    iVar12 = 1;
    do {
      local_2c.Length = 0;
      local_2c.Data = (char *)0x0;
      local_2c.Capacity = 0;
      util__Str_char___Str_char__o5(&local_2c,_Argv[iVar12]);
      pcVar6 = local_2c.Data;
      pcVar2 = "PrintMaterials";
      pcVar5 = "";
      if (0 < local_2c.Capacity) {
        pcVar5 = local_2c.Data;
      }
      while( true ) {
        if (((pcVar5 + -0x91a9a4)[(int)pcVar2] == '\0') && (*pcVar2 == '\0')) {
          DebugPrintMaterials = true;
          goto LAB_0049bbb9;
        }
        if ((pcVar5 + -0x91a9a4)[(int)pcVar2] != *pcVar2) break;
        pcVar2 = pcVar2 + 1;
      }
      local_38.Length = 0;
      local_38.Data = (char *)0x0;
      local_38.Capacity = 0;
      util__Str_char___Str_char__o5(&local_38,"Level=");
      pcVar5 = local_38.Data;
      local_c[1] = 0;
      piVar3 = (int *)&cde_l2_0b2b1c9f_NullString;
      if (0 < local_38.Capacity) {
        piVar3 = (int *)local_38.Data;
      }
      local_c[0] = 0;
      util__Str_L_char_G___Find(&local_2c,(char *)&local_14,piVar3,local_c);
      if ((local_10 != '\0') && (local_14 == 0)) {
        (*(uint32_t*)((char*)&(local_20)+4)) = 0;
        local_18 = 0;
        pSVar4 = util__Str_char___SubStr
                           (&local_2c,&local_44,local_38.Length,(Maybe_L_int_G_ *)(local_20 + 4));
        util__Str_char___operator__o8(&GlobalLevel,pSVar4);
        if (local_44.Data != (char *)0x0) {
          port_op_delete(local_44.Data);
          local_44.Data = (char *)0x0;
        }
        pcVar6 = local_2c.Data;
      }
      if ((int *)pcVar5 != (int *)0x0) {
        port_op_delete(pcVar5);
        (*(uint64_t*)&(local_38)) = (*(uint64_t*)&(local_38)) & 0xffffffff00000000;
      }
LAB_0049bbb9:
      pcVar5 = "";
      if (0 < local_2c.Capacity) {
        pcVar5 = pcVar6;
      }
      pSVar4 = (Str_L_char_G_ *)(uintptr_t)(util__Printf(&local_50,(wchar_t*)("%s "),pcVar5));
      util__Log(pSVar4);
      if (local_50.Data != (char *)0x0) {
        port_op_delete(local_50.Data);
        local_50.Data = (char *)0x0;
      }
      if (pcVar6 != (char *)0x0) {
        port_op_delete(pcVar6);
        (*(uint64_t*)&(local_2c)) = (*(uint64_t*)&(local_2c)) & 0xffffffff00000000;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < _Argc);
  }
  InitializeGameShadersHook = (void (*)())InitializeGameShaders;
  PreFrameSetupHook = (void (*)())PreFrameSetup;
  RenderDeferredLightingHook = (void (*)())DeferredLightingRender;
  SetPrintFunction(CustomPrint);
  EngineMain(_Argc,_Argv);
  local_38.Length = 0;
  do {
    iVar12 = local_38.Length;
    local_38.Length = iVar12 + 1;
  } while ((&DAT_0091a949)[iVar12] != '\0');
  uVar1 = iVar12 + 2;
  local_38.Capacity = uVar1;
  pcVar6 = (char *)(uintptr_t)(port_op_new(uVar1));
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    memset(pcVar6,0,uVar1);
  }
  local_38.Data = pcVar6;
  cVar11 = 'P';
  pcVar5 = pcVar6;
  do {
    *pcVar5 = cVar11;
    pcVar5 = pcVar5 + 1;
    cVar11 = pcVar5[(int)s_Preferences - (int)pcVar6];
  } while (cVar11 != '\0');
  *pcVar5 = '\0';
  util__Str_char___operator__o8(&PreferencesBase__PreferencesTypeName,&local_38);
  if (pcVar6 != (char *)0x0) {
    port_op_delete(pcVar6);
  }
  PreferencesBase__PreferencesFactory = (undefined4)(uintptr_t)(Preferences__GetFactory);
  EngineBegin();
  this = (MainManager *)(uintptr_t)(port_op_new(0x128));
  if (this == (MainManager *)0x0) {
    pMVar8 = (Manager *)0x0;
  }
  else {
    memset(this,0,0x128);
    pGVar7 = GetGameManager();
    pMVar8 = (Manager *)MainManager__MainManager(this,pGVar7);
  }
  pGVar7 = GetGameManager();
  GameManager__RegisterManager(pGVar7,pMVar8);
  this_00 = (LogisticManager *)(uintptr_t)(port_op_new(0x60));
  if (this_00 == (LogisticManager *)0x0) {
    pMVar8 = (Manager *)0x0;
  }
  else {
    memset(this_00,0,0x60);
    pGVar7 = GetGameManager();
    pMVar8 = (Manager *)LogisticManager__LogisticManager(this_00,pGVar7);
  }
  pGVar7 = GetGameManager();
  GameManager__RegisterManager(pGVar7,pMVar8);
  pvVar9 = (void *)(uintptr_t)(port_op_new(0xb20));
  if (pvVar9 == (void *)0x0) {
    pMVar8 = (Manager *)0x0;
  }
  else {
    memset(pvVar9,0,0xb20);
    pGVar7 = GetGameManager();
    pMVar8 = (Manager *)StrategicManager__StrategicManager(pGVar7);
  }
  pGVar7 = GetGameManager();
  GameManager__RegisterManager(pGVar7,pMVar8);
  pvVar9 = (void *)(uintptr_t)(port_op_new(0x280));
  if (pvVar9 == (void *)0x0) {
    pMVar8 = (Manager *)0x0;
  }
  else {
    memset(pvVar9,0,0x280);
    pGVar7 = GetGameManager();
    pMVar8 = (Manager *)TacticalManager__TacticalManager(pGVar7);
  }
  pGVar7 = GetGameManager();
  GameManager__RegisterManager(pGVar7,pMVar8);
  pAVar10 = (Atlas *)(uintptr_t)(port_op_new(0x58));
  if (pAVar10 == (Atlas *)0x0) {
    pAVar10 = (Atlas *)0x0;
  }
  else {
    { Vec2_L_int_G_ _t; *(uint64_t *)&_t = 0x40000000400ul; g_iconsize_t1 = _t; }
    pAVar10 = (Atlas *)Icons__Atlas__Atlas(pAVar10,0x40,(*(Vec4_L_int_G_ *)&g_iconsize_t1),
                                           (_func_void **)&Icons__GameIcons);
  }
  pGVar7 = GetGameManager();
  GameManager__RegisterIconAtlas(pGVar7,pAVar10);
  pAVar10 = (Atlas *)(uintptr_t)(port_op_new(0x58));
  if (pAVar10 == (Atlas *)0x0) {
    pAVar10 = (Atlas *)0x0;
  }
  else {
    { Vec2_L_int_G_ _t; *(uint64_t *)&_t = 0x40000000800ul; g_iconsize_t1 = _t; }
    pAVar10 = (Atlas *)Icons__Atlas__Atlas(pAVar10,0x100,(*(Vec4_L_int_G_ *)&g_iconsize_t1),
                                           (_func_void **)&Icons__BigGameIcons);
  }
  pGVar7 = GetGameManager();
  GameManager__RegisterIconAtlas(pGVar7,pAVar10);
  EngineCoreLoop();
  EngineEnd();
  return 0;
}





//==== 0049be50 ArmorShader ====

/* public: __thiscall ArmorShader__ArmorShader(void) */

ArmorShader * __thiscall ArmorShader__ArmorShader(ArmorShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_29;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = ArmorShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = ArmorShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = ArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = ArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = ArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = ArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = ArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->PixelsPerMeterRegisterInstance).Location = -1;
  local_14 = ArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadPixelsPerMeterLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049c170 AsteroidCratersShader ====

/* public: __thiscall AsteroidCratersShader__AsteroidCratersShader(void) */

AsteroidCratersShader * __thiscall
AsteroidCratersShader__AsteroidCratersShader(AsteroidCratersShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_41;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = AsteroidCratersShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->RandomIntegralOffsetRegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadRandomIntegralOffsetLocation;
  }
  (this->WhiteNoiseTextures0RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures0Location;
  }
  (this->WhiteNoiseTextures1RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures1Location;
  }
  (this->WhiteNoiseTextures2RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures2Location;
  }
  (this->WhiteNoiseTextures3RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures3Location;
  }
  (this->WhiteNoiseTextures4RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures4Location;
  }
  (this->WhiteNoiseTextures5RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures5Location;
  }
  (this->WhiteNoiseTextures6RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures6Location;
  }
  (this->WhiteNoiseTextures7RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures7Location;
  }
  (this->WhiteNoiseTextures8RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures8Location;
  }
  (this->WhiteNoiseTextures9RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures9Location;
  }
  (this->WhiteNoiseTextures10RegisterInstance).Location = -1;
  local_14 = AsteroidCratersShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures10Location;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049c750 AsteroidDiffuseShader ====

/* public: __thiscall AsteroidDiffuseShader__AsteroidDiffuseShader(void) */

AsteroidDiffuseShader * __thiscall
AsteroidDiffuseShader__AsteroidDiffuseShader(AsteroidDiffuseShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_42;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = AsteroidDiffuseShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->RandomOffsetRegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__LoadRandomOffsetLocation;
  }
  (this->WhiteNoiseTextures0RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures0Location;
  }
  (this->WhiteNoiseTextures1RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures1Location;
  }
  (this->WhiteNoiseTextures2RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures2Location;
  }
  (this->WhiteNoiseTextures3RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures3Location;
  }
  (this->WhiteNoiseTextures4RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures4Location;
  }
  (this->WhiteNoiseTextures5RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures5Location;
  }
  (this->WhiteNoiseTextures6RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures6Location;
  }
  (this->WhiteNoiseTextures7RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures7Location;
  }
  (this->WhiteNoiseTextures8RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures8Location;
  }
  (this->WhiteNoiseTextures9RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures9Location;
  }
  (this->WhiteNoiseTextures10RegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures10Location;
  }
  (this->AdditionalTextureRegisterInstance).Location = -1;
  local_14 = AsteroidDiffuseShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__LoadAdditionalTextureLocation;
  }
  local_14 = AsteroidDiffuseShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__SetAdditionalTextureDefault;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049cdb0 AsteroidHeightShader ====

/* public: __thiscall AsteroidHeightShader__AsteroidHeightShader(void) */

AsteroidHeightShader * __thiscall
AsteroidHeightShader__AsteroidHeightShader(AsteroidHeightShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_43;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = AsteroidHeightShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = AsteroidHeightShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = AsteroidHeightShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = AsteroidHeightShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidHeightShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidHeightShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = AsteroidHeightShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049d090 AsteroidNormalShader ====

/* public: __thiscall AsteroidNormalShader__AsteroidNormalShader(void) */

AsteroidNormalShader * __thiscall
AsteroidNormalShader__AsteroidNormalShader(AsteroidNormalShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_44;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = AsteroidNormalShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = AsteroidNormalShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = AsteroidNormalShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = AsteroidNormalShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidNormalShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = AsteroidNormalShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = AsteroidNormalShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->CubeMapFaceIDRegisterInstance).Location = -1;
  local_14 = AsteroidNormalShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidNormalShader__LoadCubeMapFaceIDLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049d3b0 BlastLauncherShader ====


/* public: __thiscall BlastLauncherShader__BlastLauncherShader(void) */

BlastLauncherShader * __thiscall BlastLauncherShader__BlastLauncherShader(BlastLauncherShader *this)

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
  float afStack_78 [18];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *pDStack_18;
  Darray_L_void____cdecl_P__void__G_ *pDStack_14;
  
  Shader__Shader((Shader *)this);
  *(undefined ***)this = &vftable_30;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_18->Size;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_18,(int *)&pDStack_14);
  pDVar5 = pDStack_18;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadModelMatrixLocation;
  }
  iStack_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = afStack_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = iStack_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadInverseModelMatrixLocation;
  }
  iVar8 = 0;
  pfVar11 = afStack_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadTotalTransformMatrixLocation;
  }
  iVar10 = 0;
  pfVar11 = afStack_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == iStack_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadNormalMatrixLocation;
  }
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadNearPlaneLocation;
  }
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadFarPlaneLocation;
  }
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadTextureSizeLocation;
  }
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadPixelsPerMeterLocation;
  }
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadPayloadDiameter_mLocation;
  }
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = BlastLauncherShader__LoadCellSeparation_mLocation;
  }
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(char *)&(this[0x60]) = 0x0;
  return this;
}





//==== 0049d750 CityLightsShader ====

/* public: __thiscall CityLightsShader__CityLightsShader(void) */

CityLightsShader * __thiscall CityLightsShader__CityLightsShader(CityLightsShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_40;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = CityLightsShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = CityLightsShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->RandomOffsetRegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__LoadRandomOffsetLocation;
  }
  (this->WhiteNoiseTextures0RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures0Location;
  }
  (this->WhiteNoiseTextures1RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures1Location;
  }
  (this->WhiteNoiseTextures2RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures2Location;
  }
  (this->WhiteNoiseTextures3RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures3Location;
  }
  (this->WhiteNoiseTextures4RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures4Location;
  }
  (this->WhiteNoiseTextures5RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures5Location;
  }
  (this->WhiteNoiseTextures6RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures6Location;
  }
  (this->WhiteNoiseTextures7RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures7Location;
  }
  (this->WhiteNoiseTextures8RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures8Location;
  }
  (this->WhiteNoiseTextures9RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures9Location;
  }
  (this->WhiteNoiseTextures10RegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures10Location;
  }
  (this->InitialFrequencyRegisterInstance).Location = -1;
  local_14 = CityLightsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = CityLightsShader__LoadInitialFrequencyLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049dd70 DamageGeneratorShader ====

/* public: __thiscall DamageGeneratorShader__DamageGeneratorShader(void) */

DamageGeneratorShader * __thiscall
DamageGeneratorShader__DamageGeneratorShader(DamageGeneratorShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_46;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = DamageGeneratorShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->RandomOffsetRegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__LoadRandomOffsetLocation;
  }
  (this->WhiteNoiseTextures0RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures0Location;
  }
  (this->WhiteNoiseTextures1RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures1Location;
  }
  (this->WhiteNoiseTextures2RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures2Location;
  }
  (this->WhiteNoiseTextures3RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures3Location;
  }
  (this->WhiteNoiseTextures4RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures4Location;
  }
  (this->WhiteNoiseTextures5RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures5Location;
  }
  (this->WhiteNoiseTextures6RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures6Location;
  }
  (this->WhiteNoiseTextures7RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures7Location;
  }
  (this->WhiteNoiseTextures8RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures8Location;
  }
  (this->WhiteNoiseTextures9RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures9Location;
  }
  (this->WhiteNoiseTextures10RegisterInstance).Location = -1;
  local_14 = DamageGeneratorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures10Location;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049e350 DamageShader ====

/* public: __thiscall DamageShader__DamageShader(void) */

DamageShader * __thiscall DamageShader__DamageShader(DamageShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_27;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = DamageShader__GetValueLocations();
  iVar11 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar6 = local_18;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = DamageShader__GetValueLocations();
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
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->EffectRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DamageShader__LoadEffectLocation;
  }
  (this->DamageEffectRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DamageShader__LoadDamageEffectLocation;
  }
  (this->HeatingTemperature_KRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DamageShader__LoadHeatingTemperature_KLocation;
  }
  (this->ApplyHeatRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DamageShader__LoadApplyHeatLocation;
  }
  (this->UseTextureMaskRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DamageShader__LoadUseTextureMaskLocation;
  }
  (this->TextureMaskRegisterInstance).Location = -1;
  local_14 = DamageShader__GetValueLocations();
  iVar11 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar11 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar11);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DamageShader__LoadTextureMaskLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049e770 DamagedArmorShader ====

/* public: __thiscall DamagedArmorShader__DamagedArmorShader(void) */

DamagedArmorShader * __thiscall DamagedArmorShader__DamagedArmorShader(DamagedArmorShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_28;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = DamagedArmorShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = DamagedArmorShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = DamagedArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = DamagedArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = DamagedArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = DamagedArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = DamagedArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->PixelsPerMeterRegisterInstance).Location = -1;
  local_14 = DamagedArmorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadPixelsPerMeterLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049ea90 DeferredGlobalLightingShader ====

/* public: __thiscall DeferredGlobalLightingShader__DeferredGlobalLightingShader(void) */

DeferredGlobalLightingShader * __thiscall
DeferredGlobalLightingShader__DeferredGlobalLightingShader(DeferredGlobalLightingShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_23;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TopLeftFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadTopLeftFrustumCornerLocation;
  }
  (this->TopRightFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadTopRightFrustumCornerLocation;
  }
  (this->BottomLeftFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadBottomLeftFrustumCornerLocation;
  }
  (this->BottomRightFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadBottomRightFrustumCornerLocation;
  }
  (this->DepthBufferTextureRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadDepthBufferTextureLocation;
  }
  local_14 = DeferredGlobalLightingShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__SetDepthBufferTextureDefault;
  }
  (this->ColorAndRoughnessTextureRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadColorAndRoughnessTextureLocation;
  }
  local_14 = DeferredGlobalLightingShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__SetColorAndRoughnessTextureDefault;
  }
  (this->NormalsTextureRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadNormalsTextureLocation;
  }
  local_14 = DeferredGlobalLightingShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__SetNormalsTextureDefault;
  }
  (this->CameraPositionRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadCameraPositionLocation;
  }
  (this->ReferenceIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadReferenceIrradiance_W_m2Location;
  }
  (this->LightColorRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadLightColorLocation;
  }
  (this->LightDirectionRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadLightDirectionLocation;
  }
  (this->IsMainLightRegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadIsMainLightLocation;
  }
  (this->LightIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = DeferredGlobalLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadLightIrradiance_W_m2Location;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049f120 DeferredWorldLightingShader ====

/* public: __thiscall DeferredWorldLightingShader__DeferredWorldLightingShader(void) */

DeferredWorldLightingShader * __thiscall
DeferredWorldLightingShader__DeferredWorldLightingShader(DeferredWorldLightingShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_24;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = DeferredWorldLightingShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TopLeftFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadTopLeftFrustumCornerLocation;
  }
  (this->TopRightFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadTopRightFrustumCornerLocation;
  }
  (this->BottomLeftFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadBottomLeftFrustumCornerLocation;
  }
  (this->BottomRightFrustumCornerRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadBottomRightFrustumCornerLocation;
  }
  (this->DepthBufferTextureRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadDepthBufferTextureLocation;
  }
  local_14 = DeferredWorldLightingShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__SetDepthBufferTextureDefault;
  }
  (this->ColorAndRoughnessTextureRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadColorAndRoughnessTextureLocation;
  }
  local_14 = DeferredWorldLightingShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__SetColorAndRoughnessTextureDefault;
  }
  (this->NormalsTextureRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadNormalsTextureLocation;
  }
  local_14 = DeferredWorldLightingShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__SetNormalsTextureDefault;
  }
  (this->CameraPositionRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadCameraPositionLocation;
  }
  (this->ReferenceIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadReferenceIrradiance_W_m2Location;
  }
  (this->LightColorRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadLightColorLocation;
  }
  (this->LightDirectionRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadLightDirectionLocation;
  }
  (this->IsMainLightRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadIsMainLightLocation;
  }
  (this->LightPositionRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredWorldLightingShader__LoadLightPositionLocation;
  }
  (this->LightPower_WRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredWorldLightingShader__LoadLightPower_WLocation;
  }
  (this->LightInitialRadius_kmRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredWorldLightingShader__LoadLightInitialRadius_kmLocation;
  }
  (this->LightConeHalfAngle_radiansRegisterInstance).Location = -1;
  local_14 = DeferredWorldLightingShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredWorldLightingShader__LoadLightConeHalfAngle_radiansLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049f870 EquirectangularToCubeMapShader ====

/* public: __thiscall EquirectangularToCubeMapShader__EquirectangularToCubeMapShader(void) */

EquirectangularToCubeMapShader * __thiscall
EquirectangularToCubeMapShader__EquirectangularToCubeMapShader(EquirectangularToCubeMapShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_47;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = EquirectangularToCubeMapShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = EquirectangularToCubeMapShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = EquirectangularToCubeMapShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = EquirectangularToCubeMapShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = EquirectangularToCubeMapShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = EquirectangularToCubeMapShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->AdditionalTextureRegisterInstance).Location = -1;
  local_14 = EquirectangularToCubeMapShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__LoadAdditionalTextureLocation;
  }
  local_14 = EquirectangularToCubeMapShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__SetAdditionalTextureDefault;
  }
  (this->CubeMapFaceIDRegisterInstance).Location = -1;
  local_14 = EquirectangularToCubeMapShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidNormalShader__LoadCubeMapFaceIDLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049fbc0 ExhaustShader ====

/* public: __thiscall ExhaustShader__ExhaustShader(void) */

ExhaustShader * __thiscall ExhaustShader__ExhaustShader(ExhaustShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_25;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = ExhaustShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = ExhaustShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TimeRegisterInstance).Location = -1;
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ExhaustShader__LoadTimeLocation;
  }
  (this->ExhaustVelocity_km_sRegisterInstance).Location = -1;
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ExhaustShader__LoadExhaustVelocity_km_sLocation;
  }
  (this->ExhaustVisibleToInvisibleRatioRegisterInstance).Location = -1;
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ExhaustShader__LoadExhaustVisibleToInvisibleRatioLocation;
  }
  (this->RandomizerRegisterInstance).Location = -1;
  local_14 = ExhaustShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ExhaustShader__LoadRandomizerLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 0049ff60 GeneralModuleShader ====

/* public: __thiscall GeneralModuleShader__GeneralModuleShader(void) */

GeneralModuleShader * __thiscall GeneralModuleShader__GeneralModuleShader(GeneralModuleShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_34;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = GeneralModuleShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = GeneralModuleShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = GeneralModuleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = GeneralModuleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = GeneralModuleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = GeneralModuleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = GeneralModuleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->PixelsPerMeterRegisterInstance).Location = -1;
  local_14 = GeneralModuleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadPixelsPerMeterLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a0280 ParticleShader ====

/* public: __thiscall ParticleShader__ParticleShader(void) */

ParticleShader * __thiscall ParticleShader__ParticleShader(ParticleShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_45;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = ParticleShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = ParticleShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->RandomOffsetRegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidDiffuseShader__LoadRandomOffsetLocation;
  }
  (this->WhiteNoiseTextures0RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures0Location;
  }
  (this->WhiteNoiseTextures1RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures1Location;
  }
  (this->WhiteNoiseTextures2RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures2Location;
  }
  (this->WhiteNoiseTextures3RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures3Location;
  }
  (this->WhiteNoiseTextures4RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures4Location;
  }
  (this->WhiteNoiseTextures5RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures5Location;
  }
  (this->WhiteNoiseTextures6RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures6Location;
  }
  (this->WhiteNoiseTextures7RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures7Location;
  }
  (this->WhiteNoiseTextures8RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures8Location;
  }
  (this->WhiteNoiseTextures9RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures9Location;
  }
  (this->WhiteNoiseTextures10RegisterInstance).Location = -1;
  local_14 = ParticleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = AsteroidCratersShader__LoadWhiteNoiseTextures10Location;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a0860 PlanetShader ====

/* public: __thiscall PlanetShader__PlanetShader(void) */

PlanetShader * __thiscall PlanetShader__PlanetShader(PlanetShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_35;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = PlanetShader__GetValueLocations();
  iVar12 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar6 = local_18;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadModelMatrixLocation;
  }
  local_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar12 = 0;
  pfVar13 = local_78;
  iVar11 = 0;
  iVar14 = 1;
  iVar15 = 2;
  iVar9 = 3;
  do {
    iVar5 = iStack_24;
    iVar4 = iStack_28;
    iVar3 = iStack_2c;
    iVar10 = local_30;
    iVar8 = iVar12 + 1;
    *pfVar13 = (float)(iVar12 == iVar11);
    pfVar13[1] = (float)(iVar12 == iVar14);
    pfVar13[2] = (float)(iVar12 == iVar15);
    pfVar13[3] = (float)(iVar12 == iVar9);
    iVar12 = iVar8;
    pfVar13 = pfVar13 + 4;
    iVar11 = iVar10;
    iVar14 = iVar3;
    iVar15 = iVar4;
    iVar9 = iVar5;
  } while (iVar8 < 4);
  (this->InverseModelMatrixRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  iVar15 = iStack_24;
  iVar14 = iStack_28;
  iVar11 = iStack_2c;
  iVar12 = local_30;
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
  }
  iVar9 = 0;
  pfVar13 = local_78;
  do {
    iVar10 = iVar9 + 1;
    *pfVar13 = (float)(iVar9 == iVar12);
    pfVar13[1] = (float)(iVar9 == iVar11);
    pfVar13[2] = (float)(iVar9 == iVar14);
    pfVar13[3] = (float)(iVar9 == iVar15);
    iVar9 = iVar10;
    pfVar13 = pfVar13 + 4;
  } while (iVar10 < 4);
  (this->TotalTransformMatrixRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
  }
  iVar12 = 0;
  pfVar13 = local_78;
  do {
    iVar11 = iVar12 + 1;
    bVar7 = iVar12 == iStack_2c;
    bVar1 = iVar12 == iStack_28;
    bVar2 = iVar12 == iStack_24;
    *pfVar13 = (float)(iVar12 == local_30);
    pfVar13[1] = (float)bVar7;
    pfVar13[2] = (float)bVar1;
    pfVar13[3] = (float)bVar2;
    iVar12 = iVar11;
    pfVar13 = pfVar13 + 4;
  } while (iVar11 < 4);
  (this->NormalMatrixRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->BlackbodyRadiationPeakTemperature_KRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadBlackbodyRadiationPeakTemperature_KLocation;
  }
  GetBlackbodyTexturePeakTemperature_K();
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetBlackbodyRadiationPeakTemperature_KDefault;
  }
  (this->BlackbodyRadiationTextureRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadBlackbodyRadiationTextureLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetBlackbodyRadiationTextureDefault;
  }
  (this->ShadowMatrixRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowMatrixLocation;
  }
  iVar12 = 0;
  pfVar13 = local_78;
  do {
    iVar11 = iVar12 + 1;
    bVar7 = iVar12 == iStack_2c;
    bVar1 = iVar12 == iStack_28;
    bVar2 = iVar12 == iStack_24;
    *pfVar13 = (float)(iVar12 == local_30);
    pfVar13[1] = (float)bVar7;
    pfVar13[2] = (float)bVar1;
    pfVar13[3] = (float)bVar2;
    iVar12 = iVar11;
    pfVar13 = pfVar13 + 4;
  } while (iVar11 < 4);
  (this->ShadowMapBiasRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowMapBiasLocation;
  }
  (this->DiffuseCubeTextureRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadDiffuseCubeTextureLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetDiffuseCubeTextureDefault;
  }
  (this->NormalCubeTextureRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadNormalCubeTextureLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetNormalCubeTextureDefault;
  }
  (this->SpecularCubeTextureRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadSpecularCubeTextureLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetSpecularCubeTextureDefault;
  }
  (this->CityLightsCubeTextureRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadCityLightsCubeTextureLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetCityLightsCubeTextureDefault;
  }
  (this->HeightCubeTextureRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadHeightCubeTextureLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetHeightCubeTextureDefault;
  }
  (this->ShadowTextureRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowTextureLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetShadowTextureDefault;
  }
  (this->UsesDiffuseMapRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadUsesDiffuseMapLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetUsesDiffuseMapDefault;
  }
  (this->UsesNormalMapRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadUsesNormalMapLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetUsesNormalMapDefault;
  }
  (this->UsesSpecularMapRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadUsesSpecularMapLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetUsesSpecularMapDefault;
  }
  (this->UsesHeightMapRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadUsesHeightMapLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = SetUsesHeightMapDefault;
  }
  (this->AlbedoRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadAlbedoLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetAlbedoDefault;
  }
  (this->CityLightsIntensityRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadCityLightsIntensityLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetCityLightsIntensityDefault;
  }
  (this->NormalSmoothingAmountRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadNormalSmoothingAmountLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetNormalSmoothingAmountDefault;
  }
  (this->CameraPositionRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DeferredGlobalLightingShader__LoadCameraPositionLocation;
  }
  (this->ShadowNearPlaneRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowNearPlaneLocation;
  }
  (this->ShadowFarPlaneRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadShadowFarPlaneLocation;
  }
  (this->SunlightDirectionRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadSunlightDirectionLocation;
  }
  (this->SunIsInShadowRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadSunIsInShadowLocation;
  }
  (this->LuminantTemperature_KRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadLuminantTemperature_KLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetLuminantTemperature_KDefault;
  }
  (this->LuminantIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadLuminantIrradiance_W_m2Location;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetLuminantIrradiance_W_m2Default;
  }
  (this->StarlightColorRegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadStarlightColorLocation;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetStarlightColorDefault;
  }
  (this->StarlightIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__LoadStarlightIrradiance_W_m2Location;
  }
  local_14 = PlanetShader__GetDefaultSetters();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = PlanetShader__SetStarlightIrradiance_W_m2Default;
  }
  (this->ReferenceIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = PlanetShader__GetValueLocations();
  iVar12 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar12 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar6 = local_14;
  bVar7 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar12);
  if (bVar7) {
    pDVar6->Data[pDVar6->Size + -1] = DeferredGlobalLightingShader__LoadReferenceIrradiance_W_m2Location;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a1680 PropellantTankShader ====

/* public: __thiscall PropellantTankShader__PropellantTankShader(void) */

PropellantTankShader * __thiscall
PropellantTankShader__PropellantTankShader(PropellantTankShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_31;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = PropellantTankShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = PropellantTankShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = PropellantTankShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = PropellantTankShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = PropellantTankShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = PropellantTankShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = PropellantTankShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->PixelsPerMeterRegisterInstance).Location = -1;
  local_14 = PropellantTankShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadPixelsPerMeterLocation;
  }
  (this->PropellantTankCylindricalHeight_mRegisterInstance).Location = -1;
  local_14 = PropellantTankShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PropellantTankShader__LoadPropellantTankCylindricalHeight_mLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a19e0 RadiatorShader ====

/* public: __thiscall RadiatorShader__RadiatorShader(void) */

RadiatorShader * __thiscall RadiatorShader__RadiatorShader(RadiatorShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_32;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = RadiatorShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = RadiatorShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = RadiatorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = RadiatorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = RadiatorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = RadiatorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = RadiatorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->PixelsPerMeterRegisterInstance).Location = -1;
  local_14 = RadiatorShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadPixelsPerMeterLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a1d00 RingShadowShader ====

/* public: __thiscall RingShadowShader__RingShadowShader(void) */

RingShadowShader * __thiscall RingShadowShader__RingShadowShader(RingShadowShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_39;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = RingShadowShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = RingShadowShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = RingShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = RingShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = RingShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = RingShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->AlphaTextureRegisterInstance).Location = -1;
  local_14 = RingShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = RingShadowShader__LoadAlphaTextureLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a1fe0 RingsShader ====

/* public: __thiscall RingsShader__RingsShader(void) */

RingsShader * __thiscall RingsShader__RingsShader(RingsShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_36;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = RingsShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = RingsShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->ShadowMatrixRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__LoadShadowMatrixLocation;
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
  (this->ShadowMapBiasRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__LoadShadowMapBiasLocation;
  }
  (this->DiffuseTextureRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = RingsShader__LoadDiffuseTextureLocation;
  }
  local_14 = RingsShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = RingsShader__SetDiffuseTextureDefault;
  }
  (this->AlphaTextureRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = RingShadowShader__LoadAlphaTextureLocation;
  }
  local_14 = RingsShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = RingsShader__SetAlphaTextureDefault;
  }
  (this->LightColorRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadLightColorLocation;
  }
  (this->LightIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadLightIrradiance_W_m2Location;
  }
  (this->ShadowTextureRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__LoadShadowTextureLocation;
  }
  local_14 = RingsShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__SetShadowTextureDefault;
  }
  (this->StarlightColorRegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__LoadStarlightColorLocation;
  }
  local_14 = RingsShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__SetStarlightColorDefault;
  }
  (this->StarlightIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__LoadStarlightIrradiance_W_m2Location;
  }
  local_14 = RingsShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = PlanetShader__SetStarlightIrradiance_W_m2Default;
  }
  (this->ReferenceIrradiance_W_m2RegisterInstance).Location = -1;
  local_14 = RingsShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = DeferredGlobalLightingShader__LoadReferenceIrradiance_W_m2Location;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a2650 RocketEngineShader ====

/* public: __thiscall RocketEngineShader__RocketEngineShader(void) */

RocketEngineShader * __thiscall RocketEngineShader__RocketEngineShader(RocketEngineShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_33;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = RocketEngineShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = RocketEngineShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = RocketEngineShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = RocketEngineShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = RocketEngineShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = RocketEngineShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->TextureSizeRegisterInstance).Location = -1;
  local_14 = RocketEngineShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTextureSizeLocation;
  }
  (this->PixelsPerMeterRegisterInstance).Location = -1;
  local_14 = RocketEngineShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadPixelsPerMeterLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a2970 ShadowShader ====

/* public: __thiscall ShadowShader__ShadowShader(void) */

ShadowShader * __thiscall ShadowShader__ShadowShader(ShadowShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_37;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = ShadowShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = ShadowShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = ShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = ShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = ShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = ShadowShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a2c10 ShockwaveShader ====

/* public: __thiscall ShockwaveShader__ShockwaveShader(void) */

ShockwaveShader * __thiscall ShockwaveShader__ShockwaveShader(ShockwaveShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_26;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = ShockwaveShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = ShockwaveShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = ShockwaveShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = ShockwaveShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = ShockwaveShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = ShockwaveShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a2eb0 SimpleShader ====

/* public: __thiscall SimpleShader__SimpleShader(void) */

SimpleShader * __thiscall SimpleShader__SimpleShader(SimpleShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_22;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = SimpleShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = SimpleShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->LuminanceStoredInAlphaChannelRegisterInstance).Location = -1;
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SimpleShader__LoadLuminanceStoredInAlphaChannelLocation;
  }
  local_14 = SimpleShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SetLuminanceStoredInAlphaChannelDefault;
  }
  (this->UsesTextureRegisterInstance).Location = -1;
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SimpleShader__LoadUsesTextureLocation;
  }
  local_14 = SimpleShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SetUsesTextureDefault;
  }
  (this->ShouldDrawGlowRegisterInstance).Location = -1;
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SimpleShader__LoadShouldDrawGlowLocation;
  }
  local_14 = SimpleShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SetShouldDrawGlowDefault;
  }
  (this->TextureRegisterInstance).Location = -1;
  local_14 = SimpleShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SimpleShader__LoadTextureLocation;
  }
  local_14 = SimpleShader__GetDefaultSetters();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SimpleShader__SetTextureDefault;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a3330 SpacecraftShadowShader ====


/* public: __thiscall SpacecraftShadowShader__SpacecraftShadowShader(void) */

SpacecraftShadowShader * __thiscall
SpacecraftShadowShader__SpacecraftShadowShader(SpacecraftShadowShader *this)

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
  float afStack_78 [18];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  Darray_L_void____cdecl_P__void__G_ *pDStack_18;
  Darray_L_void____cdecl_P__void__G_ *pDStack_14;
  
  Shader__Shader((Shader *)this);
  *(undefined ***)this = &vftable_38;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_18->Size;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_18,(int *)&pDStack_14);
  pDVar5 = pDStack_18;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadModelMatrixLocation;
  }
  iStack_30 = 0;
  iStack_2c = 1;
  iStack_28 = 2;
  iStack_24 = 3;
  iVar10 = 0;
  pfVar11 = afStack_78;
  do {
    iVar7 = iVar10 + 1;
    *pfVar11 = (float)(iVar10 == 0);
    pfVar11[1] = (float)(iVar10 == 1);
    pfVar11[2] = (float)(iVar10 == 2);
    pfVar11[3] = (float)(iVar10 == 3);
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  iVar4 = iStack_24;
  iVar3 = iStack_28;
  iVar7 = iStack_2c;
  iVar10 = iStack_30;
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadInverseModelMatrixLocation;
  }
  iVar8 = 0;
  pfVar11 = afStack_78;
  do {
    iVar9 = iVar8 + 1;
    *pfVar11 = (float)(iVar8 == iVar10);
    pfVar11[1] = (float)(iVar8 == iVar7);
    pfVar11[2] = (float)(iVar8 == iVar3);
    pfVar11[3] = (float)(iVar8 == iVar4);
    iVar8 = iVar9;
    pfVar11 = pfVar11 + 4;
  } while (iVar9 < 4);
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadTotalTransformMatrixLocation;
  }
  iVar10 = 0;
  pfVar11 = afStack_78;
  do {
    iVar7 = iVar10 + 1;
    bVar6 = iVar10 == iStack_2c;
    bVar1 = iVar10 == iStack_28;
    bVar2 = iVar10 == iStack_24;
    *pfVar11 = (float)(iVar10 == iStack_30);
    pfVar11[1] = (float)bVar6;
    pfVar11[2] = (float)bVar1;
    pfVar11[3] = (float)bVar2;
    iVar10 = iVar7;
    pfVar11 = pfVar11 + 4;
  } while (iVar7 < 4);
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadNormalMatrixLocation;
  }
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadNearPlaneLocation;
  }
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadFarPlaneLocation;
  }
  *(undefined4 *)(this + 0x44) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadUsesDamageTextureLocation;
  }
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SetUsesDamageTextureDefault;
  }
  *(undefined4 *)(this + 0x48) = 0xffffffff;
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetValueLocations());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__LoadDamageTextureLocation;
  }
  pDStack_14 = (Darray_L_void____cdecl_P__void__G_ *)(uintptr_t)(GetDefaultSetters());
  iVar10 = pDStack_14->Size;
  pDStack_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_class_util__Reflectable____SetSize
            ((Darray_L_class_util__Reflectable_P_G_ *)pDStack_14,(int *)&pDStack_18);
  pDVar5 = pDStack_14;
  bVar6 = util__Darray_enum_GraphicsResource__Type___CheckSize
                    ((Darray_L_enum_GraphicsResource__Type_G_ *)pDStack_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = SpacecraftShadowShader__SetDamageTextureDefault;
  }
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(char *)&(this[0x58]) = 0x0;
  return this;
}





//==== 004a36c0 StarShader ====

/* public: __thiscall StarShader__StarShader(void) */

StarShader * __thiscall StarShader__StarShader(StarShader *this)

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
  this->_pad_0x0_0 = (int)&vftable_21;
  (this->ModelMatrixRegisterInstance).Location = -1;
  local_18 = StarShader__GetValueLocations();
  iVar10 = local_18->Size;
  local_14 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_18,(int *)&local_14)
  ;
  pDVar5 = local_18;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_18,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadModelMatrixLocation;
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
  local_14 = StarShader__GetValueLocations();
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
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadInverseModelMatrixLocation;
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
  local_14 = StarShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadTotalTransformMatrixLocation;
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
  local_14 = StarShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNormalMatrixLocation;
  }
  (this->NearPlaneRegisterInstance).Location = -1;
  local_14 = StarShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadNearPlaneLocation;
  }
  (this->FarPlaneRegisterInstance).Location = -1;
  local_14 = StarShader__GetValueLocations();
  iVar10 = local_14->Size;
  local_18 = (Darray_L_void____cdecl_P__void__G_ *)(iVar10 + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)local_14,(int *)&local_18)
  ;
  pDVar5 = local_14;
  bVar6 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)local_14,iVar10);
  if (bVar6) {
    pDVar5->Data[pDVar5->Size + -1] = ArmorShader__LoadFarPlaneLocation;
  }
  (this->AdditionalPreprocessor).Data = (char *)0x0;
  (this->AdditionalPreprocessor).Capacity = 0;
  (this->AdditionalPreprocessor).Length = 0;
  this->IsReadyToUse = false;
  return this;
}

//==== 004a3960 scalar_deleting_destructor_004a3960 ====


/* public: virtual void * __thiscall AsteroidNormalShader:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
AsteroidNormalShader___scalar_deleting_destructor(AsteroidNormalShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x5c);
  }
  return this;
}





//==== 004a39a0 scalar_deleting_destructor_004a39a0 ====


/* public: virtual void * __thiscall ParticleShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall ParticleShader___scalar_deleting_destructor(ParticleShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x88);
  }
  return this;
}





//==== 004a39e0 scalar_deleting_destructor_004a39e0 ====


/* public: virtual void * __thiscall CityLightsShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
CityLightsShader___scalar_deleting_destructor(CityLightsShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x8c);
  }
  return this;
}





//==== 004a3a20 scalar_deleting_destructor_004a3a20 ====


/* public: virtual void * __thiscall NormalTextureShader:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
NormalTextureShader___scalar_deleting_destructor(NormalTextureShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x58);
  }
  return this;
}





//==== 004a3a60 scalar_deleting_destructor_004a3a60 ====


/* public: virtual void * __thiscall SimpleShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall SimpleShader___scalar_deleting_destructor(SimpleShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,100);
  }
  return this;
}





//==== 004a3aa0 scalar_deleting_destructor_004a3aa0 ====


/* public: virtual void * __thiscall DamageShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall DamageShader___scalar_deleting_destructor(DamageShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x6c);
  }
  return this;
}





//==== 004a3ae0 scalar_deleting_destructor_004a3ae0 ====


/* public: virtual void * __thiscall DeferredWorldLightingShader:: 0 scalardeletingdestructor(unsigned int) */

void * 
DeferredWorldLightingShader___scalar_deleting_destructor
          (DeferredWorldLightingShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x94);
  }
  return this;
}





//==== 004a3b30 scalar_deleting_destructor_004a3b30 ====


/* public: virtual void * __thiscall PlanetShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall PlanetShader___scalar_deleting_destructor(PlanetShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xc0);
  }
  return this;
}





//==== 004a3b80 scalar_deleting_destructor_004a3b80 ====


/* public: virtual void * __thiscall PropellantTankShader:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
PropellantTankShader___scalar_deleting_destructor(PropellantTankShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x60);
  }
  return this;
}





//==== 004a3bc0 scalar_deleting_destructor_004a3bc0 ====


/* public: virtual void * __thiscall RingsShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall RingsShader___scalar_deleting_destructor(RingsShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x7c);
  }
  return this;
}





//==== 004a3c00 scalar_deleting_destructor_004a3c00 ====


/* public: virtual void * __thiscall NormalShader:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall NormalShader___scalar_deleting_destructor(NormalShader *this,uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (this->AdditionalPreprocessor).Data;
  if (pcVar1 != (char *)0x0) {
    port_op_delete(pcVar1);
    (this->AdditionalPreprocessor).Data = (char *)0x0;
  }
  Shader___Shader((Shader *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x54);
  }
  return this;
}





//==== 004a3c40 DeferredLightingRender ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl DeferredLightingRender(struct util__Vec2_L_int_G_,class util__Darray_L_structGlobalLight_G_
   const &,class util__Darray_L_structWorldLight_G_ const &,double) */

void __cdecl
DeferredLightingRender__o2
          (Vec2_L_int_G_ param_1,Darray_L_GlobalLight_G_ *param_2,Darray_L_WorldLight_G_ *param_3,double param_4
          )

{
  undefined8 stack0xfffffffc;
  DeferredGlobalLightingShader *pDVar1;
  int iVar2;
  DeferredWorldLightingShader *pDVar3;
  int local_10;
  ShaderStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar1);
  pDVar1 = DeferredGlobalLightingShader__GetStatic();
  (**(code **)(pDVar1->_pad_0x0_0 + 0x80))(&param_4);
  local_10 = 0;
  iVar2 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
  if (local_10 < iVar2) {
    do {
      iVar2 = (**(code **)param_2->_pad_0x0_0)(&local_10);
      pDVar1 = DeferredGlobalLightingShader__GetStatic();
      (**(code **)(pDVar1->_pad_0x0_0 + 0x88))(iVar2 + 0x18);
      pDVar1 = DeferredGlobalLightingShader__GetStatic();
      (**(code **)(pDVar1->_pad_0x0_0 + 0x90))(iVar2);
      pDVar1 = DeferredGlobalLightingShader__GetStatic();
      (**(code **)(pDVar1->_pad_0x0_0 + 0x9c))(iVar2 + 0x30);
      pDVar1 = DeferredGlobalLightingShader__GetStatic();
      (**(code **)(pDVar1->_pad_0x0_0 + 0x98))(iVar2 + 0x38);
      RenderFullscreenQuad((*(Vec3_L_int_G_ *)&(param_1)));
      local_10 = local_10 + 1;
      iVar2 = (**(code **)(param_2->_pad_0x0_0 + 0xc))();
    } while (local_10 < iVar2);
  }
  Graphics__ShaderStack___ShaderStack(&local_9);
  pDVar3 = DeferredWorldLightingShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&local_9,(Shader *)pDVar3);
  pDVar3 = DeferredWorldLightingShader__GetStatic();
  (**(code **)(pDVar3->_pad_0x0_0 + 0x80))(&param_4);
  local_10 = 0;
  iVar2 = (**(code **)(param_3->_pad_0x0_0 + 0xc))();
  if (local_10 < iVar2) {
    do {
      iVar2 = (**(code **)param_3->_pad_0x0_0)(&local_10);
      pDVar3 = DeferredWorldLightingShader__GetStatic();
      (**(code **)(pDVar3->_pad_0x0_0 + 0x88))(iVar2 + 0x18);
      pDVar3 = DeferredWorldLightingShader__GetStatic();
      (**(code **)(pDVar3->_pad_0x0_0 + 0x9c))(iVar2);
      pDVar3 = DeferredWorldLightingShader__GetStatic();
      (**(code **)(pDVar3->_pad_0x0_0 + 0xa4))(iVar2 + 0x38);
      pDVar3 = DeferredWorldLightingShader__GetStatic();
      (**(code **)(pDVar3->_pad_0x0_0 + 0xac))(iVar2 + 0x30);
      pDVar3 = DeferredWorldLightingShader__GetStatic();
      (**(code **)(pDVar3->_pad_0x0_0 + 0x90))(iVar2 + 0x40);
      pDVar3 = DeferredWorldLightingShader__GetStatic();
      (**(code **)(pDVar3->_pad_0x0_0 + 0xb4))(iVar2 + 0x58);
      pDVar3 = DeferredWorldLightingShader__GetStatic();
      (**(code **)(pDVar3->_pad_0x0_0 + 0x98))(iVar2 + 0x60);
      RenderFullscreenQuad((*(Vec3_L_int_G_ *)&(param_1)));
      local_10 = local_10 + 1;
      iVar2 = (**(code **)(param_3->_pad_0x0_0 + 0xc))();
    } while (local_10 < iVar2);
  }
  Graphics__ShaderStack___ShaderStack(&local_9);
  return;
}

//==== 004a3e10 GetDefaultSetters_004a3e10 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ArmorShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ArmorShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3bda5bf1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3bda5bf1__thread_safe_static_guard_0__);
    if ( cde_l2_3bda5bf1__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_b8aff122_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_b8aff122_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_b8aff122_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ArmorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_3bda5bf1__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_b8aff122_DefaultSetters;
}





//==== 004a3ea0 GetDefaultSetters_004a3ea0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidCratersShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidCratersShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_27deebc2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_27deebc2__thread_safe_static_guard_0__);
    if ( cde_l2_27deebc2__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_672d28ce_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_672d28ce_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_672d28ce_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidCratersShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_27deebc2__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_672d28ce_DefaultSetters;
}





//==== 004a3f30 GetDefaultSetters_004a3f30 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidDiffuseShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidDiffuseShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3e3e9368__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3e3e9368__thread_safe_static_guard_0__);
    if ( cde_l2_3e3e9368__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_9100c7a2_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_9100c7a2_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_9100c7a2_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidDiffuseShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_3e3e9368__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_9100c7a2_DefaultSetters;
}





//==== 004a3fd0 GetDefaultSetters_004a3fd0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidHeightShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidHeightShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1f097ef5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1f097ef5__thread_safe_static_guard_0__);
    if ( cde_l2_1f097ef5__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_e51d6c70_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_e51d6c70_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_e51d6c70_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidHeightShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_1f097ef5__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e51d6c70_DefaultSetters;
}





//==== 004a4060 GetDefaultSetters_004a4060 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   AsteroidNormalShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl AsteroidNormalShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3891ac27__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3891ac27__thread_safe_static_guard_0__);
    if ( cde_l2_3891ac27__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_2c417361_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_2c417361_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_2c417361_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_AsteroidNormalShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_3891ac27__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_2c417361_DefaultSetters;
}





//==== 004a40f0 GetDefaultSetters_004a40f0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   BlastLauncherShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl BlastLauncherShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0dc4c1a8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0dc4c1a8__thread_safe_static_guard_0__);
    if ( cde_l2_0dc4c1a8__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_99a7f5d9_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_99a7f5d9_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_99a7f5d9_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_BlastLauncherShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_0dc4c1a8__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_99a7f5d9_DefaultSetters;
}





//==== 004a4180 GetDefaultSetters_004a4180 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   CityLightsShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl CityLightsShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a769bb7f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a769bb7f__thread_safe_static_guard_0__);
    if ( cde_l2_a769bb7f__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_f58c3871_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_f58c3871_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_f58c3871_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_CityLightsShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_a769bb7f__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f58c3871_DefaultSetters;
}





//==== 004a4210 GetDefaultSetters_004a4210 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DamageGeneratorShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DamageGeneratorShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_5ecb77ad__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_5ecb77ad__thread_safe_static_guard_0__);
    if ( cde_l2_5ecb77ad__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_f0f71f5d_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_f0f71f5d_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_f0f71f5d_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DamageGeneratorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_5ecb77ad__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f0f71f5d_DefaultSetters;
}





//==== 004a42a0 GetDefaultSetters_004a42a0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DamageShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DamageShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0c03aefa__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0c03aefa__thread_safe_static_guard_0__);
    if ( cde_l2_0c03aefa__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_89527c5f_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_89527c5f_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_89527c5f_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DamageShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_0c03aefa__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_89527c5f_DefaultSetters;
}





//==== 004a4330 GetDefaultSetters_004a4330 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DamagedArmorShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DamagedArmorShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ff9fcea6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ff9fcea6__thread_safe_static_guard_0__);
    if ( cde_l2_ff9fcea6__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_df96930a_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_df96930a_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_df96930a_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DamagedArmorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_ff9fcea6__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_df96930a_DefaultSetters;
}





//==== 004a43c0 GetDefaultSetters_004a43c0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DeferredGlobalLightingShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DeferredGlobalLightingShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_58cdd342__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_58cdd342__thread_safe_static_guard_0__);
    if ( cde_l2_58cdd342__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_140123a0_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_140123a0_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_140123a0_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredGlobalLightingShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_58cdd342__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_140123a0_DefaultSetters;
}





//==== 004a4450 GetDefaultSetters_004a4450 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   DeferredWorldLightingShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl DeferredWorldLightingShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2b45bbd8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2b45bbd8__thread_safe_static_guard_0__);
    if ( cde_l2_2b45bbd8__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_ec6b8170_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_ec6b8170_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_ec6b8170_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_DeferredWorldLightingShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_2b45bbd8__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_ec6b8170_DefaultSetters;
}





//==== 004a44e0 GetDefaultSetters_004a44e0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   EquirectangularToCubeMapShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl EquirectangularToCubeMapShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7f986cd2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7f986cd2__thread_safe_static_guard_0__);
    if ( cde_l2_7f986cd2__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_7f59cf3c_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_7f59cf3c_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_7f59cf3c_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_EquirectangularToCubeMapShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_7f986cd2__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_7f59cf3c_DefaultSetters;
}





//==== 004a4570 GetDefaultSetters_004a4570 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ExhaustShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ExhaustShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d92535b9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d92535b9__thread_safe_static_guard_0__);
    if ( cde_l2_d92535b9__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_a3f7e62d_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_a3f7e62d_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_a3f7e62d_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ExhaustShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_d92535b9__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_a3f7e62d_DefaultSetters;
}





//==== 004a4600 GetDefaultSetters_004a4600 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   GeneralModuleShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl GeneralModuleShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_287a9928__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_287a9928__thread_safe_static_guard_0__);
    if ( cde_l2_287a9928__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4c6fb996_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_4c6fb996_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4c6fb996_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_GeneralModuleShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_287a9928__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4c6fb996_DefaultSetters;
}





//==== 004a4690 GetDefaultSetters_004a4690 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ParticleShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ParticleShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_998e0794__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_998e0794__thread_safe_static_guard_0__);
    if ( cde_l2_998e0794__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_459701bc_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_459701bc_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_459701bc_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ParticleShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_998e0794__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_459701bc_DefaultSetters;
}





//==== 004a4720 GetDefaultSetters_004a4720 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PlanetShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PlanetShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_03cf7b49__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_03cf7b49__thread_safe_static_guard_0__);
    if ( cde_l2_03cf7b49__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_e10ee52e_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_e10ee52e_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_e10ee52e_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PlanetShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_03cf7b49__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_e10ee52e_DefaultSetters;
}





//==== 004a47b0 GetDefaultSetters_004a47b0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   PropellantTankShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl PropellantTankShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e255d643__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e255d643__thread_safe_static_guard_0__);
    if ( cde_l2_e255d643__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_b6be7985_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_b6be7985_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_b6be7985_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_PropellantTankShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_e255d643__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_b6be7985_DefaultSetters;
}





//==== 004a4840 GetDefaultSetters_004a4840 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RadiatorShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RadiatorShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_12916c43__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_12916c43__thread_safe_static_guard_0__);
    if ( cde_l2_12916c43__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_9a026a21_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_9a026a21_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_9a026a21_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RadiatorShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_12916c43__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_9a026a21_DefaultSetters;
}





//==== 004a48d0 GetDefaultSetters_004a48d0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RingShadowShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RingShadowShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8c9b6daa__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8c9b6daa__thread_safe_static_guard_0__);
    if ( cde_l2_8c9b6daa__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_bbd2bd7a_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_bbd2bd7a_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_bbd2bd7a_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RingShadowShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_8c9b6daa__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_bbd2bd7a_DefaultSetters;
}





//==== 004a4960 GetDefaultSetters_004a4960 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RingsShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RingsShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_08506728__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_08506728__thread_safe_static_guard_0__);
    if ( cde_l2_08506728__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_96f87c91_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_96f87c91_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_96f87c91_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RingsShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_08506728__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_96f87c91_DefaultSetters;
}





//==== 004a49f0 GetDefaultSetters_004a49f0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   RocketEngineShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl RocketEngineShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_291cedd8__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_291cedd8__thread_safe_static_guard_0__);
    if ( cde_l2_291cedd8__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_71bd2469_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_71bd2469_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_71bd2469_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_RocketEngineShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_291cedd8__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_71bd2469_DefaultSetters;
}





//==== 004a4a80 GetDefaultSetters_004a4a80 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ShadowShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ShadowShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b8f12d20__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b8f12d20__thread_safe_static_guard_0__);
    if ( cde_l2_b8f12d20__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_71198fb1_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_71198fb1_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_71198fb1_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ShadowShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_b8f12d20__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_71198fb1_DefaultSetters;
}





//==== 004a4b10 GetDefaultSetters_004a4b10 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   ShockwaveShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl ShockwaveShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7d71f167__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7d71f167__thread_safe_static_guard_0__);
    if ( cde_l2_7d71f167__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_100b494d_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_100b494d_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_100b494d_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_ShockwaveShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_7d71f167__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_100b494d_DefaultSetters;
}





//==== 004a4ba0 GetDefaultSetters_004a4ba0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   SimpleShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl SimpleShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_abaa3c03__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_abaa3c03__thread_safe_static_guard_0__);
    if ( cde_l2_abaa3c03__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_4499b840_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_4499b840_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_4499b840_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_SimpleShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_abaa3c03__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4499b840_DefaultSetters;
}





//==== 004a4c30 GetDefaultSetters_004a4c30 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   SpacecraftShadowShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl SpacecraftShadowShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c570a2db__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c570a2db__thread_safe_static_guard_0__);
    if ( cde_l2_c570a2db__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_874dcd92_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_874dcd92_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_874dcd92_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_SpacecraftShadowShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_c570a2db__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_874dcd92_DefaultSetters;
}





//==== 004a4cc0 GetDefaultSetters_004a4cc0 ====


/* private: static class util__Darray_L_void___cdecl_P__void__G_ & __cdecl
   StarShader__GetDefaultSetters(void) */

Darray_L_void____cdecl_P__void__G_ * __cdecl StarShader__GetDefaultSetters(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_0931284a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_0931284a__thread_safe_static_guard_0__);
    if ( cde_l2_0931284a__thread_safe_static_guard_0__ == -1) {
       { memset((void *)&(cde_l2_19f93252_DefaultSetters), 0, 12); *(unsigned int *)(void *)&(cde_l2_19f93252_DefaultSetters) = (unsigned int)(uintptr_t)(0x9194a4); }
       cde_l2_19f93252_DefaultSetters.Capacity = 0;
      atexit( private__static_class_util__Darray_void____cdecl___void______cdecl_StarShader__GetDefaultSetters_void______l2___dynamic_atexit_destructor_for__DefaultSetters);
      _Init_thread_footer(& cde_l2_0931284a__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_19f93252_DefaultSetters;
}





//==== 004a4d50 GetStatic_004a4d50 ====


/* public: static class ArmorShader * __cdecl ArmorShader__GetStatic(void) */

ArmorShader * __cdecl ArmorShader__GetStatic(void)

{
  ArmorShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d8d91d13__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6265597e__thread_safe_static_guard_0__);
    if ( cde_l2_0931284a__thread_safe_static_guard_0__ == -1) {
      this = (ArmorShader *)port_op_new(0x5c);
      if (this == (ArmorShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)ArmorShader__ArmorShader(this);
      }
       cde_l2_a07e9755_Singleton =
           (ArmorShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_6265597e__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_a07e9755_Singleton;
}





//==== 004a4dd0 GetStatic_004a4dd0 ====


/* public: static class AsteroidCratersShader * __cdecl AsteroidCratersShader__GetStatic(void) */

AsteroidCratersShader * __cdecl AsteroidCratersShader__GetStatic(void)

{
  AsteroidCratersShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_bc47128d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fd74e669__thread_safe_static_guard_0__);
    if ( cde_l2_fd74e669__thread_safe_static_guard_0__ == -1) {
      this = (AsteroidCratersShader *)port_op_new(0x88);
      if (this == (AsteroidCratersShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x88);
        pSVar1 = (Shader *)AsteroidCratersShader__AsteroidCratersShader(this);
      }
       cde_l2_c44662d5_Singleton = (AsteroidCratersShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_fd74e669__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_9ec18e3a_Singleton;
}





//==== 004a4e60 GetStatic_004a4e60 ====


/* public: static class AsteroidDiffuseShader * __cdecl AsteroidDiffuseShader__GetStatic(void) */

AsteroidDiffuseShader * __cdecl AsteroidDiffuseShader__GetStatic(void)

{
  AsteroidDiffuseShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8fb97de9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4b2d3d49__thread_safe_static_guard_0__);
    if ( cde_l2_4b2d3d49__thread_safe_static_guard_0__ == -1) {
      this = (AsteroidDiffuseShader *)port_op_new(0x8c);
      if (this == (AsteroidDiffuseShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x8c);
        pSVar1 = (Shader *)AsteroidDiffuseShader__AsteroidDiffuseShader(this);
      }
       cde_l2_87e233d0_Singleton = (AsteroidDiffuseShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_4b2d3d49__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_678c8190_Singleton;
}





//==== 004a4ef0 GetStatic_004a4ef0 ====


/* public: static class AsteroidHeightShader * __cdecl AsteroidHeightShader__GetStatic(void) */

AsteroidHeightShader * __cdecl AsteroidHeightShader__GetStatic(void)

{
  AsteroidHeightShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3c45494d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_45a56db6__thread_safe_static_guard_0__);
    if ( cde_l2_45a56db6__thread_safe_static_guard_0__ == -1) {
      this = (AsteroidHeightShader *)port_op_new(0x58);
      if (this == (AsteroidHeightShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x58);
        pSVar1 = (Shader *)AsteroidHeightShader__AsteroidHeightShader(this);
      }
       cde_l2_cbaeaded_Singleton = (AsteroidHeightShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_45a56db6__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_b40c7dc7_Singleton;
}





//==== 004a4f70 GetStatic_004a4f70 ====


/* public: static class AsteroidNormalShader * __cdecl AsteroidNormalShader__GetStatic(void) */

AsteroidNormalShader * __cdecl AsteroidNormalShader__GetStatic(void)

{
  AsteroidNormalShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_abd3847d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1b977bb7__thread_safe_static_guard_0__);
    if ( cde_l2_1b977bb7__thread_safe_static_guard_0__ == -1) {
      this = (AsteroidNormalShader *)port_op_new(0x5c);
      if (this == (AsteroidNormalShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)AsteroidNormalShader__AsteroidNormalShader(this);
      }
       cde_l2_2a5617b9_Singleton = (AsteroidNormalShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_1b977bb7__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_3f7b7af7_Singleton;
}





//==== 004a4ff0 GetStatic_004a4ff0 ====


/* public: static class BlastLauncherShader * __cdecl BlastLauncherShader__GetStatic(void) */

BlastLauncherShader * __cdecl BlastLauncherShader__GetStatic(void)

{
  BlastLauncherShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_74ed122d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f679ee27__thread_safe_static_guard_0__);
    if ( cde_l2_f679ee27__thread_safe_static_guard_0__ == -1) {
      this = (BlastLauncherShader *)port_op_new(100);
      if (this == (BlastLauncherShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,100);
        pSVar1 = (Shader *)BlastLauncherShader__BlastLauncherShader(this);
      }
       cde_l2_e773a530_Singleton = (BlastLauncherShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_f679ee27__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_e773a530_Singleton;
}





//==== 004a5070 GetStatic_004a5070 ====


/* public: static class CityLightsShader * __cdecl CityLightsShader__GetStatic(void) */

CityLightsShader * __cdecl CityLightsShader__GetStatic(void)

{
  CityLightsShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_9176d8f2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_10e96b6f__thread_safe_static_guard_0__);
    if ( cde_l2_10e96b6f__thread_safe_static_guard_0__ == -1) {
      this = (CityLightsShader *)port_op_new(0x8c);
      if (this == (CityLightsShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x8c);
        pSVar1 = (Shader *)CityLightsShader__CityLightsShader(this);
      }
       cde_l2_b01ab27b_Singleton = (CityLightsShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_10e96b6f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_b01ab27b_Singleton;
}





//==== 004a5100 GetStatic_004a5100 ====


/* public: static class DamageGeneratorShader * __cdecl DamageGeneratorShader__GetStatic(void) */

DamageGeneratorShader * __cdecl DamageGeneratorShader__GetStatic(void)

{
  DamageGeneratorShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b1f8a1e9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_aff77bbd__thread_safe_static_guard_0__);
    if ( cde_l2_aff77bbd__thread_safe_static_guard_0__ == -1) {
      this = (DamageGeneratorShader *)port_op_new(0x88);
      if (this == (DamageGeneratorShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x88);
        pSVar1 = (Shader *)DamageGeneratorShader__DamageGeneratorShader(this);
      }
       cde_l2_3ab8379d_Singleton = (DamageGeneratorShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_aff77bbd__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_84ad97ad_Singleton;
}





//==== 004a5190 GetStatic_004a5190 ====


/* public: static class DamageShader * __cdecl DamageShader__GetStatic(void) */

DamageShader * __cdecl DamageShader__GetStatic(void)

{
  DamageShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_92946fb2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3c9cdda8__thread_safe_static_guard_0__);
    if ( cde_l2_3c9cdda8__thread_safe_static_guard_0__ == -1) {
      this = (DamageShader *)port_op_new(0x6c);
      if (this == (DamageShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x6c);
        pSVar1 = (Shader *)DamageShader__DamageShader(this);
      }
       cde_l2_318136c1_Singleton =
           (DamageShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_3c9cdda8__thread_safe_static_guard_0__);
    }
  }
  return cde_l2_318136c1_Singleton;

}





//==== 004a5210 GetStatic_004a5210 ====


/* public: static class DamagedArmorShader * __cdecl DamagedArmorShader__GetStatic(void) */

DamagedArmorShader * __cdecl DamagedArmorShader__GetStatic(void)

{
  DamagedArmorShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1bccd96a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_fdb48624__thread_safe_static_guard_0__);
    if ( cde_l2_fdb48624__thread_safe_static_guard_0__ == -1) {
      this = (DamagedArmorShader *)port_op_new(0x5c);
      if (this == (DamagedArmorShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)DamagedArmorShader__DamagedArmorShader(this);
      }
       cde_l2_a4b642ef_Singleton = (DamagedArmorShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_fdb48624__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_a4b642ef_Singleton;
}





//==== 004a5290 GetStatic_004a5290 ====


/* public: static class DeferredGlobalLightingShader * __cdecl
   DeferredGlobalLightingShader__GetStatic(void) */

DeferredGlobalLightingShader * __cdecl DeferredGlobalLightingShader__GetStatic(void)

{
  DeferredGlobalLightingShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ba40e2c2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ba40e2c2__thread_safe_static_guard_0__);
    if ( cde_l2_ba40e2c2__thread_safe_static_guard_0__ == -1) {
      this = (DeferredGlobalLightingShader *)port_op_new(0x88);
      if (this == (DeferredGlobalLightingShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x88);
        pSVar1 = (Shader *)DeferredGlobalLightingShader__DeferredGlobalLightingShader(this);
      }
       cde_l2_25d853de_Singleton = (DeferredGlobalLightingShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_ba40e2c2__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_25d853de_Singleton;
}





//==== 004a5320 GetStatic_004a5320 ====


/* public: static class DeferredWorldLightingShader * __cdecl
   DeferredWorldLightingShader__GetStatic(void) */

DeferredWorldLightingShader * __cdecl DeferredWorldLightingShader__GetStatic(void)

{
  DeferredWorldLightingShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_80aa4a02__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_80aa4a02__thread_safe_static_guard_0__);
    if ( cde_l2_80aa4a02__thread_safe_static_guard_0__ == -1) {
      this = (DeferredWorldLightingShader *)port_op_new(0x94);
      if (this == (DeferredWorldLightingShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x94);
        pSVar1 = (Shader *)DeferredWorldLightingShader__DeferredWorldLightingShader(this);
      }
       cde_l2_919252ff_Singleton = (DeferredWorldLightingShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_80aa4a02__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_919252ff_Singleton;
}





//==== 004a53b0 GetStatic_004a53b0 ====


/* public: static class EquirectangularToCubeMapShader * __cdecl
   EquirectangularToCubeMapShader__GetStatic(void) */

EquirectangularToCubeMapShader * __cdecl EquirectangularToCubeMapShader__GetStatic(void)

{
  EquirectangularToCubeMapShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b775adce__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b775adce__thread_safe_static_guard_0__);
    if ( cde_l2_b775adce__thread_safe_static_guard_0__ == -1) {
      this = (EquirectangularToCubeMapShader *)port_op_new(0x5c);
      if (this == (EquirectangularToCubeMapShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)EquirectangularToCubeMapShader__EquirectangularToCubeMapShader(this);
      }
       cde_l2_8e942fb3_Singleton = (EquirectangularToCubeMapShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_b775adce__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_8e942fb3_Singleton;
}





//==== 004a5430 GetStatic_004a5430 ====


/* public: static class ExhaustShader * __cdecl ExhaustShader__GetStatic(void) */

ExhaustShader * __cdecl ExhaustShader__GetStatic(void)

{
  ExhaustShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e2025215__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_95a00a22__thread_safe_static_guard_0__);
    if ( cde_l2_95a00a22__thread_safe_static_guard_0__ == -1) {
      this = (ExhaustShader *)port_op_new(100);
      if (this == (ExhaustShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,100);
        pSVar1 = (Shader *)ExhaustShader__ExhaustShader(this);
      }
       cde_l2_3a659261_Singleton
           = (ExhaustShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_95a00a22__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_8e942fb3_Singleton;
}





//==== 004a54b0 GetStatic_004a54b0 ====


/* public: static class GeneralModuleShader * __cdecl GeneralModuleShader__GetStatic(void) */

GeneralModuleShader * __cdecl GeneralModuleShader__GetStatic(void)

{
  GeneralModuleShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3887c5d0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_47536993__thread_safe_static_guard_0__);
    if ( cde_l2_47536993__thread_safe_static_guard_0__ == -1) {
      this = (GeneralModuleShader *)port_op_new(0x5c);
      if (this == (GeneralModuleShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)GeneralModuleShader__GeneralModuleShader(this);
      }
       cde_l2_357ce277_Singleton = (GeneralModuleShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_47536993__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_357ce277_Singleton;
}





//==== 004a5530 GetStatic_004a5530 ====


/* public: static class ParticleShader * __cdecl ParticleShader__GetStatic(void) */

ParticleShader * __cdecl ParticleShader__GetStatic(void)

{
  ParticleShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_086b5760__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_4275eeaa__thread_safe_static_guard_0__);
    if ( cde_l2_4275eeaa__thread_safe_static_guard_0__ == -1) {
      this = (ParticleShader *)port_op_new(0x88);
      if (this == (ParticleShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x88);
        pSVar1 = (Shader *)ParticleShader__ParticleShader(this);
      }
       cde_l2_e1c88f0f_Singleton = (ParticleShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_4275eeaa__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_e1c88f0f_Singleton;
}





//==== 004a55c0 GetStatic_004a55c0 ====


/* public: static class PlanetShader * __cdecl PlanetShader__GetStatic(void) */

PlanetShader * __cdecl PlanetShader__GetStatic(void)

{
  PlanetShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c2fc6823__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a745c067__thread_safe_static_guard_0__);
    if ( cde_l2_a745c067__thread_safe_static_guard_0__ == -1) {
      this = (PlanetShader *)port_op_new(0xc0);
      if (this == (PlanetShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0xc0);
        pSVar1 = (Shader *)PlanetShader__PlanetShader(this);
      }
       cde_l2_8124d973_Singleton =
           (PlanetShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_a745c067__thread_safe_static_guard_0__);
    }
  }
  return cde_l2_8124d973_Singleton;

}





//==== 004a5650 GetStatic_004a5650 ====


/* public: static class PropellantTankShader * __cdecl PropellantTankShader__GetStatic(void) */

PropellantTankShader * __cdecl PropellantTankShader__GetStatic(void)

{
  PropellantTankShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3669c62b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_036117bd__thread_safe_static_guard_0__);
    if ( cde_l2_036117bd__thread_safe_static_guard_0__ == -1) {
      this = (PropellantTankShader *)port_op_new(0x60);
      if (this == (PropellantTankShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x60);
        pSVar1 = (Shader *)PropellantTankShader__PropellantTankShader(this);
      }
       cde_l2_ec4956de_Singleton = (PropellantTankShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_036117bd__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_398cd5cf_Singleton;
}





//==== 004a56d0 GetStatic_004a56d0 ====


/* public: static class RadiatorShader * __cdecl RadiatorShader__GetStatic(void) */

RadiatorShader * __cdecl RadiatorShader__GetStatic(void)

{
  RadiatorShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_75627faf__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c8950b6a__thread_safe_static_guard_0__);
    if ( cde_l2_c8950b6a__thread_safe_static_guard_0__ == -1) {
      this = (RadiatorShader *)port_op_new(0x5c);
      if (this == (RadiatorShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)RadiatorShader__RadiatorShader(this);
      }
       cde_l2_9ca5d583_Singleton = (RadiatorShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_c8950b6a__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_9ca5d583_Singleton;
}





//==== 004a5750 GetStatic_004a5750 ====


/* public: static class RingShadowShader * __cdecl RingShadowShader__GetStatic(void) */

RingShadowShader * __cdecl RingShadowShader__GetStatic(void)

{
  RingShadowShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1317dd6b__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f1db2fd1__thread_safe_static_guard_0__);
    if ( cde_l2_f1db2fd1__thread_safe_static_guard_0__ == -1) {
      this = (RingShadowShader *)port_op_new(0x58);
      if (this == (RingShadowShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x58);
        pSVar1 = (Shader *)RingShadowShader__RingShadowShader(this);
      }
       cde_l2_3819a783_Singleton = (RingShadowShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_f1db2fd1__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_3819a783_Singleton;
}





//==== 004a57d0 GetStatic_004a57d0 ====


/* public: static class RingsShader * __cdecl RingsShader__GetStatic(void) */

RingsShader * __cdecl RingsShader__GetStatic(void)

{
  RingsShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_038fa392__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f012fb19__thread_safe_static_guard_0__);
    if ( cde_l2_f1db2fd1__thread_safe_static_guard_0__ == -1) {
      this = (RingsShader *)port_op_new(0x7c);
      if (this == (RingsShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x7c);
        pSVar1 = (Shader *)RingsShader__RingsShader(this);
      }
       cde_l2_ef360c4c_Singleton =
           (RingsShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_f012fb19__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_ef360c4c_Singleton;
}





//==== 004a5850 GetStatic_004a5850 ====


/* public: static class RocketEngineShader * __cdecl RocketEngineShader__GetStatic(void) */

RocketEngineShader * __cdecl RocketEngineShader__GetStatic(void)

{
  RocketEngineShader *this;
  Shader *pSVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_44fbb442__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_231c133f__thread_safe_static_guard_0__);
    if ( cde_l2_231c133f__thread_safe_static_guard_0__ == -1) {
      this = (RocketEngineShader *)port_op_new(0x5c);
      if (this == (RocketEngineShader *)0x0) {
        pSVar1 = (Shader *)0x0;
      }
      else {
        memset(this,0,0x5c);
        pSVar1 = (Shader *)RocketEngineShader__RocketEngineShader(this);
      }
       cde_l2_34128338_Singleton = (RocketEngineShader *)NewShader(pSVar1);
      _Init_thread_footer(& cde_l2_231c133f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2_34128338_Singleton;
}




