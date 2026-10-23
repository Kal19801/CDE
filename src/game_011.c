// Auto-generated from Ghidra decompilation
#include "port_prelude.h"

//==== 005d0bc0 PassThroughCachedData_005d0bc0 ====


/* public: void  CylindricalCoolerSubModule__PassThroughCachedData(struct
   util__Cylinder_L_double_G_,class Material *,double) */

void 
CylindricalCoolerSubModule__PassThroughCachedData
          (CylindricalCoolerSubModule *this,Cylinder_L_double_G_ param_1,Material *param_2,
          double param_3)

{
  undefined4 in_stack_00000018;
  
  this->CachedCoolant = param_2;
  *(undefined4 *)&(this->CachedDimensions_m).Radius = param_1.Radius;
  *(undefined4 *)((int)&(this->CachedDimensions_m).Radius + 4) = (*(uint32_t *)((char *)&(param_1.Radius) + 4));
  *(undefined4 *)&(this->CachedDimensions_m).Height = param_1.Height;
  *(undefined4 *)((int)&(this->CachedDimensions_m).Height + 4) = (*(uint32_t *)((char *)&(param_1.Height) + 4));
  this->CachedCoolantMassFlowRate_kg__s = (double)CONCAT44((*(uint32_t*)&(param_3)),in_stack_00000018);
  return;
}





//==== 005d0be0 StaticFactory_005d0be0 ====

/* public: static class util__Reflectable * __cdecl
   CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticFactory(void) */

Reflectable * __cdecl
CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x30));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x30);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_207;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 005d0c30 StaticGetMember_005d0c30 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMember(class util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMember
          (Str_L_char_G_ *param_1)

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
        cde_l2_b175be64__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_b175be64__thread_safe_static_guard_0__),
      cde_l2_b175be64__thread_safe_static_guard_0__ == -1)) {
     cde_l2_246fd873_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_b175be64__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_246fd873_Count) {
    piVar7 = &DAT_0096bc44;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_dc9a2c14__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_dc9a2c14__thread_safe_static_guard_0__),
          cde_l2_dc9a2c14__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_9d1dc2ff_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0096bc40 = 0;
        DAT_0096bc44 = 0;
        DAT_0096bc48 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bc4c,"Unused");
        _DAT_0096bc58 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_dc9a2c14__thread_safe_static_guard_0__);
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
LAB_005d0d02:
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
          if (cVar3 == '\0') goto LAB_005d0d02;
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
    } while (iVar6 <  cde_l2_246fd873_Count);
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





//==== 005d0e90 StaticGetMemberCount_005d0e90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMemberCount(void) */

int __cdecl
CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_92613cb0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_92613cb0__thread_safe_static_guard_0__);
    if ( cde_l2_92613cb0__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_8fe0e257_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096bc14 = 0;
      _DAT_0096bc18 = 0;
      _DAT_0096bc1c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bc20,"Unused");
      _DAT_0096bc2c = 0;
      atexit( private__static_int_const___cdecl_CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_92613cb0__thread_safe_static_guard_0__);
    }
  }
  return 1;
}





//==== 005d0f30 StaticGetMembers_005d0f30 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMembers
          (void)

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
        cde_l2_0a6bedf4__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_0a6bedf4__thread_safe_static_guard_0__),
      cde_l2_0a6bedf4__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e8d89d07_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_0a6bedf4__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_e8d89d07_Count);
  iVar3 = 0;
  if (0 <  cde_l2_e8d89d07_Count) {
    puVar4 = &DAT_0096bc44;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_dc9a2c14__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_dc9a2c14__thread_safe_static_guard_0__),
          cde_l2_dc9a2c14__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_9d1dc2ff_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0096bc40 = 0;
        DAT_0096bc44 = 0;
        DAT_0096bc48 = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bc4c,"Unused");
        _DAT_0096bc58 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_CylindricalCoolerSubModule__ReflectionInfoStruct_class_CylindricalCoolerSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_dc9a2c14__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_e8d89d07_Count);
  }
  return in_stack_00000004;
}





//==== 005d1140 StaticGetReflectionInfo_005d1140 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CylindricalCoolerSubModule__ReflectionInfoStruct_L_class_CylindricalCoolerSubModule_G_ * __cdecl CylindricalCoolerSubModule__StaticGetReflectionInfo(void)
    */

ReflectionInfoStruct_L_class_CylindricalCoolerSubModule_G_ * __cdecl
CylindricalCoolerSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_e918c5a1__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_e918c5a1__thread_safe_static_guard_0__);
    if ( cde_l2_e918c5a1__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_7460a30c_ReflectionInfo) = &vftable_208;
      _Init_thread_footer(& cde_l2_e918c5a1__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_CylindricalCoolerSubModule_G_ * *)&cde_l2_7460a30c_ReflectionInfo;
}





//==== 005d11a0 GetComposition_005d11a0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   LinearInductionMotorSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
LinearInductionMotorSubModule__GetComposition(LinearInductionMotorSubModule *this)

{
  undefined8 stack0x00000004;
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Material *pMVar6;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  int iStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar8 = (undefined4 *)port_op_new(0x10);
  if (puVar8 == (undefined4 *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    *puVar8 = 0;
    *(undefined8 *)(puVar8 + 2) = 0;
  }
  iVar10 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar8;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar9 = 0;
    do {
      iVar9 = iVar9 + 0x10;
      iVar10 = iVar10 + 1;
      puVar8 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar9);
      *puVar8 = 0;
      puVar8[1] = iStack_10;
      puVar8[2] = 0;
      puVar8[3] = 0;
    } while (iVar10 < *(int *)(in_stack_00000004 + 0xc));
  }
  dVar2 = this->StatorDepth_m;
  dVar3 = this->CachedTrackWidth_m;
  pMVar6 = this->Stator;
  iVar10 = *(int *)(in_stack_00000004 + 8);
  dVar4 = this->TrackLength_m;
  dVar5 = pMVar6->Density_kg__m3;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar10 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar10);
  if (bVar7) {
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = (int)pMVar6;
    piVar1[1] = iStack_10;
    *(double *)(piVar1 + 2) = dVar2 * dVar3 * dVar4 * dVar5;
  }
  dVar2 = this->ForcerRadius_m;
  pMVar6 = this->Forcer;
  iVar10 = *(int *)(this_00 + 8);
  dVar3 = this->CachedTrackWidth_m;
  dVar4 = pMVar6->Density_kg__m3;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar10 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar7 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar10);
  if (bVar7) {
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = (int)pMVar6;
    piVar1[1] = iStack_10;
    *(double *)(piVar1 + 2) = dVar2 * dVar2 * 3.141592653589793 * dVar3 * dVar4;
  }
  return this_00;
}





//==== 005d12e0 GetPowerUsage_005d12e0 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   LinearInductionMotorSubModule__GetPowerUsage(void)const  */

Darray_L_struct_PowerUsage_G_ * __thiscall
LinearInductionMotorSubModule__GetPowerUsage(LinearInductionMotorSubModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_struct_PowerUsage_G_ *this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;
  Darray_L_struct_PowerUsage_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_60;
  double dStack_50;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_PowerUsage___Darray_struct_PowerUsage(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_30,"PowerUse LinearMotor");
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&SStack_24,pSVar3);
  dStack_c = this->PowerConsumption_W;
  util__Str_char___Str_char(&SStack_60,&SStack_24);
  dStack_50 = dStack_c;
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_PowerUsage_G_ *)(iVar1 + 1);
  util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)this_00,
             (int *)&stack0x00000004);
  bVar2 = util__Darray_struct_PowerUsage___CheckSize(this_00,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x18;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
    *(double *)(iVar1 + -8) = dStack_c;
  }
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
    pvStack_3c = (void *)0x0;
  }
  if (apvStack_48[0] != (void *)0x0) {
    port_op_delete(apvStack_48[0]);
    apvStack_48[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  return this_00;
}





//==== 005d1420 GetStatuses_005d1420 ====

/* public: virtual class DesignStatusBuffer 
   LinearInductionMotorSubModule__GetStatuses(class DataParser *)const  */

DesignStatusBuffer * 
LinearInductionMotorSubModule__GetStatuses
          (LinearInductionMotorSubModule *this,DesignStatusBuffer *__return_storage_ptr__,
          DataParser *param_1)

{
  double *pdVar1;
  double dVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  ModulePlacer *pMVar7;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_44,"LinearInductionMotorMelting");
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_14 = this->ForcerRadius_m * this->ForcerRadius_m * 3.141592653589793 *
             this->CachedTrackWidth_m * this->Forcer->Density_kg__m3;
  local_c = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  local_14 = Material__GetTemperatureIncreaseFromEnergyDelta_K
                       (this->Forcer,this->PowerConsumption_W * local_c,local_14);
  dVar2 = this->CachedCoolantInletTemperature_K + local_14;
  pdVar1 = &this->Forcer->ThermalConductivity_W__m_K;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,*pdVar1 <= dVar2 && dVar2 != *pdVar1,&local_44,&local_20,
             &local_2c,&local_38,(ModulePlacer *)0x0);
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  util__Str_char___Str_char(&local_44,"LinearInductionMotorThermalExpansionStress");
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_c = this->ForcerRadius_m * this->ForcerRadius_m * 3.141592653589793 *
            this->CachedTrackWidth_m * this->Forcer->Density_kg__m3;
  *(uint32_t *)&local_14 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  local_14 = Material__GetTemperatureIncreaseFromEnergyDelta_K
                       (this->Forcer,this->PowerConsumption_W * local_14,local_c);
  *(uint32_t *)&local_14 = Material__GetThermalExpansionStress_Pa(this->Forcer,local_14);
  pSVar6 = &local_20;
  pMVar7 = (ModulePlacer *)0x0;
  pSVar5 = &local_2c;
  pSVar4 = &local_38;
  pSVar3 = &local_44;
  local_c = Material__GetYieldStrength_Pa(this->Forcer);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_14,pSVar3,pSVar4,pSVar5,pSVar6,pMVar7);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  return __return_storage_ptr__;
}

//==== 005d16f0 GetPointerPropertyChoices_005d16f0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   LinearInductionMotorSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
LinearInductionMotorSubModule__GetPointerPropertyChoices
          (LinearInductionMotorSubModule *this,ClassMember *param_1,
          SerializationManagerInterface *param_2)

{
  bool bVar1;
  char *pcVar2;
  SerializationManagerInterface SVar3;
  int in_stack_0000000c;
  undefined1 uVar4;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar3 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar3 = *param_2;
  }
  pcVar2 = "Stator";
  while( true ) {
    if ((pcVar2[(int)((*(int *)&(SVar3)) + -0x92867c)] == '\0') && (*pcVar2 == '\0')) {
      uVar4 = 6;
      goto LAB_005d172a;
    }
    if (pcVar2[(int)((*(int *)&(SVar3)) + -0x92867c)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  if ((*(int *)&(param_2[1])) < 1) {
    SVar3 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar3 = *param_2;
  }
  for (pcVar2 = "Forcer"; (pcVar2[(int)((*(int *)&(SVar3)) + -0x928684)] != '\0' || (*pcVar2 != '\0'));
      pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)((*(int *)&(SVar3)) + -0x928684)] != *pcVar2) {
      bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"Coolant");
      if (!bVar1) {
        (param_1->Name).Data =
             (char *)&vftable_85;
        (param_1->Name).Capacity = 0;
        (param_1->Name).Length = 0;
        *(undefined4 *)&param_1->Type = 0;
        return param_1;
      }
      uVar4 = 2;
LAB_005d172a:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar4);
      return param_1;
    }
  }
  uVar4 = 3;
  goto LAB_005d172a;
}





//==== 005d17b0 GetReflectionInfo_005d17b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LinearInductionMotorSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
LinearInductionMotorSubModule__GetReflectionInfo(LinearInductionMotorSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f662c300__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f662c300__thread_safe_static_guard_0__);
    if ( cde_l2_f662c300__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_2cb2793e_ReflectionInfo) = &vftable_210;
      _Init_thread_footer(& cde_l2_f662c300__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_2cb2793e_ReflectionInfo;
}





//==== 005d17c0 scalar_deleting_destructor_005d17c0 ====

/* public: virtual void * __thiscall LinearInductionMotorSubModule:: 0 scalardeletingdestructor(unsigned int) */

void * 
LinearInductionMotorSubModule___scalar_deleting_destructor
          (LinearInductionMotorSubModule *this,uint param_1)

{
  void *pvVar1;
  
  (this->Cooler)._pad_0x0_0 = (int)&vftable_5;
  pvVar1 = (void *)(this->Cooler)._pad_0x4_1;
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    (this->Cooler)._pad_0x4_1 = 0;
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0xa0);
  }
  return this;
}

//==== 005d1820 GetTypeName_005d1820 ====


/* public: virtual class util__Str_L_char_G_ 
   LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetTypeName(ReflectionInfoStruct_L_class_LinearInductionMotorSubModule_G_ *this,
           Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LinearInductionMotorSubModule");
  return __return_storage_ptr__;
}





//==== 005d1840 GetMembers_005d1840 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetMembers
          (ReflectionInfoStruct_L_class_LinearInductionMotorSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_97de3e68__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_97de3e68__thread_safe_static_guard_0__),
      cde_l2_97de3e68__thread_safe_static_guard_0__ == -1)) {
     cde_l2_d31fcacc_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_97de3e68__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_d31fcacc_Count);
  iVar3 = 0;
  if (0 <  cde_l2_d31fcacc_Count) {
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
    } while (iVar3 <  cde_l2_d31fcacc_Count);
  }
  return in_stack_00000004;
}





//==== 005d1980 GetMember_005d1980 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetMember(class util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetMember
          (ReflectionInfoStruct_L_class_LinearInductionMotorSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_3195d1c3__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_3195d1c3__thread_safe_static_guard_0__),
      cde_l2_3195d1c3__thread_safe_static_guard_0__ == -1)) {
     cde_l2_0205c1a2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_3195d1c3__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_0205c1a2_Count) {
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
LAB_005d1a0d:
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
          if (cVar3 == '\0') goto LAB_005d1a0d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_0205c1a2_Count);
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





//==== 005d1b20 GetFactory_005d1b20 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___GetFactory
          (ReflectionInfoStruct_L_class_LinearInductionMotorSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d1b30 GetComposition_005d1b30 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   LinearMotorSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
LinearMotorSubModule__GetComposition(LinearMotorSubModule *this)

{
  undefined8 stack0x00000004;
  double dVar1;
  Material *pMVar2;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_20;
  undefined4 uStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar4 = (undefined4 *)port_op_new(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
  }
  iVar6 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 0x10;
      iVar6 = iVar6 + 1;
      puVar4 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar5);
      *puVar4 = 0;
      puVar4[1] = uStack_10;
      puVar4[2] = 0;
      puVar4[3] = 0;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0xc));
  }
  pMVar2 = Material__DefaultMaterial;
  dVar8 = this->PowerConsumption_W * 0.85;
  dVar1 = this->CachedDistance_m * this->CachedDistance_m;
  dVar7 = ((dVar1 + dVar1) * this->CachedRoundMass_kg) / dVar8;
  libm_sse2_pow_precise(0.0,0.0);
  dVar1 = this->CachedDistance_m;
  iVar6 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar6 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar3) {
    puVar4 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar4 = (undefined4)(uintptr_t)(pMVar2);
    puVar4[1] = uStack_20;
    *(double *)(puVar4 + 2) = (dVar8 / (((dVar1 / (dVar7 * 10.0)) / 1000.0) * 1000.0)) * 0.02;
  }
  return this_00;
}





//==== 005d1c60 GetPowerUsage_005d1c60 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   LinearMotorSubModule__GetPowerUsage(void)const  */

Darray_L_struct_PowerUsage_G_ * __thiscall
LinearMotorSubModule__GetPowerUsage(LinearMotorSubModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_struct_PowerUsage_G_ *this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;
  Darray_L_struct_PowerUsage_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_60;
  double dStack_50;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_PowerUsage___Darray_struct_PowerUsage(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_30,"PowerUse LinearMotor");
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&SStack_24,pSVar3);
  dStack_c = this->PowerConsumption_W;
  util__Str_char___Str_char(&SStack_60,&SStack_24);
  dStack_50 = dStack_c;
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_PowerUsage_G_ *)(iVar1 + 1);
  util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)this_00,
             (int *)&stack0x00000004);
  bVar2 = util__Darray_struct_PowerUsage___CheckSize(this_00,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x18;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
    *(double *)(iVar1 + -8) = dStack_c;
  }
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
    pvStack_3c = (void *)0x0;
  }
  if (apvStack_48[0] != (void *)0x0) {
    port_op_delete(apvStack_48[0]);
    apvStack_48[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  return this_00;
}





//==== 005d1da0 GetReflectionInfo_005d1da0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   LinearMotorSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall LinearMotorSubModule__GetReflectionInfo(LinearMotorSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c1f3c1b4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c1f3c1b4__thread_safe_static_guard_0__);
    if ( cde_l2_c1f3c1b4__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4b08576e_ReflectionInfo) = &vftable_212;
      _Init_thread_footer(& cde_l2_c1f3c1b4__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_4b08576e_ReflectionInfo;
}





//==== 005d1db0 scalar_deleting_destructor_005d1db0 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void * __thiscall InterfaceSettings:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
InterfaceSettings___scalar_deleting_destructor(InterfaceSettings *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x28);
  }
  return this;
}

//==== 005d1df0 GetTypeName_005d1df0 ====


/* public: virtual class util__Str_L_char_G_  LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_LinearMotorSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"LinearMotorSubModule");
  return __return_storage_ptr__;
}





//==== 005d1e10 GetMembers_005d1e10 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetMembers(void)const  */

undefined4 
LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_LinearMotorSubModule_G_ *this)

{
  undefined4 in_stack_00000004;
  
  StaticGetMembers();
}





//==== 005d1e30 GetMember_005d1e30 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_LinearMotorSubModule_G_ *this,Str_L_char_G_ *param_1)

{
  StaticGetMember(param_1);
  return param_1;
}





//==== 005d1e50 GetFactory_005d1e50 ====


/* public: virtual class util__Reflectable * (__cdecl*
   LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_LinearMotorSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d1e60 GetTypeName_005d1e60 ====


/* public: virtual class util__Str_L_char_G_  CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_CapacitorSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CapacitorSubModule");
  return __return_storage_ptr__;
}





//==== 005d1e80 GetMembers_005d1e80 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_CapacitorSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_5c4bf9ab__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5c4bf9ab__thread_safe_static_guard_0__),
      cde_l2_5c4bf9ab__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a689d159_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5c4bf9ab__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_a689d159_Count);
  iVar3 = 0;
  if (0 <  cde_l2_a689d159_Count) {
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
    } while (iVar3 <  cde_l2_a689d159_Count);
  }
  return in_stack_00000004;
}





//==== 005d1fc0 GetMember_005d1fc0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_CapacitorSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_006587e8__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_006587e8__thread_safe_static_guard_0__),
      cde_l2_006587e8__thread_safe_static_guard_0__ == -1)) {
     cde_l2_a06b0f5a_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_006587e8__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_a06b0f5a_Count) {
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
LAB_005d204d:
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
          if (cVar3 == '\0') goto LAB_005d204d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_a06b0f5a_Count);
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





//==== 005d2160 GetFactory_005d2160 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetFactory(void)const )(void)
    */

_func_Reflectable_ptr * 
__thiscall CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_CapacitorSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d2170 GetTypeName_005d2170 ====


/* public: virtual class util__Str_L_char_G_ 
   CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_CapacitorBankSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CapacitorBankSubModule");
  return __return_storage_ptr__;
}





//==== 005d2190 GetMembers_005d2190 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_CapacitorBankSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_dab58622__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_dab58622__thread_safe_static_guard_0__),
      cde_l2_dab58622__thread_safe_static_guard_0__ == -1)) {
     cde_l2_8eddb688_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_dab58622__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_8eddb688_Count);
  iVar3 = 0;
  if (0 <  cde_l2_8eddb688_Count) {
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
    } while (iVar3 <  cde_l2_8eddb688_Count);
  }
  return in_stack_00000004;
}





//==== 005d22d0 GetMember_005d22d0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_CapacitorBankSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_f4a95f2b__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_f4a95f2b__thread_safe_static_guard_0__),
      cde_l2_f4a95f2b__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4a399f13_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_f4a95f2b__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_4a399f13_Count) {
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
LAB_005d235d:
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
          if (cVar3 == '\0') goto LAB_005d235d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_4a399f13_Count);
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





//==== 005d2470 GetFactory_005d2470 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_CapacitorBankSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d2480 CapacitorBankSubModule ====

/* public: __thiscall CapacitorBankSubModule__CapacitorBankSubModule(void) */

CapacitorBankSubModule * __thiscall
CapacitorBankSubModule__CapacitorBankSubModule(CapacitorBankSubModule *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x10_4 = 0;
  this->_pad_0x18_6 = 0;
  this->_pad_0x1c_7 = 0;
  this->_pad_0x20_8 = 0;
  this->_pad_0x24_9 = 0;
  this->_pad_0x40_16 = 1;
  this->_pad_0x28_10 = 0;
  this->_pad_0x2c_11 = 0;
  this->_pad_0x30_12 = 0;
  this->_pad_0x34_13 = 0;
  this->_pad_0x38_14 = 0;
  this->_pad_0x3c_15 = 0;
  this->_pad_0x44_17 = 0;
  this->_pad_0x48_18 = 0;
  this->_pad_0x0_0 = (int)&vftable_216;
  return this;
}

//==== 005d24d0 CapacitorSubModule ====

/* public: __thiscall CapacitorSubModule__CapacitorSubModule(void) */

CapacitorSubModule * __thiscall CapacitorSubModule__CapacitorSubModule(CapacitorSubModule *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_215;
  this->DielectricComposition = (Material *)0x0;
  *(undefined4 *)&(this->Dimensions_m).Radius = 0;
  *(undefined4 *)((int)&(this->Dimensions_m).Radius + 4) = 0;
  *(undefined4 *)&(this->Dimensions_m).Height = 0;
  *(undefined4 *)((int)&(this->Dimensions_m).Height + 4) = 0;
  this->CachedCount = 1;
  *(undefined4 *)&this->Separation_m = 0;
  *(undefined4 *)((int)&this->Separation_m + 4) = 0;
  *(undefined4 *)&this->CachedResistance_Ohm = 0;
  *(undefined4 *)((int)&this->CachedResistance_Ohm + 4) = 0;
  this->CachedPowerSupply_W = 0.0;
  (this->CapacitorModel).Pointer = (GameModel *)0x0;
  (this->CapacitorModel).Controller = (ReferenceController *)0x0;
  return this;
}

//==== 005d2520 scalar_deleting_destructor_005d2520 ====

/* public: virtual void * __thiscall CapacitorBankSubModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
CapacitorBankSubModule___scalar_deleting_destructor(CapacitorBankSubModule *this,uint param_1)

{
  if ((ReferenceController *)this->_pad_0x48_18 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference((ReferenceController *)this->_pad_0x48_18);
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x58);
  }
  return this;
}

//==== 005d2570 scalar_deleting_destructor_005d2570 ====

/* public: virtual void * __thiscall CapacitorSubModule:: 0 scalardeletingdestructor(unsigned int)
    */

void * __thiscall
CapacitorSubModule___scalar_deleting_destructor(CapacitorSubModule *this,uint param_1)

{
  ReferenceController *this_00;
  
  this_00 = (this->CapacitorModel).Controller;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(this_00);
  }
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x50);
  }
  return this;
}

//==== 005d25c0 BuildModels_005d25c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CapacitorSubModule__BuildModels(class util__Darray_L_class_util__SharedPtr_L_structGameModel_G__G_ *) */

void __thiscall
CapacitorSubModule__BuildModels
          (CapacitorSubModule *this,Darray_L_util__SharedPtr_L_GameModel_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  SharedPtr_L_GameModel_G_ *pSVar1;
  ReferenceController *this_00;
  Quaternion_L_double_G_ QVar2;
  Vec4_L_double_G_ VVar3;
  bool bVar4;
  GameModel *pGVar5;
  ReferenceControllerRegistry *pRVar6;
  ReferenceController *pRVar7;
  undefined4 *puVar8;
  VertexBufferObject *pVVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  GameModel *pGVar17;
  GameModel *pGVar18;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_18;
  GameModel *local_10;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uVar11 = 0;
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)((GameModel *)param_1);
  pGVar5 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar5 == (GameModel *)0x0) {
    pGVar5 = (GameModel *)0x0;
  }
  else {
    pGVar5 = (GameModel *)
             GameModel__GameModel
                       (pGVar5,Material__DefaultMaterial,(Material *)0x0,
                        ({ __typeof__(((ulonglong)CONCAT31((int3)((uint)uVar11 >> 8),1) << 0x20)) _t_ = ((ulonglong)CONCAT31((int3)((uint)uVar11 >> 8),1) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (pGVar5 != (GameModel *)0x0) goto LAB_005d2634;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005d2634:
  pGVar17 = pGVar5;
  pRVar6 = util__ReferenceControllerRegistry__Get();
  pRVar7 = util__ReferenceControllerRegistry__Register(pRVar6,pGVar17);
  if (pRVar7 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(pRVar7);
  }
  iVar10 = param_1->Size;
  (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)(iVar10 + 1));
  util__Darray_L_util__SharedPtr_L_GameModel_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)local_10,(int *)((int)&local_18 + 4));
  pGVar17 = local_10;
  bVar4 = util__Darray_L_util__SharedPtr_L_GameModel_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)local_10,iVar10);
  if (bVar4) {
    iVar10 = *(int *)((int)&pGVar17->VertexObject + 8);
    pSVar1 = *(SharedPtr_L_GameModel_G_ **)((int)&pGVar17->VertexObject + 4);
    *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)(pSVar1[iVar10 + -1].Pointer);
    (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)(pSVar1[iVar10 + -1].Controller);
    pSVar1[iVar10 + -1].Pointer = pGVar5;
    pSVar1[iVar10 + -1].Controller = pRVar7;
    if (pRVar7 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(pRVar7);
    }
    if (((*(uint32_t*)((char*)&(local_18)+4)) != (ReferenceController *)0x0) &&
       (bVar4 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(local_18)+4))))), bVar4)) {
      if (local_10 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(local_10,1);
      }
      pGVar18 = local_10;
      pRVar6 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pGVar18);
    }
  }
  if ((pRVar7 != (ReferenceController *)0x0) &&
     (bVar4 = util__ReferenceController__ReleaseStrongReference(pRVar7), bVar4)) {
    if (pGVar5 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar5,1);
    }
    pRVar6 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar6,pGVar5);
  }
  dVar15 = (this->Dimensions_m).Height;
  dVar16 = (this->Dimensions_m).Radius;
  if (dVar15 <= dVar16) {
    dVar15 = dVar16;
  }
  dVar15 = dVar15 * 0.01;
  *(uint32_t *)&local_18 = dVar15 + (this->Dimensions_m).Radius;
  dVar16 = dVar15 + dVar15 + (this->Dimensions_m).Height;
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  dVar15 = (dVar16 / -1000.0) * 0.5;
  VVar3.Z = SUB84(dVar15,0);
  VVar3.X = 0.0;
  VVar3.Y = 0.0;
  VVar3.W = (int)((ulonglong)dVar15 >> 0x20);
  Graphics__Translate(VVar3);
  uVar11 = 0x54442d18;
  uVar13 = 0x3fe921fb;
  libm_sse2_sin_precise(0.0);
  dVar15 = (double)CONCAT44(uVar13,uVar11) * 0.0;
  uVar12 = 0x54442d18;
  uVar14 = 0x3fe921fb;
  libm_sse2_cos_precise(0.0);
  local_40 = SUB84(dVar15,0);
  uStack_3c = (undefined4)((ulonglong)dVar15 >> 0x20);
  QVar2.Y = uVar13;
  QVar2.X = uVar11;
  QVar2.Y = local_40;
  QVar2.Z = uStack_3c;
  QVar2.Z = local_40;
  QVar2.W = uStack_3c;
  QVar2.W = uVar12;
  (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar14;
  Graphics__Rotate(QVar2);
  puVar8 = (undefined4 *)(**(code **)((pGVar17->VertexObject)._pad_0x0_0 + 8))();
  pVVar9 = GameModel__GetVertexObject((GameModel *)*puVar8);
  iVar10 = GetUniversalRadialSegmentation(local_18);
  FillChamferedCylinder(local_18 / 1000.0,dVar16 / 1000.0,0.1,iVar10,pVVar9);
  Graphics__TransformStack___TransformStack(&local_9);
  puVar8 = (undefined4 *)(**(code **)((pGVar17->VertexObject)._pad_0x0_0 + 8))();
  pRVar7 = (this->CapacitorModel).Controller;
  (this->CapacitorModel).Pointer = (GameModel *)*puVar8;
  this_00 = (ReferenceController *)puVar8[1];
  (this->CapacitorModel).Controller = this_00;
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference(this_00);
  }
  if (pRVar7 != (ReferenceController *)0x0) {
    util__ReferenceController__ReleaseWeakReference(pRVar7);
  }
  return;
}

//==== 005d2b70 GetCapacitance_F ====


/* public: double __thiscall CapacitorSubModule__GetCapacitance_F(void)const  */

double __thiscall CapacitorSubModule__GetCapacitance_F(CapacitorSubModule *this)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  if (this->DielectricComposition == (Material *)0x0) {
    dStack_c = 1.0;
  }
  else {
    dStack_c = this->DielectricComposition->TotalMagneticMoment;
  }
  dVar3 = this->Separation_m + this->Separation_m;
  dStack_14 = (this->Dimensions_m).Radius / dVar3;
  dVar4 = util__Floor(&dStack_14);
  iVar2 = (int)dVar4;
  dStack_1c = (this->Dimensions_m).Radius / (this->Separation_m + this->Separation_m);
  if (iVar2 < 2) {
    iVar2 = 2;
  }
  dVar4 = util__Floor(&dStack_1c);
  iVar1 = (int)dVar4;
  if (iVar1 < 2) {
    iVar1 = 2;
  }
  return (dVar3 * 3.141592653589793 * (double)iVar2 * (double)(iVar1 + -1) *
          (this->Dimensions_m).Height * dStack_c * 8.854187817e-12) / this->Separation_m;
}





//==== 005d2c50 GetChargeTime_s ====

/* public: double __thiscall CapacitorSubModule__GetChargeTime_s(void)const  */

double __thiscall CapacitorSubModule__GetChargeTime_s(CapacitorSubModule *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if (this->DielectricComposition == (Material *)0x0) {
    dVar2 = 40.0;
  }
  else {
    dVar2 = this->DielectricComposition->RelativePermeability;
  }
  dVar2 = dVar2 * 1000000.0 * this->Separation_m * 0.8;
  dVar3 = GetCapacitance_F(this);
  iVar1 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  return ((double)iVar1 * dVar3 * dVar2 * dVar2 * 0.5) / this->CachedPowerSupply_W;
}

//==== 005d2ce0 GetComposition_005d2ce0 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CapacitorSubModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
CapacitorSubModule__GetComposition
          (CapacitorSubModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  Material *pMVar4;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar5;
  MaterialComposition *pMVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined4 uStack_30;
  undefined4 uStack_20;
  undefined8 uStack_1c;
  double local_14;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 1;
  pMVar6 = (MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  if (pMVar6 == (MaterialComposition *)0x0) {
    pMVar6 = (MaterialComposition *)0x0;
  }
  else {
    pMVar6->Type = (Material *)0x0;
    pMVar6->Mass_kg = 0.0;
  }
  iVar8 = 0;
  this_00->Data = pMVar6;
  if (0 < this_00->Capacity) {
    iVar7 = 0;
    do {
      iVar8 = iVar8 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->Type + iVar7);
      *puVar1 = 0;
      puVar1[1] = uStack_30;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar7 = iVar7 + 0x10;
    } while (iVar8 < this_00->Capacity);
  }
  if (this->DielectricComposition != (Material *)0x0) {
    local_c = this->Separation_m + this->Separation_m;
    *(uint32_t *)&local_14 = (this->Dimensions_m).Radius / local_c;
    dVar10 = util__Floor(&local_14);
    iVar8 = (int)dVar10;
    uStack_1c = (this->Dimensions_m).Radius / (this->Separation_m + this->Separation_m);
    if (iVar8 < 2) {
      iVar8 = 2;
    }
    dVar10 = util__Floor((double *)&uStack_1c);
    iVar7 = (int)dVar10;
    if (iVar7 < 2) {
      iVar7 = 2;
    }
    local_c = local_c * 3.141592653589793 * (double)iVar8 * (double)(iVar7 + -1) *
              (this->Dimensions_m).Height * this->DielectricComposition->Density_kg__m3 *
              (this->Separation_m + this->Separation_m);
    iVar7 = (**(code **)(this->_pad_0x0_0 + 0x78))();
    iVar8 = this_00->Size;
    pMVar4 = this->DielectricComposition;
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar8 + 1);
    dVar10 = (double)iVar7 * local_c;
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
    bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar8);
    if (bVar5) {
      pMVar6 = this_00->Data + this_00->Size + -1;
      pMVar6->Type = pMVar4;
      (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar6) + 0x4)) = uStack_30);
      pMVar6->Mass_kg = dVar10;
    }
  }
  pMVar4 = Material__DefaultMaterial;
  dVar10 = (this->Dimensions_m).Radius;
  dVar2 = (this->Dimensions_m).Height;
  if (dVar2 <= dVar10) {
    dVar2 = dVar10;
  }
  dVar9 = dVar2 * 0.01 + dVar10;
  dVar2 = (this->Dimensions_m).Height;
  dVar3 = Material__DefaultMaterial->Density_kg__m3;
  iVar7 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  iVar8 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar8 + 1);
  uStack_1c = (double)iVar7 *
              (dVar9 * 3.141592653589793 * dVar9 - dVar10 * 3.141592653589793 * dVar10) * dVar2 *
              dVar3;
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar5 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar8);
  if (bVar5) {
    pMVar6 = this_00->Data + this_00->Size + -1;
    pMVar6->Type = pMVar4;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar6) + 0x4)) = uStack_20);
    *(undefined4 *)&pMVar6->Mass_kg = (undefined4)uStack_1c;
    *(undefined4 *)((int)&pMVar6->Mass_kg + 4) = (*(uint32_t*)((char*)&(uStack_1c)+4));
  }
  return this_00;
}

//==== 005d2f20 GetCooldownTime_s ====


/* public: double __thiscall LinearInductionMotorSubModule__GetCooldownTime_s(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetCooldownTime_s(LinearInductionMotorSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  dVar1 = this->PowerConsumption_W;
  dVar2 = this->ForcerRadius_m;
  dVar5 = this->CachedTrackWidth_m;
  dVar6 = this->Forcer->Density_kg__m3;
  dVar4 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  dVar5 = Material__GetTemperatureIncreaseFromEnergyDelta_K
                    (this->Forcer,this->PowerConsumption_W * dVar4,
                     dVar2 * dVar2 * 3.141592653589793 * dVar5 * dVar6);
  dVar2 = this->CachedCoolantInletTemperature_K;
  dVar6 = CylindricalCoolerSubModule__GetThermalConductance_W__K(&this->Cooler);
  return (dVar1 * dVar3) / (((dVar2 + dVar5) - this->CachedCoolantInletTemperature_K) * dVar6);
}





//==== 005d2ff0 GetCount ====


/* public: virtual int __thiscall CapacitorBankSubModule__GetCount(void)const  */

int __thiscall CapacitorBankSubModule__GetCount(CapacitorBankSubModule *this)

{
  return this->Count;
}





//==== 005d3000 GetCount_005d3000 ====


/* public: virtual int __thiscall CapacitorSubModule__GetCount(void)const  */

int __thiscall CapacitorSubModule__GetCount(CapacitorSubModule *this)

{
  return this->CachedCount;
}





//==== 005d3010 GetCurrent ====


/* public: double __thiscall CapacitorSubModule__GetCurrent(double)const  */

double __thiscall CapacitorSubModule__GetCurrent(CapacitorSubModule *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (this->DielectricComposition == (Material *)0x0) {
    dVar3 = 40.0;
  }
  else {
    dVar3 = this->DielectricComposition->RelativePermeability;
  }
  dVar1 = this->Separation_m;
  dVar2 = this->CachedResistance_Ohm;
  dVar4 = GetCapacitance_F(this);
  dVar4 = -(param_1 / (dVar4 * this->CachedResistance_Ohm));
  libm_sse2_exp_precise(0.0);
  return dVar4 * ((dVar3 * 1000000.0 * dVar1 * 0.8) / dVar2);
}





//==== 005d3090 GetEffectiveVoltage_V ====


/* public: double __thiscall CapacitorSubModule__GetEffectiveVoltage_V(void)const  */

double __thiscall CapacitorSubModule__GetEffectiveVoltage_V(CapacitorSubModule *this)

{
  double dVar1;
  
  if (this->DielectricComposition == (Material *)0x0) {
    dVar1 = 40.0;
  }
  else {
    dVar1 = this->DielectricComposition->RelativePermeability;
  }
  return dVar1 * 1000000.0 * this->Separation_m * 0.8;
}





//==== 005d30d0 GetExitVelocity_m__s ====


/* public: double __thiscall LinearInductionMotorSubModule__GetExitVelocity_m__s(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetExitVelocity_m__s(LinearInductionMotorSubModule *this)

{
  Material *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  Maybe_L_double_G_ MStack_70;
  Maybe_L_double_G_ MStack_60;
  Maybe_L_double_G_ MStack_50;
  double dStack_40;
  double dStack_38;
  undefined1 auStack_30 [16];
  double dStack_20;
  double dStack_18;
  double dStack_10;
  Maybe_L_double_G_ *pMStack_8;
  
  dVar2 = this->TrackLength_m;
  dVar4 = this->CachedTrackWidth_m;
  dStack_10 = this->ForcerRadius_m;
  (*(uint64_t*)((char*)&(auStack_30)+8)) = dVar2 * dVar4;
  dStack_38 = dStack_10 * dStack_10 * 4.0 + dVar2 * dVar2 + dVar4 * dVar4;
  pMStack_8 = util__Sqrt(&MStack_50,&dStack_38);
  if (pMStack_8->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = (double)(*(uint64_t*)((char*)&(auStack_30)+8)) / ((dStack_10 + dStack_10) * pMStack_8->Data);
  libm_sse2_atan_precise(0.0);
  dStack_18 = this->StatorDepth_m + this->ForcerRadius_m;
  dStack_40 = dStack_18 * dStack_18 * 4.0 + this->TrackLength_m * this->TrackLength_m +
              this->CachedTrackWidth_m * this->CachedTrackWidth_m;
  dStack_10 = dVar2;
  pMStack_8 = util__Sqrt(&MStack_60,&dStack_40);
  if (pMStack_8->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar4 = (double)(*(uint64_t*)((char*)&(auStack_30)+8)) / ((dStack_18 + dStack_18) * pMStack_8->Data);
  libm_sse2_atan_precise(0.0);
  dVar2 = this->CachedTrackWidth_m;
  pMVar1 = this->Forcer;
  dStack_10 = (dStack_10 - dVar4) * (this->Stator->BandGap_eV / 3.141592653589793);
  dVar4 = this->ForcerRadius_m;
  dVar5 = (pMVar1->RelativePermittivity * dVar2) / (dVar4 * 3.141592653589793 * dVar4);
  dVar3 = 0.0;
  if (0.0 < dVar5) {
    dStack_18 = this->PowerConsumption_W / dVar5;
    pMStack_8 = util__Sqrt((Maybe_L_double_G_ *)auStack_30,&dStack_18);
    if (pMStack_8->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar3 = pMStack_8->Data;
    dVar4 = this->ForcerRadius_m;
    dVar2 = this->CachedTrackWidth_m;
    pMVar1 = this->Forcer;
  }
  dVar3 = dVar3 * dStack_10 * dVar2;
  dStack_20 = ((dVar3 + dVar3) * this->TrackLength_m) /
              (dVar4 * dVar4 * 3.141592653589793 * dVar2 * pMVar1->Density_kg__m3 +
              this->CachedPayloadMass_kg);
  pMStack_8 = util__Sqrt(&MStack_70,&dStack_20);
  if (pMStack_8->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_18 = pMStack_8->Data;
  dStack_20 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  (*(uint64_t*)((char*)&(auStack_30)+8)) =
       Physics__GetVelocity_m__s
                 (this->CachedPayloadMass_kg +
                  this->ForcerRadius_m * this->ForcerRadius_m * 3.141592653589793 *
                  this->CachedTrackWidth_m * this->Forcer->Density_kg__m3,
                  this->PowerConsumption_W * dStack_20);
  (*(uint64_t*)((char*)&(auStack_30)+8)) = (double)(*(uint64_t*)((char*)&(auStack_30)+8)) * 0.5;
  dVar2 = -(dStack_18 / (double)(*(uint64_t*)((char*)&(auStack_30)+8)));
  libm_sse2_exp_precise(0.0);
  return (1.0 - dVar2) * (double)(*(uint64_t*)((char*)&(auStack_30)+8));
}





//==== 005d33f0 GetFiringEnergy_J ====


/* public: double __thiscall LinearInductionMotorSubModule__GetFiringEnergy_J(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetFiringEnergy_J(LinearInductionMotorSubModule *this)

{
  double dVar1;
  
  dVar1 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  return dVar1 * this->PowerConsumption_W;
}





//==== 005d3410 GetFiringTimeWithLoad_s ====


/* public: double  LinearInductionMotorSubModule__GetFiringTimeWithLoad_s(double)const  */

double 
LinearInductionMotorSubModule__GetFiringTimeWithLoad_s
          (LinearInductionMotorSubModule *this,double param_1)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Maybe_L_double_G_ MStack_7c;
  Maybe_L_double_G_ MStack_6c;
  Maybe_L_double_G_ MStack_5c;
  undefined1 auStack_4c [16];
  double dStack_3c;
  undefined1 auStack_34 [16];
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dVar2 = this->TrackLength_m;
  dVar3 = this->CachedTrackWidth_m;
  dStack_c = this->ForcerRadius_m;
  (*(uint64_t*)((char*)&(auStack_34)+8)) = dVar2 * dVar3;
  dStack_14 = dStack_c * dStack_c * 4.0 + dVar2 * dVar2 + dVar3 * dVar3;
  pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_4c,&dStack_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar2 = (double)(*(uint64_t*)((char*)&(auStack_34)+8)) / ((dStack_c + dStack_c) * pMVar1->Data);
  libm_sse2_atan_precise(0.0);
  dStack_24 = this->ForcerRadius_m + this->StatorDepth_m;
  dStack_1c = dStack_24 * dStack_24 * 4.0 + this->TrackLength_m * this->TrackLength_m +
              this->CachedTrackWidth_m * this->CachedTrackWidth_m;
  dStack_c = dVar2;
  pMVar1 = util__Sqrt(&MStack_5c,&dStack_1c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar3 = (double)(*(uint64_t*)((char*)&(auStack_34)+8)) / ((dStack_24 + dStack_24) * pMVar1->Data);
  libm_sse2_atan_precise(0.0);
  dVar2 = this->CachedTrackWidth_m;
  dStack_c = (dStack_c - dVar3) * (this->Stator->BandGap_eV / 3.141592653589793);
  dStack_24 = (this->Forcer->RelativePermittivity * dVar2) /
              (this->ForcerRadius_m * 3.141592653589793 * this->ForcerRadius_m);
  if (dStack_24 <= 0.0) {
    dVar3 = 0.0;
  }
  else {
    dStack_24 = this->PowerConsumption_W / dStack_24;
    pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_34,&dStack_24);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar3 = pMVar1->Data;
    dVar2 = this->CachedTrackWidth_m;
  }
  dVar4 = 0.0;
  if (0.0 < dVar3 * dStack_c * dVar2) {
    dStack_1c = this->ForcerRadius_m;
    (*(uint64_t*)((char*)&(auStack_4c)+8)) =
         dStack_1c * dStack_1c * 3.141592653589793 * dVar2 * this->Forcer->Density_kg__m3;
    dVar3 = this->TrackLength_m;
    (*(uint64_t*)((char*)&(auStack_34)+8)) = dVar3 * dVar2;
    dStack_24 = dVar3 * dVar3 + dStack_1c * dStack_1c * 4.0 + dVar2 * dVar2;
    pMVar1 = util__Sqrt(&MStack_5c,&dStack_24);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar2 = (double)(*(uint64_t*)((char*)&(auStack_34)+8)) / ((dStack_1c + dStack_1c) * pMVar1->Data);
    libm_sse2_atan_precise(0.0);
    dStack_14 = this->ForcerRadius_m + this->StatorDepth_m;
    dStack_1c = dStack_14 * dStack_14 * 4.0 + this->TrackLength_m * this->TrackLength_m +
                this->CachedTrackWidth_m * this->CachedTrackWidth_m;
    dStack_c = dVar2;
    pMVar1 = util__Sqrt(&MStack_6c,&dStack_1c);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar3 = (double)(*(uint64_t*)((char*)&(auStack_34)+8)) / ((dStack_14 + dStack_14) * pMVar1->Data);
    libm_sse2_atan_precise(0.0);
    dVar2 = this->CachedTrackWidth_m;
    dStack_c = (dStack_c - dVar3) * (this->Stator->BandGap_eV / 3.141592653589793);
    dVar3 = 0.0;
    dVar4 = (this->Forcer->RelativePermittivity * dVar2) /
            (this->ForcerRadius_m * 3.141592653589793 * this->ForcerRadius_m);
    if (0.0 < dVar4) {
      dStack_14 = this->PowerConsumption_W / dVar4;
      pMVar1 = util__Sqrt((Maybe_L_double_G_ *)auStack_34,&dStack_14);
      if (pMVar1->IsValidData == false) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      dVar3 = pMVar1->Data;
      dVar2 = this->CachedTrackWidth_m;
    }
    dStack_3c = (((double)(*(uint64_t*)((char*)&(auStack_4c)+8)) + param_1 + (double)(*(uint64_t*)((char*)&(auStack_4c)+8)) + param_1) *
                this->TrackLength_m) / (dVar3 * dStack_c * dVar2);
    pMVar1 = util__Sqrt(&MStack_7c,&dStack_3c);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    dVar4 = pMVar1->Data;
  }
  return dVar4;
}





//==== 005d3860 GetFiringTime_s ====


/* public: double __thiscall LinearInductionMotorSubModule__GetFiringTime_s(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetFiringTime_s(LinearInductionMotorSubModule *this)

{
  double dVar1;
  
  dVar1 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
}





//==== 005d3880 GetHeatTransferRate_W ====


/* public: double __thiscall LinearInductionMotorSubModule__GetHeatTransferRate_W(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetHeatTransferRate_W(LinearInductionMotorSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = this->ForcerRadius_m;
  dVar3 = this->CachedTrackWidth_m;
  dVar4 = this->Forcer->Density_kg__m3;
  dVar2 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  dVar3 = Material__GetTemperatureIncreaseFromEnergyDelta_K
                    (this->Forcer,this->PowerConsumption_W * dVar2,
                     dVar1 * dVar1 * 3.141592653589793 * dVar3 * dVar4);
  dVar1 = this->CachedCoolantInletTemperature_K;
  dVar4 = CylindricalCoolerSubModule__GetThermalConductance_W__K(&this->Cooler);
  return ((dVar1 + dVar3) - this->CachedCoolantInletTemperature_K) * dVar4;
}





//==== 005d3920 GetInitialCurrent ====


/* public: double __thiscall CapacitorSubModule__GetInitialCurrent(void)const  */

double __thiscall CapacitorSubModule__GetInitialCurrent(CapacitorSubModule *this)

{
  double dVar1;
  
  if (this->DielectricComposition == (Material *)0x0) {
    dVar1 = 40.0;
  }
  else {
    dVar1 = this->DielectricComposition->RelativePermeability;
  }
  return (dVar1 * 1000000.0 * this->Separation_m * 0.8) / this->CachedResistance_Ohm;
}





//==== 005d3970 GetLauncherVelocity_km__s ====


/* public: double __thiscall LinearMotorSubModule__GetLauncherVelocity_km__s(void)const  */

double __thiscall LinearMotorSubModule__GetLauncherVelocity_km__s(LinearMotorSubModule *this)

{
  double dVar1;
  
  dVar1 = this->CachedDistance_m * this->CachedDistance_m;
  dVar1 = ((dVar1 + dVar1) * this->CachedRoundMass_kg) / (this->PowerConsumption_W * 0.85);
  libm_sse2_pow_precise(0.0,0.0);
  return (this->CachedDistance_m / (dVar1 * 10.0)) / 1000.0;
}





//==== 005d39d0 GetPayloadClearanceTime_s ====


/* public: double __thiscall LinearInductionMotorSubModule__GetPayloadClearanceTime_s(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetPayloadClearanceTime_s(LinearInductionMotorSubModule *this)

{
  double dVar1;
  
  dVar1 = GetExitVelocity_m__s(this);
  dVar1 = this->CachedPayloadFullWidth_m / dVar1;
  return dVar1 + dVar1;
}





//==== 005d39e0 GetPointerPropertyChoices_005d39e0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CapacitorSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
CapacitorSubModule__GetPointerPropertyChoices
          (CapacitorSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "DielectricComposition";
      (pcVar1[(int)((*(int *)&(SVar2)) + -0x92868c)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x92868c)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 005d3a60 GetPowerUsage_005d3a60 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   CapacitorSubModule__GetPowerUsage(void)const  */

Darray_L_struct_PowerUsage_G_ * __thiscall CapacitorSubModule__GetPowerUsage(CapacitorSubModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_struct_PowerUsage_G_ *this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;
  Darray_L_struct_PowerUsage_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_60;
  double dStack_50;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  double dStack_c;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_PowerUsage___Darray_struct_PowerUsage(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_30,"PowerUse Capacitors");
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
  pSVar3 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&SStack_24,pSVar3);
  dStack_c = this->CachedPowerSupply_W;
  util__Str_char___Str_char(&SStack_60,&SStack_24);
  dStack_50 = dStack_c;
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_PowerUsage_G_ *)(iVar1 + 1);
  util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
            ((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *)this_00,
             (int *)&stack0x00000004);
  bVar2 = util__Darray_struct_PowerUsage___CheckSize(this_00,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(this_00 + 4) + *(int *)(this_00 + 8) * 0x18;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
    *(double *)(iVar1 + -8) = dStack_c;
  }
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
    pvStack_3c = (void *)0x0;
  }
  if (apvStack_48[0] != (void *)0x0) {
    port_op_delete(apvStack_48[0]);
    apvStack_48[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  return this_00;
}





//==== 005d3ba0 GetReflectionInfo_005d3ba0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CapacitorBankSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
CapacitorBankSubModule__GetReflectionInfo(CapacitorBankSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1db97a8a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1db97a8a__thread_safe_static_guard_0__);
    if ( cde_l2_1db97a8a__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f733ff3d_ReflectionInfo) = &vftable_214;
      _Init_thread_footer(& cde_l2_1db97a8a__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_f733ff3d_ReflectionInfo;
}





//==== 005d3bb0 GetReflectionInfo_005d3bb0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CapacitorSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CapacitorSubModule__GetReflectionInfo(CapacitorSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ed2dd3f5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ed2dd3f5__thread_safe_static_guard_0__);
    if ( cde_l2_ed2dd3f5__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_722950b0_ReflectionInfo) = &vftable_213;
      _Init_thread_footer(& cde_l2_ed2dd3f5__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_722950b0_ReflectionInfo;
}





//==== 005d3bc0 GetReloadTime_s_005d3bc0 ====


/* public: double __thiscall LinearInductionMotorSubModule__GetReloadTime_s(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetReloadTime_s(LinearInductionMotorSubModule *this)

{
  double dVar1;
  
  dVar1 = GetFiringTimeWithLoad_s(this,0.0);
}





//==== 005d3be0 GetReloadTime_s_005d3be0 ====


/* public: double __thiscall LinearMotorSubModule__GetReloadTime_s(void)const  */

double __thiscall LinearMotorSubModule__GetReloadTime_s(LinearMotorSubModule *this)

{
  double dVar1;
  
  dVar1 = this->CachedDistance_m * this->CachedDistance_m;
  dVar1 = ((dVar1 + dVar1) * this->CachedRoundMass_kg) / (this->PowerConsumption_W * 0.85);
  libm_sse2_pow_precise(0.0,0.0);
  return dVar1 * 10.0;
}





//==== 005d3c30 GetStatuses_005d3c30 ====

/* public: virtual class DesignStatusBuffer  CapacitorSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
CapacitorSubModule__GetStatuses
          (CapacitorSubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_34,"CapacitorVoltage");
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  if (this->DielectricComposition == (Material *)0x0) {
    uVar2 = 0;
    uVar3 = 0x40440000;
  }
  else {
    dVar1 = this->DielectricComposition->RelativePermeability;
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,
             100000.0 < (double)CONCAT44(uVar3,uVar2) * 1000000.0 * this->Separation_m * 0.8,
             &local_34,&local_10,&local_1c,&local_28,(ModulePlacer *)0x0);
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
  }
  return __return_storage_ptr__;
}

//==== 005d3d60 GetTemperatureAfterFiring_K ====


/* public: double __thiscall LinearInductionMotorSubModule__GetTemperatureAfterFiring_K(void)const
    */

double __thiscall
LinearInductionMotorSubModule__GetTemperatureAfterFiring_K(LinearInductionMotorSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = this->ForcerRadius_m;
  dVar1 = this->CachedTrackWidth_m;
  dVar2 = this->Forcer->Density_kg__m3;
  dVar3 = GetFiringTimeWithLoad_s(this,this->CachedPayloadMass_kg);
  dVar4 = Material__GetTemperatureIncreaseFromEnergyDelta_K
                    (this->Forcer,this->PowerConsumption_W * dVar3,
                     dVar4 * dVar4 * 3.141592653589793 * dVar1 * dVar2);
  return dVar4 + this->CachedCoolantInletTemperature_K;
}





//==== 005d3de0 GetTotalDimensions_m ====

/* public: struct util__Cylinder_L_double_G_ 
   CapacitorSubModule__GetTotalDimensions_m(void)const  */

Cylinder_L_double_G_ * 
CapacitorSubModule__GetTotalDimensions_m
          (CapacitorSubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = (this->Dimensions_m).Height;
  dVar6 = (this->Dimensions_m).Radius;
  dVar5 = dVar1;
  if (dVar1 <= dVar6) {
    dVar5 = dVar6;
  }
  iVar3 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  iVar4 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  dVar6 = (this->Dimensions_m).Height;
  dVar2 = (this->Dimensions_m).Radius;
  if (dVar6 <= dVar2) {
    dVar6 = dVar2;
  }
  if (0x14 < iVar4) {
    iVar4 = 0x14;
  }
  dVar2 = (this->Dimensions_m).Radius;
  dVar7 = util__GetCirclePackingInACircleRadius_double(iVar4);
  __return_storage_ptr__->Radius = dVar7 * (dVar6 * 0.01 + dVar2);
  __return_storage_ptr__->Height =
       (double)(iVar3 / 0x14 + 1) * (dVar5 * 0.01 + dVar5 * 0.01 + dVar1);
  return __return_storage_ptr__;
}

//==== 005d3e90 GetTotalEnergy_J ====

/* public: double __thiscall CapacitorSubModule__GetTotalEnergy_J(void)const  */

double __thiscall CapacitorSubModule__GetTotalEnergy_J(CapacitorSubModule *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if (this->DielectricComposition == (Material *)0x0) {
    dVar2 = 40.0;
  }
  else {
    dVar2 = this->DielectricComposition->RelativePermeability;
  }
  dVar2 = dVar2 * 1000000.0 * this->Separation_m * 0.8;
  dVar3 = GetCapacitance_F(this);
  iVar1 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  return (double)iVar1 * dVar3 * dVar2 * dVar2 * 0.5;
}

//==== 005d3f20 GetTotalLength_m_005d3f20 ====

/* public: double __thiscall CapacitorSubModule__GetTotalLength_m(void)const  */

double __thiscall CapacitorSubModule__GetTotalLength_m(CapacitorSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  
  dVar1 = (this->Dimensions_m).Height;
  dVar2 = (this->Dimensions_m).Radius;
  dVar3 = dVar1;
  if (dVar1 <= dVar2) {
    dVar3 = dVar2;
  }
  iVar4 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  return (double)(iVar4 / 0x14 + 1) * (dVar3 * 0.01 + dVar3 * 0.01 + dVar1);
}

//==== 005d3f90 GetTotalThickness_m ====


/* public: double __thiscall LinearInductionMotorSubModule__GetTotalThickness_m(void)const  */

double __thiscall
LinearInductionMotorSubModule__GetTotalThickness_m(LinearInductionMotorSubModule *this)

{
  return this->ForcerRadius_m + this->ForcerRadius_m + this->StatorDepth_m;
}





//==== 005d3fa0 GetVoltage ====


/* public: double __thiscall CapacitorSubModule__GetVoltage(double)const  */

double __thiscall CapacitorSubModule__GetVoltage(CapacitorSubModule *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (this->DielectricComposition == (Material *)0x0) {
    dVar2 = 40.0;
  }
  else {
    dVar2 = this->DielectricComposition->RelativePermeability;
  }
  dVar1 = this->Separation_m;
  dVar3 = GetCapacitance_F(this);
  dVar3 = -(param_1 / (dVar3 * this->CachedResistance_Ohm));
  libm_sse2_exp_precise(0.0);
  return dVar3 * dVar2 * 1000000.0 * dVar1 * 0.8;
}





//==== 005d4010 PassThroughCachedData_005d4010 ====

/* public: void  CapacitorBankSubModule__PassThroughCachedData(double,double) */

void 
CapacitorBankSubModule__PassThroughCachedData
          (CapacitorBankSubModule *this,double param_1,double param_2)

{
  *(double *)&this->_pad_0x30_12 = param_1;
  *(double *)&this->_pad_0x38_14 = param_2;
  return;
}

//==== 005d4030 PassThroughCachedData_005d4030 ====


/* public: void  CapacitorSubModule__PassThroughCachedData(double,double,int) */

void 
CapacitorSubModule__PassThroughCachedData
          (CapacitorSubModule *this,double param_1,double param_2,int param_3)

{
  this->CachedResistance_Ohm = param_1;
  this->CachedPowerSupply_W = param_2;
  this->CachedCount = param_3;
  return;
}





//==== 005d40e0 PassThroughCachedData_005d40e0 ====


/* public: void  LinearMotorSubModule__PassThroughCachedData(double,double) */

void 
LinearMotorSubModule__PassThroughCachedData
          (LinearMotorSubModule *this,double param_1,double param_2)

{
  this->CachedDistance_m = param_1;
  this->CachedRoundMass_kg = param_2;
  return;
}





//==== 005d44c0 Render_005d44c0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CapacitorSubModule__Render(bool)const  */

void __thiscall CapacitorSubModule__Render(CapacitorSubModule *this,bool param_1)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this_00;
  Vec4_L_double_G_ VVar1;
  bool bVar2;
  int iVar3;
  Vec2_L_double_G_ *pVVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  Vec3_L_double_G_ local_38;
  double local_28;
  double local_20;
  double local_18;
  int local_10;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  *(uint32_t *)&local_10 = 0;
  iVar3 = (**(code **)(this->_pad_0x0_0 + 0x78))();
  if (0 < iVar3) {
    do {
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      iVar3 = (**(code **)(this->_pad_0x0_0 + 0x78))();
      *(uint32_t *)&local_18 = (this->Dimensions_m).Radius;
      dVar6 = (this->Dimensions_m).Height;
      if (dVar6 <= local_18) {
        dVar6 = local_18;
      }
      if (0x14 < iVar3) {
        iVar3 = 0x14;
      }
      dVar6 = dVar6 * 0.01;
      local_20 = (double)(iVar5 / 0x14) * 0.0;
      *(uint32_t *)&local_18 = dVar6 + local_18;
      *(uint32_t *)&local_28 = dVar6 + dVar6 + (this->Dimensions_m).Height;
      pVVar4 = util__GetCirclePackingInACircleOffset_double((Vec2_L_double_G_ *)((Vec2_L_double_G_ *)(&local_38)),iVar3,iVar5 % 0x14);
      dVar6 = (pVVar4->Y * local_18 + local_20) / 1000.0;
      dVar7 = (local_28 * (double)(iVar5 / 0x14) + 0.0) / 1000.0;
      VVar1.Y = SUB84(dVar6,0);
      VVar1.X = (local_18 * pVVar4->X + local_20) / 1000.0;
      VVar1.Z = (int)((ulonglong)dVar6 >> 0x20);
      VVar1.Z = SUB84(dVar7,0);
      VVar1.W = (int)((ulonglong)dVar7 >> 0x20);
      Graphics__Translate(VVar1);
      this_00 = (this->CapacitorModel).Controller;
      if (param_1) {
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(this_00), !bVar2)) {
          (this->CapacitorModel).Pointer = (GameModel *)0x0;
        }
        GameModel__RenderSimple((this->CapacitorModel).Pointer);
      }
      else {
        if ((this_00 != (ReferenceController *)0x0) &&
           (bVar2 = util__ReferenceController__IsDataStillValid(this_00), !bVar2)) {
          (this->CapacitorModel).Pointer = (GameModel *)0x0;
        }
        GameModel__Render((this->CapacitorModel).Pointer,0.0,0.0,false);
      }
      Graphics__TransformStack___TransformStack(&local_9);
      iVar5 = local_10 + 1;
      *(uint32_t *)&local_10 = iVar5;
      iVar3 = (**(code **)(this->_pad_0x0_0 + 0x78))();
    } while (iVar5 < iVar3);
  }
  return;
}

//==== 005d4660 StaticFactory_005d4660 ====

/* public: static class util__Reflectable * __cdecl
   CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x58));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x58);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[4]._pad_0x0_0 = 1;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_216;
  }
  return (Reflectable *)0x0;
}

//==== 005d46d0 StaticFactory_005d46d0 ====

/* public: static class util__Reflectable * __cdecl CapacitorSubModule__ReflectionInfoStruct_L_class_CapacitorSubModule_G___StaticFactory(void) */

Reflectable * __cdecl
CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x50));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x50);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_215;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    pRVar1[4]._pad_0x0_0 = 1;
    pRVar1[2].Name.Capacity = 0;
    pRVar1[2].Name.Length = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = 0;
  }
  return (Reflectable *)0x0;
}

//==== 005d4740 StaticFactory_005d4740 ====

/* public: static class util__Reflectable * __cdecl
   LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticFactory(void) */

Reflectable * __cdecl
LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticFactory__o2
          (void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0xa0));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0xa0);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_209;
    pRVar1[4].Name.Length = 0;
    pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Data = (char *)0x0;
    pRVar1[4].Name.Capacity = (int)&vftable_207;
    pRVar1[6]._pad_0x0_0 = 0;
    pRVar1[6].Name.Data = (char *)0x0;
    pRVar1[6].Name.Capacity = 0;
    pRVar1[6].Name.Length = 0;
  }
  return (Reflectable *)0x0;
}

//==== 005d47b0 StaticFactory_005d47b0 ====

/* public: static class util__Reflectable * __cdecl LinearMotorSubModule__ReflectionInfoStruct_L_class_LinearMotorSubModule_G___StaticFactory(void) */

Reflectable * __cdecl
LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x28));
  if (pRVar1 != (Reflectable *)0x0) {
    pRVar1->_pad_0x0_0 = 0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_211;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 005d4800 StaticGetMember_005d4800 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Maybe_L_structutil__ClassMember_G_ const __cdecl
   LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMember(class
   util__Str_L_char_G_ const &) */

Str_L_char_G_ * __cdecl
LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMember__o2
          (Str_L_char_G_ *param_1)

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
        cde_l2_5a0b37dc__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_5a0b37dc__thread_safe_static_guard_0__),
      cde_l2_5a0b37dc__thread_safe_static_guard_0__ == -1)) {
     cde_l2_225f0b1a_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_5a0b37dc__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_225f0b1a_Count) {
    piVar7 = &DAT_0096c298;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_3d36edd0__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_3d36edd0__thread_safe_static_guard_0__),
          cde_l2_3d36edd0__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_e6edf0f9_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0096c294 = 0;
        DAT_0096c298 = 0;
        DAT_0096c29c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c2a0,"Unused");
        _DAT_0096c2ac = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c2b0,"PowerConsumption_W");
        _DAT_0096c2bc = 4;
        _DAT_0096c2c0 = 0x10;
        _DAT_0096c2c4 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c2c8,"double");
        _DAT_0096c2d4 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_3d36edd0__thread_safe_static_guard_0__);
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
LAB_005d48d2:
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
          if (cVar3 == '\0') goto LAB_005d48d2;
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
    } while (iVar6 <  cde_l2_225f0b1a_Count);
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





//==== 005d4ab0 StaticGetMemberByIndex_005d4ab0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2bdae7a7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2bdae7a7__thread_safe_static_guard_0__);
    if ( cde_l2_2bdae7a7__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_eb6ef8a1_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096c01c = 0;
      _DAT_0096c020 = 0;
      _DAT_0096c024 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c028,"Unused");
      _DAT_0096c034 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c038,"Count");
      _DAT_0096c044 = 2;
      _DAT_0096c048 = 0x50;
      _DAT_0096c04c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c050,"int");
      _DAT_0096c05c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c060,"DielectricComposition");
      _DAT_0096c06c = 8;
      _DAT_0096c070 = 0x10;
      _DAT_0096c074 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c078,"Material");
      _DAT_0096c084 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c088,"Dimensions_m");
      _DAT_0096c094 = 0xb;
      _DAT_0096c098 = 0x18;
      _DAT_0096c09c = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c0a0,"ModuleCylinder");
      _DAT_0096c0ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c0b0,"Separation_m");
      _DAT_0096c0bc = 4;
      _DAT_0096c0c0 = 0x28;
      _DAT_0096c0c4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c0c8,"double");
      _DAT_0096c0d4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_2bdae7a7__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_eb6ef8a1_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096c01c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096c020 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096c024 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096c028 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096c034)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096c035)[iVar1];
  return __return_storage_ptr__;
}





//==== 005d4cb0 StaticGetMemberByIndex_005d4cb0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberByIndex(int)
    */

ClassMember * __cdecl
CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_05fa8ddc__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_05fa8ddc__thread_safe_static_guard_0__);
    if ( cde_l2_05fa8ddc__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_fb813845_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096c194 = 0;
      _DAT_0096c198 = 0;
      _DAT_0096c19c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c1a0,"Unused");
      _DAT_0096c1ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c1b0,"DielectricComposition");
      _DAT_0096c1bc = 8;
      _DAT_0096c1c0 = 0x10;
      _DAT_0096c1c4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c1c8,"Material");
      _DAT_0096c1d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c1d8,"Dimensions_m");
      _DAT_0096c1e4 = 0xb;
      _DAT_0096c1e8 = 0x18;
      _DAT_0096c1ec = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c1f0,"ModuleCylinder");
      _DAT_0096c1fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c200,"Separation_m");
      _DAT_0096c20c = 4;
      _DAT_0096c210 = 0x28;
      _DAT_0096c214 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c218,"double");
      _DAT_0096c224 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_05fa8ddc__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_fb813845_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096c194 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096c198 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096c19c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096c1a0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096c1ac)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096c1ad)[iVar1];
  return __return_storage_ptr__;
}





//==== 005d4e90 StaticGetMemberByIndex_005d4e90 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberByIndex(ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_841149ef__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_841149ef__thread_safe_static_guard_0__);
    if ( cde_l2_841149ef__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_363b5190_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096c45c = 0;
      _DAT_0096c460 = 0;
      _DAT_0096c464 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c468,"Unused");
      _DAT_0096c474 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c478,"Stator");
      _DAT_0096c484 = 8;
      _DAT_0096c488 = 0x10;
      _DAT_0096c48c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c490,"Material");
      _DAT_0096c49c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c4a0,"TrackLength_m");
      _DAT_0096c4ac = 4;
      _DAT_0096c4b0 = 0x18;
      _DAT_0096c4b4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c4b8,"double");
      _DAT_0096c4c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c4c8,"StatorDepth_m");
      _DAT_0096c4d4 = 4;
      _DAT_0096c4d8 = 0x20;
      _DAT_0096c4dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c4e0,"double");
      _DAT_0096c4ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c4f0,"Forcer");
      _DAT_0096c4fc = 8;
      _DAT_0096c500 = 0x28;
      _DAT_0096c504 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c508,"Material");
      _DAT_0096c514 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c518,"ForcerRadius_m");
      _DAT_0096c524 = 4;
      _DAT_0096c528 = 0x30;
      _DAT_0096c52c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c530,"double");
      _DAT_0096c53c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c540,"Coolant");
      _DAT_0096c54c = 8;
      _DAT_0096c550 = 0x38;
      _DAT_0096c554 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c558,"Material");
      _DAT_0096c564 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c568,"PowerConsumption_W");
      _DAT_0096c574 = 4;
      _DAT_0096c578 = 0x40;
      _DAT_0096c57c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c580,"double");
      _DAT_0096c58c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c590,"Cooler");
      _DAT_0096c59c = 10;
      _DAT_0096c5a0 = 0x48;
      _DAT_0096c5a4 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c5a8,"CylindricalCoolerSubModule");
      _DAT_0096c5b4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_841149ef__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_363b5190_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096c45c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096c460 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096c464 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096c468 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096c474)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096c475)[iVar1];
  return __return_storage_ptr__;
}





//==== 005d51a0 StaticGetMemberCount_005d51a0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberCount(void) */

int __cdecl
CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b7ead980__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b7ead980__thread_safe_static_guard_0__);
    if ( cde_l2_b7ead980__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_9ca11de2_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096bf4c = 0;
      _DAT_0096bf50 = 0;
      _DAT_0096bf54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bf58,"Unused");
      _DAT_0096bf64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bf68,"Count");
      _DAT_0096bf74 = 2;
      _DAT_0096bf78 = 0x50;
      _DAT_0096bf7c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bf80,"int");
      _DAT_0096bf8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bf90,"DielectricComposition");
      _DAT_0096bf9c = 8;
      _DAT_0096bfa0 = 0x10;
      _DAT_0096bfa4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bfa8,"Material");
      _DAT_0096bfb4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bfb8,"Dimensions_m");
      _DAT_0096bfc4 = 0xb;
      _DAT_0096bfc8 = 0x18;
      _DAT_0096bfcc = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bfd0,"ModuleCylinder");
      _DAT_0096bfdc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bfe0,"Separation_m");
      _DAT_0096bfec = 4;
      _DAT_0096bff0 = 0x28;
      _DAT_0096bff4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096bff8,"double");
      _DAT_0096c004 = 0;
      atexit( private__static_int_const___cdecl_CapacitorBankSubModule__ReflectionInfoStruct_class_CapacitorBankSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_b7ead980__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 005d5350 StaticGetMemberCount_005d5350 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberCount(void) */

int __cdecl
CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f5dc95ce__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f5dc95ce__thread_safe_static_guard_0__);
    if ( cde_l2_f5dc95ce__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_3a055e6b_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096c0ec = 0;
      _DAT_0096c0f0 = 0;
      _DAT_0096c0f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c0f8,"Unused");
      _DAT_0096c104 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c108,"DielectricComposition");
      _DAT_0096c114 = 8;
      _DAT_0096c118 = 0x10;
      _DAT_0096c11c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c120,"Material");
      _DAT_0096c12c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c130,"Dimensions_m");
      _DAT_0096c13c = 0xb;
      _DAT_0096c140 = 0x18;
      _DAT_0096c144 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c148,"ModuleCylinder");
      _DAT_0096c154 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c158,"Separation_m");
      _DAT_0096c164 = 4;
      _DAT_0096c168 = 0x28;
      _DAT_0096c16c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c170,"double");
      _DAT_0096c17c = 0;
      atexit( private__static_int_const___cdecl_CapacitorSubModule__ReflectionInfoStruct_class_CapacitorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f5dc95ce__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 005d54c0 StaticGetMemberCount_005d54c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberCount(void) */

int __cdecl
LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_637d42ec__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_637d42ec__thread_safe_static_guard_0__);
    if ( cde_l2_637d42ec__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_5f85ab04_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096c2ec = 0;
      _DAT_0096c2f0 = 0;
      _DAT_0096c2f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c2f8,"Unused");
      _DAT_0096c304 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c308,"Stator");
      _DAT_0096c314 = 8;
      _DAT_0096c318 = 0x10;
      _DAT_0096c31c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c320,"Material");
      _DAT_0096c32c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c330,"TrackLength_m");
      _DAT_0096c33c = 4;
      _DAT_0096c340 = 0x18;
      _DAT_0096c344 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c348,"double");
      _DAT_0096c354 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c358,"StatorDepth_m");
      _DAT_0096c364 = 4;
      _DAT_0096c368 = 0x20;
      _DAT_0096c36c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c370,"double");
      _DAT_0096c37c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c380,"Forcer");
      _DAT_0096c38c = 8;
      _DAT_0096c390 = 0x28;
      _DAT_0096c394 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c398,"Material");
      _DAT_0096c3a4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c3a8,"ForcerRadius_m");
      _DAT_0096c3b4 = 4;
      _DAT_0096c3b8 = 0x30;
      _DAT_0096c3bc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c3c0,"double");
      _DAT_0096c3cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c3d0,"Coolant");
      _DAT_0096c3dc = 8;
      _DAT_0096c3e0 = 0x38;
      _DAT_0096c3e4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c3e8,"Material");
      _DAT_0096c3f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c3f8,"PowerConsumption_W");
      _DAT_0096c404 = 4;
      _DAT_0096c408 = 0x40;
      _DAT_0096c40c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c410,"double");
      _DAT_0096c41c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c420,"Cooler");
      _DAT_0096c42c = 10;
      _DAT_0096c430 = 0x48;
      _DAT_0096c434 = 0x30;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c438,"CylindricalCoolerSubModule");
      _DAT_0096c444 = 0;
      atexit( private__static_int_const___cdecl_LinearInductionMotorSubModule__ReflectionInfoStruct_class_LinearInductionMotorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_637d42ec__thread_safe_static_guard_0__);
    }
  }
  return 9;
}





//==== 005d5790 StaticGetMemberCount_005d5790 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMemberCount(void) */

int __cdecl
LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_83fe75bd__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_83fe75bd__thread_safe_static_guard_0__);
    if ( cde_l2_83fe75bd__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f34c5e70_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096c23c = 0;
      _DAT_0096c240 = 0;
      _DAT_0096c244 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c248,"Unused");
      _DAT_0096c254 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c258,"PowerConsumption_W");
      _DAT_0096c264 = 4;
      _DAT_0096c268 = 0x10;
      _DAT_0096c26c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c270,"double");
      _DAT_0096c27c = 0;
      atexit( private__static_int_const___cdecl_LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_83fe75bd__thread_safe_static_guard_0__);
    }
  }
  return 2;
}





//==== 005d5870 StaticGetMembers_005d5870 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static class util__Darray_L_structutil__ClassMember_G_ const __cdecl
   LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMembers(void) */

Darray_L_struct_util__ClassMember_G_ * __cdecl
LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMembers__o2(void)

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
        cde_l2_40458925__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_40458925__thread_safe_static_guard_0__),
      cde_l2_40458925__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9bd28215_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_40458925__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_9bd28215_Count);
  iVar3 = 0;
  if (0 <  cde_l2_9bd28215_Count) {
    puVar4 = &DAT_0096c298;
    do {
      if ((*(int *)(iStack_c + 4) <
            cde_l2_3d36edd0__thread_safe_static_guard_0__) &&
         (_Init_thread_header(& cde_l2_3d36edd0__thread_safe_static_guard_0__),
          cde_l2_3d36edd0__thread_safe_static_guard_0__ == -1)) {
        util__Str_char___Str_char
                  ((Str_L_char_G_ *)
                   & cde_l2_e6edf0f9_StaticMembers,"DummyValue_DO_NOT_USE");
        DAT_0096c294 = 0;
        DAT_0096c298 = 0;
        DAT_0096c29c = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c2a0,"Unused");
        _DAT_0096c2ac = 0;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c2b0,"PowerConsumption_W");
        _DAT_0096c2bc = 4;
        _DAT_0096c2c0 = 0x10;
        _DAT_0096c2c4 = 8;
        util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096c2c8,"double");
        _DAT_0096c2d4 = 0;
        atexit( private__static_struct_util__ClassMember_const___cdecl_LinearMotorSubModule__ReflectionInfoStruct_class_LinearMotorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
        _Init_thread_footer(& cde_l2_3d36edd0__thread_safe_static_guard_0__);
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
    } while (iVar3 <  cde_l2_9bd28215_Count);
  }
  return in_stack_00000004;
}





//==== 005d5ac0 StaticGetReflectionInfo_005d5ac0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CapacitorBankSubModule__ReflectionInfoStruct_L_classCapacitorBankSubModule_G_
   * __cdecl CapacitorBankSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CapacitorBankSubModule_G_ * __cdecl
CapacitorBankSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1db97a8a__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1db97a8a__thread_safe_static_guard_0__);
    if ( cde_l2_1db97a8a__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f733ff3d_ReflectionInfo) = &vftable_214;
      _Init_thread_footer(& cde_l2_1db97a8a__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_CapacitorBankSubModule_G_ * *)&cde_l2_f733ff3d_ReflectionInfo;
}





//==== 005d5b20 StaticGetReflectionInfo_005d5b20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CapacitorSubModule__ReflectionInfoStruct_L_classCapacitorSubModule_G_ *
   __cdecl CapacitorSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CapacitorSubModule_G_ * __cdecl
CapacitorSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ed2dd3f5__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ed2dd3f5__thread_safe_static_guard_0__);
    if ( cde_l2_ed2dd3f5__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_722950b0_ReflectionInfo) = &vftable_213;
      _Init_thread_footer(& cde_l2_ed2dd3f5__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_CapacitorSubModule_G_ * *)&cde_l2_722950b0_ReflectionInfo;
}





//==== 005d5b80 StaticGetReflectionInfo_005d5b80 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct LinearInductionMotorSubModule__ReflectionInfoStruct_L_class_LinearInductionMotorSubModule_G_ * __cdecl
   LinearInductionMotorSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_LinearInductionMotorSubModule_G_ * __cdecl
LinearInductionMotorSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f662c300__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f662c300__thread_safe_static_guard_0__);
    if ( cde_l2_f662c300__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_2cb2793e_ReflectionInfo) = &vftable_210;
      _Init_thread_footer(& cde_l2_f662c300__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_LinearInductionMotorSubModule_G_ * *)&cde_l2_2cb2793e_ReflectionInfo;
}





//==== 005d5be0 StaticGetReflectionInfo_005d5be0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct LinearMotorSubModule__ReflectionInfoStruct_L_classLinearMotorSubModule_G_ *
   __cdecl LinearMotorSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_LinearMotorSubModule_G_ * __cdecl
LinearMotorSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_c1f3c1b4__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_c1f3c1b4__thread_safe_static_guard_0__);
    if ( cde_l2_c1f3c1b4__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4b08576e_ReflectionInfo) = &vftable_212;
      _Init_thread_footer(& cde_l2_c1f3c1b4__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_LinearMotorSubModule_G_ * *)&cde_l2_4b08576e_ReflectionInfo;
}





//==== 005d5c40 GetClassID_005d5c40 ====


/* public: virtual unsigned long __thiscall CargoModule__GetClassID(void)const  */

ulong __thiscall CargoModule__GetClassID(CargoModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8f532e01__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8f532e01__thread_safe_static_guard_0__);
    if ( cde_l2_8f532e01__thread_safe_static_guard_0__ == -1) {
       cde_l2r_8120e699_ID =
           util__GetHash("CargoModule");
      _Init_thread_footer(& cde_l2_8f532e01__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_8120e699_ID;
}





//==== 005d5ca0 GetGeneratedName_005d5ca0 ====

/* public: virtual class util__Str_L_char_G_ __thiscall CargoModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
CargoModule__GetGeneratedName(CargoModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xffffff54;
  undefined4 uVar1;
  Str_L_char_G_ SVar2;
  LocStr *pLVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar6;
  char *in_stack_ffffff54;
  int in_stack_ffffff58;
  int iVar7;
  Str_L_char_G_ *__return_storage_ptr___00;
  void *local_88 [3];
  void *local_7c;
  void *local_70 [3];
  void *local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_58,"Misc CargoBay");
  util__Str_char___Str_char(&local_34,"Space");
  util__Str_char___Str_char(&local_28,"Mass_kg");
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_88,&local_58,&local_1c);
  pSVar4 = util__LocStr__operator__o3(pLVar3);
  iVar7 = 0x5d5d2d;
  __return_storage_ptr___00 = __return_storage_ptr__;
  pLVar3 = (LocStr *)util__LocStr__LocStr((LocStr *)local_70,&local_34,&local_10);
  pSVar5 = util__LocStr__operator__o3(pLVar3);
  pSVar6 = &local_40;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff54,&local_28);
  uVar1 = this[1]._pad_0xc_3;
  SVar2.Capacity = iVar7;
  SVar2.Data = (char *)in_stack_ffffff58;
  SVar2.Length = (int)pSVar6;
  this_00 = Print(&local_4c,(double)CONCAT44(in_stack_ffffff54,uVar1),SVar2);
  pSVar6 = util__Str_char___operator(this_00,pSVar6,pSVar5);
  util__Str_char___operator(pSVar6,__return_storage_ptr___00,pSVar4);
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_64 != (void *)0x0) {
    port_op_delete(local_64);
    local_64 = (void *)0x0;
  }
  if (local_70[0] != (void *)0x0) {
    port_op_delete(local_70[0]);
    local_70[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_7c != (void *)0x0) {
    port_op_delete(local_7c);
    local_7c = (void *)0x0;
  }
  if (local_88[0] != (void *)0x0) {
    port_op_delete(local_88[0]);
    local_88[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
  }
  return __return_storage_ptr__;
}

//==== 005d5e80 GetLegacyNames_005d5e80 ====


/* public: virtual class util__Darray_L_classutil__Str_L_char_G__G_ __thiscall
   CargoModule__GetLegacyNames(void)const  */

Darray_L_class_util__Str_L_char_G___G_ * __thiscall CargoModule__GetLegacyNames(CargoModule *this)

{
  bool bVar1;
  LocStr *this_00;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  Darray_L_class_util__Str_L_char_G___G_ *in_stack_00000004;
  void *apvStack_48 [3];
  void *pvStack_3c;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  Str_L_char_G_ SStack_18;
  Str_L_char_G_ *pSStack_c;
  int iStack_8;
  
  util__Str_char___Str_char(&SStack_30,"Misc CargoBay");
  SStack_18.Data = (char *)0x0;
  SStack_18.Capacity = 0;
  SStack_18.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_48,&SStack_30,&SStack_18);
  pSStack_c = util__LocStr__operator__o3(this_00);
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_4);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar2 = (undefined4 *)port_op_new(0x10);
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 1;
    puVar3 = puVar2 + 1;
    *puVar3 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  iVar4 = 0;
  *(undefined4 **)(in_stack_00000004 + 4) = puVar3;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    SStack_24.Data = (char *)0x0;
    iVar5 = 0;
    SStack_24.Capacity = 0;
    SStack_24.Length = 0;
    do {
      util__Str_char___operator__o8((Str_L_char_G_ *)(*(int *)(in_stack_00000004 + 4) + iVar5),&SStack_24);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar4 = *(int *)(in_stack_00000004 + 8);
  iStack_8 = iVar4 + 1;
  util__Darray_class_util__Str_char_____SetSize(in_stack_00000004,&iStack_8);
  bVar1 = util__Darray_class_util__Str_char_____CheckSize(in_stack_00000004,iVar4);
  if (bVar1) {
    util__Str_char___operator__o8
              ((Str_L_char_G_ *)
               (*(int *)(in_stack_00000004 + 4) + (*(int *)(in_stack_00000004 + 8) * 3 + -3) * 4),
               pSStack_c);
  }
  if (pvStack_3c != (void *)0x0) {
    port_op_delete(pvStack_3c);
    pvStack_3c = (void *)0x0;
  }
  if (apvStack_48[0] != (void *)0x0) {
    port_op_delete(apvStack_48[0]);
    apvStack_48[0] = (void *)0x0;
  }
  if (SStack_18.Data != (char *)0x0) {
    port_op_delete(SStack_18.Data);
    SStack_18.Data = (char *)0x0;
  }
  if (SStack_30.Data != (char *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  return in_stack_00000004;
}





//==== 005d5fe0 GetIcon_005d5fe0 ====


/* public: virtual void (__cdecl*__thiscall CargoModule__GetIcon(void)const )(void) */

_func_void * __thiscall CargoModule__GetIcon(CargoModule *this)

{
  return Icons__Mass;
}





//==== 005d5ff0 GetType_005d5ff0 ====


/* public: virtual enum Module__Type __thiscall CargoModule__GetType(void)const  */

int __thiscall CargoModule__GetType(CargoModule *this)

{
  return State__Other;
}





//==== 005d60c0 GetCrewRequired_005d60c0 ====

/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   CargoModule__GetCrewRequired(void)const  */

Darray_L_CrewJob_G_ * __thiscall
CargoModule__GetCrewRequired(CargoModule *this,Darray_L_CrewJob_G_ *__return_storage_ptr__)

{
  int iVar1;
  CrewJob *pCVar2;
  Darray_L_CrewJob_G_ *this_00;
  bool bVar3;
  LocStr *this_01;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ local_64;
  double local_58;
  undefined1 local_50;
  void *local_48 [3];
  void *local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (CrewJob *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_120;
  __return_storage_ptr__->Data = (CrewJob *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  util__Str_char___Str_char(&local_30,"CrewCargoUnloader");
  local_c = *(double *)&this[1]._pad_0x8_2;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)local_48,&local_30,&local_18);
  pSVar4 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&local_24,pSVar4);
  util__Str_char___Str_char(&local_64,&local_24);
  *(uint32_t *)&local_50 = 0;
  local_58 = (local_c * 0.5) / 1000000.0;
  local_c = local_58;
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
  }
  iVar1 = this_00->Size;
  __return_storage_ptr__ = (Darray_L_CrewJob_G_ *)(iVar1 + 1);
  util__Darray_L_CrewJob_G___SetSize(this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_CrewJob_G___CheckSize(this_00,iVar1);
  if (bVar3) {
    pCVar2 = this_00->Data;
    iVar1 = this_00->Size;
    pCVar2[iVar1 + -1].Dept = CrewDepartment__Operations;
    util__Str_char___operator__o8(&pCVar2[iVar1 + -1].Name,&local_64);
    pCVar2[iVar1 + -1].CrewRequired = local_c;
    pCVar2[iVar1 + -1].WatchRequired = false;
  }
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
  }
  if (local_3c != (void *)0x0) {
    port_op_delete(local_3c);
    local_3c = (void *)0x0;
  }
  if (local_48[0] != (void *)0x0) {
    port_op_delete(local_48[0]);
    local_48[0] = (void *)0x0;
  }
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
  }
  return this_00;
}

//==== 005d6240 GetComposition_005d6240 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   CargoModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
CargoModule__GetComposition(CargoModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Material *pMVar4;
  double dVar5;
  bool bVar6;
  MaterialComposition *pMVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 uStack_28;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 1;
  pMVar7 = (MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  if (pMVar7 == (MaterialComposition *)0x0) {
    pMVar7 = (MaterialComposition *)0x0;
  }
  else {
    pMVar7->Type = (Material *)0x0;
    pMVar7->Mass_kg = 0.0;
  }
  iVar9 = 0;
  __return_storage_ptr__->Data = pMVar7;
  if (0 < __return_storage_ptr__->Capacity) {
    iVar8 = 0;
    do {
      iVar9 = iVar9 + 1;
      puVar1 = (undefined4 *)((int)&__return_storage_ptr__->Data->Type + iVar8);
      *puVar1 = 0;
      puVar1[1] = uStack_18;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar8 = iVar8 + 0x10;
    } while (iVar9 < __return_storage_ptr__->Capacity);
  }
  dVar12 = *(double *)&this[1]._pad_0x10_4 + *(double *)&this[1]._pad_0x10_4;
  dVar5 = *(double *)&this[1]._pad_0x8_2 / Cargo->Density_kg__m3;
  dVar11 = dVar5 / (dVar12 * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  dVar12 = (dVar12 * dVar12 * dVar5) / 3.141592653589793;
  local_c = dVar11;
  libm_sse2_pow_precise(0.0,0.0);
  dVar11 = local_c * 3.141592653589793 * local_c;
  fVar10 = (float10)(**(code **)(this->_pad_0x0_0 + 0xb4))();
  dVar13 = local_c * 6.283185307179586;
  pMVar4 = (Material *)this[1]._pad_0x18_6;
  iVar9 = __return_storage_ptr__->Size;
  dVar5 = pMVar4->Density_kg__m3;
  local_c = (double)CONCAT44(iVar9 + 1,(undefined4)local_c);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,(int *)((int)&local_c + 4));
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar9);
  if (bVar6) {
    pMVar7 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
    pMVar7->Type = pMVar4;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar7) + 0x4)) = uStack_28);
    pMVar7->Mass_kg = dVar5 * (double)(fVar10 * (float10)(dVar13 * dVar12 + dVar11 + dVar11));
  }
  pMVar4 = Cargo;
  iVar9 = __return_storage_ptr__->Size;
  uVar2 = this[1]._pad_0x8_2;
  uVar3 = this[1]._pad_0xc_3;
  local_c = (double)CONCAT44(iVar9 + 1,(undefined4)local_c);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,(int *)((int)&local_c + 4));
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar9);
  if (bVar6) {
    pMVar7 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
    pMVar7->Type = pMVar4;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar7) + 0x4)) = uStack_18);
    *(undefined4 *)&pMVar7->Mass_kg = uVar2;
    *(undefined4 *)((int)&pMVar7->Mass_kg + 4) = uVar3;
  }
  return __return_storage_ptr__;
}

//==== 005d6410 GetStructuralMaterial_005d6410 ====


/* public: virtual class Material const * __thiscall
   RefuelerModule__GetStructuralMaterial(void)const  */

Material * __thiscall RefuelerModule__GetStructuralMaterial(RefuelerModule *this)

{
  return (Material *)(uintptr_t)((this->Pump).CachedFluidDensity_kg__m3);
}





//==== 005d6420 GetStructuralThickness_m_005d6420 ====


/* public: virtual double __thiscall CargoModule__GetStructuralThickness_m(void)const  */

double __thiscall CargoModule__GetStructuralThickness_m(CargoModule *this)

{
  return 0.002;
}





//==== 005d6430 GetHullRadius_m_005d6430 ====

/* public: virtual double __thiscall CargoModule__GetHullRadius_m(void)const  */

double __thiscall CargoModule__GetHullRadius_m(CargoModule *this)

{
  float10 fVar1;
  double dVar2;
  
  dVar2 = (*(double *)&this[1]._pad_0x8_2 / Cargo->Density_kg__m3) /
          ((*(double *)&this[1]._pad_0x10_4 + *(double *)&this[1]._pad_0x10_4) * 3.141592653589793);
  libm_sse2_pow_precise(0.0,0.0);
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xb4))();
  return (double)(fVar1 + (float10)dVar2);
}

//==== 005d6490 GetHullLength_m_005d6490 ====

/* public: virtual double __thiscall CargoModule__GetHullLength_m(void)const  */

double __thiscall CargoModule__GetHullLength_m(CargoModule *this)

{
  float10 fVar1;
  double dVar2;
  
  dVar2 = *(double *)&this[1]._pad_0x10_4 + *(double *)&this[1]._pad_0x10_4;
  dVar2 = ((*(double *)&this[1]._pad_0x8_2 / Cargo->Density_kg__m3) * dVar2 * dVar2) /
          3.141592653589793;
  libm_sse2_pow_precise(0.0,0.0);
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xb4))();
  return (double)(fVar1 + fVar1 + (float10)dVar2);
}

//==== 005d64f0 GetPointerPropertyChoices_005d64f0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   CargoModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
CargoModule__GetPointerPropertyChoices
          (CargoModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Shell"; (pcVar1[(int)((*(int *)&(SVar2)) + -0x928d50)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x928d50)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 005d6570 GetReflectionInfo_005d6570 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   CargoModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall CargoModule__GetReflectionInfo(CargoModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d558a355__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d558a355__thread_safe_static_guard_0__);
    if ( cde_l2_d558a355__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d3b2df71_ReflectionInfo) = &vftable_217;
      _Init_thread_footer(& cde_l2_d558a355__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_d3b2df71_ReflectionInfo;
}





//==== 005d6580 GetTypeName_005d6580 ====


/* public: virtual class util__Str_L_char_G_  CargoModule__ReflectionInfoStruct_class_CargoModule___GetTypeName(void)const  */

Str_L_char_G_ * 
CargoModule__ReflectionInfoStruct_class_CargoModule___GetTypeName
          (ReflectionInfoStruct_L_class_CargoModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"CargoModule");
  return __return_storage_ptr__;
}





//==== 005d65a0 GetMembers_005d65a0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   CargoModule__ReflectionInfoStruct_class_CargoModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
CargoModule__ReflectionInfoStruct_class_CargoModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_CargoModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_3ee84d44__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_3ee84d44__thread_safe_static_guard_0__),
      cde_l2_3ee84d44__thread_safe_static_guard_0__ == -1)) {
     cde_l2_38d2d246_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_3ee84d44__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_38d2d246_Count);
  iVar3 = 0;
  if (0 <  cde_l2_38d2d246_Count) {
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
    } while (iVar3 <  cde_l2_38d2d246_Count);
  }
  return in_stack_00000004;
}





//==== 005d66e0 GetMember_005d66e0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   CargoModule__ReflectionInfoStruct_class_CargoModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
CargoModule__ReflectionInfoStruct_class_CargoModule___GetMember__o2
          (ReflectionInfoStruct_L_class_CargoModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_2fe30b62__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_2fe30b62__thread_safe_static_guard_0__),
      cde_l2_2fe30b62__thread_safe_static_guard_0__ == -1)) {
     cde_l2_9a4c83c2_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_2fe30b62__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_9a4c83c2_Count) {
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
LAB_005d676d:
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
          if (cVar3 == '\0') goto LAB_005d676d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_9a4c83c2_Count);
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





//==== 005d6880 GetFactory_005d6880 ====


/* public: virtual class util__Reflectable * (__cdecl*
   CargoModule__ReflectionInfoStruct_class_CargoModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall CargoModule__ReflectionInfoStruct_class_CargoModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_CargoModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d6890 GetClassID_005d6890 ====


/* public: virtual unsigned long __thiscall RadiationShieldModule__GetClassID(void)const  */

ulong __thiscall RadiationShieldModule__GetClassID(RadiationShieldModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_53de34f9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_53de34f9__thread_safe_static_guard_0__);
    if ( cde_l2_53de34f9__thread_safe_static_guard_0__ == -1) {
       cde_l2r_c4311662_ID = util__GetHash("RadiationShieldModule");
      _Init_thread_footer(& cde_l2_53de34f9__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_c4311662_ID;
}





//==== 005d68f0 GetGeneratedName_005d68f0 ====

/* public: virtual class util__Str_L_char_G_ 
   RadiationShieldModule__GetGeneratedName(void)const  */

Str_L_char_G_ * 
RadiationShieldModule__GetGeneratedName
          (RadiationShieldModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  int *piVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  Str_L_char_G_ *__return_storage_ptr___01;
  Str_L_char_G_ *pSVar12;
  void *local_150 [3];
  void *local_144;
  void *local_138 [3];
  void *local_12c;
  void *local_120 [3];
  void *local_114;
  void *local_108 [3];
  void *local_fc;
  void *local_f0 [3];
  void *local_e4;
  Str_L_char_G_ local_d8;
  Str_L_char_G_ local_cc;
  Str_L_char_G_ local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  double local_78;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_d8,"Misc RadiationShield");
  util__Str_char___Str_char(&local_70,"Space");
  util__Str_char___Str_char(&local_64,"Space");
  util__Str_char___Str_char(&local_58,"Misc Diameter");
  util__Str_char___Str_char(&local_4c,"Space");
  local_78 = *(double *)&this[1]._pad_0x10_4;
  piVar1 = (int *)this[1]._pad_0x8_2;
  local_40.Data = (char *)0x0;
  local_40.Capacity = 0;
  local_40.Length = 0;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_150,&local_d8,&local_40);
  util__LocStr__operator__o3(pLVar2);
  pSVar12 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_138,&local_70,&local_34);
  __return_storage_ptr___00 = util__LocStr__operator__o3(pLVar2);
  pSVar11 = &local_84;
  __return_storage_ptr___01 = &local_cc;
  pSVar3 = (Str_L_char_G_ *)(**(code **)(uintptr_t)(*piVar1 + 0x48))();
  pSVar10 = &local_90;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_120,&local_64,&local_28);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  pSVar9 = &local_9c;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_108,&local_58,&local_1c);
  pSVar5 = util__LocStr__operator__o3(pLVar2);
  pSVar8 = &local_a8;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f0,&local_4c,&local_10);
  pSVar6 = util__LocStr__operator__o3(pLVar2);
  pSVar7 = &local_b4;
  this_00 = (Str_L_char_G_ *)(uintptr_t)(PrintLength(&local_c0,
                        (double)CONCAT44(pSVar7,(int)((ulonglong)(local_78 + local_78) >> 0x20))));
  pSVar7 = util__Str_char___operator(this_00,pSVar7,pSVar6);
  pSVar8 = util__Str_char___operator(pSVar7,pSVar8,pSVar5);
  pSVar9 = util__Str_char___operator(pSVar8,pSVar9,pSVar4);
  pSVar10 = util__Str_char___operator(pSVar9,pSVar10,pSVar3);
  pSVar11 = util__Str_char___operator(pSVar10,__return_storage_ptr___01,pSVar11);
  util__Str_char___operator(pSVar11,__return_storage_ptr___00,pSVar12);
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_90.Data != (char *)0x0) {
    port_op_delete(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    port_op_delete(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if (local_a8.Data != (char *)0x0) {
    port_op_delete(local_a8.Data);
    local_a8.Data = (char *)0x0;
  }
  if (local_b4.Data != (char *)0x0) {
    port_op_delete(local_b4.Data);
    local_b4.Data = (char *)0x0;
  }
  if (local_c0.Data != (char *)0x0) {
    port_op_delete(local_c0.Data);
    local_c0.Data = (char *)0x0;
  }
  if (local_e4 != (void *)0x0) {
    port_op_delete(local_e4);
    local_e4 = (void *)0x0;
  }
  if (local_f0[0] != (void *)0x0) {
    port_op_delete(local_f0[0]);
    local_f0[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_fc != (void *)0x0) {
    port_op_delete(local_fc);
    local_fc = (void *)0x0;
  }
  if (local_108[0] != (void *)0x0) {
    port_op_delete(local_108[0]);
    local_108[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_114 != (void *)0x0) {
    port_op_delete(local_114);
    local_114 = (void *)0x0;
  }
  if (local_120[0] != (void *)0x0) {
    port_op_delete(local_120[0]);
    local_120[0] = (void *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_cc.Data != (char *)0x0) {
    port_op_delete(local_cc.Data);
    local_cc.Data = (char *)0x0;
  }
  if (local_12c != (void *)0x0) {
    port_op_delete(local_12c);
    local_12c = (void *)0x0;
  }
  if (local_138[0] != (void *)0x0) {
    port_op_delete(local_138[0]);
    local_138[0] = (void *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_144 != (void *)0x0) {
    port_op_delete(local_144);
    local_144 = (void *)0x0;
  }
  if (local_150[0] != (void *)0x0) {
    port_op_delete(local_150[0]);
    local_150[0] = (void *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_64.Data != (char *)0x0) {
    port_op_delete(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if (local_70.Data != (char *)0x0) {
    port_op_delete(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if (local_d8.Data != (char *)0x0) {
    port_op_delete(local_d8.Data);
  }
  return __return_storage_ptr__;
}

//==== 005d6da0 GetShortName_005d6da0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall RadiationShieldModule__GetShortName(void)const
    */

Str_L_char_G_ * __thiscall
RadiationShieldModule__GetShortName(RadiationShieldModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Misc RadiationShield");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
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
  return __return_storage_ptr__;
}





//==== 005d6e50 GetIcon_005d6e50 ====


/* public: virtual void (__cdecl*__thiscall RadiationShieldModule__GetIcon(void)const )(void) */

_func_void * __thiscall RadiationShieldModule__GetIcon(RadiationShieldModule *this)

{
  return (_func_void *)(uintptr_t) Icons__RadiationShield;
}





//==== 005d6f10 GetComposition_005d6f10 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   RadiationShieldModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
RadiationShieldModule__GetComposition
          (RadiationShieldModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  Material *pMVar5;
  bool bVar6;
  MaterialComposition *pMVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_24;
  undefined4 uStack_14;
  int local_8;
  
  dVar2 = *(double *)&this[1]._pad_0x10_4;
  pMVar5 = (Material *)this[1]._pad_0x8_2;
  dVar3 = *(double *)&this[1]._pad_0x18_6;
  dVar4 = pMVar5->Density_kg__m3;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 1;
  pMVar7 = (MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  if (pMVar7 == (MaterialComposition *)0x0) {
    pMVar7 = (MaterialComposition *)0x0;
  }
  else {
    pMVar7->Type = (Material *)0x0;
    pMVar7->Mass_kg = 0.0;
  }
  iVar9 = 0;
  __return_storage_ptr__->Data = pMVar7;
  if (0 < __return_storage_ptr__->Capacity) {
    iVar8 = 0;
    do {
      iVar9 = iVar9 + 1;
      puVar1 = (undefined4 *)((int)&__return_storage_ptr__->Data->Type + iVar8);
      *puVar1 = 0;
      puVar1[1] = uStack_14;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar8 = iVar8 + 0x10;
    } while (iVar9 < __return_storage_ptr__->Capacity);
  }
  iVar9 = __return_storage_ptr__->Size;
  local_8 = iVar9 + 1;
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)__return_storage_ptr__,&local_8);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)__return_storage_ptr__,iVar9);
  if (bVar6) {
    pMVar7 = __return_storage_ptr__->Data + __return_storage_ptr__->Size + -1;
    pMVar7->Type = pMVar5;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar7) + 0x4)) = uStack_24);
    pMVar7->Mass_kg = dVar2 * dVar2 * 3.141592653589793 * dVar3 * dVar4;
  }
  return __return_storage_ptr__;
}

//==== 005d6ff0 GetRadiationShielding_005d6ff0 ====

/* public: virtual struct util__tuple2_L_classMaterial_P_Cstructutil__Cylinder_L_double_G__G_ __thiscall
   RadiationShieldModule__GetRadiationShielding(void)const  */

void __thiscall RadiationShieldModule__GetRadiationShielding(RadiationShieldModule *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_stack_00000004;
  
  iVar1 = this[1]._pad_0x10_4;
  iVar2 = this[1]._pad_0x14_5;
  iVar3 = this[1]._pad_0x18_6;
  iVar4 = this[1]._pad_0x1c_7;
  *in_stack_00000004 = this[1]._pad_0x8_2;
  in_stack_00000004[2] = iVar1;
  in_stack_00000004[3] = iVar2;
  in_stack_00000004[4] = iVar3;
  in_stack_00000004[5] = iVar4;
  return;
}

//==== 005d7010 GetInfoBoxes_005d7010 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   RadiationShieldModule__GetInfoBoxes(void)const  */

void __thiscall RadiationShieldModule__GetInfoBoxes(RadiationShieldModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  void *apvStack_ac [3];
  void *pvStack_a0;
  RadiationShieldModule *pRStack_94;
  code *pcStack_90;
  Str_L_char_G_ SStack_8c;
  code *pcStack_80;
  RadiationShieldModule *pRStack_7c;
  code *pcStack_78;
  Str_L_char_G_ SStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Str_L_char_G_ SStack_60;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Str_L_char_G_ SStack_40;
  undefined **ppuStack_34;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_30,"InfoBox RadiationShield Tooltip");
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = CONCAT31((*(uint24_t*)((char*)&(uStack_c)+1)),1);
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_ac,&SStack_30,&SStack_24);
  pSVar3 = util__LocStr__operator__o3(this_00);
  uStack_48 = 0;
  uStack_44 = 0;
  util__Str_char___Str_char(&SStack_40,pSVar3);
  pcStack_90 = (long long int (*)())(util__DelegateFactory_class_RadiationShieldModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RadiationShieldModule__GetShieldingInfo_void_const__0);
  SStack_8c.Data = (char *)0x0;
  SStack_8c.Capacity = 0;
  SStack_8c.Length = 0;
  pcStack_80 = (code *)(uintptr_t) Icons__RadiationShield;
  pcStack_78 = (long long int (*)())(util__DelegateFactory_class_RadiationShieldModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RadiationShieldModule__GetShieldingInfo_void_const__0);
  pRStack_94 = this;
  pRStack_7c = this;
  util__Str_char___Str_char(&SStack_74,&SStack_8c);
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  util__Str_char___Str_char(&SStack_60,&SStack_40);
  uStack_54 = CONCAT44(uStack_10,uStack_14);
  uStack_4c = uStack_c;
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  iStack_18 = iVar1 + 1;
  util__Darray_struct_InfoBox___SetSize(in_stack_00000004,&iStack_18);
  bVar2 = util__Darray_struct_InfoBox___CheckSize(in_stack_00000004,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x38;
    *(code **)(iVar1 + -0x38) = pcStack_80;
    *(RadiationShieldModule **)(iVar1 + -0x34) = pRStack_7c;
    *(code **)(iVar1 + -0x30) = pcStack_78;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x2c),&SStack_74);
    *(undefined4 *)(iVar1 + -0x20) = uStack_68;
    *(undefined4 *)(iVar1 + -0x1c) = uStack_64;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
    *(ulonglong *)(iVar1 + -0xc) = CONCAT44(uStack_10,uStack_14);
    *(undefined4 *)(iVar1 + -4) = uStack_c;
  }
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (SStack_74.Data != (char *)0x0) {
    port_op_delete(SStack_74.Data);
  }
  if (pvStack_a0 != (void *)0x0) {
    port_op_delete(pvStack_a0);
    pvStack_a0 = (void *)0x0;
  }
  if (apvStack_ac[0] != (void *)0x0) {
    port_op_delete(apvStack_ac[0]);
    apvStack_ac[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  pDVar4 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_34 = &vftable_127;
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_30.Data,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005d7260 InnerSortFunction_005d7260 ====


/* public: virtual bool  RadiationShieldModule__InnerSortFunction(class Module const
   *,class Module const *)const  */

bool 
RadiationShieldModule__InnerSortFunction
          (RadiationShieldModule *this,Module *param_1,Module *param_2)

{
  double dVar1;
  
  dVar1 = param_2[1].GetTotalPowerUsage_W_MemoizedValue.Data;
  return param_1[1].GetTotalPowerUsage_W_MemoizedValue.Data <= dVar1 &&
         dVar1 != param_1[1].GetTotalPowerUsage_W_MemoizedValue.Data;
}





//==== 005d7280 GetPointerPropertyChoices_005d7280 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   BarrelArmorSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
BarrelArmorSubModule__GetPointerPropertyChoices
          (BarrelArmorSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Composition"; (pcVar1[(int)((*(int *)&(SVar2)) + -0x91fc04)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x91fc04)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 005d7300 GetReflectionInfo_005d7300 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   RadiationShieldModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
RadiationShieldModule__GetReflectionInfo(RadiationShieldModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b9b20f6d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b9b20f6d__thread_safe_static_guard_0__);
    if ( cde_l2_b9b20f6d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_cf5d9aba_ReflectionInfo) = &vftable_218;
      _Init_thread_footer(& cde_l2_b9b20f6d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_cf5d9aba_ReflectionInfo;
}





//==== 005d7310 GetTypeName_005d7310 ====


/* public: virtual class util__Str_L_char_G_ 
   RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetTypeName(void)const
    */

Str_L_char_G_ * 
RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetTypeName__o2
          (ReflectionInfoStruct_L_class_RadiationShieldModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__
          )

{
  util__Str_char___Str_char(__return_storage_ptr__,"RadiationShieldModule");
  return __return_storage_ptr__;
}





//==== 005d7330 GetMembers_005d7330 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetMembers(void)const
    */

Darray_L_struct_util__ClassMember_G_ * 
RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_RadiationShieldModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_023ce95f__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_023ce95f__thread_safe_static_guard_0__),
      cde_l2_023ce95f__thread_safe_static_guard_0__ == -1)) {
     cde_l2_99d10781_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_023ce95f__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_99d10781_Count);
  iVar3 = 0;
  if (0 <  cde_l2_99d10781_Count) {
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
    } while (iVar3 <  cde_l2_99d10781_Count);
  }
  return in_stack_00000004;
}





//==== 005d7470 GetMember_005d7470 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetMember__o2
          (ReflectionInfoStruct_L_class_RadiationShieldModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_56124ef3__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_56124ef3__thread_safe_static_guard_0__),
      cde_l2_56124ef3__thread_safe_static_guard_0__ == -1)) {
     cde_l2_4dfbf1a9_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_56124ef3__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_4dfbf1a9_Count) {
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
LAB_005d74fd:
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
          if (cVar3 == '\0') goto LAB_005d74fd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_4dfbf1a9_Count);
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





//==== 005d7610 GetFactory_005d7610 ====


/* public: virtual class util__Reflectable * (__cdecl*
   RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetFactory(void)const
   )(void) */

_func_Reflectable_ptr * 
__thiscall RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_RadiationShieldModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d7620 GetClassID_005d7620 ====


/* public: virtual unsigned long __thiscall SpacerModule__GetClassID(void)const  */

ulong __thiscall SpacerModule__GetClassID(SpacerModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_760110ba__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_760110ba__thread_safe_static_guard_0__);
    if ( cde_l2_760110ba__thread_safe_static_guard_0__ == -1) {
       cde_l2r_7b0793e5_ID =
           util__GetHash("SpacerModule");
      _Init_thread_footer(& cde_l2_760110ba__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_7b0793e5_ID;
}





//==== 005d7680 GetGeneratedName_005d7680 ====

/* public: virtual class util__Str_L_char_G_ __thiscall SpacerModule__GetGeneratedName(void)const  */

Str_L_char_G_ * __thiscall
SpacerModule__GetGeneratedName(SpacerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined4 uVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  Str_L_char_G_ *pSVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  Str_L_char_G_ *pSVar11;
  Str_L_char_G_ *pSVar12;
  Str_L_char_G_ *__return_storage_ptr___00;
  Str_L_char_G_ *__return_storage_ptr___01;
  void *local_12c [3];
  void *local_120;
  void *local_114 [3];
  void *local_108;
  void *local_fc [3];
  void *local_f0;
  void *local_e4 [3];
  void *local_d8;
  Str_L_char_G_ local_cc;
  Str_L_char_G_ local_c0;
  Str_L_char_G_ local_b4;
  Str_L_char_G_ local_a8;
  Str_L_char_G_ local_9c;
  Str_L_char_G_ local_90;
  Str_L_char_G_ local_84;
  Str_L_char_G_ local_78;
  Str_L_char_G_ local_6c;
  double local_60;
  Str_L_char_G_ local_58;
  Str_L_char_G_ local_4c;
  Str_L_char_G_ local_40;
  Str_L_char_G_ local_34;
  Str_L_char_G_ local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_cc,"Misc Spacer");
  util__Str_char___Str_char(&local_58,"Space");
  util__Str_char___Str_char(&local_4c,"Space");
  util__Str_char___Str_char(&local_c0,"x");
  util__Str_char___Str_char(&local_40,"Space");
  local_60 = *(double *)&this[1]._pad_0x10_4;
  local_34.Data = (char *)0x0;
  local_34.Capacity = 0;
  local_34.Length = 0;
  local_28.Data = (char *)0x0;
  local_28.Capacity = 0;
  local_28.Length = 0;
  local_1c.Data = (char *)0x0;
  local_1c.Capacity = 0;
  local_1c.Length = 0;
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_12c,&local_cc,&local_34);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  __return_storage_ptr___01 = __return_storage_ptr__;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_114,&local_58,&local_28);
  pSVar4 = util__LocStr__operator__o3(pLVar2);
  pSVar12 = &local_6c;
  pSVar5 = (Str_L_char_G_ *)(uintptr_t)(PrintLength(&local_b4,
                       (double)CONCAT44(pSVar12,(int)((ulonglong)(local_60 + local_60) >> 0x20))));
  pSVar11 = &local_78;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_fc,&local_4c,&local_1c);
  pSVar6 = util__LocStr__operator__o3(pLVar2);
  pSVar10 = &local_84;
  pSVar9 = &local_c0;
  __return_storage_ptr___00 = &local_90;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)local_e4,&local_40,&local_10);
  pSVar7 = util__LocStr__operator__o3(pLVar2);
  uVar1 = this[1]._pad_0x1c_7;
  pSVar8 = &local_9c;
  this_00 = (Str_L_char_G_ *)(uintptr_t)(PrintLength(&local_a8,(double)CONCAT44(pSVar8,uVar1)));
  pSVar8 = util__Str_char___operator(this_00,pSVar8,pSVar7);
  pSVar9 = util__Str_char___operator(pSVar8,__return_storage_ptr___00,pSVar9);
  pSVar10 = util__Str_char___operator(pSVar9,pSVar10,pSVar6);
  pSVar11 = util__Str_char___operator(pSVar10,pSVar11,pSVar5);
  pSVar12 = util__Str_char___operator(pSVar11,pSVar12,pSVar4);
  util__Str_char___operator(pSVar12,__return_storage_ptr___01,pSVar3);
  if (local_6c.Data != (char *)0x0) {
    port_op_delete(local_6c.Data);
    local_6c.Data = (char *)0x0;
  }
  if (local_78.Data != (char *)0x0) {
    port_op_delete(local_78.Data);
    local_78.Data = (char *)0x0;
  }
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_90.Data != (char *)0x0) {
    port_op_delete(local_90.Data);
    local_90.Data = (char *)0x0;
  }
  if (local_9c.Data != (char *)0x0) {
    port_op_delete(local_9c.Data);
    local_9c.Data = (char *)0x0;
  }
  if (local_a8.Data != (char *)0x0) {
    port_op_delete(local_a8.Data);
    local_a8.Data = (char *)0x0;
  }
  if (local_d8 != (void *)0x0) {
    port_op_delete(local_d8);
    local_d8 = (void *)0x0;
  }
  if (local_e4[0] != (void *)0x0) {
    port_op_delete(local_e4[0]);
    local_e4[0] = (void *)0x0;
  }
  if (local_10.Data != (char *)0x0) {
    port_op_delete(local_10.Data);
    local_10.Data = (char *)0x0;
  }
  if (local_f0 != (void *)0x0) {
    port_op_delete(local_f0);
    local_f0 = (void *)0x0;
  }
  if (local_fc[0] != (void *)0x0) {
    port_op_delete(local_fc[0]);
    local_fc[0] = (void *)0x0;
  }
  if (local_1c.Data != (char *)0x0) {
    port_op_delete(local_1c.Data);
    local_1c.Data = (char *)0x0;
  }
  if (local_b4.Data != (char *)0x0) {
    port_op_delete(local_b4.Data);
    local_b4.Data = (char *)0x0;
  }
  if (local_108 != (void *)0x0) {
    port_op_delete(local_108);
    local_108 = (void *)0x0;
  }
  if (local_114[0] != (void *)0x0) {
    port_op_delete(local_114[0]);
    local_114[0] = (void *)0x0;
  }
  if (local_28.Data != (char *)0x0) {
    port_op_delete(local_28.Data);
    local_28.Data = (char *)0x0;
  }
  if (local_120 != (void *)0x0) {
    port_op_delete(local_120);
    local_120 = (void *)0x0;
  }
  if (local_12c[0] != (void *)0x0) {
    port_op_delete(local_12c[0]);
    local_12c[0] = (void *)0x0;
  }
  if (local_34.Data != (char *)0x0) {
    port_op_delete(local_34.Data);
    local_34.Data = (char *)0x0;
  }
  if (local_40.Data != (char *)0x0) {
    port_op_delete(local_40.Data);
    local_40.Data = (char *)0x0;
  }
  if (local_c0.Data != (char *)0x0) {
    port_op_delete(local_c0.Data);
  }
  if (local_4c.Data != (char *)0x0) {
    port_op_delete(local_4c.Data);
    local_4c.Data = (char *)0x0;
  }
  if (local_58.Data != (char *)0x0) {
    port_op_delete(local_58.Data);
    local_58.Data = (char *)0x0;
  }
  if (local_cc.Data != (char *)0x0) {
    port_op_delete(local_cc.Data);
  }
  return __return_storage_ptr__;
}

//==== 005d7aa0 GetShortName_005d7aa0 ====


/* public: virtual class util__Str_L_char_G_ __thiscall SpacerModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
SpacerModule__GetShortName(SpacerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  void *apvStack_34 [3];
  void *pvStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_1c,"Misc Spacer");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_34,&SStack_1c,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(__return_storage_ptr__,pSVar1);
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
  return __return_storage_ptr__;
}





//==== 005d7b50 GetIcon_005d7b50 ====


/* public: virtual void (__cdecl*__thiscall SpacerModule__GetIcon(void)const )(void) */

_func_void * __thiscall SpacerModule__GetIcon(SpacerModule *this)

{
  return Icons__Expand;
}





//==== 005d7bd0 GetCharacteristicLength_m ====


/* public: double __thiscall ChemicalReaction__GetCharacteristicLength_m(void)const  */

double __thiscall ChemicalReaction__GetCharacteristicLength_m(ChemicalReaction *this)

{
  return this->CharacteristicLength_m;
}





//==== 005d7be0 InnerSortFunction_005d7be0 ====


/* public: virtual bool __thiscall SpacerModule__InnerSortFunction(class Module const *,class Module
   const *)const  */

bool __thiscall SpacerModule__InnerSortFunction(SpacerModule *this,Module *param_1,Module *param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = param_1[1].GetTotalPowerUsage_W_MemoizedValue.Data;
  dVar3 = param_2[1].GetTotalPowerUsage_W_MemoizedValue.Data;
  if ((NAN(dVar2) || NAN(dVar3)) != (dVar2 == dVar3)) {
    dVar2 = *(double *)&param_2[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
    piVar1 = &param_1[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity;
    return *(double *)piVar1 <= dVar2 && dVar2 != *(double *)piVar1;
  }
  return dVar2 < dVar3;
}





//==== 005d7c20 GetReflectionInfo_005d7c20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   SpacerModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall SpacerModule__GetReflectionInfo(SpacerModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dc8ef37c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dc8ef37c__thread_safe_static_guard_0__);
    if ( cde_l2_dc8ef37c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_5c44e99c_ReflectionInfo) = &vftable_219;
      _Init_thread_footer(& cde_l2_dc8ef37c__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_5c44e99c_ReflectionInfo;
}





//==== 005d7c30 scalar_deleting_destructor_005d7c30 ====


/* public: virtual void * __thiscall SpacerModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall SpacerModule___scalar_deleting_destructor(SpacerModule *this,uint param_1)

{
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x80);
  }
  return this;
}





//==== 005d7c60 GetTypeName_005d7c60 ====


/* public: virtual class util__Str_L_char_G_  SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetTypeName(void)const  */

Str_L_char_G_ * 
SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetTypeName
          (ReflectionInfoStruct_L_class_SpacerModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"SpacerModule");
  return __return_storage_ptr__;
}





//==== 005d7c80 GetMembers_005d7c80 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_SpacerModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_71b1a920__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_71b1a920__thread_safe_static_guard_0__),
      cde_l2_71b1a920__thread_safe_static_guard_0__ == -1)) {
     cde_l2_c92d56db_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_71b1a920__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_c92d56db_Count);
  iVar3 = 0;
  if (0 <  cde_l2_c92d56db_Count) {
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
    } while (iVar3 <  cde_l2_c92d56db_Count);
  }
  return in_stack_00000004;
}





//==== 005d7dc0 GetMember_005d7dc0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetMember__o2
          (ReflectionInfoStruct_L_class_SpacerModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_17581387__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_17581387__thread_safe_static_guard_0__),
      cde_l2_17581387__thread_safe_static_guard_0__ == -1)) {
     cde_l2_8b574ab6_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_17581387__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_8b574ab6_Count) {
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
LAB_005d7e4d:
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
          if (cVar3 == '\0') goto LAB_005d7e4d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_8b574ab6_Count);
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





//==== 005d7f60 GetFactory_005d7f60 ====


/* public: virtual class util__Reflectable * (__cdecl*
   SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall SpacerModule__ReflectionInfoStruct_class_SpacerModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_SpacerModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d7f70 MethodCallerConst__public__class_util__Str_char____thiscall_RadiationShieldModule__GetShieldingInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_class_RadiationShieldModule_Cclassutil__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G____thiscallRadiationShieldModule__GetShieldingInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_RadiationShieldModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RadiationShieldModule__GetShieldingInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = RadiationShieldModule__GetShieldingInfo((RadiationShieldModule *)param_1,&SStack_10);
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005d82e0 GetShieldingInfo ====

/* public: class util__Str_L_char_G_  RadiationShieldModule__GetShieldingInfo(void)const  */

Str_L_char_G_ * 
RadiationShieldModule__GetShieldingInfo
          (RadiationShieldModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  LocStr *this_00;
  Str_L_char_G_ *pSVar1;
  char *pcVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *local_34 [3];
  void *local_28;
  Str_L_char_G_ local_1c;
  Str_L_char_G_ local_10;
  
  util__Str_char___Str_char(&local_1c,"InfoBox RadiationShield");
  local_10.Data = (char *)0x0;
  local_10.Capacity = 0;
  local_10.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)local_34,&local_1c,&local_10);
  pSVar1 = util__LocStr__operator__o3(this_00);
  if (pSVar1->Capacity < 1) {
    pcVar2 = "";
  }
  else {
    pcVar2 = pSVar1->Data;
  }
  dVar3 = Material__GetNeutronAttenuation
                    ((Material *)this[1]._pad_0x8_2,*(double *)&this[1]._pad_0x18_6,FissionType__Fast);
  uVar6 = SUB84(dVar3,0);
  uVar7 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar3 = Material__GetNeutronAttenuation
                    ((Material *)this[1]._pad_0x8_2,*(double *)&this[1]._pad_0x18_6,FissionType__Thermal);
  uVar4 = SUB84(dVar3,0);
  uVar5 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar3 = Material__GetGammaAttenuation
                    ((Material *)this[1]._pad_0x8_2,*(double *)&this[1]._pad_0x18_6);
  util__Printf(__return_storage_ptr__,(wchar_t*)(pcVar2),SUB84(dVar3,0),(int)((ulonglong)dVar3 >> 0x20),uVar4,
               uVar5,uVar6,uVar7);
  if (local_28 != (void *)0x0) {
    port_op_delete(local_28);
    *(uint32_t *)&local_28 = (uint32_t)(uintptr_t)((void *)0x0);
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

//==== 005d8400 IsDamaged_005d8400 ====


/* public: virtual bool __thiscall RadiationShieldCompartment__IsDamaged(void)const  */

bool __thiscall RadiationShieldCompartment__IsDamaged(RadiationShieldCompartment *this)

{
  return 0.0 < this->TotalPierceArea_m2;
}





//==== 005d8420 IsDestroyed_005d8420 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual bool __thiscall RadiationShieldCompartment__IsDestroyed(void)const  */

bool __thiscall RadiationShieldCompartment__IsDestroyed(RadiationShieldCompartment *this)

{
  undefined8 stack0xfffffffc;
  Vec2_L_double_G_ local_18;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Module__GetDefaultTextureSize_m((Module *)this->_pad_0x38_14,&local_18);
  return local_18.Y * local_18.X * 0.5 <= this->TotalPierceArea_m2;
}

//==== 005d8530 StaticFactory_005d8530 ====

/* public: static class util__Reflectable * __cdecl CargoModule__ReflectionInfoStruct_L_class_CargoModule_G___StaticFactory(void) */

Reflectable * __cdecl CargoModule__ReflectionInfoStruct_class_CargoModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x88));
  if (this != (Module *)0x0) {
    memset(this,0,0x88);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__12;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__12;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005d8570 StaticFactory_005d8570 ====

/* public: static class util__Reflectable * __cdecl
   RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticFactory(void) */

Reflectable * __cdecl
RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticFactory__o2(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x88));
  if (this != (Module *)0x0) {
    memset(this,0,0x88);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__13;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__13;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = (undefined4)(uintptr_t) (undefined **)(0);
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
  *(undefined4 *)((char *)&this[1].GetTotalPowerUsage_W_MemoizedValue + 0xc) = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005d85c0 StaticFactory_005d85c0 ====

/* public: static class util__Reflectable * __cdecl SpacerModule__ReflectionInfoStruct_L_class_SpacerModule_G___StaticFactory(void) */

Reflectable * __cdecl SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x80));
  if (this != (Module *)0x0) {
    memset(this,0,0x80);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__14;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)&vftable_for_util__RTTIBaseClass__14;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = (undefined4)(uintptr_t) (undefined **)(0);
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005d8610 StaticGetMemberByIndex_005d8610 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_642998fc__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_642998fc__thread_safe_static_guard_0__);
    if ( cde_l2_642998fc__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_abc4d7ee_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096cfdc = 0;
      _DAT_0096cfe0 = 0;
      _DAT_0096cfe4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cfe8,"Unused");
      _DAT_0096cff4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cff8,"SteamWorkshopID");
      _DAT_0096d004 = 6;
      _DAT_0096d008 = 0x10;
      _DAT_0096d00c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d010,"AStr");
      _DAT_0096d01c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d020,"Description");
      _DAT_0096d02c = 6;
      _DAT_0096d030 = 0x20;
      _DAT_0096d034 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d038,"AStr");
      _DAT_0096d044 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d048,"UsesCustomName");
      _DAT_0096d054 = 1;
      _DAT_0096d058 = 0x68;
      _DAT_0096d05c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d060,"bool");
      _DAT_0096d06c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d070,"Mass_kg");
      _DAT_0096d07c = 4;
      _DAT_0096d080 = 0x70;
      _DAT_0096d084 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d088,"double");
      _DAT_0096d094 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d098,"AspectRatio");
      _DAT_0096d0a4 = 4;
      _DAT_0096d0a8 = 0x78;
      _DAT_0096d0ac = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d0b0,"double");
      _DAT_0096d0bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d0c0,"Shell");
      _DAT_0096d0cc = 8;
      _DAT_0096d0d0 = 0x80;
      _DAT_0096d0d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d0d8,"Material");
      _DAT_0096d0e4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_642998fc__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_abc4d7ee_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096cfdc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096cfe0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096cfe4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096cfe8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096cff4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096cff5)[iVar1];
  return __return_storage_ptr__;
}





//==== 005d8890 StaticGetMemberByIndex_005d8890 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8733c05d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8733c05d__thread_safe_static_guard_0__);
    if ( cde_l2_8733c05d__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_39f67c17_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096cdc4 = 0;
      _DAT_0096cdc8 = 0;
      _DAT_0096cdcc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cdd0,"Unused");
      _DAT_0096cddc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cde0,"SteamWorkshopID");
      _DAT_0096cdec = 6;
      _DAT_0096cdf0 = 0x10;
      _DAT_0096cdf4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cdf8,"AStr");
      _DAT_0096ce04 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce08,"Description");
      _DAT_0096ce14 = 6;
      _DAT_0096ce18 = 0x20;
      _DAT_0096ce1c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce20,"AStr");
      _DAT_0096ce2c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce30,"UsesCustomName");
      _DAT_0096ce3c = 1;
      _DAT_0096ce40 = 0x68;
      _DAT_0096ce44 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce48,"bool");
      _DAT_0096ce54 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce58,"Composition");
      _DAT_0096ce64 = 8;
      _DAT_0096ce68 = 0x70;
      _DAT_0096ce6c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce70,"Material");
      _DAT_0096ce7c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce80,"Dimensions_m");
      _DAT_0096ce8c = 0xb;
      _DAT_0096ce90 = 0x78;
      _DAT_0096ce94 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ce98,"ModuleCylinder");
      _DAT_0096cea4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8733c05d__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_39f67c17_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096cdc4 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096cdc8 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096cdcc + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096cdd0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096cddc)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096cddd)[iVar1];
  return __return_storage_ptr__;
}





//==== 005d8ad0 StaticGetMemberByIndex_005d8ad0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_7bb446fa__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_7bb446fa__thread_safe_static_guard_0__);
    if ( cde_l2_7bb446fa__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_90a9989b_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096cbfc = 0;
      _DAT_0096cc00 = 0;
      _DAT_0096cc04 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc08,"Unused");
      _DAT_0096cc14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc18,"SteamWorkshopID");
      _DAT_0096cc24 = 6;
      _DAT_0096cc28 = 0x10;
      _DAT_0096cc2c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc30,"AStr");
      _DAT_0096cc3c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc40,"Description");
      _DAT_0096cc4c = 6;
      _DAT_0096cc50 = 0x20;
      _DAT_0096cc54 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc58,"AStr");
      _DAT_0096cc64 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc68,"UsesCustomName");
      _DAT_0096cc74 = 1;
      _DAT_0096cc78 = 0x68;
      _DAT_0096cc7c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc80,"bool");
      _DAT_0096cc8c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cc90,"Dimensions_m");
      _DAT_0096cc9c = 0xb;
      _DAT_0096cca0 = 0x70;
      _DAT_0096cca4 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cca8,"ModuleCylinder");
      _DAT_0096ccb4 = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_7bb446fa__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_90a9989b_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096cbfc + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096cc00 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096cc04 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096cc08 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096cc14)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096cc15)[iVar1];
  return __return_storage_ptr__;
}





//==== 005d8cd0 StaticGetMemberCount_005d8cd0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberCount(void) */

int __cdecl CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_f52dd1c0__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_f52dd1c0__thread_safe_static_guard_0__);
    if ( cde_l2_f52dd1c0__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_52c9405c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096cebc = 0;
      _DAT_0096cec0 = 0;
      _DAT_0096cec4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cec8,"Unused");
      _DAT_0096ced4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ced8,"SteamWorkshopID");
      _DAT_0096cee4 = 6;
      _DAT_0096cee8 = 0x10;
      _DAT_0096ceec = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cef0,"AStr");
      _DAT_0096cefc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf00,"Description");
      _DAT_0096cf0c = 6;
      _DAT_0096cf10 = 0x20;
      _DAT_0096cf14 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf18,"AStr");
      _DAT_0096cf24 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf28,"UsesCustomName");
      _DAT_0096cf34 = 1;
      _DAT_0096cf38 = 0x68;
      _DAT_0096cf3c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf40,"bool");
      _DAT_0096cf4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf50,"Mass_kg");
      _DAT_0096cf5c = 4;
      _DAT_0096cf60 = 0x70;
      _DAT_0096cf64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf68,"double");
      _DAT_0096cf74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf78,"AspectRatio");
      _DAT_0096cf84 = 4;
      _DAT_0096cf88 = 0x78;
      _DAT_0096cf8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cf90,"double");
      _DAT_0096cf9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cfa0,"Shell");
      _DAT_0096cfac = 8;
      _DAT_0096cfb0 = 0x80;
      _DAT_0096cfb4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cfb8,"Material");
      _DAT_0096cfc4 = 0;
      atexit( private__static_int_const___cdecl_CargoModule__ReflectionInfoStruct_class_CargoModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_f52dd1c0__thread_safe_static_guard_0__);
    }
  }
  return 7;
}





//==== 005d8f10 StaticGetMemberCount_005d8f10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberCount(void) */

int __cdecl
RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_31e113db__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_31e113db__thread_safe_static_guard_0__);
    if ( cde_l2_31e113db__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_e16ad09a_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096cccc = 0;
      _DAT_0096ccd0 = 0;
      _DAT_0096ccd4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096ccd8,"Unused");
      _DAT_0096cce4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cce8,"SteamWorkshopID");
      _DAT_0096ccf4 = 6;
      _DAT_0096ccf8 = 0x10;
      _DAT_0096ccfc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd00,"AStr");
      _DAT_0096cd0c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd10,"Description");
      _DAT_0096cd1c = 6;
      _DAT_0096cd20 = 0x20;
      _DAT_0096cd24 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd28,"AStr");
      _DAT_0096cd34 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd38,"UsesCustomName");
      _DAT_0096cd44 = 1;
      _DAT_0096cd48 = 0x68;
      _DAT_0096cd4c = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd50,"bool");
      _DAT_0096cd5c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd60,"Composition");
      _DAT_0096cd6c = 8;
      _DAT_0096cd70 = 0x70;
      _DAT_0096cd74 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd78,"Material");
      _DAT_0096cd84 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cd88,"Dimensions_m");
      _DAT_0096cd94 = 0xb;
      _DAT_0096cd98 = 0x78;
      _DAT_0096cd9c = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cda0,"ModuleCylinder");
      _DAT_0096cdac = 0;
      atexit( private__static_int_const___cdecl_RadiationShieldModule__ReflectionInfoStruct_class_RadiationShieldModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_31e113db__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 005d9110 StaticGetMemberCount_005d9110 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberCount(void) */

int __cdecl SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_81ca302f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_81ca302f__thread_safe_static_guard_0__);
    if ( cde_l2_81ca302f__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_733a45fb_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096cb2c = 0;
      _DAT_0096cb30 = 0;
      _DAT_0096cb34 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cb38,"Unused");
      _DAT_0096cb44 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cb48,"SteamWorkshopID");
      _DAT_0096cb54 = 6;
      _DAT_0096cb58 = 0x10;
      _DAT_0096cb5c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cb60,"AStr");
      _DAT_0096cb6c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cb70,"Description");
      _DAT_0096cb7c = 6;
      _DAT_0096cb80 = 0x20;
      _DAT_0096cb84 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cb88,"AStr");
      _DAT_0096cb94 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cb98,"UsesCustomName");
      _DAT_0096cba4 = 1;
      _DAT_0096cba8 = 0x68;
      _DAT_0096cbac = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cbb0,"bool");
      _DAT_0096cbbc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cbc0,"Dimensions_m");
      _DAT_0096cbcc = 0xb;
      _DAT_0096cbd0 = 0x70;
      _DAT_0096cbd4 = 0x10;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096cbd8,"ModuleCylinder");
      _DAT_0096cbe4 = 0;
      atexit( private__static_int_const___cdecl_SpacerModule__ReflectionInfoStruct_class_SpacerModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_81ca302f__thread_safe_static_guard_0__);
    }
  }
  return 5;
}





//==== 005d92c0 StaticGetReflectionInfo_005d92c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct CargoModule__ReflectionInfoStruct_L_classCargoModule_G_ * __cdecl
   CargoModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_CargoModule_G_ * __cdecl CargoModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d558a355__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d558a355__thread_safe_static_guard_0__);
    if ( cde_l2_d558a355__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_d3b2df71_ReflectionInfo) = &vftable_217;
      _Init_thread_footer(& cde_l2_d558a355__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_CargoModule_G_ * *)&cde_l2_d3b2df71_ReflectionInfo;
}





//==== 005d9320 StaticGetReflectionInfo_005d9320 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RadiationShieldModule__ReflectionInfoStruct_L_classRadiationShieldModule_G_ *
   __cdecl RadiationShieldModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_RadiationShieldModule_G_ * __cdecl
RadiationShieldModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_b9b20f6d__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_b9b20f6d__thread_safe_static_guard_0__);
    if ( cde_l2_b9b20f6d__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_cf5d9aba_ReflectionInfo) = &vftable_218;
      _Init_thread_footer(& cde_l2_b9b20f6d__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_RadiationShieldModule_G_ * *)&cde_l2_cf5d9aba_ReflectionInfo;
}





//==== 005d9380 StaticGetReflectionInfo_005d9380 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct SpacerModule__ReflectionInfoStruct_L_classSpacerModule_G_ * __cdecl
   SpacerModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_SpacerModule_G_ * __cdecl SpacerModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_dc8ef37c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_dc8ef37c__thread_safe_static_guard_0__);
    if ( cde_l2_dc8ef37c__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_5c44e99c_ReflectionInfo) = &vftable_219;
      _Init_thread_footer(& cde_l2_dc8ef37c__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_SpacerModule_G_ * *)&cde_l2_5c44e99c_ReflectionInfo;
}





//==== 005d93e0 GetTypeName_005d93e0 ====


/* public: virtual class util__Str_L_char_G_ 
   NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_NuclearReactorSubModule_G_ *this,
          Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"NuclearReactorSubModule");
  return __return_storage_ptr__;
}





//==== 005d9400 GetMembers_005d9400 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetMembers
          (ReflectionInfoStruct_L_class_NuclearReactorSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_a85b0dcf__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a85b0dcf__thread_safe_static_guard_0__),
      cde_l2_a85b0dcf__thread_safe_static_guard_0__ == -1)) {
     cde_l2_2c5f633e_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a85b0dcf__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_2c5f633e_Count);
  iVar3 = 0;
  if (0 <  cde_l2_2c5f633e_Count) {
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
    } while (iVar3 <  cde_l2_2c5f633e_Count);
  }
  return in_stack_00000004;
}





//==== 005d9540 GetMember_005d9540 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_NuclearReactorSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_ef105a40__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_ef105a40__thread_safe_static_guard_0__),
      cde_l2_ef105a40__thread_safe_static_guard_0__ == -1)) {
     cde_l2_77fb5439_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_ef105a40__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_77fb5439_Count) {
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
LAB_005d95cd:
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
          if (cVar3 == '\0') goto LAB_005d95cd;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_77fb5439_Count);
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





//==== 005d96e0 GetFactory_005d96e0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___GetFactory
          (ReflectionInfoStruct_L_class_NuclearReactorSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005d97f0 NuclearReactorSubModule ====

/* public: __thiscall NuclearReactorSubModule__NuclearReactorSubModule(void) */

NuclearReactorSubModule * __thiscall
NuclearReactorSubModule__NuclearReactorSubModule(NuclearReactorSubModule *this)

{
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_223;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions._padfb0 = 0;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Data =
       (pmf_8dca91d1 *)0x0;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions._padfb0 =
       (int)&vftable_142;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Data =
       (pmf_8dca91d1 *)0x0;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Size = 0;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Capacity = 0;
  (this->GetEmittedRadiation_MemoizedValue).Data.ThermalNeutrons_W = 0.0;
  *(undefined1 *)&(this->GetEmittedRadiation_MemoizedValue).Data.FastNeutrons_W = 0;
  *(undefined4 *)&(this->GetEmittedRadiation_MemoizedValue).Data.GammaRays_W = 0;
  *(undefined4 *)((int)&(this->GetEmittedRadiation_MemoizedValue).Data.GammaRays_W + 4) = 0;
  *(undefined4 *)&(this->GetEmittedRadiation_MemoizedValue).IsValidData = 0;
  (undefined4)((*(undefined4 *)(void *)((char *)&((this->GetEmittedRadiation_MemoizedValue)) + 0x1c)) = 0);
  this->Coolant = (Material *)0x0;
  this->Moderator = (Material *)0x0;
  *(undefined1 *)&this->ModeratorMass_kg = 0;
  this->Fuel = (Material *)0x0;
  (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0x54)) = 0);
  this->FuelMass_kg = 0.0;
  *(undefined4 *)&this->FuelEnrichment_Percent = 0;
  this->ControlRodComposition = (Material *)0x0;
  (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0x6c)) = 0);
  *(undefined4 *)&this->ControlRodMass_kg = 0;
  *(undefined4 *)((int)&this->ControlRodMass_kg + 4) = 0;
  this->NeutronReflector = (Material *)0x0;
  this->ReflectorThickness_m = 0.0;
  *(undefined4 *)&this->AverageNeutronFlux__m2_s = 0;
  (this->CachedDimensions_m).Radius = 0.0;
  *(undefined4 *)&this->CachedInletTemperature_K = 0;
  *(undefined4 *)((int)&this->CachedInletTemperature_K + 4) = 0;
  *(undefined4 *)&this->CachedCoolantFlowRate_kg__s = 0;
  *(undefined4 *)((int)&this->CachedCoolantFlowRate_kg__s + 4) = 0;
  return this;
}

//==== 005d9890 Darray_NuclearReactorSubModule__CoreElement_ ====


/* public: virtual  Darray_L_structNuclearReactorSubModule__CoreElement_G___dtor(void)
    */

void __thiscall
util__Darray_struct_NuclearReactorSubModule__CoreElement____Darray_struct_NuclearReactorSubModule__CoreElement(Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *(int *)(this + 4);
  *(undefined ***)this = &vftable_224;
  if (iVar4 != 0) {
    piVar1 = (int *)(iVar4 + -4);
    iVar3 = *piVar1;
    puVar5 = (undefined4 *)(iVar4 + iVar3 * 0x18);
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      do {
        puVar2 = puVar5 + -6;
        puVar5 = puVar5 + -6;
        iVar3 = iVar3 + -1;
        if ((void *)*puVar2 != (void *)0x0) {
          port_op_delete((void *)*puVar2);
          *puVar5 = 0;
        }
      } while (iVar3 != 0);
      iVar4 = *piVar1;
    }
    port_op_delete(piVar1,iVar4 * 0x18 + 4);
  }
  *(undefined ***)this = (undefined **)(&vftable);
  *(undefined4 *)(this + 4) = 0;
  return;
}





//==== 005d9a20 scalar_deleting_destructor_005d9a20 ====


/* public: virtual void * __thiscall util__Darray_L_struct_NuclearReactorSubModule__CoreElement_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_NuclearReactorSubModule__CoreElement____scalar_deleting_destructor__o2
          (Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ *this,uint param_1)

{
  util__Darray_struct_NuclearReactorSubModule__CoreElement____scalar_deleting_destructor(this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x10);
  }
  return this;
}





//==== 005d9a50 scalar_deleting_destructor_005d9a50 ====

/* public: virtual void * __thiscall NuclearReactorSubModule:: 0 scalardeletingdestructor(unsigned
   int) */

void * __thiscall
NuclearReactorSubModule___scalar_deleting_destructor(NuclearReactorSubModule *this,uint param_1)

{
  pmf_8dca91d1 *ppVar1;
  
  ppVar1 = (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Data;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions._padfb0 =
       (int)&vftable_142;
  if (ppVar1 != (pmf_8dca91d1 *)0x0) {
    port_op_delete(ppVar1);
  }
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions.Data =
       (pmf_8dca91d1 *)0x0;
  (this->NuclearReactorSubModuleMemoizationHandlerInstance).ResetFunctions._padfb0 =
       (int)&vftable;
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,200);
  }
  return this;
}

//==== 005d9ac0 Add_005d9ac0 ====


/* public: bool  util__Darray_L_structNuclearReactorSubModule__CoreElement_G___Add(struct
   NuclearReactorSubModule__CoreElement const &) */

bool 
util__Darray_struct_NuclearReactorSubModule__CoreElement___Add
          (Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ *this,CoreElement *param_1)

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
  iVar1 = *(int *)(this + 4) + *(int *)(this + 8) * 0x18;
  util__Maybe_struct_util__ClassMember___operator((Str_L_char_G_ *)(iVar1 + -0x18),&param_1->Name);
  *(Material **)(iVar1 + -0xc) = param_1->Composition;
  *(double *)(iVar1 + -8) = param_1->Mass_kg;
  return true;
}





//==== 005d9b20 BuildModels_005d9b20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall NuclearReactorSubModule__BuildModels(class util__Darray_L_class_util__SharedPtr_L_structGameModel_G__G_ *)const  */

void __thiscall
NuclearReactorSubModule__BuildModels
          (NuclearReactorSubModule *this,Darray_L_util__SharedPtr_L_GameModel_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  SharedPtr_L_GameModel_G_ *pSVar1;
  Quaternion_L_double_G_ QVar2;
  bool bVar3;
  GameModel *pGVar4;
  ReferenceControllerRegistry *pRVar5;
  ReferenceController *this_00;
  undefined4 *puVar6;
  VertexBufferObject *pVVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  GameModel *pGVar13;
  GameModel *pGVar14;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_20;
  undefined8 local_18;
  GameModel *local_10;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)((GameModel *)param_1);
  *(uint32_t *)&local_18 = (double)CONCAT44(this,(undefined4)local_18);
  Graphics__TransformStack__TransformStack(&local_9,Style__Default);
  dVar9 = 0.7853981633974483;
  uVar11 = 0;
  libm_sse2_sin_precise(0.0);
  uVar10 = 0x3fe921fb54442d18;
  uStack_20 = (double)uVar11;
  libm_sse2_cos_precise(0.0);
  local_38 = SUB84(dVar9 * 0.0,0);
  uStack_34 = (undefined4)((ulonglong)(dVar9 * 0.0) >> 0x20);
  uVar12 = (uint)((ulonglong)uVar10 >> 0x20);
  QVar2.Y = local_38;
  QVar2.X = dVar9;
  QVar2.Z = uStack_34;
  QVar2.Z = local_38;
  QVar2.W = uStack_34;
  QVar2.W = (int)uVar10;
  (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar12;
  Graphics__Rotate(QVar2);
  pGVar4 = (GameModel *)(uintptr_t)(port_op_new(0xb8));
  if (pGVar4 == (GameModel *)0x0) {
    pGVar4 = (GameModel *)0x0;
  }
  else {
    pGVar4 = (GameModel *)
             GameModel__GameModel
                       (pGVar4,*(Material **)&this->AverageNeutronFlux__m2_s,(Material *)0x0,
                        ({ __typeof__(((ulonglong)(uVar12 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar12 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (pGVar4 != (GameModel *)0x0) goto LAB_005d9beb;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005d9beb:
  pGVar13 = pGVar4;
  pRVar5 = util__ReferenceControllerRegistry__Get();
  this_00 = util__ReferenceControllerRegistry__Register(pRVar5,pGVar13);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_00);
  }
  iVar8 = param_1->Size;
  (*(uint32_t*)((char*)&(uStack_20)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)(iVar8 + 1));
  util__Darray_L_util__SharedPtr_L_GameModel_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)local_10,(int *)((int)&uStack_20 + 4));
  pGVar13 = local_10;
  bVar3 = util__Darray_L_util__SharedPtr_L_GameModel_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_GameModel_G___G_ *)local_10,iVar8);
  if (bVar3) {
    iVar8 = *(int *)((int)&pGVar13->VertexObject + 8);
    pSVar1 = *(SharedPtr_L_GameModel_G_ **)((int)&pGVar13->VertexObject + 4);
    *(uint32_t *)&local_10 = (uint32_t)(uintptr_t)(pSVar1[iVar8 + -1].Pointer);
    (*(uint32_t*)((char*)&(uStack_20)+4)) = (uint32_t)(uintptr_t)(pSVar1[iVar8 + -1].Controller);
    pSVar1[iVar8 + -1].Pointer = pGVar4;
    pSVar1[iVar8 + -1].Controller = this_00;
    if (this_00 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(this_00);
    }
    if (((*(uint32_t*)((char*)&(uStack_20)+4)) != (ReferenceController *)0x0) &&
       (bVar3 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_20)+4))))), bVar3)) {
      if (local_10 != (GameModel *)0x0) {
        GameModel___scalar_deleting_destructor(local_10,1);
      }
      pGVar14 = local_10;
      pRVar5 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,pGVar14);
    }
  }
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__ReleaseStrongReference(this_00), bVar3)) {
    if (pGVar4 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar4,1);
    }
    pRVar5 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar5,pGVar4);
  }
  puVar6 = (undefined4 *)(**(code **)((pGVar13->VertexObject)._pad_0x0_0 + 8))();
  dVar9 = *(double *)((*(uint32_t*)((char*)&(local_18)+4)) + 0x90);
  uStack_20 = dVar9 + dVar9 + *(double *)((*(uint32_t*)((char*)&(local_18)+4)) + 0xb0);
  (uint32_t)(local_18 = *(double *)((*(uint32_t*)((char*)&(local_18)+4)) + 0xa8) + dVar9);
  pVVar7 = GameModel__GetVertexObject((GameModel *)*puVar6);
  iVar8 = GetUniversalRadialSegmentation(local_18);
  FillChamferedCylinder(local_18 / 1000.0,uStack_20 / 1000.0,0.1,iVar8,pVVar7);
  Graphics__TransformStack___TransformStack(&local_9);
  return;
}

//==== 005d9d60 CheckSize_005d9d60 ====


/* private: bool  util__Darray_struct_NuclearReactorSubModule__CoreElement___CheckSize(int) */

bool 
util__Darray_struct_NuclearReactorSubModule__CoreElement___CheckSize
          (Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ *this,int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  Str_L_char_G_ *pSVar4;
  uint uVar5;
  Str_L_char_G_ *pSVar6;
  int iVar7;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ *pSVar8;
  bool bVar9;
  Str_L_char_G_ *pSStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar3 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar3;
  bVar1 = !bVar9;
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
    return bVar1 && bVar9;
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
    pSStack_c = (Str_L_char_G_ *)(puVar2 + 1);
    pSVar4 = pSStack_c;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      pSVar4->Data = (char *)0x0;
      pSVar4->Capacity = 0;
      pSVar4->Length = 0;
      pSVar4[1].Data = (char *)0x0;
      pSVar4[1].Capacity = 0;
      pSVar4[1].Length = 0;
      pSVar4 = pSVar4 + 2;
    }
  }
  pSVar4 = *(Str_L_char_G_ **)(this + 4);
  if (pSVar4 != (Str_L_char_G_ *)0x0) {
    pSVar8 = pSStack_c + *(int *)(this + 8) * 2;
    pSVar6 = pSVar4;
    this_00 = pSStack_c;
    if (pSVar4 != pSVar4 + param_1 * 2) {
      do {
        if (this_00 == pSVar8) break;
        util__Maybe_struct_util__ClassMember___operator(this_00,pSVar6);
        this_00[1].Data = pSVar6[1].Data;
        pSVar4 = pSVar6 + 1;
        iVar7 = pSVar6[1].Length;
        pSVar6 = pSVar6 + 2;
        this_00[1].Capacity = pSVar4->Capacity;
        this_00[1].Length = iVar7;
        this_00 = this_00 + 2;
        pSVar4 = *(Str_L_char_G_ **)(this + 4);
      } while (pSVar6 != pSVar4 + param_1 * 2);
    }
    if (pSVar4 != (Str_L_char_G_ *)0x0) {
      iVar7 = pSVar4[-1].Length;
      pSVar8 = pSVar4 + iVar7 * 2;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        do {
          pSVar6 = pSVar8 + -2;
          pSVar8 = pSVar8 + -2;
          iVar7 = iVar7 + -1;
          if (pSVar6->Data != (char *)0x0) {
            port_op_delete(pSVar6->Data);
            pSVar8->Data = (char *)0x0;
          }
        } while (iVar7 != 0);
        iVar7 = pSVar4[-1].Length;
      }
      port_op_delete(&pSVar4[-1].Length,iVar7 * 0x18 + 4);
    }
    *(undefined4 *)(this + 4) = 0;
  }
  *(Str_L_char_G_ **)(this + 4) = pSStack_c;
  return bStack_5;
}





//==== 005d9f40 Clear_005d9f40 ====


/* public: virtual void  util__Darray_struct_NuclearReactorSubModule__CoreElement___Clear(void) */

void 
util__Darray_struct_NuclearReactorSubModule__CoreElement___Clear
          (Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 005d9f60 GenerateModuleDiagram ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct UIWidget * __thiscall NuclearReactorSubModule__GenerateModuleDiagram(class Manager
   *)const  */

UIWidget * __thiscall
NuclearReactorSubModule__GenerateModuleDiagram(NuclearReactorSubModule *this,Manager *param_1)

{
  undefined8 stack0xfffffbfc;
  UIAttributes UVar1;
  UIWidget *this_00;
  UIAttributes *pUVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [44];
  undefined1 auVar12 [44];
  undefined1 in_stack_fffffbfc [320];
  float fVar13;
  UIAttributes local_2b0;
  UIAttributes local_168;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  undefined8 uStack_c;
  undefined1 auVar11 [32];
  
  local_20 = 0;
  this_00 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
  if (this_00 == (UIWidget *)0x0) {
    this_00 = (UIWidget *)0x0;
  }
  else {
    uStack_14 = 0;
    (*(uint32_t*)&(uStack_c)) = 0;
    (*(uint32_t*)((char*)&(uStack_c)+4)) = 0x1e;
    pUVar2 = (UIAttributes *)UIAttributes__UIAttributes(&local_2b0,param_1);
    (pUVar2->DesiredSize).Getter.Callee = (void *)uStack_14;
    (pUVar2->DesiredSize).Getter.CallbackFunction = (Vec2_L_int_G_ (*)(void *))(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4)));
    (pUVar2->DesiredSize).Value.X = (int)uStack_c;
    (pUVar2->DesiredSize).Value.Y = (*(uint32_t*)((char*)&(uStack_c)+4));
    fVar13 = 8.598023e-39;
    UIAttributes__UIAttributes(&local_168,pUVar2);
    uStack_14 = 0x3ff0000000000000;
    uStack_c = 0;
    *(uint32_t *)&local_1c = 0;
    uStack_18 = 0;
    local_168.FillProportion.Getter.Callee = (void *)0x0;
    local_168.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    local_168.FillProportion.Value.X = 0;
    local_168.FillProportion.Value.Y = 0x3ff00000;
    local_168.FillProportion.Value.Y = 0.0;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffbfc,&local_168);
    UVar1.TextColor.Data.Value.Alpha = fVar13;
    *(uint32_t *)&auVar3 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 4)));
    *(uint32_t *)&auVar6 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 32)));
    *(uint32_t *)&auVar7 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 44)));
    *(uint32_t *)&auVar9 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 180)));
    *(uint32_t *)&auVar10 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 196)));
    *(uint32_t *)&auVar12 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 240)));
    UVar1.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffffbfc));
    UVar1.Tag.Data = (char *)(*(uint32_t*)&(auVar3));
    UVar1.Tag.Capacity = (*(uint32_t*)((char*)&(auVar3)+4));
    UVar1.Tag.Length = (*(uint32_t*)((char*)&(auVar3)+8));
    uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 16)),0);
    uVar5 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 16)),8);
    UVar1.Location.Getter.Callee = (void *)(int)uVar4;
    UVar1.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.Location.Value.X = (int)uVar5;
    UVar1.Location.Value.Y = (int)((ulonglong)uVar5 >> 0x20);
    UVar1.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar6));
    UVar1.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar6)) >> 0x20);
    UVar1.Visible.Value = (bool)auVar6[8];
    (*(uint24_t *)((char *)&(UVar1.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar6)+9));
    UVar1.Enabled.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar7));
    UVar1.Enabled.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar7)) >> 0x20);
    UVar1.Enabled.Value = (bool)auVar7[8];
    (*(uint24_t *)((char *)&(UVar1.Enabled) + 9)) = (*(uint24_t*)((char*)&(auVar7)+9));
    uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 56)),0);
    uVar5 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 56)),8);
    UVar1.DesiredSize.Getter.Callee = (void *)(int)uVar4;
    UVar1.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.DesiredSize.Value.X = (int)uVar5;
    UVar1.DesiredSize.Value.Y = (int)((ulonglong)uVar5 >> 0x20);
    uVar4 = SUB248((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 72)),0);
    *(uint32_t *)&auVar8 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 72)),8));
    UVar1.FillProportion.Getter.Callee = (void *)(int)uVar4;
    UVar1.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar8));
    UVar1.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar8)+8));
    uVar4 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 96)),0);
    UVar1.HitTestShape.Getter.Callee = (void *)(int)uVar4;
    UVar1.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar4 >> 0x20));
    UVar1.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 96)),8);
    (*(uint32_t *)((char *)&(UVar1) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffffbfc) + 108));
    uVar4 = SUB168((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 112)),0);
    UVar1.Depth.Getter.Callee = (void *)(int)uVar4;
    UVar1.Depth.Getter.CallbackFunction =
         (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 112)),8);
    uVar4 = SUB128((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 128)),0);
    UVar1.Icon.Getter.Callee = (void *)(int)uVar4;
    UVar1.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar4 >> 0x20));
    UVar1.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 128)),8);
    uVar4 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 140)),0);
    *(uint32_t *)&auVar3 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 140)),8));
    UVar1.Tooltip.Getter.Callee = (void *)(int)uVar4;
    UVar1.Tooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar3));
    UVar1.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar3)+4));
    UVar1.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar3)+8));
    uVar4 = SUB208((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 160)),0);
    *(uint32_t *)&auVar3 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffffbfc) + 160)),8));
    UVar1.VerboseTooltip.Getter.Callee = (void *)(int)uVar4;
    UVar1.VerboseTooltip.Getter.CallbackFunction =
         (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar3));
    UVar1.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar3)+4));
    UVar1.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar3)+8));
    uVar4 = SUB128((*(uint32_t *)((char *)&(auVar9) + 0)),0);
    UVar1.TextFont.Data.Getter.Callee = (void *)(int)uVar4;
    UVar1.TextFont.Data.Getter.CallbackFunction =
         (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar9) + 0)),8);
    UVar1.TextFont.IsValidData = (bool)auVar9[0xc];
    (*(uint32_t *)((char *)&(UVar1.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar9) + 13));
    uVar4 = SUB408((*(uint32_t *)((char *)&(auVar10) + 0)),0);
    *(uint32_t *)&auVar11 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar10) + 0)),8));
    UVar1.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar4;
    UVar1.ForegroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar11));
    UVar1.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar11)+8));
    UVar1.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar11) + 12));
    UVar1.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar11) + 16));
    UVar1.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar11) + 20));
    UVar1.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar11) + 24));
    UVar1.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar11) + 28));
    UVar1.ForegroundColor.IsValidData = (bool)auVar10[0x28];
    (*(uint32_t *)((char *)&(UVar1.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar10) + 41));
    uVar4 = SUB408((*(uint32_t *)((char *)&(auVar12) + 0)),0);
    *(uint32_t *)&auVar11 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar12) + 0)),8));
    UVar1.BackgroundColor.Data.Getter.Callee = (void *)(int)uVar4;
    UVar1.BackgroundColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar4 >> 0x20);
    UVar1.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar11));
    UVar1.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar11)+4));
    UVar1.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar11)+8));
    UVar1.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar11) + 12));
    UVar1.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar11) + 16));
    UVar1.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar11) + 20));
    UVar1.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar11) + 24));
    UVar1.BackgroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar11) + 28));
    UVar1.BackgroundColor.IsValidData = (bool)auVar12[0x28];
    (*(uint32_t *)((char *)&(UVar1.BackgroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar12) + 41));
    UVar1.TextColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffffbfc) + 284));
    UVar1.TextColor.Data.Getter.CallbackFunction =
         (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffffbfc) + 284)) >> 0x20);
    UVar1.TextColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffffbfc) + 292));
    UVar1.TextColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffffbfc) + 296));
    UVar1.TextColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffffbfc) + 300));
    UVar1.TextColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffffbfc) + 304));
    UVar1.TextColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffffbfc) + 308));
    UVar1.TextColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffffbfc) + 312));
    UVar1.TextColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffffbfc) + 316));
    (*(uint32_t *)((char *)&(UVar1.TextColor) + 40)) = (uint32_t)(uintptr_t)(pUVar2);
    UIWidget__UIWidget(this_00,UVar1);
    this_00->_pad_0x0_0 = (int)&vftable_225;
    this_00[1]._pad_0x0_0 = (int)this;
    UIAttributes___UIAttributes(&local_168);
    UIAttributes___UIAttributes(&local_2b0);
  }
  return this_00;
}

//==== 005da050 GetAmbientCoolantTemperature_K ====


/* public: double __thiscall NuclearReactorSubModule__GetAmbientCoolantTemperature_K(void)const  */

double __thiscall
NuclearReactorSubModule__GetAmbientCoolantTemperature_K(NuclearReactorSubModule *this)

{
  double dVar1;
  Material *pMVar2;
  
  pMVar2 = this->Fuel;
  dVar1 = pMVar2->ThermalConductivity_W__m_K;
  if (((dVar1 < 293.15) || (293.15 < pMVar2->ThermalExpansion__K)) &&
     ((pMVar2->ThermalExpansion__K < 293.15 || (293.15 < dVar1)))) {
    return dVar1 * 0.5 + pMVar2->ThermalExpansion__K * 0.5;
  }
  return 293.15;
}





//==== 005da0c0 GetComposition_005da0c0 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   NuclearReactorSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
NuclearReactorSubModule__GetComposition(NuclearReactorSubModule *this)

{
  undefined8 stack0x00000004;
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  Material *pMVar6;
  double *pdVar7;
  double dVar8;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 5;
  puVar10 = (undefined4 *)port_op_new(0x50);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    iVar12 = 5;
    puVar11 = puVar10;
    do {
      *puVar11 = 0;
      *(undefined8 *)(puVar11 + 2) = 0;
      iVar12 = iVar12 + -1;
      puVar11 = puVar11 + 4;
    } while (iVar12 != 0);
  }
  *(undefined4 **)(in_stack_00000004 + 4) = puVar10;
  iVar12 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar13 = 0;
    do {
      iVar13 = iVar13 + 0x10;
      iVar12 = iVar12 + 1;
      puVar10 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar13);
      *puVar10 = 0;
      puVar10[1] = uStack_10;
      puVar10[2] = 0;
      puVar10[3] = 0;
    } while (iVar12 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar12 = *(int *)(in_stack_00000004 + 8);
  uVar5 = *(undefined4 *)&this->FuelEnrichment_Percent;
  dVar2 = *(double *)&this->ControlRodComposition;
  dVar14 = this->ControlRodMass_kg;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar12 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar9 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar12);
  if (bVar9) {
    puVar10 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar10 = uVar5;
    puVar10[1] = uStack_10;
    *(double *)(puVar10 + 2) = dVar2 * dVar14;
  }
  dVar2 = this->ControlRodMass_kg;
  pMVar6 = *(Material **)&this->FuelEnrichment_Percent;
  dVar14 = *(double *)&this->ControlRodComposition;
  Material__GetUnenrichedMaterial_Memoize(pMVar6);
  if ((char)pMVar6[1].ElementCount.Size == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  pdVar7 = pMVar6[1].ElementCount.Data;
  iVar12 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar12 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar9 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar12);
  if (bVar9) {
    puVar10 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar10 = (undefined4)(uintptr_t)(pdVar7);
    puVar10[1] = iStack_20;
    *(double *)(puVar10 + 2) = (1.0 - dVar2) * dVar14;
  }
  iVar12 = *(int *)(this_00 + 8);
  pMVar6 = this->NeutronReflector;
  dVar2 = this->ReflectorThickness_m;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar12 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar9 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar12);
  if (bVar9) {
    uStack_1c = SUB84(dVar2,0);
    uStack_18 = (undefined4)((ulonglong)dVar2 >> 0x20);
    puVar10 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar10 = (undefined4)(uintptr_t)(pMVar6);
    puVar10[1] = iStack_20;
    puVar10[2] = uStack_1c;
    puVar10[3] = uStack_18;
  }
  dVar2 = this->CachedInletTemperature_K;
  iVar12 = *(int *)&this->AverageNeutronFlux__m2_s;
  iVar13 = *(int *)(this_00 + 8);
  dVar8 = dVar2 * 3.141592653589793 * dVar2;
  dVar14 = this->CachedCoolantFlowRate_kg__s;
  dVar3 = *(double *)&this->CachedNoFluid;
  dVar4 = *(double *)(iVar12 + 0x30);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar13 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar9 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar13);
  if (bVar9) {
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = iVar12;
    piVar1[1] = iStack_20;
    *(double *)(piVar1 + 2) = (dVar2 * 6.283185307179586 * dVar14 + dVar8 + dVar8) * dVar3 * dVar4;
  }
  dVar2 = this->FuelMass_kg;
  if (0.0 < dVar2) {
    iVar12 = *(int *)(this_00 + 8);
    uVar5 = (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(this) + 0x54)));
    in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar12 + 1);
    util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
    bVar9 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar12);
    if (bVar9) {
      uStack_1c = SUB84(dVar2,0);
      uStack_18 = (undefined4)((ulonglong)dVar2 >> 0x20);
      puVar10 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
      *puVar10 = uVar5;
      puVar10[1] = iStack_20;
      puVar10[2] = uStack_1c;
      puVar10[3] = uStack_18;
    }
  }
  if ((char)((this->CachedDimensions_m).Height == '\0')){
    pMVar6 = this->Fuel;
    dVar14 = GetCoreCoolantVolume_m3(this,true);
    dVar2 = pMVar6->Density_kg__m3;
    iVar12 = *(int *)(this_00 + 8);
    in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar12 + 1);
    util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
    bVar9 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar12);
    if (bVar9) {
      piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
      *piVar1 = (int)pMVar6;
      piVar1[1] = iStack_20;
      *(double *)(piVar1 + 2) = dVar14 * dVar2;
      return this_00;
    }
  }
  return this_00;
}





//==== 005dae90 GetCrewRequired_005dae90 ====


/* public: class util__Darray_L_structCrewJob_G_ __thiscall
   NuclearReactorSubModule__GetCrewRequired(int)const  */

Darray_L_CrewJob_G_ * __thiscall NuclearReactorSubModule__GetCrewRequired(NuclearReactorSubModule *this,Darray_L_CrewJob_G_ *param_1)

{
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  int in_stack_00000008;
  CrewJob CStack_60;
  void *apvStack_40 [3];
  void *pvStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined ***)param_1 = &vftable_120;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_28,"CrewReactorEngineer");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_40,&SStack_28,&SStack_10);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(&SStack_1c,pSVar2);
  CStack_60.Dept = CrewDepartment__Engineering;
  util__Str_char___Str_char(&CStack_60.Name,&SStack_1c);
  CStack_60.WatchRequired = false;
  CStack_60.CrewRequired = (double)in_stack_00000008 * 0.2;
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  util__Darray_struct_CrewJob___Add((Darray_L_struct_CrewJob_G_ *)param_1,&CStack_60);
  if (CStack_60.Name.Data != (char *)0x0) {
    port_op_delete(CStack_60.Name.Data);
  }
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
    pvStack_34 = (void *)0x0;
  }
  if (apvStack_40[0] != (void *)0x0) {
    port_op_delete(apvStack_40[0]);
    apvStack_40[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  util__Str_char___Str_char(&SStack_1c,"CrewReactorTechnician");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_40,&SStack_1c,&SStack_10);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  util__Str_char___Str_char(&SStack_28,pSVar2);
  CStack_60.Dept = CrewDepartment__Engineering;
  util__Str_char___Str_char(&CStack_60.Name,&SStack_28);
  CStack_60.WatchRequired = true;
  CStack_60.CrewRequired = (double)in_stack_00000008 * 0.25;
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  util__Darray_struct_CrewJob___Add((Darray_L_struct_CrewJob_G_ *)param_1,&CStack_60);
  if (CStack_60.Name.Data != (char *)0x0) {
    port_op_delete(CStack_60.Name.Data);
  }
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
    pvStack_34 = (void *)0x0;
  }
  if (apvStack_40[0] != (void *)0x0) {
    port_op_delete(apvStack_40[0]);
    apvStack_40[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  return param_1;
}





//==== 005db3d0 GetEmittedRadiation_Clear ====


/* public: void __thiscall NuclearReactorSubModule__GetEmittedRadiation_Clear(void)const  */

void __thiscall NuclearReactorSubModule__GetEmittedRadiation_Clear(NuclearReactorSubModule *this)

{
  *(undefined1 *)&this->ModeratorMass_kg = 0;
  *(undefined4 *)&(this->GetEmittedRadiation_MemoizedValue).Data.GammaRays_W = 0;
  *(undefined4 *)((int)&(this->GetEmittedRadiation_MemoizedValue).Data.GammaRays_W + 4) = 0;
  *(undefined4 *)&(this->GetEmittedRadiation_MemoizedValue).IsValidData = 0;
  (undefined4)((*(undefined4 *)(void *)((char *)&((this->GetEmittedRadiation_MemoizedValue)) + 0x1c)) = 0);
  this->Coolant = (Material *)0x0;
  this->Moderator = (Material *)0x0;
  return;
}





//==== 005db900 GetPointerPropertyChoices_005db900 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   NuclearReactorSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
NuclearReactorSubModule__GetPointerPropertyChoices
          (NuclearReactorSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2
          )

{
  bool bVar1;
  char *pcVar2;
  SerializationManagerInterface SVar3;
  int in_stack_0000000c;
  undefined1 uVar4;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar3 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar3 = *param_2;
  }
  pcVar2 = "Coolant";
  while( true ) {
    if ((pcVar2[(int)((*(int *)&(SVar3)) + -0x925310)] == '\0') && (*pcVar2 == '\0')) {
      uVar4 = 2;
      goto LAB_005db9c8;
    }
    if (pcVar2[(int)((*(int *)&(SVar3)) + -0x925310)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  if ((*(int *)&(param_2[1])) < 1) {
    SVar3 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar3 = *param_2;
  }
  pcVar2 = "Moderator";
  while( true ) {
    if ((pcVar2[(int)((*(int *)&(SVar3)) + -0x928f4c)] == '\0') && (*pcVar2 == '\0')) goto LAB_005db9c4;
    if (pcVar2[(int)((*(int *)&(SVar3)) + -0x928f4c)] != *pcVar2) break;
    pcVar2 = pcVar2 + 1;
  }
  bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"Fuel");
  if (bVar1) {
    uVar4 = 0xb;
  }
  else {
    bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"ControlRodComposition");
    if ((!bVar1) &&
       (bVar1 = util__Str_char___operator__o9((Str_L_char_G_ *)param_2,"NeutronReflector"), !bVar1)) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
LAB_005db9c4:
    uVar4 = false;
  }
LAB_005db9c8:
  GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar4);
  return param_1;
}





//==== 005db9e0 GetReflectionInfo_005db9e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   NuclearReactorSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall
NuclearReactorSubModule__GetReflectionInfo(NuclearReactorSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_57dd62e3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_57dd62e3__thread_safe_static_guard_0__);
    if ( cde_l2_57dd62e3__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_735e48a6_ReflectionInfo) = &vftable_222;
      _Init_thread_footer(& cde_l2_57dd62e3__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_735e48a6_ReflectionInfo;
}





//==== 005dca60 GetTotalDimensions_m_005dca60 ====


/* public: struct util__Cylinder_L_double_G_ 
   NuclearReactorSubModule__GetTotalDimensions_m(void)const  */

Cylinder_L_double_G_ * 
NuclearReactorSubModule__GetTotalDimensions_m
          (NuclearReactorSubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = *(double *)&this->CachedNoFluid;
  __return_storage_ptr__->Radius = this->CachedInletTemperature_K + dVar1;
  __return_storage_ptr__->Height = dVar1 + dVar1 + this->CachedCoolantFlowRate_kg__s;
  return __return_storage_ptr__;
}





//==== 005dcf00 PassThroughCachedData2_005dcf00 ====


/* public: void __thiscall NuclearReactorSubModule__PassThroughCachedData2(double) */

void __thiscall
NuclearReactorSubModule__PassThroughCachedData2(NuclearReactorSubModule *this,double param_1)

{
  *(double *)(this + 1) = param_1;
  return;
}





//==== 005dcf20 PassThroughCachedData_005dcf20 ====

/* public: void  NuclearReactorSubModule__PassThroughCachedData(struct
   util__Cylinder_L_double_G_,double,bool) */

void 
NuclearReactorSubModule__PassThroughCachedData
          (NuclearReactorSubModule *this,Cylinder_L_double_G_ param_1,double param_2,bool param_3)

{
  (bool)((this->CachedDimensions_m).Height = param_3);
  *(undefined4 *)&this->CachedInletTemperature_K = param_1.Radius;
  *(undefined4 *)((int)&this->CachedInletTemperature_K + 4) = (*(uint32_t *)((char *)&(param_1.Radius) + 4));
  *(undefined4 *)&this->CachedCoolantFlowRate_kg__s = param_1.Height;
  *(undefined4 *)((int)&this->CachedCoolantFlowRate_kg__s + 4) = (*(uint32_t *)((char *)&(param_1.Height) + 4));
  *(double *)&this[1]._pad_0x8_2 = param_2;
  return;
}

//==== 005dcf50 Render_005dcf50 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classNuclearReactorSubModule_G___Render(void)const
    */

void 
ModuleDiagram_class_NuclearReactorSubModule___Render
          (ModuleDiagram_L_class_NuclearReactorSubModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *pMVar1;
  NormalShader *pNVar2;
  Vec2_L_int_G_ VVar3;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  pMVar1 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar3);
  NuclearReactorSubModule__RenderDiagram
            (*(NuclearReactorSubModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005dcfb0 RenderDiagram_005dcfb0 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: void  NuclearReactorSubModule__RenderDiagram(class Manager *,struct
   util__Vec2_L_int_G_)const  */

void 
NuclearReactorSubModule__RenderDiagram
          (NuclearReactorSubModule *this,Manager *param_1,Vec2_L_int_G_ param_2)

{
  undefined8 stack0xffffff68;
  undefined8 stack0xfffffffc;
  double dVar1;
  Line2_L_double_G_ LVar2;
  Line2_L_double_G_ LVar3;
  Line2_L_double_G_ LVar4;
  CoreUITheme *pCVar5;
  LocStr *pLVar6;
  Str_L_char_G_ *pSVar7;
  double dVar8;
  Color CStack_b8;
  int iStack_8c;
  void *apvStack_58 [3];
  void *pvStack_4c;
  double dStack_40;
  undefined1 auStack_38 [12];
  Str_L_char_G_ SStack_2c;
  undefined4 uStack_20;
  int iStack_1c;
  int aiStack_18 [2];
  char acStack_10 [8];
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  aiStack_18[0] = param_2.X;
  SStack_2c.Data = acStack_10;
  SStack_2c.Capacity = (int)&uStack_20;
  SStack_2c.Length = (int)aiStack_18;
  uStack_20 = 0;
  iStack_1c = 0x14;
  aiStack_18[1] = 10;
  acStack_10[0] = '\0';
  acStack_10[1] = '\0';
  acStack_10[2] = '\0';
  acStack_10[3] = '\0';
  acStack_10[4] = '\0';
  acStack_10[5] = '\0';
  acStack_10[6] = '$';
  acStack_10[7] = '@';
  glColor(Preset__Black,1.0);
  FUN_005d9910();
  glColor(Preset__Orange,1.0);
  (*(uint64_t*)((char*)&(auStack_38)+4)) = GetEffectiveNeutronMultiplicationFactor(this,0.0,true);
  dVar8 = GetEffectiveNeutronMultiplicationFactor(this,0.0,false);
  dStack_40 = (double)(*(uint64_t*)((char*)&(auStack_38)+4));
  if ((double)(*(uint64_t*)((char*)&(auStack_38)+4)) <= dVar8) {
    dStack_40 = dVar8;
  }
  dVar1 = (double)(*(uint64_t*)((char*)&(auStack_38)+4));
  if (dVar8 <= (double)(*(uint64_t*)((char*)&(auStack_38)+4))) {
    dVar1 = dVar8;
  }
  (*(uint64_t*)((char*)&(auStack_38)+4)) = dVar1;
  if (dStack_40 < dVar1) {
    (*(uint64_t*)((char*)&(auStack_38)+4)) = dStack_40;
    dStack_40 = dVar1;
  }
  FUN_005d9910();
  glColor(Preset__White,1.0);
  FUN_005d9910();
  FUN_005d9910();
  iStack_8c = 0x5dd146;
  LVar2.B.X = 0.0;
  LVar2.A.X = 0.0;
  LVar2.A.Y = 0.0;
  LVar2.B.Y = SUB84((double)iStack_1c,0);
  LVar2.B.Z = (int)((ulonglong)(double)iStack_1c >> 0x20);
  DrawAntialiasedLine(LVar2,1.0);
  dVar8 = (double)(aiStack_18[0] / 2);
  iStack_8c = 0x5dd189;
  LVar3.A.Y = 0.0;
  LVar3.A.X = dVar8;
  LVar3.B.X = SUB84(dVar8,0);
  LVar3.B.Y = (int)((ulonglong)dVar8 >> 0x20);
  LVar3.B.Y = SUB84((double)iStack_1c,0);
  LVar3.B.Z = (int)((ulonglong)(double)iStack_1c >> 0x20);
  DrawAntialiasedLine(LVar3,1.0);
  dVar8 = (double)aiStack_18[0];
  iStack_8c = 0x5dd1c5;
  LVar4.A.Y = 0.0;
  LVar4.A.X = dVar8;
  LVar4.B.X = SUB84(dVar8,0);
  LVar4.B.Y = (float)((ulonglong)dVar8 >> 0x20);
  LVar4.B.Y = SUB84((double)iStack_1c,0);
  LVar4.B.Z = (int)((ulonglong)(double)iStack_1c >> 0x20);
  DrawAntialiasedLine(LVar4,1.0);
  pCVar5 = (CoreUITheme *)(uintptr_t)(Manager__GetTheme(param_1));
  ThemeFont__Get((ThemeFont *)&(pCVar5->MainFont).FontUsed.CharInfo[1].BitmapSize.Y);
  util__Str_char___Str_char((Str_L_char_G_ *)auStack_38,"NuclearReactor Subcritical");
  CStack_b8.Alpha = 8.616032e-39;
  util__Color__Color__o7((Color *)&stack0xffffff68);
  dVar8 = (double)aiStack_18[0];
  SStack_2c.Data = (char *)0x0;
  SStack_2c.Capacity = 0;
  SStack_2c.Length = 0;
  util__Color__Color(&CStack_b8,Preset__White,1.0);
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_58,(Str_L_char_G_ *)auStack_38,&SStack_2c);
  pSVar7 = util__LocStr__operator__o3(pLVar6);
  UIStaticText__RenderLabel((int)(dVar8 * 0.25),0,pSVar7);
  if (pvStack_4c != (void *)0x0) {
    port_op_delete(pvStack_4c);
    pvStack_4c = (void *)0x0;
  }
  if (apvStack_58[0] != (void *)0x0) {
    port_op_delete(apvStack_58[0]);
    apvStack_58[0] = (void *)0x0;
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  if ((char *)(*(uint32_t*)&(auStack_38)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(auStack_38)));
  }
  util__Str_char___Str_char((Str_L_char_G_ *)auStack_38,"NuclearReactor Supercritical");
  CStack_b8.Alpha = 8.61634e-39;
  util__Color__Color__o7((Color *)&stack0xffffff68);
  dVar8 = (double)aiStack_18[0];
  SStack_2c.Data = (char *)0x0;
  SStack_2c.Capacity = 0;
  SStack_2c.Length = 0;
  util__Color__Color(&CStack_b8,Preset__White,1.0);
  pLVar6 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_58,(Str_L_char_G_ *)auStack_38,&SStack_2c);
  pSVar7 = util__LocStr__operator__o3(pLVar6);
  UIStaticText__RenderLabel((int)(dVar8 * 0.75),0,pSVar7);
  if (pvStack_4c != (void *)0x0) {
    port_op_delete(pvStack_4c);
    pvStack_4c = (void *)0x0;
  }
  if (apvStack_58[0] != (void *)0x0) {
    port_op_delete(apvStack_58[0]);
    apvStack_58[0] = (void *)0x0;
  }
  if (SStack_2c.Data != (char *)0x0) {
    port_op_delete(SStack_2c.Data);
    SStack_2c.Data = (char *)0x0;
  }
  if ((char *)(*(uint32_t*)&(auStack_38)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(auStack_38)));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005dd3b0 SetAll_005dd3b0 ====


/* public: virtual void  util__Darray_struct_NuclearReactorSubModule__CoreElement___SetAll(struct NuclearReactorSubModule__CoreElement const
   &) */

void 
util__Darray_struct_NuclearReactorSubModule__CoreElement___SetAll
          (Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ *this,CoreElement *param_1)

{
  Str_L_char_G_ *this_00;
  
  this_00 = *(Str_L_char_G_ **)(this + 4);
  if (this_00 != this_00 + *(int *)(this + 8) * 2) {
    do {
      util__Maybe_struct_util__ClassMember___operator(this_00,&param_1->Name);
      this_00[1].Data = (char *)param_1->Composition;
      *(double *)&this_00[1].Capacity = param_1->Mass_kg;
      this_00 = this_00 + 2;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  return;
}





//==== 005dd410 SetSize_005dd410 ====


/* private: void  util__Darray_L_structNuclearReactorSubModule__CoreElement_G___SetSize(int
   const &) */

void 
util__Darray_struct_NuclearReactorSubModule__CoreElement___SetSize
          (Darray_L_struct_NuclearReactorSubModule__CoreElement_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  Str_L_char_G_ *this_00;
  Str_L_char_G_ SStack_1c;
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
     (this_00 = (Str_L_char_G_ *)(iVar2 + iVar3 * 0x18),
     this_00 != (Str_L_char_G_ *)(iVar2 + *(int *)(this + 8) * 0x18))) {
    do {
      uStack_c = 0;
      SStack_1c.Data = (char *)0x0;
      SStack_1c.Capacity = 0;
      SStack_1c.Length = 0;
      uStack_10 = 0;
      util__Maybe_struct_util__ClassMember___operator(this_00,&SStack_1c);
      this_00[1].Data = (char *)0x0;
      this_00[1].Capacity = 0;
      this_00[1].Length = 0;
      this_00 = this_00 + 2;
    } while (this_00 != (Str_L_char_G_ *)(*(int *)(this + 4) + *(int *)(this + 8) * 0x18));
  }
  *(int *)(this + 8) = iVar3;
  return;
}





//==== 005dd4e0 StaticFactory_005dd4e0 ====

/* public: static class util__Reflectable * __cdecl
   NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticFactory(void)
    */

Reflectable * __cdecl
NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticFactory__o2(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(200));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,200);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_223;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[1]._pad_0x0_0 =
         (int)&vftable_142;
    pRVar1[1].Name.Data = (char *)0x0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[2].Name.Capacity = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[3].Name.Length = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[4].Name.Capacity = 0;
    pRVar1[5]._pad_0x0_0 = 0;
    pRVar1[5].Name.Data = (char *)0x0;
    pRVar1[5].Name.Capacity = 0;
    pRVar1[5].Name.Length = 0;
    pRVar1[6]._pad_0x0_0 = 0;
    pRVar1[6].Name.Capacity = 0;
    pRVar1[6].Name.Length = 0;
    pRVar1[7]._pad_0x0_0 = 0;
    pRVar1[7].Name.Data = (char *)0x0;
    pRVar1[7].Name.Capacity = 0;
    pRVar1[8]._pad_0x0_0 = 0;
    pRVar1[8].Name.Data = (char *)0x0;
    pRVar1[8].Name.Capacity = 0;
    pRVar1[9].Name.Capacity = 0;
    pRVar1[9].Name.Length = 0;
    pRVar1[10].Name.Capacity = 0;
    pRVar1[10].Name.Length = 0;
    pRVar1[0xb]._pad_0x0_0 = 0;
    pRVar1[0xb].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 005dd5b0 StaticGetMemberByIndex_005dd5b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_8085c373__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_8085c373__thread_safe_static_guard_0__);
    if ( cde_l2_8085c373__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_d7f13b9c_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096d57c = 0;
      _DAT_0096d580 = 0;
      _DAT_0096d584 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d588,"Unused");
      _DAT_0096d594 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d598,"Coolant");
      _DAT_0096d5a4 = 8;
      _DAT_0096d5a8 = 0x50;
      _DAT_0096d5ac = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d5b0,"Material");
      _DAT_0096d5bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d5c0,"Moderator");
      _DAT_0096d5cc = 8;
      _DAT_0096d5d0 = 0x54;
      _DAT_0096d5d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d5d8,"Material");
      _DAT_0096d5e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d5e8,"ModeratorMass_kg");
      _DAT_0096d5f4 = 4;
      _DAT_0096d5f8 = 0x58;
      _DAT_0096d5fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d600,"double");
      _DAT_0096d60c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d610,"Fuel");
      _DAT_0096d61c = 8;
      _DAT_0096d620 = 0x60;
      _DAT_0096d624 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d628,"Material");
      _DAT_0096d634 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d638,"FuelMass_kg");
      _DAT_0096d644 = 4;
      _DAT_0096d648 = 0x68;
      _DAT_0096d64c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d650,"double");
      _DAT_0096d65c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d660,"FuelEnrichment_Percent");
      _DAT_0096d66c = 4;
      _DAT_0096d670 = 0x70;
      _DAT_0096d674 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d678,"double");
      _DAT_0096d684 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d688,"ControlRodComposition");
      _DAT_0096d694 = 8;
      _DAT_0096d698 = 0x78;
      _DAT_0096d69c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d6a0,"Material");
      _DAT_0096d6ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d6b0,"ControlRodMass_kg");
      _DAT_0096d6bc = 4;
      _DAT_0096d6c0 = 0x80;
      _DAT_0096d6c4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d6c8,"double");
      _DAT_0096d6d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d6d8,"NeutronReflector");
      _DAT_0096d6e4 = 8;
      _DAT_0096d6e8 = 0x88;
      _DAT_0096d6ec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d6f0,"Material");
      _DAT_0096d6fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d700,"ReflectorThickness_m");
      _DAT_0096d70c = 4;
      _DAT_0096d710 = 0x90;
      _DAT_0096d714 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d718,"double");
      _DAT_0096d724 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d728,"AverageNeutronFlux__m2_s");
      _DAT_0096d734 = 4;
      _DAT_0096d738 = 0x98;
      _DAT_0096d73c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d740,"double");
      _DAT_0096d74c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_8085c373__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_d7f13b9c_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096d57c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096d580 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096d584 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096d588 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096d594)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096d595)[iVar1];
  return __return_storage_ptr__;
}





//==== 005dd990 StaticGetMemberCount_005dd990 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberCount(void) */

int __cdecl
NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberCount
          (void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_a9c8bda2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_a9c8bda2__thread_safe_static_guard_0__);
    if ( cde_l2_a9c8bda2__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_cf5042cc_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096d394 = 0;
      _DAT_0096d398 = 0;
      _DAT_0096d39c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d3a0,"Unused");
      _DAT_0096d3ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d3b0,"Coolant");
      _DAT_0096d3bc = 8;
      _DAT_0096d3c0 = 0x50;
      _DAT_0096d3c4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d3c8,"Material");
      _DAT_0096d3d4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d3d8,"Moderator");
      _DAT_0096d3e4 = 8;
      _DAT_0096d3e8 = 0x54;
      _DAT_0096d3ec = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d3f0,"Material");
      _DAT_0096d3fc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d400,"ModeratorMass_kg");
      _DAT_0096d40c = 4;
      _DAT_0096d410 = 0x58;
      _DAT_0096d414 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d418,"double");
      _DAT_0096d424 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d428,"Fuel");
      _DAT_0096d434 = 8;
      _DAT_0096d438 = 0x60;
      _DAT_0096d43c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d440,"Material");
      _DAT_0096d44c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d450,"FuelMass_kg");
      _DAT_0096d45c = 4;
      _DAT_0096d460 = 0x68;
      _DAT_0096d464 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d468,"double");
      _DAT_0096d474 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d478,"FuelEnrichment_Percent");
      _DAT_0096d484 = 4;
      _DAT_0096d488 = 0x70;
      _DAT_0096d48c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d490,"double");
      _DAT_0096d49c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d4a0,"ControlRodComposition");
      _DAT_0096d4ac = 8;
      _DAT_0096d4b0 = 0x78;
      _DAT_0096d4b4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d4b8,"Material");
      _DAT_0096d4c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d4c8,"ControlRodMass_kg");
      _DAT_0096d4d4 = 4;
      _DAT_0096d4d8 = 0x80;
      _DAT_0096d4dc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d4e0,"double");
      _DAT_0096d4ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d4f0,"NeutronReflector");
      _DAT_0096d4fc = 8;
      _DAT_0096d500 = 0x88;
      _DAT_0096d504 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d508,"Material");
      _DAT_0096d514 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d518,"ReflectorThickness_m");
      _DAT_0096d524 = 4;
      _DAT_0096d528 = 0x90;
      _DAT_0096d52c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d530,"double");
      _DAT_0096d53c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d540,"AverageNeutronFlux__m2_s");
      _DAT_0096d54c = 4;
      _DAT_0096d550 = 0x98;
      _DAT_0096d554 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d558,"double");
      _DAT_0096d564 = 0;
      atexit( private__static_int_const___cdecl_NuclearReactorSubModule__ReflectionInfoStruct_class_NuclearReactorSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_a9c8bda2__thread_safe_static_guard_0__);
    }
  }
  return 0xc;
}





//==== 005ddd20 StaticGetReflectionInfo_005ddd20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct NuclearReactorSubModule__ReflectionInfoStruct_L_class_NuclearReactorSubModule_G_ * __cdecl NuclearReactorSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_NuclearReactorSubModule_G_ * __cdecl
NuclearReactorSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_57dd62e3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_57dd62e3__thread_safe_static_guard_0__);
    if ( cde_l2_57dd62e3__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_735e48a6_ReflectionInfo) = &vftable_222;
      _Init_thread_footer(& cde_l2_57dd62e3__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoStruct_L_class_NuclearReactorSubModule_G_ * *)&cde_l2_735e48a6_ReflectionInfo;
}





//==== 005ddd80 GetClassID_005ddd80 ====


/* public: virtual unsigned long __thiscall RadiatorModule__GetClassID(void)const  */

ulong __thiscall RadiatorModule__GetClassID(RadiatorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_ecedc505__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_ecedc505__thread_safe_static_guard_0__);
    if ( cde_l2_ecedc505__thread_safe_static_guard_0__ == -1) {
       cde_l2r_63721df7_ID =
           util__GetHash("RadiatorModule");
      _Init_thread_footer(& cde_l2_ecedc505__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_63721df7_ID
  ;
}





//==== 005ddde0 DememoizeAll_005ddde0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall AmmoModule__DememoizeAll(void)const  */

void __thiscall AmmoModule__DememoizeAll(AmmoModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  undefined4 *puVar2;
  int local_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  Module__DememoizeAll((Module *)this);
  local_c = 0;
  iVar1 = (**(code **)((this->AmmoBay)._pad_0x8_2 + 0xc))();
  if (local_c < iVar1) {
    do {
      puVar2 = (undefined4 *)(**(code **)(this->AmmoBay)._pad_0x8_2)(&local_c);
      (*(code *)*puVar2)();
      local_c = local_c + 1;
      iVar1 = (**(code **)((this->AmmoBay)._pad_0x8_2 + 0xc))();
    } while (local_c < iVar1);
  }
  (**(code **)((this->AmmoBay)._pad_0x8_2 + 0x10))();
  return;
}

//==== 005de820 GetIcon_005de820 ====


/* public: virtual void (__cdecl*__thiscall RadiatorModule__GetIcon(void)const )(void) */

_func_void * __thiscall RadiatorModule__GetIcon(RadiatorModule *this)

{
  return Icons__Radiator;
}





//==== 005de970 GetCollisionType ====


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* public: virtual enum Collision__Type  SpacecraftComponent__GetCollisionType(void)const
    */

int SpacecraftComponent__GetCollisionType(void)

{
  return Spacecraft;
}





//==== 005de980 GetStatuses_005de980 ====

/* WARNING: Removing unreachable block (ram,0x005dea6f) */
/* public: virtual class DesignStatusBuffer  RadiatorModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
RadiatorModule__GetStatuses
          (RadiatorModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  int iVar1;
  double *pdVar2;
  DesignStatusBuffer *this_00;
  bool bVar3;
  double dVar4;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  int local_8;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_3c,"RadiatorNoPipes");
  local_30.Data = (char *)0x0;
  local_30.Capacity = 0;
  local_30.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  if ((char)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size == '\0') {
    iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    __return_storage_ptr__ = (DesignStatusBuffer *)(iVar1 + 1);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)&__return_storage_ptr__);
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar1);
    if (bVar3) {
      pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar2 + iVar1 + -1) = (long long int (*)())(GetHeatPipesPerPanel_Clear);
      *(undefined4 *)((int)pdVar2 + iVar1 * 8 + -4) = 0;
    }
    dVar4 = this->BackTaper_radians * 0.5;
    local_8 = CONCAT31((*(uint24_t*)((char*)&(local_8)+1)),1);
    (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data =
         (double *)(int)(*(double *)&this->Panels / (dVar4 + dVar4));
    (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size = local_8;
  }
  DesignStatusBuffer__CheckError
            (this_00,(int)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data < 1,&local_3c,
             &local_18,&local_24,&local_30,(ModulePlacer *)0x0);
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  return this_00;
}

//==== 005deb20 GetCrewRequired_005deb20 ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   RadiatorModule__GetCrewRequired(void)const  */

Darray_L_struct_CrewJob_G_ * __thiscall RadiatorModule__GetCrewRequired(RadiatorModule *this)

{
  undefined8 stack0x00000004;
  int iVar1;
  Darray_L_struct_CrewJob_G_ *this_00;
  bool bVar2;
  LocStr *this_01;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  Darray_L_struct_CrewJob_G_ *in_stack_00000004;
  Str_L_char_G_ SStack_5c;
  undefined8 uStack_50;
  undefined1 uStack_48;
  void *apvStack_40 [3];
  void *pvStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = &vftable_120;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_28,"CrewRadiatorTechnician");
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  this_01 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_40,&SStack_28,&SStack_10);
  pSVar3 = util__LocStr__operator__o3(this_01);
  util__Str_char___Str_char(&SStack_1c,pSVar3);
  util__Str_char___Str_char(&SStack_5c,&SStack_1c);
  uStack_50 = 0x3fa999999999999a;
  uStack_48 = 1;
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_CrewJob_G_ *)(iVar1 + 1);
  util__Darray_struct_CrewJob___SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_struct_CrewJob___CheckSize(this_00,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(this_00 + 4);
    iVar4 = *(int *)(this_00 + 8) * 0x20;
    *(undefined4 *)(iVar4 + -0x20 + iVar1) = 2;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x1c + iVar4),&SStack_5c);
    *(undefined8 *)(iVar4 + -0x10 + iVar1) = 0x3fa999999999999a;
    *(undefined1 *)(iVar4 + -8 + iVar1) = 1;
  }
  if (SStack_5c.Data != (char *)0x0) {
    port_op_delete(SStack_5c.Data);
  }
  if (pvStack_34 != (void *)0x0) {
    port_op_delete(pvStack_34);
    pvStack_34 = (void *)0x0;
  }
  if (apvStack_40[0] != (void *)0x0) {
    port_op_delete(apvStack_40[0]);
    apvStack_40[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  return this_00;
}





//==== 005dec90 GetComposition_005dec90 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   RadiatorModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
RadiatorModule__GetComposition
          (RadiatorModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  undefined4 *puVar1;
  Material *pMVar2;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar3;
  MaterialComposition *pMVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  __return_storage_ptr__->_pad_0x0_0 = (int)&vftable_75;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 1;
  pMVar4 = (MaterialComposition *)(uintptr_t)(port_op_new(0x10));
  if (pMVar4 == (MaterialComposition *)0x0) {
    pMVar4 = (MaterialComposition *)0x0;
  }
  else {
    pMVar4->Type = (Material *)0x0;
    pMVar4->Mass_kg = 0.0;
  }
  iVar6 = 0;
  this_00->Data = pMVar4;
  if (0 < this_00->Capacity) {
    iVar5 = 0;
    do {
      iVar6 = iVar6 + 1;
      puVar1 = (undefined4 *)((int)&this_00->Data->Type + iVar5);
      *puVar1 = 0;
      puVar1[1] = uStack_28;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar5 = iVar5 + 0x10;
    } while (iVar6 < this_00->Capacity);
  }
  dVar7 = GetPanelTotalMass_kg(this);
  iVar6 = this_00->Size;
  pMVar2 = *(Material **)((int)&this->ArmorThickness_m + 4);
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar3 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar3) {
    uStack_24 = SUB84(dVar7,0);
    uStack_20 = (undefined4)((ulonglong)dVar7 >> 0x20);
    pMVar4 = this_00->Data + this_00->Size + -1;
    pMVar4->Type = pMVar2;
    (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar4) + 0x4)) = uStack_28);
    *(undefined4 *)&pMVar4->Mass_kg = uStack_24;
    *(undefined4 *)((int)&pMVar4->Mass_kg + 4) = uStack_20;
  }
  if (this[1]._pad_0x18_6 != 0) {
    iVar6 = this[1]._pad_0x0_0;
    dVar7 = *(double *)&this->Panels;
    dVar8 = util__Tan((double *)&this[1]._pad_0x10_4);
    dVar9 = util__Tan((double *)&this[1]._pad_0x8_2);
    dVar8 = (double)this[1]._pad_0x0_0 * *(double *)&this->Panels *
            (this->FrontTaper_radians + (dVar8 + dVar9) * (double)iVar6 * dVar7 * 0.5);
    dVar9 = GetSurfaceFinishThickness_m(this);
    pMVar2 = (Material *)this[1]._pad_0x18_6;
    iVar6 = this_00->Size;
    dVar7 = pMVar2->Density_kg__m3;
    __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar6 + 1);
    util__Darray_L_MaterialConstituent_G___SetSize
              ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
    bVar3 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                      ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
    if (bVar3) {
      pMVar4 = this_00->Data + this_00->Size + -1;
      pMVar4->Type = pMVar2;
      (undefined4)((*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar4) + 0x4)) = uStack_18);
      pMVar4->Mass_kg = dVar7 * dVar9 * (dVar8 + dVar8);
      return this_00;
    }
  }
  return this_00;
}

//==== 005dee60 GetCubicBoundingBox_m_005dee60 ====

/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   RadiatorModule__GetCubicBoundingBox_m(void)const  */

AABB_L_util__Vec3_L_double_G___G_ * __thiscall
RadiatorModule__GetCubicBoundingBox_m
          (RadiatorModule *this,AABB_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar4 = GetExtendedPanelWidth_m(this,1.0);
  dVar4 = dVar4 * (double)this[1]._pad_0x0_0;
  dVar1 = *(double *)&this->Panels * 0.5;
  dVar5 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar2 = *(double *)&this->Panels;
  dVar3 = *(double *)&this->Panels;
  dVar6 = util__Tan((double *)&this[1]._pad_0x10_4);
  dVar6 = ((dVar6 * dVar3 + dVar5 * dVar2) * (double)this[1]._pad_0x0_0 + this->FrontTaper_radians)
          * 0.5;
  dVar7 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar2 = *(double *)&this->Panels;
  dVar8 = util__Tan((double *)&this[1]._pad_0x10_4);
  dVar3 = dVar3 * -0.5;
  dVar5 = 0.0;
  if (0.0 <= dVar4) {
    dVar5 = dVar4;
  }
  dVar7 = ((dVar8 * *(double *)&this->Panels + dVar7 * dVar2) * (double)this[1]._pad_0x0_0 +
          this->FrontTaper_radians) * -0.5;
  dVar2 = dVar7;
  if (dVar6 <= dVar7) {
    dVar2 = dVar6;
  }
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  (__return_storage_ptr__->Lower).X = dVar2;
  dVar2 = dVar3;
  if (dVar1 <= dVar3) {
    dVar2 = dVar1;
  }
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  (__return_storage_ptr__->Lower).Y = dVar2;
  dVar2 = 0.0;
  if (dVar4 <= 0.0) {
    dVar2 = dVar4;
  }
  (__return_storage_ptr__->Lower).Z = dVar2;
  (__return_storage_ptr__->Upper).X = dVar7;
  (__return_storage_ptr__->Upper).Y = dVar3;
  (__return_storage_ptr__->Upper).Z = dVar5;
  return __return_storage_ptr__;
}

//==== 005defd0 InnerSortFunction_005defd0 ====

/* public: virtual bool __thiscall RadiatorModule__InnerSortFunction(class Module const *,class
   Module const *)const  */

bool __thiscall
RadiatorModule__InnerSortFunction(RadiatorModule *this,Module *param_1,Module *param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = param_1[3]._pad_0x8_2;
  dVar2 = *(double *)&param_1[2].Models;
  dVar3 = util__Tan((double *)&param_1[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data);
  dVar4 = util__Tan((double *)&param_1[3]._pad_0x10_4);
  dVar3 = (double)param_1[3]._pad_0x8_2 * *(double *)&param_1[2].Models *
          (*(double *)&param_1[2].Models.Size + (dVar3 + dVar4) * (double)iVar1 * dVar2 * 0.5);
  iVar1 = param_2[3]._pad_0x8_2;
  dVar2 = *(double *)&param_2[2].Models;
  dVar4 = util__Tan((double *)&param_2[3].ModuleMemoizationHandlerInstance.ResetFunctions.Data);
  dVar5 = util__Tan((double *)&param_2[3]._pad_0x10_4);
  dVar2 = (double)param_2[3]._pad_0x8_2 * *(double *)&param_2[2].Models *
          (*(double *)&param_2[2].Models.Size + (dVar4 + dVar5) * (double)iVar1 * dVar2 * 0.5);
  return dVar3 + dVar3 < dVar2 + dVar2;
}

//==== 005df0f0 GenerateDesignUI_005df0f0 ====

/* WARNING: Removing unreachable block (ram,0x005dfb92) */
/* WARNING: Removing unreachable block (ram,0x005dfba2) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual struct UIWidget * __thiscall RadiatorModule__GenerateDesignUI(class Manager
   *)const  */

UIWidget * __thiscall RadiatorModule__GenerateDesignUI(RadiatorModule *this,Manager *param_1)

{
  undefined8 stack0xfffff3f0;
  undefined8 stack0xfffff418;
  undefined8 stack0xfffff4f4;
  undefined8 stack0xfffff528;
  undefined8 stack0xfffff560;
  Attribute_L_util__Color_G_ AVar1;
  Attribute_L_util__Color_G_ AVar2;
  UIAttributes UVar3;
  UIAttributes UVar4;
  LayoutAttributes LVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  Manager *pMVar35;
  UIWidget *pUVar36;
  LocStr *pLVar37;
  Str_L_char_G_ *pSVar38;
  Str_L_char_G_ *pSVar39;
  Args *pAVar40;
  Color *pCVar41;
  UIAttributes *pUVar42;
  float *pfVar43;
  Data *pDVar44;
  undefined1 in_stack_fffff3f0 [32];
  float in_stack_fffff410;
  float in_stack_fffff414;
  int iStack_b14;
  undefined1 in_stack_fffff4f4 [44];
  undefined1 auVar45 [12];
  void *in_stack_fffff520;
  _func___cdecl_bool_void_ptr *in_stack_fffff524;
  undefined1 auVar46 [12];
  undefined1 in_stack_fffff528 [28];
  int in_stack_fffff544;
  void *in_stack_fffff548;
  _func___cdecl_bool_void_ptr *in_stack_fffff54c;
  Str_L_char_G_ *in_stack_fffff550;
  Str_L_char_G_ *in_stack_fffff554;
  _func___cdecl_bool_void_ptr *in_stack_fffff558;
  Args *in_stack_fffff55c;
  Str_L_char_G_ *pSVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [44];
  undefined1 in_stack_fffff560 [220];
  float in_stack_fffff63c;
  undefined4 in_stack_fffff640;
  float fVar54;
  void *in_stack_fffff644;
  void *pvVar55;
  _func___cdecl_Color_void_ptr *in_stack_fffff648;
  _func___cdecl_Color_void_ptr *p_Var56;
  int in_stack_fffff64c;
  float fVar57;
  Material *in_stack_fffff650;
  Material *pMVar58;
  int in_stack_fffff654;
  float fVar59;
  int in_stack_fffff658;
  float fVar60;
  float in_stack_fffff65c;
  float fVar61;
  float in_stack_fffff660;
  float fVar62;
  float in_stack_fffff664;
  float fVar63;
  float fVar64;
  LineGraph *pLVar65;
  float fVar66;
  Manager *pMVar67;
  UIAttributes local_984;
  UIAttributes local_83c;
  UIAttributes local_6f4;
  Args local_5ac [272];
  Args local_49c [272];
  UIAttributes local_38c;
  LayoutAttributes local_244;
  Color local_214;
  Color local_1f4;
  void *local_1d4 [3];
  void *local_1c8;
  void *local_1bc [3];
  void *local_1b0;
  void *local_1a4 [3];
  void *local_198;
  void *local_18c [3];
  void *local_180;
  void *local_174 [3];
  void *local_168;
  void *local_15c [3];
  void *local_150;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  Str_L_char_G_ local_12c;
  Str_L_char_G_ local_120;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  Str_L_char_G_ SStack_108;
  Str_L_char_G_ local_fc;
  Str_L_char_G_ local_f0;
  Str_L_char_G_ local_e4;
  Str_L_char_G_ local_d8;
  Str_L_char_G_ local_cc;
  Str_L_char_G_ local_c0;
  Darray_L_util__SharedPtr_L_UIWidget_G___G_ local_b4;
  Str_L_char_G_ local_a4;
  Str_L_char_G_ local_98;
  Str_L_char_G_ local_8c;
  Str_L_char_G_ local_80;
  Str_L_char_G_ local_74;
  Str_L_char_G_ local_68;
  LineGraph *local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  void *pvStack_50;
  Str_L_char_G_ SStack_4c;
  UIRowLayout *local_40;
  UIWidget *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  void *local_1c;
  Str_L_char_G_ SStack_18;
  RadiatorModule *local_c;
  LineGraph *local_8;
  undefined1 auVar53 [32];
  
  pMVar35 = param_1;
  bVar34 = false;
  bVar33 = false;
  bVar32 = false;
  bVar31 = false;
  bVar30 = false;
  bVar29 = false;
  bVar28 = false;
  bVar27 = false;
  bVar26 = false;
  bVar25 = false;
  bVar24 = false;
  bVar23 = false;
  bVar22 = false;
  bVar21 = false;
  bVar20 = false;
  bVar19 = false;
  bVar18 = false;
  bVar17 = false;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_40 = (UIRowLayout *)0x0;
  local_c = this;
  local_40 = (UIRowLayout *)(uintptr_t)(port_op_new(0x218));
  if (local_40 == (UIRowLayout *)0x0) {
    pUVar36 = (UIWidget *)0x0;
  }
  else {
    pUVar36 = (UIWidget *)(uintptr_t)(port_op_new(0x170));
    if (pUVar36 == (UIWidget *)0x0) {
      local_3c = (UIWidget *)0x0;
    }
    else {
      fVar64 = 8.627248e-39;
      pMVar67 = param_1;
      local_3c = pUVar36;
      UIAttributes__UIAttributes(&local_38c,param_1);
      local_38 = 0;
      uStack_30 = 0x3ff0000000000000;
      uStack_28 = 0x3ff0000000000000;
      uStack_34 = 0;
      local_38c.FillProportion.Getter.Callee = (void *)0x0;
      local_38c.FillProportion.Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
      local_38c.FillProportion.Value.X = 0;
      local_38c.FillProportion.Value.Y = 0x3ff00000;
      local_38c.FillProportion.Value.Y = 1.0;
      in_stack_fffff520 = (void *)0x5df17e;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff528,&local_38c);
      in_stack_fffff524 = (_func___cdecl_bool_void_ptr *)0x5df185;
      UVar4.Location.Value.Y = in_stack_fffff544;
*(uint32_t *)&auVar46 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff528) + 4)));
      UVar4.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff528));
      UVar4.Tag.Data = (char *)(*(uint32_t*)&(auVar46));
      UVar4.Tag.Capacity = (*(uint32_t*)((char*)&(auVar46)+4));
      UVar4.Tag.Length = (*(uint32_t*)((char*)&(auVar46)+8));
      UVar4.Location.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff528) + 16));
      UVar4.Location.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff528) + 16)) >> 0x20);
      UVar4.Location.Value.X = (*(uint32_t *)((char *)&(in_stack_fffff528) + 24));
      UVar4.Visible.Getter.Callee = in_stack_fffff548;
      UVar4.Visible.Getter.CallbackFunction = in_stack_fffff54c;
      (*(uint32_t *)((char *)&(UVar4.Visible) + 8)) = (uint32_t)(uintptr_t)(in_stack_fffff550);
      UVar4.Enabled.Getter.Callee = in_stack_fffff554;
      UVar4.Enabled.Getter.CallbackFunction = in_stack_fffff558;
      (*(uint32_t *)((char *)&(UVar4.Enabled) + 8)) = (uint32_t)(uintptr_t)(in_stack_fffff55c);
*(uint32_t *)&auVar51 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff560) + 124)));
*(uint32_t *)&auVar52 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff560) + 140)));
      uVar48 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff560) + 0)),0);
      uVar49 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff560) + 0)),8);
      UVar4.DesiredSize.Getter.Callee = (void *)(int)uVar48;
      UVar4.DesiredSize.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
      UVar4.DesiredSize.Value.X = (int)uVar49;
      UVar4.DesiredSize.Value.Y = (int)((ulonglong)uVar49 >> 0x20);
      uVar48 = SUB248((*(uint32_t *)((char *)&(in_stack_fffff560) + 16)),0);
*(uint32_t *)&auVar50 = (uint32_t)(SUB2416((*(uint32_t *)((char *)&(in_stack_fffff560) + 16)),8));
      UVar4.FillProportion.Getter.Callee = (void *)(int)uVar48;
      UVar4.FillProportion.Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
      UVar4.FillProportion.Value.X = (double)(*(uint64_t*)&(auVar50));
      UVar4.FillProportion.Value.Y = (double)(*(uint64_t*)((char*)&(auVar50)+8));
      uVar48 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff560) + 40)),0);
      UVar4.HitTestShape.Getter.Callee = (void *)(int)uVar48;
      UVar4.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)(int)((ulonglong)uVar48 >> 0x20));
      UVar4.HitTestShape.Value = SUB124((*(uint32_t *)((char *)&(in_stack_fffff560) + 40)),8);
      (*(uint32_t *)((char *)&(UVar4) + 108)) = (*(uint32_t *)((char *)&(in_stack_fffff560) + 52));
      uVar48 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff560) + 56)),0);
      UVar4.Depth.Getter.Callee = (void *)(int)uVar48;
      UVar4.Depth.Getter.CallbackFunction =
           (_func___cdecl_double_void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
      UVar4.Depth.Value = (double)SUB168((*(uint32_t *)((char *)&(in_stack_fffff560) + 56)),8);
      uVar48 = SUB128((*(uint32_t *)((char *)&(in_stack_fffff560) + 72)),0);
      UVar4.Icon.Getter.Callee = (void *)(int)uVar48;
      UVar4.Icon.Getter.CallbackFunction = (void (* (*)(void *))(void))((_func___cdecl__func___cdecl_void_ptr_void_ptr *)(int)((ulonglong)uVar48 >> 0x20));
      UVar4.Icon.Value = (_func___cdecl_void *)SUB124((*(uint32_t *)((char *)&(in_stack_fffff560) + 72)),8);
      uVar48 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff560) + 84)),0);
*(uint32_t *)&auVar46 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff560) + 84)),8));
      UVar4.Tooltip.Getter.Callee = (void *)(int)uVar48;
      UVar4.Tooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
      UVar4.Tooltip.Value.Data = (char *)(*(uint32_t*)&(auVar46));
      UVar4.Tooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar46)+4));
      UVar4.Tooltip.Value.Length = (*(uint32_t*)((char*)&(auVar46)+8));
      uVar48 = SUB208((*(uint32_t *)((char *)&(in_stack_fffff560) + 104)),0);
*(uint32_t *)&auVar46 = (uint32_t)(SUB2012((*(uint32_t *)((char *)&(in_stack_fffff560) + 104)),8));
      UVar4.VerboseTooltip.Getter.Callee = (void *)(int)uVar48;
      UVar4.VerboseTooltip.Getter.CallbackFunction =
           (_func___cdecl_Str_L_char_G__void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
      UVar4.VerboseTooltip.Value.Data = (char *)(*(uint32_t*)&(auVar46));
      UVar4.VerboseTooltip.Value.Capacity = (*(uint32_t*)((char*)&(auVar46)+4));
      UVar4.VerboseTooltip.Value.Length = (*(uint32_t*)((char*)&(auVar46)+8));
      uVar48 = SUB128((*(uint32_t *)((char *)&(auVar51) + 0)),0);
      UVar4.TextFont.Data.Getter.Callee = (void *)(int)uVar48;
      UVar4.TextFont.Data.Getter.CallbackFunction =
           (_func___cdecl_Font_ptr_void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
      UVar4.TextFont.Data.Value = (Font *)SUB124((*(uint32_t *)((char *)&(auVar51) + 0)),8);
      UVar4.TextFont.IsValidData = (bool)auVar51[0xc];
      (*(uint32_t *)((char *)&(UVar4.TextFont) + 13)) = (*(uint32_t *)((char *)&(auVar51) + 13));
      uVar48 = SUB408((*(uint32_t *)((char *)&(auVar52) + 0)),0);
*(uint32_t *)&auVar53 = (uint32_t)(SUB4032((*(uint32_t *)((char *)&(auVar52) + 0)),8));
      UVar4.ForegroundColor.Data.Getter.Callee = (void *)(int)uVar48;
      UVar4.ForegroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
      UVar4.ForegroundColor.Data.Value._pad_0x0_0 = (*(uint32_t*)&(auVar53));
      UVar4.ForegroundColor.Data.Value._pad_0x4_1 = (*(uint32_t*)((char*)&(auVar53)+4));
      UVar4.ForegroundColor.Data.Value._pad_0x8_2 = (*(uint32_t*)((char*)&(auVar53)+8));
      UVar4.ForegroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(auVar53) + 12));
      UVar4.ForegroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(auVar53) + 16));
      UVar4.ForegroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(auVar53) + 20));
      UVar4.ForegroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(auVar53) + 24));
      UVar4.ForegroundColor.Data.Value.Alpha = (float)(*(uint32_t *)((char *)&(auVar53) + 28));
      UVar4.ForegroundColor.IsValidData = (bool)auVar52[0x28];
      (*(uint32_t *)((char *)&(UVar4.ForegroundColor) + 41)) = (*(uint32_t *)((char *)&(auVar52) + 41));
      UVar4.BackgroundColor.Data.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff560) + 184));
      UVar4.BackgroundColor.Data.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff560) + 184)) >> 0x20);
      UVar4.BackgroundColor.Data.Value._pad_0x0_0 = (*(uint32_t *)((char *)&(in_stack_fffff560) + 192));
      UVar4.BackgroundColor.Data.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff560) + 196));
      UVar4.BackgroundColor.Data.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff560) + 200));
      UVar4.BackgroundColor.Data.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff560) + 204));
      UVar4.BackgroundColor.Data.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff560) + 208));
      UVar4.BackgroundColor.Data.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff560) + 212));
      UVar4.BackgroundColor.Data.Value.Value = (float)(*(uint32_t *)((char *)&(in_stack_fffff560) + 216));
      UVar4.BackgroundColor.Data.Value.Alpha = in_stack_fffff63c;
      UVar4.BackgroundColor.IsValidData = SUB41(in_stack_fffff640,0);
      (*(uint32_t *)((char *)&(UVar4.BackgroundColor) + 41)) = SUB43(in_stack_fffff640,1);
      UVar4.TextColor.Data.Getter.Callee = in_stack_fffff644;
      UVar4.TextColor.Data.Getter.CallbackFunction = in_stack_fffff648;
      UVar4.TextColor.Data.Value._pad_0x0_0 = in_stack_fffff64c;
      UVar4.TextColor.Data.Value._pad_0x4_1 = (int)in_stack_fffff650;
      UVar4.TextColor.Data.Value._pad_0x8_2 = in_stack_fffff654;
      UVar4.TextColor.Data.Value._pad_0xc_3 = in_stack_fffff658;
      UVar4.TextColor.Data.Value.Hue_degrees = in_stack_fffff65c;
      UVar4.TextColor.Data.Value.Saturation = in_stack_fffff660;
      UVar4.TextColor.Data.Value.Value = in_stack_fffff664;
      UVar4.TextColor.Data.Value.Alpha = fVar64;
      (*(uint32_t *)((char *)&(UVar4.TextColor) + 40)) = (uint32_t)(uintptr_t)(pMVar67);
      UIWidget__UIWidget(pUVar36,UVar4);
      pUVar36->_pad_0x0_0 = (int)&vftable_230;
      pUVar36[1]._pad_0x0_0 = (int)this;
      UIAttributes___UIAttributes(&local_38c);
    }
    local_8 = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_8 == (LineGraph *)0x0) {
      local_8 = (LineGraph *)0x0;
    }
    else {
      util__Str_char___Str_char(&local_120,"%");
      util__Str_char___Str_char(&local_fc,"RadiatorEmissivityChart YAxis");
      util__Str_char___Str_char(&local_12c,"K");
      util__Str_char___Str_char(&local_f0,"RadiatorEmissivityChart XAxis");
      util__Str_char___Str_char(&local_e4,"RadiatorEmissivityChart Title");
      pSVar47 = &local_120;
      local_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      SStack_108.Data = (char *)0x0;
      SStack_108.Capacity = 0;
      SStack_108.Length = 0x40590000;
      local_58 = 0;
      uStack_54 = 0;
      local_a4.Data = (char *)0x0;
      pvStack_50 = (void *)0x0;
      SStack_4c.Data = (char *)0x0;
      SStack_4c.Capacity = 0;
      SStack_4c.Length = 0x40a38800;
      local_a4.Capacity = 0;
      local_a4.Length = 0;
      local_98.Data = (char *)0x0;
      local_98.Capacity = 0;
      local_98.Length = 0;
      local_8c.Data = (char *)0x0;
      local_8c.Capacity = 0;
      local_8c.Length = 0;
      pLVar37 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1d4,&local_fc,&local_a4);
      pSVar38 = util__LocStr__operator__o3(pLVar37);
      in_stack_fffff554 = &local_12c;
      pLVar37 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1bc,&local_f0,&local_98);
      in_stack_fffff550 = util__LocStr__operator__o3(pLVar37);
      in_stack_fffff544 = 0x5df30c;
      pLVar37 = (LocStr *)util__LocStr__LocStr((LocStr *)local_1a4,&local_e4,&local_8c);
      pSVar39 = util__LocStr__operator__o3(pLVar37);
      local_20 = 0;
      *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_18,pSVar39);
      pAVar40 = (Args *)LineGraph__Args__Args__o3(local_5ac);
      *(undefined4 *)pAVar40 = local_20;
      *(void **)(pAVar40 + 4) = local_1c;
      in_stack_fffff548 = (void *)0x5df34e;
      util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar40 + 8),&SStack_18);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_18.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        in_stack_fffff548 = (void *)0x5df35b;
        port_op_delete(SStack_18.Data);
      }
      in_stack_fffff54c = (_func___cdecl_bool_void_ptr *)0x5df365;
      in_stack_fffff55c =
           LineGraph__Args__SetAxis(pAVar40,in_stack_fffff550,in_stack_fffff554,pSVar38,pSVar47);
      *(undefined4 *)(in_stack_fffff55c + 0x68) = local_58;
      *(undefined4 *)(in_stack_fffff55c + 0x6c) = uStack_54;
      *(void **)(in_stack_fffff55c + 0x70) = pvStack_50;
      *(char **)(in_stack_fffff55c + 0x74) = SStack_4c.Data;
      *(RadiatorModule **)(in_stack_fffff55c + 0x9c) = this;
      *(ulonglong *)(in_stack_fffff55c + 0x78) = CONCAT44(SStack_4c.Length,SStack_4c.Capacity);
      *(code **)(uintptr_t)(in_stack_fffff55c + 0xa0) = (long long int (*)())(util__DelegateFactory_class_RadiatorModule_double_double___MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartEmissivity_double_const__0);
      *(undefined4 *)(in_stack_fffff55c + 0x80) = local_114;
      *(undefined4 *)(in_stack_fffff55c + 0x84) = uStack_110;
      *(undefined4 *)(in_stack_fffff55c + 0x88) = (undefined4)(uintptr_t) (long long int (*)())(uStack_10c);
      *(char **)(in_stack_fffff55c + 0x8c) = SStack_108.Data;
      *(ulonglong *)(in_stack_fffff55c + 0x90) = CONCAT44(SStack_108.Length,SStack_108.Capacity);
      in_stack_fffff558 = (_func___cdecl_bool_void_ptr *)0x5df3ad;
      LineGraph__Args__Args((Args *)&stack0xfffff560,in_stack_fffff55c);
      pCVar41 = (Color *)util__Color__Color(&local_214,Preset__Green,1.0);
      util__Attribute_struct_util__Color___Attribute_struct_util__Color
                ((Attribute_L_util__Color_G_ *)&stack0xfffff3f0,pCVar41);
      pvStack_50 = (void *)0x0;
      SStack_4c.Data = (char *)0x0;
      SStack_4c.Capacity = 0;
      SStack_4c.Length = 0x96;
      pUVar42 = (UIAttributes *)UIAttributes__UIAttributes(&local_984,param_1);
      local_38 = 0;
      uStack_30 = 0x3ff0000000000000;
      uStack_28 = 0;
      uStack_34 = 0;
      (pUVar42->DesiredSize).Getter.Callee = pvStack_50;
      (pUVar42->DesiredSize).Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_4c.Data;
      (pUVar42->DesiredSize).Value.X = SStack_4c.Capacity;
      (pUVar42->DesiredSize).Value.Y = SStack_4c.Length;
      (pUVar42->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar42->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      (undefined4)((pUVar42->FillProportion).Value.X = 0);
      *(undefined4 *)((int)&(pUVar42->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar42->FillProportion).Value.Y = 0.0;
      AVar1.Value.Value = in_stack_fffff410;
      AVar1.Getter.Callee = (void *)(int)(*(uint64_t*)&(in_stack_fffff3f0));
      AVar1.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(in_stack_fffff3f0)) >> 0x20);
      AVar1.Value._pad_0x0_0 = (*(uint32_t*)((char*)&(in_stack_fffff3f0)+8));
      AVar1.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff3f0) + 12));
      AVar1.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff3f0) + 16));
      AVar1.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff3f0) + 20));
      AVar1.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff3f0) + 24));
      AVar1.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff3f0) + 28));
      AVar1.Value.Alpha = in_stack_fffff414;
      pUVar42 = UIAttributes__SetForegroundColor(pUVar42,*(Attribute_L_util__Color_G_ *)&(AVar1));
;
      in_stack_fffff410 = 8.628326e-39;
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff418,pUVar42);
      in_stack_fffff414 = 8.628337e-39;
      local_8 = (LineGraph *)LineGraph__LineGraph(local_8);
      bVar19 = true;
      bVar18 = true;
      bVar17 = true;
      bVar16 = true;
      bVar15 = true;
      bVar14 = true;
      bVar12 = true;
      bVar11 = true;
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar6 = true;
      this = local_c;
    }
    bVar34 = false;
    bVar33 = false;
    bVar32 = false;
    bVar31 = false;
    bVar30 = false;
    bVar29 = false;
    bVar28 = false;
    bVar27 = false;
    bVar26 = false;
    bVar25 = false;
    bVar24 = false;
    bVar23 = false;
    bVar22 = false;
    bVar13 = false;
    local_5c = (LineGraph *)(uintptr_t)(port_op_new(0x278));
    if (local_5c == (LineGraph *)0x0) {
      param_1 = (Manager *)0x0;
    }
    else {
      util__Str_char___Str_char(&SStack_4c,"%");
      util__Str_char___Str_char(&local_d8,"RadiatorEfficiencyChart YAxis");
      util__Str_char___Str_char(&SStack_108,"K");
      util__Str_char___Str_char(&local_cc,"RadiatorEfficiencyChart XAxis");
      util__Str_char___Str_char(&local_c0,"RadiatorEfficiencyChart Title");
      pSVar47 = &SStack_4c;
      local_c = (RadiatorModule *)&stack0xfffff560;
      local_38 = 0;
      uStack_30 = 0;
      uStack_28 = 0x4059000000000000;
      bVar34 = true;
      bVar33 = true;
      bVar32 = true;
      bVar31 = true;
      bVar30 = true;
      bVar29 = true;
      bVar28 = true;
      bVar27 = true;
      bVar26 = true;
      bVar25 = true;
      bVar24 = true;
      bVar23 = true;
      bVar22 = true;
      bVar13 = true;
      uStack_34 = 0;
      local_144 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      uStack_138 = 0;
      uStack_134 = 0;
      uStack_130 = 0x40a38800;
      local_80.Data = (char *)0x0;
      local_80.Capacity = 0;
      local_80.Length = 0;
      local_74.Data = (char *)0x0;
      local_74.Capacity = 0;
      local_74.Length = 0;
      local_68.Data = (char *)0x0;
      local_68.Capacity = 0;
      local_68.Length = 0;
      pLVar37 = (LocStr *)util__LocStr__LocStr((LocStr *)local_18c,&local_d8,&local_80);
      pSVar38 = util__LocStr__operator__o3(pLVar37);
      in_stack_fffff554 = &SStack_108;
      pLVar37 = (LocStr *)util__LocStr__LocStr((LocStr *)local_174,&local_cc,&local_74);
      in_stack_fffff550 = util__LocStr__operator__o3(pLVar37);
      in_stack_fffff544 = 0x5df5af;
      pLVar37 = (LocStr *)util__LocStr__LocStr((LocStr *)local_15c,&local_c0,&local_68);
      pSVar39 = util__LocStr__operator__o3(pLVar37);
      local_20 = 0;
      *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((void *)0x0);
      util__Str_char___Str_char(&SStack_18,pSVar39);
      pAVar40 = (Args *)LineGraph__Args__Args__o3(local_49c);
      *(undefined4 *)pAVar40 = local_20;
      *(void **)(pAVar40 + 4) = local_1c;
      in_stack_fffff548 = (void *)0x5df5f1;
      util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar40 + 8),&SStack_18);
      if ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_18.Data !=
          (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0) {
        in_stack_fffff548 = (void *)0x5df5fe;
        port_op_delete(SStack_18.Data);
      }
      in_stack_fffff54c = (_func___cdecl_bool_void_ptr *)0x5df608;
      in_stack_fffff55c =
           LineGraph__Args__SetAxis(pAVar40,in_stack_fffff550,in_stack_fffff554,pSVar38,pSVar47);
      *(undefined4 *)(in_stack_fffff55c + 0x68) = local_144;
      *(undefined4 *)(in_stack_fffff55c + 0x6c) = uStack_140;
      *(undefined4 *)(in_stack_fffff55c + 0x70) = uStack_13c;
      *(undefined4 *)(in_stack_fffff55c + 0x74) = uStack_138;
      *(RadiatorModule **)(in_stack_fffff55c + 0x9c) = this;
      *(ulonglong *)(in_stack_fffff55c + 0x78) = CONCAT44(uStack_130,uStack_134);
      *(code **)(uintptr_t)(in_stack_fffff55c + 0xa0) = (long long int (*)())(util__DelegateFactory_class_RadiatorModule_double_double___MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartEfficiency_double_const__0);
      *(undefined4 *)(in_stack_fffff55c + 0x80) = local_38;
      *(undefined4 *)(in_stack_fffff55c + 0x84) = uStack_34;
      *(undefined4 *)(in_stack_fffff55c + 0x88) = (undefined4)uStack_30;
      *(undefined4 *)(in_stack_fffff55c + 0x8c) = (*(uint32_t*)((char*)&(uStack_30)+4));
      *(undefined8 *)(in_stack_fffff55c + 0x90) = (undefined8)(uintptr_t) (long long int (*)())(uStack_28);
      in_stack_fffff558 = (_func___cdecl_bool_void_ptr *)0x5df651;
      LineGraph__Args__Args((Args *)local_c,in_stack_fffff55c);
      pCVar41 = (Color *)util__Color__Color(&local_1f4,Preset__Green,1.0);
      util__Attribute_struct_util__Color___Attribute_struct_util__Color
                ((Attribute_L_util__Color_G_ *)&stack0xfffff3f0,pCVar41);
      *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)((void *)0x0);
      SStack_18.Data = (char *)0x0;
      SStack_18.Capacity = 0;
      SStack_18.Length = 0x96;
      pUVar42 = (UIAttributes *)UIAttributes__UIAttributes(&local_83c,param_1);
      local_38 = 0;
      uStack_30 = 0x3ff0000000000000;
      uStack_28 = 0;
      uStack_34 = 0;
      (pUVar42->DesiredSize).Getter.Callee = local_1c;
      (pUVar42->DesiredSize).Getter.CallbackFunction =
           (_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_18.Data;
      (pUVar42->DesiredSize).Value.X = SStack_18.Capacity;
      (pUVar42->DesiredSize).Value.Y = SStack_18.Length;
      (pUVar42->FillProportion).Getter.Callee = (void *)0x0;
      (pUVar42->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0
      ;
      (undefined4)((pUVar42->FillProportion).Value.X = 0);
      *(undefined4 *)((int)&(pUVar42->FillProportion).Value.X + 4) = 0x3ff00000;
      (pUVar42->FillProportion).Value.Y = 0.0;
      AVar2.Value.Value = in_stack_fffff410;
      AVar2.Getter.Callee = (void *)(int)(*(uint64_t*)&(in_stack_fffff3f0));
      AVar2.Getter.CallbackFunction =
           (_func___cdecl_Color_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(in_stack_fffff3f0)) >> 0x20);
      AVar2.Value._pad_0x0_0 = (*(uint32_t*)((char*)&(in_stack_fffff3f0)+8));
      AVar2.Value._pad_0x4_1 = (*(uint32_t *)((char *)&(in_stack_fffff3f0) + 12));
      AVar2.Value._pad_0x8_2 = (*(uint32_t *)((char *)&(in_stack_fffff3f0) + 16));
      AVar2.Value._pad_0xc_3 = (*(uint32_t *)((char *)&(in_stack_fffff3f0) + 20));
      AVar2.Value.Hue_degrees = (float)(*(uint32_t *)((char *)&(in_stack_fffff3f0) + 24));
      AVar2.Value.Saturation = (float)(*(uint32_t *)((char *)&(in_stack_fffff3f0) + 28));
      AVar2.Value.Alpha = in_stack_fffff414;
      pUVar42 = UIAttributes__SetForegroundColor(pUVar42,*(Attribute_L_util__Color_G_ *)&(AVar2));
      UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff418,pUVar42);
      param_1 = (Manager *)LineGraph__LineGraph(local_5c);
    }
    local_b4._pad_0x0_0 = (int)&vftable_48;
    bVar21 = true;
    bVar20 = true;
    local_b4.Data = (SharedPtr_L_UIWidget_G_ *)0x0;
    local_b4.Size = 0;
    local_b4.Capacity = 0;
    pfVar43 = (float *)LayoutAttributes__LayoutAttributes(&local_244);
    *(undefined1 *)(pfVar43 + 0xb) = 1;
    pUVar42 = (UIAttributes *)UIAttributes__UIAttributes(&local_6f4,pMVar35);
    local_38 = 0;
    uStack_30 = 0x3ff0000000000000;
    uStack_28 = 0x3ff0000000000000;
    uStack_34 = 0;
    (pUVar42->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar42->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    (undefined4)((pUVar42->FillProportion).Value.X = 0);
    *(undefined4 *)((int)&(pUVar42->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar42->FillProportion).Value.Y = 1.0;
    pLVar65 = local_8;
    pUVar36 = local_3c;
    pDVar44 = (Data *)(uintptr_t)(UILayout__Data__Add((Data *)&local_b4,(UIWidget *)param_1));
    pDVar44 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar44,(UIWidget *)pLVar65));
    pDVar44 = (Data *)(uintptr_t)(UILayout__Data__Add(pDVar44,pUVar36));
    fVar64 = *pfVar43;
    fVar54 = pfVar43[1];
    pvVar55 = *(void **)&(pfVar43[2]);
    p_Var56 = *(_func___cdecl_Color_void_ptr *)&(pfVar43[3]);
    fVar57 = pfVar43[4];
    pMVar58 = (Material *)(uintptr_t)*(undefined4 *)&((pfVar43[5]));
    fVar59 = pfVar43[6];
    fVar60 = pfVar43[7];
    fVar61 = pfVar43[8];
    fVar62 = pfVar43[9];
    fVar63 = pfVar43[10];
    fVar66 = pfVar43[0xb];
    iStack_b14 = 0x5df7be;
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffff4f4,pUVar42);
    UVar3.Enabled.Getter.Callee = in_stack_fffff520;
*(uint32_t *)&auVar46 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff4f4) + 4)));
*(uint32_t *)&auVar45 = (uint32_t)((*(uint32_t *)((char *)&(in_stack_fffff4f4) + 32)));
    UVar3.Parent = (Manager *)(*(uint32_t*)&(in_stack_fffff4f4));
    UVar3.Tag.Data = (char *)(*(uint32_t*)&(auVar46));
    UVar3.Tag.Capacity = (*(uint32_t*)((char*)&(auVar46)+4));
    UVar3.Tag.Length = (*(uint32_t*)((char*)&(auVar46)+8));
    uVar48 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff4f4) + 16)),0);
    uVar49 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff4f4) + 16)),8);
    UVar3.Location.Getter.Callee = (void *)(int)uVar48;
    UVar3.Location.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
    UVar3.Location.Value.X = (int)uVar49;
    UVar3.Location.Value.Y = (int)((ulonglong)uVar49 >> 0x20);
    UVar3.Visible.Getter.Callee = (void *)(int)(*(uint64_t*)&(auVar45));
    UVar3.Visible.Getter.CallbackFunction =
         (_func___cdecl_bool_void_ptr *)(int)((ulonglong)(*(uint64_t*)&(auVar45)) >> 0x20);
    UVar3.Visible.Value = (bool)auVar45[8];
    (*(uint24_t *)((char *)&(UVar3.Visible) + 9)) = (*(uint24_t*)((char*)&(auVar45)+9));
    UVar3.Enabled.Getter.CallbackFunction = in_stack_fffff524;
    UVar3.Enabled.Value = (bool)in_stack_fffff528[0];
    (*(uint24_t *)((char *)&(UVar3.Enabled) + 9)) = (*(uint24_t*)((char*)&(in_stack_fffff528)+1));
    uVar48 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff528) + 4)),0);
    uVar49 = SUB168((*(uint32_t *)((char *)&(in_stack_fffff528) + 4)),8);
    UVar3.DesiredSize.Getter.Callee = (void *)(int)uVar48;
    UVar3.DesiredSize.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_int_G__void_ptr *)(int)((ulonglong)uVar48 >> 0x20);
    UVar3.DesiredSize.Value.X = (int)uVar49;
    UVar3.DesiredSize.Value.Y = (int)((ulonglong)uVar49 >> 0x20);
    UVar3.FillProportion.Getter.Callee = (void *)(int)(*(uint64_t *)((char *)&(in_stack_fffff528) + 20));
    UVar3.FillProportion.Getter.CallbackFunction =
         (_func___cdecl_Vec2_L_double_G__void_ptr *)(int)((ulonglong)(*(uint64_t *)((char *)&(in_stack_fffff528) + 20)) >> 0x20);
    UVar3.FillProportion.Value.X = in_stack_fffff544;
    UVar3.FillProportion.Value.Y  = *(double *)&(in_stack_fffff548);
    *(uint32_t *)&(UVar3.FillProportion.Value).Y = (uint32_t)(uintptr_t)in_stack_fffff54c;
(*(uint32_t *)((char *)&(UVar3.FillProportion.Value) + 0x10)) = (uint32_t)(uintptr_t)in_stack_fffff550;
    UVar3.HitTestShape.Getter.Callee = in_stack_fffff554;
    UVar3.HitTestShape.Getter.CallbackFunction = (Type (*)(void *))((_func___cdecl_Type_void_ptr *)in_stack_fffff558);
    UVar3.HitTestShape.Value = (int)in_stack_fffff55c;
    (*(uint32_t *)((char *)&(UVar3) + 108)) = (uint32_t)(uintptr_t)(in_stack_fffff560);
    LVar5.Margin.Getter.CallbackFunction = *(_func___cdecl_Vec2_L_int_G__void_ptr *)&(fVar54);
    LVar5.Margin.Getter.Callee = *(void **)&(fVar64);
    LVar5.Margin.Value.X = (int)pvVar55;
    LVar5.Margin.Value.Y = (int)p_Var56;
    LVar5.Padding.Getter.Callee = *(void **)&(fVar57);
    LVar5.Padding.Getter.CallbackFunction = (_func___cdecl_int_void_ptr *)pMVar58;
    LVar5.Padding.Value = (int)fVar59;
    LVar5.Background__HasBackground.Getter.Callee = *(void **)&(fVar60);
    LVar5.Background__HasBackground.Getter.CallbackFunction = *(_func___cdecl_bool_void_ptr *)&(fVar61);
    (*(uint32_t *)((char *)&(LVar5.Background__HasBackground) + 8)) = fVar62;
    (*(uint32_t *)((char *)&(LVar5) + 40)) = fVar63;
    (*(uint32_t *)((char *)&(LVar5) + 44)) = fVar66;
    pUVar36 = (UIWidget *)UIRowLayout__UIRowLayout(local_40,UVar3,LVar5,pDVar44);
  }
  if (bVar20) {
    UIAttributes___UIAttributes(&local_6f4);
  }
  if (bVar21) {
    Darray_L_util__SharedPtr_L_UIWidget_G___G___dtor(&local_b4);
  }
  if (bVar22) {
    UIAttributes___UIAttributes(&local_83c);
  }
  if (bVar23) {
    local_1f4._pad_0x0_0 = (int)&vftable_5;
    if ((void *)local_1f4._pad_0x4_1 != (void *)0x0) {
      port_op_delete((void *)local_1f4._pad_0x4_1);
      local_1f4._pad_0x4_1 = 0;
    }
  }
  if (bVar24) {
    LineGraph__Args___Args(local_49c);
  }
  if (bVar25) {
    if (local_150 != (void *)0x0) {
      port_op_delete(local_150);
      local_150 = (void *)0x0;
    }
    if (local_15c[0] != (void *)0x0) {
      port_op_delete(local_15c[0]);
      local_15c[0] = (void *)0x0;
    }
  }
  if (bVar26) {
    if (local_68.Data != (char *)0x0) {
      port_op_delete(local_68.Data);
      local_68.Data = (char *)0x0;
    }
  }
  if (bVar27) {
    if (local_168 != (void *)0x0) {
      port_op_delete(local_168);
      local_168 = (void *)0x0;
    }
    if (local_174[0] != (void *)0x0) {
      port_op_delete(local_174[0]);
      local_174[0] = (void *)0x0;
    }
  }
  if (bVar28) {
    if (local_74.Data != (char *)0x0) {
      port_op_delete(local_74.Data);
      local_74.Data = (char *)0x0;
    }
  }
  if (bVar29) {
    if (local_180 != (void *)0x0) {
      port_op_delete(local_180);
      local_180 = (void *)0x0;
    }
    if (local_18c[0] != (void *)0x0) {
      port_op_delete(local_18c[0]);
      local_18c[0] = (void *)0x0;
    }
  }
  if (bVar30) {
    if (local_80.Data != (char *)0x0) {
      port_op_delete(local_80.Data);
      local_80.Data = (char *)0x0;
    }
  }
  if (bVar31) {
    if (local_c0.Data != (char *)0x0) {
      port_op_delete(local_c0.Data);
      local_c0.Data = (char *)0x0;
    }
  }
  if (bVar32) {
    if (local_cc.Data != (char *)0x0) {
      port_op_delete(local_cc.Data);
      local_cc.Data = (char *)0x0;
    }
  }
  if ((bVar33) && (SStack_108.Data != (char *)0x0)) {
    port_op_delete(SStack_108.Data);
  }
  if ((bVar34) && (local_d8.Data != (char *)0x0)) {
    port_op_delete(local_d8.Data);
    local_d8.Data = (char *)0x0;
  }
  if ((bVar13) &&
     ((_func___cdecl_Vec2_L_int_G__void_ptr *)SStack_4c.Data != (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0)
     ) {
    port_op_delete(SStack_4c.Data);
  }
  if (bVar14) {
    UIAttributes___UIAttributes(&local_984);
  }
  if ((bVar15) &&
     (local_214._pad_0x0_0 = (int)&vftable_5,
     (void *)local_214._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_214._pad_0x4_1);
    local_214._pad_0x4_1 = 0;
  }
  if (bVar16) {
    LineGraph__Args___Args(local_5ac);
  }
  if (bVar17) {
    if (local_198 != (void *)0x0) {
      port_op_delete(local_198);
      local_198 = (void *)0x0;
    }
    if (local_1a4[0] != (void *)0x0) {
      port_op_delete(local_1a4[0]);
      local_1a4[0] = (void *)0x0;
    }
  }
  if ((bVar18) && (local_8c.Data != (char *)0x0)) {
    port_op_delete(local_8c.Data);
    local_8c.Data = (char *)0x0;
  }
  if (bVar19) {
    if (local_1b0 != (void *)0x0) {
      port_op_delete(local_1b0);
      local_1b0 = (void *)0x0;
    }
    if (local_1bc[0] != (void *)0x0) {
      port_op_delete(local_1bc[0]);
      local_1bc[0] = (void *)0x0;
    }
  }
  if (bVar7) {
    if (local_1c8 != (void *)0x0) {
      port_op_delete(local_1c8);
      local_1c8 = (void *)0x0;
    }
    if (local_1d4[0] != (void *)0x0) {
      port_op_delete(local_1d4[0]);
      local_1d4[0] = (void *)0x0;
    }
  }
  if ((bVar8) && (local_a4.Data != (char *)0x0)) {
    port_op_delete(local_a4.Data);
    local_a4.Data = (char *)0x0;
  }
  if ((bVar9) && (local_e4.Data != (char *)0x0)) {
    port_op_delete(local_e4.Data);
    local_e4.Data = (char *)0x0;
  }
  if ((bVar10) && (local_f0.Data != (char *)0x0)) {
    port_op_delete(local_f0.Data);
    local_f0.Data = (char *)0x0;
  }
  if ((bVar11) && (local_12c.Data != (char *)0x0)) {
    port_op_delete(local_12c.Data);
  }
  if ((bVar12) && (local_fc.Data != (char *)0x0)) {
    port_op_delete(local_fc.Data);
    local_fc.Data = (char *)0x0;
  }
  if ((local_120.Data != (char *)0x0) && (bVar6)) {
    port_op_delete(local_120.Data);
  }
  return pUVar36;
}

//==== 005dfcd0 GetInfoBoxes_005dfcd0 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   RadiatorModule__GetInfoBoxes(void)const  */

void __thiscall RadiatorModule__GetInfoBoxes(RadiatorModule *this)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  InfoBox *pIVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcStack_94;
  InfoBox IStack_74;
  void *apvStack_3c [3];
  void *pvStack_30;
  undefined **ppuStack_24;
  Str_L_char_G_ SStack_20;
  Str_L_char_G_ SStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_20,"InfoBox Radiator Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x5dfd3e;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,Icons__Radiator,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_RadiatorModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RadiatorModule__GetRadiatorInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)uVar6,0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_74.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Tooltip.Value.Data);
    IStack_74.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_74.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Info.Value.Data);
    IStack_74.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
    pvStack_30 = (void *)0x0;
  }
  if (apvStack_3c[0] != (void *)0x0) {
    port_op_delete(apvStack_3c[0]);
    apvStack_3c[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  util__Str_char___Str_char(&SStack_20,"InfoBox RadiatorHeat Tooltip");
  SStack_14.Data = (char *)0x0;
  SStack_14.Capacity = 0;
  SStack_14.Length = 0;
  pcStack_94 = (char *)0x5dfe63;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_3c,&SStack_20,&SStack_14);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  uVar5 = 0;
  uVar6 = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)&pcStack_94,pSVar2);
  pIVar3 = (InfoBox *)
           InfoBox__InfoBox(&IStack_74,Icons__Sun,this,(_func___cdecl_Str_L_char_G__void_ptr*)(util__DelegateFactory_class_RadiatorModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RadiatorModule__GetSampleHeatInfo_void_const__0),0,0,0,(void *)(uintptr_t)(uVar5),(_func___cdecl_Str_L_char_G__void_ptr *)(uintptr_t)uVar6,0,0,0,(Delegate_L_bool_G_){0},0);
  util__Darray_struct_InfoBox___Add(in_stack_00000004,pIVar3);
  if (IStack_74.Tooltip.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Tooltip.Value.Data);
    IStack_74.Tooltip.Value.Data = (char *)0x0;
  }
  if (IStack_74.Info.Value.Data != (char *)0x0) {
    port_op_delete(IStack_74.Info.Value.Data);
    IStack_74.Info.Value.Data = (char *)0x0;
  }
  if (pvStack_30 != (void *)0x0) {
    port_op_delete(pvStack_30);
    pvStack_30 = (void *)0x0;
  }
  if (apvStack_3c[0] != (void *)0x0) {
    port_op_delete(apvStack_3c[0]);
    apvStack_3c[0] = (void *)0x0;
  }
  if (SStack_14.Data != (char *)0x0) {
    port_op_delete(SStack_14.Data);
    SStack_14.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_20.Data);
  }
  pDVar4 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_24 = &vftable_127;
  if ((InfoBox *)SStack_20.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_20.Data,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005dff80 GenerateQuickDiagrams_005dff80 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual class util__Darray_L_structUIWidget_P_G_ __thiscall
   RadiatorModule__GenerateQuickDiagrams(class Manager *)const  */

Manager * __thiscall RadiatorModule__GenerateQuickDiagrams(RadiatorModule *this,Manager *param_1)

{
  ActorHandler *pAVar1;
  bool bVar2;
  UIWidget *pUVar3;
  GameManager *pGVar4;
  int iVar5;
  Manager *in_stack_00000008;
  RadiatorModule *local_8;
  
  local_8 = this;
  pUVar3 = (UIWidget *)(uintptr_t)(GenerateHeatTransferChart(this,in_stack_00000008));
  param_1->_pad_0x0_0 = 0;
  param_1->Parent = (GameManager *)0x0;
  (param_1->ActorStore).Pointer = (ActorHandler *)0x0;
  param_1[1]._pad_0x0_0 = 0;
  param_1->_pad_0x0_0 = (int)&vftable_2;
  param_1->Parent = (GameManager *)0x0;
  (param_1->ActorStore).Pointer = (ActorHandler *)0x0;
  param_1[1]._pad_0x0_0 = 1;
  pGVar4 = (GameManager *)(uintptr_t)(port_op_new(4));
  if (pGVar4 == (GameManager *)0x0) {
    pGVar4 = (GameManager *)0x0;
  }
  else {
    *(undefined4 *)pGVar4 = 0;
  }
  iVar5 = 0;
  param_1->Parent = pGVar4;
  if (0 < param_1[1]._pad_0x0_0) {
    do {
      *(undefined4 *)(&param_1->Parent->DebugDraw + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[1]._pad_0x0_0);
  }
  pAVar1 = (param_1->ActorStore).Pointer;
  local_8 = (RadiatorModule *)((int)&pAVar1->Parent + 1);
  util__Darray_L_util__Reflectable_P_G___SetSize((Darray_L_util__Reflectable_P_G_ *)param_1,(int *)&local_8);
  bVar2 = util__Darray_L_GraphicsResource__Type_G___CheckSize
                    ((Darray_L_GraphicsResource__Type_G_ *)param_1,(int)pAVar1);
  if (bVar2) {
    *(UIWidget **)((int)param_1->Parent + (int)(param_1->ActorStore).Pointer * 4 + -4) = pUVar3;
  }
  return param_1;
}

//==== 005e0030 StaticGetPropertyGetters_005e0030 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cdouble___thiscall_util__Reflectable___P__void_const_G__G_ __thiscall
   RadiatorModule__StaticGetPropertyGetters(void)const  */

void __thiscall RadiatorModule__StaticGetPropertyGetters(RadiatorModule *this)

{
  undefined8 stack0xffffffc0;
  undefined8 stack0xfffffffc;
  Str_L_char_G_ *pSVar1;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
  *pDVar2;
  Str_L_char_G_ *pSVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  Str_L_char_G_ *pSVar8;
  int iVar9;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cvoid____cdecl_P__void__G___G_ *in_stack_00000004;
  int iVar10;
  Maybe_L_int_G_ *pMVar11;
  int iStack_3c;
  undefined1 auStack_24 [8];
  int iStack_1c;
  undefined4 uStack_18;
  undefined8 uStack_14;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)(this);
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0096de54) &&
     (_Init_thread_header(&DAT_0096de54), DAT_0096de54 == -1)) {
    puVar5 = (undefined4 *)port_op_new(0xa4);
    if (puVar5 == (undefined4 *)0x0) {
      DAT_0095f38c = (undefined4)(uintptr_t)((Str_L_char_G_ *)0x0);
    }
    else {
      DAT_0095f38c = (undefined4)(uintptr_t)((Str_L_char_G_ *)(puVar5 + 1));
      *puVar5 = 10;
      iVar10 = 10;
      pSVar3 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f38c);
      do {
        pSVar3->Data = (char *)0x0;
        pSVar3->Capacity = 0;
        pSVar3->Length = 0;
        pSVar3[1].Data = (char *)0x0;
        iVar10 = iVar10 + -1;
        pSVar3 = (Str_L_char_G_ *)&pSVar3[1].Capacity;
      } while (iVar10 != 0);
    }
    iVar10 = 0;
    if (0 < DAT_0095f394) {
      (*(uint32_t*)&(auStack_24)) = (uint32_t)(uintptr_t)((char *)0x0);
      iVar9 = 0;
      (*(uint32_t*)((char*)&(auStack_24)+4)) = (uint32_t)(uintptr_t)((void *)0x0);
      iStack_1c = 0;
      uStack_18 = 0;
      do {
        pSVar3 = (Str_L_char_G_ *)((int)(int)(uintptr_t)(DAT_0095f38c) + iVar9);
        util__Str_char___operator__o8(pSVar3,(Str_L_char_G_ *)auStack_24);
        iVar10 = iVar10 + 1;
        pSVar3[1].Data = (char *)0x0;
        iVar9 = iVar9 + 0x10;
      } while (iVar10 < DAT_0095f394);
    }
    atexit(FUN_008f23e0);
    iStack_3c = 0x5e040d;
    _Init_thread_footer(&DAT_0096de54);
  }
  if (DAT_0095f390 == 0) {
    pDVar2 = (Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
              *)Module__StaticGetPropertyGetters((Module *)(*(uint32_t*)((char*)&(uStack_14)+4)));
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const______operator((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                 *)&PTR__vftable__0095f388,pDVar2);
    util__Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const_______Darray_struct_util__tuple2_class_util__Str_char__double____thiscall_util__Reflectable_____void_const((Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble____thiscall_util__Reflectable___P__void_const__G___G_
                *)auStack_24);
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((RadiatorModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetBackTaper_radians");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005e21e0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((RadiatorModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetFrontTaper_radians");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005e21e0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((RadiatorModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetMaxTemperatureAllowed_K");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005e21e0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((RadiatorModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetHeight_m");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005e21e0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((RadiatorModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetWidth_m");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005e21e0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
    pSVar8 = (Str_L_char_G_ *)&stack0xffffffc0;
    (*(uint32_t*)&(uStack_14)) = 0;
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((RadiatorModule *)((uint)(*(uint32_t*)((char*)&(uStack_14)+4)) & 0xffffff00));
    pMVar11 = (Maybe_L_int_G_ *)&uStack_14;
    iVar10 = 3;
    pSVar3 = (Str_L_char_G_ *)
             util__Str_char___Str_char((Str_L_char_G_ *)(auStack_24 + 4),"GetTotalSurfaceArea_m2");
    util__Str_char___SubStr(pSVar3,pSVar8,iVar10,pMVar11);
    FUN_005e21e0();
    if ((void *)(*(uint32_t*)((char*)&(auStack_24)+4)) != (void *)0x0) {
      port_op_delete((void *)(*(uint32_t*)((char*)&(auStack_24)+4)));
    }
  }
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&PTR_vftable_0095f33c);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(int *)(in_stack_00000004 + 0xc) = DAT_0095f394;
  (*(uint32_t*)((char*)&(uStack_14)+4)) = (uint32_t)(uintptr_t)((RadiatorModule *)(**(code **)(uintptr_t)(PTR__vftable__0095f388 + 0xc))());
  util__Darray_struct_util__tuple2_class_util__Str_char__void____cdecl___void______SetSize
            (in_stack_00000004,(int *)((int)&uStack_14 + 4));
  uVar7 = *(uint *)(in_stack_00000004 + 0xc);
  uVar6 = -(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 0x10);
  puVar4 = (uint *)port_op_new(-(uint)(0xfffffffb < uVar6) | uVar6 + 4);
  if (puVar4 == (uint *)0x0) {
    pSVar3 = (Str_L_char_G_ *)0x0;
  }
  else {
    *puVar4 = uVar7;
    pSVar3 = (Str_L_char_G_ *)(puVar4 + 1);
    pSVar8 = pSVar3;
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      pSVar8->Data = (char *)0x0;
      pSVar8->Capacity = 0;
      pSVar8->Length = 0;
      pSVar8[1].Data = (char *)0x0;
      pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
    }
  }
  *(Str_L_char_G_ **)(in_stack_00000004 + 4) = pSVar3;
  pSVar8 = (Str_L_char_G_ *)(uintptr_t)(DAT_0095f38c);
  if (DAT_0095f38c != (Str_L_char_G_ *)(DAT_0095f390 * 0x10 + (int)DAT_0095f38c)) {
    do {
      util__Str_char___operator__o8(pSVar3,pSVar8);
      pSVar1 = pSVar8 + 1;
      pSVar8 = (Str_L_char_G_ *)&pSVar8[1].Capacity;
      pSVar3[1].Data = pSVar1->Data;
      pSVar3 = (Str_L_char_G_ *)&pSVar3[1].Capacity;
    } while (pSVar8 != (Str_L_char_G_ *)(DAT_0095f390 * 0x10 + (int)DAT_0095f38c));
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005e0420 BuildModels_005e0420 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall RadiatorModule__BuildModels(void) */

void __thiscall RadiatorModule__BuildModels(RadiatorModule *this)

{
  undefined8 stack0xfffffffc;
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  Material *pMVar3;
  undefined1 auVar4 [12];
  Vec4_L_double_G_ VVar5;
  Vec4_L_double_G_ VVar6;
  Quaternion_L_double_G_ QVar7;
  Quaternion_L_double_G_ QVar8;
  Vec4_L_double_G_ VVar9;
  Vec4_L_double_G_ VVar10;
  Maybe_L_int_G_ MVar11;
  undefined1 auVar12 [16];
  Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *pDVar13;
  RadiatorModule *pRVar14;
  bool bVar15;
  CustomTexture *this_00;
  int *piVar16;
  ReferenceControllerRegistry *pRVar17;
  GameModel *pGVar18;
  int iVar19;
  undefined1 (*pauVar20) [16];
  double *pdVar21;
  undefined4 uVar22;
  VertexBufferObject *pVVar23;
  Material *pMVar24;
  ReferenceController *pRVar25;
  Vec3_L_double_G_ *pVVar26;
  int iVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar35;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 *puVar37;
  undefined4 uVar38;
  code *pcVar39;
  int *piVar40;
  undefined4 uVar41;
  Matrix3x3_L_double_G_ *pMVar42;
  GameModel *pGVar43;
  undefined4 uStack_174;
  undefined4 uStack_170;
  void *pvStack_140;
  Vec3_L_double_G_ VStack_134;
  double dStack_11c;
  undefined8 uStack_114;
  Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *pDStack_10c;
  ReferenceController *pRStack_108;
  RadiatorModule *pRStack_104;
  double dStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined8 uStack_e8;
  GameModel *pGStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined1 auStack_c8 [8];
  ulonglong uStack_c0;
  Matrix3x3_L_double_G_ MStack_b8;
  Vec3_L_double_G_ VStack_70;
  undefined1 auStack_58 [16];
  double dStack_48;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  Vec3_L_double_G_ VStack_30;
  undefined8 uStack_18;
  TransformStack TStack_e;
  TransformStack TStack_d;
  GameModel *pGStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_18 = 0;
  pRStack_104 = this;
  this_00 = (CustomTexture *)port_op_new(0x3c);
  if (this_00 == (CustomTexture *)0x0) {
    piVar16 = (int *)0x0;
  }
  else {
    piVar16 = (int *)CustomTexture__CustomTexture(this_00);
    if (piVar16 != (int *)0x0) goto LAB_005e0483;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005e0483:
  piVar40 = piVar16;
  pRVar17 = util__ReferenceControllerRegistry__Get();
  (*(uint32_t*)((char*)&(uStack_18)+4)) = (uint32_t)(uintptr_t)(util__ReferenceControllerRegistry__Register(pRVar17,piVar40));
  (*(uint32_t*)&(uStack_18)) = (uint32_t)(uintptr_t)(piVar16);
  if ((*(uint32_t*)((char*)&(uStack_18)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_18)+4)))));
  }
  GetPanelDimensions_m(this,&VStack_30,0);
  uVar41 = 0;
  pcVar39 = (long long int (*)())(GetRadiatorShader);
  auStack_40[0] = 0;
  uStack_34 = 0;
  dVar28 = (double)this[1]._pad_0x0_0 * VStack_30.Z;
  VStack_30.Y = (double)((ulonglong)(*(uint24_t *)((char *)&(VStack_30.Y) + 5)) << 0x28);
  VStack_30.Z = (double)(((ulonglong)VStack_30.Z >> 8 & 0xffffff) << 8);
  uStack_3c = 1;
  uVar22 = SUB84(VStack_30.X,0);
  uVar38 = (undefined4)((ulonglong)VStack_30.X >> 0x20);
  puVar37 = auStack_40;
  uStack_38 = 1;
  VStack_30.X = 9.88131291682493e-324;
  piVar16 = (int *)uStack_18;
  pRVar25 = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_18)+4)));
  if ((*(uint32_t*)((char*)&(uStack_18)+4)) != (ReferenceController *)0x0) {
    util__ReferenceController__AddWeakReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_18)+4)))));
  }
  ArmorTextureHandler__BuildNormalsTexture_L_class_GeneralModuleShader_P____cdecl_P__void__G_
            (piVar16,pRVar25,puVar37,uVar22,uVar38,dVar28,pcVar39,uVar41);
  iStack_dc = 0;
  if (0 < this[1]._pad_0x0_0) {
    dVar28 = 0.39269908169872414;
    libm_sse2_sin_precise(0.0);
    uVar29 = 0x3fd921fb54442d18;
    libm_sse2_cos_precise(0.0);
    pDStack_10c = (Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)
                  &(this->RadiatorModuleMemoizationHandlerInstance).ResetFunctions.Size;
    do {
      uVar22 = 0;
      pGVar18 = (GameModel *)port_op_new(0xb8);
      if (pGVar18 == (GameModel *)0x0) {
        pGStack_e0 = (GameModel *)0x0;
LAB_005e05ea:
        pGVar18 = pGStack_e0;
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                        ,0xd4,"NewPointer",(char *)0x0);
        DebugBreak();
      }
      else {
        pMVar3 = *(Material **)((int)&this->ArmorThickness_m + 4);
        pMVar24 = pMVar3;
        if ((Material *)this[1]._pad_0x18_6 != (Material *)0x0) {
          pMVar24 = (Material *)this[1]._pad_0x18_6;
        }
        pGVar18 = (GameModel *)
                  GameModel__GameModel
                            (pGVar18,pMVar3,pMVar24,
                             ({ __typeof__(((ulonglong)CONCAT31((int3)((uint)uVar22 >> 8),1) << 0x20)) _t_ = ((ulonglong)CONCAT31((int3)((uint)uVar22 >> 8),1) << 0x20); *(Maybe_L_int_G_ *)&_t_; }))
        ;
        pGStack_e0 = pGVar18;
        if (pGVar18 == (GameModel *)0x0) goto LAB_005e05ea;
      }
      pRVar17 = util__ReferenceControllerRegistry__Get();
      pRStack_108 = util__ReferenceControllerRegistry__Register(pRVar17,pGVar18);
      if (pRStack_108 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRStack_108);
      }
      GetPanelDimensions_m(this,&VStack_134,iStack_dc);
      dStack_100 = VStack_134.Z;
      (*(uint64_t*)((char*)&(auVar2)+8)) = VStack_134.Y;
      (*(uint64_t*)&(auVar2)) = VStack_134.X;
      dStack_48 = VStack_134.Z / *(double *)&___xmm_408f400000000000408f400000000000;
      *(uint32_t *)&auStack_58 = divpd(auVar2,___xmm_408f400000000000408f400000000000);
      _auStack_c8 = ZEXT816(0);
      piVar16 = (int *)util__GetBinaryBox3_double_0();
      *(uint32_t *)&auVar34 = ZEXT816(0);
      _auStack_c8 = (undefined4)(uintptr_t) auVar34;
      iVar19 = (**(code **)(uintptr_t)(*piVar16 + 0xc))();
      util__Darray_struct_util__Vec3_double_____Darray_struct_util__Vec3_double
                ((Darray_L_struct_util__Vec3_L_double_G___G_ *)auStack_c8,iVar19);
      pGStack_c = (GameModel *)0x0;
      iVar19 = (**(code **)(uintptr_t)(*piVar16 + 0xc))();
      if ((int)pGStack_c < iVar19) {
        do {
          uVar35 = (*(uint64_t*)((char*)&(auVar34)+8));
          pauVar20 = (undefined1 (*) [16])(**(code **)*piVar16)(&pGStack_c);
          *(uint32_t *)&auVar2 = (uint32_t)(uintptr_t)(*pauVar20);
          iVar19 = (int)uStack_c0;
          (*(uint64_t*)((char*)&(auVar4)+4)) = uVar35;
          (*(uint32_t*)&(auVar4)) = (*(uint32_t*)((char*)&(auVar2)+4));
          (*(uint64_t*)&(auVar33)) = (*(uint64_t*)&(auVar4)) << 0x20;
          (*(uint32_t*)((char*)&(auVar33)+8)) = (*(uint32_t*)((char*)&(auVar2)+8));
          (*(uint32_t *)((char *)&(auVar33) + 12)) = (*(uint32_t *)((char *)&(auVar2) + 12));
          uStack_e8 = (double)CONCAT44((int)uStack_c0 + 1,(undefined4)uStack_e8);
          VStack_30.Y = (double)(*(uint64_t*)((char*)&(auStack_58)+8)) * 0.5 * ((*(uint64_t*)((char*)&(auVar33)+8)) * 2.0 - 1.0);
          (*(uint64_t*)&(auVar34)) = (double)(*(uint64_t*)&(auStack_58)) * 0.5;
          (*(uint64_t*)((char*)&(auVar34)+8)) = 0;
          uStack_d8 = dStack_48 * 0.5 * (*(double *)pauVar20[1] * 2.0 - 1.0);
          VStack_30.X = ((*(uint64_t*)&(auVar2)) * 2.0 - 1.0) * (*(uint64_t*)&(auVar34));
          util__Darray_struct_util__Vec3_double_____SetSize
                    ((Darray_L_struct_util__Vec3_L_double_G___G_ *)auStack_c8,(int *)((int)&uStack_e8 + 4));
          bVar15 = util__Darray_struct_util__Vec3_double_____CheckSize
                             ((Darray_L_struct_util__Vec3_L_double_G___G_ *)auStack_c8,iVar19);
          if (bVar15) {
            puVar1 = (undefined4 *)((*(uint32_t*)((char*)&(auStack_c8)+4)) + -0x18 + (int)uStack_c0 * 0x18);
            *puVar1 = VStack_30.X;
            puVar1[1] = VStack_30.Y;
            puVar1[2] = VStack_30.Y;
            puVar1[3] = VStack_30.Z;
            (*(uint64_t*)((char*)&(auVar34)+8)) = 0;
            (*(uint64_t*)&(auVar34)) = uStack_d8;
            *(double *)((*(uint32_t*)((char*)&(auStack_c8)+4)) + -8 + (int)uStack_c0 * 0x18) = uStack_d8;
          }
          pGStack_c = (GameModel *)((int)&(pGStack_c->VertexObject)._pad_0x0_0 + 1);
          iVar19 = (**(code **)(uintptr_t)(*piVar16 + 0xc))();
        } while ((int)pGStack_c < iVar19);
      }
      if (pvStack_140 != (void *)0x0) {
        port_op_delete(pvStack_140);
      }
      pRVar14 = pRStack_104;
      iVar19 = 4;
      pvStack_140 = (void *)0x0;
      pGStack_c = (GameModel *)0x4;
      do {
        uStack_e8 = (double)CONCAT44(iVar19,(undefined4)uStack_e8);
        pdVar21 = (double *)(**(code **)(*(uint32_t*)&(auStack_c8)))((int)&uStack_e8 + 4);
        uStack_114 = util__Tan((double *)
                               (&pRVar14[1]._pad_0x8_2 +
                               ((*pdVar21 <= 0.0 && *pdVar21 != 0.0) ^ 1) * 2));
        uStack_114 = uStack_114 * *(double *)&pRVar14->Panels;
        iVar27 = (int)&uStack_e8 + 4;
        uStack_e8 = (double)CONCAT44(iVar19,(undefined4)uStack_e8);
        uStack_f8 = (double)CONCAT44(iVar19,(undefined4)uStack_f8);
        uVar22 = (**(code **)(*(uint32_t*)&(auStack_c8)))(iVar27);
        uStack_d8 = (double)CONCAT44(uVar22,(undefined4)uStack_d8);
        pdVar21 = (double *)(**(code **)(*(uint32_t*)&(auStack_c8)))((int)&uStack_f8 + 4);
        dStack_f0 = *pdVar21;
        if (NAN(dStack_f0) == (dStack_f0 == 0.0)) {
          iVar27 = 0x5e089d;
          dVar30 = util__Abs(pdVar21);
          dVar30 = dStack_f0 / dVar30;
          dStack_f0 = dVar30;
        }
        else {
          dVar30 = 0.0;
        }
        pGVar18 = pGStack_e0;
        iVar19 = iVar19 + 1;
        pGStack_c = (GameModel *)((int)&pGStack_c[-1].PaintComposition + 3);
        *(double *)(*(uint32_t*)((char*)&(uStack_d8)+4)) = *(double *)(*(uint32_t*)((char*)&(uStack_d8)+4)) - (uStack_114 / 1000.0) * dVar30;
      } while (pGStack_c != (GameModel *)0x0);
      pVVar23 = GameModel__GetVertexObject(pGStack_e0);
      (*(uint24_t*)((char*)&(MVar11)+5)) = (int3)((uint)iVar27 >> 8);
      MVar11.IsValidData = true;
      MVar11.Data = 1;
      FillCustomRectangularPrism((Darray_L_struct_util__Vec3_L_double_G___G_ *)auStack_c8,MVar11,pVVar23);
      pMVar42 = &MStack_b8;
      MStack_b8.Data[4] = 1.0 / (double)pRVar14[1]._pad_0x0_0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[0]) + 0)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[0]) + 4)) = 0x3ff00000;
      (*(undefined4 *)((char *)&(MStack_b8.Data[1]) + 0)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[1]) + 4)) = 0;
      MStack_b8.Data[7] = (double)iStack_dc * MStack_b8.Data[4];
      (*(undefined4 *)((char *)&(MStack_b8.Data[2]) + 0)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[2]) + 4)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[3]) + 0)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[3]) + 4)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[5]) + 0)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[5]) + 4)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[6]) + 0)) = 0;
      (*(undefined4 *)((char *)&(MStack_b8.Data[6]) + 4)) = 0;
      MStack_b8.Data[8] = 1.0;
      pVVar23 = GameModel__GetVertexObject(pGVar18);
      VertexBufferObject__TransformTextureCoordinates(pVVar23,pMVar42);
      GameModel__SetTexture(pGVar18,(SharedPtr_L_struct_CustomTexture_G_ *)&uStack_18);
      iVar19 = 0;
      uStack_114 = VStack_134.X / 6.0;
      dVar30 = VStack_134.Y * 0.5;
      uStack_f8 = 0.05;
      if (0.05 <= dVar30) {
        uStack_f8 = dVar30;
      }
      dStack_f0 = VStack_134.X * 0.5 - VStack_134.X * 0.1 * 0.5;
      dStack_100 = dStack_100 * -0.5;
      uStack_d8 = -dVar30 / 1000.0;
      uStack_f8 = uStack_f8 / 1000.0;
      uStack_e8 = (VStack_134.X * 0.1) / 1000.0;
      do {
        iVar27 = 0;
        do {
          Graphics__TransformStack__TransformStack(&TStack_d,Style__Default);
          dVar30 = dStack_f0;
          if (iVar19 == 0) {
            dVar30 = uStack_114;
          }
          VVar9.Y = SUB84(uStack_d8,0);
          VVar9.X = ((double)(int)((uint)(iVar27 == 0) * 2 + -1) * dVar30) / 1000.0;
          VVar9.Z = (int)((ulonglong)uStack_d8 >> 0x20);
          VVar9.Z = SUB84(dStack_100 / 1000.0,0);
          VVar9.W = (int)((ulonglong)(dStack_100 / 1000.0) >> 0x20);
          Graphics__Translate(VVar9);
          uVar22 = SUB84(dVar28 * 0.0,0);
          uVar38 = (undefined4)((ulonglong)(dVar28 * 0.0) >> 0x20);
          uVar41 = (undefined4)uVar29;
          QVar7.Y = uVar22;
          QVar7.X = dVar28;
          QVar7.Z = uVar38;
          QVar7.Z = uVar22;
          QVar7.W = uVar38;
          QVar7.W = uVar41;
          (*(uint32_t *)((char *)&(QVar7.W) + 4)) = (int)((ulonglong)uVar29 >> 0x20);
          Graphics__Rotate(QVar7);
          pVVar23 = GameModel__GetVertexObject(pGStack_e0);
          uVar22 = (undefined4)((ulonglong)uStack_f8 >> 0x20);
          VVar5.Y = SUB84(uStack_f8,0);
          VVar5.X = uStack_e8;
          VVar5.Z = uVar22;
          VVar5.Z = SUB84(uStack_f8,0);
          VVar5.W = uVar22;
          FillRectangularPrism
                    (VVar5,({ __typeof__(((ulonglong)CONCAT31((int3)((uint)uVar41 >> 8),1) << 0x20)) _t_ = ((ulonglong)CONCAT31((int3)((uint)uVar41 >> 8),1) << 0x20); *(Maybe_L_int_G_ *)&_t_; }),
                     pVVar23);
          Graphics__TransformStack___TransformStack(&TStack_d);
          iVar27 = iVar27 + 1;
        } while (iVar27 < 2);
        iVar19 = iVar19 + 1;
      } while (iVar19 < 2);
      iVar19 = *(int *)(pDStack_10c + 8);
      (*(uint32_t*)((char*)&(uStack_d8)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)(iVar19 + 1));
      util__Darray_class_util__SharedPtr_struct_GameModel_____SetSize
                (pDStack_10c,(int *)((int)&uStack_d8 + 4));
      pDVar13 = pDStack_10c;
      bVar15 = util__Darray_class_util__SharedPtr_struct_GameModel_____CheckSize(pDStack_10c,iVar19)
      ;
      this = pRStack_104;
      if (bVar15) {
        iVar19 = *(int *)(pDVar13 + 4);
        iVar27 = *(int *)(pDVar13 + 8);
        pGVar18 = *(GameModel **)(iVar19 + -8 + iVar27 * 8);
        (*(uint32_t*)((char*)&(uStack_d8)+4)) = (uint32_t)(uintptr_t)(*(ReferenceController **)(iVar19 + -4 + iVar27 * 8));
        *(GameModel **)(iVar19 + -8 + iVar27 * 8) = pGStack_e0;
        *(ReferenceController **)(iVar19 + -4 + iVar27 * 8) = pRStack_108;
        if (pRStack_108 != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference(pRStack_108);
        }
        if (((*(uint32_t*)((char*)&(uStack_d8)+4)) != (ReferenceController *)0x0) &&
           (bVar15 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_d8)+4))))), bVar15)) {
          if (pGVar18 != (GameModel *)0x0) {
            GameModel___scalar_deleting_destructor(pGVar18,1);
          }
          pRVar17 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pGVar18);
        }
      }
      uVar22 = 0;
      pGVar18 = (GameModel *)port_op_new(0xb8);
      if (pGVar18 == (GameModel *)0x0) {
        pGStack_c = (GameModel *)0x0;
LAB_005e0c35:
        pGVar18 = pGStack_c;
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl"
                        ,0xd4,"NewPointer",(char *)0x0);
        DebugBreak();
      }
      else {
        pMVar3 = *(Material **)((int)&this->ArmorThickness_m + 4);
        pMVar24 = pMVar3;
        if ((Material *)this[1]._pad_0x18_6 != (Material *)0x0) {
          pMVar24 = (Material *)this[1]._pad_0x18_6;
        }
        pGVar18 = (GameModel *)
                  GameModel__GameModel
                            (pGVar18,pMVar3,pMVar24,
                             ({ __typeof__(((ulonglong)CONCAT31((int3)((uint)uVar22 >> 8),1) << 0x20)) _t_ = ((ulonglong)CONCAT31((int3)((uint)uVar22 >> 8),1) << 0x20); *(Maybe_L_int_G_ *)&_t_; }))
        ;
        pGStack_c = pGVar18;
        if (pGVar18 == (GameModel *)0x0) goto LAB_005e0c35;
      }
      pRVar17 = util__ReferenceControllerRegistry__Get();
      pRVar25 = util__ReferenceControllerRegistry__Register(pRVar17,pGVar18);
      uStack_e8 = (double)CONCAT44(pRVar25,(undefined4)uStack_e8);
      if (pRVar25 != (ReferenceController *)0x0) {
        util__ReferenceController__AddStrongReference(pRVar25);
      }
      uStack_114 = 0.05;
      if (0.05 <= VStack_134.Y) {
        uStack_114 = VStack_134.Y;
      }
      (*(uint32_t*)((char*)&(uStack_d8)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)(this[1]._pad_0x0_0 + -1));
      iVar19 = 0;
      pVVar26 = &VStack_70;
      if ((ReferenceController *)iStack_dc == (*(uint32_t*)((char*)&(uStack_d8)+4))) {
        pVVar26 = &VStack_30;
      }
      dVar30 = uStack_114 + VStack_134.X;
      uStack_f8 = (double)CONCAT44(pVVar26,(undefined4)uStack_f8);
      do {
        dStack_11c = util__Tan((double *)(&this[1]._pad_0x8_2 + (uint)(iVar19 != 1) * 2));
        dStack_11c = dStack_11c * *(double *)&this->Panels;
        if (iVar19 == 1) {
          dStack_d0 = *(double *)&this[1]._pad_0x8_2;
        }
        else {
          dStack_d0 = *(double *)&this[1]._pad_0x10_4;
        }
        VStack_70.Z = util__Cos(&dStack_d0);
        VStack_70.Z = VStack_134.Z / VStack_70.Z;
        dStack_f0 = VStack_70.Z * 0.5;
        VStack_70.X = uStack_114;
        VStack_70.Y = uStack_114;
        dStack_100 = (double)(int)((uint)(iVar19 == 0) * 2 + -1);
        VStack_30.X = uStack_114;
        VStack_30.Y = uStack_114;
        VStack_30.Z = dStack_f0;
        Graphics__TransformStack__TransformStack(&TStack_e,Style__Default);
      { Vec3_L_double_G_ _t; _t.X = ((dVar30 - dStack_11c) * 0.5 * dStack_100) / 1000.0; _t.Y = 0.0; _t.Z = 0.0; Graphics_Translate(_t); }


        dVar31 = -(dStack_100 * dStack_d0) * 0.5;
        dStack_100 = dVar31;
        libm_sse2_sin_precise(0.0);
        dVar32 = dVar31 * 0.0;
        dVar36 = dStack_100;
        dStack_11c = dVar31;
        libm_sse2_cos_precise(0.0);
        uStack_174 = SUB84(dVar32,0);
        uStack_170 = (undefined4)((ulonglong)dVar32 >> 0x20);
        QVar8.Y = (undefined4)uStack_114;
        QVar8.X = dVar32;
        QVar8.Z = (*(uint32_t*)((char*)&(uStack_114)+4));
        QVar8.Z = uStack_174;
        QVar8.W = uStack_170;
        QVar8.W = SUB84(dVar36,0);
        (*(uint32_t *)((char *)&(QVar8.W) + 4)) = (int)((ulonglong)dVar36 >> 0x20);
        Graphics__Rotate(QVar8);
        if ((ReferenceController *)iStack_dc == (*(uint32_t*)((char*)&(uStack_d8)+4))) {
          dVar36 = dStack_f0 * -0.5;
        }
        else {
          dVar36 = 0.0;
        }
        uVar22 = SUB84(dVar36 / 1000.0,0);
        VVar10.Z = uVar22;
        VVar10.X = 0.0;
        VVar10.Y = 0.0;
        VVar10.W = (int)((ulonglong)(dVar36 / 1000.0) >> 0x20);
        Graphics__Translate(VVar10);
        pVVar23 = GameModel__GetVertexObject(pGStack_c);
        VVar6.Y = SUB84(*(double *)((int)(*(uint32_t*)((char*)&(uStack_f8)+4)) + 8) / 1000.0,0);
        VVar6.X = *(double *)(*(uint32_t*)((char*)&(uStack_f8)+4)) / 1000.0;
        VVar6.Z = (int)((ulonglong)(*(double *)((int)(*(uint32_t*)((char*)&(uStack_f8)+4)) + 8) / 1000.0) >> 0x20);
        VVar6.Z = SUB84(*(double *)((int)(*(uint32_t*)((char*)&(uStack_f8)+4)) + 0x10) / 1000.0,0);
        VVar6.W =
             (int)((ulonglong)(*(double *)((int)(*(uint32_t*)((char*)&(uStack_f8)+4)) + 0x10) / 1000.0) >> 0x20);
        FillRectangularPrism
                  (VVar6,({ __typeof__(((ulonglong)CONCAT31((int3)((uint)uVar22 >> 8),1) << 0x20)) _t_ = ((ulonglong)CONCAT31((int3)((uint)uVar22 >> 8),1) << 0x20); *(Maybe_L_int_G_ *)&_t_; }),
                   pVVar23);
        Graphics__TransformStack___TransformStack(&TStack_e);
        iVar19 = iVar19 + 1;
      } while (iVar19 < 2);
      iVar19 = *(int *)&(this->GetTotalThickness_m_MemoizedValue).Data;
      uStack_d8 = (double)CONCAT44(iVar19 + 1,(undefined4)uStack_d8);
      util__Darray_class_util__SharedPtr_struct_GameModel_____SetSize
                ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)
                 &(this->RadiatorModuleMemoizationHandlerInstance).ResetFunctions.Size,
                 (int *)((int)&uStack_d8 + 4));
      bVar15 = util__Darray_class_util__SharedPtr_struct_GameModel_____CheckSize
                         ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)
                          &(this->RadiatorModuleMemoizationHandlerInstance).ResetFunctions.Size,
                          iVar19);
      pGVar18 = pGStack_c;
      if (bVar15) {
        iVar19 = *(int *)&(this->GetTotalThickness_m_MemoizedValue).Data;
        iVar27 = (this->RadiatorModuleMemoizationHandlerInstance).ResetFunctions.Capacity;
        uStack_f8 = (double)CONCAT44(*(undefined4 *)(iVar27 + -8 + iVar19 * 8),(undefined4)uStack_f8
                                    );
        uStack_d8 = (double)CONCAT44(*(undefined4 *)(iVar27 + -4 + iVar19 * 8),(undefined4)uStack_d8
                                    );
        *(GameModel **)(iVar27 + -8 + iVar19 * 8) = pGStack_c;
        *(ReferenceController **)(iVar27 + -4 + iVar19 * 8) = (ReferenceController *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_e8)+4)));
        if ((*(uint32_t*)((char*)&(uStack_e8)+4)) != (ReferenceController *)0x0) {
          util__ReferenceController__AddStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_e8)+4)))));
        }
        if (((*(uint32_t*)((char*)&(uStack_d8)+4)) != (ReferenceController *)0x0) &&
           (bVar15 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_d8)+4))))), bVar15)) {
          if ((*(uint32_t*)((char*)&(uStack_f8)+4)) != (GameModel *)0x0) {
            GameModel___scalar_deleting_destructor((GameModel*)((GameModel*)((*(uint32_t*)((char*)&(uStack_f8)+4)))),1);
          }
          pGVar43 = (GameModel *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_f8)+4)));
          pRVar17 = util__ReferenceControllerRegistry__Get();
          util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pGVar43);
        }
      }
      if (((*(uint32_t*)((char*)&(uStack_e8)+4)) != (ReferenceController *)0x0) &&
         (bVar15 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_e8)+4))))), bVar15)) {
        if (pGVar18 != (GameModel *)0x0) {
          GameModel___scalar_deleting_destructor(pGVar18,1);
        }
        pRVar17 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pGVar18);
      }
      *(uint32_t *)&auVar2 = _auStack_c8;
      uVar22 = (*(uint32_t*)((char*)&(auStack_c8)+4));
      (*(uint32_t*)&(auStack_c8)) = (uint32_t)(uintptr_t)(&vftable_17);
      *(uint32_t *)&auVar34 = _auStack_c8;
      uStack_c0 = (*(uint64_t*)((char*)&(auVar2)+8));
      if ((void *)uVar22 != (void *)0x0) {
        _auStack_c8 = (undefined4)(uintptr_t) auVar34;
        port_op_delete((void *)uVar22);
      }
      (*(uint64_t*)((char*)&(auVar12)+8)) = 0;
      (*(uint64_t*)&(auVar12)) = uStack_c0;
      _auStack_c8 = (*(uint32_t *)cde_shl16(auVar12, 0x40));
      (*(uint32_t*)&(auStack_c8)) = (uint32_t)(uintptr_t)(&vftable);
      if ((pRStack_108 != (ReferenceController *)0x0) &&
         (bVar15 = util__ReferenceController__ReleaseStrongReference(pRStack_108),
         pGVar18 = pGStack_e0, bVar15)) {
        if (pGStack_e0 != (GameModel *)0x0) {
          GameModel___scalar_deleting_destructor(pGStack_e0,1);
        }
        pRVar17 = util__ReferenceControllerRegistry__Get();
        util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,pGVar18);
      }
      iStack_dc = iStack_dc + 1;
    } while (iStack_dc < this[1]._pad_0x0_0);
  }
  if (((*(uint32_t*)((char*)&(uStack_18)+4)) != (ReferenceController *)0x0) &&
     (bVar15 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(uStack_18)+4))))), bVar15)) {
    if ((int *)uStack_18 != (int *)0x0) {
      (**(code **)(*(int *)uStack_18 + 0x10))(1);
    }
    piVar16 = (int *)uStack_18;
    pRVar17 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar17,piVar16);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005e1090 RenderInitialState_005e1090 ====

/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  RadiatorModule__RenderInitialState(double,class CameraManager
   *,class util__Darray_L_classutil__SharedPtr_L_classArmorTextureHandler_G__G_ const &,double,struct
   util__Vec3_L_double_G_)const  */

void 
RadiatorModule__RenderInitialState
          (RadiatorModule *this,double param_1,CameraManager *param_2,
          Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *param_3,double param_4,Vec3_L_double_G_ param_5
          )

{
  Material *this_00;
  double dVar1;
  undefined1 local_14 [8];
  double local_c;
  
  local_c = param_1 / 5.0;
  dVar1 = util__Floor(&local_c);
  dVar1 = param_1 - dVar1 * 5.0;
  if ((5.0 <= dVar1) || ((dVar1 < 0.0 && (dVar1 = dVar1 + 5.0, dVar1 == 5.0)))) {
    dVar1 = 0.0;
  }
  param_1 = (dVar1 * 6.283185307179586) / 5.0;
  dVar1 = util__Cos(&param_1);
  local_c = (dVar1 + 1.0) * 0.5;
  dVar1 = param_4;
  if (param_4 <= 0.0) {
    this_00 = (Material *)this[1]._pad_0x18_6;
    if (this_00 == (Material *)0x0) {
      this_00 = *(Material **)((int)&this->ArmorThickness_m + 4);
    }
    param_4 = Material__GetSafeUseTemperature_K(this_00);
    param_1 = Material__GetSafeUseTemperature_K(*(Material **)((int)&this->ArmorThickness_m + 4));
    dVar1 = param_1;
    if (param_4 <= param_1) {
      dVar1 = param_4;
    }
    dVar1 = dVar1 * local_c + (1.0 - local_c) * 2.7;
  }
  (*(uint32_t*)&(local_14)) = (uint32_t)(uintptr_t)(&vftable_91);
  (*(uint32_t*)((char*)&(local_14)+4)) = (uint32_t)(uintptr_t)((SharedPtr_L_ArmorTextureHandler_G_ *)0x0);
  local_c = 0.0;
  Render(this,dVar1,1.0,this[1]._pad_0x0_0,(Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)local_14
        );
  (*(uint32_t*)&(local_14)) = (uint32_t)(uintptr_t)(&vftable_91);
  if ((SharedPtr_L_ArmorTextureHandler_G_ *)(*(uint32_t*)((char*)&(local_14)+4)) != (SharedPtr_L_ArmorTextureHandler_G_ *)0x0) {
    util__SharedPtr_L_ArmorTextureHandler_G____vector_deleting_destructor_
              ((SharedPtr_L_ArmorTextureHandler_G_ *)(*(uint32_t*)((char*)&(local_14)+4)),3);
  }
  return;
}

//==== 005e11f0 RenderInitialStateSimple_005e11f0 ====

/* public: virtual void __thiscall RadiatorModule__RenderInitialStateSimple(struct
   util__Vec3_L_double_G_)const  */

void __thiscall RadiatorModule__RenderInitialStateSimple(RadiatorModule *this,Vec3_L_double_G_ param_1)

{
  RenderSimple(this,1.0,this[1]._pad_0x0_0);
  return;
}

//==== 005e1210 GetPointerPropertyChoices_005e1210 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   RadiatorModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
RadiatorModule__GetPointerPropertyChoices
          (RadiatorModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  undefined1 uVar3;
  
  if ((*(int *)&(param_2[1])) < 1) {
    SVar2 = (*(SerializationManagerInterface *)
            &cde_l2_0b2b1c9f_NullString);
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Composition"; (pcVar1[(int)((*(int *)&(SVar2)) + -0x91fc04)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&(SVar2)) + -0x91fc04)] != *pcVar1) {
      if ((*(int *)&(param_2[1])) < 1) {
        SVar2 = (*(SerializationManagerInterface *)
                &cde_l2_0b2b1c9f_NullString);
      }
      else {
        SVar2 = *param_2;
      }
      for (pcVar1 = "SurfaceFinish";
          (pcVar1[(int)((*(int *)&(SVar2)) + -0x929378)] != '\0' || (*pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
      {
        if (pcVar1[(int)((*(int *)&(SVar2)) + -0x929378)] != *pcVar1) {
          (param_1->Name).Data =
               (char *)&vftable_85;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          return param_1;
        }
      }
      uVar3 = 0x12;
LAB_005e124a:
      GetMaterials((DataParser *)param_1,in_stack_0000000c,(bool)uVar3);
      return param_1;
    }
  }
  uVar3 = false;
  goto LAB_005e124a;
}





//==== 005e12c0 GetReflectionInfo_005e12c0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   RadiatorModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall RadiatorModule__GetReflectionInfo(RadiatorModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6f0562d6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6f0562d6__thread_safe_static_guard_0__);
    if ( cde_l2_6f0562d6__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_89bad439_ReflectionInfo) = &vftable_226;
      _Init_thread_footer(& cde_l2_6f0562d6__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_89bad439_ReflectionInfo;
}





//==== 005e12d0 scalar_deleting_destructor_005e12d0 ====

/* public: virtual void * __thiscall RadiatorModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall RadiatorModule___scalar_deleting_destructor(RadiatorModule *this,uint param_1)

{
  void *pvVar1;
  double *pdVar2;
  
  pvVar1 = *(void **)((int)&this->Height_m + 4);
  *(undefined ***)&this->Height_m = (undefined **)(&vftable_63);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&this->Height_m + 4) = 0;
  *(undefined ***)&this->Height_m = (undefined **)(&vftable);
  pvVar1 = *(void **)((int)&(this->GetHeatPipeSpacing_m_MemoizedValue).Data + 4);
  (this->GetHeatPipeSpacing_m_MemoizedValue).Data = cde_ptr_as_double((void *)vftable_63);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
  }
  *(undefined4 *)((int)&(this->GetHeatPipeSpacing_m_MemoizedValue).Data + 4) = 0;
  (this->GetHeatPipeSpacing_m_MemoizedValue).Data = cde_ptr_as_double((void *)&vftable);
  pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
  (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data._pad_0x0_0 =
       (int)&vftable_109;
  if (pdVar2 != (double *)0x0) {
    port_op_delete(pdVar2);
  }
  (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data = (double *)0x0;
  (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data._pad_0x0_0 =
       (int)&vftable;
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x118);
  }
  return this;
}

//==== 005e1380 GetTypeName_005e1380 ====


/* public: virtual class util__Str_L_char_G_  RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetTypeName(void)const  */

Str_L_char_G_ * 
RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetTypeName
          (ReflectionInfoStruct_L_class_RadiatorModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"RadiatorModule");
  return __return_storage_ptr__;
}





//==== 005e13a0 GetMembers_005e13a0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_RadiatorModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_59b9cd3d__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_59b9cd3d__thread_safe_static_guard_0__),
      cde_l2_59b9cd3d__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5ef9d7e6_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_59b9cd3d__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5ef9d7e6_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5ef9d7e6_Count) {
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
    } while (iVar3 <  cde_l2_5ef9d7e6_Count);
  }
  return in_stack_00000004;
}





//==== 005e14e0 GetMember_005e14e0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetMember__o2
          (ReflectionInfoStruct_L_class_RadiatorModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_67a0ecf7__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_67a0ecf7__thread_safe_static_guard_0__),
      cde_l2_67a0ecf7__thread_safe_static_guard_0__ == -1)) {
     cde_l2_738e1cfb_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_67a0ecf7__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_738e1cfb_Count) {
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
LAB_005e156d:
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
          if (cVar3 == '\0') goto LAB_005e156d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_738e1cfb_Count);
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





//==== 005e1680 GetFactory_005e1680 ====


/* public: virtual class util__Reflectable * (__cdecl*
   RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_RadiatorModule_G_ *this)

{
  return StaticFactory;
}





//==== 005e1910 GetBinaryBox3_double_0_ ====


/* class util__Darray_L_structutil__Vec3_L_double_G__G_ __cdecl util__GetBinaryBox3_double_0(void) */

Darray_L_struct_util__Vec3_L_double_G___G_ * __cdecl util__GetBinaryBox3_double_0(void)

{
  undefined4 *puVar1;
  double *pdVar2;
  int iVar3;
  Darray_L_struct_util__Vec3_L_double_G___G_ *pDVar4;
  bool bVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  Darray_L_struct_util__Vec3_L_double_G___G_ *in_stack_00000004;
  int iStack_c;
  Darray_L_struct_util__Vec3_L_double_G___G_ *pDStack_8;
  
  pDStack_8 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_17);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 8;
  pvVar6 = (void *)(uintptr_t)(port_op_new(0xc0));
  if (pvVar6 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    iVar9 = 8;
    puVar7 = (undefined8 *)((int)pvVar6 + 0x10);
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + -2) = 0;
      *(undefined4 *)((int)puVar7 + -0xc) = 0;
      *(undefined4 *)(puVar7 + -1) = 0;
      *(undefined4 *)((int)puVar7 + -4) = 0;
      iVar9 = iVar9 + -1;
      puVar7 = puVar7 + 3;
    } while (iVar9 != 0);
  }
  *(void **)(in_stack_00000004 + 4) = pvVar6;
  iVar9 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar10 = 0;
    do {
      iVar3 = *(int *)(in_stack_00000004 + 4);
      iVar10 = iVar10 + 0x18;
      iVar9 = iVar9 + 1;
      puVar1 = (undefined4 *)(iVar3 + -0x18 + iVar10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined8 *)(iVar3 + -8 + iVar10) = 0;
    } while (iVar9 < *(int *)(in_stack_00000004 + 0xc));
  }
  uVar11 = 0;
  do {
    if ((int)uVar11 < 0) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\algorithm.inl",0x16c,
                "Index >= 0 && Recurrence >= 1",(char *)0x0);
      DebugBreak();
    }
    uVar12 = (int)(((int)uVar11 >> 0x1f & 3U) + uVar11) >> 2 & 0x80000001;
    if ((int)uVar12 < 0) {
      uVar12 = (uVar12 - 1 | 0xfffffffe) + 1;
    }
    if ((int)uVar11 < 0) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\algorithm.inl",0x16c,
                "Index >= 0 && Recurrence >= 1",(char *)0x0);
      DebugBreak();
    }
    uVar13 = (int)uVar11 / 2 & 0x80000001;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
    }
    if ((int)uVar11 < 0) {
      LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\math\\algorithm.inl",0x16c,
                "Index >= 0 && Recurrence >= 1",(char *)0x0);
      DebugBreak();
    }
    uVar8 = uVar11 & 0x80000001;
    if ((int)uVar8 < 0) {
      uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
    }
    iVar9 = *(int *)(pDStack_8 + 8);
    iStack_c = iVar9 + 1;
    Darray_L_struct_util__Vec3_L_double_G___G___SetSize(pDStack_8,&iStack_c);
    pDVar4 = pDStack_8;
    bVar5 = Darray_L_struct_util__Vec3_L_double_G___G___CheckSize(pDStack_8,iVar9);
    if (bVar5) {
      iVar9 = *(int *)(pDVar4 + 8);
      iVar10 = *(int *)(pDVar4 + 4);
      pdVar2 = (double *)(iVar10 + -0x18 + iVar9 * 0x18);
      *pdVar2 = (double)(int)uVar8;
      pdVar2[1] = (double)(int)uVar13;
      *(double *)(iVar10 + -8 + iVar9 * 0x18) = (double)(int)uVar12;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 8);
  return pDVar4;
}





//==== 005e1ac0 MethodCallerConst__public__class_util__Str_char____thiscall_RadiatorModule__GetRadiatorInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classRadiatorModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_RadiatorModule__GetRadiatorInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_RadiatorModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RadiatorModule__GetRadiatorInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(RadiatorModule__GetRadiatorInfo((RadiatorModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005e1b00 MethodCallerConst__public__class_util__Str_char____thiscall_RadiatorModule__GetSampleHeatInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classRadiatorModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_RadiatorModule__GetSampleHeatInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_RadiatorModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RadiatorModule__GetSampleHeatInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(RadiatorModule__GetSampleHeatInfo((RadiatorModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005e1b40 MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartEfficiency_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_RadiatorModule_Cdouble_Cdouble_G___MethodCallerConst_L__private_double__thiscall_RadiatorModule__GetThermalChartEfficiency_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_RadiatorModule_double_double___MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartEfficiency_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = RadiatorModule__GetThermalChartEfficiency
                    ((RadiatorModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 005e1b60 MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartEmissivity_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_RadiatorModule_Cdouble_Cdouble_G___MethodCallerConst_L__private_double__thiscall_RadiatorModule__GetThermalChartEmissivity_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_RadiatorModule_double_double___MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartEmissivity_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = RadiatorModule__GetThermalChartEmissivity
                    ((RadiatorModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 005e1b80 MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartHeatDissipation_MW_double_const__0__ ====


/* public: static double __cdecl util__DelegateFactory_L_class_RadiatorModule_Cdouble_Cdouble_G___MethodCallerConst_L__private_double__thiscall_RadiatorModule__GetThermalChartHeatDissipation_MW_double_const_C0__G_(void const * const,double) */

double __cdecl
util__DelegateFactory_class_RadiatorModule_double_double___MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartHeatDissipation_MW_double_const__0
          (void *param_1,double param_2)

{
  double dVar1;
  undefined4 in_stack_00000008;
  
  dVar1 = RadiatorModule__GetThermalChartHeatDissipation_MW
                    ((RadiatorModule *)param_1,(double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008));
}





//==== 005e1ba0 Darray_Body__RadialImpulse_ ====


/* public:  util__Darray_L_structBody__RadialImpulse_G___Darray_L_struct_Body__RadialImpulse_G_(class util__Darray_L_structBody__RadialImpulse_G_ const &) */

Darray_L_struct_Body__RadialImpulse_G_ * 
util__Darray_struct_Body__RadialImpulse___Darray_struct_Body__RadialImpulse
          (Darray_L_struct_Body__RadialImpulse_G_ *this,Darray_L_struct_Body__RadialImpulse_G_ *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Darray_L_struct_Body__RadialImpulse_G_ *pDVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  pDVar5 = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined ***)this = (undefined **)(&vftable_229);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  param_1 = (Darray_L_struct_Body__RadialImpulse_G_ *)(**(code **)(*(int *)param_1 + 0xc))();
  Darray_L_struct_util__Line2_L_double_G___G___SetSize
            ((Darray_L_struct_util__Line2_L_double_G___G_ *)this,(int *)&param_1);
  uVar8 = *(uint *)(this + 0xc);
  puVar6 = (undefined4 *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x20 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 0x20));
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else if (uVar8 != 0) {
    puVar7 = puVar6 + 6;
    do {
      puVar7[-6] = 0;
      puVar7[-5] = 0;
      puVar7[-4] = 0;
      puVar7[-3] = 0;
      puVar7[-2] = 0;
      puVar7[-1] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 8;
    } while (uVar8 != 0);
  }
  *(undefined4 **)(this + 4) = puVar6;
  puVar7 = *(undefined4 **)(pDVar5 + 4);
  if (puVar7 != puVar7 + *(int *)(pDVar5 + 8) * 8) {
    do {
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar1 = puVar7 + 4;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar4 = puVar7[7];
      puVar7 = puVar7 + 8;
      puVar6[4] = *puVar1;
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      puVar6 = puVar6 + 8;
    } while (puVar7 != (undefined4 *)(*(int *)(pDVar5 + 8) * 0x20 + *(int *)(pDVar5 + 4)));
  }
  return this;
}





//==== 005e1c70 Args_005e1c70 ====


/* public:  LineGraph__Args__Args(struct LineGraph__Args const &) */

Args *  LineGraph__Args__Args(Args *this,Args *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 8),(Str_L_char_G_ *)(param_1 + 8));
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x1c),(Str_L_char_G_ *)(param_1 + 0x1c));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x30),(Str_L_char_G_ *)(param_1 + 0x30));
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x44),(Str_L_char_G_ *)(param_1 + 0x44));
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x58),(Str_L_char_G_ *)(param_1 + 0x58));
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = uVar1;
  *(undefined4 *)(this + 0x70) = uVar2;
  *(undefined4 *)(this + 0x74) = uVar3;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = *(undefined4 *)(param_1 + 0x88);
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(this + 0x84) = uVar1;
  *(undefined4 *)(this + 0x88) = uVar2;
  *(undefined4 *)(this + 0x8c) = uVar3;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x90);
  this[0x98] = param_1[0x98];
  this[0x99] = param_1[0x99];
  this[0x9a] = param_1[0x9a];
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xac) = *(undefined8 *)(param_1 + 0xac);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char
            ((Darray_L_class_util__Str_L_char_G___G_ *)(this + 0xc0),
             (Darray_L_class_util__Str_L_char_G___G_ *)(param_1 + 0xc0));
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  util__Darray_struct_Body__RadialImpulse___Darray_struct_Body__RadialImpulse
            ((Darray_L_struct_Body__RadialImpulse_G_ *)(this + 0xd8),
             (Darray_L_struct_Body__RadialImpulse_G_ *)(param_1 + 0xd8));
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  util__Darray_struct_Body__RadialImpulse___Darray_struct_Body__RadialImpulse
            ((Darray_L_struct_Body__RadialImpulse_G_ *)(this + 0xf0),
             (Darray_L_struct_Body__RadialImpulse_G_ *)(param_1 + 0xf0));
  *(undefined4 *)(this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  return this;
}





//==== 005e1e50 Args_005e1e50 ====


/* public:  LineGraph__Args__Args(void) */

Args * __thiscall LineGraph__Args__Args__o3(Args *this)

{
  undefined **ppuStack_14;
  Str_L_char_G_ SStack_10;
  
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 8),&SStack_10);
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x1c),&SStack_10);
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x30),&SStack_10);
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x44),&SStack_10);
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  util__Str_char___Str_char((Str_L_char_G_ *)(this + 0x58),&SStack_10);
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  ppuStack_14 = (undefined **)(&vftable_4);
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined2 *)(this + 0x98) = 0;
  *(char *)&(this[0x9a]) = 0x0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  util__Darray_class_util__Str_char_____Darray_class_util__Str_char
            ((Darray_L_class_util__Str_L_char_G___G_ *)(this + 0xc0),
             (Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_14);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_229);
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  util__Darray_struct_Body__RadialImpulse___Darray_struct_Body__RadialImpulse
            ((Darray_L_struct_Body__RadialImpulse_G_ *)(this + 0xd8),
             (Darray_L_struct_Body__RadialImpulse_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_229);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  ppuStack_14 = (undefined **)(&vftable_229);
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  util__Darray_struct_Body__RadialImpulse___Darray_struct_Body__RadialImpulse
            ((Darray_L_struct_Body__RadialImpulse_G_ *)(this + 0xf0),
             (Darray_L_struct_Body__RadialImpulse_G_ *)&ppuStack_14);
  ppuStack_14 = (undefined **)(&vftable_229);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  return this;
}





//==== 005e20f0 Args_005e20f0 ====


/* public: __thiscall LineGraph__Args___Args(void) */

void __thiscall LineGraph__Args___Args(Args *this)

{
  *(undefined ***)(this + 0xf0) = (undefined **)(&vftable_229);
  if (*(void **)(this + 0xf4) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0xf4));
  }
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined ***)(this + 0xf0) = (undefined **)(&vftable);
  *(undefined ***)(this + 0xd8) = (undefined **)(&vftable_229);
  if (*(void **)(this + 0xdc) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0xdc));
  }
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined ***)(this + 0xd8) = (undefined **)(&vftable);
  util__Darray_class_util__Str_char______Darray_class_util__Str_char((Darray_L_class_util__Str_L_char_G___G_ *)(this + 0xc0));
  if (*(void **)(this + 0x58) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x58));
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(void **)(this + 0x44) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x44));
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (*(void **)(this + 0x30) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(void **)(this + 0x1c) != (void *)0x0) {
    port_op_delete(*(void **)(this + 0x1c));
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    port_op_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  return;
}





//==== 005e22e0 scalar_deleting_destructor_005e22e0 ====


/* public: virtual void * __thiscall util__Darray_L_structBody__RadialImpulse_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_Body__RadialImpulse____scalar_deleting_destructor
          (Darray_L_struct_Body__RadialImpulse_G_ *this,uint param_1)

{
  *(undefined ***)this = (undefined **)(&vftable_229);
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





//==== 005e2330 scalar_deleting_destructor_005e2330 ====


/* public: virtual void * __thiscall util__Darray_L_structArmorPlate_G_:: 0 scalardeletingdestructor(unsigned int) */

void * 
util__Darray_struct_ArmorPlate____scalar_deleting_destructor
          (Darray_L_struct_ArmorPlate_G_ *this,uint param_1)

{
  *(undefined ***)this = &vftable_227;
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





//==== 005e2410 CheckSize_005e2410 ====


/* private: bool  util__Darray_L_structArmorPlate_G___CheckSize(int) */

bool __thiscall
util__Darray_struct_ArmorPlate___CheckSize(Darray_L_struct_ArmorPlate_G_ *this,int param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  ArmorPlate *pAVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  bool bVar9;
  ArmorPlate *pAStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar5 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar5;
  bVar3 = !bVar9;
  if (bVar3) {
    pAStack_c = (ArmorPlate *)0x0;
    SetSize(this,(int *)&pAStack_c);
    uVar5 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar3;
  bVar3 = (int)uVar5 < 0x40000000;
  if (!bVar3) {
    pAStack_c = (ArmorPlate *)0x3fffffff;
    SetSize(this,(int *)&pAStack_c);
    uVar5 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar8 = *(uint *)(this + 0xc);
  if ((int)uVar5 <= (int)uVar8) {
    return bVar3 && bVar9;
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
  pAVar4 = (ArmorPlate *)
           port_op_new(-(uint)((int)((ulonglong)uVar8 * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)uVar8 * 4));
  pAStack_c = pAVar4;
  if (pAVar4 == (ArmorPlate *)0x0) {
    pAStack_c = (ArmorPlate *)0x0;
  }
  else {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      ArmorPlate__ArmorPlate(pAVar4,0.0);
      pAVar4 = pAVar4 + 1;
    }
  }
  pfVar6 = *(float **)(this + 4);
  if (pfVar6 != (float *)0x0) {
    iVar1 = *(int *)(this + 8);
    pfVar7 = pfVar6;
    pAVar4 = pAStack_c;
    if (pfVar6 != pfVar6 + param_1) {
      do {
        if (pAVar4 == pAStack_c + iVar1) break;
        fVar2 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pAVar4->Thickness_m = fVar2;
        pAVar4 = pAVar4 + 1;
        pfVar6 = *(float **)(this + 4);
      } while (pfVar7 != pfVar6 + param_1);
    }
    port_op_delete(pfVar6);
    *(undefined4 *)(this + 4) = 0;
  }
  *(ArmorPlate **)(this + 4) = pAStack_c;
  return bStack_5;
}





//==== 005e2560 CheckSize_005e2560 ====


/* private: bool  util__Darray_L_structWorldLight_G___CheckSize(int) */

bool __thiscall
util__Darray_struct_WorldLight___CheckSize(Darray_L_struct_WorldLight_G_ *this,int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  bool bVar9;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  bool bStack_5;
  
  bStack_5 = true;
  uVar5 = *(uint *)(this + 8);
  bVar9 = -1 < (int)uVar5;
  bVar2 = !bVar9;
  if (bVar2) {
    puStack_10 = (undefined4 *)0x0;
    SetSize(this,(int *)&puStack_10);
    uVar5 = *(uint *)(this + 8);
  }
  bStack_5 = !bVar2;
  bVar2 = (int)uVar5 < 0x40000000;
  if (!bVar2) {
    puStack_10 = (undefined4 *)0x3fffffff;
    SetSize(this,(int *)&puStack_10);
    uVar5 = *(uint *)(this + 8);
    bStack_5 = false;
  }
  uVar8 = *(uint *)(this + 0xc);
  if ((int)uVar5 <= (int)uVar8) {
    return bVar2 && bVar9;
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
  puStack_c = (undefined4 *)
              port_op_new(-(uint)((int)((ulonglong)uVar8 * 0x68 >> 0x20) != 0) |
                             (uint)((ulonglong)uVar8 * 0x68));
  if (puStack_c == (undefined4 *)0x0) {
    puStack_c = (undefined4 *)0x0;
  }
  else if (uVar8 != 0) {
    puVar3 = puStack_c + 10;
    do {
      puVar3[-10] = 0;
      puVar3[-9] = 0;
      puVar3[-8] = 0;
      puVar3[-7] = 0;
      puVar3[-6] = 0;
      puVar3[-5] = 0;
      puVar3[-4] = 0;
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
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
      puVar3[0xc] = 0;
      puVar3[0xd] = 0;
      *(undefined1 *)(puVar3 + 0xe) = 0;
      uVar8 = uVar8 - 1;
      puVar3 = puVar3 + 0x1a;
    } while (uVar8 != 0);
  }
  puVar3 = *(undefined4 **)(this + 4);
  if (puVar3 != (undefined4 *)0x0) {
    iVar1 = *(int *)(this + 8);
    puVar6 = puVar3;
    puStack_10 = puStack_c;
    if (puVar3 != puVar3 + param_1 * 0x1a) {
      do {
        if (puStack_10 == puStack_c + iVar1 * 0x1a) break;
        puVar7 = puVar6 + 0x1a;
        puVar3 = puStack_10;
        for (iVar4 = 0x1a; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar3 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar3 = *(undefined4 **)(this + 4);
        puStack_10 = puStack_10 + 0x1a;
        puVar6 = puVar7;
      } while (puVar7 != puVar3 + param_1 * 0x1a);
    }
    port_op_delete(puVar3);
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 **)(this + 4) = puStack_c;
  return bStack_5;
}





//==== 005e26d0 Clear_005e26d0 ====


/* public: virtual void  util__Darray_L_structArmorPlate_G___Clear(void) */

void __thiscall util__Darray_struct_ArmorPlate___Clear(Darray_L_struct_ArmorPlate_G_ *this)

{
  int iStack_8;
  
  iStack_8 = 0;
  SetSize(this,&iStack_8);
  return;
}





//==== 005e26f0 Disable_005e26f0 ====


/* public: virtual void __thiscall RadiatorCompartment__Disable(void) */

void __thiscall RadiatorCompartment__Disable(RadiatorCompartment *this)

{
  this->Extending = false;
  return;
}





//==== 005e2770 GenerateHeatTransferChart ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x005e2bf9) */
/* WARNING: Removing unreachable block (ram,0x005e2c06) */
/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: struct UIWidget * __thiscall RadiatorModule__GenerateHeatTransferChart(class Manager
   *)const  */

UIWidget * __thiscall
RadiatorModule__GenerateHeatTransferChart(RadiatorModule *this,Manager *param_1)

{
  undefined8 stack0xfffff9fc;
  undefined8 stack0xfffffa18;
  undefined8 stack0xfffffffc;
  Attribute_L_util__Color_G_ AVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  void *pvVar15;
  LocStr *pLVar16;
  Str_L_char_G_ *pSVar17;
  Str_L_char_G_ *pSVar18;
  Str_L_char_G_ *pSVar19;
  Args *pAVar20;
  UIAttributes *pUVar21;
  UIWidget *pUVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined **ppuVar28;
  Str_L_char_G_ in_stack_fffff9fc;
  undefined4 uVar29;
  float fVar30;
  int iStack_4bc;
  Str_L_char_G_ *pSVar31;
  Str_L_char_G_ *pSVar32;
  Args aAStack_4a0 [260];
  undefined4 uStack_39c;
  UIAttributes local_384;
  Args local_23c [272];
  Color local_12c;
  void *local_10c [3];
  void *local_100;
  void *local_f4 [3];
  void *local_e8;
  void *local_dc [3];
  void *local_d0;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  Str_L_char_G_ local_7c;
  Str_L_char_G_ local_70;
  Str_L_char_G_ local_64;
  undefined4 local_58;
  undefined4 local_54;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  undefined8 local_20;
  void *local_18;
  _func___cdecl_Vec2_L_int_G__void_ptr *p_Stack_14;
  undefined8 uStack_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_20 = (double)(ulonglong)(uint)local_20;
  uStack_10 = 0.0;
  iVar23 = 0;
  do {
    uStack_39c = 0x5e27c7;
    local_20 = GetTotalHeatDissipated_W(this,((double)iVar23 * 2500.0) / 101.0);
    if (uStack_10 <= local_20 / 1000000.0) {
      uStack_10 = local_20 / 1000000.0;
    }
    iVar23 = iVar23 + 1;
  } while (iVar23 < 100);
  pvVar15 = (void *)(uintptr_t)(port_op_new(0x278));
  local_20 = (double)CONCAT44(pvVar15,(uint)local_20);
  if (pvVar15 == (void *)0x0) {
    pUVar22 = (UIWidget *)0x0;
  }
  else {
    util__Str_char___Str_char(&local_ac,"MW");
    util__Str_char___Str_char(&local_7c,"RadiatorHeatChart YAxis");
    util__Str_char___Str_char(&local_a0,"K");
    util__Str_char___Str_char(&local_70,"RadiatorHeatChart XAxis");
    util__Str_char___Str_char(&local_64,"RadiatorHeatChart Title");
    uVar24 = 0;
    uVar25 = 0;
    if (uStack_10 < 0.0) {
      uVar24 = SUB84(uStack_10,0);
      uVar25 = (undefined4)((ulonglong)uStack_10 >> 0x20);
      uStack_10 = 0.0;
    }
    pSVar32 = &local_ac;
    local_94 = 0;
    uStack_90 = 0;
    uStack_8c = CONCAT44(uVar25,uVar24);
    local_c4 = 0;
    uStack_c0 = 0;
    local_44.Data = (char *)0x0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0x40a38800;
    local_44.Capacity = 0;
    local_44.Length = 0;
    local_38.Data = (char *)0x0;
    local_38.Capacity = 0;
    local_38.Length = 0;
    local_2c.Data = (char *)0x0;
    local_2c.Capacity = 0;
    local_2c.Length = 0;
    pLVar16 = (LocStr *)util__LocStr__LocStr((LocStr *)local_10c,&local_7c,&local_44);
    pSVar17 = util__LocStr__operator__o3(pLVar16);
    pSVar31 = &local_a0;
    pLVar16 = (LocStr *)util__LocStr__LocStr((LocStr *)local_f4,&local_70,&local_38);
    pSVar18 = util__LocStr__operator__o3(pLVar16);
    iStack_4bc = 0x5e2941;
    pLVar16 = (LocStr *)util__LocStr__LocStr((LocStr *)local_dc,&local_64,&local_2c);
    pSVar19 = util__LocStr__operator__o3(pLVar16);
    local_58 = 0;
    local_54 = 0;
    util__Str_char___Str_char(&local_50,pSVar19);
    pAVar20 = (Args *)LineGraph__Args__Args__o3(local_23c);
    *(undefined4 *)pAVar20 = local_58;
    *(undefined4 *)(pAVar20 + 4) = local_54;
    util__Str_char___operator__o8((Str_L_char_G_ *)(pAVar20 + 8),&local_50);
    if (local_50.Data != (char *)0x0) {
      port_op_delete(local_50.Data);
    }
    pAVar20 = LineGraph__Args__SetAxis(pAVar20,pSVar18,pSVar31,pSVar17,pSVar32);
    *(undefined4 *)(pAVar20 + 0x68) = local_c4;
    *(undefined4 *)(pAVar20 + 0x6c) = uStack_c0;
    *(undefined4 *)(pAVar20 + 0x70) = uStack_bc;
    *(undefined4 *)(pAVar20 + 0x74) = uStack_b8;
    *(RadiatorModule **)(pAVar20 + 0x9c) = this;
    *(ulonglong *)(pAVar20 + 0x78) = CONCAT44(uStack_b0,uStack_b4);
    *(code **)(uintptr_t)(pAVar20 + 0xa0) = (long long int (*)())(util__DelegateFactory_class_RadiatorModule_double_double___MethodCallerConst__private__double___thiscall_RadiatorModule__GetThermalChartHeatDissipation_MW_double_const__0);
    *(char *)&(pAVar20[0x98]) = 0x1;
    *(undefined4 *)(pAVar20 + 0x80) = local_94;
    *(undefined4 *)(pAVar20 + 0x84) = uStack_90;
    *(undefined4 *)(pAVar20 + 0x88) = (undefined4)uStack_8c;
    *(undefined4 *)(pAVar20 + 0x8c) = (*(uint32_t*)((char*)&(uStack_8c)+4));
    *(double *)(pAVar20 + 0x90) = uStack_10;
    LineGraph__Args__Args__o3(aAStack_4a0);
    iVar23 = (int)(uintptr_t) util__Color__Color(&local_12c,Preset__Green,1.0);
    uVar26 = 0;
    uVar27 = 0;
    util__Str_char___Str_char((Str_L_char_G_ *)&stack0xfffff9fc,(Str_L_char_G_ *)(iVar23 + 4));
    ppuVar28 = &vftable_59;
    uVar24 = *(undefined4 *)(iVar23 + 0x10);
    uVar25 = *(undefined4 *)(iVar23 + 0x14);
    uVar29 = *(undefined4 *)(iVar23 + 0x18);
    fVar30 = *(float *)(iVar23 + 0x1c);
    *(uint32_t *)&local_18 = (uint32_t)(uintptr_t)((void *)0x0);
    p_Stack_14 = (_func___cdecl_Vec2_L_int_G__void_ptr *)0x0;
    uStack_10 = 4.24399158193054e-312;
    pUVar21 = (UIAttributes *)UIAttributes__UIAttributes(&local_384,param_1);
    local_94 = 0;
    uStack_8c = 0x3ff0000000000000;
    uStack_84 = 0;
    uStack_90 = 0;
    (pUVar21->DesiredSize).Getter.Callee = local_18;
    (pUVar21->DesiredSize).Getter.CallbackFunction = p_Stack_14;
    (pUVar21->DesiredSize).Value.X = (int)uStack_10;
    (pUVar21->DesiredSize).Value.Y = (*(uint32_t*)((char*)&(uStack_10)+4));
    (pUVar21->FillProportion).Getter.Callee = (void *)0x0;
    (pUVar21->FillProportion).Getter.CallbackFunction = (_func___cdecl_Vec2_L_double_G__void_ptr *)0x0;
    (undefined4)((pUVar21->FillProportion).Value.X = 0);
    *(undefined4 *)((int)&(pUVar21->FillProportion).Value.X + 4) = 0x3ff00000;
    (pUVar21->FillProportion).Value.Y = 0.0;
    AVar1.Getter.CallbackFunction = (_func___cdecl_Color_void_ptr *)uVar27;
    AVar1.Getter.Callee = (void *)uVar26;
    AVar1.Value._pad_0x0_0 = (int)ppuVar28;
    AVar1.Value._pad_0x4_1 = (int)in_stack_fffff9fc.Data;
    AVar1.Value._pad_0x8_2 = in_stack_fffff9fc.Capacity;
    AVar1.Value._pad_0xc_3 = in_stack_fffff9fc.Length;
    AVar1.Value.Hue_degrees = (float)uVar24;
    AVar1.Value.Saturation = (float)uVar25;
    AVar1.Value.Value = (float)uVar29;
    AVar1.Value.Alpha = fVar30;
    pUVar21 = UIAttributes__SetForegroundColor(pUVar21,*(Attribute_L_util__Color_G_ *)&(AVar1));
    UIAttributes__UIAttributes((UIAttributes *)&stack0xfffffa18,pUVar21);
    pUVar22 = (UIWidget *)LineGraph__LineGraph((LineGraph*)((LineGraph*)((*(uint32_t*)((char*)&(local_20)+4)))));
    bVar14 = true;
    bVar13 = true;
    bVar12 = true;
    bVar11 = true;
    bVar10 = true;
    bVar9 = true;
    bVar8 = true;
    bVar7 = true;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
  }
  if (bVar9) {
    UIAttributes___UIAttributes(&local_384);
  }
  if ((bVar10) &&
     (local_12c._pad_0x0_0 = (int)&vftable_5,
     (void *)local_12c._pad_0x4_1 != (void *)0x0)) {
    port_op_delete((void *)local_12c._pad_0x4_1);
    local_12c._pad_0x4_1 = 0;
  }
  if (bVar11) {
    LineGraph__Args___Args(local_23c);
  }
  if (bVar12) {
    if (local_d0 != (void *)0x0) {
      port_op_delete(local_d0);
      local_d0 = (void *)0x0;
    }
    if (local_dc[0] != (void *)0x0) {
      port_op_delete(local_dc[0]);
      local_dc[0] = (void *)0x0;
    }
  }
  if ((bVar13) && (local_2c.Data != (char *)0x0)) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (bVar14) {
    if (local_e8 != (void *)0x0) {
      port_op_delete(local_e8);
      local_e8 = (void *)0x0;
    }
    if (local_f4[0] != (void *)0x0) {
      port_op_delete(local_f4[0]);
      local_f4[0] = (void *)0x0;
    }
  }
  if (bVar3) {
    if (local_100 != (void *)0x0) {
      port_op_delete(local_100);
      local_100 = (void *)0x0;
    }
    if (local_10c[0] != (void *)0x0) {
      port_op_delete(local_10c[0]);
      local_10c[0] = (void *)0x0;
    }
  }
  if ((bVar4) && (local_44.Data != (char *)0x0)) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if ((bVar5) && (local_64.Data != (char *)0x0)) {
    port_op_delete(local_64.Data);
    local_64.Data = (char *)0x0;
  }
  if ((bVar6) && (local_70.Data != (char *)0x0)) {
    port_op_delete(local_70.Data);
    local_70.Data = (char *)0x0;
  }
  if ((bVar7) && (local_a0.Data != (char *)0x0)) {
    port_op_delete(local_a0.Data);
  }
  if ((bVar8) && (local_7c.Data != (char *)0x0)) {
    port_op_delete(local_7c.Data);
    local_7c.Data = (char *)0x0;
  }
  if ((local_ac.Data != (char *)0x0) && (bVar2)) {
    port_op_delete(local_ac.Data);
  }
  return pUVar22;
}

//==== 005e2d20 GenerateTextures_005e2d20 ====

/* public: virtual void __thiscall RadiatorCompartment__GenerateTextures(void) */

void __thiscall RadiatorCompartment__GenerateTextures(RadiatorCompartment *this)

{
  int iVar1;
  int iVar2;
  RadiatorModule *this_00;
  Vec4_L_double_G_ VVar3;
  RadiatorCompartment *pRVar4;
  bool bVar5;
  ArmorTextureHandler *pAVar6;
  ReferenceControllerRegistry *pRVar7;
  ReferenceController *this_01;
  ArmorTextureHandler *pAVar8;
  TextureInitOptions local_60;
  Vec3_L_double_G_ local_38;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 local_10;
  RadiatorCompartment *local_8;
  
  local_8 = this;
  pAVar6 = (ArmorTextureHandler *)(uintptr_t)(port_op_new(0xe8));
  if (pAVar6 == (ArmorTextureHandler *)0x0) {
    pAVar6 = (ArmorTextureHandler *)0x0;
  }
  else {
    memset(pAVar6,0,0xe8);
    pAVar6 = (ArmorTextureHandler *)ArmorTextureHandler__ArmorTextureHandler(pAVar6);
    if (pAVar6 != (ArmorTextureHandler *)0x0) goto LAB_005e2d7f;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005e2d7f:
  pAVar8 = pAVar6;
  pRVar7 = util__ReferenceControllerRegistry__Get();
  this_01 = util__ReferenceControllerRegistry__Register(pRVar7,pAVar8);
  if (this_01 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_01);
  }
  iVar1 = local_8->_pad_0x54_21;
  (*(uint32_t*)((char*)&(local_10)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)(iVar1 + 1));
  util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___SetSize
            ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)&local_8->_pad_0x4c_19,
             (int *)((int)&local_10 + 4));
  pRVar4 = local_8;
  bVar5 = util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___CheckSize
                    ((Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)&local_8->_pad_0x4c_19,iVar1);
  if (bVar5) {
    iVar1 = pRVar4->_pad_0x54_21;
    iVar2 = pRVar4->_pad_0x50_20;
    (*(uint32_t*)((char*)&(local_10)+4)) = (uint32_t)(uintptr_t)(*(ReferenceController **)(iVar2 + -4 + iVar1 * 8));
    pAVar8 = *(ArmorTextureHandler **)(iVar2 + -8 + iVar1 * 8);
    *(ArmorTextureHandler **)(iVar2 + -8 + iVar1 * 8) = pAVar6;
    *(ReferenceController **)(iVar2 + -4 + iVar1 * 8) = this_01;
    if (this_01 != (ReferenceController *)0x0) {
      util__ReferenceController__AddStrongReference(this_01);
    }
    if (((*(uint32_t*)((char*)&(local_10)+4)) != (ReferenceController *)0x0) &&
       (bVar5 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(local_10)+4))))), bVar5)) {
      if (pAVar8 != (ArmorTextureHandler *)0x0) {
        ArmorTextureHandler___scalar_deleting_destructor(pAVar8,1);
      }
      pRVar7 = util__ReferenceControllerRegistry__Get();
      util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pAVar8);
    }
  }
  if ((this_01 != (ReferenceController *)0x0) &&
     (bVar5 = util__ReferenceController__ReleaseStrongReference(this_01), bVar5)) {
    if (pAVar6 != (ArmorTextureHandler *)0x0) {
      ArmorTextureHandler___scalar_deleting_destructor(pAVar6,1);
    }
    pRVar7 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar7,pAVar6);
  }
  pRVar4 = local_8;
  local_60.NearestFiltering = false;
  this_00 = (RadiatorModule *)local_8->_pad_0x38_14;
  local_60.TextureR = Repeat;
  local_60.Mipmaps.Data.MinLevel = 0;
  local_60.Mipmaps.Data.MaxLevel.Data = 0;
  local_60.Mipmaps.Data.MaxLevel.IsValidData = false;
  local_60.Mipmaps.IsValidData = false;
  local_60.Quality = EightBit;
  local_60.TextureS = ClampToEdge;
  local_60.TextureT = ClampToEdge;
  local_60.Channels = RG;
  RadiatorModule__GetPanelDimensions_m(this_00,&local_38,0);
  local_20 = local_38.X;
  uStack_1c = local_38.Y;
  uStack_18 = 0;
  uStack_14 = 0;
  *(uint64_t *)&local_10 = (double)this_00[1]._pad_0x0_0 * local_38.Z;
  (**(code **)(pRVar4->_pad_0x4c_19 + 8))();
  VVar3.Y = uStack_1c;
  VVar3.X = local_20;
  VVar3.Y = SUB84(local_10,0);
  VVar3.Z = (int)((ulonglong)local_10 >> 0x20);
  ArmorTextureHandler__GenerateTexture(VVar3,&local_60,true);
  return;
}

//==== 005e2ee0 GetBackTaper_radians ====

/* public: double __thiscall RadiatorModule__GetBackTaper_radians(void)const  */

double __thiscall RadiatorModule__GetBackTaper_radians(RadiatorModule *this)

{
  return *(double *)&this[1]._pad_0x10_4;
}

//==== 005e3170 GetConditionalStatuses ====

/* public: class DesignStatusBuffer  RadiatorModule__GetConditionalStatuses(class
   DataParser *,class Module *)const  */

DesignStatusBuffer * 
RadiatorModule__GetConditionalStatuses
          (RadiatorModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1,
          Module *param_2)

{
  int iVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  ModulePlacer *pMVar6;
  undefined1 local_74 [48];
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  double local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  (undefined8)((__return_storage_ptr__->Messages).Capacity = 0);
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_44,"RadiatorMeltage");
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  local_20.Length = 0;
  iVar1 = (**(code **)(param_2->_pad_0x0_0 + 200))(local_74);
  if (*(char *)(iVar1 + 0x28) == '\0') {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  local_c = *(double *)(iVar1 + 0x18);
  pSVar5 = &local_38;
  pMVar6 = (ModulePlacer *)0x0;
  pSVar4 = &local_2c;
  pSVar3 = &local_20;
  pSVar2 = &local_44;
  *(uint32_t *)&local_14 = Material__GetSafeUseTemperature_K(*(Material **)((int)&this->ArmorThickness_m + 4));
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_14 <= local_c,pSVar2,pSVar3,pSVar4,pSVar5,pMVar6);
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
    local_20.Data = (char *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
  }
  return __return_storage_ptr__;
}

//==== 005e32c0 GetCurrentBoundingBox_m_005e32c0 ====

/* public: virtual struct util__AABB_L_structutil__Vec3_L_double_G__G_ __thiscall
   RadiatorCompartment__GetCurrentBoundingBox_m(void)const  */

AABB_L_util__Vec3_L_double_G___G_ * __thiscall
RadiatorCompartment__GetCurrentBoundingBox_m
          (RadiatorCompartment *this,AABB_L_util__Vec3_L_double_G___G_ *__return_storage_ptr__)

{
  RadiatorModule *this_00;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar1 = this->_pad_0x38_14;
  dVar5 = util__Tan((double *)(iVar1 + 0x100));
  dVar3 = *(double *)(iVar1 + 0xd8);
  dVar6 = util__Tan((double *)(iVar1 + 0x108));
  this_00 = (RadiatorModule *)this->_pad_0x38_14;
  dVar4 = (dVar6 * *(double *)(iVar1 + 0xd8) + dVar5 * dVar3) * (double)*(int *)(iVar1 + 0xf8) +
          *(double *)(iVar1 + 0xe0);
  iVar1 = (**(code **)((this->RadiatorArmor)._padfb0 + 0xc))();
  dVar5 = RadiatorModule__GetExtendedPanelWidth_m(this_00,this->ExtendedPercent);
  dVar5 = dVar5 * (double)iVar1;
  dVar6 = RadiatorModule__GetExtendedPanelThickness_m
                    ((RadiatorModule *)this->_pad_0x38_14,this->ExtendedPercent);
  dVar6 = dVar6 * 0.5;
  dVar2 = dVar4 * 0.5;
  dVar4 = dVar4 * -0.5;
  dVar7 = RadiatorModule__GetExtendedPanelThickness_m
                    ((RadiatorModule *)this->_pad_0x38_14,this->ExtendedPercent);
  dVar3 = dVar4;
  if (dVar2 <= dVar4) {
    dVar3 = dVar2;
  }
  dVar7 = dVar7 * -0.5;
  if (dVar4 <= dVar2) {
    dVar4 = dVar2;
  }
  dVar2 = 0.0;
  if (0.0 <= dVar5) {
    dVar2 = dVar5;
  }
  (__return_storage_ptr__->Lower).X = dVar3;
  dVar3 = dVar7;
  if (dVar6 <= dVar7) {
    dVar3 = dVar6;
  }
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  (__return_storage_ptr__->Lower).Y = dVar3;
  dVar3 = 0.0;
  if (dVar5 <= 0.0) {
    dVar3 = dVar5;
  }
  (__return_storage_ptr__->Lower).Z = dVar3;
  (__return_storage_ptr__->Upper).X = dVar4;
  (__return_storage_ptr__->Upper).Y = dVar7;
  (__return_storage_ptr__->Upper).Z = dVar2;
  return __return_storage_ptr__;
}

//==== 005e3440 GetEmissivity ====

/* public: double __thiscall RadiatorModule__GetEmissivity(double)const  */

double __thiscall RadiatorModule__GetEmissivity(RadiatorModule *this,double param_1)

{
  Material *pMVar1;
  double dVar2;
  double dVar3;
  
  pMVar1 = (Material *)this[1]._pad_0x18_6;
  if (pMVar1 == (Material *)0x0) {
    pMVar1 = *(Material **)((int)&this->ArmorThickness_m + 4);
  }
  dVar2 = Material__GetSafeUseTemperature_K(pMVar1);
  dVar3 = Material__GetSafeUseTemperature_K(*(Material **)((int)&this->ArmorThickness_m + 4));
  if (dVar2 <= dVar3) {
    dVar3 = dVar2;
  }
  if (dVar3 < param_1) {
    return 0.0;
  }
  dVar3 = Physics__GetBlackbodyRadiationPeakWavelength_nm(param_1);
  pMVar1 = (Material *)this[1]._pad_0x18_6;
  if (pMVar1 == (Material *)0x0) {
    pMVar1 = *(Material **)((int)&this->ArmorThickness_m + 4);
  }
  dVar3 = Material__GetEmissivityCoefficient(pMVar1,dVar3);
  return dVar3;
}

//==== 005e34d0 GetExtendedPanelThickness_m ====


/* public: double __thiscall RadiatorModule__GetExtendedPanelThickness_m(double)const  */

double __thiscall RadiatorModule__GetExtendedPanelThickness_m(RadiatorModule *this,double param_1)

{
  int iVar1;
  double *pdVar2;
  bool bVar3;
  double dVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = (1.0 - param_1) * 1.5707963267948966 + param_1 * 0.13962634015954636;
  dStack_c = dStack_14;
  if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
    iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    param_1 = (double)CONCAT44(iVar1 + 1,(*(uint32_t*)&(param_1)));
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&param_1 + 4));
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar1);
    if (bVar3) {
      pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar2 + iVar1 + -1) = (long long int (*)())(GetTotalThickness_m_Clear);
      *(undefined4 *)((int)pdVar2 + iVar1 * 8 + -4) = 0;
    }
    dVar4 = GetSurfaceFinishThickness_m(this);
    param_1 = dVar4 + dVar4;
    uStack_1c = CONCAT31((*(uint24_t*)((char*)&(uStack_1c)+1)),1);
    (double)((this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData =
         *(double *)&this->SurfaceFinish + *(double *)&this->SurfaceFinish + this->BackTaper_radians
         + param_1);
    *(undefined4 *)&(this->GetHeatPipesPerPanel_MemoizedValue).IsValidData = (undefined4)(uintptr_t) (long long int (*)())(uStack_1c);
    *(undefined4 *)&this->GetHeatPipesPerPanel_MemoizedValue = uStack_18;
    if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar4 = util__Sin(&dStack_c);
  param_1 = dVar4 * *(double *)&this->Panels;
  dVar4 = util__Cos(&dStack_14);
  return dVar4 * *(double *)&(this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData + param_1;
}





//==== 005e35e0 GetExtendedPanelWidth_m ====


/* public: double __thiscall RadiatorModule__GetExtendedPanelWidth_m(double)const  */

double __thiscall RadiatorModule__GetExtendedPanelWidth_m(RadiatorModule *this,double param_1)

{
  int iVar1;
  double *pdVar2;
  bool bVar3;
  double dVar4;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = (1.0 - param_1) * 1.5707963267948966 + param_1 * 0.13962634015954636;
  dStack_c = dStack_14;
  if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
    iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    param_1 = (double)CONCAT44(iVar1 + 1,(*(uint32_t*)&(param_1)));
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&param_1 + 4));
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar1);
    if (bVar3) {
      pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar2 + iVar1 + -1) = (long long int (*)())(GetTotalThickness_m_Clear);
      *(undefined4 *)((int)pdVar2 + iVar1 * 8 + -4) = 0;
    }
    dVar4 = GetSurfaceFinishThickness_m(this);
    param_1 = dVar4 + dVar4;
    uStack_1c = CONCAT31((*(uint24_t*)((char*)&(uStack_1c)+1)),1);
    *(double *)&((this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData) = *(double *)&this->SurfaceFinish + *(double *)&this->SurfaceFinish + this->BackTaper_radians
         + param_1;
    *(undefined4 *)&(this->GetHeatPipesPerPanel_MemoizedValue).IsValidData = (undefined4)(uintptr_t) (long long int (*)())(uStack_1c);
    *(undefined4 *)&this->GetHeatPipesPerPanel_MemoizedValue = uStack_18;
    if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  dVar4 = util__Cos(&dStack_c);
  param_1 = dVar4 * *(double *)&this->Panels;
  dVar4 = util__Sin(&dStack_14);
  return dVar4 * *(double *)&(this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData + param_1;
}





//==== 005e36f0 GetAccuracy_radians ====


/* public: virtual double __thiscall BlackBoxWeaponModule__GetAccuracy_radians(void)const  */

double __thiscall BlackBoxWeaponModule__GetAccuracy_radians(BlackBoxWeaponModule *this)

{
  return (this->Projectile).Data.BoreRadius_m;
}





//==== 005e3700 GetHeatPipeSpacing_m_Clear ====


/* public: void __thiscall RadiatorModule__GetHeatPipeSpacing_m_Clear(void)const  */

void __thiscall RadiatorModule__GetHeatPipeSpacing_m_Clear(RadiatorModule *this)

{
  *(undefined1 *)&this->PanelWidth_m = 0;
  *(undefined8 *)&(this->GetPanelSurfaceAreas_m2_MemoizedValue).IsValidData = 0;
  return;
}





//==== 005e3720 GetHeatPipesPerPanel_Clear ====


/* public: void __thiscall RadiatorModule__GetHeatPipesPerPanel_Clear(void)const  */

void __thiscall RadiatorModule__GetHeatPipesPerPanel_Clear(RadiatorModule *this)

{
  (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data = (double *)0x0;
  *(undefined1 *)&(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size = 0;
  return;
}





//==== 005e3740 GetHeatSignature_W_005e3740 ====

/* public: virtual double __thiscall RadiatorCompartment__GetHeatSignature_W(void)const  */

double __thiscall RadiatorCompartment__GetHeatSignature_W(RadiatorCompartment *this)

{
  RadiatorModule *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = GetTotalSurfaceAreaRemaining_m2(this);
  dVar4 = this->ExtendedPercent;
  this_00 = (RadiatorModule *)this->_pad_0x38_14;
  dVar2 = GetTemperature_K(this);
  dVar3 = GetTemperature_K(this);
  dVar3 = RadiatorModule__GetEmissivity(this_00,dVar3);
  dVar4 = Physics__GetBlackbodyRadiation_W(dVar1 * dVar4,dVar3,dVar2);
  dVar1 = GetTemperature_K(this);
  dVar1 = RadiatorModule__GetRadiatingEfficiency(this_00,dVar1);
}

//==== 005e37c0 GetRemanence_T ====


/* public: double __thiscall Material__GetRemanence_T(void)const  */

double __thiscall Material__GetRemanence_T(Material *this)

{
  return this->BandGap_eV;
}





//==== 005e37d0 GetInletCoolantTemperature_K_Memoize ====

/* public: void __thiscall RadiatorCompartment__GetInletCoolantTemperature_K_Memoize(void)const  */

void __thiscall RadiatorCompartment__GetInletCoolantTemperature_K_Memoize(RadiatorCompartment *this)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 local_50 [48];
  undefined8 local_20;
  undefined8 local_18;
  int iStack_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  if ((this->GetInletCoolantTemperature_K_MemoizedValue).IsValidData == false) {
    iVar2 = (this->RadiatorCompartmentMemoizationHandlerInstance).ResetFunctions.Size;
    local_20 = CONCAT44(iVar2 + 1,(uint)local_20);
    util__Darray_class_util__Reflectable____SetSize
              ((Darray_L_class_util__Reflectable_P_G_ *)
               &this->RadiatorCompartmentMemoizationHandlerInstance,(int *)((int)&local_20 + 4));
    bVar1 = util__Darray_enum_GraphicsResource__Type___CheckSize
                      ((Darray_L_enum_GraphicsResource__Type_G_ *)
                       &this->RadiatorCompartmentMemoizationHandlerInstance,iVar2);
    if (bVar1) {
      (this->RadiatorCompartmentMemoizationHandlerInstance).ResetFunctions.Data
      [(this->RadiatorCompartmentMemoizationHandlerInstance).ResetFunctions.Size + -1] =
           CDE_PMF(pmf_44b0aa42, LaserModule__GetMirrorFocalLengthLimit_m_Clear);
    }
    (*(uint40_t*)&(local_20)) = (uint5)(uint)local_20;
    *(uint32_t *)&local_18 = 0;
    iStack_10 = 0;
    uStack_c = 0;
    FUN_0059d050(&local_18,&this->_pad_0x6c_27,(*(uint32_t*)((char*)&(local_20)+4)));
    if (iStack_10 == 0) {
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      if (iStack_10 < 1) {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.h",0x3a,
                        "Size > 0",(char *)0x0);
        DebugBreak();
      }
      this_00 = (ReferenceController *)((uint32_t *)((char*)&(local_18)+4))[1];
      iVar2 = *(uint32_t *)(uintptr_t)*(uint32_t *)((char *)&(local_18)+4);
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__AddWeakReference(this_00);
        bVar1 = util__ReferenceController__IsDataStillValid(this_00);
        if (!bVar1) {
          iVar2 = 0;
        }
      }
      iVar2 = (**(code **)(**(int **)(iVar2 + 0x38) + 200))(local_50);
      if (*(char *)(iVar2 + 0x28) == '\0') {
        util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x17,
                        "IsValid()",(char *)0x0);
        DebugBreak();
      }
      local_20 = *(undefined8 *)(iVar2 + 0x18);
      if (this_00 != (ReferenceController *)0x0) {
        util__ReferenceController__ReleaseWeakReference(this_00);
      }
      util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)&local_18);
      uVar3 = (undefined4)local_20;
      uVar4 = (undefined4)((ulonglong)local_20 >> 0x20);
    }
    *(uint32_t *)&local_18 = CONCAT44(uVar4,uVar3);
    iStack_10 = CONCAT31((*(uint24_t*)((char*)&(iStack_10)+1)),1);
    *(undefined4 *)&(this->GetInletCoolantTemperature_K_MemoizedValue).Data = uVar3;
    *(undefined4 *)((int)&(this->GetInletCoolantTemperature_K_MemoizedValue).Data + 4) = uVar4;
    *(int *)&(this->GetInletCoolantTemperature_K_MemoizedValue).IsValidData = iStack_10;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)&((this->GetInletCoolantTemperature_K_MemoizedValue)) + 0xc)) = uStack_c;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

//==== 005e3920 GetInterreflectionEfficiency_Percent ====


/* public: static double __cdecl
   RadiatorModule__GetInterreflectionEfficiency_Percent(int,double,double) */

double __cdecl
RadiatorModule__GetInterreflectionEfficiency_Percent(int param_1,double param_2,double param_3)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  undefined4 in_stack_00000008;
  Maybe_L_double_G_ MStack_2c;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  if (param_1 < 3) {
    return 1.0;
  }
  dStack_1c = (6.283185307179586 / (double)param_1) * 0.5;
  dStack_c = dStack_1c;
  dVar2 = util__Sin(&dStack_c);
  dStack_14 = 1.0 - dVar2 * dVar2;
  pMVar1 = util__Sqrt(&MStack_2c,&dStack_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_14 = (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008) / pMVar1->Data -
              (double)CONCAT44((*(uint32_t*)&(param_2)),in_stack_00000008);
  if ((double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4))) <= dStack_14) {
    return 1.0;
  }
  dVar2 = util__Sin(&dStack_1c);
  dVar2 = (dVar2 * ((double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4))) - dStack_14) + dStack_14) /
          (double)CONCAT44((*(uint32_t*)&(param_3)),(*(uint32_t*)((char*)&(param_2)+4)));
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  return dVar2;
}





//==== 005e3a40 GetMaxTemperatureAllowed_K ====

/* public: double __thiscall RadiatorModule__GetMaxTemperatureAllowed_K(void)const  */

double __thiscall RadiatorModule__GetMaxTemperatureAllowed_K(RadiatorModule *this)

{
  Material *this_00;
  double dVar1;
  double dVar2;
  
  this_00 = (Material *)this[1]._pad_0x18_6;
  if (this_00 == (Material *)0x0) {
    this_00 = *(Material **)((int)&this->ArmorThickness_m + 4);
  }
  dVar1 = Material__GetSafeUseTemperature_K(this_00);
  dVar2 = Material__GetSafeUseTemperature_K(*(Material **)((int)&this->ArmorThickness_m + 4));
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  return dVar2;
}

//==== 005e3a90 GetOperatingTemperature_K_005e3a90 ====

/* public: virtual double __thiscall RadiatorCompartment__GetOperatingTemperature_K(void)const  */

double __thiscall RadiatorCompartment__GetOperatingTemperature_K(RadiatorCompartment *this)

{
  int iVar1;
  Material *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = this->_pad_0x38_14;
  dVar2 = GetTotalMassRemaining_kg(this);
  dVar2 = Material__GetTemperatureIncreaseFromEnergyDelta_K
                    (*(Material **)(iVar1 + 0xd4),*(double *)&this->_pad_0x60_24,dVar2);
  iVar1 = this->_pad_0x38_14;
  this_00 = *(Material **)(iVar1 + 0x110);
  if (this_00 == (Material *)0x0) {
    this_00 = *(Material **)(iVar1 + 0xd4);
  }
  dVar3 = Material__GetSafeUseTemperature_K(this_00);
  dVar4 = Material__GetSafeUseTemperature_K(*(Material **)(iVar1 + 0xd4));
  if (dVar3 <= dVar4) {
    dVar4 = dVar3;
  }
  if (dVar4 <= dVar2) {
    dVar2 = dVar4;
  }
  return dVar2;
}

//==== 005e3aa0 GetPanelAndFinishMasses_kg_Clear ====

/* public: void __thiscall RadiatorModule__GetPanelAndFinishMasses_kg_Clear(void)const  */

void __thiscall RadiatorModule__GetPanelAndFinishMasses_kg_Clear(RadiatorModule *this)

{
  Darray_L_double_G_ local_14;
  
  local_14._pad_0x0_0 = (int)&vftable_63;
  local_14.Data = (double *)0x0;
  local_14.Size = 0;
  local_14.Capacity = 0;
  util__Darray_double___operator
            ((Darray_L_double_G_ *)&this->GetHeatPipeSpacing_m_MemoizedValue,&local_14);
  local_14._pad_0x0_0 = (int)&vftable_63;
  if (local_14.Data != (double *)0x0) {
    port_op_delete(local_14.Data);
  }
  *(undefined1 *)&(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data._pad_0x0_0 = 0;
  return;
}

//==== 005e3b00 GetPanelAndFinishMasses_kg_Memoize ====

/* public: void __thiscall RadiatorModule__GetPanelAndFinishMasses_kg_Memoize(void)const  */

void __thiscall RadiatorModule__GetPanelAndFinishMasses_kg_Memoize(RadiatorModule *this)

{
  double *pdVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  double local_48;
  Darray_L_double_G_ local_40;
  undefined1 local_30;
  Darray_L_double_G_ local_2c;
  double local_1c;
  undefined8 local_14;
  double local_c;
  
  if ((char)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data._pad_0x0_0 == '\0') {
    iVar4 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    *(uint32_t *)&local_14 = (double)CONCAT44(iVar4 + 1,(undefined4)local_14);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&local_14 + 4));
    bVar3 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar4);
    if (bVar3) {
      pdVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar4 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar1 + iVar4 + -1) = (long long int (*)())(GetPanelAndFinishMasses_kg_Clear);
      *(undefined4 *)((int)pdVar1 + iVar4 * 8 + -4) = 0;
    }
    local_2c._pad_0x0_0 = 0;
    local_2c.Data = (double *)0x0;
    local_2c.Size = 0;
    local_2c.Capacity = 0;
    util__Darray_double___Darray_double(&local_2c,this[1]._pad_0x0_0);
    iVar4 = 0;
    if (0 < this[1]._pad_0x0_0) {
      do {
        if (this[1]._pad_0x18_6 == 0) {
          local_48 = 0.0;
        }
        else {
          local_48 = *(double *)(this[1]._pad_0x18_6 + 0x30);
        }
        *(uint32_t *)&local_1c = *(double *)&this->Panels;
        memcpy(&local_14, &local_1c, 4);
        local_c = util__Tan((double *)&this[1]._pad_0x8_2);
        local_c = local_c * local_1c;
        memcpy(&local_1c, &local_14, 8);
        dVar5 = util__Tan((double *)&this[1]._pad_0x10_4);
        *(uint32_t *)&local_1c = dVar5 * local_1c;
        local_c = (((double)(this[1]._pad_0x0_0 - iVar4) - 0.5) * (local_1c + local_c) +
                  this->FrontTaper_radians) * local_14;
        dVar5 = GetSurfaceFinishThickness_m(this);
        local_c = dVar5 * (local_c + local_c);
        dVar5 = GetPanelMass_kg(this,iVar4);
        iVar2 = local_2c.Size;
        local_c = dVar5 + local_c * local_48;
        *(uint32_t *)&local_14 = (double)CONCAT44(local_2c.Size + 1,(undefined4)local_14);
        util__Darray_double___SetSize(&local_2c,(int *)((int)&local_14 + 4));
        bVar3 = util__Darray_double___CheckSize(&local_2c,iVar2);
        if (bVar3) {
          local_2c.Data[local_2c.Size + -1] = local_c;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < this[1]._pad_0x0_0);
    }
    util__Darray_double___Darray_double(&local_40,&local_2c);
    local_30 = 1;
    util__Darray_double___operator
              ((Darray_L_double_G_ *)&this->GetHeatPipeSpacing_m_MemoizedValue,&local_40);
    *(undefined1 *)&(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data._pad_0x0_0 = local_30;
    local_40._pad_0x0_0 = (int)&vftable_63;
    if (local_40.Data != (double *)0x0) {
      port_op_delete(local_40.Data);
    }
    local_40.Data = (double *)0x0;
    local_40._pad_0x0_0 = (int)&vftable;
    local_2c._pad_0x0_0 = (int)&vftable_63;
    if (local_2c.Data != (double *)0x0) {
      port_op_delete(local_2c.Data);
    }
  }
  return;
}

//==== 005e3d00 GetPanelDimensions_m ====

/* public: struct util__Vec3_L_double_G_  RadiatorModule__GetPanelDimensions_m(int)const  */

Vec3_L_double_G_ * 
RadiatorModule__GetPanelDimensions_m
          (RadiatorModule *this,Vec3_L_double_G_ *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double *pdVar5;
  bool bVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_14;
  
  dVar8 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar2 = *(double *)&this->Panels;
  dVar9 = util__Tan((double *)&this[1]._pad_0x10_4);
  dVar3 = *(double *)&this->Panels;
  iVar7 = this[1]._pad_0x0_0 - param_1;
  dVar1 = this->FrontTaper_radians;
  if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
    iVar4 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    param_1 = iVar4 + 1;
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,&param_1);
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar4);
    if (bVar6) {
      pdVar5 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar4 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar5 + iVar4 + -1) = (long long int (*)())(GetTotalThickness_m_Clear);
      *(undefined4 *)((int)pdVar5 + iVar4 * 8 + -4) = 0;
    }
    dVar10 = GetSurfaceFinishThickness_m(this);
    dVar10 = dVar10 + dVar10;
    uStack_14 = CONCAT71((int7)((ulonglong)dVar10 >> 8),1);
    (*(uint32_t*)((char*)&(uStack_14)+4)) = (undefined4)((ulonglong)dVar10 >> 0x20);
    *(double *)&((this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData) = *(double *)&this->SurfaceFinish + *(double *)&this->SurfaceFinish + this->BackTaper_radians
         + dVar10;
    *(undefined4 *)&(this->GetHeatPipesPerPanel_MemoizedValue).IsValidData = (undefined4)uStack_14;
    *(undefined4 *)&(this->GetHeatPipesPerPanel_MemoizedValue) = (*(uint32_t*)((char*)&(uStack_14)+4));
    if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
  }
  __return_storage_ptr__->X = (double)iVar7 * (dVar9 * dVar3 + dVar8 * dVar2) + dVar1;
  __return_storage_ptr__->Y =
       *(double *)&(this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData;
  __return_storage_ptr__->Z = *(double *)&this->Panels;
  return __return_storage_ptr__;
}

//==== 005e3e40 GetPanelMass_kg ====

/* WARNING: Removing unreachable block (ram,0x005e3fd9) */
/* public: double __thiscall RadiatorModule__GetPanelMass_kg(int)const  */

double __thiscall RadiatorModule__GetPanelMass_kg(RadiatorModule *this,int param_1)

{
  undefined8 stack0xffffffdd;
  int iVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_14;
  undefined8 local_c;
  
  uVar5 = _uStack_24;
  bVar6 = false;
  if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
    iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    local_c = (double)CONCAT44(iVar1 + 1,(undefined4)local_c);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&local_c + 4));
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar1);
    if (bVar6) {
      pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar2 + iVar1 + -1) = (long long int (*)())(GetTotalThickness_m_Clear);
      *(undefined4 *)((int)pdVar2 + iVar1 * 8 + -4) = 0;
    }
    dVar9 = GetSurfaceFinishThickness_m(this);
    local_c = dVar9 + dVar9;
    _uStack_24 = CONCAT71(stack0xffffffdd,1);
    uStack_20 = SUB84(uVar5,4);
    *(double *)&((this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData) = *(double *)&this->SurfaceFinish + *(double *)&this->SurfaceFinish + this->BackTaper_radians
         + local_c;
    *(undefined4 *)&(this->GetHeatPipesPerPanel_MemoizedValue).IsValidData = uStack_24;
    *(undefined4 *)&this->GetHeatPipesPerPanel_MemoizedValue = uStack_20;
    bVar6 = (this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false;
  }
  if (bVar6) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dVar10 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar10 = dVar10 * *(double *)&this->Panels;
  dVar9 = util__Tan((double *)&this[1]._pad_0x10_4);
  iVar1 = this[1]._pad_0x0_0;
  local_c = dVar9 * *(double *)&this->Panels;
  dVar4 = local_c + dVar10;
  dVar9 = this->FrontTaper_radians;
  if ((char)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size == '\0') {
    iVar3 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    local_c = (double)CONCAT44(iVar3 + 1,(undefined4)local_c);
    util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
              ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&local_c + 4));
    bVar6 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar3);
    if (bVar6) {
      pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar3 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar2 + iVar3 + -1) = (long long int (*)())(GetHeatPipesPerPanel_Clear);
      *(undefined4 *)((int)pdVar2 + iVar3 * 8 + -4) = 0;
    }
    dVar7 = this->BackTaper_radians * 0.5;
    *(uint64_t *)&local_14 = CONCAT35((int3)((ulonglong)dVar10 >> 0x28),0x100000000);
    (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data =
         (double *)(int)(*(double *)&this->Panels / (dVar7 + dVar7));
    (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size = (*(uint32_t*)((char*)&(local_14)+4));
  }
  dVar11 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar7 = *(double *)&this->Panels;
  dVar10 = *(double *)&this->Panels;
  local_c = dVar10;
  dVar12 = util__Tan((double *)&this[1]._pad_0x10_4);
  dVar8 = this->BackTaper_radians * 0.5;
  return (local_c * *(double *)&(this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData *
          (((double)(iVar1 - param_1) - 0.5) * dVar4 + dVar9) -
         (((double)(this[1]._pad_0x0_0 - param_1) - 0.5) * (dVar12 * dVar10 + dVar11 * dVar7) +
         this->FrontTaper_radians) *
         (double)(int)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data *
         dVar8 * 3.141592653589793 * dVar8) *
         *(double *)(*(int *)((int)&this->ArmorThickness_m + 4) + 0x30);
}

//==== 005e40c0 GetPanelSurfaceAreas_m2_Clear ====

/* public: void __thiscall RadiatorModule__GetPanelSurfaceAreas_m2_Clear(void)const  */

void __thiscall RadiatorModule__GetPanelSurfaceAreas_m2_Clear(RadiatorModule *this)

{
  Darray_L_double_G_ local_14;
  
  local_14._pad_0x0_0 = (int)&vftable_63;
  local_14.Data = (double *)0x0;
  local_14.Size = 0;
  local_14.Capacity = 0;
  util__Darray_double___operator((Darray_L_double_G_ *)&this->Height_m,&local_14);
  local_14._pad_0x0_0 = (int)&vftable_63;
  if (local_14.Data != (double *)0x0) {
    port_op_delete(local_14.Data);
  }
  *(undefined1 *)&this->ArmorThickness_m = 0;
  return;
}

//==== 005e4120 GetPanelTotalMass_kg ====

/* WARNING: Removing unreachable block (ram,0x005e42df) */
/* public: double __thiscall RadiatorModule__GetPanelTotalMass_kg(void)const  */

double __thiscall RadiatorModule__GetPanelTotalMass_kg(RadiatorModule *this)

{
  double dVar1;
  double *pdVar2;
  int iVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_28;
  undefined8 local_14;
  undefined8 local_c;
  
  (*(uint32_t*)((char*)&(local_c)+4)) = 0;
  *(uint32_t *)&local_14 = 0.0;
  if (0 < this[1]._pad_0x0_0) {
    do {
      dVar4 = local_14;
      iVar6 = (*(uint32_t*)((char*)&(local_c)+4));
      if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
        iVar6 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
        *(uint32_t *)&local_14 = (double)CONCAT44(iVar6 + 1,(undefined4)local_14);
        util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                  ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
                   &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&local_14 + 4));
        bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                          ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                           &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar6);
        if (bVar5) {
          pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
          iVar6 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
          *(code **)(pdVar2 + iVar6 + -1) = (long long int (*)())(GetTotalThickness_m_Clear);
          *(undefined4 *)((int)pdVar2 + iVar6 * 8 + -4) = 0;
        }
        *(uint32_t *)&local_14 = GetSurfaceFinishThickness_m(this);
        iVar6 = (*(uint32_t*)((char*)&(local_c)+4));
        *(uint32_t *)&local_14 = local_14 * 2.0;
        uStack_3c = CONCAT31((*(uint24_t*)((char*)&(uStack_3c)+1)),1);
        *(double *)&((this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData) = *(double *)&this->SurfaceFinish + *(double *)&this->SurfaceFinish +
             this->BackTaper_radians + local_14;
        *(undefined4 *)&(this->GetHeatPipesPerPanel_MemoizedValue).IsValidData = uStack_3c;
        *(undefined4 *)&this->GetHeatPipesPerPanel_MemoizedValue = uStack_38;
        if ((this->GetHeatPipesPerPanel_MemoizedValue).IsValidData == false) {
          util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                          "IsValid()",(char *)0x0);
          DebugBreak();
        }
      }
      dVar10 = util__Tan((double *)&this[1]._pad_0x8_2);
      dVar1 = *(double *)&this->Panels;
      *(uint32_t *)&local_14 = util__Tan((double *)&this[1]._pad_0x10_4);
      iVar3 = this[1]._pad_0x0_0;
      *(uint32_t *)&local_14 = local_14 * *(double *)&this->Panels;
      dVar10 = local_14 + dVar10 * dVar1;
      dVar1 = this->FrontTaper_radians;
      iVar7 = iVar6;
      if ((char)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size == '\0') {
        iVar7 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
        *(uint32_t *)&local_14 = (double)CONCAT44(iVar7 + 1,(undefined4)local_14);
        util__Darray_L_util__tuple2_L_Order__Type_Cint_G___G___SetSize
                  ((Darray_L_util__tuple2_L_Order__Type_Cint_G___G_ *)
                   &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&local_14 + 4));
        bVar5 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                          ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                           &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar7);
        if (bVar5) {
          pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
          iVar7 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
          *(code **)(pdVar2 + iVar7 + -1) = (long long int (*)())(GetHeatPipesPerPanel_Clear);
          *(undefined4 *)((int)pdVar2 + iVar7 * 8 + -4) = 0;
        }
        dVar8 = this->BackTaper_radians * 0.5;
        *(uint32_t *)&(local_28) = CONCAT31((*(uint24_t*)((char*)&(local_28)+1)),1);
        (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data =
             (double *)(int)(*(double *)&this->Panels / (dVar8 + dVar8));
        (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size = local_28;
        iVar7 = (*(uint32_t*)((char*)&(local_c)+4));
      }
      local_c = util__Tan((double *)&this[1]._pad_0x8_2);
      local_c = local_c * *(double *)&this->Panels;
      dVar8 = *(double *)&this->Panels;
      *(uint32_t *)&local_14 = dVar8;
      dVar11 = util__Tan((double *)&this[1]._pad_0x10_4);
      dVar9 = this->BackTaper_radians * 0.5;
      local_14 = dVar4 + (*(double *)&(this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData *
                          local_14 * (((double)(iVar3 - iVar6) - 0.5) * dVar10 + dVar1) -
                         (((double)(this[1]._pad_0x0_0 - iVar7) - 0.5) * (dVar11 * dVar8 + local_c)
                         + this->FrontTaper_radians) *
                         (double)(int)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data *
                         dVar9 * 3.141592653589793 * dVar9) *
                         *(double *)(*(int *)((int)&this->ArmorThickness_m + 4) + 0x30);
      (*(uint32_t*)((char*)&(local_c)+4)) = iVar7 + 1;
    } while (iVar7 + 1 < this[1]._pad_0x0_0);
  }
  return local_14;
}

//==== 005e43f0 GetRadiatingEfficiency ====

/* public: double __thiscall RadiatorModule__GetRadiatingEfficiency(double)const  */

double __thiscall RadiatorModule__GetRadiatingEfficiency(RadiatorModule *this,double param_1)

{
  Material *this_00;
  double dVar1;
  double dVar2;
  
  this_00 = (Material *)this[1]._pad_0x18_6;
  if (this_00 == (Material *)0x0) {
    this_00 = *(Material **)((int)&this->ArmorThickness_m + 4);
  }
  dVar1 = Material__GetSafeUseTemperature_K(this_00);
  dVar2 = Material__GetSafeUseTemperature_K(*(Material **)((int)&this->ArmorThickness_m + 4));
  if (dVar1 <= dVar2) {
    dVar2 = dVar1;
  }
  if (dVar2 < param_1) {
    return 0.0;
  }
  dVar2 = GetZeta(this,param_1);
  if (0.2 <= dVar2) {
    libm_sse2_log10_precise(0.0);
    dVar2 = 0.532 - dVar2 * 0.405;
  }
  else {
    dVar2 = (1.0 - dVar2 * 1.125) + dVar2 * dVar2 * 1.6;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  return dVar2;
}

//==== 005e4cc0 GetRadiatorShader ====


/* class RadiatorShader * __cdecl GetRadiatorShader(void) */

RadiatorShader * __cdecl GetRadiatorShader(void)

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





//==== 005e5410 GetSurfaceFinishThickness_m ====

/* public: double __thiscall RadiatorModule__GetSurfaceFinishThickness_m(void)const  */

double __thiscall RadiatorModule__GetSurfaceFinishThickness_m(RadiatorModule *this)

{
  Material *this_00;
  double dVar1;
  double dVar2;
  double local_14;
  double local_c;
  
  if (this[1]._pad_0x18_6 == 0) {
    return 0.0;
  }
  *(uint32_t *)&local_14 = 0.0;
  local_c = 100.0;
  while( true ) {
    this_00 = (Material *)this[1]._pad_0x18_6;
    if (this_00 == (Material *)0x0) {
      this_00 = *(Material **)((int)&this->ArmorThickness_m + 4);
    }
    dVar1 = Material__GetSafeUseTemperature_K(this_00);
    dVar2 = Material__GetSafeUseTemperature_K(*(Material **)((int)&this->ArmorThickness_m + 4));
    if (dVar1 <= dVar2) {
      dVar2 = dVar1;
    }
    if (dVar2 < local_c) break;
    dVar2 = Physics__GetBlackbodyRadiationPeakWavelength_nm(local_c);
    dVar2 = Material__GetOpaqueThickness_m((Material *)this[1]._pad_0x18_6,dVar2);
    if (local_14 <= dVar2) {
      *(uint32_t *)&local_14 = dVar2;
    }
    local_c = local_c + 100.0;
  }
  if (this->BackTaper_radians <= local_14) {
    *(uint32_t *)&local_14 = this->BackTaper_radians;
  }
  return local_14;
}

//==== 005e54f0 GetTemperature_K ====

/* public: double __thiscall RadiatorCompartment__GetTemperature_K(void)const  */

double __thiscall RadiatorCompartment__GetTemperature_K(RadiatorCompartment *this)

{
  int iVar1;
  Material *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = this->_pad_0x38_14;
  dVar2 = GetTotalMassRemaining_kg(this);
  dVar2 = Material__GetTemperatureIncreaseFromEnergyDelta_K
                    (*(Material **)(iVar1 + 0xd4),*(double *)&this->_pad_0x60_24,dVar2);
  iVar1 = this->_pad_0x38_14;
  this_00 = *(Material **)(iVar1 + 0x110);
  if (this_00 == (Material *)0x0) {
    this_00 = *(Material **)(iVar1 + 0xd4);
  }
  dVar3 = Material__GetSafeUseTemperature_K(this_00);
  dVar4 = Material__GetSafeUseTemperature_K(*(Material **)(iVar1 + 0xd4));
  if (dVar3 <= dVar4) {
    dVar4 = dVar3;
  }
  if (dVar4 <= dVar2) {
    dVar2 = dVar4;
  }
  return dVar2;
}

//==== 005e5570 GetThermalChartEfficiency ====


/* private: double __thiscall RadiatorModule__GetThermalChartEfficiency(double)const  */

double __thiscall RadiatorModule__GetThermalChartEfficiency(RadiatorModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = GetRadiatingEfficiency(this,param_1);
  return dVar1 * 100.0;
}





//==== 005e5590 GetThermalChartEmissivity ====


/* private: double __thiscall RadiatorModule__GetThermalChartEmissivity(double)const  */

double __thiscall RadiatorModule__GetThermalChartEmissivity(RadiatorModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = GetEmissivity(this,param_1);
  return dVar1 * 100.0;
}





//==== 005e55b0 GetThermalChartHeatDissipation_MW ====


/* private: double __thiscall RadiatorModule__GetThermalChartHeatDissipation_MW(double)const  */

double __thiscall
RadiatorModule__GetThermalChartHeatDissipation_MW(RadiatorModule *this,double param_1)

{
  double dVar1;
  
  dVar1 = GetTotalHeatDissipated_W(this,param_1);
  return dVar1 / 1000000.0;
}





//==== 005e55d0 GetTotalExtendedLength_m ====

/* public: double __thiscall RadiatorModule__GetTotalExtendedLength_m(void)const  */

double __thiscall RadiatorModule__GetTotalExtendedLength_m(RadiatorModule *this)

{
  double dVar1;
  
  dVar1 = GetExtendedPanelWidth_m(this,1.0);
  return dVar1 * (double)this[1]._pad_0x0_0;
}

//==== 005e5610 GetTotalHeatDissipated_W ====

/* public: double __thiscall RadiatorModule__GetTotalHeatDissipated_W(double)const  */

double __thiscall RadiatorModule__GetTotalHeatDissipated_W(RadiatorModule *this,double param_1)

{
  int iVar1;
  Material *this_00;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = this[1]._pad_0x0_0;
  dVar2 = *(double *)&this->Panels;
  dVar3 = util__Tan((double *)&this[1]._pad_0x10_4);
  dVar4 = util__Tan((double *)&this[1]._pad_0x8_2);
  this_00 = (Material *)this[1]._pad_0x18_6;
  dVar2 = (double)this[1]._pad_0x0_0 * *(double *)&this->Panels *
          (this->FrontTaper_radians + (dVar3 + dVar4) * (double)iVar1 * dVar2 * 0.5);
  if (this_00 == (Material *)0x0) {
    this_00 = *(Material **)((int)&this->ArmorThickness_m + 4);
  }
  dVar4 = Material__GetSafeUseTemperature_K(this_00);
  dVar3 = Material__GetSafeUseTemperature_K(*(Material **)((int)&this->ArmorThickness_m + 4));
  if (dVar4 <= dVar3) {
    dVar3 = dVar4;
  }
  if (dVar3 < param_1) {
    return 0.0;
  }
  dVar3 = param_1;
  dVar4 = GetEmissivity(this,param_1);
  dVar3 = Physics__GetBlackbodyRadiation_W(dVar2 + dVar2,dVar4,dVar3);
  dVar2 = GetRadiatingEfficiency(this,param_1);
  dVar2 = dVar2 * dVar3;
  if ((NAN(dVar2)) || ((dVar2 != 0.0 && (NAN(dVar2 / dVar2))))) {
    util__LogAssert("\\mac\\home\\documents\\code\\cde\\cde\\logistic\\modules\\othermodules\\radiatormodules.cpp"
                    ,0x140,"IsNumericallyValid(HeatDissipated_W)",(char *)0x0);
    DebugBreak();
  }
  return dVar2;
}

//==== 005e5ac0 GetTotalSurfaceArea_m2 ====

/* public: double __thiscall RadiatorModule__GetTotalSurfaceArea_m2(void)const  */

double __thiscall RadiatorModule__GetTotalSurfaceArea_m2(RadiatorModule *this)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = this[1]._pad_0x0_0;
  dVar2 = *(double *)&this->Panels;
  dVar3 = util__Tan((double *)&this[1]._pad_0x10_4);
  dVar4 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar2 = (double)this[1]._pad_0x0_0 * *(double *)&this->Panels *
          (this->FrontTaper_radians + (dVar3 + dVar4) * (double)iVar1 * dVar2 * 0.5);
  return dVar2 + dVar2;
}

//==== 005e5b50 GetTotalThickness_m_Clear ====


/* public: void __thiscall RadiatorModule__GetTotalThickness_m_Clear(void)const  */

void __thiscall RadiatorModule__GetTotalThickness_m_Clear(RadiatorModule *this)

{
  (this->GetHeatPipesPerPanel_MemoizedValue).IsValidData = false;
  *(undefined8 *)&(this->GetPanelAndFinishMasses_kg_MemoizedValue).IsValidData = 0;
  return;
}





//==== 005e5b70 GetWidth_m ====

/* public: double __thiscall RadiatorModule__GetWidth_m(void)const  */

double __thiscall RadiatorModule__GetWidth_m(RadiatorModule *this)

{
  return (double)this[1]._pad_0x0_0 * *(double *)&this->Panels;
}

//==== 005e6000 GetZeta ====


/* public: double __thiscall RadiatorModule__GetZeta(double)const  */

double __thiscall RadiatorModule__GetZeta(RadiatorModule *this,double param_1)

{
  undefined8 stack0xffffffed;
  int iVar1;
  double *pdVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 uStack_c;
  
  uVar3 = _uStack_14;
  if (*(char *)&this->PanelWidth_m == '\0') {
    iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
    uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
    util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
              ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
               &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&uStack_c + 4));
    bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                      ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                       &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar1);
    if (bVar4) {
      pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
      iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      *(code **)(pdVar2 + iVar1 + -1) = (long long int (*)())(GetHeatPipeSpacing_m_Clear);
      *(undefined4 *)((int)pdVar2 + iVar1 * 8 + -4) = 0;
    }
    bVar4 = (char)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size == '\0';
    if (bVar4) {
      iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
      uStack_c = (double)CONCAT44(iVar1 + 1,(undefined4)uStack_c);
      util__Darray_struct_util__tuple2_enum_Order__Type_int_____SetSize
                ((Darray_L_struct_util__tuple2_L_enum_Order__Type_Cint_G___G_ *)
                 &this->GetPanelAndFinishMasses_kg_MemoizedValue,(int *)((int)&uStack_c + 4));
      bVar4 = util__Darray_void____thiscall_Fleet_____void_const____CheckSize
                        ((Darray_L_void____thiscall_Fleet___P__void_const__G_ *)
                         &this->GetPanelAndFinishMasses_kg_MemoizedValue,iVar1);
      if (bVar4) {
        pdVar2 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Data;
        iVar1 = (this->GetPanelAndFinishMasses_kg_MemoizedValue).Data.Size;
        *(code **)(pdVar2 + iVar1 + -1) = (long long int (*)())(GetHeatPipesPerPanel_Clear);
        *(undefined4 *)((int)pdVar2 + iVar1 * 8 + -4) = 0;
      }
      dVar7 = this->BackTaper_radians * 0.5;
      (*(uint40_t*)&(uStack_c)) = CONCAT14(1,(undefined4)uStack_c);
      (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data =
           (double *)(int)(*(double *)&this->Panels / (dVar7 + dVar7));
      bVar4 = false;
      (this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Size = (*(uint32_t*)((char*)&(uStack_c)+4));
    }
    pcVar5 = DebugBreak_exref;
    if (bVar4) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      pcVar5 = DebugBreak_exref;
      DebugBreak();
    }
    _uStack_14 = CONCAT71(stack0xffffffed,1);
    uStack_10 = SUB84(uVar3,4);
    *(double *)&((this->GetPanelSurfaceAreas_m2_MemoizedValue).IsValidData) = *(double *)&this->Panels /
         (double)((int)(this->GetPanelSurfaceAreas_m2_MemoizedValue).Data.Data + 1);
    *(undefined4 *)&this->PanelWidth_m = uStack_14;
    *(undefined4 *)((int)&this->PanelWidth_m + 4) = uStack_10;
    if (*(char *)&this->PanelWidth_m == '\0') {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      (*pcVar5)();
    }
  }
  uStack_c = *(double *)&(this->GetPanelSurfaceAreas_m2_MemoizedValue).IsValidData * 0.5;
  dVar6 = *(double *)&this->SurfaceFinish / this->BackTaper_radians;
  dVar7 = GetEmissivity(this,param_1);
  dVar7 = dVar7 * uStack_c * uStack_c * 5.670373e-08 * (dVar6 * dVar6 + 1.0) *
                  param_1 * param_1 * param_1;
  dVar7 = (dVar7 + dVar7) /
          (*(double *)(*(int *)((int)&this->ArmorThickness_m + 4) + 0xa8) * this->BackTaper_radians)
  ;
  if (dVar7 <= 0.01) {
    dVar7 = 0.01;
  }
  return dVar7;
}





//==== 005e62e0 IsDamaged_005e62e0 ====

/* public: virtual bool __thiscall RadiatorCompartment__IsDamaged(void)const  */

bool __thiscall RadiatorCompartment__IsDamaged(RadiatorCompartment *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ArmorPlate *this_00;
  
  iVar2 = (**(code **)((this->RadiatorArmor)._padfb0 + 0xc))();
  if (iVar2 == 0) {
    return true;
  }
  uVar3 = (**(code **)((this->RadiatorArmor)._padfb0 + 0xc))();
  this_00 = (ArmorPlate *)(**(code **)((this->RadiatorArmor)._padfb0 + 4))();
  bVar1 = ArmorPlate__IsDestroyed(this_00);
  return uVar3 == bVar1;
}

//==== 005e6330 IsDestroyed_005e6330 ====

/* public: virtual bool __thiscall RadiatorCompartment__IsDestroyed(void)const  */

bool __thiscall RadiatorCompartment__IsDestroyed(RadiatorCompartment *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->RadiatorArmor)._padfb0 + 0xc))();
  return iVar1 == 0;
}

//==== 005e6350 IsDisabled ====


/* public: virtual bool __thiscall RadiatorCompartment__IsDisabled(void)const  */

bool __thiscall RadiatorCompartment__IsDisabled(RadiatorCompartment *this)

{
  return this->ExtendedPercent <= 1.0 && this->ExtendedPercent != 1.0;
}





//==== 005e6f00 Render_005e6f00 ====


/* WARNING: Enum "FT_Encoding_": GroupType__Some values do not have unique names */
/* public: virtual void  ModuleDiagram_L_classRadiatorModule_G___Render(void)const  */

void __thiscall
ModuleDiagram_class_RadiatorModule___Render(ModuleDiagram_L_class_RadiatorModule_G_ *this)

{
  undefined8 stack0xfffffffc;
  Manager *pMVar1;
  NormalShader *pNVar2;
  Vec2_L_int_G_ VVar3;
  ShaderStack SStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  pNVar2 = NormalShader__GetStatic();
  Graphics__ShaderStack__ShaderStack(&SStack_9,(Shader *)pNVar2);
  pMVar1 = *(Manager **)(this + 8);
  UIWidget__GetTrueSize((UIWidget *)this,&VVar3);
  RadiatorModule__RenderDiagram(*(RadiatorModule **)(this + 0x168),pMVar1,*(Vec2_L_int_G_ *)VVar3.X);
  Graphics__ShaderStack___ShaderStack(&SStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005e6f60 Render_005e6f60 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall RadiatorCompartment__Render(void)const  */

void __thiscall RadiatorCompartment__Render(RadiatorCompartment *this)

{
  undefined8 stack0xfffffffc;
  ReferenceController *this_00;
  RadiatorModule *this_01;
  SharedPtr_L_ArmorTextureHandler_G_ *pSVar1;
  bool bVar2;
  SpacecraftShader *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  ReferenceControllerRegistry *this_02;
  uint uVar8;
  SharedPtr_L_ArmorTextureHandler_G_ *pSVar9;
  uint uVar10;
  float10 fVar11;
  double dVar12;
  ArmorTextureHandler *this_03;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *pDVar13;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ local_3c;
  Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ local_2c;
  RadiatorCompartment *local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(uint32_t *)&local_1c = (uint32_t)(uintptr_t)(this);
  *(uint32_t *)&local_18 = GetTemperature_K(this);
  if (798.0 <= local_18) {
    dVar12 = GetTemperature_K(this);
    *(uint32_t *)&local_18 = Physics__GetBlackbodyPercentEnergyVisibleEstimate(dVar12);
    fVar11 = (float10)(**(code **)(this->_pad_0x0_0 + 0x2c))();
    *(uint64_t *)&local_18 = (double)(fVar11 / (float10)local_18);
    dVar12 = GetTotalSurfaceAreaRemaining_m2(this);
    *(uint32_t *)&local_10 = local_18 / (dVar12 * 0.5);
    pSVar3 = SpacecraftShader__GetStatic();
    (**(code **)(pSVar3->_pad_0x0_0 + 0xb4))();
  }
  iVar4 = (**(code **)(this->_pad_0x4c_19 + 0xc))();
  if (0 < iVar4) {
    puVar5 = (undefined4 *)(**(code **)(this->_pad_0x4c_19 + 0x1c))();
    bVar2 = ArmorTextureHandler__IsGenerated((ArmorTextureHandler *)*puVar5);
    if (bVar2) {
      local_2c.Capacity = this->_pad_0x58_22;
      local_2c._pad_0x0_0 = (int)&vftable_91;
      local_2c.Data = (SharedPtr_L_ArmorTextureHandler_G_ *)0x0;
      local_2c.Size = 0;
      uVar6 = (**(code **)(this->_pad_0x4c_19 + 0xc))();
      (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)uVar6);
      util__Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G___SetSize
                (&local_2c,(int *)((int)&local_18 + 4));
      uVar10 = local_2c.Capacity;
      uVar8 = -(uint)((int)((ulonglong)(uint)local_2c.Capacity * 8 >> 0x20) != 0) |
              (uint)((ulonglong)(uint)local_2c.Capacity * 8);
      puVar7 = (uint *)(uintptr_t)(port_op_new(-(uint)(0xfffffffb < uVar8) | uVar8 + 4));
      if (puVar7 == (uint *)0x0) {
        pSVar9 = (SharedPtr_L_ArmorTextureHandler_G_ *)0x0;
      }
      else {
        *puVar7 = uVar10;
        pSVar9 = (SharedPtr_L_ArmorTextureHandler_G_ *)(puVar7 + 1);
        pSVar1 = pSVar9;
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          pSVar1->Pointer = (ArmorTextureHandler *)0x0;
          pSVar1->Controller = (ReferenceController *)0x0;
          pSVar1 = pSVar1 + 1;
        }
      }
      puVar5 = (undefined4 *)this->_pad_0x50_20;
      local_2c.Data = pSVar9;
      if (puVar5 != puVar5 + this->_pad_0x54_21 * 2) {
        do {
          this_03 = pSVar9->Pointer;
          (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)(pSVar9->Controller);
          pSVar9->Pointer = (ArmorTextureHandler *)*puVar5;
          this_00 = (ReferenceController *)puVar5[1];
          pSVar9->Controller = this_00;
          if (this_00 != (ReferenceController *)0x0) {
            util__ReferenceController__AddStrongReference(this_00);
          }
          if (((*(uint32_t*)((char*)&(local_18)+4)) != (ReferenceController *)0x0) &&
             (bVar2 = util__ReferenceController__ReleaseStrongReference((ReferenceController*)((ReferenceController*)((*(uint32_t*)((char*)&(local_18)+4))))), bVar2)) {
            if (this_03 != (ArmorTextureHandler *)0x0) {
              ArmorTextureHandler___scalar_deleting_destructor(this_03,1);
            }
            this_02 = util__ReferenceControllerRegistry__Get();
            util__ReferenceControllerRegistry__PointerWasDestroyed(this_02,this_03);
          }
          puVar5 = puVar5 + 2;
          pSVar9 = pSVar9 + 1;
        } while (puVar5 != (undefined4 *)(local_1c->_pad_0x50_20 + local_1c->_pad_0x54_21 * 8));
      }
      (*(uint32_t*)((char*)&(local_10)+4)) = (uint32_t)(uintptr_t)(&local_2c);
      bVar2 = true;
      (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)0x0);
      this = local_1c;
      goto LAB_005e7139;
    }
  }
  local_3c._pad_0x0_0 = (int)&vftable_91;
  (*(uint32_t*)((char*)&(local_10)+4)) = (uint32_t)(uintptr_t)(&local_3c);
  local_3c.Data = (SharedPtr_L_ArmorTextureHandler_G_ *)0x0;
  bVar2 = false;
  local_3c.Size = 0;
  local_3c.Capacity = 0;
  (*(uint32_t*)((char*)&(local_18)+4)) = (uint32_t)(uintptr_t)((ReferenceController *)0x2);
LAB_005e7139:
  iVar4 = (**(code **)((this->RadiatorArmor)._padfb0 + 0xc))();
  dVar12 = this->ExtendedPercent;
  this_01 = (RadiatorModule *)this->_pad_0x38_14;
  pDVar13 = (Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *)(uintptr_t)((*(uint32_t*)((char*)&(local_10)+4)));
  fVar11 = (float10)(**(code **)(this->_pad_0x0_0 + 0x28))();
  RadiatorModule__Render(this_01,(double)fVar11,dVar12,iVar4,pDVar13);
  if ((*(uint32_t*)((char*)&(local_18)+4)) != (ReferenceController *)0x0) {
    local_3c._pad_0x0_0 = (int)&vftable_91;
    if (local_3c.Data != (SharedPtr_L_ArmorTextureHandler_G_ *)0x0) {
      util__SharedPtr_L_ArmorTextureHandler_G_____vector_deleting_destructor_(local_3c.Data,3);
    }
    local_3c.Data = (SharedPtr_L_ArmorTextureHandler_G_ *)0x0;
    local_3c._pad_0x0_0 = (int)&vftable;
  }
  if ((bVar2) &&
     (local_2c._pad_0x0_0 = (int)&vftable_91,
     local_2c.Data != (SharedPtr_L_ArmorTextureHandler_G_ *)0x0)) {
    util__SharedPtr_L_ArmorTextureHandler_G_____vector_deleting_destructor_(local_2c.Data,3);
  }
  return;
}

//==== 005e71d0 Render_005e71d0 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void  RadiatorModule__Render(double,double,int,class util__Darray_L_class_util__SharedPtr_L_classArmorTextureHandler_G__G_ const &)const  */

void 
RadiatorModule__Render
          (RadiatorModule *this,double param_1,double param_2,int param_3,
          Darray_L_util__SharedPtr_L_ArmorTextureHandler_G___G_ *param_4)

{
  undefined8 stack0xfffffffc;
  Quaternion_L_double_G_ QVar1;
  Quaternion_L_double_G_ QVar2;
  int iVar3;
  SpacecraftShader *pSVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 local_34;
  uint local_2c;
  undefined8 local_28;
  TextureStack local_20;
  bool local_e [4];
  TransformStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar3 = (**(code **)(param_4->_pad_0x0_0 + 0xc))();
  local_e[0] = 0 < iVar3;
  pSVar4 = SpacecraftShader__GetStatic();
  (**(code **)(pSVar4->_pad_0x0_0 + 0x68))(local_e);
  if (local_e[0] == false) {
    uVar6 = 0xffffffff;
  }
  else {
    puVar5 = (undefined4 *)(**(code **)(param_4->_pad_0x0_0 + 0x1c))();
    uVar6 = ArmorTextureHandler__GetTexture((ArmorTextureHandler *)*puVar5);
  }
  Graphics__TextureStack__TextureStack(&local_20,uVar6,Type__TwoDimensional,2);
  dVar10 = GetExtendedPanelWidth_m(this,param_2);
  *(uint32_t *)&local_28 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar11 = util__Tan((double *)&this[1]._pad_0x10_4);
  *(uint32_t *)&local_28 = local_28 - dVar11;
  dVar11 = *(double *)&this->Panels * local_28;
  Graphics__Translate(0.0,0.0,(dVar10 / 1000.0) * -0.5);
  *(uint32_t *)&local_2c = 0;
  if (0 < param_3) {
    do {
      uVar6 = local_2c;
      Graphics__Translate((dVar11 * 0.5) / 1000.0,0.0,dVar10 / 1000.0);
      local_28 = (double)(int)((~uVar6 & 1) * 2 + -1) *
                 ((1.0 - param_2) * 1.5707963267948966 + param_2 * 0.13962634015954636);
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      dVar8 = local_28 * 0.5;
      local_34 = dVar8;
      libm_sse2_sin_precise(0.0);
      uVar7 = (undefined4)local_34;
      uVar9 = (*(uint32_t*)((char*)&(local_34)+4));
      libm_sse2_cos_precise(0.0);
      local_6c = SUB84(dVar8 * 0.0,0);
      uStack_68 = (undefined4)((ulonglong)(dVar8 * 0.0) >> 0x20);
      QVar2.Y = local_6c;
      QVar2.X = dVar8;
      QVar2.Z = uStack_68;
      QVar2.Z = local_6c;
      QVar2.W = uStack_68;
      QVar2.W = uVar7;
      (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar9;
      Graphics__Rotate(QVar2);
      iVar3 = uVar6 * 2;
      local_34 = (double)CONCAT44(iVar3,(undefined4)local_34);
      puVar5 = (undefined4 *)
               (**(code **)(this->RadiatorModuleMemoizationHandlerInstance).ResetFunctions.Size)
                         ((int)&local_34 + 4);
      GameModel__Render((GameModel *)*puVar5,param_1,0.0,local_e[0]);
      Graphics__TransformStack___TransformStack(&local_9);
      Graphics__TransformStack__TransformStack(&local_a,Style__Default);
      dVar8 = local_28 * -0.5;
      *(uint32_t *)&local_28 = dVar8;
      libm_sse2_sin_precise(0.0);
      uVar7 = (undefined4)local_28;
      uVar9 = (*(uint32_t*)((char*)&(local_28)+4));
      libm_sse2_cos_precise(0.0);
      local_5c = SUB84(dVar8 * 0.0,0);
      uStack_58 = (undefined4)((ulonglong)(dVar8 * 0.0) >> 0x20);
      QVar1.Y = local_5c;
      QVar1.X = dVar8;
      QVar1.Z = uStack_58;
      QVar1.Z = local_5c;
      QVar1.W = uStack_58;
      QVar1.W = uVar7;
      (*(uint32_t *)((char *)&(QVar1.W) + 4)) = uVar9;
      Graphics__Rotate(QVar1);
      local_34 = (double)CONCAT44(iVar3 + 1,(undefined4)local_34);
      puVar5 = (undefined4 *)
               (**(code **)(this->RadiatorModuleMemoizationHandlerInstance).ResetFunctions.Size)
                         ((int)&local_34 + 4);
      GameModel__Render((GameModel *)*puVar5,param_1,0.0,local_e[0]);
      Graphics__TransformStack___TransformStack(&local_a);
      *(uint32_t *)&local_2c = local_2c + 1;
    } while ((int)local_2c < param_3);
  }
  Graphics__TextureStack___TextureStack(&local_20);
  return;
}

//==== 005e7cf0 RenderSimple_005e7cf0 ====

/* public: virtual void __thiscall RadiatorCompartment__RenderSimple(void)const  */

void __thiscall RadiatorCompartment__RenderSimple(RadiatorCompartment *this)

{
  int iVar1;
  
  iVar1 = (**(code **)((this->RadiatorArmor)._padfb0 + 0xc))();
  RadiatorModule__RenderSimple((RadiatorModule *)this->_pad_0x38_14,this->ExtendedPercent,iVar1);
  return;
}

//==== 005e7d20 RenderSimple_005e7d20 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall RadiatorModule__RenderSimple(double,int)const  */

void __thiscall RadiatorModule__RenderSimple(RadiatorModule *this,double param_1,int param_2)

{
  undefined8 stack0xfffffffc;
  int *piVar1;
  Quaternion_L_double_G_ QVar2;
  Quaternion_L_double_G_ QVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_1c;
  undefined8 local_14;
  TransformStack local_a;
  TransformStack local_9;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  dVar9 = GetExtendedPanelWidth_m(this,param_1);
  *(uint32_t *)&local_14 = util__Tan((double *)&this[1]._pad_0x8_2);
  dVar10 = util__Tan((double *)&this[1]._pad_0x10_4);
  *(uint32_t *)&local_14 = local_14 - dVar10;
  dVar10 = *(double *)&this->Panels * local_14;
  Graphics__Translate(0.0,0.0,(dVar9 / 1000.0) * -0.5);
  uVar5 = 0;
  if (0 < param_2) {
    piVar1 = &(this->RadiatorModuleMemoizationHandlerInstance).ResetFunctions.Size;
    do {
      Graphics__Translate((dVar10 * 0.5) / 1000.0,0.0,dVar9 / 1000.0);
      local_14 = (double)(int)((~uVar5 & 1) * 2 + -1) *
                 ((1.0 - param_1) * 1.5707963267948966 + param_1 * 0.13962634015954636);
      Graphics__TransformStack__TransformStack(&local_9,Style__Default);
      dVar7 = local_14 * 0.5;
      *(uint32_t *)&local_1c = dVar7;
      libm_sse2_sin_precise(0.0);
      uVar6 = (undefined4)local_1c;
      uVar8 = (*(uint32_t*)((char*)&(local_1c)+4));
      libm_sse2_cos_precise(0.0);
      local_54 = SUB84(dVar7 * 0.0,0);
      uStack_50 = (undefined4)((ulonglong)(dVar7 * 0.0) >> 0x20);
      QVar3.Y = local_54;
      QVar3.X = dVar7;
      QVar3.Z = uStack_50;
      QVar3.Z = local_54;
      QVar3.W = uStack_50;
      QVar3.W = uVar6;
      (*(uint32_t *)((char *)&(QVar3.W) + 4)) = uVar8;
      Graphics__Rotate(QVar3);
      *(uint32_t *)&local_1c = (double)CONCAT44(uVar5 * 2,(undefined4)local_1c);
      puVar4 = (undefined4 *)(**(code **)*piVar1)((int)&local_1c + 4);
      GameModel__RenderSimple((GameModel *)*puVar4);
      Graphics__TransformStack___TransformStack(&local_9);
      Graphics__TransformStack__TransformStack(&local_a,Style__Default);
      dVar7 = local_14 * -0.5;
      *(uint32_t *)&local_14 = dVar7;
      libm_sse2_sin_precise(0.0);
      uVar6 = (undefined4)local_14;
      uVar8 = (*(uint32_t*)((char*)&(local_14)+4));
      libm_sse2_cos_precise(0.0);
      local_44 = SUB84(dVar7 * 0.0,0);
      uStack_40 = (undefined4)((ulonglong)(dVar7 * 0.0) >> 0x20);
      QVar2.Y = local_44;
      QVar2.X = dVar7;
      QVar2.Z = uStack_40;
      QVar2.Z = local_44;
      QVar2.W = uStack_40;
      QVar2.W = uVar6;
      (*(uint32_t *)((char *)&(QVar2.W) + 4)) = uVar8;
      Graphics__Rotate(QVar2);
      *(uint32_t *)&local_1c = (double)CONCAT44(uVar5 * 2 + 1,(undefined4)local_1c);
      puVar4 = (undefined4 *)(**(code **)*piVar1)((int)&local_1c + 4);
      GameModel__RenderSimple((GameModel *)*puVar4);
      Graphics__TransformStack___TransformStack(&local_a);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < param_2);
  }
  return;
}

//==== 005e7f60 SetAxis ====


/* public: struct LineGraph__Args &  LineGraph__Args__SetAxis(class util__Str_L_char_G_ const
   &,class util__Str_L_char_G_ const &,class util__Str_L_char_G_ const &,class util__Str_L_char_G_ const &) */

Args * 
LineGraph__Args__SetAxis
          (Args *this,Str_L_char_G_ *param_1,Str_L_char_G_ *param_2,Str_L_char_G_ *param_3,Str_L_char_G_ *param_4)

{
  Str_L_char_G_ SStack_10;
  
  util__Str_char___Str_char(&SStack_10,param_1);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x1c),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,param_2);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x30),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,param_3);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x44),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  util__Str_char___Str_char(&SStack_10,param_4);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  util__Str_char___operator__o8((Str_L_char_G_ *)(this + 0x58),&SStack_10);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return this;
}





//==== 005e8080 SetSize_005e8080 ====


/* private: void  util__Darray_L_structArmorPlate_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_ArmorPlate___SetSize(Darray_L_struct_ArmorPlate_G_ *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar2 = param_1;
  iVar3 = *param_1;
  if (((iVar3 < 1) && (0x3ffffffe < iVar3)) || ((iVar3 < 0x40000000 && (-1 < iVar3)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\darray.inl",0x2a5,
              "Between(value, 0, DARRAY_MAX_SIZE)",(char *)0x0);
    DebugBreak();
    iVar3 = *piVar2;
  }
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar6 = 0x3fffffff;
  if (iVar3 < 0x3fffffff) {
    iVar6 = iVar3;
  }
  if ((iVar6 < *(int *)(this + 8)) && (iVar3 = *(int *)(this + 4), iVar3 != 0)) {
    puVar5 = (undefined4 *)(iVar3 + iVar6 * 4);
    if (puVar5 != (undefined4 *)(iVar3 + *(int *)(this + 8) * 4)) {
      do {
        puVar4 = (undefined4 *)ArmorPlate__ArmorPlate((ArmorPlate *)&param_1,0.0);
        *puVar5 = *puVar4;
        puVar5 = puVar5 + 1;
      } while (puVar5 != (undefined4 *)(*(int *)(this + 4) + *(int *)(this + 8) * 4));
    }
    *(int *)(this + 8) = iVar6;
    return;
  }
  *(int *)(this + 8) = iVar6;
  return;
}





//==== 005e8140 SetSize_005e8140 ====


/* private: void  util__Darray_L_structWorldLight_G___SetSize(int const &) */

void __thiscall
util__Darray_struct_WorldLight___SetSize(Darray_L_struct_WorldLight_G_ *this,int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_70 [24];
  undefined1 uStack_10;
  int iStack_8;
  
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
  iStack_8 = 0x3fffffff;
  if (iVar2 < 0x3fffffff) {
    iStack_8 = iVar2;
  }
  if (((iStack_8 < *(int *)(this + 8)) && (iVar2 = *(int *)(this + 4), iVar2 != 0)) &&
     (puVar3 = (undefined4 *)(iStack_8 * 0x68 + iVar2),
     puVar3 != (undefined4 *)(*(int *)(this + 8) * 0x68 + iVar2))) {
    do {
      uStack_10 = 0;
      puVar4 = puVar3 + 0x1a;
      auStack_70[0] = 0;
      auStack_70[1] = 0;
      auStack_70[2] = 0;
      auStack_70[3] = 0;
      auStack_70[4] = 0;
      auStack_70[5] = 0;
      auStack_70[6] = 0;
      auStack_70[7] = 0;
      auStack_70[8] = 0;
      auStack_70[9] = 0;
      auStack_70[10] = 0;
      auStack_70[0xb] = 0;
      auStack_70[0xc] = 0;
      auStack_70[0xd] = 0;
      auStack_70[0xe] = 0;
      auStack_70[0xf] = 0;
      auStack_70[0x10] = 0;
      auStack_70[0x11] = 0;
      auStack_70[0x12] = 0;
      auStack_70[0x13] = 0;
      auStack_70[0x14] = 0;
      auStack_70[0x15] = 0;
      auStack_70[0x16] = 0;
      auStack_70[0x17] = 0;
      puVar5 = auStack_70;
      for (iVar2 = 0x1a; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      }
      puVar3 = puVar4;
    } while (puVar4 != (undefined4 *)(*(int *)(this + 8) * 0x68 + *(int *)(this + 4)));
  }
  *(int *)(this + 8) = iStack_8;
  return;
}





//==== 005e8210 StaticFactory_005e8210 ====

/* public: static class util__Reflectable * __cdecl RadiatorModule__ReflectionInfoStruct_L_class_RadiatorModule_G___StaticFactory(void) */

Reflectable * __cdecl RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(0x118));
  if (this != (Module *)0x0) {
    memset(this,0,0x118);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__15;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__15;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity = 0;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_109;
    *(undefined4 *)&this[1].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[1].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = (undefined4)(uintptr_t) (undefined **)(0);
    *(undefined8 *)&this[1].GetTotalPowerUsage_W_MemoizedValue.IsValidData = 0;
    *(undefined1 *)&this[1].Models._padfb0 = 0;
    this[1].Models.Size = (int)&vftable_63;
    this[1].Models.Capacity = 0;
    this[1].UsesCustomName = false;
    this[1].IsUserCreated = false;
  *(undefined2 *)((char *)&this[1] + 0x4a) = 0;
  *(undefined4 *)((char *)&this[1] + 0x4c) = 0;
    *(undefined1 *)&this[2]._pad_0x0_0 = 0;
    this[2]._pad_0x4_1 = 0;
    *(undefined1 *)&this[2]._pad_0x8_2 = 0;
    this[2]._pad_0x10_4 = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions._pad_0x0_0 = 0;
    *(undefined1 *)&this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Data = 0;
    this[2].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity =
         (int)&vftable_63;
    *(undefined4 *)&this[2].ModuleMemoizationHandlerInstance = 0;
    *(undefined4 *)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data = 0;
    *(undefined4 *)((int)&this[2].GetTotalPowerUsage_W_MemoizedValue.Data + 4) = 0;
    this[2].GetTotalPowerUsage_W_MemoizedValue.IsValidData = false;
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005e8310 StaticGetMemberByIndex_005e8310 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d1e3cec7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d1e3cec7__thread_safe_static_guard_0__);
    if ( cde_l2_d1e3cec7__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_383c1ea3_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096d994 = 0;
      _DAT_0096d998 = 0;
      _DAT_0096d99c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d9a0,"Unused");
      _DAT_0096d9ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d9b0,"SteamWorkshopID");
      _DAT_0096d9bc = 6;
      _DAT_0096d9c0 = 0x10;
      _DAT_0096d9c4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d9c8,"AStr");
      _DAT_0096d9d4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d9d8,"Description");
      _DAT_0096d9e4 = 6;
      _DAT_0096d9e8 = 0x20;
      _DAT_0096d9ec = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d9f0,"AStr");
      _DAT_0096d9fc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da00,"UsesCustomName");
      _DAT_0096da0c = 1;
      _DAT_0096da10 = 0x68;
      _DAT_0096da14 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da18,"bool");
      _DAT_0096da24 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da28,"Composition");
      _DAT_0096da34 = 8;
      _DAT_0096da38 = 0xd4;
      _DAT_0096da3c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da40,"Material");
      _DAT_0096da4c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da50,"PanelWidth_m");
      _DAT_0096da5c = 4;
      _DAT_0096da60 = 0xd8;
      _DAT_0096da64 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da68,"double");
      _DAT_0096da74 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da78,"Height_m");
      _DAT_0096da84 = 4;
      _DAT_0096da88 = 0xe0;
      _DAT_0096da8c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096da90,"double");
      _DAT_0096da9c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096daa0,"Thickness_m");
      _DAT_0096daac = 4;
      _DAT_0096dab0 = 0xe8;
      _DAT_0096dab4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096dab8,"double");
      _DAT_0096dac4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096dac8,"ArmorThickness_m");
      _DAT_0096dad4 = 4;
      _DAT_0096dad8 = 0xf0;
      _DAT_0096dadc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096dae0,"double");
      _DAT_0096daec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096daf0,"Panels");
      _DAT_0096dafc = 2;
      _DAT_0096db00 = 0xf8;
      _DAT_0096db04 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096db08,"int");
      _DAT_0096db14 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096db18,"FrontTaper_radians");
      _DAT_0096db24 = 4;
      _DAT_0096db28 = 0x100;
      _DAT_0096db2c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096db30,"double");
      _DAT_0096db3c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096db40,"BackTaper_radians");
      _DAT_0096db4c = 4;
      _DAT_0096db50 = 0x108;
      _DAT_0096db54 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096db58,"double");
      _DAT_0096db64 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096db68,"SurfaceFinish");
      _DAT_0096db74 = 8;
      _DAT_0096db78 = 0x110;
      _DAT_0096db7c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096db80,"Material");
      _DAT_0096db8c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_d1e3cec7__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_383c1ea3_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096d994 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096d998 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096d99c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096d9a0 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096d9ac)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096d9ad)[iVar1];
  return __return_storage_ptr__;
}





//==== 005e8730 StaticGetMemberCount_005e8730 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberCount(void) */

int __cdecl RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_18d69be7__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_18d69be7__thread_safe_static_guard_0__);
    if ( cde_l2_18d69be7__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a4c56cdd_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096d784 = 0;
      _DAT_0096d788 = 0;
      _DAT_0096d78c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d790,"Unused");
      _DAT_0096d79c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d7a0,"SteamWorkshopID");
      _DAT_0096d7ac = 6;
      _DAT_0096d7b0 = 0x10;
      _DAT_0096d7b4 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d7b8,"AStr");
      _DAT_0096d7c4 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d7c8,"Description");
      _DAT_0096d7d4 = 6;
      _DAT_0096d7d8 = 0x20;
      _DAT_0096d7dc = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d7e0,"AStr");
      _DAT_0096d7ec = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d7f0,"UsesCustomName");
      _DAT_0096d7fc = 1;
      _DAT_0096d800 = 0x68;
      _DAT_0096d804 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d808,"bool");
      _DAT_0096d814 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d818,"Composition");
      _DAT_0096d824 = 8;
      _DAT_0096d828 = 0xd4;
      _DAT_0096d82c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d830,"Material");
      _DAT_0096d83c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d840,"PanelWidth_m");
      _DAT_0096d84c = 4;
      _DAT_0096d850 = 0xd8;
      _DAT_0096d854 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d858,"double");
      _DAT_0096d864 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d868,"Height_m");
      _DAT_0096d874 = 4;
      _DAT_0096d878 = 0xe0;
      _DAT_0096d87c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d880,"double");
      _DAT_0096d88c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d890,"Thickness_m");
      _DAT_0096d89c = 4;
      _DAT_0096d8a0 = 0xe8;
      _DAT_0096d8a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d8a8,"double");
      _DAT_0096d8b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d8b8,"ArmorThickness_m");
      _DAT_0096d8c4 = 4;
      _DAT_0096d8c8 = 0xf0;
      _DAT_0096d8cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d8d0,"double");
      _DAT_0096d8dc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d8e0,"Panels");
      _DAT_0096d8ec = 2;
      _DAT_0096d8f0 = 0xf8;
      _DAT_0096d8f4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d8f8,"int");
      _DAT_0096d904 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d908,"FrontTaper_radians");
      _DAT_0096d914 = 4;
      _DAT_0096d918 = 0x100;
      _DAT_0096d91c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d920,"double");
      _DAT_0096d92c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d930,"BackTaper_radians");
      _DAT_0096d93c = 4;
      _DAT_0096d940 = 0x108;
      _DAT_0096d944 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d948,"double");
      _DAT_0096d954 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d958,"SurfaceFinish");
      _DAT_0096d964 = 8;
      _DAT_0096d968 = 0x110;
      _DAT_0096d96c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096d970,"Material");
      _DAT_0096d97c = 0;
      atexit( private__static_int_const___cdecl_RadiatorModule__ReflectionInfoStruct_class_RadiatorModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_18d69be7__thread_safe_static_guard_0__);
    }
  }
  return 0xd;
}





//==== 005e8b10 StaticGetReflectionInfo_005e8b10 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RadiatorModule__ReflectionInfoStruct_L_classRadiatorModule_G_ * __cdecl
   RadiatorModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_RadiatorModule_G_ * __cdecl RadiatorModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6f0562d6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6f0562d6__thread_safe_static_guard_0__);
    if ( cde_l2_6f0562d6__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_89bad439_ReflectionInfo) = &vftable_226;
      _Init_thread_footer(& cde_l2_6f0562d6__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_89bad439_ReflectionInfo;
}





//==== 005e8b70 ToggleEnabled_005e8b70 ====


/* public: virtual void __thiscall RadiatorCompartment__ToggleEnabled(void) */

void __thiscall RadiatorCompartment__ToggleEnabled(RadiatorCompartment *this)

{
  this->Extending = this->Extending == false;
  return;
}





//==== 005e8b90 GetClassID_005e8b90 ====


/* public: virtual unsigned long __thiscall RefuelerModule__GetClassID(void)const  */

ulong __thiscall RefuelerModule__GetClassID(RefuelerModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_d675e67f__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_d675e67f__thread_safe_static_guard_0__);
    if ( cde_l2_d675e67f__thread_safe_static_guard_0__ == -1) {
       cde_l2r_c6b996df_ID =
           util__GetHash("RefuelerModule");
      _Init_thread_footer(& cde_l2_d675e67f__thread_safe_static_guard_0__);
    }
  }
  return  cde_l2r_c6b996df_ID
  ;
}





//==== 005e9020 GetShortName_005e9020 ====

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual class util__Str_L_char_G_ __thiscall RefuelerModule__GetShortName(void)const  */

Str_L_char_G_ * __thiscall
RefuelerModule__GetShortName(RefuelerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  undefined8 stack0xfffffffc;
  LocStr *pLVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  void *local_98 [3];
  void *local_8c;
  void *local_80 [3];
  void *local_74;
  Str_L_char_G_ local_68;
  void *local_5c [3];
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  Str_L_char_G_ local_38;
  Str_L_char_G_ local_2c;
  Str_L_char_G_ local_20;
  Str_L_char_G_ local_14;
  uint local_8;
  
  local_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  util__Str_char___Str_char(&local_68,"Misc Refueler");
  util__Str_char___Str_char(&local_44,"Space");
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_2c.Data = (char *)0x0;
  local_2c.Capacity = 0;
  local_2c.Length = 0;
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_80,&local_44,&local_2c);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  pSVar3 = (Str_L_char_G_ *)(**(code **)(*(int *)this[1]._pad_0x10_4 + 0x48))(local_5c);
  local_14.Length = 0;
  local_14.Data = (char *)0x0;
  local_14.Capacity = 0;
  util__Str_char___Str_char(&local_14,pSVar3);
  util__Str_char___operator__o10(&local_14,pSVar2);
  util__Str_char___Str_char(&local_50,&local_14);
  if (local_14.Data != (char *)0x0) {
    port_op_delete(local_14.Data);
    (*(uint64_t*)&(local_14)) = (*(uint64_t*)&(local_14)) & 0xffffffff00000000;
  }
  pLVar1 = (LocStr *)util__LocStr__LocStr((LocStr *)local_98,&local_68,&local_38);
  pSVar2 = util__LocStr__operator__o3(pLVar1);
  local_20.Length = 0;
  local_20.Data = (char *)0x0;
  local_20.Capacity = 0;
  util__Str_char___Str_char(&local_20,&local_50);
  util__Str_char___operator__o10(&local_20,pSVar2);
  util__Str_char___Str_char(__return_storage_ptr__,&local_20);
  if (local_20.Data != (char *)0x0) {
    port_op_delete(local_20.Data);
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
  }
  if (local_5c[0] != (void *)0x0) {
    port_op_delete(local_5c[0]);
    local_5c[0] = (void *)0x0;
  }
  if (local_74 != (void *)0x0) {
    port_op_delete(local_74);
    *(uint32_t *)&local_74 = (uint32_t)(uintptr_t)((void *)0x0);
  }
  if (local_80[0] != (void *)0x0) {
    port_op_delete(local_80[0]);
    local_80[0] = (void *)0x0;
  }
  if (local_2c.Data != (char *)0x0) {
    port_op_delete(local_2c.Data);
    local_2c.Data = (char *)0x0;
  }
  if (local_8c != (void *)0x0) {
    port_op_delete(local_8c);
    local_8c = (void *)0x0;
  }
  if (local_98[0] != (void *)0x0) {
    port_op_delete(local_98[0]);
    local_98[0] = (void *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
  }
  return __return_storage_ptr__;
}

//==== 005e9240 GetTag ====


/* public: virtual class util__Str_L_char_G_ __thiscall RefuelerModule__GetTag(void)const  */

Str_L_char_G_ * __thiscall
RefuelerModule__GetTag(RefuelerModule *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"Refueler");
  return __return_storage_ptr__;
}





//==== 005e9260 GetIcon_005e9260 ====


/* public: virtual void (__cdecl*__thiscall RefuelerModule__GetIcon(void)const )(void) */

_func_void * __thiscall RefuelerModule__GetIcon(RefuelerModule *this)

{
  return Icons__Refueler;
}





//==== 005e9270 DefaultPadding ====


/* public: static int __cdecl LayoutAttributes__DefaultPadding(void) */

int __cdecl LayoutAttributes__DefaultPadding(void)

{
  return 8;
}





//==== 005e93d0 GetCrewRequired_005e93d0 ====


/* public: virtual class util__Darray_L_structCrewJob_G_ __thiscall
   RefuelerModule__GetCrewRequired(void)const  */

Darray_L_struct_CrewJob_G_ * __thiscall RefuelerModule__GetCrewRequired(RefuelerModule *this)

{
  Str_L_char_G_ *pSVar1;
  LocStr *pLVar2;
  char *pcVar3;
  char *pcVar4;
  Darray_L_struct_CrewJob_G_ *in_stack_00000004;
  CrewJob CStack_6c;
  void *apvStack_4c [3];
  void *pvStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = &vftable_120;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_34,"CrewTechnician");
  pSVar1 = Module__GetQuickName((Module *)this,&SStack_28);
  if (pSVar1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar1->Data;
  }
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_34,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(pLVar2);
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  util__Printf(&SStack_1c,(wchar_t*)pcVar3,pcVar4);
  CStack_6c.Dept = CrewDepartment__Engineering;
  util__Str_char___Str_char(&CStack_6c.Name,&SStack_1c);
  CStack_6c.CrewRequired = 0.2;
  CStack_6c.WatchRequired = false;
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  util__Darray_struct_CrewJob___Add(in_stack_00000004,&CStack_6c);
  if (CStack_6c.Name.Data != (char *)0x0) {
    port_op_delete(CStack_6c.Name.Data);
  }
  if (pvStack_40 != (void *)0x0) {
    port_op_delete(pvStack_40);
    pvStack_40 = (void *)0x0;
  }
  if (apvStack_4c[0] != (void *)0x0) {
    port_op_delete(apvStack_4c[0]);
    apvStack_4c[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
  }
  util__Str_char___Str_char(&SStack_28,"CrewOperator");
  pSVar1 = Module__GetQuickName((Module *)this,&SStack_34);
  if (pSVar1->Capacity < 1) {
    pcVar4 = "";
  }
  else {
    pcVar4 = pSVar1->Data;
  }
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_4c,&SStack_28,&SStack_10);
  pSVar1 = util__LocStr__operator__o3(pLVar2);
  if (pSVar1->Capacity < 1) {
    pcVar3 = "";
  }
  else {
    pcVar3 = pSVar1->Data;
  }
  util__Printf(&SStack_1c,(wchar_t*)pcVar3,pcVar4);
  CStack_6c.Dept = CrewDepartment__Operations;
  util__Str_char___Str_char(&CStack_6c.Name,&SStack_1c);
  CStack_6c.CrewRequired = 0.2;
  CStack_6c.WatchRequired = false;
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  util__Darray_struct_CrewJob___Add(in_stack_00000004,&CStack_6c);
  if (CStack_6c.Name.Data != (char *)0x0) {
    port_op_delete(CStack_6c.Name.Data);
  }
  if (pvStack_40 != (void *)0x0) {
    port_op_delete(pvStack_40);
    pvStack_40 = (void *)0x0;
  }
  if (apvStack_4c[0] != (void *)0x0) {
    port_op_delete(apvStack_4c[0]);
    apvStack_4c[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
    SStack_34.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  return in_stack_00000004;
}





//==== 005e9670 GetComposition_005e9670 ====

/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   RefuelerModule__GetComposition(void)const  */

Darray_L_MaterialComposition_G_ * __thiscall
RefuelerModule__GetComposition
          (RefuelerModule *this,Darray_L_MaterialComposition_G_ *__return_storage_ptr__)

{
  MaterialComposition *pMVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  Material *pMVar5;
  Darray_L_MaterialComposition_G_ *this_00;
  bool bVar6;
  undefined4 uStack_10;
  
  this_00 = __return_storage_ptr__;
  __return_storage_ptr__->_pad_0x0_0 = 0;
  __return_storage_ptr__->Data = (MaterialComposition *)0x0;
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Capacity = 0;
  Module__GetComposition((Module *)this,__return_storage_ptr__);
  pMVar5 = HoseComposition;
  dVar2 = *(double *)&this[1]._pad_0x18_6;
  iVar4 = this_00->Size;
  dVar3 = HoseComposition->Density_kg__m3;
  __return_storage_ptr__ = (Darray_L_MaterialComposition_G_ *)(iVar4 + 1);
  util__Darray_L_MaterialConstituent_G___SetSize
            ((Darray_L_MaterialConstituent_G_ *)this_00,(int *)&__return_storage_ptr__);
  bVar6 = util__Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G___CheckSize
                    ((Darray_L_util__tuple2_L_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar4);
  if (bVar6) {
    pMVar1 = this_00->Data + this_00->Size + -1;
    pMVar1->Type = pMVar5;
    *(undefined4 *)&(*(undefined4 *)(void *)((char *)(uintptr_t)(pMVar1) + 0x4)) = uStack_10;
    pMVar1->Mass_kg = dVar2 * 6.597344572538552e-05 * dVar3;
  }
  return this_00;
}

//==== 005e96f0 GetHullRadius_m_005e96f0 ====


/* public: virtual double __thiscall RefuelerModule__GetHullRadius_m(void)const  */

double __thiscall RefuelerModule__GetHullRadius_m(RefuelerModule *this)

{
  Cylinder_L_double_G_ *pCVar1;
  Cylinder_L_double_G_ CStack_14;
  
  pCVar1 = TurbopumpSubModule__GetTurbopumpCylinder_m
                     ((TurbopumpSubModule *)&(this->Pump).RotationalSpeed_RPM,&CStack_14);
  return pCVar1->Radius;
}





//==== 005e9710 GetHullLength_m_005e9710 ====

/* public: virtual double __thiscall RefuelerModule__GetHullLength_m(void)const  */

double __thiscall RefuelerModule__GetHullLength_m(RefuelerModule *this)

{
  double dVar1;
  float10 fVar2;
  double dVar3;
  
  dVar1 = *(double *)&this[1]._pad_0x18_6;
  fVar2 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  dVar3 = TurbopumpSubModule__GetLength_m((TurbopumpSubModule *)&(this->Pump).RotationalSpeed_RPM);
  return dVar3 + (dVar1 * 0.00038013271108436493) /
                 ((double)fVar2 * (double)fVar2 * 3.141592653589793);
}

//==== 005e9770 GetStructuralThickness_m_005e9770 ====


/* public: virtual double __thiscall RefuelerModule__GetStructuralThickness_m(void)const  */

double __thiscall RefuelerModule__GetStructuralThickness_m(RefuelerModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  dStack_c = 0.5;
  pMVar1 = util__Sqrt(&MStack_1c,&dStack_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data * 0.001;
}





//==== 005e9780 GetArmorCarvingRadius_m_005e9780 ====

/* public: virtual class util__Maybe_L_double_G_ __thiscall
   RefuelerModule__GetArmorCarvingRadius_m(void)const  */

Maybe_L_double_G_ * __thiscall
RefuelerModule__GetArmorCarvingRadius_m(RefuelerModule *this,Maybe_L_double_G_ *__return_storage_ptr__)

{
  float10 fVar1;
  
  fVar1 = (float10)(**(code **)(this->_pad_0x0_0 + 0xa4))();
  __return_storage_ptr__->Data = (double)fVar1;
  __return_storage_ptr__->IsValidData = true;
  return __return_storage_ptr__;
}

//==== 005e97a0 GetStatuses_005e97a0 ====

/* public: virtual class DesignStatusBuffer  RefuelerModule__GetStatuses(class DataParser
   *)const  */

DesignStatusBuffer * 
RefuelerModule__GetStatuses
          (RefuelerModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  int iVar1;
  Str_L_char_G_ *pSVar2;
  Str_L_char_G_ *pSVar3;
  Str_L_char_G_ *pSVar4;
  Str_L_char_G_ *pSVar5;
  ModulePlacer *pMVar6;
  Str_L_char_G_ local_3c;
  Str_L_char_G_ local_30;
  Str_L_char_G_ local_24;
  Str_L_char_G_ local_18;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  Module__GetStatuses((Module *)this,__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_3c,"RefuelerFluidTemperature");
  pSVar5 = &local_30;
  iVar1 = this[1]._pad_0x10_4;
  pMVar6 = (ModulePlacer *)0x0;
  pSVar4 = &local_24;
  local_30.Data = (char *)0x0;
  pSVar3 = &local_18;
  local_30.Capacity = 0;
  pSVar2 = &local_3c;
  local_30.Length = 0;
  local_24.Data = (char *)0x0;
  local_24.Capacity = 0;
  local_24.Length = 0;
  local_18.Data = (char *)0x0;
  local_18.Capacity = 0;
  local_18.Length = 0;
  local_c = Material__GetSafeUseTemperature_K(HoseComposition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c <= *(double *)(iVar1 + 0x98),pSVar2,pSVar3,pSVar4,pSVar5
             ,pMVar6);
  if (local_18.Data != (char *)0x0) {
    port_op_delete(local_18.Data);
    local_18.Data = (char *)0x0;
  }
  if (local_24.Data != (char *)0x0) {
    port_op_delete(local_24.Data);
    local_24.Data = (char *)0x0;
  }
  if (local_30.Data != (char *)0x0) {
    port_op_delete(local_30.Data);
    local_30.Data = (char *)0x0;
  }
  if (local_3c.Data != (char *)0x0) {
    port_op_delete(local_3c.Data);
  }
  return __return_storage_ptr__;
}

//==== 005e9940 GetInfoBoxes_005e9940 ====


/* public: virtual class util__Darray_L_structInfoBox_G_ __thiscall
   RefuelerModule__GetInfoBoxes(void)const  */

void __thiscall RefuelerModule__GetInfoBoxes(RefuelerModule *this)

{
  undefined8 stack0xfffffffc;
  int iVar1;
  bool bVar2;
  LocStr *this_00;
  Str_L_char_G_ *pSVar3;
  Darray_L_struct_InfoBox_G_ *pDVar4;
  Darray_L_struct_InfoBox_G_ *in_stack_00000004;
  void *apvStack_ac [3];
  void *pvStack_a0;
  RefuelerModule *pRStack_94;
  code *pcStack_90;
  Str_L_char_G_ SStack_8c;
  code *pcStack_80;
  RefuelerModule *pRStack_7c;
  code *pcStack_78;
  Str_L_char_G_ SStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  Str_L_char_G_ SStack_60;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Str_L_char_G_ SStack_40;
  undefined **ppuStack_34;
  Str_L_char_G_ SStack_30;
  Str_L_char_G_ SStack_24;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_InfoBox___Darray_struct_InfoBox(in_stack_00000004,1);
  util__Str_char___Str_char(&SStack_30,"InfoBox Refueler Tooltip");
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = CONCAT31((*(uint24_t*)((char*)&(uStack_c)+1)),1);
  SStack_24.Data = (char *)0x0;
  SStack_24.Capacity = 0;
  SStack_24.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_ac,&SStack_30,&SStack_24);
  pSVar3 = util__LocStr__operator__o3(this_00);
  uStack_48 = 0;
  uStack_44 = 0;
  util__Str_char___Str_char(&SStack_40,pSVar3);
  pcStack_90 = (long long int (*)())(util__DelegateFactory_class_RefuelerModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RefuelerModule__GetFuelingInfo_void_const__0);
  SStack_8c.Data = (char *)0x0;
  SStack_8c.Capacity = 0;
  SStack_8c.Length = 0;
  pcStack_80 = (long long int (*)())(Icons__PropellantTank);
  pcStack_78 = (long long int (*)())(util__DelegateFactory_class_RefuelerModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RefuelerModule__GetFuelingInfo_void_const__0);
  pRStack_94 = this;
  pRStack_7c = this;
  util__Str_char___Str_char(&SStack_74,&SStack_8c);
  uStack_68 = uStack_48;
  uStack_64 = uStack_44;
  util__Str_char___Str_char(&SStack_60,&SStack_40);
  uStack_54 = CONCAT44(uStack_10,uStack_14);
  uStack_4c = uStack_c;
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  iStack_18 = iVar1 + 1;
  util__Darray_struct_InfoBox___SetSize(in_stack_00000004,&iStack_18);
  bVar2 = util__Darray_struct_InfoBox___CheckSize(in_stack_00000004,iVar1);
  if (bVar2) {
    iVar1 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x38;
    *(code **)(iVar1 + -0x38) = pcStack_80;
    *(RefuelerModule **)(iVar1 + -0x34) = pRStack_7c;
    *(code **)(iVar1 + -0x30) = pcStack_78;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x2c),&SStack_74);
    *(undefined4 *)(iVar1 + -0x20) = uStack_68;
    *(undefined4 *)(iVar1 + -0x1c) = uStack_64;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar1 + -0x18),&SStack_60);
    *(ulonglong *)(iVar1 + -0xc) = CONCAT44(uStack_10,uStack_14);
    *(undefined4 *)(iVar1 + -4) = uStack_c;
  }
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (SStack_74.Data != (char *)0x0) {
    port_op_delete(SStack_74.Data);
  }
  if (pvStack_a0 != (void *)0x0) {
    port_op_delete(pvStack_a0);
    pvStack_a0 = (void *)0x0;
  }
  if (apvStack_ac[0] != (void *)0x0) {
    port_op_delete(apvStack_ac[0]);
    apvStack_ac[0] = (void *)0x0;
  }
  if (SStack_24.Data != (char *)0x0) {
    port_op_delete(SStack_24.Data);
    SStack_24.Data = (char *)0x0;
  }
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    port_op_delete(SStack_30.Data);
  }
  pDVar4 = (Darray_L_struct_InfoBox_G_ *)Module__GetInfoBoxes((Module *)this);
  util__Darray_struct_InfoBox___operator(in_stack_00000004,pDVar4);
  ppuStack_34 = &vftable_127;
  if ((InfoBox *)SStack_30.Data != (InfoBox *)0x0) {
    InfoBox___vector_deleting_destructor((InfoBox *)SStack_30.Data,3);
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005ea090 GetOneLineStatusBarPercentages_005ea090 ====


/* WARNING: Removing unreachable block (ram,0x005ea1c8) */
/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ 
   RefuelerModule__GetOneLineStatusBarPercentages(class util__Darray_L_classutil__WeakPtr_L_struct_ModuleCompartment_G__G_ const &)const  */

void 
RefuelerModule__GetOneLineStatusBarPercentages
          (RefuelerModule *this,Darray_L_class_util__WeakPtr_L_struct_ModuleCompartment_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  double dVar7;
  int *in_stack_00000008;
  undefined1 auStack_2c [16];
  undefined4 *apuStack_1c [4];
  uint uStack_c;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  iVar4 = (**(code **)(uintptr_t)(*in_stack_00000008 + 0xc))();
  if (iVar4 == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(char *)&(param_1[0x10]) = 0x0;
    __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uStack_c = uStack_c & 0xffffff00;
  FUN_00526b80(apuStack_1c);
  uStack_c = 0;
  iVar4 = (*(code *)apuStack_1c[0][3])();
  if ((int)uStack_c < iVar4) {
    do {
      piVar5 = (int *)(*(code *)*apuStack_1c[0])(&uStack_c);
      if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
         (bVar2 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]),
         !bVar2)) {
        *piVar5 = 0;
      }
      if (*(char *)(*piVar5 + 0x109) != '\0') {
        bVar2 = true;
        goto LAB_005ea146;
      }
      uStack_c = uStack_c + 1;
      iVar4 = (*(code *)apuStack_1c[0][3])();
    } while ((int)uStack_c < iVar4);
  }
  bVar2 = false;
LAB_005ea146:
  uStack_c = 0;
  puVar6 = (undefined4 *)(*(code *)*apuStack_1c[0])(&uStack_c);
  if (((ReferenceController *)puVar6[1] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)puVar6[1]), !bVar3)
     ) {
    *puVar6 = 0;
  }
  dVar7 = RefuelerCompartment__GetReactionMassLeft_kg((RefuelerCompartment *)*puVar6);
  uStack_c = 0;
  piVar5 = (int *)(*(code *)*apuStack_1c[0])(&uStack_c);
  if (((ReferenceController *)piVar5[1] != (ReferenceController *)0x0) &&
     (bVar3 = util__ReferenceController__IsDataStillValid((ReferenceController *)piVar5[1]), !bVar3)
     ) {
    *piVar5 = 0;
  }
  dVar7 = dVar7 / *(double *)(*piVar5 + 0x120);
  if (bVar2) {
    (*(uint32_t*)((char*)&(auStack_2c)+8)) = SUB84(dVar7,0);
    (*(uint64_t*)&(auStack_2c)) = dVar7;
    (*(uint32_t *)((char *)&(auStack_2c) + 12)) = (int)((ulonglong)dVar7 >> 0x20);
  }
  else {
    (*(uint64_t*)((char*)&(auVar1)+8)) = 0;
    (*(uint64_t*)&(auVar1)) = dVar7;
    *(uint32_t *)&auStack_2c = (*(uint32_t *)cde_shl16(auVar1, 0x40));
    if (dVar7 < 0.0) {
      (*(uint64_t*)((char*)&(auStack_2c)+8)) = 0;
      (*(uint64_t*)&(auStack_2c)) = dVar7;
    }
  }
  *(char *)&(param_1[0x10]) = 0x1;
  *(undefined4 *)param_1 = (*(uint32_t*)&(auStack_2c));
  *(undefined4 *)(param_1 + 4) = (*(uint32_t*)((char*)&(auStack_2c)+4));
  *(undefined4 *)(param_1 + 8) = (*(uint32_t*)((char*)&(auStack_2c)+8));
  *(undefined4 *)(param_1 + 0xc) = (*(uint32_t *)((char *)&(auStack_2c) + 12));
  util__Darray_class_util__WeakPtr_class_Body______Darray_class_util__WeakPtr_class_Body((Darray_L_class_util__WeakPtr_L_class_Body_G___G_ *)apuStack_1c);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005ea220 GetStatusBarIcon ====


/* public: virtual void (__cdecl*__thiscall RefuelerModule__GetStatusBarIcon(void)const )(void) */

_func_void * __thiscall RefuelerModule__GetStatusBarIcon(RefuelerModule *this)

{
  return Icons__PropellantTank;
}





//==== 005ea230 IsTacticallyImportant_005ea230 ====


/* public: virtual bool __thiscall RefuelerModule__IsTacticallyImportant(bool)const  */

bool __thiscall RefuelerModule__IsTacticallyImportant(RefuelerModule *this,bool param_1)

{
  return !param_1;
}





//==== 005ea240 SetCachedData_005ea240 ====

/* public: virtual void __thiscall RefuelerModule__SetCachedData(class DataParser *) */

void __thiscall RefuelerModule__SetCachedData(RefuelerModule *this,DataParser *param_1)

{
  TurbopumpSubModule__PassThroughCachedData
            ((TurbopumpSubModule *)&(this->Pump).RotationalSpeed_RPM,
             ((Material *)this[1]._pad_0x10_4)->Density_kg__m3,(Material *)this[1]._pad_0x10_4,true)
  ;
  TurbopumpSubModule__PassThroughCachedData2
            ((TurbopumpSubModule *)&(this->Pump).RotationalSpeed_RPM,
             *(double *)(this[1]._pad_0x10_4 + 0x98));
  return;
}

//==== 005ea290 GetPointerPropertyChoices_005ea290 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   RefuelerModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
RefuelerModule__GetPointerPropertyChoices
          (RefuelerModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&param_2[1]) < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "FluidToPump"; (pcVar1[(int)(*(int *)&SVar2 + -0x929c48)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&SVar2) + -0x929c48)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,true);
  return param_1;
}





//==== 005ea310 GetReflectionInfo_005ea310 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   RefuelerModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall RefuelerModule__GetReflectionInfo(RefuelerModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_82680638__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_82680638__thread_safe_static_guard_0__);
    if ( cde_l2_82680638__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f89e6780_ReflectionInfo) = &vftable_231;
      _Init_thread_footer(& cde_l2_82680638__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_f89e6780_ReflectionInfo;
}





//==== 005ea320 scalar_deleting_destructor_005ea320 ====


/* public: virtual void * __thiscall RefuelerModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall RefuelerModule___scalar_deleting_destructor(RefuelerModule *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ** *)&(this->Pump).RotationalSpeed_RPM = &vftable_5;
  pvVar1 = *(void **)((int)&(this->Pump).RotationalSpeed_RPM + 4);
  if (pvVar1 != (void *)0x0) {
    port_op_delete(pvVar1);
    *(undefined4 *)((int)&(this->Pump).RotationalSpeed_RPM + 4) = 0;
  }
  Module___Module((Module *)this);
  if ((param_1 & 1) != 0) {
    port_op_delete(this,200);
  }
  return this;
}





//==== 005ea370 GetTypeName_005ea370 ====


/* public: virtual class util__Str_L_char_G_  RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetTypeName(void)const  */

Str_L_char_G_ * 
RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetTypeName
          (ReflectionInfoStruct_L_class_RefuelerModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"RefuelerModule");
  return __return_storage_ptr__;
}





//==== 005ea390 GetMembers_005ea390 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_RefuelerModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_a16a13cb__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_a16a13cb__thread_safe_static_guard_0__),
      cde_l2_a16a13cb__thread_safe_static_guard_0__ == -1)) {
     cde_l2_737f1103_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_a16a13cb__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_737f1103_Count);
  iVar3 = 0;
  if (0 <  cde_l2_737f1103_Count) {
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
    } while (iVar3 <  cde_l2_737f1103_Count);
  }
  return in_stack_00000004;
}





//==== 005ea4d0 GetMember_005ea4d0 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetMember(class util__Str_L_char_G_ const
   &)const  */

Str_L_char_G_ * 
RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetMember__o2
          (ReflectionInfoStruct_L_class_RefuelerModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_7b76549f__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7b76549f__thread_safe_static_guard_0__),
      cde_l2_7b76549f__thread_safe_static_guard_0__ == -1)) {
     cde_l2_43a935c3_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7b76549f__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_43a935c3_Count) {
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
LAB_005ea55d:
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
          if (cVar3 == '\0') goto LAB_005ea55d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_43a935c3_Count);
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





//==== 005ea670 GetFactory_005ea670 ====


/* public: virtual class util__Reflectable * (__cdecl*
   RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_RefuelerModule_G_ *this)

{
  return StaticFactory;
}





//==== 005eab40 MethodCallerConst__public__class_util__Str_char____thiscall_RefuelerModule__GetFuelingInfo_void_const__0__ ====


/* public: static class util__Str_L_char_G_ __cdecl util__DelegateFactory_L_classRefuelerModule_Cclass_util__Str_L_char_G__G___MethodCallerConst_L__public_classutil__Str_L_char_G___thiscall_RefuelerModule__GetFuelingInfo_void_const_C0__G_(void const * const) */

Str_L_char_G_ * __cdecl
util__DelegateFactory_class_RefuelerModule_class_util__Str_char_____MethodCallerConst__public__class_util__Str_char____thiscall_RefuelerModule__GetFuelingInfo_void_const__0
          (Str_L_char_G_ *__return_storage_ptr__,void *param_1)

{
  Str_L_char_G_ *pSVar1;
  Str_L_char_G_ SStack_10;
  
  pSVar1 = (Str_L_char_G_ *)(uintptr_t)(RefuelerModule__GetFuelingInfo((RefuelerModule *)param_1,&SStack_10));
  util__DelegateFactory_struct_HUDItineraryInfoPanel_struct_util__Color___MethodCallerConst__private__struct_util__Color___thiscall_HUDItineraryInfoPanel__GetMissionInfoColor_void_const(__return_storage_ptr__,pSVar1);
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
  }
  return __return_storage_ptr__;
}





//==== 005eabc0 Disable_005eabc0 ====


/* public: virtual void __thiscall RefuelerCompartment__Disable(void) */

void __thiscall RefuelerCompartment__Disable(RefuelerCompartment *this)

{
  this->AutoRefuelActive = false;
  return;
}





//==== 005eb1a0 GetUIToggleActions_005eb1a0 ====


/* public: virtual class util__Darray_L_structutil__tuple5_L_void___cdecl_P__void__Cclass_util__Str_L_char_G__Cclassutil__Str_L_char_G__Cbool_P_Cclassutil__Str_L_char_G__G__G_ __thiscall
   RefuelerCompartment__GetUIToggleActions(void) */

Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
* __thiscall RefuelerCompartment__GetUIToggleActions(RefuelerCompartment *this)

{
  undefined8 stack0x00000004;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *this_00;
  bool bVar1;
  LocStr *pLVar2;
  Str_L_char_G_ *pSVar3;
  int iVar4;
  Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
  *in_stack_00000004;
  void *apvStack_b4 [3];
  void *pvStack_a8;
  void *apvStack_9c [3];
  void *pvStack_90;
  Str_L_char_G_ SStack_84;
  Str_L_char_G_ SStack_78;
  Str_L_char_G_ SStack_6c;
  Str_L_char_G_ SStack_60;
  code *pcStack_54;
  Str_L_char_G_ SStack_50;
  Str_L_char_G_ SStack_44;
  bool *pbStack_38;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  Str_L_char_G_ SStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_170);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Str_char___Str_char(&SStack_84,"RefuelerUI Extract Tooltip");
  util__Str_char___Str_char(&SStack_28,"RefuelerUI Extract");
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  SStack_1c.Length = 0;
  SStack_10.Data = (char *)0x0;
  SStack_10.Capacity = 0;
  SStack_10.Length = 0;
  util__Str_char___Str_char(&SStack_78,"Extract");
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_b4,&SStack_84,&SStack_1c);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_6c,pSVar3);
  pLVar2 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_9c,&SStack_28,&SStack_10);
  pSVar3 = util__LocStr__operator__o3(pLVar2);
  util__Str_char___Str_char(&SStack_60,pSVar3);
  pcStack_54 = (long long int (*)())(Icons__Extract);
  util__Str_char___Str_char(&SStack_50,&SStack_60);
  util__Str_char___Str_char(&SStack_44,&SStack_6c);
  pbStack_38 = &this->ReverseFueling;
  util__Str_char___Str_char(&SStack_34,&SStack_78);
  if (SStack_60.Data != (char *)0x0) {
    port_op_delete(SStack_60.Data);
  }
  if (SStack_6c.Data != (char *)0x0) {
    port_op_delete(SStack_6c.Data);
  }
  if (SStack_78.Data != (char *)0x0) {
    port_op_delete(SStack_78.Data);
  }
  iVar4 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 =
       (Darray_L_struct_util__tuple5_L_void____cdecl_P__void__Cclass_util__Str_L_char_G__Cclass_util__Str_L_char_G__Cbool_P_Cclass_util__Str_L_char_G___G___G_
        *)(iVar4 + 1);
  util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______SetSize(this_00,(int *)&stack0x00000004);
  bVar1 = util__Darray_struct_util__tuple5_void____cdecl___void__class_util__Str_char__class_util__Str_char__bool__class_util__Str_char_______CheckSize(this_00,iVar4);
  if (bVar1) {
    iVar4 = *(int *)(this_00 + 8) * 0x2c + *(int *)(this_00 + 4);
    *(code **)(iVar4 + -0x2c) = pcStack_54;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x28),&SStack_50);
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0x1c),&SStack_44);
    *(bool **)(iVar4 + -0x10) = pbStack_38;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar4 + -0xc),&SStack_34);
  }
  if (SStack_34.Data != (char *)0x0) {
    port_op_delete(SStack_34.Data);
  }
  if (SStack_44.Data != (char *)0x0) {
    port_op_delete(SStack_44.Data);
  }
  if (SStack_50.Data != (char *)0x0) {
    port_op_delete(SStack_50.Data);
  }
  if (pvStack_90 != (void *)0x0) {
    port_op_delete(pvStack_90);
    pvStack_90 = (void *)0x0;
  }
  if (apvStack_9c[0] != (void *)0x0) {
    port_op_delete(apvStack_9c[0]);
    apvStack_9c[0] = (void *)0x0;
  }
  if (SStack_10.Data != (char *)0x0) {
    port_op_delete(SStack_10.Data);
    SStack_10.Data = (char *)0x0;
  }
  if (pvStack_a8 != (void *)0x0) {
    port_op_delete(pvStack_a8);
    pvStack_a8 = (void *)0x0;
  }
  if (apvStack_b4[0] != (void *)0x0) {
    port_op_delete(apvStack_b4[0]);
    apvStack_b4[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
    SStack_28.Data = (char *)0x0;
  }
  if (SStack_84.Data != (char *)0x0) {
    port_op_delete(SStack_84.Data);
  }
  return this_00;
}





//==== 005eb430 IsDisabled_005eb430 ====


/* public: virtual bool __thiscall RefuelerCompartment__IsDisabled(void)const  */

bool __thiscall RefuelerCompartment__IsDisabled(RefuelerCompartment *this)

{
  return this->AutoRefuelActive == false;
}





//==== 005eb5c0 StaticFactory_005eb5c0 ====

/* public: static class util__Reflectable * __cdecl RefuelerModule__ReflectionInfoStruct_L_class_RefuelerModule_G___StaticFactory(void) */

Reflectable * __cdecl RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticFactory(void)

{
  Module *this;
  
  this = (Module *)(uintptr_t)(port_op_new(200));
  if (this != (Module *)0x0) {
    memset(this,0,200);
    Module__Module(this);
    this->_pad_0x0_0 = (int)&vftable_for_EditorReflectable__16;
    *(undefined4 *)&(this->GetTotalPowerUsage_W_MemoizedValue).field_0xc = (undefined4)(uintptr_t)vftable_for_util__RTTIBaseClass__16;
    TurbopumpSubModule__TurbopumpSubModule
              ((TurbopumpSubModule *)
               &this[1].ModuleMemoizationHandlerInstance.ResetFunctions.Capacity);
    return (Reflectable *)this;
  }
  return (Reflectable *)0x0;
}

//==== 005eb610 StaticGetMemberByIndex_005eb610 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberByIndex
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6e5b5066__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6e5b5066__thread_safe_static_guard_0__);
    if ( cde_l2_6e5b5066__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_7deb6470_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096e254 = 0;
      _DAT_0096e258 = 0;
      _DAT_0096e25c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e260,"Unused");
      _DAT_0096e26c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e270,"SteamWorkshopID");
      _DAT_0096e27c = 6;
      _DAT_0096e280 = 0x10;
      _DAT_0096e284 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e288,"AStr");
      _DAT_0096e294 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e298,"Description");
      _DAT_0096e2a4 = 6;
      _DAT_0096e2a8 = 0x20;
      _DAT_0096e2ac = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e2b0,"AStr");
      _DAT_0096e2bc = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e2c0,"UsesCustomName");
      _DAT_0096e2cc = 1;
      _DAT_0096e2d0 = 0x68;
      _DAT_0096e2d4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e2d8,"bool");
      _DAT_0096e2e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e2e8,"Pump");
      _DAT_0096e2f4 = 10;
      _DAT_0096e2f8 = 0x70;
      _DAT_0096e2fc = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e300,"TurbopumpSubModule");
      _DAT_0096e30c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e310,"FluidToPump");
      _DAT_0096e31c = 8;
      _DAT_0096e320 = 0xb8;
      _DAT_0096e324 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e328,"Material");
      _DAT_0096e334 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e338,"HoseLength_m");
      _DAT_0096e344 = 4;
      _DAT_0096e348 = 0xc0;
      _DAT_0096e34c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e350,"double");
      _DAT_0096e35c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_6e5b5066__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_7deb6470_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096e254 + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096e258 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096e25c + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096e260 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096e26c)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096e26d)[iVar1];
  return __return_storage_ptr__;
}





//==== 005eb890 StaticGetMemberCount_005eb890 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberCount(void) */

int __cdecl RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_2bf41eec__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_2bf41eec__thread_safe_static_guard_0__);
    if ( cde_l2_2bf41eec__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_750b44a7_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096e134 = 0;
      _DAT_0096e138 = 0;
      _DAT_0096e13c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e140,"Unused");
      _DAT_0096e14c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e150,"SteamWorkshopID");
      _DAT_0096e15c = 6;
      _DAT_0096e160 = 0x10;
      _DAT_0096e164 = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e168,"AStr");
      _DAT_0096e174 = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e178,"Description");
      _DAT_0096e184 = 6;
      _DAT_0096e188 = 0x20;
      _DAT_0096e18c = 0xc;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e190,"AStr");
      _DAT_0096e19c = 0x100;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e1a0,"UsesCustomName");
      _DAT_0096e1ac = 1;
      _DAT_0096e1b0 = 0x68;
      _DAT_0096e1b4 = 1;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e1b8,"bool");
      _DAT_0096e1c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e1c8,"Pump");
      _DAT_0096e1d4 = 10;
      _DAT_0096e1d8 = 0x70;
      _DAT_0096e1dc = 0x48;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e1e0,"TurbopumpSubModule");
      _DAT_0096e1ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e1f0,"FluidToPump");
      _DAT_0096e1fc = 8;
      _DAT_0096e200 = 0xb8;
      _DAT_0096e204 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e208,"Material");
      _DAT_0096e214 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e218,"HoseLength_m");
      _DAT_0096e224 = 4;
      _DAT_0096e228 = 0xc0;
      _DAT_0096e22c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e230,"double");
      _DAT_0096e23c = 0;
      atexit( private__static_int_const___cdecl_RefuelerModule__ReflectionInfoStruct_class_RefuelerModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_2bf41eec__thread_safe_static_guard_0__);
    }
  }
  return 7;
}





//==== 005ebad0 StaticGetReflectionInfo_005ebad0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct RefuelerModule__ReflectionInfoStruct_L_classRefuelerModule_G_ * __cdecl
   RefuelerModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_RefuelerModule_G_ * __cdecl RefuelerModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_82680638__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_82680638__thread_safe_static_guard_0__);
    if ( cde_l2_82680638__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_f89e6780_ReflectionInfo) = &vftable_231;
      _Init_thread_footer(& cde_l2_82680638__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_f89e6780_ReflectionInfo;
}





//==== 005ebb30 GetTypeName_005ebb30 ====


/* public: virtual class util__Str_L_char_G_  TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_TurbopumpSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"TurbopumpSubModule");
  return __return_storage_ptr__;
}





//==== 005ebb50 GetMembers_005ebb50 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_TurbopumpSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_b3d9eba0__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_b3d9eba0__thread_safe_static_guard_0__),
      cde_l2_b3d9eba0__thread_safe_static_guard_0__ == -1)) {
     cde_l2_04bf452c_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_b3d9eba0__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_04bf452c_Count);
  iVar3 = 0;
  if (0 <  cde_l2_04bf452c_Count) {
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
    } while (iVar3 <  cde_l2_04bf452c_Count);
  }
  return in_stack_00000004;
}





//==== 005ebc90 GetMember_005ebc90 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetMember(class
   util__Str_L_char_G_ const &)const  */

Str_L_char_G_ * 
TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_TurbopumpSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_aca8326e__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_aca8326e__thread_safe_static_guard_0__),
      cde_l2_aca8326e__thread_safe_static_guard_0__ == -1)) {
     cde_l2_1748c332_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_aca8326e__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_1748c332_Count) {
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
LAB_005ebd1d:
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
          if (cVar3 == '\0') goto LAB_005ebd1d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_1748c332_Count);
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





//==== 005ebe30 GetFactory_005ebe30 ====


/* public: virtual class util__Reflectable * (__cdecl*
   TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetFactory(void)const )(void)
    */

_func_Reflectable_ptr * 
__thiscall TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_TurbopumpSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005ebe40 GetComposition_005ebe40 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   TurbineSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
TurbineSubModule__GetComposition(TurbineSubModule *this)

{
  undefined8 stack0x00000004;
  double dVar1;
  Material *pMVar2;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_20;
  undefined4 uStack_10;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 2;
  puVar4 = (undefined4 *)port_op_new(0x20);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    iVar6 = 2;
    puVar5 = puVar4;
    do {
      *puVar5 = 0;
      *(undefined8 *)(puVar5 + 2) = 0;
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + 4;
    } while (iVar6 != 0);
  }
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  iVar6 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 0x10;
      iVar6 = iVar6 + 1;
      puVar4 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar7);
      *puVar4 = 0;
      puVar4[1] = uStack_10;
      puVar4[2] = 0;
      puVar4[3] = 0;
    } while (iVar6 < *(int *)(in_stack_00000004 + 0xc));
  }
  dVar8 = GetShellVolume_m3(this);
  dVar1 = this->Composition->Density_kg__m3;
  dVar9 = GetBladeMass_kg(this);
  iVar6 = *(int *)(in_stack_00000004 + 8);
  pMVar2 = this->Composition;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar6 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar3) {
    puVar4 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar4 = (undefined4)(uintptr_t)(pMVar2);
    puVar4[1] = uStack_20;
    *(double *)(puVar4 + 2) = dVar9 + dVar8 * dVar1;
  }
  dVar8 = GetFluidVolume_m3(this);
  iVar6 = *(int *)(this_00 + 8);
  dVar1 = this->CachedFluidDensity_kg__m3;
  pMVar2 = this->CachedFluid;
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar6 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar3 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar6);
  if (bVar3) {
    puVar4 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar4 = (undefined4)(uintptr_t)(pMVar2);
    puVar4[1] = uStack_20;
    *(double *)(puVar4 + 2) = dVar8 * dVar1;
  }
  return this_00;
}





//==== 005ebf90 GetStatuses_005ebf90 ====

/* public: virtual class DesignStatusBuffer  TurbineSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
TurbineSubModule__GetStatuses
          (TurbineSubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  undefined8 stack0xffffff28;
  undefined8 stack0xffffff2c;
  double dVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ SVar5;
  Str_L_char_G_ SVar6;
  Str_L_char_G_ SVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  Str_L_char_G_ *pSVar10;
  double dVar11;
  double dVar12;
  char *pcVar13;
  Str_L_char_G_ *pSVar14;
  int iVar15;
  Str_L_char_G_ *pSVar16;
  ModulePlacer *pMVar17;
  Str_L_char_G_ local_b8;
  Str_L_char_G_ local_ac;
  Str_L_char_G_ local_a0;
  double local_94;
  double local_8c;
  Str_L_char_G_ local_84;
  double local_78;
  double local_70;
  Str_L_char_G_ local_68;
  double local_5c;
  double local_54;
  undefined1 local_4c [4];
  undefined8 local_48;
  double local_40;
  Str_L_char_G_ local_38;
  undefined1 local_2c [4];
  undefined8 local_28;
  double local_20;
  undefined1 local_18 [4];
  undefined8 local_14;
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_68,"TurbomachineBladesMelting");
  *(uint32_t *)&local_4c = (uint32_t)0x0;
  (*(uint32_t*)&(local_48)) = 0;
  (*(uint32_t*)((char*)&(local_48)+4)) = 0;
  *(uint32_t *)&local_2c = (uint32_t)0x0;
  (*(uint32_t*)&(local_28)) = 0;
  (*(uint32_t*)((char*)&(local_28)+4)) = 0;
  *(uint32_t *)&local_18 = (uint32_t)0x0;
  (*(uint32_t*)&(local_14)) = 0;
  (*(uint32_t*)((char*)&(local_14)+4)) = 0;
  local_8c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dVar11 = this->HubRadius_m;
  dVar1 = this->TurbineRadius_m;
  local_54 = (dVar1 + dVar11) * 0.5;
  local_20 = (this->CachedMassFlowRate_kg__s / this->CachedFluidDensity_kg__m3) /
             ((dVar1 * 3.141592653589793 * dVar1 - dVar11 * 3.141592653589793 * dVar11) -
             local_54 * 0.001);
  local_40 = local_8c;
  dVar11 = util__Cos(&local_8c);
  local_20 = local_20 / dVar11;
  dVar11 = util__Sin(&local_40);
  local_20 = dVar11 * local_20;
  local_70 = this->CachedMassFlowRate_kg__s;
  dVar12 = GetOutletTangentialVelocity_m__s(this);
  dVar11 = this->TurbineRadius_m;
  dVar1 = this->HubRadius_m;
  local_c = local_70 / this->CachedFluidDensity_kg__m3;
  local_5c = (double)this->StageCount * (dVar12 + local_20) * local_54 * local_70;
  local_54 = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  local_70 = 0.5235987755982988;
  local_c = local_c / ((dVar11 * 3.141592653589793 * dVar11 - dVar1 * 3.141592653589793 * dVar1) -
                      (dVar11 + dVar1) * 0.5 * 0.001);
  local_20 = util__Tan(&local_54);
  dVar11 = util__Tan(&local_70);
  pMVar17 = (ModulePlacer *)0x0;
  local_c = (local_20 - 1.0 / dVar11) * local_c;
  pSVar16 = (Str_L_char_G_ *)local_4c;
  pSVar14 = (Str_L_char_G_ *)local_2c;
  pSVar9 = (Str_L_char_G_ *)local_18;
  pSVar10 = &local_68;
  dVar11 = this->CachedFlowTemperature_K -
           (((local_c / ((this->HubRadius_m + this->TurbineRadius_m) * 0.5)) * local_5c) /
           this->CachedMassFlowRate_kg__s) / this->CachedFluid->BoilingPoint_K;
  local_5c = 0.0;
  if (0.0 <= dVar11) {
    local_5c = dVar11;
  }
  local_c = Material__GetSafeUseTemperature_K(this->Composition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_5c,pSVar10,pSVar9,pSVar14,pSVar16,pMVar17);
  if (local_18 != (uint32_t)0x0) {
    port_op_delete((void *)local_18);
    *(uint32_t *)&local_18 = (uint32_t)0x0;
  }
  if (local_2c != (uint32_t)0x0) {
    port_op_delete((void *)local_2c);
    *(uint32_t *)&local_2c = (uint32_t)0x0;
  }
  if (local_4c != (uint32_t)0x0) {
    port_op_delete((void *)local_4c);
    *(uint32_t *)&local_4c = (uint32_t)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_4c,"Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char((Str_L_char_G_ *)local_2c,"GetBladeStress_Pa()");
  util__Str_char___Str_char(&local_38,"TurbomachineBladeStress");
  pMVar17 = (ModulePlacer *)0x0;
  pSVar16 = (Str_L_char_G_ *)local_18;
  *(uint32_t *)&local_18 = (uint32_t)0x0;
  (*(uint32_t*)&(local_14)) = 0;
  (*(uint32_t*)((char*)&(local_14)+4)) = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff2c,(Str_L_char_G_ *)local_4c);
  dVar11 = Material__GetYieldStrength_Pa(this->Composition);
  pcVar13 = (char *)((ulonglong)dVar11 >> 0x20);
  SVar5.Capacity = (int)pSVar14;
  SVar5.Data = (char *)pSVar9;
  SVar5.Length = (int)pSVar16;
  pSVar8 = Print(&local_84,(double)CONCAT44(pSVar10,pcVar13),SVar5);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff28,(Str_L_char_G_ *)local_2c);
  dVar11 = GetBladeStress_Pa(this);
  SVar2.Capacity = (int)pSVar9;
  SVar2.Data = (char *)pSVar10;
  SVar2.Length = (int)pSVar8;
  pSVar9 = Print(&local_68,(double)CONCAT44(pcVar13,(int)((ulonglong)dVar11 >> 0x20)),SVar2);
  pSVar14 = &local_38;
  local_c = Material__GetYieldStrength_Pa(this->Composition);
  local_5c = GetBladeStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_5c,pSVar14,pSVar9,pSVar8,pSVar16,pMVar17);
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_18 != (uint32_t)0x0) {
    port_op_delete((void *)local_18);
    *(uint32_t *)&local_18 = (uint32_t)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_2c != (uint32_t)0x0) {
    port_op_delete((void *)local_2c);
    *(uint32_t *)&local_2c = (uint32_t)0x0;
  }
  if (local_4c != (uint32_t)0x0) {
    port_op_delete((void *)local_4c);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_4c,"Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char((Str_L_char_G_ *)local_2c,"GetHubStress_Pa()");
  util__Str_char___Str_char(&local_38,"TurbomachineHubStress");
  pMVar17 = (ModulePlacer *)0x0;
  pSVar16 = (Str_L_char_G_ *)local_18;
  *(uint32_t *)&local_18 = (uint32_t)0x0;
  (*(uint32_t*)&(local_14)) = 0;
  (*(uint32_t*)((char*)&(local_14)+4)) = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff2c,(Str_L_char_G_ *)local_4c);
  dVar11 = Material__GetYieldStrength_Pa(this->Composition);
  pcVar13 = (char *)((ulonglong)dVar11 >> 0x20);
  SVar6.Capacity = (int)pSVar8;
  SVar6.Data = (char *)pSVar9;
  SVar6.Length = (int)pSVar16;
  pSVar10 = Print(&local_84,(double)CONCAT44(pSVar14,pcVar13),SVar6);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff28,(Str_L_char_G_ *)local_2c);
  dVar11 = GetHubStress_Pa(this);
  SVar3.Capacity = (int)pSVar9;
  SVar3.Data = (char *)pSVar14;
  SVar3.Length = (int)pSVar10;
  pSVar9 = Print(&local_68,(double)CONCAT44(pcVar13,(int)((ulonglong)dVar11 >> 0x20)),SVar3);
  pSVar14 = &local_38;
  local_c = Material__GetYieldStrength_Pa(this->Composition);
  local_5c = GetHubStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_c < local_5c,pSVar14,pSVar9,pSVar10,pSVar16,pMVar17);
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_18 != (uint32_t)0x0) {
    port_op_delete((void *)local_18);
    *(uint32_t *)&local_18 = (uint32_t)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_2c != (uint32_t)0x0) {
    port_op_delete((void *)local_2c);
    *(uint32_t *)&local_2c = (uint32_t)0x0;
  }
  if (local_4c != (uint32_t)0x0) {
    port_op_delete((void *)local_4c);
  }
  util__Str_char___Str_char(&local_a0,"Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_68,"GetThermalExpansionStress_Pa()");
  util__Str_char___Str_char(&local_84,"TurbomachineThermalExpansionStress");
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  local_5c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dVar11 = this->HubRadius_m;
  dVar1 = this->TurbineRadius_m;
  local_40 = (dVar1 + dVar11) * 0.5;
  local_c = (this->CachedMassFlowRate_kg__s / this->CachedFluidDensity_kg__m3) /
            ((dVar1 * 3.141592653589793 * dVar1 - dVar11 * 3.141592653589793 * dVar11) -
            local_40 * 0.001);
  local_54 = local_5c;
  dVar11 = util__Cos(&local_5c);
  local_c = local_c / dVar11;
  dVar11 = util__Sin(&local_54);
  local_c = dVar11 * local_c;
  local_70 = this->CachedMassFlowRate_kg__s;
  dVar12 = GetOutletTangentialVelocity_m__s(this);
  dVar11 = this->TurbineRadius_m;
  dVar1 = this->HubRadius_m;
  local_8c = (double)this->StageCount * (dVar12 + local_c) * local_40 * local_70;
  local_20 = local_70 / this->CachedFluidDensity_kg__m3;
  local_c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  local_70 = 0.5235987755982988;
  local_20 = local_20 /
             ((dVar11 * 3.141592653589793 * dVar11 - dVar1 * 3.141592653589793 * dVar1) -
             (dVar11 + dVar1) * 0.5 * 0.001);
  local_40 = util__Tan(&local_c);
  dVar11 = util__Tan(&local_70);
  local_40 = (local_40 - 1.0 / dVar11) * local_20;
  local_14 = Material__GetThermalExpansionStress_Pa
                       (this->Composition,
                        (((local_40 / ((this->HubRadius_m + this->TurbineRadius_m) * 0.5)) *
                         local_8c) / this->CachedMassFlowRate_kg__s) /
                        this->CachedFluid->BoilingPoint_K);
  dVar11 = this->HubRadius_m;
  dVar1 = this->TurbineRadius_m;
  local_8c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  *(uint64_t *)&local_14 = local_14 / (double)this->StageCount;
  local_78 = (dVar1 + dVar11) * 0.5;
  local_20 = (this->CachedMassFlowRate_kg__s / this->CachedFluidDensity_kg__m3) /
             ((dVar1 * 3.141592653589793 * dVar1 - dVar11 * 3.141592653589793 * dVar11) -
             local_78 * 0.001);
  local_40 = local_8c;
  dVar11 = util__Cos(&local_40);
  local_20 = local_20 / dVar11;
  dVar11 = util__Sin(&local_8c);
  local_20 = dVar11 * local_20;
  local_94 = this->CachedMassFlowRate_kg__s;
  dVar11 = GetOutletTangentialVelocity_m__s(this);
  *(uint64_t *)&local_28 = (double)this->StageCount * (dVar11 + local_20) * local_78 * local_94;
  local_48 = local_94 / this->CachedFluidDensity_kg__m3;
  local_78 = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dVar11 = this->TurbineRadius_m;
  dVar1 = this->HubRadius_m;
  local_94 = 0.5235987755982988;
  local_48 = local_48 /
             ((dVar11 * 3.141592653589793 * dVar11 - dVar1 * 3.141592653589793 * dVar1) -
             (dVar11 + dVar1) * 0.5 * 0.001);
  local_20 = util__Tan(&local_78);
  dVar11 = util__Tan(&local_94);
  local_48 = (local_20 - 1.0 / dVar11) * local_48;
  iVar15 = 0x5ec8a3;
  local_28 = Material__GetThermalExpansionStress_Pa
                       (this->Composition,
                        (((local_48 / ((this->HubRadius_m + this->TurbineRadius_m) * 0.5)) *
                         local_28) / this->CachedMassFlowRate_kg__s) /
                        this->CachedFluid->BoilingPoint_K);
  pSVar16 = &local_38;
  pMVar17 = (ModulePlacer *)0x0;
  *(uint64_t *)&local_28 = local_28 / (double)this->StageCount;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff2c,&local_a0);
  dVar11 = Material__GetYieldStrength_Pa(this->Composition);
  pcVar13 = (char *)((ulonglong)dVar11 >> 0x20);
  SVar7.Capacity = iVar15;
  SVar7.Data = (char *)pSVar9;
  SVar7.Length = (int)pSVar16;
  pSVar10 = Print(&local_b8,(double)CONCAT44(pSVar14,pcVar13),SVar7);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff28,&local_68);
  SVar4.Capacity = (int)pSVar9;
  SVar4.Data = (char *)pSVar14;
  SVar4.Length = (int)pSVar10;
  pSVar9 = Print(&local_ac,(double)CONCAT44(pcVar13,(int)((ulonglong)local_14 >> 0x20)),SVar4);
  pSVar14 = &local_84;
  *(uint32_t *)&local_14 = Material__GetYieldStrength_Pa(this->Composition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_14 < local_28,pSVar14,pSVar9,pSVar10,pSVar16,pMVar17);
  if (local_ac.Data != (char *)0x0) {
    port_op_delete(local_ac.Data);
    local_ac.Data = (char *)0x0;
  }
  if (local_b8.Data != (char *)0x0) {
    port_op_delete(local_b8.Data);
    local_b8.Data = (char *)0x0;
  }
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_84.Data != (char *)0x0) {
    port_op_delete(local_84.Data);
    local_84.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_a0.Data != (char *)0x0) {
    port_op_delete(local_a0.Data);
  }
  util__Str_char___Str_char(&local_a0,"TurbomachineFlowFreeze");
  *(uint32_t *)&local_2c = (uint32_t)0x0;
  (*(uint32_t*)&(local_28)) = 0;
  (*(uint32_t*)((char*)&(local_28)+4)) = 0;
  *(uint32_t *)&local_18 = (uint32_t)0x0;
  (*(uint32_t*)&(local_14)) = 0;
  (*(uint32_t*)((char*)&(local_14)+4)) = 0;
  local_38.Data = (char *)0x0;
  local_38.Capacity = 0;
  local_38.Length = 0;
  dVar11 = this->CachedFluid->ThermalConductivity_W__m_K;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,
             this->CachedFlowTemperature_K <= dVar11 && dVar11 != this->CachedFlowTemperature_K,
             &local_a0,&local_38,(Str_L_char_G_ *)local_18,(Str_L_char_G_ *)local_2c,(ModulePlacer *)0x0);
  if (local_38.Data != (char *)0x0) {
    port_op_delete(local_38.Data);
    local_38.Data = (char *)0x0;
  }
  if (local_18 != (uint32_t)0x0) {
    port_op_delete((void *)local_18);
    *(uint32_t *)&local_18 = (uint32_t)0x0;
  }
  if (local_2c != (uint32_t)0x0) {
    port_op_delete((void *)local_2c);
    *(uint32_t *)&local_2c = (uint32_t)0x0;
  }
  if (local_a0.Data != (char *)0x0) {
    port_op_delete(local_a0.Data);
  }
  return __return_storage_ptr__;
}

//==== 005ecac0 GetDecimalPropertyBoundaries_005ecac0 ====


/* public: virtual class util__Maybe_L_structutil__Range_L_double_G__G_ __thiscall
   TurbineSubModule__GetDecimalPropertyBoundaries(struct util__ClassMember const &)const  */

void __thiscall
TurbineSubModule__GetDecimalPropertyBoundaries(TurbineSubModule *this,ClassMember *param_1)

{
  double dVar1;
  char *pcVar2;
  undefined1 *puVar3;
  double dVar4;
  undefined4 *in_stack_00000008;
  undefined8 uStack_14;
  undefined8 uStack_c;
  
  if ((int)in_stack_00000008[1] < 1) {
    puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
  }
  else {
    puVar3 = (undefined1 *)*in_stack_00000008;
  }
  for (pcVar2 = "TurbineRadius_m"; (pcVar2[(int)(puVar3 + -0x929f54)] != '\0' || (*pcVar2 != '\0'));
      pcVar2 = pcVar2 + 1) {
    if (pcVar2[(int)(puVar3 + -0x929f54)] != *pcVar2) {
      if ((int)in_stack_00000008[1] < 1) {
        puVar3 = (undefined1 *)(&cde_l2_0b2b1c9f_NullString);
      }
      else {
        puVar3 = (undefined1 *)*in_stack_00000008;
      }
      for (pcVar2 = "HubRadius_m"; (pcVar2[(int)(puVar3 + -0x929f64)] != '\0' || (*pcVar2 != '\0'));
          pcVar2 = pcVar2 + 1) {
        if (pcVar2[(int)(puVar3 + -0x929f64)] != *pcVar2) {
          (param_1->Name).Data = (char *)0x0;
          (param_1->Name).Capacity = 0;
          (param_1->Name).Length = 0;
          *(undefined4 *)&param_1->Type = 0;
          *(undefined1 *)&param_1->Offset = 0;
          return;
        }
      }
      uStack_c = this->TurbineRadius_m - 0.01;
      uStack_14 = 0.01;
      if (20.0 <= uStack_c) {
        uStack_c = 20.0;
      }
      if (uStack_c < 0.01) {
        (*(uint32_t*)&(uStack_14)) = SUB84(uStack_c,0);
        (*(uint32_t*)((char*)&(uStack_14)+4)) = (int)((ulonglong)uStack_c >> 0x20);
        *(undefined1 *)&param_1->Offset = 1;
        (param_1->Name).Data = (char *)uStack_14;
        (param_1->Name).Capacity = (*(uint32_t*)((char*)&(uStack_14)+4));
        (param_1->Name).Length = 0x47ae147b;
        *(undefined4 *)&param_1->Type = 0x3f847ae1;
        return;
      }
LAB_005ecb30:
      (param_1->Name).Data = (char *)uStack_14;
      (param_1->Name).Capacity = (*(uint32_t*)((char*)&(uStack_14)+4));
      (param_1->Name).Length = (int)uStack_c;
      *(undefined4 *)&(param_1->Type) = (*(uint32_t*)((char*)&(uStack_c)+4));
      *(undefined1 *)&param_1->Offset = 1;
      return;
    }
  }
  dVar1 = this->HubRadius_m + 0.01;
  dVar4 = 0.01;
  if (0.01 <= dVar1) {
    dVar4 = dVar1;
  }
  uStack_c = 20.0;
  uStack_14 = dVar4;
  if (20.0 < dVar4) {
    uStack_14 = 20.0;
    uStack_c = dVar4;
  }
  goto LAB_005ecb30;
}





//==== 005ecbe0 GetPointerPropertyChoices_005ecbe0 ====


/* public: virtual class util__Darray_L_structutil__tuple2_L_classutil__Str_L_char_G__Cclass_util__Darray_L_classutil__Reflectable_P_G__G__G_ 
   BallisticTubeSubModule__GetPointerPropertyChoices(struct util__ClassMember const &,class
   util__SerializationManagerInterface const *)const  */

ClassMember * 
BallisticTubeSubModule__GetPointerPropertyChoices
          (BallisticTubeSubModule *this,ClassMember *param_1,SerializationManagerInterface *param_2)

{
  char *pcVar1;
  SerializationManagerInterface SVar2;
  int in_stack_0000000c;
  
  if ((*(int *)&param_2[1]) < 1) {
    SVar2 = *(SerializationManagerInterface *)&cde_l2_0b2b1c9f_NullString;
  }
  else {
    SVar2 = *param_2;
  }
  for (pcVar1 = "Composition"; (pcVar1[(int)(*(int *)&SVar2 + -0x91fc04)] != '\0' || (*pcVar1 != '\0'));
      pcVar1 = pcVar1 + 1) {
    if (pcVar1[(int)((*(int *)&SVar2) + -0x91fc04)] != *pcVar1) {
      (param_1->Name).Data =
           (char *)&vftable_85;
      (param_1->Name).Capacity = 0;
      (param_1->Name).Length = 0;
      *(undefined4 *)&param_1->Type = 0;
      return param_1;
    }
  }
  GetMaterials((DataParser *)param_1,in_stack_0000000c,false);
  return param_1;
}





//==== 005ecc60 GetReflectionInfo_005ecc60 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   TurbineSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall TurbineSubModule__GetReflectionInfo(TurbineSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1bd0b0a2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1bd0b0a2__thread_safe_static_guard_0__);
    if ( cde_l2_1bd0b0a2__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_8c3b52fe_ReflectionInfo) = &vftable_235;
      _Init_thread_footer(& cde_l2_1bd0b0a2__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_8c3b52fe_ReflectionInfo;
}





//==== 005ecc70 scalar_deleting_destructor_005ecc70 ====

/* public: virtual void * __thiscall TurbineSubModule:: 0 scalardeletingdestructor(unsigned int) */

void * __thiscall
TurbineSubModule___scalar_deleting_destructor(TurbineSubModule *this,uint param_1)

{
  this->_pad_0x0_0 = (int)&vftable_5;
  if ((void *)this->_pad_0x4_1 != (void *)0x0) {
    port_op_delete((void *)this->_pad_0x4_1);
    this->_pad_0x4_1 = 0;
  }
  if ((param_1 & 1) != 0) {
    port_op_delete(this,0x58);
  }
  return this;
}

//==== 005eccb0 GetTypeName_005eccb0 ====


/* public: virtual class util__Str_L_char_G_  TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetTypeName(void)const  */

Str_L_char_G_ * 
TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetTypeName
          (ReflectionInfoStruct_L_class_TurbineSubModule_G_ *this,Str_L_char_G_ *__return_storage_ptr__)

{
  util__Str_char___Str_char(__return_storage_ptr__,"TurbineSubModule");
  return __return_storage_ptr__;
}





//==== 005eccd0 GetMembers_005eccd0 ====


/* public: virtual class util__Darray_L_structutil__ClassMember_G_ const 
   TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetMembers(void)const  */

Darray_L_struct_util__ClassMember_G_ * 
TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetMembers__o2
          (ReflectionInfoStruct_L_class_TurbineSubModule_G_ *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  Darray_L_struct_util__ClassMember_G_ *in_stack_00000004;
  ClassMember CStack_34;
  int iStack_c;
  ClassMember *pCStack_8;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
        cde_l2_73f675a4__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_73f675a4__thread_safe_static_guard_0__),
      cde_l2_73f675a4__thread_safe_static_guard_0__ == -1)) {
     cde_l2_5baeb2d0_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_73f675a4__thread_safe_static_guard_0__);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  util__Darray_struct_util__ClassMember___Darray_struct_util__ClassMember
            (in_stack_00000004,
              cde_l2_5baeb2d0_Count);
  iVar3 = 0;
  if (0 <  cde_l2_5baeb2d0_Count) {
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
    } while (iVar3 <  cde_l2_5baeb2d0_Count);
  }
  return in_stack_00000004;
}





//==== 005ece10 GetMember_005ece10 ====


/* public: virtual class util__Maybe_L_structutil__ClassMember_G_ const 
   TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetMember(class util__Str_L_char_G_
   const &)const  */

Str_L_char_G_ * 
TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetMember__o2
          (ReflectionInfoStruct_L_class_TurbineSubModule_G_ *this,Str_L_char_G_ *param_1)

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
        cde_l2_7a4008fd__thread_safe_static_guard_0__) &&
     (_Init_thread_header(& cde_l2_7a4008fd__thread_safe_static_guard_0__),
      cde_l2_7a4008fd__thread_safe_static_guard_0__ == -1)) {
     cde_l2_e5672ecc_Count = StaticGetMemberCount();
    _Init_thread_footer(& cde_l2_7a4008fd__thread_safe_static_guard_0__);
  }
  iVar6 = 0;
  if (0 <  cde_l2_e5672ecc_Count) {
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
LAB_005ece9d:
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
          if (cVar3 == '\0') goto LAB_005ece9d;
        }
      }
      if (SStack_14.Data != (char *)0x0) {
        port_op_delete(SStack_14.Data);
      }
      if ((char *)uVar1 != (char *)0x0) {
        port_op_delete((void *)uVar1);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 <  cde_l2_e5672ecc_Count);
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





//==== 005ecfb0 GetFactory_005ecfb0 ====


/* public: virtual class util__Reflectable * (__cdecl*
   TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetFactory(void)const )(void) */

_func_Reflectable_ptr * 
__thiscall TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___GetFactory__o2
          (ReflectionInfoStruct_L_class_TurbineSubModule_G_ *this)

{
  return StaticFactory;
}





//==== 005ecfc0 TurbopumpSubModule ====

/* public: __thiscall TurbopumpSubModule__TurbopumpSubModule(void) */

TurbopumpSubModule * __thiscall TurbopumpSubModule__TurbopumpSubModule(TurbopumpSubModule *this)

{
  this->_pad_0x0_0 = 0;
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x4_1 = 0;
  this->_pad_0x8_2 = 0;
  this->_pad_0xc_3 = 0;
  this->_pad_0x0_0 = (int)&vftable_236;
  this->Composition = (Material *)0x0;
  *(undefined4 *)&this->PumpRadius_m = 0;
  *(undefined4 *)((int)&this->PumpRadius_m + 4) = 0;
  *(undefined4 *)&this->RotationalSpeed_RPM = 0;
  *(undefined4 *)((int)&this->RotationalSpeed_RPM + 4) = 0;
  this->CachedNoFluid = false;
  this->CachedFluidDensity_kg__m3 = 0.0;
  this->CachedFluid = (Material *)0x0;
  this->CachedFlowTemperature_K = 0.0;
  return this;
}

//==== 005ed010 BuildModels_005ed010 ====


/* public: void  TurbineSubModule__BuildModels(class util__Darray_L_class_util__SharedPtr_L_structGameModel_G__G_ *)const  */

void 
TurbineSubModule__BuildModels
          (TurbineSubModule *this,Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  Quaternion_L_double_G_ QVar1;
  bool bVar2;
  GameModel *pGVar3;
  ReferenceControllerRegistry *pRVar4;
  ReferenceController *this_00;
  undefined4 *puVar5;
  Cylinder_L_double_G_ *pCVar6;
  VertexBufferObject *pVVar7;
  int iVar8;
  undefined8 uVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  GameModel *pGVar13;
  Cylinder_L_double_G_ CStack_6c;
  Cylinder_L_double_G_ CStack_5c;
  double dStack_4c;
  double dStack_44;
  undefined8 uStack_3c;
  double dStack_34;
  undefined8 uStack_2c;
  undefined8 uStack_24;
  double dStack_1c;
  double dStack_14;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_24 = (double)CONCAT44(param_1,(undefined4)uStack_24);
  Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
  dVar12 = 0.7853981633974483;
  dVar10 = 0.0;
  libm_sse2_sin_precise(0.0);
  uStack_3c = dVar12 * 0.0;
  uVar9 = 0x3fe921fb54442d18;
  dStack_4c = dVar12;
  dStack_44 = dVar10;
  dStack_34 = dVar10;
  libm_sse2_cos_precise(0.0);
  uVar11 = (uint)((ulonglong)uVar9 >> 0x20);
  QVar1.Y = (undefined4)uStack_3c;
  QVar1.X = dStack_4c;
  QVar1.Z = (*(uint32_t*)((char*)&(uStack_3c)+4));
  QVar1.Z = (undefined4)uStack_3c;
  QVar1.W = (*(uint32_t*)((char*)&(uStack_3c)+4));
  QVar1.W = (int)uVar9;
  (*(uint32_t *)((char *)&(QVar1.W) + 4)) = uVar11;
  Graphics__Rotate(QVar1);
  pGVar3 = (GameModel *)port_op_new(0xb8);
  if (pGVar3 == (GameModel *)0x0) {
    pGVar3 = (GameModel *)0x0;
  }
  else {
    pGVar3 = (GameModel *)
             GameModel__GameModel
                       (pGVar3,this->Composition,(Material *)0x0,
                        ({ __typeof__(((ulonglong)(uVar11 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar11 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (pGVar3 != (GameModel *)0x0) goto LAB_005ed0d5;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005ed0d5:
  uStack_2c = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_2c)+4)),pGVar3);
  pGVar13 = pGVar3;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  this_00 = util__ReferenceControllerRegistry__Register(pRVar4,pGVar13);
  uStack_2c = (double)CONCAT44(this_00,(undefined4)uStack_2c);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_00);
  }
  util__Darray_class_util__SharedPtr_struct_GameModel_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_24)+4))),(SharedPtr_L_struct_GameModel_G_ *)&uStack_2c);
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
    if (pGVar3 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar3,1);
    }
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pGVar3);
  }
  puVar5 = (undefined4 *)(**(code **)(*(int *)(*(uint32_t*)((char*)&(uStack_24)+4)) + 8))();
  dStack_14 = this->TurbineRadius_m - this->HubRadius_m;
  pGVar3 = (GameModel *)*puVar5;
  uStack_24 = 0.5235987755982988;
  uStack_2c = 1.0471975511965976;
  dStack_44 = 0.5235987755982988;
  dStack_34 = 1.0471975511965976;
  dStack_1c = util__Cos((double *)&uStack_2c);
  dVar12 = util__Cos((double *)&uStack_24);
  dStack_1c = (dVar12 + dStack_1c) * dStack_14;
  dStack_14 = util__Sin(&dStack_34);
  dVar12 = util__Sin(&dStack_44);
  dStack_14 = (double)this->StageCount * (dStack_1c / (dVar12 + dStack_14));
  pCVar6 = (Cylinder_L_double_G_ *)(uintptr_t)(GetTurbineCylinder_m(this,&CStack_5c));
  dStack_1c = pCVar6->Radius;
  pCVar6 = (Cylinder_L_double_G_ *)(uintptr_t)(GetTurbineCylinder_m(this,&CStack_6c));
  pVVar7 = GameModel__GetVertexObject(pGVar3);
  iVar8 = GetUniversalRadialSegmentation(pCVar6->Radius);
  FillChamferedCylinder(dStack_1c / 1000.0,dStack_14 / 1000.0,0.1,iVar8,pVVar7);
  Graphics__TransformStack___TransformStack(&TStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005ed250 BuildModels_005ed250 ====


/* public: void  TurbopumpSubModule__BuildModels(class util__Darray_L_class_util__SharedPtr_L_structGameModel_G__G_ *)const  */

void 
TurbopumpSubModule__BuildModels
          (TurbopumpSubModule *this,Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *param_1)

{
  undefined8 stack0xfffffffc;
  Quaternion_L_double_G_ QVar1;
  bool bVar2;
  GameModel *pGVar3;
  ReferenceControllerRegistry *pRVar4;
  ReferenceController *this_00;
  undefined4 *puVar5;
  Cylinder_L_double_G_ *pCVar6;
  VertexBufferObject *pVVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  uint uVar12;
  GameModel *pGVar13;
  Cylinder_L_double_G_ CStack_44;
  Cylinder_L_double_G_ CStack_34;
  double dStack_24;
  undefined8 uStack_1c;
  undefined8 uStack_14;
  TransformStack TStack_9;
  uint uStack_8;
  
  uStack_8 = __security_cookie ^ (uint)&stack0xfffffffc;
  uStack_14 = (double)CONCAT44(param_1,(undefined4)uStack_14);
  Graphics__TransformStack__TransformStack(&TStack_9,Style__Default);
  dVar9 = 0.7853981633974483;
  dVar11 = 0.0;
  libm_sse2_sin_precise(0.0);
  CStack_34.Radius = dVar9 * 0.0;
  uVar10 = 0x3fe921fb54442d18;
  CStack_34.Height = dVar11;
  dStack_24 = dVar9;
  uStack_1c = dVar11;
  libm_sse2_cos_precise(0.0);
  uVar12 = (uint)((ulonglong)uVar10 >> 0x20);
  QVar1.Y = CStack_34.Radius;
  QVar1.X = dStack_24;
  QVar1.Z = (*(uint32_t *)((char *)&(CStack_34.Radius) + 4));
  QVar1.Z = CStack_34.Radius;
  QVar1.W = (*(uint32_t *)((char *)&(CStack_34.Radius) + 4));
  QVar1.W = (int)uVar10;
  (*(uint32_t *)((char *)&(QVar1.W) + 4)) = uVar12;
  Graphics__Rotate(QVar1);
  pGVar3 = (GameModel *)port_op_new(0xb8);
  if (pGVar3 == (GameModel *)0x0) {
    pGVar3 = (GameModel *)0x0;
  }
  else {
    pGVar3 = (GameModel *)
             GameModel__GameModel
                       (pGVar3,this->Composition,(Material *)0x0,
                        ({ __typeof__(((ulonglong)(uVar12 & 0xffffff00) << 0x20)) _t_ = ((ulonglong)(uVar12 & 0xffffff00) << 0x20); *(Maybe_L_int_G_ *)&_t_; }));
    if (pGVar3 != (GameModel *)0x0) goto LAB_005ed315;
  }
  util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\referencecounting.inl",
                  0xd4,"NewPointer",(char *)0x0);
  DebugBreak();
LAB_005ed315:
  uStack_1c = (double)CONCAT44((*(uint32_t*)((char*)&(uStack_1c)+4)),pGVar3);
  pGVar13 = pGVar3;
  pRVar4 = util__ReferenceControllerRegistry__Get();
  this_00 = util__ReferenceControllerRegistry__Register(pRVar4,pGVar13);
  uStack_1c = (double)CONCAT44(this_00,(undefined4)uStack_1c);
  if (this_00 != (ReferenceController *)0x0) {
    util__ReferenceController__AddStrongReference(this_00);
  }
  util__Darray_class_util__SharedPtr_struct_GameModel_____Add
            ((Darray_L_class_util__SharedPtr_L_struct_GameModel_G___G_ *)(uintptr_t)((*(uint32_t*)((char*)&(uStack_14)+4))),(SharedPtr_L_struct_GameModel_G_ *)&uStack_1c);
  if ((this_00 != (ReferenceController *)0x0) &&
     (bVar2 = util__ReferenceController__ReleaseStrongReference(this_00), bVar2)) {
    if (pGVar3 != (GameModel *)0x0) {
      GameModel___scalar_deleting_destructor(pGVar3,1);
    }
    pRVar4 = util__ReferenceControllerRegistry__Get();
    util__ReferenceControllerRegistry__PointerWasDestroyed(pRVar4,pGVar3);
  }
  puVar5 = (undefined4 *)(**(code **)(*(int *)(*(uint32_t*)((char*)&(uStack_14)+4)) + 8))();
  pGVar3 = (GameModel *)*puVar5;
  uStack_1c = GetLength_m(this);
  pCVar6 = (Cylinder_L_double_G_ *)(uintptr_t)(GetTurbopumpCylinder_m(this,&CStack_34));
  uStack_14 = pCVar6->Radius;
  pCVar6 = (Cylinder_L_double_G_ *)(uintptr_t)(GetTurbopumpCylinder_m(this,&CStack_44));
  pVVar7 = GameModel__GetVertexObject(pGVar3);
  iVar8 = GetUniversalRadialSegmentation(pCVar6->Radius);
  FillChamferedCylinder(uStack_14 / 1000.0,uStack_1c / 1000.0,0.1,iVar8,pVVar7);
  Graphics__TransformStack___TransformStack(&TStack_9);
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc);
  return;
}





//==== 005ed420 GetAbsoluteOutletAngle_radians ====


/* public: double __thiscall TurbopumpSubModule__GetAbsoluteOutletAngle_radians(void)const  */

double __thiscall TurbopumpSubModule__GetAbsoluteOutletAngle_radians(TurbopumpSubModule *this)

{
  double dVar1;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_34 = 1.0471975511965976;
  dStack_2c = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586 *
              (this->PumpRadius_m * 0.2 + this->PumpRadius_m) * 0.5;
  dStack_1c = 0.5235987755982988;
  dStack_14 = 0.5235987755982988;
  dStack_c = dStack_2c;
  dStack_24 = util__Tan(&dStack_14);
  dStack_24 = 1.0 / dStack_24;
  dVar1 = util__Tan(&dStack_1c);
  dStack_2c = dStack_2c / (dVar1 + dStack_24);
  dStack_c = dStack_c / dStack_2c;
  dVar1 = util__Tan(&dStack_34);
  dVar1 = dStack_c - 1.0 / dVar1;
  dStack_34 = dVar1;
  libm_sse2_atan_precise(0.0);
}





//==== 005ed4f0 GetBladeMass_kg ====


/* public: double __thiscall TurbineSubModule__GetBladeMass_kg(void)const  */

double __thiscall TurbineSubModule__GetBladeMass_kg(TurbineSubModule *this)

{
  int iVar1;
  double dVar2;
  Maybe_L_double_G_ *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  undefined1 auStack_34 [16];
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_24 = this->TurbineRadius_m - this->HubRadius_m;
  dStack_14 = 0.5235987755982988;
  dStack_c = 1.0471975511965976;
  dStack_1c = util__Sin(&dStack_c);
  dVar6 = util__Sin(&dStack_14);
  dStack_3c = this->TurbineRadius_m;
  dVar2 = dStack_24 / (dVar6 + dStack_1c);
  dStack_44 = this->HubRadius_m;
  dVar4 = dStack_3c + dStack_44;
  iVar1 = this->StageCount;
  dStack_24 = 1.0471975511965976;
  dStack_4c = 1.0471975511965976;
  dStack_1c = 0.5235987755982988;
  dStack_54 = 0.5235987755982988;
  (*(uint64_t*)((char*)&(auStack_34)+8)) = util__Cos(&dStack_24);
  dVar6 = util__Cos(&dStack_1c);
  dStack_44 = dStack_3c - dStack_44;
  dStack_3c = (dVar6 + (double)(*(uint64_t*)((char*)&(auStack_34)+8))) * dStack_44;
  dStack_44 = util__Sin(&dStack_4c);
  dVar7 = util__Sin(&dStack_54);
  dVar7 = dVar7 + dStack_44;
  dVar6 = this->HubRadius_m;
  dVar5 = dVar6 * 3.141592653589793 * dVar6;
  dStack_44 = 0.5;
  dStack_3c = dVar6 * 6.283185307179586 * (double)this->StageCount * (dStack_3c / dVar7) +
              dVar5 + dVar5;
  pMVar3 = util__Sqrt((Maybe_L_double_G_ *)auStack_34,&dStack_44);
  if (pMVar3->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_3c = pMVar3->Data * 0.001 * dStack_3c;
  dVar6 = GetShellVolume_m3(this);
  return (dStack_3c + dVar4 * 0.5 * 0.001 * (dVar2 + dVar2) * (double)iVar1 + dVar6) *
         this->Composition->Density_kg__m3;
}





//==== 005ed6b0 GetBladeMass_kg_005ed6b0 ====


/* public: double __thiscall TurbopumpSubModule__GetBladeMass_kg(void)const  */

double __thiscall TurbopumpSubModule__GetBladeMass_kg(TurbopumpSubModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  double dVar3;
  Maybe_L_double_G_ MStack_44;
  double dStack_34;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  if (this->Composition == (Material *)0x0) {
    return 0.0;
  }
  dStack_1c = 0.5235987755982988;
  dStack_14 = 1.0471975511965976;
  dStack_24 = this->PumpRadius_m - this->PumpRadius_m * 0.2;
  dStack_c = util__Sin(&dStack_14);
  dVar2 = util__Sin(&dStack_1c);
  dStack_24 = dStack_24 / (dVar2 + dStack_c);
  dStack_c = this->PumpRadius_m * 0.2;
  dStack_34 = (dStack_c + this->PumpRadius_m) * 0.5 * 0.001 * (dStack_24 + dStack_24);
  dVar3 = GetLength_m(this);
  dVar2 = dStack_c * 3.141592653589793 * dStack_c;
  dStack_c = dStack_c * 6.283185307179586 * dVar3 + dVar2 + dVar2;
  dStack_24 = 0.5;
  pMVar1 = util__Sqrt(&MStack_44,&dStack_24);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_c = pMVar1->Data * 0.001 * dStack_c;
  dVar2 = GetShellVolume_m3(this);
  return this->Composition->Density_kg__m3 * (dVar2 + dStack_34 + dStack_c);
}





//==== 005ed830 GetBladeStress_Pa ====


/* public: double __thiscall TurbineSubModule__GetBladeStress_Pa(void)const  */

double __thiscall TurbineSubModule__GetBladeStress_Pa(TurbineSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_14;
  double dStack_c;
  
  dVar4 = this->CachedMassFlowRate_kg__s;
  dVar8 = this->CachedFluidDensity_kg__m3;
  dStack_c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dVar1 = this->TurbineRadius_m;
  dVar2 = this->HubRadius_m;
  dStack_14 = 0.5235987755982988;
  dVar6 = util__Tan(&dStack_c);
  dVar7 = util__Tan(&dStack_14);
  dVar3 = this->TurbineRadius_m;
  dVar5 = (dVar3 + this->HubRadius_m) * 0.5;
  dVar4 = ((dVar6 - 1.0 / dVar7) *
          ((dVar4 / dVar8) /
          ((dVar1 * 3.141592653589793 * dVar1 - dVar2 * 3.141592653589793 * dVar2) -
          (dVar1 + dVar2) * 0.5 * 0.001))) / dVar5;
  dVar8 = GetBladeMass_kg(this);
  return ((dVar8 * dVar4 * dVar4 * dVar3) / (dVar5 * 0.001)) / (double)(this->StageCount * 2);
}





//==== 005ed960 GetComposition_005ed960 ====


/* public: virtual class util__Darray_L_structMaterialComposition_G_ __thiscall
   TurbopumpSubModule__GetComposition(void)const  */

Darray_L_struct_MaterialConstituent_G_ * __thiscall
TurbopumpSubModule__GetComposition(TurbopumpSubModule *this)

{
  undefined8 stack0x00000004;
  int *piVar1;
  Darray_L_struct_MaterialConstituent_G_ *this_00;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  Material *pMVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  Darray_L_struct_MaterialConstituent_G_ *in_stack_00000004;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  this_00 = in_stack_00000004;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 = (undefined **)(&vftable_75);
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 3;
  puVar3 = (undefined4 *)port_op_new(0x30);
  dVar10 = 0.0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    iVar5 = 3;
    puVar4 = puVar3;
    do {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
      iVar5 = iVar5 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar5 != 0);
  }
  *(undefined4 **)(in_stack_00000004 + 4) = puVar3;
  iVar5 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 0x10;
      iVar5 = iVar5 + 1;
      puVar3 = (undefined4 *)(*(int *)(in_stack_00000004 + 4) + -0x10 + iVar6);
      *puVar3 = 0;
      puVar3[1] = iStack_10;
      puVar3[2] = 0;
      puVar3[3] = 0;
    } while (iVar5 < *(int *)(in_stack_00000004 + 0xc));
  }
  if (this->Composition == (Material *)0x0) {
    pMVar7 = (Material *)0x0;
  }
  else {
    dVar10 = GetMotorMass_kg(this);
    dVar9 = GetBladeMass_kg(this);
    pMVar7 = this->Composition;
    dVar8 = GetShellVolume_m3(this);
    dVar10 = dVar8 * pMVar7->Density_kg__m3 + dVar9 + dVar10;
  }
  iVar5 = *(int *)(in_stack_00000004 + 8);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar5 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar2) {
    iStack_c = SUB84(dVar10,0);
    iStack_8 = (int)((ulonglong)dVar10 >> 0x20);
    piVar1 = (int *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *piVar1 = (int)pMVar7;
    piVar1[1] = iStack_10;
    piVar1[2] = iStack_c;
    piVar1[3] = iStack_8;
  }
  if (this->CachedNoFluid == false) {
    dVar9 = GetFluidVolume_m3(this);
    iVar5 = *(int *)(this_00 + 8);
    dVar10 = this->CachedFluidDensity_kg__m3;
    pMVar7 = this->CachedFluid;
    in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar5 + 1);
    util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
    bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                      ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
    if (bVar2) {
      puVar3 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
      *puVar3 = (undefined4)(uintptr_t)(pMVar7);
      puVar3[1] = uStack_20;
      *(double *)(puVar3 + 2) = dVar9 * dVar10;
    }
  }
  dVar10 = GetMotorMass_kg(this);
  pMVar7 = Material__DefaultMaterial;
  iVar5 = *(int *)(this_00 + 8);
  in_stack_00000004 = (Darray_L_struct_MaterialConstituent_G_ *)(iVar5 + 1);
  util__Darray_struct_MaterialConstituent___SetSize(this_00,(int *)&stack0x00000004);
  bVar2 = util__Darray_struct_util__tuple2_class_WeaponModule__double_____CheckSize
                    ((Darray_L_struct_util__tuple2_L_class_WeaponModule_P_Cdouble_G___G_ *)this_00,iVar5);
  if (bVar2) {
    uStack_1c = SUB84(dVar10,0);
    uStack_18 = (undefined4)((ulonglong)dVar10 >> 0x20);
    puVar3 = (undefined4 *)(*(int *)(this_00 + 4) + -0x10 + *(int *)(this_00 + 8) * 0x10);
    *puVar3 = (undefined4)(uintptr_t)(pMVar7);
    puVar3[1] = uStack_20;
    puVar3[2] = uStack_1c;
    puVar3[3] = uStack_18;
  }
  return this_00;
}





//==== 005edb20 GetEndRadialMomentOfInertia_kg_m2 ====


/* public: double __thiscall TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2(void)const  */

double __thiscall TurbopumpSubModule__GetEndRadialMomentOfInertia_kg_m2(TurbopumpSubModule *this)

{
  undefined8 stack0xffffffc8;
  Material *pMVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  Cylinder_L_double_G_ in_stack_ffffffc8;
  
  dVar2 = GetLength_m(this);
  dVar3 = 0.0;
  if (this->Composition == (Material *)0x0) {
    dVar6 = 0.0;
  }
  else {
    dVar3 = GetMotorMass_kg(this);
    dVar6 = GetBladeMass_kg(this);
    pMVar1 = this->Composition;
    dVar4 = GetShellVolume_m3(this);
    dVar6 = dVar4 * pMVar1->Density_kg__m3 + dVar6 + dVar3;
    if (pMVar1 == (Material *)0x0) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = GetMotorMass_kg(this);
      dVar4 = GetBladeMass_kg(this);
      dVar5 = GetShellVolume_m3(this);
      dVar3 = dVar5 * this->Composition->Density_kg__m3 + dVar4 + dVar3;
    }
  }
  GetTurbopumpCylinder_m(this,(Cylinder_L_double_G_ *)&stack0xffffffc8);
  dVar6 = Mechanics__SolidCylinderRadialMomentOfInertia_kg_m2(in_stack_ffffffc8,dVar6);
  return dVar6 + dVar2 * 0.5 * dVar2 * 0.5 * dVar3;
}





//==== 005edbf0 GetFluidVolume_m3 ====


/* public: double __thiscall TurbineSubModule__GetFluidVolume_m3(void)const  */

double __thiscall TurbineSubModule__GetFluidVolume_m3(TurbineSubModule *this)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_24 = 0.5235987755982988;
  dStack_3c = 0.5235987755982988;
  dStack_14 = this->HubRadius_m;
  dStack_c = this->TurbineRadius_m;
  dStack_1c = 1.0471975511965976;
  dStack_34 = 1.0471975511965976;
  dStack_2c = util__Cos(&dStack_1c);
  dStack_44 = util__Cos(&dStack_24);
  dStack_44 = dStack_44 + dStack_2c;
  dStack_2c = dStack_c - dStack_14;
  dStack_44 = dStack_44 * dStack_2c;
  dStack_2c = util__Sin(&dStack_34);
  dVar4 = util__Sin(&dStack_3c);
  iVar2 = this->StageCount;
  dVar3 = dStack_44 / (dVar4 + dStack_2c);
  dVar4 = this->TurbineRadius_m;
  dVar1 = this->HubRadius_m;
  dStack_2c = 0.5235987755982988;
  dStack_44 = 1.0471975511965976;
  dVar5 = util__Sin(&dStack_44);
  dVar6 = util__Sin(&dStack_2c);
  dVar4 = (dVar4 - dVar1) / (dVar6 + dVar5);
  return (dStack_c * 3.141592653589793 * dStack_c - dStack_14 * 3.141592653589793 * dStack_14) *
         (double)iVar2 * dVar3 -
         (this->TurbineRadius_m + this->HubRadius_m) * 0.5 * 0.001 * (dVar4 + dVar4) *
         (double)this->StageCount;
}





//==== 005edd50 GetFluidVolume_m3_005edd50 ====


/* public: double __thiscall TurbopumpSubModule__GetFluidVolume_m3(void)const  */

double __thiscall TurbopumpSubModule__GetFluidVolume_m3(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = 0.5235987755982988;
  dStack_c = 1.0471975511965976;
  dVar1 = this->PumpRadius_m;
  dVar2 = dVar1 * 0.2;
  dVar3 = util__Sin(&dStack_c);
  dVar4 = util__Sin(&dStack_14);
  dVar4 = (dVar1 - dVar2) / (dVar4 + dVar3);
  dVar3 = this->PumpRadius_m;
  dVar5 = GetLength_m(this);
  return dVar5 * (dVar1 * 3.141592653589793 * dVar1 - dVar2 * 3.141592653589793 * dVar2) -
         (dVar3 * 0.2 + dVar3) * 0.5 * 0.001 * (dVar4 + dVar4);
}





//==== 005ede50 GetHubStress_Pa ====


/* public: double __thiscall TurbineSubModule__GetHubStress_Pa(void)const  */

double __thiscall TurbineSubModule__GetHubStress_Pa(TurbineSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = 0.5235987755982988;
  dStack_3c = 0.5235987755982988;
  dVar1 = this->CachedMassFlowRate_kg__s;
  dVar2 = this->CachedFluidDensity_kg__m3;
  dStack_2c = this->HubRadius_m;
  dStack_24 = this->TurbineRadius_m;
  dVar3 = dStack_2c * 3.141592653589793 * dStack_2c;
  dVar5 = dStack_24 * 3.141592653589793 * dStack_24;
  dVar4 = dStack_24 + dStack_2c;
  dStack_c = 1.0471975511965976;
  dStack_34 = 1.0471975511965976;
  dStack_1c = util__Cos(&dStack_c);
  dVar6 = util__Cos(&dStack_14);
  dStack_2c = dStack_24 - dStack_2c;
  dStack_24 = (dVar6 + dStack_1c) * dStack_2c;
  dStack_2c = util__Sin(&dStack_34);
  dVar6 = util__Sin(&dStack_3c);
  return (this->CachedMassFlowRate_kg__s *
         ((dVar1 / dVar2) / ((dVar5 - dVar3) - dVar4 * 0.5 * 0.001))) /
         ((double)this->StageCount * (dStack_24 / (dVar6 + dStack_2c)) *
         this->HubRadius_m * 6.283185307179586);
}





//==== 005edf80 GetHubStress_Pa_005edf80 ====


/* public: double __thiscall TurbopumpSubModule__GetHubStress_Pa(void)const  */

double __thiscall TurbopumpSubModule__GetHubStress_Pa(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = 0.5235987755982988;
  dStack_c = 0.5235987755982988;
  dStack_24 = (this->PumpRadius_m * 0.2 + this->PumpRadius_m) * 0.5 *
              (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dStack_1c = util__Tan(&dStack_c);
  dStack_1c = 1.0 / dStack_1c;
  dVar7 = util__Tan(&dStack_14);
  dVar1 = this->PumpRadius_m;
  dVar4 = dStack_24 / (dVar7 + dStack_1c);
  dVar5 = dVar1 * 0.2;
  dVar6 = (dVar5 + dVar1) * 0.5;
  dStack_1c = 0.5235987755982988;
  dStack_24 = 0.5235987755982988;
  dVar7 = this->RotationalSpeed_RPM;
  dVar2 = this->CachedFluidDensity_kg__m3;
  dVar8 = util__Tan(&dStack_24);
  dVar9 = util__Tan(&dStack_1c);
  dVar3 = this->PumpRadius_m;
  dVar10 = GetLength_m(this);
  return ((((dVar7 / 60.0) * 6.283185307179586 * dVar6) / (dVar9 + 1.0 / dVar8)) *
         ((dVar1 * 3.141592653589793 * dVar1 - dVar5 * 3.141592653589793 * dVar5) - dVar6 * 0.001) *
         dVar4 * dVar2) / (dVar3 * 0.2 * 6.283185307179586 * dVar10);
}





//==== 005ee100 GetLength_m ====


/* public: double __thiscall TurbopumpSubModule__GetLength_m(void)const  */

double __thiscall TurbopumpSubModule__GetLength_m(TurbopumpSubModule *this)

{
  double dVar1;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_24 = this->PumpRadius_m;
  dStack_14 = 0.5235987755982988;
  dStack_c = 1.0471975511965976;
  dStack_34 = 0.5235987755982988;
  dStack_2c = 1.0471975511965976;
  dStack_1c = util__Cos(&dStack_c);
  dVar1 = util__Cos(&dStack_14);
  dStack_24 = dStack_24 - dStack_24 * 0.2;
  dStack_1c = (dVar1 + dStack_1c) * dStack_24;
  dStack_24 = util__Sin(&dStack_2c);
  dVar1 = util__Sin(&dStack_34);
  dStack_1c = dStack_1c / (dVar1 + dStack_24);
  return dStack_1c + dStack_1c;
}





//==== 005ee190 GetMassFlowRate_kg__s ====


/* public: double __thiscall TurbopumpSubModule__GetMassFlowRate_kg__s(void)const  */

double __thiscall TurbopumpSubModule__GetMassFlowRate_kg__s(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = 0.5235987755982988;
  dStack_c = 0.5235987755982988;
  dVar1 = this->RotationalSpeed_RPM;
  dVar2 = this->PumpRadius_m;
  dVar3 = this->PumpRadius_m;
  dVar6 = util__Tan(&dStack_c);
  dVar7 = util__Tan(&dStack_14);
  dVar4 = this->PumpRadius_m;
  dVar5 = dVar4 * 0.2;
  return ((dVar4 * 3.141592653589793 * dVar4 - dVar5 * 3.141592653589793 * dVar5) -
         (dVar5 + dVar4) * 0.5 * 0.001) *
         (((dVar1 / 60.0) * 6.283185307179586 * (dVar2 * 0.2 + dVar3) * 0.5) / (dVar7 + 1.0 / dVar6)
         ) * this->CachedFluidDensity_kg__m3;
}





//==== 005ee270 GetMotorMass_kg ====


/* public: double __thiscall TurbopumpSubModule__GetMotorMass_kg(void)const  */

double __thiscall TurbopumpSubModule__GetMotorMass_kg(TurbopumpSubModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_2c;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_c = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dVar2 = GetTorque_N_m(this);
  dStack_c = (dVar2 * dStack_c) / 0.9;
  if (0.0 < dStack_c) {
    dStack_14 = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
    dStack_c = GetTorque_N_m(this);
    dStack_1c = ((dStack_c * dStack_14) / 0.9) / 6.56;
    pMVar1 = util__Sqrt(&MStack_2c,&dStack_1c);
    if (pMVar1->IsValidData == false) {
      util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                      "IsValid()",(char *)0x0);
      DebugBreak();
    }
    return pMVar1->Data;
  }
  return 0.0;
}





//==== 005ee350 GetOutletNormalVelocity_m__s ====


/* public: double __thiscall TurbopumpSubModule__GetOutletNormalVelocity_m__s(void)const  */

double __thiscall TurbopumpSubModule__GetOutletNormalVelocity_m__s(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_14;
  double dStack_c;
  
  dVar1 = this->RotationalSpeed_RPM;
  dStack_14 = 0.5235987755982988;
  dStack_c = 0.5235987755982988;
  dVar2 = this->PumpRadius_m;
  dVar3 = this->PumpRadius_m;
  dVar4 = util__Tan(&dStack_c);
  dVar5 = util__Tan(&dStack_14);
  return ((dVar1 / 60.0) * 6.283185307179586 * (dVar2 * 0.2 + dVar3) * 0.5) / (dVar5 + 1.0 / dVar4);
}





//==== 005ee3d0 GetOutletTangentialVelocity_m__s ====


/* public: double __thiscall TurbineSubModule__GetOutletTangentialVelocity_m__s(void)const  */

double __thiscall TurbineSubModule__GetOutletTangentialVelocity_m__s(TurbineSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_2c = 1.0471975511965976;
  dStack_c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dVar3 = this->TurbineRadius_m;
  dVar1 = this->HubRadius_m;
  dStack_14 = 0.5235987755982988;
  dStack_24 = (this->CachedMassFlowRate_kg__s / this->CachedFluidDensity_kg__m3) /
              ((dVar3 * 3.141592653589793 * dVar3 - dVar1 * 3.141592653589793 * dVar1) -
              (dVar3 + dVar1) * 0.5 * 0.001);
  dStack_1c = util__Tan(&dStack_c);
  dVar2 = util__Tan(&dStack_14);
  dVar3 = this->TurbineRadius_m;
  dVar1 = this->HubRadius_m;
  dStack_1c = (dStack_1c - 1.0 / dVar2) * dStack_24;
  dStack_24 = (this->CachedMassFlowRate_kg__s / this->CachedFluidDensity_kg__m3) /
              ((dVar3 * 3.141592653589793 * dVar3 - dVar1 * 3.141592653589793 * dVar1) -
              (dVar3 + dVar1) * 0.5 * 0.001);
  dVar3 = util__Tan(&dStack_2c);
  return dStack_1c - dStack_24 / dVar3;
}





//==== 005ee4f0 GetPowerGenerated_W ====


/* public: double __thiscall TurbineSubModule__GetPowerGenerated_W(void)const  */

double __thiscall TurbineSubModule__GetPowerGenerated_W(TurbineSubModule *this)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_1c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dVar5 = this->HubRadius_m;
  dVar1 = this->TurbineRadius_m;
  dStack_2c = (dVar1 + dVar5) * 0.5;
  dStack_14 = (this->CachedMassFlowRate_kg__s / this->CachedFluidDensity_kg__m3) /
              ((dVar1 * 3.141592653589793 * dVar1 - dVar5 * 3.141592653589793 * dVar5) -
              dStack_2c * 0.001);
  dStack_c = dStack_1c;
  dVar5 = util__Cos(&dStack_c);
  dStack_14 = dStack_14 / dVar5;
  dVar5 = util__Sin(&dStack_1c);
  dStack_14 = dVar5 * dStack_14;
  dStack_24 = this->CachedMassFlowRate_kg__s;
  dVar6 = GetOutletTangentialVelocity_m__s(this);
  dVar6 = dVar6 + dStack_14;
  dVar3 = dStack_2c * dStack_24;
  dVar4 = dStack_24 / this->CachedFluidDensity_kg__m3;
  dVar5 = this->TurbineRadius_m;
  iVar2 = this->StageCount;
  dVar1 = this->HubRadius_m;
  dStack_2c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dStack_24 = 0.5235987755982988;
  dStack_14 = util__Tan(&dStack_2c);
  dVar7 = util__Tan(&dStack_24);
  return (((dStack_14 - 1.0 / dVar7) *
          (dVar4 / ((dVar5 * 3.141592653589793 * dVar5 - dVar1 * 3.141592653589793 * dVar1) -
                   (dVar5 + dVar1) * 0.5 * 0.001))) /
         ((this->TurbineRadius_m + this->HubRadius_m) * 0.5)) * (double)iVar2 * dVar6 * dVar3 * 0.9;
}





//==== 005ee6a0 GetPowerRequired_W_005ee6a0 ====


/* public: double __thiscall TurbopumpSubModule__GetPowerRequired_W(void)const  */

double __thiscall TurbopumpSubModule__GetPowerRequired_W(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->RotationalSpeed_RPM;
  dVar2 = GetTorque_N_m(this);
  return (dVar2 * (dVar1 / 60.0) * 6.283185307179586) / 0.9;
}





//==== 005ee6e0 GetPowerUsage_005ee6e0 ====


/* public: virtual class util__Darray_L_structPowerUsage_G_ __thiscall
   TurbopumpSubModule__GetPowerUsage(void)const  */

Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ * __thiscall
TurbopumpSubModule__GetPowerUsage(TurbopumpSubModule *this)

{
  bool bVar1;
  LocStr *this_00;
  Str_L_char_G_ *pSVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  double dVar6;
  Darray_L_struct_util__tuple2_L_class_util__Str_L_char_G__Cdouble_G___G_ *in_stack_00000004;
  Str_L_char_G_ SStack_70;
  double dStack_60;
  void *apvStack_58 [3];
  void *pvStack_4c;
  Str_L_char_G_ SStack_40;
  Str_L_char_G_ SStack_34;
  Str_L_char_G_ SStack_28;
  Str_L_char_G_ SStack_1c;
  double dStack_10;
  int iStack_8;
  
  util__Str_char___Str_char(&SStack_40,"PowerUse Turbopump");
  dStack_10 = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dVar6 = GetTorque_N_m(this);
  SStack_1c.Data = (char *)0x0;
  SStack_1c.Capacity = 0;
  dStack_10 = (dVar6 * dStack_10) / 0.9;
  SStack_1c.Length = 0;
  this_00 = (LocStr *)util__LocStr__LocStr((LocStr *)apvStack_58,&SStack_40,&SStack_1c);
  pSVar2 = util__LocStr__operator__o3(this_00);
  util__Str_char___Str_char(&SStack_28,pSVar2);
  util__Str_char___Str_char(&SStack_70,&SStack_28);
  dStack_60 = dStack_10;
  if (SStack_28.Data != (char *)0x0) {
    port_op_delete(SStack_28.Data);
  }
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  *(undefined ***)in_stack_00000004 =
       &vftable_105;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  *(undefined4 *)(in_stack_00000004 + 8) = 0;
  *(undefined4 *)(in_stack_00000004 + 0xc) = 1;
  puVar3 = (undefined4 *)port_op_new(0x1c);
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 1;
    puVar4 = puVar3 + 1;
    *puVar4 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    *(undefined8 *)(puVar3 + 5) = 0;
  }
  *(undefined4 **)(in_stack_00000004 + 4) = puVar4;
  iStack_8 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0xc)) {
    iVar5 = 0;
    do {
      pSVar2 = (Str_L_char_G_ *)(*(int *)(in_stack_00000004 + 4) + iVar5);
      SStack_34.Data = (char *)0x0;
      SStack_34.Capacity = 0;
      SStack_34.Length = 0;
      SStack_28.Capacity = 0;
      SStack_28.Length = 0;
      util__Str_char___operator__o8(pSVar2,&SStack_34);
      iStack_8 = iStack_8 + 1;
      pSVar2[1].Capacity = 0;
      pSVar2[1].Length = 0;
      iVar5 = iVar5 + 0x18;
    } while (iStack_8 < *(int *)(in_stack_00000004 + 0xc));
  }
  iVar5 = *(int *)(in_stack_00000004 + 8);
  iStack_8 = iVar5 + 1;
  util__Darray_struct_util__tuple2_class_util__Str_char__double_____SetSize
            (in_stack_00000004,&iStack_8);
  bVar1 = util__Darray_struct_PowerUsage___CheckSize
                    ((Darray_L_struct_PowerUsage_G_ *)in_stack_00000004,iVar5);
  if (bVar1) {
    iVar5 = *(int *)(in_stack_00000004 + 4) + *(int *)(in_stack_00000004 + 8) * 0x18;
    util__Str_char___operator__o8((Str_L_char_G_ *)(iVar5 + -0x18),&SStack_70);
    *(double *)(iVar5 + -8) = dStack_10;
  }
  if (SStack_70.Data != (char *)0x0) {
    port_op_delete(SStack_70.Data);
  }
  if (pvStack_4c != (void *)0x0) {
    port_op_delete(pvStack_4c);
    pvStack_4c = (void *)0x0;
  }
  if (apvStack_58[0] != (void *)0x0) {
    port_op_delete(apvStack_58[0]);
    apvStack_58[0] = (void *)0x0;
  }
  if (SStack_1c.Data != (char *)0x0) {
    port_op_delete(SStack_1c.Data);
    SStack_1c.Data = (char *)0x0;
  }
  if (SStack_40.Data != (char *)0x0) {
    port_op_delete(SStack_40.Data);
  }
  return in_stack_00000004;
}





//==== 005ee8f0 GetReflectionInfo_005ee8f0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual struct util__ReflectionInfoBase * __thiscall
   TurbopumpSubModule__GetReflectionInfo(void)const  */

ReflectionInfoBase * __thiscall TurbopumpSubModule__GetReflectionInfo(TurbopumpSubModule *this)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_befb6bd9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_befb6bd9__thread_safe_static_guard_0__);
    if ( cde_l2_befb6bd9__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4d9772e1_ReflectionInfo) = &vftable_233;
      _Init_thread_footer(& cde_l2_befb6bd9__thread_safe_static_guard_0__);
    }
  }
  return (ReflectionInfoBase *)
         & cde_l2_4d9772e1_ReflectionInfo;
}





//==== 005ee900 GetShellThickness_m ====


/* public: double __thiscall TurbopumpSubModule__GetShellThickness_m(void)const  */

double __thiscall TurbopumpSubModule__GetShellThickness_m(TurbopumpSubModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  Maybe_L_double_G_ MStack_1c;
  double dStack_c;
  
  dStack_c = 0.5;
  pMVar1 = util__Sqrt(&MStack_1c,&dStack_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data * 0.001;
}





//==== 005ee960 GetShellVolume_m3 ====


/* public: double __thiscall TurbineSubModule__GetShellVolume_m3(void)const  */

double __thiscall TurbineSubModule__GetShellVolume_m3(TurbineSubModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_2c;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  GetTurbineCylinder_m(this,&CStack_1c);
  dVar2 = CStack_1c.Radius * 3.141592653589793 * CStack_1c.Radius;
  CStack_1c.Height = CStack_1c.Radius * 6.283185307179586 * CStack_1c.Height + dVar2 + dVar2;
  dStack_c = 0.5;
  pMVar1 = util__Sqrt(&MStack_2c,&dStack_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data * 0.001 * CStack_1c.Height;
}





//==== 005ee9f0 GetShellVolume_m3_005ee9f0 ====


/* public: double __thiscall TurbopumpSubModule__GetShellVolume_m3(void)const  */

double __thiscall TurbopumpSubModule__GetShellVolume_m3(TurbopumpSubModule *this)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_2c;
  Cylinder_L_double_G_ CStack_1c;
  double dStack_c;
  
  GetTurbopumpCylinder_m(this,&CStack_1c);
  dVar2 = CStack_1c.Radius * 3.141592653589793 * CStack_1c.Radius;
  CStack_1c.Height = CStack_1c.Radius * 6.283185307179586 * CStack_1c.Height + dVar2 + dVar2;
  dStack_c = 0.5;
  pMVar1 = util__Sqrt(&MStack_2c,&dStack_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  return pMVar1->Data * 0.001 * CStack_1c.Height;
}





//==== 005eea80 GetSolidMass_kg ====


/* public: double __thiscall TurbopumpSubModule__GetSolidMass_kg(void)const  */

double __thiscall TurbopumpSubModule__GetSolidMass_kg(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (this->Composition == (Material *)0x0) {
    return 0.0;
  }
  dVar1 = GetMotorMass_kg(this);
  dVar2 = GetBladeMass_kg(this);
  dVar3 = GetShellVolume_m3(this);
  return dVar3 * this->Composition->Density_kg__m3 + dVar2 + dVar1;
}





//==== 005eead0 GetSpecificEnthalpyDropAcrossTurbine_J__kg ====


/* public: double __thiscall TurbineSubModule__GetSpecificEnthalpyDropAcrossTurbine_J__kg(void)const
    */

double __thiscall
TurbineSubModule__GetSpecificEnthalpyDropAcrossTurbine_J__kg(TurbineSubModule *this)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_1c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dVar5 = this->HubRadius_m;
  dVar1 = this->TurbineRadius_m;
  dStack_2c = (dVar1 + dVar5) * 0.5;
  dStack_14 = (this->CachedMassFlowRate_kg__s / this->CachedFluidDensity_kg__m3) /
              ((dVar1 * 3.141592653589793 * dVar1 - dVar5 * 3.141592653589793 * dVar5) -
              dStack_2c * 0.001);
  dStack_c = dStack_1c;
  dVar5 = util__Cos(&dStack_c);
  dStack_14 = dStack_14 / dVar5;
  dVar5 = util__Sin(&dStack_1c);
  dStack_14 = dVar5 * dStack_14;
  dStack_24 = this->CachedMassFlowRate_kg__s;
  dVar6 = GetOutletTangentialVelocity_m__s(this);
  dVar6 = dVar6 + dStack_14;
  dVar3 = dStack_2c * dStack_24;
  dVar4 = dStack_24 / this->CachedFluidDensity_kg__m3;
  dVar5 = this->TurbineRadius_m;
  iVar2 = this->StageCount;
  dVar1 = this->HubRadius_m;
  dStack_2c = this->AbsoluteInletAngle_degrees * 0.017453292519943295;
  dStack_24 = 0.5235987755982988;
  dStack_14 = util__Tan(&dStack_2c);
  dVar7 = util__Tan(&dStack_24);
  return ((((dStack_14 - 1.0 / dVar7) *
           (dVar4 / ((dVar5 * 3.141592653589793 * dVar5 - dVar1 * 3.141592653589793 * dVar1) -
                    (dVar5 + dVar1) * 0.5 * 0.001))) /
          ((this->TurbineRadius_m + this->HubRadius_m) * 0.5)) * (double)iVar2 * dVar6 * dVar3) /
         this->CachedMassFlowRate_kg__s;
}





//==== 005eec80 GetSpecificEnthalpyIncreaseAcrossTurbopump_J__kg ====


/* public: double __thiscall
   TurbopumpSubModule__GetSpecificEnthalpyIncreaseAcrossTurbopump_J__kg(void)const  */

double __thiscall
TurbopumpSubModule__GetSpecificEnthalpyIncreaseAcrossTurbopump_J__kg(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_14;
  double dStack_c;
  
  dStack_c = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dVar6 = GetTorque_N_m(this);
  dVar6 = dVar6 * dStack_c;
  dStack_14 = 0.5235987755982988;
  dStack_c = 0.5235987755982988;
  dVar1 = this->RotationalSpeed_RPM;
  dVar2 = this->PumpRadius_m;
  dVar3 = this->PumpRadius_m;
  dVar7 = util__Tan(&dStack_c);
  dVar8 = util__Tan(&dStack_14);
  dVar4 = this->PumpRadius_m;
  dVar5 = dVar4 * 0.2;
  return dVar6 / (((dVar4 * 3.141592653589793 * dVar4 - dVar5 * 3.141592653589793 * dVar5) -
                  (dVar5 + dVar4) * 0.5 * 0.001) *
                  (((dVar2 * 0.2 + dVar3) * 0.5 * (dVar1 / 60.0) * 6.283185307179586) /
                  (dVar8 + 1.0 / dVar7)) * this->CachedFluidDensity_kg__m3);
}





//==== 005eed90 GetStatuses_005eed90 ====

/* public: virtual class DesignStatusBuffer  TurbopumpSubModule__GetStatuses(class
   DataParser *)const  */

DesignStatusBuffer * 
TurbopumpSubModule__GetStatuses
          (TurbopumpSubModule *this,DesignStatusBuffer *__return_storage_ptr__,DataParser *param_1)

{
  undefined8 stack0xffffff78;
  undefined8 stack0xffffff7c;
  Str_L_char_G_ SVar1;
  Str_L_char_G_ SVar2;
  Str_L_char_G_ SVar3;
  Str_L_char_G_ SVar4;
  Str_L_char_G_ SVar5;
  Str_L_char_G_ SVar6;
  Str_L_char_G_ *pSVar7;
  Str_L_char_G_ *pSVar8;
  Str_L_char_G_ *pSVar9;
  double dVar10;
  double dVar11;
  char *pcVar12;
  Str_L_char_G_ *pSVar13;
  Str_L_char_G_ *pSVar14;
  ModulePlacer *pMVar15;
  Str_L_char_G_ local_68;
  Str_L_char_G_ local_5c;
  Str_L_char_G_ local_50;
  Str_L_char_G_ local_44;
  double local_38;
  double local_30;
  undefined1 local_28 [12];
  undefined1 local_1c [4];
  double local_18;
  undefined1 local_10 [4];
  double local_c;
  
  __return_storage_ptr__->DataManager = (DataParser *)0x0;
  (__return_storage_ptr__->Messages)._pad_0x0_0 = 0;
  (__return_storage_ptr__->Messages).Data = (DesignStatusMessage *)0x0;
  (__return_storage_ptr__->Messages).Size = 0;
  *(undefined8 *)&(__return_storage_ptr__->Messages).Capacity = 0;
  DesignStatusBuffer__DesignStatusBuffer(__return_storage_ptr__,param_1);
  util__Str_char___Str_char(&local_68,"TurbomachineBladesMelting");
  local_5c.Data = (char *)0x0;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  local_44.Length = 0;
  local_c = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  local_38 = GetTorque_N_m(this);
  local_38 = local_38 * local_c;
  *(uint32_t *)&local_18 = 0.5235987755982988;
  local_c = 0.5235987755982988;
  local_30 = (this->PumpRadius_m * 0.2 + this->PumpRadius_m) * 0.5 *
             (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  (*(uint64_t*)((char*)&(local_28)+4)) = util__Tan(&local_c);
  (*(uint64_t*)((char*)&(local_28)+4)) = 1.0 / (double)(*(uint64_t*)((char*)&(local_28)+4));
  dVar10 = util__Tan(&local_18);
  dVar11 = this->PumpRadius_m;
  local_30 = local_30 / (dVar10 + (double)(*(uint64_t*)((char*)&(local_28)+4)));
  pMVar15 = (ModulePlacer *)0x0;
  dVar10 = dVar11 * 0.2;
  pSVar14 = &local_5c;
  pSVar13 = &local_50;
  local_38 = (local_38 /
             (((dVar11 * 3.141592653589793 * dVar11 - dVar10 * 3.141592653589793 * dVar10) -
              (dVar11 + dVar10) * 0.5 * 0.001) * local_30 * this->CachedFluidDensity_kg__m3)) /
             this->CachedFluid->BoilingPoint_K + this->CachedFlowTemperature_K;
  pSVar8 = &local_44;
  pSVar9 = &local_68;
  local_30 = Material__GetSafeUseTemperature_K(this->Composition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_30 < local_38,pSVar9,pSVar8,pSVar13,pSVar14,pMVar15);
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_10,"Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_44,"GetBladeStress_Pa()");
  util__Str_char___Str_char(&local_50,"TurbomachineBladeStress");
  local_5c.Data = (char *)0x0;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  local_38 = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  local_30 = this->PumpRadius_m;
  dVar11 = GetBladeMass_kg(this);
  (*(uint64_t*)((char*)&(local_28)+4)) =
       (dVar11 * local_38 * local_38 * local_30) / ((local_30 * 0.2 + local_30) * 0.5 * 0.001);
  local_38 = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  local_30 = this->PumpRadius_m;
  dVar11 = GetBladeMass_kg(this);
  pSVar14 = &local_5c;
  pMVar15 = (ModulePlacer *)0x0;
  local_38 = (dVar11 * local_38 * local_38 * local_30) / ((local_30 * 0.2 + local_30) * 0.5 * 0.001)
  ;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,(Str_L_char_G_ *)local_10);
  dVar11 = Material__GetYieldStrength_Pa(this->Composition);
  pcVar12 = (char *)((ulonglong)dVar11 >> 0x20);
  SVar4.Capacity = (int)pSVar13;
  SVar4.Data = (char *)pSVar8;
  SVar4.Length = (int)pSVar14;
  pSVar7 = Print((Str_L_char_G_ *)local_1c,(double)CONCAT44(pSVar9,pcVar12),SVar4);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_44);
  SVar1.Capacity = (int)pSVar8;
  SVar1.Data = (char *)pSVar9;
  SVar1.Length = (int)pSVar7;
  pSVar8 = Print(&local_68,(double)CONCAT44(pcVar12,SUB84((*(uint64_t*)((char*)&(local_28)+4)),4)),SVar1);
  pSVar13 = &local_50;
  local_30 = Material__GetYieldStrength_Pa(this->Composition);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_30 < local_38,pSVar13,pSVar8,pSVar7,pSVar14,pMVar15);
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
    *(uint32_t *)&local_1c = (uint32_t)0x0;
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_10 != (uint32_t)0x0) {
    port_op_delete((void *)local_10);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_1c,"Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_44,"GetHubStress_Pa()");
  util__Str_char___Str_char(&local_50,"TurbomachineHubStress");
  pMVar15 = (ModulePlacer *)0x0;
  pSVar14 = &local_5c;
  local_5c.Data = (char *)0x0;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,(Str_L_char_G_ *)local_1c);
  dVar11 = Material__GetYieldStrength_Pa(this->Composition);
  pcVar12 = (char *)((ulonglong)dVar11 >> 0x20);
  SVar5.Capacity = (int)pSVar7;
  SVar5.Data = (char *)pSVar8;
  SVar5.Length = (int)pSVar14;
  pSVar9 = Print((Str_L_char_G_ *)local_28,(double)CONCAT44(pSVar13,pcVar12),SVar5);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_44);
  dVar11 = GetHubStress_Pa(this);
  SVar2.Capacity = (int)pSVar8;
  SVar2.Data = (char *)pSVar13;
  SVar2.Length = (int)pSVar9;
  pSVar8 = Print(&local_68,(double)CONCAT44(pcVar12,(int)((ulonglong)dVar11 >> 0x20)),SVar2);
  pSVar13 = &local_50;
  local_30 = Material__GetYieldStrength_Pa(this->Composition);
  local_38 = GetHubStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_30 < local_38,pSVar13,pSVar8,pSVar9,pSVar14,pMVar15);
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((char *)(*(uint32_t*)&(local_28)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_28)));
    (*(uint32_t*)&(local_28)) = (uint32_t)(uintptr_t)((char *)0x0);
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
  }
  util__Str_char___Str_char((Str_L_char_G_ *)local_1c,"Composition->GetYieldStrength_Pa()");
  util__Str_char___Str_char(&local_44,"GetThermalExpansionStress_Pa()");
  util__Str_char___Str_char(&local_50,"TurbomachineThermalExpansionStress");
  pMVar15 = (ModulePlacer *)0x0;
  pSVar14 = &local_5c;
  local_5c.Data = (char *)0x0;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff7c,(Str_L_char_G_ *)local_1c);
  dVar11 = Material__GetYieldStrength_Pa(this->Composition);
  pcVar12 = (char *)((ulonglong)dVar11 >> 0x20);
  SVar6.Capacity = (int)pSVar9;
  SVar6.Data = (char *)pSVar8;
  SVar6.Length = (int)pSVar14;
  pSVar9 = Print((Str_L_char_G_ *)local_28,(double)CONCAT44(pSVar13,pcVar12),SVar6);
  GetUnitsOfType((Str_L_char_G_ *)&stack0xffffff78,&local_44);
  dVar11 = GetThermalExpansionStress_Pa(this);
  SVar3.Capacity = (int)pSVar8;
  SVar3.Data = (char *)pSVar13;
  SVar3.Length = (int)pSVar9;
  pSVar8 = Print(&local_68,(double)CONCAT44(pcVar12,(int)((ulonglong)dVar11 >> 0x20)),SVar3);
  pSVar13 = &local_50;
  local_30 = Material__GetYieldStrength_Pa(this->Composition);
  local_38 = GetThermalExpansionStress_Pa(this);
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,local_30 < local_38,pSVar13,pSVar8,pSVar9,pSVar14,pMVar15);
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
    local_68.Data = (char *)0x0;
  }
  if ((char *)(*(uint32_t*)&(local_28)) != (char *)0x0) {
    port_op_delete((void *)(*(uint32_t*)&(local_28)));
    (*(uint32_t*)&(local_28)) = (uint32_t)(uintptr_t)((char *)0x0);
  }
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_1c != (uint32_t)0x0) {
    port_op_delete((void *)local_1c);
  }
  util__Str_char___Str_char(&local_68,"TurbomachineFlowFreeze");
  local_44.Data = (char *)0x0;
  local_44.Capacity = 0;
  local_44.Length = 0;
  local_50.Data = (char *)0x0;
  local_50.Capacity = 0;
  local_50.Length = 0;
  local_5c.Data = (char *)0x0;
  local_5c.Capacity = 0;
  local_5c.Length = 0;
  dVar11 = this->CachedFluid->ThermalConductivity_W__m_K;
  DesignStatusBuffer__CheckError
            (__return_storage_ptr__,
             this->CachedFlowTemperature_K <= dVar11 && dVar11 != this->CachedFlowTemperature_K,
             &local_68,&local_5c,&local_50,&local_44,(ModulePlacer *)0x0);
  if (local_5c.Data != (char *)0x0) {
    port_op_delete(local_5c.Data);
    local_5c.Data = (char *)0x0;
  }
  if (local_50.Data != (char *)0x0) {
    port_op_delete(local_50.Data);
    local_50.Data = (char *)0x0;
  }
  if (local_44.Data != (char *)0x0) {
    port_op_delete(local_44.Data);
    local_44.Data = (char *)0x0;
  }
  if (local_68.Data != (char *)0x0) {
    port_op_delete(local_68.Data);
  }
  return __return_storage_ptr__;
}

//==== 005ef530 GetThermalExpansionStress_Pa ====


/* public: double __thiscall TurbopumpSubModule__GetThermalExpansionStress_Pa(void)const  */

double __thiscall TurbopumpSubModule__GetThermalExpansionStress_Pa(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_14;
  double dStack_c;
  
  if (this->Composition == (Material *)0x0) {
    return 0.0;
  }
  dStack_c = (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dVar5 = GetTorque_N_m(this);
  dVar5 = dVar5 * dStack_c;
  dStack_14 = 0.5235987755982988;
  dStack_c = 0.5235987755982988;
  dVar8 = this->RotationalSpeed_RPM;
  dVar1 = this->PumpRadius_m;
  dVar2 = this->PumpRadius_m;
  dVar6 = util__Tan(&dStack_c);
  dVar7 = util__Tan(&dStack_14);
  dVar3 = this->PumpRadius_m;
  dVar4 = dVar3 * 0.2;
  dVar8 = Material__GetThermalExpansionStress_Pa
                    (this->Composition,
                     (dVar5 / (((dVar3 * 3.141592653589793 * dVar3 -
                                dVar4 * 3.141592653589793 * dVar4) - (dVar4 + dVar3) * 0.5 * 0.001)
                               * (((dVar1 * 0.2 + dVar2) * 0.5 * (dVar8 / 60.0) * 6.283185307179586)
                                 / (dVar7 + 1.0 / dVar6)) * this->CachedFluidDensity_kg__m3)) /
                     this->CachedFluid->BoilingPoint_K);
  return dVar8;
}





//==== 005ef660 GetTorque_N_m ====


/* public: double __thiscall TurbopumpSubModule__GetTorque_N_m(void)const  */

double __thiscall TurbopumpSubModule__GetTorque_N_m(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dStack_64;
  double dStack_5c;
  double dStack_54;
  double dStack_4c;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_1c = 0.5235987755982988;
  dStack_14 = 0.5235987755982988;
  dStack_24 = (this->PumpRadius_m * 0.2 + this->PumpRadius_m) * 0.5 *
              (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dStack_c = util__Tan(&dStack_14);
  dStack_c = 1.0 / dStack_c;
  dVar4 = util__Tan(&dStack_1c);
  dVar1 = this->PumpRadius_m;
  dStack_24 = dStack_24 / (dVar4 + dStack_c);
  dVar4 = dVar1 * 0.2;
  dVar3 = (dVar4 + dVar1) * 0.5;
  dVar2 = ((dVar1 * 3.141592653589793 * dVar1 - dVar4 * 3.141592653589793 * dVar4) - dVar3 * 0.001)
          * dStack_24;
  dVar1 = this->CachedFluidDensity_kg__m3;
  dStack_44 = GetAbsoluteOutletAngle_radians(this);
  dStack_3c = GetAbsoluteOutletAngle_radians(this);
  dStack_2c = 0.5235987755982988;
  dStack_24 = 0.5235987755982988;
  dStack_34 = (this->PumpRadius_m * 0.2 + this->PumpRadius_m) * 0.5 *
              (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dStack_c = util__Tan(&dStack_24);
  dStack_c = 1.0 / dStack_c;
  dVar4 = util__Tan(&dStack_2c);
  dStack_c = dStack_34 / (dVar4 + dStack_c);
  dVar4 = util__Cos(&dStack_3c);
  dStack_c = dStack_c / dVar4;
  dVar4 = util__Sin(&dStack_44);
  dVar4 = dVar4 * dStack_c;
  dStack_64 = 0.5235987755982988;
  dStack_5c = 0.5235987755982988;
  dStack_c = 0.5235987755982988;
  dStack_34 = 0.5235987755982988;
  dStack_54 = (this->PumpRadius_m * 0.2 + this->PumpRadius_m) * 0.5 *
              (this->RotationalSpeed_RPM / 60.0) * 6.283185307179586;
  dStack_4c = util__Tan(&dStack_34);
  dStack_4c = 1.0 / dStack_4c;
  dVar5 = util__Tan(&dStack_c);
  dStack_54 = dStack_54 / (dVar5 + dStack_4c);
  dVar5 = util__Cos(&dStack_5c);
  dStack_54 = dStack_54 / dVar5;
  dVar5 = util__Sin(&dStack_64);
  return (dVar4 - dVar5 * dStack_54) * dVar3 * dVar2 * dVar1;
}





//==== 005ef8a0 GetTotalCrossSectionalArea_m2 ====


/* public: double __thiscall TurbineSubModule__GetTotalCrossSectionalArea_m2(void)const  */

double __thiscall TurbineSubModule__GetTotalCrossSectionalArea_m2(TurbineSubModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->TurbineRadius_m;
  dVar2 = this->HubRadius_m;
  return (dVar1 * 3.141592653589793 * dVar1 - dVar2 * 3.141592653589793 * dVar2) -
         (dVar1 + dVar2) * 0.5 * 0.001;
}





//==== 005ef900 GetTotalCrossSectionalArea_m2_005ef900 ====


/* public: double __thiscall TurbopumpSubModule__GetTotalCrossSectionalArea_m2(void)const  */

double __thiscall TurbopumpSubModule__GetTotalCrossSectionalArea_m2(TurbopumpSubModule *this)

{
  double dVar1;
  double dVar2;
  
  dVar1 = this->PumpRadius_m;
  dVar2 = dVar1 * 0.2;
  return (dVar1 * 3.141592653589793 * dVar1 - dVar2 * 3.141592653589793 * dVar2) -
         (dVar2 + dVar1) * 0.5 * 0.001;
}





//==== 005ef960 GetTurbineCylinder_m ====


/* public: struct util__Cylinder_L_double_G_ 
   TurbineSubModule__GetTurbineCylinder_m(void)const  */

Cylinder_L_double_G_ * 
TurbineSubModule__GetTurbineCylinder_m
          (TurbineSubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_64;
  Maybe_L_double_G_ MStack_54;
  double dStack_44;
  double dStack_3c;
  double dStack_34;
  double dStack_2c;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_14 = 0.5235987755982988;
  dStack_34 = 0.5235987755982988;
  dStack_24 = this->TurbineRadius_m - this->HubRadius_m;
  dStack_c = 1.0471975511965976;
  dStack_2c = 1.0471975511965976;
  dStack_1c = util__Cos(&dStack_c);
  dVar2 = util__Cos(&dStack_14);
  dStack_1c = (dVar2 + dStack_1c) * dStack_24;
  dStack_24 = util__Sin(&dStack_2c);
  dVar2 = util__Sin(&dStack_34);
  dStack_44 = (double)this->StageCount * (dStack_1c / (dVar2 + dStack_24));
  dStack_24 = 0.5;
  pMVar1 = util__Sqrt(&MStack_54,&dStack_24);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_3c = pMVar1->Data * 0.001;
  dStack_1c = 0.5;
  pMVar1 = util__Sqrt(&MStack_64,&dStack_1c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  __return_storage_ptr__->Radius = pMVar1->Data * 0.001 + this->TurbineRadius_m;
  __return_storage_ptr__->Height = dStack_3c + dStack_3c + dStack_44;
  return __return_storage_ptr__;
}





//==== 005efac0 GetTurbopumpCylinder_m ====


/* public: struct util__Cylinder_L_double_G_ 
   TurbopumpSubModule__GetTurbopumpCylinder_m(void)const  */

Cylinder_L_double_G_ * 
TurbopumpSubModule__GetTurbopumpCylinder_m
          (TurbopumpSubModule *this,Cylinder_L_double_G_ *__return_storage_ptr__)

{
  Maybe_L_double_G_ *pMVar1;
  double dVar2;
  Maybe_L_double_G_ MStack_44;
  Maybe_L_double_G_ MStack_34;
  double dStack_24;
  double dStack_1c;
  double dStack_14;
  double dStack_c;
  
  dStack_c = 0.5;
  pMVar1 = util__Sqrt(&MStack_34,&dStack_c);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_1c = pMVar1->Data * 0.001;
  dStack_14 = 0.5;
  pMVar1 = util__Sqrt(&MStack_44,&dStack_14);
  if (pMVar1->IsValidData == false) {
    util__LogAssert("\\mac\\home\\documents\\code\\utilities\\utilities\\core\\maybe.h",0x13,
                    "IsValid()",(char *)0x0);
    DebugBreak();
  }
  dStack_24 = pMVar1->Data * 0.001 + this->PumpRadius_m;
  dVar2 = GetLength_m(this);
  __return_storage_ptr__->Radius = dStack_24;
  __return_storage_ptr__->Height = dVar2 + dStack_1c + dStack_1c;
  return __return_storage_ptr__;
}





//==== 005efbb0 PassThroughCachedData2_005efbb0 ====


/* public: void __thiscall TurbopumpSubModule__PassThroughCachedData2(double) */

void __thiscall TurbopumpSubModule__PassThroughCachedData2(TurbopumpSubModule *this,double param_1)

{
  this->CachedFlowTemperature_K = param_1;
  return;
}





//==== 005efbd0 PassThroughCachedData_005efbd0 ====


/* public: void  TurbineSubModule__PassThroughCachedData(double,class Material
   *,double,double) */

void 
TurbineSubModule__PassThroughCachedData
          (TurbineSubModule *this,double param_1,Material *param_2,double param_3,double param_4)

{
  undefined4 in_stack_00000010;
  
  this->CachedFluidDensity_kg__m3 = param_1;
  this->CachedMassFlowRate_kg__s = (double)CONCAT44((*(uint32_t*)&(param_3)),in_stack_00000010);
  this->CachedFluid = param_2;
  this->CachedFlowTemperature_K = (double)CONCAT44((*(uint32_t*)&(param_4)),(*(uint32_t*)((char*)&(param_3)+4)));
  return;
}





//==== 005efc00 PassThroughCachedData_005efc00 ====


/* public: void  TurbopumpSubModule__PassThroughCachedData(double,class Material *,bool)
    */

void 
TurbopumpSubModule__PassThroughCachedData
          (TurbopumpSubModule *this,double param_1,Material *param_2,bool param_3)

{
  this->CachedNoFluid = param_3;
  this->CachedFluidDensity_kg__m3 = param_1;
  this->CachedFluid = param_2;
  return;
}





//==== 005efc20 StaticFactory_005efc20 ====

/* public: static class util__Reflectable * __cdecl TurbineSubModule__ReflectionInfoStruct_L_class_TurbineSubModule_G___StaticFactory(void) */

Reflectable * __cdecl TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x58));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x58);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_234;
  }
  return (Reflectable *)0x0;
}

//==== 005efc70 StaticFactory_005efc70 ====

/* public: static class util__Reflectable * __cdecl TurbopumpSubModule__ReflectionInfoStruct_L_class_TurbopumpSubModule_G___StaticFactory(void) */

Reflectable * __cdecl
TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticFactory(void)

{
  Reflectable *pRVar1;
  
  pRVar1 = (Reflectable *)(uintptr_t)(port_op_new(0x48));
  if (pRVar1 != (Reflectable *)0x0) {
    memset(pRVar1,0,0x48);
    (pRVar1->Name).Data = (char *)0x0;
    (pRVar1->Name).Capacity = 0;
    (pRVar1->Name).Length = 0;
    pRVar1->_pad_0x0_0 = (int)&vftable_236;
    pRVar1[1]._pad_0x0_0 = 0;
    pRVar1[1].Name.Capacity = 0;
    pRVar1[1].Name.Length = 0;
    pRVar1[2]._pad_0x0_0 = 0;
    pRVar1[2].Name.Data = (char *)0x0;
    *(undefined1 *)&pRVar1[2].Name.Capacity = 0;
    pRVar1[3]._pad_0x0_0 = 0;
    pRVar1[3].Name.Data = (char *)0x0;
    pRVar1[3].Name.Capacity = 0;
    pRVar1[4]._pad_0x0_0 = 0;
    pRVar1[4].Name.Data = (char *)0x0;
  }
  return (Reflectable *)0x0;
}

//==== 005efce0 StaticGetMemberByIndex_005efce0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberByIndex(int) */

ClassMember * __cdecl
TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_6e1192b6__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_6e1192b6__thread_safe_static_guard_0__);
    if ( cde_l2_6e1192b6__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_4d8d8e29_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096e4ac = 0;
      _DAT_0096e4b0 = 0;
      _DAT_0096e4b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e4b8,"Unused");
      _DAT_0096e4c4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e4c8,"Composition");
      _DAT_0096e4d4 = 8;
      _DAT_0096e4d8 = 0x10;
      _DAT_0096e4dc = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e4e0,"Material");
      _DAT_0096e4ec = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e4f0,"TurbineRadius_m");
      _DAT_0096e4fc = 4;
      _DAT_0096e500 = 0x18;
      _DAT_0096e504 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e508,"double");
      _DAT_0096e514 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e518,"HubRadius_m");
      _DAT_0096e524 = 4;
      _DAT_0096e528 = 0x20;
      _DAT_0096e52c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e530,"double");
      _DAT_0096e53c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e540,"AbsoluteInletAngle_degrees");
      _DAT_0096e54c = 4;
      _DAT_0096e550 = 0x28;
      _DAT_0096e554 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e558,"double");
      _DAT_0096e564 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e568,"StageCount");
      _DAT_0096e574 = 2;
      _DAT_0096e578 = 0x30;
      _DAT_0096e57c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e580,"int");
      _DAT_0096e58c = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_6e1192b6__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_4d8d8e29_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096e4ac + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096e4b0 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096e4b4 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096e4b8 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096e4c4)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096e4c5)[iVar1];
  return __return_storage_ptr__;
}





//==== 005eff20 StaticGetMemberByIndex_005eff20 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static struct util__ClassMember const __cdecl
   TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberByIndex(int)
    */

ClassMember * __cdecl
TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberByIndex__o2
          (ClassMember *__return_storage_ptr__,int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_3e28361c__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_3e28361c__thread_safe_static_guard_0__);
    if ( cde_l2_3e28361c__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_f87e5ed5_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096e64c = 0;
      _DAT_0096e650 = 0;
      _DAT_0096e654 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e658,"Unused");
      _DAT_0096e664 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e668,"Composition");
      _DAT_0096e674 = 8;
      _DAT_0096e678 = 0x10;
      _DAT_0096e67c = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e680,"Material");
      _DAT_0096e68c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e690,"PumpRadius_m");
      _DAT_0096e69c = 4;
      _DAT_0096e6a0 = 0x18;
      _DAT_0096e6a4 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e6a8,"double");
      _DAT_0096e6b4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e6b8,"RotationalSpeed_RPM");
      _DAT_0096e6c4 = 4;
      _DAT_0096e6c8 = 0x20;
      _DAT_0096e6cc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e6d0,"double");
      _DAT_0096e6dc = 0;
      atexit( private__static_struct_util__ClassMember_const___cdecl_TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberByIndex_int______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_3e28361c__thread_safe_static_guard_0__);
    }
  }
  iVar1 = param_1 * 0x28;
  util__Str_char___Str_char
            (&__return_storage_ptr__->Name,
             (Str_L_char_G_ *)
             (& cde_l2_f87e5ed5_StaticMembers + param_1 * 10));
  *(undefined4 *)&__return_storage_ptr__->Type = *(undefined4 *)(&DAT_0096e64c + iVar1);
  __return_storage_ptr__->Offset = *(uint *)(&DAT_0096e650 + iVar1);
  __return_storage_ptr__->Size = *(uint *)(&DAT_0096e654 + iVar1);
  util__Str_char___Str_char
            (&__return_storage_ptr__->AdditionalType,(Str_L_char_G_ *)(&DAT_0096e658 + iVar1));
  __return_storage_ptr__->IsArray = (bool)(&DAT_0096e664)[iVar1];
  __return_storage_ptr__->IsMaybe = (bool)(&DAT_0096e665)[iVar1];
  return __return_storage_ptr__;
}





//==== 005f00e0 StaticGetMemberCount_005f00e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberCount(void) */

int __cdecl
TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_09903889__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_09903889__thread_safe_static_guard_0__);
    if ( cde_l2_09903889__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_b6189510_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096e3b4 = 0;
      _DAT_0096e3b8 = 0;
      _DAT_0096e3bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e3c0,"Unused");
      _DAT_0096e3cc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e3d0,"Composition");
      _DAT_0096e3dc = 8;
      _DAT_0096e3e0 = 0x10;
      _DAT_0096e3e4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e3e8,"Material");
      _DAT_0096e3f4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e3f8,"TurbineRadius_m");
      _DAT_0096e404 = 4;
      _DAT_0096e408 = 0x18;
      _DAT_0096e40c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e410,"double");
      _DAT_0096e41c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e420,"HubRadius_m");
      _DAT_0096e42c = 4;
      _DAT_0096e430 = 0x20;
      _DAT_0096e434 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e438,"double");
      _DAT_0096e444 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e448,"AbsoluteInletAngle_degrees");
      _DAT_0096e454 = 4;
      _DAT_0096e458 = 0x28;
      _DAT_0096e45c = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e460,"double");
      _DAT_0096e46c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e470,"StageCount");
      _DAT_0096e47c = 2;
      _DAT_0096e480 = 0x30;
      _DAT_0096e484 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e488,"int");
      _DAT_0096e494 = 0;
      atexit( private__static_int_const___cdecl_TurbineSubModule__ReflectionInfoStruct_class_TurbineSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_09903889__thread_safe_static_guard_0__);
    }
  }
  return 6;
}





//==== 005f02e0 StaticGetMemberCount_005f02e0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: static int const __cdecl TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberCount(void) */

int __cdecl
TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberCount(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_802079a3__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_802079a3__thread_safe_static_guard_0__);
    if ( cde_l2_802079a3__thread_safe_static_guard_0__ == -1) {
      util__Str_char___Str_char
                ((Str_L_char_G_ *)
                 & cde_l2_a6d17eb3_StaticMembers,"DummyValue_DO_NOT_USE");
      _DAT_0096e5a4 = 0;
      _DAT_0096e5a8 = 0;
      _DAT_0096e5ac = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e5b0,"Unused");
      _DAT_0096e5bc = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e5c0,"Composition");
      _DAT_0096e5cc = 8;
      _DAT_0096e5d0 = 0x10;
      _DAT_0096e5d4 = 4;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e5d8,"Material");
      _DAT_0096e5e4 = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e5e8,"PumpRadius_m");
      _DAT_0096e5f4 = 4;
      _DAT_0096e5f8 = 0x18;
      _DAT_0096e5fc = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e600,"double");
      _DAT_0096e60c = 0;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e610,"RotationalSpeed_RPM");
      _DAT_0096e61c = 4;
      _DAT_0096e620 = 0x20;
      _DAT_0096e624 = 8;
      util__Str_char___Str_char((Str_L_char_G_ *)&DAT_0096e628,"double");
      _DAT_0096e634 = 0;
      atexit( private__static_int_const___cdecl_TurbopumpSubModule__ReflectionInfoStruct_class_TurbopumpSubModule___StaticGetMemberCount_void______l2___dynamic_atexit_destructor_for__StaticMembers);
      _Init_thread_footer(& cde_l2_802079a3__thread_safe_static_guard_0__);
    }
  }
  return 4;
}





//==== 005f0450 StaticGetReflectionInfo_005f0450 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct TurbineSubModule__ReflectionInfoStruct_L_classTurbineSubModule_G_ * __cdecl
   TurbineSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_TurbineSubModule_G_ * __cdecl
TurbineSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_1bd0b0a2__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_1bd0b0a2__thread_safe_static_guard_0__);
    if ( cde_l2_1bd0b0a2__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_8c3b52fe_ReflectionInfo) = &vftable_235;
      _Init_thread_footer(& cde_l2_1bd0b0a2__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_8c3b52fe_ReflectionInfo;
}





//==== 005f04b0 StaticGetReflectionInfo_005f04b0 ====


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static struct TurbopumpSubModule__ReflectionInfoStruct_L_classTurbopumpSubModule_G_ *
   __cdecl TurbopumpSubModule__StaticGetReflectionInfo(void) */

ReflectionInfoStruct_L_class_TurbopumpSubModule_G_ * __cdecl
TurbopumpSubModule__StaticGetReflectionInfo(void)

{
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) <
       cde_l2_befb6bd9__thread_safe_static_guard_0__) {
    _Init_thread_header(& cde_l2_befb6bd9__thread_safe_static_guard_0__);
    if ( cde_l2_befb6bd9__thread_safe_static_guard_0__ == -1) {
      (*(void **)&cde_l2_4d9772e1_ReflectionInfo) = &vftable_233;
      _Init_thread_footer(& cde_l2_befb6bd9__thread_safe_static_guard_0__);
    }
  }
  return & cde_l2_4d9772e1_ReflectionInfo;
}




